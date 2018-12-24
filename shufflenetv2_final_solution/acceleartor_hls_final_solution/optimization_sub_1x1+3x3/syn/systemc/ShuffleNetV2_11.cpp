#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_3)))) {
        weights_48_48_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_40_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_902_reg_60228.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_854_reg_59753.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_806_reg_59313.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_758_reg_58838.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_710_reg_58398.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_662_reg_57923.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_614_reg_57483.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_566_reg_57008.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_518_reg_56568.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_470_reg_56093.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_422_reg_55653.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_374_reg_55178.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_326_reg_54738.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_278_reg_54263.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_230_reg_53823.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_182_reg_53348.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_134_reg_52952.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_86_reg_52477.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_40_address0 = weights_48_48_1x1_V_38_reg_52002.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_40_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_40_V_address0.read();
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
        weights_48_48_1x1_V_40_address0 = grp_subconv_1x1_8_p_fu_22522_weight_40_V_address0.read();
    } else {
        weights_48_48_1x1_V_40_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_40_ce0() {
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
        weights_48_48_1x1_V_40_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_40_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_40_V_ce0.read();
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
        weights_48_48_1x1_V_40_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_40_V_ce0.read();
    } else {
        weights_48_48_1x1_V_40_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_40_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_28)))) {
        weights_48_48_1x1_V_40_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_40_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_41_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_895_reg_60193.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_847_reg_59718.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_799_reg_59278.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_751_reg_58803.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_703_reg_58363.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_655_reg_57888.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_607_reg_57448.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_559_reg_56973.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_511_reg_56533.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_463_reg_56058.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_415_reg_55618.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_367_reg_55143.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_319_reg_54703.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_271_reg_54228.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_223_reg_53788.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_175_reg_53313.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_127_reg_52917.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_79_reg_52442.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_41_address0 = weights_48_48_1x1_V_31_reg_51967.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_41_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_41_V_address0.read();
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
        weights_48_48_1x1_V_41_address0 = grp_subconv_1x1_8_p_fu_22522_weight_41_V_address0.read();
    } else {
        weights_48_48_1x1_V_41_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_41_ce0() {
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
        weights_48_48_1x1_V_41_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_41_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_41_V_ce0.read();
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
        weights_48_48_1x1_V_41_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_41_V_ce0.read();
    } else {
        weights_48_48_1x1_V_41_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_41_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_29)))) {
        weights_48_48_1x1_V_41_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_41_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_42_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_885_reg_60143.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_837_reg_59668.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_789_reg_59228.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_741_reg_58753.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_693_reg_58313.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_645_reg_57838.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_597_reg_57398.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_549_reg_56923.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_501_reg_56483.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_453_reg_56008.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_405_reg_55568.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_357_reg_55093.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_309_reg_54653.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_261_reg_54178.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_213_reg_53738.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_165_reg_53263.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_117_reg_52867.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_69_reg_52392.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_42_address0 = weights_48_48_1x1_V_21_reg_51917.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_42_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_42_V_address0.read();
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
        weights_48_48_1x1_V_42_address0 = grp_subconv_1x1_8_p_fu_22522_weight_42_V_address0.read();
    } else {
        weights_48_48_1x1_V_42_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_42_ce0() {
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
        weights_48_48_1x1_V_42_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_42_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_42_V_ce0.read();
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
        weights_48_48_1x1_V_42_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_42_V_ce0.read();
    } else {
        weights_48_48_1x1_V_42_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_42_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_2A)))) {
        weights_48_48_1x1_V_42_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_42_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_43_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_910_reg_60268.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_862_reg_59793.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_814_reg_59353.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_766_reg_58878.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_718_reg_58438.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_670_reg_57963.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_622_reg_57523.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_574_reg_57048.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_526_reg_56608.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_478_reg_56133.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_430_reg_55693.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_382_reg_55218.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_334_reg_54778.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_286_reg_54303.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_238_reg_53863.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_190_reg_53388.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_142_reg_52992.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_94_reg_52517.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_43_address0 = weights_48_48_1x1_V_46_reg_52042.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_43_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_43_V_address0.read();
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
        weights_48_48_1x1_V_43_address0 = grp_subconv_1x1_8_p_fu_22522_weight_43_V_address0.read();
    } else {
        weights_48_48_1x1_V_43_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_43_ce0() {
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
        weights_48_48_1x1_V_43_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_43_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_43_V_ce0.read();
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
        weights_48_48_1x1_V_43_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_43_V_ce0.read();
    } else {
        weights_48_48_1x1_V_43_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_43_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_2B)))) {
        weights_48_48_1x1_V_43_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_43_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_44_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_903_reg_60233.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_855_reg_59758.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_807_reg_59318.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_759_reg_58843.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_711_reg_58403.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_663_reg_57928.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_615_reg_57488.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_567_reg_57013.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_519_reg_56573.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_471_reg_56098.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_423_reg_55658.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_375_reg_55183.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_327_reg_54743.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_279_reg_54268.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_231_reg_53828.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_183_reg_53353.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_135_reg_52957.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_87_reg_52482.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_44_address0 = weights_48_48_1x1_V_39_reg_52007.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_44_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_44_V_address0.read();
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
        weights_48_48_1x1_V_44_address0 = grp_subconv_1x1_8_p_fu_22522_weight_44_V_address0.read();
    } else {
        weights_48_48_1x1_V_44_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_44_ce0() {
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
        weights_48_48_1x1_V_44_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_44_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_44_V_ce0.read();
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
        weights_48_48_1x1_V_44_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_44_V_ce0.read();
    } else {
        weights_48_48_1x1_V_44_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_44_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_2C)))) {
        weights_48_48_1x1_V_44_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_44_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_45_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_888_reg_60158.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_840_reg_59683.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_792_reg_59243.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_744_reg_58768.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_696_reg_58328.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_648_reg_57853.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_600_reg_57413.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_552_reg_56938.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_504_reg_56498.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_456_reg_56023.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_408_reg_55583.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_360_reg_55108.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_312_reg_54668.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_264_reg_54193.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_216_reg_53753.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_168_reg_53278.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_120_reg_52882.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_72_reg_52407.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_45_address0 = weights_48_48_1x1_V_24_reg_51932.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_45_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_45_V_address0.read();
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
        weights_48_48_1x1_V_45_address0 = grp_subconv_1x1_8_p_fu_22522_weight_45_V_address0.read();
    } else {
        weights_48_48_1x1_V_45_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_45_ce0() {
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
        weights_48_48_1x1_V_45_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_45_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_45_V_ce0.read();
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
        weights_48_48_1x1_V_45_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_45_V_ce0.read();
    } else {
        weights_48_48_1x1_V_45_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_45_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_2D)))) {
        weights_48_48_1x1_V_45_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_45_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_46_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_904_reg_60238.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_856_reg_59763.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_808_reg_59323.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_760_reg_58848.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_712_reg_58408.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_664_reg_57933.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_616_reg_57493.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_568_reg_57018.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_520_reg_56578.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_472_reg_56103.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_424_reg_55663.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_376_reg_55188.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_328_reg_54748.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_280_reg_54273.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_232_reg_53833.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_184_reg_53358.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_136_reg_52962.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_88_reg_52487.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_46_address0 = weights_48_48_1x1_V_40_reg_52012.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_46_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_46_V_address0.read();
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
        weights_48_48_1x1_V_46_address0 = grp_subconv_1x1_8_p_fu_22522_weight_46_V_address0.read();
    } else {
        weights_48_48_1x1_V_46_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_46_ce0() {
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
        weights_48_48_1x1_V_46_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_46_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_46_V_ce0.read();
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
        weights_48_48_1x1_V_46_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_46_V_ce0.read();
    } else {
        weights_48_48_1x1_V_46_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_46_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_2E)))) {
        weights_48_48_1x1_V_46_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_46_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_47_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_905_reg_60243.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_857_reg_59768.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_809_reg_59328.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_761_reg_58853.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_713_reg_58413.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_665_reg_57938.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_617_reg_57498.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_569_reg_57023.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_521_reg_56583.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_473_reg_56108.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_425_reg_55668.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_377_reg_55193.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_329_reg_54753.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_281_reg_54278.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_233_reg_53838.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_185_reg_53363.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_137_reg_52967.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_89_reg_52492.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_47_address0 = weights_48_48_1x1_V_41_reg_52017.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_47_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_47_V_address0.read();
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
        weights_48_48_1x1_V_47_address0 = grp_subconv_1x1_8_p_fu_22522_weight_47_V_address0.read();
    } else {
        weights_48_48_1x1_V_47_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_47_ce0() {
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
        weights_48_48_1x1_V_47_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_47_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_47_V_ce0.read();
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
        weights_48_48_1x1_V_47_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_47_V_ce0.read();
    } else {
        weights_48_48_1x1_V_47_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_47_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_2E)))) {
        weights_48_48_1x1_V_47_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_47_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_894_reg_60188.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_846_reg_59713.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_798_reg_59273.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_750_reg_58798.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_702_reg_58358.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_654_reg_57883.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_606_reg_57443.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_558_reg_56968.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_510_reg_56528.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_462_reg_56053.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_414_reg_55613.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_366_reg_55138.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_318_reg_54698.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_270_reg_54223.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_222_reg_53783.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_174_reg_53308.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_126_reg_52912.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_78_reg_52437.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_4_address0 = weights_48_48_1x1_V_30_reg_51962.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_4_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_4_V_address0.read();
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
        weights_48_48_1x1_V_4_address0 = grp_subconv_1x1_8_p_fu_22522_weight_4_V_address0.read();
    } else {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<6>) ("XXXXXX");
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
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_4_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_4_V_ce0.read();
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
        weights_48_48_1x1_V_4_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_4_V_ce0.read();
    } else {
        weights_48_48_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_4)))) {
        weights_48_48_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_898_reg_60208.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_850_reg_59733.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_802_reg_59293.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_754_reg_58818.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_706_reg_58378.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_658_reg_57903.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_610_reg_57463.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_562_reg_56988.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_514_reg_56548.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_466_reg_56073.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_418_reg_55633.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_370_reg_55158.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_322_reg_54718.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_274_reg_54243.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_226_reg_53803.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_178_reg_53328.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_130_reg_52932.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_82_reg_52457.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_5_address0 = weights_48_48_1x1_V_34_reg_51982.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_5_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_5_V_address0.read();
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
        weights_48_48_1x1_V_5_address0 = grp_subconv_1x1_8_p_fu_22522_weight_5_V_address0.read();
    } else {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<6>) ("XXXXXX");
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
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_5_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_5_V_ce0.read();
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
        weights_48_48_1x1_V_5_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_5_V_ce0.read();
    } else {
        weights_48_48_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_5)))) {
        weights_48_48_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_906_reg_60248.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_858_reg_59773.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_810_reg_59333.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_762_reg_58858.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_714_reg_58418.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_666_reg_57943.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_618_reg_57503.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_570_reg_57028.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_522_reg_56588.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_474_reg_56113.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_426_reg_55673.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_378_reg_55198.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_330_reg_54758.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_282_reg_54283.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_234_reg_53843.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_186_reg_53368.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_138_reg_52972.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_90_reg_52497.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_6_address0 = weights_48_48_1x1_V_42_reg_52022.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_6_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_6_V_address0.read();
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
        weights_48_48_1x1_V_6_address0 = grp_subconv_1x1_8_p_fu_22522_weight_6_V_address0.read();
    } else {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<6>) ("XXXXXX");
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
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_6_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_6_V_ce0.read();
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
        weights_48_48_1x1_V_6_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_6_V_ce0.read();
    } else {
        weights_48_48_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_6)))) {
        weights_48_48_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_892_reg_60178.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_844_reg_59703.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_796_reg_59263.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_748_reg_58788.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_700_reg_58348.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_652_reg_57873.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_604_reg_57433.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_556_reg_56958.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_508_reg_56518.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_460_reg_56043.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_412_reg_55603.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_364_reg_55128.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_316_reg_54688.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_268_reg_54213.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_220_reg_53773.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_172_reg_53298.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_124_reg_52902.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_76_reg_52427.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_7_address0 = weights_48_48_1x1_V_28_reg_51952.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_7_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_7_V_address0.read();
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
        weights_48_48_1x1_V_7_address0 = grp_subconv_1x1_8_p_fu_22522_weight_7_V_address0.read();
    } else {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<6>) ("XXXXXX");
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
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_7_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_7_V_ce0.read();
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
        weights_48_48_1x1_V_7_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_7_V_ce0.read();
    } else {
        weights_48_48_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_7)))) {
        weights_48_48_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_887_reg_60153.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_839_reg_59678.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_791_reg_59238.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_743_reg_58763.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_695_reg_58323.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_647_reg_57848.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_599_reg_57408.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_551_reg_56933.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_503_reg_56493.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_455_reg_56018.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_407_reg_55578.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_359_reg_55103.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_311_reg_54663.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_263_reg_54188.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_215_reg_53748.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_167_reg_53273.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_119_reg_52877.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_71_reg_52402.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_8_address0 = weights_48_48_1x1_V_23_reg_51927.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_8_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_8_V_address0.read();
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
        weights_48_48_1x1_V_8_address0 = grp_subconv_1x1_8_p_fu_22522_weight_8_V_address0.read();
    } else {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_ce0() {
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
        weights_48_48_1x1_V_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_8_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_8_V_ce0.read();
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
        weights_48_48_1x1_V_8_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_8_V_ce0.read();
    } else {
        weights_48_48_1x1_V_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_8)))) {
        weights_48_48_1x1_V_8_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_909_reg_60263.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_861_reg_59788.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_813_reg_59348.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_765_reg_58873.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_717_reg_58433.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_669_reg_57958.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_621_reg_57518.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_573_reg_57043.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_525_reg_56603.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_477_reg_56128.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_429_reg_55688.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_381_reg_55213.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_333_reg_54773.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_285_reg_54298.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_237_reg_53858.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_189_reg_53383.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_141_reg_52987.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_93_reg_52512.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_9_address0 = weights_48_48_1x1_V_45_reg_52037.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_9_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_9_V_address0.read();
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
        weights_48_48_1x1_V_9_address0 = grp_subconv_1x1_8_p_fu_22522_weight_9_V_address0.read();
    } else {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_ce0() {
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
        weights_48_48_1x1_V_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_9_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_9_V_ce0.read();
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
        weights_48_48_1x1_V_9_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_9_V_ce0.read();
    } else {
        weights_48_48_1x1_V_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_9)))) {
        weights_48_48_1x1_V_9_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_864_reg_60038.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_816_reg_59563.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_768_reg_59123.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_720_reg_58648.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_672_reg_58208.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_624_reg_57733.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_576_reg_57293.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_528_reg_56818.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_480_reg_56378.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_432_reg_55903.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_384_reg_55463.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_336_reg_54988.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_288_reg_54548.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_240_reg_54073.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_192_reg_53633.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_144_reg_53158.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_96_reg_52762.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_48_reg_52287.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_s_address0 = weights_48_48_1x1_V_s_reg_51812.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_s_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_0_V_address0.read();
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
        weights_48_48_1x1_V_s_address0 = grp_subconv_1x1_8_p_fu_22522_weight_0_V_address0.read();
    } else {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<6>) ("XXXXXX");
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
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_s_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_0_V_ce0.read();
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
        weights_48_48_1x1_V_s_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_0_V_ce0.read();
    } else {
        weights_48_48_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_0)))) {
        weights_48_48_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_s_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1606.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1641_cast_fu_48404_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1515.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1578_cast_fu_46879_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1424.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1514_cast_fu_45338_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1336.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1460_cast_fu_43940_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1279.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1433_cast_fu_43166_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_8_stride_1_fu_25385_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1437.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1528.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()))) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_4_no_rel_fu_23751_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_8_stride_fu_23549_weight_V_address0.read();
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
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_8_stride_1_fu_25385_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1437.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1528.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()))) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_4_no_rel_fu_23751_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1292.read())) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_8_stride_fu_23549_weight_V_ce0.read();
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

