#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_19_ce0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_19_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_19_ce0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_19_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_19_ce0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_19_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_19_ce0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_19_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_19_ce0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_19_ce0.read();
    } else {
        buffer1_1_96_4x4_p_V_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_19_ce1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_19_ce1.read();
    } else {
        buffer1_1_96_4x4_p_V_19_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_19_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_19_we0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_19_we0.read();
    } else {
        buffer1_1_96_4x4_p_V_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_19_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_19_we1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_19_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_19_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_1_address0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_1_address0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_1_address0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_1_address0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_1_address0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_1_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_1_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_1_ce0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_1_ce0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_1_ce0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_1_ce0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_1_ce0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_1_ce0.read();
    } else {
        buffer1_1_96_4x4_p_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_1_ce1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_1_ce1.read();
    } else {
        buffer1_1_96_4x4_p_V_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_1_we0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_1_we0.read();
    } else {
        buffer1_1_96_4x4_p_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_1_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_1_we1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_1_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_1_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_20_address0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_20_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_20_address0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_20_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_20_address0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_20_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_20_address0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_20_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_20_address0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_20_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_20_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_20_ce0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_20_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_20_ce0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_20_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_20_ce0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_20_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_20_ce0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_20_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_20_ce0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_20_ce0.read();
    } else {
        buffer1_1_96_4x4_p_V_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_20_ce1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_20_ce1.read();
    } else {
        buffer1_1_96_4x4_p_V_20_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_20_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_20_we0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_20_we0.read();
    } else {
        buffer1_1_96_4x4_p_V_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_20_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_20_we1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_20_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_20_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_21_address0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_21_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_21_address0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_21_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_21_address0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_21_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_21_address0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_21_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_21_address0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_21_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_21_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_21_ce0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_21_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_21_ce0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_21_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_21_ce0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_21_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_21_ce0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_21_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_21_ce0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_21_ce0.read();
    } else {
        buffer1_1_96_4x4_p_V_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_21_ce1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_21_ce1.read();
    } else {
        buffer1_1_96_4x4_p_V_21_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_21_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_21_we0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_21_we0.read();
    } else {
        buffer1_1_96_4x4_p_V_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_21_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_21_we1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_21_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_21_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_22_address0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_22_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_22_address0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_22_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_22_address0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_22_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_22_address0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_22_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_22_address0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_22_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_22_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_22_ce0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_22_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_22_ce0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_22_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_22_ce0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_22_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_22_ce0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_22_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_22_ce0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_22_ce0.read();
    } else {
        buffer1_1_96_4x4_p_V_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_22_ce1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_22_ce1.read();
    } else {
        buffer1_1_96_4x4_p_V_22_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_22_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_22_we0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_22_we0.read();
    } else {
        buffer1_1_96_4x4_p_V_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_22_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_22_we1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_22_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_22_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_23_address0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_23_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_23_address0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_23_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_23_address0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_23_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_23_address0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_23_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_23_address0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_23_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_23_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_23_ce0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_23_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_23_ce0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_23_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_23_ce0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_23_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_23_ce0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_23_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_23_ce0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_23_ce0.read();
    } else {
        buffer1_1_96_4x4_p_V_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_23_ce1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_23_ce1.read();
    } else {
        buffer1_1_96_4x4_p_V_23_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_23_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_23_we0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_23_we0.read();
    } else {
        buffer1_1_96_4x4_p_V_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_23_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_23_we1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_23_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_23_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_24_address0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_24_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_24_address0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_24_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_24_address0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_24_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_24_address0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_24_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_24_address0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_24_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_24_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_24_ce0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_24_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_24_ce0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_24_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_24_ce0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_24_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_24_ce0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_24_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_24_ce0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_24_ce0.read();
    } else {
        buffer1_1_96_4x4_p_V_24_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_24_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_24_ce1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_24_ce1.read();
    } else {
        buffer1_1_96_4x4_p_V_24_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_24_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_24_we0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_24_we0.read();
    } else {
        buffer1_1_96_4x4_p_V_24_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_24_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_24_we1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_24_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_24_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_2_address0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_2_address0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_2_address0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_2_address0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_2_address0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_2_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_2_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_2_ce0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_2_ce0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_2_ce0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_2_ce0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_2_ce0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_2_ce0.read();
    } else {
        buffer1_1_96_4x4_p_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_2_ce1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_2_ce1.read();
    } else {
        buffer1_1_96_4x4_p_V_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_2_we0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_2_we0.read();
    } else {
        buffer1_1_96_4x4_p_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_2_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_2_we1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_2_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_2_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_3_address0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_3_address0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_3_address0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_3_address0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_3_address0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_3_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_3_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_3_ce0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_3_ce0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_3_ce0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_3_ce0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_3_ce0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_3_ce0.read();
    } else {
        buffer1_1_96_4x4_p_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_3_ce1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_3_ce1.read();
    } else {
        buffer1_1_96_4x4_p_V_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_3_we0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_3_we0.read();
    } else {
        buffer1_1_96_4x4_p_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_3_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_3_we1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_3_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_3_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_4_address0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_4_address0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_4_address0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_4_address0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_4_address0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_4_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_4_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_4_ce0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_4_ce0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_4_ce0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_4_ce0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_4_ce0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_4_ce0.read();
    } else {
        buffer1_1_96_4x4_p_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_4_ce1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_4_ce1.read();
    } else {
        buffer1_1_96_4x4_p_V_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_4_we0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_4_we0.read();
    } else {
        buffer1_1_96_4x4_p_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_4_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_4_we1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_4_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_4_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_5_address0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_5_address0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_5_address0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_5_address0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_5_address0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_5_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_5_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_5_ce0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_5_ce0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_5_ce0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_5_ce0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_5_ce0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_5_ce0.read();
    } else {
        buffer1_1_96_4x4_p_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_5_ce1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_5_ce1.read();
    } else {
        buffer1_1_96_4x4_p_V_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_5_we0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_5_we0.read();
    } else {
        buffer1_1_96_4x4_p_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_5_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_5_we1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_5_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_5_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_6_address0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_6_address0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_6_address0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_6_address0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_6_address0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_6_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_6_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_6_ce0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_6_ce0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_6_ce0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_6_ce0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_6_ce0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_6_ce0.read();
    } else {
        buffer1_1_96_4x4_p_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_6_ce1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_6_ce1.read();
    } else {
        buffer1_1_96_4x4_p_V_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_6_we0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_6_we0.read();
    } else {
        buffer1_1_96_4x4_p_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_6_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_6_we1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_6_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_6_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_7_address0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_7_address0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_7_address0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_7_address0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_7_address0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_7_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_7_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_7_ce0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_7_ce0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_7_ce0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_7_ce0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_7_ce0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_7_ce0.read();
    } else {
        buffer1_1_96_4x4_p_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_7_ce1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_7_ce1.read();
    } else {
        buffer1_1_96_4x4_p_V_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_7_we0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_7_we0.read();
    } else {
        buffer1_1_96_4x4_p_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_7_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_7_we1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_7_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_7_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_8_address0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_8_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_8_address0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_8_address0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_8_address0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_8_address0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_8_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_8_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_8_ce0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_8_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_8_ce0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_8_ce0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_8_ce0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_8_ce0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_8_ce0.read();
    } else {
        buffer1_1_96_4x4_p_V_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_8_ce1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_8_ce1.read();
    } else {
        buffer1_1_96_4x4_p_V_8_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_8_we0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_8_we0.read();
    } else {
        buffer1_1_96_4x4_p_V_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_8_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_8_we1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_8_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_8_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_9_address0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_9_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_9_address0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_9_address0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_9_address0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_9_address0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_9_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_9_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_9_ce0 = grp_shuffle_96_r_p_fu_15012_buffer1_1_96_4x4_p_V_9_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_9_ce0 = grp_shuffle_96_l_p_fu_14958_buffer1_1_96_4x4_p_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_9_ce0 = grp_shuffle_96_p_fu_14822_buffer1_1_96_4x4_p_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_9_ce0 = grp_subconv_3x3_4_no_rel_fu_14450_buffer1_1_96_4x4_p_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_9_ce0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_9_ce0.read();
    } else {
        buffer1_1_96_4x4_p_V_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_9_ce1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_9_ce1.read();
    } else {
        buffer1_1_96_4x4_p_V_9_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_9_we0 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_9_we0.read();
    } else {
        buffer1_1_96_4x4_p_V_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_9_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_9_we1 = grp_subconv_1x1_4_p_fu_13694_buffer1_1_96_4x4_p_V_9_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_9_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ci10_cast_fu_16026_p1() {
    ci10_cast_fu_16026_p1 = esl_zext<32,5>(ci10_reg_9771.read());
}

void ShuffleNetV2::thread_ci17_cast_fu_16370_p1() {
    ci17_cast_fu_16370_p1 = esl_zext<32,5>(ci17_reg_9849.read());
}

void ShuffleNetV2::thread_ci22_cast_fu_16707_p1() {
    ci22_cast_fu_16707_p1 = esl_zext<32,5>(ci21_reg_9916.read());
}

void ShuffleNetV2::thread_ci24_cast_fu_17030_p1() {
    ci24_cast_fu_17030_p1 = esl_zext<32,5>(ci23_reg_9994.read());
}

void ShuffleNetV2::thread_ci26_cast_fu_17513_p1() {
    ci26_cast_fu_17513_p1 = esl_zext<32,5>(ci25_reg_10094.read());
}

void ShuffleNetV2::thread_ci28_cast_fu_17845_p1() {
    ci28_cast_fu_17845_p1 = esl_zext<32,5>(ci27_reg_10172.read());
}

void ShuffleNetV2::thread_ci30_cast_fu_18290_p1() {
    ci30_cast_fu_18290_p1 = esl_zext<32,5>(ci29_reg_10272.read());
}

void ShuffleNetV2::thread_ci32_cast_fu_18659_p1() {
    ci32_cast_fu_18659_p1 = esl_zext<32,5>(ci31_reg_10350.read());
}

void ShuffleNetV2::thread_ci34_cast1_cast_fu_18902_p1() {
    ci34_cast1_cast_fu_18902_p1 = esl_zext<16,5>(ci33_reg_10416.read());
}

void ShuffleNetV2::thread_ci34_cast_fu_18898_p1() {
    ci34_cast_fu_18898_p1 = esl_zext<7,5>(ci33_reg_10416.read());
}

void ShuffleNetV2::thread_ci36_cast1_cast_fu_19683_p1() {
    ci36_cast1_cast_fu_19683_p1 = esl_zext<16,5>(ci35_reg_10537.read());
}

void ShuffleNetV2::thread_ci36_cast_fu_19679_p1() {
    ci36_cast_fu_19679_p1 = esl_zext<7,5>(ci35_reg_10537.read());
}

void ShuffleNetV2::thread_ci38_cast1_cast_fu_20460_p1() {
    ci38_cast1_cast_fu_20460_p1 = esl_zext<17,5>(ci37_reg_10658.read());
}

void ShuffleNetV2::thread_ci38_cast_fu_20456_p1() {
    ci38_cast_fu_20456_p1 = esl_zext<7,5>(ci37_reg_10658.read());
}

void ShuffleNetV2::thread_ci3_cast_fu_15751_p1() {
    ci3_cast_fu_15751_p1 = esl_zext<32,5>(ci3_reg_9693.read());
}

void ShuffleNetV2::thread_ci40_cast1_cast_fu_21111_p1() {
    ci40_cast1_cast_fu_21111_p1 = esl_zext<17,5>(ci39_reg_10746.read());
}

void ShuffleNetV2::thread_ci40_cast_fu_21107_p1() {
    ci40_cast_fu_21107_p1 = esl_zext<7,5>(ci39_reg_10746.read());
}

void ShuffleNetV2::thread_ci42_cast1_cast_fu_21892_p1() {
    ci42_cast1_cast_fu_21892_p1 = esl_zext<17,5>(ci41_reg_10867.read());
}

void ShuffleNetV2::thread_ci42_cast_fu_21888_p1() {
    ci42_cast_fu_21888_p1 = esl_zext<7,5>(ci41_reg_10867.read());
}

void ShuffleNetV2::thread_ci44_cast1_cast_fu_22658_p1() {
    ci44_cast1_cast_fu_22658_p1 = esl_zext<17,5>(ci43_reg_10988.read());
}

void ShuffleNetV2::thread_ci44_cast_fu_22654_p1() {
    ci44_cast_fu_22654_p1 = esl_zext<7,5>(ci43_reg_10988.read());
}

void ShuffleNetV2::thread_ci46_cast1_cast_fu_23439_p1() {
    ci46_cast1_cast_fu_23439_p1 = esl_zext<17,5>(ci45_reg_11109.read());
}

void ShuffleNetV2::thread_ci46_cast_fu_23435_p1() {
    ci46_cast_fu_23435_p1 = esl_zext<7,5>(ci45_reg_11109.read());
}

void ShuffleNetV2::thread_ci48_cast1_cast_fu_24209_p1() {
    ci48_cast1_cast_fu_24209_p1 = esl_zext<17,5>(ci47_reg_11230.read());
}

void ShuffleNetV2::thread_ci48_cast_fu_24205_p1() {
    ci48_cast_fu_24205_p1 = esl_zext<7,5>(ci47_reg_11230.read());
}

void ShuffleNetV2::thread_ci50_cast1_cast_fu_24998_p1() {
    ci50_cast1_cast_fu_24998_p1 = esl_zext<18,5>(ci49_reg_11351.read());
}

void ShuffleNetV2::thread_ci50_cast_fu_24994_p1() {
    ci50_cast_fu_24994_p1 = esl_zext<7,5>(ci49_reg_11351.read());
}

void ShuffleNetV2::thread_ci52_cast1_cast_fu_25768_p1() {
    ci52_cast1_cast_fu_25768_p1 = esl_zext<18,5>(ci51_reg_11472.read());
}

void ShuffleNetV2::thread_ci52_cast_fu_25764_p1() {
    ci52_cast_fu_25764_p1 = esl_zext<7,5>(ci51_reg_11472.read());
}

void ShuffleNetV2::thread_ci54_cast1_cast_fu_26541_p1() {
    ci54_cast1_cast_fu_26541_p1 = esl_zext<18,5>(ci53_reg_11593.read());
}

void ShuffleNetV2::thread_ci54_cast_fu_26537_p1() {
    ci54_cast_fu_26537_p1 = esl_zext<7,5>(ci53_reg_11593.read());
}

void ShuffleNetV2::thread_ci56_cast1_cast_fu_27307_p1() {
    ci56_cast1_cast_fu_27307_p1 = esl_zext<18,5>(ci55_reg_11714.read());
}

void ShuffleNetV2::thread_ci56_cast_fu_27303_p1() {
    ci56_cast_fu_27303_p1 = esl_zext<7,5>(ci55_reg_11714.read());
}

void ShuffleNetV2::thread_ci58_cast1_cast_fu_28088_p1() {
    ci58_cast1_cast_fu_28088_p1 = esl_zext<18,5>(ci57_reg_11835.read());
}

void ShuffleNetV2::thread_ci58_cast_fu_28084_p1() {
    ci58_cast_fu_28084_p1 = esl_zext<7,5>(ci57_reg_11835.read());
}

void ShuffleNetV2::thread_ci60_cast1_cast_fu_28854_p1() {
    ci60_cast1_cast_fu_28854_p1 = esl_zext<18,5>(ci59_reg_11956.read());
}

void ShuffleNetV2::thread_ci60_cast_fu_28850_p1() {
    ci60_cast_fu_28850_p1 = esl_zext<7,5>(ci59_reg_11956.read());
}

void ShuffleNetV2::thread_ci62_cast1_cast_fu_29639_p1() {
    ci62_cast1_cast_fu_29639_p1 = esl_zext<18,5>(ci61_reg_12077.read());
}

void ShuffleNetV2::thread_ci62_cast_fu_29635_p1() {
    ci62_cast_fu_29635_p1 = esl_zext<7,5>(ci61_reg_12077.read());
}

void ShuffleNetV2::thread_ci64_cast1_cast_fu_30405_p1() {
    ci64_cast1_cast_fu_30405_p1 = esl_zext<18,5>(ci63_reg_12198.read());
}

void ShuffleNetV2::thread_ci64_cast_fu_30401_p1() {
    ci64_cast_fu_30401_p1 = esl_zext<7,5>(ci63_reg_12198.read());
}

void ShuffleNetV2::thread_ci66_cast1_cast_fu_31190_p1() {
    ci66_cast1_cast_fu_31190_p1 = esl_zext<18,5>(ci65_reg_12319.read());
}

void ShuffleNetV2::thread_ci66_cast_fu_31186_p1() {
    ci66_cast_fu_31186_p1 = esl_zext<7,5>(ci65_reg_12319.read());
}

void ShuffleNetV2::thread_ci68_cast1_cast_fu_31968_p1() {
    ci68_cast1_cast_fu_31968_p1 = esl_zext<18,5>(ci67_reg_12440.read());
}

void ShuffleNetV2::thread_ci68_cast_fu_31964_p1() {
    ci68_cast_fu_31964_p1 = esl_zext<7,5>(ci67_reg_12440.read());
}

void ShuffleNetV2::thread_ci70_cast1_cast_fu_32757_p1() {
    ci70_cast1_cast_fu_32757_p1 = esl_zext<19,5>(ci69_reg_12561.read());
}

void ShuffleNetV2::thread_ci70_cast_fu_32753_p1() {
    ci70_cast_fu_32753_p1 = esl_zext<7,5>(ci69_reg_12561.read());
}

void ShuffleNetV2::thread_ci72_cast1_cast_fu_33322_p1() {
    ci72_cast1_cast_fu_33322_p1 = esl_zext<19,5>(ci71_reg_12649.read());
}

void ShuffleNetV2::thread_ci72_cast_fu_33318_p1() {
    ci72_cast_fu_33318_p1 = esl_zext<8,5>(ci71_reg_12649.read());
}

void ShuffleNetV2::thread_ci74_cast1_cast_fu_34091_p1() {
    ci74_cast1_cast_fu_34091_p1 = esl_zext<19,5>(ci73_reg_12770.read());
}

void ShuffleNetV2::thread_ci74_cast_fu_34087_p1() {
    ci74_cast_fu_34087_p1 = esl_zext<8,5>(ci73_reg_12770.read());
}

void ShuffleNetV2::thread_ci76_cast1_cast_fu_34860_p1() {
    ci76_cast1_cast_fu_34860_p1 = esl_zext<19,5>(ci75_reg_12891.read());
}

void ShuffleNetV2::thread_ci76_cast_fu_34856_p1() {
    ci76_cast_fu_34856_p1 = esl_zext<8,5>(ci75_reg_12891.read());
}

void ShuffleNetV2::thread_ci78_cast1_cast_fu_35495_p1() {
    ci78_cast1_cast_fu_35495_p1 = esl_zext<19,5>(ci77_reg_12979.read());
}

void ShuffleNetV2::thread_ci78_cast_fu_35491_p1() {
    ci78_cast_fu_35491_p1 = esl_zext<8,5>(ci77_reg_12979.read());
}

void ShuffleNetV2::thread_ci80_cast1_cast_fu_36256_p1() {
    ci80_cast1_cast_fu_36256_p1 = esl_zext<19,5>(ci79_reg_13100.read());
}

void ShuffleNetV2::thread_ci80_cast_fu_36252_p1() {
    ci80_cast_fu_36252_p1 = esl_zext<8,5>(ci79_reg_13100.read());
}

void ShuffleNetV2::thread_ci82_cast1_cast_fu_37022_p1() {
    ci82_cast1_cast_fu_37022_p1 = esl_zext<20,5>(ci81_reg_13221.read());
}

void ShuffleNetV2::thread_ci82_cast_fu_37018_p1() {
    ci82_cast_fu_37018_p1 = esl_zext<8,5>(ci81_reg_13221.read());
}

void ShuffleNetV2::thread_ci84_cast1_cast_fu_37795_p1() {
    ci84_cast1_cast_fu_37795_p1 = esl_zext<20,5>(ci83_reg_13342.read());
}

void ShuffleNetV2::thread_ci84_cast_fu_37791_p1() {
    ci84_cast_fu_37791_p1 = esl_zext<8,5>(ci83_reg_13342.read());
}

void ShuffleNetV2::thread_ci86_cast1_cast_fu_38553_p1() {
    ci86_cast1_cast_fu_38553_p1 = esl_zext<20,5>(ci85_reg_13463.read());
}

void ShuffleNetV2::thread_ci86_cast_fu_38549_p1() {
    ci86_cast_fu_38549_p1 = esl_zext<8,5>(ci85_reg_13463.read());
}

void ShuffleNetV2::thread_ci88_cast1_cast_fu_39318_p1() {
    ci88_cast1_cast_fu_39318_p1 = esl_zext<20,5>(ci87_reg_13584.read());
}

void ShuffleNetV2::thread_ci88_cast_fu_39314_p1() {
    ci88_cast_fu_39314_p1 = esl_zext<8,5>(ci87_reg_13584.read());
}

void ShuffleNetV2::thread_ci_17_fu_15575_p2() {
    ci_17_fu_15575_p2 = (!ci_reg_9648.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(ci_reg_9648.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_ci_18_fu_15785_p2() {
    ci_18_fu_15785_p2 = (!ci3_reg_9693.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci3_reg_9693.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_19_fu_16060_p2() {
    ci_19_fu_16060_p2 = (!ci10_reg_9771.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci10_reg_9771.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_20_fu_16404_p2() {
    ci_20_fu_16404_p2 = (!ci17_reg_9849.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci17_reg_9849.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_22_fu_16741_p2() {
    ci_22_fu_16741_p2 = (!ci21_reg_9916.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci21_reg_9916.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_24_fu_17064_p2() {
    ci_24_fu_17064_p2 = (!ci23_reg_9994.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci23_reg_9994.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_26_fu_17547_p2() {
    ci_26_fu_17547_p2 = (!ci25_reg_10094.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci25_reg_10094.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_28_fu_17879_p2() {
    ci_28_fu_17879_p2 = (!ci27_reg_10172.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci27_reg_10172.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_30_fu_18324_p2() {
    ci_30_fu_18324_p2 = (!ci29_reg_10272.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci29_reg_10272.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_32_fu_18693_p2() {
    ci_32_fu_18693_p2 = (!ci31_reg_10350.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci31_reg_10350.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_34_fu_18912_p2() {
    ci_34_fu_18912_p2 = (!ci33_reg_10416.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci33_reg_10416.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_36_fu_19693_p2() {
    ci_36_fu_19693_p2 = (!ci35_reg_10537.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci35_reg_10537.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_38_fu_20470_p2() {
    ci_38_fu_20470_p2 = (!ci37_reg_10658.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci37_reg_10658.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_40_fu_21121_p2() {
    ci_40_fu_21121_p2 = (!ci39_reg_10746.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci39_reg_10746.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_42_fu_21902_p2() {
    ci_42_fu_21902_p2 = (!ci41_reg_10867.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci41_reg_10867.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_44_fu_22668_p2() {
    ci_44_fu_22668_p2 = (!ci43_reg_10988.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci43_reg_10988.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_46_fu_23449_p2() {
    ci_46_fu_23449_p2 = (!ci45_reg_11109.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci45_reg_11109.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_48_fu_24219_p2() {
    ci_48_fu_24219_p2 = (!ci47_reg_11230.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci47_reg_11230.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_50_fu_25008_p2() {
    ci_50_fu_25008_p2 = (!ci49_reg_11351.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci49_reg_11351.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_52_fu_25778_p2() {
    ci_52_fu_25778_p2 = (!ci51_reg_11472.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci51_reg_11472.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_54_fu_26551_p2() {
    ci_54_fu_26551_p2 = (!ci53_reg_11593.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci53_reg_11593.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_56_fu_27317_p2() {
    ci_56_fu_27317_p2 = (!ci55_reg_11714.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci55_reg_11714.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_58_fu_28098_p2() {
    ci_58_fu_28098_p2 = (!ci57_reg_11835.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci57_reg_11835.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_60_fu_28864_p2() {
    ci_60_fu_28864_p2 = (!ci59_reg_11956.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci59_reg_11956.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_62_fu_29649_p2() {
    ci_62_fu_29649_p2 = (!ci61_reg_12077.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci61_reg_12077.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_64_fu_30415_p2() {
    ci_64_fu_30415_p2 = (!ci63_reg_12198.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci63_reg_12198.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_66_fu_31200_p2() {
    ci_66_fu_31200_p2 = (!ci65_reg_12319.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci65_reg_12319.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_68_fu_31978_p2() {
    ci_68_fu_31978_p2 = (!ci67_reg_12440.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci67_reg_12440.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_70_fu_32767_p2() {
    ci_70_fu_32767_p2 = (!ci69_reg_12561.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci69_reg_12561.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_72_fu_33332_p2() {
    ci_72_fu_33332_p2 = (!ci71_reg_12649.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci71_reg_12649.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_74_fu_34101_p2() {
    ci_74_fu_34101_p2 = (!ci73_reg_12770.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci73_reg_12770.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_76_fu_34870_p2() {
    ci_76_fu_34870_p2 = (!ci75_reg_12891.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci75_reg_12891.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_78_fu_35505_p2() {
    ci_78_fu_35505_p2 = (!ci77_reg_12979.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci77_reg_12979.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_80_fu_36266_p2() {
    ci_80_fu_36266_p2 = (!ci79_reg_13100.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci79_reg_13100.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_82_fu_37032_p2() {
    ci_82_fu_37032_p2 = (!ci81_reg_13221.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci81_reg_13221.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_84_fu_37805_p2() {
    ci_84_fu_37805_p2 = (!ci83_reg_13342.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci83_reg_13342.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_86_fu_38563_p2() {
    ci_86_fu_38563_p2 = (!ci85_reg_13463.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci85_reg_13463.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_88_fu_39328_p2() {
    ci_88_fu_39328_p2 = (!ci87_reg_13584.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci87_reg_13584.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_90_fu_39851_p2() {
    ci_90_fu_39851_p2 = (!ci89_reg_13661.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ci89_reg_13661.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void ShuffleNetV2::thread_co101_cast1_fu_26140_p1() {
    co101_cast1_fu_26140_p1 = esl_zext<7,5>(co100_reg_11516.read());
}

void ShuffleNetV2::thread_co101_cast_fu_26136_p1() {
    co101_cast_fu_26136_p1 = esl_zext<9,5>(co100_reg_11516.read());
}

void ShuffleNetV2::thread_co104_cast_fu_26473_p1() {
    co104_cast_fu_26473_p1 = esl_zext<11,5>(co102_reg_11582.read());
}

void ShuffleNetV2::thread_co107_cast_fu_27058_p1() {
    co107_cast_fu_27058_p1 = esl_zext<7,6>(co106_reg_11670.read());
}

void ShuffleNetV2::thread_co109_cast_fu_27239_p1() {
    co109_cast_fu_27239_p1 = esl_zext<11,5>(co108_reg_11703.read());
}

void ShuffleNetV2::thread_co111_cast400_cast_fu_27675_p1() {
    co111_cast400_cast_fu_27675_p1 = esl_zext<8,5>(co110_reg_11758.read());
}

void ShuffleNetV2::thread_co111_cast_fu_27679_p1() {
    co111_cast_fu_27679_p1 = esl_zext<7,5>(co110_reg_11758.read());
}

void ShuffleNetV2::thread_co114_cast_fu_28020_p1() {
    co114_cast_fu_28020_p1 = esl_zext<11,5>(co112_reg_11824.read());
}

void ShuffleNetV2::thread_co117_cast_fu_28605_p1() {
    co117_cast_fu_28605_p1 = esl_zext<7,6>(co116_reg_11912.read());
}

void ShuffleNetV2::thread_co119_cast_fu_28786_p1() {
    co119_cast_fu_28786_p1 = esl_zext<11,5>(co118_reg_11945.read());
}

void ShuffleNetV2::thread_co121_cast362_cast_fu_29222_p1() {
    co121_cast362_cast_fu_29222_p1 = esl_zext<8,5>(co120_reg_12000.read());
}

void ShuffleNetV2::thread_co121_cast_fu_29226_p1() {
    co121_cast_fu_29226_p1 = esl_zext<7,5>(co120_reg_12000.read());
}

void ShuffleNetV2::thread_co124_cast_fu_29571_p1() {
    co124_cast_fu_29571_p1 = esl_zext<11,5>(co122_reg_12066.read());
}

void ShuffleNetV2::thread_co127_cast_fu_30156_p1() {
    co127_cast_fu_30156_p1 = esl_zext<7,6>(co126_reg_12154.read());
}

void ShuffleNetV2::thread_co129_cast337_cast_fu_30337_p1() {
    co129_cast337_cast_fu_30337_p1 = esl_zext<10,5>(co128_reg_12187.read());
}

void ShuffleNetV2::thread_co12_cast1_cast_fu_16082_p1() {
    co12_cast1_cast_fu_16082_p1 = esl_zext<8,5>(co12_reg_9793.read());
}

void ShuffleNetV2::thread_co12_cast_fu_16108_p1() {
    co12_cast_fu_16108_p1 = esl_zext<6,5>(co12_reg_9793.read());
}

void ShuffleNetV2::thread_co131_cast1_fu_30785_p1() {
    co131_cast1_fu_30785_p1 = esl_zext<7,5>(co130_reg_12242.read());
}

void ShuffleNetV2::thread_co131_cast_fu_30781_p1() {
    co131_cast_fu_30781_p1 = esl_zext<10,5>(co130_reg_12242.read());
}

void ShuffleNetV2::thread_co134_cast314_cast_fu_31122_p1() {
    co134_cast314_cast_fu_31122_p1 = esl_zext<10,5>(co132_reg_12308.read());
}

void ShuffleNetV2::thread_co137_cast_fu_31719_p1() {
    co137_cast_fu_31719_p1 = esl_zext<7,6>(co136_reg_12396.read());
}

void ShuffleNetV2::thread_co139_cast299_cast_fu_31900_p1() {
    co139_cast299_cast_fu_31900_p1 = esl_zext<9,5>(co138_reg_12429.read());
}

void ShuffleNetV2::thread_co141_cast1_fu_32352_p1() {
    co141_cast1_fu_32352_p1 = esl_zext<7,5>(co140_reg_12484.read());
}

void ShuffleNetV2::thread_co141_cast_fu_32348_p1() {
    co141_cast_fu_32348_p1 = esl_zext<10,5>(co140_reg_12484.read());
}

void ShuffleNetV2::thread_co144_cast_fu_32689_p1() {
    co144_cast_fu_32689_p1 = esl_zext<12,5>(co142_reg_12550.read());
}

void ShuffleNetV2::thread_co147_cast_fu_33256_p1() {
    co147_cast_fu_33256_p1 = esl_zext<12,5>(co146_reg_12638.read());
}

void ShuffleNetV2::thread_co149_cast1_fu_33688_p1() {
    co149_cast1_fu_33688_p1 = esl_zext<8,5>(co148_reg_12693.read());
}

void ShuffleNetV2::thread_co149_cast_fu_33684_p1() {
    co149_cast_fu_33684_p1 = esl_zext<10,5>(co148_reg_12693.read());
}

void ShuffleNetV2::thread_co152_cast_fu_34025_p1() {
    co152_cast_fu_34025_p1 = esl_zext<12,5>(co150_reg_12759.read());
}

void ShuffleNetV2::thread_co153_cast1_fu_34461_p1() {
    co153_cast1_fu_34461_p1 = esl_zext<8,5>(co152_reg_12814.read());
}

void ShuffleNetV2::thread_co153_cast_fu_34457_p1() {
    co153_cast_fu_34457_p1 = esl_zext<10,5>(co152_reg_12814.read());
}

void ShuffleNetV2::thread_co156_cast_fu_34794_p1() {
    co156_cast_fu_34794_p1 = esl_zext<12,5>(co154_reg_12880.read());
}

void ShuffleNetV2::thread_co157_cast_fu_35252_p1() {
    co157_cast_fu_35252_p1 = esl_zext<8,7>(co156_reg_12935.read());
}

void ShuffleNetV2::thread_co159_cast_fu_35429_p1() {
    co159_cast_fu_35429_p1 = esl_zext<12,5>(co158_reg_12968.read());
}

void ShuffleNetV2::thread_co161_cast1_fu_35857_p1() {
    co161_cast1_fu_35857_p1 = esl_zext<8,5>(co160_reg_13023.read());
}

void ShuffleNetV2::thread_co161_cast_fu_35853_p1() {
    co161_cast_fu_35853_p1 = esl_zext<10,5>(co160_reg_13023.read());
}

void ShuffleNetV2::thread_co164_cast179_cast_fu_36190_p1() {
    co164_cast179_cast_fu_36190_p1 = esl_zext<11,5>(co162_reg_13089.read());
}

void ShuffleNetV2::thread_co167_cast_fu_36779_p1() {
    co167_cast_fu_36779_p1 = esl_zext<8,7>(co166_reg_13177.read());
}

void ShuffleNetV2::thread_co169_cast_fu_36956_p1() {
    co169_cast_fu_36956_p1 = esl_zext<13,5>(co168_reg_13210.read());
}

void ShuffleNetV2::thread_co16_cast_fu_16292_p1() {
    co16_cast_fu_16292_p1 = esl_zext<7,5>(co16_reg_9837.read());
}

void ShuffleNetV2::thread_co171_cast151_cast_fu_37380_p1() {
    co171_cast151_cast_fu_37380_p1 = esl_zext<9,5>(co170_reg_13265.read());
}

void ShuffleNetV2::thread_co171_cast_fu_37384_p1() {
    co171_cast_fu_37384_p1 = esl_zext<8,5>(co170_reg_13265.read());
}

void ShuffleNetV2::thread_co174_cast_fu_37729_p1() {
    co174_cast_fu_37729_p1 = esl_zext<13,5>(co172_reg_13331.read());
}

void ShuffleNetV2::thread_co177_cast_fu_38310_p1() {
    co177_cast_fu_38310_p1 = esl_zext<8,7>(co176_reg_13419.read());
}

void ShuffleNetV2::thread_co179_cast_fu_38487_p1() {
    co179_cast_fu_38487_p1 = esl_zext<13,5>(co178_reg_13452.read());
}

void ShuffleNetV2::thread_co181_cast1_fu_38915_p1() {
    co181_cast1_fu_38915_p1 = esl_zext<8,5>(co180_reg_13507.read());
}

void ShuffleNetV2::thread_co181_cast_fu_38911_p1() {
    co181_cast_fu_38911_p1 = esl_zext<11,5>(co180_reg_13507.read());
}

void ShuffleNetV2::thread_co184_cast_fu_39252_p1() {
    co184_cast_fu_39252_p1 = esl_zext<13,5>(co182_reg_13573.read());
}

void ShuffleNetV2::thread_co19_cast_fu_16456_p1() {
    co19_cast_fu_16456_p1 = esl_zext<6,5>(co19_reg_9871.read());
}

void ShuffleNetV2::thread_co22_cast_fu_16629_p1() {
    co22_cast_fu_16629_p1 = esl_zext<7,5>(co22_reg_9904.read());
}

void ShuffleNetV2::thread_co25_cast1_cast_fu_16767_p1() {
    co25_cast1_cast_fu_16767_p1 = esl_zext<8,5>(co25_reg_9938.read());
}

void ShuffleNetV2::thread_co25_cast_fu_16763_p1() {
    co25_cast_fu_16763_p1 = esl_zext<7,5>(co25_reg_9938.read());
}

void ShuffleNetV2::thread_co35_cast_fu_17262_p1() {
    co35_cast_fu_17262_p1 = esl_zext<6,5>(co35_reg_10049.read());
}

void ShuffleNetV2::thread_co38_cast_fu_17435_p1() {
    co38_cast_fu_17435_p1 = esl_zext<8,5>(co38_reg_10082.read());
}

void ShuffleNetV2::thread_co41_cast1_cast_fu_17573_p1() {
    co41_cast1_cast_fu_17573_p1 = esl_zext<8,5>(co41_reg_10116.read());
}

void ShuffleNetV2::thread_co41_cast_fu_17569_p1() {
    co41_cast_fu_17569_p1 = esl_zext<7,5>(co41_reg_10116.read());
}

void ShuffleNetV2::thread_co44_cast_fu_17767_p1() {
    co44_cast_fu_17767_p1 = esl_zext<8,5>(co44_reg_10160.read());
}

void ShuffleNetV2::thread_co47_cast_fu_18050_p1() {
    co47_cast_fu_18050_p1 = esl_zext<6,5>(co47_reg_10227.read());
}

void ShuffleNetV2::thread_co49_cast_fu_18223_p1() {
    co49_cast_fu_18223_p1 = esl_zext<8,5>(co49_reg_10260.read());
}

void ShuffleNetV2::thread_co52_cast_cast_fu_18369_p1() {
    co52_cast_cast_fu_18369_p1 = esl_zext<8,5>(co52_reg_10294.read());
}

void ShuffleNetV2::thread_co57_cast_fu_18834_p1() {
    co57_cast_fu_18834_p1 = esl_zext<9,5>(co57_reg_10405.read());
}

void ShuffleNetV2::thread_co59_cast1_fu_19274_p1() {
    co59_cast1_fu_19274_p1 = esl_zext<7,5>(co59_reg_10460.read());
}

void ShuffleNetV2::thread_co59_cast_fu_19270_p1() {
    co59_cast_fu_19270_p1 = esl_zext<8,5>(co59_reg_10460.read());
}

void ShuffleNetV2::thread_co5_cast_cast_fu_15807_p1() {
    co5_cast_cast_fu_15807_p1 = esl_zext<8,5>(co5_reg_9715.read());
}

void ShuffleNetV2::thread_co62_cast_fu_19615_p1() {
    co62_cast_fu_19615_p1 = esl_zext<9,5>(co61_reg_10526.read());
}

void ShuffleNetV2::thread_co63_cast1_fu_20059_p1() {
    co63_cast1_fu_20059_p1 = esl_zext<7,5>(co63_reg_10581.read());
}

void ShuffleNetV2::thread_co63_cast_fu_20055_p1() {
    co63_cast_fu_20055_p1 = esl_zext<8,5>(co63_reg_10581.read());
}

void ShuffleNetV2::thread_co66_cast_fu_20392_p1() {
    co66_cast_fu_20392_p1 = esl_zext<10,5>(co65_reg_10647.read());
}

void ShuffleNetV2::thread_co67_cast_fu_20862_p1() {
    co67_cast_fu_20862_p1 = esl_zext<7,6>(co67_reg_10702.read());
}

void ShuffleNetV2::thread_co69_cast_fu_21043_p1() {
    co69_cast_fu_21043_p1 = esl_zext<10,5>(co68_reg_10735.read());
}

void ShuffleNetV2::thread_co71_cast1_fu_21483_p1() {
    co71_cast1_fu_21483_p1 = esl_zext<7,5>(co70_reg_10790.read());
}

void ShuffleNetV2::thread_co71_cast_fu_21479_p1() {
    co71_cast_fu_21479_p1 = esl_zext<9,5>(co70_reg_10790.read());
}

void ShuffleNetV2::thread_co74_cast_fu_21824_p1() {
    co74_cast_fu_21824_p1 = esl_zext<10,5>(co72_reg_10856.read());
}

void ShuffleNetV2::thread_co77_cast_fu_22409_p1() {
    co77_cast_fu_22409_p1 = esl_zext<7,6>(co76_reg_10944.read());
}

void ShuffleNetV2::thread_co79_cast_fu_22590_p1() {
    co79_cast_fu_22590_p1 = esl_zext<10,5>(co78_reg_10977.read());
}

void ShuffleNetV2::thread_co81_cast1_fu_23030_p1() {
    co81_cast1_fu_23030_p1 = esl_zext<7,5>(co80_reg_11032.read());
}

void ShuffleNetV2::thread_co81_cast_fu_23026_p1() {
    co81_cast_fu_23026_p1 = esl_zext<9,5>(co80_reg_11032.read());
}

void ShuffleNetV2::thread_co84_cast_fu_23371_p1() {
    co84_cast_fu_23371_p1 = esl_zext<10,5>(co82_reg_11098.read());
}

void ShuffleNetV2::thread_co87_cast_fu_23960_p1() {
    co87_cast_fu_23960_p1 = esl_zext<7,6>(co86_reg_11186.read());
}

void ShuffleNetV2::thread_co89_cast489_cast_fu_24141_p1() {
    co89_cast489_cast_fu_24141_p1 = esl_zext<9,5>(co88_reg_11219.read());
}

void ShuffleNetV2::thread_co91_cast1_fu_24593_p1() {
    co91_cast1_fu_24593_p1 = esl_zext<7,5>(co90_reg_11274.read());
}

void ShuffleNetV2::thread_co91_cast_fu_24589_p1() {
    co91_cast_fu_24589_p1 = esl_zext<9,5>(co90_reg_11274.read());
}

void ShuffleNetV2::thread_co94_cast_fu_24930_p1() {
    co94_cast_fu_24930_p1 = esl_zext<11,5>(co92_reg_11340.read());
}

void ShuffleNetV2::thread_co97_cast_fu_25519_p1() {
    co97_cast_fu_25519_p1 = esl_zext<7,6>(co96_reg_11428.read());
}

void ShuffleNetV2::thread_co99_cast_fu_25700_p1() {
    co99_cast_fu_25700_p1 = esl_zext<11,5>(co98_reg_11461.read());
}

void ShuffleNetV2::thread_co9_cast_fu_15948_p1() {
    co9_cast_fu_15948_p1 = esl_zext<6,5>(co9_reg_9759.read());
}

void ShuffleNetV2::thread_co_101_fu_26150_p2() {
    co_101_fu_26150_p2 = (!co100_reg_11516.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co100_reg_11516.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_103_fu_26483_p2() {
    co_103_fu_26483_p2 = (!co102_reg_11582.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co102_reg_11582.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_105_fu_26945_p2() {
    co_105_fu_26945_p2 = (!co104_reg_11637.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co104_reg_11637.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_107_fu_27068_p2() {
    co_107_fu_27068_p2 = (!co106_reg_11670.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co106_reg_11670.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_109_fu_27249_p2() {
    co_109_fu_27249_p2 = (!co108_reg_11703.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co108_reg_11703.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_111_fu_27689_p2() {
    co_111_fu_27689_p2 = (!co110_reg_11758.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co110_reg_11758.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_113_fu_28030_p2() {
    co_113_fu_28030_p2 = (!co112_reg_11824.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co112_reg_11824.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_115_fu_28492_p2() {
    co_115_fu_28492_p2 = (!co114_reg_11879.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co114_reg_11879.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_117_fu_28615_p2() {
    co_117_fu_28615_p2 = (!co116_reg_11912.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co116_reg_11912.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_119_fu_28796_p2() {
    co_119_fu_28796_p2 = (!co118_reg_11945.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co118_reg_11945.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_121_fu_29236_p2() {
    co_121_fu_29236_p2 = (!co120_reg_12000.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co120_reg_12000.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_123_fu_29581_p2() {
    co_123_fu_29581_p2 = (!co122_reg_12066.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co122_reg_12066.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_125_fu_30043_p2() {
    co_125_fu_30043_p2 = (!co124_reg_12121.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co124_reg_12121.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_127_fu_30166_p2() {
    co_127_fu_30166_p2 = (!co126_reg_12154.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co126_reg_12154.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_129_fu_30347_p2() {
    co_129_fu_30347_p2 = (!co128_reg_12187.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co128_reg_12187.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_131_fu_30795_p2() {
    co_131_fu_30795_p2 = (!co130_reg_12242.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co130_reg_12242.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_133_fu_31132_p2() {
    co_133_fu_31132_p2 = (!co132_reg_12308.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co132_reg_12308.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_135_fu_31606_p2() {
    co_135_fu_31606_p2 = (!co134_reg_12363.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co134_reg_12363.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_137_fu_31729_p2() {
    co_137_fu_31729_p2 = (!co136_reg_12396.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co136_reg_12396.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_139_fu_31910_p2() {
    co_139_fu_31910_p2 = (!co138_reg_12429.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co138_reg_12429.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_141_fu_32362_p2() {
    co_141_fu_32362_p2 = (!co140_reg_12484.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co140_reg_12484.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_143_fu_32699_p2() {
    co_143_fu_32699_p2 = (!co142_reg_12550.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co142_reg_12550.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_145_fu_33173_p2() {
    co_145_fu_33173_p2 = (!co144_reg_12605.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co144_reg_12605.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_147_fu_33266_p2() {
    co_147_fu_33266_p2 = (!co146_reg_12638.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co146_reg_12638.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_149_fu_33698_p2() {
    co_149_fu_33698_p2 = (!co148_reg_12693.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co148_reg_12693.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_151_fu_34035_p2() {
    co_151_fu_34035_p2 = (!co150_reg_12759.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co150_reg_12759.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_153_fu_34471_p2() {
    co_153_fu_34471_p2 = (!co152_reg_12814.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co152_reg_12814.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_155_fu_34804_p2() {
    co_155_fu_34804_p2 = (!co154_reg_12880.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co154_reg_12880.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_157_fu_35262_p2() {
    co_157_fu_35262_p2 = (!co156_reg_12935.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co156_reg_12935.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_159_fu_35439_p2() {
    co_159_fu_35439_p2 = (!co158_reg_12968.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co158_reg_12968.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_161_fu_35867_p2() {
    co_161_fu_35867_p2 = (!co160_reg_13023.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co160_reg_13023.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_163_fu_36200_p2() {
    co_163_fu_36200_p2 = (!co162_reg_13089.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co162_reg_13089.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_165_fu_36662_p2() {
    co_165_fu_36662_p2 = (!co164_reg_13144.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co164_reg_13144.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_167_fu_36789_p2() {
    co_167_fu_36789_p2 = (!co166_reg_13177.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co166_reg_13177.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_169_fu_36966_p2() {
    co_169_fu_36966_p2 = (!co168_reg_13210.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co168_reg_13210.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_171_fu_37394_p2() {
    co_171_fu_37394_p2 = (!co170_reg_13265.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co170_reg_13265.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_173_fu_37739_p2() {
    co_173_fu_37739_p2 = (!co172_reg_13331.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co172_reg_13331.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_175_fu_38193_p2() {
    co_175_fu_38193_p2 = (!co174_reg_13386.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co174_reg_13386.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_177_fu_38320_p2() {
    co_177_fu_38320_p2 = (!co176_reg_13419.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co176_reg_13419.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_179_fu_38497_p2() {
    co_179_fu_38497_p2 = (!co178_reg_13452.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co178_reg_13452.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_181_fu_38925_p2() {
    co_181_fu_38925_p2 = (!co180_reg_13507.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co180_reg_13507.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_183_fu_39262_p2() {
    co_183_fu_39262_p2 = (!co182_reg_13573.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co182_reg_13573.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_185_fu_39716_p2() {
    co_185_fu_39716_p2 = (!co184_reg_13628.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co184_reg_13628.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_35_fu_15719_p2() {
    co_35_fu_15719_p2 = (!co_reg_9681.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co_reg_9681.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_36_fu_15839_p2() {
    co_36_fu_15839_p2 = (!co5_reg_9715.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co5_reg_9715.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_37_fu_15958_p2() {
    co_37_fu_15958_p2 = (!co9_reg_9759.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co9_reg_9759.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_38_fu_16118_p2() {
    co_38_fu_16118_p2 = (!co12_reg_9793.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co12_reg_9793.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_39_fu_16302_p2() {
    co_39_fu_16302_p2 = (!co16_reg_9837.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co16_reg_9837.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_40_fu_16466_p2() {
    co_40_fu_16466_p2 = (!co19_reg_9871.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co19_reg_9871.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_41_fu_16639_p2() {
    co_41_fu_16639_p2 = (!co22_reg_9904.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co22_reg_9904.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_42_fu_16799_p2() {
    co_42_fu_16799_p2 = (!co25_reg_9938.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co25_reg_9938.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_43_fu_16967_p2() {
    co_43_fu_16967_p2 = (!co29_reg_9982.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co29_reg_9982.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_44_fu_17149_p2() {
    co_44_fu_17149_p2 = (!co32_reg_10016.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co32_reg_10016.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_45_fu_17272_p2() {
    co_45_fu_17272_p2 = (!co35_reg_10049.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co35_reg_10049.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_46_fu_17445_p2() {
    co_46_fu_17445_p2 = (!co38_reg_10082.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co38_reg_10082.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_47_fu_17605_p2() {
    co_47_fu_17605_p2 = (!co41_reg_10116.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co41_reg_10116.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_48_fu_17777_p2() {
    co_48_fu_17777_p2 = (!co44_reg_10160.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co44_reg_10160.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_49_fu_17937_p2() {
    co_49_fu_17937_p2 = (!co46_reg_10194.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co46_reg_10194.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_50_fu_18060_p2() {
    co_50_fu_18060_p2 = (!co47_reg_10227.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co47_reg_10227.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_51_fu_18233_p2() {
    co_51_fu_18233_p2 = (!co49_reg_10260.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co49_reg_10260.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_53_fu_18401_p2() {
    co_53_fu_18401_p2 = (!co52_reg_10294.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co52_reg_10294.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_55_fu_18585_p2() {
    co_55_fu_18585_p2 = (!co54_reg_10338.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co54_reg_10338.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_57_fu_18751_p2() {
    co_57_fu_18751_p2 = (!co56_reg_10372.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co56_reg_10372.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_58_fu_18844_p2() {
    co_58_fu_18844_p2 = (!co57_reg_10405.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co57_reg_10405.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_60_fu_19284_p2() {
    co_60_fu_19284_p2 = (!co59_reg_10460.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co59_reg_10460.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_62_fu_19625_p2() {
    co_62_fu_19625_p2 = (!co61_reg_10526.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co61_reg_10526.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_64_fu_20069_p2() {
    co_64_fu_20069_p2 = (!co63_reg_10581.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co63_reg_10581.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_66_fu_20402_p2() {
    co_66_fu_20402_p2 = (!co65_reg_10647.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co65_reg_10647.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_68_fu_20872_p2() {
    co_68_fu_20872_p2 = (!co67_reg_10702.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co67_reg_10702.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_69_fu_21053_p2() {
    co_69_fu_21053_p2 = (!co68_reg_10735.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co68_reg_10735.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_71_fu_21493_p2() {
    co_71_fu_21493_p2 = (!co70_reg_10790.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co70_reg_10790.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_73_fu_21834_p2() {
    co_73_fu_21834_p2 = (!co72_reg_10856.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co72_reg_10856.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_75_fu_22296_p2() {
    co_75_fu_22296_p2 = (!co74_reg_10911.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co74_reg_10911.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_77_fu_22419_p2() {
    co_77_fu_22419_p2 = (!co76_reg_10944.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co76_reg_10944.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_79_fu_22600_p2() {
    co_79_fu_22600_p2 = (!co78_reg_10977.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co78_reg_10977.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_81_fu_23040_p2() {
    co_81_fu_23040_p2 = (!co80_reg_11032.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co80_reg_11032.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_83_fu_23381_p2() {
    co_83_fu_23381_p2 = (!co82_reg_11098.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co82_reg_11098.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_85_fu_23847_p2() {
    co_85_fu_23847_p2 = (!co84_reg_11153.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co84_reg_11153.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_87_fu_23970_p2() {
    co_87_fu_23970_p2 = (!co86_reg_11186.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co86_reg_11186.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_89_fu_24151_p2() {
    co_89_fu_24151_p2 = (!co88_reg_11219.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co88_reg_11219.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_91_fu_24603_p2() {
    co_91_fu_24603_p2 = (!co90_reg_11274.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co90_reg_11274.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_93_fu_24940_p2() {
    co_93_fu_24940_p2 = (!co92_reg_11340.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co92_reg_11340.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_95_fu_25406_p2() {
    co_95_fu_25406_p2 = (!co94_reg_11395.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co94_reg_11395.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_97_fu_25529_p2() {
    co_97_fu_25529_p2 = (!co96_reg_11428.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co96_reg_11428.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_99_fu_25710_p2() {
    co_99_fu_25710_p2 = (!co98_reg_11461.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co98_reg_11461.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_conv1_bias_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_bias_V_address0 =  (sc_lv<5>) (i_cast_reg_40345.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_bias_V_address0 = grp_conv1_p_fu_14110_bias_V_address0.read();
    } else {
        conv1_bias_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_conv1_bias_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_bias_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_bias_V_ce0 = grp_conv1_p_fu_14110_bias_V_ce0.read();
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

void ShuffleNetV2::thread_conv1_output_p_V_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_0_address0 = grp_subconv_3x3_32_strid_fu_14682_input_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_0_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_0_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_0_address0.read();
    } else {
        conv1_output_p_V_0_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_0_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_0_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_0_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_0_ce0.read();
    } else {
        conv1_output_p_V_0_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_0_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_0_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_0_ce1.read();
    } else {
        conv1_output_p_V_0_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_0_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_0_we0.read();
    } else {
        conv1_output_p_V_0_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_10_address0 = grp_subconv_3x3_32_strid_fu_14682_input_10_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_10_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_10_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_10_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_10_address0.read();
    } else {
        conv1_output_p_V_10_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_10_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_10_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_10_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_10_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_10_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_10_ce0.read();
    } else {
        conv1_output_p_V_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_10_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_10_ce1.read();
    } else {
        conv1_output_p_V_10_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_10_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_10_we0.read();
    } else {
        conv1_output_p_V_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_11_address0 = grp_subconv_3x3_32_strid_fu_14682_input_11_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_11_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_11_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_11_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_11_address0.read();
    } else {
        conv1_output_p_V_11_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_11_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_11_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_11_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_11_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_11_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_11_ce0.read();
    } else {
        conv1_output_p_V_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_11_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_11_ce1.read();
    } else {
        conv1_output_p_V_11_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_11_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_11_we0.read();
    } else {
        conv1_output_p_V_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_12_address0 = grp_subconv_3x3_32_strid_fu_14682_input_12_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_12_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_12_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_12_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_12_address0.read();
    } else {
        conv1_output_p_V_12_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_12_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_12_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_12_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_12_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_12_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_12_ce0.read();
    } else {
        conv1_output_p_V_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_12_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_12_ce1.read();
    } else {
        conv1_output_p_V_12_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_12_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_12_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_12_we0.read();
    } else {
        conv1_output_p_V_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_13_address0 = grp_subconv_3x3_32_strid_fu_14682_input_13_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_13_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_13_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_13_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_13_address0.read();
    } else {
        conv1_output_p_V_13_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_13_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_13_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_13_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_13_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_13_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_13_ce0.read();
    } else {
        conv1_output_p_V_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_13_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_13_ce1.read();
    } else {
        conv1_output_p_V_13_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_13_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_13_we0.read();
    } else {
        conv1_output_p_V_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_14_address0 = grp_subconv_3x3_32_strid_fu_14682_input_14_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_14_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_14_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_14_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_14_address0.read();
    } else {
        conv1_output_p_V_14_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_14_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_14_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_14_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_14_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_14_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_14_ce0.read();
    } else {
        conv1_output_p_V_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_14_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_14_ce1.read();
    } else {
        conv1_output_p_V_14_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_14_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_14_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_14_we0.read();
    } else {
        conv1_output_p_V_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_15_address0 = grp_subconv_3x3_32_strid_fu_14682_input_15_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_15_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_15_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_15_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_15_address0.read();
    } else {
        conv1_output_p_V_15_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_15_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_15_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_15_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_15_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_15_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_15_ce0.read();
    } else {
        conv1_output_p_V_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_15_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_15_ce1.read();
    } else {
        conv1_output_p_V_15_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_15_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_15_we0.read();
    } else {
        conv1_output_p_V_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_16_address0 = grp_subconv_3x3_32_strid_fu_14682_input_16_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_16_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_16_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_16_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_16_address0.read();
    } else {
        conv1_output_p_V_16_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_16_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_16_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_16_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_16_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_16_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_16_ce0.read();
    } else {
        conv1_output_p_V_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_16_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_16_ce1.read();
    } else {
        conv1_output_p_V_16_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_16_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_16_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_16_we0.read();
    } else {
        conv1_output_p_V_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_17_address0 = grp_subconv_3x3_32_strid_fu_14682_input_17_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_17_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_17_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_17_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_17_address0.read();
    } else {
        conv1_output_p_V_17_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_17_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_17_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_17_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_17_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_17_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_17_ce0.read();
    } else {
        conv1_output_p_V_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_17_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_17_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_17_ce1.read();
    } else {
        conv1_output_p_V_17_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_17_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_17_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_17_we0.read();
    } else {
        conv1_output_p_V_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_18_address0 = grp_subconv_3x3_32_strid_fu_14682_input_18_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_18_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_18_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_18_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_18_address0.read();
    } else {
        conv1_output_p_V_18_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_18_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_18_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_18_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_18_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_18_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_18_ce0.read();
    } else {
        conv1_output_p_V_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_18_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_18_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_18_ce1.read();
    } else {
        conv1_output_p_V_18_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_18_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_18_we0.read();
    } else {
        conv1_output_p_V_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_19_address0 = grp_subconv_3x3_32_strid_fu_14682_input_19_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_19_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_19_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_19_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_19_address0.read();
    } else {
        conv1_output_p_V_19_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_19_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_19_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_19_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_19_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_19_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_19_ce0.read();
    } else {
        conv1_output_p_V_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_19_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_19_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_19_ce1.read();
    } else {
        conv1_output_p_V_19_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_19_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_19_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_19_we0.read();
    } else {
        conv1_output_p_V_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_1_address0 = grp_subconv_3x3_32_strid_fu_14682_input_1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_1_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_1_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_1_address0.read();
    } else {
        conv1_output_p_V_1_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_1_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_1_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_1_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_1_ce0.read();
    } else {
        conv1_output_p_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_1_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_1_ce1.read();
    } else {
        conv1_output_p_V_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_1_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_1_we0.read();
    } else {
        conv1_output_p_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_20_address0 = grp_subconv_3x3_32_strid_fu_14682_input_20_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_20_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_20_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_20_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_20_address0.read();
    } else {
        conv1_output_p_V_20_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_20_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_20_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_20_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_20_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_20_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_20_ce0.read();
    } else {
        conv1_output_p_V_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_20_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_20_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_20_ce1.read();
    } else {
        conv1_output_p_V_20_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_20_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_20_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_20_we0.read();
    } else {
        conv1_output_p_V_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_21_address0 = grp_subconv_3x3_32_strid_fu_14682_input_21_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_21_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_21_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_21_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_21_address0.read();
    } else {
        conv1_output_p_V_21_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_21_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_21_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_21_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_21_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_21_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_21_ce0.read();
    } else {
        conv1_output_p_V_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_21_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_21_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_21_ce1.read();
    } else {
        conv1_output_p_V_21_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_21_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_21_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_21_we0.read();
    } else {
        conv1_output_p_V_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_22_address0 = grp_subconv_3x3_32_strid_fu_14682_input_22_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_22_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_22_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_22_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_22_address0.read();
    } else {
        conv1_output_p_V_22_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_22_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_22_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_22_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_22_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_22_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_22_ce0.read();
    } else {
        conv1_output_p_V_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_22_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_22_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_22_ce1.read();
    } else {
        conv1_output_p_V_22_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_22_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_22_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_22_we0.read();
    } else {
        conv1_output_p_V_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_23_address0 = grp_subconv_3x3_32_strid_fu_14682_input_23_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_23_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_23_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_23_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_23_address0.read();
    } else {
        conv1_output_p_V_23_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_23_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_23_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_23_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_23_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_23_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_23_ce0.read();
    } else {
        conv1_output_p_V_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_23_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_23_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_23_ce1.read();
    } else {
        conv1_output_p_V_23_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_23_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_23_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_23_we0.read();
    } else {
        conv1_output_p_V_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_2_address0 = grp_subconv_3x3_32_strid_fu_14682_input_2_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_2_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_2_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_2_address0.read();
    } else {
        conv1_output_p_V_2_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_2_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_2_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_2_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_2_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_2_ce0.read();
    } else {
        conv1_output_p_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_2_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_2_ce1.read();
    } else {
        conv1_output_p_V_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_2_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_2_we0.read();
    } else {
        conv1_output_p_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_3_address0 = grp_subconv_3x3_32_strid_fu_14682_input_3_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_3_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_3_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_3_address0.read();
    } else {
        conv1_output_p_V_3_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_3_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_3_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_3_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_3_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_3_ce0.read();
    } else {
        conv1_output_p_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_3_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_3_ce1.read();
    } else {
        conv1_output_p_V_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_3_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_3_we0.read();
    } else {
        conv1_output_p_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_4_address0 = grp_subconv_3x3_32_strid_fu_14682_input_4_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_4_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_4_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_4_address0.read();
    } else {
        conv1_output_p_V_4_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_4_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_4_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_4_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_4_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_4_ce0.read();
    } else {
        conv1_output_p_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_4_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_4_ce1.read();
    } else {
        conv1_output_p_V_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_4_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_4_we0.read();
    } else {
        conv1_output_p_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_5_address0 = grp_subconv_3x3_32_strid_fu_14682_input_5_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_5_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_5_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_5_address0.read();
    } else {
        conv1_output_p_V_5_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_5_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_5_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_5_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_5_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_5_ce0.read();
    } else {
        conv1_output_p_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_5_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_5_ce1.read();
    } else {
        conv1_output_p_V_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_5_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_5_we0.read();
    } else {
        conv1_output_p_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_6_address0 = grp_subconv_3x3_32_strid_fu_14682_input_6_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_6_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_6_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_6_address0.read();
    } else {
        conv1_output_p_V_6_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_6_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_6_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_6_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_6_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_6_ce0.read();
    } else {
        conv1_output_p_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_6_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_6_ce1.read();
    } else {
        conv1_output_p_V_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_6_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_6_we0.read();
    } else {
        conv1_output_p_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_7_address0 = grp_subconv_3x3_32_strid_fu_14682_input_7_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_7_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_7_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_7_address0.read();
    } else {
        conv1_output_p_V_7_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_7_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_7_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_7_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_7_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_7_ce0.read();
    } else {
        conv1_output_p_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_7_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_7_ce1.read();
    } else {
        conv1_output_p_V_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_7_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_7_we0.read();
    } else {
        conv1_output_p_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_8_address0 = grp_subconv_3x3_32_strid_fu_14682_input_8_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_8_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_8_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_8_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_8_address0.read();
    } else {
        conv1_output_p_V_8_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_8_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_8_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_8_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_8_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_8_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_8_ce0.read();
    } else {
        conv1_output_p_V_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_8_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_8_ce1.read();
    } else {
        conv1_output_p_V_8_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_8_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_8_we0.read();
    } else {
        conv1_output_p_V_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_9_address0 = grp_subconv_3x3_32_strid_fu_14682_input_9_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_9_address0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_9_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_9_address0 = grp_conv1_p_fu_14110_conv1_output_p_V_9_address0.read();
    } else {
        conv1_output_p_V_9_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_9_ce0 = grp_subconv_3x3_32_strid_fu_14682_input_9_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_9_ce0 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_9_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_9_ce0 = grp_conv1_p_fu_14110_conv1_output_p_V_9_ce0.read();
    } else {
        conv1_output_p_V_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_9_ce1 = grp_subconv_1x1_32_p_fu_14169_conv1_output_p_V_9_ce1.read();
    } else {
        conv1_output_p_V_9_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_9_we0 = grp_conv1_p_fu_14110_conv1_output_p_V_9_we0.read();
    } else {
        conv1_output_p_V_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_bias_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        conv_last_bias_V_address0 =  (sc_lv<9>) (i1_cast_reg_40364.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_bias_V_address0 = grp_conv_last_fu_14423_bias_V_address0.read();
    } else {
        conv_last_bias_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_bias_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        conv_last_bias_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_bias_V_ce0 = grp_conv_last_fu_14423_bias_V_ce0.read();
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

void ShuffleNetV2::thread_conv_last_output_V_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_0_address0 = grp_avgpool_fu_15338_conv_last_output_V_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_0_address0 = grp_conv_last_fu_14423_conv_last_output_V_0_address0.read();
    } else {
        conv_last_output_V_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_0_ce0 = grp_avgpool_fu_15338_conv_last_output_V_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_0_ce0 = grp_conv_last_fu_14423_conv_last_output_V_0_ce0.read();
    } else {
        conv_last_output_V_0_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_0_we0 = grp_conv_last_fu_14423_conv_last_output_V_0_we0.read();
    } else {
        conv_last_output_V_0_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_1_address0 = grp_avgpool_fu_15338_conv_last_output_V_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_1_address0 = grp_conv_last_fu_14423_conv_last_output_V_1_address0.read();
    } else {
        conv_last_output_V_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_1_ce0 = grp_avgpool_fu_15338_conv_last_output_V_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_1_ce0 = grp_conv_last_fu_14423_conv_last_output_V_1_ce0.read();
    } else {
        conv_last_output_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_1_we0 = grp_conv_last_fu_14423_conv_last_output_V_1_we0.read();
    } else {
        conv_last_output_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_2_address0 = grp_avgpool_fu_15338_conv_last_output_V_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_2_address0 = grp_conv_last_fu_14423_conv_last_output_V_2_address0.read();
    } else {
        conv_last_output_V_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_2_ce0 = grp_avgpool_fu_15338_conv_last_output_V_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_2_ce0 = grp_conv_last_fu_14423_conv_last_output_V_2_ce0.read();
    } else {
        conv_last_output_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_2_we0 = grp_conv_last_fu_14423_conv_last_output_V_2_we0.read();
    } else {
        conv_last_output_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_3_address0 = grp_avgpool_fu_15338_conv_last_output_V_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_3_address0 = grp_conv_last_fu_14423_conv_last_output_V_3_address0.read();
    } else {
        conv_last_output_V_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_3_ce0 = grp_avgpool_fu_15338_conv_last_output_V_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_3_ce0 = grp_conv_last_fu_14423_conv_last_output_V_3_ce0.read();
    } else {
        conv_last_output_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_3_we0 = grp_conv_last_fu_14423_conv_last_output_V_3_we0.read();
    } else {
        conv_last_output_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_4_address0 = grp_avgpool_fu_15338_conv_last_output_V_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_4_address0 = grp_conv_last_fu_14423_conv_last_output_V_4_address0.read();
    } else {
        conv_last_output_V_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_4_ce0 = grp_avgpool_fu_15338_conv_last_output_V_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_4_ce0 = grp_conv_last_fu_14423_conv_last_output_V_4_ce0.read();
    } else {
        conv_last_output_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_4_we0 = grp_conv_last_fu_14423_conv_last_output_V_4_we0.read();
    } else {
        conv_last_output_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_5_address0 = grp_avgpool_fu_15338_conv_last_output_V_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_5_address0 = grp_conv_last_fu_14423_conv_last_output_V_5_address0.read();
    } else {
        conv_last_output_V_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_5_ce0 = grp_avgpool_fu_15338_conv_last_output_V_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_5_ce0 = grp_conv_last_fu_14423_conv_last_output_V_5_ce0.read();
    } else {
        conv_last_output_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_5_we0 = grp_conv_last_fu_14423_conv_last_output_V_5_we0.read();
    } else {
        conv_last_output_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_6_address0 = grp_avgpool_fu_15338_conv_last_output_V_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_6_address0 = grp_conv_last_fu_14423_conv_last_output_V_6_address0.read();
    } else {
        conv_last_output_V_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_6_ce0 = grp_avgpool_fu_15338_conv_last_output_V_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_6_ce0 = grp_conv_last_fu_14423_conv_last_output_V_6_ce0.read();
    } else {
        conv_last_output_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_6_we0 = grp_conv_last_fu_14423_conv_last_output_V_6_we0.read();
    } else {
        conv_last_output_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_7_address0 = grp_avgpool_fu_15338_conv_last_output_V_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_7_address0 = grp_conv_last_fu_14423_conv_last_output_V_7_address0.read();
    } else {
        conv_last_output_V_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_7_ce0 = grp_avgpool_fu_15338_conv_last_output_V_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_7_ce0 = grp_conv_last_fu_14423_conv_last_output_V_7_ce0.read();
    } else {
        conv_last_output_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_7_we0 = grp_conv_last_fu_14423_conv_last_output_V_7_we0.read();
    } else {
        conv_last_output_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_exitcond100_fu_17396_p2() {
    exitcond100_fu_17396_p2 = (!w37_reg_10071.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w37_reg_10071.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond101_fu_17599_p2() {
    exitcond101_fu_17599_p2 = (!co41_reg_10116.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co41_reg_10116.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond102_fu_17755_p2() {
    exitcond102_fu_17755_p2 = (!i25_reg_10149.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i25_reg_10149.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond103_fu_17702_p2() {
    exitcond103_fu_17702_p2 = (!w42_reg_10127.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w42_reg_10127.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond104_fu_17771_p2() {
    exitcond104_fu_17771_p2 = (!co44_reg_10160.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co44_reg_10160.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond105_fu_17739_p2() {
    exitcond105_fu_17739_p2 = (!h43_reg_10138.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h43_reg_10138.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond106_fu_17889_p2() {
    exitcond106_fu_17889_p2 = (!i27_reg_10183.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i27_reg_10183.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond107_fu_17873_p2() {
    exitcond107_fu_17873_p2 = (!ci27_reg_10172.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci27_reg_10172.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond108_fu_17931_p2() {
    exitcond108_fu_17931_p2 = (!co46_reg_10194.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co46_reg_10194.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond109_fu_18054_p2() {
    exitcond109_fu_18054_p2 = (!co47_reg_10227.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co47_reg_10227.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond110_fu_17943_p2() {
    exitcond110_fu_17943_p2 = (!h45_reg_10205.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h45_reg_10205.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond111_fu_18227_p2() {
    exitcond111_fu_18227_p2 = (!co49_reg_10260.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co49_reg_10260.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond112_fu_18102_p2() {
    exitcond112_fu_18102_p2 = (!h47_reg_10238.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h47_reg_10238.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond113_fu_17994_p2() {
    exitcond113_fu_17994_p2 = (!w50_reg_10216.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w50_reg_10216.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond114_fu_18334_p2() {
    exitcond114_fu_18334_p2 = (!tmp_2316_reg_10283.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2316_reg_10283.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond115_fu_18318_p2() {
    exitcond115_fu_18318_p2 = (!ci29_reg_10272.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci29_reg_10272.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond116_fu_18184_p2() {
    exitcond116_fu_18184_p2 = (!w53_reg_10249.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w53_reg_10249.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond117_fu_18395_p2() {
    exitcond117_fu_18395_p2 = (!co52_reg_10294.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co52_reg_10294.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond118_fu_18567_p2() {
    exitcond118_fu_18567_p2 = (!i30_reg_10327.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i30_reg_10327.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond119_fu_18514_p2() {
    exitcond119_fu_18514_p2 = (!w55_reg_10305.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w55_reg_10305.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond120_fu_18579_p2() {
    exitcond120_fu_18579_p2 = (!co54_reg_10338.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co54_reg_10338.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond121_fu_18551_p2() {
    exitcond121_fu_18551_p2 = (!h49_reg_10316.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h49_reg_10316.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond122_fu_18703_p2() {
    exitcond122_fu_18703_p2 = (!i32_reg_10361.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i32_reg_10361.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond123_fu_18687_p2() {
    exitcond123_fu_18687_p2 = (!ci31_reg_10350.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci31_reg_10350.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond124_fu_18745_p2() {
    exitcond124_fu_18745_p2 = (!co56_reg_10372.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co56_reg_10372.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond125_fu_18838_p2() {
    exitcond125_fu_18838_p2 = (!co57_reg_10405.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co57_reg_10405.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond126_fu_18757_p2() {
    exitcond126_fu_18757_p2 = (!h51_reg_10383.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h51_reg_10383.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond127_fu_19174_p2() {
    exitcond127_fu_19174_p2 = (!i34_reg_10438.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i34_reg_10438.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond128_fu_18906_p2() {
    exitcond128_fu_18906_p2 = (!ci33_reg_10416.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci33_reg_10416.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond129_fu_18808_p2() {
    exitcond129_fu_18808_p2 = (!w57_reg_10394.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w57_reg_10394.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond130_fu_19278_p2() {
    exitcond130_fu_19278_p2 = (!co59_reg_10460.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co59_reg_10460.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond131_fu_19186_p2() {
    exitcond131_fu_19186_p2 = (!k_reg_10449.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k_reg_10449.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond132_fu_18927_p2() {
    exitcond132_fu_18927_p2 = (!i36_reg_10427.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i36_reg_10427.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond133_fu_19515_p2() {
    exitcond133_fu_19515_p2 = (!i37_reg_10504.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i37_reg_10504.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond134_fu_19298_p2() {
    exitcond134_fu_19298_p2 = (!w59_reg_10471.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w59_reg_10471.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond135_fu_19619_p2() {
    exitcond135_fu_19619_p2 = (!co61_reg_10526.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co61_reg_10526.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond136_fu_19527_p2() {
    exitcond136_fu_19527_p2 = (!k8_reg_10515.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k8_reg_10515.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond137_fu_19318_p2() {
    exitcond137_fu_19318_p2 = (!h53_reg_10482.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h53_reg_10482.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond138_fu_19955_p2() {
    exitcond138_fu_19955_p2 = (!i39_reg_10559.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i39_reg_10559.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond139_fu_19687_p2() {
    exitcond139_fu_19687_p2 = (!ci35_reg_10537.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci35_reg_10537.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond140_fu_19330_p2() {
    exitcond140_fu_19330_p2 = (!i41_reg_10493.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i41_reg_10493.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond141_fu_20063_p2() {
    exitcond141_fu_20063_p2 = (!co63_reg_10581.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co63_reg_10581.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond142_fu_19967_p2() {
    exitcond142_fu_19967_p2 = (!k9_reg_10570.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k9_reg_10570.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond143_fu_19708_p2() {
    exitcond143_fu_19708_p2 = (!i43_reg_10548.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i43_reg_10548.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond144_fu_20296_p2() {
    exitcond144_fu_20296_p2 = (!i44_reg_10625.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i44_reg_10625.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond145_fu_20083_p2() {
    exitcond145_fu_20083_p2 = (!w61_reg_10592.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w61_reg_10592.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond146_fu_20396_p2() {
    exitcond146_fu_20396_p2 = (!co65_reg_10647.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co65_reg_10647.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond147_fu_20308_p2() {
    exitcond147_fu_20308_p2 = (!k10_reg_10636.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k10_reg_10636.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond148_fu_20103_p2() {
    exitcond148_fu_20103_p2 = (!h55_reg_10603.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h55_reg_10603.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond149_fu_20736_p2() {
    exitcond149_fu_20736_p2 = (!i46_reg_10680.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i46_reg_10680.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond150_fu_20464_p2() {
    exitcond150_fu_20464_p2 = (!ci37_reg_10658.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci37_reg_10658.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond151_fu_20115_p2() {
    exitcond151_fu_20115_p2 = (!i48_reg_10614.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i48_reg_10614.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond152_fu_20866_p2() {
    exitcond152_fu_20866_p2 = (!co67_reg_10702.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co67_reg_10702.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond153_fu_20748_p2() {
    exitcond153_fu_20748_p2 = (!k12_reg_10691.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k12_reg_10691.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond154_fu_20485_p2() {
    exitcond154_fu_20485_p2 = (!i50_reg_10669.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i50_reg_10669.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond155_fu_21047_p2() {
    exitcond155_fu_21047_p2 = (!co68_reg_10735.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co68_reg_10735.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond156_fu_20914_p2() {
    exitcond156_fu_20914_p2 = (!h57_reg_10713.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h57_reg_10713.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond157_fu_21383_p2() {
    exitcond157_fu_21383_p2 = (!i52_reg_10768.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i52_reg_10768.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond158_fu_21115_p2() {
    exitcond158_fu_21115_p2 = (!ci39_reg_10746.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci39_reg_10746.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond159_fu_21004_p2() {
    exitcond159_fu_21004_p2 = (!w63_reg_10724.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w63_reg_10724.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond160_fu_21487_p2() {
    exitcond160_fu_21487_p2 = (!co70_reg_10790.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co70_reg_10790.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond161_fu_21395_p2() {
    exitcond161_fu_21395_p2 = (!k14_reg_10779.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k14_reg_10779.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond162_fu_21136_p2() {
    exitcond162_fu_21136_p2 = (!i54_reg_10757.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i54_reg_10757.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond163_fu_21728_p2() {
    exitcond163_fu_21728_p2 = (!i55_reg_10834.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i55_reg_10834.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond164_fu_21507_p2() {
    exitcond164_fu_21507_p2 = (!w65_reg_10801.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w65_reg_10801.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond165_fu_21828_p2() {
    exitcond165_fu_21828_p2 = (!co72_reg_10856.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co72_reg_10856.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond166_fu_21740_p2() {
    exitcond166_fu_21740_p2 = (!k16_reg_10845.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k16_reg_10845.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond167_fu_21527_p2() {
    exitcond167_fu_21527_p2 = (!h59_reg_10812.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h59_reg_10812.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond168_fu_22164_p2() {
    exitcond168_fu_22164_p2 = (!i57_reg_10889.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i57_reg_10889.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond169_fu_21896_p2() {
    exitcond169_fu_21896_p2 = (!ci41_reg_10867.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci41_reg_10867.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond170_fu_21539_p2() {
    exitcond170_fu_21539_p2 = (!i59_reg_10823.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i59_reg_10823.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond171_fu_22290_p2() {
    exitcond171_fu_22290_p2 = (!co74_reg_10911.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co74_reg_10911.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond172_fu_22176_p2() {
    exitcond172_fu_22176_p2 = (!k18_reg_10900.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k18_reg_10900.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond173_fu_21917_p2() {
    exitcond173_fu_21917_p2 = (!i61_reg_10878.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i61_reg_10878.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond174_fu_22413_p2() {
    exitcond174_fu_22413_p2 = (!co76_reg_10944.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co76_reg_10944.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond175_fu_22302_p2() {
    exitcond175_fu_22302_p2 = (!h61_reg_10922.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h61_reg_10922.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond176_fu_22594_p2() {
    exitcond176_fu_22594_p2 = (!co78_reg_10977.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co78_reg_10977.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond177_fu_22461_p2() {
    exitcond177_fu_22461_p2 = (!h63_reg_10955.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h63_reg_10955.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond178_fu_22353_p2() {
    exitcond178_fu_22353_p2 = (!w67_reg_10933.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w67_reg_10933.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond179_fu_22930_p2() {
    exitcond179_fu_22930_p2 = (!i63_reg_11010.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i63_reg_11010.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond180_fu_22662_p2() {
    exitcond180_fu_22662_p2 = (!ci43_reg_10988.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci43_reg_10988.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond181_fu_22551_p2() {
    exitcond181_fu_22551_p2 = (!w69_reg_10966.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w69_reg_10966.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond182_fu_23034_p2() {
    exitcond182_fu_23034_p2 = (!co80_reg_11032.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co80_reg_11032.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond183_fu_22942_p2() {
    exitcond183_fu_22942_p2 = (!k20_reg_11021.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k20_reg_11021.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond184_fu_22683_p2() {
    exitcond184_fu_22683_p2 = (!i65_reg_10999.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i65_reg_10999.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond185_fu_23271_p2() {
    exitcond185_fu_23271_p2 = (!i66_reg_11076.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i66_reg_11076.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond186_fu_23054_p2() {
    exitcond186_fu_23054_p2 = (!w71_reg_11043.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w71_reg_11043.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond187_fu_23375_p2() {
    exitcond187_fu_23375_p2 = (!co82_reg_11098.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co82_reg_11098.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond188_fu_23283_p2() {
    exitcond188_fu_23283_p2 = (!k22_reg_11087.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k22_reg_11087.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond189_fu_23074_p2() {
    exitcond189_fu_23074_p2 = (!h65_reg_11054.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h65_reg_11054.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond190_fu_23711_p2() {
    exitcond190_fu_23711_p2 = (!i68_reg_11131.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i68_reg_11131.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond191_fu_23443_p2() {
    exitcond191_fu_23443_p2 = (!ci45_reg_11109.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci45_reg_11109.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond192_fu_23086_p2() {
    exitcond192_fu_23086_p2 = (!i70_reg_11065.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i70_reg_11065.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond193_fu_23841_p2() {
    exitcond193_fu_23841_p2 = (!co84_reg_11153.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co84_reg_11153.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond194_fu_23723_p2() {
    exitcond194_fu_23723_p2 = (!k24_reg_11142.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k24_reg_11142.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond195_fu_23464_p2() {
    exitcond195_fu_23464_p2 = (!i72_reg_11120.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i72_reg_11120.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond196_fu_23964_p2() {
    exitcond196_fu_23964_p2 = (!co86_reg_11186.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co86_reg_11186.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond197_fu_23853_p2() {
    exitcond197_fu_23853_p2 = (!h67_reg_11164.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h67_reg_11164.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond198_fu_24145_p2() {
    exitcond198_fu_24145_p2 = (!co88_reg_11219.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co88_reg_11219.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond199_fu_24012_p2() {
    exitcond199_fu_24012_p2 = (!h69_reg_11197.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h69_reg_11197.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond200_fu_23904_p2() {
    exitcond200_fu_23904_p2 = (!w73_reg_11175.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w73_reg_11175.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond201_fu_24489_p2() {
    exitcond201_fu_24489_p2 = (!i74_reg_11252.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i74_reg_11252.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond202_fu_24213_p2() {
    exitcond202_fu_24213_p2 = (!ci47_reg_11230.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci47_reg_11230.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond203_fu_24102_p2() {
    exitcond203_fu_24102_p2 = (!w75_reg_11208.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w75_reg_11208.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond204_fu_24597_p2() {
    exitcond204_fu_24597_p2 = (!co90_reg_11274.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co90_reg_11274.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond205_fu_24501_p2() {
    exitcond205_fu_24501_p2 = (!k26_reg_11263.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k26_reg_11263.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond206_fu_24234_p2() {
    exitcond206_fu_24234_p2 = (!i76_reg_11241.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i76_reg_11241.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond207_fu_24830_p2() {
    exitcond207_fu_24830_p2 = (!i77_reg_11318.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i77_reg_11318.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond208_fu_24617_p2() {
    exitcond208_fu_24617_p2 = (!w77_reg_11285.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w77_reg_11285.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond209_fu_24934_p2() {
    exitcond209_fu_24934_p2 = (!co92_reg_11340.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co92_reg_11340.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond210_fu_24842_p2() {
    exitcond210_fu_24842_p2 = (!k28_reg_11329.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k28_reg_11329.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond211_fu_24637_p2() {
    exitcond211_fu_24637_p2 = (!h71_reg_11296.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h71_reg_11296.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond212_fu_25270_p2() {
    exitcond212_fu_25270_p2 = (!i79_reg_11373.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i79_reg_11373.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond213_fu_25002_p2() {
    exitcond213_fu_25002_p2 = (!ci49_reg_11351.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci49_reg_11351.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond214_fu_24649_p2() {
    exitcond214_fu_24649_p2 = (!i81_reg_11307.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i81_reg_11307.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond215_fu_25400_p2() {
    exitcond215_fu_25400_p2 = (!co94_reg_11395.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co94_reg_11395.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond216_fu_25282_p2() {
    exitcond216_fu_25282_p2 = (!k30_reg_11384.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k30_reg_11384.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond217_fu_25023_p2() {
    exitcond217_fu_25023_p2 = (!i83_reg_11362.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i83_reg_11362.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond218_fu_25523_p2() {
    exitcond218_fu_25523_p2 = (!co96_reg_11428.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co96_reg_11428.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond219_fu_25412_p2() {
    exitcond219_fu_25412_p2 = (!h73_reg_11406.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h73_reg_11406.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond220_fu_25704_p2() {
    exitcond220_fu_25704_p2 = (!co98_reg_11461.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co98_reg_11461.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond221_fu_25571_p2() {
    exitcond221_fu_25571_p2 = (!h75_reg_11439.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h75_reg_11439.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond222_fu_25463_p2() {
    exitcond222_fu_25463_p2 = (!w79_reg_11417.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w79_reg_11417.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond223_fu_26040_p2() {
    exitcond223_fu_26040_p2 = (!i85_reg_11494.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i85_reg_11494.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond224_fu_25772_p2() {
    exitcond224_fu_25772_p2 = (!ci51_reg_11472.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci51_reg_11472.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond225_fu_25661_p2() {
    exitcond225_fu_25661_p2 = (!w81_reg_11450.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w81_reg_11450.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond226_fu_26144_p2() {
    exitcond226_fu_26144_p2 = (!co100_reg_11516.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co100_reg_11516.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond227_fu_26052_p2() {
    exitcond227_fu_26052_p2 = (!k32_reg_11505.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k32_reg_11505.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond228_fu_25793_p2() {
    exitcond228_fu_25793_p2 = (!i87_reg_11483.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i87_reg_11483.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond229_fu_26377_p2() {
    exitcond229_fu_26377_p2 = (!i88_reg_11560.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i88_reg_11560.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond230_fu_26164_p2() {
    exitcond230_fu_26164_p2 = (!w83_reg_11527.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w83_reg_11527.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond231_fu_26477_p2() {
    exitcond231_fu_26477_p2 = (!co102_reg_11582.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co102_reg_11582.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond232_fu_26389_p2() {
    exitcond232_fu_26389_p2 = (!k34_reg_11571.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k34_reg_11571.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond233_fu_26184_p2() {
    exitcond233_fu_26184_p2 = (!h77_reg_11538.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h77_reg_11538.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond234_fu_26813_p2() {
    exitcond234_fu_26813_p2 = (!i90_reg_11615.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i90_reg_11615.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond235_fu_26545_p2() {
    exitcond235_fu_26545_p2 = (!ci53_reg_11593.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci53_reg_11593.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond236_fu_26196_p2() {
    exitcond236_fu_26196_p2 = (!i92_reg_11549.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i92_reg_11549.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond237_fu_26939_p2() {
    exitcond237_fu_26939_p2 = (!co104_reg_11637.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co104_reg_11637.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond238_fu_26825_p2() {
    exitcond238_fu_26825_p2 = (!k36_reg_11626.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k36_reg_11626.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond239_fu_26566_p2() {
    exitcond239_fu_26566_p2 = (!i94_reg_11604.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i94_reg_11604.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond240_fu_27062_p2() {
    exitcond240_fu_27062_p2 = (!co106_reg_11670.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co106_reg_11670.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond241_fu_26951_p2() {
    exitcond241_fu_26951_p2 = (!h79_reg_11648.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h79_reg_11648.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond242_fu_27243_p2() {
    exitcond242_fu_27243_p2 = (!co108_reg_11703.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co108_reg_11703.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond243_fu_27110_p2() {
    exitcond243_fu_27110_p2 = (!h81_reg_11681.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h81_reg_11681.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond244_fu_27002_p2() {
    exitcond244_fu_27002_p2 = (!w85_reg_11659.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w85_reg_11659.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond245_fu_27579_p2() {
    exitcond245_fu_27579_p2 = (!i96_reg_11736.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i96_reg_11736.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond246_fu_27311_p2() {
    exitcond246_fu_27311_p2 = (!ci55_reg_11714.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci55_reg_11714.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond247_fu_27200_p2() {
    exitcond247_fu_27200_p2 = (!w87_reg_11692.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w87_reg_11692.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond248_fu_27683_p2() {
    exitcond248_fu_27683_p2 = (!co110_reg_11758.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co110_reg_11758.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond249_fu_27591_p2() {
    exitcond249_fu_27591_p2 = (!k38_reg_11747.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k38_reg_11747.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond250_fu_27332_p2() {
    exitcond250_fu_27332_p2 = (!i98_reg_11725.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i98_reg_11725.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond251_fu_27924_p2() {
    exitcond251_fu_27924_p2 = (!i99_reg_11802.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i99_reg_11802.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond252_fu_27703_p2() {
    exitcond252_fu_27703_p2 = (!w89_reg_11769.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w89_reg_11769.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond253_fu_28024_p2() {
    exitcond253_fu_28024_p2 = (!co112_reg_11824.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co112_reg_11824.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond254_fu_27936_p2() {
    exitcond254_fu_27936_p2 = (!k40_reg_11813.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k40_reg_11813.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond255_fu_27723_p2() {
    exitcond255_fu_27723_p2 = (!h83_reg_11780.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h83_reg_11780.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond256_fu_28360_p2() {
    exitcond256_fu_28360_p2 = (!i101_reg_11857.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i101_reg_11857.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond257_fu_28092_p2() {
    exitcond257_fu_28092_p2 = (!ci57_reg_11835.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci57_reg_11835.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond258_fu_27735_p2() {
    exitcond258_fu_27735_p2 = (!i103_reg_11791.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i103_reg_11791.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond259_fu_28486_p2() {
    exitcond259_fu_28486_p2 = (!co114_reg_11879.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co114_reg_11879.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond260_fu_28372_p2() {
    exitcond260_fu_28372_p2 = (!k42_reg_11868.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k42_reg_11868.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond261_fu_28113_p2() {
    exitcond261_fu_28113_p2 = (!i105_reg_11846.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i105_reg_11846.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond262_fu_28609_p2() {
    exitcond262_fu_28609_p2 = (!co116_reg_11912.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co116_reg_11912.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond263_fu_28498_p2() {
    exitcond263_fu_28498_p2 = (!h85_reg_11890.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h85_reg_11890.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond264_fu_28790_p2() {
    exitcond264_fu_28790_p2 = (!co118_reg_11945.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co118_reg_11945.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond265_fu_28657_p2() {
    exitcond265_fu_28657_p2 = (!h87_reg_11923.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h87_reg_11923.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond266_fu_28549_p2() {
    exitcond266_fu_28549_p2 = (!w91_reg_11901.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w91_reg_11901.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond267_fu_29126_p2() {
    exitcond267_fu_29126_p2 = (!i107_reg_11978.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i107_reg_11978.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond268_fu_28858_p2() {
    exitcond268_fu_28858_p2 = (!ci59_reg_11956.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci59_reg_11956.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond269_fu_28747_p2() {
    exitcond269_fu_28747_p2 = (!w93_reg_11934.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w93_reg_11934.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond270_fu_29230_p2() {
    exitcond270_fu_29230_p2 = (!co120_reg_12000.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co120_reg_12000.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond271_fu_29138_p2() {
    exitcond271_fu_29138_p2 = (!k44_reg_11989.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k44_reg_11989.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond272_fu_28879_p2() {
    exitcond272_fu_28879_p2 = (!i109_reg_11967.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i109_reg_11967.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond273_fu_29475_p2() {
    exitcond273_fu_29475_p2 = (!i110_reg_12044.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i110_reg_12044.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond274_fu_29250_p2() {
    exitcond274_fu_29250_p2 = (!w95_reg_12011.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w95_reg_12011.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond275_fu_29575_p2() {
    exitcond275_fu_29575_p2 = (!co122_reg_12066.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co122_reg_12066.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond276_fu_29487_p2() {
    exitcond276_fu_29487_p2 = (!k46_reg_12055.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k46_reg_12055.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond277_fu_29270_p2() {
    exitcond277_fu_29270_p2 = (!h89_reg_12022.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h89_reg_12022.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond278_fu_29911_p2() {
    exitcond278_fu_29911_p2 = (!i112_reg_12099.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i112_reg_12099.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond279_fu_29643_p2() {
    exitcond279_fu_29643_p2 = (!ci61_reg_12077.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci61_reg_12077.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond280_fu_29282_p2() {
    exitcond280_fu_29282_p2 = (!i114_reg_12033.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i114_reg_12033.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond281_fu_30037_p2() {
    exitcond281_fu_30037_p2 = (!co124_reg_12121.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co124_reg_12121.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond282_fu_29923_p2() {
    exitcond282_fu_29923_p2 = (!k48_reg_12110.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k48_reg_12110.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond283_fu_29664_p2() {
    exitcond283_fu_29664_p2 = (!i116_reg_12088.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i116_reg_12088.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond284_fu_30160_p2() {
    exitcond284_fu_30160_p2 = (!co126_reg_12154.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co126_reg_12154.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond285_fu_30049_p2() {
    exitcond285_fu_30049_p2 = (!h91_reg_12132.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h91_reg_12132.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond286_fu_30341_p2() {
    exitcond286_fu_30341_p2 = (!co128_reg_12187.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co128_reg_12187.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond287_fu_30208_p2() {
    exitcond287_fu_30208_p2 = (!h93_reg_12165.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h93_reg_12165.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond288_fu_30100_p2() {
    exitcond288_fu_30100_p2 = (!w97_reg_12143.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w97_reg_12143.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond289_fu_30685_p2() {
    exitcond289_fu_30685_p2 = (!i118_reg_12220.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i118_reg_12220.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond290_fu_30409_p2() {
    exitcond290_fu_30409_p2 = (!ci63_reg_12198.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci63_reg_12198.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond291_fu_30298_p2() {
    exitcond291_fu_30298_p2 = (!w99_reg_12176.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w99_reg_12176.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond292_fu_30789_p2() {
    exitcond292_fu_30789_p2 = (!co130_reg_12242.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co130_reg_12242.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond293_fu_30697_p2() {
    exitcond293_fu_30697_p2 = (!k50_reg_12231.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k50_reg_12231.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond294_fu_30430_p2() {
    exitcond294_fu_30430_p2 = (!i120_reg_12209.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i120_reg_12209.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond295_fu_31026_p2() {
    exitcond295_fu_31026_p2 = (!i121_reg_12286.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i121_reg_12286.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond296_fu_30809_p2() {
    exitcond296_fu_30809_p2 = (!w101_reg_12253.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w101_reg_12253.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond297_fu_31126_p2() {
    exitcond297_fu_31126_p2 = (!co132_reg_12308.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co132_reg_12308.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond298_fu_31038_p2() {
    exitcond298_fu_31038_p2 = (!k52_reg_12297.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k52_reg_12297.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond299_fu_39935_p2() {
    exitcond299_fu_39935_p2 = (!h127_reg_13683.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h127_reg_13683.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond300_fu_39874_p2() {
    exitcond300_fu_39874_p2 = (!w131_reg_13672.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w131_reg_13672.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond301_fu_39845_p2() {
    exitcond301_fu_39845_p2 = (!ci89_reg_13661.read().is_01() || !ap_const_lv8_C0.is_01())? sc_lv<1>(): sc_lv<1>(ci89_reg_13661.read() == ap_const_lv8_C0);
}

void ShuffleNetV2::thread_exitcond302_fu_39773_p2() {
    exitcond302_fu_39773_p2 = (!w132_reg_13650.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w132_reg_13650.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond303_fu_39722_p2() {
    exitcond303_fu_39722_p2 = (!h125_reg_13639.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h125_reg_13639.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond304_fu_39710_p2() {
    exitcond304_fu_39710_p2 = (!co184_reg_13628.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co184_reg_13628.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond305_fu_39592_p2() {
    exitcond305_fu_39592_p2 = (!k88_reg_13617.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k88_reg_13617.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond306_fu_39580_p2() {
    exitcond306_fu_39580_p2 = (!i185_reg_13606.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i185_reg_13606.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond307_fu_39343_p2() {
    exitcond307_fu_39343_p2 = (!i189_reg_13595.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i189_reg_13595.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond308_fu_39322_p2() {
    exitcond308_fu_39322_p2 = (!ci87_reg_13584.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci87_reg_13584.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond309_fu_39256_p2() {
    exitcond309_fu_39256_p2 = (!co182_reg_13573.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co182_reg_13573.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond310_fu_39168_p2() {
    exitcond310_fu_39168_p2 = (!k86_reg_13562.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k86_reg_13562.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond311_fu_39156_p2() {
    exitcond311_fu_39156_p2 = (!i183_reg_13551.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i183_reg_13551.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond312_fu_38971_p2() {
    exitcond312_fu_38971_p2 = (!i187_reg_13540.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i187_reg_13540.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond313_fu_38959_p2() {
    exitcond313_fu_38959_p2 = (!h123_reg_13529.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h123_reg_13529.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond314_fu_38939_p2() {
    exitcond314_fu_38939_p2 = (!w129_reg_13518.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w129_reg_13518.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond315_fu_38919_p2() {
    exitcond315_fu_38919_p2 = (!co180_reg_13507.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co180_reg_13507.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond316_fu_38827_p2() {
    exitcond316_fu_38827_p2 = (!k84_reg_13496.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k84_reg_13496.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond317_fu_38815_p2() {
    exitcond317_fu_38815_p2 = (!i180_reg_13485.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i180_reg_13485.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond318_fu_38578_p2() {
    exitcond318_fu_38578_p2 = (!i182_reg_13474.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i182_reg_13474.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond319_fu_38557_p2() {
    exitcond319_fu_38557_p2 = (!ci85_reg_13463.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci85_reg_13463.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond320_fu_38491_p2() {
    exitcond320_fu_38491_p2 = (!co178_reg_13452.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co178_reg_13452.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond321_fu_38448_p2() {
    exitcond321_fu_38448_p2 = (!w127_reg_13441.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w127_reg_13441.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond322_fu_38366_p2() {
    exitcond322_fu_38366_p2 = (!h121_reg_13430.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h121_reg_13430.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond323_fu_38314_p2() {
    exitcond323_fu_38314_p2 = (!co176_reg_13419.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co176_reg_13419.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond324_fu_38250_p2() {
    exitcond324_fu_38250_p2 = (!w125_reg_13408.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w125_reg_13408.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond325_fu_38199_p2() {
    exitcond325_fu_38199_p2 = (!h119_reg_13397.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h119_reg_13397.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond326_fu_38187_p2() {
    exitcond326_fu_38187_p2 = (!co174_reg_13386.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co174_reg_13386.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond327_fu_38069_p2() {
    exitcond327_fu_38069_p2 = (!k82_reg_13375.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k82_reg_13375.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond328_fu_38057_p2() {
    exitcond328_fu_38057_p2 = (!i174_reg_13364.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i174_reg_13364.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond329_fu_37820_p2() {
    exitcond329_fu_37820_p2 = (!i178_reg_13353.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i178_reg_13353.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond330_fu_37799_p2() {
    exitcond330_fu_37799_p2 = (!ci83_reg_13342.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci83_reg_13342.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond331_fu_37733_p2() {
    exitcond331_fu_37733_p2 = (!co172_reg_13331.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co172_reg_13331.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond332_fu_37645_p2() {
    exitcond332_fu_37645_p2 = (!k80_reg_13320.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k80_reg_13320.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond333_fu_37633_p2() {
    exitcond333_fu_37633_p2 = (!i172_reg_13309.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i172_reg_13309.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond334_fu_37440_p2() {
    exitcond334_fu_37440_p2 = (!i176_reg_13298.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i176_reg_13298.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond335_fu_37428_p2() {
    exitcond335_fu_37428_p2 = (!h117_reg_13287.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h117_reg_13287.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond336_fu_37408_p2() {
    exitcond336_fu_37408_p2 = (!w123_reg_13276.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w123_reg_13276.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond337_fu_37388_p2() {
    exitcond337_fu_37388_p2 = (!co170_reg_13265.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co170_reg_13265.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond338_fu_37296_p2() {
    exitcond338_fu_37296_p2 = (!k78_reg_13254.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k78_reg_13254.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond339_fu_37284_p2() {
    exitcond339_fu_37284_p2 = (!i169_reg_13243.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i169_reg_13243.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond340_fu_37047_p2() {
    exitcond340_fu_37047_p2 = (!i171_reg_13232.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i171_reg_13232.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond341_fu_37026_p2() {
    exitcond341_fu_37026_p2 = (!ci81_reg_13221.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci81_reg_13221.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond342_fu_36960_p2() {
    exitcond342_fu_36960_p2 = (!co168_reg_13210.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co168_reg_13210.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond343_fu_36917_p2() {
    exitcond343_fu_36917_p2 = (!w121_reg_13199.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w121_reg_13199.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond344_fu_36835_p2() {
    exitcond344_fu_36835_p2 = (!h115_reg_13188.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h115_reg_13188.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond345_fu_36783_p2() {
    exitcond345_fu_36783_p2 = (!co166_reg_13177.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co166_reg_13177.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond346_fu_36719_p2() {
    exitcond346_fu_36719_p2 = (!w119_reg_13166.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w119_reg_13166.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond347_fu_36668_p2() {
    exitcond347_fu_36668_p2 = (!h113_reg_13155.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h113_reg_13155.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond348_fu_36656_p2() {
    exitcond348_fu_36656_p2 = (!co164_reg_13144.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co164_reg_13144.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond349_fu_36538_p2() {
    exitcond349_fu_36538_p2 = (!k76_reg_13133.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k76_reg_13133.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond350_fu_36526_p2() {
    exitcond350_fu_36526_p2 = (!i163_reg_13122.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i163_reg_13122.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond351_fu_36281_p2() {
    exitcond351_fu_36281_p2 = (!i167_reg_13111.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i167_reg_13111.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond352_fu_36260_p2() {
    exitcond352_fu_36260_p2 = (!ci79_reg_13100.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci79_reg_13100.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond353_fu_36194_p2() {
    exitcond353_fu_36194_p2 = (!co162_reg_13089.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co162_reg_13089.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond354_fu_36106_p2() {
    exitcond354_fu_36106_p2 = (!k74_reg_13078.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k74_reg_13078.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond355_fu_36094_p2() {
    exitcond355_fu_36094_p2 = (!i161_reg_13067.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i161_reg_13067.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond356_fu_35913_p2() {
    exitcond356_fu_35913_p2 = (!i165_reg_13056.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i165_reg_13056.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond357_fu_35901_p2() {
    exitcond357_fu_35901_p2 = (!h111_reg_13045.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h111_reg_13045.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond358_fu_35881_p2() {
    exitcond358_fu_35881_p2 = (!w117_reg_13034.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w117_reg_13034.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond359_fu_35861_p2() {
    exitcond359_fu_35861_p2 = (!co160_reg_13023.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co160_reg_13023.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond360_fu_35769_p2() {
    exitcond360_fu_35769_p2 = (!k72_reg_13012.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k72_reg_13012.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond361_fu_35757_p2() {
    exitcond361_fu_35757_p2 = (!i158_reg_13001.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i158_reg_13001.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond362_fu_35520_p2() {
    exitcond362_fu_35520_p2 = (!i160_reg_12990.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i160_reg_12990.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond363_fu_35499_p2() {
    exitcond363_fu_35499_p2 = (!ci77_reg_12979.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci77_reg_12979.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond364_fu_35433_p2() {
    exitcond364_fu_35433_p2 = (!co158_reg_12968.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co158_reg_12968.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond365_fu_35390_p2() {
    exitcond365_fu_35390_p2 = (!w115_reg_12957.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w115_reg_12957.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond366_fu_35308_p2() {
    exitcond366_fu_35308_p2 = (!h109_reg_12946.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h109_reg_12946.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond367_fu_35256_p2() {
    exitcond367_fu_35256_p2 = (!co156_reg_12935.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co156_reg_12935.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond368_fu_35134_p2() {
    exitcond368_fu_35134_p2 = (!k70_reg_12924.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k70_reg_12924.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond369_fu_35122_p2() {
    exitcond369_fu_35122_p2 = (!i152_reg_12913.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i152_reg_12913.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond370_fu_34885_p2() {
    exitcond370_fu_34885_p2 = (!i156_reg_12902.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i156_reg_12902.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond371_fu_34864_p2() {
    exitcond371_fu_34864_p2 = (!ci75_reg_12891.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci75_reg_12891.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond372_fu_34798_p2() {
    exitcond372_fu_34798_p2 = (!co154_reg_12880.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co154_reg_12880.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond373_fu_34710_p2() {
    exitcond373_fu_34710_p2 = (!k68_reg_12869.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k68_reg_12869.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond374_fu_34698_p2() {
    exitcond374_fu_34698_p2 = (!i150_reg_12858.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i150_reg_12858.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond375_fu_34517_p2() {
    exitcond375_fu_34517_p2 = (!i154_reg_12847.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i154_reg_12847.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond376_fu_34505_p2() {
    exitcond376_fu_34505_p2 = (!h107_reg_12836.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h107_reg_12836.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond377_fu_34485_p2() {
    exitcond377_fu_34485_p2 = (!w113_reg_12825.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w113_reg_12825.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond378_fu_34465_p2() {
    exitcond378_fu_34465_p2 = (!co152_reg_12814.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co152_reg_12814.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond379_fu_34365_p2() {
    exitcond379_fu_34365_p2 = (!k66_reg_12803.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k66_reg_12803.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond380_fu_34353_p2() {
    exitcond380_fu_34353_p2 = (!i145_reg_12792.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i145_reg_12792.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond381_fu_34116_p2() {
    exitcond381_fu_34116_p2 = (!i149_reg_12781.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i149_reg_12781.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond382_fu_34095_p2() {
    exitcond382_fu_34095_p2 = (!ci73_reg_12770.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci73_reg_12770.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond383_fu_34029_p2() {
    exitcond383_fu_34029_p2 = (!co150_reg_12759.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co150_reg_12759.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond384_fu_33937_p2() {
    exitcond384_fu_33937_p2 = (!k64_reg_12748.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k64_reg_12748.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond385_fu_33925_p2() {
    exitcond385_fu_33925_p2 = (!i143_reg_12737.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i143_reg_12737.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond386_fu_33744_p2() {
    exitcond386_fu_33744_p2 = (!i147_reg_12726.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i147_reg_12726.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond387_fu_33732_p2() {
    exitcond387_fu_33732_p2 = (!h105_reg_12715.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h105_reg_12715.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond388_fu_33712_p2() {
    exitcond388_fu_33712_p2 = (!w111_reg_12704.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w111_reg_12704.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond389_fu_33692_p2() {
    exitcond389_fu_33692_p2 = (!co148_reg_12693.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co148_reg_12693.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond390_fu_33596_p2() {
    exitcond390_fu_33596_p2 = (!k62_reg_12682.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k62_reg_12682.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond391_fu_33584_p2() {
    exitcond391_fu_33584_p2 = (!i140_reg_12671.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i140_reg_12671.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond392_fu_33347_p2() {
    exitcond392_fu_33347_p2 = (!i142_reg_12660.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i142_reg_12660.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond393_fu_33326_p2() {
    exitcond393_fu_33326_p2 = (!ci71_reg_12649.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci71_reg_12649.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond394_fu_33260_p2() {
    exitcond394_fu_33260_p2 = (!co146_reg_12638.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co146_reg_12638.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond395_fu_33230_p2() {
    exitcond395_fu_33230_p2 = (!w109_reg_12627.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w109_reg_12627.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond396_fu_33179_p2() {
    exitcond396_fu_33179_p2 = (!h103_reg_12616.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h103_reg_12616.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond397_fu_33167_p2() {
    exitcond397_fu_33167_p2 = (!co144_reg_12605.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co144_reg_12605.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond398_fu_33049_p2() {
    exitcond398_fu_33049_p2 = (!k60_reg_12594.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k60_reg_12594.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond399_fu_33037_p2() {
    exitcond399_fu_33037_p2 = (!i134_reg_12583.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i134_reg_12583.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond400_fu_32782_p2() {
    exitcond400_fu_32782_p2 = (!i138_reg_12572.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i138_reg_12572.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond401_fu_32761_p2() {
    exitcond401_fu_32761_p2 = (!ci69_reg_12561.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci69_reg_12561.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond402_fu_32693_p2() {
    exitcond402_fu_32693_p2 = (!co142_reg_12550.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co142_reg_12550.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond403_fu_32601_p2() {
    exitcond403_fu_32601_p2 = (!k58_reg_12539.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k58_reg_12539.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond404_fu_32589_p2() {
    exitcond404_fu_32589_p2 = (!i132_reg_12528.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i132_reg_12528.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond405_fu_32408_p2() {
    exitcond405_fu_32408_p2 = (!i136_reg_12517.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i136_reg_12517.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond406_fu_32396_p2() {
    exitcond406_fu_32396_p2 = (!h101_reg_12506.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h101_reg_12506.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond407_fu_32376_p2() {
    exitcond407_fu_32376_p2 = (!w107_reg_12495.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w107_reg_12495.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond408_fu_32356_p2() {
    exitcond408_fu_32356_p2 = (!co140_reg_12484.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co140_reg_12484.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond409_fu_32260_p2() {
    exitcond409_fu_32260_p2 = (!k56_reg_12473.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k56_reg_12473.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond410_fu_32248_p2() {
    exitcond410_fu_32248_p2 = (!i129_reg_12462.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i129_reg_12462.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond411_fu_31993_p2() {
    exitcond411_fu_31993_p2 = (!i131_reg_12451.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i131_reg_12451.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond412_fu_31972_p2() {
    exitcond412_fu_31972_p2 = (!ci67_reg_12440.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci67_reg_12440.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond413_fu_31904_p2() {
    exitcond413_fu_31904_p2 = (!co138_reg_12429.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co138_reg_12429.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond414_fu_31861_p2() {
    exitcond414_fu_31861_p2 = (!w105_reg_12418.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w105_reg_12418.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond415_fu_31771_p2() {
    exitcond415_fu_31771_p2 = (!h99_reg_12407.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h99_reg_12407.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond416_fu_31723_p2() {
    exitcond416_fu_31723_p2 = (!co136_reg_12396.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co136_reg_12396.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond417_fu_31663_p2() {
    exitcond417_fu_31663_p2 = (!w103_reg_12385.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w103_reg_12385.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond418_fu_31612_p2() {
    exitcond418_fu_31612_p2 = (!h97_reg_12374.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h97_reg_12374.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond419_fu_31600_p2() {
    exitcond419_fu_31600_p2 = (!co134_reg_12363.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co134_reg_12363.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond420_fu_31482_p2() {
    exitcond420_fu_31482_p2 = (!k54_reg_12352.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k54_reg_12352.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond421_fu_31470_p2() {
    exitcond421_fu_31470_p2 = (!i123_reg_12341.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i123_reg_12341.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond422_fu_31215_p2() {
    exitcond422_fu_31215_p2 = (!i127_reg_12330.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i127_reg_12330.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond423_fu_31194_p2() {
    exitcond423_fu_31194_p2 = (!ci65_reg_12319.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci65_reg_12319.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond424_fu_30829_p2() {
    exitcond424_fu_30829_p2 = (!h95_reg_12264.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h95_reg_12264.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond425_fu_30841_p2() {
    exitcond425_fu_30841_p2 = (!i125_reg_12275.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i125_reg_12275.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond57_fu_15500_p2() {
    exitcond57_fu_15500_p2 = (!i1_reg_9626.read().is_01() || !ap_const_lv10_200.is_01())? sc_lv<1>(): sc_lv<1>(i1_reg_9626.read() == ap_const_lv10_200);
}

void ShuffleNetV2::thread_exitcond58_fu_15527_p2() {
    exitcond58_fu_15527_p2 = (!i2_reg_9637.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i2_reg_9637.read() == ap_const_lv4_A);
}

void ShuffleNetV2::thread_exitcond59_fu_15569_p2() {
    exitcond59_fu_15569_p2 = (!ci_reg_9648.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(ci_reg_9648.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond60_fu_15713_p2() {
    exitcond60_fu_15713_p2 = (!co_reg_9681.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co_reg_9681.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond61_fu_15602_p2() {
    exitcond61_fu_15602_p2 = (!w_reg_9659.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(w_reg_9659.read() == ap_const_lv6_20);
}

void ShuffleNetV2::thread_exitcond62_fu_15795_p2() {
    exitcond62_fu_15795_p2 = (!i4_reg_9704.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i4_reg_9704.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond63_fu_15779_p2() {
    exitcond63_fu_15779_p2 = (!ci3_reg_9693.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci3_reg_9693.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond64_fu_15658_p2() {
    exitcond64_fu_15658_p2 = (!h_reg_9670.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(h_reg_9670.read() == ap_const_lv6_20);
}

void ShuffleNetV2::thread_exitcond65_fu_15833_p2() {
    exitcond65_fu_15833_p2 = (!co5_reg_9715.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co5_reg_9715.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond66_fu_15936_p2() {
    exitcond66_fu_15936_p2 = (!i8_reg_9748.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i8_reg_9748.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond67_fu_15887_p2() {
    exitcond67_fu_15887_p2 = (!w6_reg_9726.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w6_reg_9726.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond68_fu_15952_p2() {
    exitcond68_fu_15952_p2 = (!co9_reg_9759.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co9_reg_9759.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond69_fu_15920_p2() {
    exitcond69_fu_15920_p2 = (!h7_reg_9737.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h7_reg_9737.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond70_fu_16070_p2() {
    exitcond70_fu_16070_p2 = (!i11_reg_9782.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i11_reg_9782.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond71_fu_16054_p2() {
    exitcond71_fu_16054_p2 = (!ci10_reg_9771.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci10_reg_9771.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond72_fu_16112_p2() {
    exitcond72_fu_16112_p2 = (!co12_reg_9793.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co12_reg_9793.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond73_fu_16253_p2() {
    exitcond73_fu_16253_p2 = (!tmp_2269_reg_9826.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2269_reg_9826.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond74_fu_16200_p2() {
    exitcond74_fu_16200_p2 = (!w13_reg_9804.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w13_reg_9804.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond75_fu_16296_p2() {
    exitcond75_fu_16296_p2 = (!co16_reg_9837.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co16_reg_9837.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond76_fu_16237_p2() {
    exitcond76_fu_16237_p2 = (!h14_reg_9815.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h14_reg_9815.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond77_fu_16414_p2() {
    exitcond77_fu_16414_p2 = (!i16_reg_9860.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i16_reg_9860.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond78_fu_16398_p2() {
    exitcond78_fu_16398_p2 = (!ci17_reg_9849.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci17_reg_9849.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond79_fu_16460_p2() {
    exitcond79_fu_16460_p2 = (!co19_reg_9871.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co19_reg_9871.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond80_fu_16633_p2() {
    exitcond80_fu_16633_p2 = (!co22_reg_9904.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co22_reg_9904.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond81_fu_16508_p2() {
    exitcond81_fu_16508_p2 = (!h20_reg_9882.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h20_reg_9882.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond82_fu_16751_p2() {
    exitcond82_fu_16751_p2 = (!i18_reg_9927.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i18_reg_9927.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond83_fu_16735_p2() {
    exitcond83_fu_16735_p2 = (!ci21_reg_9916.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci21_reg_9916.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond84_fu_16590_p2() {
    exitcond84_fu_16590_p2 = (!w21_reg_9893.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w21_reg_9893.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond85_fu_16793_p2() {
    exitcond85_fu_16793_p2 = (!co25_reg_9938.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co25_reg_9938.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond86_fu_16949_p2() {
    exitcond86_fu_16949_p2 = (!i20_reg_9971.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i20_reg_9971.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond87_fu_16896_p2() {
    exitcond87_fu_16896_p2 = (!w26_reg_9949.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w26_reg_9949.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond88_fu_16961_p2() {
    exitcond88_fu_16961_p2 = (!co29_reg_9982.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co29_reg_9982.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond89_fu_16933_p2() {
    exitcond89_fu_16933_p2 = (!h27_reg_9960.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h27_reg_9960.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond90_fu_17074_p2() {
    exitcond90_fu_17074_p2 = (!tmp_2291_reg_10005.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2291_reg_10005.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond91_fu_17058_p2() {
    exitcond91_fu_17058_p2 = (!ci23_reg_9994.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci23_reg_9994.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond92_fu_17143_p2() {
    exitcond92_fu_17143_p2 = (!co32_reg_10016.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co32_reg_10016.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond93_fu_17266_p2() {
    exitcond93_fu_17266_p2 = (!co35_reg_10049.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co35_reg_10049.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond94_fu_17155_p2() {
    exitcond94_fu_17155_p2 = (!h33_reg_10027.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h33_reg_10027.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond95_fu_17439_p2() {
    exitcond95_fu_17439_p2 = (!co38_reg_10082.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co38_reg_10082.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond96_fu_17314_p2() {
    exitcond96_fu_17314_p2 = (!h36_reg_10060.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h36_reg_10060.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond97_fu_17206_p2() {
    exitcond97_fu_17206_p2 = (!w34_reg_10038.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w34_reg_10038.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond98_fu_17557_p2() {
    exitcond98_fu_17557_p2 = (!i23_reg_10105.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i23_reg_10105.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond99_fu_17541_p2() {
    exitcond99_fu_17541_p2 = (!ci25_reg_10094.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci25_reg_10094.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond_fu_15473_p2() {
    exitcond_fu_15473_p2 = (!i_reg_9615.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_9615.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_fc_bias_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        fc_bias_V_address0 =  (sc_lv<4>) (i2_cast_reg_40383.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read())) {
        fc_bias_V_address0 = grp_fc_fu_15360_bias_V_address0.read();
    } else {
        fc_bias_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ShuffleNetV2::thread_fc_bias_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        fc_bias_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read())) {
        fc_bias_V_ce0 = grp_fc_fu_15360_bias_V_ce0.read();
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

void ShuffleNetV2::thread_feature_buffer_192x6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1718.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_1974_cast_fu_39956_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1713.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_1972_cast_fu_39794_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1622.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_1903_cast_fu_38473_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1617.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_1902_cast_fu_38271_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1525.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_1828_cast_fu_36942_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1520.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_1827_cast_fu_36740_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1428.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_1752_cast_fu_35415_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        feature_buffer_192x6_address0 = grp_shuffle_96_r_p_fu_15012_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        feature_buffer_192x6_address0 = grp_shuffle_96_l_p_fu_14958_output_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        feature_buffer_192x6_address0 = grp_shuffle_96_p_fu_14822_output_V_address0.read();
    } else {
        feature_buffer_192x6_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_feature_buffer_192x6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1428.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1520.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1525.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1622.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1713.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1718.read()))) {
        feature_buffer_192x6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        feature_buffer_192x6_ce0 = grp_shuffle_96_r_p_fu_15012_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        feature_buffer_192x6_ce0 = grp_shuffle_96_l_p_fu_14958_output_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        feature_buffer_192x6_ce0 = grp_shuffle_96_p_fu_14822_output_V_ce0.read();
    } else {
        feature_buffer_192x6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_192x6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        feature_buffer_192x6_d0 = grp_shuffle_96_r_p_fu_15012_output_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        feature_buffer_192x6_d0 = grp_shuffle_96_l_p_fu_14958_output_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        feature_buffer_192x6_d0 = grp_shuffle_96_p_fu_14822_output_V_d0.read();
    } else {
        feature_buffer_192x6_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_feature_buffer_192x6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        feature_buffer_192x6_we0 = grp_shuffle_96_r_p_fu_15012_output_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        feature_buffer_192x6_we0 = grp_shuffle_96_l_p_fu_14958_output_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        feature_buffer_192x6_we0 = grp_shuffle_96_p_fu_14822_output_V_we0.read();
    } else {
        feature_buffer_192x6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_48x18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_950_cast_fu_18829_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_920_cast_fu_18209_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_918_cast_fu_18015_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_876_cast_fu_17421_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_874_cast_fu_17227_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_830_cast_fu_16615_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        feature_buffer_48x18_address0 = grp_shuffle_24_r_p_fu_15284_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        feature_buffer_48x18_address0 = grp_shuffle_24_l_p_fu_15230_output_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()))) {
        feature_buffer_48x18_address0 = grp_shuffle_24_p_fu_15066_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state484.read())) {
        feature_buffer_48x18_address0 = grp_subconv_3x3_16_strid_fu_14946_input_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        feature_buffer_48x18_address0 = grp_subconv_1x1_16p_p_fu_14006_input_V_address0.read();
    } else {
        feature_buffer_48x18_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_feature_buffer_48x18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read()))) {
        feature_buffer_48x18_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        feature_buffer_48x18_ce0 = grp_shuffle_24_r_p_fu_15284_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        feature_buffer_48x18_ce0 = grp_shuffle_24_l_p_fu_15230_output_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()))) {
        feature_buffer_48x18_ce0 = grp_shuffle_24_p_fu_15066_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state484.read())) {
        feature_buffer_48x18_ce0 = grp_subconv_3x3_16_strid_fu_14946_input_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        feature_buffer_48x18_ce0 = grp_subconv_1x1_16p_p_fu_14006_input_V_ce0.read();
    } else {
        feature_buffer_48x18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_48x18_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        feature_buffer_48x18_d0 = grp_shuffle_24_r_p_fu_15284_output_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        feature_buffer_48x18_d0 = grp_shuffle_24_l_p_fu_15230_output_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()))) {
        feature_buffer_48x18_d0 = grp_shuffle_24_p_fu_15066_output_V_d0.read();
    } else {
        feature_buffer_48x18_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_feature_buffer_48x18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        feature_buffer_48x18_we0 = grp_shuffle_24_r_p_fu_15284_output_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        feature_buffer_48x18_we0 = grp_shuffle_24_l_p_fu_15230_output_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()))) {
        feature_buffer_48x18_we0 = grp_shuffle_24_p_fu_15066_output_V_we0.read();
    } else {
        feature_buffer_48x18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_96x10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1273.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1654_cast_fu_33251_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1183.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1591_cast_fu_31886_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1178.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1590_cast_fu_31684_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1088.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1511_cast_fu_30323_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1083.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1510_cast_fu_30121_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state993.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1434_cast_fu_28772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state988.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1433_cast_fu_28570_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state898.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1357_cast_fu_27225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state893.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1356_cast_fu_27023_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state803.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1281_cast_fu_25686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state798.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1280_cast_fu_25484_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1203_cast_fu_24127_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state703.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1202_cast_fu_23925_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state613.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1127_cast_fu_22576_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state608.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1126_cast_fu_22374_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state518.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1051_cast_fu_21029_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read())) {
        feature_buffer_96x10_address0 = grp_shuffle_48_r_p_fu_15176_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read())) {
        feature_buffer_96x10_address0 = grp_shuffle_48_l_p_fu_15122_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1393.read())) {
        feature_buffer_96x10_address0 = grp_subconv_3x3_8_stride_fu_14934_input_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state800.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state990.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1085.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1180.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1275.read()))) {
        feature_buffer_96x10_address0 = grp_shuffle_48_p_fu_14878_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        feature_buffer_96x10_address0 = grp_subconv_1x1_8p_p_fu_13798_input_V_address0.read();
    } else {
        feature_buffer_96x10_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_feature_buffer_96x10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state518.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state608.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state613.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state703.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state798.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state803.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state893.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state898.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state988.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state993.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1083.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1088.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1178.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1183.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1273.read()))) {
        feature_buffer_96x10_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read())) {
        feature_buffer_96x10_ce0 = grp_shuffle_48_r_p_fu_15176_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read())) {
        feature_buffer_96x10_ce0 = grp_shuffle_48_l_p_fu_15122_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1393.read())) {
        feature_buffer_96x10_ce0 = grp_subconv_3x3_8_stride_fu_14934_input_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state800.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state990.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1085.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1180.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1275.read()))) {
        feature_buffer_96x10_ce0 = grp_shuffle_48_p_fu_14878_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        feature_buffer_96x10_ce0 = grp_subconv_1x1_8p_p_fu_13798_input_V_ce0.read();
    } else {
        feature_buffer_96x10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_96x10_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read())) {
        feature_buffer_96x10_d0 = grp_shuffle_48_r_p_fu_15176_output_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read())) {
        feature_buffer_96x10_d0 = grp_shuffle_48_l_p_fu_15122_output_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state800.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state990.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1085.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1180.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1275.read()))) {
        feature_buffer_96x10_d0 = grp_shuffle_48_p_fu_14878_output_V_d0.read();
    } else {
        feature_buffer_96x10_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_feature_buffer_96x10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read())) {
        feature_buffer_96x10_we0 = grp_shuffle_48_r_p_fu_15176_output_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read())) {
        feature_buffer_96x10_we0 = grp_shuffle_48_l_p_fu_15122_output_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state800.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state990.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1085.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1180.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1275.read()))) {
        feature_buffer_96x10_we0 = grp_shuffle_48_p_fu_14878_output_V_we0.read();
    } else {
        feature_buffer_96x10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_avgpool_fu_15338_ap_start() {
    grp_avgpool_fu_15338_ap_start = ap_reg_grp_avgpool_fu_15338_ap_start.read();
}

void ShuffleNetV2::thread_grp_conv1_p_fu_14110_ap_start() {
    grp_conv1_p_fu_14110_ap_start = ap_reg_grp_conv1_p_fu_14110_ap_start.read();
}

void ShuffleNetV2::thread_grp_conv_last_fu_14423_ap_start() {
    grp_conv_last_fu_14423_ap_start = ap_reg_grp_conv_last_fu_14423_ap_start.read();
}

void ShuffleNetV2::thread_grp_fc_fu_15360_ap_start() {
    grp_fc_fu_15360_ap_start = ap_reg_grp_fc_fu_15360_ap_start.read();
}

void ShuffleNetV2::thread_grp_fu_19027_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state371.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond132_fu_18927_p2.read()))) {
        grp_fu_19027_ap_start = ap_const_logic_1;
    } else {
        grp_fu_19027_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_19027_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state375.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state382.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state371.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state372.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state373.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state374.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state377.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state378.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()))) {
        grp_fu_19027_ce = ap_const_logic_1;
    } else {
        grp_fu_19027_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_19027_p0() {
    grp_fu_19027_p0 = (!tmp_153_cast_cast_fu_18973_p1.read().is_01() || !tmp_148_cast_cast_reg_42558.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_153_cast_cast_fu_18973_p1.read()) + sc_biguint<9>(tmp_148_cast_cast_reg_42558.read()));
}

void ShuffleNetV2::thread_grp_fu_19027_p1() {
    grp_fu_19027_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_19808_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state428.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond143_fu_19708_p2.read()))) {
        grp_fu_19808_ap_start = ap_const_logic_1;
    } else {
        grp_fu_19808_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_19808_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state439.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state428.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state429.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state430.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state433.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state434.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state435.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state437.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state438.read()))) {
        grp_fu_19808_ce = ap_const_logic_1;
    } else {
        grp_fu_19808_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_19808_p0() {
    grp_fu_19808_p0 = (!tmp_170_cast_cast_fu_19754_p1.read().is_01() || !tmp_162_cast_cast_reg_42818.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_170_cast_cast_fu_19754_p1.read()) + sc_biguint<9>(tmp_162_cast_cast_reg_42818.read()));
}

void ShuffleNetV2::thread_grp_fu_19808_p1() {
    grp_fu_19808_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_20589_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond154_fu_20485_p2.read()))) {
        grp_fu_20589_ap_start = ap_const_logic_1;
    } else {
        grp_fu_20589_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_20589_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state489.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state496.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state488.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state490.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state492.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state494.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state495.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state497.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()))) {
        grp_fu_20589_ce = ap_const_logic_1;
    } else {
        grp_fu_20589_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_20589_p0() {
    grp_fu_20589_p0 = (!tmp_191_cast_cast_fu_20531_p1.read().is_01() || !tmp_179_cast_cast_reg_43078.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_191_cast_cast_fu_20531_p1.read()) + sc_biguint<9>(tmp_179_cast_cast_reg_43078.read()));
}

void ShuffleNetV2::thread_grp_fu_20589_p1() {
    grp_fu_20589_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_21236_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state522.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond162_fu_21136_p2.read()))) {
        grp_fu_21236_ap_start = ap_const_logic_1;
    } else {
        grp_fu_21236_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_21236_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state533.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state522.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state523.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state524.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state525.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state527.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state528.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state529.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state530.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state531.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state532.read()))) {
        grp_fu_21236_ce = ap_const_logic_1;
    } else {
        grp_fu_21236_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_21236_p0() {
    grp_fu_21236_p0 = (!tmp_199_cast_cast_fu_21182_p1.read().is_01() || !tmp_190_cast_cast_reg_43259.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_199_cast_cast_fu_21182_p1.read()) + sc_biguint<9>(tmp_190_cast_cast_reg_43259.read()));
}

void ShuffleNetV2::thread_grp_fu_21236_p1() {
    grp_fu_21236_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_22017_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state579.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond173_fu_21917_p2.read()))) {
        grp_fu_22017_ap_start = ap_const_logic_1;
    } else {
        grp_fu_22017_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_22017_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state583.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state579.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state580.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state582.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state584.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state585.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state587.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state588.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state589.read()))) {
        grp_fu_22017_ce = ap_const_logic_1;
    } else {
        grp_fu_22017_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_22017_p0() {
    grp_fu_22017_p0 = (!tmp_216_cast_cast_fu_21963_p1.read().is_01() || !tmp_208_cast_cast_reg_43519.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_216_cast_cast_fu_21963_p1.read()) + sc_biguint<9>(tmp_208_cast_cast_reg_43519.read()));
}

void ShuffleNetV2::thread_grp_fu_22017_p1() {
    grp_fu_22017_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_22783_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond184_fu_22683_p2.read()))) {
        grp_fu_22783_ap_start = ap_const_logic_1;
    } else {
        grp_fu_22783_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_22783_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state621.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state628.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state618.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state619.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state620.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state622.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state623.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state624.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state625.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state626.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state627.read()))) {
        grp_fu_22783_ce = ap_const_logic_1;
    } else {
        grp_fu_22783_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_22783_p0() {
    grp_fu_22783_p0 = (!tmp_228_cast_cast_fu_22729_p1.read().is_01() || !tmp_223_cast_cast_reg_43744.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_228_cast_cast_fu_22729_p1.read()) + sc_biguint<9>(tmp_223_cast_cast_reg_43744.read()));
}

void ShuffleNetV2::thread_grp_fu_22783_p1() {
    grp_fu_22783_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_23564_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state674.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond195_fu_23464_p2.read()))) {
        grp_fu_23564_ap_start = ap_const_logic_1;
    } else {
        grp_fu_23564_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_23564_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state678.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state685.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state674.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state675.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state676.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state677.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state679.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state680.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state681.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state682.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state683.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        grp_fu_23564_ce = ap_const_logic_1;
    } else {
        grp_fu_23564_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_23564_p0() {
    grp_fu_23564_p0 = (!tmp_245_cast_cast_fu_23510_p1.read().is_01() || !tmp_237_cast_cast_reg_44004.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_245_cast_cast_fu_23510_p1.read()) + sc_biguint<9>(tmp_237_cast_cast_reg_44004.read()));
}

void ShuffleNetV2::thread_grp_fu_23564_p1() {
    grp_fu_23564_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_24334_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state712.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond206_fu_24234_p2.read()))) {
        grp_fu_24334_ap_start = ap_const_logic_1;
    } else {
        grp_fu_24334_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_24334_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state714.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state723.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state712.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state713.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state715.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state716.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state717.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state718.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state719.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state720.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state721.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()))) {
        grp_fu_24334_ce = ap_const_logic_1;
    } else {
        grp_fu_24334_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_24334_p0() {
    grp_fu_24334_p0 = (!tmp_252_cast_cast_reg_44229.read().is_01() || !tmp_257_cast_cast_fu_24280_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_252_cast_cast_reg_44229.read()) + sc_bigint<9>(tmp_257_cast_cast_fu_24280_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_24334_p1() {
    grp_fu_24334_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_25123_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state769.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond217_fu_25023_p2.read()))) {
        grp_fu_25123_ap_start = ap_const_logic_1;
    } else {
        grp_fu_25123_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_25123_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state773.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state780.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state769.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state770.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state771.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state772.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state774.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state775.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state776.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state778.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state779.read()))) {
        grp_fu_25123_ce = ap_const_logic_1;
    } else {
        grp_fu_25123_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_25123_p0() {
    grp_fu_25123_p0 = (!tmp_274_cast_cast_fu_25069_p1.read().is_01() || !tmp_266_cast_cast_reg_44489.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_274_cast_cast_fu_25069_p1.read()) + sc_biguint<9>(tmp_266_cast_cast_reg_44489.read()));
}

void ShuffleNetV2::thread_grp_fu_25123_p1() {
    grp_fu_25123_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_25893_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state807.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond228_fu_25793_p2.read()))) {
        grp_fu_25893_ap_start = ap_const_logic_1;
    } else {
        grp_fu_25893_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_25893_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state811.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state818.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state807.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state808.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state809.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state810.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state812.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state814.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state815.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state816.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state817.read()))) {
        grp_fu_25893_ce = ap_const_logic_1;
    } else {
        grp_fu_25893_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_25893_p0() {
    grp_fu_25893_p0 = (!tmp_286_cast_cast_fu_25839_p1.read().is_01() || !tmp_281_cast_cast_reg_44714.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_286_cast_cast_fu_25839_p1.read()) + sc_biguint<9>(tmp_281_cast_cast_reg_44714.read()));
}

void ShuffleNetV2::thread_grp_fu_25893_p1() {
    grp_fu_25893_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_26666_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state864.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond239_fu_26566_p2.read()))) {
        grp_fu_26666_ap_start = ap_const_logic_1;
    } else {
        grp_fu_26666_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_26666_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state875.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state864.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state865.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state866.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state867.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state869.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state870.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state871.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state872.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state873.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state874.read()))) {
        grp_fu_26666_ce = ap_const_logic_1;
    } else {
        grp_fu_26666_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_26666_p0() {
    grp_fu_26666_p0 = (!tmp_303_cast_cast_fu_26612_p1.read().is_01() || !tmp_295_cast_cast_reg_44974.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_303_cast_cast_fu_26612_p1.read()) + sc_biguint<9>(tmp_295_cast_cast_reg_44974.read()));
}

void ShuffleNetV2::thread_grp_fu_26666_p1() {
    grp_fu_26666_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_27432_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state902.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond250_fu_27332_p2.read()))) {
        grp_fu_27432_ap_start = ap_const_logic_1;
    } else {
        grp_fu_27432_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_27432_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state906.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state913.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state902.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state903.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state905.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state907.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state908.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state909.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state910.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state911.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state912.read()))) {
        grp_fu_27432_ce = ap_const_logic_1;
    } else {
        grp_fu_27432_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_27432_p0() {
    grp_fu_27432_p0 = (!tmp_315_cast_cast_fu_27378_p1.read().is_01() || !tmp_310_cast_cast_reg_45199.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_315_cast_cast_fu_27378_p1.read()) + sc_biguint<9>(tmp_310_cast_cast_reg_45199.read()));
}

void ShuffleNetV2::thread_grp_fu_27432_p1() {
    grp_fu_27432_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_28213_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond261_fu_28113_p2.read()))) {
        grp_fu_28213_ap_start = ap_const_logic_1;
    } else {
        grp_fu_28213_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_28213_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state961.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state968.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state960.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state962.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state963.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state964.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state965.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state966.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state967.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state969.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state970.read()))) {
        grp_fu_28213_ce = ap_const_logic_1;
    } else {
        grp_fu_28213_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_28213_p0() {
    grp_fu_28213_p0 = (!tmp_332_cast_cast_fu_28159_p1.read().is_01() || !tmp_324_cast_cast_reg_45459.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_332_cast_cast_fu_28159_p1.read()) + sc_biguint<9>(tmp_324_cast_cast_reg_45459.read()));
}

void ShuffleNetV2::thread_grp_fu_28213_p1() {
    grp_fu_28213_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_28979_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state997.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond272_fu_28879_p2.read()))) {
        grp_fu_28979_ap_start = ap_const_logic_1;
    } else {
        grp_fu_28979_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_28979_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1001.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1008.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state997.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state998.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state999.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1000.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1002.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1003.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1004.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1005.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1006.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1007.read()))) {
        grp_fu_28979_ce = ap_const_logic_1;
    } else {
        grp_fu_28979_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_28979_p0() {
    grp_fu_28979_p0 = (!tmp_344_cast_cast_fu_28925_p1.read().is_01() || !tmp_339_cast_cast_reg_45684.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_344_cast_cast_fu_28925_p1.read()) + sc_biguint<9>(tmp_339_cast_cast_reg_45684.read()));
}

void ShuffleNetV2::thread_grp_fu_28979_p1() {
    grp_fu_28979_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_29764_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1054.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond283_fu_29664_p2.read()))) {
        grp_fu_29764_ap_start = ap_const_logic_1;
    } else {
        grp_fu_29764_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_29764_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1058.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1065.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1054.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1055.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1056.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1057.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1059.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1060.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1061.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1062.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1063.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1064.read()))) {
        grp_fu_29764_ce = ap_const_logic_1;
    } else {
        grp_fu_29764_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_29764_p0() {
    grp_fu_29764_p0 = (!tmp_361_cast_cast_fu_29710_p1.read().is_01() || !tmp_353_cast_cast_reg_45944.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_361_cast_cast_fu_29710_p1.read()) + sc_biguint<9>(tmp_353_cast_cast_reg_45944.read()));
}

void ShuffleNetV2::thread_grp_fu_29764_p1() {
    grp_fu_29764_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_30530_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1092.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond294_fu_30430_p2.read()))) {
        grp_fu_30530_ap_start = ap_const_logic_1;
    } else {
        grp_fu_30530_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_30530_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1096.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1103.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1092.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1093.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1094.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1095.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1097.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1098.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1099.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1100.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1101.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1102.read()))) {
        grp_fu_30530_ce = ap_const_logic_1;
    } else {
        grp_fu_30530_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_30530_p0() {
    grp_fu_30530_p0 = (!tmp_368_cast_cast_reg_46169.read().is_01() || !tmp_373_cast_cast_fu_30476_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_368_cast_cast_reg_46169.read()) + sc_bigint<9>(tmp_373_cast_cast_fu_30476_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_30530_p1() {
    grp_fu_30530_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_31315_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1149.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond422_fu_31215_p2.read()))) {
        grp_fu_31315_ap_start = ap_const_logic_1;
    } else {
        grp_fu_31315_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_31315_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1160.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1149.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1150.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1151.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1152.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1154.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1155.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1156.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1157.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1158.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1159.read()))) {
        grp_fu_31315_ce = ap_const_logic_1;
    } else {
        grp_fu_31315_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_31315_p0() {
    grp_fu_31315_p0 = (!tmp_382_cast_cast_reg_46429.read().is_01() || !tmp_390_cast_cast_fu_31261_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_382_cast_cast_reg_46429.read()) + sc_bigint<9>(tmp_390_cast_cast_fu_31261_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_31315_p1() {
    grp_fu_31315_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_32093_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1187.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond411_fu_31993_p2.read()))) {
        grp_fu_32093_ap_start = ap_const_logic_1;
    } else {
        grp_fu_32093_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_32093_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1191.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1198.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1187.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1188.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1190.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1192.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1193.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1194.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1195.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1196.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1197.read()))) {
        grp_fu_32093_ce = ap_const_logic_1;
    } else {
        grp_fu_32093_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_32093_p0() {
    grp_fu_32093_p0 = (!tmp_397_cast_cast_reg_46654.read().is_01() || !tmp_402_cast_cast_fu_32039_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_397_cast_cast_reg_46654.read()) + sc_bigint<9>(tmp_402_cast_cast_fu_32039_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_32093_p1() {
    grp_fu_32093_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_32890_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1244.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond400_fu_32782_p2.read()))) {
        grp_fu_32890_ap_start = ap_const_logic_1;
    } else {
        grp_fu_32890_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_32890_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1248.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1255.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1244.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1245.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1246.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1247.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1249.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1251.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1252.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1253.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1254.read()))) {
        grp_fu_32890_ce = ap_const_logic_1;
    } else {
        grp_fu_32890_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_32890_p0() {
    grp_fu_32890_p0 = (!tmp_419_cast_cast_fu_32828_p1.read().is_01() || !tmp_411_cast_cast_reg_46914.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_419_cast_cast_fu_32828_p1.read()) + sc_biguint<9>(tmp_411_cast_cast_reg_46914.read()));
}

void ShuffleNetV2::thread_grp_fu_32890_p1() {
    grp_fu_32890_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_33437_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond392_fu_33347_p2.read()))) {
        grp_fu_33437_ap_start = ap_const_logic_1;
    } else {
        grp_fu_33437_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_33437_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1283.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1290.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1278.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1280.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1281.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1282.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1284.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1285.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1286.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1287.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1288.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1289.read()))) {
        grp_fu_33437_ce = ap_const_logic_1;
    } else {
        grp_fu_33437_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_33437_p0() {
    grp_fu_33437_p0 = (!tmp_430_cast_cast_fu_33395_p1.read().is_01() || !tmp_425_cast_cast_reg_47085.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_430_cast_cast_fu_33395_p1.read()) + sc_biguint<10>(tmp_425_cast_cast_reg_47085.read()));
}

void ShuffleNetV2::thread_grp_fu_33437_p1() {
    grp_fu_33437_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_34206_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1336.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond381_fu_34116_p2.read()))) {
        grp_fu_34206_ap_start = ap_const_logic_1;
    } else {
        grp_fu_34206_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_34206_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1341.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1348.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1336.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1337.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1338.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1339.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1340.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1342.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1343.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1344.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1345.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1346.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1347.read()))) {
        grp_fu_34206_ce = ap_const_logic_1;
    } else {
        grp_fu_34206_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_34206_p0() {
    grp_fu_34206_p0 = (!tmp_447_cast_cast_fu_34164_p1.read().is_01() || !tmp_439_cast_cast_reg_47345.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_447_cast_cast_fu_34164_p1.read()) + sc_biguint<10>(tmp_439_cast_cast_reg_47345.read()));
}

void ShuffleNetV2::thread_grp_fu_34206_p1() {
    grp_fu_34206_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_34975_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1396.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond370_fu_34885_p2.read()))) {
        grp_fu_34975_ap_start = ap_const_logic_1;
    } else {
        grp_fu_34975_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_34975_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1398.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1408.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1396.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1397.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1399.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1400.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1401.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1402.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1403.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1404.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1405.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1406.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1407.read()))) {
        grp_fu_34975_ce = ap_const_logic_1;
    } else {
        grp_fu_34975_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_34975_p0() {
    grp_fu_34975_p0 = (!tmp_468_cast_cast_fu_34933_p1.read().is_01() || !tmp_456_cast_cast_reg_47605.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_468_cast_cast_fu_34933_p1.read()) + sc_biguint<10>(tmp_456_cast_cast_reg_47605.read()));
}

void ShuffleNetV2::thread_grp_fu_34975_p1() {
    grp_fu_34975_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_35610_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1432.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond362_fu_35520_p2.read()))) {
        grp_fu_35610_ap_start = ap_const_logic_1;
    } else {
        grp_fu_35610_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_35610_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1437.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1444.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1432.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1433.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1434.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1435.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1438.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1439.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1441.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1442.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1443.read()))) {
        grp_fu_35610_ce = ap_const_logic_1;
    } else {
        grp_fu_35610_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_35610_p0() {
    grp_fu_35610_p0 = (!tmp_476_cast_cast_fu_35568_p1.read().is_01() || !tmp_467_cast_cast_reg_47786.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_476_cast_cast_fu_35568_p1.read()) + sc_biguint<10>(tmp_467_cast_cast_reg_47786.read()));
}

void ShuffleNetV2::thread_grp_fu_35610_p1() {
    grp_fu_35610_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_36371_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1490.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond351_fu_36281_p2.read()))) {
        grp_fu_36371_ap_start = ap_const_logic_1;
    } else {
        grp_fu_36371_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_36371_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1495.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1502.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1490.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1491.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1492.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1494.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1496.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1497.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1498.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1500.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1501.read()))) {
        grp_fu_36371_ce = ap_const_logic_1;
    } else {
        grp_fu_36371_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_36371_p0() {
    grp_fu_36371_p0 = (!tmp_485_cast_cast_reg_48046.read().is_01() || !tmp_493_cast_cast_fu_36329_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_485_cast_cast_reg_48046.read()) + sc_bigint<10>(tmp_493_cast_cast_fu_36329_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_36371_p1() {
    grp_fu_36371_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_37137_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1529.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond340_fu_37047_p2.read()))) {
        grp_fu_37137_ap_start = ap_const_logic_1;
    } else {
        grp_fu_37137_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_37137_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1531.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1529.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1530.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1532.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1533.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1535.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1536.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1537.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1538.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1539.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1540.read()))) {
        grp_fu_37137_ce = ap_const_logic_1;
    } else {
        grp_fu_37137_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_37137_p0() {
    grp_fu_37137_p0 = (!tmp_505_cast_cast_fu_37095_p1.read().is_01() || !tmp_500_cast_cast_reg_48271.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_505_cast_cast_fu_37095_p1.read()) + sc_biguint<10>(tmp_500_cast_cast_reg_48271.read()));
}

void ShuffleNetV2::thread_grp_fu_37137_p1() {
    grp_fu_37137_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_37910_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1587.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond329_fu_37820_p2.read()))) {
        grp_fu_37910_ap_start = ap_const_logic_1;
    } else {
        grp_fu_37910_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_37910_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1592.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1599.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1587.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1588.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1589.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1590.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1593.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1594.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1595.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1596.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1597.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1598.read()))) {
        grp_fu_37910_ce = ap_const_logic_1;
    } else {
        grp_fu_37910_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_37910_p0() {
    grp_fu_37910_p0 = (!tmp_522_cast_cast_fu_37868_p1.read().is_01() || !tmp_514_cast_cast_reg_48531.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_522_cast_cast_fu_37868_p1.read()) + sc_biguint<10>(tmp_514_cast_cast_reg_48531.read()));
}

void ShuffleNetV2::thread_grp_fu_37910_p1() {
    grp_fu_37910_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_38668_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1626.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond318_fu_38578_p2.read()))) {
        grp_fu_38668_ap_start = ap_const_logic_1;
    } else {
        grp_fu_38668_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_38668_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1628.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1635.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1626.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1627.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1630.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1631.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1633.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1634.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1636.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1637.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1638.read()))) {
        grp_fu_38668_ce = ap_const_logic_1;
    } else {
        grp_fu_38668_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_38668_p0() {
    grp_fu_38668_p0 = (!tmp_534_cast_cast_fu_38626_p1.read().is_01() || !tmp_529_cast_cast_reg_48756.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_534_cast_cast_fu_38626_p1.read()) + sc_biguint<10>(tmp_529_cast_cast_reg_48756.read()));
}

void ShuffleNetV2::thread_grp_fu_38668_p1() {
    grp_fu_38668_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_39433_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1684.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond307_fu_39343_p2.read()))) {
        grp_fu_39433_ap_start = ap_const_logic_1;
    } else {
        grp_fu_39433_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_39433_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1689.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1696.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1684.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1685.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1687.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1688.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1690.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1691.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1692.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1693.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1694.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1695.read()))) {
        grp_fu_39433_ce = ap_const_logic_1;
    } else {
        grp_fu_39433_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_39433_p0() {
    grp_fu_39433_p0 = (!tmp_551_cast_cast_fu_39391_p1.read().is_01() || !tmp_543_cast_cast_reg_49016.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_551_cast_cast_fu_39391_p1.read()) + sc_biguint<10>(tmp_543_cast_cast_reg_49016.read()));
}

void ShuffleNetV2::thread_grp_fu_39433_p1() {
    grp_fu_39433_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_shuffle_24_l_p_fu_15230_ap_start() {
    grp_shuffle_24_l_p_fu_15230_ap_start = ap_reg_grp_shuffle_24_l_p_fu_15230_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_24_p_fu_15066_ap_start() {
    grp_shuffle_24_p_fu_15066_ap_start = ap_reg_grp_shuffle_24_p_fu_15066_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_24_r_p_fu_15284_ap_start() {
    grp_shuffle_24_r_p_fu_15284_ap_start = ap_reg_grp_shuffle_24_r_p_fu_15284_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_l_p_fu_15122_ap_start() {
    grp_shuffle_48_l_p_fu_15122_ap_start = ap_reg_grp_shuffle_48_l_p_fu_15122_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_p_fu_14878_ap_start() {
    grp_shuffle_48_p_fu_14878_ap_start = ap_reg_grp_shuffle_48_p_fu_14878_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_r_p_fu_15176_ap_start() {
    grp_shuffle_48_r_p_fu_15176_ap_start = ap_reg_grp_shuffle_48_r_p_fu_15176_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_l_p_fu_14958_ap_start() {
    grp_shuffle_96_l_p_fu_14958_ap_start = ap_reg_grp_shuffle_96_l_p_fu_14958_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_p_fu_14822_ap_start() {
    grp_shuffle_96_p_fu_14822_ap_start = ap_reg_grp_shuffle_96_p_fu_14822_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_r_p_fu_15012_ap_start() {
    grp_shuffle_96_r_p_fu_15012_ap_start = ap_reg_grp_shuffle_96_r_p_fu_15012_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_16_p_fu_14319_ap_start() {
    grp_subconv_1x1_16_p_fu_14319_ap_start = ap_reg_grp_subconv_1x1_16_p_fu_14319_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_16p_p_fu_14006_ap_start() {
    grp_subconv_1x1_16p_p_fu_14006_ap_start = ap_reg_grp_subconv_1x1_16p_p_fu_14006_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_32_p_fu_14169_ap_start() {
    grp_subconv_1x1_32_p_fu_14169_ap_start = ap_reg_grp_subconv_1x1_32_p_fu_14169_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_4_p_fu_13694_ap_start() {
    grp_subconv_1x1_4_p_fu_13694_ap_start = ap_reg_grp_subconv_1x1_4_p_fu_13694_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_8_p_fu_13902_ap_start() {
    grp_subconv_1x1_8_p_fu_13902_ap_start = ap_reg_grp_subconv_1x1_8_p_fu_13902_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_8p_p_fu_13798_ap_start() {
    grp_subconv_1x1_8p_p_fu_13798_ap_start = ap_reg_grp_subconv_1x1_8p_p_fu_13798_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_no_re_fu_14764_ap_start() {
    grp_subconv_3x3_16_no_re_fu_14764_ap_start = ap_reg_grp_subconv_3x3_16_no_re_fu_14764_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_strid_1_fu_14566_ap_start() {
    grp_subconv_3x3_16_strid_1_fu_14566_ap_start = ap_reg_grp_subconv_3x3_16_strid_1_fu_14566_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_strid_fu_14946_ap_start() {
    grp_subconv_3x3_16_strid_fu_14946_ap_start = ap_reg_grp_subconv_3x3_16_strid_fu_14946_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_32_strid_fu_14682_ap_start() {
    grp_subconv_3x3_32_strid_fu_14682_ap_start = ap_reg_grp_subconv_3x3_32_strid_fu_14682_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_32_strid_fu_14682_input_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        grp_subconv_3x3_32_strid_fu_14682_input_0_V_q0 = conv1_output_p_V_0_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        grp_subconv_3x3_32_strid_fu_14682_input_0_V_q0 = ShuffleConvs_0_Downs_23_q0.read();
    } else {
        grp_subconv_3x3_32_strid_fu_14682_input_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_subconv_3x3_32_strid_fu_14682_input_10_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        grp_subconv_3x3_32_strid_fu_14682_input_10_V_q0 = conv1_output_p_V_10_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        grp_subconv_3x3_32_strid_fu_14682_input_10_V_q0 = ShuffleConvs_0_Downs_21_q0.read();
    } else {
        grp_subconv_3x3_32_strid_fu_14682_input_10_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_subconv_3x3_32_strid_fu_14682_input_11_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        grp_subconv_3x3_32_strid_fu_14682_input_11_V_q0 = conv1_output_p_V_11_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        grp_subconv_3x3_32_strid_fu_14682_input_11_V_q0 = ShuffleConvs_0_Downs_20_q0.read();
    } else {
        grp_subconv_3x3_32_strid_fu_14682_input_11_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_subconv_3x3_32_strid_fu_14682_input_12_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        grp_subconv_3x3_32_strid_fu_14682_input_12_V_q0 = conv1_output_p_V_12_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        grp_subconv_3x3_32_strid_fu_14682_input_12_V_q0 = ShuffleConvs_0_Downs_19_q0.read();
    } else {
        grp_subconv_3x3_32_strid_fu_14682_input_12_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_subconv_3x3_32_strid_fu_14682_input_13_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        grp_subconv_3x3_32_strid_fu_14682_input_13_V_q0 = conv1_output_p_V_13_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        grp_subconv_3x3_32_strid_fu_14682_input_13_V_q0 = ShuffleConvs_0_Downs_18_q0.read();
    } else {
        grp_subconv_3x3_32_strid_fu_14682_input_13_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

}

