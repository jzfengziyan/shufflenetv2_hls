#include "subconv_1x1_4_p.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void subconv_1x1_4_p::thread_weight_15_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        weight_15_V_address1 = weight_15_V_addr_6_reg_31852.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_15_V_address1 =  (sc_lv<9>) (tmp_379_cast_fu_4540_p1.read());
    } else {
        weight_15_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_15_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        weight_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_15_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_15_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        weight_16_V_address0 =  (sc_lv<9>) (tmp_402_cast_fu_15813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_16_V_address0 =  (sc_lv<9>) (tmp_378_cast_fu_4506_p1.read());
    } else {
        weight_16_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_16_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        weight_16_V_address1 = weight_16_V_addr_6_reg_31862.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_16_V_address1 =  (sc_lv<9>) (tmp_379_cast_fu_4540_p1.read());
    } else {
        weight_16_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_16_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        weight_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_16_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_16_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        weight_17_V_address0 =  (sc_lv<9>) (tmp_402_cast_fu_15813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_17_V_address0 =  (sc_lv<9>) (tmp_378_cast_fu_4506_p1.read());
    } else {
        weight_17_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_17_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        weight_17_V_address1 = weight_17_V_addr_6_reg_31872.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_17_V_address1 =  (sc_lv<9>) (tmp_379_cast_fu_4540_p1.read());
    } else {
        weight_17_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_17_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        weight_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_17_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_17_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        weight_18_V_address0 =  (sc_lv<9>) (tmp_402_cast_fu_15813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_18_V_address0 =  (sc_lv<9>) (tmp_378_cast_fu_4506_p1.read());
    } else {
        weight_18_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_18_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        weight_18_V_address1 = weight_18_V_addr_6_reg_31882.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_18_V_address1 =  (sc_lv<9>) (tmp_379_cast_fu_4540_p1.read());
    } else {
        weight_18_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_18_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        weight_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_18_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_18_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        weight_19_V_address0 =  (sc_lv<9>) (tmp_402_cast_fu_15813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_19_V_address0 =  (sc_lv<9>) (tmp_378_cast_fu_4506_p1.read());
    } else {
        weight_19_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_19_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        weight_19_V_address1 = weight_19_V_addr_6_reg_31892.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_19_V_address1 =  (sc_lv<9>) (tmp_379_cast_fu_4540_p1.read());
    } else {
        weight_19_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_19_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        weight_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_19_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_19_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        weight_1_V_address0 =  (sc_lv<9>) (tmp_402_cast_fu_15813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_1_V_address0 =  (sc_lv<9>) (tmp_378_cast_fu_4506_p1.read());
    } else {
        weight_1_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_1_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        weight_1_V_address1 = weight_1_V_addr_6_reg_31712.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_1_V_address1 =  (sc_lv<9>) (tmp_379_cast_fu_4540_p1.read());
    } else {
        weight_1_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        weight_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_1_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_1_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        weight_20_V_address0 =  (sc_lv<9>) (tmp_402_cast_fu_15813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_20_V_address0 =  (sc_lv<9>) (tmp_378_cast_fu_4506_p1.read());
    } else {
        weight_20_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_20_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        weight_20_V_address1 = weight_20_V_addr_6_reg_31902.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_20_V_address1 =  (sc_lv<9>) (tmp_379_cast_fu_4540_p1.read());
    } else {
        weight_20_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_20_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        weight_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_20_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_20_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        weight_21_V_address0 =  (sc_lv<9>) (tmp_402_cast_fu_15813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_21_V_address0 =  (sc_lv<9>) (tmp_378_cast_fu_4506_p1.read());
    } else {
        weight_21_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_21_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        weight_21_V_address1 = weight_21_V_addr_6_reg_31912.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_21_V_address1 =  (sc_lv<9>) (tmp_379_cast_fu_4540_p1.read());
    } else {
        weight_21_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_21_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        weight_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_21_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_21_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        weight_22_V_address0 =  (sc_lv<9>) (tmp_402_cast_fu_15813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_22_V_address0 =  (sc_lv<9>) (tmp_378_cast_fu_4506_p1.read());
    } else {
        weight_22_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_22_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        weight_22_V_address1 = weight_22_V_addr_6_reg_31922.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_22_V_address1 =  (sc_lv<9>) (tmp_379_cast_fu_4540_p1.read());
    } else {
        weight_22_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_22_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        weight_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_22_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_22_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        weight_23_V_address0 =  (sc_lv<9>) (tmp_402_cast_fu_15813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_23_V_address0 =  (sc_lv<9>) (tmp_378_cast_fu_4506_p1.read());
    } else {
        weight_23_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_23_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        weight_23_V_address1 = weight_23_V_addr_6_reg_31932.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_23_V_address1 =  (sc_lv<9>) (tmp_379_cast_fu_4540_p1.read());
    } else {
        weight_23_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_23_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        weight_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_23_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_23_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        weight_2_V_address0 =  (sc_lv<9>) (tmp_402_cast_fu_15813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_2_V_address0 =  (sc_lv<9>) (tmp_378_cast_fu_4506_p1.read());
    } else {
        weight_2_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_2_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        weight_2_V_address1 = weight_2_V_addr_6_reg_31722.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_2_V_address1 =  (sc_lv<9>) (tmp_379_cast_fu_4540_p1.read());
    } else {
        weight_2_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        weight_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_2_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_2_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        weight_3_V_address0 =  (sc_lv<9>) (tmp_402_cast_fu_15813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_3_V_address0 =  (sc_lv<9>) (tmp_378_cast_fu_4506_p1.read());
    } else {
        weight_3_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_3_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        weight_3_V_address1 = weight_3_V_addr_6_reg_31732.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_3_V_address1 =  (sc_lv<9>) (tmp_379_cast_fu_4540_p1.read());
    } else {
        weight_3_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        weight_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_3_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_3_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        weight_4_V_address0 =  (sc_lv<9>) (tmp_402_cast_fu_15813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_4_V_address0 =  (sc_lv<9>) (tmp_378_cast_fu_4506_p1.read());
    } else {
        weight_4_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_4_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        weight_4_V_address1 = weight_4_V_addr_6_reg_31742.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_4_V_address1 =  (sc_lv<9>) (tmp_379_cast_fu_4540_p1.read());
    } else {
        weight_4_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        weight_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_4_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_4_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        weight_5_V_address0 =  (sc_lv<9>) (tmp_402_cast_fu_15813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_5_V_address0 =  (sc_lv<9>) (tmp_378_cast_fu_4506_p1.read());
    } else {
        weight_5_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_5_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        weight_5_V_address1 = weight_5_V_addr_6_reg_31752.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_5_V_address1 =  (sc_lv<9>) (tmp_379_cast_fu_4540_p1.read());
    } else {
        weight_5_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        weight_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_5_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_5_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        weight_6_V_address0 =  (sc_lv<9>) (tmp_402_cast_fu_15813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_6_V_address0 =  (sc_lv<9>) (tmp_378_cast_fu_4506_p1.read());
    } else {
        weight_6_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_6_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        weight_6_V_address1 = weight_6_V_addr_6_reg_31762.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_6_V_address1 =  (sc_lv<9>) (tmp_379_cast_fu_4540_p1.read());
    } else {
        weight_6_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        weight_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_6_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_6_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        weight_7_V_address0 =  (sc_lv<9>) (tmp_402_cast_fu_15813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_7_V_address0 =  (sc_lv<9>) (tmp_378_cast_fu_4506_p1.read());
    } else {
        weight_7_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_7_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        weight_7_V_address1 = weight_7_V_addr_6_reg_31772.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_7_V_address1 =  (sc_lv<9>) (tmp_379_cast_fu_4540_p1.read());
    } else {
        weight_7_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_7_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        weight_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_7_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_7_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        weight_8_V_address0 =  (sc_lv<9>) (tmp_402_cast_fu_15813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_8_V_address0 =  (sc_lv<9>) (tmp_378_cast_fu_4506_p1.read());
    } else {
        weight_8_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_8_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        weight_8_V_address1 = weight_8_V_addr_6_reg_31782.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_8_V_address1 =  (sc_lv<9>) (tmp_379_cast_fu_4540_p1.read());
    } else {
        weight_8_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_8_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        weight_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_8_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_8_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        weight_9_V_address0 =  (sc_lv<9>) (tmp_402_cast_fu_15813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_9_V_address0 =  (sc_lv<9>) (tmp_378_cast_fu_4506_p1.read());
    } else {
        weight_9_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_9_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        weight_9_V_address1 = weight_9_V_addr_6_reg_31792.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_9_V_address1 =  (sc_lv<9>) (tmp_379_cast_fu_4540_p1.read());
    } else {
        weight_9_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_9_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        weight_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_9_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_9_V_ce1 = ap_const_logic_0;
    }
}

}