void ShuffleNetV2::thread_weights_96_96_1x1_V_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_10_address0 = weights_96_96_1x1_V_823_reg_66270.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_10_address0 = weights_96_96_1x1_V_727_reg_65555.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_10_address0 = weights_96_96_1x1_V_631_reg_64875.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_10_address0 = weights_96_96_1x1_V_535_reg_64160.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_10_address0 = weights_96_96_1x1_V_439_reg_63480.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_10_address0 = weights_96_96_1x1_V_343_reg_62765.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_10_address0 = weights_96_96_1x1_V_247_reg_62129.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_10_address0 = weights_96_96_1x1_V_151_reg_61414.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_10_address0 = weights_96_96_1x1_V_55_reg_60699.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_10_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_10_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_10_address0 = grp_subconv_1x1_4_p_fu_22130_weight_10_V_address0.read();
    } else {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_10_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_10_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_10_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_10_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_10_V_ce0.read();
    } else {
        weights_96_96_1x1_V_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_A)))) {
        weights_96_96_1x1_V_10_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_11_address0 = weights_96_96_1x1_V_827_reg_66290.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_11_address0 = weights_96_96_1x1_V_731_reg_65575.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_11_address0 = weights_96_96_1x1_V_635_reg_64895.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_11_address0 = weights_96_96_1x1_V_539_reg_64180.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_11_address0 = weights_96_96_1x1_V_443_reg_63500.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_11_address0 = weights_96_96_1x1_V_347_reg_62785.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_11_address0 = weights_96_96_1x1_V_251_reg_62149.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_11_address0 = weights_96_96_1x1_V_155_reg_61434.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_11_address0 = weights_96_96_1x1_V_59_reg_60719.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_11_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_11_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_11_address0 = grp_subconv_1x1_4_p_fu_22130_weight_11_V_address0.read();
    } else {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_11_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_11_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_11_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_11_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_11_V_ce0.read();
    } else {
        weights_96_96_1x1_V_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_B)))) {
        weights_96_96_1x1_V_11_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_12_address0 = weights_96_96_1x1_V_828_reg_66295.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_12_address0 = weights_96_96_1x1_V_732_reg_65580.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_12_address0 = weights_96_96_1x1_V_636_reg_64900.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_12_address0 = weights_96_96_1x1_V_540_reg_64185.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_12_address0 = weights_96_96_1x1_V_444_reg_63505.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_12_address0 = weights_96_96_1x1_V_348_reg_62790.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_12_address0 = weights_96_96_1x1_V_252_reg_62154.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_12_address0 = weights_96_96_1x1_V_156_reg_61439.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_12_address0 = weights_96_96_1x1_V_60_reg_60724.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_12_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_12_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_12_address0 = grp_subconv_1x1_4_p_fu_22130_weight_12_V_address0.read();
    } else {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_12_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_12_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_12_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_12_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_12_V_ce0.read();
    } else {
        weights_96_96_1x1_V_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_C)))) {
        weights_96_96_1x1_V_12_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_13_address0 = weights_96_96_1x1_V_843_reg_66370.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_13_address0 = weights_96_96_1x1_V_747_reg_65655.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_13_address0 = weights_96_96_1x1_V_651_reg_64975.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_13_address0 = weights_96_96_1x1_V_555_reg_64260.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_13_address0 = weights_96_96_1x1_V_459_reg_63580.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_13_address0 = weights_96_96_1x1_V_363_reg_62865.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_13_address0 = weights_96_96_1x1_V_267_reg_62229.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_13_address0 = weights_96_96_1x1_V_171_reg_61514.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_13_address0 = weights_96_96_1x1_V_75_reg_60799.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_13_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_13_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_13_address0 = grp_subconv_1x1_4_p_fu_22130_weight_13_V_address0.read();
    } else {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_13_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_13_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_13_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_13_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_13_V_ce0.read();
    } else {
        weights_96_96_1x1_V_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_D)))) {
        weights_96_96_1x1_V_13_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_14_address0 = weights_96_96_1x1_V_842_reg_66365.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_14_address0 = weights_96_96_1x1_V_746_reg_65650.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_14_address0 = weights_96_96_1x1_V_650_reg_64970.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_14_address0 = weights_96_96_1x1_V_554_reg_64255.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_14_address0 = weights_96_96_1x1_V_458_reg_63575.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_14_address0 = weights_96_96_1x1_V_362_reg_62860.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_14_address0 = weights_96_96_1x1_V_266_reg_62224.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_14_address0 = weights_96_96_1x1_V_170_reg_61509.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_14_address0 = weights_96_96_1x1_V_74_reg_60794.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_14_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_14_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_14_address0 = grp_subconv_1x1_4_p_fu_22130_weight_14_V_address0.read();
    } else {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_14_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_14_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_14_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_14_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_14_V_ce0.read();
    } else {
        weights_96_96_1x1_V_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_E)))) {
        weights_96_96_1x1_V_14_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_15_address0 = weights_96_96_1x1_V_835_reg_66330.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_15_address0 = weights_96_96_1x1_V_739_reg_65615.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_15_address0 = weights_96_96_1x1_V_643_reg_64935.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_15_address0 = weights_96_96_1x1_V_547_reg_64220.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_15_address0 = weights_96_96_1x1_V_451_reg_63540.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_15_address0 = weights_96_96_1x1_V_355_reg_62825.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_15_address0 = weights_96_96_1x1_V_259_reg_62189.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_15_address0 = weights_96_96_1x1_V_163_reg_61474.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_15_address0 = weights_96_96_1x1_V_67_reg_60759.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_15_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_15_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_15_address0 = grp_subconv_1x1_4_p_fu_22130_weight_15_V_address0.read();
    } else {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_15_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_15_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_15_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_15_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_15_V_ce0.read();
    } else {
        weights_96_96_1x1_V_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_F)))) {
        weights_96_96_1x1_V_15_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_16_address0 = weights_96_96_1x1_V_834_reg_66325.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_16_address0 = weights_96_96_1x1_V_738_reg_65610.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_16_address0 = weights_96_96_1x1_V_642_reg_64930.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_16_address0 = weights_96_96_1x1_V_546_reg_64215.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_16_address0 = weights_96_96_1x1_V_450_reg_63535.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_16_address0 = weights_96_96_1x1_V_354_reg_62820.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_16_address0 = weights_96_96_1x1_V_258_reg_62184.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_16_address0 = weights_96_96_1x1_V_162_reg_61469.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_16_address0 = weights_96_96_1x1_V_66_reg_60754.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_16_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_16_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_16_address0 = grp_subconv_1x1_4_p_fu_22130_weight_16_V_address0.read();
    } else {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_16_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_16_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_16_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_16_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_16_V_ce0.read();
    } else {
        weights_96_96_1x1_V_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_16_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_10)))) {
        weights_96_96_1x1_V_16_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_17_address0 = weights_96_96_1x1_V_833_reg_66320.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_17_address0 = weights_96_96_1x1_V_737_reg_65605.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_17_address0 = weights_96_96_1x1_V_641_reg_64925.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_17_address0 = weights_96_96_1x1_V_545_reg_64210.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_17_address0 = weights_96_96_1x1_V_449_reg_63530.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_17_address0 = weights_96_96_1x1_V_353_reg_62815.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_17_address0 = weights_96_96_1x1_V_257_reg_62179.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_17_address0 = weights_96_96_1x1_V_161_reg_61464.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_17_address0 = weights_96_96_1x1_V_65_reg_60749.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_17_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_17_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_17_address0 = grp_subconv_1x1_4_p_fu_22130_weight_17_V_address0.read();
    } else {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_17_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_17_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_17_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_17_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_17_V_ce0.read();
    } else {
        weights_96_96_1x1_V_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_17_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_11)))) {
        weights_96_96_1x1_V_17_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_18_address0 = weights_96_96_1x1_V_831_reg_66310.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_18_address0 = weights_96_96_1x1_V_735_reg_65595.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_18_address0 = weights_96_96_1x1_V_639_reg_64915.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_18_address0 = weights_96_96_1x1_V_543_reg_64200.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_18_address0 = weights_96_96_1x1_V_447_reg_63520.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_18_address0 = weights_96_96_1x1_V_351_reg_62805.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_18_address0 = weights_96_96_1x1_V_255_reg_62169.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_18_address0 = weights_96_96_1x1_V_159_reg_61454.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_18_address0 = weights_96_96_1x1_V_63_reg_60739.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_18_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_18_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_18_address0 = grp_subconv_1x1_4_p_fu_22130_weight_18_V_address0.read();
    } else {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_18_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_18_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_18_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_18_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_18_V_ce0.read();
    } else {
        weights_96_96_1x1_V_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_18_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_12)))) {
        weights_96_96_1x1_V_18_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_19_address0 = weights_96_96_1x1_V_832_reg_66315.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_19_address0 = weights_96_96_1x1_V_736_reg_65600.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_19_address0 = weights_96_96_1x1_V_640_reg_64920.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_19_address0 = weights_96_96_1x1_V_544_reg_64205.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_19_address0 = weights_96_96_1x1_V_448_reg_63525.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_19_address0 = weights_96_96_1x1_V_352_reg_62810.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_19_address0 = weights_96_96_1x1_V_256_reg_62174.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_19_address0 = weights_96_96_1x1_V_160_reg_61459.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_19_address0 = weights_96_96_1x1_V_64_reg_60744.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_19_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_19_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_19_address0 = grp_subconv_1x1_4_p_fu_22130_weight_19_V_address0.read();
    } else {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_19_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_19_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_19_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_19_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_19_V_ce0.read();
    } else {
        weights_96_96_1x1_V_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_19_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_13)))) {
        weights_96_96_1x1_V_19_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_824_reg_66275.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_728_reg_65560.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_632_reg_64880.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_536_reg_64165.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_440_reg_63485.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_344_reg_62770.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_248_reg_62134.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_152_reg_61419.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_1_address0 = weights_96_96_1x1_V_56_reg_60704.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_1_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_1_address0 = grp_subconv_1x1_4_p_fu_22130_weight_1_V_address0.read();
    } else {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<7>) ("XXXXXXX");
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
        weights_96_96_1x1_V_1_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_1_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_1_V_ce0.read();
    } else {
        weights_96_96_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_1)))) {
        weights_96_96_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_20_address0 = weights_96_96_1x1_V_830_reg_66305.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_20_address0 = weights_96_96_1x1_V_734_reg_65590.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_20_address0 = weights_96_96_1x1_V_638_reg_64910.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_20_address0 = weights_96_96_1x1_V_542_reg_64195.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_20_address0 = weights_96_96_1x1_V_446_reg_63515.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_20_address0 = weights_96_96_1x1_V_350_reg_62800.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_20_address0 = weights_96_96_1x1_V_254_reg_62164.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_20_address0 = weights_96_96_1x1_V_158_reg_61449.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_20_address0 = weights_96_96_1x1_V_62_reg_60734.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_20_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_20_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_20_address0 = grp_subconv_1x1_4_p_fu_22130_weight_20_V_address0.read();
    } else {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_20_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_20_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_20_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_20_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_20_V_ce0.read();
    } else {
        weights_96_96_1x1_V_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_20_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_14)))) {
        weights_96_96_1x1_V_20_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_21_address0 = weights_96_96_1x1_V_840_reg_66355.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_21_address0 = weights_96_96_1x1_V_744_reg_65640.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_21_address0 = weights_96_96_1x1_V_648_reg_64960.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_21_address0 = weights_96_96_1x1_V_552_reg_64245.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_21_address0 = weights_96_96_1x1_V_456_reg_63565.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_21_address0 = weights_96_96_1x1_V_360_reg_62850.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_21_address0 = weights_96_96_1x1_V_264_reg_62214.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_21_address0 = weights_96_96_1x1_V_168_reg_61499.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_21_address0 = weights_96_96_1x1_V_72_reg_60784.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_21_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_21_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_21_address0 = grp_subconv_1x1_4_p_fu_22130_weight_21_V_address0.read();
    } else {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_21_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_21_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_21_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_21_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_21_V_ce0.read();
    } else {
        weights_96_96_1x1_V_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_21_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_15)))) {
        weights_96_96_1x1_V_21_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_22_address0 = weights_96_96_1x1_V_844_reg_66375.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_22_address0 = weights_96_96_1x1_V_748_reg_65660.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_22_address0 = weights_96_96_1x1_V_652_reg_64980.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_22_address0 = weights_96_96_1x1_V_556_reg_64265.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_22_address0 = weights_96_96_1x1_V_460_reg_63585.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_22_address0 = weights_96_96_1x1_V_364_reg_62870.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_22_address0 = weights_96_96_1x1_V_268_reg_62234.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_22_address0 = weights_96_96_1x1_V_172_reg_61519.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_22_address0 = weights_96_96_1x1_V_76_reg_60804.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_22_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_22_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_22_address0 = grp_subconv_1x1_4_p_fu_22130_weight_22_V_address0.read();
    } else {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_22_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_22_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_22_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_22_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_22_V_ce0.read();
    } else {
        weights_96_96_1x1_V_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_22_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_16)))) {
        weights_96_96_1x1_V_22_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_23_address0 = weights_96_96_1x1_V_841_reg_66360.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_23_address0 = weights_96_96_1x1_V_745_reg_65645.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_23_address0 = weights_96_96_1x1_V_649_reg_64965.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_23_address0 = weights_96_96_1x1_V_553_reg_64250.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_23_address0 = weights_96_96_1x1_V_457_reg_63570.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_23_address0 = weights_96_96_1x1_V_361_reg_62855.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_23_address0 = weights_96_96_1x1_V_265_reg_62219.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_23_address0 = weights_96_96_1x1_V_169_reg_61504.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_23_address0 = weights_96_96_1x1_V_73_reg_60789.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_23_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_23_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_23_address0 = grp_subconv_1x1_4_p_fu_22130_weight_23_V_address0.read();
    } else {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_23_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_23_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_23_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_23_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_23_V_ce0.read();
    } else {
        weights_96_96_1x1_V_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_23_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_17)))) {
        weights_96_96_1x1_V_23_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_24_address0 = weights_96_96_1x1_V_836_reg_66335.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_24_address0 = weights_96_96_1x1_V_740_reg_65620.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_24_address0 = weights_96_96_1x1_V_644_reg_64940.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_24_address0 = weights_96_96_1x1_V_548_reg_64225.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_24_address0 = weights_96_96_1x1_V_452_reg_63545.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_24_address0 = weights_96_96_1x1_V_356_reg_62830.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_24_address0 = weights_96_96_1x1_V_260_reg_62194.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_24_address0 = weights_96_96_1x1_V_164_reg_61479.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_24_address0 = weights_96_96_1x1_V_68_reg_60764.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_24_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_24_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_24_address0 = grp_subconv_1x1_4_p_fu_22130_weight_24_V_address0.read();
    } else {
        weights_96_96_1x1_V_24_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_24_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_24_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_24_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_24_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_24_V_ce0.read();
    } else {
        weights_96_96_1x1_V_24_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_24_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_18)))) {
        weights_96_96_1x1_V_24_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_24_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_25_address0 = weights_96_96_1x1_V_837_reg_66340.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_25_address0 = weights_96_96_1x1_V_741_reg_65625.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_25_address0 = weights_96_96_1x1_V_645_reg_64945.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_25_address0 = weights_96_96_1x1_V_549_reg_64230.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_25_address0 = weights_96_96_1x1_V_453_reg_63550.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_25_address0 = weights_96_96_1x1_V_357_reg_62835.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_25_address0 = weights_96_96_1x1_V_261_reg_62199.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_25_address0 = weights_96_96_1x1_V_165_reg_61484.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_25_address0 = weights_96_96_1x1_V_69_reg_60769.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_25_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_25_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_25_address0 = grp_subconv_1x1_4_p_fu_22130_weight_25_V_address0.read();
    } else {
        weights_96_96_1x1_V_25_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_25_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_25_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_25_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_25_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_25_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_25_V_ce0.read();
    } else {
        weights_96_96_1x1_V_25_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_25_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_19)))) {
        weights_96_96_1x1_V_25_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_25_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_26_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_26_address0 = weights_96_96_1x1_V_838_reg_66345.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_26_address0 = weights_96_96_1x1_V_742_reg_65630.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_26_address0 = weights_96_96_1x1_V_646_reg_64950.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_26_address0 = weights_96_96_1x1_V_550_reg_64235.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_26_address0 = weights_96_96_1x1_V_454_reg_63555.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_26_address0 = weights_96_96_1x1_V_358_reg_62840.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_26_address0 = weights_96_96_1x1_V_262_reg_62204.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_26_address0 = weights_96_96_1x1_V_166_reg_61489.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_26_address0 = weights_96_96_1x1_V_70_reg_60774.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_26_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_26_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_26_address0 = grp_subconv_1x1_4_p_fu_22130_weight_26_V_address0.read();
    } else {
        weights_96_96_1x1_V_26_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_26_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_26_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_26_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_26_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_26_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_26_V_ce0.read();
    } else {
        weights_96_96_1x1_V_26_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_26_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_1A)))) {
        weights_96_96_1x1_V_26_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_26_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_27_address0 = weights_96_96_1x1_V_839_reg_66350.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_27_address0 = weights_96_96_1x1_V_743_reg_65635.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_27_address0 = weights_96_96_1x1_V_647_reg_64955.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_27_address0 = weights_96_96_1x1_V_551_reg_64240.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_27_address0 = weights_96_96_1x1_V_455_reg_63560.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_27_address0 = weights_96_96_1x1_V_359_reg_62845.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_27_address0 = weights_96_96_1x1_V_263_reg_62209.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_27_address0 = weights_96_96_1x1_V_167_reg_61494.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_27_address0 = weights_96_96_1x1_V_71_reg_60779.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_27_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_27_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_27_address0 = grp_subconv_1x1_4_p_fu_22130_weight_27_V_address0.read();
    } else {
        weights_96_96_1x1_V_27_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_27_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_27_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_27_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_27_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_27_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_27_V_ce0.read();
    } else {
        weights_96_96_1x1_V_27_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_27_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_1B)))) {
        weights_96_96_1x1_V_27_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_27_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_28_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_28_address0 = weights_96_96_1x1_V_825_reg_66280.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_28_address0 = weights_96_96_1x1_V_729_reg_65565.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_28_address0 = weights_96_96_1x1_V_633_reg_64885.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_28_address0 = weights_96_96_1x1_V_537_reg_64170.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_28_address0 = weights_96_96_1x1_V_441_reg_63490.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_28_address0 = weights_96_96_1x1_V_345_reg_62775.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_28_address0 = weights_96_96_1x1_V_249_reg_62139.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_28_address0 = weights_96_96_1x1_V_153_reg_61424.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_28_address0 = weights_96_96_1x1_V_57_reg_60709.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_28_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_28_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_28_address0 = grp_subconv_1x1_4_p_fu_22130_weight_28_V_address0.read();
    } else {
        weights_96_96_1x1_V_28_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_28_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_28_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_28_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_28_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_28_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_28_V_ce0.read();
    } else {
        weights_96_96_1x1_V_28_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_28_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_1C)))) {
        weights_96_96_1x1_V_28_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_28_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_29_address0 = weights_96_96_1x1_V_863_reg_66470.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_29_address0 = weights_96_96_1x1_V_767_reg_65755.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_29_address0 = weights_96_96_1x1_V_671_reg_65075.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_29_address0 = weights_96_96_1x1_V_575_reg_64360.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_29_address0 = weights_96_96_1x1_V_479_reg_63680.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_29_address0 = weights_96_96_1x1_V_383_reg_62965.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_29_address0 = weights_96_96_1x1_V_287_reg_62329.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_29_address0 = weights_96_96_1x1_V_191_reg_61614.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_29_address0 = weights_96_96_1x1_V_95_reg_60899.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_29_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_29_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_29_address0 = grp_subconv_1x1_4_p_fu_22130_weight_29_V_address0.read();
    } else {
        weights_96_96_1x1_V_29_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_29_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_29_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_29_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_29_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_29_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_29_V_ce0.read();
    } else {
        weights_96_96_1x1_V_29_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_29_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_1D)))) {
        weights_96_96_1x1_V_29_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_29_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_826_reg_66285.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_730_reg_65570.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_634_reg_64890.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_538_reg_64175.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_442_reg_63495.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_346_reg_62780.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_250_reg_62144.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_154_reg_61429.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_2_address0 = weights_96_96_1x1_V_58_reg_60714.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_2_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_2_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_2_address0 = grp_subconv_1x1_4_p_fu_22130_weight_2_V_address0.read();
    } else {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<7>) ("XXXXXXX");
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
        weights_96_96_1x1_V_2_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_2_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_2_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_2_V_ce0.read();
    } else {
        weights_96_96_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_2)))) {
        weights_96_96_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_30_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_30_address0 = weights_96_96_1x1_V_847_reg_66390.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_30_address0 = weights_96_96_1x1_V_751_reg_65675.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_30_address0 = weights_96_96_1x1_V_655_reg_64995.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_30_address0 = weights_96_96_1x1_V_559_reg_64280.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_30_address0 = weights_96_96_1x1_V_463_reg_63600.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_30_address0 = weights_96_96_1x1_V_367_reg_62885.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_30_address0 = weights_96_96_1x1_V_271_reg_62249.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_30_address0 = weights_96_96_1x1_V_175_reg_61534.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_30_address0 = weights_96_96_1x1_V_79_reg_60819.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_30_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_30_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_30_address0 = grp_subconv_1x1_4_p_fu_22130_weight_30_V_address0.read();
    } else {
        weights_96_96_1x1_V_30_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_30_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_30_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_30_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_30_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_30_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_30_V_ce0.read();
    } else {
        weights_96_96_1x1_V_30_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_30_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_1E)))) {
        weights_96_96_1x1_V_30_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_30_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_31_address0 = weights_96_96_1x1_V_861_reg_66460.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_31_address0 = weights_96_96_1x1_V_765_reg_65745.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_31_address0 = weights_96_96_1x1_V_669_reg_65065.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_31_address0 = weights_96_96_1x1_V_573_reg_64350.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_31_address0 = weights_96_96_1x1_V_477_reg_63670.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_31_address0 = weights_96_96_1x1_V_381_reg_62955.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_31_address0 = weights_96_96_1x1_V_285_reg_62319.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_31_address0 = weights_96_96_1x1_V_189_reg_61604.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_31_address0 = weights_96_96_1x1_V_93_reg_60889.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_31_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_31_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_31_address0 = grp_subconv_1x1_4_p_fu_22130_weight_31_V_address0.read();
    } else {
        weights_96_96_1x1_V_31_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_31_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_31_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_31_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_31_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_31_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_31_V_ce0.read();
    } else {
        weights_96_96_1x1_V_31_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_31_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_1F)))) {
        weights_96_96_1x1_V_31_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_31_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_32_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_32_address0 = weights_96_96_1x1_V_862_reg_66465.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_32_address0 = weights_96_96_1x1_V_766_reg_65750.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_32_address0 = weights_96_96_1x1_V_670_reg_65070.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_32_address0 = weights_96_96_1x1_V_574_reg_64355.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_32_address0 = weights_96_96_1x1_V_478_reg_63675.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_32_address0 = weights_96_96_1x1_V_382_reg_62960.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_32_address0 = weights_96_96_1x1_V_286_reg_62324.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_32_address0 = weights_96_96_1x1_V_190_reg_61609.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_32_address0 = weights_96_96_1x1_V_94_reg_60894.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_32_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_32_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_32_address0 = grp_subconv_1x1_4_p_fu_22130_weight_32_V_address0.read();
    } else {
        weights_96_96_1x1_V_32_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_32_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_32_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_32_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_32_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_32_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_32_V_ce0.read();
    } else {
        weights_96_96_1x1_V_32_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_32_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_20)))) {
        weights_96_96_1x1_V_32_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_32_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_33_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_33_address0 = weights_96_96_1x1_V_857_reg_66440.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_33_address0 = weights_96_96_1x1_V_761_reg_65725.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_33_address0 = weights_96_96_1x1_V_665_reg_65045.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_33_address0 = weights_96_96_1x1_V_569_reg_64330.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_33_address0 = weights_96_96_1x1_V_473_reg_63650.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_33_address0 = weights_96_96_1x1_V_377_reg_62935.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_33_address0 = weights_96_96_1x1_V_281_reg_62299.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_33_address0 = weights_96_96_1x1_V_185_reg_61584.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_33_address0 = weights_96_96_1x1_V_89_reg_60869.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_33_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_33_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_33_address0 = grp_subconv_1x1_4_p_fu_22130_weight_33_V_address0.read();
    } else {
        weights_96_96_1x1_V_33_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_33_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_33_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_33_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_33_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_33_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_33_V_ce0.read();
    } else {
        weights_96_96_1x1_V_33_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_33_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_21)))) {
        weights_96_96_1x1_V_33_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_33_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_34_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_34_address0 = weights_96_96_1x1_V_850_reg_66405.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_34_address0 = weights_96_96_1x1_V_754_reg_65690.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_34_address0 = weights_96_96_1x1_V_658_reg_65010.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_34_address0 = weights_96_96_1x1_V_562_reg_64295.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_34_address0 = weights_96_96_1x1_V_466_reg_63615.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_34_address0 = weights_96_96_1x1_V_370_reg_62900.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_34_address0 = weights_96_96_1x1_V_274_reg_62264.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_34_address0 = weights_96_96_1x1_V_178_reg_61549.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_34_address0 = weights_96_96_1x1_V_82_reg_60834.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_34_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_34_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_34_address0 = grp_subconv_1x1_4_p_fu_22130_weight_34_V_address0.read();
    } else {
        weights_96_96_1x1_V_34_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_34_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_34_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_34_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_34_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_34_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_34_V_ce0.read();
    } else {
        weights_96_96_1x1_V_34_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_34_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_22)))) {
        weights_96_96_1x1_V_34_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_34_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_35_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_35_address0 = weights_96_96_1x1_V_856_reg_66435.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_35_address0 = weights_96_96_1x1_V_760_reg_65720.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_35_address0 = weights_96_96_1x1_V_664_reg_65040.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_35_address0 = weights_96_96_1x1_V_568_reg_64325.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_35_address0 = weights_96_96_1x1_V_472_reg_63645.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_35_address0 = weights_96_96_1x1_V_376_reg_62930.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_35_address0 = weights_96_96_1x1_V_280_reg_62294.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_35_address0 = weights_96_96_1x1_V_184_reg_61579.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_35_address0 = weights_96_96_1x1_V_88_reg_60864.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_35_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_35_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_35_address0 = grp_subconv_1x1_4_p_fu_22130_weight_35_V_address0.read();
    } else {
        weights_96_96_1x1_V_35_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_35_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_35_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_35_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_35_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_35_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_35_V_ce0.read();
    } else {
        weights_96_96_1x1_V_35_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_35_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_23)))) {
        weights_96_96_1x1_V_35_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_35_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_36_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_36_address0 = weights_96_96_1x1_V_858_reg_66445.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_36_address0 = weights_96_96_1x1_V_762_reg_65730.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_36_address0 = weights_96_96_1x1_V_666_reg_65050.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_36_address0 = weights_96_96_1x1_V_570_reg_64335.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_36_address0 = weights_96_96_1x1_V_474_reg_63655.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_36_address0 = weights_96_96_1x1_V_378_reg_62940.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_36_address0 = weights_96_96_1x1_V_282_reg_62304.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_36_address0 = weights_96_96_1x1_V_186_reg_61589.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_36_address0 = weights_96_96_1x1_V_90_reg_60874.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_36_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_36_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_36_address0 = grp_subconv_1x1_4_p_fu_22130_weight_36_V_address0.read();
    } else {
        weights_96_96_1x1_V_36_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_36_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_36_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_36_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_36_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_36_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_36_V_ce0.read();
    } else {
        weights_96_96_1x1_V_36_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_36_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_24)))) {
        weights_96_96_1x1_V_36_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_36_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_37_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_37_address0 = weights_96_96_1x1_V_846_reg_66385.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_37_address0 = weights_96_96_1x1_V_750_reg_65670.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_37_address0 = weights_96_96_1x1_V_654_reg_64990.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_37_address0 = weights_96_96_1x1_V_558_reg_64275.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_37_address0 = weights_96_96_1x1_V_462_reg_63595.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_37_address0 = weights_96_96_1x1_V_366_reg_62880.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_37_address0 = weights_96_96_1x1_V_270_reg_62244.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_37_address0 = weights_96_96_1x1_V_174_reg_61529.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_37_address0 = weights_96_96_1x1_V_78_reg_60814.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_37_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_37_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_37_address0 = grp_subconv_1x1_4_p_fu_22130_weight_37_V_address0.read();
    } else {
        weights_96_96_1x1_V_37_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_37_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_37_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_37_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_37_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_37_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_37_V_ce0.read();
    } else {
        weights_96_96_1x1_V_37_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_37_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_25)))) {
        weights_96_96_1x1_V_37_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_37_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_38_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_38_address0 = weights_96_96_1x1_V_855_reg_66430.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_38_address0 = weights_96_96_1x1_V_759_reg_65715.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_38_address0 = weights_96_96_1x1_V_663_reg_65035.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_38_address0 = weights_96_96_1x1_V_567_reg_64320.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_38_address0 = weights_96_96_1x1_V_471_reg_63640.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_38_address0 = weights_96_96_1x1_V_375_reg_62925.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_38_address0 = weights_96_96_1x1_V_279_reg_62289.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_38_address0 = weights_96_96_1x1_V_183_reg_61574.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_38_address0 = weights_96_96_1x1_V_87_reg_60859.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_38_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_38_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_38_address0 = grp_subconv_1x1_4_p_fu_22130_weight_38_V_address0.read();
    } else {
        weights_96_96_1x1_V_38_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_38_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_38_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_38_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_38_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_38_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_38_V_ce0.read();
    } else {
        weights_96_96_1x1_V_38_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_38_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_26)))) {
        weights_96_96_1x1_V_38_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_38_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_39_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_39_address0 = weights_96_96_1x1_V_852_reg_66415.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_39_address0 = weights_96_96_1x1_V_756_reg_65700.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_39_address0 = weights_96_96_1x1_V_660_reg_65020.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_39_address0 = weights_96_96_1x1_V_564_reg_64305.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_39_address0 = weights_96_96_1x1_V_468_reg_63625.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_39_address0 = weights_96_96_1x1_V_372_reg_62910.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_39_address0 = weights_96_96_1x1_V_276_reg_62274.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_39_address0 = weights_96_96_1x1_V_180_reg_61559.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_39_address0 = weights_96_96_1x1_V_84_reg_60844.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_39_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_39_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_39_address0 = grp_subconv_1x1_4_p_fu_22130_weight_39_V_address0.read();
    } else {
        weights_96_96_1x1_V_39_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_39_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_39_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_39_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_39_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_39_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_39_V_ce0.read();
    } else {
        weights_96_96_1x1_V_39_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_39_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_27)))) {
        weights_96_96_1x1_V_39_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_39_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_851_reg_66410.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_755_reg_65695.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_659_reg_65015.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_563_reg_64300.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_467_reg_63620.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_371_reg_62905.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_275_reg_62269.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_179_reg_61554.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_3_address0 = weights_96_96_1x1_V_83_reg_60839.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_3_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_3_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_3_address0 = grp_subconv_1x1_4_p_fu_22130_weight_3_V_address0.read();
    } else {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<7>) ("XXXXXXX");
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
        weights_96_96_1x1_V_3_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_3_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_3_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_3_V_ce0.read();
    } else {
        weights_96_96_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_3)))) {
        weights_96_96_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_40_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_40_address0 = weights_96_96_1x1_V_854_reg_66425.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_40_address0 = weights_96_96_1x1_V_758_reg_65710.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_40_address0 = weights_96_96_1x1_V_662_reg_65030.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_40_address0 = weights_96_96_1x1_V_566_reg_64315.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_40_address0 = weights_96_96_1x1_V_470_reg_63635.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_40_address0 = weights_96_96_1x1_V_374_reg_62920.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_40_address0 = weights_96_96_1x1_V_278_reg_62284.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_40_address0 = weights_96_96_1x1_V_182_reg_61569.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_40_address0 = weights_96_96_1x1_V_86_reg_60854.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_40_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_40_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_40_address0 = grp_subconv_1x1_4_p_fu_22130_weight_40_V_address0.read();
    } else {
        weights_96_96_1x1_V_40_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_40_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_40_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_40_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_40_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_40_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_40_V_ce0.read();
    } else {
        weights_96_96_1x1_V_40_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_40_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_28)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_28)))) {
        weights_96_96_1x1_V_40_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_40_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_41_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_41_address0 = weights_96_96_1x1_V_782_reg_66065.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_41_address0 = weights_96_96_1x1_V_686_reg_65350.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_41_address0 = weights_96_96_1x1_V_590_reg_64670.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_41_address0 = weights_96_96_1x1_V_494_reg_63955.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_41_address0 = weights_96_96_1x1_V_398_reg_63275.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_41_address0 = weights_96_96_1x1_V_302_reg_62560.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_41_address0 = weights_96_96_1x1_V_206_reg_61924.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_41_address0 = weights_96_96_1x1_V_110_reg_61209.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_41_address0 = weights_96_96_1x1_V_14_reg_60494.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_41_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_41_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_41_address0 = grp_subconv_1x1_4_p_fu_22130_weight_41_V_address0.read();
    } else {
        weights_96_96_1x1_V_41_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_41_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_41_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_41_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_41_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_41_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_41_V_ce0.read();
    } else {
        weights_96_96_1x1_V_41_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_41_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_29)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_29)))) {
        weights_96_96_1x1_V_41_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_41_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_42_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_42_address0 = weights_96_96_1x1_V_849_reg_66400.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_42_address0 = weights_96_96_1x1_V_753_reg_65685.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_42_address0 = weights_96_96_1x1_V_657_reg_65005.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_42_address0 = weights_96_96_1x1_V_561_reg_64290.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_42_address0 = weights_96_96_1x1_V_465_reg_63610.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_42_address0 = weights_96_96_1x1_V_369_reg_62895.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_42_address0 = weights_96_96_1x1_V_273_reg_62259.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_42_address0 = weights_96_96_1x1_V_177_reg_61544.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_42_address0 = weights_96_96_1x1_V_81_reg_60829.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_42_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_42_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_42_address0 = grp_subconv_1x1_4_p_fu_22130_weight_42_V_address0.read();
    } else {
        weights_96_96_1x1_V_42_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_42_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_42_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_42_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_42_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_42_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_42_V_ce0.read();
    } else {
        weights_96_96_1x1_V_42_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_42_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_2A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_2A)))) {
        weights_96_96_1x1_V_42_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_42_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_43_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_43_address0 = weights_96_96_1x1_V_853_reg_66420.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_43_address0 = weights_96_96_1x1_V_757_reg_65705.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_43_address0 = weights_96_96_1x1_V_661_reg_65025.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_43_address0 = weights_96_96_1x1_V_565_reg_64310.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_43_address0 = weights_96_96_1x1_V_469_reg_63630.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_43_address0 = weights_96_96_1x1_V_373_reg_62915.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_43_address0 = weights_96_96_1x1_V_277_reg_62279.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_43_address0 = weights_96_96_1x1_V_181_reg_61564.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_43_address0 = weights_96_96_1x1_V_85_reg_60849.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_43_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_43_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_43_address0 = grp_subconv_1x1_4_p_fu_22130_weight_43_V_address0.read();
    } else {
        weights_96_96_1x1_V_43_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_43_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_43_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_43_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_43_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_43_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_43_V_ce0.read();
    } else {
        weights_96_96_1x1_V_43_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_43_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_2B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_2B)))) {
        weights_96_96_1x1_V_43_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_43_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_44_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_44_address0 = weights_96_96_1x1_V_859_reg_66450.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_44_address0 = weights_96_96_1x1_V_763_reg_65735.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_44_address0 = weights_96_96_1x1_V_667_reg_65055.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_44_address0 = weights_96_96_1x1_V_571_reg_64340.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_44_address0 = weights_96_96_1x1_V_475_reg_63660.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_44_address0 = weights_96_96_1x1_V_379_reg_62945.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_44_address0 = weights_96_96_1x1_V_283_reg_62309.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_44_address0 = weights_96_96_1x1_V_187_reg_61594.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_44_address0 = weights_96_96_1x1_V_91_reg_60879.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_44_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_44_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_44_address0 = grp_subconv_1x1_4_p_fu_22130_weight_44_V_address0.read();
    } else {
        weights_96_96_1x1_V_44_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_44_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_44_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_44_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_44_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_44_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_44_V_ce0.read();
    } else {
        weights_96_96_1x1_V_44_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_44_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_2C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_2C)))) {
        weights_96_96_1x1_V_44_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_44_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_45_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_45_address0 = weights_96_96_1x1_V_848_reg_66395.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_45_address0 = weights_96_96_1x1_V_752_reg_65680.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_45_address0 = weights_96_96_1x1_V_656_reg_65000.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_45_address0 = weights_96_96_1x1_V_560_reg_64285.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_45_address0 = weights_96_96_1x1_V_464_reg_63605.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_45_address0 = weights_96_96_1x1_V_368_reg_62890.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_45_address0 = weights_96_96_1x1_V_272_reg_62254.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_45_address0 = weights_96_96_1x1_V_176_reg_61539.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_45_address0 = weights_96_96_1x1_V_80_reg_60824.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_45_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_45_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_45_address0 = grp_subconv_1x1_4_p_fu_22130_weight_45_V_address0.read();
    } else {
        weights_96_96_1x1_V_45_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_45_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_45_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_45_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_45_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_45_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_45_V_ce0.read();
    } else {
        weights_96_96_1x1_V_45_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_45_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_2D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_2D)))) {
        weights_96_96_1x1_V_45_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_45_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_46_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_46_address0 = weights_96_96_1x1_V_845_reg_66380.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_46_address0 = weights_96_96_1x1_V_749_reg_65665.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_46_address0 = weights_96_96_1x1_V_653_reg_64985.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_46_address0 = weights_96_96_1x1_V_557_reg_64270.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_46_address0 = weights_96_96_1x1_V_461_reg_63590.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_46_address0 = weights_96_96_1x1_V_365_reg_62875.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_46_address0 = weights_96_96_1x1_V_269_reg_62239.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_46_address0 = weights_96_96_1x1_V_173_reg_61524.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_46_address0 = weights_96_96_1x1_V_77_reg_60809.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_46_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_46_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_46_address0 = grp_subconv_1x1_4_p_fu_22130_weight_46_V_address0.read();
    } else {
        weights_96_96_1x1_V_46_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_46_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_46_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_46_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_46_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_46_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_46_V_ce0.read();
    } else {
        weights_96_96_1x1_V_46_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_46_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_2E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_2E)))) {
        weights_96_96_1x1_V_46_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_46_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_47_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_47_address0 = weights_96_96_1x1_V_781_reg_66060.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_47_address0 = weights_96_96_1x1_V_685_reg_65345.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_47_address0 = weights_96_96_1x1_V_589_reg_64665.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_47_address0 = weights_96_96_1x1_V_493_reg_63950.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_47_address0 = weights_96_96_1x1_V_397_reg_63270.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_47_address0 = weights_96_96_1x1_V_301_reg_62555.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_47_address0 = weights_96_96_1x1_V_205_reg_61919.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_47_address0 = weights_96_96_1x1_V_109_reg_61204.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_47_address0 = weights_96_96_1x1_V_13_reg_60489.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_47_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_47_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_47_address0 = grp_subconv_1x1_4_p_fu_22130_weight_47_V_address0.read();
    } else {
        weights_96_96_1x1_V_47_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_47_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_47_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_47_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_47_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_47_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_47_V_ce0.read();
    } else {
        weights_96_96_1x1_V_47_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_47_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_2F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_2F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_2F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_2F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_2F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_2F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_2F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_2F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_2F)))) {
        weights_96_96_1x1_V_47_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_47_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_48_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_48_address0 = weights_96_96_1x1_V_772_reg_66015.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_48_address0 = weights_96_96_1x1_V_676_reg_65300.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_48_address0 = weights_96_96_1x1_V_580_reg_64620.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_48_address0 = weights_96_96_1x1_V_484_reg_63905.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_48_address0 = weights_96_96_1x1_V_388_reg_63225.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_48_address0 = weights_96_96_1x1_V_292_reg_62510.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_48_address0 = weights_96_96_1x1_V_196_reg_61874.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_48_address0 = weights_96_96_1x1_V_100_reg_61159.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_48_address0 = weights_96_96_1x1_V_4_reg_60444.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_48_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_48_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_48_address0 = grp_subconv_1x1_4_p_fu_22130_weight_48_V_address0.read();
    } else {
        weights_96_96_1x1_V_48_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_48_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_48_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_48_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_48_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_48_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_48_V_ce0.read();
    } else {
        weights_96_96_1x1_V_48_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_48_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_30)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_30)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_30)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_30)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_30)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_30)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_30)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_30)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_30)))) {
        weights_96_96_1x1_V_48_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_48_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_49_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_49_address0 = weights_96_96_1x1_V_774_reg_66025.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_49_address0 = weights_96_96_1x1_V_678_reg_65310.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_49_address0 = weights_96_96_1x1_V_582_reg_64630.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_49_address0 = weights_96_96_1x1_V_486_reg_63915.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_49_address0 = weights_96_96_1x1_V_390_reg_63235.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_49_address0 = weights_96_96_1x1_V_294_reg_62520.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_49_address0 = weights_96_96_1x1_V_198_reg_61884.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_49_address0 = weights_96_96_1x1_V_102_reg_61169.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_49_address0 = weights_96_96_1x1_V_6_reg_60454.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_49_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_49_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_49_address0 = grp_subconv_1x1_4_p_fu_22130_weight_49_V_address0.read();
    } else {
        weights_96_96_1x1_V_49_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_49_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_49_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_49_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_49_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_49_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_49_V_ce0.read();
    } else {
        weights_96_96_1x1_V_49_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_49_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_31)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_31)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_31)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_31)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_31)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_31)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_31)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_31)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_31)))) {
        weights_96_96_1x1_V_49_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_49_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_860_reg_66455.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_764_reg_65740.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_668_reg_65060.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_572_reg_64345.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_476_reg_63665.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_380_reg_62950.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_284_reg_62314.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_188_reg_61599.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_4_address0 = weights_96_96_1x1_V_92_reg_60884.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_4_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_4_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_4_address0 = grp_subconv_1x1_4_p_fu_22130_weight_4_V_address0.read();
    } else {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<7>) ("XXXXXXX");
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
        weights_96_96_1x1_V_4_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_4_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_4_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_4_V_ce0.read();
    } else {
        weights_96_96_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_4)))) {
        weights_96_96_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_50_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_50_address0 = weights_96_96_1x1_V_785_reg_66080.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_50_address0 = weights_96_96_1x1_V_689_reg_65365.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_50_address0 = weights_96_96_1x1_V_593_reg_64685.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_50_address0 = weights_96_96_1x1_V_497_reg_63970.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_50_address0 = weights_96_96_1x1_V_401_reg_63290.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_50_address0 = weights_96_96_1x1_V_305_reg_62575.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_50_address0 = weights_96_96_1x1_V_209_reg_61939.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_50_address0 = weights_96_96_1x1_V_113_reg_61224.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_50_address0 = weights_96_96_1x1_V_17_reg_60509.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_50_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_50_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_50_address0 = grp_subconv_1x1_4_p_fu_22130_weight_50_V_address0.read();
    } else {
        weights_96_96_1x1_V_50_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_50_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_50_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_50_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_50_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_50_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_50_V_ce0.read();
    } else {
        weights_96_96_1x1_V_50_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_50_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_32)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_32)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_32)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_32)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_32)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_32)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_32)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_32)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_32)))) {
        weights_96_96_1x1_V_50_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_50_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_51_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_51_address0 = weights_96_96_1x1_V_783_reg_66070.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_51_address0 = weights_96_96_1x1_V_687_reg_65355.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_51_address0 = weights_96_96_1x1_V_591_reg_64675.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_51_address0 = weights_96_96_1x1_V_495_reg_63960.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_51_address0 = weights_96_96_1x1_V_399_reg_63280.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_51_address0 = weights_96_96_1x1_V_303_reg_62565.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_51_address0 = weights_96_96_1x1_V_207_reg_61929.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_51_address0 = weights_96_96_1x1_V_111_reg_61214.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_51_address0 = weights_96_96_1x1_V_15_reg_60499.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_51_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_51_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_51_address0 = grp_subconv_1x1_4_p_fu_22130_weight_51_V_address0.read();
    } else {
        weights_96_96_1x1_V_51_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_51_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_51_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_51_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_51_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_51_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_51_V_ce0.read();
    } else {
        weights_96_96_1x1_V_51_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_51_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_33)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_33)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_33)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_33)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_33)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_33)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_33)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_33)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_33)))) {
        weights_96_96_1x1_V_51_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_51_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_52_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_52_address0 = weights_96_96_1x1_V_786_reg_66085.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_52_address0 = weights_96_96_1x1_V_690_reg_65370.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_52_address0 = weights_96_96_1x1_V_594_reg_64690.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_52_address0 = weights_96_96_1x1_V_498_reg_63975.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_52_address0 = weights_96_96_1x1_V_402_reg_63295.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_52_address0 = weights_96_96_1x1_V_306_reg_62580.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_52_address0 = weights_96_96_1x1_V_210_reg_61944.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_52_address0 = weights_96_96_1x1_V_114_reg_61229.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_52_address0 = weights_96_96_1x1_V_18_reg_60514.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_52_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_52_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_52_address0 = grp_subconv_1x1_4_p_fu_22130_weight_52_V_address0.read();
    } else {
        weights_96_96_1x1_V_52_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_52_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_52_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_52_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_52_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_52_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_52_V_ce0.read();
    } else {
        weights_96_96_1x1_V_52_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_52_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_34)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_34)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_34)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_34)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_34)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_34)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_34)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_34)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_34)))) {
        weights_96_96_1x1_V_52_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_52_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_53_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_53_address0 = weights_96_96_1x1_V_789_reg_66100.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_53_address0 = weights_96_96_1x1_V_693_reg_65385.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_53_address0 = weights_96_96_1x1_V_597_reg_64705.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_53_address0 = weights_96_96_1x1_V_501_reg_63990.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_53_address0 = weights_96_96_1x1_V_405_reg_63310.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_53_address0 = weights_96_96_1x1_V_309_reg_62595.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_53_address0 = weights_96_96_1x1_V_213_reg_61959.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_53_address0 = weights_96_96_1x1_V_117_reg_61244.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_53_address0 = weights_96_96_1x1_V_21_reg_60529.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_53_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_53_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_53_address0 = grp_subconv_1x1_4_p_fu_22130_weight_53_V_address0.read();
    } else {
        weights_96_96_1x1_V_53_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_53_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_53_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_53_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_53_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_53_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_53_V_ce0.read();
    } else {
        weights_96_96_1x1_V_53_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_53_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_35)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_35)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_35)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_35)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_35)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_35)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_35)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_35)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_35)))) {
        weights_96_96_1x1_V_53_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_53_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_54_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_54_address0 = weights_96_96_1x1_V_790_reg_66105.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_54_address0 = weights_96_96_1x1_V_694_reg_65390.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_54_address0 = weights_96_96_1x1_V_598_reg_64710.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_54_address0 = weights_96_96_1x1_V_502_reg_63995.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_54_address0 = weights_96_96_1x1_V_406_reg_63315.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_54_address0 = weights_96_96_1x1_V_310_reg_62600.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_54_address0 = weights_96_96_1x1_V_214_reg_61964.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_54_address0 = weights_96_96_1x1_V_118_reg_61249.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_54_address0 = weights_96_96_1x1_V_22_reg_60534.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_54_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_54_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_54_address0 = grp_subconv_1x1_4_p_fu_22130_weight_54_V_address0.read();
    } else {
        weights_96_96_1x1_V_54_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_54_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_54_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_54_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_54_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_54_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_54_V_ce0.read();
    } else {
        weights_96_96_1x1_V_54_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_54_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_36)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_36)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_36)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_36)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_36)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_36)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_36)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_36)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_36)))) {
        weights_96_96_1x1_V_54_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_54_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_55_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_55_address0 = weights_96_96_1x1_V_771_reg_66010.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_55_address0 = weights_96_96_1x1_V_675_reg_65295.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_55_address0 = weights_96_96_1x1_V_579_reg_64615.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_55_address0 = weights_96_96_1x1_V_483_reg_63900.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_55_address0 = weights_96_96_1x1_V_387_reg_63220.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_55_address0 = weights_96_96_1x1_V_291_reg_62505.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_55_address0 = weights_96_96_1x1_V_195_reg_61869.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_55_address0 = weights_96_96_1x1_V_99_reg_61154.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_55_address0 = weights_96_96_1x1_V_3_reg_60439.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_55_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_55_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_55_address0 = grp_subconv_1x1_4_p_fu_22130_weight_55_V_address0.read();
    } else {
        weights_96_96_1x1_V_55_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_55_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_55_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_55_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_55_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_55_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_55_V_ce0.read();
    } else {
        weights_96_96_1x1_V_55_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_55_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_37)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_37)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_37)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_37)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_37)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_37)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_37)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_37)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_37)))) {
        weights_96_96_1x1_V_55_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_55_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_56_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_56_address0 = weights_96_96_1x1_V_792_reg_66115.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_56_address0 = weights_96_96_1x1_V_696_reg_65400.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_56_address0 = weights_96_96_1x1_V_600_reg_64720.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_56_address0 = weights_96_96_1x1_V_504_reg_64005.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_56_address0 = weights_96_96_1x1_V_408_reg_63325.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_56_address0 = weights_96_96_1x1_V_312_reg_62610.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_56_address0 = weights_96_96_1x1_V_216_reg_61974.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_56_address0 = weights_96_96_1x1_V_120_reg_61259.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_56_address0 = weights_96_96_1x1_V_24_reg_60544.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_56_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_56_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_56_address0 = grp_subconv_1x1_4_p_fu_22130_weight_56_V_address0.read();
    } else {
        weights_96_96_1x1_V_56_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_56_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_56_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_56_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_56_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_56_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_56_V_ce0.read();
    } else {
        weights_96_96_1x1_V_56_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_56_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_38)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_38)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_38)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_38)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_38)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_38)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_38)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_38)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_38)))) {
        weights_96_96_1x1_V_56_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_56_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_57_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_57_address0 = weights_96_96_1x1_V_791_reg_66110.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_57_address0 = weights_96_96_1x1_V_695_reg_65395.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_57_address0 = weights_96_96_1x1_V_599_reg_64715.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_57_address0 = weights_96_96_1x1_V_503_reg_64000.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_57_address0 = weights_96_96_1x1_V_407_reg_63320.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_57_address0 = weights_96_96_1x1_V_311_reg_62605.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_57_address0 = weights_96_96_1x1_V_215_reg_61969.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_57_address0 = weights_96_96_1x1_V_119_reg_61254.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_57_address0 = weights_96_96_1x1_V_23_reg_60539.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_57_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_57_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_57_address0 = grp_subconv_1x1_4_p_fu_22130_weight_57_V_address0.read();
    } else {
        weights_96_96_1x1_V_57_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_57_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_57_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_57_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_57_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_57_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_57_V_ce0.read();
    } else {
        weights_96_96_1x1_V_57_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_57_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_39)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_39)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_39)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_39)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_39)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_39)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_39)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_39)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_39)))) {
        weights_96_96_1x1_V_57_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_57_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_58_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_58_address0 = weights_96_96_1x1_V_788_reg_66095.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_58_address0 = weights_96_96_1x1_V_692_reg_65380.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_58_address0 = weights_96_96_1x1_V_596_reg_64700.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_58_address0 = weights_96_96_1x1_V_500_reg_63985.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_58_address0 = weights_96_96_1x1_V_404_reg_63305.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_58_address0 = weights_96_96_1x1_V_308_reg_62590.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_58_address0 = weights_96_96_1x1_V_212_reg_61954.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_58_address0 = weights_96_96_1x1_V_116_reg_61239.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_58_address0 = weights_96_96_1x1_V_20_reg_60524.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_58_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_58_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_58_address0 = grp_subconv_1x1_4_p_fu_22130_weight_58_V_address0.read();
    } else {
        weights_96_96_1x1_V_58_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_58_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_58_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_58_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_58_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_58_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_58_V_ce0.read();
    } else {
        weights_96_96_1x1_V_58_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_58_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_3A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_3A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_3A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_3A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_3A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_3A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_3A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_3A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_3A)))) {
        weights_96_96_1x1_V_58_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_58_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_59_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_59_address0 = weights_96_96_1x1_V_793_reg_66120.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_59_address0 = weights_96_96_1x1_V_697_reg_65405.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_59_address0 = weights_96_96_1x1_V_601_reg_64725.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_59_address0 = weights_96_96_1x1_V_505_reg_64010.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_59_address0 = weights_96_96_1x1_V_409_reg_63330.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_59_address0 = weights_96_96_1x1_V_313_reg_62615.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_59_address0 = weights_96_96_1x1_V_217_reg_61979.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_59_address0 = weights_96_96_1x1_V_121_reg_61264.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_59_address0 = weights_96_96_1x1_V_25_reg_60549.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_59_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_59_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_59_address0 = grp_subconv_1x1_4_p_fu_22130_weight_59_V_address0.read();
    } else {
        weights_96_96_1x1_V_59_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_59_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_59_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_59_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_59_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_59_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_59_V_ce0.read();
    } else {
        weights_96_96_1x1_V_59_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_59_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_3B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_3B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_3B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_3B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_3B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_3B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_3B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_3B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_3B)))) {
        weights_96_96_1x1_V_59_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_59_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_770_reg_66005.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_674_reg_65290.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_578_reg_64610.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_482_reg_63895.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_386_reg_63215.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_290_reg_62500.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_194_reg_61864.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_98_reg_61149.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_5_address0 = weights_96_96_1x1_V_2_reg_60434.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_5_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_5_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_5_address0 = grp_subconv_1x1_4_p_fu_22130_weight_5_V_address0.read();
    } else {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<7>) ("XXXXXXX");
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
        weights_96_96_1x1_V_5_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_5_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_5_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_5_V_ce0.read();
    } else {
        weights_96_96_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_5)))) {
        weights_96_96_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_60_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_60_address0 = weights_96_96_1x1_V_768_reg_65995.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_60_address0 = weights_96_96_1x1_V_672_reg_65280.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_60_address0 = weights_96_96_1x1_V_576_reg_64600.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_60_address0 = weights_96_96_1x1_V_480_reg_63885.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_60_address0 = weights_96_96_1x1_V_384_reg_63205.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_60_address0 = weights_96_96_1x1_V_288_reg_62490.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_60_address0 = weights_96_96_1x1_V_192_reg_61854.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_60_address0 = weights_96_96_1x1_V_96_reg_61139.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_60_address0 = weights_96_96_1x1_V_s_reg_60424.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_60_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_60_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_60_address0 = grp_subconv_1x1_4_p_fu_22130_weight_60_V_address0.read();
    } else {
        weights_96_96_1x1_V_60_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_60_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_60_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_60_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_60_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_60_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_60_V_ce0.read();
    } else {
        weights_96_96_1x1_V_60_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_60_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_3C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_3C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_3C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_3C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_3C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_3C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_3C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_3C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_3C)))) {
        weights_96_96_1x1_V_60_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_60_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_61_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_61_address0 = weights_96_96_1x1_V_769_reg_66000.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_61_address0 = weights_96_96_1x1_V_673_reg_65285.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_61_address0 = weights_96_96_1x1_V_577_reg_64605.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_61_address0 = weights_96_96_1x1_V_481_reg_63890.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_61_address0 = weights_96_96_1x1_V_385_reg_63210.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_61_address0 = weights_96_96_1x1_V_289_reg_62495.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_61_address0 = weights_96_96_1x1_V_193_reg_61859.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_61_address0 = weights_96_96_1x1_V_97_reg_61144.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_61_address0 = weights_96_96_1x1_V_1_reg_60429.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_61_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_61_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_61_address0 = grp_subconv_1x1_4_p_fu_22130_weight_61_V_address0.read();
    } else {
        weights_96_96_1x1_V_61_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_61_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_61_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_61_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_61_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_61_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_61_V_ce0.read();
    } else {
        weights_96_96_1x1_V_61_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_61_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_3D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_3D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_3D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_3D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_3D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_3D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_3D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_3D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_3D)))) {
        weights_96_96_1x1_V_61_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_61_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_62_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_62_address0 = weights_96_96_1x1_V_794_reg_66125.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_62_address0 = weights_96_96_1x1_V_698_reg_65410.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_62_address0 = weights_96_96_1x1_V_602_reg_64730.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_62_address0 = weights_96_96_1x1_V_506_reg_64015.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_62_address0 = weights_96_96_1x1_V_410_reg_63335.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_62_address0 = weights_96_96_1x1_V_314_reg_62620.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_62_address0 = weights_96_96_1x1_V_218_reg_61984.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_62_address0 = weights_96_96_1x1_V_122_reg_61269.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_62_address0 = weights_96_96_1x1_V_26_reg_60554.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_62_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_62_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_62_address0 = grp_subconv_1x1_4_p_fu_22130_weight_62_V_address0.read();
    } else {
        weights_96_96_1x1_V_62_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_62_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_62_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_62_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_62_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_62_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_62_V_ce0.read();
    } else {
        weights_96_96_1x1_V_62_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_62_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_3E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_3E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_3E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_3E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_3E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_3E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_3E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_3E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_3E)))) {
        weights_96_96_1x1_V_62_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_62_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_63_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_63_address0 = weights_96_96_1x1_V_784_reg_66075.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_63_address0 = weights_96_96_1x1_V_688_reg_65360.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_63_address0 = weights_96_96_1x1_V_592_reg_64680.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_63_address0 = weights_96_96_1x1_V_496_reg_63965.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_63_address0 = weights_96_96_1x1_V_400_reg_63285.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_63_address0 = weights_96_96_1x1_V_304_reg_62570.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_63_address0 = weights_96_96_1x1_V_208_reg_61934.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_63_address0 = weights_96_96_1x1_V_112_reg_61219.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_63_address0 = weights_96_96_1x1_V_16_reg_60504.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_63_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_63_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_63_address0 = grp_subconv_1x1_4_p_fu_22130_weight_63_V_address0.read();
    } else {
        weights_96_96_1x1_V_63_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_63_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_63_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_63_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_63_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_63_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_63_V_ce0.read();
    } else {
        weights_96_96_1x1_V_63_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_63_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_3F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_3F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_3F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_3F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_3F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_3F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_3F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_3F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_3F)))) {
        weights_96_96_1x1_V_63_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_63_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_64_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_64_address0 = weights_96_96_1x1_V_805_reg_66180.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_64_address0 = weights_96_96_1x1_V_709_reg_65465.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_64_address0 = weights_96_96_1x1_V_613_reg_64785.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_64_address0 = weights_96_96_1x1_V_517_reg_64070.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_64_address0 = weights_96_96_1x1_V_421_reg_63390.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_64_address0 = weights_96_96_1x1_V_325_reg_62675.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_64_address0 = weights_96_96_1x1_V_229_reg_62039.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_64_address0 = weights_96_96_1x1_V_133_reg_61324.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_64_address0 = weights_96_96_1x1_V_37_reg_60609.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_64_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_64_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_64_address0 = grp_subconv_1x1_4_p_fu_22130_weight_64_V_address0.read();
    } else {
        weights_96_96_1x1_V_64_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_64_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_64_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_64_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_64_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_64_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_64_V_ce0.read();
    } else {
        weights_96_96_1x1_V_64_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_64_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_40)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_40)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_40)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_40)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_40)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_40)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_40)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_40)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_40)))) {
        weights_96_96_1x1_V_64_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_64_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_65_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_65_address0 = weights_96_96_1x1_V_803_reg_66170.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_65_address0 = weights_96_96_1x1_V_707_reg_65455.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_65_address0 = weights_96_96_1x1_V_611_reg_64775.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_65_address0 = weights_96_96_1x1_V_515_reg_64060.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_65_address0 = weights_96_96_1x1_V_419_reg_63380.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_65_address0 = weights_96_96_1x1_V_323_reg_62665.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_65_address0 = weights_96_96_1x1_V_227_reg_62029.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_65_address0 = weights_96_96_1x1_V_131_reg_61314.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_65_address0 = weights_96_96_1x1_V_35_reg_60599.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_65_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_65_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_65_address0 = grp_subconv_1x1_4_p_fu_22130_weight_65_V_address0.read();
    } else {
        weights_96_96_1x1_V_65_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_65_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_65_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_65_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_65_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_65_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_65_V_ce0.read();
    } else {
        weights_96_96_1x1_V_65_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_65_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_41)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_41)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_41)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_41)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_41)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_41)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_41)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_41)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_41)))) {
        weights_96_96_1x1_V_65_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_65_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_66_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_66_address0 = weights_96_96_1x1_V_804_reg_66175.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_66_address0 = weights_96_96_1x1_V_708_reg_65460.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_66_address0 = weights_96_96_1x1_V_612_reg_64780.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_66_address0 = weights_96_96_1x1_V_516_reg_64065.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_66_address0 = weights_96_96_1x1_V_420_reg_63385.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_66_address0 = weights_96_96_1x1_V_324_reg_62670.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_66_address0 = weights_96_96_1x1_V_228_reg_62034.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_66_address0 = weights_96_96_1x1_V_132_reg_61319.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_66_address0 = weights_96_96_1x1_V_36_reg_60604.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_66_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_66_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_66_address0 = grp_subconv_1x1_4_p_fu_22130_weight_66_V_address0.read();
    } else {
        weights_96_96_1x1_V_66_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_66_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_66_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_66_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_66_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_66_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_66_V_ce0.read();
    } else {
        weights_96_96_1x1_V_66_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_66_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_42)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_42)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_42)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_42)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_42)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_42)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_42)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_42)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_42)))) {
        weights_96_96_1x1_V_66_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_66_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_67_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_67_address0 = weights_96_96_1x1_V_807_reg_66190.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_67_address0 = weights_96_96_1x1_V_711_reg_65475.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_67_address0 = weights_96_96_1x1_V_615_reg_64795.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_67_address0 = weights_96_96_1x1_V_519_reg_64080.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_67_address0 = weights_96_96_1x1_V_423_reg_63400.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_67_address0 = weights_96_96_1x1_V_327_reg_62685.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_67_address0 = weights_96_96_1x1_V_231_reg_62049.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_67_address0 = weights_96_96_1x1_V_135_reg_61334.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_67_address0 = weights_96_96_1x1_V_39_reg_60619.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_67_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_67_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_67_address0 = grp_subconv_1x1_4_p_fu_22130_weight_67_V_address0.read();
    } else {
        weights_96_96_1x1_V_67_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_67_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_67_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_67_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_67_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_67_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_67_V_ce0.read();
    } else {
        weights_96_96_1x1_V_67_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_67_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_43)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_43)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_43)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_43)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_43)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_43)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_43)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_43)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_43)))) {
        weights_96_96_1x1_V_67_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_67_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_68_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_68_address0 = weights_96_96_1x1_V_808_reg_66195.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_68_address0 = weights_96_96_1x1_V_712_reg_65480.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_68_address0 = weights_96_96_1x1_V_616_reg_64800.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_68_address0 = weights_96_96_1x1_V_520_reg_64085.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_68_address0 = weights_96_96_1x1_V_424_reg_63405.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_68_address0 = weights_96_96_1x1_V_328_reg_62690.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_68_address0 = weights_96_96_1x1_V_232_reg_62054.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_68_address0 = weights_96_96_1x1_V_136_reg_61339.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_68_address0 = weights_96_96_1x1_V_40_reg_60624.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_68_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_68_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_68_address0 = grp_subconv_1x1_4_p_fu_22130_weight_68_V_address0.read();
    } else {
        weights_96_96_1x1_V_68_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_68_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_68_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_68_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_68_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_68_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_68_V_ce0.read();
    } else {
        weights_96_96_1x1_V_68_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_68_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_44)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_44)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_44)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_44)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_44)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_44)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_44)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_44)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_44)))) {
        weights_96_96_1x1_V_68_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_68_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_69_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_69_address0 = weights_96_96_1x1_V_809_reg_66200.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_69_address0 = weights_96_96_1x1_V_713_reg_65485.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_69_address0 = weights_96_96_1x1_V_617_reg_64805.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_69_address0 = weights_96_96_1x1_V_521_reg_64090.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_69_address0 = weights_96_96_1x1_V_425_reg_63410.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_69_address0 = weights_96_96_1x1_V_329_reg_62695.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_69_address0 = weights_96_96_1x1_V_233_reg_62059.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_69_address0 = weights_96_96_1x1_V_137_reg_61344.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_69_address0 = weights_96_96_1x1_V_41_reg_60629.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_69_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_69_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_69_address0 = grp_subconv_1x1_4_p_fu_22130_weight_69_V_address0.read();
    } else {
        weights_96_96_1x1_V_69_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_69_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_69_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_69_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_69_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_69_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_69_V_ce0.read();
    } else {
        weights_96_96_1x1_V_69_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_69_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_45)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_45)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_45)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_45)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_45)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_45)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_45)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_45)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_45)))) {
        weights_96_96_1x1_V_69_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_69_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_787_reg_66090.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_691_reg_65375.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_595_reg_64695.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_499_reg_63980.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_403_reg_63300.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_307_reg_62585.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_211_reg_61949.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_115_reg_61234.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_6_address0 = weights_96_96_1x1_V_19_reg_60519.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_6_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_6_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_6_address0 = grp_subconv_1x1_4_p_fu_22130_weight_6_V_address0.read();
    } else {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<7>) ("XXXXXXX");
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
        weights_96_96_1x1_V_6_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_6_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_6_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_6_V_ce0.read();
    } else {
        weights_96_96_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_6)))) {
        weights_96_96_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_70_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_70_address0 = weights_96_96_1x1_V_813_reg_66220.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_70_address0 = weights_96_96_1x1_V_717_reg_65505.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_70_address0 = weights_96_96_1x1_V_621_reg_64825.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_70_address0 = weights_96_96_1x1_V_525_reg_64110.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_70_address0 = weights_96_96_1x1_V_429_reg_63430.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_70_address0 = weights_96_96_1x1_V_333_reg_62715.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_70_address0 = weights_96_96_1x1_V_237_reg_62079.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_70_address0 = weights_96_96_1x1_V_141_reg_61364.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_70_address0 = weights_96_96_1x1_V_45_reg_60649.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_70_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_70_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_70_address0 = grp_subconv_1x1_4_p_fu_22130_weight_70_V_address0.read();
    } else {
        weights_96_96_1x1_V_70_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_70_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_70_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_70_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_70_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_70_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_70_V_ce0.read();
    } else {
        weights_96_96_1x1_V_70_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_70_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_46)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_46)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_46)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_46)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_46)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_46)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_46)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_46)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_46)))) {
        weights_96_96_1x1_V_70_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_70_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_71_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_71_address0 = weights_96_96_1x1_V_773_reg_66020.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_71_address0 = weights_96_96_1x1_V_677_reg_65305.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_71_address0 = weights_96_96_1x1_V_581_reg_64625.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_71_address0 = weights_96_96_1x1_V_485_reg_63910.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_71_address0 = weights_96_96_1x1_V_389_reg_63230.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_71_address0 = weights_96_96_1x1_V_293_reg_62515.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_71_address0 = weights_96_96_1x1_V_197_reg_61879.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_71_address0 = weights_96_96_1x1_V_101_reg_61164.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_71_address0 = weights_96_96_1x1_V_5_reg_60449.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_71_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_71_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_71_address0 = grp_subconv_1x1_4_p_fu_22130_weight_71_V_address0.read();
    } else {
        weights_96_96_1x1_V_71_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_71_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_71_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_71_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_71_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_71_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_71_V_ce0.read();
    } else {
        weights_96_96_1x1_V_71_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_71_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_47)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_47)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_47)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_47)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_47)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_47)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_47)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_47)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_47)))) {
        weights_96_96_1x1_V_71_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_71_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_72_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_72_address0 = weights_96_96_1x1_V_776_reg_66035.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_72_address0 = weights_96_96_1x1_V_680_reg_65320.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_72_address0 = weights_96_96_1x1_V_584_reg_64640.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_72_address0 = weights_96_96_1x1_V_488_reg_63925.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_72_address0 = weights_96_96_1x1_V_392_reg_63245.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_72_address0 = weights_96_96_1x1_V_296_reg_62530.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_72_address0 = weights_96_96_1x1_V_200_reg_61894.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_72_address0 = weights_96_96_1x1_V_104_reg_61179.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_72_address0 = weights_96_96_1x1_V_8_reg_60464.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_72_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_72_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_72_address0 = grp_subconv_1x1_4_p_fu_22130_weight_72_V_address0.read();
    } else {
        weights_96_96_1x1_V_72_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_72_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_72_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_72_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_72_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_72_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_72_V_ce0.read();
    } else {
        weights_96_96_1x1_V_72_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_72_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_48)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_48)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_48)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_48)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_48)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_48)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_48)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_48)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_48)))) {
        weights_96_96_1x1_V_72_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_72_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_73_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_73_address0 = weights_96_96_1x1_V_775_reg_66030.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_73_address0 = weights_96_96_1x1_V_679_reg_65315.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_73_address0 = weights_96_96_1x1_V_583_reg_64635.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_73_address0 = weights_96_96_1x1_V_487_reg_63920.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_73_address0 = weights_96_96_1x1_V_391_reg_63240.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_73_address0 = weights_96_96_1x1_V_295_reg_62525.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_73_address0 = weights_96_96_1x1_V_199_reg_61889.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_73_address0 = weights_96_96_1x1_V_103_reg_61174.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_73_address0 = weights_96_96_1x1_V_7_reg_60459.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_73_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_73_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_73_address0 = grp_subconv_1x1_4_p_fu_22130_weight_73_V_address0.read();
    } else {
        weights_96_96_1x1_V_73_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_73_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_73_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_73_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_73_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_73_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_73_V_ce0.read();
    } else {
        weights_96_96_1x1_V_73_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_73_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_49)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_49)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_49)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_49)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_49)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_49)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_49)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_49)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_49)))) {
        weights_96_96_1x1_V_73_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_73_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_74_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_74_address0 = weights_96_96_1x1_V_780_reg_66055.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_74_address0 = weights_96_96_1x1_V_684_reg_65340.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_74_address0 = weights_96_96_1x1_V_588_reg_64660.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_74_address0 = weights_96_96_1x1_V_492_reg_63945.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_74_address0 = weights_96_96_1x1_V_396_reg_63265.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_74_address0 = weights_96_96_1x1_V_300_reg_62550.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_74_address0 = weights_96_96_1x1_V_204_reg_61914.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_74_address0 = weights_96_96_1x1_V_108_reg_61199.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_74_address0 = weights_96_96_1x1_V_12_reg_60484.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_74_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_74_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_74_address0 = grp_subconv_1x1_4_p_fu_22130_weight_74_V_address0.read();
    } else {
        weights_96_96_1x1_V_74_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_74_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_74_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_74_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_74_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_74_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_74_V_ce0.read();
    } else {
        weights_96_96_1x1_V_74_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_74_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_4A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_4A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_4A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_4A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_4A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_4A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_4A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_4A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_4A)))) {
        weights_96_96_1x1_V_74_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_74_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_75_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_75_address0 = weights_96_96_1x1_V_778_reg_66045.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_75_address0 = weights_96_96_1x1_V_682_reg_65330.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_75_address0 = weights_96_96_1x1_V_586_reg_64650.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_75_address0 = weights_96_96_1x1_V_490_reg_63935.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_75_address0 = weights_96_96_1x1_V_394_reg_63255.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_75_address0 = weights_96_96_1x1_V_298_reg_62540.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_75_address0 = weights_96_96_1x1_V_202_reg_61904.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_75_address0 = weights_96_96_1x1_V_106_reg_61189.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_75_address0 = weights_96_96_1x1_V_10_reg_60474.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_75_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_75_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_75_address0 = grp_subconv_1x1_4_p_fu_22130_weight_75_V_address0.read();
    } else {
        weights_96_96_1x1_V_75_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_75_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_75_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_75_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_75_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_75_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_75_V_ce0.read();
    } else {
        weights_96_96_1x1_V_75_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_75_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_4B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_4B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_4B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_4B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_4B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_4B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_4B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_4B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_4B)))) {
        weights_96_96_1x1_V_75_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_75_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_76_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_76_address0 = weights_96_96_1x1_V_779_reg_66050.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_76_address0 = weights_96_96_1x1_V_683_reg_65335.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_76_address0 = weights_96_96_1x1_V_587_reg_64655.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_76_address0 = weights_96_96_1x1_V_491_reg_63940.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_76_address0 = weights_96_96_1x1_V_395_reg_63260.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_76_address0 = weights_96_96_1x1_V_299_reg_62545.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_76_address0 = weights_96_96_1x1_V_203_reg_61909.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_76_address0 = weights_96_96_1x1_V_107_reg_61194.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_76_address0 = weights_96_96_1x1_V_11_reg_60479.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_76_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_76_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_76_address0 = grp_subconv_1x1_4_p_fu_22130_weight_76_V_address0.read();
    } else {
        weights_96_96_1x1_V_76_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_76_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_76_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_76_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_76_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_76_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_76_V_ce0.read();
    } else {
        weights_96_96_1x1_V_76_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_76_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_4C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_4C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_4C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_4C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_4C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_4C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_4C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_4C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_4C)))) {
        weights_96_96_1x1_V_76_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_76_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_77_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_77_address0 = weights_96_96_1x1_V_806_reg_66185.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_77_address0 = weights_96_96_1x1_V_710_reg_65470.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_77_address0 = weights_96_96_1x1_V_614_reg_64790.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_77_address0 = weights_96_96_1x1_V_518_reg_64075.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_77_address0 = weights_96_96_1x1_V_422_reg_63395.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_77_address0 = weights_96_96_1x1_V_326_reg_62680.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_77_address0 = weights_96_96_1x1_V_230_reg_62044.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_77_address0 = weights_96_96_1x1_V_134_reg_61329.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_77_address0 = weights_96_96_1x1_V_38_reg_60614.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_77_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_77_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_77_address0 = grp_subconv_1x1_4_p_fu_22130_weight_77_V_address0.read();
    } else {
        weights_96_96_1x1_V_77_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_77_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_77_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_77_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_77_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_77_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_77_V_ce0.read();
    } else {
        weights_96_96_1x1_V_77_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_77_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_4D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_4D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_4D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_4D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_4D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_4D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_4D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_4D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_4D)))) {
        weights_96_96_1x1_V_77_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_77_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_78_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_78_address0 = weights_96_96_1x1_V_811_reg_66210.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_78_address0 = weights_96_96_1x1_V_715_reg_65495.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_78_address0 = weights_96_96_1x1_V_619_reg_64815.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_78_address0 = weights_96_96_1x1_V_523_reg_64100.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_78_address0 = weights_96_96_1x1_V_427_reg_63420.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_78_address0 = weights_96_96_1x1_V_331_reg_62705.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_78_address0 = weights_96_96_1x1_V_235_reg_62069.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_78_address0 = weights_96_96_1x1_V_139_reg_61354.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_78_address0 = weights_96_96_1x1_V_43_reg_60639.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_78_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_78_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_78_address0 = grp_subconv_1x1_4_p_fu_22130_weight_78_V_address0.read();
    } else {
        weights_96_96_1x1_V_78_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_78_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_78_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_78_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_78_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_78_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_78_V_ce0.read();
    } else {
        weights_96_96_1x1_V_78_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_78_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_4E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_4E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_4E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_4E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_4E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_4E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_4E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_4E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_4E)))) {
        weights_96_96_1x1_V_78_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_78_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_79_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_79_address0 = weights_96_96_1x1_V_777_reg_66040.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_79_address0 = weights_96_96_1x1_V_681_reg_65325.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_79_address0 = weights_96_96_1x1_V_585_reg_64645.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_79_address0 = weights_96_96_1x1_V_489_reg_63930.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_79_address0 = weights_96_96_1x1_V_393_reg_63250.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_79_address0 = weights_96_96_1x1_V_297_reg_62535.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_79_address0 = weights_96_96_1x1_V_201_reg_61899.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_79_address0 = weights_96_96_1x1_V_105_reg_61184.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_79_address0 = weights_96_96_1x1_V_9_reg_60469.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_79_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_79_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_79_address0 = grp_subconv_1x1_4_p_fu_22130_weight_79_V_address0.read();
    } else {
        weights_96_96_1x1_V_79_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_79_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_79_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_79_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_79_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_79_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_79_V_ce0.read();
    } else {
        weights_96_96_1x1_V_79_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_79_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_4F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_4F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_4F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_4F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_4F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_4F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_4F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_4F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_4F)))) {
        weights_96_96_1x1_V_79_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_79_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_812_reg_66215.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_716_reg_65500.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_620_reg_64820.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_524_reg_64105.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_428_reg_63425.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_332_reg_62710.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_236_reg_62074.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_140_reg_61359.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_7_address0 = weights_96_96_1x1_V_44_reg_60644.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_7_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_7_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_7_address0 = grp_subconv_1x1_4_p_fu_22130_weight_7_V_address0.read();
    } else {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<7>) ("XXXXXXX");
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
        weights_96_96_1x1_V_7_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_7_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_7_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_7_V_ce0.read();
    } else {
        weights_96_96_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_7)))) {
        weights_96_96_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_80_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_80_address0 = weights_96_96_1x1_V_802_reg_66165.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_80_address0 = weights_96_96_1x1_V_706_reg_65450.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_80_address0 = weights_96_96_1x1_V_610_reg_64770.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_80_address0 = weights_96_96_1x1_V_514_reg_64055.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_80_address0 = weights_96_96_1x1_V_418_reg_63375.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_80_address0 = weights_96_96_1x1_V_322_reg_62660.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_80_address0 = weights_96_96_1x1_V_226_reg_62024.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_80_address0 = weights_96_96_1x1_V_130_reg_61309.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_80_address0 = weights_96_96_1x1_V_34_reg_60594.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_80_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_80_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_80_address0 = grp_subconv_1x1_4_p_fu_22130_weight_80_V_address0.read();
    } else {
        weights_96_96_1x1_V_80_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_80_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_80_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_80_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_80_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_80_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_80_V_ce0.read();
    } else {
        weights_96_96_1x1_V_80_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_80_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_50)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_50)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_50)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_50)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_50)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_50)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_50)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_50)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_50)))) {
        weights_96_96_1x1_V_80_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_80_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_81_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_81_address0 = weights_96_96_1x1_V_815_reg_66230.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_81_address0 = weights_96_96_1x1_V_719_reg_65515.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_81_address0 = weights_96_96_1x1_V_623_reg_64835.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_81_address0 = weights_96_96_1x1_V_527_reg_64120.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_81_address0 = weights_96_96_1x1_V_431_reg_63440.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_81_address0 = weights_96_96_1x1_V_335_reg_62725.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_81_address0 = weights_96_96_1x1_V_239_reg_62089.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_81_address0 = weights_96_96_1x1_V_143_reg_61374.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_81_address0 = weights_96_96_1x1_V_47_reg_60659.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_81_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_81_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_81_address0 = grp_subconv_1x1_4_p_fu_22130_weight_81_V_address0.read();
    } else {
        weights_96_96_1x1_V_81_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_81_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_81_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_81_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_81_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_81_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_81_V_ce0.read();
    } else {
        weights_96_96_1x1_V_81_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_81_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_51)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_51)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_51)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_51)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_51)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_51)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_51)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_51)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_51)))) {
        weights_96_96_1x1_V_81_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_81_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_82_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_82_address0 = weights_96_96_1x1_V_821_reg_66260.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_82_address0 = weights_96_96_1x1_V_725_reg_65545.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_82_address0 = weights_96_96_1x1_V_629_reg_64865.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_82_address0 = weights_96_96_1x1_V_533_reg_64150.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_82_address0 = weights_96_96_1x1_V_437_reg_63470.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_82_address0 = weights_96_96_1x1_V_341_reg_62755.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_82_address0 = weights_96_96_1x1_V_245_reg_62119.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_82_address0 = weights_96_96_1x1_V_149_reg_61404.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_82_address0 = weights_96_96_1x1_V_53_reg_60689.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_82_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_82_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_82_address0 = grp_subconv_1x1_4_p_fu_22130_weight_82_V_address0.read();
    } else {
        weights_96_96_1x1_V_82_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_82_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_82_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_82_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_82_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_82_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_82_V_ce0.read();
    } else {
        weights_96_96_1x1_V_82_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_82_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_52)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_52)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_52)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_52)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_52)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_52)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_52)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_52)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_52)))) {
        weights_96_96_1x1_V_82_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_82_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_83_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_83_address0 = weights_96_96_1x1_V_822_reg_66265.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_83_address0 = weights_96_96_1x1_V_726_reg_65550.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_83_address0 = weights_96_96_1x1_V_630_reg_64870.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_83_address0 = weights_96_96_1x1_V_534_reg_64155.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_83_address0 = weights_96_96_1x1_V_438_reg_63475.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_83_address0 = weights_96_96_1x1_V_342_reg_62760.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_83_address0 = weights_96_96_1x1_V_246_reg_62124.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_83_address0 = weights_96_96_1x1_V_150_reg_61409.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_83_address0 = weights_96_96_1x1_V_54_reg_60694.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_83_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_83_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_83_address0 = grp_subconv_1x1_4_p_fu_22130_weight_83_V_address0.read();
    } else {
        weights_96_96_1x1_V_83_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_83_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_83_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_83_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_83_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_83_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_83_V_ce0.read();
    } else {
        weights_96_96_1x1_V_83_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_83_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_53)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_53)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_53)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_53)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_53)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_53)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_53)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_53)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_53)))) {
        weights_96_96_1x1_V_83_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_83_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_84_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_84_address0 = weights_96_96_1x1_V_818_reg_66245.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_84_address0 = weights_96_96_1x1_V_722_reg_65530.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_84_address0 = weights_96_96_1x1_V_626_reg_64850.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_84_address0 = weights_96_96_1x1_V_530_reg_64135.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_84_address0 = weights_96_96_1x1_V_434_reg_63455.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_84_address0 = weights_96_96_1x1_V_338_reg_62740.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_84_address0 = weights_96_96_1x1_V_242_reg_62104.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_84_address0 = weights_96_96_1x1_V_146_reg_61389.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_84_address0 = weights_96_96_1x1_V_50_reg_60674.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_84_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_84_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_84_address0 = grp_subconv_1x1_4_p_fu_22130_weight_84_V_address0.read();
    } else {
        weights_96_96_1x1_V_84_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_84_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_84_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_84_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_84_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_84_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_84_V_ce0.read();
    } else {
        weights_96_96_1x1_V_84_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_84_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_54)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_54)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_54)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_54)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_54)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_54)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_54)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_54)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_54)))) {
        weights_96_96_1x1_V_84_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_84_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_85_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_85_address0 = weights_96_96_1x1_V_820_reg_66255.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_85_address0 = weights_96_96_1x1_V_724_reg_65540.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_85_address0 = weights_96_96_1x1_V_628_reg_64860.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_85_address0 = weights_96_96_1x1_V_532_reg_64145.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_85_address0 = weights_96_96_1x1_V_436_reg_63465.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_85_address0 = weights_96_96_1x1_V_340_reg_62750.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_85_address0 = weights_96_96_1x1_V_244_reg_62114.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_85_address0 = weights_96_96_1x1_V_148_reg_61399.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_85_address0 = weights_96_96_1x1_V_52_reg_60684.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_85_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_85_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_85_address0 = grp_subconv_1x1_4_p_fu_22130_weight_85_V_address0.read();
    } else {
        weights_96_96_1x1_V_85_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_85_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_85_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_85_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_85_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_85_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_85_V_ce0.read();
    } else {
        weights_96_96_1x1_V_85_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_85_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_55)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_55)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_55)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_55)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_55)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_55)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_55)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_55)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_55)))) {
        weights_96_96_1x1_V_85_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_85_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_86_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_86_address0 = weights_96_96_1x1_V_798_reg_66145.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_86_address0 = weights_96_96_1x1_V_702_reg_65430.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_86_address0 = weights_96_96_1x1_V_606_reg_64750.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_86_address0 = weights_96_96_1x1_V_510_reg_64035.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_86_address0 = weights_96_96_1x1_V_414_reg_63355.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_86_address0 = weights_96_96_1x1_V_318_reg_62640.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_86_address0 = weights_96_96_1x1_V_222_reg_62004.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_86_address0 = weights_96_96_1x1_V_126_reg_61289.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_86_address0 = weights_96_96_1x1_V_30_reg_60574.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_86_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_86_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_86_address0 = grp_subconv_1x1_4_p_fu_22130_weight_86_V_address0.read();
    } else {
        weights_96_96_1x1_V_86_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_86_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_86_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_86_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_86_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_86_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_86_V_ce0.read();
    } else {
        weights_96_96_1x1_V_86_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_86_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_56)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_56)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_56)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_56)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_56)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_56)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_56)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_56)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_56)))) {
        weights_96_96_1x1_V_86_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_86_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_87_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_87_address0 = weights_96_96_1x1_V_814_reg_66225.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_87_address0 = weights_96_96_1x1_V_718_reg_65510.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_87_address0 = weights_96_96_1x1_V_622_reg_64830.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_87_address0 = weights_96_96_1x1_V_526_reg_64115.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_87_address0 = weights_96_96_1x1_V_430_reg_63435.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_87_address0 = weights_96_96_1x1_V_334_reg_62720.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_87_address0 = weights_96_96_1x1_V_238_reg_62084.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_87_address0 = weights_96_96_1x1_V_142_reg_61369.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_87_address0 = weights_96_96_1x1_V_46_reg_60654.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_87_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_87_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_87_address0 = grp_subconv_1x1_4_p_fu_22130_weight_87_V_address0.read();
    } else {
        weights_96_96_1x1_V_87_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_87_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_87_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_87_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_87_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_87_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_87_V_ce0.read();
    } else {
        weights_96_96_1x1_V_87_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_87_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_57)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_57)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_57)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_57)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_57)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_57)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_57)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_57)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_57)))) {
        weights_96_96_1x1_V_87_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_87_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_88_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_88_address0 = weights_96_96_1x1_V_797_reg_66140.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_88_address0 = weights_96_96_1x1_V_701_reg_65425.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_88_address0 = weights_96_96_1x1_V_605_reg_64745.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_88_address0 = weights_96_96_1x1_V_509_reg_64030.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_88_address0 = weights_96_96_1x1_V_413_reg_63350.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_88_address0 = weights_96_96_1x1_V_317_reg_62635.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_88_address0 = weights_96_96_1x1_V_221_reg_61999.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_88_address0 = weights_96_96_1x1_V_125_reg_61284.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_88_address0 = weights_96_96_1x1_V_29_reg_60569.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_88_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_88_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_88_address0 = grp_subconv_1x1_4_p_fu_22130_weight_88_V_address0.read();
    } else {
        weights_96_96_1x1_V_88_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_88_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_88_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_88_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_88_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_88_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_88_V_ce0.read();
    } else {
        weights_96_96_1x1_V_88_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_88_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_58)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_58)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_58)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_58)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_58)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_58)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_58)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_58)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_58)))) {
        weights_96_96_1x1_V_88_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_88_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_89_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_89_address0 = weights_96_96_1x1_V_799_reg_66150.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_89_address0 = weights_96_96_1x1_V_703_reg_65435.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_89_address0 = weights_96_96_1x1_V_607_reg_64755.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_89_address0 = weights_96_96_1x1_V_511_reg_64040.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_89_address0 = weights_96_96_1x1_V_415_reg_63360.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_89_address0 = weights_96_96_1x1_V_319_reg_62645.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_89_address0 = weights_96_96_1x1_V_223_reg_62009.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_89_address0 = weights_96_96_1x1_V_127_reg_61294.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_89_address0 = weights_96_96_1x1_V_31_reg_60579.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_89_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_89_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_89_address0 = grp_subconv_1x1_4_p_fu_22130_weight_89_V_address0.read();
    } else {
        weights_96_96_1x1_V_89_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_89_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_89_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_89_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_89_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_89_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_89_V_ce0.read();
    } else {
        weights_96_96_1x1_V_89_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_89_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_59)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_59)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_59)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_59)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_59)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_59)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_59)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_59)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_59)))) {
        weights_96_96_1x1_V_89_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_89_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_8_address0 = weights_96_96_1x1_V_810_reg_66205.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_8_address0 = weights_96_96_1x1_V_714_reg_65490.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_8_address0 = weights_96_96_1x1_V_618_reg_64810.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_8_address0 = weights_96_96_1x1_V_522_reg_64095.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_8_address0 = weights_96_96_1x1_V_426_reg_63415.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_8_address0 = weights_96_96_1x1_V_330_reg_62700.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_8_address0 = weights_96_96_1x1_V_234_reg_62064.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_8_address0 = weights_96_96_1x1_V_138_reg_61349.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_8_address0 = weights_96_96_1x1_V_42_reg_60634.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_8_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_8_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_8_address0 = grp_subconv_1x1_4_p_fu_22130_weight_8_V_address0.read();
    } else {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_8_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_8_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_8_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_8_V_ce0.read();
    } else {
        weights_96_96_1x1_V_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_8)))) {
        weights_96_96_1x1_V_8_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_90_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_90_address0 = weights_96_96_1x1_V_816_reg_66235.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_90_address0 = weights_96_96_1x1_V_720_reg_65520.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_90_address0 = weights_96_96_1x1_V_624_reg_64840.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_90_address0 = weights_96_96_1x1_V_528_reg_64125.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_90_address0 = weights_96_96_1x1_V_432_reg_63445.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_90_address0 = weights_96_96_1x1_V_336_reg_62730.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_90_address0 = weights_96_96_1x1_V_240_reg_62094.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_90_address0 = weights_96_96_1x1_V_144_reg_61379.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_90_address0 = weights_96_96_1x1_V_48_reg_60664.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_90_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_90_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_90_address0 = grp_subconv_1x1_4_p_fu_22130_weight_90_V_address0.read();
    } else {
        weights_96_96_1x1_V_90_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_90_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_90_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_90_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_90_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_90_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_90_V_ce0.read();
    } else {
        weights_96_96_1x1_V_90_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_90_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_5A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_5A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_5A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_5A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_5A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_5A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_5A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_5A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_5A)))) {
        weights_96_96_1x1_V_90_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_90_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_91_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_91_address0 = weights_96_96_1x1_V_801_reg_66160.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_91_address0 = weights_96_96_1x1_V_705_reg_65445.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_91_address0 = weights_96_96_1x1_V_609_reg_64765.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_91_address0 = weights_96_96_1x1_V_513_reg_64050.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_91_address0 = weights_96_96_1x1_V_417_reg_63370.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_91_address0 = weights_96_96_1x1_V_321_reg_62655.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_91_address0 = weights_96_96_1x1_V_225_reg_62019.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_91_address0 = weights_96_96_1x1_V_129_reg_61304.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_91_address0 = weights_96_96_1x1_V_33_reg_60589.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_91_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_91_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_91_address0 = grp_subconv_1x1_4_p_fu_22130_weight_91_V_address0.read();
    } else {
        weights_96_96_1x1_V_91_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_91_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_91_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_91_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_91_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_91_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_91_V_ce0.read();
    } else {
        weights_96_96_1x1_V_91_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_91_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_5B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_5B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_5B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_5B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_5B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_5B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_5B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_5B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_5B)))) {
        weights_96_96_1x1_V_91_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_91_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_92_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_92_address0 = weights_96_96_1x1_V_795_reg_66130.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_92_address0 = weights_96_96_1x1_V_699_reg_65415.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_92_address0 = weights_96_96_1x1_V_603_reg_64735.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_92_address0 = weights_96_96_1x1_V_507_reg_64020.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_92_address0 = weights_96_96_1x1_V_411_reg_63340.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_92_address0 = weights_96_96_1x1_V_315_reg_62625.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_92_address0 = weights_96_96_1x1_V_219_reg_61989.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_92_address0 = weights_96_96_1x1_V_123_reg_61274.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_92_address0 = weights_96_96_1x1_V_27_reg_60559.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_92_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_92_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_92_address0 = grp_subconv_1x1_4_p_fu_22130_weight_92_V_address0.read();
    } else {
        weights_96_96_1x1_V_92_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_92_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_92_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_92_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_92_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_92_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_92_V_ce0.read();
    } else {
        weights_96_96_1x1_V_92_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_92_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_5C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_5C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_5C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_5C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_5C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_5C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_5C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_5C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_5C)))) {
        weights_96_96_1x1_V_92_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_92_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_93_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_93_address0 = weights_96_96_1x1_V_800_reg_66155.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_93_address0 = weights_96_96_1x1_V_704_reg_65440.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_93_address0 = weights_96_96_1x1_V_608_reg_64760.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_93_address0 = weights_96_96_1x1_V_512_reg_64045.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_93_address0 = weights_96_96_1x1_V_416_reg_63365.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_93_address0 = weights_96_96_1x1_V_320_reg_62650.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_93_address0 = weights_96_96_1x1_V_224_reg_62014.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_93_address0 = weights_96_96_1x1_V_128_reg_61299.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_93_address0 = weights_96_96_1x1_V_32_reg_60584.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_93_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_93_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_93_address0 = grp_subconv_1x1_4_p_fu_22130_weight_93_V_address0.read();
    } else {
        weights_96_96_1x1_V_93_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_93_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_93_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_93_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_93_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_93_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_93_V_ce0.read();
    } else {
        weights_96_96_1x1_V_93_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_93_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_5D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_5D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_5D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_5D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_5D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_5D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_5D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_5D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_5D)))) {
        weights_96_96_1x1_V_93_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_93_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_94_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_94_address0 = weights_96_96_1x1_V_796_reg_66135.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_94_address0 = weights_96_96_1x1_V_700_reg_65420.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_94_address0 = weights_96_96_1x1_V_604_reg_64740.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_94_address0 = weights_96_96_1x1_V_508_reg_64025.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_94_address0 = weights_96_96_1x1_V_412_reg_63345.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_94_address0 = weights_96_96_1x1_V_316_reg_62630.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_94_address0 = weights_96_96_1x1_V_220_reg_61994.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_94_address0 = weights_96_96_1x1_V_124_reg_61279.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_94_address0 = weights_96_96_1x1_V_28_reg_60564.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_94_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_94_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_94_address0 = grp_subconv_1x1_4_p_fu_22130_weight_94_V_address0.read();
    } else {
        weights_96_96_1x1_V_94_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_94_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_94_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_94_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_94_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_94_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_94_V_ce0.read();
    } else {
        weights_96_96_1x1_V_94_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_94_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_5E)))) {
        weights_96_96_1x1_V_94_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_94_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_95_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_95_address0 = weights_96_96_1x1_V_819_reg_66250.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_95_address0 = weights_96_96_1x1_V_723_reg_65535.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_95_address0 = weights_96_96_1x1_V_627_reg_64855.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_95_address0 = weights_96_96_1x1_V_531_reg_64140.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_95_address0 = weights_96_96_1x1_V_435_reg_63460.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_95_address0 = weights_96_96_1x1_V_339_reg_62745.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_95_address0 = weights_96_96_1x1_V_243_reg_62109.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_95_address0 = weights_96_96_1x1_V_147_reg_61394.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_95_address0 = weights_96_96_1x1_V_51_reg_60679.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_95_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_95_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_95_address0 = grp_subconv_1x1_4_p_fu_22130_weight_95_V_address0.read();
    } else {
        weights_96_96_1x1_V_95_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_95_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_95_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_95_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_95_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_95_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_95_V_ce0.read();
    } else {
        weights_96_96_1x1_V_95_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_95_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_0) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_1) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_2) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_3) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_4) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_5) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_6) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_7) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_8) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_9) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_A) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_B) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_C) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_D) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_E) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_F) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_10) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_11) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_12) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_13) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_14) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_15) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_16) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_17) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_18) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_19) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_1A) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_1B) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_1C) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_1D) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_1E) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_1F) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_20) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_21) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_22) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_23) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_24) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_25) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_26) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_27) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_28) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_29) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_2A) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_2B) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_2C) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_2D) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_2E) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_2F) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_30) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_31) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_32) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_33) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_34) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_35) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_36) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_37) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_38) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_39) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_3A) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_3B) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_3C) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_3D) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_3E) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_3F) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_40) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_41) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_42) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_43) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_44) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_45) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_46) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_47) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_48) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_49) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_4A) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_4B) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_4C) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_4D) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_4E) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_4F) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_50) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_51) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_52) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_53) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_54) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_55) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_56) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_57) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_58) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_59) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_5A) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_5B) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_5C) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_5D) && 
          !esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_0) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_1) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_2) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_3) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_4) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_5) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_6) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_7) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_8) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_9) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_A) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_B) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_C) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_D) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_E) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_F) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_10) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_11) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_12) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_13) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_14) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_15) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_16) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_17) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_18) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_19) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_1A) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_1B) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_1C) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_1D) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_1E) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_1F) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_20) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_21) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_22) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_23) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_24) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_25) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_26) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_27) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_28) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_29) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_2A) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_2B) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_2C) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_2D) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_2E) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_2F) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_30) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_31) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_32) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_33) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_34) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_35) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_36) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_37) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_38) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_39) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_3A) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_3B) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_3C) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_3D) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_3E) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_3F) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_40) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_41) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_42) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_43) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_44) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_45) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_46) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_47) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_48) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_49) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_4A) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_4B) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_4C) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_4D) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_4E) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_4F) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_50) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_51) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_52) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_53) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_54) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_55) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_56) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_57) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_58) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_59) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_5A) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_5B) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_5C) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_5D) && 
          !esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_0) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_1) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_2) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_3) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_4) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_5) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_6) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_7) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_8) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_9) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_A) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_B) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_C) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_D) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_E) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_F) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_10) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_11) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_12) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_13) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_14) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_15) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_16) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_17) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_18) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_19) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_1A) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_1B) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_1C) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_1D) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_1E) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_1F) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_20) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_21) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_22) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_23) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_24) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_25) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_26) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_27) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_28) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_29) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_2A) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_2B) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_2C) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_2D) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_2E) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_2F) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_30) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_31) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_32) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_33) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_34) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_35) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_36) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_37) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_38) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_39) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_3A) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_3B) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_3C) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_3D) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_3E) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_3F) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_40) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_41) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_42) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_43) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_44) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_45) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_46) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_47) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_48) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_49) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_4A) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_4B) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_4C) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_4D) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_4E) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_4F) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_50) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_51) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_52) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_53) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_54) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_55) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_56) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_57) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_58) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_59) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_5A) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_5B) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_5C) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_5D) && 
          !esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_0) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_1) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_2) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_3) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_4) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_5) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_6) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_7) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_8) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_9) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_A) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_B) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_C) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_D) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_E) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_F) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_10) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_11) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_12) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_13) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_14) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_15) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_16) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_17) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_18) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_19) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_1A) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_1B) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_1C) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_1D) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_1E) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_1F) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_20) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_21) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_22) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_23) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_24) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_25) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_26) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_27) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_28) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_29) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_2A) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_2B) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_2C) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_2D) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_2E) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_2F) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_30) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_31) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_32) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_33) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_34) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_35) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_36) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_37) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_38) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_39) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_3A) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_3B) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_3C) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_3D) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_3E) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_3F) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_40) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_41) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_42) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_43) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_44) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_45) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_46) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_47) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_48) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_49) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_4A) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_4B) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_4C) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_4D) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_4E) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_4F) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_50) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_51) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_52) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_53) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_54) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_55) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_56) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_57) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_58) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_59) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_5A) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_5B) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_5C) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_5D) && 
          !esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_0) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_1) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_2) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_3) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_4) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_5) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_6) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_7) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_8) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_9) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_A) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_B) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_C) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_D) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_E) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_F) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_10) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_11) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_12) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_13) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_14) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_15) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_16) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_17) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_18) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_19) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_1A) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_1B) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_1C) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_1D) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_1E) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_1F) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_20) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_21) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_22) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_23) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_24) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_25) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_26) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_27) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_28) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_29) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_2A) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_2B) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_2C) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_2D) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_2E) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_2F) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_30) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_31) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_32) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_33) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_34) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_35) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_36) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_37) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_38) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_39) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_3A) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_3B) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_3C) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_3D) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_3E) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_3F) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_40) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_41) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_42) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_43) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_44) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_45) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_46) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_47) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_48) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_49) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_4A) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_4B) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_4C) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_4D) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_4E) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_4F) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_50) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_51) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_52) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_53) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_54) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_55) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_56) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_57) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_58) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_59) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_5A) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_5B) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_5C) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_5D) && 
          !esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_0) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_1) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_2) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_3) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_4) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_5) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_6) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_7) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_8) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_9) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_A) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_B) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_C) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_D) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_E) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_F) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_10) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_11) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_12) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_13) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_14) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_15) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_16) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_17) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_18) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_19) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_1A) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_1B) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_1C) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_1D) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_1E) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_1F) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_20) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_21) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_22) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_23) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_24) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_25) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_26) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_27) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_28) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_29) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_2A) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_2B) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_2C) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_2D) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_2E) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_2F) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_30) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_31) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_32) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_33) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_34) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_35) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_36) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_37) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_38) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_39) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_3A) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_3B) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_3C) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_3D) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_3E) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_3F) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_40) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_41) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_42) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_43) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_44) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_45) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_46) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_47) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_48) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_49) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_4A) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_4B) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_4C) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_4D) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_4E) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_4F) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_50) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_51) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_52) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_53) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_54) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_55) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_56) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_57) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_58) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_59) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_5A) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_5B) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_5C) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_5D) && 
          !esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_0) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_1) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_2) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_3) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_4) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_5) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_6) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_7) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_8) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_9) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_A) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_B) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_C) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_D) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_E) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_F) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_10) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_11) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_12) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_13) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_14) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_15) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_16) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_17) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_18) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_19) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_1A) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_1B) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_1C) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_1D) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_1E) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_1F) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_20) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_21) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_22) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_23) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_24) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_25) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_26) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_27) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_28) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_29) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_2A) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_2B) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_2C) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_2D) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_2E) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_2F) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_30) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_31) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_32) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_33) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_34) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_35) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_36) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_37) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_38) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_39) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_3A) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_3B) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_3C) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_3D) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_3E) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_3F) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_40) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_41) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_42) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_43) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_44) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_45) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_46) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_47) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_48) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_49) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_4A) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_4B) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_4C) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_4D) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_4E) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_4F) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_50) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_51) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_52) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_53) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_54) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_55) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_56) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_57) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_58) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_59) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_5A) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_5B) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_5C) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_5D) && 
          !esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_0) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_1) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_2) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_3) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_4) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_5) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_6) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_7) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_8) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_9) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_A) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_B) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_C) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_D) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_E) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_F) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_10) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_11) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_12) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_13) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_14) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_15) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_16) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_17) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_18) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_19) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_1A) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_1B) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_1C) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_1D) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_1E) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_1F) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_20) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_21) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_22) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_23) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_24) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_25) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_26) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_27) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_28) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_29) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_2A) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_2B) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_2C) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_2D) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_2E) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_2F) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_30) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_31) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_32) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_33) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_34) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_35) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_36) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_37) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_38) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_39) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_3A) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_3B) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_3C) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_3D) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_3E) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_3F) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_40) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_41) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_42) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_43) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_44) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_45) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_46) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_47) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_48) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_49) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_4A) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_4B) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_4C) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_4D) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_4E) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_4F) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_50) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_51) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_52) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_53) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_54) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_55) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_56) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_57) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_58) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_59) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_5A) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_5B) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_5C) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_5D) && 
          !esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_5E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_0) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_1) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_2) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_3) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_4) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_5) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_6) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_7) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_8) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_9) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_A) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_B) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_C) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_D) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_E) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_F) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_10) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_11) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_12) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_13) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_14) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_15) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_16) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_17) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_18) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_19) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_1A) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_1B) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_1C) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_1D) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_1E) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_1F) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_20) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_21) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_22) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_23) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_24) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_25) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_26) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_27) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_28) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_29) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_2A) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_2B) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_2C) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_2D) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_2E) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_2F) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_30) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_31) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_32) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_33) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_34) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_35) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_36) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_37) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_38) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_39) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_3A) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_3B) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_3C) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_3D) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_3E) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_3F) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_40) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_41) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_42) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_43) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_44) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_45) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_46) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_47) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_48) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_49) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_4A) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_4B) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_4C) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_4D) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_4E) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_4F) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_50) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_51) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_52) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_53) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_54) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_55) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_56) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_57) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_58) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_59) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_5A) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_5B) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_5C) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_5D) && 
          !esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_5E)))) {
        weights_96_96_1x1_V_95_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_95_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_9_address0 = weights_96_96_1x1_V_817_reg_66240.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_9_address0 = weights_96_96_1x1_V_721_reg_65525.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_9_address0 = weights_96_96_1x1_V_625_reg_64845.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_9_address0 = weights_96_96_1x1_V_529_reg_64130.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_9_address0 = weights_96_96_1x1_V_433_reg_63450.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_9_address0 = weights_96_96_1x1_V_337_reg_62735.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_9_address0 = weights_96_96_1x1_V_241_reg_62099.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_9_address0 = weights_96_96_1x1_V_145_reg_61384.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_9_address0 = weights_96_96_1x1_V_49_reg_60669.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_9_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_9_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_9_address0 = grp_subconv_1x1_4_p_fu_22130_weight_9_V_address0.read();
    } else {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()))) {
        weights_96_96_1x1_V_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_9_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_9_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_9_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_9_V_ce0.read();
    } else {
        weights_96_96_1x1_V_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_9)))) {
        weights_96_96_1x1_V_9_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_829_reg_66300.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_733_reg_65585.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_637_reg_64905.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_541_reg_64190.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_445_reg_63510.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_349_reg_62795.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_253_reg_62159.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_157_reg_61444.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read())) {
        weights_96_96_1x1_V_s_address0 = weights_96_96_1x1_V_61_reg_60729.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        weights_96_96_1x1_V_s_address0 = grp_subconv_1x1_8p_p_fu_22722_weight_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_s_address0 = grp_subconv_1x1_4_p_fu_22130_weight_0_V_address0.read();
    } else {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<7>) ("XXXXXXX");
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
        weights_96_96_1x1_V_s_ce0 = grp_subconv_1x1_8p_p_fu_22722_weight_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1464.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1645.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()))) {
        weights_96_96_1x1_V_s_ce0 = grp_subconv_1x1_4_p_fu_22130_weight_0_V_ce0.read();
    } else {
        weights_96_96_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) && 
          esl_seteq<1,7,7>(tmp_467_t_reg_60918.read(), ap_const_lv7_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read()) && 
          esl_seteq<1,7,7>(tmp_488_t_reg_61633.read(), ap_const_lv7_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1362.read()) && 
          esl_seteq<1,7,7>(tmp_510_t_reg_62348.read(), ap_const_lv7_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1395.read()) && 
          esl_seteq<1,7,7>(tmp_523_t_reg_62984.read(), ap_const_lv7_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1450.read()) && 
          esl_seteq<1,7,7>(tmp_544_t_reg_63699.read(), ap_const_lv7_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1486.read()) && 
          esl_seteq<1,7,7>(tmp_558_t_reg_64379.read(), ap_const_lv7_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) && 
          esl_seteq<1,7,7>(tmp_579_t_reg_65094.read(), ap_const_lv7_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) && 
          esl_seteq<1,7,7>(tmp_593_t_reg_65774.read(), ap_const_lv7_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) && 
          esl_seteq<1,7,7>(tmp_614_t_reg_66489.read(), ap_const_lv7_0)))) {
        weights_96_96_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_s_we0 = ap_const_logic_0;
    }
}

}

