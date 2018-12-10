#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        ShuffleConvs_0_Downs_10_address0 =  (sc_lv<10>) (tmp_477_cast_reg_9007.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_10_address0 = grp_DownsampleUnit0_fu_3317_conv3r_weight_address0.read();
    } else {
        ShuffleConvs_0_Downs_10_address0 = "XXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        ShuffleConvs_0_Downs_10_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_10_ce0 = grp_DownsampleUnit0_fu_3317_conv3r_weight_ce0.read();
    } else {
        ShuffleConvs_0_Downs_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        ShuffleConvs_0_Downs_10_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Downs_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        ShuffleConvs_0_Downs_1_address0 =  (sc_lv<5>) (tmp_189_reg_10201.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_1_address0 = grp_DownsampleUnit0_fu_3317_conv1l_bias_address0.read();
    } else {
        ShuffleConvs_0_Downs_1_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        ShuffleConvs_0_Downs_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_1_ce0 = grp_DownsampleUnit0_fu_3317_conv1l_bias_ce0.read();
    } else {
        ShuffleConvs_0_Downs_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        ShuffleConvs_0_Downs_1_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Downs_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        ShuffleConvs_0_Downs_3_address0 =  (sc_lv<5>) (tmp_189_reg_10201.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_3_address0 = grp_DownsampleUnit0_fu_3317_conv1r_bias_address0.read();
    } else {
        ShuffleConvs_0_Downs_3_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        ShuffleConvs_0_Downs_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_3_ce0 = grp_DownsampleUnit0_fu_3317_conv1r_bias_ce0.read();
    } else {
        ShuffleConvs_0_Downs_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        ShuffleConvs_0_Downs_3_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Downs_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        ShuffleConvs_0_Downs_4_address0 =  (sc_lv<5>) (tmp_189_reg_10201.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_4_address0 = grp_DownsampleUnit0_fu_3317_conv2l_bias_address0.read();
    } else {
        ShuffleConvs_0_Downs_4_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        ShuffleConvs_0_Downs_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_4_ce0 = grp_DownsampleUnit0_fu_3317_conv2l_bias_ce0.read();
    } else {
        ShuffleConvs_0_Downs_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        ShuffleConvs_0_Downs_4_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Downs_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        ShuffleConvs_0_Downs_5_address0 =  (sc_lv<5>) (tmp_189_reg_10201.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_5_address0 = grp_DownsampleUnit0_fu_3317_conv2r_bias_address0.read();
    } else {
        ShuffleConvs_0_Downs_5_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        ShuffleConvs_0_Downs_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_5_ce0 = grp_DownsampleUnit0_fu_3317_conv2r_bias_ce0.read();
    } else {
        ShuffleConvs_0_Downs_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        ShuffleConvs_0_Downs_5_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Downs_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        ShuffleConvs_0_Downs_6_address0 =  (sc_lv<8>) (tmp_597_cast_reg_9761.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_6_address0 = grp_DownsampleUnit0_fu_3317_conv1l_weight_address0.read();
    } else {
        ShuffleConvs_0_Downs_6_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        ShuffleConvs_0_Downs_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_6_ce0 = grp_DownsampleUnit0_fu_3317_conv1l_weight_ce0.read();
    } else {
        ShuffleConvs_0_Downs_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        ShuffleConvs_0_Downs_6_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Downs_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        ShuffleConvs_0_Downs_7_address0 =  (sc_lv<10>) (tmp_477_cast_reg_9007.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_7_address0 = grp_DownsampleUnit0_fu_3317_conv1r_weight_address0.read();
    } else {
        ShuffleConvs_0_Downs_7_address0 = "XXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        ShuffleConvs_0_Downs_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_7_ce0 = grp_DownsampleUnit0_fu_3317_conv1r_weight_ce0.read();
    } else {
        ShuffleConvs_0_Downs_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        ShuffleConvs_0_Downs_7_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Downs_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        ShuffleConvs_0_Downs_8_address0 =  (sc_lv<10>) (tmp_477_cast_reg_9007.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_8_address0 = grp_DownsampleUnit0_fu_3317_conv2l_weight_address0.read();
    } else {
        ShuffleConvs_0_Downs_8_address0 = "XXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        ShuffleConvs_0_Downs_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_8_ce0 = grp_DownsampleUnit0_fu_3317_conv2l_weight_ce0.read();
    } else {
        ShuffleConvs_0_Downs_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        ShuffleConvs_0_Downs_8_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Downs_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        ShuffleConvs_0_Downs_9_address0 =  (sc_lv<8>) (tmp_597_cast_reg_9761.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_9_address0 = grp_DownsampleUnit0_fu_3317_conv2r_weight_address0.read();
    } else {
        ShuffleConvs_0_Downs_9_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        ShuffleConvs_0_Downs_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_9_ce0 = grp_DownsampleUnit0_fu_3317_conv2r_weight_ce0.read();
    } else {
        ShuffleConvs_0_Downs_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        ShuffleConvs_0_Downs_9_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Downs_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        ShuffleConvs_0_Downs_address0 =  (sc_lv<5>) (tmp_189_reg_10201.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_address0 = grp_DownsampleUnit0_fu_3317_conv3r_bias_address0.read();
    } else {
        ShuffleConvs_0_Downs_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        ShuffleConvs_0_Downs_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ShuffleConvs_0_Downs_ce0 = grp_DownsampleUnit0_fu_3317_conv3r_bias_ce0.read();
    } else {
        ShuffleConvs_0_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        ShuffleConvs_0_Downs_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Downs_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        ShuffleConvs_0_Shuff_11_address0 =  (sc_lv<10>) (tmp_477_cast_reg_9007.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        ShuffleConvs_0_Shuff_11_address0 = grp_ShuffleUnit0_fu_3401_conv3_weight_address0.read();
    } else {
        ShuffleConvs_0_Shuff_11_address0 = "XXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        ShuffleConvs_0_Shuff_11_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        ShuffleConvs_0_Shuff_11_ce0 = grp_ShuffleUnit0_fu_3401_conv3_weight_ce0.read();
    } else {
        ShuffleConvs_0_Shuff_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        ShuffleConvs_0_Shuff_11_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Shuff_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        ShuffleConvs_0_Shuff_13_address0 =  (sc_lv<10>) (tmp_477_cast_reg_9007.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        ShuffleConvs_0_Shuff_13_address0 = grp_ShuffleUnit0_fu_3401_conv1_weight_address0.read();
    } else {
        ShuffleConvs_0_Shuff_13_address0 = "XXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        ShuffleConvs_0_Shuff_13_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        ShuffleConvs_0_Shuff_13_ce0 = grp_ShuffleUnit0_fu_3401_conv1_weight_ce0.read();
    } else {
        ShuffleConvs_0_Shuff_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        ShuffleConvs_0_Shuff_13_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Shuff_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        ShuffleConvs_0_Shuff_15_address0 =  (sc_lv<8>) (tmp_597_cast_reg_9761.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        ShuffleConvs_0_Shuff_15_address0 = grp_ShuffleUnit0_fu_3401_conv2_weight_address0.read();
    } else {
        ShuffleConvs_0_Shuff_15_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        ShuffleConvs_0_Shuff_15_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        ShuffleConvs_0_Shuff_15_ce0 = grp_ShuffleUnit0_fu_3401_conv2_weight_ce0.read();
    } else {
        ShuffleConvs_0_Shuff_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        ShuffleConvs_0_Shuff_15_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Shuff_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        ShuffleConvs_0_Shuff_17_address0 =  (sc_lv<5>) (tmp_189_reg_10201.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        ShuffleConvs_0_Shuff_17_address0 = grp_ShuffleUnit0_fu_3401_conv2_bias_address0.read();
    } else {
        ShuffleConvs_0_Shuff_17_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        ShuffleConvs_0_Shuff_17_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        ShuffleConvs_0_Shuff_17_ce0 = grp_ShuffleUnit0_fu_3401_conv2_bias_ce0.read();
    } else {
        ShuffleConvs_0_Shuff_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_17_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        ShuffleConvs_0_Shuff_17_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Shuff_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        ShuffleConvs_0_Shuff_18_address0 =  (sc_lv<10>) (tmp_477_cast_reg_9007.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        ShuffleConvs_0_Shuff_18_address0 = grp_ShuffleUnit0_fu_3401_conv3_weight_address0.read();
    } else {
        ShuffleConvs_0_Shuff_18_address0 = "XXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        ShuffleConvs_0_Shuff_18_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        ShuffleConvs_0_Shuff_18_ce0 = grp_ShuffleUnit0_fu_3401_conv3_weight_ce0.read();
    } else {
        ShuffleConvs_0_Shuff_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        ShuffleConvs_0_Shuff_18_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Shuff_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        ShuffleConvs_0_Shuff_19_address0 =  (sc_lv<5>) (tmp_189_reg_10201.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        ShuffleConvs_0_Shuff_19_address0 = grp_ShuffleUnit0_fu_3401_conv1_bias_address0.read();
    } else {
        ShuffleConvs_0_Shuff_19_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        ShuffleConvs_0_Shuff_19_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        ShuffleConvs_0_Shuff_19_ce0 = grp_ShuffleUnit0_fu_3401_conv1_bias_ce0.read();
    } else {
        ShuffleConvs_0_Shuff_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_19_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        ShuffleConvs_0_Shuff_19_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Shuff_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        ShuffleConvs_0_Shuff_1_address0 =  (sc_lv<5>) (tmp_189_reg_10201.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        ShuffleConvs_0_Shuff_1_address0 = grp_ShuffleUnit0_fu_3401_conv2_bias_address0.read();
    } else {
        ShuffleConvs_0_Shuff_1_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        ShuffleConvs_0_Shuff_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        ShuffleConvs_0_Shuff_1_ce0 = grp_ShuffleUnit0_fu_3401_conv2_bias_ce0.read();
    } else {
        ShuffleConvs_0_Shuff_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        ShuffleConvs_0_Shuff_1_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Shuff_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        ShuffleConvs_0_Shuff_20_address0 =  (sc_lv<5>) (tmp_189_reg_10201.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        ShuffleConvs_0_Shuff_20_address0 = grp_ShuffleUnit0_fu_3401_conv2_bias_address0.read();
    } else {
        ShuffleConvs_0_Shuff_20_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        ShuffleConvs_0_Shuff_20_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        ShuffleConvs_0_Shuff_20_ce0 = grp_ShuffleUnit0_fu_3401_conv2_bias_ce0.read();
    } else {
        ShuffleConvs_0_Shuff_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_20_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        ShuffleConvs_0_Shuff_20_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Shuff_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        ShuffleConvs_0_Shuff_21_address0 =  (sc_lv<5>) (tmp_189_reg_10201.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        ShuffleConvs_0_Shuff_21_address0 = grp_ShuffleUnit0_fu_3401_conv3_bias_address0.read();
    } else {
        ShuffleConvs_0_Shuff_21_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        ShuffleConvs_0_Shuff_21_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        ShuffleConvs_0_Shuff_21_ce0 = grp_ShuffleUnit0_fu_3401_conv3_bias_ce0.read();
    } else {
        ShuffleConvs_0_Shuff_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_21_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        ShuffleConvs_0_Shuff_21_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Shuff_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        ShuffleConvs_0_Shuff_22_address0 =  (sc_lv<5>) (tmp_189_reg_10201.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        ShuffleConvs_0_Shuff_22_address0 = grp_ShuffleUnit0_fu_3401_conv1_bias_address0.read();
    } else {
        ShuffleConvs_0_Shuff_22_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        ShuffleConvs_0_Shuff_22_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        ShuffleConvs_0_Shuff_22_ce0 = grp_ShuffleUnit0_fu_3401_conv1_bias_ce0.read();
    } else {
        ShuffleConvs_0_Shuff_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_22_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        ShuffleConvs_0_Shuff_22_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Shuff_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        ShuffleConvs_0_Shuff_3_address0 =  (sc_lv<5>) (tmp_189_reg_10201.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        ShuffleConvs_0_Shuff_3_address0 = grp_ShuffleUnit0_fu_3401_conv3_bias_address0.read();
    } else {
        ShuffleConvs_0_Shuff_3_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        ShuffleConvs_0_Shuff_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        ShuffleConvs_0_Shuff_3_ce0 = grp_ShuffleUnit0_fu_3401_conv3_bias_ce0.read();
    } else {
        ShuffleConvs_0_Shuff_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        ShuffleConvs_0_Shuff_3_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Shuff_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        ShuffleConvs_0_Shuff_4_address0 =  (sc_lv<5>) (tmp_189_reg_10201.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        ShuffleConvs_0_Shuff_4_address0 = grp_ShuffleUnit0_fu_3401_conv1_bias_address0.read();
    } else {
        ShuffleConvs_0_Shuff_4_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        ShuffleConvs_0_Shuff_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        ShuffleConvs_0_Shuff_4_ce0 = grp_ShuffleUnit0_fu_3401_conv1_bias_ce0.read();
    } else {
        ShuffleConvs_0_Shuff_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        ShuffleConvs_0_Shuff_4_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Shuff_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        ShuffleConvs_0_Shuff_5_address0 =  (sc_lv<10>) (tmp_477_cast_reg_9007.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        ShuffleConvs_0_Shuff_5_address0 = grp_ShuffleUnit0_fu_3401_conv1_weight_address0.read();
    } else {
        ShuffleConvs_0_Shuff_5_address0 = "XXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        ShuffleConvs_0_Shuff_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        ShuffleConvs_0_Shuff_5_ce0 = grp_ShuffleUnit0_fu_3401_conv1_weight_ce0.read();
    } else {
        ShuffleConvs_0_Shuff_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        ShuffleConvs_0_Shuff_5_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Shuff_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_0_Shuff_6_address0 =  (sc_lv<8>) (tmp_597_cast_reg_9761.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        ShuffleConvs_0_Shuff_6_address0 = grp_ShuffleUnit0_fu_3401_conv2_weight_address0.read();
    } else {
        ShuffleConvs_0_Shuff_6_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_0_Shuff_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        ShuffleConvs_0_Shuff_6_ce0 = grp_ShuffleUnit0_fu_3401_conv2_weight_ce0.read();
    } else {
        ShuffleConvs_0_Shuff_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_0_Shuff_6_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Shuff_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        ShuffleConvs_0_Shuff_7_address0 =  (sc_lv<10>) (tmp_477_cast_reg_9007.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        ShuffleConvs_0_Shuff_7_address0 = grp_ShuffleUnit0_fu_3401_conv3_weight_address0.read();
    } else {
        ShuffleConvs_0_Shuff_7_address0 = "XXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        ShuffleConvs_0_Shuff_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        ShuffleConvs_0_Shuff_7_ce0 = grp_ShuffleUnit0_fu_3401_conv3_weight_ce0.read();
    } else {
        ShuffleConvs_0_Shuff_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        ShuffleConvs_0_Shuff_7_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Shuff_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        ShuffleConvs_0_Shuff_8_address0 =  (sc_lv<10>) (tmp_477_cast_reg_9007.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        ShuffleConvs_0_Shuff_8_address0 = grp_ShuffleUnit0_fu_3401_conv1_weight_address0.read();
    } else {
        ShuffleConvs_0_Shuff_8_address0 = "XXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        ShuffleConvs_0_Shuff_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        ShuffleConvs_0_Shuff_8_ce0 = grp_ShuffleUnit0_fu_3401_conv1_weight_ce0.read();
    } else {
        ShuffleConvs_0_Shuff_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        ShuffleConvs_0_Shuff_8_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Shuff_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_0_Shuff_9_address0 =  (sc_lv<8>) (tmp_597_cast_reg_9761.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        ShuffleConvs_0_Shuff_9_address0 = grp_ShuffleUnit0_fu_3401_conv2_weight_address0.read();
    } else {
        ShuffleConvs_0_Shuff_9_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_0_Shuff_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        ShuffleConvs_0_Shuff_9_ce0 = grp_ShuffleUnit0_fu_3401_conv2_weight_ce0.read();
    } else {
        ShuffleConvs_0_Shuff_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_0_Shuff_9_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Shuff_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        ShuffleConvs_0_Shuff_address0 =  (sc_lv<5>) (tmp_189_reg_10201.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        ShuffleConvs_0_Shuff_address0 = grp_ShuffleUnit0_fu_3401_conv3_bias_address0.read();
    } else {
        ShuffleConvs_0_Shuff_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        ShuffleConvs_0_Shuff_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        ShuffleConvs_0_Shuff_ce0 = grp_ShuffleUnit0_fu_3401_conv3_bias_ce0.read();
    } else {
        ShuffleConvs_0_Shuff_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Shuff_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        ShuffleConvs_0_Shuff_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_0_Shuff_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        ShuffleConvs_1_Downs_10_address0 =  (sc_lv<12>) (tmp_514_cast_fu_4530_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_10_address0 = grp_DownsampleUnit1_fu_3345_conv3r_weight_address0.read();
    } else {
        ShuffleConvs_1_Downs_10_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        ShuffleConvs_1_Downs_10_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_10_ce0 = grp_DownsampleUnit1_fu_3345_conv3r_weight_ce0.read();
    } else {
        ShuffleConvs_1_Downs_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        ShuffleConvs_1_Downs_10_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_1_Downs_1_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_1_address0 = grp_DownsampleUnit1_fu_3345_conv1l_bias_address0.read();
    } else {
        ShuffleConvs_1_Downs_1_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_1_Downs_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_1_ce0 = grp_DownsampleUnit1_fu_3345_conv1l_bias_ce0.read();
    } else {
        ShuffleConvs_1_Downs_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_1_Downs_1_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        ShuffleConvs_1_Downs_3_address0 =  (sc_lv<6>) (tmp_243_fu_8004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_3_address0 = grp_DownsampleUnit1_fu_3345_conv1r_bias_address0.read();
    } else {
        ShuffleConvs_1_Downs_3_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        ShuffleConvs_1_Downs_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_3_ce0 = grp_DownsampleUnit1_fu_3345_conv1r_bias_ce0.read();
    } else {
        ShuffleConvs_1_Downs_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        ShuffleConvs_1_Downs_3_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_1_Downs_4_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_4_address0 = grp_DownsampleUnit1_fu_3345_conv2l_bias_address0.read();
    } else {
        ShuffleConvs_1_Downs_4_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_1_Downs_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_4_ce0 = grp_DownsampleUnit1_fu_3345_conv2l_bias_ce0.read();
    } else {
        ShuffleConvs_1_Downs_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_1_Downs_4_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        ShuffleConvs_1_Downs_5_address0 =  (sc_lv<6>) (tmp_243_fu_8004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_5_address0 = grp_DownsampleUnit1_fu_3345_conv2r_bias_address0.read();
    } else {
        ShuffleConvs_1_Downs_5_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        ShuffleConvs_1_Downs_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_5_ce0 = grp_DownsampleUnit1_fu_3345_conv2r_bias_ce0.read();
    } else {
        ShuffleConvs_1_Downs_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        ShuffleConvs_1_Downs_5_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        ShuffleConvs_1_Downs_6_address0 =  (sc_lv<9>) (tmp_665_cast_fu_6877_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_6_address0 = grp_DownsampleUnit1_fu_3345_conv1l_weight_address0.read();
    } else {
        ShuffleConvs_1_Downs_6_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        ShuffleConvs_1_Downs_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_6_ce0 = grp_DownsampleUnit1_fu_3345_conv1l_weight_ce0.read();
    } else {
        ShuffleConvs_1_Downs_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        ShuffleConvs_1_Downs_6_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        ShuffleConvs_1_Downs_7_address0 =  (sc_lv<12>) (tmp_514_cast_fu_4530_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_7_address0 = grp_DownsampleUnit1_fu_3345_conv1r_weight_address0.read();
    } else {
        ShuffleConvs_1_Downs_7_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        ShuffleConvs_1_Downs_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_7_ce0 = grp_DownsampleUnit1_fu_3345_conv1r_weight_ce0.read();
    } else {
        ShuffleConvs_1_Downs_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        ShuffleConvs_1_Downs_7_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        ShuffleConvs_1_Downs_8_address0 =  (sc_lv<12>) (tmp_514_cast_reg_9228.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_8_address0 = grp_DownsampleUnit1_fu_3345_conv2l_weight_address0.read();
    } else {
        ShuffleConvs_1_Downs_8_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        ShuffleConvs_1_Downs_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_8_ce0 = grp_DownsampleUnit1_fu_3345_conv2l_weight_ce0.read();
    } else {
        ShuffleConvs_1_Downs_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        ShuffleConvs_1_Downs_8_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        ShuffleConvs_1_Downs_9_address0 =  (sc_lv<9>) (tmp_665_cast_fu_6877_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_9_address0 = grp_DownsampleUnit1_fu_3345_conv2r_weight_address0.read();
    } else {
        ShuffleConvs_1_Downs_9_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        ShuffleConvs_1_Downs_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_9_ce0 = grp_DownsampleUnit1_fu_3345_conv2r_weight_ce0.read();
    } else {
        ShuffleConvs_1_Downs_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        ShuffleConvs_1_Downs_9_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        ShuffleConvs_1_Downs_address0 =  (sc_lv<6>) (tmp_243_fu_8004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_address0 = grp_DownsampleUnit1_fu_3345_conv3r_bias_address0.read();
    } else {
        ShuffleConvs_1_Downs_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        ShuffleConvs_1_Downs_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        ShuffleConvs_1_Downs_ce0 = grp_DownsampleUnit1_fu_3345_conv3r_bias_ce0.read();
    } else {
        ShuffleConvs_1_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        ShuffleConvs_1_Downs_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_1_Shuff_11_address0 =  (sc_lv<12>) (tmp_514_cast_reg_9228.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        ShuffleConvs_1_Shuff_11_address0 = grp_ShuffleUnit1_fu_3437_conv3_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_11_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_1_Shuff_11_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        ShuffleConvs_1_Shuff_11_ce0 = grp_ShuffleUnit1_fu_3437_conv3_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_1_Shuff_11_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_1_Shuff_13_address0 =  (sc_lv<12>) (tmp_514_cast_reg_9228.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        ShuffleConvs_1_Shuff_13_address0 = grp_ShuffleUnit1_fu_3437_conv1_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_13_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_1_Shuff_13_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        ShuffleConvs_1_Shuff_13_ce0 = grp_ShuffleUnit1_fu_3437_conv1_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_1_Shuff_13_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        ShuffleConvs_1_Shuff_15_address0 =  (sc_lv<9>) (tmp_665_cast_reg_9911.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        ShuffleConvs_1_Shuff_15_address0 = grp_ShuffleUnit1_fu_3437_conv2_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_15_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        ShuffleConvs_1_Shuff_15_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        ShuffleConvs_1_Shuff_15_ce0 = grp_ShuffleUnit1_fu_3437_conv2_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        ShuffleConvs_1_Shuff_15_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        ShuffleConvs_1_Shuff_17_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        ShuffleConvs_1_Shuff_17_address0 = grp_ShuffleUnit1_fu_3437_conv2_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_17_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        ShuffleConvs_1_Shuff_17_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        ShuffleConvs_1_Shuff_17_ce0 = grp_ShuffleUnit1_fu_3437_conv2_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_17_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        ShuffleConvs_1_Shuff_17_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        ShuffleConvs_1_Shuff_19_address0 =  (sc_lv<12>) (tmp_514_cast_reg_9228.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        ShuffleConvs_1_Shuff_19_address0 = grp_ShuffleUnit1_fu_3437_conv3_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_19_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        ShuffleConvs_1_Shuff_19_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        ShuffleConvs_1_Shuff_19_ce0 = grp_ShuffleUnit1_fu_3437_conv3_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_19_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        ShuffleConvs_1_Shuff_19_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        ShuffleConvs_1_Shuff_1_address0 =  (sc_lv<12>) (tmp_514_cast_reg_9228.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        ShuffleConvs_1_Shuff_1_address0 = grp_ShuffleUnit1_fu_3437_conv1_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_1_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        ShuffleConvs_1_Shuff_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        ShuffleConvs_1_Shuff_1_ce0 = grp_ShuffleUnit1_fu_3437_conv1_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        ShuffleConvs_1_Shuff_1_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        ShuffleConvs_1_Shuff_21_address0 =  (sc_lv<12>) (tmp_514_cast_reg_9228.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        ShuffleConvs_1_Shuff_21_address0 = grp_ShuffleUnit1_fu_3437_conv1_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_21_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        ShuffleConvs_1_Shuff_21_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        ShuffleConvs_1_Shuff_21_ce0 = grp_ShuffleUnit1_fu_3437_conv1_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_21_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        ShuffleConvs_1_Shuff_21_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        ShuffleConvs_1_Shuff_23_address0 =  (sc_lv<9>) (tmp_665_cast_reg_9911.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        ShuffleConvs_1_Shuff_23_address0 = grp_ShuffleUnit1_fu_3437_conv2_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_23_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        ShuffleConvs_1_Shuff_23_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        ShuffleConvs_1_Shuff_23_ce0 = grp_ShuffleUnit1_fu_3437_conv2_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_23_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        ShuffleConvs_1_Shuff_23_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        ShuffleConvs_1_Shuff_25_address0 =  (sc_lv<12>) (tmp_514_cast_reg_9228.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        ShuffleConvs_1_Shuff_25_address0 = grp_ShuffleUnit1_fu_3437_conv3_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_25_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        ShuffleConvs_1_Shuff_25_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        ShuffleConvs_1_Shuff_25_ce0 = grp_ShuffleUnit1_fu_3437_conv3_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_25_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_25_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        ShuffleConvs_1_Shuff_25_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_25_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        ShuffleConvs_1_Shuff_27_address0 =  (sc_lv<12>) (tmp_514_cast_reg_9228.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        ShuffleConvs_1_Shuff_27_address0 = grp_ShuffleUnit1_fu_3437_conv1_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_27_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        ShuffleConvs_1_Shuff_27_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        ShuffleConvs_1_Shuff_27_ce0 = grp_ShuffleUnit1_fu_3437_conv1_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_27_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_27_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        ShuffleConvs_1_Shuff_27_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_27_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        ShuffleConvs_1_Shuff_29_address0 =  (sc_lv<9>) (tmp_665_cast_reg_9911.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        ShuffleConvs_1_Shuff_29_address0 = grp_ShuffleUnit1_fu_3437_conv2_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_29_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        ShuffleConvs_1_Shuff_29_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        ShuffleConvs_1_Shuff_29_ce0 = grp_ShuffleUnit1_fu_3437_conv2_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_29_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_29_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        ShuffleConvs_1_Shuff_29_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_29_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        ShuffleConvs_1_Shuff_31_address0 =  (sc_lv<12>) (tmp_514_cast_reg_9228.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        ShuffleConvs_1_Shuff_31_address0 = grp_ShuffleUnit1_fu_3437_conv3_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_31_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        ShuffleConvs_1_Shuff_31_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        ShuffleConvs_1_Shuff_31_ce0 = grp_ShuffleUnit1_fu_3437_conv3_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_31_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_31_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        ShuffleConvs_1_Shuff_31_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_31_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_33_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        ShuffleConvs_1_Shuff_33_address0 =  (sc_lv<12>) (tmp_514_cast_reg_9228.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        ShuffleConvs_1_Shuff_33_address0 = grp_ShuffleUnit1_fu_3437_conv1_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_33_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        ShuffleConvs_1_Shuff_33_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        ShuffleConvs_1_Shuff_33_ce0 = grp_ShuffleUnit1_fu_3437_conv1_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_33_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_33_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        ShuffleConvs_1_Shuff_33_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_33_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_35_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        ShuffleConvs_1_Shuff_35_address0 =  (sc_lv<9>) (tmp_665_cast_reg_9911.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        ShuffleConvs_1_Shuff_35_address0 = grp_ShuffleUnit1_fu_3437_conv2_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_35_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        ShuffleConvs_1_Shuff_35_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        ShuffleConvs_1_Shuff_35_ce0 = grp_ShuffleUnit1_fu_3437_conv2_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_35_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_35_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        ShuffleConvs_1_Shuff_35_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_35_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_37_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        ShuffleConvs_1_Shuff_37_address0 =  (sc_lv<12>) (tmp_514_cast_reg_9228.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        ShuffleConvs_1_Shuff_37_address0 = grp_ShuffleUnit1_fu_3437_conv3_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_37_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        ShuffleConvs_1_Shuff_37_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        ShuffleConvs_1_Shuff_37_ce0 = grp_ShuffleUnit1_fu_3437_conv3_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_37_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_37_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        ShuffleConvs_1_Shuff_37_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_37_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_39_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        ShuffleConvs_1_Shuff_39_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        ShuffleConvs_1_Shuff_39_address0 = grp_ShuffleUnit1_fu_3437_conv3_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_39_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        ShuffleConvs_1_Shuff_39_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        ShuffleConvs_1_Shuff_39_ce0 = grp_ShuffleUnit1_fu_3437_conv3_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_39_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_39_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        ShuffleConvs_1_Shuff_39_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_39_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ShuffleConvs_1_Shuff_3_address0 =  (sc_lv<9>) (tmp_665_cast_reg_9911.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        ShuffleConvs_1_Shuff_3_address0 = grp_ShuffleUnit1_fu_3437_conv2_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_3_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ShuffleConvs_1_Shuff_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        ShuffleConvs_1_Shuff_3_ce0 = grp_ShuffleUnit1_fu_3437_conv2_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ShuffleConvs_1_Shuff_3_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_41_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        ShuffleConvs_1_Shuff_41_address0 =  (sc_lv<12>) (tmp_514_cast_reg_9228.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        ShuffleConvs_1_Shuff_41_address0 = grp_ShuffleUnit1_fu_3437_conv1_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_41_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        ShuffleConvs_1_Shuff_41_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        ShuffleConvs_1_Shuff_41_ce0 = grp_ShuffleUnit1_fu_3437_conv1_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_41_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_41_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        ShuffleConvs_1_Shuff_41_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_41_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_43_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_1_Shuff_43_address0 =  (sc_lv<9>) (tmp_665_cast_reg_9911.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        ShuffleConvs_1_Shuff_43_address0 = grp_ShuffleUnit1_fu_3437_conv2_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_43_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_1_Shuff_43_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        ShuffleConvs_1_Shuff_43_ce0 = grp_ShuffleUnit1_fu_3437_conv2_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_43_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_43_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_1_Shuff_43_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_43_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_45_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        ShuffleConvs_1_Shuff_45_address0 =  (sc_lv<12>) (tmp_514_cast_reg_9228.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        ShuffleConvs_1_Shuff_45_address0 = grp_ShuffleUnit1_fu_3437_conv3_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_45_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        ShuffleConvs_1_Shuff_45_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        ShuffleConvs_1_Shuff_45_ce0 = grp_ShuffleUnit1_fu_3437_conv3_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_45_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_45_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        ShuffleConvs_1_Shuff_45_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_45_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_47_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        ShuffleConvs_1_Shuff_47_address0 =  (sc_lv<12>) (tmp_514_cast_reg_9228.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        ShuffleConvs_1_Shuff_47_address0 = grp_ShuffleUnit1_fu_3437_conv1_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_47_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        ShuffleConvs_1_Shuff_47_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        ShuffleConvs_1_Shuff_47_ce0 = grp_ShuffleUnit1_fu_3437_conv1_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_47_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_47_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        ShuffleConvs_1_Shuff_47_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_47_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_49_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_1_Shuff_49_address0 =  (sc_lv<9>) (tmp_665_cast_reg_9911.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        ShuffleConvs_1_Shuff_49_address0 = grp_ShuffleUnit1_fu_3437_conv2_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_49_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_49_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_1_Shuff_49_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        ShuffleConvs_1_Shuff_49_ce0 = grp_ShuffleUnit1_fu_3437_conv2_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_49_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_49_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_1_Shuff_49_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_49_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_50_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        ShuffleConvs_1_Shuff_50_address0 =  (sc_lv<12>) (tmp_514_cast_reg_9228.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        ShuffleConvs_1_Shuff_50_address0 = grp_ShuffleUnit1_fu_3437_conv3_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_50_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_50_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        ShuffleConvs_1_Shuff_50_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        ShuffleConvs_1_Shuff_50_ce0 = grp_ShuffleUnit1_fu_3437_conv3_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_50_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_50_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        ShuffleConvs_1_Shuff_50_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_50_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_51_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        ShuffleConvs_1_Shuff_51_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        ShuffleConvs_1_Shuff_51_address0 = grp_ShuffleUnit1_fu_3437_conv1_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_51_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_51_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        ShuffleConvs_1_Shuff_51_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        ShuffleConvs_1_Shuff_51_ce0 = grp_ShuffleUnit1_fu_3437_conv1_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_51_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_51_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        ShuffleConvs_1_Shuff_51_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_51_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_52_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        ShuffleConvs_1_Shuff_52_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        ShuffleConvs_1_Shuff_52_address0 = grp_ShuffleUnit1_fu_3437_conv2_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_52_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_52_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        ShuffleConvs_1_Shuff_52_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        ShuffleConvs_1_Shuff_52_ce0 = grp_ShuffleUnit1_fu_3437_conv2_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_52_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_52_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        ShuffleConvs_1_Shuff_52_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_52_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_53_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        ShuffleConvs_1_Shuff_53_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        ShuffleConvs_1_Shuff_53_address0 = grp_ShuffleUnit1_fu_3437_conv3_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_53_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_53_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        ShuffleConvs_1_Shuff_53_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        ShuffleConvs_1_Shuff_53_ce0 = grp_ShuffleUnit1_fu_3437_conv3_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_53_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_53_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        ShuffleConvs_1_Shuff_53_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_53_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_54_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        ShuffleConvs_1_Shuff_54_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        ShuffleConvs_1_Shuff_54_address0 = grp_ShuffleUnit1_fu_3437_conv1_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_54_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_54_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        ShuffleConvs_1_Shuff_54_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        ShuffleConvs_1_Shuff_54_ce0 = grp_ShuffleUnit1_fu_3437_conv1_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_54_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_54_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        ShuffleConvs_1_Shuff_54_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_54_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_55_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        ShuffleConvs_1_Shuff_55_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        ShuffleConvs_1_Shuff_55_address0 = grp_ShuffleUnit1_fu_3437_conv1_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_55_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_55_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        ShuffleConvs_1_Shuff_55_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        ShuffleConvs_1_Shuff_55_ce0 = grp_ShuffleUnit1_fu_3437_conv1_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_55_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_55_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        ShuffleConvs_1_Shuff_55_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_55_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_56_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        ShuffleConvs_1_Shuff_56_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        ShuffleConvs_1_Shuff_56_address0 = grp_ShuffleUnit1_fu_3437_conv2_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_56_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_56_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        ShuffleConvs_1_Shuff_56_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        ShuffleConvs_1_Shuff_56_ce0 = grp_ShuffleUnit1_fu_3437_conv2_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_56_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_56_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        ShuffleConvs_1_Shuff_56_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_56_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_57_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        ShuffleConvs_1_Shuff_57_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        ShuffleConvs_1_Shuff_57_address0 = grp_ShuffleUnit1_fu_3437_conv3_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_57_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_57_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        ShuffleConvs_1_Shuff_57_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        ShuffleConvs_1_Shuff_57_ce0 = grp_ShuffleUnit1_fu_3437_conv3_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_57_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_57_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        ShuffleConvs_1_Shuff_57_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_57_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_58_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        ShuffleConvs_1_Shuff_58_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        ShuffleConvs_1_Shuff_58_address0 = grp_ShuffleUnit1_fu_3437_conv1_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_58_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_58_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        ShuffleConvs_1_Shuff_58_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        ShuffleConvs_1_Shuff_58_ce0 = grp_ShuffleUnit1_fu_3437_conv1_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_58_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_58_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        ShuffleConvs_1_Shuff_58_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_58_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_59_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        ShuffleConvs_1_Shuff_59_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        ShuffleConvs_1_Shuff_59_address0 = grp_ShuffleUnit1_fu_3437_conv2_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_59_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_59_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        ShuffleConvs_1_Shuff_59_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        ShuffleConvs_1_Shuff_59_ce0 = grp_ShuffleUnit1_fu_3437_conv2_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_59_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_59_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        ShuffleConvs_1_Shuff_59_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_59_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        ShuffleConvs_1_Shuff_5_address0 =  (sc_lv<12>) (tmp_514_cast_reg_9228.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        ShuffleConvs_1_Shuff_5_address0 = grp_ShuffleUnit1_fu_3437_conv3_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_5_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        ShuffleConvs_1_Shuff_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        ShuffleConvs_1_Shuff_5_ce0 = grp_ShuffleUnit1_fu_3437_conv3_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        ShuffleConvs_1_Shuff_5_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_60_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        ShuffleConvs_1_Shuff_60_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        ShuffleConvs_1_Shuff_60_address0 = grp_ShuffleUnit1_fu_3437_conv3_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_60_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_60_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        ShuffleConvs_1_Shuff_60_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        ShuffleConvs_1_Shuff_60_ce0 = grp_ShuffleUnit1_fu_3437_conv3_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_60_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_60_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        ShuffleConvs_1_Shuff_60_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_60_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_61_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        ShuffleConvs_1_Shuff_61_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        ShuffleConvs_1_Shuff_61_address0 = grp_ShuffleUnit1_fu_3437_conv1_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_61_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_61_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        ShuffleConvs_1_Shuff_61_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        ShuffleConvs_1_Shuff_61_ce0 = grp_ShuffleUnit1_fu_3437_conv1_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_61_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_61_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        ShuffleConvs_1_Shuff_61_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_61_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_62_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        ShuffleConvs_1_Shuff_62_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        ShuffleConvs_1_Shuff_62_address0 = grp_ShuffleUnit1_fu_3437_conv2_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_62_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_62_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        ShuffleConvs_1_Shuff_62_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        ShuffleConvs_1_Shuff_62_ce0 = grp_ShuffleUnit1_fu_3437_conv2_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_62_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_62_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        ShuffleConvs_1_Shuff_62_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_62_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_63_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        ShuffleConvs_1_Shuff_63_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        ShuffleConvs_1_Shuff_63_address0 = grp_ShuffleUnit1_fu_3437_conv3_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_63_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_63_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        ShuffleConvs_1_Shuff_63_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        ShuffleConvs_1_Shuff_63_ce0 = grp_ShuffleUnit1_fu_3437_conv3_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_63_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_63_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        ShuffleConvs_1_Shuff_63_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_63_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_64_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        ShuffleConvs_1_Shuff_64_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        ShuffleConvs_1_Shuff_64_address0 = grp_ShuffleUnit1_fu_3437_conv1_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_64_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_64_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        ShuffleConvs_1_Shuff_64_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        ShuffleConvs_1_Shuff_64_ce0 = grp_ShuffleUnit1_fu_3437_conv1_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_64_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_64_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        ShuffleConvs_1_Shuff_64_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_64_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_65_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        ShuffleConvs_1_Shuff_65_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        ShuffleConvs_1_Shuff_65_address0 = grp_ShuffleUnit1_fu_3437_conv2_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_65_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_65_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        ShuffleConvs_1_Shuff_65_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        ShuffleConvs_1_Shuff_65_ce0 = grp_ShuffleUnit1_fu_3437_conv2_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_65_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_65_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        ShuffleConvs_1_Shuff_65_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_65_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_66_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        ShuffleConvs_1_Shuff_66_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        ShuffleConvs_1_Shuff_66_address0 = grp_ShuffleUnit1_fu_3437_conv2_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_66_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_66_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        ShuffleConvs_1_Shuff_66_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        ShuffleConvs_1_Shuff_66_ce0 = grp_ShuffleUnit1_fu_3437_conv2_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_66_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_66_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        ShuffleConvs_1_Shuff_66_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_66_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_67_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        ShuffleConvs_1_Shuff_67_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        ShuffleConvs_1_Shuff_67_address0 = grp_ShuffleUnit1_fu_3437_conv3_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_67_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_67_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        ShuffleConvs_1_Shuff_67_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        ShuffleConvs_1_Shuff_67_ce0 = grp_ShuffleUnit1_fu_3437_conv3_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_67_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_67_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        ShuffleConvs_1_Shuff_67_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_67_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_68_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        ShuffleConvs_1_Shuff_68_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        ShuffleConvs_1_Shuff_68_address0 = grp_ShuffleUnit1_fu_3437_conv1_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_68_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_68_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        ShuffleConvs_1_Shuff_68_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        ShuffleConvs_1_Shuff_68_ce0 = grp_ShuffleUnit1_fu_3437_conv1_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_68_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_68_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        ShuffleConvs_1_Shuff_68_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_68_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_69_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        ShuffleConvs_1_Shuff_69_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        ShuffleConvs_1_Shuff_69_address0 = grp_ShuffleUnit1_fu_3437_conv2_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_69_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_69_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        ShuffleConvs_1_Shuff_69_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        ShuffleConvs_1_Shuff_69_ce0 = grp_ShuffleUnit1_fu_3437_conv2_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_69_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_69_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        ShuffleConvs_1_Shuff_69_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_69_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_70_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        ShuffleConvs_1_Shuff_70_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        ShuffleConvs_1_Shuff_70_address0 = grp_ShuffleUnit1_fu_3437_conv3_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_70_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_70_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        ShuffleConvs_1_Shuff_70_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        ShuffleConvs_1_Shuff_70_ce0 = grp_ShuffleUnit1_fu_3437_conv3_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_70_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_70_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        ShuffleConvs_1_Shuff_70_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_70_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_71_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        ShuffleConvs_1_Shuff_71_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        ShuffleConvs_1_Shuff_71_address0 = grp_ShuffleUnit1_fu_3437_conv1_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_71_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_71_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        ShuffleConvs_1_Shuff_71_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        ShuffleConvs_1_Shuff_71_ce0 = grp_ShuffleUnit1_fu_3437_conv1_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_71_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_71_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        ShuffleConvs_1_Shuff_71_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_71_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        ShuffleConvs_1_Shuff_7_address0 =  (sc_lv<12>) (tmp_514_cast_reg_9228.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        ShuffleConvs_1_Shuff_7_address0 = grp_ShuffleUnit1_fu_3437_conv1_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_7_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        ShuffleConvs_1_Shuff_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        ShuffleConvs_1_Shuff_7_ce0 = grp_ShuffleUnit1_fu_3437_conv1_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        ShuffleConvs_1_Shuff_7_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ShuffleConvs_1_Shuff_9_address0 =  (sc_lv<9>) (tmp_665_cast_reg_9911.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        ShuffleConvs_1_Shuff_9_address0 = grp_ShuffleUnit1_fu_3437_conv2_weight_address0.read();
    } else {
        ShuffleConvs_1_Shuff_9_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ShuffleConvs_1_Shuff_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        ShuffleConvs_1_Shuff_9_ce0 = grp_ShuffleUnit1_fu_3437_conv2_weight_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ShuffleConvs_1_Shuff_9_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        ShuffleConvs_1_Shuff_address0 =  (sc_lv<6>) (tmp_243_reg_10357.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        ShuffleConvs_1_Shuff_address0 = grp_ShuffleUnit1_fu_3437_conv3_bias_address0.read();
    } else {
        ShuffleConvs_1_Shuff_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        ShuffleConvs_1_Shuff_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        ShuffleConvs_1_Shuff_ce0 = grp_ShuffleUnit1_fu_3437_conv3_bias_ce0.read();
    } else {
        ShuffleConvs_1_Shuff_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Shuff_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        ShuffleConvs_1_Shuff_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Shuff_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_10_address0 =  (sc_lv<14>) (tmp_614_cast_fu_5616_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_10_address0 = grp_DownsampleUnit2_fu_3373_conv3r_weight_address0.read();
    } else {
        ShuffleConvs_2_Downs_10_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_10_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_10_ce0 = grp_DownsampleUnit2_fu_3373_conv3r_weight_ce0.read();
    } else {
        ShuffleConvs_2_Downs_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_10_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        ShuffleConvs_2_Downs_1_address0 =  (sc_lv<7>) (tmp_326_reg_10586.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_1_address0 = grp_DownsampleUnit2_fu_3373_conv1l_bias_address0.read();
    } else {
        ShuffleConvs_2_Downs_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        ShuffleConvs_2_Downs_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_1_ce0 = grp_DownsampleUnit2_fu_3373_conv1l_bias_ce0.read();
    } else {
        ShuffleConvs_2_Downs_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        ShuffleConvs_2_Downs_1_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        ShuffleConvs_2_Downs_3_address0 =  (sc_lv<7>) (tmp_326_fu_8548_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_3_address0 = grp_DownsampleUnit2_fu_3373_conv1r_bias_address0.read();
    } else {
        ShuffleConvs_2_Downs_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        ShuffleConvs_2_Downs_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_3_ce0 = grp_DownsampleUnit2_fu_3373_conv1r_bias_ce0.read();
    } else {
        ShuffleConvs_2_Downs_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        ShuffleConvs_2_Downs_3_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read())) {
        ShuffleConvs_2_Downs_4_address0 =  (sc_lv<7>) (tmp_326_reg_10586.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_4_address0 = grp_DownsampleUnit2_fu_3373_conv2l_bias_address0.read();
    } else {
        ShuffleConvs_2_Downs_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read())) {
        ShuffleConvs_2_Downs_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_4_ce0 = grp_DownsampleUnit2_fu_3373_conv2l_bias_ce0.read();
    } else {
        ShuffleConvs_2_Downs_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read())) {
        ShuffleConvs_2_Downs_4_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        ShuffleConvs_2_Downs_5_address0 =  (sc_lv<7>) (tmp_326_fu_8548_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_5_address0 = grp_DownsampleUnit2_fu_3373_conv2r_bias_address0.read();
    } else {
        ShuffleConvs_2_Downs_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        ShuffleConvs_2_Downs_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_5_ce0 = grp_DownsampleUnit2_fu_3373_conv2r_bias_ce0.read();
    } else {
        ShuffleConvs_2_Downs_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        ShuffleConvs_2_Downs_5_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        ShuffleConvs_2_Downs_6_address0 =  (sc_lv<10>) (tmp_738_cast_fu_7664_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_6_address0 = grp_DownsampleUnit2_fu_3373_conv1l_weight_address0.read();
    } else {
        ShuffleConvs_2_Downs_6_address0 = "XXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        ShuffleConvs_2_Downs_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_6_ce0 = grp_DownsampleUnit2_fu_3373_conv1l_weight_ce0.read();
    } else {
        ShuffleConvs_2_Downs_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        ShuffleConvs_2_Downs_6_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_7_address0 =  (sc_lv<14>) (tmp_614_cast_fu_5616_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_7_address0 = grp_DownsampleUnit2_fu_3373_conv1r_weight_address0.read();
    } else {
        ShuffleConvs_2_Downs_7_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_7_ce0 = grp_DownsampleUnit2_fu_3373_conv1r_weight_ce0.read();
    } else {
        ShuffleConvs_2_Downs_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_7_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        ShuffleConvs_2_Downs_8_address0 =  (sc_lv<14>) (tmp_614_cast_reg_9506.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_8_address0 = grp_DownsampleUnit2_fu_3373_conv2l_weight_address0.read();
    } else {
        ShuffleConvs_2_Downs_8_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        ShuffleConvs_2_Downs_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_8_ce0 = grp_DownsampleUnit2_fu_3373_conv2l_weight_ce0.read();
    } else {
        ShuffleConvs_2_Downs_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        ShuffleConvs_2_Downs_8_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        ShuffleConvs_2_Downs_9_address0 =  (sc_lv<10>) (tmp_738_cast_fu_7664_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_9_address0 = grp_DownsampleUnit2_fu_3373_conv2r_weight_address0.read();
    } else {
        ShuffleConvs_2_Downs_9_address0 = "XXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        ShuffleConvs_2_Downs_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_9_ce0 = grp_DownsampleUnit2_fu_3373_conv2r_weight_ce0.read();
    } else {
        ShuffleConvs_2_Downs_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        ShuffleConvs_2_Downs_9_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        ShuffleConvs_2_Downs_address0 =  (sc_lv<7>) (tmp_326_reg_10586.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_address0 = grp_DownsampleUnit2_fu_3373_conv3r_bias_address0.read();
    } else {
        ShuffleConvs_2_Downs_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        ShuffleConvs_2_Downs_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        ShuffleConvs_2_Downs_ce0 = grp_DownsampleUnit2_fu_3373_conv3r_bias_ce0.read();
    } else {
        ShuffleConvs_2_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        ShuffleConvs_2_Downs_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ShuffleConvs_2_Shuff_11_address0 =  (sc_lv<14>) (tmp_614_cast_reg_9506.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        ShuffleConvs_2_Shuff_11_address0 = grp_ShuffleUnit2_fu_3513_conv3_weight_address0.read();
    } else {
        ShuffleConvs_2_Shuff_11_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ShuffleConvs_2_Shuff_11_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        ShuffleConvs_2_Shuff_11_ce0 = grp_ShuffleUnit2_fu_3513_conv3_weight_ce0.read();
    } else {
        ShuffleConvs_2_Shuff_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ShuffleConvs_2_Shuff_11_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Shuff_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ShuffleConvs_2_Shuff_13_address0 =  (sc_lv<14>) (tmp_614_cast_reg_9506.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        ShuffleConvs_2_Shuff_13_address0 = grp_ShuffleUnit2_fu_3513_conv1_weight_address0.read();
    } else {
        ShuffleConvs_2_Shuff_13_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ShuffleConvs_2_Shuff_13_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        ShuffleConvs_2_Shuff_13_ce0 = grp_ShuffleUnit2_fu_3513_conv1_weight_ce0.read();
    } else {
        ShuffleConvs_2_Shuff_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ShuffleConvs_2_Shuff_13_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Shuff_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        ShuffleConvs_2_Shuff_15_address0 =  (sc_lv<10>) (tmp_738_cast_reg_10098.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        ShuffleConvs_2_Shuff_15_address0 = grp_ShuffleUnit2_fu_3513_conv2_weight_address0.read();
    } else {
        ShuffleConvs_2_Shuff_15_address0 = "XXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        ShuffleConvs_2_Shuff_15_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        ShuffleConvs_2_Shuff_15_ce0 = grp_ShuffleUnit2_fu_3513_conv2_weight_ce0.read();
    } else {
        ShuffleConvs_2_Shuff_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        ShuffleConvs_2_Shuff_15_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Shuff_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_2_Shuff_17_address0 =  (sc_lv<7>) (tmp_326_reg_10586.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        ShuffleConvs_2_Shuff_17_address0 = grp_ShuffleUnit2_fu_3513_conv2_bias_address0.read();
    } else {
        ShuffleConvs_2_Shuff_17_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_2_Shuff_17_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        ShuffleConvs_2_Shuff_17_ce0 = grp_ShuffleUnit2_fu_3513_conv2_bias_ce0.read();
    } else {
        ShuffleConvs_2_Shuff_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_17_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_2_Shuff_17_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Shuff_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        ShuffleConvs_2_Shuff_18_address0 =  (sc_lv<14>) (tmp_614_cast_reg_9506.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        ShuffleConvs_2_Shuff_18_address0 = grp_ShuffleUnit2_fu_3513_conv3_weight_address0.read();
    } else {
        ShuffleConvs_2_Shuff_18_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        ShuffleConvs_2_Shuff_18_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        ShuffleConvs_2_Shuff_18_ce0 = grp_ShuffleUnit2_fu_3513_conv3_weight_ce0.read();
    } else {
        ShuffleConvs_2_Shuff_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        ShuffleConvs_2_Shuff_18_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Shuff_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read())) {
        ShuffleConvs_2_Shuff_19_address0 =  (sc_lv<7>) (tmp_326_reg_10586.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        ShuffleConvs_2_Shuff_19_address0 = grp_ShuffleUnit2_fu_3513_conv1_bias_address0.read();
    } else {
        ShuffleConvs_2_Shuff_19_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read())) {
        ShuffleConvs_2_Shuff_19_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        ShuffleConvs_2_Shuff_19_ce0 = grp_ShuffleUnit2_fu_3513_conv1_bias_ce0.read();
    } else {
        ShuffleConvs_2_Shuff_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_19_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read())) {
        ShuffleConvs_2_Shuff_19_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Shuff_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        ShuffleConvs_2_Shuff_1_address0 =  (sc_lv<7>) (tmp_326_reg_10586.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        ShuffleConvs_2_Shuff_1_address0 = grp_ShuffleUnit2_fu_3513_conv2_bias_address0.read();
    } else {
        ShuffleConvs_2_Shuff_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        ShuffleConvs_2_Shuff_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        ShuffleConvs_2_Shuff_1_ce0 = grp_ShuffleUnit2_fu_3513_conv2_bias_ce0.read();
    } else {
        ShuffleConvs_2_Shuff_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        ShuffleConvs_2_Shuff_1_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Shuff_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        ShuffleConvs_2_Shuff_20_address0 =  (sc_lv<7>) (tmp_326_reg_10586.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        ShuffleConvs_2_Shuff_20_address0 = grp_ShuffleUnit2_fu_3513_conv2_bias_address0.read();
    } else {
        ShuffleConvs_2_Shuff_20_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        ShuffleConvs_2_Shuff_20_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        ShuffleConvs_2_Shuff_20_ce0 = grp_ShuffleUnit2_fu_3513_conv2_bias_ce0.read();
    } else {
        ShuffleConvs_2_Shuff_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_20_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        ShuffleConvs_2_Shuff_20_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Shuff_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        ShuffleConvs_2_Shuff_21_address0 =  (sc_lv<7>) (tmp_326_reg_10586.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        ShuffleConvs_2_Shuff_21_address0 = grp_ShuffleUnit2_fu_3513_conv3_bias_address0.read();
    } else {
        ShuffleConvs_2_Shuff_21_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        ShuffleConvs_2_Shuff_21_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        ShuffleConvs_2_Shuff_21_ce0 = grp_ShuffleUnit2_fu_3513_conv3_bias_ce0.read();
    } else {
        ShuffleConvs_2_Shuff_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_21_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        ShuffleConvs_2_Shuff_21_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Shuff_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        ShuffleConvs_2_Shuff_22_address0 =  (sc_lv<7>) (tmp_326_reg_10586.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        ShuffleConvs_2_Shuff_22_address0 = grp_ShuffleUnit2_fu_3513_conv1_bias_address0.read();
    } else {
        ShuffleConvs_2_Shuff_22_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        ShuffleConvs_2_Shuff_22_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        ShuffleConvs_2_Shuff_22_ce0 = grp_ShuffleUnit2_fu_3513_conv1_bias_ce0.read();
    } else {
        ShuffleConvs_2_Shuff_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_22_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        ShuffleConvs_2_Shuff_22_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Shuff_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read())) {
        ShuffleConvs_2_Shuff_3_address0 =  (sc_lv<7>) (tmp_326_reg_10586.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        ShuffleConvs_2_Shuff_3_address0 = grp_ShuffleUnit2_fu_3513_conv3_bias_address0.read();
    } else {
        ShuffleConvs_2_Shuff_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read())) {
        ShuffleConvs_2_Shuff_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        ShuffleConvs_2_Shuff_3_ce0 = grp_ShuffleUnit2_fu_3513_conv3_bias_ce0.read();
    } else {
        ShuffleConvs_2_Shuff_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read())) {
        ShuffleConvs_2_Shuff_3_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Shuff_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read())) {
        ShuffleConvs_2_Shuff_4_address0 =  (sc_lv<7>) (tmp_326_reg_10586.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        ShuffleConvs_2_Shuff_4_address0 = grp_ShuffleUnit2_fu_3513_conv1_bias_address0.read();
    } else {
        ShuffleConvs_2_Shuff_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read())) {
        ShuffleConvs_2_Shuff_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        ShuffleConvs_2_Shuff_4_ce0 = grp_ShuffleUnit2_fu_3513_conv1_bias_ce0.read();
    } else {
        ShuffleConvs_2_Shuff_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read())) {
        ShuffleConvs_2_Shuff_4_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Shuff_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        ShuffleConvs_2_Shuff_5_address0 =  (sc_lv<14>) (tmp_614_cast_reg_9506.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        ShuffleConvs_2_Shuff_5_address0 = grp_ShuffleUnit2_fu_3513_conv1_weight_address0.read();
    } else {
        ShuffleConvs_2_Shuff_5_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        ShuffleConvs_2_Shuff_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        ShuffleConvs_2_Shuff_5_ce0 = grp_ShuffleUnit2_fu_3513_conv1_weight_ce0.read();
    } else {
        ShuffleConvs_2_Shuff_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        ShuffleConvs_2_Shuff_5_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Shuff_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        ShuffleConvs_2_Shuff_6_address0 =  (sc_lv<10>) (tmp_738_cast_fu_7664_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        ShuffleConvs_2_Shuff_6_address0 = grp_ShuffleUnit2_fu_3513_conv2_weight_address0.read();
    } else {
        ShuffleConvs_2_Shuff_6_address0 = "XXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        ShuffleConvs_2_Shuff_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        ShuffleConvs_2_Shuff_6_ce0 = grp_ShuffleUnit2_fu_3513_conv2_weight_ce0.read();
    } else {
        ShuffleConvs_2_Shuff_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        ShuffleConvs_2_Shuff_6_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Shuff_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        ShuffleConvs_2_Shuff_7_address0 =  (sc_lv<14>) (tmp_614_cast_reg_9506.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        ShuffleConvs_2_Shuff_7_address0 = grp_ShuffleUnit2_fu_3513_conv3_weight_address0.read();
    } else {
        ShuffleConvs_2_Shuff_7_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        ShuffleConvs_2_Shuff_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        ShuffleConvs_2_Shuff_7_ce0 = grp_ShuffleUnit2_fu_3513_conv3_weight_ce0.read();
    } else {
        ShuffleConvs_2_Shuff_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        ShuffleConvs_2_Shuff_7_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Shuff_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        ShuffleConvs_2_Shuff_8_address0 =  (sc_lv<14>) (tmp_614_cast_reg_9506.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        ShuffleConvs_2_Shuff_8_address0 = grp_ShuffleUnit2_fu_3513_conv1_weight_address0.read();
    } else {
        ShuffleConvs_2_Shuff_8_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        ShuffleConvs_2_Shuff_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        ShuffleConvs_2_Shuff_8_ce0 = grp_ShuffleUnit2_fu_3513_conv1_weight_ce0.read();
    } else {
        ShuffleConvs_2_Shuff_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        ShuffleConvs_2_Shuff_8_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Shuff_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        ShuffleConvs_2_Shuff_9_address0 =  (sc_lv<10>) (tmp_738_cast_reg_10098.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        ShuffleConvs_2_Shuff_9_address0 = grp_ShuffleUnit2_fu_3513_conv2_weight_address0.read();
    } else {
        ShuffleConvs_2_Shuff_9_address0 = "XXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        ShuffleConvs_2_Shuff_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        ShuffleConvs_2_Shuff_9_ce0 = grp_ShuffleUnit2_fu_3513_conv2_weight_ce0.read();
    } else {
        ShuffleConvs_2_Shuff_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        ShuffleConvs_2_Shuff_9_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Shuff_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_2_Shuff_address0 =  (sc_lv<7>) (tmp_326_reg_10586.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        ShuffleConvs_2_Shuff_address0 = grp_ShuffleUnit2_fu_3513_conv3_bias_address0.read();
    } else {
        ShuffleConvs_2_Shuff_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_2_Shuff_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        ShuffleConvs_2_Shuff_ce0 = grp_ShuffleUnit2_fu_3513_conv3_bias_ce0.read();
    } else {
        ShuffleConvs_2_Shuff_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Shuff_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        ShuffleConvs_2_Shuff_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Shuff_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void ShuffleNetV2::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void ShuffleNetV2::thread_ap_CS_fsm_state100() {
    ap_CS_fsm_state100 = ap_CS_fsm.read()[99];
}

void ShuffleNetV2::thread_ap_CS_fsm_state101() {
    ap_CS_fsm_state101 = ap_CS_fsm.read()[100];
}

void ShuffleNetV2::thread_ap_CS_fsm_state102() {
    ap_CS_fsm_state102 = ap_CS_fsm.read()[101];
}

void ShuffleNetV2::thread_ap_CS_fsm_state103() {
    ap_CS_fsm_state103 = ap_CS_fsm.read()[102];
}

void ShuffleNetV2::thread_ap_CS_fsm_state104() {
    ap_CS_fsm_state104 = ap_CS_fsm.read()[103];
}

void ShuffleNetV2::thread_ap_CS_fsm_state105() {
    ap_CS_fsm_state105 = ap_CS_fsm.read()[104];
}

void ShuffleNetV2::thread_ap_CS_fsm_state106() {
    ap_CS_fsm_state106 = ap_CS_fsm.read()[105];
}

void ShuffleNetV2::thread_ap_CS_fsm_state107() {
    ap_CS_fsm_state107 = ap_CS_fsm.read()[106];
}

void ShuffleNetV2::thread_ap_CS_fsm_state108() {
    ap_CS_fsm_state108 = ap_CS_fsm.read()[107];
}

void ShuffleNetV2::thread_ap_CS_fsm_state109() {
    ap_CS_fsm_state109 = ap_CS_fsm.read()[108];
}

void ShuffleNetV2::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void ShuffleNetV2::thread_ap_CS_fsm_state110() {
    ap_CS_fsm_state110 = ap_CS_fsm.read()[109];
}

void ShuffleNetV2::thread_ap_CS_fsm_state111() {
    ap_CS_fsm_state111 = ap_CS_fsm.read()[110];
}

void ShuffleNetV2::thread_ap_CS_fsm_state112() {
    ap_CS_fsm_state112 = ap_CS_fsm.read()[111];
}

void ShuffleNetV2::thread_ap_CS_fsm_state113() {
    ap_CS_fsm_state113 = ap_CS_fsm.read()[112];
}

void ShuffleNetV2::thread_ap_CS_fsm_state114() {
    ap_CS_fsm_state114 = ap_CS_fsm.read()[113];
}

void ShuffleNetV2::thread_ap_CS_fsm_state115() {
    ap_CS_fsm_state115 = ap_CS_fsm.read()[114];
}

void ShuffleNetV2::thread_ap_CS_fsm_state116() {
    ap_CS_fsm_state116 = ap_CS_fsm.read()[115];
}

void ShuffleNetV2::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[116];
}

void ShuffleNetV2::thread_ap_CS_fsm_state118() {
    ap_CS_fsm_state118 = ap_CS_fsm.read()[117];
}

void ShuffleNetV2::thread_ap_CS_fsm_state119() {
    ap_CS_fsm_state119 = ap_CS_fsm.read()[118];
}

void ShuffleNetV2::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void ShuffleNetV2::thread_ap_CS_fsm_state120() {
    ap_CS_fsm_state120 = ap_CS_fsm.read()[119];
}

void ShuffleNetV2::thread_ap_CS_fsm_state121() {
    ap_CS_fsm_state121 = ap_CS_fsm.read()[120];
}

void ShuffleNetV2::thread_ap_CS_fsm_state122() {
    ap_CS_fsm_state122 = ap_CS_fsm.read()[121];
}

void ShuffleNetV2::thread_ap_CS_fsm_state123() {
    ap_CS_fsm_state123 = ap_CS_fsm.read()[122];
}

void ShuffleNetV2::thread_ap_CS_fsm_state124() {
    ap_CS_fsm_state124 = ap_CS_fsm.read()[123];
}

void ShuffleNetV2::thread_ap_CS_fsm_state125() {
    ap_CS_fsm_state125 = ap_CS_fsm.read()[124];
}

void ShuffleNetV2::thread_ap_CS_fsm_state126() {
    ap_CS_fsm_state126 = ap_CS_fsm.read()[125];
}

void ShuffleNetV2::thread_ap_CS_fsm_state127() {
    ap_CS_fsm_state127 = ap_CS_fsm.read()[126];
}

void ShuffleNetV2::thread_ap_CS_fsm_state128() {
    ap_CS_fsm_state128 = ap_CS_fsm.read()[127];
}

void ShuffleNetV2::thread_ap_CS_fsm_state129() {
    ap_CS_fsm_state129 = ap_CS_fsm.read()[128];
}

void ShuffleNetV2::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[12];
}

void ShuffleNetV2::thread_ap_CS_fsm_state132() {
    ap_CS_fsm_state132 = ap_CS_fsm.read()[131];
}

void ShuffleNetV2::thread_ap_CS_fsm_state133() {
    ap_CS_fsm_state133 = ap_CS_fsm.read()[132];
}

void ShuffleNetV2::thread_ap_CS_fsm_state137() {
    ap_CS_fsm_state137 = ap_CS_fsm.read()[136];
}

void ShuffleNetV2::thread_ap_CS_fsm_state138() {
    ap_CS_fsm_state138 = ap_CS_fsm.read()[137];
}

void ShuffleNetV2::thread_ap_CS_fsm_state139() {
    ap_CS_fsm_state139 = ap_CS_fsm.read()[138];
}

void ShuffleNetV2::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[13];
}

void ShuffleNetV2::thread_ap_CS_fsm_state143() {
    ap_CS_fsm_state143 = ap_CS_fsm.read()[142];
}

void ShuffleNetV2::thread_ap_CS_fsm_state144() {
    ap_CS_fsm_state144 = ap_CS_fsm.read()[143];
}

void ShuffleNetV2::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void ShuffleNetV2::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void ShuffleNetV2::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
}

void ShuffleNetV2::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[17];
}

void ShuffleNetV2::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[18];
}

void ShuffleNetV2::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void ShuffleNetV2::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[19];
}

void ShuffleNetV2::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[20];
}

void ShuffleNetV2::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[21];
}

void ShuffleNetV2::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[22];
}

void ShuffleNetV2::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[23];
}

void ShuffleNetV2::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[24];
}

void ShuffleNetV2::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[25];
}

void ShuffleNetV2::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[26];
}

void ShuffleNetV2::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[27];
}

void ShuffleNetV2::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[28];
}

void ShuffleNetV2::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void ShuffleNetV2::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[29];
}

void ShuffleNetV2::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[30];
}

void ShuffleNetV2::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[31];
}

void ShuffleNetV2::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[32];
}

void ShuffleNetV2::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[33];
}

void ShuffleNetV2::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[34];
}

void ShuffleNetV2::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[35];
}

void ShuffleNetV2::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[36];
}

void ShuffleNetV2::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[37];
}

void ShuffleNetV2::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[38];
}

void ShuffleNetV2::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void ShuffleNetV2::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[39];
}

void ShuffleNetV2::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[40];
}

void ShuffleNetV2::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[41];
}

void ShuffleNetV2::thread_ap_CS_fsm_state43() {
    ap_CS_fsm_state43 = ap_CS_fsm.read()[42];
}

void ShuffleNetV2::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[43];
}

void ShuffleNetV2::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[44];
}

void ShuffleNetV2::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[45];
}

void ShuffleNetV2::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[46];
}

void ShuffleNetV2::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[47];
}

void ShuffleNetV2::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[48];
}

void ShuffleNetV2::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void ShuffleNetV2::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[49];
}

void ShuffleNetV2::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[50];
}

void ShuffleNetV2::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[51];
}

void ShuffleNetV2::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[52];
}

void ShuffleNetV2::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[53];
}

void ShuffleNetV2::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[54];
}

void ShuffleNetV2::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[55];
}

void ShuffleNetV2::thread_ap_CS_fsm_state57() {
    ap_CS_fsm_state57 = ap_CS_fsm.read()[56];
}

void ShuffleNetV2::thread_ap_CS_fsm_state58() {
    ap_CS_fsm_state58 = ap_CS_fsm.read()[57];
}

void ShuffleNetV2::thread_ap_CS_fsm_state59() {
    ap_CS_fsm_state59 = ap_CS_fsm.read()[58];
}

void ShuffleNetV2::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void ShuffleNetV2::thread_ap_CS_fsm_state60() {
    ap_CS_fsm_state60 = ap_CS_fsm.read()[59];
}

void ShuffleNetV2::thread_ap_CS_fsm_state61() {
    ap_CS_fsm_state61 = ap_CS_fsm.read()[60];
}

void ShuffleNetV2::thread_ap_CS_fsm_state62() {
    ap_CS_fsm_state62 = ap_CS_fsm.read()[61];
}

void ShuffleNetV2::thread_ap_CS_fsm_state63() {
    ap_CS_fsm_state63 = ap_CS_fsm.read()[62];
}

void ShuffleNetV2::thread_ap_CS_fsm_state64() {
    ap_CS_fsm_state64 = ap_CS_fsm.read()[63];
}

void ShuffleNetV2::thread_ap_CS_fsm_state65() {
    ap_CS_fsm_state65 = ap_CS_fsm.read()[64];
}

void ShuffleNetV2::thread_ap_CS_fsm_state66() {
    ap_CS_fsm_state66 = ap_CS_fsm.read()[65];
}

void ShuffleNetV2::thread_ap_CS_fsm_state67() {
    ap_CS_fsm_state67 = ap_CS_fsm.read()[66];
}

void ShuffleNetV2::thread_ap_CS_fsm_state68() {
    ap_CS_fsm_state68 = ap_CS_fsm.read()[67];
}

void ShuffleNetV2::thread_ap_CS_fsm_state69() {
    ap_CS_fsm_state69 = ap_CS_fsm.read()[68];
}

void ShuffleNetV2::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void ShuffleNetV2::thread_ap_CS_fsm_state70() {
    ap_CS_fsm_state70 = ap_CS_fsm.read()[69];
}

void ShuffleNetV2::thread_ap_CS_fsm_state71() {
    ap_CS_fsm_state71 = ap_CS_fsm.read()[70];
}

void ShuffleNetV2::thread_ap_CS_fsm_state72() {
    ap_CS_fsm_state72 = ap_CS_fsm.read()[71];
}

void ShuffleNetV2::thread_ap_CS_fsm_state73() {
    ap_CS_fsm_state73 = ap_CS_fsm.read()[72];
}

void ShuffleNetV2::thread_ap_CS_fsm_state74() {
    ap_CS_fsm_state74 = ap_CS_fsm.read()[73];
}

void ShuffleNetV2::thread_ap_CS_fsm_state75() {
    ap_CS_fsm_state75 = ap_CS_fsm.read()[74];
}

void ShuffleNetV2::thread_ap_CS_fsm_state76() {
    ap_CS_fsm_state76 = ap_CS_fsm.read()[75];
}

void ShuffleNetV2::thread_ap_CS_fsm_state77() {
    ap_CS_fsm_state77 = ap_CS_fsm.read()[76];
}

void ShuffleNetV2::thread_ap_CS_fsm_state78() {
    ap_CS_fsm_state78 = ap_CS_fsm.read()[77];
}

void ShuffleNetV2::thread_ap_CS_fsm_state79() {
    ap_CS_fsm_state79 = ap_CS_fsm.read()[78];
}

void ShuffleNetV2::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void ShuffleNetV2::thread_ap_CS_fsm_state80() {
    ap_CS_fsm_state80 = ap_CS_fsm.read()[79];
}

void ShuffleNetV2::thread_ap_CS_fsm_state81() {
    ap_CS_fsm_state81 = ap_CS_fsm.read()[80];
}

void ShuffleNetV2::thread_ap_CS_fsm_state82() {
    ap_CS_fsm_state82 = ap_CS_fsm.read()[81];
}

void ShuffleNetV2::thread_ap_CS_fsm_state83() {
    ap_CS_fsm_state83 = ap_CS_fsm.read()[82];
}

void ShuffleNetV2::thread_ap_CS_fsm_state84() {
    ap_CS_fsm_state84 = ap_CS_fsm.read()[83];
}

void ShuffleNetV2::thread_ap_CS_fsm_state85() {
    ap_CS_fsm_state85 = ap_CS_fsm.read()[84];
}

void ShuffleNetV2::thread_ap_CS_fsm_state86() {
    ap_CS_fsm_state86 = ap_CS_fsm.read()[85];
}

void ShuffleNetV2::thread_ap_CS_fsm_state87() {
    ap_CS_fsm_state87 = ap_CS_fsm.read()[86];
}

void ShuffleNetV2::thread_ap_CS_fsm_state88() {
    ap_CS_fsm_state88 = ap_CS_fsm.read()[87];
}

void ShuffleNetV2::thread_ap_CS_fsm_state89() {
    ap_CS_fsm_state89 = ap_CS_fsm.read()[88];
}

void ShuffleNetV2::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void ShuffleNetV2::thread_ap_CS_fsm_state90() {
    ap_CS_fsm_state90 = ap_CS_fsm.read()[89];
}

void ShuffleNetV2::thread_ap_CS_fsm_state91() {
    ap_CS_fsm_state91 = ap_CS_fsm.read()[90];
}

void ShuffleNetV2::thread_ap_CS_fsm_state92() {
    ap_CS_fsm_state92 = ap_CS_fsm.read()[91];
}

void ShuffleNetV2::thread_ap_CS_fsm_state93() {
    ap_CS_fsm_state93 = ap_CS_fsm.read()[92];
}

void ShuffleNetV2::thread_ap_CS_fsm_state94() {
    ap_CS_fsm_state94 = ap_CS_fsm.read()[93];
}

void ShuffleNetV2::thread_ap_CS_fsm_state95() {
    ap_CS_fsm_state95 = ap_CS_fsm.read()[94];
}

void ShuffleNetV2::thread_ap_CS_fsm_state96() {
    ap_CS_fsm_state96 = ap_CS_fsm.read()[95];
}

void ShuffleNetV2::thread_ap_CS_fsm_state97() {
    ap_CS_fsm_state97 = ap_CS_fsm.read()[96];
}

void ShuffleNetV2::thread_ap_CS_fsm_state98() {
    ap_CS_fsm_state98 = ap_CS_fsm.read()[97];
}

void ShuffleNetV2::thread_ap_CS_fsm_state99() {
    ap_CS_fsm_state99 = ap_CS_fsm.read()[98];
}

void ShuffleNetV2::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_i_fu_8815_p2.read()))) {
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_i_fu_8815_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_avgpool_output_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        avgpool_output_address0 =  (sc_lv<9>) (tmp_i_419_fu_8855_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        avgpool_output_address0 = grp_avgpool_fu_3573_output_r_address0.read();
    } else {
        avgpool_output_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_avgpool_output_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        avgpool_output_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        avgpool_output_ce0 = grp_avgpool_fu_3573_output_r_ce0.read();
    } else {
        avgpool_output_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_avgpool_output_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        avgpool_output_we0 = grp_avgpool_fu_3573_output_r_we0.read();
    } else {
        avgpool_output_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_232_fu_8769_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_350_fu_8723_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_346_fu_8693_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_342_fu_8663_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_338_fu_8633_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_334_fu_8603_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_330_fu_8572_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_324_fu_8512_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_306_fu_8421_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_302_fu_8383_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_298_fu_8349_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_294_fu_8319_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_290_fu_8289_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_286_fu_8259_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_282_fu_8229_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_278_fu_8198_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_274_fu_8164_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_270_fu_8127_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_264_fu_8093_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_258_fu_8063_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_252_fu_8022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_246_fu_7968_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_217_fu_7880_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_213_fu_7860_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_209_fu_7837_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_205_fu_7813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_201_fu_7786_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_197_fu_7766_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_193_fu_7739_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_189_fu_7718_p1.read());
    } else {
        bias_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_bias_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_236_fu_8805_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_352_fu_8738_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_348_fu_8708_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_344_fu_8678_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_340_fu_8648_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_336_fu_8618_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_332_fu_8588_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_328_fu_8532_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_308_fu_8440_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_304_fu_8402_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_300_fu_8364_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_296_fu_8334_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_292_fu_8304_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_288_fu_8274_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_284_fu_8244_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_280_fu_8214_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_276_fu_8172_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_272_fu_8146_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_267_fu_8108_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_261_fu_8078_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_255_fu_8038_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_249_fu_7988_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_241_fu_7945_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_215_fu_7870_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_211_fu_7847_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_207_fu_7827_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_203_fu_7796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_199_fu_7776_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_195_fu_7749_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        bias_address1 =  (sc_lv<12>) (tmp_191_fu_7729_p1.read());
    } else {
        bias_address1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_bias_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()))) {
        bias_ce0 = ap_const_logic_1;
    } else {
        bias_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()))) {
        bias_ce1 = ap_const_logic_1;
    } else {
        bias_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ci_10_fu_8849_p2() {
    ci_10_fu_8849_p2 = (!ci_i_reg_3306.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(ci_i_reg_3306.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void ShuffleNetV2::thread_ci_9_fu_4108_p2() {
    ci_9_fu_4108_p2 = (!ci_reg_3135.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci_reg_3135.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_cast1_fu_4098_p1() {
    ci_cast1_fu_4098_p1 = esl_zext<7,5>(ci_reg_3135.read());
}

void ShuffleNetV2::thread_ci_cast_fu_4094_p1() {
    ci_cast_fu_4094_p1 = esl_zext<8,5>(ci_reg_3135.read());
}

void ShuffleNetV2::thread_co2_cast117_cast_fu_5978_p1() {
    co2_cast117_cast_fu_5978_p1 = esl_zext<6,5>(co2_reg_3169.read());
}

void ShuffleNetV2::thread_co2_cast119_cast_fu_5970_p1() {
    co2_cast119_cast_fu_5970_p1 = esl_zext<8,5>(co2_reg_3169.read());
}

void ShuffleNetV2::thread_co2_cast120_cast_fu_5966_p1() {
    co2_cast120_cast_fu_5966_p1 = esl_zext<9,5>(co2_reg_3169.read());
}

void ShuffleNetV2::thread_co2_cast1_fu_5958_p1() {
    co2_cast1_fu_5958_p1 = esl_zext<11,5>(co2_reg_3169.read());
}

void ShuffleNetV2::thread_co2_cast2_fu_5962_p1() {
    co2_cast2_fu_5962_p1 = esl_zext<10,5>(co2_reg_3169.read());
}

void ShuffleNetV2::thread_co2_cast5_fu_5974_p1() {
    co2_cast5_fu_5974_p1 = esl_zext<7,5>(co2_reg_3169.read());
}

void ShuffleNetV2::thread_co_22_fu_3628_p2() {
    co_22_fu_3628_p2 = (!co_reg_3124.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co_reg_3124.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_23_fu_5988_p2() {
    co_23_fu_5988_p2 = (!co2_reg_3169.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co2_reg_3169.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_24_fu_8821_p2() {
    co_24_fu_8821_p2 = (!co_i_reg_3283.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(co_i_reg_3283.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_co_cast137_cast_fu_3618_p1() {
    co_cast137_cast_fu_3618_p1 = esl_zext<6,5>(co_reg_3124.read());
}

void ShuffleNetV2::thread_co_cast138_cast_fu_3614_p1() {
    co_cast138_cast_fu_3614_p1 = esl_zext<7,5>(co_reg_3124.read());
}

void ShuffleNetV2::thread_co_cast143_cast1_fu_3602_p1() {
    co_cast143_cast1_fu_3602_p1 = esl_zext<9,5>(co_reg_3124.read());
}

void ShuffleNetV2::thread_co_cast143_cast_fu_3606_p1() {
    co_cast143_cast_fu_3606_p1 = esl_zext<10,5>(co_reg_3124.read());
}

void ShuffleNetV2::thread_co_cast144_cast_fu_3598_p1() {
    co_cast144_cast_fu_3598_p1 = esl_zext<11,5>(co_reg_3124.read());
}

void ShuffleNetV2::thread_co_cast1_fu_3590_p1() {
    co_cast1_fu_3590_p1 = esl_zext<13,5>(co_reg_3124.read());
}

void ShuffleNetV2::thread_co_cast2_fu_3594_p1() {
    co_cast2_fu_3594_p1 = esl_zext<12,5>(co_reg_3124.read());
}

void ShuffleNetV2::thread_co_cast8_fu_3610_p1() {
    co_cast8_fu_3610_p1 = esl_zext<8,5>(co_reg_3124.read());
}

void ShuffleNetV2::thread_conv1_bias_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        conv1_bias_address0 =  (sc_lv<5>) (tmp_189_reg_10201.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        conv1_bias_address0 = grp_conv1_fu_3549_bias_address0.read();
    } else {
        conv1_bias_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_conv1_bias_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        conv1_bias_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        conv1_bias_ce0 = grp_conv1_fu_3549_bias_ce0.read();
    } else {
        conv1_bias_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_bias_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        conv1_bias_we0 = ap_const_logic_1;
    } else {
        conv1_bias_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        conv1_output_address0 = grp_conv1_fu_3549_conv1_output_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        conv1_output_address0 = grp_DownsampleUnit0_fu_3317_input_r_address0.read();
    } else {
        conv1_output_address0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        conv1_output_ce0 = grp_conv1_fu_3549_conv1_output_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        conv1_output_ce0 = grp_DownsampleUnit0_fu_3317_input_r_ce0.read();
    } else {
        conv1_output_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        conv1_output_we0 = grp_conv1_fu_3549_conv1_output_we0.read();
    } else {
        conv1_output_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_weight_address0() {
    conv1_weight_address0 = grp_conv1_fu_3549_weight_address0.read();
}

void ShuffleNetV2::thread_conv1_weight_ce0() {
    conv1_weight_ce0 = grp_conv1_fu_3549_weight_ce0.read();
}

void ShuffleNetV2::thread_conv_last_bias_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read())) {
        conv_last_bias_address0 =  (sc_lv<9>) (tmp_233_fu_8774_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        conv_last_bias_address0 = grp_conv_last_fu_3561_bias_address0.read();
    } else {
        conv_last_bias_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_bias_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read())) {
        conv_last_bias_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        conv_last_bias_ce0 = grp_conv_last_fu_3561_bias_ce0.read();
    } else {
        conv_last_bias_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_bias_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read())) {
        conv_last_bias_we0 = ap_const_logic_1;
    } else {
        conv_last_bias_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        conv_last_output_address0 = grp_avgpool_fu_3573_conv_last_output_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        conv_last_output_address0 = grp_conv_last_fu_3561_output_r_address0.read();
    } else {
        conv_last_output_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        conv_last_output_ce0 = grp_avgpool_fu_3573_conv_last_output_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        conv_last_output_ce0 = grp_conv_last_fu_3561_output_r_ce0.read();
    } else {
        conv_last_output_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        conv_last_output_we0 = grp_conv_last_fu_3561_output_r_we0.read();
    } else {
        conv_last_output_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_weight_address0() {
    conv_last_weight_address0 = grp_conv_last_fu_3561_weight_address0.read();
}

void ShuffleNetV2::thread_conv_last_weight_ce0() {
    conv_last_weight_ce0 = grp_conv_last_fu_3561_weight_ce0.read();
}

void ShuffleNetV2::thread_downsampleunit0_outp_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        downsampleunit0_outp_address0 = grp_ShuffleUnit0_fu_3401_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        downsampleunit0_outp_address0 = grp_DownsampleUnit0_fu_3317_downsampleunit0_outp_address0.read();
    } else {
        downsampleunit0_outp_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit0_outp_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        downsampleunit0_outp_ce0 = grp_ShuffleUnit0_fu_3401_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        downsampleunit0_outp_ce0 = grp_DownsampleUnit0_fu_3317_downsampleunit0_outp_ce0.read();
    } else {
        downsampleunit0_outp_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit0_outp_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        downsampleunit0_outp_ce1 = grp_ShuffleUnit0_fu_3401_input_r_ce1.read();
    } else {
        downsampleunit0_outp_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit0_outp_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        downsampleunit0_outp_we0 = grp_DownsampleUnit0_fu_3317_downsampleunit0_outp_we0.read();
    } else {
        downsampleunit0_outp_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit1_outp_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        downsampleunit1_outp_address0 = grp_ShuffleUnit1_fu_3437_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        downsampleunit1_outp_address0 = grp_DownsampleUnit1_fu_3345_downsampleunit1_outp_address0.read();
    } else {
        downsampleunit1_outp_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit1_outp_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        downsampleunit1_outp_ce0 = grp_ShuffleUnit1_fu_3437_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        downsampleunit1_outp_ce0 = grp_DownsampleUnit1_fu_3345_downsampleunit1_outp_ce0.read();
    } else {
        downsampleunit1_outp_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit1_outp_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        downsampleunit1_outp_ce1 = grp_ShuffleUnit1_fu_3437_input_r_ce1.read();
    } else {
        downsampleunit1_outp_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit1_outp_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        downsampleunit1_outp_we0 = grp_DownsampleUnit1_fu_3345_downsampleunit1_outp_we0.read();
    } else {
        downsampleunit1_outp_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit2_outp_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        downsampleunit2_outp_address0 = grp_ShuffleUnit2_fu_3513_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        downsampleunit2_outp_address0 = grp_DownsampleUnit2_fu_3373_downsampleunit2_outp_address0.read();
    } else {
        downsampleunit2_outp_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit2_outp_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        downsampleunit2_outp_ce0 = grp_ShuffleUnit2_fu_3513_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        downsampleunit2_outp_ce0 = grp_DownsampleUnit2_fu_3373_downsampleunit2_outp_ce0.read();
    } else {
        downsampleunit2_outp_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit2_outp_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        downsampleunit2_outp_ce1 = grp_ShuffleUnit2_fu_3513_input_r_ce1.read();
    } else {
        downsampleunit2_outp_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit2_outp_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        downsampleunit2_outp_we0 = grp_DownsampleUnit2_fu_3373_downsampleunit2_outp_we0.read();
    } else {
        downsampleunit2_outp_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_exitcond10_fu_6323_p2() {
    exitcond10_fu_6323_p2 = (!h_reg_3191.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h_reg_3191.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond11_fu_5378_p2() {
    exitcond11_fu_5378_p2 = (!i1_reg_3158.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i1_reg_3158.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond12_fu_7219_p2() {
    exitcond12_fu_7219_p2 = (!i4_reg_3214.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i4_reg_3214.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond13_fu_6394_p2() {
    exitcond13_fu_6394_p2 = (!i3_reg_3203.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i3_reg_3203.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond1_fu_5982_p2() {
    exitcond1_fu_5982_p2 = (!co2_reg_3169.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co2_reg_3169.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond1_i_fu_8815_p2() {
    exitcond1_i_fu_8815_p2 = (!co_i_reg_3283.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(co_i_reg_3283.read() == ap_const_lv4_A);
}

void ShuffleNetV2::thread_exitcond2_fu_4102_p2() {
    exitcond2_fu_4102_p2 = (!ci_reg_3135.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci_reg_3135.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond3_fu_7706_p2() {
    exitcond3_fu_7706_p2 = (!i5_reg_3225.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i5_reg_3225.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond4_fu_6144_p2() {
    exitcond4_fu_6144_p2 = (!w_reg_3180.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w_reg_3180.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond5_fu_4240_p2() {
    exitcond5_fu_4240_p2 = (!i_reg_3147.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_3147.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond6_fu_7885_p2() {
    exitcond6_fu_7885_p2 = (!k_reg_3237.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k_reg_3237.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond7_fu_8783_p2() {
    exitcond7_fu_8783_p2 = (!i8_reg_3271.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i8_reg_3271.read() == ap_const_lv4_A);
}

void ShuffleNetV2::thread_exitcond8_fu_8747_p2() {
    exitcond8_fu_8747_p2 = (!i7_reg_3259.read().is_01() || !ap_const_lv10_200.is_01())? sc_lv<1>(): sc_lv<1>(i7_reg_3259.read() == ap_const_lv10_200);
}

void ShuffleNetV2::thread_exitcond9_fu_8445_p2() {
    exitcond9_fu_8445_p2 = (!k6_reg_3248.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k6_reg_3248.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond_fu_3622_p2() {
    exitcond_fu_3622_p2 = (!co_reg_3124.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co_reg_3124.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond_i_fu_8843_p2() {
    exitcond_i_fu_8843_p2 = (!ci_i_reg_3306.read().is_01() || !ap_const_lv10_200.is_01())? sc_lv<1>(): sc_lv<1>(ci_i_reg_3306.read() == ap_const_lv10_200);
}

void ShuffleNetV2::thread_fc_bias_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        fc_bias_address0 =  (sc_lv<4>) (tmp_i_reg_10696.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read())) {
        fc_bias_address0 =  (sc_lv<4>) (tmp_237_fu_8810_p1.read());
    } else {
        fc_bias_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ShuffleNetV2::thread_fc_bias_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()))) {
        fc_bias_ce0 = ap_const_logic_1;
    } else {
        fc_bias_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_fc_bias_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read())) {
        fc_bias_we0 = ap_const_logic_1;
    } else {
        fc_bias_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_fc_output_address0() {
    fc_output_address0 =  (sc_lv<10>) (tmp_i_reg_10696.read());
}

void ShuffleNetV2::thread_fc_output_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        fc_output_ce0 = ap_const_logic_1;
    } else {
        fc_output_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_fc_output_d0() {
    fc_output_d0 = result_reg_10755.read();
}

void ShuffleNetV2::thread_fc_output_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        fc_output_we0 = ap_const_logic_1;
    } else {
        fc_output_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_fc_weight_address0() {
    fc_weight_address0 =  (sc_lv<13>) (tmp_764_cast_fu_8869_p1.read());
}

void ShuffleNetV2::thread_fc_weight_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        fc_weight_ce0 = ap_const_logic_1;
    } else {
        fc_weight_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_DownsampleUnit0_fu_3317_ap_start() {
    grp_DownsampleUnit0_fu_3317_ap_start = ap_reg_grp_DownsampleUnit0_fu_3317_ap_start.read();
}

void ShuffleNetV2::thread_grp_DownsampleUnit1_fu_3345_ap_start() {
    grp_DownsampleUnit1_fu_3345_ap_start = ap_reg_grp_DownsampleUnit1_fu_3345_ap_start.read();
}

void ShuffleNetV2::thread_grp_DownsampleUnit2_fu_3373_ap_start() {
    grp_DownsampleUnit2_fu_3373_ap_start = ap_reg_grp_DownsampleUnit2_fu_3373_ap_start.read();
}

void ShuffleNetV2::thread_grp_ShuffleUnit0_fu_3401_ap_start() {
    grp_ShuffleUnit0_fu_3401_ap_start = ap_reg_grp_ShuffleUnit0_fu_3401_ap_start.read();
}

void ShuffleNetV2::thread_grp_ShuffleUnit0_fu_3401_conv1_bias_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        grp_ShuffleUnit0_fu_3401_conv1_bias_q0 = ShuffleConvs_0_Shuff_4_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        grp_ShuffleUnit0_fu_3401_conv1_bias_q0 = ShuffleConvs_0_Shuff_22_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        grp_ShuffleUnit0_fu_3401_conv1_bias_q0 = ShuffleConvs_0_Shuff_19_q0.read();
    } else {
        grp_ShuffleUnit0_fu_3401_conv1_bias_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit0_fu_3401_conv1_weight_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        grp_ShuffleUnit0_fu_3401_conv1_weight_q0 = ShuffleConvs_0_Shuff_13_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        grp_ShuffleUnit0_fu_3401_conv1_weight_q0 = ShuffleConvs_0_Shuff_8_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        grp_ShuffleUnit0_fu_3401_conv1_weight_q0 = ShuffleConvs_0_Shuff_5_q0.read();
    } else {
        grp_ShuffleUnit0_fu_3401_conv1_weight_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit0_fu_3401_conv2_bias_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        grp_ShuffleUnit0_fu_3401_conv2_bias_q0 = ShuffleConvs_0_Shuff_17_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        grp_ShuffleUnit0_fu_3401_conv2_bias_q0 = ShuffleConvs_0_Shuff_1_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        grp_ShuffleUnit0_fu_3401_conv2_bias_q0 = ShuffleConvs_0_Shuff_20_q0.read();
    } else {
        grp_ShuffleUnit0_fu_3401_conv2_bias_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit0_fu_3401_conv2_weight_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        grp_ShuffleUnit0_fu_3401_conv2_weight_q0 = ShuffleConvs_0_Shuff_15_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        grp_ShuffleUnit0_fu_3401_conv2_weight_q0 = ShuffleConvs_0_Shuff_9_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        grp_ShuffleUnit0_fu_3401_conv2_weight_q0 = ShuffleConvs_0_Shuff_6_q0.read();
    } else {
        grp_ShuffleUnit0_fu_3401_conv2_weight_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit0_fu_3401_conv3_bias_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        grp_ShuffleUnit0_fu_3401_conv3_bias_q0 = ShuffleConvs_0_Shuff_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        grp_ShuffleUnit0_fu_3401_conv3_bias_q0 = ShuffleConvs_0_Shuff_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        grp_ShuffleUnit0_fu_3401_conv3_bias_q0 = ShuffleConvs_0_Shuff_21_q0.read();
    } else {
        grp_ShuffleUnit0_fu_3401_conv3_bias_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit0_fu_3401_conv3_weight_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        grp_ShuffleUnit0_fu_3401_conv3_weight_q0 = ShuffleConvs_0_Shuff_18_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        grp_ShuffleUnit0_fu_3401_conv3_weight_q0 = ShuffleConvs_0_Shuff_11_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        grp_ShuffleUnit0_fu_3401_conv3_weight_q0 = ShuffleConvs_0_Shuff_7_q0.read();
    } else {
        grp_ShuffleUnit0_fu_3401_conv3_weight_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit0_fu_3401_input_r_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        grp_ShuffleUnit0_fu_3401_input_r_q0 = shuffleunit0_1_outpu_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        grp_ShuffleUnit0_fu_3401_input_r_q0 = shuffleunit0_0_outpu_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        grp_ShuffleUnit0_fu_3401_input_r_q0 = downsampleunit0_outp_q0.read();
    } else {
        grp_ShuffleUnit0_fu_3401_input_r_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit0_fu_3401_input_r_q1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        grp_ShuffleUnit0_fu_3401_input_r_q1 = shuffleunit0_1_outpu_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        grp_ShuffleUnit0_fu_3401_input_r_q1 = shuffleunit0_0_outpu_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        grp_ShuffleUnit0_fu_3401_input_r_q1 = downsampleunit0_outp_q1.read();
    } else {
        grp_ShuffleUnit0_fu_3401_input_r_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit1_fu_3437_ap_start() {
    grp_ShuffleUnit1_fu_3437_ap_start = ap_reg_grp_ShuffleUnit1_fu_3437_ap_start.read();
}

void ShuffleNetV2::thread_grp_ShuffleUnit1_fu_3437_conv1_bias_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        grp_ShuffleUnit1_fu_3437_conv1_bias_q0 = ShuffleConvs_1_Shuff_55_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        grp_ShuffleUnit1_fu_3437_conv1_bias_q0 = ShuffleConvs_1_Shuff_71_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        grp_ShuffleUnit1_fu_3437_conv1_bias_q0 = ShuffleConvs_1_Shuff_68_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        grp_ShuffleUnit1_fu_3437_conv1_bias_q0 = ShuffleConvs_1_Shuff_64_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        grp_ShuffleUnit1_fu_3437_conv1_bias_q0 = ShuffleConvs_1_Shuff_61_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        grp_ShuffleUnit1_fu_3437_conv1_bias_q0 = ShuffleConvs_1_Shuff_58_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        grp_ShuffleUnit1_fu_3437_conv1_bias_q0 = ShuffleConvs_1_Shuff_54_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_ShuffleUnit1_fu_3437_conv1_bias_q0 = ShuffleConvs_1_Shuff_51_q0.read();
    } else {
        grp_ShuffleUnit1_fu_3437_conv1_bias_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit1_fu_3437_conv1_weight_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        grp_ShuffleUnit1_fu_3437_conv1_weight_q0 = ShuffleConvs_1_Shuff_47_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        grp_ShuffleUnit1_fu_3437_conv1_weight_q0 = ShuffleConvs_1_Shuff_41_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        grp_ShuffleUnit1_fu_3437_conv1_weight_q0 = ShuffleConvs_1_Shuff_33_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        grp_ShuffleUnit1_fu_3437_conv1_weight_q0 = ShuffleConvs_1_Shuff_27_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        grp_ShuffleUnit1_fu_3437_conv1_weight_q0 = ShuffleConvs_1_Shuff_21_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        grp_ShuffleUnit1_fu_3437_conv1_weight_q0 = ShuffleConvs_1_Shuff_13_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        grp_ShuffleUnit1_fu_3437_conv1_weight_q0 = ShuffleConvs_1_Shuff_7_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_ShuffleUnit1_fu_3437_conv1_weight_q0 = ShuffleConvs_1_Shuff_1_q0.read();
    } else {
        grp_ShuffleUnit1_fu_3437_conv1_weight_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit1_fu_3437_conv2_bias_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        grp_ShuffleUnit1_fu_3437_conv2_bias_q0 = ShuffleConvs_1_Shuff_66_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        grp_ShuffleUnit1_fu_3437_conv2_bias_q0 = ShuffleConvs_1_Shuff_17_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        grp_ShuffleUnit1_fu_3437_conv2_bias_q0 = ShuffleConvs_1_Shuff_69_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        grp_ShuffleUnit1_fu_3437_conv2_bias_q0 = ShuffleConvs_1_Shuff_65_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        grp_ShuffleUnit1_fu_3437_conv2_bias_q0 = ShuffleConvs_1_Shuff_62_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        grp_ShuffleUnit1_fu_3437_conv2_bias_q0 = ShuffleConvs_1_Shuff_59_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        grp_ShuffleUnit1_fu_3437_conv2_bias_q0 = ShuffleConvs_1_Shuff_56_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_ShuffleUnit1_fu_3437_conv2_bias_q0 = ShuffleConvs_1_Shuff_52_q0.read();
    } else {
        grp_ShuffleUnit1_fu_3437_conv2_bias_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit1_fu_3437_conv2_weight_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        grp_ShuffleUnit1_fu_3437_conv2_weight_q0 = ShuffleConvs_1_Shuff_49_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        grp_ShuffleUnit1_fu_3437_conv2_weight_q0 = ShuffleConvs_1_Shuff_43_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        grp_ShuffleUnit1_fu_3437_conv2_weight_q0 = ShuffleConvs_1_Shuff_35_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        grp_ShuffleUnit1_fu_3437_conv2_weight_q0 = ShuffleConvs_1_Shuff_29_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        grp_ShuffleUnit1_fu_3437_conv2_weight_q0 = ShuffleConvs_1_Shuff_23_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        grp_ShuffleUnit1_fu_3437_conv2_weight_q0 = ShuffleConvs_1_Shuff_15_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        grp_ShuffleUnit1_fu_3437_conv2_weight_q0 = ShuffleConvs_1_Shuff_9_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_ShuffleUnit1_fu_3437_conv2_weight_q0 = ShuffleConvs_1_Shuff_3_q0.read();
    } else {
        grp_ShuffleUnit1_fu_3437_conv2_weight_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit1_fu_3437_conv3_bias_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        grp_ShuffleUnit1_fu_3437_conv3_bias_q0 = ShuffleConvs_1_Shuff_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        grp_ShuffleUnit1_fu_3437_conv3_bias_q0 = ShuffleConvs_1_Shuff_39_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        grp_ShuffleUnit1_fu_3437_conv3_bias_q0 = ShuffleConvs_1_Shuff_70_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        grp_ShuffleUnit1_fu_3437_conv3_bias_q0 = ShuffleConvs_1_Shuff_67_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        grp_ShuffleUnit1_fu_3437_conv3_bias_q0 = ShuffleConvs_1_Shuff_63_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        grp_ShuffleUnit1_fu_3437_conv3_bias_q0 = ShuffleConvs_1_Shuff_60_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        grp_ShuffleUnit1_fu_3437_conv3_bias_q0 = ShuffleConvs_1_Shuff_57_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_ShuffleUnit1_fu_3437_conv3_bias_q0 = ShuffleConvs_1_Shuff_53_q0.read();
    } else {
        grp_ShuffleUnit1_fu_3437_conv3_bias_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit1_fu_3437_conv3_weight_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        grp_ShuffleUnit1_fu_3437_conv3_weight_q0 = ShuffleConvs_1_Shuff_50_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        grp_ShuffleUnit1_fu_3437_conv3_weight_q0 = ShuffleConvs_1_Shuff_45_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        grp_ShuffleUnit1_fu_3437_conv3_weight_q0 = ShuffleConvs_1_Shuff_37_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        grp_ShuffleUnit1_fu_3437_conv3_weight_q0 = ShuffleConvs_1_Shuff_31_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        grp_ShuffleUnit1_fu_3437_conv3_weight_q0 = ShuffleConvs_1_Shuff_25_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        grp_ShuffleUnit1_fu_3437_conv3_weight_q0 = ShuffleConvs_1_Shuff_19_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        grp_ShuffleUnit1_fu_3437_conv3_weight_q0 = ShuffleConvs_1_Shuff_11_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_ShuffleUnit1_fu_3437_conv3_weight_q0 = ShuffleConvs_1_Shuff_5_q0.read();
    } else {
        grp_ShuffleUnit1_fu_3437_conv3_weight_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit1_fu_3437_input_r_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        grp_ShuffleUnit1_fu_3437_input_r_q0 = shuffleunit1_6_outpu_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        grp_ShuffleUnit1_fu_3437_input_r_q0 = shuffleunit1_5_outpu_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        grp_ShuffleUnit1_fu_3437_input_r_q0 = shuffleunit1_4_outpu_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        grp_ShuffleUnit1_fu_3437_input_r_q0 = shuffleunit1_3_outpu_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        grp_ShuffleUnit1_fu_3437_input_r_q0 = shuffleunit1_2_outpu_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        grp_ShuffleUnit1_fu_3437_input_r_q0 = shuffleunit1_1_outpu_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        grp_ShuffleUnit1_fu_3437_input_r_q0 = shuffleunit1_0_outpu_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_ShuffleUnit1_fu_3437_input_r_q0 = downsampleunit1_outp_q0.read();
    } else {
        grp_ShuffleUnit1_fu_3437_input_r_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit1_fu_3437_input_r_q1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        grp_ShuffleUnit1_fu_3437_input_r_q1 = shuffleunit1_6_outpu_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        grp_ShuffleUnit1_fu_3437_input_r_q1 = shuffleunit1_5_outpu_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        grp_ShuffleUnit1_fu_3437_input_r_q1 = shuffleunit1_4_outpu_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        grp_ShuffleUnit1_fu_3437_input_r_q1 = shuffleunit1_3_outpu_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        grp_ShuffleUnit1_fu_3437_input_r_q1 = shuffleunit1_2_outpu_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        grp_ShuffleUnit1_fu_3437_input_r_q1 = shuffleunit1_1_outpu_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        grp_ShuffleUnit1_fu_3437_input_r_q1 = shuffleunit1_0_outpu_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_ShuffleUnit1_fu_3437_input_r_q1 = downsampleunit1_outp_q1.read();
    } else {
        grp_ShuffleUnit1_fu_3437_input_r_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit2_fu_3513_ap_start() {
    grp_ShuffleUnit2_fu_3513_ap_start = ap_reg_grp_ShuffleUnit2_fu_3513_ap_start.read();
}

void ShuffleNetV2::thread_grp_ShuffleUnit2_fu_3513_conv1_bias_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        grp_ShuffleUnit2_fu_3513_conv1_bias_q0 = ShuffleConvs_2_Shuff_4_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        grp_ShuffleUnit2_fu_3513_conv1_bias_q0 = ShuffleConvs_2_Shuff_22_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        grp_ShuffleUnit2_fu_3513_conv1_bias_q0 = ShuffleConvs_2_Shuff_19_q0.read();
    } else {
        grp_ShuffleUnit2_fu_3513_conv1_bias_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit2_fu_3513_conv1_weight_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        grp_ShuffleUnit2_fu_3513_conv1_weight_q0 = ShuffleConvs_2_Shuff_13_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        grp_ShuffleUnit2_fu_3513_conv1_weight_q0 = ShuffleConvs_2_Shuff_8_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        grp_ShuffleUnit2_fu_3513_conv1_weight_q0 = ShuffleConvs_2_Shuff_5_q0.read();
    } else {
        grp_ShuffleUnit2_fu_3513_conv1_weight_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit2_fu_3513_conv2_bias_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        grp_ShuffleUnit2_fu_3513_conv2_bias_q0 = ShuffleConvs_2_Shuff_17_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        grp_ShuffleUnit2_fu_3513_conv2_bias_q0 = ShuffleConvs_2_Shuff_1_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        grp_ShuffleUnit2_fu_3513_conv2_bias_q0 = ShuffleConvs_2_Shuff_20_q0.read();
    } else {
        grp_ShuffleUnit2_fu_3513_conv2_bias_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit2_fu_3513_conv2_weight_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        grp_ShuffleUnit2_fu_3513_conv2_weight_q0 = ShuffleConvs_2_Shuff_15_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        grp_ShuffleUnit2_fu_3513_conv2_weight_q0 = ShuffleConvs_2_Shuff_9_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        grp_ShuffleUnit2_fu_3513_conv2_weight_q0 = ShuffleConvs_2_Shuff_6_q0.read();
    } else {
        grp_ShuffleUnit2_fu_3513_conv2_weight_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit2_fu_3513_conv3_bias_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        grp_ShuffleUnit2_fu_3513_conv3_bias_q0 = ShuffleConvs_2_Shuff_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        grp_ShuffleUnit2_fu_3513_conv3_bias_q0 = ShuffleConvs_2_Shuff_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        grp_ShuffleUnit2_fu_3513_conv3_bias_q0 = ShuffleConvs_2_Shuff_21_q0.read();
    } else {
        grp_ShuffleUnit2_fu_3513_conv3_bias_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit2_fu_3513_conv3_weight_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        grp_ShuffleUnit2_fu_3513_conv3_weight_q0 = ShuffleConvs_2_Shuff_18_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        grp_ShuffleUnit2_fu_3513_conv3_weight_q0 = ShuffleConvs_2_Shuff_11_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        grp_ShuffleUnit2_fu_3513_conv3_weight_q0 = ShuffleConvs_2_Shuff_7_q0.read();
    } else {
        grp_ShuffleUnit2_fu_3513_conv3_weight_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit2_fu_3513_input_r_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        grp_ShuffleUnit2_fu_3513_input_r_q0 = shuffleunit2_1_outpu_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        grp_ShuffleUnit2_fu_3513_input_r_q0 = shuffleunit2_0_outpu_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        grp_ShuffleUnit2_fu_3513_input_r_q0 = downsampleunit2_outp_q0.read();
    } else {
        grp_ShuffleUnit2_fu_3513_input_r_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_ShuffleUnit2_fu_3513_input_r_q1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        grp_ShuffleUnit2_fu_3513_input_r_q1 = shuffleunit2_1_outpu_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        grp_ShuffleUnit2_fu_3513_input_r_q1 = shuffleunit2_0_outpu_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        grp_ShuffleUnit2_fu_3513_input_r_q1 = downsampleunit2_outp_q1.read();
    } else {
        grp_ShuffleUnit2_fu_3513_input_r_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_avgpool_fu_3573_ap_start() {
    grp_avgpool_fu_3573_ap_start = ap_reg_grp_avgpool_fu_3573_ap_start.read();
}

void ShuffleNetV2::thread_grp_conv1_fu_3549_ap_start() {
    grp_conv1_fu_3549_ap_start = ap_reg_grp_conv1_fu_3549_ap_start.read();
}

void ShuffleNetV2::thread_grp_conv_last_fu_3561_ap_start() {
    grp_conv_last_fu_3561_ap_start = ap_reg_grp_conv_last_fu_3561_ap_start.read();
}

void ShuffleNetV2::thread_grp_fu_3581_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        grp_fu_3581_p1 = fc_bias_load_reg_10750.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        grp_fu_3581_p1 = tmp_130_i_reg_10740.read();
    } else {
        grp_fu_3581_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_h_22_fu_6329_p2() {
    h_22_fu_6329_p2 = (!h_reg_3191.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h_reg_3191.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i5_cast101_cast_fu_7702_p1() {
    i5_cast101_cast_fu_7702_p1 = esl_zext<6,5>(i5_reg_3225.read());
}

void ShuffleNetV2::thread_i5_cast102_cast_fu_7698_p1() {
    i5_cast102_cast_fu_7698_p1 = esl_zext<7,5>(i5_reg_3225.read());
}

void ShuffleNetV2::thread_i5_cast104_cast1_fu_7694_p1() {
    i5_cast104_cast1_fu_7694_p1 = esl_zext<8,5>(i5_reg_3225.read());
}

void ShuffleNetV2::thread_i5_cast105_cast1_fu_7686_p1() {
    i5_cast105_cast1_fu_7686_p1 = esl_zext<9,5>(i5_reg_3225.read());
}

void ShuffleNetV2::thread_i5_cast105_cast_fu_7690_p1() {
    i5_cast105_cast_fu_7690_p1 = esl_zext<10,5>(i5_reg_3225.read());
}

void ShuffleNetV2::thread_i5_cast1_fu_7678_p1() {
    i5_cast1_fu_7678_p1 = esl_zext<12,5>(i5_reg_3225.read());
}

void ShuffleNetV2::thread_i5_cast2_fu_7682_p1() {
    i5_cast2_fu_7682_p1 = esl_zext<11,5>(i5_reg_3225.read());
}

void ShuffleNetV2::thread_i7_cast92_cast_fu_8743_p1() {
    i7_cast92_cast_fu_8743_p1 = esl_zext<11,10>(i7_reg_3259.read());
}

void ShuffleNetV2::thread_i8_cast90_cast_fu_8779_p1() {
    i8_cast90_cast_fu_8779_p1 = esl_zext<10,4>(i8_reg_3271.read());
}

void ShuffleNetV2::thread_i_1_fu_4246_p2() {
    i_1_fu_4246_p2 = (!i_reg_3147.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_reg_3147.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_2_fu_8753_p2() {
    i_2_fu_8753_p2 = (!i7_reg_3259.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(i7_reg_3259.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void ShuffleNetV2::thread_i_3_fu_5384_p2() {
    i_3_fu_5384_p2 = (!i1_reg_3158.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i1_reg_3158.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_4_fu_8789_p2() {
    i_4_fu_8789_p2 = (!i8_reg_3271.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i8_reg_3271.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_i_5_fu_7712_p2() {
    i_5_fu_7712_p2 = (!i5_reg_3225.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i5_reg_3225.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_6_fu_6400_p2() {
    i_6_fu_6400_p2 = (!i3_reg_3203.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i3_reg_3203.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_7_fu_7225_p2() {
    i_7_fu_7225_p2 = (!i4_reg_3214.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i4_reg_3214.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_image_r_address0() {
    image_r_address0 = grp_conv1_fu_3549_input_r_address0.read();
}

void ShuffleNetV2::thread_image_r_ce0() {
    image_r_ce0 = grp_conv1_fu_3549_input_r_ce0.read();
}

void ShuffleNetV2::thread_k_1_fu_7891_p2() {
    k_1_fu_7891_p2 = (!k_reg_3237.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k_reg_3237.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_2_fu_8451_p2() {
    k_2_fu_8451_p2 = (!k6_reg_3248.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k6_reg_3248.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_p_lshr_f1_cast_fu_4034_p4() {
    p_lshr_f1_cast_fu_4034_p4 = co_reg_3124.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f_cast_fu_4080_p4() {
    p_lshr_f_cast_fu_4080_p4 = co_reg_3124.read().range(4, 2);
}

void ShuffleNetV2::thread_p_shl100_cast_fu_6034_p1() {
    p_shl100_cast_fu_6034_p1 = esl_zext<9,8>(tmp_401_fu_6026_p3.read());
}

void ShuffleNetV2::thread_p_shl101_cast_fu_6002_p1() {
    p_shl101_cast_fu_6002_p1 = esl_zext<8,7>(tmp_399_fu_5994_p3.read());
}

void ShuffleNetV2::thread_p_shl102_cast_fu_6313_p1() {
    p_shl102_cast_fu_6313_p1 = esl_sext<15,13>(tmp_127_fu_6305_p3.read());
}

void ShuffleNetV2::thread_p_shl103_cast_fu_6286_p1() {
    p_shl103_cast_fu_6286_p1 = esl_sext<15,12>(tmp_126_fu_6278_p3.read());
}

void ShuffleNetV2::thread_p_shl104_cast_fu_6259_p1() {
    p_shl104_cast_fu_6259_p1 = esl_sext<15,12>(tmp_125_fu_6251_p3.read());
}

void ShuffleNetV2::thread_p_shl105_cast_fu_6232_p1() {
    p_shl105_cast_fu_6232_p1 = esl_sext<15,11>(tmp_124_fu_6224_p3.read());
}

void ShuffleNetV2::thread_p_shl106_cast_fu_6205_p1() {
    p_shl106_cast_fu_6205_p1 = esl_sext<15,11>(tmp_123_fu_6197_p3.read());
}

void ShuffleNetV2::thread_p_shl107_cast_fu_7185_p3() {
    p_shl107_cast_fu_7185_p3 = esl_concat<13,2>(tmp_617_reg_9945.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl108_cast_fu_7005_p1() {
    p_shl108_cast_fu_7005_p1 = esl_zext<13,12>(tmp_615_fu_6997_p3.read());
}

void ShuffleNetV2::thread_p_shl109_cast_fu_7163_p3() {
    p_shl109_cast_fu_7163_p3 = esl_concat<13,2>(tmp_141_fu_7159_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl10_cast_fu_8469_p1() {
    p_shl10_cast_fu_8469_p1 = esl_zext<8,7>(p_shl10_fu_8461_p3.read());
}

void ShuffleNetV2::thread_p_shl10_fu_8461_p3() {
    p_shl10_fu_8461_p3 = esl_concat<2,5>(tmp_132_fu_8457_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl110_cast_fu_7136_p1() {
    p_shl110_cast_fu_7136_p1 = esl_zext<13,12>(tmp_610_fu_7129_p3.read());
}

void ShuffleNetV2::thread_p_shl111_cast_fu_7108_p3() {
    p_shl111_cast_fu_7108_p3 = esl_concat<13,2>(tmp_607_reg_9933.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl112_cast_fu_6952_p1() {
    p_shl112_cast_fu_6952_p1 = esl_zext<12,11>(tmp_605_fu_6948_p1.read());
}

void ShuffleNetV2::thread_p_shl113_cast_fu_7090_p1() {
    p_shl113_cast_fu_7090_p1 = esl_sext<15,14>(tmp_140_fu_7083_p3.read());
}

void ShuffleNetV2::thread_p_shl114_cast_fu_6849_p1() {
    p_shl114_cast_fu_6849_p1 = esl_zext<12,11>(tmp_599_fu_6845_p1.read());
}

void ShuffleNetV2::thread_p_shl115_cast_fu_7060_p1() {
    p_shl115_cast_fu_7060_p1 = esl_sext<15,14>(tmp_139_fu_7053_p3.read());
}

void ShuffleNetV2::thread_p_shl116_cast_fu_6804_p1() {
    p_shl116_cast_fu_6804_p1 = esl_zext<12,11>(tmp_593_fu_6796_p3.read());
}

void ShuffleNetV2::thread_p_shl117_cast_fu_7030_p1() {
    p_shl117_cast_fu_7030_p1 = esl_sext<15,14>(tmp_138_fu_7023_p3.read());
}

void ShuffleNetV2::thread_p_shl118_cast_fu_6766_p1() {
    p_shl118_cast_fu_6766_p1 = esl_zext<12,11>(tmp_588_fu_6758_p3.read());
}

void ShuffleNetV2::thread_p_shl119_cast_fu_6911_p3() {
    p_shl119_cast_fu_6911_p3 = esl_concat<13,2>(tmp_585_reg_9881.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl11_cast_fu_8481_p1() {
    p_shl11_cast_fu_8481_p1 = esl_zext<8,5>(p_shl11_fu_8473_p3.read());
}

void ShuffleNetV2::thread_p_shl11_fu_8473_p3() {
    p_shl11_fu_8473_p3 = esl_concat<2,3>(tmp_132_fu_8457_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl120_cast_fu_6724_p1() {
    p_shl120_cast_fu_6724_p1 = esl_zext<12,11>(tmp_583_fu_6716_p3.read());
}

void ShuffleNetV2::thread_p_shl121_cast_fu_6885_p3() {
    p_shl121_cast_fu_6885_p3 = esl_concat<13,2>(tmp_580_reg_9875.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl122_cast_fu_6682_p1() {
    p_shl122_cast_fu_6682_p1 = esl_zext<12,11>(tmp_578_fu_6674_p3.read());
}

void ShuffleNetV2::thread_p_shl123_cast_fu_6638_p1() {
    p_shl123_cast_fu_6638_p1 = esl_sext<15,13>(tmp_137_fu_6631_p3.read());
}

void ShuffleNetV2::thread_p_shl124_cast_fu_6558_p1() {
    p_shl124_cast_fu_6558_p1 = esl_zext<11,10>(tmp_573_fu_6550_p3.read());
}

void ShuffleNetV2::thread_p_shl125_cast_fu_6611_p3() {
    p_shl125_cast_fu_6611_p3 = esl_concat<8,2>(tmp_136_reg_9844.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl126_cast_fu_6508_p1() {
    p_shl126_cast_fu_6508_p1 = esl_zext<35,34>(tmp_568_fu_6504_p1.read());
}

void ShuffleNetV2::thread_p_shl127_cast_fu_6591_p1() {
    p_shl127_cast_fu_6591_p1 = esl_sext<15,14>(tmp_134_fu_6584_p3.read());
}

void ShuffleNetV2::thread_p_shl128_cast_fu_6471_p1() {
    p_shl128_cast_fu_6471_p1 = esl_zext<11,10>(tmp_562_fu_6463_p3.read());
}

void ShuffleNetV2::thread_p_shl12_cast_fu_5402_p1() {
    p_shl12_cast_fu_5402_p1 = esl_zext<10,9>(p_shl3_fu_5394_p3.read());
}

void ShuffleNetV2::thread_p_shl12_fu_5406_p3() {
    p_shl12_fu_5406_p3 = esl_concat<4,3>(tmp_130_fu_5390_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl130_cast_fu_7397_p1() {
    p_shl130_cast_fu_7397_p1 = esl_zext<14,13>(tmp_648_fu_7389_p3.read());
}

void ShuffleNetV2::thread_p_shl131_cast_fu_7630_p3() {
    p_shl131_cast_fu_7630_p3 = esl_concat<13,2>(tmp_145_fu_7626_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl132_cast_fu_7603_p1() {
    p_shl132_cast_fu_7603_p1 = esl_zext<13,12>(tmp_643_fu_7599_p1.read());
}

void ShuffleNetV2::thread_p_shl133_cast_fu_7562_p3() {
    p_shl133_cast_fu_7562_p3 = esl_concat<13,2>(tmp_639_reg_10067.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl134_cast_fu_7518_p1() {
    p_shl134_cast_fu_7518_p1 = esl_zext<13,12>(tmp_637_fu_7510_p3.read());
}

void ShuffleNetV2::thread_p_shl135_cast_fu_7536_p3() {
    p_shl135_cast_fu_7536_p3 = esl_concat<13,2>(tmp_634_reg_10061.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl136_cast_fu_7481_p1() {
    p_shl136_cast_fu_7481_p1 = esl_zext<13,12>(tmp_632_fu_7473_p3.read());
}

void ShuffleNetV2::thread_p_shl137_cast_fu_7442_p3() {
    p_shl137_cast_fu_7442_p3 = esl_concat<9,2>(tmp_144_reg_10034.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl138_cast_fu_7336_p1() {
    p_shl138_cast_fu_7336_p1 = esl_zext<35,34>(tmp_627_fu_7332_p1.read());
}

void ShuffleNetV2::thread_p_shl139_cast_fu_7419_p3() {
    p_shl139_cast_fu_7419_p3 = esl_concat<13,2>(tmp_623_reg_10023.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl13_cast1_fu_5414_p1() {
    p_shl13_cast1_fu_5414_p1 = esl_zext<8,7>(p_shl12_fu_5406_p3.read());
}

void ShuffleNetV2::thread_p_shl13_cast_fu_5418_p1() {
    p_shl13_cast_fu_5418_p1 = esl_zext<10,7>(p_shl12_fu_5406_p3.read());
}

void ShuffleNetV2::thread_p_shl13_fu_6410_p3() {
    p_shl13_fu_6410_p3 = esl_concat<1,5>(tmp_133_fu_6406_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl140_cast_fu_7297_p1() {
    p_shl140_cast_fu_7297_p1 = esl_zext<13,12>(tmp_621_fu_7289_p3.read());
}

void ShuffleNetV2::thread_p_shl14_cast_fu_5449_p1() {
    p_shl14_cast_fu_5449_p1 = esl_zext<8,5>(tmp_131_fu_5443_p2.read());
}

void ShuffleNetV2::thread_p_shl14_fu_6422_p3() {
    p_shl14_fu_6422_p3 = esl_concat<1,3>(tmp_133_fu_6406_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl15_cast_fu_6418_p1() {
    p_shl15_cast_fu_6418_p1 = esl_zext<7,6>(p_shl13_fu_6410_p3.read());
}

void ShuffleNetV2::thread_p_shl15_fu_7235_p3() {
    p_shl15_fu_7235_p3 = esl_concat<2,5>(tmp_142_fu_7231_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl16_cast_fu_6430_p1() {
    p_shl16_cast_fu_6430_p1 = esl_zext<7,4>(p_shl14_fu_6422_p3.read());
}

void ShuffleNetV2::thread_p_shl16_fu_7247_p3() {
    p_shl16_fu_7247_p3 = esl_concat<2,3>(tmp_142_fu_7231_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl17_cast_fu_7243_p1() {
    p_shl17_cast_fu_7243_p1 = esl_zext<8,7>(p_shl15_fu_7235_p3.read());
}

void ShuffleNetV2::thread_p_shl18_cast_fu_7255_p1() {
    p_shl18_cast_fu_7255_p1 = esl_zext<8,5>(p_shl16_fu_7247_p3.read());
}

void ShuffleNetV2::thread_p_shl19_cast_fu_3968_p1() {
    p_shl19_cast_fu_3968_p1 = esl_zext<14,13>(tmp_395_fu_3964_p1.read());
}

void ShuffleNetV2::thread_p_shl1_cast_fu_4012_p1() {
    p_shl1_cast_fu_4012_p1 = esl_zext<7,6>(p_shl1_fu_4004_p3.read());
}

void ShuffleNetV2::thread_p_shl1_fu_4004_p3() {
    p_shl1_fu_4004_p3 = esl_concat<1,5>(tmp_120_fu_4000_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl20_cast_fu_3986_p1() {
    p_shl20_cast_fu_3986_p1 = esl_zext<14,11>(tmp_397_fu_3982_p1.read());
}

void ShuffleNetV2::thread_p_shl21_cast_fu_3928_p1() {
    p_shl21_cast_fu_3928_p1 = esl_zext<14,13>(tmp_388_fu_3920_p3.read());
}

void ShuffleNetV2::thread_p_shl22_cast_fu_3940_p1() {
    p_shl22_cast_fu_3940_p1 = esl_zext<14,11>(tmp_390_fu_3932_p3.read());
}

void ShuffleNetV2::thread_p_shl23_cast_fu_3888_p1() {
    p_shl23_cast_fu_3888_p1 = esl_zext<14,13>(tmp_381_fu_3880_p3.read());
}

void ShuffleNetV2::thread_p_shl24_cast_fu_3900_p1() {
    p_shl24_cast_fu_3900_p1 = esl_zext<14,11>(tmp_384_fu_3892_p3.read());
}

void ShuffleNetV2::thread_p_shl25_cast_fu_3848_p1() {
    p_shl25_cast_fu_3848_p1 = esl_zext<14,13>(tmp_375_fu_3840_p3.read());
}

void ShuffleNetV2::thread_p_shl26_cast_fu_3860_p1() {
    p_shl26_cast_fu_3860_p1 = esl_zext<14,11>(tmp_377_fu_3852_p3.read());
}

void ShuffleNetV2::thread_p_shl27_cast_fu_3802_p1() {
    p_shl27_cast_fu_3802_p1 = esl_zext<13,12>(tmp_368_fu_3798_p1.read());
}

void ShuffleNetV2::thread_p_shl28_cast_fu_3820_p1() {
    p_shl28_cast_fu_3820_p1 = esl_zext<13,10>(tmp_371_fu_3816_p1.read());
}

void ShuffleNetV2::thread_p_shl29_cast_fu_3762_p1() {
    p_shl29_cast_fu_3762_p1 = esl_zext<13,12>(tmp_363_fu_3754_p3.read());
}

void ShuffleNetV2::thread_p_shl2_cast_fu_4024_p1() {
    p_shl2_cast_fu_4024_p1 = esl_zext<7,4>(p_shl2_fu_4016_p3.read());
}

void ShuffleNetV2::thread_p_shl2_fu_4016_p3() {
    p_shl2_fu_4016_p3 = esl_concat<1,3>(tmp_120_fu_4000_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl30_cast_fu_3774_p1() {
    p_shl30_cast_fu_3774_p1 = esl_zext<13,10>(tmp_364_fu_3766_p3.read());
}

void ShuffleNetV2::thread_p_shl31_cast_fu_3722_p1() {
    p_shl31_cast_fu_3722_p1 = esl_zext<13,12>(tmp_359_fu_3714_p3.read());
}

void ShuffleNetV2::thread_p_shl32_cast_fu_3734_p1() {
    p_shl32_cast_fu_3734_p1 = esl_zext<13,10>(tmp_360_fu_3726_p3.read());
}

void ShuffleNetV2::thread_p_shl33_cast_fu_3682_p1() {
    p_shl33_cast_fu_3682_p1 = esl_zext<12,11>(tmp_309_fu_3674_p3.read());
}

void ShuffleNetV2::thread_p_shl34_cast_fu_3694_p1() {
    p_shl34_cast_fu_3694_p1 = esl_zext<12,9>(tmp_355_fu_3686_p3.read());
}

void ShuffleNetV2::thread_p_shl35_cast_fu_3642_p1() {
    p_shl35_cast_fu_3642_p1 = esl_zext<11,10>(tmp_fu_3634_p3.read());
}

void ShuffleNetV2::thread_p_shl36_cast_fu_3654_p1() {
    p_shl36_cast_fu_3654_p1 = esl_zext<11,8>(tmp_218_fu_3646_p3.read());
}

void ShuffleNetV2::thread_p_shl37_cast_fu_4973_p1() {
    p_shl37_cast_fu_4973_p1 = esl_zext<18,17>(tmp_511_fu_4966_p3.read());
}

void ShuffleNetV2::thread_p_shl38_cast_fu_4984_p1() {
    p_shl38_cast_fu_4984_p1 = esl_zext<18,15>(tmp_512_fu_4977_p3.read());
}

void ShuffleNetV2::thread_p_shl39_cast_fu_4512_p1() {
    p_shl39_cast_fu_4512_p1 = esl_zext<17,16>(tmp_507_fu_4508_p1.read());
}

void ShuffleNetV2::thread_p_shl3_cast_fu_4070_p1() {
    p_shl3_cast_fu_4070_p1 = esl_zext<8,5>(tmp_122_fu_4064_p2.read());
}

void ShuffleNetV2::thread_p_shl3_fu_5394_p3() {
    p_shl3_fu_5394_p3 = esl_concat<4,5>(tmp_130_fu_5390_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl40_cast_fu_4520_p1() {
    p_shl40_cast_fu_4520_p1 = esl_zext<17,14>(tmp_508_fu_4516_p1.read());
}

void ShuffleNetV2::thread_p_shl41_cast_fu_5324_p1() {
    p_shl41_cast_fu_5324_p1 = esl_zext<17,16>(tmp_502_fu_5320_p1.read());
}

void ShuffleNetV2::thread_p_shl42_cast_fu_5339_p1() {
    p_shl42_cast_fu_5339_p1 = esl_zext<17,14>(tmp_504_fu_5335_p1.read());
}

void ShuffleNetV2::thread_p_shl43_cast_fu_5274_p1() {
    p_shl43_cast_fu_5274_p1 = esl_zext<17,16>(tmp_496_fu_5270_p1.read());
}

void ShuffleNetV2::thread_p_shl44_cast_fu_5289_p1() {
    p_shl44_cast_fu_5289_p1 = esl_zext<17,14>(tmp_498_fu_5285_p1.read());
}

void ShuffleNetV2::thread_p_shl45_cast_fu_5228_p1() {
    p_shl45_cast_fu_5228_p1 = esl_zext<17,16>(tmp_491_fu_5221_p3.read());
}

void ShuffleNetV2::thread_p_shl46_cast_fu_5239_p1() {
    p_shl46_cast_fu_5239_p1 = esl_zext<17,14>(tmp_492_fu_5232_p3.read());
}

void ShuffleNetV2::thread_p_shl47_cast_fu_5166_p1() {
    p_shl47_cast_fu_5166_p1 = esl_zext<17,16>(tmp_487_fu_5159_p3.read());
}

void ShuffleNetV2::thread_p_shl48_cast_fu_5177_p1() {
    p_shl48_cast_fu_5177_p1 = esl_zext<17,14>(tmp_488_fu_5170_p3.read());
}

void ShuffleNetV2::thread_p_shl49_cast_fu_5124_p1() {
    p_shl49_cast_fu_5124_p1 = esl_zext<17,16>(tmp_483_fu_5117_p3.read());
}

void ShuffleNetV2::thread_p_shl4_cast_fu_7909_p1() {
    p_shl4_cast_fu_7909_p1 = esl_zext<7,6>(p_shl4_fu_7901_p3.read());
}

void ShuffleNetV2::thread_p_shl4_fu_7901_p3() {
    p_shl4_fu_7901_p3 = esl_concat<1,5>(tmp_129_fu_7897_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl50_cast_fu_5135_p1() {
    p_shl50_cast_fu_5135_p1 = esl_zext<17,14>(tmp_484_fu_5128_p3.read());
}

void ShuffleNetV2::thread_p_shl51_cast_fu_5052_p1() {
    p_shl51_cast_fu_5052_p1 = esl_zext<17,16>(tmp_479_fu_5045_p3.read());
}

void ShuffleNetV2::thread_p_shl52_cast_fu_5063_p1() {
    p_shl52_cast_fu_5063_p1 = esl_zext<17,14>(tmp_480_fu_5056_p3.read());
}

void ShuffleNetV2::thread_p_shl53_cast_fu_5010_p1() {
    p_shl53_cast_fu_5010_p1 = esl_zext<17,16>(tmp_475_fu_5003_p3.read());
}

void ShuffleNetV2::thread_p_shl54_cast_fu_5021_p1() {
    p_shl54_cast_fu_5021_p1 = esl_zext<17,14>(tmp_476_fu_5014_p3.read());
}

void ShuffleNetV2::thread_p_shl55_cast_fu_4911_p1() {
    p_shl55_cast_fu_4911_p1 = esl_zext<17,16>(tmp_471_fu_4904_p3.read());
}

void ShuffleNetV2::thread_p_shl56_cast_fu_4922_p1() {
    p_shl56_cast_fu_4922_p1 = esl_zext<17,14>(tmp_472_fu_4915_p3.read());
}

void ShuffleNetV2::thread_p_shl57_cast_fu_4869_p1() {
    p_shl57_cast_fu_4869_p1 = esl_zext<17,16>(tmp_467_fu_4862_p3.read());
}

void ShuffleNetV2::thread_p_shl58_cast_fu_4880_p1() {
    p_shl58_cast_fu_4880_p1 = esl_zext<17,14>(tmp_468_fu_4873_p3.read());
}

void ShuffleNetV2::thread_p_shl59_cast_fu_4795_p1() {
    p_shl59_cast_fu_4795_p1 = esl_zext<16,15>(tmp_462_fu_4791_p1.read());
}

void ShuffleNetV2::thread_p_shl5_cast_fu_7921_p1() {
    p_shl5_cast_fu_7921_p1 = esl_zext<7,4>(p_shl5_fu_7913_p3.read());
}

void ShuffleNetV2::thread_p_shl5_fu_7913_p3() {
    p_shl5_fu_7913_p3 = esl_concat<1,3>(tmp_129_fu_7897_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl60_cast_fu_4810_p1() {
    p_shl60_cast_fu_4810_p1 = esl_zext<16,13>(tmp_464_fu_4806_p1.read());
}

void ShuffleNetV2::thread_p_shl61_cast_fu_4753_p1() {
    p_shl61_cast_fu_4753_p1 = esl_zext<16,15>(tmp_457_fu_4745_p3.read());
}

void ShuffleNetV2::thread_p_shl62_cast_fu_4765_p1() {
    p_shl62_cast_fu_4765_p1 = esl_zext<16,13>(tmp_458_fu_4757_p3.read());
}

void ShuffleNetV2::thread_p_shl63_cast_fu_4700_p1() {
    p_shl63_cast_fu_4700_p1 = esl_zext<16,15>(tmp_453_fu_4693_p3.read());
}

void ShuffleNetV2::thread_p_shl64_cast_fu_4711_p1() {
    p_shl64_cast_fu_4711_p1 = esl_zext<16,13>(tmp_454_fu_4704_p3.read());
}

void ShuffleNetV2::thread_p_shl65_cast_fu_4658_p1() {
    p_shl65_cast_fu_4658_p1 = esl_zext<16,15>(tmp_449_fu_4651_p3.read());
}

void ShuffleNetV2::thread_p_shl66_cast_fu_4669_p1() {
    p_shl66_cast_fu_4669_p1 = esl_zext<16,13>(tmp_450_fu_4662_p3.read());
}

void ShuffleNetV2::thread_p_shl67_cast_fu_4584_p1() {
    p_shl67_cast_fu_4584_p1 = esl_zext<16,15>(tmp_445_fu_4577_p3.read());
}

void ShuffleNetV2::thread_p_shl68_cast_fu_4595_p1() {
    p_shl68_cast_fu_4595_p1 = esl_zext<16,13>(tmp_446_fu_4588_p3.read());
}

void ShuffleNetV2::thread_p_shl69_cast_fu_4542_p1() {
    p_shl69_cast_fu_4542_p1 = esl_zext<16,15>(tmp_441_fu_4535_p3.read());
}

void ShuffleNetV2::thread_p_shl6_cast_fu_4264_p1() {
    p_shl6_cast_fu_4264_p1 = esl_zext<8,7>(p_shl6_fu_4256_p3.read());
}

void ShuffleNetV2::thread_p_shl6_fu_4256_p3() {
    p_shl6_fu_4256_p3 = esl_concat<2,5>(tmp_128_fu_4252_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl70_cast_fu_4553_p1() {
    p_shl70_cast_fu_4553_p1 = esl_zext<16,13>(tmp_442_fu_4546_p3.read());
}

void ShuffleNetV2::thread_p_shl71_cast_fu_4438_p1() {
    p_shl71_cast_fu_4438_p1 = esl_zext<15,14>(tmp_437_fu_4431_p3.read());
}

void ShuffleNetV2::thread_p_shl72_cast_fu_4449_p1() {
    p_shl72_cast_fu_4449_p1 = esl_zext<15,12>(tmp_438_fu_4442_p3.read());
}

void ShuffleNetV2::thread_p_shl74_cast_fu_4352_p1() {
    p_shl74_cast_fu_4352_p1 = esl_sext<13,11>(tmp_434_fu_4344_p3.read());
}

void ShuffleNetV2::thread_p_shl75_cast_fu_4396_p1() {
    p_shl75_cast_fu_4396_p1 = esl_zext<15,14>(tmp_429_fu_4389_p3.read());
}

void ShuffleNetV2::thread_p_shl76_cast_fu_4407_p1() {
    p_shl76_cast_fu_4407_p1 = esl_zext<15,12>(tmp_430_fu_4400_p3.read());
}

void ShuffleNetV2::thread_p_shl77_cast_fu_5928_p1() {
    p_shl77_cast_fu_5928_p1 = esl_zext<19,18>(tmp_558_fu_5921_p3.read());
}

void ShuffleNetV2::thread_p_shl78_cast_fu_5939_p1() {
    p_shl78_cast_fu_5939_p1 = esl_zext<19,16>(tmp_559_fu_5932_p3.read());
}

void ShuffleNetV2::thread_p_shl79_cast_fu_5890_p1() {
    p_shl79_cast_fu_5890_p1 = esl_zext<19,18>(tmp_554_fu_5883_p3.read());
}

void ShuffleNetV2::thread_p_shl7_cast_fu_4276_p1() {
    p_shl7_cast_fu_4276_p1 = esl_zext<8,5>(p_shl7_fu_4268_p3.read());
}

void ShuffleNetV2::thread_p_shl7_fu_4268_p3() {
    p_shl7_fu_4268_p3 = esl_concat<2,3>(tmp_128_fu_4252_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl80_cast_fu_5901_p1() {
    p_shl80_cast_fu_5901_p1 = esl_zext<19,16>(tmp_555_fu_5894_p3.read());
}

void ShuffleNetV2::thread_p_shl81_cast_fu_5852_p1() {
    p_shl81_cast_fu_5852_p1 = esl_zext<19,18>(tmp_550_fu_5845_p3.read());
}

void ShuffleNetV2::thread_p_shl82_cast_fu_5863_p1() {
    p_shl82_cast_fu_5863_p1 = esl_zext<19,16>(tmp_551_fu_5856_p3.read());
}

void ShuffleNetV2::thread_p_shl83_cast_fu_5784_p1() {
    p_shl83_cast_fu_5784_p1 = esl_zext<19,18>(tmp_546_fu_5777_p3.read());
}

void ShuffleNetV2::thread_p_shl84_cast_fu_5795_p1() {
    p_shl84_cast_fu_5795_p1 = esl_zext<19,16>(tmp_547_fu_5788_p3.read());
}

void ShuffleNetV2::thread_p_shl85_cast_fu_5738_p1() {
    p_shl85_cast_fu_5738_p1 = esl_zext<18,17>(tmp_541_fu_5734_p1.read());
}

void ShuffleNetV2::thread_p_shl86_cast_fu_5753_p1() {
    p_shl86_cast_fu_5753_p1 = esl_zext<18,15>(tmp_543_fu_5749_p1.read());
}

void ShuffleNetV2::thread_p_shl87_cast_fu_5670_p1() {
    p_shl87_cast_fu_5670_p1 = esl_zext<18,17>(tmp_536_fu_5663_p3.read());
}

void ShuffleNetV2::thread_p_shl88_cast_fu_5681_p1() {
    p_shl88_cast_fu_5681_p1 = esl_zext<18,15>(tmp_537_fu_5674_p3.read());
}

void ShuffleNetV2::thread_p_shl89_cast_fu_5628_p1() {
    p_shl89_cast_fu_5628_p1 = esl_zext<18,17>(tmp_532_fu_5621_p3.read());
}

void ShuffleNetV2::thread_p_shl8_cast_fu_4309_p1() {
    p_shl8_cast_fu_4309_p1 = esl_zext<7,6>(p_shl8_fu_4301_p3.read());
}

void ShuffleNetV2::thread_p_shl8_fu_4301_p3() {
    p_shl8_fu_4301_p3 = esl_concat<2,4>(tmp_128_fu_4252_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl90_cast_fu_5639_p1() {
    p_shl90_cast_fu_5639_p1 = esl_zext<18,15>(tmp_533_fu_5632_p3.read());
}

void ShuffleNetV2::thread_p_shl91_cast_fu_5555_p1() {
    p_shl91_cast_fu_5555_p1 = esl_zext<18,17>(tmp_528_fu_5548_p3.read());
}

void ShuffleNetV2::thread_p_shl92_cast_fu_5566_p1() {
    p_shl92_cast_fu_5566_p1 = esl_zext<18,15>(tmp_529_fu_5559_p3.read());
}

void ShuffleNetV2::thread_p_shl94_cast_fu_5480_p1() {
    p_shl94_cast_fu_5480_p1 = esl_sext<15,13>(tmp_525_fu_5472_p3.read());
}

void ShuffleNetV2::thread_p_shl95_cast_fu_5513_p1() {
    p_shl95_cast_fu_5513_p1 = esl_zext<18,17>(tmp_520_fu_5506_p3.read());
}

void ShuffleNetV2::thread_p_shl96_cast_fu_5524_p1() {
    p_shl96_cast_fu_5524_p1 = esl_zext<18,15>(tmp_521_fu_5517_p3.read());
}

void ShuffleNetV2::thread_p_shl97_cast_fu_6130_p1() {
    p_shl97_cast_fu_6130_p1 = esl_zext<10,9>(tmp_408_fu_6126_p1.read());
}

void ShuffleNetV2::thread_p_shl98_cast_fu_6090_p1() {
    p_shl98_cast_fu_6090_p1 = esl_zext<10,9>(tmp_405_fu_6082_p3.read());
}

void ShuffleNetV2::thread_p_shl99_cast_fu_6062_p1() {
    p_shl99_cast_fu_6062_p1 = esl_zext<10,9>(tmp_403_fu_6054_p3.read());
}

void ShuffleNetV2::thread_p_shl9_cast_fu_4321_p1() {
    p_shl9_cast_fu_4321_p1 = esl_zext<7,4>(p_shl9_fu_4313_p3.read());
}

void ShuffleNetV2::thread_p_shl9_fu_4313_p3() {
    p_shl9_fu_4313_p3 = esl_concat<2,2>(tmp_128_fu_4252_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl_cast_fu_4060_p1() {
    p_shl_cast_fu_4060_p1 = esl_zext<8,7>(p_shl_fu_4052_p3.read());
}

void ShuffleNetV2::thread_p_shl_fu_4052_p3() {
    p_shl_fu_4052_p3 = esl_concat<2,5>(tmp_121_fu_4048_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_shuffle_conv_1x1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_648_cast_fu_5954_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_640_cast_fu_5878_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_632_cast_fu_5772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_622_cast_fu_5658_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_607_cast_fu_5543_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_590_cast_fu_5370_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_578_cast_fu_5308_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_568_cast_fu_5196_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_560_cast_fu_5082_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_552_cast_fu_4941_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_544_cast_fu_4836_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_534_cast_fu_4730_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_526_cast_fu_4614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_518_cast_fu_4468_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_485_cast_fu_4217_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_483_cast_fu_4209_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_481_cast_fu_4180_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_479_cast_fu_4156_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_477_cast_fu_4127_p1.read());
    } else {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffle_conv_1x1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) (tmp_644_cast_fu_5916_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) (tmp_636_cast_fu_5810_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) (tmp_626_cast_fu_5700_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) (tmp_618_cast_fu_5585_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) (tmp_594_cast_fu_5374_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) (tmp_584_cast_fu_5366_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) (tmp_572_cast_fu_5258_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) (tmp_564_cast_fu_5154_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) (tmp_556_cast_fu_5040_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) (tmp_548_cast_fu_4899_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) (tmp_538_cast_fu_4832_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) (tmp_530_cast_fu_4688_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) (tmp_522_cast_fu_4572_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) (tmp_506_cast_fu_4426_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) (tmp_484_cast_fu_4213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) (tmp_482_cast_fu_4189_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) (tmp_480_cast_fu_4166_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) (tmp_478_cast_fu_4137_p1.read());
    } else {
        shuffle_conv_1x1_address1 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffle_conv_1x1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()))) {
        shuffle_conv_1x1_ce0 = ap_const_logic_1;
    } else {
        shuffle_conv_1x1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffle_conv_1x1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()))) {
        shuffle_conv_1x1_ce1 = ap_const_logic_1;
    } else {
        shuffle_conv_1x1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffle_conv_3x3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_757_cast_fu_7670_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_744_cast_fu_7554_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_721_cast_fu_7215_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_709_cast_fu_7207_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_695_cast_fu_7075_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_683_cast_fu_6929_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_671_cast_fu_6653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_601_cast_fu_6381_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_599_cast_fu_6363_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_597_cast_fu_6344_p1.read());
    } else {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffle_conv_3x3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        shuffle_conv_3x3_address1 =  (sc_lv<14>) (tmp_763_cast_fu_7674_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        shuffle_conv_3x3_address1 =  (sc_lv<14>) (tmp_750_cast_fu_7580_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        shuffle_conv_3x3_address1 =  (sc_lv<14>) (tmp_731_cast_fu_7437_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        shuffle_conv_3x3_address1 =  (sc_lv<14>) (tmp_715_cast_fu_7211_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        shuffle_conv_3x3_address1 =  (sc_lv<14>) (tmp_702_cast_fu_7203_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        shuffle_conv_3x3_address1 =  (sc_lv<14>) (tmp_689_cast_fu_7045_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        shuffle_conv_3x3_address1 =  (sc_lv<14>) (tmp_677_cast_fu_6903_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        shuffle_conv_3x3_address1 =  (sc_lv<14>) (tmp_658_cast_fu_6606_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        shuffle_conv_3x3_address1 =  (sc_lv<14>) (tmp_600_cast_fu_6372_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        shuffle_conv_3x3_address1 =  (sc_lv<14>) (tmp_598_cast_fu_6354_p1.read());
    } else {
        shuffle_conv_3x3_address1 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffle_conv_3x3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        shuffle_conv_3x3_ce0 = ap_const_logic_1;
    } else {
        shuffle_conv_3x3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffle_conv_3x3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        shuffle_conv_3x3_ce1 = ap_const_logic_1;
    } else {
        shuffle_conv_3x3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_0_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        shuffleunit0_0_outpu_address0 = grp_ShuffleUnit0_fu_3401_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        shuffleunit0_0_outpu_address0 = grp_ShuffleUnit0_fu_3401_input_r_address0.read();
    } else {
        shuffleunit0_0_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit0_0_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        shuffleunit0_0_outpu_ce0 = grp_ShuffleUnit0_fu_3401_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        shuffleunit0_0_outpu_ce0 = grp_ShuffleUnit0_fu_3401_input_r_ce0.read();
    } else {
        shuffleunit0_0_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_0_outpu_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        shuffleunit0_0_outpu_ce1 = grp_ShuffleUnit0_fu_3401_input_r_ce1.read();
    } else {
        shuffleunit0_0_outpu_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_0_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        shuffleunit0_0_outpu_we0 = grp_ShuffleUnit0_fu_3401_output_r_we0.read();
    } else {
        shuffleunit0_0_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_1_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        shuffleunit0_1_outpu_address0 = grp_ShuffleUnit0_fu_3401_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        shuffleunit0_1_outpu_address0 = grp_ShuffleUnit0_fu_3401_input_r_address0.read();
    } else {
        shuffleunit0_1_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit0_1_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        shuffleunit0_1_outpu_ce0 = grp_ShuffleUnit0_fu_3401_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        shuffleunit0_1_outpu_ce0 = grp_ShuffleUnit0_fu_3401_input_r_ce0.read();
    } else {
        shuffleunit0_1_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_1_outpu_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        shuffleunit0_1_outpu_ce1 = grp_ShuffleUnit0_fu_3401_input_r_ce1.read();
    } else {
        shuffleunit0_1_outpu_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_1_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        shuffleunit0_1_outpu_we0 = grp_ShuffleUnit0_fu_3401_output_r_we0.read();
    } else {
        shuffleunit0_1_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_2_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        shuffleunit0_2_outpu_address0 = grp_ShuffleUnit0_fu_3401_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        shuffleunit0_2_outpu_address0 = grp_DownsampleUnit1_fu_3345_shuffleunit0_2_outpu_address0.read();
    } else {
        shuffleunit0_2_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit0_2_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        shuffleunit0_2_outpu_ce0 = grp_ShuffleUnit0_fu_3401_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        shuffleunit0_2_outpu_ce0 = grp_DownsampleUnit1_fu_3345_shuffleunit0_2_outpu_ce0.read();
    } else {
        shuffleunit0_2_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_2_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read())) {
        shuffleunit0_2_outpu_we0 = grp_ShuffleUnit0_fu_3401_output_r_we0.read();
    } else {
        shuffleunit0_2_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_0_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        shuffleunit1_0_outpu_address0 = grp_ShuffleUnit1_fu_3437_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        shuffleunit1_0_outpu_address0 = grp_ShuffleUnit1_fu_3437_input_r_address0.read();
    } else {
        shuffleunit1_0_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_0_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        shuffleunit1_0_outpu_ce0 = grp_ShuffleUnit1_fu_3437_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        shuffleunit1_0_outpu_ce0 = grp_ShuffleUnit1_fu_3437_input_r_ce0.read();
    } else {
        shuffleunit1_0_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_0_outpu_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        shuffleunit1_0_outpu_ce1 = grp_ShuffleUnit1_fu_3437_input_r_ce1.read();
    } else {
        shuffleunit1_0_outpu_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_0_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        shuffleunit1_0_outpu_we0 = grp_ShuffleUnit1_fu_3437_output_r_we0.read();
    } else {
        shuffleunit1_0_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_1_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        shuffleunit1_1_outpu_address0 = grp_ShuffleUnit1_fu_3437_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        shuffleunit1_1_outpu_address0 = grp_ShuffleUnit1_fu_3437_input_r_address0.read();
    } else {
        shuffleunit1_1_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_1_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        shuffleunit1_1_outpu_ce0 = grp_ShuffleUnit1_fu_3437_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        shuffleunit1_1_outpu_ce0 = grp_ShuffleUnit1_fu_3437_input_r_ce0.read();
    } else {
        shuffleunit1_1_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_1_outpu_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        shuffleunit1_1_outpu_ce1 = grp_ShuffleUnit1_fu_3437_input_r_ce1.read();
    } else {
        shuffleunit1_1_outpu_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_1_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read())) {
        shuffleunit1_1_outpu_we0 = grp_ShuffleUnit1_fu_3437_output_r_we0.read();
    } else {
        shuffleunit1_1_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_2_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        shuffleunit1_2_outpu_address0 = grp_ShuffleUnit1_fu_3437_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        shuffleunit1_2_outpu_address0 = grp_ShuffleUnit1_fu_3437_input_r_address0.read();
    } else {
        shuffleunit1_2_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_2_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        shuffleunit1_2_outpu_ce0 = grp_ShuffleUnit1_fu_3437_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        shuffleunit1_2_outpu_ce0 = grp_ShuffleUnit1_fu_3437_input_r_ce0.read();
    } else {
        shuffleunit1_2_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_2_outpu_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        shuffleunit1_2_outpu_ce1 = grp_ShuffleUnit1_fu_3437_input_r_ce1.read();
    } else {
        shuffleunit1_2_outpu_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_2_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        shuffleunit1_2_outpu_we0 = grp_ShuffleUnit1_fu_3437_output_r_we0.read();
    } else {
        shuffleunit1_2_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_3_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        shuffleunit1_3_outpu_address0 = grp_ShuffleUnit1_fu_3437_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        shuffleunit1_3_outpu_address0 = grp_ShuffleUnit1_fu_3437_input_r_address0.read();
    } else {
        shuffleunit1_3_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_3_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        shuffleunit1_3_outpu_ce0 = grp_ShuffleUnit1_fu_3437_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        shuffleunit1_3_outpu_ce0 = grp_ShuffleUnit1_fu_3437_input_r_ce0.read();
    } else {
        shuffleunit1_3_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_3_outpu_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        shuffleunit1_3_outpu_ce1 = grp_ShuffleUnit1_fu_3437_input_r_ce1.read();
    } else {
        shuffleunit1_3_outpu_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_3_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        shuffleunit1_3_outpu_we0 = grp_ShuffleUnit1_fu_3437_output_r_we0.read();
    } else {
        shuffleunit1_3_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_4_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        shuffleunit1_4_outpu_address0 = grp_ShuffleUnit1_fu_3437_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        shuffleunit1_4_outpu_address0 = grp_ShuffleUnit1_fu_3437_input_r_address0.read();
    } else {
        shuffleunit1_4_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_4_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        shuffleunit1_4_outpu_ce0 = grp_ShuffleUnit1_fu_3437_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        shuffleunit1_4_outpu_ce0 = grp_ShuffleUnit1_fu_3437_input_r_ce0.read();
    } else {
        shuffleunit1_4_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_4_outpu_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        shuffleunit1_4_outpu_ce1 = grp_ShuffleUnit1_fu_3437_input_r_ce1.read();
    } else {
        shuffleunit1_4_outpu_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_4_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        shuffleunit1_4_outpu_we0 = grp_ShuffleUnit1_fu_3437_output_r_we0.read();
    } else {
        shuffleunit1_4_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_5_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        shuffleunit1_5_outpu_address0 = grp_ShuffleUnit1_fu_3437_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        shuffleunit1_5_outpu_address0 = grp_ShuffleUnit1_fu_3437_input_r_address0.read();
    } else {
        shuffleunit1_5_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_5_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        shuffleunit1_5_outpu_ce0 = grp_ShuffleUnit1_fu_3437_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        shuffleunit1_5_outpu_ce0 = grp_ShuffleUnit1_fu_3437_input_r_ce0.read();
    } else {
        shuffleunit1_5_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_5_outpu_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        shuffleunit1_5_outpu_ce1 = grp_ShuffleUnit1_fu_3437_input_r_ce1.read();
    } else {
        shuffleunit1_5_outpu_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_5_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        shuffleunit1_5_outpu_we0 = grp_ShuffleUnit1_fu_3437_output_r_we0.read();
    } else {
        shuffleunit1_5_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_6_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        shuffleunit1_6_outpu_address0 = grp_ShuffleUnit1_fu_3437_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        shuffleunit1_6_outpu_address0 = grp_ShuffleUnit1_fu_3437_input_r_address0.read();
    } else {
        shuffleunit1_6_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_6_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        shuffleunit1_6_outpu_ce0 = grp_ShuffleUnit1_fu_3437_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        shuffleunit1_6_outpu_ce0 = grp_ShuffleUnit1_fu_3437_input_r_ce0.read();
    } else {
        shuffleunit1_6_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_6_outpu_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        shuffleunit1_6_outpu_ce1 = grp_ShuffleUnit1_fu_3437_input_r_ce1.read();
    } else {
        shuffleunit1_6_outpu_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_6_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        shuffleunit1_6_outpu_we0 = grp_ShuffleUnit1_fu_3437_output_r_we0.read();
    } else {
        shuffleunit1_6_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_7_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        shuffleunit1_7_outpu_address0 = grp_ShuffleUnit1_fu_3437_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        shuffleunit1_7_outpu_address0 = grp_DownsampleUnit2_fu_3373_shuffleunit1_7_outpu_address0.read();
    } else {
        shuffleunit1_7_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_7_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        shuffleunit1_7_outpu_ce0 = grp_ShuffleUnit1_fu_3437_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        shuffleunit1_7_outpu_ce0 = grp_DownsampleUnit2_fu_3373_shuffleunit1_7_outpu_ce0.read();
    } else {
        shuffleunit1_7_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_7_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        shuffleunit1_7_outpu_we0 = grp_ShuffleUnit1_fu_3437_output_r_we0.read();
    } else {
        shuffleunit1_7_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_0_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        shuffleunit2_0_outpu_address0 = grp_ShuffleUnit2_fu_3513_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        shuffleunit2_0_outpu_address0 = grp_ShuffleUnit2_fu_3513_input_r_address0.read();
    } else {
        shuffleunit2_0_outpu_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_0_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        shuffleunit2_0_outpu_ce0 = grp_ShuffleUnit2_fu_3513_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        shuffleunit2_0_outpu_ce0 = grp_ShuffleUnit2_fu_3513_input_r_ce0.read();
    } else {
        shuffleunit2_0_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_0_outpu_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        shuffleunit2_0_outpu_ce1 = grp_ShuffleUnit2_fu_3513_input_r_ce1.read();
    } else {
        shuffleunit2_0_outpu_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_0_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        shuffleunit2_0_outpu_we0 = grp_ShuffleUnit2_fu_3513_output_r_we0.read();
    } else {
        shuffleunit2_0_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_1_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        shuffleunit2_1_outpu_address0 = grp_ShuffleUnit2_fu_3513_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        shuffleunit2_1_outpu_address0 = grp_ShuffleUnit2_fu_3513_input_r_address0.read();
    } else {
        shuffleunit2_1_outpu_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_1_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        shuffleunit2_1_outpu_ce0 = grp_ShuffleUnit2_fu_3513_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        shuffleunit2_1_outpu_ce0 = grp_ShuffleUnit2_fu_3513_input_r_ce0.read();
    } else {
        shuffleunit2_1_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_1_outpu_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        shuffleunit2_1_outpu_ce1 = grp_ShuffleUnit2_fu_3513_input_r_ce1.read();
    } else {
        shuffleunit2_1_outpu_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_1_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        shuffleunit2_1_outpu_we0 = grp_ShuffleUnit2_fu_3513_output_r_we0.read();
    } else {
        shuffleunit2_1_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        shuffleunit2_2_outpu_address0 = grp_conv_last_fu_3561_shuffleunit2_2_outpu_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        shuffleunit2_2_outpu_address0 = grp_ShuffleUnit2_fu_3513_output_r_address0.read();
    } else {
        shuffleunit2_2_outpu_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        shuffleunit2_2_outpu_ce0 = grp_conv_last_fu_3561_shuffleunit2_2_outpu_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        shuffleunit2_2_outpu_ce0 = grp_ShuffleUnit2_fu_3513_output_r_ce0.read();
    } else {
        shuffleunit2_2_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        shuffleunit2_2_outpu_we0 = grp_ShuffleUnit2_fu_3513_output_r_we0.read();
    } else {
        shuffleunit2_2_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_tmp10_fu_4851_p2() {
    tmp10_fu_4851_p2 = (!ap_const_lv11_438.is_01() || !tmp_330_cast1_fu_4829_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_330_cast1_fu_4829_p1.read()));
}

void ShuffleNetV2::thread_tmp11_fu_4946_p2() {
    tmp11_fu_4946_p2 = (!ap_const_lv11_498.is_01() || !tmp_330_cast1_reg_9297.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_330_cast1_reg_9297.read()));
}

void ShuffleNetV2::thread_tmp12_fu_4956_p2() {
    tmp12_fu_4956_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_330_cast1_reg_9297.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_330_cast1_reg_9297.read()));
}

void ShuffleNetV2::thread_tmp13_fu_5087_p2() {
    tmp13_fu_5087_p2 = (!ap_const_lv11_558.is_01() || !tmp_330_cast1_reg_9297.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_330_cast1_reg_9297.read()));
}

void ShuffleNetV2::thread_tmp14_fu_5097_p2() {
    tmp14_fu_5097_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_330_cast1_reg_9297.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_330_cast1_reg_9297.read()));
}

void ShuffleNetV2::thread_tmp15_fu_5107_p2() {
    tmp15_fu_5107_p2 = (!ap_const_lv11_618.is_01() || !tmp_330_cast1_reg_9297.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_618) + sc_bigint<11>(tmp_330_cast1_reg_9297.read()));
}

void ShuffleNetV2::thread_tmp16_fu_5201_p2() {
    tmp16_fu_5201_p2 = (!ap_const_lv10_278.is_01() || !tmp_330_cast127_cast_reg_9181.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_330_cast127_cast_reg_9181.read()));
}

void ShuffleNetV2::thread_tmp17_fu_5211_p2() {
    tmp17_fu_5211_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_330_cast127_cast_reg_9181.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_330_cast127_cast_reg_9181.read()));
}

void ShuffleNetV2::thread_tmp19_cast1_fu_4639_p1() {
    tmp19_cast1_fu_4639_p1 = esl_sext<11,9>(tmp3_reg_9200.read());
}

void ShuffleNetV2::thread_tmp19_cast_fu_4642_p1() {
    tmp19_cast_fu_4642_p1 = esl_zext<12,11>(tmp19_cast1_fu_4639_p1.read());
}

void ShuffleNetV2::thread_tmp1_fu_4290_p2() {
    tmp1_fu_4290_p2 = (!ap_const_lv9_D8.is_01() || !tmp_330_cast127_cast_1_fu_4286_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_D8) + sc_bigint<9>(tmp_330_cast127_cast_1_fu_4286_p1.read()));
}

void ShuffleNetV2::thread_tmp20_fu_5432_p2() {
    tmp20_fu_5432_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_438_cast_fu_5428_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_438_cast_fu_5428_p1.read()));
}

void ShuffleNetV2::thread_tmp21_fu_5495_p2() {
    tmp21_fu_5495_p2 = (!ap_const_lv12_978.is_01() || !tmp_438_cast_fu_5428_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_438_cast_fu_5428_p1.read()));
}

void ShuffleNetV2::thread_tmp22_fu_5590_p2() {
    tmp22_fu_5590_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_438_cast_reg_9454.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_438_cast_reg_9454.read()));
}

void ShuffleNetV2::thread_tmp23_fu_5600_p2() {
    tmp23_fu_5600_p2 = (!ap_const_lv12_C78.is_01() || !tmp_438_cast_reg_9454.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C78) + sc_bigint<12>(tmp_438_cast_reg_9454.read()));
}

void ShuffleNetV2::thread_tmp24_fu_5705_p2() {
    tmp24_fu_5705_p2 = (!ap_const_lv11_5F8.is_01() || !tmp_438_cast_cast_fu_5613_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5F8) + sc_bigint<11>(tmp_438_cast_cast_fu_5613_p1.read()));
}

void ShuffleNetV2::thread_tmp25_fu_5716_p2() {
    tmp25_fu_5716_p2 = (!ap_const_lv13_F78.is_01() || !tmp_438_cast1_fu_5610_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_F78) + sc_bigint<13>(tmp_438_cast1_fu_5610_p1.read()));
}

void ShuffleNetV2::thread_tmp26_fu_5815_p2() {
    tmp26_fu_5815_p2 = (!ap_const_lv13_10F8.is_01() || !tmp_438_cast1_reg_9499.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_10F8) + sc_bigint<13>(tmp_438_cast1_reg_9499.read()));
}

void ShuffleNetV2::thread_tmp27_fu_5825_p2() {
    tmp27_fu_5825_p2 = (!ap_const_lv13_1278.is_01() || !tmp_438_cast1_reg_9499.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1278) + sc_bigint<13>(tmp_438_cast1_reg_9499.read()));
}

void ShuffleNetV2::thread_tmp28_fu_5835_p2() {
    tmp28_fu_5835_p2 = (!ap_const_lv13_13F8.is_01() || !tmp_438_cast1_reg_9499.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_13F8) + sc_bigint<13>(tmp_438_cast1_reg_9499.read()));
}

void ShuffleNetV2::thread_tmp29_fu_6448_p2() {
    tmp29_fu_6448_p2 = (!ap_const_lv8_78.is_01() || !tmp_470_cast110_cast_fu_6445_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_78) + sc_bigint<8>(tmp_470_cast110_cast_fu_6445_p1.read()));
}

void ShuffleNetV2::thread_tmp2_fu_4367_p2() {
    tmp2_fu_4367_p2 = (!ap_const_lv9_138.is_01() || !tmp_330_cast127_cast_1_fu_4286_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_330_cast127_cast_1_fu_4286_p1.read()));
}

void ShuffleNetV2::thread_tmp30_fu_6535_p2() {
    tmp30_fu_6535_p2 = (!ap_const_lv8_A8.is_01() || !tmp_470_cast110_cast_fu_6445_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_470_cast110_cast_fu_6445_p1.read()));
}

void ShuffleNetV2::thread_tmp31_cast1_fu_6658_p1() {
    tmp31_cast1_fu_6658_p1 = esl_sext<8,7>(tmp31_reg_9855.read());
}

void ShuffleNetV2::thread_tmp31_cast_fu_6661_p1() {
    tmp31_cast_fu_6661_p1 = esl_zext<9,8>(tmp31_cast1_fu_6658_p1.read());
}

void ShuffleNetV2::thread_tmp31_fu_6573_p2() {
    tmp31_fu_6573_p2 = (!ap_const_lv7_58.is_01() || !tmp_353_reg_9813.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_353_reg_9813.read()));
}

void ShuffleNetV2::thread_tmp32_fu_6701_p2() {
    tmp32_fu_6701_p2 = (!ap_const_lv9_108.is_01() || !tmp_470_cast2_fu_6578_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_108) + sc_bigint<9>(tmp_470_cast2_fu_6578_p1.read()));
}

void ShuffleNetV2::thread_tmp33_fu_6743_p2() {
    tmp33_fu_6743_p2 = (!ap_const_lv9_138.is_01() || !tmp_470_cast2_fu_6578_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_470_cast2_fu_6578_p1.read()));
}

void ShuffleNetV2::thread_tmp34_fu_6781_p2() {
    tmp34_fu_6781_p2 = (!ap_const_lv9_168.is_01() || !tmp_470_cast2_fu_6578_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_470_cast2_fu_6578_p1.read()));
}

void ShuffleNetV2::thread_tmp35_fu_6819_p2() {
    tmp35_fu_6819_p2 = (!ap_const_lv8_98.is_01() || !tmp_470_cast110_cast_reg_9827.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_470_cast110_cast_reg_9827.read()));
}

void ShuffleNetV2::thread_tmp36_fu_6864_p2() {
    tmp36_fu_6864_p2 = (!ap_const_lv8_C8.is_01() || !tmp_470_cast110_cast_reg_9827.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_470_cast110_cast_reg_9827.read()));
}

void ShuffleNetV2::thread_tmp37_fu_6971_p2() {
    tmp37_fu_6971_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_470_cast1_fu_6874_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_470_cast1_fu_6874_p1.read()));
}

void ShuffleNetV2::thread_tmp38_fu_6982_p2() {
    tmp38_fu_6982_p2 = (!ap_const_lv10_228.is_01() || !tmp_470_cast1_fu_6874_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_470_cast1_fu_6874_p1.read()));
}

void ShuffleNetV2::thread_tmp39_fu_7274_p2() {
    tmp39_fu_7274_p2 = (!ap_const_lv10_258.is_01() || !tmp_505_cast_fu_7268_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_505_cast_fu_7268_p1.read()));
}

void ShuffleNetV2::thread_tmp3_cast_fu_4478_p1() {
    tmp3_cast_fu_4478_p1 = esl_zext<10,9>(tmp3_fu_4473_p2.read());
}

void ShuffleNetV2::thread_tmp3_fu_4473_p2() {
    tmp3_fu_4473_p2 = (!ap_const_lv9_198.is_01() || !tmp_330_cast127_cast_1_reg_9153.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_330_cast127_cast_1_reg_9153.read()));
}

void ShuffleNetV2::thread_tmp40_fu_7459_p2() {
    tmp40_fu_7459_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_505_cast_reg_10017.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_505_cast_reg_10017.read()));
}

void ShuffleNetV2::thread_tmp41_fu_7496_p2() {
    tmp41_fu_7496_p2 = (!ap_const_lv10_318.is_01() || !tmp_505_cast_reg_10017.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_505_cast_reg_10017.read()));
}

void ShuffleNetV2::thread_tmp42_fu_7363_p2() {
    tmp42_fu_7363_p2 = (!ap_const_lv9_178.is_01() || !tmp_505_cast_cast_fu_7271_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_505_cast_cast_fu_7271_p1.read()));
}

void ShuffleNetV2::thread_tmp43_fu_7374_p2() {
    tmp43_fu_7374_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_505_cast1_fu_7265_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_505_cast1_fu_7265_p1.read()));
}

void ShuffleNetV2::thread_tmp44_fu_7934_p2() {
    tmp44_fu_7934_p2 = (!ap_const_lv9_168.is_01() || !tmp_238_cast96_cast_fu_7931_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_238_cast96_cast_fu_7931_p1.read()));
}

void ShuffleNetV2::thread_tmp45_fu_7953_p2() {
    tmp45_fu_7953_p2 = (!ap_const_lv8_98.is_01() || !tmp_238_cast96_cast1_fu_7950_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_238_cast96_cast1_fu_7950_p1.read()));
}

void ShuffleNetV2::thread_tmp46_fu_7973_p2() {
    tmp46_fu_7973_p2 = (!ap_const_lv8_C8.is_01() || !tmp_238_cast96_cast1_fu_7950_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_238_cast96_cast1_fu_7950_p1.read()));
}

void ShuffleNetV2::thread_tmp47_fu_8011_p2() {
    tmp47_fu_8011_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_238_cast97_cast_fu_7993_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_238_cast97_cast_fu_7993_p1.read()));
}

void ShuffleNetV2::thread_tmp48_fu_8027_p2() {
    tmp48_fu_8027_p2 = (!ap_const_lv10_228.is_01() || !tmp_238_cast97_cast_fu_7993_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_238_cast97_cast_fu_7993_p1.read()));
}

void ShuffleNetV2::thread_tmp49_fu_8053_p2() {
    tmp49_fu_8053_p2 = (!ap_const_lv10_258.is_01() || !tmp_238_cast97_cast_reg_10345.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_238_cast97_cast_reg_10345.read()));
}

void ShuffleNetV2::thread_tmp4_fu_4487_p2() {
    tmp4_fu_4487_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_330_cast127_cast_fu_4386_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_330_cast127_cast_fu_4386_p1.read()));
}

void ShuffleNetV2::thread_tmp50_fu_8068_p2() {
    tmp50_fu_8068_p2 = (!ap_const_lv10_288.is_01() || !tmp_238_cast97_cast_reg_10345.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_288) + sc_bigint<10>(tmp_238_cast97_cast_reg_10345.read()));
}

void ShuffleNetV2::thread_tmp51_fu_8083_p2() {
    tmp51_fu_8083_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_238_cast97_cast_reg_10345.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_238_cast97_cast_reg_10345.read()));
}

void ShuffleNetV2::thread_tmp52_fu_8098_p2() {
    tmp52_fu_8098_p2 = (!ap_const_lv10_2E8.is_01() || !tmp_238_cast97_cast_reg_10345.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2E8) + sc_bigint<10>(tmp_238_cast97_cast_reg_10345.read()));
}

void ShuffleNetV2::thread_tmp53_fu_8113_p2() {
    tmp53_fu_8113_p2 = (!ap_const_lv9_118.is_01() || !tmp_238_cast96_cast_reg_10313.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_118) + sc_bigint<9>(tmp_238_cast96_cast_reg_10313.read()));
}

void ShuffleNetV2::thread_tmp54_fu_8132_p2() {
    tmp54_fu_8132_p2 = (!ap_const_lv9_148.is_01() || !tmp_238_cast96_cast_reg_10313.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_148) + sc_bigint<9>(tmp_238_cast96_cast_reg_10313.read()));
}

void ShuffleNetV2::thread_tmp55_fu_8151_p2() {
    tmp55_fu_8151_p2 = (!ap_const_lv9_178.is_01() || !tmp_238_cast96_cast_reg_10313.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_238_cast96_cast_reg_10313.read()));
}

void ShuffleNetV2::thread_tmp56_fu_8043_p2() {
    tmp56_fu_8043_p2 = (!ap_const_lv8_A8.is_01() || !tmp_238_cast96_cast1_reg_10325.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_238_cast96_cast1_reg_10325.read()));
}

void ShuffleNetV2::thread_tmp57_cast1_fu_8185_p1() {
    tmp57_cast1_fu_8185_p1 = esl_sext<10,7>(tmp57_fu_8180_p2.read());
}

void ShuffleNetV2::thread_tmp57_cast_fu_8189_p1() {
    tmp57_cast_fu_8189_p1 = esl_zext<11,10>(tmp57_cast1_fu_8185_p1.read());
}

void ShuffleNetV2::thread_tmp57_fu_8180_p2() {
    tmp57_fu_8180_p2 = (!ap_const_lv7_58.is_01() || !tmp_238_reg_10303.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_238_reg_10303.read()));
}

void ShuffleNetV2::thread_tmp58_fu_8203_p2() {
    tmp58_fu_8203_p2 = (!ap_const_lv11_408.is_01() || !tmp_238_cast1_fu_8177_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_408) + sc_bigint<11>(tmp_238_cast1_fu_8177_p1.read()));
}

void ShuffleNetV2::thread_tmp59_fu_8219_p2() {
    tmp59_fu_8219_p2 = (!ap_const_lv11_438.is_01() || !tmp_238_cast1_reg_10447.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_238_cast1_reg_10447.read()));
}

void ShuffleNetV2::thread_tmp5_fu_4619_p2() {
    tmp5_fu_4619_p2 = (!ap_const_lv10_258.is_01() || !tmp_330_cast127_cast_reg_9181.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_330_cast127_cast_reg_9181.read()));
}

void ShuffleNetV2::thread_tmp60_fu_8234_p2() {
    tmp60_fu_8234_p2 = (!ap_const_lv11_468.is_01() || !tmp_238_cast1_reg_10447.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_468) + sc_bigint<11>(tmp_238_cast1_reg_10447.read()));
}

void ShuffleNetV2::thread_tmp61_fu_8249_p2() {
    tmp61_fu_8249_p2 = (!ap_const_lv11_498.is_01() || !tmp_238_cast1_reg_10447.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_238_cast1_reg_10447.read()));
}

void ShuffleNetV2::thread_tmp62_fu_8264_p2() {
    tmp62_fu_8264_p2 = (!ap_const_lv11_4C8.is_01() || !tmp_238_cast1_reg_10447.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4C8) + sc_bigint<11>(tmp_238_cast1_reg_10447.read()));
}

void ShuffleNetV2::thread_tmp63_fu_8279_p2() {
    tmp63_fu_8279_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_238_cast1_reg_10447.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_238_cast1_reg_10447.read()));
}

void ShuffleNetV2::thread_tmp64_fu_8294_p2() {
    tmp64_fu_8294_p2 = (!ap_const_lv11_528.is_01() || !tmp_238_cast1_reg_10447.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_528) + sc_bigint<11>(tmp_238_cast1_reg_10447.read()));
}

void ShuffleNetV2::thread_tmp65_fu_8309_p2() {
    tmp65_fu_8309_p2 = (!ap_const_lv11_558.is_01() || !tmp_238_cast1_reg_10447.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_238_cast1_reg_10447.read()));
}

void ShuffleNetV2::thread_tmp66_fu_8324_p2() {
    tmp66_fu_8324_p2 = (!ap_const_lv11_588.is_01() || !tmp_238_cast1_reg_10447.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_588) + sc_bigint<11>(tmp_238_cast1_reg_10447.read()));
}

void ShuffleNetV2::thread_tmp67_fu_8339_p2() {
    tmp67_fu_8339_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_238_cast1_reg_10447.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_238_cast1_reg_10447.read()));
}

void ShuffleNetV2::thread_tmp68_fu_8354_p2() {
    tmp68_fu_8354_p2 = (!ap_const_lv11_5E8.is_01() || !tmp_238_cast1_reg_10447.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5E8) + sc_bigint<11>(tmp_238_cast1_reg_10447.read()));
}

void ShuffleNetV2::thread_tmp69_fu_8369_p2() {
    tmp69_fu_8369_p2 = (!ap_const_lv10_218.is_01() || !tmp_238_cast97_cast_reg_10345.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_218) + sc_bigint<10>(tmp_238_cast97_cast_reg_10345.read()));
}

void ShuffleNetV2::thread_tmp6_fu_4629_p2() {
    tmp6_fu_4629_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_330_cast127_cast_reg_9181.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_330_cast127_cast_reg_9181.read()));
}

void ShuffleNetV2::thread_tmp70_fu_8388_p2() {
    tmp70_fu_8388_p2 = (!ap_const_lv10_248.is_01() || !tmp_238_cast97_cast_reg_10345.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_248) + sc_bigint<10>(tmp_238_cast97_cast_reg_10345.read()));
}

void ShuffleNetV2::thread_tmp71_fu_8407_p2() {
    tmp71_fu_8407_p2 = (!ap_const_lv10_278.is_01() || !tmp_238_cast97_cast_reg_10345.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_238_cast97_cast_reg_10345.read()));
}

void ShuffleNetV2::thread_tmp72_fu_8426_p2() {
    tmp72_fu_8426_p2 = (!ap_const_lv10_2A8.is_01() || !tmp_238_cast97_cast_reg_10345.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2A8) + sc_bigint<10>(tmp_238_cast97_cast_reg_10345.read()));
}

void ShuffleNetV2::thread_tmp73_fu_8497_p2() {
    tmp73_fu_8497_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_391_cast_cast_fu_8494_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_391_cast_cast_fu_8494_p1.read()));
}

void ShuffleNetV2::thread_tmp74_fu_8517_p2() {
    tmp74_fu_8517_p2 = (!ap_const_lv9_138.is_01() || !tmp_391_cast_cast1_fu_8491_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_391_cast_cast1_fu_8491_p1.read()));
}

void ShuffleNetV2::thread_tmp75_cast1_fu_8559_p1() {
    tmp75_cast1_fu_8559_p1 = esl_sext<11,9>(tmp75_fu_8554_p2.read());
}

void ShuffleNetV2::thread_tmp75_cast_fu_8563_p1() {
    tmp75_cast_fu_8563_p1 = esl_zext<12,11>(tmp75_cast1_fu_8559_p1.read());
}

void ShuffleNetV2::thread_tmp75_fu_8554_p2() {
    tmp75_fu_8554_p2 = (!ap_const_lv9_198.is_01() || !tmp_391_cast_cast1_reg_10557.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_391_cast_cast1_reg_10557.read()));
}

void ShuffleNetV2::thread_tmp76_fu_8577_p2() {
    tmp76_fu_8577_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_391_cast_fu_8537_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_391_cast_fu_8537_p1.read()));
}

void ShuffleNetV2::thread_tmp77_fu_8593_p2() {
    tmp77_fu_8593_p2 = (!ap_const_lv12_858.is_01() || !tmp_391_cast_reg_10572.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_858) + sc_bigint<12>(tmp_391_cast_reg_10572.read()));
}

void ShuffleNetV2::thread_tmp78_fu_8608_p2() {
    tmp78_fu_8608_p2 = (!ap_const_lv12_8B8.is_01() || !tmp_391_cast_reg_10572.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_8B8) + sc_bigint<12>(tmp_391_cast_reg_10572.read()));
}

void ShuffleNetV2::thread_tmp79_fu_8623_p2() {
    tmp79_fu_8623_p2 = (!ap_const_lv12_918.is_01() || !tmp_391_cast_reg_10572.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_918) + sc_bigint<12>(tmp_391_cast_reg_10572.read()));
}

void ShuffleNetV2::thread_tmp7_fu_4735_p2() {
    tmp7_fu_4735_p2 = (!ap_const_lv10_318.is_01() || !tmp_330_cast127_cast_reg_9181.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_330_cast127_cast_reg_9181.read()));
}

void ShuffleNetV2::thread_tmp80_fu_8638_p2() {
    tmp80_fu_8638_p2 = (!ap_const_lv12_978.is_01() || !tmp_391_cast_reg_10572.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_391_cast_reg_10572.read()));
}

void ShuffleNetV2::thread_tmp81_fu_8653_p2() {
    tmp81_fu_8653_p2 = (!ap_const_lv12_9D8.is_01() || !tmp_391_cast_reg_10572.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_9D8) + sc_bigint<12>(tmp_391_cast_reg_10572.read()));
}

void ShuffleNetV2::thread_tmp82_fu_8668_p2() {
    tmp82_fu_8668_p2 = (!ap_const_lv12_A38.is_01() || !tmp_391_cast_reg_10572.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A38) + sc_bigint<12>(tmp_391_cast_reg_10572.read()));
}

void ShuffleNetV2::thread_tmp83_fu_8683_p2() {
    tmp83_fu_8683_p2 = (!ap_const_lv12_A98.is_01() || !tmp_391_cast_reg_10572.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A98) + sc_bigint<12>(tmp_391_cast_reg_10572.read()));
}

void ShuffleNetV2::thread_tmp84_fu_8698_p2() {
    tmp84_fu_8698_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_391_cast_reg_10572.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_391_cast_reg_10572.read()));
}

void ShuffleNetV2::thread_tmp85_fu_8713_p2() {
    tmp85_fu_8713_p2 = (!ap_const_lv12_B58.is_01() || !tmp_391_cast_reg_10572.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_B58) + sc_bigint<12>(tmp_391_cast_reg_10572.read()));
}

void ShuffleNetV2::thread_tmp86_fu_8728_p2() {
    tmp86_fu_8728_p2 = (!ap_const_lv12_BB8.is_01() || !tmp_391_cast_reg_10572.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_BB8) + sc_bigint<12>(tmp_391_cast_reg_10572.read()));
}

void ShuffleNetV2::thread_tmp8_fu_4498_p2() {
    tmp8_fu_4498_p2 = (!ap_const_lv9_178.is_01() || !tmp_330_cast127_cast_1_reg_9153.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_330_cast127_cast_1_reg_9153.read()));
}

void ShuffleNetV2::thread_tmp9_fu_4840_p2() {
    tmp9_fu_4840_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_330_cast1_fu_4829_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_330_cast1_fu_4829_p1.read()));
}

void ShuffleNetV2::thread_tmp_120_fu_4000_p1() {
    tmp_120_fu_4000_p1 = co_reg_3124.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_121_fu_4048_p1() {
    tmp_121_fu_4048_p1 = co_reg_3124.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_122_fu_4064_p2() {
    tmp_122_fu_4064_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co_reg_3124.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_123_fu_6197_p3() {
    tmp_123_fu_6197_p3 = esl_concat<9,2>(tmp_419_fu_6188_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_124_fu_6224_p3() {
    tmp_124_fu_6224_p3 = esl_concat<9,2>(tmp_421_fu_6215_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_125_fu_6251_p3() {
    tmp_125_fu_6251_p3 = esl_concat<10,2>(tmp_423_fu_6242_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_126_fu_6278_p3() {
    tmp_126_fu_6278_p3 = esl_concat<10,2>(tmp_425_fu_6269_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_127_fu_6305_p3() {
    tmp_127_fu_6305_p3 = esl_concat<11,2>(tmp_427_fu_6296_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_128_fu_4252_p1() {
    tmp_128_fu_4252_p1 = i_reg_3147.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_129_fu_7897_p1() {
    tmp_129_fu_7897_p1 = k_reg_3237.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_130_fu_5390_p1() {
    tmp_130_fu_5390_p1 = i1_reg_3158.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_131_fu_5443_p2() {
    tmp_131_fu_5443_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i1_reg_3158.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_132_fu_8457_p1() {
    tmp_132_fu_8457_p1 = k6_reg_3248.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_133_fu_6406_p1() {
    tmp_133_fu_6406_p1 = i3_reg_3203.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_134_fu_6584_p3() {
    tmp_134_fu_6584_p3 = esl_concat<12,2>(tmp_564_reg_9833.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_135_fu_6527_p1() {
    tmp_135_fu_6527_p1 = tmp_570_fu_6522_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_136_fu_6531_p1() {
    tmp_136_fu_6531_p1 = tmp_570_fu_6522_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_137_fu_6631_p3() {
    tmp_137_fu_6631_p3 = esl_concat<11,2>(tmp_575_reg_9849.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_138_fu_7023_p3() {
    tmp_138_fu_7023_p3 = esl_concat<12,2>(tmp_590_reg_9887.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_139_fu_7053_p3() {
    tmp_139_fu_7053_p3 = esl_concat<12,2>(tmp_595_reg_9893.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_140_fu_7083_p3() {
    tmp_140_fu_7083_p3 = esl_concat<12,2>(tmp_601_reg_9899.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_141_fu_7159_p1() {
    tmp_141_fu_7159_p1 = tmp_612_fu_7150_p2.read().range(13-1, 0);
}

void ShuffleNetV2::thread_tmp_142_fu_7231_p1() {
    tmp_142_fu_7231_p1 = i4_reg_3214.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_143_fu_7355_p1() {
    tmp_143_fu_7355_p1 = tmp_629_fu_7350_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_144_fu_7359_p1() {
    tmp_144_fu_7359_p1 = tmp_629_fu_7350_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_145_fu_7626_p1() {
    tmp_145_fu_7626_p1 = tmp_645_fu_7617_p2.read().range(13-1, 0);
}

void ShuffleNetV2::thread_tmp_146_fu_7649_p2() {
    tmp_146_fu_7649_p2 = (!ap_const_lv15_2.is_01())? sc_lv<15>(): tmp_650_reg_10045.read() << (unsigned short)ap_const_lv15_2.to_uint();
}

void ShuffleNetV2::thread_tmp_170_fu_3708_p2() {
    tmp_170_fu_3708_p2 = (!ap_const_lv7_30.is_01() || !co_cast138_cast_fu_3614_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_30) + sc_biguint<7>(co_cast138_cast_fu_3614_p1.read()));
}

void ShuffleNetV2::thread_tmp_171_fu_3748_p2() {
    tmp_171_fu_3748_p2 = (!ap_const_lv7_48.is_01() || !co_cast138_cast_fu_3614_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_48) + sc_biguint<7>(co_cast138_cast_fu_3614_p1.read()));
}

void ShuffleNetV2::thread_tmp_172_fu_3834_p2() {
    tmp_172_fu_3834_p2 = (!ap_const_lv8_78.is_01() || !co_cast8_fu_3610_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_78) + sc_biguint<8>(co_cast8_fu_3610_p1.read()));
}

void ShuffleNetV2::thread_tmp_173_fu_3874_p2() {
    tmp_173_fu_3874_p2 = (!ap_const_lv8_90.is_01() || !co_cast8_fu_3610_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_90) + sc_biguint<8>(co_cast8_fu_3610_p1.read()));
}

void ShuffleNetV2::thread_tmp_174_fu_3914_p2() {
    tmp_174_fu_3914_p2 = (!ap_const_lv8_A8.is_01() || !co_cast8_fu_3610_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_biguint<8>(co_cast8_fu_3610_p1.read()));
}

void ShuffleNetV2::thread_tmp_175_fu_4028_p2() {
    tmp_175_fu_4028_p2 = (!p_shl1_cast_fu_4012_p1.read().is_01() || !p_shl2_cast_fu_4024_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl1_cast_fu_4012_p1.read()) - sc_biguint<7>(p_shl2_cast_fu_4024_p1.read()));
}

void ShuffleNetV2::thread_tmp_176_fu_4074_p2() {
    tmp_176_fu_4074_p2 = (!p_shl_cast_fu_4060_p1.read().is_01() || !p_shl3_cast_fu_4070_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl_cast_fu_4060_p1.read()) - sc_biguint<8>(p_shl3_cast_fu_4070_p1.read()));
}

void ShuffleNetV2::thread_tmp_178_fu_6016_p2() {
    tmp_178_fu_6016_p2 = (!co2_cast117_cast_fu_5978_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co2_cast117_cast_fu_5978_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_179_cast_fu_6022_p1() {
    tmp_179_cast_fu_6022_p1 = esl_zext<9,6>(tmp_178_fu_6016_p2.read());
}

void ShuffleNetV2::thread_tmp_180_fu_6044_p2() {
    tmp_180_fu_6044_p2 = (!co2_cast5_fu_5974_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co2_cast5_fu_5974_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_181_cast_fu_6050_p1() {
    tmp_181_cast_fu_6050_p1 = esl_zext<10,7>(tmp_180_fu_6044_p2.read());
}

void ShuffleNetV2::thread_tmp_182_fu_6072_p2() {
    tmp_182_fu_6072_p2 = (!co2_cast5_fu_5974_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co2_cast5_fu_5974_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp_183_cast_fu_6078_p1() {
    tmp_183_cast_fu_6078_p1 = esl_zext<10,7>(tmp_182_fu_6072_p2.read());
}

void ShuffleNetV2::thread_tmp_184_fu_6100_p3() {
    tmp_184_fu_6100_p3 = esl_concat<1,5>(ap_const_lv1_1, co2_reg_3169.read());
}

void ShuffleNetV2::thread_tmp_185_cast_fu_6112_p1() {
    tmp_185_cast_fu_6112_p1 = esl_zext<10,7>(tmp_197_cast_fu_6108_p1.read());
}

void ShuffleNetV2::thread_tmp_186_cast1_fu_4221_p1() {
    tmp_186_cast1_fu_4221_p1 = esl_zext<18,5>(ci_reg_3135.read());
}

void ShuffleNetV2::thread_tmp_186_cast2_fu_4225_p1() {
    tmp_186_cast2_fu_4225_p1 = esl_zext<17,5>(ci_reg_3135.read());
}

void ShuffleNetV2::thread_tmp_186_cast3_fu_4229_p1() {
    tmp_186_cast3_fu_4229_p1 = esl_zext<16,5>(ci_reg_3135.read());
}

void ShuffleNetV2::thread_tmp_186_cast4_fu_4233_p1() {
    tmp_186_cast4_fu_4233_p1 = esl_zext<19,5>(ci_reg_3135.read());
}

void ShuffleNetV2::thread_tmp_186_cast5_fu_4176_p1() {
    tmp_186_cast5_fu_4176_p1 = esl_zext<15,5>(ci_reg_3135.read());
}

void ShuffleNetV2::thread_tmp_186_cast6_fu_4147_p1() {
    tmp_186_cast6_fu_4147_p1 = esl_zext<14,5>(ci_reg_3135.read());
}

void ShuffleNetV2::thread_tmp_186_cast7_fu_4114_p1() {
    tmp_186_cast7_fu_4114_p1 = esl_zext<13,5>(ci_reg_3135.read());
}

void ShuffleNetV2::thread_tmp_186_cast8_fu_4118_p1() {
    tmp_186_cast8_fu_4118_p1 = esl_zext<12,5>(ci_reg_3135.read());
}

void ShuffleNetV2::thread_tmp_186_cast_fu_4044_p1() {
    tmp_186_cast_fu_4044_p1 = esl_zext<7,4>(p_lshr_f1_cast_fu_4034_p4.read());
}

void ShuffleNetV2::thread_tmp_187_fu_4142_p2() {
    tmp_187_fu_4142_p2 = (!tmp_175_reg_8974.read().is_01() || !ci_cast1_fu_4098_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_175_reg_8974.read()) + sc_biguint<7>(ci_cast1_fu_4098_p1.read()));
}

void ShuffleNetV2::thread_tmp_188_cast_fu_4237_p1() {
    tmp_188_cast_fu_4237_p1 = esl_sext<13,7>(tmp_187_reg_9030.read());
}

void ShuffleNetV2::thread_tmp_189_cast_fu_4090_p1() {
    tmp_189_cast_fu_4090_p1 = esl_zext<8,3>(p_lshr_f_cast_fu_4080_p4.read());
}

void ShuffleNetV2::thread_tmp_189_fu_7718_p1() {
    tmp_189_fu_7718_p1 = esl_zext<64,5>(i5_reg_3225.read());
}

void ShuffleNetV2::thread_tmp_190_fu_7723_p2() {
    tmp_190_fu_7723_p2 = (!i5_cast101_cast_fu_7702_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(i5_cast101_cast_fu_7702_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_191_fu_7729_p1() {
    tmp_191_fu_7729_p1 = esl_zext<64,6>(tmp_190_fu_7723_p2.read());
}

void ShuffleNetV2::thread_tmp_192_fu_7734_p2() {
    tmp_192_fu_7734_p2 = (!i5_cast102_cast_reg_10185.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(i5_cast102_cast_reg_10185.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_193_fu_7739_p1() {
    tmp_193_fu_7739_p1 = esl_zext<64,7>(tmp_192_fu_7734_p2.read());
}

void ShuffleNetV2::thread_tmp_194_fu_7744_p2() {
    tmp_194_fu_7744_p2 = (!i5_cast102_cast_reg_10185.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(i5_cast102_cast_reg_10185.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp_195_fu_7749_p1() {
    tmp_195_fu_7749_p1 = esl_zext<64,7>(tmp_194_fu_7744_p2.read());
}

void ShuffleNetV2::thread_tmp_196_fu_7754_p3() {
    tmp_196_fu_7754_p3 = esl_concat<1,5>(ap_const_lv1_1, i5_reg_3225.read());
}

void ShuffleNetV2::thread_tmp_197_cast_fu_6108_p1() {
    tmp_197_cast_fu_6108_p1 = esl_sext<7,6>(tmp_184_fu_6100_p3.read());
}

void ShuffleNetV2::thread_tmp_197_fu_7766_p1() {
    tmp_197_fu_7766_p1 = esl_zext<64,7>(tmp_206_cast_fu_7762_p1.read());
}

void ShuffleNetV2::thread_tmp_198_fu_7771_p2() {
    tmp_198_fu_7771_p2 = (!i5_cast104_cast1_reg_10174.read().is_01() || !ap_const_lv8_78.is_01())? sc_lv<8>(): (sc_biguint<8>(i5_cast104_cast1_reg_10174.read()) + sc_biguint<8>(ap_const_lv8_78));
}

void ShuffleNetV2::thread_tmp_199_fu_7776_p1() {
    tmp_199_fu_7776_p1 = esl_zext<64,8>(tmp_198_fu_7771_p2.read());
}

void ShuffleNetV2::thread_tmp_200_fu_7781_p2() {
    tmp_200_fu_7781_p2 = (!i5_cast104_cast1_reg_10174.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<8>(): (sc_biguint<8>(i5_cast104_cast1_reg_10174.read()) + sc_bigint<8>(ap_const_lv8_90));
}

void ShuffleNetV2::thread_tmp_201_fu_7786_p1() {
    tmp_201_fu_7786_p1 = esl_zext<64,8>(tmp_200_fu_7781_p2.read());
}

void ShuffleNetV2::thread_tmp_202_fu_7791_p2() {
    tmp_202_fu_7791_p2 = (!i5_cast104_cast1_reg_10174.read().is_01() || !ap_const_lv8_A8.is_01())? sc_lv<8>(): (sc_biguint<8>(i5_cast104_cast1_reg_10174.read()) + sc_bigint<8>(ap_const_lv8_A8));
}

void ShuffleNetV2::thread_tmp_203_fu_7796_p1() {
    tmp_203_fu_7796_p1 = esl_zext<64,8>(tmp_202_fu_7791_p2.read());
}

void ShuffleNetV2::thread_tmp_204_fu_7801_p3() {
    tmp_204_fu_7801_p3 = esl_concat<2,5>(ap_const_lv2_2, i5_reg_3225.read());
}

}

