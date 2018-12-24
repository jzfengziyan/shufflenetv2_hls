#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_19_ce0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_19_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_19_ce0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_19_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_19_ce0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_19_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_19_ce0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_19_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_19_ce0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_19_ce0.read();
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
        buffer1_1_96_4x4_p_V_19_ce1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_19_ce1.read();
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
        buffer1_1_96_4x4_p_V_19_we0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_19_we0.read();
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
        buffer1_1_96_4x4_p_V_19_we1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_19_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_19_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_1_address0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_1_address0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_1_address0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_1_address0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_1_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_1_address0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_1_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_1_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_1_ce0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_1_ce0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_1_ce0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_1_ce0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_1_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_1_ce0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_1_ce0.read();
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
        buffer1_1_96_4x4_p_V_1_ce1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_1_ce1.read();
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
        buffer1_1_96_4x4_p_V_1_we0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_1_we0.read();
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
        buffer1_1_96_4x4_p_V_1_we1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_1_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_1_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_20_address0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_20_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_20_address0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_20_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_20_address0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_20_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_20_address0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_20_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_20_address0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_20_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_20_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_20_ce0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_20_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_20_ce0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_20_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_20_ce0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_20_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_20_ce0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_20_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_20_ce0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_20_ce0.read();
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
        buffer1_1_96_4x4_p_V_20_ce1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_20_ce1.read();
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
        buffer1_1_96_4x4_p_V_20_we0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_20_we0.read();
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
        buffer1_1_96_4x4_p_V_20_we1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_20_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_20_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_21_address0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_21_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_21_address0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_21_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_21_address0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_21_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_21_address0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_21_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_21_address0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_21_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_21_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_21_ce0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_21_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_21_ce0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_21_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_21_ce0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_21_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_21_ce0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_21_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_21_ce0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_21_ce0.read();
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
        buffer1_1_96_4x4_p_V_21_ce1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_21_ce1.read();
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
        buffer1_1_96_4x4_p_V_21_we0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_21_we0.read();
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
        buffer1_1_96_4x4_p_V_21_we1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_21_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_21_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_22_address0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_22_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_22_address0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_22_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_22_address0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_22_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_22_address0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_22_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_22_address0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_22_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_22_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_22_ce0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_22_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_22_ce0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_22_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_22_ce0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_22_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_22_ce0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_22_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_22_ce0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_22_ce0.read();
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
        buffer1_1_96_4x4_p_V_22_ce1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_22_ce1.read();
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
        buffer1_1_96_4x4_p_V_22_we0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_22_we0.read();
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
        buffer1_1_96_4x4_p_V_22_we1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_22_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_22_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_23_address0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_23_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_23_address0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_23_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_23_address0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_23_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_23_address0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_23_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_23_address0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_23_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_23_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_23_ce0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_23_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_23_ce0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_23_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_23_ce0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_23_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_23_ce0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_23_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_23_ce0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_23_ce0.read();
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
        buffer1_1_96_4x4_p_V_23_ce1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_23_ce1.read();
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
        buffer1_1_96_4x4_p_V_23_we0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_23_we0.read();
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
        buffer1_1_96_4x4_p_V_23_we1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_23_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_23_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_24_address0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_24_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_24_address0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_24_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_24_address0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_24_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_24_address0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_24_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_24_address0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_24_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_24_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_24_ce0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_24_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_24_ce0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_24_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_24_ce0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_24_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_24_ce0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_24_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_24_ce0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_24_ce0.read();
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
        buffer1_1_96_4x4_p_V_24_ce1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_24_ce1.read();
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
        buffer1_1_96_4x4_p_V_24_we0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_24_we0.read();
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
        buffer1_1_96_4x4_p_V_24_we1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_24_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_24_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_2_address0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_2_address0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_2_address0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_2_address0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_2_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_2_address0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_2_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_2_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_2_ce0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_2_ce0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_2_ce0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_2_ce0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_2_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_2_ce0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_2_ce0.read();
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
        buffer1_1_96_4x4_p_V_2_ce1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_2_ce1.read();
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
        buffer1_1_96_4x4_p_V_2_we0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_2_we0.read();
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
        buffer1_1_96_4x4_p_V_2_we1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_2_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_2_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_3_address0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_3_address0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_3_address0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_3_address0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_3_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_3_address0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_3_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_3_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_3_ce0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_3_ce0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_3_ce0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_3_ce0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_3_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_3_ce0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_3_ce0.read();
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
        buffer1_1_96_4x4_p_V_3_ce1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_3_ce1.read();
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
        buffer1_1_96_4x4_p_V_3_we0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_3_we0.read();
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
        buffer1_1_96_4x4_p_V_3_we1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_3_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_3_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_4_address0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_4_address0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_4_address0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_4_address0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_4_address0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_4_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_4_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_4_ce0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_4_ce0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_4_ce0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_4_ce0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_4_ce0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_4_ce0.read();
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
        buffer1_1_96_4x4_p_V_4_ce1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_4_ce1.read();
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
        buffer1_1_96_4x4_p_V_4_we0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_4_we0.read();
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
        buffer1_1_96_4x4_p_V_4_we1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_4_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_4_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_5_address0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_5_address0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_5_address0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_5_address0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_5_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_5_address0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_5_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_5_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_5_ce0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_5_ce0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_5_ce0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_5_ce0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_5_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_5_ce0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_5_ce0.read();
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
        buffer1_1_96_4x4_p_V_5_ce1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_5_ce1.read();
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
        buffer1_1_96_4x4_p_V_5_we0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_5_we0.read();
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
        buffer1_1_96_4x4_p_V_5_we1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_5_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_5_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_6_address0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_6_address0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_6_address0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_6_address0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_6_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_6_address0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_6_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_6_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_6_ce0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_6_ce0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_6_ce0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_6_ce0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_6_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_6_ce0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_6_ce0.read();
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
        buffer1_1_96_4x4_p_V_6_ce1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_6_ce1.read();
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
        buffer1_1_96_4x4_p_V_6_we0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_6_we0.read();
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
        buffer1_1_96_4x4_p_V_6_we1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_6_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_6_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_7_address0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_7_address0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_7_address0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_7_address0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_7_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_7_address0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_7_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_7_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_7_ce0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_7_ce0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_7_ce0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_7_ce0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_7_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_7_ce0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_7_ce0.read();
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
        buffer1_1_96_4x4_p_V_7_ce1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_7_ce1.read();
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
        buffer1_1_96_4x4_p_V_7_we0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_7_we0.read();
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
        buffer1_1_96_4x4_p_V_7_we1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_7_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_7_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_8_address0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_8_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_8_address0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_8_address0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_8_address0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_8_address0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_8_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_8_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_8_ce0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_8_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_8_ce0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_8_ce0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_8_ce0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_8_ce0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_8_ce0.read();
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
        buffer1_1_96_4x4_p_V_8_ce1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_8_ce1.read();
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
        buffer1_1_96_4x4_p_V_8_we0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_8_we0.read();
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
        buffer1_1_96_4x4_p_V_8_we1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_8_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_8_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_9_address0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_9_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_9_address0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_9_address0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_9_address0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_9_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_9_address0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_9_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_9_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        buffer1_1_96_4x4_p_V_9_ce0 = grp_shuffle_96_r_p_fu_14864_buffer1_1_96_4x4_p_V_9_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        buffer1_1_96_4x4_p_V_9_ce0 = grp_shuffle_96_l_p_fu_14810_buffer1_1_96_4x4_p_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        buffer1_1_96_4x4_p_V_9_ce0 = grp_shuffle_96_p_fu_14662_buffer1_1_96_4x4_p_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        buffer1_1_96_4x4_p_V_9_ce0 = grp_subconv_3x3_4_no_rel_fu_14314_buffer1_1_96_4x4_p_V_9_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        buffer1_1_96_4x4_p_V_9_ce0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_9_ce0.read();
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
        buffer1_1_96_4x4_p_V_9_ce1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_9_ce1.read();
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
        buffer1_1_96_4x4_p_V_9_we0 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_9_we0.read();
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
        buffer1_1_96_4x4_p_V_9_we1 = grp_subconv_1x1_4_p_fu_13650_buffer1_1_96_4x4_p_V_9_we1.read();
    } else {
        buffer1_1_96_4x4_p_V_9_we1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ci10_cast_fu_15878_p1() {
    ci10_cast_fu_15878_p1 = esl_zext<32,5>(ci10_reg_9727.read());
}

void ShuffleNetV2::thread_ci17_cast_fu_16222_p1() {
    ci17_cast_fu_16222_p1 = esl_zext<32,5>(ci17_reg_9805.read());
}

void ShuffleNetV2::thread_ci22_cast_fu_16559_p1() {
    ci22_cast_fu_16559_p1 = esl_zext<32,5>(ci21_reg_9872.read());
}

void ShuffleNetV2::thread_ci24_cast_fu_16882_p1() {
    ci24_cast_fu_16882_p1 = esl_zext<32,5>(ci23_reg_9950.read());
}

void ShuffleNetV2::thread_ci26_cast_fu_17365_p1() {
    ci26_cast_fu_17365_p1 = esl_zext<32,5>(ci25_reg_10050.read());
}

void ShuffleNetV2::thread_ci28_cast_fu_17697_p1() {
    ci28_cast_fu_17697_p1 = esl_zext<32,5>(ci27_reg_10128.read());
}

void ShuffleNetV2::thread_ci30_cast_fu_18142_p1() {
    ci30_cast_fu_18142_p1 = esl_zext<32,5>(ci29_reg_10228.read());
}

void ShuffleNetV2::thread_ci32_cast_fu_18511_p1() {
    ci32_cast_fu_18511_p1 = esl_zext<32,5>(ci31_reg_10306.read());
}

void ShuffleNetV2::thread_ci34_cast1_cast_fu_18754_p1() {
    ci34_cast1_cast_fu_18754_p1 = esl_zext<16,5>(ci33_reg_10372.read());
}

void ShuffleNetV2::thread_ci34_cast_fu_18750_p1() {
    ci34_cast_fu_18750_p1 = esl_zext<7,5>(ci33_reg_10372.read());
}

void ShuffleNetV2::thread_ci36_cast1_cast_fu_19535_p1() {
    ci36_cast1_cast_fu_19535_p1 = esl_zext<16,5>(ci35_reg_10493.read());
}

void ShuffleNetV2::thread_ci36_cast_fu_19531_p1() {
    ci36_cast_fu_19531_p1 = esl_zext<7,5>(ci35_reg_10493.read());
}

void ShuffleNetV2::thread_ci38_cast1_cast_fu_20312_p1() {
    ci38_cast1_cast_fu_20312_p1 = esl_zext<17,5>(ci37_reg_10614.read());
}

void ShuffleNetV2::thread_ci38_cast_fu_20308_p1() {
    ci38_cast_fu_20308_p1 = esl_zext<7,5>(ci37_reg_10614.read());
}

void ShuffleNetV2::thread_ci3_cast_fu_15603_p1() {
    ci3_cast_fu_15603_p1 = esl_zext<32,5>(ci3_reg_9649.read());
}

void ShuffleNetV2::thread_ci40_cast1_cast_fu_20963_p1() {
    ci40_cast1_cast_fu_20963_p1 = esl_zext<17,5>(ci39_reg_10702.read());
}

void ShuffleNetV2::thread_ci40_cast_fu_20959_p1() {
    ci40_cast_fu_20959_p1 = esl_zext<7,5>(ci39_reg_10702.read());
}

void ShuffleNetV2::thread_ci42_cast1_cast_fu_21744_p1() {
    ci42_cast1_cast_fu_21744_p1 = esl_zext<17,5>(ci41_reg_10823.read());
}

void ShuffleNetV2::thread_ci42_cast_fu_21740_p1() {
    ci42_cast_fu_21740_p1 = esl_zext<7,5>(ci41_reg_10823.read());
}

void ShuffleNetV2::thread_ci44_cast1_cast_fu_22510_p1() {
    ci44_cast1_cast_fu_22510_p1 = esl_zext<17,5>(ci43_reg_10944.read());
}

void ShuffleNetV2::thread_ci44_cast_fu_22506_p1() {
    ci44_cast_fu_22506_p1 = esl_zext<7,5>(ci43_reg_10944.read());
}

void ShuffleNetV2::thread_ci46_cast1_cast_fu_23291_p1() {
    ci46_cast1_cast_fu_23291_p1 = esl_zext<17,5>(ci45_reg_11065.read());
}

void ShuffleNetV2::thread_ci46_cast_fu_23287_p1() {
    ci46_cast_fu_23287_p1 = esl_zext<7,5>(ci45_reg_11065.read());
}

void ShuffleNetV2::thread_ci48_cast1_cast_fu_24061_p1() {
    ci48_cast1_cast_fu_24061_p1 = esl_zext<17,5>(ci47_reg_11186.read());
}

void ShuffleNetV2::thread_ci48_cast_fu_24057_p1() {
    ci48_cast_fu_24057_p1 = esl_zext<7,5>(ci47_reg_11186.read());
}

void ShuffleNetV2::thread_ci50_cast1_cast_fu_24850_p1() {
    ci50_cast1_cast_fu_24850_p1 = esl_zext<18,5>(ci49_reg_11307.read());
}

void ShuffleNetV2::thread_ci50_cast_fu_24846_p1() {
    ci50_cast_fu_24846_p1 = esl_zext<7,5>(ci49_reg_11307.read());
}

void ShuffleNetV2::thread_ci52_cast1_cast_fu_25620_p1() {
    ci52_cast1_cast_fu_25620_p1 = esl_zext<18,5>(ci51_reg_11428.read());
}

void ShuffleNetV2::thread_ci52_cast_fu_25616_p1() {
    ci52_cast_fu_25616_p1 = esl_zext<7,5>(ci51_reg_11428.read());
}

void ShuffleNetV2::thread_ci54_cast1_cast_fu_26393_p1() {
    ci54_cast1_cast_fu_26393_p1 = esl_zext<18,5>(ci53_reg_11549.read());
}

void ShuffleNetV2::thread_ci54_cast_fu_26389_p1() {
    ci54_cast_fu_26389_p1 = esl_zext<7,5>(ci53_reg_11549.read());
}

void ShuffleNetV2::thread_ci56_cast1_cast_fu_27159_p1() {
    ci56_cast1_cast_fu_27159_p1 = esl_zext<18,5>(ci55_reg_11670.read());
}

void ShuffleNetV2::thread_ci56_cast_fu_27155_p1() {
    ci56_cast_fu_27155_p1 = esl_zext<7,5>(ci55_reg_11670.read());
}

void ShuffleNetV2::thread_ci58_cast1_cast_fu_27940_p1() {
    ci58_cast1_cast_fu_27940_p1 = esl_zext<18,5>(ci57_reg_11791.read());
}

void ShuffleNetV2::thread_ci58_cast_fu_27936_p1() {
    ci58_cast_fu_27936_p1 = esl_zext<7,5>(ci57_reg_11791.read());
}

void ShuffleNetV2::thread_ci60_cast1_cast_fu_28706_p1() {
    ci60_cast1_cast_fu_28706_p1 = esl_zext<18,5>(ci59_reg_11912.read());
}

void ShuffleNetV2::thread_ci60_cast_fu_28702_p1() {
    ci60_cast_fu_28702_p1 = esl_zext<7,5>(ci59_reg_11912.read());
}

void ShuffleNetV2::thread_ci62_cast1_cast_fu_29491_p1() {
    ci62_cast1_cast_fu_29491_p1 = esl_zext<18,5>(ci61_reg_12033.read());
}

void ShuffleNetV2::thread_ci62_cast_fu_29487_p1() {
    ci62_cast_fu_29487_p1 = esl_zext<7,5>(ci61_reg_12033.read());
}

void ShuffleNetV2::thread_ci64_cast1_cast_fu_30257_p1() {
    ci64_cast1_cast_fu_30257_p1 = esl_zext<18,5>(ci63_reg_12154.read());
}

void ShuffleNetV2::thread_ci64_cast_fu_30253_p1() {
    ci64_cast_fu_30253_p1 = esl_zext<7,5>(ci63_reg_12154.read());
}

void ShuffleNetV2::thread_ci66_cast1_cast_fu_31042_p1() {
    ci66_cast1_cast_fu_31042_p1 = esl_zext<18,5>(ci65_reg_12275.read());
}

void ShuffleNetV2::thread_ci66_cast_fu_31038_p1() {
    ci66_cast_fu_31038_p1 = esl_zext<7,5>(ci65_reg_12275.read());
}

void ShuffleNetV2::thread_ci68_cast1_cast_fu_31820_p1() {
    ci68_cast1_cast_fu_31820_p1 = esl_zext<18,5>(ci67_reg_12396.read());
}

void ShuffleNetV2::thread_ci68_cast_fu_31816_p1() {
    ci68_cast_fu_31816_p1 = esl_zext<7,5>(ci67_reg_12396.read());
}

void ShuffleNetV2::thread_ci70_cast1_cast_fu_32609_p1() {
    ci70_cast1_cast_fu_32609_p1 = esl_zext<19,5>(ci69_reg_12517.read());
}

void ShuffleNetV2::thread_ci70_cast_fu_32605_p1() {
    ci70_cast_fu_32605_p1 = esl_zext<7,5>(ci69_reg_12517.read());
}

void ShuffleNetV2::thread_ci72_cast1_cast_fu_33174_p1() {
    ci72_cast1_cast_fu_33174_p1 = esl_zext<19,5>(ci71_reg_12605.read());
}

void ShuffleNetV2::thread_ci72_cast_fu_33170_p1() {
    ci72_cast_fu_33170_p1 = esl_zext<8,5>(ci71_reg_12605.read());
}

void ShuffleNetV2::thread_ci74_cast1_cast_fu_33943_p1() {
    ci74_cast1_cast_fu_33943_p1 = esl_zext<19,5>(ci73_reg_12726.read());
}

void ShuffleNetV2::thread_ci74_cast_fu_33939_p1() {
    ci74_cast_fu_33939_p1 = esl_zext<8,5>(ci73_reg_12726.read());
}

void ShuffleNetV2::thread_ci76_cast1_cast_fu_34712_p1() {
    ci76_cast1_cast_fu_34712_p1 = esl_zext<19,5>(ci75_reg_12847.read());
}

void ShuffleNetV2::thread_ci76_cast_fu_34708_p1() {
    ci76_cast_fu_34708_p1 = esl_zext<8,5>(ci75_reg_12847.read());
}

void ShuffleNetV2::thread_ci78_cast1_cast_fu_35347_p1() {
    ci78_cast1_cast_fu_35347_p1 = esl_zext<19,5>(ci77_reg_12935.read());
}

void ShuffleNetV2::thread_ci78_cast_fu_35343_p1() {
    ci78_cast_fu_35343_p1 = esl_zext<8,5>(ci77_reg_12935.read());
}

void ShuffleNetV2::thread_ci80_cast1_cast_fu_36108_p1() {
    ci80_cast1_cast_fu_36108_p1 = esl_zext<19,5>(ci79_reg_13056.read());
}

void ShuffleNetV2::thread_ci80_cast_fu_36104_p1() {
    ci80_cast_fu_36104_p1 = esl_zext<8,5>(ci79_reg_13056.read());
}

void ShuffleNetV2::thread_ci82_cast1_cast_fu_36874_p1() {
    ci82_cast1_cast_fu_36874_p1 = esl_zext<20,5>(ci81_reg_13177.read());
}

void ShuffleNetV2::thread_ci82_cast_fu_36870_p1() {
    ci82_cast_fu_36870_p1 = esl_zext<8,5>(ci81_reg_13177.read());
}

void ShuffleNetV2::thread_ci84_cast1_cast_fu_37647_p1() {
    ci84_cast1_cast_fu_37647_p1 = esl_zext<20,5>(ci83_reg_13298.read());
}

void ShuffleNetV2::thread_ci84_cast_fu_37643_p1() {
    ci84_cast_fu_37643_p1 = esl_zext<8,5>(ci83_reg_13298.read());
}

void ShuffleNetV2::thread_ci86_cast1_cast_fu_38405_p1() {
    ci86_cast1_cast_fu_38405_p1 = esl_zext<20,5>(ci85_reg_13419.read());
}

void ShuffleNetV2::thread_ci86_cast_fu_38401_p1() {
    ci86_cast_fu_38401_p1 = esl_zext<8,5>(ci85_reg_13419.read());
}

void ShuffleNetV2::thread_ci88_cast1_cast_fu_39170_p1() {
    ci88_cast1_cast_fu_39170_p1 = esl_zext<20,5>(ci87_reg_13540.read());
}

void ShuffleNetV2::thread_ci88_cast_fu_39166_p1() {
    ci88_cast_fu_39166_p1 = esl_zext<8,5>(ci87_reg_13540.read());
}

void ShuffleNetV2::thread_ci_17_fu_15427_p2() {
    ci_17_fu_15427_p2 = (!ci_reg_9604.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(ci_reg_9604.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_ci_18_fu_15637_p2() {
    ci_18_fu_15637_p2 = (!ci3_reg_9649.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci3_reg_9649.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_19_fu_15912_p2() {
    ci_19_fu_15912_p2 = (!ci10_reg_9727.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci10_reg_9727.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_20_fu_16256_p2() {
    ci_20_fu_16256_p2 = (!ci17_reg_9805.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci17_reg_9805.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_22_fu_16593_p2() {
    ci_22_fu_16593_p2 = (!ci21_reg_9872.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci21_reg_9872.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_24_fu_16916_p2() {
    ci_24_fu_16916_p2 = (!ci23_reg_9950.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci23_reg_9950.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_26_fu_17399_p2() {
    ci_26_fu_17399_p2 = (!ci25_reg_10050.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci25_reg_10050.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_28_fu_17731_p2() {
    ci_28_fu_17731_p2 = (!ci27_reg_10128.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci27_reg_10128.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_30_fu_18176_p2() {
    ci_30_fu_18176_p2 = (!ci29_reg_10228.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci29_reg_10228.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_32_fu_18545_p2() {
    ci_32_fu_18545_p2 = (!ci31_reg_10306.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci31_reg_10306.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_34_fu_18764_p2() {
    ci_34_fu_18764_p2 = (!ci33_reg_10372.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci33_reg_10372.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_36_fu_19545_p2() {
    ci_36_fu_19545_p2 = (!ci35_reg_10493.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci35_reg_10493.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_38_fu_20322_p2() {
    ci_38_fu_20322_p2 = (!ci37_reg_10614.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci37_reg_10614.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_40_fu_20973_p2() {
    ci_40_fu_20973_p2 = (!ci39_reg_10702.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci39_reg_10702.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_42_fu_21754_p2() {
    ci_42_fu_21754_p2 = (!ci41_reg_10823.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci41_reg_10823.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_44_fu_22520_p2() {
    ci_44_fu_22520_p2 = (!ci43_reg_10944.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci43_reg_10944.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_46_fu_23301_p2() {
    ci_46_fu_23301_p2 = (!ci45_reg_11065.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci45_reg_11065.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_48_fu_24071_p2() {
    ci_48_fu_24071_p2 = (!ci47_reg_11186.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci47_reg_11186.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_50_fu_24860_p2() {
    ci_50_fu_24860_p2 = (!ci49_reg_11307.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci49_reg_11307.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_52_fu_25630_p2() {
    ci_52_fu_25630_p2 = (!ci51_reg_11428.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci51_reg_11428.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_54_fu_26403_p2() {
    ci_54_fu_26403_p2 = (!ci53_reg_11549.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci53_reg_11549.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_56_fu_27169_p2() {
    ci_56_fu_27169_p2 = (!ci55_reg_11670.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci55_reg_11670.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_58_fu_27950_p2() {
    ci_58_fu_27950_p2 = (!ci57_reg_11791.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci57_reg_11791.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_60_fu_28716_p2() {
    ci_60_fu_28716_p2 = (!ci59_reg_11912.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci59_reg_11912.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_62_fu_29501_p2() {
    ci_62_fu_29501_p2 = (!ci61_reg_12033.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci61_reg_12033.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_64_fu_30267_p2() {
    ci_64_fu_30267_p2 = (!ci63_reg_12154.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci63_reg_12154.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_66_fu_31052_p2() {
    ci_66_fu_31052_p2 = (!ci65_reg_12275.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci65_reg_12275.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_68_fu_31830_p2() {
    ci_68_fu_31830_p2 = (!ci67_reg_12396.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci67_reg_12396.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_70_fu_32619_p2() {
    ci_70_fu_32619_p2 = (!ci69_reg_12517.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci69_reg_12517.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_72_fu_33184_p2() {
    ci_72_fu_33184_p2 = (!ci71_reg_12605.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci71_reg_12605.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_74_fu_33953_p2() {
    ci_74_fu_33953_p2 = (!ci73_reg_12726.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci73_reg_12726.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_76_fu_34722_p2() {
    ci_76_fu_34722_p2 = (!ci75_reg_12847.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci75_reg_12847.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_78_fu_35357_p2() {
    ci_78_fu_35357_p2 = (!ci77_reg_12935.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci77_reg_12935.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_80_fu_36118_p2() {
    ci_80_fu_36118_p2 = (!ci79_reg_13056.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci79_reg_13056.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_82_fu_36884_p2() {
    ci_82_fu_36884_p2 = (!ci81_reg_13177.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci81_reg_13177.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_84_fu_37657_p2() {
    ci_84_fu_37657_p2 = (!ci83_reg_13298.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci83_reg_13298.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_86_fu_38415_p2() {
    ci_86_fu_38415_p2 = (!ci85_reg_13419.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci85_reg_13419.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_88_fu_39180_p2() {
    ci_88_fu_39180_p2 = (!ci87_reg_13540.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci87_reg_13540.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_90_fu_39703_p2() {
    ci_90_fu_39703_p2 = (!ci89_reg_13617.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ci89_reg_13617.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void ShuffleNetV2::thread_co100_cast_fu_25552_p1() {
    co100_cast_fu_25552_p1 = esl_zext<11,5>(co99_reg_11417.read());
}

void ShuffleNetV2::thread_co102_cast1_fu_25992_p1() {
    co102_cast1_fu_25992_p1 = esl_zext<7,5>(co101_reg_11472.read());
}

void ShuffleNetV2::thread_co102_cast_fu_25988_p1() {
    co102_cast_fu_25988_p1 = esl_zext<9,5>(co101_reg_11472.read());
}

void ShuffleNetV2::thread_co105_cast_fu_26325_p1() {
    co105_cast_fu_26325_p1 = esl_zext<11,5>(co103_reg_11538.read());
}

void ShuffleNetV2::thread_co108_cast_fu_26910_p1() {
    co108_cast_fu_26910_p1 = esl_zext<7,6>(co107_reg_11626.read());
}

void ShuffleNetV2::thread_co110_cast_fu_27091_p1() {
    co110_cast_fu_27091_p1 = esl_zext<11,5>(co109_reg_11659.read());
}

void ShuffleNetV2::thread_co112_cast400_cast_fu_27527_p1() {
    co112_cast400_cast_fu_27527_p1 = esl_zext<8,5>(co111_reg_11714.read());
}

void ShuffleNetV2::thread_co112_cast_fu_27531_p1() {
    co112_cast_fu_27531_p1 = esl_zext<7,5>(co111_reg_11714.read());
}

void ShuffleNetV2::thread_co115_cast_fu_27872_p1() {
    co115_cast_fu_27872_p1 = esl_zext<11,5>(co113_reg_11780.read());
}

void ShuffleNetV2::thread_co118_cast_fu_28457_p1() {
    co118_cast_fu_28457_p1 = esl_zext<7,6>(co117_reg_11868.read());
}

void ShuffleNetV2::thread_co120_cast_fu_28638_p1() {
    co120_cast_fu_28638_p1 = esl_zext<11,5>(co119_reg_11901.read());
}

void ShuffleNetV2::thread_co122_cast362_cast_fu_29074_p1() {
    co122_cast362_cast_fu_29074_p1 = esl_zext<8,5>(co121_reg_11956.read());
}

void ShuffleNetV2::thread_co122_cast_fu_29078_p1() {
    co122_cast_fu_29078_p1 = esl_zext<7,5>(co121_reg_11956.read());
}

void ShuffleNetV2::thread_co125_cast_fu_29423_p1() {
    co125_cast_fu_29423_p1 = esl_zext<11,5>(co123_reg_12022.read());
}

void ShuffleNetV2::thread_co128_cast_fu_30008_p1() {
    co128_cast_fu_30008_p1 = esl_zext<7,6>(co127_reg_12110.read());
}

void ShuffleNetV2::thread_co12_cast1_cast_fu_15934_p1() {
    co12_cast1_cast_fu_15934_p1 = esl_zext<8,5>(co12_reg_9749.read());
}

void ShuffleNetV2::thread_co12_cast_fu_15960_p1() {
    co12_cast_fu_15960_p1 = esl_zext<6,5>(co12_reg_9749.read());
}

void ShuffleNetV2::thread_co130_cast337_cast_fu_30189_p1() {
    co130_cast337_cast_fu_30189_p1 = esl_zext<10,5>(co129_reg_12143.read());
}

void ShuffleNetV2::thread_co132_cast1_fu_30637_p1() {
    co132_cast1_fu_30637_p1 = esl_zext<7,5>(co131_reg_12198.read());
}

void ShuffleNetV2::thread_co132_cast_fu_30633_p1() {
    co132_cast_fu_30633_p1 = esl_zext<10,5>(co131_reg_12198.read());
}

void ShuffleNetV2::thread_co135_cast314_cast_fu_30974_p1() {
    co135_cast314_cast_fu_30974_p1 = esl_zext<10,5>(co133_reg_12264.read());
}

void ShuffleNetV2::thread_co138_cast_fu_31571_p1() {
    co138_cast_fu_31571_p1 = esl_zext<7,6>(co137_reg_12352.read());
}

void ShuffleNetV2::thread_co140_cast299_cast_fu_31752_p1() {
    co140_cast299_cast_fu_31752_p1 = esl_zext<9,5>(co139_reg_12385.read());
}

void ShuffleNetV2::thread_co142_cast1_fu_32204_p1() {
    co142_cast1_fu_32204_p1 = esl_zext<7,5>(co141_reg_12440.read());
}

void ShuffleNetV2::thread_co142_cast_fu_32200_p1() {
    co142_cast_fu_32200_p1 = esl_zext<10,5>(co141_reg_12440.read());
}

void ShuffleNetV2::thread_co145_cast_fu_32541_p1() {
    co145_cast_fu_32541_p1 = esl_zext<12,5>(co143_reg_12506.read());
}

void ShuffleNetV2::thread_co148_cast_fu_33108_p1() {
    co148_cast_fu_33108_p1 = esl_zext<12,5>(co147_reg_12594.read());
}

void ShuffleNetV2::thread_co150_cast1_fu_33540_p1() {
    co150_cast1_fu_33540_p1 = esl_zext<8,5>(co149_reg_12649.read());
}

void ShuffleNetV2::thread_co150_cast_fu_33536_p1() {
    co150_cast_fu_33536_p1 = esl_zext<10,5>(co149_reg_12649.read());
}

void ShuffleNetV2::thread_co153_cast_fu_33877_p1() {
    co153_cast_fu_33877_p1 = esl_zext<12,5>(co151_reg_12715.read());
}

void ShuffleNetV2::thread_co154_cast1_fu_34313_p1() {
    co154_cast1_fu_34313_p1 = esl_zext<8,5>(co153_reg_12770.read());
}

void ShuffleNetV2::thread_co154_cast_fu_34309_p1() {
    co154_cast_fu_34309_p1 = esl_zext<10,5>(co153_reg_12770.read());
}

void ShuffleNetV2::thread_co157_cast_fu_34646_p1() {
    co157_cast_fu_34646_p1 = esl_zext<12,5>(co155_reg_12836.read());
}

void ShuffleNetV2::thread_co158_cast_fu_35104_p1() {
    co158_cast_fu_35104_p1 = esl_zext<8,7>(co157_reg_12891.read());
}

void ShuffleNetV2::thread_co160_cast_fu_35281_p1() {
    co160_cast_fu_35281_p1 = esl_zext<12,5>(co159_reg_12924.read());
}

void ShuffleNetV2::thread_co162_cast1_fu_35709_p1() {
    co162_cast1_fu_35709_p1 = esl_zext<8,5>(co161_reg_12979.read());
}

void ShuffleNetV2::thread_co162_cast_fu_35705_p1() {
    co162_cast_fu_35705_p1 = esl_zext<10,5>(co161_reg_12979.read());
}

void ShuffleNetV2::thread_co165_cast179_cast_fu_36042_p1() {
    co165_cast179_cast_fu_36042_p1 = esl_zext<11,5>(co163_reg_13045.read());
}

void ShuffleNetV2::thread_co168_cast_fu_36631_p1() {
    co168_cast_fu_36631_p1 = esl_zext<8,7>(co167_reg_13133.read());
}

void ShuffleNetV2::thread_co16_cast_fu_16144_p1() {
    co16_cast_fu_16144_p1 = esl_zext<7,5>(co16_reg_9793.read());
}

void ShuffleNetV2::thread_co170_cast_fu_36808_p1() {
    co170_cast_fu_36808_p1 = esl_zext<13,5>(co169_reg_13166.read());
}

void ShuffleNetV2::thread_co172_cast151_cast_fu_37232_p1() {
    co172_cast151_cast_fu_37232_p1 = esl_zext<9,5>(co171_reg_13221.read());
}

void ShuffleNetV2::thread_co172_cast_fu_37236_p1() {
    co172_cast_fu_37236_p1 = esl_zext<8,5>(co171_reg_13221.read());
}

void ShuffleNetV2::thread_co175_cast_fu_37581_p1() {
    co175_cast_fu_37581_p1 = esl_zext<13,5>(co173_reg_13287.read());
}

void ShuffleNetV2::thread_co178_cast_fu_38162_p1() {
    co178_cast_fu_38162_p1 = esl_zext<8,7>(co177_reg_13375.read());
}

void ShuffleNetV2::thread_co180_cast_fu_38339_p1() {
    co180_cast_fu_38339_p1 = esl_zext<13,5>(co179_reg_13408.read());
}

void ShuffleNetV2::thread_co182_cast1_fu_38767_p1() {
    co182_cast1_fu_38767_p1 = esl_zext<8,5>(co181_reg_13463.read());
}

void ShuffleNetV2::thread_co182_cast_fu_38763_p1() {
    co182_cast_fu_38763_p1 = esl_zext<11,5>(co181_reg_13463.read());
}

void ShuffleNetV2::thread_co185_cast_fu_39104_p1() {
    co185_cast_fu_39104_p1 = esl_zext<13,5>(co183_reg_13529.read());
}

void ShuffleNetV2::thread_co19_cast_fu_16308_p1() {
    co19_cast_fu_16308_p1 = esl_zext<6,5>(co19_reg_9827.read());
}

void ShuffleNetV2::thread_co22_cast_fu_16481_p1() {
    co22_cast_fu_16481_p1 = esl_zext<7,5>(co22_reg_9860.read());
}

void ShuffleNetV2::thread_co25_cast1_cast_fu_16619_p1() {
    co25_cast1_cast_fu_16619_p1 = esl_zext<8,5>(co25_reg_9894.read());
}

void ShuffleNetV2::thread_co25_cast_fu_16615_p1() {
    co25_cast_fu_16615_p1 = esl_zext<7,5>(co25_reg_9894.read());
}

void ShuffleNetV2::thread_co35_cast_fu_17114_p1() {
    co35_cast_fu_17114_p1 = esl_zext<6,5>(co35_reg_10005.read());
}

void ShuffleNetV2::thread_co38_cast_fu_17287_p1() {
    co38_cast_fu_17287_p1 = esl_zext<8,5>(co38_reg_10038.read());
}

void ShuffleNetV2::thread_co41_cast1_cast_fu_17425_p1() {
    co41_cast1_cast_fu_17425_p1 = esl_zext<8,5>(co41_reg_10072.read());
}

void ShuffleNetV2::thread_co41_cast_fu_17421_p1() {
    co41_cast_fu_17421_p1 = esl_zext<7,5>(co41_reg_10072.read());
}

void ShuffleNetV2::thread_co45_cast_fu_17619_p1() {
    co45_cast_fu_17619_p1 = esl_zext<8,5>(co45_reg_10116.read());
}

void ShuffleNetV2::thread_co48_cast_fu_17902_p1() {
    co48_cast_fu_17902_p1 = esl_zext<6,5>(co48_reg_10183.read());
}

void ShuffleNetV2::thread_co50_cast_fu_18075_p1() {
    co50_cast_fu_18075_p1 = esl_zext<8,5>(co50_reg_10216.read());
}

void ShuffleNetV2::thread_co53_cast_cast_fu_18221_p1() {
    co53_cast_cast_fu_18221_p1 = esl_zext<8,5>(co53_reg_10250.read());
}

void ShuffleNetV2::thread_co58_cast_fu_18686_p1() {
    co58_cast_fu_18686_p1 = esl_zext<9,5>(co58_reg_10361.read());
}

void ShuffleNetV2::thread_co5_cast_cast_fu_15659_p1() {
    co5_cast_cast_fu_15659_p1 = esl_zext<8,5>(co5_reg_9671.read());
}

void ShuffleNetV2::thread_co60_cast1_fu_19126_p1() {
    co60_cast1_fu_19126_p1 = esl_zext<7,5>(co60_reg_10416.read());
}

void ShuffleNetV2::thread_co60_cast_fu_19122_p1() {
    co60_cast_fu_19122_p1 = esl_zext<8,5>(co60_reg_10416.read());
}

void ShuffleNetV2::thread_co63_cast_fu_19467_p1() {
    co63_cast_fu_19467_p1 = esl_zext<9,5>(co62_reg_10482.read());
}

void ShuffleNetV2::thread_co64_cast1_fu_19911_p1() {
    co64_cast1_fu_19911_p1 = esl_zext<7,5>(co64_reg_10537.read());
}

void ShuffleNetV2::thread_co64_cast_fu_19907_p1() {
    co64_cast_fu_19907_p1 = esl_zext<8,5>(co64_reg_10537.read());
}

void ShuffleNetV2::thread_co67_cast_fu_20244_p1() {
    co67_cast_fu_20244_p1 = esl_zext<10,5>(co66_reg_10603.read());
}

void ShuffleNetV2::thread_co68_cast_fu_20714_p1() {
    co68_cast_fu_20714_p1 = esl_zext<7,6>(co68_reg_10658.read());
}

void ShuffleNetV2::thread_co70_cast_fu_20895_p1() {
    co70_cast_fu_20895_p1 = esl_zext<10,5>(co69_reg_10691.read());
}

void ShuffleNetV2::thread_co72_cast1_fu_21335_p1() {
    co72_cast1_fu_21335_p1 = esl_zext<7,5>(co71_reg_10746.read());
}

void ShuffleNetV2::thread_co72_cast_fu_21331_p1() {
    co72_cast_fu_21331_p1 = esl_zext<9,5>(co71_reg_10746.read());
}

void ShuffleNetV2::thread_co75_cast_fu_21676_p1() {
    co75_cast_fu_21676_p1 = esl_zext<10,5>(co73_reg_10812.read());
}

void ShuffleNetV2::thread_co78_cast_fu_22261_p1() {
    co78_cast_fu_22261_p1 = esl_zext<7,6>(co77_reg_10900.read());
}

void ShuffleNetV2::thread_co80_cast_fu_22442_p1() {
    co80_cast_fu_22442_p1 = esl_zext<10,5>(co79_reg_10933.read());
}

void ShuffleNetV2::thread_co82_cast1_fu_22882_p1() {
    co82_cast1_fu_22882_p1 = esl_zext<7,5>(co81_reg_10988.read());
}

void ShuffleNetV2::thread_co82_cast_fu_22878_p1() {
    co82_cast_fu_22878_p1 = esl_zext<9,5>(co81_reg_10988.read());
}

void ShuffleNetV2::thread_co85_cast_fu_23223_p1() {
    co85_cast_fu_23223_p1 = esl_zext<10,5>(co83_reg_11054.read());
}

void ShuffleNetV2::thread_co88_cast_fu_23812_p1() {
    co88_cast_fu_23812_p1 = esl_zext<7,6>(co87_reg_11142.read());
}

void ShuffleNetV2::thread_co90_cast489_cast_fu_23993_p1() {
    co90_cast489_cast_fu_23993_p1 = esl_zext<9,5>(co89_reg_11175.read());
}

void ShuffleNetV2::thread_co92_cast1_fu_24445_p1() {
    co92_cast1_fu_24445_p1 = esl_zext<7,5>(co91_reg_11230.read());
}

void ShuffleNetV2::thread_co92_cast_fu_24441_p1() {
    co92_cast_fu_24441_p1 = esl_zext<9,5>(co91_reg_11230.read());
}

void ShuffleNetV2::thread_co95_cast_fu_24782_p1() {
    co95_cast_fu_24782_p1 = esl_zext<11,5>(co93_reg_11296.read());
}

void ShuffleNetV2::thread_co98_cast_fu_25371_p1() {
    co98_cast_fu_25371_p1 = esl_zext<7,6>(co97_reg_11384.read());
}

void ShuffleNetV2::thread_co9_cast_fu_15800_p1() {
    co9_cast_fu_15800_p1 = esl_zext<6,5>(co9_reg_9715.read());
}

void ShuffleNetV2::thread_co_100_fu_25562_p2() {
    co_100_fu_25562_p2 = (!co99_reg_11417.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co99_reg_11417.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_102_fu_26002_p2() {
    co_102_fu_26002_p2 = (!co101_reg_11472.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co101_reg_11472.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_104_fu_26335_p2() {
    co_104_fu_26335_p2 = (!co103_reg_11538.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co103_reg_11538.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_106_fu_26797_p2() {
    co_106_fu_26797_p2 = (!co105_reg_11593.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co105_reg_11593.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_108_fu_26920_p2() {
    co_108_fu_26920_p2 = (!co107_reg_11626.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co107_reg_11626.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_110_fu_27101_p2() {
    co_110_fu_27101_p2 = (!co109_reg_11659.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co109_reg_11659.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_112_fu_27541_p2() {
    co_112_fu_27541_p2 = (!co111_reg_11714.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co111_reg_11714.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_114_fu_27882_p2() {
    co_114_fu_27882_p2 = (!co113_reg_11780.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co113_reg_11780.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_116_fu_28344_p2() {
    co_116_fu_28344_p2 = (!co115_reg_11835.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co115_reg_11835.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_118_fu_28467_p2() {
    co_118_fu_28467_p2 = (!co117_reg_11868.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co117_reg_11868.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_120_fu_28648_p2() {
    co_120_fu_28648_p2 = (!co119_reg_11901.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co119_reg_11901.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_122_fu_29088_p2() {
    co_122_fu_29088_p2 = (!co121_reg_11956.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co121_reg_11956.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_124_fu_29433_p2() {
    co_124_fu_29433_p2 = (!co123_reg_12022.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co123_reg_12022.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_126_fu_29895_p2() {
    co_126_fu_29895_p2 = (!co125_reg_12077.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co125_reg_12077.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_128_fu_30018_p2() {
    co_128_fu_30018_p2 = (!co127_reg_12110.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co127_reg_12110.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_130_fu_30199_p2() {
    co_130_fu_30199_p2 = (!co129_reg_12143.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co129_reg_12143.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_132_fu_30647_p2() {
    co_132_fu_30647_p2 = (!co131_reg_12198.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co131_reg_12198.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_134_fu_30984_p2() {
    co_134_fu_30984_p2 = (!co133_reg_12264.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co133_reg_12264.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_136_fu_31458_p2() {
    co_136_fu_31458_p2 = (!co135_reg_12319.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co135_reg_12319.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_138_fu_31581_p2() {
    co_138_fu_31581_p2 = (!co137_reg_12352.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co137_reg_12352.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_140_fu_31762_p2() {
    co_140_fu_31762_p2 = (!co139_reg_12385.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co139_reg_12385.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_142_fu_32214_p2() {
    co_142_fu_32214_p2 = (!co141_reg_12440.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co141_reg_12440.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_144_fu_32551_p2() {
    co_144_fu_32551_p2 = (!co143_reg_12506.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co143_reg_12506.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_146_fu_33025_p2() {
    co_146_fu_33025_p2 = (!co145_reg_12561.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co145_reg_12561.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_148_fu_33118_p2() {
    co_148_fu_33118_p2 = (!co147_reg_12594.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co147_reg_12594.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_150_fu_33550_p2() {
    co_150_fu_33550_p2 = (!co149_reg_12649.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co149_reg_12649.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_152_fu_33887_p2() {
    co_152_fu_33887_p2 = (!co151_reg_12715.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co151_reg_12715.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_154_fu_34323_p2() {
    co_154_fu_34323_p2 = (!co153_reg_12770.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co153_reg_12770.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_156_fu_34656_p2() {
    co_156_fu_34656_p2 = (!co155_reg_12836.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co155_reg_12836.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_158_fu_35114_p2() {
    co_158_fu_35114_p2 = (!co157_reg_12891.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co157_reg_12891.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_160_fu_35291_p2() {
    co_160_fu_35291_p2 = (!co159_reg_12924.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co159_reg_12924.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_162_fu_35719_p2() {
    co_162_fu_35719_p2 = (!co161_reg_12979.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co161_reg_12979.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_164_fu_36052_p2() {
    co_164_fu_36052_p2 = (!co163_reg_13045.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co163_reg_13045.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_166_fu_36514_p2() {
    co_166_fu_36514_p2 = (!co165_reg_13100.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co165_reg_13100.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_168_fu_36641_p2() {
    co_168_fu_36641_p2 = (!co167_reg_13133.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co167_reg_13133.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_170_fu_36818_p2() {
    co_170_fu_36818_p2 = (!co169_reg_13166.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co169_reg_13166.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_172_fu_37246_p2() {
    co_172_fu_37246_p2 = (!co171_reg_13221.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co171_reg_13221.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_174_fu_37591_p2() {
    co_174_fu_37591_p2 = (!co173_reg_13287.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co173_reg_13287.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_176_fu_38045_p2() {
    co_176_fu_38045_p2 = (!co175_reg_13342.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co175_reg_13342.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_178_fu_38172_p2() {
    co_178_fu_38172_p2 = (!co177_reg_13375.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co177_reg_13375.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_180_fu_38349_p2() {
    co_180_fu_38349_p2 = (!co179_reg_13408.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co179_reg_13408.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_182_fu_38777_p2() {
    co_182_fu_38777_p2 = (!co181_reg_13463.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co181_reg_13463.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_184_fu_39114_p2() {
    co_184_fu_39114_p2 = (!co183_reg_13529.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co183_reg_13529.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_186_fu_39568_p2() {
    co_186_fu_39568_p2 = (!co185_reg_13584.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co185_reg_13584.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_36_fu_15571_p2() {
    co_36_fu_15571_p2 = (!co_reg_9637.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co_reg_9637.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_37_fu_15691_p2() {
    co_37_fu_15691_p2 = (!co5_reg_9671.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co5_reg_9671.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_38_fu_15810_p2() {
    co_38_fu_15810_p2 = (!co9_reg_9715.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co9_reg_9715.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_39_fu_15970_p2() {
    co_39_fu_15970_p2 = (!co12_reg_9749.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co12_reg_9749.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_40_fu_16154_p2() {
    co_40_fu_16154_p2 = (!co16_reg_9793.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co16_reg_9793.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_41_fu_16318_p2() {
    co_41_fu_16318_p2 = (!co19_reg_9827.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co19_reg_9827.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_42_fu_16491_p2() {
    co_42_fu_16491_p2 = (!co22_reg_9860.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co22_reg_9860.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_43_fu_16651_p2() {
    co_43_fu_16651_p2 = (!co25_reg_9894.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co25_reg_9894.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_44_fu_16819_p2() {
    co_44_fu_16819_p2 = (!co29_reg_9938.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co29_reg_9938.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_45_fu_17001_p2() {
    co_45_fu_17001_p2 = (!co32_reg_9972.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co32_reg_9972.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_46_fu_17124_p2() {
    co_46_fu_17124_p2 = (!co35_reg_10005.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co35_reg_10005.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_47_fu_17297_p2() {
    co_47_fu_17297_p2 = (!co38_reg_10038.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co38_reg_10038.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_48_fu_17457_p2() {
    co_48_fu_17457_p2 = (!co41_reg_10072.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co41_reg_10072.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_49_fu_17629_p2() {
    co_49_fu_17629_p2 = (!co45_reg_10116.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co45_reg_10116.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_50_fu_17789_p2() {
    co_50_fu_17789_p2 = (!co47_reg_10150.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co47_reg_10150.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_51_fu_17912_p2() {
    co_51_fu_17912_p2 = (!co48_reg_10183.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co48_reg_10183.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_52_fu_18085_p2() {
    co_52_fu_18085_p2 = (!co50_reg_10216.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co50_reg_10216.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_54_fu_18253_p2() {
    co_54_fu_18253_p2 = (!co53_reg_10250.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co53_reg_10250.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_56_fu_18437_p2() {
    co_56_fu_18437_p2 = (!co55_reg_10294.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co55_reg_10294.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_58_fu_18603_p2() {
    co_58_fu_18603_p2 = (!co57_reg_10328.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co57_reg_10328.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_59_fu_18696_p2() {
    co_59_fu_18696_p2 = (!co58_reg_10361.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co58_reg_10361.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_61_fu_19136_p2() {
    co_61_fu_19136_p2 = (!co60_reg_10416.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co60_reg_10416.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_63_fu_19477_p2() {
    co_63_fu_19477_p2 = (!co62_reg_10482.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co62_reg_10482.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_65_fu_19921_p2() {
    co_65_fu_19921_p2 = (!co64_reg_10537.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co64_reg_10537.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_67_fu_20254_p2() {
    co_67_fu_20254_p2 = (!co66_reg_10603.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co66_reg_10603.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_69_fu_20724_p2() {
    co_69_fu_20724_p2 = (!co68_reg_10658.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co68_reg_10658.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_70_fu_20905_p2() {
    co_70_fu_20905_p2 = (!co69_reg_10691.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co69_reg_10691.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_72_fu_21345_p2() {
    co_72_fu_21345_p2 = (!co71_reg_10746.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co71_reg_10746.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_74_fu_21686_p2() {
    co_74_fu_21686_p2 = (!co73_reg_10812.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co73_reg_10812.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_76_fu_22148_p2() {
    co_76_fu_22148_p2 = (!co75_reg_10867.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co75_reg_10867.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_78_fu_22271_p2() {
    co_78_fu_22271_p2 = (!co77_reg_10900.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co77_reg_10900.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_80_fu_22452_p2() {
    co_80_fu_22452_p2 = (!co79_reg_10933.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co79_reg_10933.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_82_fu_22892_p2() {
    co_82_fu_22892_p2 = (!co81_reg_10988.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co81_reg_10988.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_84_fu_23233_p2() {
    co_84_fu_23233_p2 = (!co83_reg_11054.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co83_reg_11054.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_86_fu_23699_p2() {
    co_86_fu_23699_p2 = (!co85_reg_11109.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co85_reg_11109.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_88_fu_23822_p2() {
    co_88_fu_23822_p2 = (!co87_reg_11142.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co87_reg_11142.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_90_fu_24003_p2() {
    co_90_fu_24003_p2 = (!co89_reg_11175.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co89_reg_11175.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_92_fu_24455_p2() {
    co_92_fu_24455_p2 = (!co91_reg_11230.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co91_reg_11230.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_94_fu_24792_p2() {
    co_94_fu_24792_p2 = (!co93_reg_11296.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co93_reg_11296.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_96_fu_25258_p2() {
    co_96_fu_25258_p2 = (!co95_reg_11351.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co95_reg_11351.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_98_fu_25381_p2() {
    co_98_fu_25381_p2 = (!co97_reg_11384.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co97_reg_11384.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_conv1_bias_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_bias_V_address0 =  (sc_lv<5>) (i_cast_reg_40197.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_bias_V_address0 = grp_conv1_p_fu_14301_bias_V_address0.read();
    } else {
        conv1_bias_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_conv1_bias_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_bias_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_bias_V_ce0 = grp_conv1_p_fu_14301_bias_V_ce0.read();
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
        conv1_output_p_V_address0 = grp_subconv_3x3_32_strid_1_fu_14774_conv1_output_p_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_address0 = grp_conv1_p_fu_14301_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_address0 = grp_subconv_1x1_32_p_fu_14066_input_V_address0.read();
    } else {
        conv1_output_p_V_address0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_ce0 = grp_subconv_3x3_32_strid_1_fu_14774_conv1_output_p_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_ce0 = grp_conv1_p_fu_14301_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_ce0 = grp_subconv_1x1_32_p_fu_14066_input_V_ce0.read();
    } else {
        conv1_output_p_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_we0 = grp_conv1_p_fu_14301_output_V_we0.read();
    } else {
        conv1_output_p_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_bias_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        conv_last_bias_V_address0 =  (sc_lv<9>) (i1_cast_reg_40216.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_bias_V_address0 = grp_conv_last_fu_14274_bias_V_address0.read();
    } else {
        conv_last_bias_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_bias_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        conv_last_bias_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_bias_V_ce0 = grp_conv_last_fu_14274_bias_V_ce0.read();
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
        conv_last_output_V_0_address0 = grp_avgpool_fu_15190_conv_last_output_V_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_0_address0 = grp_conv_last_fu_14274_conv_last_output_V_0_address0.read();
    } else {
        conv_last_output_V_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_0_ce0 = grp_avgpool_fu_15190_conv_last_output_V_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_0_ce0 = grp_conv_last_fu_14274_conv_last_output_V_0_ce0.read();
    } else {
        conv_last_output_V_0_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_0_we0 = grp_conv_last_fu_14274_conv_last_output_V_0_we0.read();
    } else {
        conv_last_output_V_0_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_1_address0 = grp_avgpool_fu_15190_conv_last_output_V_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_1_address0 = grp_conv_last_fu_14274_conv_last_output_V_1_address0.read();
    } else {
        conv_last_output_V_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_1_ce0 = grp_avgpool_fu_15190_conv_last_output_V_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_1_ce0 = grp_conv_last_fu_14274_conv_last_output_V_1_ce0.read();
    } else {
        conv_last_output_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_1_we0 = grp_conv_last_fu_14274_conv_last_output_V_1_we0.read();
    } else {
        conv_last_output_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_2_address0 = grp_avgpool_fu_15190_conv_last_output_V_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_2_address0 = grp_conv_last_fu_14274_conv_last_output_V_2_address0.read();
    } else {
        conv_last_output_V_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_2_ce0 = grp_avgpool_fu_15190_conv_last_output_V_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_2_ce0 = grp_conv_last_fu_14274_conv_last_output_V_2_ce0.read();
    } else {
        conv_last_output_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_2_we0 = grp_conv_last_fu_14274_conv_last_output_V_2_we0.read();
    } else {
        conv_last_output_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_3_address0 = grp_avgpool_fu_15190_conv_last_output_V_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_3_address0 = grp_conv_last_fu_14274_conv_last_output_V_3_address0.read();
    } else {
        conv_last_output_V_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_3_ce0 = grp_avgpool_fu_15190_conv_last_output_V_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_3_ce0 = grp_conv_last_fu_14274_conv_last_output_V_3_ce0.read();
    } else {
        conv_last_output_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_3_we0 = grp_conv_last_fu_14274_conv_last_output_V_3_we0.read();
    } else {
        conv_last_output_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_4_address0 = grp_avgpool_fu_15190_conv_last_output_V_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_4_address0 = grp_conv_last_fu_14274_conv_last_output_V_4_address0.read();
    } else {
        conv_last_output_V_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_4_ce0 = grp_avgpool_fu_15190_conv_last_output_V_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_4_ce0 = grp_conv_last_fu_14274_conv_last_output_V_4_ce0.read();
    } else {
        conv_last_output_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_4_we0 = grp_conv_last_fu_14274_conv_last_output_V_4_we0.read();
    } else {
        conv_last_output_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_5_address0 = grp_avgpool_fu_15190_conv_last_output_V_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_5_address0 = grp_conv_last_fu_14274_conv_last_output_V_5_address0.read();
    } else {
        conv_last_output_V_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_5_ce0 = grp_avgpool_fu_15190_conv_last_output_V_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_5_ce0 = grp_conv_last_fu_14274_conv_last_output_V_5_ce0.read();
    } else {
        conv_last_output_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_5_we0 = grp_conv_last_fu_14274_conv_last_output_V_5_we0.read();
    } else {
        conv_last_output_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_6_address0 = grp_avgpool_fu_15190_conv_last_output_V_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_6_address0 = grp_conv_last_fu_14274_conv_last_output_V_6_address0.read();
    } else {
        conv_last_output_V_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_6_ce0 = grp_avgpool_fu_15190_conv_last_output_V_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_6_ce0 = grp_conv_last_fu_14274_conv_last_output_V_6_ce0.read();
    } else {
        conv_last_output_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_6_we0 = grp_conv_last_fu_14274_conv_last_output_V_6_we0.read();
    } else {
        conv_last_output_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_7_address0 = grp_avgpool_fu_15190_conv_last_output_V_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_7_address0 = grp_conv_last_fu_14274_conv_last_output_V_7_address0.read();
    } else {
        conv_last_output_V_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_7_ce0 = grp_avgpool_fu_15190_conv_last_output_V_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_7_ce0 = grp_conv_last_fu_14274_conv_last_output_V_7_ce0.read();
    } else {
        conv_last_output_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_7_we0 = grp_conv_last_fu_14274_conv_last_output_V_7_we0.read();
    } else {
        conv_last_output_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_exitcond100_fu_17409_p2() {
    exitcond100_fu_17409_p2 = (!i23_reg_10061.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i23_reg_10061.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond101_fu_17393_p2() {
    exitcond101_fu_17393_p2 = (!ci25_reg_10050.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci25_reg_10050.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond102_fu_17248_p2() {
    exitcond102_fu_17248_p2 = (!w37_reg_10027.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w37_reg_10027.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond103_fu_17451_p2() {
    exitcond103_fu_17451_p2 = (!co41_reg_10072.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co41_reg_10072.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond104_fu_17607_p2() {
    exitcond104_fu_17607_p2 = (!i25_reg_10105.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i25_reg_10105.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond105_fu_17554_p2() {
    exitcond105_fu_17554_p2 = (!w42_reg_10083.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w42_reg_10083.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond106_fu_17623_p2() {
    exitcond106_fu_17623_p2 = (!co45_reg_10116.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co45_reg_10116.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond107_fu_17591_p2() {
    exitcond107_fu_17591_p2 = (!h43_reg_10094.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h43_reg_10094.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond108_fu_17741_p2() {
    exitcond108_fu_17741_p2 = (!i27_reg_10139.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i27_reg_10139.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond109_fu_17725_p2() {
    exitcond109_fu_17725_p2 = (!ci27_reg_10128.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci27_reg_10128.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond110_fu_17783_p2() {
    exitcond110_fu_17783_p2 = (!co47_reg_10150.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co47_reg_10150.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond111_fu_17906_p2() {
    exitcond111_fu_17906_p2 = (!co48_reg_10183.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co48_reg_10183.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond112_fu_17795_p2() {
    exitcond112_fu_17795_p2 = (!h45_reg_10161.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h45_reg_10161.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond113_fu_18079_p2() {
    exitcond113_fu_18079_p2 = (!co50_reg_10216.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co50_reg_10216.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond114_fu_17954_p2() {
    exitcond114_fu_17954_p2 = (!h47_reg_10194.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h47_reg_10194.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond115_fu_17846_p2() {
    exitcond115_fu_17846_p2 = (!w50_reg_10172.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w50_reg_10172.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond116_fu_18186_p2() {
    exitcond116_fu_18186_p2 = (!tmp_2219_reg_10239.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2219_reg_10239.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond117_fu_18170_p2() {
    exitcond117_fu_18170_p2 = (!ci29_reg_10228.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci29_reg_10228.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond118_fu_18036_p2() {
    exitcond118_fu_18036_p2 = (!w53_reg_10205.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w53_reg_10205.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond119_fu_18247_p2() {
    exitcond119_fu_18247_p2 = (!co53_reg_10250.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co53_reg_10250.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond120_fu_18419_p2() {
    exitcond120_fu_18419_p2 = (!i30_reg_10283.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i30_reg_10283.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond121_fu_18366_p2() {
    exitcond121_fu_18366_p2 = (!w55_reg_10261.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w55_reg_10261.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond122_fu_18431_p2() {
    exitcond122_fu_18431_p2 = (!co55_reg_10294.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co55_reg_10294.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond123_fu_18403_p2() {
    exitcond123_fu_18403_p2 = (!h49_reg_10272.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h49_reg_10272.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond124_fu_18555_p2() {
    exitcond124_fu_18555_p2 = (!i32_reg_10317.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i32_reg_10317.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond125_fu_18539_p2() {
    exitcond125_fu_18539_p2 = (!ci31_reg_10306.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci31_reg_10306.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond126_fu_18597_p2() {
    exitcond126_fu_18597_p2 = (!co57_reg_10328.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co57_reg_10328.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond127_fu_18690_p2() {
    exitcond127_fu_18690_p2 = (!co58_reg_10361.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co58_reg_10361.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond128_fu_18609_p2() {
    exitcond128_fu_18609_p2 = (!h51_reg_10339.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h51_reg_10339.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond129_fu_19026_p2() {
    exitcond129_fu_19026_p2 = (!i34_reg_10394.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i34_reg_10394.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond130_fu_18758_p2() {
    exitcond130_fu_18758_p2 = (!ci33_reg_10372.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci33_reg_10372.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond131_fu_18660_p2() {
    exitcond131_fu_18660_p2 = (!w57_reg_10350.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w57_reg_10350.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond132_fu_19130_p2() {
    exitcond132_fu_19130_p2 = (!co60_reg_10416.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co60_reg_10416.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond133_fu_19038_p2() {
    exitcond133_fu_19038_p2 = (!k_reg_10405.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k_reg_10405.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond134_fu_18779_p2() {
    exitcond134_fu_18779_p2 = (!i36_reg_10383.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i36_reg_10383.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond135_fu_19367_p2() {
    exitcond135_fu_19367_p2 = (!i37_reg_10460.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i37_reg_10460.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond136_fu_19150_p2() {
    exitcond136_fu_19150_p2 = (!w59_reg_10427.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w59_reg_10427.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond137_fu_19471_p2() {
    exitcond137_fu_19471_p2 = (!co62_reg_10482.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co62_reg_10482.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond138_fu_19379_p2() {
    exitcond138_fu_19379_p2 = (!k8_reg_10471.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k8_reg_10471.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond139_fu_19170_p2() {
    exitcond139_fu_19170_p2 = (!h53_reg_10438.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h53_reg_10438.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond140_fu_19807_p2() {
    exitcond140_fu_19807_p2 = (!i39_reg_10515.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i39_reg_10515.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond141_fu_19539_p2() {
    exitcond141_fu_19539_p2 = (!ci35_reg_10493.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci35_reg_10493.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond142_fu_19182_p2() {
    exitcond142_fu_19182_p2 = (!i41_reg_10449.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i41_reg_10449.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond143_fu_19915_p2() {
    exitcond143_fu_19915_p2 = (!co64_reg_10537.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co64_reg_10537.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond144_fu_19819_p2() {
    exitcond144_fu_19819_p2 = (!k9_reg_10526.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k9_reg_10526.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond145_fu_19560_p2() {
    exitcond145_fu_19560_p2 = (!i43_reg_10504.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i43_reg_10504.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond146_fu_20148_p2() {
    exitcond146_fu_20148_p2 = (!i44_reg_10581.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i44_reg_10581.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond147_fu_19935_p2() {
    exitcond147_fu_19935_p2 = (!w61_reg_10548.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w61_reg_10548.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond148_fu_20248_p2() {
    exitcond148_fu_20248_p2 = (!co66_reg_10603.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co66_reg_10603.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond149_fu_20160_p2() {
    exitcond149_fu_20160_p2 = (!k10_reg_10592.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k10_reg_10592.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond150_fu_19955_p2() {
    exitcond150_fu_19955_p2 = (!h55_reg_10559.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h55_reg_10559.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond151_fu_20588_p2() {
    exitcond151_fu_20588_p2 = (!i46_reg_10636.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i46_reg_10636.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond152_fu_20316_p2() {
    exitcond152_fu_20316_p2 = (!ci37_reg_10614.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci37_reg_10614.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond153_fu_19967_p2() {
    exitcond153_fu_19967_p2 = (!i48_reg_10570.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i48_reg_10570.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond154_fu_20718_p2() {
    exitcond154_fu_20718_p2 = (!co68_reg_10658.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co68_reg_10658.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond155_fu_20600_p2() {
    exitcond155_fu_20600_p2 = (!k12_reg_10647.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k12_reg_10647.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond156_fu_20337_p2() {
    exitcond156_fu_20337_p2 = (!i50_reg_10625.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i50_reg_10625.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond157_fu_20899_p2() {
    exitcond157_fu_20899_p2 = (!co69_reg_10691.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co69_reg_10691.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond158_fu_20766_p2() {
    exitcond158_fu_20766_p2 = (!h57_reg_10669.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h57_reg_10669.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond159_fu_21235_p2() {
    exitcond159_fu_21235_p2 = (!i52_reg_10724.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i52_reg_10724.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond160_fu_20967_p2() {
    exitcond160_fu_20967_p2 = (!ci39_reg_10702.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci39_reg_10702.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond161_fu_20856_p2() {
    exitcond161_fu_20856_p2 = (!w63_reg_10680.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w63_reg_10680.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond162_fu_21339_p2() {
    exitcond162_fu_21339_p2 = (!co71_reg_10746.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co71_reg_10746.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond163_fu_21247_p2() {
    exitcond163_fu_21247_p2 = (!k14_reg_10735.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k14_reg_10735.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond164_fu_20988_p2() {
    exitcond164_fu_20988_p2 = (!i54_reg_10713.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i54_reg_10713.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond165_fu_21580_p2() {
    exitcond165_fu_21580_p2 = (!i55_reg_10790.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i55_reg_10790.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond166_fu_21359_p2() {
    exitcond166_fu_21359_p2 = (!w65_reg_10757.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w65_reg_10757.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond167_fu_21680_p2() {
    exitcond167_fu_21680_p2 = (!co73_reg_10812.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co73_reg_10812.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond168_fu_21592_p2() {
    exitcond168_fu_21592_p2 = (!k16_reg_10801.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k16_reg_10801.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond169_fu_21379_p2() {
    exitcond169_fu_21379_p2 = (!h59_reg_10768.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h59_reg_10768.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond170_fu_22016_p2() {
    exitcond170_fu_22016_p2 = (!i57_reg_10845.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i57_reg_10845.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond171_fu_21748_p2() {
    exitcond171_fu_21748_p2 = (!ci41_reg_10823.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci41_reg_10823.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond172_fu_21391_p2() {
    exitcond172_fu_21391_p2 = (!i59_reg_10779.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i59_reg_10779.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond173_fu_22142_p2() {
    exitcond173_fu_22142_p2 = (!co75_reg_10867.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co75_reg_10867.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond174_fu_22028_p2() {
    exitcond174_fu_22028_p2 = (!k18_reg_10856.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k18_reg_10856.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond175_fu_21769_p2() {
    exitcond175_fu_21769_p2 = (!i61_reg_10834.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i61_reg_10834.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond176_fu_22265_p2() {
    exitcond176_fu_22265_p2 = (!co77_reg_10900.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co77_reg_10900.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond177_fu_22154_p2() {
    exitcond177_fu_22154_p2 = (!h61_reg_10878.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h61_reg_10878.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond178_fu_22446_p2() {
    exitcond178_fu_22446_p2 = (!co79_reg_10933.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co79_reg_10933.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond179_fu_22313_p2() {
    exitcond179_fu_22313_p2 = (!h63_reg_10911.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h63_reg_10911.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond180_fu_22205_p2() {
    exitcond180_fu_22205_p2 = (!w67_reg_10889.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w67_reg_10889.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond181_fu_22782_p2() {
    exitcond181_fu_22782_p2 = (!i63_reg_10966.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i63_reg_10966.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond182_fu_22514_p2() {
    exitcond182_fu_22514_p2 = (!ci43_reg_10944.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci43_reg_10944.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond183_fu_22403_p2() {
    exitcond183_fu_22403_p2 = (!w69_reg_10922.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w69_reg_10922.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond184_fu_22886_p2() {
    exitcond184_fu_22886_p2 = (!co81_reg_10988.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co81_reg_10988.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond185_fu_22794_p2() {
    exitcond185_fu_22794_p2 = (!k20_reg_10977.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k20_reg_10977.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond186_fu_22535_p2() {
    exitcond186_fu_22535_p2 = (!i65_reg_10955.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i65_reg_10955.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond187_fu_23123_p2() {
    exitcond187_fu_23123_p2 = (!i66_reg_11032.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i66_reg_11032.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond188_fu_22906_p2() {
    exitcond188_fu_22906_p2 = (!w71_reg_10999.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w71_reg_10999.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond189_fu_23227_p2() {
    exitcond189_fu_23227_p2 = (!co83_reg_11054.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co83_reg_11054.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond190_fu_23135_p2() {
    exitcond190_fu_23135_p2 = (!k22_reg_11043.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k22_reg_11043.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond191_fu_22926_p2() {
    exitcond191_fu_22926_p2 = (!h65_reg_11010.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h65_reg_11010.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond192_fu_23563_p2() {
    exitcond192_fu_23563_p2 = (!i68_reg_11087.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i68_reg_11087.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond193_fu_23295_p2() {
    exitcond193_fu_23295_p2 = (!ci45_reg_11065.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci45_reg_11065.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond194_fu_22938_p2() {
    exitcond194_fu_22938_p2 = (!i70_reg_11021.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i70_reg_11021.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond195_fu_23693_p2() {
    exitcond195_fu_23693_p2 = (!co85_reg_11109.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co85_reg_11109.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond196_fu_23575_p2() {
    exitcond196_fu_23575_p2 = (!k24_reg_11098.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k24_reg_11098.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond197_fu_23316_p2() {
    exitcond197_fu_23316_p2 = (!i72_reg_11076.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i72_reg_11076.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond198_fu_23816_p2() {
    exitcond198_fu_23816_p2 = (!co87_reg_11142.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co87_reg_11142.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond199_fu_23705_p2() {
    exitcond199_fu_23705_p2 = (!h67_reg_11120.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h67_reg_11120.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond200_fu_23997_p2() {
    exitcond200_fu_23997_p2 = (!co89_reg_11175.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co89_reg_11175.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond201_fu_23864_p2() {
    exitcond201_fu_23864_p2 = (!h69_reg_11153.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h69_reg_11153.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond202_fu_23756_p2() {
    exitcond202_fu_23756_p2 = (!w73_reg_11131.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w73_reg_11131.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond203_fu_24341_p2() {
    exitcond203_fu_24341_p2 = (!i74_reg_11208.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i74_reg_11208.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond204_fu_24065_p2() {
    exitcond204_fu_24065_p2 = (!ci47_reg_11186.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci47_reg_11186.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond205_fu_23954_p2() {
    exitcond205_fu_23954_p2 = (!w75_reg_11164.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w75_reg_11164.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond206_fu_24449_p2() {
    exitcond206_fu_24449_p2 = (!co91_reg_11230.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co91_reg_11230.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond207_fu_24353_p2() {
    exitcond207_fu_24353_p2 = (!k26_reg_11219.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k26_reg_11219.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond208_fu_24086_p2() {
    exitcond208_fu_24086_p2 = (!i76_reg_11197.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i76_reg_11197.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond209_fu_24682_p2() {
    exitcond209_fu_24682_p2 = (!i77_reg_11274.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i77_reg_11274.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond210_fu_24469_p2() {
    exitcond210_fu_24469_p2 = (!w77_reg_11241.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w77_reg_11241.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond211_fu_24786_p2() {
    exitcond211_fu_24786_p2 = (!co93_reg_11296.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co93_reg_11296.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond212_fu_24694_p2() {
    exitcond212_fu_24694_p2 = (!k28_reg_11285.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k28_reg_11285.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond213_fu_24489_p2() {
    exitcond213_fu_24489_p2 = (!h71_reg_11252.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h71_reg_11252.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond214_fu_25122_p2() {
    exitcond214_fu_25122_p2 = (!i79_reg_11329.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i79_reg_11329.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond215_fu_24854_p2() {
    exitcond215_fu_24854_p2 = (!ci49_reg_11307.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci49_reg_11307.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond216_fu_24501_p2() {
    exitcond216_fu_24501_p2 = (!i81_reg_11263.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i81_reg_11263.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond217_fu_25252_p2() {
    exitcond217_fu_25252_p2 = (!co95_reg_11351.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co95_reg_11351.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond218_fu_25134_p2() {
    exitcond218_fu_25134_p2 = (!k30_reg_11340.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k30_reg_11340.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond219_fu_24875_p2() {
    exitcond219_fu_24875_p2 = (!i83_reg_11318.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i83_reg_11318.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond220_fu_25375_p2() {
    exitcond220_fu_25375_p2 = (!co97_reg_11384.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co97_reg_11384.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond221_fu_25264_p2() {
    exitcond221_fu_25264_p2 = (!h73_reg_11362.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h73_reg_11362.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond222_fu_25556_p2() {
    exitcond222_fu_25556_p2 = (!co99_reg_11417.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co99_reg_11417.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond223_fu_25423_p2() {
    exitcond223_fu_25423_p2 = (!h75_reg_11395.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h75_reg_11395.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond224_fu_25315_p2() {
    exitcond224_fu_25315_p2 = (!w79_reg_11373.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w79_reg_11373.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond225_fu_25892_p2() {
    exitcond225_fu_25892_p2 = (!i85_reg_11450.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i85_reg_11450.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond226_fu_25624_p2() {
    exitcond226_fu_25624_p2 = (!ci51_reg_11428.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci51_reg_11428.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond227_fu_25513_p2() {
    exitcond227_fu_25513_p2 = (!w81_reg_11406.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w81_reg_11406.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond228_fu_25996_p2() {
    exitcond228_fu_25996_p2 = (!co101_reg_11472.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co101_reg_11472.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond229_fu_25904_p2() {
    exitcond229_fu_25904_p2 = (!k32_reg_11461.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k32_reg_11461.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond230_fu_25645_p2() {
    exitcond230_fu_25645_p2 = (!i87_reg_11439.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i87_reg_11439.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond231_fu_26229_p2() {
    exitcond231_fu_26229_p2 = (!i88_reg_11516.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i88_reg_11516.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond232_fu_26016_p2() {
    exitcond232_fu_26016_p2 = (!w83_reg_11483.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w83_reg_11483.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond233_fu_26329_p2() {
    exitcond233_fu_26329_p2 = (!co103_reg_11538.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co103_reg_11538.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond234_fu_26241_p2() {
    exitcond234_fu_26241_p2 = (!k34_reg_11527.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k34_reg_11527.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond235_fu_26036_p2() {
    exitcond235_fu_26036_p2 = (!h77_reg_11494.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h77_reg_11494.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond236_fu_26665_p2() {
    exitcond236_fu_26665_p2 = (!i90_reg_11571.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i90_reg_11571.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond237_fu_26397_p2() {
    exitcond237_fu_26397_p2 = (!ci53_reg_11549.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci53_reg_11549.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond238_fu_26048_p2() {
    exitcond238_fu_26048_p2 = (!i92_reg_11505.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i92_reg_11505.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond239_fu_26791_p2() {
    exitcond239_fu_26791_p2 = (!co105_reg_11593.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co105_reg_11593.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond240_fu_26677_p2() {
    exitcond240_fu_26677_p2 = (!k36_reg_11582.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k36_reg_11582.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond241_fu_26418_p2() {
    exitcond241_fu_26418_p2 = (!i94_reg_11560.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i94_reg_11560.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond242_fu_26914_p2() {
    exitcond242_fu_26914_p2 = (!co107_reg_11626.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co107_reg_11626.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond243_fu_26803_p2() {
    exitcond243_fu_26803_p2 = (!h79_reg_11604.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h79_reg_11604.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond244_fu_27095_p2() {
    exitcond244_fu_27095_p2 = (!co109_reg_11659.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co109_reg_11659.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond245_fu_26962_p2() {
    exitcond245_fu_26962_p2 = (!h81_reg_11637.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h81_reg_11637.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond246_fu_26854_p2() {
    exitcond246_fu_26854_p2 = (!w85_reg_11615.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w85_reg_11615.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond247_fu_27431_p2() {
    exitcond247_fu_27431_p2 = (!i96_reg_11692.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i96_reg_11692.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond248_fu_27163_p2() {
    exitcond248_fu_27163_p2 = (!ci55_reg_11670.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci55_reg_11670.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond249_fu_27052_p2() {
    exitcond249_fu_27052_p2 = (!w87_reg_11648.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w87_reg_11648.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond250_fu_27535_p2() {
    exitcond250_fu_27535_p2 = (!co111_reg_11714.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co111_reg_11714.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond251_fu_27443_p2() {
    exitcond251_fu_27443_p2 = (!k38_reg_11703.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k38_reg_11703.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond252_fu_27184_p2() {
    exitcond252_fu_27184_p2 = (!i98_reg_11681.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i98_reg_11681.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond253_fu_27776_p2() {
    exitcond253_fu_27776_p2 = (!i99_reg_11758.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i99_reg_11758.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond254_fu_27555_p2() {
    exitcond254_fu_27555_p2 = (!w89_reg_11725.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w89_reg_11725.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond255_fu_27876_p2() {
    exitcond255_fu_27876_p2 = (!co113_reg_11780.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co113_reg_11780.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond256_fu_27788_p2() {
    exitcond256_fu_27788_p2 = (!k40_reg_11769.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k40_reg_11769.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond257_fu_27575_p2() {
    exitcond257_fu_27575_p2 = (!h83_reg_11736.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h83_reg_11736.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond258_fu_28212_p2() {
    exitcond258_fu_28212_p2 = (!i101_reg_11813.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i101_reg_11813.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond259_fu_27944_p2() {
    exitcond259_fu_27944_p2 = (!ci57_reg_11791.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci57_reg_11791.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond260_fu_27587_p2() {
    exitcond260_fu_27587_p2 = (!i103_reg_11747.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i103_reg_11747.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond261_fu_28338_p2() {
    exitcond261_fu_28338_p2 = (!co115_reg_11835.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co115_reg_11835.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond262_fu_28224_p2() {
    exitcond262_fu_28224_p2 = (!k42_reg_11824.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k42_reg_11824.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond263_fu_27965_p2() {
    exitcond263_fu_27965_p2 = (!i105_reg_11802.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i105_reg_11802.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond264_fu_28461_p2() {
    exitcond264_fu_28461_p2 = (!co117_reg_11868.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co117_reg_11868.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond265_fu_28350_p2() {
    exitcond265_fu_28350_p2 = (!h85_reg_11846.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h85_reg_11846.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond266_fu_28642_p2() {
    exitcond266_fu_28642_p2 = (!co119_reg_11901.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co119_reg_11901.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond267_fu_28509_p2() {
    exitcond267_fu_28509_p2 = (!h87_reg_11879.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h87_reg_11879.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond268_fu_28401_p2() {
    exitcond268_fu_28401_p2 = (!w91_reg_11857.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w91_reg_11857.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond269_fu_28978_p2() {
    exitcond269_fu_28978_p2 = (!i107_reg_11934.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i107_reg_11934.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond270_fu_28710_p2() {
    exitcond270_fu_28710_p2 = (!ci59_reg_11912.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci59_reg_11912.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond271_fu_28599_p2() {
    exitcond271_fu_28599_p2 = (!w93_reg_11890.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w93_reg_11890.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond272_fu_29082_p2() {
    exitcond272_fu_29082_p2 = (!co121_reg_11956.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co121_reg_11956.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond273_fu_28990_p2() {
    exitcond273_fu_28990_p2 = (!k44_reg_11945.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k44_reg_11945.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond274_fu_28731_p2() {
    exitcond274_fu_28731_p2 = (!i109_reg_11923.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i109_reg_11923.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond275_fu_29327_p2() {
    exitcond275_fu_29327_p2 = (!i110_reg_12000.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i110_reg_12000.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond276_fu_29102_p2() {
    exitcond276_fu_29102_p2 = (!w95_reg_11967.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w95_reg_11967.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond277_fu_29427_p2() {
    exitcond277_fu_29427_p2 = (!co123_reg_12022.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co123_reg_12022.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond278_fu_29339_p2() {
    exitcond278_fu_29339_p2 = (!k46_reg_12011.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k46_reg_12011.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond279_fu_29122_p2() {
    exitcond279_fu_29122_p2 = (!h89_reg_11978.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h89_reg_11978.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond280_fu_29763_p2() {
    exitcond280_fu_29763_p2 = (!i112_reg_12055.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i112_reg_12055.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond281_fu_29495_p2() {
    exitcond281_fu_29495_p2 = (!ci61_reg_12033.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci61_reg_12033.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond282_fu_29134_p2() {
    exitcond282_fu_29134_p2 = (!i114_reg_11989.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i114_reg_11989.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond283_fu_29889_p2() {
    exitcond283_fu_29889_p2 = (!co125_reg_12077.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co125_reg_12077.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond284_fu_29775_p2() {
    exitcond284_fu_29775_p2 = (!k48_reg_12066.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k48_reg_12066.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond285_fu_29516_p2() {
    exitcond285_fu_29516_p2 = (!i116_reg_12044.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i116_reg_12044.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond286_fu_30012_p2() {
    exitcond286_fu_30012_p2 = (!co127_reg_12110.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co127_reg_12110.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond287_fu_29901_p2() {
    exitcond287_fu_29901_p2 = (!h91_reg_12088.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h91_reg_12088.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond288_fu_30193_p2() {
    exitcond288_fu_30193_p2 = (!co129_reg_12143.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co129_reg_12143.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond289_fu_30060_p2() {
    exitcond289_fu_30060_p2 = (!h93_reg_12121.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h93_reg_12121.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond290_fu_29952_p2() {
    exitcond290_fu_29952_p2 = (!w97_reg_12099.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w97_reg_12099.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond291_fu_30537_p2() {
    exitcond291_fu_30537_p2 = (!i118_reg_12176.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i118_reg_12176.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond292_fu_30261_p2() {
    exitcond292_fu_30261_p2 = (!ci63_reg_12154.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci63_reg_12154.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond293_fu_30150_p2() {
    exitcond293_fu_30150_p2 = (!w99_reg_12132.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w99_reg_12132.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond294_fu_30641_p2() {
    exitcond294_fu_30641_p2 = (!co131_reg_12198.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co131_reg_12198.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond295_fu_30549_p2() {
    exitcond295_fu_30549_p2 = (!k50_reg_12187.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k50_reg_12187.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond296_fu_30282_p2() {
    exitcond296_fu_30282_p2 = (!i120_reg_12165.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i120_reg_12165.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond297_fu_30878_p2() {
    exitcond297_fu_30878_p2 = (!i121_reg_12242.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i121_reg_12242.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond298_fu_30661_p2() {
    exitcond298_fu_30661_p2 = (!w101_reg_12209.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w101_reg_12209.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond299_fu_39787_p2() {
    exitcond299_fu_39787_p2 = (!h127_reg_13639.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h127_reg_13639.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond300_fu_39726_p2() {
    exitcond300_fu_39726_p2 = (!w131_reg_13628.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w131_reg_13628.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond301_fu_39697_p2() {
    exitcond301_fu_39697_p2 = (!ci89_reg_13617.read().is_01() || !ap_const_lv8_C0.is_01())? sc_lv<1>(): sc_lv<1>(ci89_reg_13617.read() == ap_const_lv8_C0);
}

void ShuffleNetV2::thread_exitcond302_fu_39625_p2() {
    exitcond302_fu_39625_p2 = (!w132_reg_13606.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w132_reg_13606.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond303_fu_39574_p2() {
    exitcond303_fu_39574_p2 = (!h125_reg_13595.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h125_reg_13595.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond304_fu_39562_p2() {
    exitcond304_fu_39562_p2 = (!co185_reg_13584.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co185_reg_13584.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond305_fu_39444_p2() {
    exitcond305_fu_39444_p2 = (!k88_reg_13573.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k88_reg_13573.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond306_fu_39432_p2() {
    exitcond306_fu_39432_p2 = (!i185_reg_13562.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i185_reg_13562.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond307_fu_39195_p2() {
    exitcond307_fu_39195_p2 = (!i189_reg_13551.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i189_reg_13551.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond308_fu_39174_p2() {
    exitcond308_fu_39174_p2 = (!ci87_reg_13540.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci87_reg_13540.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond309_fu_39108_p2() {
    exitcond309_fu_39108_p2 = (!co183_reg_13529.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co183_reg_13529.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond310_fu_39020_p2() {
    exitcond310_fu_39020_p2 = (!k86_reg_13518.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k86_reg_13518.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond311_fu_39008_p2() {
    exitcond311_fu_39008_p2 = (!i183_reg_13507.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i183_reg_13507.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond312_fu_38823_p2() {
    exitcond312_fu_38823_p2 = (!i187_reg_13496.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i187_reg_13496.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond313_fu_38811_p2() {
    exitcond313_fu_38811_p2 = (!h123_reg_13485.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h123_reg_13485.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond314_fu_38791_p2() {
    exitcond314_fu_38791_p2 = (!w129_reg_13474.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w129_reg_13474.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond315_fu_38771_p2() {
    exitcond315_fu_38771_p2 = (!co181_reg_13463.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co181_reg_13463.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond316_fu_38679_p2() {
    exitcond316_fu_38679_p2 = (!k84_reg_13452.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k84_reg_13452.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond317_fu_38667_p2() {
    exitcond317_fu_38667_p2 = (!i180_reg_13441.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i180_reg_13441.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond318_fu_38430_p2() {
    exitcond318_fu_38430_p2 = (!i182_reg_13430.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i182_reg_13430.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond319_fu_38409_p2() {
    exitcond319_fu_38409_p2 = (!ci85_reg_13419.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci85_reg_13419.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond320_fu_38343_p2() {
    exitcond320_fu_38343_p2 = (!co179_reg_13408.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co179_reg_13408.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond321_fu_38300_p2() {
    exitcond321_fu_38300_p2 = (!w127_reg_13397.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w127_reg_13397.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond322_fu_38218_p2() {
    exitcond322_fu_38218_p2 = (!h121_reg_13386.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h121_reg_13386.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond323_fu_38166_p2() {
    exitcond323_fu_38166_p2 = (!co177_reg_13375.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co177_reg_13375.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond324_fu_38102_p2() {
    exitcond324_fu_38102_p2 = (!w125_reg_13364.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w125_reg_13364.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond325_fu_38051_p2() {
    exitcond325_fu_38051_p2 = (!h119_reg_13353.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h119_reg_13353.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond326_fu_38039_p2() {
    exitcond326_fu_38039_p2 = (!co175_reg_13342.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co175_reg_13342.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond327_fu_37921_p2() {
    exitcond327_fu_37921_p2 = (!k82_reg_13331.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k82_reg_13331.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond328_fu_37909_p2() {
    exitcond328_fu_37909_p2 = (!i174_reg_13320.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i174_reg_13320.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond329_fu_37672_p2() {
    exitcond329_fu_37672_p2 = (!i178_reg_13309.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i178_reg_13309.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond330_fu_37651_p2() {
    exitcond330_fu_37651_p2 = (!ci83_reg_13298.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci83_reg_13298.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond331_fu_37585_p2() {
    exitcond331_fu_37585_p2 = (!co173_reg_13287.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co173_reg_13287.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond332_fu_37497_p2() {
    exitcond332_fu_37497_p2 = (!k80_reg_13276.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k80_reg_13276.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond333_fu_37485_p2() {
    exitcond333_fu_37485_p2 = (!i172_reg_13265.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i172_reg_13265.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond334_fu_37292_p2() {
    exitcond334_fu_37292_p2 = (!i176_reg_13254.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i176_reg_13254.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond335_fu_37280_p2() {
    exitcond335_fu_37280_p2 = (!h117_reg_13243.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h117_reg_13243.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond336_fu_37260_p2() {
    exitcond336_fu_37260_p2 = (!w123_reg_13232.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w123_reg_13232.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond337_fu_37240_p2() {
    exitcond337_fu_37240_p2 = (!co171_reg_13221.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co171_reg_13221.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond338_fu_37148_p2() {
    exitcond338_fu_37148_p2 = (!k78_reg_13210.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k78_reg_13210.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond339_fu_37136_p2() {
    exitcond339_fu_37136_p2 = (!i169_reg_13199.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i169_reg_13199.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond340_fu_36899_p2() {
    exitcond340_fu_36899_p2 = (!i171_reg_13188.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i171_reg_13188.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond341_fu_36878_p2() {
    exitcond341_fu_36878_p2 = (!ci81_reg_13177.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci81_reg_13177.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond342_fu_36812_p2() {
    exitcond342_fu_36812_p2 = (!co169_reg_13166.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co169_reg_13166.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond343_fu_36769_p2() {
    exitcond343_fu_36769_p2 = (!w121_reg_13155.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w121_reg_13155.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond344_fu_36687_p2() {
    exitcond344_fu_36687_p2 = (!h115_reg_13144.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h115_reg_13144.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond345_fu_36635_p2() {
    exitcond345_fu_36635_p2 = (!co167_reg_13133.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co167_reg_13133.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond346_fu_36571_p2() {
    exitcond346_fu_36571_p2 = (!w119_reg_13122.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w119_reg_13122.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond347_fu_36520_p2() {
    exitcond347_fu_36520_p2 = (!h113_reg_13111.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h113_reg_13111.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond348_fu_36508_p2() {
    exitcond348_fu_36508_p2 = (!co165_reg_13100.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co165_reg_13100.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond349_fu_36390_p2() {
    exitcond349_fu_36390_p2 = (!k76_reg_13089.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k76_reg_13089.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond350_fu_36378_p2() {
    exitcond350_fu_36378_p2 = (!i163_reg_13078.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i163_reg_13078.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond351_fu_36133_p2() {
    exitcond351_fu_36133_p2 = (!i167_reg_13067.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i167_reg_13067.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond352_fu_36112_p2() {
    exitcond352_fu_36112_p2 = (!ci79_reg_13056.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci79_reg_13056.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond353_fu_36046_p2() {
    exitcond353_fu_36046_p2 = (!co163_reg_13045.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co163_reg_13045.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond354_fu_35958_p2() {
    exitcond354_fu_35958_p2 = (!k74_reg_13034.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k74_reg_13034.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond355_fu_35946_p2() {
    exitcond355_fu_35946_p2 = (!i161_reg_13023.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i161_reg_13023.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond356_fu_35765_p2() {
    exitcond356_fu_35765_p2 = (!i165_reg_13012.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i165_reg_13012.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond357_fu_35753_p2() {
    exitcond357_fu_35753_p2 = (!h111_reg_13001.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h111_reg_13001.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond358_fu_35733_p2() {
    exitcond358_fu_35733_p2 = (!w117_reg_12990.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w117_reg_12990.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond359_fu_35713_p2() {
    exitcond359_fu_35713_p2 = (!co161_reg_12979.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co161_reg_12979.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond360_fu_35621_p2() {
    exitcond360_fu_35621_p2 = (!k72_reg_12968.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k72_reg_12968.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond361_fu_35609_p2() {
    exitcond361_fu_35609_p2 = (!i158_reg_12957.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i158_reg_12957.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond362_fu_35372_p2() {
    exitcond362_fu_35372_p2 = (!i160_reg_12946.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i160_reg_12946.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond363_fu_35351_p2() {
    exitcond363_fu_35351_p2 = (!ci77_reg_12935.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci77_reg_12935.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond364_fu_35285_p2() {
    exitcond364_fu_35285_p2 = (!co159_reg_12924.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co159_reg_12924.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond365_fu_35242_p2() {
    exitcond365_fu_35242_p2 = (!w115_reg_12913.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w115_reg_12913.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond366_fu_35160_p2() {
    exitcond366_fu_35160_p2 = (!h109_reg_12902.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h109_reg_12902.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond367_fu_35108_p2() {
    exitcond367_fu_35108_p2 = (!co157_reg_12891.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co157_reg_12891.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond368_fu_34986_p2() {
    exitcond368_fu_34986_p2 = (!k70_reg_12880.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k70_reg_12880.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond369_fu_34974_p2() {
    exitcond369_fu_34974_p2 = (!i152_reg_12869.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i152_reg_12869.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond370_fu_34737_p2() {
    exitcond370_fu_34737_p2 = (!i156_reg_12858.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i156_reg_12858.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond371_fu_34716_p2() {
    exitcond371_fu_34716_p2 = (!ci75_reg_12847.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci75_reg_12847.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond372_fu_34650_p2() {
    exitcond372_fu_34650_p2 = (!co155_reg_12836.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co155_reg_12836.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond373_fu_34562_p2() {
    exitcond373_fu_34562_p2 = (!k68_reg_12825.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k68_reg_12825.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond374_fu_34550_p2() {
    exitcond374_fu_34550_p2 = (!i150_reg_12814.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i150_reg_12814.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond375_fu_34369_p2() {
    exitcond375_fu_34369_p2 = (!i154_reg_12803.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i154_reg_12803.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond376_fu_34357_p2() {
    exitcond376_fu_34357_p2 = (!h107_reg_12792.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h107_reg_12792.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond377_fu_34337_p2() {
    exitcond377_fu_34337_p2 = (!w113_reg_12781.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w113_reg_12781.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond378_fu_34317_p2() {
    exitcond378_fu_34317_p2 = (!co153_reg_12770.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co153_reg_12770.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond379_fu_34217_p2() {
    exitcond379_fu_34217_p2 = (!k66_reg_12759.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k66_reg_12759.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond380_fu_34205_p2() {
    exitcond380_fu_34205_p2 = (!i145_reg_12748.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i145_reg_12748.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond381_fu_33968_p2() {
    exitcond381_fu_33968_p2 = (!i149_reg_12737.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i149_reg_12737.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond382_fu_33947_p2() {
    exitcond382_fu_33947_p2 = (!ci73_reg_12726.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci73_reg_12726.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond383_fu_33881_p2() {
    exitcond383_fu_33881_p2 = (!co151_reg_12715.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co151_reg_12715.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond384_fu_33789_p2() {
    exitcond384_fu_33789_p2 = (!k64_reg_12704.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k64_reg_12704.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond385_fu_33777_p2() {
    exitcond385_fu_33777_p2 = (!i143_reg_12693.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i143_reg_12693.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond386_fu_33596_p2() {
    exitcond386_fu_33596_p2 = (!i147_reg_12682.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i147_reg_12682.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond387_fu_33584_p2() {
    exitcond387_fu_33584_p2 = (!h105_reg_12671.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h105_reg_12671.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond388_fu_33564_p2() {
    exitcond388_fu_33564_p2 = (!w111_reg_12660.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w111_reg_12660.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond389_fu_33544_p2() {
    exitcond389_fu_33544_p2 = (!co149_reg_12649.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co149_reg_12649.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond390_fu_33448_p2() {
    exitcond390_fu_33448_p2 = (!k62_reg_12638.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k62_reg_12638.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond391_fu_33436_p2() {
    exitcond391_fu_33436_p2 = (!i140_reg_12627.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i140_reg_12627.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond392_fu_33199_p2() {
    exitcond392_fu_33199_p2 = (!i142_reg_12616.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i142_reg_12616.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond393_fu_33178_p2() {
    exitcond393_fu_33178_p2 = (!ci71_reg_12605.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci71_reg_12605.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond394_fu_33112_p2() {
    exitcond394_fu_33112_p2 = (!co147_reg_12594.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co147_reg_12594.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond395_fu_33082_p2() {
    exitcond395_fu_33082_p2 = (!w109_reg_12583.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w109_reg_12583.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond396_fu_33031_p2() {
    exitcond396_fu_33031_p2 = (!h103_reg_12572.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h103_reg_12572.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond397_fu_33019_p2() {
    exitcond397_fu_33019_p2 = (!co145_reg_12561.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co145_reg_12561.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond398_fu_32901_p2() {
    exitcond398_fu_32901_p2 = (!k60_reg_12550.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k60_reg_12550.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond399_fu_32889_p2() {
    exitcond399_fu_32889_p2 = (!i134_reg_12539.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i134_reg_12539.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond400_fu_32634_p2() {
    exitcond400_fu_32634_p2 = (!i138_reg_12528.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i138_reg_12528.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond401_fu_32613_p2() {
    exitcond401_fu_32613_p2 = (!ci69_reg_12517.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci69_reg_12517.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond402_fu_32545_p2() {
    exitcond402_fu_32545_p2 = (!co143_reg_12506.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co143_reg_12506.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond403_fu_32453_p2() {
    exitcond403_fu_32453_p2 = (!k58_reg_12495.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k58_reg_12495.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond404_fu_32441_p2() {
    exitcond404_fu_32441_p2 = (!i132_reg_12484.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i132_reg_12484.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond405_fu_32260_p2() {
    exitcond405_fu_32260_p2 = (!i136_reg_12473.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i136_reg_12473.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond406_fu_32248_p2() {
    exitcond406_fu_32248_p2 = (!h101_reg_12462.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h101_reg_12462.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond407_fu_32228_p2() {
    exitcond407_fu_32228_p2 = (!w107_reg_12451.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w107_reg_12451.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond408_fu_32208_p2() {
    exitcond408_fu_32208_p2 = (!co141_reg_12440.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co141_reg_12440.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond409_fu_32112_p2() {
    exitcond409_fu_32112_p2 = (!k56_reg_12429.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k56_reg_12429.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond410_fu_32100_p2() {
    exitcond410_fu_32100_p2 = (!i129_reg_12418.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i129_reg_12418.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond411_fu_31845_p2() {
    exitcond411_fu_31845_p2 = (!i131_reg_12407.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i131_reg_12407.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond412_fu_31824_p2() {
    exitcond412_fu_31824_p2 = (!ci67_reg_12396.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci67_reg_12396.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond413_fu_31756_p2() {
    exitcond413_fu_31756_p2 = (!co139_reg_12385.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co139_reg_12385.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond414_fu_31713_p2() {
    exitcond414_fu_31713_p2 = (!w105_reg_12374.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w105_reg_12374.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond415_fu_31623_p2() {
    exitcond415_fu_31623_p2 = (!h99_reg_12363.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h99_reg_12363.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond416_fu_31575_p2() {
    exitcond416_fu_31575_p2 = (!co137_reg_12352.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co137_reg_12352.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond417_fu_31515_p2() {
    exitcond417_fu_31515_p2 = (!w103_reg_12341.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w103_reg_12341.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond418_fu_31464_p2() {
    exitcond418_fu_31464_p2 = (!h97_reg_12330.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h97_reg_12330.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond419_fu_31452_p2() {
    exitcond419_fu_31452_p2 = (!co135_reg_12319.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co135_reg_12319.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond420_fu_31334_p2() {
    exitcond420_fu_31334_p2 = (!k54_reg_12308.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k54_reg_12308.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond421_fu_31322_p2() {
    exitcond421_fu_31322_p2 = (!i123_reg_12297.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i123_reg_12297.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond422_fu_31067_p2() {
    exitcond422_fu_31067_p2 = (!i127_reg_12286.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i127_reg_12286.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond423_fu_31046_p2() {
    exitcond423_fu_31046_p2 = (!ci65_reg_12275.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci65_reg_12275.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond424_fu_30978_p2() {
    exitcond424_fu_30978_p2 = (!co133_reg_12264.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co133_reg_12264.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond425_fu_30890_p2() {
    exitcond425_fu_30890_p2 = (!k52_reg_12253.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k52_reg_12253.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond426_fu_30681_p2() {
    exitcond426_fu_30681_p2 = (!h95_reg_12220.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h95_reg_12220.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond427_fu_30693_p2() {
    exitcond427_fu_30693_p2 = (!i125_reg_12231.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i125_reg_12231.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond59_fu_15352_p2() {
    exitcond59_fu_15352_p2 = (!i1_reg_9582.read().is_01() || !ap_const_lv10_200.is_01())? sc_lv<1>(): sc_lv<1>(i1_reg_9582.read() == ap_const_lv10_200);
}

void ShuffleNetV2::thread_exitcond60_fu_15379_p2() {
    exitcond60_fu_15379_p2 = (!i2_reg_9593.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i2_reg_9593.read() == ap_const_lv4_A);
}

void ShuffleNetV2::thread_exitcond61_fu_15421_p2() {
    exitcond61_fu_15421_p2 = (!ci_reg_9604.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(ci_reg_9604.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond62_fu_15565_p2() {
    exitcond62_fu_15565_p2 = (!co_reg_9637.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co_reg_9637.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond63_fu_15454_p2() {
    exitcond63_fu_15454_p2 = (!w_reg_9615.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(w_reg_9615.read() == ap_const_lv6_20);
}

void ShuffleNetV2::thread_exitcond64_fu_15647_p2() {
    exitcond64_fu_15647_p2 = (!i4_reg_9660.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i4_reg_9660.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond65_fu_15631_p2() {
    exitcond65_fu_15631_p2 = (!ci3_reg_9649.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci3_reg_9649.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond66_fu_15510_p2() {
    exitcond66_fu_15510_p2 = (!h_reg_9626.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(h_reg_9626.read() == ap_const_lv6_20);
}

void ShuffleNetV2::thread_exitcond67_fu_15685_p2() {
    exitcond67_fu_15685_p2 = (!co5_reg_9671.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co5_reg_9671.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond68_fu_15788_p2() {
    exitcond68_fu_15788_p2 = (!i8_reg_9704.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i8_reg_9704.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond69_fu_15739_p2() {
    exitcond69_fu_15739_p2 = (!w6_reg_9682.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w6_reg_9682.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond70_fu_15804_p2() {
    exitcond70_fu_15804_p2 = (!co9_reg_9715.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co9_reg_9715.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond71_fu_15772_p2() {
    exitcond71_fu_15772_p2 = (!h7_reg_9693.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h7_reg_9693.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond72_fu_15922_p2() {
    exitcond72_fu_15922_p2 = (!i11_reg_9738.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i11_reg_9738.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond73_fu_15906_p2() {
    exitcond73_fu_15906_p2 = (!ci10_reg_9727.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci10_reg_9727.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond74_fu_15964_p2() {
    exitcond74_fu_15964_p2 = (!co12_reg_9749.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co12_reg_9749.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond75_fu_16105_p2() {
    exitcond75_fu_16105_p2 = (!tmp_2172_reg_9782.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2172_reg_9782.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond76_fu_16052_p2() {
    exitcond76_fu_16052_p2 = (!w13_reg_9760.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w13_reg_9760.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond77_fu_16148_p2() {
    exitcond77_fu_16148_p2 = (!co16_reg_9793.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co16_reg_9793.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond78_fu_16089_p2() {
    exitcond78_fu_16089_p2 = (!h14_reg_9771.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h14_reg_9771.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond79_fu_16266_p2() {
    exitcond79_fu_16266_p2 = (!i16_reg_9816.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i16_reg_9816.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond80_fu_16250_p2() {
    exitcond80_fu_16250_p2 = (!ci17_reg_9805.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci17_reg_9805.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond81_fu_16312_p2() {
    exitcond81_fu_16312_p2 = (!co19_reg_9827.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co19_reg_9827.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond82_fu_16485_p2() {
    exitcond82_fu_16485_p2 = (!co22_reg_9860.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co22_reg_9860.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond83_fu_16360_p2() {
    exitcond83_fu_16360_p2 = (!h20_reg_9838.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h20_reg_9838.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond84_fu_16603_p2() {
    exitcond84_fu_16603_p2 = (!i18_reg_9883.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i18_reg_9883.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond85_fu_16587_p2() {
    exitcond85_fu_16587_p2 = (!ci21_reg_9872.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci21_reg_9872.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond86_fu_16442_p2() {
    exitcond86_fu_16442_p2 = (!w21_reg_9849.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w21_reg_9849.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond87_fu_16645_p2() {
    exitcond87_fu_16645_p2 = (!co25_reg_9894.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co25_reg_9894.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond88_fu_16801_p2() {
    exitcond88_fu_16801_p2 = (!i20_reg_9927.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i20_reg_9927.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond89_fu_16748_p2() {
    exitcond89_fu_16748_p2 = (!w26_reg_9905.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w26_reg_9905.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond90_fu_16813_p2() {
    exitcond90_fu_16813_p2 = (!co29_reg_9938.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co29_reg_9938.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond91_fu_16785_p2() {
    exitcond91_fu_16785_p2 = (!h27_reg_9916.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h27_reg_9916.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond92_fu_16926_p2() {
    exitcond92_fu_16926_p2 = (!tmp_2194_reg_9961.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2194_reg_9961.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond93_fu_16910_p2() {
    exitcond93_fu_16910_p2 = (!ci23_reg_9950.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci23_reg_9950.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond94_fu_16995_p2() {
    exitcond94_fu_16995_p2 = (!co32_reg_9972.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co32_reg_9972.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond95_fu_17118_p2() {
    exitcond95_fu_17118_p2 = (!co35_reg_10005.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co35_reg_10005.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond96_fu_17007_p2() {
    exitcond96_fu_17007_p2 = (!h33_reg_9983.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h33_reg_9983.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond97_fu_17291_p2() {
    exitcond97_fu_17291_p2 = (!co38_reg_10038.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co38_reg_10038.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond98_fu_17166_p2() {
    exitcond98_fu_17166_p2 = (!h36_reg_10016.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h36_reg_10016.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond99_fu_17058_p2() {
    exitcond99_fu_17058_p2 = (!w34_reg_9994.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w34_reg_9994.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond_fu_15325_p2() {
    exitcond_fu_15325_p2 = (!i_reg_9571.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_9571.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_fc_bias_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        fc_bias_V_address0 =  (sc_lv<4>) (i2_cast_reg_40235.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read())) {
        fc_bias_V_address0 = grp_fc_fu_15212_bias_V_address0.read();
    } else {
        fc_bias_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ShuffleNetV2::thread_fc_bias_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        fc_bias_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read())) {
        fc_bias_V_ce0 = grp_fc_fu_15212_bias_V_ce0.read();
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
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_2010_cast_fu_39808_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1713.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_2008_cast_fu_39646_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1622.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_1939_cast_fu_38325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1617.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_1938_cast_fu_38123_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1525.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_1864_cast_fu_36794_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1520.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_1863_cast_fu_36592_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1428.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_1788_cast_fu_35267_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        feature_buffer_192x6_address0 = grp_shuffle_96_r_p_fu_14864_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        feature_buffer_192x6_address0 = grp_shuffle_96_l_p_fu_14810_output_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        feature_buffer_192x6_address0 = grp_shuffle_96_p_fu_14662_output_V_address0.read();
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
        feature_buffer_192x6_ce0 = grp_shuffle_96_r_p_fu_14864_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        feature_buffer_192x6_ce0 = grp_shuffle_96_l_p_fu_14810_output_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        feature_buffer_192x6_ce0 = grp_shuffle_96_p_fu_14662_output_V_ce0.read();
    } else {
        feature_buffer_192x6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_192x6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        feature_buffer_192x6_d0 = grp_shuffle_96_r_p_fu_14864_output_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        feature_buffer_192x6_d0 = grp_shuffle_96_l_p_fu_14810_output_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        feature_buffer_192x6_d0 = grp_shuffle_96_p_fu_14662_output_V_d0.read();
    } else {
        feature_buffer_192x6_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_feature_buffer_192x6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        feature_buffer_192x6_we0 = grp_shuffle_96_r_p_fu_14864_output_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        feature_buffer_192x6_we0 = grp_shuffle_96_l_p_fu_14810_output_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        feature_buffer_192x6_we0 = grp_shuffle_96_p_fu_14662_output_V_we0.read();
    } else {
        feature_buffer_192x6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_48x18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_986_cast_fu_18681_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_956_cast_fu_18061_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_954_cast_fu_17867_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_912_cast_fu_17273_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_910_cast_fu_17079_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_866_cast_fu_16467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        feature_buffer_48x18_address0 = grp_shuffle_24_r_p_fu_15136_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        feature_buffer_48x18_address0 = grp_shuffle_24_l_p_fu_15082_output_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()))) {
        feature_buffer_48x18_address0 = grp_shuffle_24_p_fu_14918_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state484.read())) {
        feature_buffer_48x18_address0 = grp_subconv_3x3_16_strid_1_fu_14798_input_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        feature_buffer_48x18_address0 = grp_subconv_1x1_16p_p_fu_13962_input_V_address0.read();
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
        feature_buffer_48x18_ce0 = grp_shuffle_24_r_p_fu_15136_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        feature_buffer_48x18_ce0 = grp_shuffle_24_l_p_fu_15082_output_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()))) {
        feature_buffer_48x18_ce0 = grp_shuffle_24_p_fu_14918_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state484.read())) {
        feature_buffer_48x18_ce0 = grp_subconv_3x3_16_strid_1_fu_14798_input_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        feature_buffer_48x18_ce0 = grp_subconv_1x1_16p_p_fu_13962_input_V_ce0.read();
    } else {
        feature_buffer_48x18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_48x18_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        feature_buffer_48x18_d0 = grp_shuffle_24_r_p_fu_15136_output_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        feature_buffer_48x18_d0 = grp_shuffle_24_l_p_fu_15082_output_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()))) {
        feature_buffer_48x18_d0 = grp_shuffle_24_p_fu_14918_output_V_d0.read();
    } else {
        feature_buffer_48x18_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_feature_buffer_48x18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        feature_buffer_48x18_we0 = grp_shuffle_24_r_p_fu_15136_output_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        feature_buffer_48x18_we0 = grp_shuffle_24_l_p_fu_15082_output_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()))) {
        feature_buffer_48x18_we0 = grp_shuffle_24_p_fu_14918_output_V_we0.read();
    } else {
        feature_buffer_48x18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_96x10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1273.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1690_cast_fu_33103_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1183.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1627_cast_fu_31738_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1178.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1626_cast_fu_31536_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1088.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1547_cast_fu_30175_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1083.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1546_cast_fu_29973_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state993.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1470_cast_fu_28624_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state988.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1469_cast_fu_28422_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state898.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1393_cast_fu_27077_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state893.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1392_cast_fu_26875_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state803.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1317_cast_fu_25538_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state798.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1316_cast_fu_25336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1239_cast_fu_23979_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state703.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1238_cast_fu_23777_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state613.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1163_cast_fu_22428_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state608.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1162_cast_fu_22226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state518.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1087_cast_fu_20881_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read())) {
        feature_buffer_96x10_address0 = grp_shuffle_48_r_p_fu_15028_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read())) {
        feature_buffer_96x10_address0 = grp_shuffle_48_l_p_fu_14974_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1393.read())) {
        feature_buffer_96x10_address0 = grp_subconv_3x3_8_stride_1_fu_14786_input_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state800.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state990.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1085.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1180.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1275.read()))) {
        feature_buffer_96x10_address0 = grp_shuffle_48_p_fu_14718_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        feature_buffer_96x10_address0 = grp_subconv_1x1_8p_p_fu_13754_input_V_address0.read();
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
        feature_buffer_96x10_ce0 = grp_shuffle_48_r_p_fu_15028_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read())) {
        feature_buffer_96x10_ce0 = grp_shuffle_48_l_p_fu_14974_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1393.read())) {
        feature_buffer_96x10_ce0 = grp_subconv_3x3_8_stride_1_fu_14786_input_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state800.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state990.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1085.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1180.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1275.read()))) {
        feature_buffer_96x10_ce0 = grp_shuffle_48_p_fu_14718_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        feature_buffer_96x10_ce0 = grp_subconv_1x1_8p_p_fu_13754_input_V_ce0.read();
    } else {
        feature_buffer_96x10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_96x10_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read())) {
        feature_buffer_96x10_d0 = grp_shuffle_48_r_p_fu_15028_output_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read())) {
        feature_buffer_96x10_d0 = grp_shuffle_48_l_p_fu_14974_output_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state800.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state990.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1085.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1180.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1275.read()))) {
        feature_buffer_96x10_d0 = grp_shuffle_48_p_fu_14718_output_V_d0.read();
    } else {
        feature_buffer_96x10_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_feature_buffer_96x10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read())) {
        feature_buffer_96x10_we0 = grp_shuffle_48_r_p_fu_15028_output_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read())) {
        feature_buffer_96x10_we0 = grp_shuffle_48_l_p_fu_14974_output_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state800.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state990.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1085.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1180.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1275.read()))) {
        feature_buffer_96x10_we0 = grp_shuffle_48_p_fu_14718_output_V_we0.read();
    } else {
        feature_buffer_96x10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_avgpool_fu_15190_ap_start() {
    grp_avgpool_fu_15190_ap_start = ap_reg_grp_avgpool_fu_15190_ap_start.read();
}

void ShuffleNetV2::thread_grp_conv1_p_fu_14301_ap_start() {
    grp_conv1_p_fu_14301_ap_start = ap_reg_grp_conv1_p_fu_14301_ap_start.read();
}

void ShuffleNetV2::thread_grp_conv_last_fu_14274_ap_start() {
    grp_conv_last_fu_14274_ap_start = ap_reg_grp_conv_last_fu_14274_ap_start.read();
}

void ShuffleNetV2::thread_grp_fc_fu_15212_ap_start() {
    grp_fc_fu_15212_ap_start = ap_reg_grp_fc_fu_15212_ap_start.read();
}

void ShuffleNetV2::thread_grp_fu_18879_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state371.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond134_fu_18779_p2.read()))) {
        grp_fu_18879_ap_start = ap_const_logic_1;
    } else {
        grp_fu_18879_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_18879_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state373.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state371.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state372.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state374.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state375.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state377.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state378.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state382.read()))) {
        grp_fu_18879_ce = ap_const_logic_1;
    } else {
        grp_fu_18879_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_18879_p0() {
    grp_fu_18879_p0 = (!tmp_174_cast_cast_fu_18825_p1.read().is_01() || !tmp_169_cast_cast_reg_42410.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_174_cast_cast_fu_18825_p1.read()) + sc_biguint<9>(tmp_169_cast_cast_reg_42410.read()));
}

void ShuffleNetV2::thread_grp_fu_18879_p1() {
    grp_fu_18879_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_19660_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state428.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond145_fu_19560_p2.read()))) {
        grp_fu_19660_ap_start = ap_const_logic_1;
    } else {
        grp_fu_19660_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_19660_ce() {
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
        grp_fu_19660_ce = ap_const_logic_1;
    } else {
        grp_fu_19660_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_19660_p0() {
    grp_fu_19660_p0 = (!tmp_191_cast_cast_fu_19606_p1.read().is_01() || !tmp_183_cast_cast_reg_42670.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_191_cast_cast_fu_19606_p1.read()) + sc_biguint<9>(tmp_183_cast_cast_reg_42670.read()));
}

void ShuffleNetV2::thread_grp_fu_19660_p1() {
    grp_fu_19660_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_20441_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond156_fu_20337_p2.read()))) {
        grp_fu_20441_ap_start = ap_const_logic_1;
    } else {
        grp_fu_20441_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_20441_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state489.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state488.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state490.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state492.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state494.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state495.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state496.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state497.read()))) {
        grp_fu_20441_ce = ap_const_logic_1;
    } else {
        grp_fu_20441_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_20441_p0() {
    grp_fu_20441_p0 = (!tmp_212_cast_cast_fu_20383_p1.read().is_01() || !tmp_200_cast_cast_reg_42930.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_212_cast_cast_fu_20383_p1.read()) + sc_biguint<9>(tmp_200_cast_cast_reg_42930.read()));
}

void ShuffleNetV2::thread_grp_fu_20441_p1() {
    grp_fu_20441_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_21088_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state522.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond164_fu_20988_p2.read()))) {
        grp_fu_21088_ap_start = ap_const_logic_1;
    } else {
        grp_fu_21088_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_21088_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state524.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state531.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state522.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state523.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state525.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state527.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state528.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state529.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state530.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state532.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state533.read()))) {
        grp_fu_21088_ce = ap_const_logic_1;
    } else {
        grp_fu_21088_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_21088_p0() {
    grp_fu_21088_p0 = (!tmp_220_cast_cast_fu_21034_p1.read().is_01() || !tmp_211_cast_cast_reg_43111.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_220_cast_cast_fu_21034_p1.read()) + sc_biguint<9>(tmp_211_cast_cast_reg_43111.read()));
}

void ShuffleNetV2::thread_grp_fu_21088_p1() {
    grp_fu_21088_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_21869_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state579.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond175_fu_21769_p2.read()))) {
        grp_fu_21869_ap_start = ap_const_logic_1;
    } else {
        grp_fu_21869_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_21869_ce() {
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
        grp_fu_21869_ce = ap_const_logic_1;
    } else {
        grp_fu_21869_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_21869_p0() {
    grp_fu_21869_p0 = (!tmp_237_cast_cast_fu_21815_p1.read().is_01() || !tmp_229_cast_cast_reg_43371.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_237_cast_cast_fu_21815_p1.read()) + sc_biguint<9>(tmp_229_cast_cast_reg_43371.read()));
}

void ShuffleNetV2::thread_grp_fu_21869_p1() {
    grp_fu_21869_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_22635_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond186_fu_22535_p2.read()))) {
        grp_fu_22635_ap_start = ap_const_logic_1;
    } else {
        grp_fu_22635_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_22635_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state619.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state626.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state618.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state620.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state621.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state622.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state623.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state624.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state625.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state627.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state628.read()))) {
        grp_fu_22635_ce = ap_const_logic_1;
    } else {
        grp_fu_22635_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_22635_p0() {
    grp_fu_22635_p0 = (!tmp_249_cast_cast_fu_22581_p1.read().is_01() || !tmp_244_cast_cast_reg_43596.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_249_cast_cast_fu_22581_p1.read()) + sc_biguint<9>(tmp_244_cast_cast_reg_43596.read()));
}

void ShuffleNetV2::thread_grp_fu_22635_p1() {
    grp_fu_22635_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_23416_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state674.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond197_fu_23316_p2.read()))) {
        grp_fu_23416_ap_start = ap_const_logic_1;
    } else {
        grp_fu_23416_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_23416_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state676.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state685.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state674.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state675.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state677.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state678.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state679.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state680.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state681.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state682.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state683.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        grp_fu_23416_ce = ap_const_logic_1;
    } else {
        grp_fu_23416_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_23416_p0() {
    grp_fu_23416_p0 = (!tmp_266_cast_cast_fu_23362_p1.read().is_01() || !tmp_258_cast_cast_reg_43856.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_266_cast_cast_fu_23362_p1.read()) + sc_biguint<9>(tmp_258_cast_cast_reg_43856.read()));
}

void ShuffleNetV2::thread_grp_fu_23416_p1() {
    grp_fu_23416_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_24186_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state712.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond208_fu_24086_p2.read()))) {
        grp_fu_24186_ap_start = ap_const_logic_1;
    } else {
        grp_fu_24186_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_24186_ce() {
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
        grp_fu_24186_ce = ap_const_logic_1;
    } else {
        grp_fu_24186_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_24186_p0() {
    grp_fu_24186_p0 = (!tmp_273_cast_cast_reg_44081.read().is_01() || !tmp_278_cast_cast_fu_24132_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_273_cast_cast_reg_44081.read()) + sc_bigint<9>(tmp_278_cast_cast_fu_24132_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_24186_p1() {
    grp_fu_24186_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_24975_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state769.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond219_fu_24875_p2.read()))) {
        grp_fu_24975_ap_start = ap_const_logic_1;
    } else {
        grp_fu_24975_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_24975_ce() {
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
        grp_fu_24975_ce = ap_const_logic_1;
    } else {
        grp_fu_24975_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_24975_p0() {
    grp_fu_24975_p0 = (!tmp_295_cast_cast_fu_24921_p1.read().is_01() || !tmp_287_cast_cast_reg_44341.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_295_cast_cast_fu_24921_p1.read()) + sc_biguint<9>(tmp_287_cast_cast_reg_44341.read()));
}

void ShuffleNetV2::thread_grp_fu_24975_p1() {
    grp_fu_24975_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_25745_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state807.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond230_fu_25645_p2.read()))) {
        grp_fu_25745_ap_start = ap_const_logic_1;
    } else {
        grp_fu_25745_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_25745_ce() {
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
        grp_fu_25745_ce = ap_const_logic_1;
    } else {
        grp_fu_25745_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_25745_p0() {
    grp_fu_25745_p0 = (!tmp_307_cast_cast_fu_25691_p1.read().is_01() || !tmp_302_cast_cast_reg_44566.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_307_cast_cast_fu_25691_p1.read()) + sc_biguint<9>(tmp_302_cast_cast_reg_44566.read()));
}

void ShuffleNetV2::thread_grp_fu_25745_p1() {
    grp_fu_25745_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_26518_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state864.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond241_fu_26418_p2.read()))) {
        grp_fu_26518_ap_start = ap_const_logic_1;
    } else {
        grp_fu_26518_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_26518_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state866.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state875.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state864.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state865.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state867.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state869.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state870.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state871.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state872.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state873.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state874.read()))) {
        grp_fu_26518_ce = ap_const_logic_1;
    } else {
        grp_fu_26518_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_26518_p0() {
    grp_fu_26518_p0 = (!tmp_324_cast_cast_fu_26464_p1.read().is_01() || !tmp_316_cast_cast_reg_44826.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_324_cast_cast_fu_26464_p1.read()) + sc_biguint<9>(tmp_316_cast_cast_reg_44826.read()));
}

void ShuffleNetV2::thread_grp_fu_26518_p1() {
    grp_fu_26518_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_27284_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state902.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond252_fu_27184_p2.read()))) {
        grp_fu_27284_ap_start = ap_const_logic_1;
    } else {
        grp_fu_27284_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_27284_ce() {
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
        grp_fu_27284_ce = ap_const_logic_1;
    } else {
        grp_fu_27284_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_27284_p0() {
    grp_fu_27284_p0 = (!tmp_336_cast_cast_fu_27230_p1.read().is_01() || !tmp_331_cast_cast_reg_45051.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_336_cast_cast_fu_27230_p1.read()) + sc_biguint<9>(tmp_331_cast_cast_reg_45051.read()));
}

void ShuffleNetV2::thread_grp_fu_27284_p1() {
    grp_fu_27284_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_28065_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond263_fu_27965_p2.read()))) {
        grp_fu_28065_ap_start = ap_const_logic_1;
    } else {
        grp_fu_28065_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_28065_ce() {
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
        grp_fu_28065_ce = ap_const_logic_1;
    } else {
        grp_fu_28065_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_28065_p0() {
    grp_fu_28065_p0 = (!tmp_353_cast_cast_fu_28011_p1.read().is_01() || !tmp_345_cast_cast_reg_45311.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_353_cast_cast_fu_28011_p1.read()) + sc_biguint<9>(tmp_345_cast_cast_reg_45311.read()));
}

void ShuffleNetV2::thread_grp_fu_28065_p1() {
    grp_fu_28065_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_28831_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state997.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond274_fu_28731_p2.read()))) {
        grp_fu_28831_ap_start = ap_const_logic_1;
    } else {
        grp_fu_28831_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_28831_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state999.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1008.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state997.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state998.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1000.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1001.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1002.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1003.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1004.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1005.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1006.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1007.read()))) {
        grp_fu_28831_ce = ap_const_logic_1;
    } else {
        grp_fu_28831_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_28831_p0() {
    grp_fu_28831_p0 = (!tmp_365_cast_cast_fu_28777_p1.read().is_01() || !tmp_360_cast_cast_reg_45536.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_365_cast_cast_fu_28777_p1.read()) + sc_biguint<9>(tmp_360_cast_cast_reg_45536.read()));
}

void ShuffleNetV2::thread_grp_fu_28831_p1() {
    grp_fu_28831_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_29616_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1054.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond285_fu_29516_p2.read()))) {
        grp_fu_29616_ap_start = ap_const_logic_1;
    } else {
        grp_fu_29616_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_29616_ce() {
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
        grp_fu_29616_ce = ap_const_logic_1;
    } else {
        grp_fu_29616_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_29616_p0() {
    grp_fu_29616_p0 = (!tmp_382_cast_cast_fu_29562_p1.read().is_01() || !tmp_374_cast_cast_reg_45796.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_382_cast_cast_fu_29562_p1.read()) + sc_biguint<9>(tmp_374_cast_cast_reg_45796.read()));
}

void ShuffleNetV2::thread_grp_fu_29616_p1() {
    grp_fu_29616_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_30382_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1092.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond296_fu_30282_p2.read()))) {
        grp_fu_30382_ap_start = ap_const_logic_1;
    } else {
        grp_fu_30382_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_30382_ce() {
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
        grp_fu_30382_ce = ap_const_logic_1;
    } else {
        grp_fu_30382_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_30382_p0() {
    grp_fu_30382_p0 = (!tmp_389_cast_cast_reg_46021.read().is_01() || !tmp_394_cast_cast_fu_30328_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_389_cast_cast_reg_46021.read()) + sc_bigint<9>(tmp_394_cast_cast_fu_30328_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_30382_p1() {
    grp_fu_30382_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_31167_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1149.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond422_fu_31067_p2.read()))) {
        grp_fu_31167_ap_start = ap_const_logic_1;
    } else {
        grp_fu_31167_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_31167_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1151.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1160.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1149.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1150.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1152.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1154.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1155.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1156.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1157.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1158.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1159.read()))) {
        grp_fu_31167_ce = ap_const_logic_1;
    } else {
        grp_fu_31167_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_31167_p0() {
    grp_fu_31167_p0 = (!tmp_403_cast_cast_reg_46281.read().is_01() || !tmp_411_cast_cast_fu_31113_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_403_cast_cast_reg_46281.read()) + sc_bigint<9>(tmp_411_cast_cast_fu_31113_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_31167_p1() {
    grp_fu_31167_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_31945_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1187.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond411_fu_31845_p2.read()))) {
        grp_fu_31945_ap_start = ap_const_logic_1;
    } else {
        grp_fu_31945_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_31945_ce() {
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
        grp_fu_31945_ce = ap_const_logic_1;
    } else {
        grp_fu_31945_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_31945_p0() {
    grp_fu_31945_p0 = (!tmp_418_cast_cast_reg_46506.read().is_01() || !tmp_423_cast_cast_fu_31891_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_418_cast_cast_reg_46506.read()) + sc_bigint<9>(tmp_423_cast_cast_fu_31891_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_31945_p1() {
    grp_fu_31945_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_32742_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1244.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond400_fu_32634_p2.read()))) {
        grp_fu_32742_ap_start = ap_const_logic_1;
    } else {
        grp_fu_32742_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_32742_ce() {
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
        grp_fu_32742_ce = ap_const_logic_1;
    } else {
        grp_fu_32742_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_32742_p0() {
    grp_fu_32742_p0 = (!tmp_440_cast_cast_fu_32680_p1.read().is_01() || !tmp_432_cast_cast_reg_46766.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_440_cast_cast_fu_32680_p1.read()) + sc_biguint<9>(tmp_432_cast_cast_reg_46766.read()));
}

void ShuffleNetV2::thread_grp_fu_32742_p1() {
    grp_fu_32742_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_33289_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond392_fu_33199_p2.read()))) {
        grp_fu_33289_ap_start = ap_const_logic_1;
    } else {
        grp_fu_33289_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_33289_ce() {
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
        grp_fu_33289_ce = ap_const_logic_1;
    } else {
        grp_fu_33289_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_33289_p0() {
    grp_fu_33289_p0 = (!tmp_451_cast_cast_fu_33247_p1.read().is_01() || !tmp_446_cast_cast_reg_46937.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_451_cast_cast_fu_33247_p1.read()) + sc_biguint<10>(tmp_446_cast_cast_reg_46937.read()));
}

void ShuffleNetV2::thread_grp_fu_33289_p1() {
    grp_fu_33289_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_34058_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1336.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond381_fu_33968_p2.read()))) {
        grp_fu_34058_ap_start = ap_const_logic_1;
    } else {
        grp_fu_34058_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_34058_ce() {
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
        grp_fu_34058_ce = ap_const_logic_1;
    } else {
        grp_fu_34058_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_34058_p0() {
    grp_fu_34058_p0 = (!tmp_468_cast_cast_fu_34016_p1.read().is_01() || !tmp_460_cast_cast_reg_47197.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_468_cast_cast_fu_34016_p1.read()) + sc_biguint<10>(tmp_460_cast_cast_reg_47197.read()));
}

void ShuffleNetV2::thread_grp_fu_34058_p1() {
    grp_fu_34058_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_34827_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1396.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond370_fu_34737_p2.read()))) {
        grp_fu_34827_ap_start = ap_const_logic_1;
    } else {
        grp_fu_34827_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_34827_ce() {
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
        grp_fu_34827_ce = ap_const_logic_1;
    } else {
        grp_fu_34827_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_34827_p0() {
    grp_fu_34827_p0 = (!tmp_489_cast_cast_fu_34785_p1.read().is_01() || !tmp_477_cast_cast_reg_47457.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_489_cast_cast_fu_34785_p1.read()) + sc_biguint<10>(tmp_477_cast_cast_reg_47457.read()));
}

void ShuffleNetV2::thread_grp_fu_34827_p1() {
    grp_fu_34827_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_35462_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1432.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond362_fu_35372_p2.read()))) {
        grp_fu_35462_ap_start = ap_const_logic_1;
    } else {
        grp_fu_35462_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_35462_ce() {
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
        grp_fu_35462_ce = ap_const_logic_1;
    } else {
        grp_fu_35462_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_35462_p0() {
    grp_fu_35462_p0 = (!tmp_497_cast_cast_fu_35420_p1.read().is_01() || !tmp_488_cast_cast_reg_47638.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_497_cast_cast_fu_35420_p1.read()) + sc_biguint<10>(tmp_488_cast_cast_reg_47638.read()));
}

void ShuffleNetV2::thread_grp_fu_35462_p1() {
    grp_fu_35462_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_36223_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1490.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond351_fu_36133_p2.read()))) {
        grp_fu_36223_ap_start = ap_const_logic_1;
    } else {
        grp_fu_36223_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_36223_ce() {
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
        grp_fu_36223_ce = ap_const_logic_1;
    } else {
        grp_fu_36223_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_36223_p0() {
    grp_fu_36223_p0 = (!tmp_506_cast_cast_reg_47898.read().is_01() || !tmp_514_cast_cast_fu_36181_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_506_cast_cast_reg_47898.read()) + sc_bigint<10>(tmp_514_cast_cast_fu_36181_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_36223_p1() {
    grp_fu_36223_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_36989_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1529.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond340_fu_36899_p2.read()))) {
        grp_fu_36989_ap_start = ap_const_logic_1;
    } else {
        grp_fu_36989_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_36989_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1529.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1530.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1531.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1532.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1533.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1535.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1536.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1537.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1538.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1539.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1540.read()))) {
        grp_fu_36989_ce = ap_const_logic_1;
    } else {
        grp_fu_36989_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_36989_p0() {
    grp_fu_36989_p0 = (!tmp_526_cast_cast_fu_36947_p1.read().is_01() || !tmp_521_cast_cast_reg_48123.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_526_cast_cast_fu_36947_p1.read()) + sc_biguint<10>(tmp_521_cast_cast_reg_48123.read()));
}

void ShuffleNetV2::thread_grp_fu_36989_p1() {
    grp_fu_36989_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_37762_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1587.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond329_fu_37672_p2.read()))) {
        grp_fu_37762_ap_start = ap_const_logic_1;
    } else {
        grp_fu_37762_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_37762_ce() {
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
        grp_fu_37762_ce = ap_const_logic_1;
    } else {
        grp_fu_37762_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_37762_p0() {
    grp_fu_37762_p0 = (!tmp_543_cast_cast_fu_37720_p1.read().is_01() || !tmp_535_cast_cast_reg_48383.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_543_cast_cast_fu_37720_p1.read()) + sc_biguint<10>(tmp_535_cast_cast_reg_48383.read()));
}

void ShuffleNetV2::thread_grp_fu_37762_p1() {
    grp_fu_37762_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_38520_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1626.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond318_fu_38430_p2.read()))) {
        grp_fu_38520_ap_start = ap_const_logic_1;
    } else {
        grp_fu_38520_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_38520_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1631.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1638.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1626.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1627.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1628.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1630.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1633.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1634.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1635.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1636.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1637.read()))) {
        grp_fu_38520_ce = ap_const_logic_1;
    } else {
        grp_fu_38520_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_38520_p0() {
    grp_fu_38520_p0 = (!tmp_555_cast_cast_fu_38478_p1.read().is_01() || !tmp_550_cast_cast_reg_48608.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_555_cast_cast_fu_38478_p1.read()) + sc_biguint<10>(tmp_550_cast_cast_reg_48608.read()));
}

void ShuffleNetV2::thread_grp_fu_38520_p1() {
    grp_fu_38520_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_fu_39285_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1684.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond307_fu_39195_p2.read()))) {
        grp_fu_39285_ap_start = ap_const_logic_1;
    } else {
        grp_fu_39285_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_39285_ce() {
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
        grp_fu_39285_ce = ap_const_logic_1;
    } else {
        grp_fu_39285_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_39285_p0() {
    grp_fu_39285_p0 = (!tmp_572_cast_cast_fu_39243_p1.read().is_01() || !tmp_564_cast_cast_reg_48868.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_572_cast_cast_fu_39243_p1.read()) + sc_biguint<10>(tmp_564_cast_cast_reg_48868.read()));
}

void ShuffleNetV2::thread_grp_fu_39285_p1() {
    grp_fu_39285_p1 =  (sc_lv<6>) (ap_const_lv10_18);
}

void ShuffleNetV2::thread_grp_shuffle_24_l_p_fu_15082_ap_start() {
    grp_shuffle_24_l_p_fu_15082_ap_start = ap_reg_grp_shuffle_24_l_p_fu_15082_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_24_p_fu_14918_ap_start() {
    grp_shuffle_24_p_fu_14918_ap_start = ap_reg_grp_shuffle_24_p_fu_14918_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_24_r_p_fu_15136_ap_start() {
    grp_shuffle_24_r_p_fu_15136_ap_start = ap_reg_grp_shuffle_24_r_p_fu_15136_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_l_p_fu_14974_ap_start() {
    grp_shuffle_48_l_p_fu_14974_ap_start = ap_reg_grp_shuffle_48_l_p_fu_14974_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_p_fu_14718_ap_start() {
    grp_shuffle_48_p_fu_14718_ap_start = ap_reg_grp_shuffle_48_p_fu_14718_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_r_p_fu_15028_ap_start() {
    grp_shuffle_48_r_p_fu_15028_ap_start = ap_reg_grp_shuffle_48_r_p_fu_15028_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_l_p_fu_14810_ap_start() {
    grp_shuffle_96_l_p_fu_14810_ap_start = ap_reg_grp_shuffle_96_l_p_fu_14810_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_p_fu_14662_ap_start() {
    grp_shuffle_96_p_fu_14662_ap_start = ap_reg_grp_shuffle_96_p_fu_14662_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_r_p_fu_14864_ap_start() {
    grp_shuffle_96_r_p_fu_14864_ap_start = ap_reg_grp_shuffle_96_r_p_fu_14864_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_16_p_fu_14170_ap_start() {
    grp_subconv_1x1_16_p_fu_14170_ap_start = ap_reg_grp_subconv_1x1_16_p_fu_14170_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_16p_p_fu_13962_ap_start() {
    grp_subconv_1x1_16p_p_fu_13962_ap_start = ap_reg_grp_subconv_1x1_16p_p_fu_13962_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_32_p_fu_14066_ap_start() {
    grp_subconv_1x1_32_p_fu_14066_ap_start = ap_reg_grp_subconv_1x1_32_p_fu_14066_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_4_p_fu_13650_ap_start() {
    grp_subconv_1x1_4_p_fu_13650_ap_start = ap_reg_grp_subconv_1x1_4_p_fu_13650_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_8_p_fu_13858_ap_start() {
    grp_subconv_1x1_8_p_fu_13858_ap_start = ap_reg_grp_subconv_1x1_8_p_fu_13858_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_8p_p_fu_13754_ap_start() {
    grp_subconv_1x1_8p_p_fu_13754_ap_start = ap_reg_grp_subconv_1x1_8p_p_fu_13754_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_no_re_fu_14604_ap_start() {
    grp_subconv_3x3_16_no_re_fu_14604_ap_start = ap_reg_grp_subconv_3x3_16_no_re_fu_14604_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_strid_1_fu_14798_ap_start() {
    grp_subconv_3x3_16_strid_1_fu_14798_ap_start = ap_reg_grp_subconv_3x3_16_strid_1_fu_14798_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_strid_fu_14430_ap_start() {
    grp_subconv_3x3_16_strid_fu_14430_ap_start = ap_reg_grp_subconv_3x3_16_strid_fu_14430_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_32_strid_1_fu_14774_ap_start() {
    grp_subconv_3x3_32_strid_1_fu_14774_ap_start = ap_reg_grp_subconv_3x3_32_strid_1_fu_14774_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_32_strid_fu_14546_ap_start() {
    grp_subconv_3x3_32_strid_fu_14546_ap_start = ap_reg_grp_subconv_3x3_32_strid_fu_14546_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_4_no_rel_fu_14314_ap_start() {
    grp_subconv_3x3_4_no_rel_fu_14314_ap_start = ap_reg_grp_subconv_3x3_4_no_rel_fu_14314_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_8_no_rel_fu_14488_ap_start() {
    grp_subconv_3x3_8_no_rel_fu_14488_ap_start = ap_reg_grp_subconv_3x3_8_no_rel_fu_14488_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_8_stride_1_fu_14786_ap_start() {
    grp_subconv_3x3_8_stride_1_fu_14786_ap_start = ap_reg_grp_subconv_3x3_8_stride_1_fu_14786_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_8_stride_fu_14372_ap_start() {
    grp_subconv_3x3_8_stride_fu_14372_ap_start = ap_reg_grp_subconv_3x3_8_stride_fu_14372_ap_start.read();
}

void ShuffleNetV2::thread_h100_cast_cast_fu_30677_p1() {
    h100_cast_cast_fu_30677_p1 = esl_zext<10,2>(h95_reg_12220.read());
}

void ShuffleNetV2::thread_h100_cast_fu_30673_p1() {
    h100_cast_fu_30673_p1 = esl_zext<32,2>(h95_reg_12220.read());
}

void ShuffleNetV2::thread_h106_cast_cast_fu_32244_p1() {
    h106_cast_cast_fu_32244_p1 = esl_zext<10,2>(h101_reg_12462.read());
}

void ShuffleNetV2::thread_h106_cast_fu_32240_p1() {
    h106_cast_fu_32240_p1 = esl_zext<32,2>(h101_reg_12462.read());
}

void ShuffleNetV2::thread_h110_cast_cast_fu_33580_p1() {
    h110_cast_cast_fu_33580_p1 = esl_zext<11,2>(h105_reg_12671.read());
}

void ShuffleNetV2::thread_h110_cast_fu_33576_p1() {
    h110_cast_fu_33576_p1 = esl_zext<32,2>(h105_reg_12671.read());
}

void ShuffleNetV2::thread_h112_cast_cast_fu_34353_p1() {
    h112_cast_cast_fu_34353_p1 = esl_zext<11,2>(h107_reg_12792.read());
}

void ShuffleNetV2::thread_h112_cast_fu_34349_p1() {
    h112_cast_fu_34349_p1 = esl_zext<32,2>(h107_reg_12792.read());
}

void ShuffleNetV2::thread_h116_cast_cast_fu_35749_p1() {
    h116_cast_cast_fu_35749_p1 = esl_zext<11,2>(h111_reg_13001.read());
}

void ShuffleNetV2::thread_h116_cast_fu_35745_p1() {
    h116_cast_fu_35745_p1 = esl_zext<32,2>(h111_reg_13001.read());
}

void ShuffleNetV2::thread_h122_cast_cast_fu_37276_p1() {
    h122_cast_cast_fu_37276_p1 = esl_zext<11,2>(h117_reg_13243.read());
}

void ShuffleNetV2::thread_h122_cast_fu_37272_p1() {
    h122_cast_fu_37272_p1 = esl_zext<32,2>(h117_reg_13243.read());
}

void ShuffleNetV2::thread_h128_cast_cast_fu_38807_p1() {
    h128_cast_cast_fu_38807_p1 = esl_zext<11,2>(h123_reg_13485.read());
}

void ShuffleNetV2::thread_h128_cast_fu_38803_p1() {
    h128_cast_fu_38803_p1 = esl_zext<32,2>(h123_reg_13485.read());
}

void ShuffleNetV2::thread_h132_cast_cast_fu_39773_p1() {
    h132_cast_cast_fu_39773_p1 = esl_zext<13,3>(h127_reg_13639.read());
}

void ShuffleNetV2::thread_h14_cast_cast_fu_16075_p1() {
    h14_cast_cast_fu_16075_p1 = esl_zext<9,2>(h14_reg_9771.read());
}

void ShuffleNetV2::thread_h27_cast_cast_fu_16771_p1() {
    h27_cast_cast_fu_16771_p1 = esl_zext<9,2>(h27_reg_9916.read());
}

void ShuffleNetV2::thread_h43_cast_cast_fu_17577_p1() {
    h43_cast_cast_fu_17577_p1 = esl_zext<9,2>(h43_reg_10094.read());
}

void ShuffleNetV2::thread_h54_cast_cast_fu_18389_p1() {
    h54_cast_cast_fu_18389_p1 = esl_zext<9,2>(h49_reg_10272.read());
}

void ShuffleNetV2::thread_h58_cast_cast_fu_19166_p1() {
    h58_cast_cast_fu_19166_p1 = esl_zext<10,2>(h53_reg_10438.read());
}

void ShuffleNetV2::thread_h58_cast_fu_19162_p1() {
    h58_cast_fu_19162_p1 = esl_zext<32,2>(h53_reg_10438.read());
}

void ShuffleNetV2::thread_h60_cast_cast_fu_19951_p1() {
    h60_cast_cast_fu_19951_p1 = esl_zext<10,2>(h55_reg_10559.read());
}

void ShuffleNetV2::thread_h60_cast_fu_19947_p1() {
    h60_cast_fu_19947_p1 = esl_zext<32,2>(h55_reg_10559.read());
}

void ShuffleNetV2::thread_h64_cast_cast_fu_21375_p1() {
    h64_cast_cast_fu_21375_p1 = esl_zext<10,2>(h59_reg_10768.read());
}

void ShuffleNetV2::thread_h64_cast_fu_21371_p1() {
    h64_cast_fu_21371_p1 = esl_zext<32,2>(h59_reg_10768.read());
}

void ShuffleNetV2::thread_h70_cast_cast_fu_22922_p1() {
    h70_cast_cast_fu_22922_p1 = esl_zext<10,2>(h65_reg_11010.read());
}

void ShuffleNetV2::thread_h70_cast_fu_22918_p1() {
    h70_cast_fu_22918_p1 = esl_zext<32,2>(h65_reg_11010.read());
}

void ShuffleNetV2::thread_h76_cast_cast_fu_24485_p1() {
    h76_cast_cast_fu_24485_p1 = esl_zext<10,2>(h71_reg_11252.read());
}

void ShuffleNetV2::thread_h76_cast_fu_24481_p1() {
    h76_cast_fu_24481_p1 = esl_zext<32,2>(h71_reg_11252.read());
}

void ShuffleNetV2::thread_h7_cast_fu_15762_p1() {
    h7_cast_fu_15762_p1 = esl_zext<32,2>(h7_reg_9693.read());
}

void ShuffleNetV2::thread_h82_cast_cast_fu_26032_p1() {
    h82_cast_cast_fu_26032_p1 = esl_zext<10,2>(h77_reg_11494.read());
}

void ShuffleNetV2::thread_h82_cast_fu_26028_p1() {
    h82_cast_fu_26028_p1 = esl_zext<32,2>(h77_reg_11494.read());
}

void ShuffleNetV2::thread_h88_cast_cast_fu_27571_p1() {
    h88_cast_cast_fu_27571_p1 = esl_zext<10,2>(h83_reg_11736.read());
}

void ShuffleNetV2::thread_h88_cast_fu_27567_p1() {
    h88_cast_fu_27567_p1 = esl_zext<32,2>(h83_reg_11736.read());
}

void ShuffleNetV2::thread_h94_cast_cast_fu_29118_p1() {
    h94_cast_cast_fu_29118_p1 = esl_zext<10,2>(h89_reg_11978.read());
}

void ShuffleNetV2::thread_h94_cast_fu_29114_p1() {
    h94_cast_fu_29114_p1 = esl_zext<32,2>(h89_reg_11978.read());
}

void ShuffleNetV2::thread_h_100_fu_31629_p2() {
    h_100_fu_31629_p2 = (!h99_reg_12363.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h99_reg_12363.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_102_fu_32254_p2() {
    h_102_fu_32254_p2 = (!h101_reg_12462.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h101_reg_12462.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_103_cast_cast_fu_31476_p1() {
    h_103_cast_cast_fu_31476_p1 = esl_zext<10,4>(h_98_fu_31470_p2.read());
}

void ShuffleNetV2::thread_h_104_fu_33037_p2() {
    h_104_fu_33037_p2 = (!h103_reg_12572.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h103_reg_12572.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_105_cast_cast1_fu_31635_p1() {
    h_105_cast_cast1_fu_31635_p1 = esl_zext<10,4>(h_100_fu_31629_p2.read());
}

void ShuffleNetV2::thread_h_105_cast_cast_fu_31639_p1() {
    h_105_cast_cast_fu_31639_p1 = esl_zext<11,4>(h_100_fu_31629_p2.read());
}

void ShuffleNetV2::thread_h_106_fu_33590_p2() {
    h_106_fu_33590_p2 = (!h105_reg_12671.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h105_reg_12671.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_108_fu_34363_p2() {
    h_108_fu_34363_p2 = (!h107_reg_12792.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h107_reg_12792.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_109_cast_cast_fu_33043_p1() {
    h_109_cast_cast_fu_33043_p1 = esl_zext<10,4>(h_104_fu_33037_p2.read());
}

void ShuffleNetV2::thread_h_110_fu_35166_p2() {
    h_110_fu_35166_p2 = (!h109_reg_12902.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h109_reg_12902.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_112_fu_35759_p2() {
    h_112_fu_35759_p2 = (!h111_reg_13001.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h111_reg_13001.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_114_fu_36526_p2() {
    h_114_fu_36526_p2 = (!h113_reg_13111.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h113_reg_13111.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_115_cast_cast1_fu_35172_p1() {
    h_115_cast_cast1_fu_35172_p1 = esl_zext<12,3>(h_110_fu_35166_p2.read());
}

void ShuffleNetV2::thread_h_115_cast_cast_fu_35176_p1() {
    h_115_cast_cast_fu_35176_p1 = esl_zext<13,3>(h_110_fu_35166_p2.read());
}

void ShuffleNetV2::thread_h_116_fu_36693_p2() {
    h_116_fu_36693_p2 = (!h115_reg_13144.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h115_reg_13144.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_118_fu_37286_p2() {
    h_118_fu_37286_p2 = (!h117_reg_13243.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h117_reg_13243.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_119_cast_cast_fu_36532_p1() {
    h_119_cast_cast_fu_36532_p1 = esl_zext<12,3>(h_114_fu_36526_p2.read());
}

void ShuffleNetV2::thread_h_120_fu_38057_p2() {
    h_120_fu_38057_p2 = (!h119_reg_13353.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h119_reg_13353.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_121_cast_cast1_fu_36699_p1() {
    h_121_cast_cast1_fu_36699_p1 = esl_zext<12,3>(h_116_fu_36693_p2.read());
}

void ShuffleNetV2::thread_h_121_cast_cast_fu_36703_p1() {
    h_121_cast_cast_fu_36703_p1 = esl_zext<13,3>(h_116_fu_36693_p2.read());
}

void ShuffleNetV2::thread_h_122_fu_38224_p2() {
    h_122_fu_38224_p2 = (!h121_reg_13386.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h121_reg_13386.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_124_fu_38817_p2() {
    h_124_fu_38817_p2 = (!h123_reg_13485.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h123_reg_13485.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_125_cast_cast_fu_38063_p1() {
    h_125_cast_cast_fu_38063_p1 = esl_zext<12,3>(h_120_fu_38057_p2.read());
}

void ShuffleNetV2::thread_h_126_fu_39580_p2() {
    h_126_fu_39580_p2 = (!h125_reg_13595.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h125_reg_13595.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_127_cast_cast1_fu_38230_p1() {
    h_127_cast_cast1_fu_38230_p1 = esl_zext<12,3>(h_122_fu_38224_p2.read());
}

void ShuffleNetV2::thread_h_127_cast_cast_fu_38234_p1() {
    h_127_cast_cast_fu_38234_p1 = esl_zext<13,3>(h_122_fu_38224_p2.read());
}

void ShuffleNetV2::thread_h_128_fu_39793_p2() {
    h_128_fu_39793_p2 = (!h127_reg_13639.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h127_reg_13639.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_131_cast_cast_fu_39586_p1() {
    h_131_cast_cast_fu_39586_p1 = esl_zext<12,3>(h_126_fu_39580_p2.read());
}

void ShuffleNetV2::thread_h_133_cast_cast_fu_39799_p1() {
    h_133_cast_cast_fu_39799_p1 = esl_zext<14,3>(h_128_fu_39793_p2.read());
}

void ShuffleNetV2::thread_h_36_fu_15516_p2() {
    h_36_fu_15516_p2 = (!h_reg_9626.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(h_reg_9626.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_h_37_fu_15778_p2() {
    h_37_fu_15778_p2 = (!h7_reg_9693.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h7_reg_9693.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_38_fu_16095_p2() {
    h_38_fu_16095_p2 = (!h14_reg_9771.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h14_reg_9771.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_39_fu_16366_p2() {
    h_39_fu_16366_p2 = (!h20_reg_9838.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h20_reg_9838.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_40_fu_16791_p2() {
    h_40_fu_16791_p2 = (!h27_reg_9916.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h27_reg_9916.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_41_fu_17013_p2() {
    h_41_fu_17013_p2 = (!h33_reg_9983.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h33_reg_9983.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_42_fu_17172_p2() {
    h_42_fu_17172_p2 = (!h36_reg_10016.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h36_reg_10016.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_44_cast_cast_fu_15522_p1() {
    h_44_cast_cast_fu_15522_p1 = esl_zext<13,6>(h_36_fu_15516_p2.read());
}

void ShuffleNetV2::thread_h_44_fu_17597_p2() {
    h_44_fu_17597_p2 = (!h43_reg_10094.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h43_reg_10094.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_46_fu_17801_p2() {
    h_46_fu_17801_p2 = (!h45_reg_10161.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h45_reg_10161.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_47_cast_cast1_fu_16372_p1() {
    h_47_cast_cast1_fu_16372_p1 = esl_zext<10,5>(h_39_fu_16366_p2.read());
}

void ShuffleNetV2::thread_h_47_cast_cast_fu_16376_p1() {
    h_47_cast_cast_fu_16376_p1 = esl_zext<11,5>(h_39_fu_16366_p2.read());
}

void ShuffleNetV2::thread_h_48_fu_17960_p2() {
    h_48_fu_17960_p2 = (!h47_reg_10194.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h47_reg_10194.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_49_cast_cast_fu_17019_p1() {
    h_49_cast_cast_fu_17019_p1 = esl_zext<10,5>(h_41_fu_17013_p2.read());
}

void ShuffleNetV2::thread_h_50_cast_cast1_fu_17178_p1() {
    h_50_cast_cast1_fu_17178_p1 = esl_zext<10,5>(h_42_fu_17172_p2.read());
}

void ShuffleNetV2::thread_h_50_cast_cast_fu_17182_p1() {
    h_50_cast_cast_fu_17182_p1 = esl_zext<11,5>(h_42_fu_17172_p2.read());
}

void ShuffleNetV2::thread_h_50_fu_18409_p2() {
    h_50_fu_18409_p2 = (!h49_reg_10272.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h49_reg_10272.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_52_cast_cast_fu_17807_p1() {
    h_52_cast_cast_fu_17807_p1 = esl_zext<10,5>(h_46_fu_17801_p2.read());
}

void ShuffleNetV2::thread_h_52_fu_18615_p2() {
    h_52_fu_18615_p2 = (!h51_reg_10339.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h51_reg_10339.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_53_cast_cast1_fu_17966_p1() {
    h_53_cast_cast1_fu_17966_p1 = esl_zext<10,5>(h_48_fu_17960_p2.read());
}

void ShuffleNetV2::thread_h_53_cast_cast_fu_17970_p1() {
    h_53_cast_cast_fu_17970_p1 = esl_zext<11,5>(h_48_fu_17960_p2.read());
}

void ShuffleNetV2::thread_h_54_fu_19176_p2() {
    h_54_fu_19176_p2 = (!h53_reg_10438.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h53_reg_10438.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_56_fu_19961_p2() {
    h_56_fu_19961_p2 = (!h55_reg_10559.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h55_reg_10559.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_57_cast_cast_fu_18621_p1() {
    h_57_cast_cast_fu_18621_p1 = esl_zext<10,5>(h_52_fu_18615_p2.read());
}

void ShuffleNetV2::thread_h_58_fu_20772_p2() {
    h_58_fu_20772_p2 = (!h57_reg_10669.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h57_reg_10669.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_60_fu_21385_p2() {
    h_60_fu_21385_p2 = (!h59_reg_10768.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h59_reg_10768.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_62_fu_22160_p2() {
    h_62_fu_22160_p2 = (!h61_reg_10878.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h61_reg_10878.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_63_cast_cast1_fu_20778_p1() {
    h_63_cast_cast1_fu_20778_p1 = esl_zext<10,4>(h_58_fu_20772_p2.read());
}

}

