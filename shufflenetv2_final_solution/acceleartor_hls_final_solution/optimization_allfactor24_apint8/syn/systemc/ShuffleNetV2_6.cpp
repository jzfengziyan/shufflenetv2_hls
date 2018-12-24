#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_18_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_18_we0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_18_we0.read();
    } else {
        buffer1_1_96_4x4_p_V_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_18_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_18_we1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_18_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_18_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_19_address0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_19_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_19_address0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_19_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_19_address0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_19_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_19_address0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_19_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_19_address0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_19_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_19_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_19_ce0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_19_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_19_ce0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_19_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_19_ce0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_19_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_19_ce0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_19_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_19_ce0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_19_ce0.read();
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
        buffer1_1_96_4x4_p_V_19_ce1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_19_ce1.read();
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
        buffer1_1_96_4x4_p_V_19_we0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_19_we0.read();
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
        buffer1_1_96_4x4_p_V_19_we1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_19_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_19_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_1_address0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_1_address0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_1_address0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_1_address0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_1_address0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_1_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_1_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_1_ce0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_1_ce0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_1_ce0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_1_ce0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_1_ce0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_1_ce0.read();
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
        buffer1_1_96_4x4_p_V_1_ce1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_1_ce1.read();
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
        buffer1_1_96_4x4_p_V_1_we0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_1_we0.read();
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
        buffer1_1_96_4x4_p_V_1_we1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_1_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_1_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_20_address0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_20_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_20_address0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_20_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_20_address0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_20_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_20_address0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_20_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_20_address0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_20_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_20_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_20_ce0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_20_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_20_ce0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_20_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_20_ce0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_20_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_20_ce0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_20_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_20_ce0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_20_ce0.read();
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
        buffer1_1_96_4x4_p_V_20_ce1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_20_ce1.read();
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
        buffer1_1_96_4x4_p_V_20_we0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_20_we0.read();
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
        buffer1_1_96_4x4_p_V_20_we1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_20_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_20_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_21_address0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_21_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_21_address0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_21_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_21_address0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_21_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_21_address0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_21_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_21_address0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_21_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_21_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_21_ce0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_21_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_21_ce0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_21_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_21_ce0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_21_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_21_ce0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_21_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_21_ce0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_21_ce0.read();
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
        buffer1_1_96_4x4_p_V_21_ce1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_21_ce1.read();
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
        buffer1_1_96_4x4_p_V_21_we0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_21_we0.read();
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
        buffer1_1_96_4x4_p_V_21_we1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_21_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_21_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_22_address0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_22_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_22_address0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_22_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_22_address0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_22_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_22_address0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_22_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_22_address0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_22_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_22_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_22_ce0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_22_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_22_ce0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_22_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_22_ce0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_22_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_22_ce0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_22_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_22_ce0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_22_ce0.read();
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
        buffer1_1_96_4x4_p_V_22_ce1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_22_ce1.read();
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
        buffer1_1_96_4x4_p_V_22_we0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_22_we0.read();
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
        buffer1_1_96_4x4_p_V_22_we1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_22_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_22_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_23_address0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_23_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_23_address0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_23_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_23_address0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_23_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_23_address0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_23_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_23_address0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_23_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_23_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_23_ce0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_23_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_23_ce0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_23_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_23_ce0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_23_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_23_ce0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_23_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_23_ce0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_23_ce0.read();
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
        buffer1_1_96_4x4_p_V_23_ce1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_23_ce1.read();
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
        buffer1_1_96_4x4_p_V_23_we0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_23_we0.read();
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
        buffer1_1_96_4x4_p_V_23_we1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_23_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_23_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_24_address0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_24_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_24_address0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_24_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_24_address0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_24_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_24_address0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_24_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_24_address0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_24_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_24_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_24_ce0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_24_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_24_ce0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_24_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_24_ce0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_24_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_24_ce0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_24_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_24_ce0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_24_ce0.read();
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
        buffer1_1_96_4x4_p_V_24_ce1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_24_ce1.read();
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
        buffer1_1_96_4x4_p_V_24_we0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_24_we0.read();
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
        buffer1_1_96_4x4_p_V_24_we1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_24_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_24_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_2_address0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_2_address0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_2_address0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_2_address0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_2_address0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_2_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_2_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_2_ce0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_2_ce0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_2_ce0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_2_ce0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_2_ce0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_2_ce0.read();
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
        buffer1_1_96_4x4_p_V_2_ce1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_2_ce1.read();
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
        buffer1_1_96_4x4_p_V_2_we0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_2_we0.read();
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
        buffer1_1_96_4x4_p_V_2_we1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_2_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_2_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_3_address0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_3_address0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_3_address0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_3_address0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_3_address0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_3_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_3_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_3_ce0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_3_ce0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_3_ce0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_3_ce0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_3_ce0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_3_ce0.read();
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
        buffer1_1_96_4x4_p_V_3_ce1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_3_ce1.read();
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
        buffer1_1_96_4x4_p_V_3_we0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_3_we0.read();
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
        buffer1_1_96_4x4_p_V_3_we1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_3_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_3_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_4_address0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_4_address0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_4_address0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_4_address0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_4_address0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_4_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_4_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_4_ce0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_4_ce0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_4_ce0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_4_ce0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_4_ce0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_4_ce0.read();
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
        buffer1_1_96_4x4_p_V_4_ce1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_4_ce1.read();
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
        buffer1_1_96_4x4_p_V_4_we0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_4_we0.read();
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
        buffer1_1_96_4x4_p_V_4_we1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_4_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_4_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_5_address0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_5_address0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_5_address0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_5_address0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_5_address0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_5_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_5_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_5_ce0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_5_ce0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_5_ce0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_5_ce0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_5_ce0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_5_ce0.read();
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
        buffer1_1_96_4x4_p_V_5_ce1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_5_ce1.read();
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
        buffer1_1_96_4x4_p_V_5_we0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_5_we0.read();
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
        buffer1_1_96_4x4_p_V_5_we1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_5_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_5_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_6_address0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_6_address0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_6_address0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_6_address0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_6_address0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_6_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_6_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_6_ce0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_6_ce0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_6_ce0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_6_ce0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_6_ce0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_6_ce0.read();
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
        buffer1_1_96_4x4_p_V_6_ce1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_6_ce1.read();
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
        buffer1_1_96_4x4_p_V_6_we0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_6_we0.read();
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
        buffer1_1_96_4x4_p_V_6_we1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_6_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_6_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_7_address0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_7_address0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_7_address0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_7_address0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_7_address0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_7_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_7_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_7_ce0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_7_ce0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_7_ce0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_7_ce0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_7_ce0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_7_ce0.read();
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
        buffer1_1_96_4x4_p_V_7_ce1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_7_ce1.read();
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
        buffer1_1_96_4x4_p_V_7_we0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_7_we0.read();
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
        buffer1_1_96_4x4_p_V_7_we1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_7_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_7_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_8_address0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_8_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_8_address0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_8_address0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_8_address0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_8_address0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_8_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_8_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_8_ce0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_8_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_8_ce0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_8_ce0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_8_ce0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_8_ce0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_8_ce0.read();
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
        buffer1_1_96_4x4_p_V_8_ce1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_8_ce1.read();
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
        buffer1_1_96_4x4_p_V_8_we0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_8_we0.read();
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
        buffer1_1_96_4x4_p_V_8_we1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_8_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_8_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_9_address0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_9_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_9_address0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_9_address0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_9_address0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_9_address0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_9_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_9_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_9_ce0 = grp_shuffle_96_r_p_fu_15009_buffer1_1_96_4x4_p_V_9_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_9_ce0 = grp_shuffle_96_l_p_fu_14955_buffer1_1_96_4x4_p_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_9_ce0 = grp_shuffle_96_p_fu_14727_buffer1_1_96_4x4_p_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_9_ce0 = grp_subconv_3x3_4_no_rel_fu_14495_buffer1_1_96_4x4_p_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_9_ce0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_9_ce0.read();
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
        buffer1_1_96_4x4_p_V_9_ce1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_9_ce1.read();
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
        buffer1_1_96_4x4_p_V_9_we0 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_9_we0.read();
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
        buffer1_1_96_4x4_p_V_9_we1 = grp_subconv_1x1_4_p_fu_13831_buffer1_1_96_4x4_p_V_9_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_9_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ci10_cast_fu_16037_p1() {
    ci10_cast_fu_16037_p1 = esl_zext<32,5>(ci10_reg_9851.read());
}

void ShuffleNetV2::thread_ci17_cast_fu_16381_p1() {
    ci17_cast_fu_16381_p1 = esl_zext<32,5>(ci17_reg_9929.read());
}

void ShuffleNetV2::thread_ci22_cast_fu_16718_p1() {
    ci22_cast_fu_16718_p1 = esl_zext<32,5>(ci22_reg_9996.read());
}

void ShuffleNetV2::thread_ci24_cast_fu_17041_p1() {
    ci24_cast_fu_17041_p1 = esl_zext<32,5>(ci24_reg_10074.read());
}

void ShuffleNetV2::thread_ci26_cast_fu_17524_p1() {
    ci26_cast_fu_17524_p1 = esl_zext<32,5>(ci26_reg_10174.read());
}

void ShuffleNetV2::thread_ci28_cast_fu_17856_p1() {
    ci28_cast_fu_17856_p1 = esl_zext<32,5>(ci28_reg_10252.read());
}

void ShuffleNetV2::thread_ci30_cast_fu_18301_p1() {
    ci30_cast_fu_18301_p1 = esl_zext<32,5>(ci30_reg_10352.read());
}

void ShuffleNetV2::thread_ci32_cast_fu_18670_p1() {
    ci32_cast_fu_18670_p1 = esl_zext<32,5>(ci32_reg_10430.read());
}

void ShuffleNetV2::thread_ci34_cast1_cast_fu_18913_p1() {
    ci34_cast1_cast_fu_18913_p1 = esl_zext<16,5>(ci34_reg_10496.read());
}

void ShuffleNetV2::thread_ci34_cast_fu_18909_p1() {
    ci34_cast_fu_18909_p1 = esl_zext<7,5>(ci34_reg_10496.read());
}

void ShuffleNetV2::thread_ci36_cast1_cast_fu_19694_p1() {
    ci36_cast1_cast_fu_19694_p1 = esl_zext<16,5>(ci36_reg_10617.read());
}

void ShuffleNetV2::thread_ci36_cast_fu_19690_p1() {
    ci36_cast_fu_19690_p1 = esl_zext<7,5>(ci36_reg_10617.read());
}

void ShuffleNetV2::thread_ci38_cast1_cast_fu_20471_p1() {
    ci38_cast1_cast_fu_20471_p1 = esl_zext<17,5>(ci38_reg_10738.read());
}

void ShuffleNetV2::thread_ci38_cast_fu_20467_p1() {
    ci38_cast_fu_20467_p1 = esl_zext<7,5>(ci38_reg_10738.read());
}

void ShuffleNetV2::thread_ci3_cast_fu_15762_p1() {
    ci3_cast_fu_15762_p1 = esl_zext<32,5>(ci3_reg_9773.read());
}

void ShuffleNetV2::thread_ci40_cast1_cast_fu_21122_p1() {
    ci40_cast1_cast_fu_21122_p1 = esl_zext<17,5>(ci40_reg_10826.read());
}

void ShuffleNetV2::thread_ci40_cast_fu_21118_p1() {
    ci40_cast_fu_21118_p1 = esl_zext<7,5>(ci40_reg_10826.read());
}

void ShuffleNetV2::thread_ci42_cast1_cast_fu_21903_p1() {
    ci42_cast1_cast_fu_21903_p1 = esl_zext<17,5>(ci42_reg_10947.read());
}

void ShuffleNetV2::thread_ci42_cast_fu_21899_p1() {
    ci42_cast_fu_21899_p1 = esl_zext<7,5>(ci42_reg_10947.read());
}

void ShuffleNetV2::thread_ci44_cast1_cast_fu_22669_p1() {
    ci44_cast1_cast_fu_22669_p1 = esl_zext<17,5>(ci44_reg_11068.read());
}

void ShuffleNetV2::thread_ci44_cast_fu_22665_p1() {
    ci44_cast_fu_22665_p1 = esl_zext<7,5>(ci44_reg_11068.read());
}

void ShuffleNetV2::thread_ci46_cast1_cast_fu_23450_p1() {
    ci46_cast1_cast_fu_23450_p1 = esl_zext<17,5>(ci46_reg_11189.read());
}

void ShuffleNetV2::thread_ci46_cast_fu_23446_p1() {
    ci46_cast_fu_23446_p1 = esl_zext<7,5>(ci46_reg_11189.read());
}

void ShuffleNetV2::thread_ci48_cast1_cast_fu_24220_p1() {
    ci48_cast1_cast_fu_24220_p1 = esl_zext<17,5>(ci48_reg_11310.read());
}

void ShuffleNetV2::thread_ci48_cast_fu_24216_p1() {
    ci48_cast_fu_24216_p1 = esl_zext<7,5>(ci48_reg_11310.read());
}

void ShuffleNetV2::thread_ci50_cast1_cast_fu_25009_p1() {
    ci50_cast1_cast_fu_25009_p1 = esl_zext<18,5>(ci50_reg_11431.read());
}

void ShuffleNetV2::thread_ci50_cast_fu_25005_p1() {
    ci50_cast_fu_25005_p1 = esl_zext<7,5>(ci50_reg_11431.read());
}

void ShuffleNetV2::thread_ci52_cast1_cast_fu_25779_p1() {
    ci52_cast1_cast_fu_25779_p1 = esl_zext<18,5>(ci52_reg_11552.read());
}

void ShuffleNetV2::thread_ci52_cast_fu_25775_p1() {
    ci52_cast_fu_25775_p1 = esl_zext<7,5>(ci52_reg_11552.read());
}

void ShuffleNetV2::thread_ci54_cast1_cast_fu_26552_p1() {
    ci54_cast1_cast_fu_26552_p1 = esl_zext<18,5>(ci54_reg_11673.read());
}

void ShuffleNetV2::thread_ci54_cast_fu_26548_p1() {
    ci54_cast_fu_26548_p1 = esl_zext<7,5>(ci54_reg_11673.read());
}

void ShuffleNetV2::thread_ci56_cast1_cast_fu_27318_p1() {
    ci56_cast1_cast_fu_27318_p1 = esl_zext<18,5>(ci56_reg_11794.read());
}

void ShuffleNetV2::thread_ci56_cast_fu_27314_p1() {
    ci56_cast_fu_27314_p1 = esl_zext<7,5>(ci56_reg_11794.read());
}

void ShuffleNetV2::thread_ci58_cast1_cast_fu_28099_p1() {
    ci58_cast1_cast_fu_28099_p1 = esl_zext<18,5>(ci58_reg_11915.read());
}

void ShuffleNetV2::thread_ci58_cast_fu_28095_p1() {
    ci58_cast_fu_28095_p1 = esl_zext<7,5>(ci58_reg_11915.read());
}

void ShuffleNetV2::thread_ci60_cast1_cast_fu_28865_p1() {
    ci60_cast1_cast_fu_28865_p1 = esl_zext<18,5>(ci60_reg_12036.read());
}

void ShuffleNetV2::thread_ci60_cast_fu_28861_p1() {
    ci60_cast_fu_28861_p1 = esl_zext<7,5>(ci60_reg_12036.read());
}

void ShuffleNetV2::thread_ci62_cast1_cast_fu_29650_p1() {
    ci62_cast1_cast_fu_29650_p1 = esl_zext<18,5>(ci62_reg_12157.read());
}

void ShuffleNetV2::thread_ci62_cast_fu_29646_p1() {
    ci62_cast_fu_29646_p1 = esl_zext<7,5>(ci62_reg_12157.read());
}

void ShuffleNetV2::thread_ci64_cast1_cast_fu_30416_p1() {
    ci64_cast1_cast_fu_30416_p1 = esl_zext<18,5>(ci64_reg_12278.read());
}

void ShuffleNetV2::thread_ci64_cast_fu_30412_p1() {
    ci64_cast_fu_30412_p1 = esl_zext<7,5>(ci64_reg_12278.read());
}

void ShuffleNetV2::thread_ci66_cast1_cast_fu_31201_p1() {
    ci66_cast1_cast_fu_31201_p1 = esl_zext<18,5>(ci66_reg_12399.read());
}

void ShuffleNetV2::thread_ci66_cast_fu_31197_p1() {
    ci66_cast_fu_31197_p1 = esl_zext<7,5>(ci66_reg_12399.read());
}

void ShuffleNetV2::thread_ci68_cast1_cast_fu_31979_p1() {
    ci68_cast1_cast_fu_31979_p1 = esl_zext<18,5>(ci68_reg_12520.read());
}

void ShuffleNetV2::thread_ci68_cast_fu_31975_p1() {
    ci68_cast_fu_31975_p1 = esl_zext<7,5>(ci68_reg_12520.read());
}

void ShuffleNetV2::thread_ci70_cast1_cast_fu_32768_p1() {
    ci70_cast1_cast_fu_32768_p1 = esl_zext<19,5>(ci70_reg_12641.read());
}

void ShuffleNetV2::thread_ci70_cast_fu_32764_p1() {
    ci70_cast_fu_32764_p1 = esl_zext<7,5>(ci70_reg_12641.read());
}

void ShuffleNetV2::thread_ci72_cast1_cast_fu_33333_p1() {
    ci72_cast1_cast_fu_33333_p1 = esl_zext<19,5>(ci72_reg_12729.read());
}

void ShuffleNetV2::thread_ci72_cast_fu_33329_p1() {
    ci72_cast_fu_33329_p1 = esl_zext<8,5>(ci72_reg_12729.read());
}

void ShuffleNetV2::thread_ci74_cast1_cast_fu_34102_p1() {
    ci74_cast1_cast_fu_34102_p1 = esl_zext<19,5>(ci74_reg_12850.read());
}

void ShuffleNetV2::thread_ci74_cast_fu_34098_p1() {
    ci74_cast_fu_34098_p1 = esl_zext<8,5>(ci74_reg_12850.read());
}

void ShuffleNetV2::thread_ci76_cast1_cast_fu_34871_p1() {
    ci76_cast1_cast_fu_34871_p1 = esl_zext<19,5>(ci76_reg_12971.read());
}

void ShuffleNetV2::thread_ci76_cast_fu_34867_p1() {
    ci76_cast_fu_34867_p1 = esl_zext<8,5>(ci76_reg_12971.read());
}

void ShuffleNetV2::thread_ci78_cast1_cast_fu_35506_p1() {
    ci78_cast1_cast_fu_35506_p1 = esl_zext<19,5>(ci78_reg_13059.read());
}

void ShuffleNetV2::thread_ci78_cast_fu_35502_p1() {
    ci78_cast_fu_35502_p1 = esl_zext<8,5>(ci78_reg_13059.read());
}

void ShuffleNetV2::thread_ci80_cast1_cast_fu_36267_p1() {
    ci80_cast1_cast_fu_36267_p1 = esl_zext<19,5>(ci80_reg_13180.read());
}

void ShuffleNetV2::thread_ci80_cast_fu_36263_p1() {
    ci80_cast_fu_36263_p1 = esl_zext<8,5>(ci80_reg_13180.read());
}

void ShuffleNetV2::thread_ci82_cast1_cast_fu_37033_p1() {
    ci82_cast1_cast_fu_37033_p1 = esl_zext<20,5>(ci82_reg_13301.read());
}

void ShuffleNetV2::thread_ci82_cast_fu_37029_p1() {
    ci82_cast_fu_37029_p1 = esl_zext<8,5>(ci82_reg_13301.read());
}

void ShuffleNetV2::thread_ci84_cast1_cast_fu_37806_p1() {
    ci84_cast1_cast_fu_37806_p1 = esl_zext<20,5>(ci84_reg_13422.read());
}

void ShuffleNetV2::thread_ci84_cast_fu_37802_p1() {
    ci84_cast_fu_37802_p1 = esl_zext<8,5>(ci84_reg_13422.read());
}

void ShuffleNetV2::thread_ci86_cast1_cast_fu_38564_p1() {
    ci86_cast1_cast_fu_38564_p1 = esl_zext<20,5>(ci86_reg_13543.read());
}

void ShuffleNetV2::thread_ci86_cast_fu_38560_p1() {
    ci86_cast_fu_38560_p1 = esl_zext<8,5>(ci86_reg_13543.read());
}

void ShuffleNetV2::thread_ci88_cast1_cast_fu_39329_p1() {
    ci88_cast1_cast_fu_39329_p1 = esl_zext<20,5>(ci88_reg_13664.read());
}

void ShuffleNetV2::thread_ci88_cast_fu_39325_p1() {
    ci88_cast_fu_39325_p1 = esl_zext<8,5>(ci88_reg_13664.read());
}

void ShuffleNetV2::thread_ci_18_fu_15586_p2() {
    ci_18_fu_15586_p2 = (!ci_reg_9728.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(ci_reg_9728.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_ci_19_fu_15796_p2() {
    ci_19_fu_15796_p2 = (!ci3_reg_9773.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci3_reg_9773.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_20_fu_16071_p2() {
    ci_20_fu_16071_p2 = (!ci10_reg_9851.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci10_reg_9851.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_21_fu_16415_p2() {
    ci_21_fu_16415_p2 = (!ci17_reg_9929.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci17_reg_9929.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_23_fu_16752_p2() {
    ci_23_fu_16752_p2 = (!ci22_reg_9996.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci22_reg_9996.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_25_fu_17075_p2() {
    ci_25_fu_17075_p2 = (!ci24_reg_10074.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci24_reg_10074.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_27_fu_17558_p2() {
    ci_27_fu_17558_p2 = (!ci26_reg_10174.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci26_reg_10174.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_29_fu_17890_p2() {
    ci_29_fu_17890_p2 = (!ci28_reg_10252.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci28_reg_10252.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_31_fu_18335_p2() {
    ci_31_fu_18335_p2 = (!ci30_reg_10352.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci30_reg_10352.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_33_fu_18704_p2() {
    ci_33_fu_18704_p2 = (!ci32_reg_10430.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci32_reg_10430.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_35_fu_18923_p2() {
    ci_35_fu_18923_p2 = (!ci34_reg_10496.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci34_reg_10496.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_37_fu_19704_p2() {
    ci_37_fu_19704_p2 = (!ci36_reg_10617.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci36_reg_10617.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_39_fu_20481_p2() {
    ci_39_fu_20481_p2 = (!ci38_reg_10738.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci38_reg_10738.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_41_fu_21132_p2() {
    ci_41_fu_21132_p2 = (!ci40_reg_10826.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci40_reg_10826.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_43_fu_21913_p2() {
    ci_43_fu_21913_p2 = (!ci42_reg_10947.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci42_reg_10947.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_45_fu_22679_p2() {
    ci_45_fu_22679_p2 = (!ci44_reg_11068.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci44_reg_11068.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_47_fu_23460_p2() {
    ci_47_fu_23460_p2 = (!ci46_reg_11189.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci46_reg_11189.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_49_fu_24230_p2() {
    ci_49_fu_24230_p2 = (!ci48_reg_11310.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci48_reg_11310.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_51_fu_25019_p2() {
    ci_51_fu_25019_p2 = (!ci50_reg_11431.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci50_reg_11431.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_53_fu_25789_p2() {
    ci_53_fu_25789_p2 = (!ci52_reg_11552.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci52_reg_11552.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_55_fu_26562_p2() {
    ci_55_fu_26562_p2 = (!ci54_reg_11673.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci54_reg_11673.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_57_fu_27328_p2() {
    ci_57_fu_27328_p2 = (!ci56_reg_11794.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci56_reg_11794.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_59_fu_28109_p2() {
    ci_59_fu_28109_p2 = (!ci58_reg_11915.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci58_reg_11915.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_61_fu_28875_p2() {
    ci_61_fu_28875_p2 = (!ci60_reg_12036.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci60_reg_12036.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_63_fu_29660_p2() {
    ci_63_fu_29660_p2 = (!ci62_reg_12157.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci62_reg_12157.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_65_fu_30426_p2() {
    ci_65_fu_30426_p2 = (!ci64_reg_12278.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci64_reg_12278.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_67_fu_31211_p2() {
    ci_67_fu_31211_p2 = (!ci66_reg_12399.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci66_reg_12399.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_69_fu_31989_p2() {
    ci_69_fu_31989_p2 = (!ci68_reg_12520.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci68_reg_12520.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_71_fu_32778_p2() {
    ci_71_fu_32778_p2 = (!ci70_reg_12641.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci70_reg_12641.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_73_fu_33343_p2() {
    ci_73_fu_33343_p2 = (!ci72_reg_12729.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci72_reg_12729.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_75_fu_34112_p2() {
    ci_75_fu_34112_p2 = (!ci74_reg_12850.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci74_reg_12850.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_77_fu_34881_p2() {
    ci_77_fu_34881_p2 = (!ci76_reg_12971.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci76_reg_12971.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_79_fu_35516_p2() {
    ci_79_fu_35516_p2 = (!ci78_reg_13059.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci78_reg_13059.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_81_fu_36277_p2() {
    ci_81_fu_36277_p2 = (!ci80_reg_13180.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci80_reg_13180.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_83_fu_37043_p2() {
    ci_83_fu_37043_p2 = (!ci82_reg_13301.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci82_reg_13301.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_85_fu_37816_p2() {
    ci_85_fu_37816_p2 = (!ci84_reg_13422.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci84_reg_13422.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_87_fu_38574_p2() {
    ci_87_fu_38574_p2 = (!ci86_reg_13543.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci86_reg_13543.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_89_fu_39339_p2() {
    ci_89_fu_39339_p2 = (!ci88_reg_13664.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci88_reg_13664.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_91_fu_39862_p2() {
    ci_91_fu_39862_p2 = (!ci90_reg_13741.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ci90_reg_13741.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void ShuffleNetV2::thread_co102_cast1_fu_26151_p1() {
    co102_cast1_fu_26151_p1 = esl_zext<7,5>(co101_reg_11596.read());
}

void ShuffleNetV2::thread_co102_cast_fu_26147_p1() {
    co102_cast_fu_26147_p1 = esl_zext<9,5>(co101_reg_11596.read());
}

void ShuffleNetV2::thread_co104_cast_fu_26484_p1() {
    co104_cast_fu_26484_p1 = esl_zext<11,5>(co103_reg_11662.read());
}

void ShuffleNetV2::thread_co107_cast_fu_27069_p1() {
    co107_cast_fu_27069_p1 = esl_zext<7,6>(co107_reg_11750.read());
}

void ShuffleNetV2::thread_co109_cast_fu_27250_p1() {
    co109_cast_fu_27250_p1 = esl_zext<11,5>(co109_reg_11783.read());
}

void ShuffleNetV2::thread_co112_cast403_cast_fu_27686_p1() {
    co112_cast403_cast_fu_27686_p1 = esl_zext<8,5>(co111_reg_11838.read());
}

void ShuffleNetV2::thread_co112_cast_fu_27690_p1() {
    co112_cast_fu_27690_p1 = esl_zext<7,5>(co111_reg_11838.read());
}

void ShuffleNetV2::thread_co114_cast_fu_28031_p1() {
    co114_cast_fu_28031_p1 = esl_zext<11,5>(co113_reg_11904.read());
}

void ShuffleNetV2::thread_co117_cast_fu_28616_p1() {
    co117_cast_fu_28616_p1 = esl_zext<7,6>(co117_reg_11992.read());
}

void ShuffleNetV2::thread_co119_cast_fu_28797_p1() {
    co119_cast_fu_28797_p1 = esl_zext<11,5>(co119_reg_12025.read());
}

void ShuffleNetV2::thread_co122_cast365_cast_fu_29233_p1() {
    co122_cast365_cast_fu_29233_p1 = esl_zext<8,5>(co121_reg_12080.read());
}

void ShuffleNetV2::thread_co122_cast_fu_29237_p1() {
    co122_cast_fu_29237_p1 = esl_zext<7,5>(co121_reg_12080.read());
}

void ShuffleNetV2::thread_co124_cast_fu_29582_p1() {
    co124_cast_fu_29582_p1 = esl_zext<11,5>(co123_reg_12146.read());
}

void ShuffleNetV2::thread_co127_cast_fu_30167_p1() {
    co127_cast_fu_30167_p1 = esl_zext<7,6>(co127_reg_12234.read());
}

void ShuffleNetV2::thread_co129_cast340_cast_fu_30348_p1() {
    co129_cast340_cast_fu_30348_p1 = esl_zext<10,5>(co129_reg_12267.read());
}

void ShuffleNetV2::thread_co12_cast1_cast_fu_16093_p1() {
    co12_cast1_cast_fu_16093_p1 = esl_zext<8,5>(co12_reg_9873.read());
}

void ShuffleNetV2::thread_co12_cast_fu_16119_p1() {
    co12_cast_fu_16119_p1 = esl_zext<6,5>(co12_reg_9873.read());
}

void ShuffleNetV2::thread_co132_cast1_fu_30796_p1() {
    co132_cast1_fu_30796_p1 = esl_zext<7,5>(co131_reg_12322.read());
}

void ShuffleNetV2::thread_co132_cast_fu_30792_p1() {
    co132_cast_fu_30792_p1 = esl_zext<10,5>(co131_reg_12322.read());
}

void ShuffleNetV2::thread_co134_cast317_cast_fu_31133_p1() {
    co134_cast317_cast_fu_31133_p1 = esl_zext<10,5>(co133_reg_12388.read());
}

void ShuffleNetV2::thread_co137_cast_fu_31730_p1() {
    co137_cast_fu_31730_p1 = esl_zext<7,6>(co137_reg_12476.read());
}

void ShuffleNetV2::thread_co139_cast302_cast_fu_31911_p1() {
    co139_cast302_cast_fu_31911_p1 = esl_zext<9,5>(co139_reg_12509.read());
}

void ShuffleNetV2::thread_co142_cast1_fu_32363_p1() {
    co142_cast1_fu_32363_p1 = esl_zext<7,5>(co141_reg_12564.read());
}

void ShuffleNetV2::thread_co142_cast_fu_32359_p1() {
    co142_cast_fu_32359_p1 = esl_zext<10,5>(co141_reg_12564.read());
}

void ShuffleNetV2::thread_co144_cast_fu_32700_p1() {
    co144_cast_fu_32700_p1 = esl_zext<12,5>(co143_reg_12630.read());
}

void ShuffleNetV2::thread_co147_cast_fu_33267_p1() {
    co147_cast_fu_33267_p1 = esl_zext<12,5>(co147_reg_12718.read());
}

void ShuffleNetV2::thread_co150_cast1_fu_33699_p1() {
    co150_cast1_fu_33699_p1 = esl_zext<8,5>(co149_reg_12773.read());
}

void ShuffleNetV2::thread_co150_cast_fu_33695_p1() {
    co150_cast_fu_33695_p1 = esl_zext<10,5>(co149_reg_12773.read());
}

void ShuffleNetV2::thread_co152_cast_fu_34036_p1() {
    co152_cast_fu_34036_p1 = esl_zext<12,5>(co151_reg_12839.read());
}

void ShuffleNetV2::thread_co154_cast1_fu_34472_p1() {
    co154_cast1_fu_34472_p1 = esl_zext<8,5>(co153_reg_12894.read());
}

void ShuffleNetV2::thread_co154_cast_fu_34468_p1() {
    co154_cast_fu_34468_p1 = esl_zext<10,5>(co153_reg_12894.read());
}

void ShuffleNetV2::thread_co156_cast_fu_34805_p1() {
    co156_cast_fu_34805_p1 = esl_zext<12,5>(co155_reg_12960.read());
}

void ShuffleNetV2::thread_co158_cast_fu_35263_p1() {
    co158_cast_fu_35263_p1 = esl_zext<8,7>(co157_reg_13015.read());
}

void ShuffleNetV2::thread_co159_cast_fu_35440_p1() {
    co159_cast_fu_35440_p1 = esl_zext<12,5>(co159_reg_13048.read());
}

void ShuffleNetV2::thread_co162_cast1_fu_35868_p1() {
    co162_cast1_fu_35868_p1 = esl_zext<8,5>(co161_reg_13103.read());
}

void ShuffleNetV2::thread_co162_cast_fu_35864_p1() {
    co162_cast_fu_35864_p1 = esl_zext<10,5>(co161_reg_13103.read());
}

void ShuffleNetV2::thread_co164_cast182_cast_fu_36201_p1() {
    co164_cast182_cast_fu_36201_p1 = esl_zext<11,5>(co163_reg_13169.read());
}

void ShuffleNetV2::thread_co167_cast_fu_36790_p1() {
    co167_cast_fu_36790_p1 = esl_zext<8,7>(co167_reg_13257.read());
}

void ShuffleNetV2::thread_co169_cast_fu_36967_p1() {
    co169_cast_fu_36967_p1 = esl_zext<13,5>(co169_reg_13290.read());
}

void ShuffleNetV2::thread_co16_cast_fu_16303_p1() {
    co16_cast_fu_16303_p1 = esl_zext<7,5>(co16_reg_9917.read());
}

void ShuffleNetV2::thread_co172_cast154_cast_fu_37391_p1() {
    co172_cast154_cast_fu_37391_p1 = esl_zext<9,5>(co171_reg_13345.read());
}

void ShuffleNetV2::thread_co172_cast_fu_37395_p1() {
    co172_cast_fu_37395_p1 = esl_zext<8,5>(co171_reg_13345.read());
}

void ShuffleNetV2::thread_co174_cast_fu_37740_p1() {
    co174_cast_fu_37740_p1 = esl_zext<13,5>(co173_reg_13411.read());
}

void ShuffleNetV2::thread_co177_cast_fu_38321_p1() {
    co177_cast_fu_38321_p1 = esl_zext<8,7>(co177_reg_13499.read());
}

void ShuffleNetV2::thread_co179_cast_fu_38498_p1() {
    co179_cast_fu_38498_p1 = esl_zext<13,5>(co179_reg_13532.read());
}

void ShuffleNetV2::thread_co182_cast1_fu_38926_p1() {
    co182_cast1_fu_38926_p1 = esl_zext<8,5>(co181_reg_13587.read());
}

void ShuffleNetV2::thread_co182_cast_fu_38922_p1() {
    co182_cast_fu_38922_p1 = esl_zext<11,5>(co181_reg_13587.read());
}

void ShuffleNetV2::thread_co184_cast_fu_39263_p1() {
    co184_cast_fu_39263_p1 = esl_zext<13,5>(co183_reg_13653.read());
}

void ShuffleNetV2::thread_co19_cast_fu_16467_p1() {
    co19_cast_fu_16467_p1 = esl_zext<6,5>(co19_reg_9951.read());
}

void ShuffleNetV2::thread_co22_cast_fu_16640_p1() {
    co22_cast_fu_16640_p1 = esl_zext<7,5>(co22_reg_9984.read());
}

void ShuffleNetV2::thread_co25_cast1_cast_fu_16778_p1() {
    co25_cast1_cast_fu_16778_p1 = esl_zext<8,5>(co25_reg_10018.read());
}

void ShuffleNetV2::thread_co25_cast_fu_16774_p1() {
    co25_cast_fu_16774_p1 = esl_zext<7,5>(co25_reg_10018.read());
}

void ShuffleNetV2::thread_co35_cast_fu_17273_p1() {
    co35_cast_fu_17273_p1 = esl_zext<6,5>(co35_reg_10129.read());
}

void ShuffleNetV2::thread_co38_cast_fu_17446_p1() {
    co38_cast_fu_17446_p1 = esl_zext<8,5>(co38_reg_10162.read());
}

void ShuffleNetV2::thread_co41_cast1_cast_fu_17584_p1() {
    co41_cast1_cast_fu_17584_p1 = esl_zext<8,5>(co41_reg_10196.read());
}

void ShuffleNetV2::thread_co41_cast_fu_17580_p1() {
    co41_cast_fu_17580_p1 = esl_zext<7,5>(co41_reg_10196.read());
}

void ShuffleNetV2::thread_co44_cast_fu_17778_p1() {
    co44_cast_fu_17778_p1 = esl_zext<8,5>(co44_reg_10240.read());
}

void ShuffleNetV2::thread_co47_cast_fu_18061_p1() {
    co47_cast_fu_18061_p1 = esl_zext<6,5>(co47_reg_10307.read());
}

void ShuffleNetV2::thread_co49_cast_fu_18234_p1() {
    co49_cast_fu_18234_p1 = esl_zext<8,5>(co49_reg_10340.read());
}

void ShuffleNetV2::thread_co52_cast_cast_fu_18380_p1() {
    co52_cast_cast_fu_18380_p1 = esl_zext<8,5>(co52_reg_10374.read());
}

void ShuffleNetV2::thread_co57_cast_fu_18845_p1() {
    co57_cast_fu_18845_p1 = esl_zext<9,5>(co57_reg_10485.read());
}

void ShuffleNetV2::thread_co5_cast_cast_fu_15818_p1() {
    co5_cast_cast_fu_15818_p1 = esl_zext<8,5>(co5_reg_9795.read());
}

void ShuffleNetV2::thread_co60_cast1_fu_19285_p1() {
    co60_cast1_fu_19285_p1 = esl_zext<7,5>(co59_reg_10540.read());
}

void ShuffleNetV2::thread_co60_cast_fu_19281_p1() {
    co60_cast_fu_19281_p1 = esl_zext<8,5>(co59_reg_10540.read());
}

void ShuffleNetV2::thread_co62_cast_fu_19626_p1() {
    co62_cast_fu_19626_p1 = esl_zext<9,5>(co61_reg_10606.read());
}

void ShuffleNetV2::thread_co64_cast1_fu_20070_p1() {
    co64_cast1_fu_20070_p1 = esl_zext<7,5>(co63_reg_10661.read());
}

void ShuffleNetV2::thread_co64_cast_fu_20066_p1() {
    co64_cast_fu_20066_p1 = esl_zext<8,5>(co63_reg_10661.read());
}

void ShuffleNetV2::thread_co66_cast_fu_20403_p1() {
    co66_cast_fu_20403_p1 = esl_zext<10,5>(co65_reg_10727.read());
}

void ShuffleNetV2::thread_co68_cast_fu_20873_p1() {
    co68_cast_fu_20873_p1 = esl_zext<7,6>(co67_reg_10782.read());
}

void ShuffleNetV2::thread_co69_cast_fu_21054_p1() {
    co69_cast_fu_21054_p1 = esl_zext<10,5>(co69_reg_10815.read());
}

void ShuffleNetV2::thread_co72_cast1_fu_21494_p1() {
    co72_cast1_fu_21494_p1 = esl_zext<7,5>(co71_reg_10870.read());
}

void ShuffleNetV2::thread_co72_cast_fu_21490_p1() {
    co72_cast_fu_21490_p1 = esl_zext<9,5>(co71_reg_10870.read());
}

void ShuffleNetV2::thread_co74_cast_fu_21835_p1() {
    co74_cast_fu_21835_p1 = esl_zext<10,5>(co73_reg_10936.read());
}

void ShuffleNetV2::thread_co77_cast_fu_22420_p1() {
    co77_cast_fu_22420_p1 = esl_zext<7,6>(co77_reg_11024.read());
}

void ShuffleNetV2::thread_co79_cast_fu_22601_p1() {
    co79_cast_fu_22601_p1 = esl_zext<10,5>(co79_reg_11057.read());
}

void ShuffleNetV2::thread_co82_cast1_fu_23041_p1() {
    co82_cast1_fu_23041_p1 = esl_zext<7,5>(co81_reg_11112.read());
}

void ShuffleNetV2::thread_co82_cast_fu_23037_p1() {
    co82_cast_fu_23037_p1 = esl_zext<9,5>(co81_reg_11112.read());
}

void ShuffleNetV2::thread_co84_cast_fu_23382_p1() {
    co84_cast_fu_23382_p1 = esl_zext<10,5>(co83_reg_11178.read());
}

void ShuffleNetV2::thread_co87_cast_fu_23971_p1() {
    co87_cast_fu_23971_p1 = esl_zext<7,6>(co87_reg_11266.read());
}

void ShuffleNetV2::thread_co89_cast492_cast_fu_24152_p1() {
    co89_cast492_cast_fu_24152_p1 = esl_zext<9,5>(co89_reg_11299.read());
}

void ShuffleNetV2::thread_co92_cast1_fu_24604_p1() {
    co92_cast1_fu_24604_p1 = esl_zext<7,5>(co91_reg_11354.read());
}

void ShuffleNetV2::thread_co92_cast_fu_24600_p1() {
    co92_cast_fu_24600_p1 = esl_zext<9,5>(co91_reg_11354.read());
}

void ShuffleNetV2::thread_co94_cast_fu_24941_p1() {
    co94_cast_fu_24941_p1 = esl_zext<11,5>(co93_reg_11420.read());
}

void ShuffleNetV2::thread_co97_cast_fu_25530_p1() {
    co97_cast_fu_25530_p1 = esl_zext<7,6>(co97_reg_11508.read());
}

void ShuffleNetV2::thread_co99_cast_fu_25711_p1() {
    co99_cast_fu_25711_p1 = esl_zext<11,5>(co99_reg_11541.read());
}

void ShuffleNetV2::thread_co9_cast_fu_15959_p1() {
    co9_cast_fu_15959_p1 = esl_zext<6,5>(co9_reg_9839.read());
}

void ShuffleNetV2::thread_co_100_fu_25721_p2() {
    co_100_fu_25721_p2 = (!co99_reg_11541.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co99_reg_11541.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_102_fu_26161_p2() {
    co_102_fu_26161_p2 = (!co101_reg_11596.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co101_reg_11596.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_104_fu_26494_p2() {
    co_104_fu_26494_p2 = (!co103_reg_11662.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co103_reg_11662.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_106_fu_26956_p2() {
    co_106_fu_26956_p2 = (!co105_reg_11717.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co105_reg_11717.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_108_fu_27079_p2() {
    co_108_fu_27079_p2 = (!co107_reg_11750.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co107_reg_11750.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_110_fu_27260_p2() {
    co_110_fu_27260_p2 = (!co109_reg_11783.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co109_reg_11783.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_112_fu_27700_p2() {
    co_112_fu_27700_p2 = (!co111_reg_11838.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co111_reg_11838.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_114_fu_28041_p2() {
    co_114_fu_28041_p2 = (!co113_reg_11904.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co113_reg_11904.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_116_fu_28503_p2() {
    co_116_fu_28503_p2 = (!co115_reg_11959.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co115_reg_11959.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_118_fu_28626_p2() {
    co_118_fu_28626_p2 = (!co117_reg_11992.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co117_reg_11992.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_120_fu_28807_p2() {
    co_120_fu_28807_p2 = (!co119_reg_12025.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co119_reg_12025.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_122_fu_29247_p2() {
    co_122_fu_29247_p2 = (!co121_reg_12080.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co121_reg_12080.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_124_fu_29592_p2() {
    co_124_fu_29592_p2 = (!co123_reg_12146.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co123_reg_12146.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_126_fu_30054_p2() {
    co_126_fu_30054_p2 = (!co125_reg_12201.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co125_reg_12201.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_128_fu_30177_p2() {
    co_128_fu_30177_p2 = (!co127_reg_12234.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co127_reg_12234.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_130_fu_30358_p2() {
    co_130_fu_30358_p2 = (!co129_reg_12267.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co129_reg_12267.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_132_fu_30806_p2() {
    co_132_fu_30806_p2 = (!co131_reg_12322.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co131_reg_12322.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_134_fu_31143_p2() {
    co_134_fu_31143_p2 = (!co133_reg_12388.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co133_reg_12388.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_136_fu_31617_p2() {
    co_136_fu_31617_p2 = (!co135_reg_12443.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co135_reg_12443.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_138_fu_31740_p2() {
    co_138_fu_31740_p2 = (!co137_reg_12476.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co137_reg_12476.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_140_fu_31921_p2() {
    co_140_fu_31921_p2 = (!co139_reg_12509.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co139_reg_12509.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_142_fu_32373_p2() {
    co_142_fu_32373_p2 = (!co141_reg_12564.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co141_reg_12564.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_144_fu_32710_p2() {
    co_144_fu_32710_p2 = (!co143_reg_12630.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co143_reg_12630.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_146_fu_33184_p2() {
    co_146_fu_33184_p2 = (!co145_reg_12685.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co145_reg_12685.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_148_fu_33277_p2() {
    co_148_fu_33277_p2 = (!co147_reg_12718.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co147_reg_12718.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_150_fu_33709_p2() {
    co_150_fu_33709_p2 = (!co149_reg_12773.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co149_reg_12773.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_152_fu_34046_p2() {
    co_152_fu_34046_p2 = (!co151_reg_12839.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co151_reg_12839.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_154_fu_34482_p2() {
    co_154_fu_34482_p2 = (!co153_reg_12894.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co153_reg_12894.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_156_fu_34815_p2() {
    co_156_fu_34815_p2 = (!co155_reg_12960.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co155_reg_12960.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_158_fu_35273_p2() {
    co_158_fu_35273_p2 = (!co157_reg_13015.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co157_reg_13015.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_160_fu_35450_p2() {
    co_160_fu_35450_p2 = (!co159_reg_13048.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co159_reg_13048.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_162_fu_35878_p2() {
    co_162_fu_35878_p2 = (!co161_reg_13103.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co161_reg_13103.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_164_fu_36211_p2() {
    co_164_fu_36211_p2 = (!co163_reg_13169.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co163_reg_13169.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_166_fu_36673_p2() {
    co_166_fu_36673_p2 = (!co165_reg_13224.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co165_reg_13224.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_168_fu_36800_p2() {
    co_168_fu_36800_p2 = (!co167_reg_13257.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co167_reg_13257.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_170_fu_36977_p2() {
    co_170_fu_36977_p2 = (!co169_reg_13290.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co169_reg_13290.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_172_fu_37405_p2() {
    co_172_fu_37405_p2 = (!co171_reg_13345.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co171_reg_13345.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_174_fu_37750_p2() {
    co_174_fu_37750_p2 = (!co173_reg_13411.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co173_reg_13411.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_176_fu_38204_p2() {
    co_176_fu_38204_p2 = (!co175_reg_13466.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co175_reg_13466.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_178_fu_38331_p2() {
    co_178_fu_38331_p2 = (!co177_reg_13499.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co177_reg_13499.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_180_fu_38508_p2() {
    co_180_fu_38508_p2 = (!co179_reg_13532.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co179_reg_13532.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_182_fu_38936_p2() {
    co_182_fu_38936_p2 = (!co181_reg_13587.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co181_reg_13587.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_184_fu_39273_p2() {
    co_184_fu_39273_p2 = (!co183_reg_13653.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co183_reg_13653.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_186_fu_39727_p2() {
    co_186_fu_39727_p2 = (!co185_reg_13708.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co185_reg_13708.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_187_fu_39982_p2() {
    co_187_fu_39982_p2 = (!co_i_reg_13774.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(co_i_reg_13774.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void ShuffleNetV2::thread_co_35_fu_15730_p2() {
    co_35_fu_15730_p2 = (!co_reg_9761.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co_reg_9761.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_36_fu_15850_p2() {
    co_36_fu_15850_p2 = (!co5_reg_9795.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co5_reg_9795.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_37_fu_15969_p2() {
    co_37_fu_15969_p2 = (!co9_reg_9839.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co9_reg_9839.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_38_fu_16129_p2() {
    co_38_fu_16129_p2 = (!co12_reg_9873.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co12_reg_9873.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_39_fu_16313_p2() {
    co_39_fu_16313_p2 = (!co16_reg_9917.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co16_reg_9917.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_40_fu_16477_p2() {
    co_40_fu_16477_p2 = (!co19_reg_9951.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co19_reg_9951.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_41_fu_16650_p2() {
    co_41_fu_16650_p2 = (!co22_reg_9984.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co22_reg_9984.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_42_fu_16810_p2() {
    co_42_fu_16810_p2 = (!co25_reg_10018.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co25_reg_10018.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_43_fu_16978_p2() {
    co_43_fu_16978_p2 = (!co29_reg_10062.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co29_reg_10062.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_44_fu_17160_p2() {
    co_44_fu_17160_p2 = (!co32_reg_10096.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co32_reg_10096.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_45_fu_17283_p2() {
    co_45_fu_17283_p2 = (!co35_reg_10129.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co35_reg_10129.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_46_fu_17456_p2() {
    co_46_fu_17456_p2 = (!co38_reg_10162.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co38_reg_10162.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_47_fu_17616_p2() {
    co_47_fu_17616_p2 = (!co41_reg_10196.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co41_reg_10196.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_48_fu_17788_p2() {
    co_48_fu_17788_p2 = (!co44_reg_10240.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co44_reg_10240.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_49_fu_17948_p2() {
    co_49_fu_17948_p2 = (!co46_reg_10274.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co46_reg_10274.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_50_fu_18071_p2() {
    co_50_fu_18071_p2 = (!co47_reg_10307.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co47_reg_10307.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_51_fu_18244_p2() {
    co_51_fu_18244_p2 = (!co49_reg_10340.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co49_reg_10340.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_53_fu_18412_p2() {
    co_53_fu_18412_p2 = (!co52_reg_10374.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co52_reg_10374.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_55_fu_18596_p2() {
    co_55_fu_18596_p2 = (!co54_reg_10418.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co54_reg_10418.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_57_fu_18762_p2() {
    co_57_fu_18762_p2 = (!co56_reg_10452.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co56_reg_10452.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_58_fu_18855_p2() {
    co_58_fu_18855_p2 = (!co57_reg_10485.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co57_reg_10485.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_60_fu_19295_p2() {
    co_60_fu_19295_p2 = (!co59_reg_10540.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co59_reg_10540.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_62_fu_19636_p2() {
    co_62_fu_19636_p2 = (!co61_reg_10606.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co61_reg_10606.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_64_fu_20080_p2() {
    co_64_fu_20080_p2 = (!co63_reg_10661.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co63_reg_10661.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_66_fu_20413_p2() {
    co_66_fu_20413_p2 = (!co65_reg_10727.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co65_reg_10727.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_68_fu_20883_p2() {
    co_68_fu_20883_p2 = (!co67_reg_10782.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co67_reg_10782.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_70_fu_21064_p2() {
    co_70_fu_21064_p2 = (!co69_reg_10815.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co69_reg_10815.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_72_fu_21504_p2() {
    co_72_fu_21504_p2 = (!co71_reg_10870.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co71_reg_10870.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_74_fu_21845_p2() {
    co_74_fu_21845_p2 = (!co73_reg_10936.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co73_reg_10936.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_76_fu_22307_p2() {
    co_76_fu_22307_p2 = (!co75_reg_10991.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co75_reg_10991.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_78_fu_22430_p2() {
    co_78_fu_22430_p2 = (!co77_reg_11024.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co77_reg_11024.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_80_fu_22611_p2() {
    co_80_fu_22611_p2 = (!co79_reg_11057.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co79_reg_11057.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_82_fu_23051_p2() {
    co_82_fu_23051_p2 = (!co81_reg_11112.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co81_reg_11112.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_84_fu_23392_p2() {
    co_84_fu_23392_p2 = (!co83_reg_11178.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co83_reg_11178.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_86_fu_23858_p2() {
    co_86_fu_23858_p2 = (!co85_reg_11233.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co85_reg_11233.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_88_fu_23981_p2() {
    co_88_fu_23981_p2 = (!co87_reg_11266.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co87_reg_11266.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_90_fu_24162_p2() {
    co_90_fu_24162_p2 = (!co89_reg_11299.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co89_reg_11299.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_92_fu_24614_p2() {
    co_92_fu_24614_p2 = (!co91_reg_11354.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co91_reg_11354.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_94_fu_24951_p2() {
    co_94_fu_24951_p2 = (!co93_reg_11420.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co93_reg_11420.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_96_fu_25417_p2() {
    co_96_fu_25417_p2 = (!co95_reg_11475.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co95_reg_11475.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_98_fu_25540_p2() {
    co_98_fu_25540_p2 = (!co97_reg_11508.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co97_reg_11508.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_i_cast_fu_39972_p1() {
    co_i_cast_fu_39972_p1 = esl_zext<32,10>(co_i_reg_13774.read());
}

void ShuffleNetV2::thread_conv1_bias_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_bias_V_address0 =  (sc_lv<5>) (i_cast_reg_40555.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_bias_V_address0 = grp_conv1_p_fu_14482_bias_V_address0.read();
    } else {
        conv1_bias_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_conv1_bias_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_bias_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_bias_V_ce0 = grp_conv1_p_fu_14482_bias_V_ce0.read();
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_address0 = grp_subconv_3x3_32_strid_fu_15335_conv1_output_p_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_address0 = grp_conv1_p_fu_14482_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_address0 = grp_subconv_1x1_32_p_fu_14247_input_V_address0.read();
    } else {
        conv1_output_p_V_address0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_ce0 = grp_subconv_3x3_32_strid_fu_15335_conv1_output_p_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_ce0 = grp_conv1_p_fu_14482_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_ce0 = grp_subconv_1x1_32_p_fu_14247_input_V_ce0.read();
    } else {
        conv1_output_p_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_we0 = grp_conv1_p_fu_14482_output_V_we0.read();
    } else {
        conv1_output_p_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_bias_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        conv_last_bias_V_address0 =  (sc_lv<9>) (i1_cast_reg_40574.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_bias_V_address0 = grp_conv_last_fu_14455_bias_V_address0.read();
    } else {
        conv_last_bias_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_bias_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        conv_last_bias_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_bias_V_ce0 = grp_conv_last_fu_14455_bias_V_ce0.read();
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read())) {
        conv_last_output_V_0_address0 =  (sc_lv<10>) (tmp_2004_cast_fu_40072_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_0_address0 = grp_conv_last_fu_14455_conv_last_output_V_0_address0.read();
    } else {
        conv_last_output_V_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read())) {
        conv_last_output_V_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_0_ce0 = grp_conv_last_fu_14455_conv_last_output_V_0_ce0.read();
    } else {
        conv_last_output_V_0_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_0_we0 = grp_conv_last_fu_14455_conv_last_output_V_0_we0.read();
    } else {
        conv_last_output_V_0_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read())) {
        conv_last_output_V_1_address0 =  (sc_lv<10>) (tmp_2004_cast_fu_40072_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_1_address0 = grp_conv_last_fu_14455_conv_last_output_V_1_address0.read();
    } else {
        conv_last_output_V_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read())) {
        conv_last_output_V_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_1_ce0 = grp_conv_last_fu_14455_conv_last_output_V_1_ce0.read();
    } else {
        conv_last_output_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_1_we0 = grp_conv_last_fu_14455_conv_last_output_V_1_we0.read();
    } else {
        conv_last_output_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read())) {
        conv_last_output_V_2_address0 =  (sc_lv<10>) (tmp_2004_cast_fu_40072_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_2_address0 = grp_conv_last_fu_14455_conv_last_output_V_2_address0.read();
    } else {
        conv_last_output_V_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read())) {
        conv_last_output_V_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_2_ce0 = grp_conv_last_fu_14455_conv_last_output_V_2_ce0.read();
    } else {
        conv_last_output_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_2_we0 = grp_conv_last_fu_14455_conv_last_output_V_2_we0.read();
    } else {
        conv_last_output_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read())) {
        conv_last_output_V_3_address0 =  (sc_lv<10>) (tmp_2004_cast_fu_40072_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_3_address0 = grp_conv_last_fu_14455_conv_last_output_V_3_address0.read();
    } else {
        conv_last_output_V_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read())) {
        conv_last_output_V_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_3_ce0 = grp_conv_last_fu_14455_conv_last_output_V_3_ce0.read();
    } else {
        conv_last_output_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_3_we0 = grp_conv_last_fu_14455_conv_last_output_V_3_we0.read();
    } else {
        conv_last_output_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read())) {
        conv_last_output_V_4_address0 =  (sc_lv<10>) (tmp_2004_cast_fu_40072_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_4_address0 = grp_conv_last_fu_14455_conv_last_output_V_4_address0.read();
    } else {
        conv_last_output_V_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read())) {
        conv_last_output_V_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_4_ce0 = grp_conv_last_fu_14455_conv_last_output_V_4_ce0.read();
    } else {
        conv_last_output_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_4_we0 = grp_conv_last_fu_14455_conv_last_output_V_4_we0.read();
    } else {
        conv_last_output_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read())) {
        conv_last_output_V_5_address0 =  (sc_lv<10>) (tmp_2004_cast_fu_40072_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_5_address0 = grp_conv_last_fu_14455_conv_last_output_V_5_address0.read();
    } else {
        conv_last_output_V_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read())) {
        conv_last_output_V_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_5_ce0 = grp_conv_last_fu_14455_conv_last_output_V_5_ce0.read();
    } else {
        conv_last_output_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_5_we0 = grp_conv_last_fu_14455_conv_last_output_V_5_we0.read();
    } else {
        conv_last_output_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read())) {
        conv_last_output_V_6_address0 =  (sc_lv<10>) (tmp_2004_cast_fu_40072_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_6_address0 = grp_conv_last_fu_14455_conv_last_output_V_6_address0.read();
    } else {
        conv_last_output_V_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read())) {
        conv_last_output_V_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_6_ce0 = grp_conv_last_fu_14455_conv_last_output_V_6_ce0.read();
    } else {
        conv_last_output_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_6_we0 = grp_conv_last_fu_14455_conv_last_output_V_6_we0.read();
    } else {
        conv_last_output_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read())) {
        conv_last_output_V_7_address0 =  (sc_lv<10>) (tmp_2004_cast_fu_40072_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_7_address0 = grp_conv_last_fu_14455_conv_last_output_V_7_address0.read();
    } else {
        conv_last_output_V_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1723.read())) {
        conv_last_output_V_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_7_ce0 = grp_conv_last_fu_14455_conv_last_output_V_7_ce0.read();
    } else {
        conv_last_output_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_7_we0 = grp_conv_last_fu_14455_conv_last_output_V_7_we0.read();
    } else {
        conv_last_output_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_exitcond100_fu_17407_p2() {
    exitcond100_fu_17407_p2 = (!w37_reg_10151.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w37_reg_10151.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond101_fu_17610_p2() {
    exitcond101_fu_17610_p2 = (!co41_reg_10196.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co41_reg_10196.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond102_fu_17766_p2() {
    exitcond102_fu_17766_p2 = (!i25_reg_10229.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i25_reg_10229.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond103_fu_17713_p2() {
    exitcond103_fu_17713_p2 = (!w42_reg_10207.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w42_reg_10207.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond104_fu_17782_p2() {
    exitcond104_fu_17782_p2 = (!co44_reg_10240.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co44_reg_10240.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond105_fu_17750_p2() {
    exitcond105_fu_17750_p2 = (!h42_reg_10218.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h42_reg_10218.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond106_fu_17900_p2() {
    exitcond106_fu_17900_p2 = (!i27_reg_10263.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i27_reg_10263.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond107_fu_17884_p2() {
    exitcond107_fu_17884_p2 = (!ci28_reg_10252.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci28_reg_10252.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond108_fu_17942_p2() {
    exitcond108_fu_17942_p2 = (!co46_reg_10274.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co46_reg_10274.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond109_fu_18065_p2() {
    exitcond109_fu_18065_p2 = (!co47_reg_10307.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co47_reg_10307.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond110_fu_17954_p2() {
    exitcond110_fu_17954_p2 = (!h44_reg_10285.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h44_reg_10285.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond111_fu_18238_p2() {
    exitcond111_fu_18238_p2 = (!co49_reg_10340.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co49_reg_10340.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond112_fu_18113_p2() {
    exitcond112_fu_18113_p2 = (!h46_reg_10318.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h46_reg_10318.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond113_fu_18005_p2() {
    exitcond113_fu_18005_p2 = (!w50_reg_10296.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w50_reg_10296.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond114_fu_18345_p2() {
    exitcond114_fu_18345_p2 = (!tmp_798_reg_10363.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_798_reg_10363.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond115_fu_18329_p2() {
    exitcond115_fu_18329_p2 = (!ci30_reg_10352.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci30_reg_10352.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond116_fu_18195_p2() {
    exitcond116_fu_18195_p2 = (!w53_reg_10329.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w53_reg_10329.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond117_fu_18406_p2() {
    exitcond117_fu_18406_p2 = (!co52_reg_10374.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co52_reg_10374.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond118_fu_18578_p2() {
    exitcond118_fu_18578_p2 = (!i30_reg_10407.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i30_reg_10407.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond119_fu_18525_p2() {
    exitcond119_fu_18525_p2 = (!w55_reg_10385.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w55_reg_10385.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond120_fu_18590_p2() {
    exitcond120_fu_18590_p2 = (!co54_reg_10418.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co54_reg_10418.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond121_fu_18562_p2() {
    exitcond121_fu_18562_p2 = (!h48_reg_10396.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h48_reg_10396.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond122_fu_18714_p2() {
    exitcond122_fu_18714_p2 = (!i32_reg_10441.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i32_reg_10441.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond123_fu_18698_p2() {
    exitcond123_fu_18698_p2 = (!ci32_reg_10430.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci32_reg_10430.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond124_fu_18756_p2() {
    exitcond124_fu_18756_p2 = (!co56_reg_10452.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co56_reg_10452.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond125_fu_18849_p2() {
    exitcond125_fu_18849_p2 = (!co57_reg_10485.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co57_reg_10485.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond126_fu_18768_p2() {
    exitcond126_fu_18768_p2 = (!h50_reg_10463.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h50_reg_10463.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond127_fu_19185_p2() {
    exitcond127_fu_19185_p2 = (!i34_reg_10518.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i34_reg_10518.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond128_fu_18917_p2() {
    exitcond128_fu_18917_p2 = (!ci34_reg_10496.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci34_reg_10496.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond129_fu_18819_p2() {
    exitcond129_fu_18819_p2 = (!w57_reg_10474.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w57_reg_10474.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond130_fu_19289_p2() {
    exitcond130_fu_19289_p2 = (!co59_reg_10540.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co59_reg_10540.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond131_fu_19197_p2() {
    exitcond131_fu_19197_p2 = (!k_reg_10529.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k_reg_10529.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond132_fu_18938_p2() {
    exitcond132_fu_18938_p2 = (!i36_reg_10507.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i36_reg_10507.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond133_fu_19526_p2() {
    exitcond133_fu_19526_p2 = (!i37_reg_10584.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i37_reg_10584.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond134_fu_19309_p2() {
    exitcond134_fu_19309_p2 = (!w59_reg_10551.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w59_reg_10551.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond135_fu_19630_p2() {
    exitcond135_fu_19630_p2 = (!co61_reg_10606.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co61_reg_10606.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond136_fu_19538_p2() {
    exitcond136_fu_19538_p2 = (!k8_reg_10595.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k8_reg_10595.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond137_fu_19329_p2() {
    exitcond137_fu_19329_p2 = (!h52_reg_10562.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h52_reg_10562.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond138_fu_19966_p2() {
    exitcond138_fu_19966_p2 = (!i39_reg_10639.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i39_reg_10639.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond139_fu_19698_p2() {
    exitcond139_fu_19698_p2 = (!ci36_reg_10617.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci36_reg_10617.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond140_fu_19341_p2() {
    exitcond140_fu_19341_p2 = (!i41_reg_10573.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i41_reg_10573.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond141_fu_20074_p2() {
    exitcond141_fu_20074_p2 = (!co63_reg_10661.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co63_reg_10661.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond142_fu_19978_p2() {
    exitcond142_fu_19978_p2 = (!k9_reg_10650.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k9_reg_10650.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond143_fu_19719_p2() {
    exitcond143_fu_19719_p2 = (!i43_reg_10628.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i43_reg_10628.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond144_fu_20307_p2() {
    exitcond144_fu_20307_p2 = (!i44_reg_10705.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i44_reg_10705.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond145_fu_20094_p2() {
    exitcond145_fu_20094_p2 = (!w61_reg_10672.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w61_reg_10672.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond146_fu_20407_p2() {
    exitcond146_fu_20407_p2 = (!co65_reg_10727.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co65_reg_10727.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond147_fu_20319_p2() {
    exitcond147_fu_20319_p2 = (!k10_reg_10716.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k10_reg_10716.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond148_fu_20114_p2() {
    exitcond148_fu_20114_p2 = (!h54_reg_10683.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h54_reg_10683.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond149_fu_20747_p2() {
    exitcond149_fu_20747_p2 = (!i46_reg_10760.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i46_reg_10760.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond150_fu_20475_p2() {
    exitcond150_fu_20475_p2 = (!ci38_reg_10738.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci38_reg_10738.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond151_fu_20126_p2() {
    exitcond151_fu_20126_p2 = (!i48_reg_10694.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i48_reg_10694.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond152_fu_20877_p2() {
    exitcond152_fu_20877_p2 = (!co67_reg_10782.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co67_reg_10782.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond153_fu_20759_p2() {
    exitcond153_fu_20759_p2 = (!k12_reg_10771.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k12_reg_10771.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond154_fu_20496_p2() {
    exitcond154_fu_20496_p2 = (!i50_reg_10749.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i50_reg_10749.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond155_fu_21058_p2() {
    exitcond155_fu_21058_p2 = (!co69_reg_10815.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co69_reg_10815.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond156_fu_20925_p2() {
    exitcond156_fu_20925_p2 = (!h56_reg_10793.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h56_reg_10793.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond157_fu_21394_p2() {
    exitcond157_fu_21394_p2 = (!i52_reg_10848.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i52_reg_10848.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond158_fu_21126_p2() {
    exitcond158_fu_21126_p2 = (!ci40_reg_10826.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci40_reg_10826.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond159_fu_21015_p2() {
    exitcond159_fu_21015_p2 = (!w63_reg_10804.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w63_reg_10804.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond160_fu_21498_p2() {
    exitcond160_fu_21498_p2 = (!co71_reg_10870.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co71_reg_10870.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond161_fu_21406_p2() {
    exitcond161_fu_21406_p2 = (!k14_reg_10859.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k14_reg_10859.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond162_fu_21147_p2() {
    exitcond162_fu_21147_p2 = (!i54_reg_10837.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i54_reg_10837.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond163_fu_21739_p2() {
    exitcond163_fu_21739_p2 = (!i55_reg_10914.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i55_reg_10914.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond164_fu_21518_p2() {
    exitcond164_fu_21518_p2 = (!w65_reg_10881.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w65_reg_10881.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond165_fu_21839_p2() {
    exitcond165_fu_21839_p2 = (!co73_reg_10936.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co73_reg_10936.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond166_fu_21751_p2() {
    exitcond166_fu_21751_p2 = (!k16_reg_10925.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k16_reg_10925.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond167_fu_21538_p2() {
    exitcond167_fu_21538_p2 = (!h58_reg_10892.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h58_reg_10892.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond168_fu_22175_p2() {
    exitcond168_fu_22175_p2 = (!i57_reg_10969.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i57_reg_10969.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond169_fu_21907_p2() {
    exitcond169_fu_21907_p2 = (!ci42_reg_10947.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci42_reg_10947.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond170_fu_21550_p2() {
    exitcond170_fu_21550_p2 = (!i59_reg_10903.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i59_reg_10903.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond171_fu_22301_p2() {
    exitcond171_fu_22301_p2 = (!co75_reg_10991.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co75_reg_10991.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond172_fu_22187_p2() {
    exitcond172_fu_22187_p2 = (!k18_reg_10980.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k18_reg_10980.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond173_fu_21928_p2() {
    exitcond173_fu_21928_p2 = (!i61_reg_10958.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i61_reg_10958.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond174_fu_22424_p2() {
    exitcond174_fu_22424_p2 = (!co77_reg_11024.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co77_reg_11024.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond175_fu_22313_p2() {
    exitcond175_fu_22313_p2 = (!h60_reg_11002.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h60_reg_11002.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond176_fu_22605_p2() {
    exitcond176_fu_22605_p2 = (!co79_reg_11057.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co79_reg_11057.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond177_fu_22472_p2() {
    exitcond177_fu_22472_p2 = (!h62_reg_11035.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h62_reg_11035.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond178_fu_22364_p2() {
    exitcond178_fu_22364_p2 = (!w67_reg_11013.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w67_reg_11013.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond179_fu_22941_p2() {
    exitcond179_fu_22941_p2 = (!i63_reg_11090.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i63_reg_11090.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond180_fu_22673_p2() {
    exitcond180_fu_22673_p2 = (!ci44_reg_11068.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci44_reg_11068.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond181_fu_22562_p2() {
    exitcond181_fu_22562_p2 = (!w69_reg_11046.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w69_reg_11046.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond182_fu_23045_p2() {
    exitcond182_fu_23045_p2 = (!co81_reg_11112.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co81_reg_11112.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond183_fu_22953_p2() {
    exitcond183_fu_22953_p2 = (!k20_reg_11101.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k20_reg_11101.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond184_fu_22694_p2() {
    exitcond184_fu_22694_p2 = (!i65_reg_11079.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i65_reg_11079.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond185_fu_23282_p2() {
    exitcond185_fu_23282_p2 = (!i66_reg_11156.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i66_reg_11156.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond186_fu_23065_p2() {
    exitcond186_fu_23065_p2 = (!w71_reg_11123.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w71_reg_11123.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond187_fu_23386_p2() {
    exitcond187_fu_23386_p2 = (!co83_reg_11178.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co83_reg_11178.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond188_fu_23294_p2() {
    exitcond188_fu_23294_p2 = (!k22_reg_11167.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k22_reg_11167.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond189_fu_23085_p2() {
    exitcond189_fu_23085_p2 = (!h64_reg_11134.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h64_reg_11134.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond190_fu_23722_p2() {
    exitcond190_fu_23722_p2 = (!i68_reg_11211.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i68_reg_11211.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond191_fu_23454_p2() {
    exitcond191_fu_23454_p2 = (!ci46_reg_11189.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci46_reg_11189.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond192_fu_23097_p2() {
    exitcond192_fu_23097_p2 = (!i70_reg_11145.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i70_reg_11145.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond193_fu_23852_p2() {
    exitcond193_fu_23852_p2 = (!co85_reg_11233.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co85_reg_11233.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond194_fu_23734_p2() {
    exitcond194_fu_23734_p2 = (!k24_reg_11222.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k24_reg_11222.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond195_fu_23475_p2() {
    exitcond195_fu_23475_p2 = (!i72_reg_11200.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i72_reg_11200.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond196_fu_23975_p2() {
    exitcond196_fu_23975_p2 = (!co87_reg_11266.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co87_reg_11266.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond197_fu_23864_p2() {
    exitcond197_fu_23864_p2 = (!h66_reg_11244.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h66_reg_11244.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond198_fu_24156_p2() {
    exitcond198_fu_24156_p2 = (!co89_reg_11299.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co89_reg_11299.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond199_fu_24023_p2() {
    exitcond199_fu_24023_p2 = (!h68_reg_11277.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h68_reg_11277.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond200_fu_23915_p2() {
    exitcond200_fu_23915_p2 = (!w73_reg_11255.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w73_reg_11255.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond201_fu_24500_p2() {
    exitcond201_fu_24500_p2 = (!i74_reg_11332.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i74_reg_11332.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond202_fu_24224_p2() {
    exitcond202_fu_24224_p2 = (!ci48_reg_11310.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci48_reg_11310.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond203_fu_24113_p2() {
    exitcond203_fu_24113_p2 = (!w75_reg_11288.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w75_reg_11288.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond204_fu_24608_p2() {
    exitcond204_fu_24608_p2 = (!co91_reg_11354.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co91_reg_11354.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond205_fu_24512_p2() {
    exitcond205_fu_24512_p2 = (!k26_reg_11343.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k26_reg_11343.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond206_fu_24245_p2() {
    exitcond206_fu_24245_p2 = (!i76_reg_11321.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i76_reg_11321.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond207_fu_24841_p2() {
    exitcond207_fu_24841_p2 = (!i77_reg_11398.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i77_reg_11398.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond208_fu_24628_p2() {
    exitcond208_fu_24628_p2 = (!w77_reg_11365.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w77_reg_11365.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond209_fu_24945_p2() {
    exitcond209_fu_24945_p2 = (!co93_reg_11420.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co93_reg_11420.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond210_fu_24853_p2() {
    exitcond210_fu_24853_p2 = (!k28_reg_11409.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k28_reg_11409.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond211_fu_24648_p2() {
    exitcond211_fu_24648_p2 = (!h70_reg_11376.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h70_reg_11376.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond212_fu_25281_p2() {
    exitcond212_fu_25281_p2 = (!i79_reg_11453.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i79_reg_11453.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond213_fu_25013_p2() {
    exitcond213_fu_25013_p2 = (!ci50_reg_11431.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci50_reg_11431.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond214_fu_24660_p2() {
    exitcond214_fu_24660_p2 = (!i81_reg_11387.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i81_reg_11387.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond215_fu_25411_p2() {
    exitcond215_fu_25411_p2 = (!co95_reg_11475.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co95_reg_11475.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond216_fu_25293_p2() {
    exitcond216_fu_25293_p2 = (!k30_reg_11464.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k30_reg_11464.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond217_fu_25034_p2() {
    exitcond217_fu_25034_p2 = (!i83_reg_11442.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i83_reg_11442.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond218_fu_25534_p2() {
    exitcond218_fu_25534_p2 = (!co97_reg_11508.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co97_reg_11508.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond219_fu_25423_p2() {
    exitcond219_fu_25423_p2 = (!h72_reg_11486.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h72_reg_11486.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond220_fu_25715_p2() {
    exitcond220_fu_25715_p2 = (!co99_reg_11541.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co99_reg_11541.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond221_fu_25582_p2() {
    exitcond221_fu_25582_p2 = (!h74_reg_11519.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h74_reg_11519.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond222_fu_25474_p2() {
    exitcond222_fu_25474_p2 = (!w79_reg_11497.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w79_reg_11497.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond223_fu_26051_p2() {
    exitcond223_fu_26051_p2 = (!i85_reg_11574.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i85_reg_11574.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond224_fu_25783_p2() {
    exitcond224_fu_25783_p2 = (!ci52_reg_11552.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci52_reg_11552.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond225_fu_25672_p2() {
    exitcond225_fu_25672_p2 = (!w81_reg_11530.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w81_reg_11530.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond226_fu_26155_p2() {
    exitcond226_fu_26155_p2 = (!co101_reg_11596.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co101_reg_11596.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond227_fu_26063_p2() {
    exitcond227_fu_26063_p2 = (!k32_reg_11585.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k32_reg_11585.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond228_fu_25804_p2() {
    exitcond228_fu_25804_p2 = (!i87_reg_11563.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i87_reg_11563.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond229_fu_26388_p2() {
    exitcond229_fu_26388_p2 = (!i88_reg_11640.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i88_reg_11640.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond230_fu_26175_p2() {
    exitcond230_fu_26175_p2 = (!w83_reg_11607.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w83_reg_11607.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond231_fu_26488_p2() {
    exitcond231_fu_26488_p2 = (!co103_reg_11662.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co103_reg_11662.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond232_fu_26400_p2() {
    exitcond232_fu_26400_p2 = (!k34_reg_11651.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k34_reg_11651.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond233_fu_26195_p2() {
    exitcond233_fu_26195_p2 = (!h76_reg_11618.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h76_reg_11618.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond234_fu_26824_p2() {
    exitcond234_fu_26824_p2 = (!i90_reg_11695.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i90_reg_11695.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond235_fu_26556_p2() {
    exitcond235_fu_26556_p2 = (!ci54_reg_11673.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci54_reg_11673.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond236_fu_26207_p2() {
    exitcond236_fu_26207_p2 = (!i92_reg_11629.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i92_reg_11629.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond237_fu_26950_p2() {
    exitcond237_fu_26950_p2 = (!co105_reg_11717.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co105_reg_11717.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond238_fu_26836_p2() {
    exitcond238_fu_26836_p2 = (!k36_reg_11706.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k36_reg_11706.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond239_fu_26577_p2() {
    exitcond239_fu_26577_p2 = (!i94_reg_11684.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i94_reg_11684.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond240_fu_27073_p2() {
    exitcond240_fu_27073_p2 = (!co107_reg_11750.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co107_reg_11750.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond241_fu_26962_p2() {
    exitcond241_fu_26962_p2 = (!h78_reg_11728.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h78_reg_11728.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond242_fu_27254_p2() {
    exitcond242_fu_27254_p2 = (!co109_reg_11783.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co109_reg_11783.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond243_fu_27121_p2() {
    exitcond243_fu_27121_p2 = (!h80_reg_11761.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h80_reg_11761.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond244_fu_27013_p2() {
    exitcond244_fu_27013_p2 = (!w85_reg_11739.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w85_reg_11739.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond245_fu_27590_p2() {
    exitcond245_fu_27590_p2 = (!i96_reg_11816.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i96_reg_11816.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond246_fu_27322_p2() {
    exitcond246_fu_27322_p2 = (!ci56_reg_11794.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci56_reg_11794.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond247_fu_27211_p2() {
    exitcond247_fu_27211_p2 = (!w87_reg_11772.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w87_reg_11772.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond248_fu_27694_p2() {
    exitcond248_fu_27694_p2 = (!co111_reg_11838.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co111_reg_11838.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond249_fu_27602_p2() {
    exitcond249_fu_27602_p2 = (!k38_reg_11827.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k38_reg_11827.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond250_fu_27343_p2() {
    exitcond250_fu_27343_p2 = (!i98_reg_11805.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i98_reg_11805.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond251_fu_27935_p2() {
    exitcond251_fu_27935_p2 = (!i99_reg_11882.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i99_reg_11882.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond252_fu_27714_p2() {
    exitcond252_fu_27714_p2 = (!w89_reg_11849.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w89_reg_11849.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond253_fu_28035_p2() {
    exitcond253_fu_28035_p2 = (!co113_reg_11904.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co113_reg_11904.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond254_fu_27947_p2() {
    exitcond254_fu_27947_p2 = (!k40_reg_11893.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k40_reg_11893.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond255_fu_27734_p2() {
    exitcond255_fu_27734_p2 = (!h82_reg_11860.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h82_reg_11860.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond256_fu_28371_p2() {
    exitcond256_fu_28371_p2 = (!i101_reg_11937.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i101_reg_11937.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond257_fu_28103_p2() {
    exitcond257_fu_28103_p2 = (!ci58_reg_11915.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci58_reg_11915.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond258_fu_27746_p2() {
    exitcond258_fu_27746_p2 = (!i103_reg_11871.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i103_reg_11871.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond259_fu_28497_p2() {
    exitcond259_fu_28497_p2 = (!co115_reg_11959.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co115_reg_11959.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond260_fu_28383_p2() {
    exitcond260_fu_28383_p2 = (!k42_reg_11948.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k42_reg_11948.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond261_fu_28124_p2() {
    exitcond261_fu_28124_p2 = (!i105_reg_11926.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i105_reg_11926.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond262_fu_28620_p2() {
    exitcond262_fu_28620_p2 = (!co117_reg_11992.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co117_reg_11992.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond263_fu_28509_p2() {
    exitcond263_fu_28509_p2 = (!h84_reg_11970.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h84_reg_11970.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond264_fu_28801_p2() {
    exitcond264_fu_28801_p2 = (!co119_reg_12025.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co119_reg_12025.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond265_fu_28668_p2() {
    exitcond265_fu_28668_p2 = (!h86_reg_12003.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h86_reg_12003.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond266_fu_28560_p2() {
    exitcond266_fu_28560_p2 = (!w91_reg_11981.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w91_reg_11981.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond267_fu_29137_p2() {
    exitcond267_fu_29137_p2 = (!i107_reg_12058.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i107_reg_12058.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond268_fu_28869_p2() {
    exitcond268_fu_28869_p2 = (!ci60_reg_12036.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci60_reg_12036.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond269_fu_28758_p2() {
    exitcond269_fu_28758_p2 = (!w93_reg_12014.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w93_reg_12014.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond270_fu_29241_p2() {
    exitcond270_fu_29241_p2 = (!co121_reg_12080.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co121_reg_12080.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond271_fu_29149_p2() {
    exitcond271_fu_29149_p2 = (!k44_reg_12069.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k44_reg_12069.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond272_fu_28890_p2() {
    exitcond272_fu_28890_p2 = (!i109_reg_12047.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i109_reg_12047.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond273_fu_29486_p2() {
    exitcond273_fu_29486_p2 = (!i110_reg_12124.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i110_reg_12124.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond274_fu_29261_p2() {
    exitcond274_fu_29261_p2 = (!w95_reg_12091.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w95_reg_12091.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond275_fu_29586_p2() {
    exitcond275_fu_29586_p2 = (!co123_reg_12146.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co123_reg_12146.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond276_fu_29498_p2() {
    exitcond276_fu_29498_p2 = (!k46_reg_12135.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k46_reg_12135.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond277_fu_29281_p2() {
    exitcond277_fu_29281_p2 = (!h88_reg_12102.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h88_reg_12102.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond278_fu_29922_p2() {
    exitcond278_fu_29922_p2 = (!i112_reg_12179.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i112_reg_12179.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond279_fu_29654_p2() {
    exitcond279_fu_29654_p2 = (!ci62_reg_12157.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci62_reg_12157.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond280_fu_29293_p2() {
    exitcond280_fu_29293_p2 = (!i114_reg_12113.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i114_reg_12113.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond281_fu_30048_p2() {
    exitcond281_fu_30048_p2 = (!co125_reg_12201.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co125_reg_12201.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond282_fu_29934_p2() {
    exitcond282_fu_29934_p2 = (!k48_reg_12190.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k48_reg_12190.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond283_fu_29675_p2() {
    exitcond283_fu_29675_p2 = (!i116_reg_12168.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i116_reg_12168.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond284_fu_30171_p2() {
    exitcond284_fu_30171_p2 = (!co127_reg_12234.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co127_reg_12234.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond285_fu_30060_p2() {
    exitcond285_fu_30060_p2 = (!h90_reg_12212.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h90_reg_12212.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond286_fu_30352_p2() {
    exitcond286_fu_30352_p2 = (!co129_reg_12267.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co129_reg_12267.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond287_fu_30219_p2() {
    exitcond287_fu_30219_p2 = (!h92_reg_12245.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h92_reg_12245.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond288_fu_30111_p2() {
    exitcond288_fu_30111_p2 = (!w97_reg_12223.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w97_reg_12223.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond289_fu_30696_p2() {
    exitcond289_fu_30696_p2 = (!i118_reg_12300.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i118_reg_12300.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond290_fu_30420_p2() {
    exitcond290_fu_30420_p2 = (!ci64_reg_12278.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci64_reg_12278.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond291_fu_30309_p2() {
    exitcond291_fu_30309_p2 = (!w99_reg_12256.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w99_reg_12256.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond292_fu_30800_p2() {
    exitcond292_fu_30800_p2 = (!co131_reg_12322.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co131_reg_12322.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond293_fu_30708_p2() {
    exitcond293_fu_30708_p2 = (!k50_reg_12311.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k50_reg_12311.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond294_fu_30441_p2() {
    exitcond294_fu_30441_p2 = (!i120_reg_12289.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i120_reg_12289.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond295_fu_31037_p2() {
    exitcond295_fu_31037_p2 = (!i121_reg_12366.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i121_reg_12366.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond296_fu_30820_p2() {
    exitcond296_fu_30820_p2 = (!w101_reg_12333.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w101_reg_12333.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond297_fu_31137_p2() {
    exitcond297_fu_31137_p2 = (!co133_reg_12388.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co133_reg_12388.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond298_fu_31049_p2() {
    exitcond298_fu_31049_p2 = (!k52_reg_12377.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k52_reg_12377.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond299_fu_39946_p2() {
    exitcond299_fu_39946_p2 = (!h127_reg_13763.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h127_reg_13763.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond300_fu_39885_p2() {
    exitcond300_fu_39885_p2 = (!w131_reg_13752.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w131_reg_13752.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond301_fu_39856_p2() {
    exitcond301_fu_39856_p2 = (!ci90_reg_13741.read().is_01() || !ap_const_lv8_C0.is_01())? sc_lv<1>(): sc_lv<1>(ci90_reg_13741.read() == ap_const_lv8_C0);
}

void ShuffleNetV2::thread_exitcond302_fu_39784_p2() {
    exitcond302_fu_39784_p2 = (!w132_reg_13730.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w132_reg_13730.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond303_fu_39733_p2() {
    exitcond303_fu_39733_p2 = (!h124_reg_13719.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h124_reg_13719.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond304_fu_39721_p2() {
    exitcond304_fu_39721_p2 = (!co185_reg_13708.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co185_reg_13708.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond305_fu_39603_p2() {
    exitcond305_fu_39603_p2 = (!k88_reg_13697.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k88_reg_13697.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond306_fu_39591_p2() {
    exitcond306_fu_39591_p2 = (!i185_reg_13686.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i185_reg_13686.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond307_fu_39354_p2() {
    exitcond307_fu_39354_p2 = (!i189_reg_13675.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i189_reg_13675.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond308_fu_39333_p2() {
    exitcond308_fu_39333_p2 = (!ci88_reg_13664.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci88_reg_13664.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond309_fu_39267_p2() {
    exitcond309_fu_39267_p2 = (!co183_reg_13653.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co183_reg_13653.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond310_fu_39179_p2() {
    exitcond310_fu_39179_p2 = (!k86_reg_13642.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k86_reg_13642.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond311_fu_39167_p2() {
    exitcond311_fu_39167_p2 = (!i183_reg_13631.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i183_reg_13631.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond312_fu_38982_p2() {
    exitcond312_fu_38982_p2 = (!i187_reg_13620.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i187_reg_13620.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond313_fu_38970_p2() {
    exitcond313_fu_38970_p2 = (!h122_reg_13609.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h122_reg_13609.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond314_fu_38950_p2() {
    exitcond314_fu_38950_p2 = (!w129_reg_13598.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w129_reg_13598.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond315_fu_38930_p2() {
    exitcond315_fu_38930_p2 = (!co181_reg_13587.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co181_reg_13587.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond316_fu_38838_p2() {
    exitcond316_fu_38838_p2 = (!k84_reg_13576.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k84_reg_13576.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond317_fu_38826_p2() {
    exitcond317_fu_38826_p2 = (!i180_reg_13565.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i180_reg_13565.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond318_fu_38589_p2() {
    exitcond318_fu_38589_p2 = (!i182_reg_13554.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i182_reg_13554.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond319_fu_38568_p2() {
    exitcond319_fu_38568_p2 = (!ci86_reg_13543.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci86_reg_13543.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond320_fu_38502_p2() {
    exitcond320_fu_38502_p2 = (!co179_reg_13532.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co179_reg_13532.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond321_fu_38459_p2() {
    exitcond321_fu_38459_p2 = (!w127_reg_13521.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w127_reg_13521.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond322_fu_38377_p2() {
    exitcond322_fu_38377_p2 = (!h120_reg_13510.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h120_reg_13510.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond323_fu_38325_p2() {
    exitcond323_fu_38325_p2 = (!co177_reg_13499.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co177_reg_13499.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond324_fu_38261_p2() {
    exitcond324_fu_38261_p2 = (!w125_reg_13488.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w125_reg_13488.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond325_fu_38210_p2() {
    exitcond325_fu_38210_p2 = (!h118_reg_13477.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h118_reg_13477.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond326_fu_38198_p2() {
    exitcond326_fu_38198_p2 = (!co175_reg_13466.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co175_reg_13466.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond327_fu_38080_p2() {
    exitcond327_fu_38080_p2 = (!k82_reg_13455.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k82_reg_13455.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond328_fu_38068_p2() {
    exitcond328_fu_38068_p2 = (!i174_reg_13444.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i174_reg_13444.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond329_fu_37831_p2() {
    exitcond329_fu_37831_p2 = (!i178_reg_13433.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i178_reg_13433.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond330_fu_37810_p2() {
    exitcond330_fu_37810_p2 = (!ci84_reg_13422.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci84_reg_13422.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond331_fu_37744_p2() {
    exitcond331_fu_37744_p2 = (!co173_reg_13411.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co173_reg_13411.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond332_fu_37656_p2() {
    exitcond332_fu_37656_p2 = (!k80_reg_13400.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k80_reg_13400.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond333_fu_37644_p2() {
    exitcond333_fu_37644_p2 = (!i172_reg_13389.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i172_reg_13389.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond334_fu_37451_p2() {
    exitcond334_fu_37451_p2 = (!i176_reg_13378.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i176_reg_13378.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond335_fu_37439_p2() {
    exitcond335_fu_37439_p2 = (!h116_reg_13367.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h116_reg_13367.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond336_fu_37419_p2() {
    exitcond336_fu_37419_p2 = (!w123_reg_13356.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w123_reg_13356.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond337_fu_37399_p2() {
    exitcond337_fu_37399_p2 = (!co171_reg_13345.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co171_reg_13345.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond338_fu_37307_p2() {
    exitcond338_fu_37307_p2 = (!k78_reg_13334.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k78_reg_13334.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond339_fu_37295_p2() {
    exitcond339_fu_37295_p2 = (!i169_reg_13323.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i169_reg_13323.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond33_i_fu_40031_p2() {
    exitcond33_i_fu_40031_p2 = (!h_i_reg_13797.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h_i_reg_13797.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond340_fu_37058_p2() {
    exitcond340_fu_37058_p2 = (!i171_reg_13312.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i171_reg_13312.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond341_fu_37037_p2() {
    exitcond341_fu_37037_p2 = (!ci82_reg_13301.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci82_reg_13301.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond342_fu_36971_p2() {
    exitcond342_fu_36971_p2 = (!co169_reg_13290.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co169_reg_13290.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond343_fu_36928_p2() {
    exitcond343_fu_36928_p2 = (!w121_reg_13279.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w121_reg_13279.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond344_fu_36846_p2() {
    exitcond344_fu_36846_p2 = (!h114_reg_13268.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h114_reg_13268.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond345_fu_36794_p2() {
    exitcond345_fu_36794_p2 = (!co167_reg_13257.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co167_reg_13257.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond346_fu_36730_p2() {
    exitcond346_fu_36730_p2 = (!w119_reg_13246.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w119_reg_13246.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond347_fu_36679_p2() {
    exitcond347_fu_36679_p2 = (!h112_reg_13235.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h112_reg_13235.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond348_fu_36667_p2() {
    exitcond348_fu_36667_p2 = (!co165_reg_13224.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co165_reg_13224.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond349_fu_36549_p2() {
    exitcond349_fu_36549_p2 = (!k76_reg_13213.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k76_reg_13213.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond34_i_fu_39976_p2() {
    exitcond34_i_fu_39976_p2 = (!co_i_reg_13774.read().is_01() || !ap_const_lv10_200.is_01())? sc_lv<1>(): sc_lv<1>(co_i_reg_13774.read() == ap_const_lv10_200);
}

void ShuffleNetV2::thread_exitcond350_fu_36537_p2() {
    exitcond350_fu_36537_p2 = (!i163_reg_13202.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i163_reg_13202.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond351_fu_36292_p2() {
    exitcond351_fu_36292_p2 = (!i167_reg_13191.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i167_reg_13191.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond352_fu_36271_p2() {
    exitcond352_fu_36271_p2 = (!ci80_reg_13180.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci80_reg_13180.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond353_fu_36205_p2() {
    exitcond353_fu_36205_p2 = (!co163_reg_13169.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co163_reg_13169.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond354_fu_36117_p2() {
    exitcond354_fu_36117_p2 = (!k74_reg_13158.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k74_reg_13158.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond355_fu_36105_p2() {
    exitcond355_fu_36105_p2 = (!i161_reg_13147.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i161_reg_13147.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond356_fu_35924_p2() {
    exitcond356_fu_35924_p2 = (!i165_reg_13136.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i165_reg_13136.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond357_fu_35912_p2() {
    exitcond357_fu_35912_p2 = (!h110_reg_13125.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h110_reg_13125.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond358_fu_35892_p2() {
    exitcond358_fu_35892_p2 = (!w117_reg_13114.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w117_reg_13114.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond359_fu_35872_p2() {
    exitcond359_fu_35872_p2 = (!co161_reg_13103.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co161_reg_13103.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond360_fu_35780_p2() {
    exitcond360_fu_35780_p2 = (!k72_reg_13092.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k72_reg_13092.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond361_fu_35768_p2() {
    exitcond361_fu_35768_p2 = (!i158_reg_13081.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i158_reg_13081.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond362_fu_35531_p2() {
    exitcond362_fu_35531_p2 = (!i160_reg_13070.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i160_reg_13070.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond363_fu_35510_p2() {
    exitcond363_fu_35510_p2 = (!ci78_reg_13059.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci78_reg_13059.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond364_fu_35444_p2() {
    exitcond364_fu_35444_p2 = (!co159_reg_13048.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co159_reg_13048.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond365_fu_35401_p2() {
    exitcond365_fu_35401_p2 = (!w115_reg_13037.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w115_reg_13037.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond366_fu_35319_p2() {
    exitcond366_fu_35319_p2 = (!h108_reg_13026.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h108_reg_13026.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond367_fu_35267_p2() {
    exitcond367_fu_35267_p2 = (!co157_reg_13015.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co157_reg_13015.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond368_fu_35145_p2() {
    exitcond368_fu_35145_p2 = (!k70_reg_13004.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k70_reg_13004.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond369_fu_35133_p2() {
    exitcond369_fu_35133_p2 = (!i152_reg_12993.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i152_reg_12993.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond370_fu_34896_p2() {
    exitcond370_fu_34896_p2 = (!i156_reg_12982.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i156_reg_12982.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond371_fu_34875_p2() {
    exitcond371_fu_34875_p2 = (!ci76_reg_12971.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci76_reg_12971.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond372_fu_34809_p2() {
    exitcond372_fu_34809_p2 = (!co155_reg_12960.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co155_reg_12960.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond373_fu_34721_p2() {
    exitcond373_fu_34721_p2 = (!k68_reg_12949.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k68_reg_12949.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond374_fu_34709_p2() {
    exitcond374_fu_34709_p2 = (!i150_reg_12938.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i150_reg_12938.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond375_fu_34528_p2() {
    exitcond375_fu_34528_p2 = (!i154_reg_12927.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i154_reg_12927.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond376_fu_34516_p2() {
    exitcond376_fu_34516_p2 = (!h106_reg_12916.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h106_reg_12916.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond377_fu_34496_p2() {
    exitcond377_fu_34496_p2 = (!w113_reg_12905.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w113_reg_12905.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond378_fu_34476_p2() {
    exitcond378_fu_34476_p2 = (!co153_reg_12894.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co153_reg_12894.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond379_fu_34376_p2() {
    exitcond379_fu_34376_p2 = (!k66_reg_12883.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k66_reg_12883.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond380_fu_34364_p2() {
    exitcond380_fu_34364_p2 = (!i145_reg_12872.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i145_reg_12872.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond381_fu_34127_p2() {
    exitcond381_fu_34127_p2 = (!i149_reg_12861.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i149_reg_12861.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond382_fu_34106_p2() {
    exitcond382_fu_34106_p2 = (!ci74_reg_12850.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci74_reg_12850.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond383_fu_34040_p2() {
    exitcond383_fu_34040_p2 = (!co151_reg_12839.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co151_reg_12839.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond384_fu_33948_p2() {
    exitcond384_fu_33948_p2 = (!k64_reg_12828.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k64_reg_12828.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond385_fu_33936_p2() {
    exitcond385_fu_33936_p2 = (!i143_reg_12817.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i143_reg_12817.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond386_fu_33755_p2() {
    exitcond386_fu_33755_p2 = (!i147_reg_12806.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i147_reg_12806.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond387_fu_33743_p2() {
    exitcond387_fu_33743_p2 = (!h104_reg_12795.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h104_reg_12795.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond388_fu_33723_p2() {
    exitcond388_fu_33723_p2 = (!w111_reg_12784.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w111_reg_12784.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond389_fu_33703_p2() {
    exitcond389_fu_33703_p2 = (!co149_reg_12773.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co149_reg_12773.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond390_fu_33607_p2() {
    exitcond390_fu_33607_p2 = (!k62_reg_12762.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k62_reg_12762.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond391_fu_33595_p2() {
    exitcond391_fu_33595_p2 = (!i140_reg_12751.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i140_reg_12751.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond392_fu_33358_p2() {
    exitcond392_fu_33358_p2 = (!i142_reg_12740.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i142_reg_12740.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond393_fu_33337_p2() {
    exitcond393_fu_33337_p2 = (!ci72_reg_12729.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci72_reg_12729.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond394_fu_33271_p2() {
    exitcond394_fu_33271_p2 = (!co147_reg_12718.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co147_reg_12718.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond395_fu_33241_p2() {
    exitcond395_fu_33241_p2 = (!w109_reg_12707.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w109_reg_12707.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond396_fu_33190_p2() {
    exitcond396_fu_33190_p2 = (!h102_reg_12696.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h102_reg_12696.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond397_fu_33178_p2() {
    exitcond397_fu_33178_p2 = (!co145_reg_12685.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co145_reg_12685.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond398_fu_33060_p2() {
    exitcond398_fu_33060_p2 = (!k60_reg_12674.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k60_reg_12674.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond399_fu_33048_p2() {
    exitcond399_fu_33048_p2 = (!i134_reg_12663.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i134_reg_12663.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond400_fu_32793_p2() {
    exitcond400_fu_32793_p2 = (!i138_reg_12652.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i138_reg_12652.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond401_fu_32772_p2() {
    exitcond401_fu_32772_p2 = (!ci70_reg_12641.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci70_reg_12641.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond402_fu_32704_p2() {
    exitcond402_fu_32704_p2 = (!co143_reg_12630.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co143_reg_12630.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond403_fu_32612_p2() {
    exitcond403_fu_32612_p2 = (!k58_reg_12619.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k58_reg_12619.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond404_fu_32600_p2() {
    exitcond404_fu_32600_p2 = (!i132_reg_12608.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i132_reg_12608.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond405_fu_32419_p2() {
    exitcond405_fu_32419_p2 = (!i136_reg_12597.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i136_reg_12597.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond406_fu_32407_p2() {
    exitcond406_fu_32407_p2 = (!h100_reg_12586.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h100_reg_12586.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond407_fu_32387_p2() {
    exitcond407_fu_32387_p2 = (!w107_reg_12575.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w107_reg_12575.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond408_fu_32367_p2() {
    exitcond408_fu_32367_p2 = (!co141_reg_12564.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co141_reg_12564.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond409_fu_32271_p2() {
    exitcond409_fu_32271_p2 = (!k56_reg_12553.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k56_reg_12553.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond410_fu_32259_p2() {
    exitcond410_fu_32259_p2 = (!i129_reg_12542.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i129_reg_12542.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond411_fu_32004_p2() {
    exitcond411_fu_32004_p2 = (!i131_reg_12531.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i131_reg_12531.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond412_fu_31983_p2() {
    exitcond412_fu_31983_p2 = (!ci68_reg_12520.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci68_reg_12520.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond413_fu_31915_p2() {
    exitcond413_fu_31915_p2 = (!co139_reg_12509.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co139_reg_12509.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond414_fu_31872_p2() {
    exitcond414_fu_31872_p2 = (!w105_reg_12498.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w105_reg_12498.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond415_fu_31782_p2() {
    exitcond415_fu_31782_p2 = (!h98_reg_12487.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h98_reg_12487.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond416_fu_31734_p2() {
    exitcond416_fu_31734_p2 = (!co137_reg_12476.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co137_reg_12476.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond417_fu_31674_p2() {
    exitcond417_fu_31674_p2 = (!w103_reg_12465.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w103_reg_12465.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond418_fu_31623_p2() {
    exitcond418_fu_31623_p2 = (!h96_reg_12454.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h96_reg_12454.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond419_fu_31611_p2() {
    exitcond419_fu_31611_p2 = (!co135_reg_12443.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co135_reg_12443.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond420_fu_31493_p2() {
    exitcond420_fu_31493_p2 = (!k54_reg_12432.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k54_reg_12432.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond421_fu_31481_p2() {
    exitcond421_fu_31481_p2 = (!i123_reg_12421.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i123_reg_12421.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond422_fu_31226_p2() {
    exitcond422_fu_31226_p2 = (!i127_reg_12410.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i127_reg_12410.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond423_fu_31205_p2() {
    exitcond423_fu_31205_p2 = (!ci66_reg_12399.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci66_reg_12399.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond424_fu_30840_p2() {
    exitcond424_fu_30840_p2 = (!h94_reg_12344.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h94_reg_12344.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond425_fu_30852_p2() {
    exitcond425_fu_30852_p2 = (!i125_reg_12355.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i125_reg_12355.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond57_fu_15511_p2() {
    exitcond57_fu_15511_p2 = (!i1_reg_9706.read().is_01() || !ap_const_lv10_200.is_01())? sc_lv<1>(): sc_lv<1>(i1_reg_9706.read() == ap_const_lv10_200);
}

void ShuffleNetV2::thread_exitcond58_fu_15538_p2() {
    exitcond58_fu_15538_p2 = (!i2_reg_9717.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i2_reg_9717.read() == ap_const_lv4_A);
}

void ShuffleNetV2::thread_exitcond59_fu_15580_p2() {
    exitcond59_fu_15580_p2 = (!ci_reg_9728.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(ci_reg_9728.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond60_fu_15724_p2() {
    exitcond60_fu_15724_p2 = (!co_reg_9761.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co_reg_9761.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond61_fu_15613_p2() {
    exitcond61_fu_15613_p2 = (!w_reg_9739.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(w_reg_9739.read() == ap_const_lv6_20);
}

void ShuffleNetV2::thread_exitcond62_fu_15806_p2() {
    exitcond62_fu_15806_p2 = (!i4_reg_9784.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i4_reg_9784.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond63_fu_15790_p2() {
    exitcond63_fu_15790_p2 = (!ci3_reg_9773.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci3_reg_9773.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond64_fu_15669_p2() {
    exitcond64_fu_15669_p2 = (!h_reg_9750.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(h_reg_9750.read() == ap_const_lv6_20);
}

void ShuffleNetV2::thread_exitcond65_fu_15844_p2() {
    exitcond65_fu_15844_p2 = (!co5_reg_9795.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co5_reg_9795.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond66_fu_15947_p2() {
    exitcond66_fu_15947_p2 = (!i8_reg_9828.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i8_reg_9828.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond67_fu_15898_p2() {
    exitcond67_fu_15898_p2 = (!w6_reg_9806.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w6_reg_9806.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond68_fu_15963_p2() {
    exitcond68_fu_15963_p2 = (!co9_reg_9839.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co9_reg_9839.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond69_fu_15931_p2() {
    exitcond69_fu_15931_p2 = (!h7_reg_9817.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h7_reg_9817.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond70_fu_16081_p2() {
    exitcond70_fu_16081_p2 = (!i11_reg_9862.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i11_reg_9862.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond71_fu_16065_p2() {
    exitcond71_fu_16065_p2 = (!ci10_reg_9851.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci10_reg_9851.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond72_fu_16123_p2() {
    exitcond72_fu_16123_p2 = (!co12_reg_9873.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co12_reg_9873.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond73_fu_16264_p2() {
    exitcond73_fu_16264_p2 = (!tmp_706_reg_9906.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_706_reg_9906.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond74_fu_16211_p2() {
    exitcond74_fu_16211_p2 = (!w13_reg_9884.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w13_reg_9884.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond75_fu_16307_p2() {
    exitcond75_fu_16307_p2 = (!co16_reg_9917.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co16_reg_9917.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond76_fu_16248_p2() {
    exitcond76_fu_16248_p2 = (!h14_reg_9895.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h14_reg_9895.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond77_fu_16425_p2() {
    exitcond77_fu_16425_p2 = (!i16_reg_9940.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i16_reg_9940.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond78_fu_16409_p2() {
    exitcond78_fu_16409_p2 = (!ci17_reg_9929.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci17_reg_9929.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond79_fu_16471_p2() {
    exitcond79_fu_16471_p2 = (!co19_reg_9951.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co19_reg_9951.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond80_fu_16644_p2() {
    exitcond80_fu_16644_p2 = (!co22_reg_9984.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co22_reg_9984.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond81_fu_16519_p2() {
    exitcond81_fu_16519_p2 = (!h20_reg_9962.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h20_reg_9962.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond82_fu_16762_p2() {
    exitcond82_fu_16762_p2 = (!i18_reg_10007.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i18_reg_10007.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond83_fu_16746_p2() {
    exitcond83_fu_16746_p2 = (!ci22_reg_9996.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci22_reg_9996.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond84_fu_16601_p2() {
    exitcond84_fu_16601_p2 = (!w21_reg_9973.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w21_reg_9973.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond85_fu_16804_p2() {
    exitcond85_fu_16804_p2 = (!co25_reg_10018.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co25_reg_10018.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond86_fu_16960_p2() {
    exitcond86_fu_16960_p2 = (!i20_reg_10051.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i20_reg_10051.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond87_fu_16907_p2() {
    exitcond87_fu_16907_p2 = (!w26_reg_10029.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w26_reg_10029.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond88_fu_16972_p2() {
    exitcond88_fu_16972_p2 = (!co29_reg_10062.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co29_reg_10062.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond89_fu_16944_p2() {
    exitcond89_fu_16944_p2 = (!h27_reg_10040.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h27_reg_10040.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond90_fu_17085_p2() {
    exitcond90_fu_17085_p2 = (!tmp_728_reg_10085.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_728_reg_10085.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond91_fu_17069_p2() {
    exitcond91_fu_17069_p2 = (!ci24_reg_10074.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci24_reg_10074.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond92_fu_17154_p2() {
    exitcond92_fu_17154_p2 = (!co32_reg_10096.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co32_reg_10096.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond93_fu_17277_p2() {
    exitcond93_fu_17277_p2 = (!co35_reg_10129.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co35_reg_10129.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond94_fu_17166_p2() {
    exitcond94_fu_17166_p2 = (!h33_reg_10107.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h33_reg_10107.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond95_fu_17450_p2() {
    exitcond95_fu_17450_p2 = (!co38_reg_10162.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co38_reg_10162.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond96_fu_17325_p2() {
    exitcond96_fu_17325_p2 = (!h36_reg_10140.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h36_reg_10140.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond97_fu_17217_p2() {
    exitcond97_fu_17217_p2 = (!w34_reg_10118.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w34_reg_10118.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond98_fu_17568_p2() {
    exitcond98_fu_17568_p2 = (!i23_reg_10185.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i23_reg_10185.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond99_fu_17552_p2() {
    exitcond99_fu_17552_p2 = (!ci26_reg_10174.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci26_reg_10174.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond_fu_15484_p2() {
    exitcond_fu_15484_p2 = (!i_reg_9695.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_9695.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond_i_fu_40084_p2() {
    exitcond_i_fu_40084_p2 = (!w_i_reg_13820.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w_i_reg_13820.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_fc_bias_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        fc_bias_V_address0 =  (sc_lv<4>) (i2_cast_reg_40593.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1726.read())) {
        fc_bias_V_address0 = grp_fc_fu_15371_bias_V_address0.read();
    } else {
        fc_bias_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ShuffleNetV2::thread_fc_bias_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        fc_bias_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1726.read())) {
        fc_bias_V_ce0 = grp_fc_fu_15371_bias_V_ce0.read();
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
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_2003_cast_fu_39967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1713.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_1997_cast_fu_39805_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1622.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_1926_cast_fu_38484_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1617.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_1925_cast_fu_38282_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1525.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_1851_cast_fu_36953_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1520.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_1850_cast_fu_36751_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1428.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_1775_cast_fu_35426_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        feature_buffer_192x6_address0 = grp_shuffle_96_r_p_fu_15009_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        feature_buffer_192x6_address0 = grp_shuffle_96_l_p_fu_14955_output_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        feature_buffer_192x6_address0 = grp_shuffle_96_p_fu_14727_output_V_address0.read();
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
        feature_buffer_192x6_ce0 = grp_shuffle_96_r_p_fu_15009_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        feature_buffer_192x6_ce0 = grp_shuffle_96_l_p_fu_14955_output_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        feature_buffer_192x6_ce0 = grp_shuffle_96_p_fu_14727_output_V_ce0.read();
    } else {
        feature_buffer_192x6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_192x6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        feature_buffer_192x6_d0 = grp_shuffle_96_r_p_fu_15009_output_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        feature_buffer_192x6_d0 = grp_shuffle_96_l_p_fu_14955_output_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        feature_buffer_192x6_d0 = grp_shuffle_96_p_fu_14727_output_V_d0.read();
    } else {
        feature_buffer_192x6_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_feature_buffer_192x6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        feature_buffer_192x6_we0 = grp_shuffle_96_r_p_fu_15009_output_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        feature_buffer_192x6_we0 = grp_shuffle_96_l_p_fu_14955_output_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        feature_buffer_192x6_we0 = grp_shuffle_96_p_fu_14727_output_V_we0.read();
    } else {
        feature_buffer_192x6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_48x18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_973_cast_fu_18840_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_943_cast_fu_18220_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_941_cast_fu_18026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_899_cast_fu_17432_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_897_cast_fu_17238_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_853_cast_fu_16626_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state484.read())) {
        feature_buffer_48x18_address0 = grp_subconv_3x3_16_strid_fu_15359_input_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        feature_buffer_48x18_address0 = grp_shuffle_24_r_p_fu_15281_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        feature_buffer_48x18_address0 = grp_shuffle_24_l_p_fu_15227_output_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()))) {
        feature_buffer_48x18_address0 = grp_shuffle_24_p_fu_15063_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        feature_buffer_48x18_address0 = grp_subconv_1x1_16p_p_fu_14143_input_V_address0.read();
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
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state484.read())) {
        feature_buffer_48x18_ce0 = grp_subconv_3x3_16_strid_fu_15359_input_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        feature_buffer_48x18_ce0 = grp_shuffle_24_r_p_fu_15281_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        feature_buffer_48x18_ce0 = grp_shuffle_24_l_p_fu_15227_output_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()))) {
        feature_buffer_48x18_ce0 = grp_shuffle_24_p_fu_15063_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        feature_buffer_48x18_ce0 = grp_subconv_1x1_16p_p_fu_14143_input_V_ce0.read();
    } else {
        feature_buffer_48x18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_48x18_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        feature_buffer_48x18_d0 = grp_shuffle_24_r_p_fu_15281_output_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        feature_buffer_48x18_d0 = grp_shuffle_24_l_p_fu_15227_output_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()))) {
        feature_buffer_48x18_d0 = grp_shuffle_24_p_fu_15063_output_V_d0.read();
    } else {
        feature_buffer_48x18_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_feature_buffer_48x18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        feature_buffer_48x18_we0 = grp_shuffle_24_r_p_fu_15281_output_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        feature_buffer_48x18_we0 = grp_shuffle_24_l_p_fu_15227_output_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()))) {
        feature_buffer_48x18_we0 = grp_shuffle_24_p_fu_15063_output_V_we0.read();
    } else {
        feature_buffer_48x18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_96x10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1273.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1677_cast_fu_33262_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1183.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1614_cast_fu_31897_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1178.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1613_cast_fu_31695_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1088.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1534_cast_fu_30334_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1083.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1533_cast_fu_30132_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state993.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1457_cast_fu_28783_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state988.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1456_cast_fu_28581_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state898.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1380_cast_fu_27236_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state893.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1379_cast_fu_27034_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state803.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1304_cast_fu_25697_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state798.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1303_cast_fu_25495_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1226_cast_fu_24138_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state703.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1225_cast_fu_23936_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state613.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1150_cast_fu_22587_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state608.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1149_cast_fu_22385_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state518.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1074_cast_fu_21040_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1393.read())) {
        feature_buffer_96x10_address0 = grp_subconv_3x3_8_stride_1_fu_15347_input_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read())) {
        feature_buffer_96x10_address0 = grp_shuffle_48_r_p_fu_15173_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read())) {
        feature_buffer_96x10_address0 = grp_shuffle_48_l_p_fu_15119_output_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state800.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state990.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1085.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1180.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1275.read()))) {
        feature_buffer_96x10_address0 = grp_shuffle_48_p_fu_14783_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        feature_buffer_96x10_address0 = grp_subconv_1x1_8p_p_fu_13935_input_V_address0.read();
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
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1393.read())) {
        feature_buffer_96x10_ce0 = grp_subconv_3x3_8_stride_1_fu_15347_input_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read())) {
        feature_buffer_96x10_ce0 = grp_shuffle_48_r_p_fu_15173_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read())) {
        feature_buffer_96x10_ce0 = grp_shuffle_48_l_p_fu_15119_output_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state800.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state990.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1085.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1180.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1275.read()))) {
        feature_buffer_96x10_ce0 = grp_shuffle_48_p_fu_14783_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        feature_buffer_96x10_ce0 = grp_subconv_1x1_8p_p_fu_13935_input_V_ce0.read();
    } else {
        feature_buffer_96x10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_96x10_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read())) {
        feature_buffer_96x10_d0 = grp_shuffle_48_r_p_fu_15173_output_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read())) {
        feature_buffer_96x10_d0 = grp_shuffle_48_l_p_fu_15119_output_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state800.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state990.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1085.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1180.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1275.read()))) {
        feature_buffer_96x10_d0 = grp_shuffle_48_p_fu_14783_output_V_d0.read();
    } else {
        feature_buffer_96x10_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_feature_buffer_96x10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read())) {
        feature_buffer_96x10_we0 = grp_shuffle_48_r_p_fu_15173_output_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read())) {
        feature_buffer_96x10_we0 = grp_shuffle_48_l_p_fu_15119_output_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state800.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state990.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1085.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1180.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1275.read()))) {
        feature_buffer_96x10_we0 = grp_shuffle_48_p_fu_14783_output_V_we0.read();
    } else {
        feature_buffer_96x10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_conv1_p_fu_14482_ap_start() {
    grp_conv1_p_fu_14482_ap_start = ap_reg_grp_conv1_p_fu_14482_ap_start.read();
}

void ShuffleNetV2::thread_grp_conv_last_fu_14455_ap_start() {
    grp_conv_last_fu_14455_ap_start = ap_reg_grp_conv_last_fu_14455_ap_start.read();
}

void ShuffleNetV2::thread_grp_fc_fu_15371_ap_start() {
    grp_fc_fu_15371_ap_start = ap_reg_grp_fc_fu_15371_ap_start.read();
}

void ShuffleNetV2::thread_grp_fu_19038_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state371.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond132_fu_18938_p2.read()))) {
        grp_fu_19038_ap_start = ap_const_logic_1;
    } else {
        grp_fu_19038_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_19038_ce() {
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
        grp_fu_19038_ce = ap_const_logic_1;
    } else {
        grp_fu_19038_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_19038_p0() {
    grp_fu_19038_p0 = (!tmp_39_cast_cast_fu_18984_p1.read().is_01() || !tmp_34_cast_cast_reg_42768.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_39_cast_cast_fu_18984_p1.read()) + sc_biguint<9>(tmp_34_cast_cast_reg_42768.read()));
}

void ShuffleNetV2::thread_grp_fu_19038_p1() {
    grp_fu_19038_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_19819_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state428.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond143_fu_19719_p2.read()))) {
        grp_fu_19819_ap_start = ap_const_logic_1;
    } else {
        grp_fu_19819_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_19819_ce() {
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
        grp_fu_19819_ce = ap_const_logic_1;
    } else {
        grp_fu_19819_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_19819_p0() {
    grp_fu_19819_p0 = (!tmp_56_cast_cast_fu_19765_p1.read().is_01() || !tmp_48_cast_cast_reg_43028.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_56_cast_cast_fu_19765_p1.read()) + sc_biguint<9>(tmp_48_cast_cast_reg_43028.read()));
}

void ShuffleNetV2::thread_grp_fu_19819_p1() {
    grp_fu_19819_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_20600_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond154_fu_20496_p2.read()))) {
        grp_fu_20600_ap_start = ap_const_logic_1;
    } else {
        grp_fu_20600_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_20600_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state488.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state489.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state490.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state492.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state494.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state495.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state496.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state497.read()))) {
        grp_fu_20600_ce = ap_const_logic_1;
    } else {
        grp_fu_20600_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_20600_p0() {
    grp_fu_20600_p0 = (!tmp_80_cast_cast_fu_20542_p1.read().is_01() || !tmp_65_cast_cast_reg_43288.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_80_cast_cast_fu_20542_p1.read()) + sc_biguint<9>(tmp_65_cast_cast_reg_43288.read()));
}

void ShuffleNetV2::thread_grp_fu_20600_p1() {
    grp_fu_20600_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_21247_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state522.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond162_fu_21147_p2.read()))) {
        grp_fu_21247_ap_start = ap_const_logic_1;
    } else {
        grp_fu_21247_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_21247_ce() {
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
        grp_fu_21247_ce = ap_const_logic_1;
    } else {
        grp_fu_21247_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_21247_p0() {
    grp_fu_21247_p0 = (!tmp_88_cast_cast_fu_21193_p1.read().is_01() || !tmp_79_cast_cast_reg_43469.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_88_cast_cast_fu_21193_p1.read()) + sc_biguint<9>(tmp_79_cast_cast_reg_43469.read()));
}

void ShuffleNetV2::thread_grp_fu_21247_p1() {
    grp_fu_21247_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_22028_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state579.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond173_fu_21928_p2.read()))) {
        grp_fu_22028_ap_start = ap_const_logic_1;
    } else {
        grp_fu_22028_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_22028_ce() {
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
        grp_fu_22028_ce = ap_const_logic_1;
    } else {
        grp_fu_22028_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_22028_p0() {
    grp_fu_22028_p0 = (!tmp_106_cast_cast_fu_21974_p1.read().is_01() || !tmp_98_cast_cast_reg_43729.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_106_cast_cast_fu_21974_p1.read()) + sc_biguint<9>(tmp_98_cast_cast_reg_43729.read()));
}

void ShuffleNetV2::thread_grp_fu_22028_p1() {
    grp_fu_22028_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_22794_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond184_fu_22694_p2.read()))) {
        grp_fu_22794_ap_start = ap_const_logic_1;
    } else {
        grp_fu_22794_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_22794_ce() {
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
        grp_fu_22794_ce = ap_const_logic_1;
    } else {
        grp_fu_22794_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_22794_p0() {
    grp_fu_22794_p0 = (!tmp_119_cast_cast_fu_22740_p1.read().is_01() || !tmp_114_cast_cast_reg_43954.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_119_cast_cast_fu_22740_p1.read()) + sc_biguint<9>(tmp_114_cast_cast_reg_43954.read()));
}

void ShuffleNetV2::thread_grp_fu_22794_p1() {
    grp_fu_22794_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_23575_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state674.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond195_fu_23475_p2.read()))) {
        grp_fu_23575_ap_start = ap_const_logic_1;
    } else {
        grp_fu_23575_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_23575_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state676.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state683.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state674.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state675.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state677.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state678.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state679.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state680.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state681.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state682.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state685.read()))) {
        grp_fu_23575_ce = ap_const_logic_1;
    } else {
        grp_fu_23575_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_23575_p0() {
    grp_fu_23575_p0 = (!tmp_137_cast_cast_fu_23521_p1.read().is_01() || !tmp_129_cast_cast_reg_44214.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_137_cast_cast_fu_23521_p1.read()) + sc_biguint<9>(tmp_129_cast_cast_reg_44214.read()));
}

void ShuffleNetV2::thread_grp_fu_23575_p1() {
    grp_fu_23575_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_24345_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state712.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond206_fu_24245_p2.read()))) {
        grp_fu_24345_ap_start = ap_const_logic_1;
    } else {
        grp_fu_24345_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_24345_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state716.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state723.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state712.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state713.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state714.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state715.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state717.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state718.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state719.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state720.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state721.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()))) {
        grp_fu_24345_ce = ap_const_logic_1;
    } else {
        grp_fu_24345_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_24345_p0() {
    grp_fu_24345_p0 = (!tmp_145_cast_cast_reg_44439.read().is_01() || !tmp_150_cast_cast_fu_24291_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_145_cast_cast_reg_44439.read()) + sc_bigint<9>(tmp_150_cast_cast_fu_24291_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_24345_p1() {
    grp_fu_24345_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_25134_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state769.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond217_fu_25034_p2.read()))) {
        grp_fu_25134_ap_start = ap_const_logic_1;
    } else {
        grp_fu_25134_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_25134_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state771.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state780.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state769.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state770.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state772.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state773.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state774.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state775.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state776.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state778.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state779.read()))) {
        grp_fu_25134_ce = ap_const_logic_1;
    } else {
        grp_fu_25134_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_25134_p0() {
    grp_fu_25134_p0 = (!tmp_168_cast_cast_fu_25080_p1.read().is_01() || !tmp_160_cast_cast_reg_44699.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_168_cast_cast_fu_25080_p1.read()) + sc_biguint<9>(tmp_160_cast_cast_reg_44699.read()));
}

void ShuffleNetV2::thread_grp_fu_25134_p1() {
    grp_fu_25134_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_25904_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state807.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond228_fu_25804_p2.read()))) {
        grp_fu_25904_ap_start = ap_const_logic_1;
    } else {
        grp_fu_25904_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_25904_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state809.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state818.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state807.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state808.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state810.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state811.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state812.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state814.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state815.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state816.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state817.read()))) {
        grp_fu_25904_ce = ap_const_logic_1;
    } else {
        grp_fu_25904_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_25904_p0() {
    grp_fu_25904_p0 = (!tmp_181_cast_cast_fu_25850_p1.read().is_01() || !tmp_176_cast_cast_reg_44924.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_181_cast_cast_fu_25850_p1.read()) + sc_biguint<9>(tmp_176_cast_cast_reg_44924.read()));
}

void ShuffleNetV2::thread_grp_fu_25904_p1() {
    grp_fu_25904_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_26677_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state864.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond239_fu_26577_p2.read()))) {
        grp_fu_26677_ap_start = ap_const_logic_1;
    } else {
        grp_fu_26677_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_26677_ce() {
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
        grp_fu_26677_ce = ap_const_logic_1;
    } else {
        grp_fu_26677_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_26677_p0() {
    grp_fu_26677_p0 = (!tmp_199_cast_cast_fu_26623_p1.read().is_01() || !tmp_191_cast_cast_reg_45184.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_199_cast_cast_fu_26623_p1.read()) + sc_biguint<9>(tmp_191_cast_cast_reg_45184.read()));
}

void ShuffleNetV2::thread_grp_fu_26677_p1() {
    grp_fu_26677_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_27443_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state902.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond250_fu_27343_p2.read()))) {
        grp_fu_27443_ap_start = ap_const_logic_1;
    } else {
        grp_fu_27443_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_27443_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state913.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state902.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state903.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state905.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state906.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state907.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state908.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state909.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state910.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state911.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state912.read()))) {
        grp_fu_27443_ce = ap_const_logic_1;
    } else {
        grp_fu_27443_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_27443_p0() {
    grp_fu_27443_p0 = (!tmp_212_cast_cast_fu_27389_p1.read().is_01() || !tmp_207_cast_cast_reg_45409.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_212_cast_cast_fu_27389_p1.read()) + sc_biguint<9>(tmp_207_cast_cast_reg_45409.read()));
}

void ShuffleNetV2::thread_grp_fu_27443_p1() {
    grp_fu_27443_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_28224_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond261_fu_28124_p2.read()))) {
        grp_fu_28224_ap_start = ap_const_logic_1;
    } else {
        grp_fu_28224_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_28224_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state963.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state970.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state960.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state961.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state962.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state964.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state965.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state966.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state967.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state968.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state969.read()))) {
        grp_fu_28224_ce = ap_const_logic_1;
    } else {
        grp_fu_28224_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_28224_p0() {
    grp_fu_28224_p0 = (!tmp_230_cast_cast_fu_28170_p1.read().is_01() || !tmp_222_cast_cast_reg_45669.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_230_cast_cast_fu_28170_p1.read()) + sc_biguint<9>(tmp_222_cast_cast_reg_45669.read()));
}

void ShuffleNetV2::thread_grp_fu_28224_p1() {
    grp_fu_28224_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_28990_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state997.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond272_fu_28890_p2.read()))) {
        grp_fu_28990_ap_start = ap_const_logic_1;
    } else {
        grp_fu_28990_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_28990_ce() {
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
        grp_fu_28990_ce = ap_const_logic_1;
    } else {
        grp_fu_28990_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_28990_p0() {
    grp_fu_28990_p0 = (!tmp_243_cast_cast_fu_28936_p1.read().is_01() || !tmp_238_cast_cast_reg_45894.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_243_cast_cast_fu_28936_p1.read()) + sc_biguint<9>(tmp_238_cast_cast_reg_45894.read()));
}

void ShuffleNetV2::thread_grp_fu_28990_p1() {
    grp_fu_28990_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_29775_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1054.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond283_fu_29675_p2.read()))) {
        grp_fu_29775_ap_start = ap_const_logic_1;
    } else {
        grp_fu_29775_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_29775_ce() {
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
        grp_fu_29775_ce = ap_const_logic_1;
    } else {
        grp_fu_29775_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_29775_p0() {
    grp_fu_29775_p0 = (!tmp_261_cast_cast_fu_29721_p1.read().is_01() || !tmp_253_cast_cast_reg_46154.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_261_cast_cast_fu_29721_p1.read()) + sc_biguint<9>(tmp_253_cast_cast_reg_46154.read()));
}

void ShuffleNetV2::thread_grp_fu_29775_p1() {
    grp_fu_29775_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_30541_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1092.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond294_fu_30441_p2.read()))) {
        grp_fu_30541_ap_start = ap_const_logic_1;
    } else {
        grp_fu_30541_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_30541_ce() {
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
        grp_fu_30541_ce = ap_const_logic_1;
    } else {
        grp_fu_30541_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_30541_p0() {
    grp_fu_30541_p0 = (!tmp_269_cast_cast_reg_46379.read().is_01() || !tmp_274_cast_cast_fu_30487_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_269_cast_cast_reg_46379.read()) + sc_bigint<9>(tmp_274_cast_cast_fu_30487_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_30541_p1() {
    grp_fu_30541_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_31326_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1149.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond422_fu_31226_p2.read()))) {
        grp_fu_31326_ap_start = ap_const_logic_1;
    } else {
        grp_fu_31326_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_31326_ce() {
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
        grp_fu_31326_ce = ap_const_logic_1;
    } else {
        grp_fu_31326_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_31326_p0() {
    grp_fu_31326_p0 = (!tmp_284_cast_cast_reg_46639.read().is_01() || !tmp_292_cast_cast_fu_31272_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_284_cast_cast_reg_46639.read()) + sc_bigint<9>(tmp_292_cast_cast_fu_31272_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_31326_p1() {
    grp_fu_31326_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_32104_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1187.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond411_fu_32004_p2.read()))) {
        grp_fu_32104_ap_start = ap_const_logic_1;
    } else {
        grp_fu_32104_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_32104_ce() {
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
        grp_fu_32104_ce = ap_const_logic_1;
    } else {
        grp_fu_32104_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_32104_p0() {
    grp_fu_32104_p0 = (!tmp_300_cast_cast_reg_46864.read().is_01() || !tmp_305_cast_cast_fu_32050_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_300_cast_cast_reg_46864.read()) + sc_bigint<9>(tmp_305_cast_cast_fu_32050_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_32104_p1() {
    grp_fu_32104_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_32901_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1244.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond400_fu_32793_p2.read()))) {
        grp_fu_32901_ap_start = ap_const_logic_1;
    } else {
        grp_fu_32901_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_32901_ce() {
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
        grp_fu_32901_ce = ap_const_logic_1;
    } else {
        grp_fu_32901_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_32901_p0() {
    grp_fu_32901_p0 = (!tmp_323_cast_cast_fu_32839_p1.read().is_01() || !tmp_315_cast_cast_reg_47124.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_323_cast_cast_fu_32839_p1.read()) + sc_biguint<9>(tmp_315_cast_cast_reg_47124.read()));
}

void ShuffleNetV2::thread_grp_fu_32901_p1() {
    grp_fu_32901_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_33448_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond392_fu_33358_p2.read()))) {
        grp_fu_33448_ap_start = ap_const_logic_1;
    } else {
        grp_fu_33448_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_33448_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1280.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1290.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1278.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1281.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1282.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1283.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1284.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1285.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1286.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1287.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1288.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1289.read()))) {
        grp_fu_33448_ce = ap_const_logic_1;
    } else {
        grp_fu_33448_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_33448_p0() {
    grp_fu_33448_p0 = (!tmp_335_cast_cast_fu_33406_p1.read().is_01() || !tmp_330_cast_cast_reg_47295.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_335_cast_cast_fu_33406_p1.read()) + sc_biguint<10>(tmp_330_cast_cast_reg_47295.read()));
}

void ShuffleNetV2::thread_grp_fu_33448_p1() {
    grp_fu_33448_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_34217_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1336.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond381_fu_34127_p2.read()))) {
        grp_fu_34217_ap_start = ap_const_logic_1;
    } else {
        grp_fu_34217_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_34217_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1338.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1345.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1336.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1337.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1339.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1340.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1341.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1342.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1343.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1344.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1346.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1347.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1348.read()))) {
        grp_fu_34217_ce = ap_const_logic_1;
    } else {
        grp_fu_34217_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_34217_p0() {
    grp_fu_34217_p0 = (!tmp_353_cast_cast_fu_34175_p1.read().is_01() || !tmp_345_cast_cast_reg_47555.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_353_cast_cast_fu_34175_p1.read()) + sc_biguint<10>(tmp_345_cast_cast_reg_47555.read()));
}

void ShuffleNetV2::thread_grp_fu_34217_p1() {
    grp_fu_34217_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_34986_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1396.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond370_fu_34896_p2.read()))) {
        grp_fu_34986_ap_start = ap_const_logic_1;
    } else {
        grp_fu_34986_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_34986_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1401.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1408.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1396.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1397.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1398.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1399.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1400.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1402.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1403.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1404.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1405.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1406.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1407.read()))) {
        grp_fu_34986_ce = ap_const_logic_1;
    } else {
        grp_fu_34986_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_34986_p0() {
    grp_fu_34986_p0 = (!tmp_376_cast_cast_fu_34944_p1.read().is_01() || !tmp_363_cast_cast_reg_47815.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_376_cast_cast_fu_34944_p1.read()) + sc_biguint<10>(tmp_363_cast_cast_reg_47815.read()));
}

void ShuffleNetV2::thread_grp_fu_34986_p1() {
    grp_fu_34986_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_35621_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1432.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond362_fu_35531_p2.read()))) {
        grp_fu_35621_ap_start = ap_const_logic_1;
    } else {
        grp_fu_35621_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_35621_ce() {
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
        grp_fu_35621_ce = ap_const_logic_1;
    } else {
        grp_fu_35621_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_35621_p0() {
    grp_fu_35621_p0 = (!tmp_384_cast_cast_fu_35579_p1.read().is_01() || !tmp_375_cast_cast_reg_47996.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_384_cast_cast_fu_35579_p1.read()) + sc_biguint<10>(tmp_375_cast_cast_reg_47996.read()));
}

void ShuffleNetV2::thread_grp_fu_35621_p1() {
    grp_fu_35621_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_36382_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1490.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond351_fu_36292_p2.read()))) {
        grp_fu_36382_ap_start = ap_const_logic_1;
    } else {
        grp_fu_36382_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_36382_ce() {
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
        grp_fu_36382_ce = ap_const_logic_1;
    } else {
        grp_fu_36382_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_36382_p0() {
    grp_fu_36382_p0 = (!tmp_394_cast_cast_reg_48256.read().is_01() || !tmp_402_cast_cast_fu_36340_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_394_cast_cast_reg_48256.read()) + sc_bigint<10>(tmp_402_cast_cast_fu_36340_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_36382_p1() {
    grp_fu_36382_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_37148_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1529.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond340_fu_37058_p2.read()))) {
        grp_fu_37148_ap_start = ap_const_logic_1;
    } else {
        grp_fu_37148_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_37148_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1531.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1538.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1529.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1530.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1532.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1533.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1535.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1536.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1537.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1539.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1540.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()))) {
        grp_fu_37148_ce = ap_const_logic_1;
    } else {
        grp_fu_37148_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_37148_p0() {
    grp_fu_37148_p0 = (!tmp_415_cast_cast_fu_37106_p1.read().is_01() || !tmp_410_cast_cast_reg_48481.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_415_cast_cast_fu_37106_p1.read()) + sc_biguint<10>(tmp_410_cast_cast_reg_48481.read()));
}

void ShuffleNetV2::thread_grp_fu_37148_p1() {
    grp_fu_37148_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_37921_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1587.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond329_fu_37831_p2.read()))) {
        grp_fu_37921_ap_start = ap_const_logic_1;
    } else {
        grp_fu_37921_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_37921_ce() {
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
        grp_fu_37921_ce = ap_const_logic_1;
    } else {
        grp_fu_37921_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_37921_p0() {
    grp_fu_37921_p0 = (!tmp_433_cast_cast_fu_37879_p1.read().is_01() || !tmp_425_cast_cast_reg_48741.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_433_cast_cast_fu_37879_p1.read()) + sc_biguint<10>(tmp_425_cast_cast_reg_48741.read()));
}

void ShuffleNetV2::thread_grp_fu_37921_p1() {
    grp_fu_37921_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_38679_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1626.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond318_fu_38589_p2.read()))) {
        grp_fu_38679_ap_start = ap_const_logic_1;
    } else {
        grp_fu_38679_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_38679_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1628.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1638.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1626.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1627.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1630.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1631.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1633.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1634.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1635.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1636.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1637.read()))) {
        grp_fu_38679_ce = ap_const_logic_1;
    } else {
        grp_fu_38679_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_38679_p0() {
    grp_fu_38679_p0 = (!tmp_446_cast_cast_fu_38637_p1.read().is_01() || !tmp_441_cast_cast_reg_48966.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_446_cast_cast_fu_38637_p1.read()) + sc_biguint<10>(tmp_441_cast_cast_reg_48966.read()));
}

void ShuffleNetV2::thread_grp_fu_38679_p1() {
    grp_fu_38679_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_39444_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1684.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond307_fu_39354_p2.read()))) {
        grp_fu_39444_ap_start = ap_const_logic_1;
    } else {
        grp_fu_39444_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_39444_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1693.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1684.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1685.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1687.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1688.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1689.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1690.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1691.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1692.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1694.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1695.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1696.read()))) {
        grp_fu_39444_ce = ap_const_logic_1;
    } else {
        grp_fu_39444_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_39444_p0() {
    grp_fu_39444_p0 = (!tmp_464_cast_cast_fu_39402_p1.read().is_01() || !tmp_456_cast_cast_reg_49226.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_464_cast_cast_fu_39402_p1.read()) + sc_biguint<10>(tmp_456_cast_cast_reg_49226.read()));
}

void ShuffleNetV2::thread_grp_fu_39444_p1() {
    grp_fu_39444_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_shuffle_24_l_p_fu_15227_ap_start() {
    grp_shuffle_24_l_p_fu_15227_ap_start = ap_reg_grp_shuffle_24_l_p_fu_15227_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_24_p_fu_15063_ap_start() {
    grp_shuffle_24_p_fu_15063_ap_start = ap_reg_grp_shuffle_24_p_fu_15063_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_24_r_p_fu_15281_ap_start() {
    grp_shuffle_24_r_p_fu_15281_ap_start = ap_reg_grp_shuffle_24_r_p_fu_15281_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_l_p_fu_15119_ap_start() {
    grp_shuffle_48_l_p_fu_15119_ap_start = ap_reg_grp_shuffle_48_l_p_fu_15119_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_p_fu_14783_ap_start() {
    grp_shuffle_48_p_fu_14783_ap_start = ap_reg_grp_shuffle_48_p_fu_14783_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_r_p_fu_15173_ap_start() {
    grp_shuffle_48_r_p_fu_15173_ap_start = ap_reg_grp_shuffle_48_r_p_fu_15173_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_l_p_fu_14955_ap_start() {
    grp_shuffle_96_l_p_fu_14955_ap_start = ap_reg_grp_shuffle_96_l_p_fu_14955_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_p_fu_14727_ap_start() {
    grp_shuffle_96_p_fu_14727_ap_start = ap_reg_grp_shuffle_96_p_fu_14727_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_r_p_fu_15009_ap_start() {
    grp_shuffle_96_r_p_fu_15009_ap_start = ap_reg_grp_shuffle_96_r_p_fu_15009_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_16_p_fu_14351_ap_start() {
    grp_subconv_1x1_16_p_fu_14351_ap_start = ap_reg_grp_subconv_1x1_16_p_fu_14351_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_16p_p_fu_14143_ap_start() {
    grp_subconv_1x1_16p_p_fu_14143_ap_start = ap_reg_grp_subconv_1x1_16p_p_fu_14143_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_32_p_fu_14247_ap_start() {
    grp_subconv_1x1_32_p_fu_14247_ap_start = ap_reg_grp_subconv_1x1_32_p_fu_14247_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_4_p_fu_13831_ap_start() {
    grp_subconv_1x1_4_p_fu_13831_ap_start = ap_reg_grp_subconv_1x1_4_p_fu_13831_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_8_p_fu_14039_ap_start() {
    grp_subconv_1x1_8_p_fu_14039_ap_start = ap_reg_grp_subconv_1x1_8_p_fu_14039_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_8p_p_fu_13935_ap_start() {
    grp_subconv_1x1_8p_p_fu_13935_ap_start = ap_reg_grp_subconv_1x1_8p_p_fu_13935_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_no_re_fu_14897_ap_start() {
    grp_subconv_3x3_16_no_re_fu_14897_ap_start = ap_reg_grp_subconv_3x3_16_no_re_fu_14897_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_strid_1_fu_14611_ap_start() {
    grp_subconv_3x3_16_strid_1_fu_14611_ap_start = ap_reg_grp_subconv_3x3_16_strid_1_fu_14611_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_strid_fu_15359_ap_start() {
    grp_subconv_3x3_16_strid_fu_15359_ap_start = ap_reg_grp_subconv_3x3_16_strid_fu_15359_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_32_strid_1_fu_14839_ap_start() {
    grp_subconv_3x3_32_strid_1_fu_14839_ap_start = ap_reg_grp_subconv_3x3_32_strid_1_fu_14839_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_32_strid_fu_15335_ap_start() {
    grp_subconv_3x3_32_strid_fu_15335_ap_start = ap_reg_grp_subconv_3x3_32_strid_fu_15335_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_4_no_rel_fu_14495_ap_start() {
    grp_subconv_3x3_4_no_rel_fu_14495_ap_start = ap_reg_grp_subconv_3x3_4_no_rel_fu_14495_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_8_no_rel_fu_14669_ap_start() {
    grp_subconv_3x3_8_no_rel_fu_14669_ap_start = ap_reg_grp_subconv_3x3_8_no_rel_fu_14669_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_8_stride_1_fu_15347_ap_start() {
    grp_subconv_3x3_8_stride_1_fu_15347_ap_start = ap_reg_grp_subconv_3x3_8_stride_1_fu_15347_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_8_stride_fu_14553_ap_start() {
    grp_subconv_3x3_8_stride_fu_14553_ap_start = ap_reg_grp_subconv_3x3_8_stride_fu_14553_ap_start.read();
}

void ShuffleNetV2::thread_h100_cast_cast_fu_30836_p1() {
    h100_cast_cast_fu_30836_p1 = esl_zext<10,2>(h94_reg_12344.read());
}

void ShuffleNetV2::thread_h100_cast_fu_30832_p1() {
    h100_cast_fu_30832_p1 = esl_zext<32,2>(h94_reg_12344.read());
}

void ShuffleNetV2::thread_h106_cast_cast_fu_32403_p1() {
    h106_cast_cast_fu_32403_p1 = esl_zext<10,2>(h100_reg_12586.read());
}

void ShuffleNetV2::thread_h106_cast_fu_32399_p1() {
    h106_cast_fu_32399_p1 = esl_zext<32,2>(h100_reg_12586.read());
}

void ShuffleNetV2::thread_h110_cast_cast_fu_33739_p1() {
    h110_cast_cast_fu_33739_p1 = esl_zext<11,2>(h104_reg_12795.read());
}

void ShuffleNetV2::thread_h110_cast_fu_33735_p1() {
    h110_cast_fu_33735_p1 = esl_zext<32,2>(h104_reg_12795.read());
}

void ShuffleNetV2::thread_h112_cast_cast_fu_34512_p1() {
    h112_cast_cast_fu_34512_p1 = esl_zext<11,2>(h106_reg_12916.read());
}

void ShuffleNetV2::thread_h112_cast_fu_34508_p1() {
    h112_cast_fu_34508_p1 = esl_zext<32,2>(h106_reg_12916.read());
}

void ShuffleNetV2::thread_h116_cast_cast_fu_35908_p1() {
    h116_cast_cast_fu_35908_p1 = esl_zext<11,2>(h110_reg_13125.read());
}

void ShuffleNetV2::thread_h116_cast_fu_35904_p1() {
    h116_cast_fu_35904_p1 = esl_zext<32,2>(h110_reg_13125.read());
}

void ShuffleNetV2::thread_h122_cast_cast_fu_37435_p1() {
    h122_cast_cast_fu_37435_p1 = esl_zext<11,2>(h116_reg_13367.read());
}

void ShuffleNetV2::thread_h122_cast_fu_37431_p1() {
    h122_cast_fu_37431_p1 = esl_zext<32,2>(h116_reg_13367.read());
}

void ShuffleNetV2::thread_h128_cast_cast_fu_38966_p1() {
    h128_cast_cast_fu_38966_p1 = esl_zext<11,2>(h122_reg_13609.read());
}

void ShuffleNetV2::thread_h128_cast_fu_38962_p1() {
    h128_cast_fu_38962_p1 = esl_zext<32,2>(h122_reg_13609.read());
}

void ShuffleNetV2::thread_h132_cast_cast_fu_39932_p1() {
    h132_cast_cast_fu_39932_p1 = esl_zext<13,3>(h127_reg_13763.read());
}

void ShuffleNetV2::thread_h14_cast_cast_fu_16234_p1() {
    h14_cast_cast_fu_16234_p1 = esl_zext<9,2>(h14_reg_9895.read());
}

void ShuffleNetV2::thread_h27_cast_cast_fu_16930_p1() {
    h27_cast_cast_fu_16930_p1 = esl_zext<9,2>(h27_reg_10040.read());
}

void ShuffleNetV2::thread_h43_cast_cast_fu_17736_p1() {
    h43_cast_cast_fu_17736_p1 = esl_zext<9,2>(h42_reg_10218.read());
}

void ShuffleNetV2::thread_h54_cast_cast_fu_18548_p1() {
    h54_cast_cast_fu_18548_p1 = esl_zext<9,2>(h48_reg_10396.read());
}

void ShuffleNetV2::thread_h58_cast_cast_fu_19325_p1() {
    h58_cast_cast_fu_19325_p1 = esl_zext<10,2>(h52_reg_10562.read());
}

void ShuffleNetV2::thread_h58_cast_fu_19321_p1() {
    h58_cast_fu_19321_p1 = esl_zext<32,2>(h52_reg_10562.read());
}

void ShuffleNetV2::thread_h60_cast_cast_fu_20110_p1() {
    h60_cast_cast_fu_20110_p1 = esl_zext<10,2>(h54_reg_10683.read());
}

void ShuffleNetV2::thread_h60_cast_fu_20106_p1() {
    h60_cast_fu_20106_p1 = esl_zext<32,2>(h54_reg_10683.read());
}

void ShuffleNetV2::thread_h64_cast_cast_fu_21534_p1() {
    h64_cast_cast_fu_21534_p1 = esl_zext<10,2>(h58_reg_10892.read());
}

void ShuffleNetV2::thread_h64_cast_fu_21530_p1() {
    h64_cast_fu_21530_p1 = esl_zext<32,2>(h58_reg_10892.read());
}

void ShuffleNetV2::thread_h70_cast_cast_fu_23081_p1() {
    h70_cast_cast_fu_23081_p1 = esl_zext<10,2>(h64_reg_11134.read());
}

void ShuffleNetV2::thread_h70_cast_fu_23077_p1() {
    h70_cast_fu_23077_p1 = esl_zext<32,2>(h64_reg_11134.read());
}

void ShuffleNetV2::thread_h76_cast_cast_fu_24644_p1() {
    h76_cast_cast_fu_24644_p1 = esl_zext<10,2>(h70_reg_11376.read());
}

void ShuffleNetV2::thread_h76_cast_fu_24640_p1() {
    h76_cast_fu_24640_p1 = esl_zext<32,2>(h70_reg_11376.read());
}

void ShuffleNetV2::thread_h7_cast_fu_15921_p1() {
    h7_cast_fu_15921_p1 = esl_zext<32,2>(h7_reg_9817.read());
}

void ShuffleNetV2::thread_h82_cast_cast_fu_26191_p1() {
    h82_cast_cast_fu_26191_p1 = esl_zext<10,2>(h76_reg_11618.read());
}

void ShuffleNetV2::thread_h82_cast_fu_26187_p1() {
    h82_cast_fu_26187_p1 = esl_zext<32,2>(h76_reg_11618.read());
}

void ShuffleNetV2::thread_h88_cast_cast_fu_27730_p1() {
    h88_cast_cast_fu_27730_p1 = esl_zext<10,2>(h82_reg_11860.read());
}

void ShuffleNetV2::thread_h88_cast_fu_27726_p1() {
    h88_cast_fu_27726_p1 = esl_zext<32,2>(h82_reg_11860.read());
}

void ShuffleNetV2::thread_h94_cast_cast_fu_29277_p1() {
    h94_cast_cast_fu_29277_p1 = esl_zext<10,2>(h88_reg_12102.read());
}

void ShuffleNetV2::thread_h94_cast_fu_29273_p1() {
    h94_cast_fu_29273_p1 = esl_zext<32,2>(h88_reg_12102.read());
}

void ShuffleNetV2::thread_h_101_fu_32413_p2() {
    h_101_fu_32413_p2 = (!h100_reg_12586.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h100_reg_12586.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_103_cast_cast_fu_31635_p1() {
    h_103_cast_cast_fu_31635_p1 = esl_zext<10,4>(h_97_fu_31629_p2.read());
}

void ShuffleNetV2::thread_h_103_fu_33196_p2() {
    h_103_fu_33196_p2 = (!h102_reg_12696.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h102_reg_12696.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_105_cast_cast1_fu_31794_p1() {
    h_105_cast_cast1_fu_31794_p1 = esl_zext<10,4>(h_99_fu_31788_p2.read());
}

void ShuffleNetV2::thread_h_105_cast_cast_fu_31798_p1() {
    h_105_cast_cast_fu_31798_p1 = esl_zext<11,4>(h_99_fu_31788_p2.read());
}

void ShuffleNetV2::thread_h_105_fu_33749_p2() {
    h_105_fu_33749_p2 = (!h104_reg_12795.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h104_reg_12795.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_107_fu_34522_p2() {
    h_107_fu_34522_p2 = (!h106_reg_12916.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h106_reg_12916.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_109_cast_cast_fu_33202_p1() {
    h_109_cast_cast_fu_33202_p1 = esl_zext<10,4>(h_103_fu_33196_p2.read());
}

void ShuffleNetV2::thread_h_109_fu_35325_p2() {
    h_109_fu_35325_p2 = (!h108_reg_13026.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h108_reg_13026.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_111_fu_35918_p2() {
    h_111_fu_35918_p2 = (!h110_reg_13125.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h110_reg_13125.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_113_fu_36685_p2() {
    h_113_fu_36685_p2 = (!h112_reg_13235.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h112_reg_13235.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_115_cast_cast1_fu_35331_p1() {
    h_115_cast_cast1_fu_35331_p1 = esl_zext<12,3>(h_109_fu_35325_p2.read());
}

void ShuffleNetV2::thread_h_115_cast_cast_fu_35335_p1() {
    h_115_cast_cast_fu_35335_p1 = esl_zext<13,3>(h_109_fu_35325_p2.read());
}

void ShuffleNetV2::thread_h_115_fu_36852_p2() {
    h_115_fu_36852_p2 = (!h114_reg_13268.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h114_reg_13268.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_117_fu_37445_p2() {
    h_117_fu_37445_p2 = (!h116_reg_13367.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h116_reg_13367.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_119_cast_cast_fu_36691_p1() {
    h_119_cast_cast_fu_36691_p1 = esl_zext<12,3>(h_113_fu_36685_p2.read());
}

void ShuffleNetV2::thread_h_119_fu_38216_p2() {
    h_119_fu_38216_p2 = (!h118_reg_13477.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h118_reg_13477.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_121_cast_cast1_fu_36858_p1() {
    h_121_cast_cast1_fu_36858_p1 = esl_zext<12,3>(h_115_fu_36852_p2.read());
}

void ShuffleNetV2::thread_h_121_cast_cast_fu_36862_p1() {
    h_121_cast_cast_fu_36862_p1 = esl_zext<13,3>(h_115_fu_36852_p2.read());
}

void ShuffleNetV2::thread_h_121_fu_38383_p2() {
    h_121_fu_38383_p2 = (!h120_reg_13510.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h120_reg_13510.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_123_fu_38976_p2() {
    h_123_fu_38976_p2 = (!h122_reg_13609.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h122_reg_13609.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_125_cast_cast_fu_38222_p1() {
    h_125_cast_cast_fu_38222_p1 = esl_zext<12,3>(h_119_fu_38216_p2.read());
}

void ShuffleNetV2::thread_h_125_fu_39739_p2() {
    h_125_fu_39739_p2 = (!h124_reg_13719.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h124_reg_13719.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_126_fu_40037_p2() {
    h_126_fu_40037_p2 = (!h_i_reg_13797.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h_i_reg_13797.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_127_cast_cast1_fu_38389_p1() {
    h_127_cast_cast1_fu_38389_p1 = esl_zext<12,3>(h_121_fu_38383_p2.read());
}

void ShuffleNetV2::thread_h_127_cast_cast_fu_38393_p1() {
    h_127_cast_cast_fu_38393_p1 = esl_zext<13,3>(h_121_fu_38383_p2.read());
}

void ShuffleNetV2::thread_h_128_fu_39952_p2() {
    h_128_fu_39952_p2 = (!h127_reg_13763.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h127_reg_13763.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_131_cast_cast_fu_39745_p1() {
    h_131_cast_cast_fu_39745_p1 = esl_zext<12,3>(h_125_fu_39739_p2.read());
}

void ShuffleNetV2::thread_h_133_cast_cast_fu_39958_p1() {
    h_133_cast_cast_fu_39958_p1 = esl_zext<14,3>(h_128_fu_39952_p2.read());
}

void ShuffleNetV2::thread_h_35_fu_15675_p2() {
    h_35_fu_15675_p2 = (!h_reg_9750.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(h_reg_9750.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_h_36_fu_15937_p2() {
    h_36_fu_15937_p2 = (!h7_reg_9817.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h7_reg_9817.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_37_fu_16254_p2() {
    h_37_fu_16254_p2 = (!h14_reg_9895.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h14_reg_9895.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_38_fu_16525_p2() {
    h_38_fu_16525_p2 = (!h20_reg_9962.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h20_reg_9962.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_39_fu_16950_p2() {
    h_39_fu_16950_p2 = (!h27_reg_10040.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h27_reg_10040.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_40_fu_17172_p2() {
    h_40_fu_17172_p2 = (!h33_reg_10107.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h33_reg_10107.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_41_fu_17331_p2() {
    h_41_fu_17331_p2 = (!h36_reg_10140.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h36_reg_10140.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_43_cast_cast_fu_15681_p1() {
    h_43_cast_cast_fu_15681_p1 = esl_zext<13,6>(h_35_fu_15675_p2.read());
}

void ShuffleNetV2::thread_h_43_fu_17756_p2() {
    h_43_fu_17756_p2 = (!h42_reg_10218.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h42_reg_10218.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_45_fu_17960_p2() {
    h_45_fu_17960_p2 = (!h44_reg_10285.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h44_reg_10285.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_46_cast_cast1_fu_16531_p1() {
    h_46_cast_cast1_fu_16531_p1 = esl_zext<10,5>(h_38_fu_16525_p2.read());
}

void ShuffleNetV2::thread_h_46_cast_cast_fu_16535_p1() {
    h_46_cast_cast_fu_16535_p1 = esl_zext<11,5>(h_38_fu_16525_p2.read());
}

void ShuffleNetV2::thread_h_47_fu_18119_p2() {
    h_47_fu_18119_p2 = (!h46_reg_10318.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h46_reg_10318.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_48_cast_cast_fu_17178_p1() {
    h_48_cast_cast_fu_17178_p1 = esl_zext<10,5>(h_40_fu_17172_p2.read());
}

void ShuffleNetV2::thread_h_49_cast_cast1_fu_17337_p1() {
    h_49_cast_cast1_fu_17337_p1 = esl_zext<10,5>(h_41_fu_17331_p2.read());
}

void ShuffleNetV2::thread_h_49_cast_cast_fu_17341_p1() {
    h_49_cast_cast_fu_17341_p1 = esl_zext<11,5>(h_41_fu_17331_p2.read());
}

void ShuffleNetV2::thread_h_49_fu_18568_p2() {
    h_49_fu_18568_p2 = (!h48_reg_10396.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h48_reg_10396.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_51_cast_cast_fu_17966_p1() {
    h_51_cast_cast_fu_17966_p1 = esl_zext<10,5>(h_45_fu_17960_p2.read());
}

void ShuffleNetV2::thread_h_51_fu_18774_p2() {
    h_51_fu_18774_p2 = (!h50_reg_10463.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h50_reg_10463.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_53_cast_cast1_fu_18125_p1() {
    h_53_cast_cast1_fu_18125_p1 = esl_zext<10,5>(h_47_fu_18119_p2.read());
}

void ShuffleNetV2::thread_h_53_cast_cast_fu_18129_p1() {
    h_53_cast_cast_fu_18129_p1 = esl_zext<11,5>(h_47_fu_18119_p2.read());
}

}

