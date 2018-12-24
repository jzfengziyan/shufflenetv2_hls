#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,3,3>(arrayNo20_reg_41146.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,3,3>(arrayNo21_reg_41446.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,3,3>(arrayNo22_reg_41746.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,3,3>(arrayNo23_reg_41957.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,3,3>(arrayNo24_reg_42257.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,3,3>(arrayNo25_reg_42512.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,3,3>(arrayNo26_reg_42812.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,3,3>(arrayNo27_reg_43067.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,3,3>(arrayNo_reg_43367.read(), ap_const_lv3_3)))) {
        weights_96_96_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_71_reg_43417.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_63_reg_43117.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_55_reg_42862.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_47_reg_42562.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_39_reg_42307.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_31_reg_42007.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_23_reg_41796.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_15_reg_41496.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_7_reg_41196.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_4_address0 = grp_subconv_1x1_8p_p_fu_8554_weight_4_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_4_address0 = grp_subconv_1x1_4_p_fu_8474_weight_4_V_address0.read();
    } else {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_4_ce0 = grp_subconv_1x1_8p_p_fu_8554_weight_4_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_4_ce0 = grp_subconv_1x1_4_p_fu_8474_weight_4_V_ce0.read();
    } else {
        weights_96_96_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,3,3>(arrayNo20_reg_41146.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,3,3>(arrayNo21_reg_41446.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,3,3>(arrayNo22_reg_41746.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,3,3>(arrayNo23_reg_41957.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,3,3>(arrayNo24_reg_42257.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,3,3>(arrayNo25_reg_42512.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,3,3>(arrayNo26_reg_42812.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,3,3>(arrayNo27_reg_43067.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,3,3>(arrayNo_reg_43367.read(), ap_const_lv3_4)))) {
        weights_96_96_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_70_reg_43412.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_62_reg_43112.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_54_reg_42857.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_46_reg_42557.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_38_reg_42302.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_30_reg_42002.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_22_reg_41791.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_14_reg_41491.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_6_reg_41191.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_5_address0 = grp_subconv_1x1_8p_p_fu_8554_weight_5_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_5_address0 = grp_subconv_1x1_4_p_fu_8474_weight_5_V_address0.read();
    } else {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_5_ce0 = grp_subconv_1x1_8p_p_fu_8554_weight_5_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_5_ce0 = grp_subconv_1x1_4_p_fu_8474_weight_5_V_ce0.read();
    } else {
        weights_96_96_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,3,3>(arrayNo20_reg_41146.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,3,3>(arrayNo21_reg_41446.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,3,3>(arrayNo22_reg_41746.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,3,3>(arrayNo23_reg_41957.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,3,3>(arrayNo24_reg_42257.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,3,3>(arrayNo25_reg_42512.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,3,3>(arrayNo26_reg_42812.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,3,3>(arrayNo27_reg_43067.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,3,3>(arrayNo_reg_43367.read(), ap_const_lv3_5)))) {
        weights_96_96_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_68_reg_43402.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_60_reg_43102.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_52_reg_42847.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_44_reg_42547.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_36_reg_42292.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_28_reg_41992.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_20_reg_41781.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_12_reg_41481.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_4_reg_41181.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_6_address0 = grp_subconv_1x1_8p_p_fu_8554_weight_6_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_6_address0 = grp_subconv_1x1_4_p_fu_8474_weight_6_V_address0.read();
    } else {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_6_ce0 = grp_subconv_1x1_8p_p_fu_8554_weight_6_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_6_ce0 = grp_subconv_1x1_4_p_fu_8474_weight_6_V_ce0.read();
    } else {
        weights_96_96_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,3,3>(arrayNo20_reg_41146.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,3,3>(arrayNo21_reg_41446.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,3,3>(arrayNo22_reg_41746.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,3,3>(arrayNo23_reg_41957.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,3,3>(arrayNo24_reg_42257.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,3,3>(arrayNo25_reg_42512.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,3,3>(arrayNo26_reg_42812.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,3,3>(arrayNo27_reg_43067.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,3,3>(arrayNo_reg_43367.read(), ap_const_lv3_6)))) {
        weights_96_96_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_69_reg_43407.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_61_reg_43107.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_53_reg_42852.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_45_reg_42552.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_37_reg_42297.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_29_reg_41997.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_21_reg_41786.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_13_reg_41486.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_5_reg_41186.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_7_address0 = grp_subconv_1x1_8p_p_fu_8554_weight_7_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_7_address0 = grp_subconv_1x1_4_p_fu_8474_weight_7_V_address0.read();
    } else {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_7_ce0 = grp_subconv_1x1_8p_p_fu_8554_weight_7_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_7_ce0 = grp_subconv_1x1_4_p_fu_8474_weight_7_V_ce0.read();
    } else {
        weights_96_96_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,3,3>(arrayNo20_reg_41146.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,3,3>(arrayNo21_reg_41446.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,3,3>(arrayNo22_reg_41746.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,3,3>(arrayNo23_reg_41957.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,3,3>(arrayNo24_reg_42257.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,3,3>(arrayNo25_reg_42512.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,3,3>(arrayNo26_reg_42812.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,3,3>(arrayNo27_reg_43067.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,3,3>(arrayNo_reg_43367.read(), ap_const_lv3_7)))) {
        weights_96_96_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_66_reg_43392.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_58_reg_43092.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_50_reg_42837.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_42_reg_42537.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_34_reg_42282.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_26_reg_41982.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_18_reg_41771.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_10_reg_41471.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_2_reg_41171.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_s_address0 = grp_subconv_1x1_8p_p_fu_8554_weight_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_s_address0 = grp_subconv_1x1_4_p_fu_8474_weight_0_V_address0.read();
    } else {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_s_ce0 = grp_subconv_1x1_8p_p_fu_8554_weight_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_s_ce0 = grp_subconv_1x1_4_p_fu_8474_weight_0_V_ce0.read();
    } else {
        weights_96_96_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,3,3>(arrayNo20_reg_41146.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,3,3>(arrayNo21_reg_41446.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,3,3>(arrayNo22_reg_41746.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,3,3>(arrayNo23_reg_41957.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,3,3>(arrayNo24_reg_42257.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,3,3>(arrayNo25_reg_42512.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,3,3>(arrayNo26_reg_42812.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,3,3>(arrayNo27_reg_43067.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,3,3>(arrayNo_reg_43367.read(), ap_const_lv3_0)))) {
        weights_96_96_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_s_we0 = ap_const_logic_0;
    }
}

}

