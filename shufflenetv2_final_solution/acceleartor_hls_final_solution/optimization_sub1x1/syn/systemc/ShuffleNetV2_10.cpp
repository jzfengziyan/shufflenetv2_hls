#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_3_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_3_ce0 = grp_subconv_1x1_8_p_fu_8620_weight_3_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_3_ce0 = grp_subconv_1x1_16p_p_fu_8540_weight_3_V_ce0.read();
    } else {
        weights_48_48_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,3,3>(arrayNo1_reg_35971.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,3,3>(arrayNo2_reg_36271.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,3,3>(arrayNo3_reg_36571.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,3,3>(arrayNo4_reg_36782.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,3,3>(arrayNo5_reg_37082.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,3,3>(arrayNo6_reg_37337.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,3,3>(arrayNo7_reg_37637.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,3,3>(arrayNo8_reg_37892.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,3,3>(arrayNo9_reg_38192.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,3,3>(arrayNo10_reg_38447.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,3,3>(arrayNo11_reg_38747.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,3,3>(arrayNo12_reg_39002.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,3,3>(arrayNo13_reg_39302.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,3,3>(arrayNo14_reg_39557.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,3,3>(arrayNo15_reg_39857.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,3,3>(arrayNo16_reg_40112.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,3,3>(arrayNo17_reg_40412.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,3,3>(arrayNo18_reg_40667.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,3,3>(arrayNo19_reg_40967.read(), ap_const_lv3_3)))) {
        weights_48_48_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_144_reg_40982.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_136_reg_40682.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_128_reg_40427.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_120_reg_40127.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_112_reg_39872.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_104_reg_39572.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_96_reg_39317.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_88_reg_39017.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_80_reg_38762.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_72_reg_38462.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_64_reg_38207.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_56_reg_37907.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_48_reg_37652.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_40_reg_37352.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_32_reg_37097.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_24_reg_36797.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_16_reg_36586.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_8_reg_36286.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_s_reg_35986.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_4_address0 = grp_subconv_1x1_8_p_fu_8620_weight_4_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_4_address0 = grp_subconv_1x1_16p_p_fu_8540_weight_4_V_address0.read();
    } else {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_4_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_4_ce0 = grp_subconv_1x1_8_p_fu_8620_weight_4_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_4_ce0 = grp_subconv_1x1_16p_p_fu_8540_weight_4_V_ce0.read();
    } else {
        weights_48_48_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,3,3>(arrayNo1_reg_35971.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,3,3>(arrayNo2_reg_36271.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,3,3>(arrayNo3_reg_36571.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,3,3>(arrayNo4_reg_36782.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,3,3>(arrayNo5_reg_37082.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,3,3>(arrayNo6_reg_37337.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,3,3>(arrayNo7_reg_37637.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,3,3>(arrayNo8_reg_37892.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,3,3>(arrayNo9_reg_38192.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,3,3>(arrayNo10_reg_38447.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,3,3>(arrayNo11_reg_38747.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,3,3>(arrayNo12_reg_39002.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,3,3>(arrayNo13_reg_39302.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,3,3>(arrayNo14_reg_39557.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,3,3>(arrayNo15_reg_39857.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,3,3>(arrayNo16_reg_40112.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,3,3>(arrayNo17_reg_40412.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,3,3>(arrayNo18_reg_40667.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,3,3>(arrayNo19_reg_40967.read(), ap_const_lv3_4)))) {
        weights_48_48_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_151_reg_41017.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_143_reg_40717.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_135_reg_40462.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_127_reg_40162.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_119_reg_39907.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_111_reg_39607.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_103_reg_39352.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_95_reg_39052.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_87_reg_38797.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_79_reg_38497.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_71_reg_38242.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_63_reg_37942.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_55_reg_37687.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_47_reg_37387.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_39_reg_37132.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_31_reg_36832.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_23_reg_36621.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_15_reg_36321.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_7_reg_36021.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_5_address0 = grp_subconv_1x1_8_p_fu_8620_weight_5_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_5_address0 = grp_subconv_1x1_16p_p_fu_8540_weight_5_V_address0.read();
    } else {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_5_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_5_ce0 = grp_subconv_1x1_8_p_fu_8620_weight_5_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_5_ce0 = grp_subconv_1x1_16p_p_fu_8540_weight_5_V_ce0.read();
    } else {
        weights_48_48_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,3,3>(arrayNo1_reg_35971.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,3,3>(arrayNo2_reg_36271.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,3,3>(arrayNo3_reg_36571.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,3,3>(arrayNo4_reg_36782.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,3,3>(arrayNo5_reg_37082.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,3,3>(arrayNo6_reg_37337.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,3,3>(arrayNo7_reg_37637.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,3,3>(arrayNo8_reg_37892.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,3,3>(arrayNo9_reg_38192.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,3,3>(arrayNo10_reg_38447.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,3,3>(arrayNo11_reg_38747.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,3,3>(arrayNo12_reg_39002.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,3,3>(arrayNo13_reg_39302.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,3,3>(arrayNo14_reg_39557.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,3,3>(arrayNo15_reg_39857.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,3,3>(arrayNo16_reg_40112.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,3,3>(arrayNo17_reg_40412.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,3,3>(arrayNo18_reg_40667.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,3,3>(arrayNo19_reg_40967.read(), ap_const_lv3_5)))) {
        weights_48_48_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_145_reg_40987.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_137_reg_40687.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_129_reg_40432.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_121_reg_40132.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_113_reg_39877.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_105_reg_39577.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_97_reg_39322.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_89_reg_39022.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_81_reg_38767.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_73_reg_38467.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_65_reg_38212.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_57_reg_37912.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_49_reg_37657.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_41_reg_37357.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_33_reg_37102.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_25_reg_36802.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_17_reg_36591.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_9_reg_36291.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_1_reg_35991.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_6_address0 = grp_subconv_1x1_8_p_fu_8620_weight_6_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_6_address0 = grp_subconv_1x1_16p_p_fu_8540_weight_6_V_address0.read();
    } else {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_6_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_6_ce0 = grp_subconv_1x1_8_p_fu_8620_weight_6_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_6_ce0 = grp_subconv_1x1_16p_p_fu_8540_weight_6_V_ce0.read();
    } else {
        weights_48_48_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,3,3>(arrayNo1_reg_35971.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,3,3>(arrayNo2_reg_36271.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,3,3>(arrayNo3_reg_36571.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,3,3>(arrayNo4_reg_36782.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,3,3>(arrayNo5_reg_37082.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,3,3>(arrayNo6_reg_37337.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,3,3>(arrayNo7_reg_37637.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,3,3>(arrayNo8_reg_37892.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,3,3>(arrayNo9_reg_38192.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,3,3>(arrayNo10_reg_38447.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,3,3>(arrayNo11_reg_38747.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,3,3>(arrayNo12_reg_39002.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,3,3>(arrayNo13_reg_39302.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,3,3>(arrayNo14_reg_39557.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,3,3>(arrayNo15_reg_39857.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,3,3>(arrayNo16_reg_40112.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,3,3>(arrayNo17_reg_40412.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,3,3>(arrayNo18_reg_40667.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,3,3>(arrayNo19_reg_40967.read(), ap_const_lv3_6)))) {
        weights_48_48_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_150_reg_41012.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_142_reg_40712.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_134_reg_40457.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_126_reg_40157.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_118_reg_39902.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_110_reg_39602.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_102_reg_39347.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_94_reg_39047.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_86_reg_38792.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_78_reg_38492.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_70_reg_38237.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_62_reg_37937.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_54_reg_37682.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_46_reg_37382.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_38_reg_37127.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_30_reg_36827.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_22_reg_36616.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_14_reg_36316.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_6_reg_36016.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_7_address0 = grp_subconv_1x1_8_p_fu_8620_weight_7_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_7_address0 = grp_subconv_1x1_16p_p_fu_8540_weight_7_V_address0.read();
    } else {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_7_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_7_ce0 = grp_subconv_1x1_8_p_fu_8620_weight_7_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_7_ce0 = grp_subconv_1x1_16p_p_fu_8540_weight_7_V_ce0.read();
    } else {
        weights_48_48_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,3,3>(arrayNo1_reg_35971.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,3,3>(arrayNo2_reg_36271.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,3,3>(arrayNo3_reg_36571.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,3,3>(arrayNo4_reg_36782.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,3,3>(arrayNo5_reg_37082.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,3,3>(arrayNo6_reg_37337.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,3,3>(arrayNo7_reg_37637.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,3,3>(arrayNo8_reg_37892.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,3,3>(arrayNo9_reg_38192.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,3,3>(arrayNo10_reg_38447.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,3,3>(arrayNo11_reg_38747.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,3,3>(arrayNo12_reg_39002.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,3,3>(arrayNo13_reg_39302.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,3,3>(arrayNo14_reg_39557.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,3,3>(arrayNo15_reg_39857.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,3,3>(arrayNo16_reg_40112.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,3,3>(arrayNo17_reg_40412.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,3,3>(arrayNo18_reg_40667.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,3,3>(arrayNo19_reg_40967.read(), ap_const_lv3_7)))) {
        weights_48_48_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_149_reg_41007.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_141_reg_40707.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_133_reg_40452.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_125_reg_40152.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_117_reg_39897.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_109_reg_39597.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_101_reg_39342.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_93_reg_39042.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_85_reg_38787.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_77_reg_38487.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_69_reg_38232.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_61_reg_37932.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_53_reg_37677.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_45_reg_37377.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_37_reg_37122.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_29_reg_36822.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_21_reg_36611.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_13_reg_36311.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_5_reg_36011.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_s_address0 = grp_subconv_1x1_8_p_fu_8620_weight_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_s_address0 = grp_subconv_1x1_16p_p_fu_8540_weight_0_V_address0.read();
    } else {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_s_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_s_ce0 = grp_subconv_1x1_8_p_fu_8620_weight_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_s_ce0 = grp_subconv_1x1_16p_p_fu_8540_weight_0_V_ce0.read();
    } else {
        weights_48_48_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,3,3>(arrayNo1_reg_35971.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,3,3>(arrayNo2_reg_36271.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,3,3>(arrayNo3_reg_36571.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,3,3>(arrayNo4_reg_36782.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,3,3>(arrayNo5_reg_37082.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,3,3>(arrayNo6_reg_37337.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,3,3>(arrayNo7_reg_37637.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,3,3>(arrayNo8_reg_37892.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,3,3>(arrayNo9_reg_38192.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,3,3>(arrayNo10_reg_38447.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,3,3>(arrayNo11_reg_38747.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,3,3>(arrayNo12_reg_39002.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,3,3>(arrayNo13_reg_39302.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,3,3>(arrayNo14_reg_39557.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,3,3>(arrayNo15_reg_39857.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,3,3>(arrayNo16_reg_40112.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,3,3>(arrayNo17_reg_40412.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,3,3>(arrayNo18_reg_40667.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,3,3>(arrayNo19_reg_40967.read(), ap_const_lv3_0)))) {
        weights_48_48_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_s_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1606.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_2307_cast_fu_33430_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1515.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_2231_cast_fu_31915_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1424.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_2154_cast_fu_30384_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1336.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_2087_cast_fu_28996_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1279.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_2053_cast_fu_28213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_8_stride_1_fu_8864_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_8_stride_fu_8760_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1437.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1528.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()))) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_4_no_rel_fu_8734_weight_V_address0.read();
    } else {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1336.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1424.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1515.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1606.read()))) {
        weights_96_1_3x3_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_8_stride_1_fu_8864_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_8_stride_fu_8760_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1437.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1528.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()))) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_4_no_rel_fu_8734_weight_V_ce0.read();
    } else {
        weights_96_1_3x3_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1336.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1424.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1515.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1606.read()))) {
        weights_96_1_3x3_V_we0 = ap_const_logic_1;
    } else {
        weights_96_1_3x3_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_67_reg_43419.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_59_reg_43119.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_51_reg_42864.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_43_reg_42564.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_35_reg_42309.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_27_reg_42009.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_19_reg_41798.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_11_reg_41498.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_3_reg_41198.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_1_address0 = grp_subconv_1x1_8p_p_fu_8580_weight_1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_1_address0 = grp_subconv_1x1_4_p_fu_8500_weight_1_V_address0.read();
    } else {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_1_ce0 = grp_subconv_1x1_8p_p_fu_8580_weight_1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_1_ce0 = grp_subconv_1x1_4_p_fu_8500_weight_1_V_ce0.read();
    } else {
        weights_96_96_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,3,3>(arrayNo20_reg_41168.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,3,3>(arrayNo21_reg_41468.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,3,3>(arrayNo22_reg_41768.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,3,3>(arrayNo23_reg_41979.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,3,3>(arrayNo24_reg_42279.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,3,3>(arrayNo25_reg_42534.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,3,3>(arrayNo26_reg_42834.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,3,3>(arrayNo27_reg_43089.read(), ap_const_lv3_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,3,3>(arrayNo_reg_43389.read(), ap_const_lv3_1)))) {
        weights_96_96_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_66_reg_43414.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_58_reg_43114.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_50_reg_42859.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_42_reg_42559.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_34_reg_42304.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_26_reg_42004.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_18_reg_41793.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_10_reg_41493.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_2_reg_41193.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_2_address0 = grp_subconv_1x1_8p_p_fu_8580_weight_2_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_2_address0 = grp_subconv_1x1_4_p_fu_8500_weight_2_V_address0.read();
    } else {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_2_ce0 = grp_subconv_1x1_8p_p_fu_8580_weight_2_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_2_ce0 = grp_subconv_1x1_4_p_fu_8500_weight_2_V_ce0.read();
    } else {
        weights_96_96_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,3,3>(arrayNo20_reg_41168.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,3,3>(arrayNo21_reg_41468.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,3,3>(arrayNo22_reg_41768.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,3,3>(arrayNo23_reg_41979.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,3,3>(arrayNo24_reg_42279.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,3,3>(arrayNo25_reg_42534.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,3,3>(arrayNo26_reg_42834.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,3,3>(arrayNo27_reg_43089.read(), ap_const_lv3_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,3,3>(arrayNo_reg_43389.read(), ap_const_lv3_2)))) {
        weights_96_96_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_68_reg_43424.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_60_reg_43124.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_52_reg_42869.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_44_reg_42569.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_36_reg_42314.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_28_reg_42014.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_20_reg_41803.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_12_reg_41503.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_4_reg_41203.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_3_address0 = grp_subconv_1x1_8p_p_fu_8580_weight_3_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_3_address0 = grp_subconv_1x1_4_p_fu_8500_weight_3_V_address0.read();
    } else {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_3_ce0 = grp_subconv_1x1_8p_p_fu_8580_weight_3_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_3_ce0 = grp_subconv_1x1_4_p_fu_8500_weight_3_V_ce0.read();
    } else {
        weights_96_96_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,3,3>(arrayNo20_reg_41168.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,3,3>(arrayNo21_reg_41468.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,3,3>(arrayNo22_reg_41768.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,3,3>(arrayNo23_reg_41979.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,3,3>(arrayNo24_reg_42279.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,3,3>(arrayNo25_reg_42534.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,3,3>(arrayNo26_reg_42834.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,3,3>(arrayNo27_reg_43089.read(), ap_const_lv3_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,3,3>(arrayNo_reg_43389.read(), ap_const_lv3_3)))) {
        weights_96_96_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_70_reg_43434.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_62_reg_43134.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_54_reg_42879.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_46_reg_42579.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_38_reg_42324.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_30_reg_42024.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_22_reg_41813.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_14_reg_41513.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_6_reg_41213.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_4_address0 = grp_subconv_1x1_8p_p_fu_8580_weight_4_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_4_address0 = grp_subconv_1x1_4_p_fu_8500_weight_4_V_address0.read();
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
        weights_96_96_1x1_V_4_ce0 = grp_subconv_1x1_8p_p_fu_8580_weight_4_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_4_ce0 = grp_subconv_1x1_4_p_fu_8500_weight_4_V_ce0.read();
    } else {
        weights_96_96_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,3,3>(arrayNo20_reg_41168.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,3,3>(arrayNo21_reg_41468.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,3,3>(arrayNo22_reg_41768.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,3,3>(arrayNo23_reg_41979.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,3,3>(arrayNo24_reg_42279.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,3,3>(arrayNo25_reg_42534.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,3,3>(arrayNo26_reg_42834.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,3,3>(arrayNo27_reg_43089.read(), ap_const_lv3_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,3,3>(arrayNo_reg_43389.read(), ap_const_lv3_4)))) {
        weights_96_96_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_69_reg_43429.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_61_reg_43129.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_53_reg_42874.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_45_reg_42574.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_37_reg_42319.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_29_reg_42019.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_21_reg_41808.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_13_reg_41508.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_5_reg_41208.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_5_address0 = grp_subconv_1x1_8p_p_fu_8580_weight_5_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_5_address0 = grp_subconv_1x1_4_p_fu_8500_weight_5_V_address0.read();
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
        weights_96_96_1x1_V_5_ce0 = grp_subconv_1x1_8p_p_fu_8580_weight_5_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_5_ce0 = grp_subconv_1x1_4_p_fu_8500_weight_5_V_ce0.read();
    } else {
        weights_96_96_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,3,3>(arrayNo20_reg_41168.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,3,3>(arrayNo21_reg_41468.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,3,3>(arrayNo22_reg_41768.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,3,3>(arrayNo23_reg_41979.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,3,3>(arrayNo24_reg_42279.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,3,3>(arrayNo25_reg_42534.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,3,3>(arrayNo26_reg_42834.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,3,3>(arrayNo27_reg_43089.read(), ap_const_lv3_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,3,3>(arrayNo_reg_43389.read(), ap_const_lv3_5)))) {
        weights_96_96_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_64_reg_43404.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_56_reg_43104.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_48_reg_42849.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_40_reg_42549.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_32_reg_42294.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_24_reg_41994.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_16_reg_41783.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_8_reg_41483.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_s_reg_41183.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_6_address0 = grp_subconv_1x1_8p_p_fu_8580_weight_6_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_6_address0 = grp_subconv_1x1_4_p_fu_8500_weight_6_V_address0.read();
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
        weights_96_96_1x1_V_6_ce0 = grp_subconv_1x1_8p_p_fu_8580_weight_6_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_6_ce0 = grp_subconv_1x1_4_p_fu_8500_weight_6_V_ce0.read();
    } else {
        weights_96_96_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,3,3>(arrayNo20_reg_41168.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,3,3>(arrayNo21_reg_41468.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,3,3>(arrayNo22_reg_41768.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,3,3>(arrayNo23_reg_41979.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,3,3>(arrayNo24_reg_42279.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,3,3>(arrayNo25_reg_42534.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,3,3>(arrayNo26_reg_42834.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,3,3>(arrayNo27_reg_43089.read(), ap_const_lv3_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,3,3>(arrayNo_reg_43389.read(), ap_const_lv3_6)))) {
        weights_96_96_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_65_reg_43409.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_57_reg_43109.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_49_reg_42854.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_41_reg_42554.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_33_reg_42299.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_25_reg_41999.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_17_reg_41788.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_9_reg_41488.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_1_reg_41188.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_7_address0 = grp_subconv_1x1_8p_p_fu_8580_weight_7_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_7_address0 = grp_subconv_1x1_4_p_fu_8500_weight_7_V_address0.read();
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
        weights_96_96_1x1_V_7_ce0 = grp_subconv_1x1_8p_p_fu_8580_weight_7_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_7_ce0 = grp_subconv_1x1_4_p_fu_8500_weight_7_V_ce0.read();
    } else {
        weights_96_96_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,3,3>(arrayNo20_reg_41168.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,3,3>(arrayNo21_reg_41468.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,3,3>(arrayNo22_reg_41768.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,3,3>(arrayNo23_reg_41979.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,3,3>(arrayNo24_reg_42279.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,3,3>(arrayNo25_reg_42534.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,3,3>(arrayNo26_reg_42834.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,3,3>(arrayNo27_reg_43089.read(), ap_const_lv3_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,3,3>(arrayNo_reg_43389.read(), ap_const_lv3_7)))) {
        weights_96_96_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_71_reg_43439.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_63_reg_43139.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_55_reg_42884.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_47_reg_42584.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_39_reg_42329.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_31_reg_42029.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_23_reg_41818.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_15_reg_41518.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_7_reg_41218.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_s_address0 = grp_subconv_1x1_8p_p_fu_8580_weight_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_s_address0 = grp_subconv_1x1_4_p_fu_8500_weight_0_V_address0.read();
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
        weights_96_96_1x1_V_s_ce0 = grp_subconv_1x1_8p_p_fu_8580_weight_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_s_ce0 = grp_subconv_1x1_4_p_fu_8500_weight_0_V_ce0.read();
    } else {
        weights_96_96_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,3,3>(arrayNo20_reg_41168.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,3,3>(arrayNo21_reg_41468.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,3,3>(arrayNo22_reg_41768.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,3,3>(arrayNo23_reg_41979.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,3,3>(arrayNo24_reg_42279.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,3,3>(arrayNo25_reg_42534.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,3,3>(arrayNo26_reg_42834.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,3,3>(arrayNo27_reg_43089.read(), ap_const_lv3_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,3,3>(arrayNo_reg_43389.read(), ap_const_lv3_0)))) {
        weights_96_96_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_s_we0 = ap_const_logic_0;
    }
}

}

