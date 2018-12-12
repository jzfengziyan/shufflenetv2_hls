#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        ShuffleConvs_0_Downs_address0 = grp_subconv_3x3_32_strid_fu_7102_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_0_Downs_address0 = grp_subconv_1x1_32_fu_7090_ShuffleConvs_0_Downs_address0.read();
    } else {
        ShuffleConvs_0_Downs_address0 = "XXXXXXXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        ShuffleConvs_0_Downs_ce0 = grp_subconv_3x3_32_strid_fu_7102_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_0_Downs_ce0 = grp_subconv_1x1_32_fu_7090_ShuffleConvs_0_Downs_ce0.read();
    } else {
        ShuffleConvs_0_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_0_Downs_we0 = grp_subconv_1x1_32_fu_7090_ShuffleConvs_0_Downs_we0.read();
    } else {
        ShuffleConvs_0_Downs_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        ShuffleConvs_1_Downs_address0 = grp_subconv_3x3_16_strid_fu_7139_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state138.read())) {
        ShuffleConvs_1_Downs_address0 = grp_subconv_1x1_16p_fu_7078_ShuffleConvs_1_Downs_address0.read();
    } else {
        ShuffleConvs_1_Downs_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        ShuffleConvs_1_Downs_ce0 = grp_subconv_3x3_16_strid_fu_7139_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state138.read())) {
        ShuffleConvs_1_Downs_ce0 = grp_subconv_1x1_16p_fu_7078_ShuffleConvs_1_Downs_ce0.read();
    } else {
        ShuffleConvs_1_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state138.read())) {
        ShuffleConvs_1_Downs_we0 = grp_subconv_1x1_16p_fu_7078_ShuffleConvs_1_Downs_we0.read();
    } else {
        ShuffleConvs_1_Downs_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state536.read())) {
        ShuffleConvs_2_Downs_address0 = grp_subconv_3x3_8_stride_fu_7176_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state524.read())) {
        ShuffleConvs_2_Downs_address0 = grp_subconv_1x1_8p_fu_7066_ShuffleConvs_2_Downs_address0.read();
    } else {
        ShuffleConvs_2_Downs_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state536.read())) {
        ShuffleConvs_2_Downs_ce0 = grp_subconv_3x3_8_stride_fu_7176_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state524.read())) {
        ShuffleConvs_2_Downs_ce0 = grp_subconv_1x1_8p_fu_7066_ShuffleConvs_2_Downs_ce0.read();
    } else {
        ShuffleConvs_2_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state524.read())) {
        ShuffleConvs_2_Downs_we0 = grp_subconv_1x1_8p_fu_7066_ShuffleConvs_2_Downs_we0.read();
    } else {
        ShuffleConvs_2_Downs_we0 = ap_const_logic_0;
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

void ShuffleNetV2::thread_ap_CS_fsm_state130() {
    ap_CS_fsm_state130 = ap_CS_fsm.read()[129];
}

void ShuffleNetV2::thread_ap_CS_fsm_state131() {
    ap_CS_fsm_state131 = ap_CS_fsm.read()[130];
}

void ShuffleNetV2::thread_ap_CS_fsm_state132() {
    ap_CS_fsm_state132 = ap_CS_fsm.read()[131];
}

void ShuffleNetV2::thread_ap_CS_fsm_state133() {
    ap_CS_fsm_state133 = ap_CS_fsm.read()[132];
}

void ShuffleNetV2::thread_ap_CS_fsm_state134() {
    ap_CS_fsm_state134 = ap_CS_fsm.read()[133];
}

void ShuffleNetV2::thread_ap_CS_fsm_state135() {
    ap_CS_fsm_state135 = ap_CS_fsm.read()[134];
}

void ShuffleNetV2::thread_ap_CS_fsm_state136() {
    ap_CS_fsm_state136 = ap_CS_fsm.read()[135];
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

void ShuffleNetV2::thread_ap_CS_fsm_state140() {
    ap_CS_fsm_state140 = ap_CS_fsm.read()[139];
}

void ShuffleNetV2::thread_ap_CS_fsm_state141() {
    ap_CS_fsm_state141 = ap_CS_fsm.read()[140];
}

void ShuffleNetV2::thread_ap_CS_fsm_state142() {
    ap_CS_fsm_state142 = ap_CS_fsm.read()[141];
}

void ShuffleNetV2::thread_ap_CS_fsm_state143() {
    ap_CS_fsm_state143 = ap_CS_fsm.read()[142];
}

void ShuffleNetV2::thread_ap_CS_fsm_state144() {
    ap_CS_fsm_state144 = ap_CS_fsm.read()[143];
}

void ShuffleNetV2::thread_ap_CS_fsm_state145() {
    ap_CS_fsm_state145 = ap_CS_fsm.read()[144];
}

void ShuffleNetV2::thread_ap_CS_fsm_state146() {
    ap_CS_fsm_state146 = ap_CS_fsm.read()[145];
}

void ShuffleNetV2::thread_ap_CS_fsm_state147() {
    ap_CS_fsm_state147 = ap_CS_fsm.read()[146];
}

void ShuffleNetV2::thread_ap_CS_fsm_state148() {
    ap_CS_fsm_state148 = ap_CS_fsm.read()[147];
}

void ShuffleNetV2::thread_ap_CS_fsm_state149() {
    ap_CS_fsm_state149 = ap_CS_fsm.read()[148];
}

void ShuffleNetV2::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void ShuffleNetV2::thread_ap_CS_fsm_state150() {
    ap_CS_fsm_state150 = ap_CS_fsm.read()[149];
}

void ShuffleNetV2::thread_ap_CS_fsm_state151() {
    ap_CS_fsm_state151 = ap_CS_fsm.read()[150];
}

void ShuffleNetV2::thread_ap_CS_fsm_state152() {
    ap_CS_fsm_state152 = ap_CS_fsm.read()[151];
}

void ShuffleNetV2::thread_ap_CS_fsm_state153() {
    ap_CS_fsm_state153 = ap_CS_fsm.read()[152];
}

void ShuffleNetV2::thread_ap_CS_fsm_state154() {
    ap_CS_fsm_state154 = ap_CS_fsm.read()[153];
}

void ShuffleNetV2::thread_ap_CS_fsm_state155() {
    ap_CS_fsm_state155 = ap_CS_fsm.read()[154];
}

void ShuffleNetV2::thread_ap_CS_fsm_state156() {
    ap_CS_fsm_state156 = ap_CS_fsm.read()[155];
}

void ShuffleNetV2::thread_ap_CS_fsm_state157() {
    ap_CS_fsm_state157 = ap_CS_fsm.read()[156];
}

void ShuffleNetV2::thread_ap_CS_fsm_state158() {
    ap_CS_fsm_state158 = ap_CS_fsm.read()[157];
}

void ShuffleNetV2::thread_ap_CS_fsm_state159() {
    ap_CS_fsm_state159 = ap_CS_fsm.read()[158];
}

void ShuffleNetV2::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void ShuffleNetV2::thread_ap_CS_fsm_state160() {
    ap_CS_fsm_state160 = ap_CS_fsm.read()[159];
}

void ShuffleNetV2::thread_ap_CS_fsm_state161() {
    ap_CS_fsm_state161 = ap_CS_fsm.read()[160];
}

void ShuffleNetV2::thread_ap_CS_fsm_state162() {
    ap_CS_fsm_state162 = ap_CS_fsm.read()[161];
}

void ShuffleNetV2::thread_ap_CS_fsm_state163() {
    ap_CS_fsm_state163 = ap_CS_fsm.read()[162];
}

void ShuffleNetV2::thread_ap_CS_fsm_state164() {
    ap_CS_fsm_state164 = ap_CS_fsm.read()[163];
}

void ShuffleNetV2::thread_ap_CS_fsm_state165() {
    ap_CS_fsm_state165 = ap_CS_fsm.read()[164];
}

void ShuffleNetV2::thread_ap_CS_fsm_state166() {
    ap_CS_fsm_state166 = ap_CS_fsm.read()[165];
}

void ShuffleNetV2::thread_ap_CS_fsm_state167() {
    ap_CS_fsm_state167 = ap_CS_fsm.read()[166];
}

void ShuffleNetV2::thread_ap_CS_fsm_state168() {
    ap_CS_fsm_state168 = ap_CS_fsm.read()[167];
}

void ShuffleNetV2::thread_ap_CS_fsm_state169() {
    ap_CS_fsm_state169 = ap_CS_fsm.read()[168];
}

void ShuffleNetV2::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
}

void ShuffleNetV2::thread_ap_CS_fsm_state170() {
    ap_CS_fsm_state170 = ap_CS_fsm.read()[169];
}

void ShuffleNetV2::thread_ap_CS_fsm_state171() {
    ap_CS_fsm_state171 = ap_CS_fsm.read()[170];
}

void ShuffleNetV2::thread_ap_CS_fsm_state172() {
    ap_CS_fsm_state172 = ap_CS_fsm.read()[171];
}

void ShuffleNetV2::thread_ap_CS_fsm_state173() {
    ap_CS_fsm_state173 = ap_CS_fsm.read()[172];
}

void ShuffleNetV2::thread_ap_CS_fsm_state174() {
    ap_CS_fsm_state174 = ap_CS_fsm.read()[173];
}

void ShuffleNetV2::thread_ap_CS_fsm_state175() {
    ap_CS_fsm_state175 = ap_CS_fsm.read()[174];
}

void ShuffleNetV2::thread_ap_CS_fsm_state176() {
    ap_CS_fsm_state176 = ap_CS_fsm.read()[175];
}

void ShuffleNetV2::thread_ap_CS_fsm_state177() {
    ap_CS_fsm_state177 = ap_CS_fsm.read()[176];
}

void ShuffleNetV2::thread_ap_CS_fsm_state178() {
    ap_CS_fsm_state178 = ap_CS_fsm.read()[177];
}

void ShuffleNetV2::thread_ap_CS_fsm_state179() {
    ap_CS_fsm_state179 = ap_CS_fsm.read()[178];
}

void ShuffleNetV2::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[17];
}

void ShuffleNetV2::thread_ap_CS_fsm_state180() {
    ap_CS_fsm_state180 = ap_CS_fsm.read()[179];
}

void ShuffleNetV2::thread_ap_CS_fsm_state181() {
    ap_CS_fsm_state181 = ap_CS_fsm.read()[180];
}

void ShuffleNetV2::thread_ap_CS_fsm_state182() {
    ap_CS_fsm_state182 = ap_CS_fsm.read()[181];
}

void ShuffleNetV2::thread_ap_CS_fsm_state183() {
    ap_CS_fsm_state183 = ap_CS_fsm.read()[182];
}

void ShuffleNetV2::thread_ap_CS_fsm_state184() {
    ap_CS_fsm_state184 = ap_CS_fsm.read()[183];
}

void ShuffleNetV2::thread_ap_CS_fsm_state185() {
    ap_CS_fsm_state185 = ap_CS_fsm.read()[184];
}

void ShuffleNetV2::thread_ap_CS_fsm_state186() {
    ap_CS_fsm_state186 = ap_CS_fsm.read()[185];
}

void ShuffleNetV2::thread_ap_CS_fsm_state187() {
    ap_CS_fsm_state187 = ap_CS_fsm.read()[186];
}

void ShuffleNetV2::thread_ap_CS_fsm_state188() {
    ap_CS_fsm_state188 = ap_CS_fsm.read()[187];
}

void ShuffleNetV2::thread_ap_CS_fsm_state189() {
    ap_CS_fsm_state189 = ap_CS_fsm.read()[188];
}

void ShuffleNetV2::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[18];
}

void ShuffleNetV2::thread_ap_CS_fsm_state190() {
    ap_CS_fsm_state190 = ap_CS_fsm.read()[189];
}

void ShuffleNetV2::thread_ap_CS_fsm_state191() {
    ap_CS_fsm_state191 = ap_CS_fsm.read()[190];
}

void ShuffleNetV2::thread_ap_CS_fsm_state192() {
    ap_CS_fsm_state192 = ap_CS_fsm.read()[191];
}

void ShuffleNetV2::thread_ap_CS_fsm_state193() {
    ap_CS_fsm_state193 = ap_CS_fsm.read()[192];
}

void ShuffleNetV2::thread_ap_CS_fsm_state194() {
    ap_CS_fsm_state194 = ap_CS_fsm.read()[193];
}

void ShuffleNetV2::thread_ap_CS_fsm_state195() {
    ap_CS_fsm_state195 = ap_CS_fsm.read()[194];
}

void ShuffleNetV2::thread_ap_CS_fsm_state196() {
    ap_CS_fsm_state196 = ap_CS_fsm.read()[195];
}

void ShuffleNetV2::thread_ap_CS_fsm_state197() {
    ap_CS_fsm_state197 = ap_CS_fsm.read()[196];
}

void ShuffleNetV2::thread_ap_CS_fsm_state198() {
    ap_CS_fsm_state198 = ap_CS_fsm.read()[197];
}

void ShuffleNetV2::thread_ap_CS_fsm_state199() {
    ap_CS_fsm_state199 = ap_CS_fsm.read()[198];
}

void ShuffleNetV2::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void ShuffleNetV2::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[19];
}

void ShuffleNetV2::thread_ap_CS_fsm_state200() {
    ap_CS_fsm_state200 = ap_CS_fsm.read()[199];
}

void ShuffleNetV2::thread_ap_CS_fsm_state201() {
    ap_CS_fsm_state201 = ap_CS_fsm.read()[200];
}

void ShuffleNetV2::thread_ap_CS_fsm_state202() {
    ap_CS_fsm_state202 = ap_CS_fsm.read()[201];
}

void ShuffleNetV2::thread_ap_CS_fsm_state203() {
    ap_CS_fsm_state203 = ap_CS_fsm.read()[202];
}

void ShuffleNetV2::thread_ap_CS_fsm_state204() {
    ap_CS_fsm_state204 = ap_CS_fsm.read()[203];
}

void ShuffleNetV2::thread_ap_CS_fsm_state205() {
    ap_CS_fsm_state205 = ap_CS_fsm.read()[204];
}

void ShuffleNetV2::thread_ap_CS_fsm_state206() {
    ap_CS_fsm_state206 = ap_CS_fsm.read()[205];
}

void ShuffleNetV2::thread_ap_CS_fsm_state207() {
    ap_CS_fsm_state207 = ap_CS_fsm.read()[206];
}

void ShuffleNetV2::thread_ap_CS_fsm_state208() {
    ap_CS_fsm_state208 = ap_CS_fsm.read()[207];
}

void ShuffleNetV2::thread_ap_CS_fsm_state209() {
    ap_CS_fsm_state209 = ap_CS_fsm.read()[208];
}

void ShuffleNetV2::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[20];
}

void ShuffleNetV2::thread_ap_CS_fsm_state210() {
    ap_CS_fsm_state210 = ap_CS_fsm.read()[209];
}

void ShuffleNetV2::thread_ap_CS_fsm_state211() {
    ap_CS_fsm_state211 = ap_CS_fsm.read()[210];
}

void ShuffleNetV2::thread_ap_CS_fsm_state212() {
    ap_CS_fsm_state212 = ap_CS_fsm.read()[211];
}

void ShuffleNetV2::thread_ap_CS_fsm_state213() {
    ap_CS_fsm_state213 = ap_CS_fsm.read()[212];
}

void ShuffleNetV2::thread_ap_CS_fsm_state214() {
    ap_CS_fsm_state214 = ap_CS_fsm.read()[213];
}

void ShuffleNetV2::thread_ap_CS_fsm_state215() {
    ap_CS_fsm_state215 = ap_CS_fsm.read()[214];
}

void ShuffleNetV2::thread_ap_CS_fsm_state216() {
    ap_CS_fsm_state216 = ap_CS_fsm.read()[215];
}

void ShuffleNetV2::thread_ap_CS_fsm_state217() {
    ap_CS_fsm_state217 = ap_CS_fsm.read()[216];
}

void ShuffleNetV2::thread_ap_CS_fsm_state218() {
    ap_CS_fsm_state218 = ap_CS_fsm.read()[217];
}

void ShuffleNetV2::thread_ap_CS_fsm_state219() {
    ap_CS_fsm_state219 = ap_CS_fsm.read()[218];
}

void ShuffleNetV2::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[21];
}

void ShuffleNetV2::thread_ap_CS_fsm_state220() {
    ap_CS_fsm_state220 = ap_CS_fsm.read()[219];
}

void ShuffleNetV2::thread_ap_CS_fsm_state221() {
    ap_CS_fsm_state221 = ap_CS_fsm.read()[220];
}

void ShuffleNetV2::thread_ap_CS_fsm_state222() {
    ap_CS_fsm_state222 = ap_CS_fsm.read()[221];
}

void ShuffleNetV2::thread_ap_CS_fsm_state223() {
    ap_CS_fsm_state223 = ap_CS_fsm.read()[222];
}

void ShuffleNetV2::thread_ap_CS_fsm_state224() {
    ap_CS_fsm_state224 = ap_CS_fsm.read()[223];
}

void ShuffleNetV2::thread_ap_CS_fsm_state225() {
    ap_CS_fsm_state225 = ap_CS_fsm.read()[224];
}

void ShuffleNetV2::thread_ap_CS_fsm_state226() {
    ap_CS_fsm_state226 = ap_CS_fsm.read()[225];
}

void ShuffleNetV2::thread_ap_CS_fsm_state227() {
    ap_CS_fsm_state227 = ap_CS_fsm.read()[226];
}

void ShuffleNetV2::thread_ap_CS_fsm_state228() {
    ap_CS_fsm_state228 = ap_CS_fsm.read()[227];
}

void ShuffleNetV2::thread_ap_CS_fsm_state229() {
    ap_CS_fsm_state229 = ap_CS_fsm.read()[228];
}

void ShuffleNetV2::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[22];
}

void ShuffleNetV2::thread_ap_CS_fsm_state230() {
    ap_CS_fsm_state230 = ap_CS_fsm.read()[229];
}

void ShuffleNetV2::thread_ap_CS_fsm_state231() {
    ap_CS_fsm_state231 = ap_CS_fsm.read()[230];
}

void ShuffleNetV2::thread_ap_CS_fsm_state232() {
    ap_CS_fsm_state232 = ap_CS_fsm.read()[231];
}

void ShuffleNetV2::thread_ap_CS_fsm_state233() {
    ap_CS_fsm_state233 = ap_CS_fsm.read()[232];
}

void ShuffleNetV2::thread_ap_CS_fsm_state234() {
    ap_CS_fsm_state234 = ap_CS_fsm.read()[233];
}

void ShuffleNetV2::thread_ap_CS_fsm_state235() {
    ap_CS_fsm_state235 = ap_CS_fsm.read()[234];
}

void ShuffleNetV2::thread_ap_CS_fsm_state236() {
    ap_CS_fsm_state236 = ap_CS_fsm.read()[235];
}

void ShuffleNetV2::thread_ap_CS_fsm_state237() {
    ap_CS_fsm_state237 = ap_CS_fsm.read()[236];
}

void ShuffleNetV2::thread_ap_CS_fsm_state238() {
    ap_CS_fsm_state238 = ap_CS_fsm.read()[237];
}

void ShuffleNetV2::thread_ap_CS_fsm_state239() {
    ap_CS_fsm_state239 = ap_CS_fsm.read()[238];
}

void ShuffleNetV2::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[23];
}

void ShuffleNetV2::thread_ap_CS_fsm_state240() {
    ap_CS_fsm_state240 = ap_CS_fsm.read()[239];
}

void ShuffleNetV2::thread_ap_CS_fsm_state241() {
    ap_CS_fsm_state241 = ap_CS_fsm.read()[240];
}

void ShuffleNetV2::thread_ap_CS_fsm_state242() {
    ap_CS_fsm_state242 = ap_CS_fsm.read()[241];
}

void ShuffleNetV2::thread_ap_CS_fsm_state243() {
    ap_CS_fsm_state243 = ap_CS_fsm.read()[242];
}

void ShuffleNetV2::thread_ap_CS_fsm_state244() {
    ap_CS_fsm_state244 = ap_CS_fsm.read()[243];
}

void ShuffleNetV2::thread_ap_CS_fsm_state245() {
    ap_CS_fsm_state245 = ap_CS_fsm.read()[244];
}

void ShuffleNetV2::thread_ap_CS_fsm_state246() {
    ap_CS_fsm_state246 = ap_CS_fsm.read()[245];
}

void ShuffleNetV2::thread_ap_CS_fsm_state247() {
    ap_CS_fsm_state247 = ap_CS_fsm.read()[246];
}

void ShuffleNetV2::thread_ap_CS_fsm_state248() {
    ap_CS_fsm_state248 = ap_CS_fsm.read()[247];
}

void ShuffleNetV2::thread_ap_CS_fsm_state249() {
    ap_CS_fsm_state249 = ap_CS_fsm.read()[248];
}

void ShuffleNetV2::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[24];
}

void ShuffleNetV2::thread_ap_CS_fsm_state250() {
    ap_CS_fsm_state250 = ap_CS_fsm.read()[249];
}

void ShuffleNetV2::thread_ap_CS_fsm_state251() {
    ap_CS_fsm_state251 = ap_CS_fsm.read()[250];
}

void ShuffleNetV2::thread_ap_CS_fsm_state252() {
    ap_CS_fsm_state252 = ap_CS_fsm.read()[251];
}

void ShuffleNetV2::thread_ap_CS_fsm_state253() {
    ap_CS_fsm_state253 = ap_CS_fsm.read()[252];
}

void ShuffleNetV2::thread_ap_CS_fsm_state254() {
    ap_CS_fsm_state254 = ap_CS_fsm.read()[253];
}

void ShuffleNetV2::thread_ap_CS_fsm_state255() {
    ap_CS_fsm_state255 = ap_CS_fsm.read()[254];
}

void ShuffleNetV2::thread_ap_CS_fsm_state256() {
    ap_CS_fsm_state256 = ap_CS_fsm.read()[255];
}

void ShuffleNetV2::thread_ap_CS_fsm_state257() {
    ap_CS_fsm_state257 = ap_CS_fsm.read()[256];
}

void ShuffleNetV2::thread_ap_CS_fsm_state258() {
    ap_CS_fsm_state258 = ap_CS_fsm.read()[257];
}

void ShuffleNetV2::thread_ap_CS_fsm_state259() {
    ap_CS_fsm_state259 = ap_CS_fsm.read()[258];
}

void ShuffleNetV2::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[25];
}

void ShuffleNetV2::thread_ap_CS_fsm_state260() {
    ap_CS_fsm_state260 = ap_CS_fsm.read()[259];
}

void ShuffleNetV2::thread_ap_CS_fsm_state261() {
    ap_CS_fsm_state261 = ap_CS_fsm.read()[260];
}

void ShuffleNetV2::thread_ap_CS_fsm_state262() {
    ap_CS_fsm_state262 = ap_CS_fsm.read()[261];
}

void ShuffleNetV2::thread_ap_CS_fsm_state263() {
    ap_CS_fsm_state263 = ap_CS_fsm.read()[262];
}

void ShuffleNetV2::thread_ap_CS_fsm_state264() {
    ap_CS_fsm_state264 = ap_CS_fsm.read()[263];
}

void ShuffleNetV2::thread_ap_CS_fsm_state265() {
    ap_CS_fsm_state265 = ap_CS_fsm.read()[264];
}

void ShuffleNetV2::thread_ap_CS_fsm_state266() {
    ap_CS_fsm_state266 = ap_CS_fsm.read()[265];
}

void ShuffleNetV2::thread_ap_CS_fsm_state267() {
    ap_CS_fsm_state267 = ap_CS_fsm.read()[266];
}

void ShuffleNetV2::thread_ap_CS_fsm_state268() {
    ap_CS_fsm_state268 = ap_CS_fsm.read()[267];
}

void ShuffleNetV2::thread_ap_CS_fsm_state269() {
    ap_CS_fsm_state269 = ap_CS_fsm.read()[268];
}

void ShuffleNetV2::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[26];
}

void ShuffleNetV2::thread_ap_CS_fsm_state270() {
    ap_CS_fsm_state270 = ap_CS_fsm.read()[269];
}

void ShuffleNetV2::thread_ap_CS_fsm_state271() {
    ap_CS_fsm_state271 = ap_CS_fsm.read()[270];
}

void ShuffleNetV2::thread_ap_CS_fsm_state272() {
    ap_CS_fsm_state272 = ap_CS_fsm.read()[271];
}

void ShuffleNetV2::thread_ap_CS_fsm_state273() {
    ap_CS_fsm_state273 = ap_CS_fsm.read()[272];
}

void ShuffleNetV2::thread_ap_CS_fsm_state274() {
    ap_CS_fsm_state274 = ap_CS_fsm.read()[273];
}

void ShuffleNetV2::thread_ap_CS_fsm_state275() {
    ap_CS_fsm_state275 = ap_CS_fsm.read()[274];
}

void ShuffleNetV2::thread_ap_CS_fsm_state276() {
    ap_CS_fsm_state276 = ap_CS_fsm.read()[275];
}

void ShuffleNetV2::thread_ap_CS_fsm_state277() {
    ap_CS_fsm_state277 = ap_CS_fsm.read()[276];
}

void ShuffleNetV2::thread_ap_CS_fsm_state278() {
    ap_CS_fsm_state278 = ap_CS_fsm.read()[277];
}

void ShuffleNetV2::thread_ap_CS_fsm_state279() {
    ap_CS_fsm_state279 = ap_CS_fsm.read()[278];
}

void ShuffleNetV2::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[27];
}

void ShuffleNetV2::thread_ap_CS_fsm_state280() {
    ap_CS_fsm_state280 = ap_CS_fsm.read()[279];
}

void ShuffleNetV2::thread_ap_CS_fsm_state281() {
    ap_CS_fsm_state281 = ap_CS_fsm.read()[280];
}

void ShuffleNetV2::thread_ap_CS_fsm_state282() {
    ap_CS_fsm_state282 = ap_CS_fsm.read()[281];
}

void ShuffleNetV2::thread_ap_CS_fsm_state283() {
    ap_CS_fsm_state283 = ap_CS_fsm.read()[282];
}

void ShuffleNetV2::thread_ap_CS_fsm_state284() {
    ap_CS_fsm_state284 = ap_CS_fsm.read()[283];
}

void ShuffleNetV2::thread_ap_CS_fsm_state285() {
    ap_CS_fsm_state285 = ap_CS_fsm.read()[284];
}

void ShuffleNetV2::thread_ap_CS_fsm_state286() {
    ap_CS_fsm_state286 = ap_CS_fsm.read()[285];
}

void ShuffleNetV2::thread_ap_CS_fsm_state287() {
    ap_CS_fsm_state287 = ap_CS_fsm.read()[286];
}

void ShuffleNetV2::thread_ap_CS_fsm_state288() {
    ap_CS_fsm_state288 = ap_CS_fsm.read()[287];
}

void ShuffleNetV2::thread_ap_CS_fsm_state289() {
    ap_CS_fsm_state289 = ap_CS_fsm.read()[288];
}

void ShuffleNetV2::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[28];
}

void ShuffleNetV2::thread_ap_CS_fsm_state290() {
    ap_CS_fsm_state290 = ap_CS_fsm.read()[289];
}

void ShuffleNetV2::thread_ap_CS_fsm_state291() {
    ap_CS_fsm_state291 = ap_CS_fsm.read()[290];
}

void ShuffleNetV2::thread_ap_CS_fsm_state292() {
    ap_CS_fsm_state292 = ap_CS_fsm.read()[291];
}

void ShuffleNetV2::thread_ap_CS_fsm_state293() {
    ap_CS_fsm_state293 = ap_CS_fsm.read()[292];
}

void ShuffleNetV2::thread_ap_CS_fsm_state294() {
    ap_CS_fsm_state294 = ap_CS_fsm.read()[293];
}

void ShuffleNetV2::thread_ap_CS_fsm_state295() {
    ap_CS_fsm_state295 = ap_CS_fsm.read()[294];
}

void ShuffleNetV2::thread_ap_CS_fsm_state296() {
    ap_CS_fsm_state296 = ap_CS_fsm.read()[295];
}

void ShuffleNetV2::thread_ap_CS_fsm_state297() {
    ap_CS_fsm_state297 = ap_CS_fsm.read()[296];
}

void ShuffleNetV2::thread_ap_CS_fsm_state298() {
    ap_CS_fsm_state298 = ap_CS_fsm.read()[297];
}

void ShuffleNetV2::thread_ap_CS_fsm_state299() {
    ap_CS_fsm_state299 = ap_CS_fsm.read()[298];
}

void ShuffleNetV2::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void ShuffleNetV2::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[29];
}

void ShuffleNetV2::thread_ap_CS_fsm_state300() {
    ap_CS_fsm_state300 = ap_CS_fsm.read()[299];
}

void ShuffleNetV2::thread_ap_CS_fsm_state301() {
    ap_CS_fsm_state301 = ap_CS_fsm.read()[300];
}

void ShuffleNetV2::thread_ap_CS_fsm_state302() {
    ap_CS_fsm_state302 = ap_CS_fsm.read()[301];
}

void ShuffleNetV2::thread_ap_CS_fsm_state303() {
    ap_CS_fsm_state303 = ap_CS_fsm.read()[302];
}

void ShuffleNetV2::thread_ap_CS_fsm_state304() {
    ap_CS_fsm_state304 = ap_CS_fsm.read()[303];
}

void ShuffleNetV2::thread_ap_CS_fsm_state305() {
    ap_CS_fsm_state305 = ap_CS_fsm.read()[304];
}

void ShuffleNetV2::thread_ap_CS_fsm_state306() {
    ap_CS_fsm_state306 = ap_CS_fsm.read()[305];
}

void ShuffleNetV2::thread_ap_CS_fsm_state307() {
    ap_CS_fsm_state307 = ap_CS_fsm.read()[306];
}

void ShuffleNetV2::thread_ap_CS_fsm_state308() {
    ap_CS_fsm_state308 = ap_CS_fsm.read()[307];
}

void ShuffleNetV2::thread_ap_CS_fsm_state309() {
    ap_CS_fsm_state309 = ap_CS_fsm.read()[308];
}

void ShuffleNetV2::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[30];
}

void ShuffleNetV2::thread_ap_CS_fsm_state310() {
    ap_CS_fsm_state310 = ap_CS_fsm.read()[309];
}

void ShuffleNetV2::thread_ap_CS_fsm_state311() {
    ap_CS_fsm_state311 = ap_CS_fsm.read()[310];
}

void ShuffleNetV2::thread_ap_CS_fsm_state312() {
    ap_CS_fsm_state312 = ap_CS_fsm.read()[311];
}

void ShuffleNetV2::thread_ap_CS_fsm_state313() {
    ap_CS_fsm_state313 = ap_CS_fsm.read()[312];
}

void ShuffleNetV2::thread_ap_CS_fsm_state314() {
    ap_CS_fsm_state314 = ap_CS_fsm.read()[313];
}

void ShuffleNetV2::thread_ap_CS_fsm_state315() {
    ap_CS_fsm_state315 = ap_CS_fsm.read()[314];
}

void ShuffleNetV2::thread_ap_CS_fsm_state316() {
    ap_CS_fsm_state316 = ap_CS_fsm.read()[315];
}

void ShuffleNetV2::thread_ap_CS_fsm_state317() {
    ap_CS_fsm_state317 = ap_CS_fsm.read()[316];
}

void ShuffleNetV2::thread_ap_CS_fsm_state318() {
    ap_CS_fsm_state318 = ap_CS_fsm.read()[317];
}

void ShuffleNetV2::thread_ap_CS_fsm_state319() {
    ap_CS_fsm_state319 = ap_CS_fsm.read()[318];
}

void ShuffleNetV2::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[31];
}

void ShuffleNetV2::thread_ap_CS_fsm_state320() {
    ap_CS_fsm_state320 = ap_CS_fsm.read()[319];
}

void ShuffleNetV2::thread_ap_CS_fsm_state321() {
    ap_CS_fsm_state321 = ap_CS_fsm.read()[320];
}

void ShuffleNetV2::thread_ap_CS_fsm_state322() {
    ap_CS_fsm_state322 = ap_CS_fsm.read()[321];
}

void ShuffleNetV2::thread_ap_CS_fsm_state323() {
    ap_CS_fsm_state323 = ap_CS_fsm.read()[322];
}

void ShuffleNetV2::thread_ap_CS_fsm_state324() {
    ap_CS_fsm_state324 = ap_CS_fsm.read()[323];
}

void ShuffleNetV2::thread_ap_CS_fsm_state325() {
    ap_CS_fsm_state325 = ap_CS_fsm.read()[324];
}

void ShuffleNetV2::thread_ap_CS_fsm_state326() {
    ap_CS_fsm_state326 = ap_CS_fsm.read()[325];
}

void ShuffleNetV2::thread_ap_CS_fsm_state327() {
    ap_CS_fsm_state327 = ap_CS_fsm.read()[326];
}

void ShuffleNetV2::thread_ap_CS_fsm_state328() {
    ap_CS_fsm_state328 = ap_CS_fsm.read()[327];
}

void ShuffleNetV2::thread_ap_CS_fsm_state329() {
    ap_CS_fsm_state329 = ap_CS_fsm.read()[328];
}

void ShuffleNetV2::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[32];
}

void ShuffleNetV2::thread_ap_CS_fsm_state330() {
    ap_CS_fsm_state330 = ap_CS_fsm.read()[329];
}

void ShuffleNetV2::thread_ap_CS_fsm_state331() {
    ap_CS_fsm_state331 = ap_CS_fsm.read()[330];
}

void ShuffleNetV2::thread_ap_CS_fsm_state332() {
    ap_CS_fsm_state332 = ap_CS_fsm.read()[331];
}

void ShuffleNetV2::thread_ap_CS_fsm_state333() {
    ap_CS_fsm_state333 = ap_CS_fsm.read()[332];
}

void ShuffleNetV2::thread_ap_CS_fsm_state334() {
    ap_CS_fsm_state334 = ap_CS_fsm.read()[333];
}

void ShuffleNetV2::thread_ap_CS_fsm_state335() {
    ap_CS_fsm_state335 = ap_CS_fsm.read()[334];
}

void ShuffleNetV2::thread_ap_CS_fsm_state336() {
    ap_CS_fsm_state336 = ap_CS_fsm.read()[335];
}

void ShuffleNetV2::thread_ap_CS_fsm_state337() {
    ap_CS_fsm_state337 = ap_CS_fsm.read()[336];
}

void ShuffleNetV2::thread_ap_CS_fsm_state338() {
    ap_CS_fsm_state338 = ap_CS_fsm.read()[337];
}

void ShuffleNetV2::thread_ap_CS_fsm_state339() {
    ap_CS_fsm_state339 = ap_CS_fsm.read()[338];
}

void ShuffleNetV2::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[33];
}

void ShuffleNetV2::thread_ap_CS_fsm_state340() {
    ap_CS_fsm_state340 = ap_CS_fsm.read()[339];
}

void ShuffleNetV2::thread_ap_CS_fsm_state341() {
    ap_CS_fsm_state341 = ap_CS_fsm.read()[340];
}

void ShuffleNetV2::thread_ap_CS_fsm_state342() {
    ap_CS_fsm_state342 = ap_CS_fsm.read()[341];
}

void ShuffleNetV2::thread_ap_CS_fsm_state343() {
    ap_CS_fsm_state343 = ap_CS_fsm.read()[342];
}

void ShuffleNetV2::thread_ap_CS_fsm_state344() {
    ap_CS_fsm_state344 = ap_CS_fsm.read()[343];
}

void ShuffleNetV2::thread_ap_CS_fsm_state345() {
    ap_CS_fsm_state345 = ap_CS_fsm.read()[344];
}

void ShuffleNetV2::thread_ap_CS_fsm_state346() {
    ap_CS_fsm_state346 = ap_CS_fsm.read()[345];
}

void ShuffleNetV2::thread_ap_CS_fsm_state347() {
    ap_CS_fsm_state347 = ap_CS_fsm.read()[346];
}

void ShuffleNetV2::thread_ap_CS_fsm_state348() {
    ap_CS_fsm_state348 = ap_CS_fsm.read()[347];
}

void ShuffleNetV2::thread_ap_CS_fsm_state349() {
    ap_CS_fsm_state349 = ap_CS_fsm.read()[348];
}

void ShuffleNetV2::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[34];
}

void ShuffleNetV2::thread_ap_CS_fsm_state350() {
    ap_CS_fsm_state350 = ap_CS_fsm.read()[349];
}

void ShuffleNetV2::thread_ap_CS_fsm_state351() {
    ap_CS_fsm_state351 = ap_CS_fsm.read()[350];
}

void ShuffleNetV2::thread_ap_CS_fsm_state352() {
    ap_CS_fsm_state352 = ap_CS_fsm.read()[351];
}

void ShuffleNetV2::thread_ap_CS_fsm_state353() {
    ap_CS_fsm_state353 = ap_CS_fsm.read()[352];
}

void ShuffleNetV2::thread_ap_CS_fsm_state354() {
    ap_CS_fsm_state354 = ap_CS_fsm.read()[353];
}

void ShuffleNetV2::thread_ap_CS_fsm_state355() {
    ap_CS_fsm_state355 = ap_CS_fsm.read()[354];
}

void ShuffleNetV2::thread_ap_CS_fsm_state356() {
    ap_CS_fsm_state356 = ap_CS_fsm.read()[355];
}

void ShuffleNetV2::thread_ap_CS_fsm_state357() {
    ap_CS_fsm_state357 = ap_CS_fsm.read()[356];
}

void ShuffleNetV2::thread_ap_CS_fsm_state358() {
    ap_CS_fsm_state358 = ap_CS_fsm.read()[357];
}

void ShuffleNetV2::thread_ap_CS_fsm_state359() {
    ap_CS_fsm_state359 = ap_CS_fsm.read()[358];
}

void ShuffleNetV2::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[35];
}

void ShuffleNetV2::thread_ap_CS_fsm_state360() {
    ap_CS_fsm_state360 = ap_CS_fsm.read()[359];
}

void ShuffleNetV2::thread_ap_CS_fsm_state361() {
    ap_CS_fsm_state361 = ap_CS_fsm.read()[360];
}

void ShuffleNetV2::thread_ap_CS_fsm_state362() {
    ap_CS_fsm_state362 = ap_CS_fsm.read()[361];
}

void ShuffleNetV2::thread_ap_CS_fsm_state363() {
    ap_CS_fsm_state363 = ap_CS_fsm.read()[362];
}

void ShuffleNetV2::thread_ap_CS_fsm_state364() {
    ap_CS_fsm_state364 = ap_CS_fsm.read()[363];
}

void ShuffleNetV2::thread_ap_CS_fsm_state365() {
    ap_CS_fsm_state365 = ap_CS_fsm.read()[364];
}

void ShuffleNetV2::thread_ap_CS_fsm_state366() {
    ap_CS_fsm_state366 = ap_CS_fsm.read()[365];
}

void ShuffleNetV2::thread_ap_CS_fsm_state367() {
    ap_CS_fsm_state367 = ap_CS_fsm.read()[366];
}

void ShuffleNetV2::thread_ap_CS_fsm_state368() {
    ap_CS_fsm_state368 = ap_CS_fsm.read()[367];
}

void ShuffleNetV2::thread_ap_CS_fsm_state369() {
    ap_CS_fsm_state369 = ap_CS_fsm.read()[368];
}

void ShuffleNetV2::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[36];
}

void ShuffleNetV2::thread_ap_CS_fsm_state370() {
    ap_CS_fsm_state370 = ap_CS_fsm.read()[369];
}

void ShuffleNetV2::thread_ap_CS_fsm_state371() {
    ap_CS_fsm_state371 = ap_CS_fsm.read()[370];
}

void ShuffleNetV2::thread_ap_CS_fsm_state372() {
    ap_CS_fsm_state372 = ap_CS_fsm.read()[371];
}

void ShuffleNetV2::thread_ap_CS_fsm_state373() {
    ap_CS_fsm_state373 = ap_CS_fsm.read()[372];
}

void ShuffleNetV2::thread_ap_CS_fsm_state374() {
    ap_CS_fsm_state374 = ap_CS_fsm.read()[373];
}

void ShuffleNetV2::thread_ap_CS_fsm_state375() {
    ap_CS_fsm_state375 = ap_CS_fsm.read()[374];
}

void ShuffleNetV2::thread_ap_CS_fsm_state376() {
    ap_CS_fsm_state376 = ap_CS_fsm.read()[375];
}

void ShuffleNetV2::thread_ap_CS_fsm_state377() {
    ap_CS_fsm_state377 = ap_CS_fsm.read()[376];
}

void ShuffleNetV2::thread_ap_CS_fsm_state378() {
    ap_CS_fsm_state378 = ap_CS_fsm.read()[377];
}

void ShuffleNetV2::thread_ap_CS_fsm_state379() {
    ap_CS_fsm_state379 = ap_CS_fsm.read()[378];
}

void ShuffleNetV2::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[37];
}

void ShuffleNetV2::thread_ap_CS_fsm_state380() {
    ap_CS_fsm_state380 = ap_CS_fsm.read()[379];
}

void ShuffleNetV2::thread_ap_CS_fsm_state381() {
    ap_CS_fsm_state381 = ap_CS_fsm.read()[380];
}

void ShuffleNetV2::thread_ap_CS_fsm_state382() {
    ap_CS_fsm_state382 = ap_CS_fsm.read()[381];
}

void ShuffleNetV2::thread_ap_CS_fsm_state383() {
    ap_CS_fsm_state383 = ap_CS_fsm.read()[382];
}

void ShuffleNetV2::thread_ap_CS_fsm_state384() {
    ap_CS_fsm_state384 = ap_CS_fsm.read()[383];
}

void ShuffleNetV2::thread_ap_CS_fsm_state385() {
    ap_CS_fsm_state385 = ap_CS_fsm.read()[384];
}

void ShuffleNetV2::thread_ap_CS_fsm_state386() {
    ap_CS_fsm_state386 = ap_CS_fsm.read()[385];
}

void ShuffleNetV2::thread_ap_CS_fsm_state387() {
    ap_CS_fsm_state387 = ap_CS_fsm.read()[386];
}

void ShuffleNetV2::thread_ap_CS_fsm_state388() {
    ap_CS_fsm_state388 = ap_CS_fsm.read()[387];
}

void ShuffleNetV2::thread_ap_CS_fsm_state389() {
    ap_CS_fsm_state389 = ap_CS_fsm.read()[388];
}

void ShuffleNetV2::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[38];
}

void ShuffleNetV2::thread_ap_CS_fsm_state390() {
    ap_CS_fsm_state390 = ap_CS_fsm.read()[389];
}

void ShuffleNetV2::thread_ap_CS_fsm_state391() {
    ap_CS_fsm_state391 = ap_CS_fsm.read()[390];
}

void ShuffleNetV2::thread_ap_CS_fsm_state392() {
    ap_CS_fsm_state392 = ap_CS_fsm.read()[391];
}

void ShuffleNetV2::thread_ap_CS_fsm_state393() {
    ap_CS_fsm_state393 = ap_CS_fsm.read()[392];
}

void ShuffleNetV2::thread_ap_CS_fsm_state394() {
    ap_CS_fsm_state394 = ap_CS_fsm.read()[393];
}

void ShuffleNetV2::thread_ap_CS_fsm_state395() {
    ap_CS_fsm_state395 = ap_CS_fsm.read()[394];
}

void ShuffleNetV2::thread_ap_CS_fsm_state396() {
    ap_CS_fsm_state396 = ap_CS_fsm.read()[395];
}

void ShuffleNetV2::thread_ap_CS_fsm_state397() {
    ap_CS_fsm_state397 = ap_CS_fsm.read()[396];
}

void ShuffleNetV2::thread_ap_CS_fsm_state398() {
    ap_CS_fsm_state398 = ap_CS_fsm.read()[397];
}

void ShuffleNetV2::thread_ap_CS_fsm_state399() {
    ap_CS_fsm_state399 = ap_CS_fsm.read()[398];
}

void ShuffleNetV2::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void ShuffleNetV2::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[39];
}

void ShuffleNetV2::thread_ap_CS_fsm_state400() {
    ap_CS_fsm_state400 = ap_CS_fsm.read()[399];
}

void ShuffleNetV2::thread_ap_CS_fsm_state401() {
    ap_CS_fsm_state401 = ap_CS_fsm.read()[400];
}

void ShuffleNetV2::thread_ap_CS_fsm_state402() {
    ap_CS_fsm_state402 = ap_CS_fsm.read()[401];
}

void ShuffleNetV2::thread_ap_CS_fsm_state403() {
    ap_CS_fsm_state403 = ap_CS_fsm.read()[402];
}

void ShuffleNetV2::thread_ap_CS_fsm_state404() {
    ap_CS_fsm_state404 = ap_CS_fsm.read()[403];
}

void ShuffleNetV2::thread_ap_CS_fsm_state405() {
    ap_CS_fsm_state405 = ap_CS_fsm.read()[404];
}

void ShuffleNetV2::thread_ap_CS_fsm_state406() {
    ap_CS_fsm_state406 = ap_CS_fsm.read()[405];
}

void ShuffleNetV2::thread_ap_CS_fsm_state407() {
    ap_CS_fsm_state407 = ap_CS_fsm.read()[406];
}

void ShuffleNetV2::thread_ap_CS_fsm_state408() {
    ap_CS_fsm_state408 = ap_CS_fsm.read()[407];
}

void ShuffleNetV2::thread_ap_CS_fsm_state409() {
    ap_CS_fsm_state409 = ap_CS_fsm.read()[408];
}

void ShuffleNetV2::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[40];
}

void ShuffleNetV2::thread_ap_CS_fsm_state410() {
    ap_CS_fsm_state410 = ap_CS_fsm.read()[409];
}

void ShuffleNetV2::thread_ap_CS_fsm_state411() {
    ap_CS_fsm_state411 = ap_CS_fsm.read()[410];
}

void ShuffleNetV2::thread_ap_CS_fsm_state412() {
    ap_CS_fsm_state412 = ap_CS_fsm.read()[411];
}

void ShuffleNetV2::thread_ap_CS_fsm_state413() {
    ap_CS_fsm_state413 = ap_CS_fsm.read()[412];
}

void ShuffleNetV2::thread_ap_CS_fsm_state414() {
    ap_CS_fsm_state414 = ap_CS_fsm.read()[413];
}

void ShuffleNetV2::thread_ap_CS_fsm_state415() {
    ap_CS_fsm_state415 = ap_CS_fsm.read()[414];
}

void ShuffleNetV2::thread_ap_CS_fsm_state416() {
    ap_CS_fsm_state416 = ap_CS_fsm.read()[415];
}

void ShuffleNetV2::thread_ap_CS_fsm_state417() {
    ap_CS_fsm_state417 = ap_CS_fsm.read()[416];
}

void ShuffleNetV2::thread_ap_CS_fsm_state418() {
    ap_CS_fsm_state418 = ap_CS_fsm.read()[417];
}

void ShuffleNetV2::thread_ap_CS_fsm_state419() {
    ap_CS_fsm_state419 = ap_CS_fsm.read()[418];
}

void ShuffleNetV2::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[41];
}

void ShuffleNetV2::thread_ap_CS_fsm_state420() {
    ap_CS_fsm_state420 = ap_CS_fsm.read()[419];
}

void ShuffleNetV2::thread_ap_CS_fsm_state421() {
    ap_CS_fsm_state421 = ap_CS_fsm.read()[420];
}

void ShuffleNetV2::thread_ap_CS_fsm_state422() {
    ap_CS_fsm_state422 = ap_CS_fsm.read()[421];
}

void ShuffleNetV2::thread_ap_CS_fsm_state423() {
    ap_CS_fsm_state423 = ap_CS_fsm.read()[422];
}

void ShuffleNetV2::thread_ap_CS_fsm_state424() {
    ap_CS_fsm_state424 = ap_CS_fsm.read()[423];
}

void ShuffleNetV2::thread_ap_CS_fsm_state425() {
    ap_CS_fsm_state425 = ap_CS_fsm.read()[424];
}

void ShuffleNetV2::thread_ap_CS_fsm_state426() {
    ap_CS_fsm_state426 = ap_CS_fsm.read()[425];
}

void ShuffleNetV2::thread_ap_CS_fsm_state427() {
    ap_CS_fsm_state427 = ap_CS_fsm.read()[426];
}

void ShuffleNetV2::thread_ap_CS_fsm_state428() {
    ap_CS_fsm_state428 = ap_CS_fsm.read()[427];
}

void ShuffleNetV2::thread_ap_CS_fsm_state429() {
    ap_CS_fsm_state429 = ap_CS_fsm.read()[428];
}

void ShuffleNetV2::thread_ap_CS_fsm_state43() {
    ap_CS_fsm_state43 = ap_CS_fsm.read()[42];
}

void ShuffleNetV2::thread_ap_CS_fsm_state430() {
    ap_CS_fsm_state430 = ap_CS_fsm.read()[429];
}

void ShuffleNetV2::thread_ap_CS_fsm_state431() {
    ap_CS_fsm_state431 = ap_CS_fsm.read()[430];
}

void ShuffleNetV2::thread_ap_CS_fsm_state432() {
    ap_CS_fsm_state432 = ap_CS_fsm.read()[431];
}

void ShuffleNetV2::thread_ap_CS_fsm_state433() {
    ap_CS_fsm_state433 = ap_CS_fsm.read()[432];
}

void ShuffleNetV2::thread_ap_CS_fsm_state434() {
    ap_CS_fsm_state434 = ap_CS_fsm.read()[433];
}

void ShuffleNetV2::thread_ap_CS_fsm_state435() {
    ap_CS_fsm_state435 = ap_CS_fsm.read()[434];
}

void ShuffleNetV2::thread_ap_CS_fsm_state436() {
    ap_CS_fsm_state436 = ap_CS_fsm.read()[435];
}

void ShuffleNetV2::thread_ap_CS_fsm_state437() {
    ap_CS_fsm_state437 = ap_CS_fsm.read()[436];
}

void ShuffleNetV2::thread_ap_CS_fsm_state438() {
    ap_CS_fsm_state438 = ap_CS_fsm.read()[437];
}

void ShuffleNetV2::thread_ap_CS_fsm_state439() {
    ap_CS_fsm_state439 = ap_CS_fsm.read()[438];
}

void ShuffleNetV2::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[43];
}

void ShuffleNetV2::thread_ap_CS_fsm_state440() {
    ap_CS_fsm_state440 = ap_CS_fsm.read()[439];
}

void ShuffleNetV2::thread_ap_CS_fsm_state441() {
    ap_CS_fsm_state441 = ap_CS_fsm.read()[440];
}

void ShuffleNetV2::thread_ap_CS_fsm_state442() {
    ap_CS_fsm_state442 = ap_CS_fsm.read()[441];
}

void ShuffleNetV2::thread_ap_CS_fsm_state443() {
    ap_CS_fsm_state443 = ap_CS_fsm.read()[442];
}

void ShuffleNetV2::thread_ap_CS_fsm_state444() {
    ap_CS_fsm_state444 = ap_CS_fsm.read()[443];
}

void ShuffleNetV2::thread_ap_CS_fsm_state445() {
    ap_CS_fsm_state445 = ap_CS_fsm.read()[444];
}

void ShuffleNetV2::thread_ap_CS_fsm_state446() {
    ap_CS_fsm_state446 = ap_CS_fsm.read()[445];
}

void ShuffleNetV2::thread_ap_CS_fsm_state447() {
    ap_CS_fsm_state447 = ap_CS_fsm.read()[446];
}

void ShuffleNetV2::thread_ap_CS_fsm_state448() {
    ap_CS_fsm_state448 = ap_CS_fsm.read()[447];
}

void ShuffleNetV2::thread_ap_CS_fsm_state449() {
    ap_CS_fsm_state449 = ap_CS_fsm.read()[448];
}

void ShuffleNetV2::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[44];
}

void ShuffleNetV2::thread_ap_CS_fsm_state450() {
    ap_CS_fsm_state450 = ap_CS_fsm.read()[449];
}

void ShuffleNetV2::thread_ap_CS_fsm_state451() {
    ap_CS_fsm_state451 = ap_CS_fsm.read()[450];
}

void ShuffleNetV2::thread_ap_CS_fsm_state452() {
    ap_CS_fsm_state452 = ap_CS_fsm.read()[451];
}

void ShuffleNetV2::thread_ap_CS_fsm_state453() {
    ap_CS_fsm_state453 = ap_CS_fsm.read()[452];
}

void ShuffleNetV2::thread_ap_CS_fsm_state454() {
    ap_CS_fsm_state454 = ap_CS_fsm.read()[453];
}

void ShuffleNetV2::thread_ap_CS_fsm_state455() {
    ap_CS_fsm_state455 = ap_CS_fsm.read()[454];
}

void ShuffleNetV2::thread_ap_CS_fsm_state456() {
    ap_CS_fsm_state456 = ap_CS_fsm.read()[455];
}

void ShuffleNetV2::thread_ap_CS_fsm_state457() {
    ap_CS_fsm_state457 = ap_CS_fsm.read()[456];
}

void ShuffleNetV2::thread_ap_CS_fsm_state458() {
    ap_CS_fsm_state458 = ap_CS_fsm.read()[457];
}

void ShuffleNetV2::thread_ap_CS_fsm_state459() {
    ap_CS_fsm_state459 = ap_CS_fsm.read()[458];
}

void ShuffleNetV2::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[45];
}

void ShuffleNetV2::thread_ap_CS_fsm_state460() {
    ap_CS_fsm_state460 = ap_CS_fsm.read()[459];
}

void ShuffleNetV2::thread_ap_CS_fsm_state461() {
    ap_CS_fsm_state461 = ap_CS_fsm.read()[460];
}

void ShuffleNetV2::thread_ap_CS_fsm_state462() {
    ap_CS_fsm_state462 = ap_CS_fsm.read()[461];
}

void ShuffleNetV2::thread_ap_CS_fsm_state463() {
    ap_CS_fsm_state463 = ap_CS_fsm.read()[462];
}

void ShuffleNetV2::thread_ap_CS_fsm_state464() {
    ap_CS_fsm_state464 = ap_CS_fsm.read()[463];
}

void ShuffleNetV2::thread_ap_CS_fsm_state465() {
    ap_CS_fsm_state465 = ap_CS_fsm.read()[464];
}

void ShuffleNetV2::thread_ap_CS_fsm_state466() {
    ap_CS_fsm_state466 = ap_CS_fsm.read()[465];
}

void ShuffleNetV2::thread_ap_CS_fsm_state467() {
    ap_CS_fsm_state467 = ap_CS_fsm.read()[466];
}

void ShuffleNetV2::thread_ap_CS_fsm_state468() {
    ap_CS_fsm_state468 = ap_CS_fsm.read()[467];
}

void ShuffleNetV2::thread_ap_CS_fsm_state469() {
    ap_CS_fsm_state469 = ap_CS_fsm.read()[468];
}

void ShuffleNetV2::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[46];
}

void ShuffleNetV2::thread_ap_CS_fsm_state470() {
    ap_CS_fsm_state470 = ap_CS_fsm.read()[469];
}

void ShuffleNetV2::thread_ap_CS_fsm_state471() {
    ap_CS_fsm_state471 = ap_CS_fsm.read()[470];
}

void ShuffleNetV2::thread_ap_CS_fsm_state472() {
    ap_CS_fsm_state472 = ap_CS_fsm.read()[471];
}

void ShuffleNetV2::thread_ap_CS_fsm_state473() {
    ap_CS_fsm_state473 = ap_CS_fsm.read()[472];
}

void ShuffleNetV2::thread_ap_CS_fsm_state474() {
    ap_CS_fsm_state474 = ap_CS_fsm.read()[473];
}

void ShuffleNetV2::thread_ap_CS_fsm_state475() {
    ap_CS_fsm_state475 = ap_CS_fsm.read()[474];
}

void ShuffleNetV2::thread_ap_CS_fsm_state476() {
    ap_CS_fsm_state476 = ap_CS_fsm.read()[475];
}

void ShuffleNetV2::thread_ap_CS_fsm_state477() {
    ap_CS_fsm_state477 = ap_CS_fsm.read()[476];
}

void ShuffleNetV2::thread_ap_CS_fsm_state478() {
    ap_CS_fsm_state478 = ap_CS_fsm.read()[477];
}

void ShuffleNetV2::thread_ap_CS_fsm_state479() {
    ap_CS_fsm_state479 = ap_CS_fsm.read()[478];
}

void ShuffleNetV2::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[47];
}

void ShuffleNetV2::thread_ap_CS_fsm_state480() {
    ap_CS_fsm_state480 = ap_CS_fsm.read()[479];
}

void ShuffleNetV2::thread_ap_CS_fsm_state481() {
    ap_CS_fsm_state481 = ap_CS_fsm.read()[480];
}

void ShuffleNetV2::thread_ap_CS_fsm_state482() {
    ap_CS_fsm_state482 = ap_CS_fsm.read()[481];
}

void ShuffleNetV2::thread_ap_CS_fsm_state483() {
    ap_CS_fsm_state483 = ap_CS_fsm.read()[482];
}

void ShuffleNetV2::thread_ap_CS_fsm_state484() {
    ap_CS_fsm_state484 = ap_CS_fsm.read()[483];
}

void ShuffleNetV2::thread_ap_CS_fsm_state485() {
    ap_CS_fsm_state485 = ap_CS_fsm.read()[484];
}

void ShuffleNetV2::thread_ap_CS_fsm_state486() {
    ap_CS_fsm_state486 = ap_CS_fsm.read()[485];
}

void ShuffleNetV2::thread_ap_CS_fsm_state487() {
    ap_CS_fsm_state487 = ap_CS_fsm.read()[486];
}

void ShuffleNetV2::thread_ap_CS_fsm_state488() {
    ap_CS_fsm_state488 = ap_CS_fsm.read()[487];
}

void ShuffleNetV2::thread_ap_CS_fsm_state489() {
    ap_CS_fsm_state489 = ap_CS_fsm.read()[488];
}

void ShuffleNetV2::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[48];
}

void ShuffleNetV2::thread_ap_CS_fsm_state490() {
    ap_CS_fsm_state490 = ap_CS_fsm.read()[489];
}

void ShuffleNetV2::thread_ap_CS_fsm_state491() {
    ap_CS_fsm_state491 = ap_CS_fsm.read()[490];
}

void ShuffleNetV2::thread_ap_CS_fsm_state492() {
    ap_CS_fsm_state492 = ap_CS_fsm.read()[491];
}

void ShuffleNetV2::thread_ap_CS_fsm_state493() {
    ap_CS_fsm_state493 = ap_CS_fsm.read()[492];
}

void ShuffleNetV2::thread_ap_CS_fsm_state494() {
    ap_CS_fsm_state494 = ap_CS_fsm.read()[493];
}

void ShuffleNetV2::thread_ap_CS_fsm_state495() {
    ap_CS_fsm_state495 = ap_CS_fsm.read()[494];
}

void ShuffleNetV2::thread_ap_CS_fsm_state496() {
    ap_CS_fsm_state496 = ap_CS_fsm.read()[495];
}

void ShuffleNetV2::thread_ap_CS_fsm_state497() {
    ap_CS_fsm_state497 = ap_CS_fsm.read()[496];
}

void ShuffleNetV2::thread_ap_CS_fsm_state498() {
    ap_CS_fsm_state498 = ap_CS_fsm.read()[497];
}

void ShuffleNetV2::thread_ap_CS_fsm_state499() {
    ap_CS_fsm_state499 = ap_CS_fsm.read()[498];
}

void ShuffleNetV2::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void ShuffleNetV2::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[49];
}

void ShuffleNetV2::thread_ap_CS_fsm_state500() {
    ap_CS_fsm_state500 = ap_CS_fsm.read()[499];
}

void ShuffleNetV2::thread_ap_CS_fsm_state501() {
    ap_CS_fsm_state501 = ap_CS_fsm.read()[500];
}

void ShuffleNetV2::thread_ap_CS_fsm_state502() {
    ap_CS_fsm_state502 = ap_CS_fsm.read()[501];
}

void ShuffleNetV2::thread_ap_CS_fsm_state503() {
    ap_CS_fsm_state503 = ap_CS_fsm.read()[502];
}

void ShuffleNetV2::thread_ap_CS_fsm_state504() {
    ap_CS_fsm_state504 = ap_CS_fsm.read()[503];
}

void ShuffleNetV2::thread_ap_CS_fsm_state505() {
    ap_CS_fsm_state505 = ap_CS_fsm.read()[504];
}

void ShuffleNetV2::thread_ap_CS_fsm_state506() {
    ap_CS_fsm_state506 = ap_CS_fsm.read()[505];
}

void ShuffleNetV2::thread_ap_CS_fsm_state507() {
    ap_CS_fsm_state507 = ap_CS_fsm.read()[506];
}

void ShuffleNetV2::thread_ap_CS_fsm_state508() {
    ap_CS_fsm_state508 = ap_CS_fsm.read()[507];
}

void ShuffleNetV2::thread_ap_CS_fsm_state509() {
    ap_CS_fsm_state509 = ap_CS_fsm.read()[508];
}

void ShuffleNetV2::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[50];
}

void ShuffleNetV2::thread_ap_CS_fsm_state510() {
    ap_CS_fsm_state510 = ap_CS_fsm.read()[509];
}

void ShuffleNetV2::thread_ap_CS_fsm_state511() {
    ap_CS_fsm_state511 = ap_CS_fsm.read()[510];
}

void ShuffleNetV2::thread_ap_CS_fsm_state512() {
    ap_CS_fsm_state512 = ap_CS_fsm.read()[511];
}

void ShuffleNetV2::thread_ap_CS_fsm_state513() {
    ap_CS_fsm_state513 = ap_CS_fsm.read()[512];
}

void ShuffleNetV2::thread_ap_CS_fsm_state514() {
    ap_CS_fsm_state514 = ap_CS_fsm.read()[513];
}

void ShuffleNetV2::thread_ap_CS_fsm_state515() {
    ap_CS_fsm_state515 = ap_CS_fsm.read()[514];
}

void ShuffleNetV2::thread_ap_CS_fsm_state516() {
    ap_CS_fsm_state516 = ap_CS_fsm.read()[515];
}

void ShuffleNetV2::thread_ap_CS_fsm_state517() {
    ap_CS_fsm_state517 = ap_CS_fsm.read()[516];
}

void ShuffleNetV2::thread_ap_CS_fsm_state518() {
    ap_CS_fsm_state518 = ap_CS_fsm.read()[517];
}

void ShuffleNetV2::thread_ap_CS_fsm_state519() {
    ap_CS_fsm_state519 = ap_CS_fsm.read()[518];
}

void ShuffleNetV2::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[51];
}

void ShuffleNetV2::thread_ap_CS_fsm_state520() {
    ap_CS_fsm_state520 = ap_CS_fsm.read()[519];
}

void ShuffleNetV2::thread_ap_CS_fsm_state521() {
    ap_CS_fsm_state521 = ap_CS_fsm.read()[520];
}

void ShuffleNetV2::thread_ap_CS_fsm_state522() {
    ap_CS_fsm_state522 = ap_CS_fsm.read()[521];
}

void ShuffleNetV2::thread_ap_CS_fsm_state523() {
    ap_CS_fsm_state523 = ap_CS_fsm.read()[522];
}

void ShuffleNetV2::thread_ap_CS_fsm_state524() {
    ap_CS_fsm_state524 = ap_CS_fsm.read()[523];
}

void ShuffleNetV2::thread_ap_CS_fsm_state525() {
    ap_CS_fsm_state525 = ap_CS_fsm.read()[524];
}

void ShuffleNetV2::thread_ap_CS_fsm_state526() {
    ap_CS_fsm_state526 = ap_CS_fsm.read()[525];
}

void ShuffleNetV2::thread_ap_CS_fsm_state527() {
    ap_CS_fsm_state527 = ap_CS_fsm.read()[526];
}

void ShuffleNetV2::thread_ap_CS_fsm_state528() {
    ap_CS_fsm_state528 = ap_CS_fsm.read()[527];
}

void ShuffleNetV2::thread_ap_CS_fsm_state529() {
    ap_CS_fsm_state529 = ap_CS_fsm.read()[528];
}

void ShuffleNetV2::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[52];
}

void ShuffleNetV2::thread_ap_CS_fsm_state530() {
    ap_CS_fsm_state530 = ap_CS_fsm.read()[529];
}

void ShuffleNetV2::thread_ap_CS_fsm_state531() {
    ap_CS_fsm_state531 = ap_CS_fsm.read()[530];
}

void ShuffleNetV2::thread_ap_CS_fsm_state532() {
    ap_CS_fsm_state532 = ap_CS_fsm.read()[531];
}

void ShuffleNetV2::thread_ap_CS_fsm_state533() {
    ap_CS_fsm_state533 = ap_CS_fsm.read()[532];
}

void ShuffleNetV2::thread_ap_CS_fsm_state534() {
    ap_CS_fsm_state534 = ap_CS_fsm.read()[533];
}

void ShuffleNetV2::thread_ap_CS_fsm_state535() {
    ap_CS_fsm_state535 = ap_CS_fsm.read()[534];
}

void ShuffleNetV2::thread_ap_CS_fsm_state536() {
    ap_CS_fsm_state536 = ap_CS_fsm.read()[535];
}

void ShuffleNetV2::thread_ap_CS_fsm_state537() {
    ap_CS_fsm_state537 = ap_CS_fsm.read()[536];
}

void ShuffleNetV2::thread_ap_CS_fsm_state538() {
    ap_CS_fsm_state538 = ap_CS_fsm.read()[537];
}

void ShuffleNetV2::thread_ap_CS_fsm_state539() {
    ap_CS_fsm_state539 = ap_CS_fsm.read()[538];
}

void ShuffleNetV2::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[53];
}

void ShuffleNetV2::thread_ap_CS_fsm_state540() {
    ap_CS_fsm_state540 = ap_CS_fsm.read()[539];
}

void ShuffleNetV2::thread_ap_CS_fsm_state541() {
    ap_CS_fsm_state541 = ap_CS_fsm.read()[540];
}

void ShuffleNetV2::thread_ap_CS_fsm_state542() {
    ap_CS_fsm_state542 = ap_CS_fsm.read()[541];
}

void ShuffleNetV2::thread_ap_CS_fsm_state543() {
    ap_CS_fsm_state543 = ap_CS_fsm.read()[542];
}

void ShuffleNetV2::thread_ap_CS_fsm_state544() {
    ap_CS_fsm_state544 = ap_CS_fsm.read()[543];
}

void ShuffleNetV2::thread_ap_CS_fsm_state545() {
    ap_CS_fsm_state545 = ap_CS_fsm.read()[544];
}

void ShuffleNetV2::thread_ap_CS_fsm_state546() {
    ap_CS_fsm_state546 = ap_CS_fsm.read()[545];
}

void ShuffleNetV2::thread_ap_CS_fsm_state547() {
    ap_CS_fsm_state547 = ap_CS_fsm.read()[546];
}

void ShuffleNetV2::thread_ap_CS_fsm_state548() {
    ap_CS_fsm_state548 = ap_CS_fsm.read()[547];
}

void ShuffleNetV2::thread_ap_CS_fsm_state549() {
    ap_CS_fsm_state549 = ap_CS_fsm.read()[548];
}

void ShuffleNetV2::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[54];
}

void ShuffleNetV2::thread_ap_CS_fsm_state550() {
    ap_CS_fsm_state550 = ap_CS_fsm.read()[549];
}

void ShuffleNetV2::thread_ap_CS_fsm_state551() {
    ap_CS_fsm_state551 = ap_CS_fsm.read()[550];
}

void ShuffleNetV2::thread_ap_CS_fsm_state552() {
    ap_CS_fsm_state552 = ap_CS_fsm.read()[551];
}

void ShuffleNetV2::thread_ap_CS_fsm_state553() {
    ap_CS_fsm_state553 = ap_CS_fsm.read()[552];
}

void ShuffleNetV2::thread_ap_CS_fsm_state554() {
    ap_CS_fsm_state554 = ap_CS_fsm.read()[553];
}

void ShuffleNetV2::thread_ap_CS_fsm_state555() {
    ap_CS_fsm_state555 = ap_CS_fsm.read()[554];
}

void ShuffleNetV2::thread_ap_CS_fsm_state556() {
    ap_CS_fsm_state556 = ap_CS_fsm.read()[555];
}

void ShuffleNetV2::thread_ap_CS_fsm_state557() {
    ap_CS_fsm_state557 = ap_CS_fsm.read()[556];
}

void ShuffleNetV2::thread_ap_CS_fsm_state558() {
    ap_CS_fsm_state558 = ap_CS_fsm.read()[557];
}

void ShuffleNetV2::thread_ap_CS_fsm_state559() {
    ap_CS_fsm_state559 = ap_CS_fsm.read()[558];
}

void ShuffleNetV2::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[55];
}

void ShuffleNetV2::thread_ap_CS_fsm_state560() {
    ap_CS_fsm_state560 = ap_CS_fsm.read()[559];
}

void ShuffleNetV2::thread_ap_CS_fsm_state561() {
    ap_CS_fsm_state561 = ap_CS_fsm.read()[560];
}

void ShuffleNetV2::thread_ap_CS_fsm_state562() {
    ap_CS_fsm_state562 = ap_CS_fsm.read()[561];
}

void ShuffleNetV2::thread_ap_CS_fsm_state563() {
    ap_CS_fsm_state563 = ap_CS_fsm.read()[562];
}

void ShuffleNetV2::thread_ap_CS_fsm_state564() {
    ap_CS_fsm_state564 = ap_CS_fsm.read()[563];
}

void ShuffleNetV2::thread_ap_CS_fsm_state565() {
    ap_CS_fsm_state565 = ap_CS_fsm.read()[564];
}

void ShuffleNetV2::thread_ap_CS_fsm_state566() {
    ap_CS_fsm_state566 = ap_CS_fsm.read()[565];
}

void ShuffleNetV2::thread_ap_CS_fsm_state567() {
    ap_CS_fsm_state567 = ap_CS_fsm.read()[566];
}

void ShuffleNetV2::thread_ap_CS_fsm_state568() {
    ap_CS_fsm_state568 = ap_CS_fsm.read()[567];
}

void ShuffleNetV2::thread_ap_CS_fsm_state569() {
    ap_CS_fsm_state569 = ap_CS_fsm.read()[568];
}

void ShuffleNetV2::thread_ap_CS_fsm_state57() {
    ap_CS_fsm_state57 = ap_CS_fsm.read()[56];
}

void ShuffleNetV2::thread_ap_CS_fsm_state570() {
    ap_CS_fsm_state570 = ap_CS_fsm.read()[569];
}

void ShuffleNetV2::thread_ap_CS_fsm_state571() {
    ap_CS_fsm_state571 = ap_CS_fsm.read()[570];
}

void ShuffleNetV2::thread_ap_CS_fsm_state572() {
    ap_CS_fsm_state572 = ap_CS_fsm.read()[571];
}

void ShuffleNetV2::thread_ap_CS_fsm_state573() {
    ap_CS_fsm_state573 = ap_CS_fsm.read()[572];
}

void ShuffleNetV2::thread_ap_CS_fsm_state574() {
    ap_CS_fsm_state574 = ap_CS_fsm.read()[573];
}

void ShuffleNetV2::thread_ap_CS_fsm_state575() {
    ap_CS_fsm_state575 = ap_CS_fsm.read()[574];
}

void ShuffleNetV2::thread_ap_CS_fsm_state576() {
    ap_CS_fsm_state576 = ap_CS_fsm.read()[575];
}

void ShuffleNetV2::thread_ap_CS_fsm_state577() {
    ap_CS_fsm_state577 = ap_CS_fsm.read()[576];
}

void ShuffleNetV2::thread_ap_CS_fsm_state578() {
    ap_CS_fsm_state578 = ap_CS_fsm.read()[577];
}

void ShuffleNetV2::thread_ap_CS_fsm_state579() {
    ap_CS_fsm_state579 = ap_CS_fsm.read()[578];
}

void ShuffleNetV2::thread_ap_CS_fsm_state58() {
    ap_CS_fsm_state58 = ap_CS_fsm.read()[57];
}

void ShuffleNetV2::thread_ap_CS_fsm_state580() {
    ap_CS_fsm_state580 = ap_CS_fsm.read()[579];
}

void ShuffleNetV2::thread_ap_CS_fsm_state581() {
    ap_CS_fsm_state581 = ap_CS_fsm.read()[580];
}

void ShuffleNetV2::thread_ap_CS_fsm_state582() {
    ap_CS_fsm_state582 = ap_CS_fsm.read()[581];
}

void ShuffleNetV2::thread_ap_CS_fsm_state583() {
    ap_CS_fsm_state583 = ap_CS_fsm.read()[582];
}

void ShuffleNetV2::thread_ap_CS_fsm_state584() {
    ap_CS_fsm_state584 = ap_CS_fsm.read()[583];
}

void ShuffleNetV2::thread_ap_CS_fsm_state585() {
    ap_CS_fsm_state585 = ap_CS_fsm.read()[584];
}

void ShuffleNetV2::thread_ap_CS_fsm_state586() {
    ap_CS_fsm_state586 = ap_CS_fsm.read()[585];
}

void ShuffleNetV2::thread_ap_CS_fsm_state587() {
    ap_CS_fsm_state587 = ap_CS_fsm.read()[586];
}

void ShuffleNetV2::thread_ap_CS_fsm_state588() {
    ap_CS_fsm_state588 = ap_CS_fsm.read()[587];
}

void ShuffleNetV2::thread_ap_CS_fsm_state589() {
    ap_CS_fsm_state589 = ap_CS_fsm.read()[588];
}

void ShuffleNetV2::thread_ap_CS_fsm_state59() {
    ap_CS_fsm_state59 = ap_CS_fsm.read()[58];
}

void ShuffleNetV2::thread_ap_CS_fsm_state590() {
    ap_CS_fsm_state590 = ap_CS_fsm.read()[589];
}

void ShuffleNetV2::thread_ap_CS_fsm_state591() {
    ap_CS_fsm_state591 = ap_CS_fsm.read()[590];
}

void ShuffleNetV2::thread_ap_CS_fsm_state592() {
    ap_CS_fsm_state592 = ap_CS_fsm.read()[591];
}

void ShuffleNetV2::thread_ap_CS_fsm_state593() {
    ap_CS_fsm_state593 = ap_CS_fsm.read()[592];
}

void ShuffleNetV2::thread_ap_CS_fsm_state594() {
    ap_CS_fsm_state594 = ap_CS_fsm.read()[593];
}

void ShuffleNetV2::thread_ap_CS_fsm_state595() {
    ap_CS_fsm_state595 = ap_CS_fsm.read()[594];
}

void ShuffleNetV2::thread_ap_CS_fsm_state596() {
    ap_CS_fsm_state596 = ap_CS_fsm.read()[595];
}

void ShuffleNetV2::thread_ap_CS_fsm_state597() {
    ap_CS_fsm_state597 = ap_CS_fsm.read()[596];
}

void ShuffleNetV2::thread_ap_CS_fsm_state598() {
    ap_CS_fsm_state598 = ap_CS_fsm.read()[597];
}

void ShuffleNetV2::thread_ap_CS_fsm_state599() {
    ap_CS_fsm_state599 = ap_CS_fsm.read()[598];
}

void ShuffleNetV2::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void ShuffleNetV2::thread_ap_CS_fsm_state60() {
    ap_CS_fsm_state60 = ap_CS_fsm.read()[59];
}

void ShuffleNetV2::thread_ap_CS_fsm_state600() {
    ap_CS_fsm_state600 = ap_CS_fsm.read()[599];
}

void ShuffleNetV2::thread_ap_CS_fsm_state601() {
    ap_CS_fsm_state601 = ap_CS_fsm.read()[600];
}

void ShuffleNetV2::thread_ap_CS_fsm_state602() {
    ap_CS_fsm_state602 = ap_CS_fsm.read()[601];
}

void ShuffleNetV2::thread_ap_CS_fsm_state603() {
    ap_CS_fsm_state603 = ap_CS_fsm.read()[602];
}

void ShuffleNetV2::thread_ap_CS_fsm_state604() {
    ap_CS_fsm_state604 = ap_CS_fsm.read()[603];
}

void ShuffleNetV2::thread_ap_CS_fsm_state605() {
    ap_CS_fsm_state605 = ap_CS_fsm.read()[604];
}

void ShuffleNetV2::thread_ap_CS_fsm_state606() {
    ap_CS_fsm_state606 = ap_CS_fsm.read()[605];
}

void ShuffleNetV2::thread_ap_CS_fsm_state607() {
    ap_CS_fsm_state607 = ap_CS_fsm.read()[606];
}

void ShuffleNetV2::thread_ap_CS_fsm_state608() {
    ap_CS_fsm_state608 = ap_CS_fsm.read()[607];
}

void ShuffleNetV2::thread_ap_CS_fsm_state609() {
    ap_CS_fsm_state609 = ap_CS_fsm.read()[608];
}

void ShuffleNetV2::thread_ap_CS_fsm_state61() {
    ap_CS_fsm_state61 = ap_CS_fsm.read()[60];
}

void ShuffleNetV2::thread_ap_CS_fsm_state610() {
    ap_CS_fsm_state610 = ap_CS_fsm.read()[609];
}

void ShuffleNetV2::thread_ap_CS_fsm_state611() {
    ap_CS_fsm_state611 = ap_CS_fsm.read()[610];
}

void ShuffleNetV2::thread_ap_CS_fsm_state612() {
    ap_CS_fsm_state612 = ap_CS_fsm.read()[611];
}

void ShuffleNetV2::thread_ap_CS_fsm_state613() {
    ap_CS_fsm_state613 = ap_CS_fsm.read()[612];
}

void ShuffleNetV2::thread_ap_CS_fsm_state614() {
    ap_CS_fsm_state614 = ap_CS_fsm.read()[613];
}

void ShuffleNetV2::thread_ap_CS_fsm_state615() {
    ap_CS_fsm_state615 = ap_CS_fsm.read()[614];
}

void ShuffleNetV2::thread_ap_CS_fsm_state616() {
    ap_CS_fsm_state616 = ap_CS_fsm.read()[615];
}

void ShuffleNetV2::thread_ap_CS_fsm_state617() {
    ap_CS_fsm_state617 = ap_CS_fsm.read()[616];
}

void ShuffleNetV2::thread_ap_CS_fsm_state618() {
    ap_CS_fsm_state618 = ap_CS_fsm.read()[617];
}

void ShuffleNetV2::thread_ap_CS_fsm_state619() {
    ap_CS_fsm_state619 = ap_CS_fsm.read()[618];
}

void ShuffleNetV2::thread_ap_CS_fsm_state62() {
    ap_CS_fsm_state62 = ap_CS_fsm.read()[61];
}

void ShuffleNetV2::thread_ap_CS_fsm_state620() {
    ap_CS_fsm_state620 = ap_CS_fsm.read()[619];
}

void ShuffleNetV2::thread_ap_CS_fsm_state621() {
    ap_CS_fsm_state621 = ap_CS_fsm.read()[620];
}

void ShuffleNetV2::thread_ap_CS_fsm_state622() {
    ap_CS_fsm_state622 = ap_CS_fsm.read()[621];
}

void ShuffleNetV2::thread_ap_CS_fsm_state623() {
    ap_CS_fsm_state623 = ap_CS_fsm.read()[622];
}

void ShuffleNetV2::thread_ap_CS_fsm_state624() {
    ap_CS_fsm_state624 = ap_CS_fsm.read()[623];
}

void ShuffleNetV2::thread_ap_CS_fsm_state625() {
    ap_CS_fsm_state625 = ap_CS_fsm.read()[624];
}

void ShuffleNetV2::thread_ap_CS_fsm_state626() {
    ap_CS_fsm_state626 = ap_CS_fsm.read()[625];
}

void ShuffleNetV2::thread_ap_CS_fsm_state627() {
    ap_CS_fsm_state627 = ap_CS_fsm.read()[626];
}

void ShuffleNetV2::thread_ap_CS_fsm_state628() {
    ap_CS_fsm_state628 = ap_CS_fsm.read()[627];
}

void ShuffleNetV2::thread_ap_CS_fsm_state629() {
    ap_CS_fsm_state629 = ap_CS_fsm.read()[628];
}

void ShuffleNetV2::thread_ap_CS_fsm_state63() {
    ap_CS_fsm_state63 = ap_CS_fsm.read()[62];
}

void ShuffleNetV2::thread_ap_CS_fsm_state630() {
    ap_CS_fsm_state630 = ap_CS_fsm.read()[629];
}

void ShuffleNetV2::thread_ap_CS_fsm_state631() {
    ap_CS_fsm_state631 = ap_CS_fsm.read()[630];
}

void ShuffleNetV2::thread_ap_CS_fsm_state632() {
    ap_CS_fsm_state632 = ap_CS_fsm.read()[631];
}

void ShuffleNetV2::thread_ap_CS_fsm_state633() {
    ap_CS_fsm_state633 = ap_CS_fsm.read()[632];
}

void ShuffleNetV2::thread_ap_CS_fsm_state634() {
    ap_CS_fsm_state634 = ap_CS_fsm.read()[633];
}

void ShuffleNetV2::thread_ap_CS_fsm_state635() {
    ap_CS_fsm_state635 = ap_CS_fsm.read()[634];
}

void ShuffleNetV2::thread_ap_CS_fsm_state636() {
    ap_CS_fsm_state636 = ap_CS_fsm.read()[635];
}

void ShuffleNetV2::thread_ap_CS_fsm_state637() {
    ap_CS_fsm_state637 = ap_CS_fsm.read()[636];
}

void ShuffleNetV2::thread_ap_CS_fsm_state638() {
    ap_CS_fsm_state638 = ap_CS_fsm.read()[637];
}

void ShuffleNetV2::thread_ap_CS_fsm_state639() {
    ap_CS_fsm_state639 = ap_CS_fsm.read()[638];
}

void ShuffleNetV2::thread_ap_CS_fsm_state64() {
    ap_CS_fsm_state64 = ap_CS_fsm.read()[63];
}

void ShuffleNetV2::thread_ap_CS_fsm_state640() {
    ap_CS_fsm_state640 = ap_CS_fsm.read()[639];
}

void ShuffleNetV2::thread_ap_CS_fsm_state641() {
    ap_CS_fsm_state641 = ap_CS_fsm.read()[640];
}

void ShuffleNetV2::thread_ap_CS_fsm_state642() {
    ap_CS_fsm_state642 = ap_CS_fsm.read()[641];
}

void ShuffleNetV2::thread_ap_CS_fsm_state643() {
    ap_CS_fsm_state643 = ap_CS_fsm.read()[642];
}

void ShuffleNetV2::thread_ap_CS_fsm_state644() {
    ap_CS_fsm_state644 = ap_CS_fsm.read()[643];
}

void ShuffleNetV2::thread_ap_CS_fsm_state645() {
    ap_CS_fsm_state645 = ap_CS_fsm.read()[644];
}

void ShuffleNetV2::thread_ap_CS_fsm_state646() {
    ap_CS_fsm_state646 = ap_CS_fsm.read()[645];
}

void ShuffleNetV2::thread_ap_CS_fsm_state647() {
    ap_CS_fsm_state647 = ap_CS_fsm.read()[646];
}

void ShuffleNetV2::thread_ap_CS_fsm_state648() {
    ap_CS_fsm_state648 = ap_CS_fsm.read()[647];
}

void ShuffleNetV2::thread_ap_CS_fsm_state649() {
    ap_CS_fsm_state649 = ap_CS_fsm.read()[648];
}

void ShuffleNetV2::thread_ap_CS_fsm_state65() {
    ap_CS_fsm_state65 = ap_CS_fsm.read()[64];
}

void ShuffleNetV2::thread_ap_CS_fsm_state650() {
    ap_CS_fsm_state650 = ap_CS_fsm.read()[649];
}

void ShuffleNetV2::thread_ap_CS_fsm_state651() {
    ap_CS_fsm_state651 = ap_CS_fsm.read()[650];
}

void ShuffleNetV2::thread_ap_CS_fsm_state652() {
    ap_CS_fsm_state652 = ap_CS_fsm.read()[651];
}

void ShuffleNetV2::thread_ap_CS_fsm_state653() {
    ap_CS_fsm_state653 = ap_CS_fsm.read()[652];
}

void ShuffleNetV2::thread_ap_CS_fsm_state654() {
    ap_CS_fsm_state654 = ap_CS_fsm.read()[653];
}

void ShuffleNetV2::thread_ap_CS_fsm_state655() {
    ap_CS_fsm_state655 = ap_CS_fsm.read()[654];
}

void ShuffleNetV2::thread_ap_CS_fsm_state656() {
    ap_CS_fsm_state656 = ap_CS_fsm.read()[655];
}

void ShuffleNetV2::thread_ap_CS_fsm_state657() {
    ap_CS_fsm_state657 = ap_CS_fsm.read()[656];
}

void ShuffleNetV2::thread_ap_CS_fsm_state658() {
    ap_CS_fsm_state658 = ap_CS_fsm.read()[657];
}

void ShuffleNetV2::thread_ap_CS_fsm_state659() {
    ap_CS_fsm_state659 = ap_CS_fsm.read()[658];
}

void ShuffleNetV2::thread_ap_CS_fsm_state66() {
    ap_CS_fsm_state66 = ap_CS_fsm.read()[65];
}

void ShuffleNetV2::thread_ap_CS_fsm_state660() {
    ap_CS_fsm_state660 = ap_CS_fsm.read()[659];
}

void ShuffleNetV2::thread_ap_CS_fsm_state661() {
    ap_CS_fsm_state661 = ap_CS_fsm.read()[660];
}

void ShuffleNetV2::thread_ap_CS_fsm_state662() {
    ap_CS_fsm_state662 = ap_CS_fsm.read()[661];
}

void ShuffleNetV2::thread_ap_CS_fsm_state663() {
    ap_CS_fsm_state663 = ap_CS_fsm.read()[662];
}

void ShuffleNetV2::thread_ap_CS_fsm_state664() {
    ap_CS_fsm_state664 = ap_CS_fsm.read()[663];
}

void ShuffleNetV2::thread_ap_CS_fsm_state665() {
    ap_CS_fsm_state665 = ap_CS_fsm.read()[664];
}

void ShuffleNetV2::thread_ap_CS_fsm_state666() {
    ap_CS_fsm_state666 = ap_CS_fsm.read()[665];
}

void ShuffleNetV2::thread_ap_CS_fsm_state667() {
    ap_CS_fsm_state667 = ap_CS_fsm.read()[666];
}

void ShuffleNetV2::thread_ap_CS_fsm_state668() {
    ap_CS_fsm_state668 = ap_CS_fsm.read()[667];
}

void ShuffleNetV2::thread_ap_CS_fsm_state669() {
    ap_CS_fsm_state669 = ap_CS_fsm.read()[668];
}

void ShuffleNetV2::thread_ap_CS_fsm_state67() {
    ap_CS_fsm_state67 = ap_CS_fsm.read()[66];
}

void ShuffleNetV2::thread_ap_CS_fsm_state670() {
    ap_CS_fsm_state670 = ap_CS_fsm.read()[669];
}

void ShuffleNetV2::thread_ap_CS_fsm_state671() {
    ap_CS_fsm_state671 = ap_CS_fsm.read()[670];
}

void ShuffleNetV2::thread_ap_CS_fsm_state672() {
    ap_CS_fsm_state672 = ap_CS_fsm.read()[671];
}

void ShuffleNetV2::thread_ap_CS_fsm_state673() {
    ap_CS_fsm_state673 = ap_CS_fsm.read()[672];
}

void ShuffleNetV2::thread_ap_CS_fsm_state674() {
    ap_CS_fsm_state674 = ap_CS_fsm.read()[673];
}

void ShuffleNetV2::thread_ap_CS_fsm_state675() {
    ap_CS_fsm_state675 = ap_CS_fsm.read()[674];
}

void ShuffleNetV2::thread_ap_CS_fsm_state676() {
    ap_CS_fsm_state676 = ap_CS_fsm.read()[675];
}

void ShuffleNetV2::thread_ap_CS_fsm_state677() {
    ap_CS_fsm_state677 = ap_CS_fsm.read()[676];
}

void ShuffleNetV2::thread_ap_CS_fsm_state678() {
    ap_CS_fsm_state678 = ap_CS_fsm.read()[677];
}

void ShuffleNetV2::thread_ap_CS_fsm_state679() {
    ap_CS_fsm_state679 = ap_CS_fsm.read()[678];
}

void ShuffleNetV2::thread_ap_CS_fsm_state68() {
    ap_CS_fsm_state68 = ap_CS_fsm.read()[67];
}

void ShuffleNetV2::thread_ap_CS_fsm_state680() {
    ap_CS_fsm_state680 = ap_CS_fsm.read()[679];
}

void ShuffleNetV2::thread_ap_CS_fsm_state681() {
    ap_CS_fsm_state681 = ap_CS_fsm.read()[680];
}

void ShuffleNetV2::thread_ap_CS_fsm_state682() {
    ap_CS_fsm_state682 = ap_CS_fsm.read()[681];
}

void ShuffleNetV2::thread_ap_CS_fsm_state683() {
    ap_CS_fsm_state683 = ap_CS_fsm.read()[682];
}

void ShuffleNetV2::thread_ap_CS_fsm_state684() {
    ap_CS_fsm_state684 = ap_CS_fsm.read()[683];
}

void ShuffleNetV2::thread_ap_CS_fsm_state685() {
    ap_CS_fsm_state685 = ap_CS_fsm.read()[684];
}

void ShuffleNetV2::thread_ap_CS_fsm_state686() {
    ap_CS_fsm_state686 = ap_CS_fsm.read()[685];
}

void ShuffleNetV2::thread_ap_CS_fsm_state687() {
    ap_CS_fsm_state687 = ap_CS_fsm.read()[686];
}

void ShuffleNetV2::thread_ap_CS_fsm_state688() {
    ap_CS_fsm_state688 = ap_CS_fsm.read()[687];
}

void ShuffleNetV2::thread_ap_CS_fsm_state689() {
    ap_CS_fsm_state689 = ap_CS_fsm.read()[688];
}

void ShuffleNetV2::thread_ap_CS_fsm_state69() {
    ap_CS_fsm_state69 = ap_CS_fsm.read()[68];
}

void ShuffleNetV2::thread_ap_CS_fsm_state690() {
    ap_CS_fsm_state690 = ap_CS_fsm.read()[689];
}

void ShuffleNetV2::thread_ap_CS_fsm_state691() {
    ap_CS_fsm_state691 = ap_CS_fsm.read()[690];
}

void ShuffleNetV2::thread_ap_CS_fsm_state692() {
    ap_CS_fsm_state692 = ap_CS_fsm.read()[691];
}

void ShuffleNetV2::thread_ap_CS_fsm_state693() {
    ap_CS_fsm_state693 = ap_CS_fsm.read()[692];
}

void ShuffleNetV2::thread_ap_CS_fsm_state694() {
    ap_CS_fsm_state694 = ap_CS_fsm.read()[693];
}

void ShuffleNetV2::thread_ap_CS_fsm_state695() {
    ap_CS_fsm_state695 = ap_CS_fsm.read()[694];
}

void ShuffleNetV2::thread_ap_CS_fsm_state696() {
    ap_CS_fsm_state696 = ap_CS_fsm.read()[695];
}

void ShuffleNetV2::thread_ap_CS_fsm_state697() {
    ap_CS_fsm_state697 = ap_CS_fsm.read()[696];
}

void ShuffleNetV2::thread_ap_CS_fsm_state698() {
    ap_CS_fsm_state698 = ap_CS_fsm.read()[697];
}

void ShuffleNetV2::thread_ap_CS_fsm_state699() {
    ap_CS_fsm_state699 = ap_CS_fsm.read()[698];
}

void ShuffleNetV2::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void ShuffleNetV2::thread_ap_CS_fsm_state70() {
    ap_CS_fsm_state70 = ap_CS_fsm.read()[69];
}

void ShuffleNetV2::thread_ap_CS_fsm_state700() {
    ap_CS_fsm_state700 = ap_CS_fsm.read()[699];
}

void ShuffleNetV2::thread_ap_CS_fsm_state701() {
    ap_CS_fsm_state701 = ap_CS_fsm.read()[700];
}

void ShuffleNetV2::thread_ap_CS_fsm_state702() {
    ap_CS_fsm_state702 = ap_CS_fsm.read()[701];
}

void ShuffleNetV2::thread_ap_CS_fsm_state703() {
    ap_CS_fsm_state703 = ap_CS_fsm.read()[702];
}

void ShuffleNetV2::thread_ap_CS_fsm_state706() {
    ap_CS_fsm_state706 = ap_CS_fsm.read()[705];
}

void ShuffleNetV2::thread_ap_CS_fsm_state707() {
    ap_CS_fsm_state707 = ap_CS_fsm.read()[706];
}

void ShuffleNetV2::thread_ap_CS_fsm_state71() {
    ap_CS_fsm_state71 = ap_CS_fsm.read()[70];
}

void ShuffleNetV2::thread_ap_CS_fsm_state711() {
    ap_CS_fsm_state711 = ap_CS_fsm.read()[710];
}

void ShuffleNetV2::thread_ap_CS_fsm_state712() {
    ap_CS_fsm_state712 = ap_CS_fsm.read()[711];
}

void ShuffleNetV2::thread_ap_CS_fsm_state713() {
    ap_CS_fsm_state713 = ap_CS_fsm.read()[712];
}

void ShuffleNetV2::thread_ap_CS_fsm_state717() {
    ap_CS_fsm_state717 = ap_CS_fsm.read()[716];
}

void ShuffleNetV2::thread_ap_CS_fsm_state718() {
    ap_CS_fsm_state718 = ap_CS_fsm.read()[717];
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) && 
         esl_seteq<1,1,1>(exitcond1_i_fu_28129_p2.read(), ap_const_lv1_1))) {
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) && 
         esl_seteq<1,1,1>(exitcond1_i_fu_28129_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_avgpool_output_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state701.read())) {
        avgpool_output_address0 =  (sc_lv<9>) (tmp_i_642_fu_28169_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state699.read())) {
        avgpool_output_address0 = grp_avgpool_fu_7213_output_r_address0.read();
    } else {
        avgpool_output_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_avgpool_output_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state701.read())) {
        avgpool_output_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state699.read())) {
        avgpool_output_ce0 = grp_avgpool_fu_7213_output_r_ce0.read();
    } else {
        avgpool_output_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_avgpool_output_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state699.read())) {
        avgpool_output_we0 = grp_avgpool_fu_7213_output_r_we0.read();
    } else {
        avgpool_output_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_221_fu_10299_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_216_fu_10140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_208_fu_9923_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_199_fu_9554_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_193_fu_9397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_185_fu_9192_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_176_fu_8817_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_171_fu_8656_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_163_fu_8451_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_156_fu_8163_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_150_fu_8006_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_143_fu_7803_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_137_fu_7646_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_132_fu_7507_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()))) {
        bias_24_address0 = grp_subconv_1x1_16_fu_7201_bias_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()))) {
        bias_24_address0 = grp_subconv_3x3_16_no_re_fu_7115_bias_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        bias_24_address0 = grp_subconv_3x3_32_strid_fu_7102_bias_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        bias_24_address0 = grp_subconv_1x1_32_fu_7090_bias_address0.read();
    } else {
        bias_24_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_bias_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()))) {
        bias_24_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()))) {
        bias_24_ce0 = grp_subconv_1x1_16_fu_7201_bias_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()))) {
        bias_24_ce0 = grp_subconv_3x3_16_no_re_fu_7115_bias_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        bias_24_ce0 = grp_subconv_3x3_32_strid_fu_7102_bias_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        bias_24_ce0 = grp_subconv_1x1_32_fu_7090_bias_ce0.read();
    } else {
        bias_24_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_24_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()))) {
        bias_24_we0 = ap_const_logic_1;
    } else {
        bias_24_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_48_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state508.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_667_fu_22499_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_651_fu_22123_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state486.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_638_fu_21777_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state467.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_617_fu_21187_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state457.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_601_fu_20811_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state445.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_588_fu_20461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state426.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_567_fu_19875_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_551_fu_19511_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state404.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_538_fu_19157_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_517_fu_18579_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state375.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_501_fu_18215_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_488_fu_17861_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_467_fu_17283_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_451_fu_16919_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_438_fu_16573_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_417_fu_15995_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_401_fu_15627_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_388_fu_15277_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_367_fu_14687_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state252.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_353_fu_14319_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_342_fu_13969_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_324_fu_13391_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_310_fu_13027_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_299_fu_12677_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_284_fu_12182_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_269_fu_11814_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_258_fu_11468_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_244_fu_11100_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_233_fu_10746_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state241.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state282.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state304.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state345.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state405.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state446.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state468.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()))) {
        bias_48_address0 = grp_subconv_1x1_8_fu_7164_bias_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state253.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state417.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state458.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()))) {
        bias_48_address0 = grp_subconv_3x3_8_no_rel_fu_7152_bias_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read()))) {
        bias_48_address0 = grp_subconv_3x3_16_strid_fu_7139_bias_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state138.read())) {
        bias_48_address0 = grp_subconv_1x1_16p_fu_7078_bias_address0.read();
    } else {
        bias_48_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_bias_48_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state252.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state375.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state404.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state426.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state457.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state467.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state508.read()))) {
        bias_48_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state241.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state282.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state304.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state345.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state405.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state446.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state468.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()))) {
        bias_48_ce0 = grp_subconv_1x1_8_fu_7164_bias_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state253.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state417.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state458.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()))) {
        bias_48_ce0 = grp_subconv_3x3_8_no_rel_fu_7152_bias_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read()))) {
        bias_48_ce0 = grp_subconv_3x3_16_strid_fu_7139_bias_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state138.read())) {
        bias_48_ce0 = grp_subconv_1x1_16p_fu_7078_bias_ce0.read();
    } else {
        bias_48_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_48_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state252.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state375.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state404.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state426.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state457.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state467.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state508.read()))) {
        bias_48_we0 = ap_const_logic_1;
    } else {
        bias_48_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_96_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state689.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_886_fu_28041_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state679.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_870_fu_27693_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state667.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_857_fu_27353_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state648.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_836_fu_26791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state638.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_820_fu_26443_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state626.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_807_fu_26085_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state607.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_787_fu_25523_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state597.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_771_fu_25163_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state585.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_760_fu_24821_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state569.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_743_fu_24338_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state559.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_725_fu_23986_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state545.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_714_fu_23644_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state535.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_698_fu_23284_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state523.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_683_fu_22938_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state598.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state639.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state680.read()))) {
        bias_96_address0 = grp_subconv_3x3_4_no_rel_fu_7189_bias_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state536.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state560.read()))) {
        bias_96_address0 = grp_subconv_3x3_8_stride_fu_7176_bias_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state608.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state627.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state649.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state668.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state690.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state546.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state570.read()))) {
        bias_96_address0 = grp_subconv_1x1_4_fu_7127_bias_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state524.read())) {
        bias_96_address0 = grp_subconv_1x1_8p_fu_7066_bias_address0.read();
    } else {
        bias_96_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_bias_96_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state523.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state535.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state545.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state559.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state569.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state585.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state597.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state607.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state626.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state638.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state648.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state667.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state679.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state689.read()))) {
        bias_96_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state598.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state639.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state680.read()))) {
        bias_96_ce0 = grp_subconv_3x3_4_no_rel_fu_7189_bias_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state536.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state560.read()))) {
        bias_96_ce0 = grp_subconv_3x3_8_stride_fu_7176_bias_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state608.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state627.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state649.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state668.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state690.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state546.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state570.read()))) {
        bias_96_ce0 = grp_subconv_1x1_4_fu_7127_bias_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state524.read())) {
        bias_96_ce0 = grp_subconv_1x1_8p_fu_7066_bias_ce0.read();
    } else {
        bias_96_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_96_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state523.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state535.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state545.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state559.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state569.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state585.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state597.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state607.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state626.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state638.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state648.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state667.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state679.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state689.read()))) {
        bias_96_we0 = ap_const_logic_1;
    } else {
        bias_96_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state688.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_884_fu_28034_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state678.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_868_fu_27686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state666.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_854_fu_27346_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state647.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_834_fu_26784_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state637.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_818_fu_26436_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state625.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_805_fu_26078_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state606.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_785_fu_25516_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state596.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_769_fu_25156_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state584.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_758_fu_24814_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state568.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_741_fu_24331_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state558.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_723_fu_23979_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state544.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_712_fu_23637_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_696_fu_23276_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state522.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_681_fu_22930_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_665_fu_22491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state497.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_649_fu_22115_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state485.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_635_fu_21769_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state466.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_615_fu_21179_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_599_fu_20804_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state444.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_585_fu_20454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_565_fu_19868_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_549_fu_19504_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_535_fu_19150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state384.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_515_fu_18572_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state374.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_499_fu_18208_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state362.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_485_fu_17854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_465_fu_17276_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state333.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_449_fu_16912_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_435_fu_16566_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state302.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_415_fu_15988_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state292.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_399_fu_15619_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state280.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_385_fu_15269_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_365_fu_14679_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state251.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_351_fu_14311_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_340_fu_13962_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_322_fu_13384_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_308_fu_13020_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state198.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_297_fu_12670_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state182.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_282_fu_12175_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_267_fu_11807_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_256_fu_11460_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_242_fu_11092_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_231_fu_10739_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_220_fu_10294_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_215_fu_10135_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_207_fu_9918_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_198_fu_9549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_192_fu_9392_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_184_fu_9187_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_175_fu_8812_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_170_fu_8651_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_162_fu_8446_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_155_fu_8158_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_149_fu_8001_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_142_fu_7798_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_136_fu_7641_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_131_fu_7502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_128_fu_7398_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_125_fu_7362_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_fu_7331_p1.read());
    } else {
        bias_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_bias_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state182.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state198.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state251.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state280.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state292.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state302.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state333.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state362.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state374.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state384.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state444.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state466.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state485.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state497.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state522.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state544.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state558.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state568.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state584.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state596.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state606.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state625.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state637.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state647.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state666.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state678.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state688.read()))) {
        bias_ce0 = ap_const_logic_1;
    } else {
        bias_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_24_16x16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        buffer0_1_24_16x16_address0 =  (sc_lv<13>) (tmp_1062_cast1_reg_29277.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read())) {
        buffer0_1_24_16x16_address0 =  (sc_lv<13>) (tmp_1030_cast_fu_9769_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        buffer0_1_24_16x16_address0 =  (sc_lv<13>) (tmp_1027_cast1_reg_29014.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        buffer0_1_24_16x16_address0 =  (sc_lv<13>) (tmp_984_cast_fu_9032_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        buffer0_1_24_16x16_address0 =  (sc_lv<13>) (tmp_981_cast1_reg_28751.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        buffer0_1_24_16x16_address0 =  (sc_lv<13>) (tmp_799_cast1_fu_8295_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()))) {
        buffer0_1_24_16x16_address0 = grp_shuffle_24_fu_7221_left_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()))) {
        buffer0_1_24_16x16_address0 = grp_subconv_1x1_16_fu_7201_input_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()))) {
        buffer0_1_24_16x16_address0 = grp_subconv_3x3_16_no_re_fu_7115_output_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer0_1_24_16x16_address0 = grp_subconv_3x3_32_strid_fu_7102_output_r_address0.read();
    } else {
        buffer0_1_24_16x16_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer0_1_24_16x16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()))) {
        buffer0_1_24_16x16_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()))) {
        buffer0_1_24_16x16_ce0 = grp_shuffle_24_fu_7221_left_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()))) {
        buffer0_1_24_16x16_ce0 = grp_subconv_1x1_16_fu_7201_input_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()))) {
        buffer0_1_24_16x16_ce0 = grp_subconv_3x3_16_no_re_fu_7115_output_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer0_1_24_16x16_ce0 = grp_subconv_3x3_32_strid_fu_7102_output_r_ce0.read();
    } else {
        buffer0_1_24_16x16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_24_16x16_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()))) {
        buffer0_1_24_16x16_d0 = shuffleunit0_1_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()))) {
        buffer0_1_24_16x16_d0 = shuffleunit0_0_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()))) {
        buffer0_1_24_16x16_d0 = downsampleunit0_outp_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()))) {
        buffer0_1_24_16x16_d0 = grp_subconv_3x3_16_no_re_fu_7115_output_r_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer0_1_24_16x16_d0 = grp_subconv_3x3_32_strid_fu_7102_output_r_d0.read();
    } else {
        buffer0_1_24_16x16_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer0_1_24_16x16_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()))) {
        buffer0_1_24_16x16_we0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()))) {
        buffer0_1_24_16x16_we0 = grp_subconv_3x3_16_no_re_fu_7115_output_r_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer0_1_24_16x16_we0 = grp_subconv_3x3_32_strid_fu_7102_output_r_we0.read();
    } else {
        buffer0_1_24_16x16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_48_8x8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read())) {
        buffer0_1_48_8x8_address0 =  (sc_lv<12>) (tmp_1728_cast_reg_33475.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state477.read())) {
        buffer0_1_48_8x8_address0 =  (sc_lv<12>) (tmp_1667_cast_fu_21402_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state472.read())) {
        buffer0_1_48_8x8_address0 =  (sc_lv<12>) (tmp_1665_cast_reg_33025.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        buffer0_1_48_8x8_address0 =  (sc_lv<12>) (tmp_1592_cast_fu_20090_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read())) {
        buffer0_1_48_8x8_address0 =  (sc_lv<12>) (tmp_1590_cast_reg_32575.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        buffer0_1_48_8x8_address0 =  (sc_lv<12>) (tmp_1520_cast_fu_18794_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read())) {
        buffer0_1_48_8x8_address0 =  (sc_lv<12>) (tmp_1518_cast_reg_32125.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read())) {
        buffer0_1_48_8x8_address0 =  (sc_lv<12>) (tmp_1448_cast_fu_17498_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read())) {
        buffer0_1_48_8x8_address0 =  (sc_lv<12>) (tmp_1446_cast_reg_31675.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read())) {
        buffer0_1_48_8x8_address0 =  (sc_lv<12>) (tmp_1377_cast_fu_16210_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read())) {
        buffer0_1_48_8x8_address0 =  (sc_lv<12>) (tmp_1375_cast_reg_31225.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read())) {
        buffer0_1_48_8x8_address0 =  (sc_lv<12>) (tmp_1304_cast_fu_14902_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read())) {
        buffer0_1_48_8x8_address0 =  (sc_lv<12>) (tmp_1302_cast_reg_30775.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read())) {
        buffer0_1_48_8x8_address0 =  (sc_lv<12>) (tmp_1233_cast_fu_13606_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read())) {
        buffer0_1_48_8x8_address0 =  (sc_lv<12>) (tmp_1231_cast_reg_30325.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read())) {
        buffer0_1_48_8x8_address0 =  (sc_lv<12>) (tmp_1162_cast_fu_12314_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state350.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state473.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state514.read()))) {
        buffer0_1_48_8x8_address0 = grp_shuffle_48_fu_7233_left_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state241.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state282.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state304.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state345.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state405.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state446.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state468.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()))) {
        buffer0_1_48_8x8_address0 = grp_subconv_1x1_8_fu_7164_input_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state253.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state417.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state458.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()))) {
        buffer0_1_48_8x8_address0 = grp_subconv_3x3_8_no_rel_fu_7152_output_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read()))) {
        buffer0_1_48_8x8_address0 = grp_subconv_3x3_16_strid_fu_7139_output_r_address0.read();
    } else {
        buffer0_1_48_8x8_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer0_1_48_8x8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state472.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state477.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        buffer0_1_48_8x8_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state350.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state473.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state514.read()))) {
        buffer0_1_48_8x8_ce0 = grp_shuffle_48_fu_7233_left_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state241.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state282.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state304.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state345.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state405.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state446.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state468.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()))) {
        buffer0_1_48_8x8_ce0 = grp_subconv_1x1_8_fu_7164_input_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state253.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state417.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state458.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()))) {
        buffer0_1_48_8x8_ce0 = grp_subconv_3x3_8_no_rel_fu_7152_output_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read()))) {
        buffer0_1_48_8x8_ce0 = grp_subconv_3x3_16_strid_fu_7139_output_r_ce0.read();
    } else {
        buffer0_1_48_8x8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_48_8x8_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state477.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        buffer0_1_48_8x8_d0 = shuffleunit1_6_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state472.read()))) {
        buffer0_1_48_8x8_d0 = shuffleunit1_5_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()))) {
        buffer0_1_48_8x8_d0 = shuffleunit1_4_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read()))) {
        buffer0_1_48_8x8_d0 = shuffleunit1_3_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read()))) {
        buffer0_1_48_8x8_d0 = shuffleunit1_2_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()))) {
        buffer0_1_48_8x8_d0 = shuffleunit1_1_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()))) {
        buffer0_1_48_8x8_d0 = shuffleunit1_0_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()))) {
        buffer0_1_48_8x8_d0 = downsampleunit1_outp_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state253.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state417.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state458.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()))) {
        buffer0_1_48_8x8_d0 = grp_subconv_3x3_8_no_rel_fu_7152_output_r_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read()))) {
        buffer0_1_48_8x8_d0 = grp_subconv_3x3_16_strid_fu_7139_output_r_d0.read();
    } else {
        buffer0_1_48_8x8_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer0_1_48_8x8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state472.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state477.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        buffer0_1_48_8x8_we0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state253.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state417.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state458.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()))) {
        buffer0_1_48_8x8_we0 = grp_subconv_3x3_8_no_rel_fu_7152_output_r_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read()))) {
        buffer0_1_48_8x8_we0 = grp_subconv_3x3_16_strid_fu_7139_output_r_we0.read();
    } else {
        buffer0_1_48_8x8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_96_4x4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read())) {
        buffer0_1_96_4x4_address0 =  (sc_lv<11>) (tmp_2024_cast_reg_35423.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read())) {
        buffer0_1_96_4x4_address0 =  (sc_lv<11>) (tmp_1965_cast_fu_27006_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read())) {
        buffer0_1_96_4x4_address0 =  (sc_lv<11>) (tmp_1964_cast_reg_34973.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        buffer0_1_96_4x4_address0 =  (sc_lv<11>) (tmp_1895_cast_fu_25738_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read())) {
        buffer0_1_96_4x4_address0 =  (sc_lv<11>) (tmp_1894_cast_reg_34523.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read())) {
        buffer0_1_96_4x4_address0 =  (sc_lv<11>) (tmp_1824_cast_fu_24470_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state613.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state654.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state695.read()))) {
        buffer0_1_96_4x4_address0 = grp_shuffle_96_fu_7250_left_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state598.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state639.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state680.read()))) {
        buffer0_1_96_4x4_address0 = grp_subconv_3x3_4_no_rel_fu_7189_output_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state536.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state560.read()))) {
        buffer0_1_96_4x4_address0 = grp_subconv_3x3_8_stride_fu_7176_output_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state608.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state627.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state649.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state668.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state690.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state546.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state570.read()))) {
        buffer0_1_96_4x4_address0 = grp_subconv_1x1_4_fu_7127_input_r_address0.read();
    } else {
        buffer0_1_96_4x4_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer0_1_96_4x4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()))) {
        buffer0_1_96_4x4_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state613.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state654.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state695.read()))) {
        buffer0_1_96_4x4_ce0 = grp_shuffle_96_fu_7250_left_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state598.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state639.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state680.read()))) {
        buffer0_1_96_4x4_ce0 = grp_subconv_3x3_4_no_rel_fu_7189_output_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state536.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state560.read()))) {
        buffer0_1_96_4x4_ce0 = grp_subconv_3x3_8_stride_fu_7176_output_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state608.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state627.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state649.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state668.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state690.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state546.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state570.read()))) {
        buffer0_1_96_4x4_ce0 = grp_subconv_1x1_4_fu_7127_input_r_ce0.read();
    } else {
        buffer0_1_96_4x4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_96_4x4_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()))) {
        buffer0_1_96_4x4_d0 = shuffleunit2_1_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()))) {
        buffer0_1_96_4x4_d0 = shuffleunit2_0_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()))) {
        buffer0_1_96_4x4_d0 = downsampleunit2_outp_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state598.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state639.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state680.read()))) {
        buffer0_1_96_4x4_d0 = grp_subconv_3x3_4_no_rel_fu_7189_output_r_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state536.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state560.read()))) {
        buffer0_1_96_4x4_d0 = grp_subconv_3x3_8_stride_fu_7176_output_r_d0.read();
    } else {
        buffer0_1_96_4x4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer0_1_96_4x4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()))) {
        buffer0_1_96_4x4_we0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state598.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state639.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state680.read()))) {
        buffer0_1_96_4x4_we0 = grp_subconv_3x3_4_no_rel_fu_7189_output_r_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state536.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state560.read()))) {
        buffer0_1_96_4x4_we0 = grp_subconv_3x3_8_stride_fu_7176_output_r_we0.read();
    } else {
        buffer0_1_96_4x4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_24_16x16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        buffer1_1_24_16x16_address0 = grp_shuffle_24_r_fu_7270_right_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        buffer1_1_24_16x16_address0 = grp_shuffle_24_l_fu_7262_left_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()))) {
        buffer1_1_24_16x16_address0 = grp_shuffle_24_fu_7221_buffer1_1_24_16x16_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()))) {
        buffer1_1_24_16x16_address0 = grp_subconv_1x1_16_fu_7201_output_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()))) {
        buffer1_1_24_16x16_address0 = grp_subconv_3x3_16_no_re_fu_7115_input_r_address0.read();
    } else {
        buffer1_1_24_16x16_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_24_16x16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        buffer1_1_24_16x16_ce0 = grp_shuffle_24_r_fu_7270_right_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        buffer1_1_24_16x16_ce0 = grp_shuffle_24_l_fu_7262_left_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()))) {
        buffer1_1_24_16x16_ce0 = grp_shuffle_24_fu_7221_buffer1_1_24_16x16_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()))) {
        buffer1_1_24_16x16_ce0 = grp_subconv_1x1_16_fu_7201_output_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()))) {
        buffer1_1_24_16x16_ce0 = grp_subconv_3x3_16_no_re_fu_7115_input_r_ce0.read();
    } else {
        buffer1_1_24_16x16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_24_16x16_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()))) {
        buffer1_1_24_16x16_we0 = grp_subconv_1x1_16_fu_7201_output_r_we0.read();
    } else {
        buffer1_1_24_16x16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_48_8x8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read())) {
        buffer1_1_48_8x8_address0 = grp_shuffle_48_r_fu_7286_right_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        buffer1_1_48_8x8_address0 = grp_shuffle_48_l_fu_7278_left_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state350.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state473.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state514.read()))) {
        buffer1_1_48_8x8_address0 = grp_shuffle_48_fu_7233_buffer1_1_48_8x8_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state241.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state282.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state304.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state345.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state405.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state446.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state468.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()))) {
        buffer1_1_48_8x8_address0 = grp_subconv_1x1_8_fu_7164_output_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state253.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state417.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state458.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()))) {
        buffer1_1_48_8x8_address0 = grp_subconv_3x3_8_no_rel_fu_7152_input_r_address0.read();
    } else {
        buffer1_1_48_8x8_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_48_8x8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read())) {
        buffer1_1_48_8x8_ce0 = grp_shuffle_48_r_fu_7286_right_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        buffer1_1_48_8x8_ce0 = grp_shuffle_48_l_fu_7278_left_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state350.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state473.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state514.read()))) {
        buffer1_1_48_8x8_ce0 = grp_shuffle_48_fu_7233_buffer1_1_48_8x8_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state241.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state282.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state304.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state345.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state405.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state446.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state468.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()))) {
        buffer1_1_48_8x8_ce0 = grp_subconv_1x1_8_fu_7164_output_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state253.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state417.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state458.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()))) {
        buffer1_1_48_8x8_ce0 = grp_subconv_3x3_8_no_rel_fu_7152_input_r_ce0.read();
    } else {
        buffer1_1_48_8x8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_48_8x8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state241.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state282.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state304.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state345.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state405.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state446.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state468.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()))) {
        buffer1_1_48_8x8_we0 = grp_subconv_1x1_8_fu_7164_output_r_we0.read();
    } else {
        buffer1_1_48_8x8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state572.read())) {
        buffer1_1_96_4x4_address0 = grp_shuffle_96_r_fu_7302_right_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read())) {
        buffer1_1_96_4x4_address0 = grp_shuffle_96_l_fu_7294_left_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state613.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state654.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state695.read()))) {
        buffer1_1_96_4x4_address0 = grp_shuffle_96_fu_7250_buffer1_1_96_4x4_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state598.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state639.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state680.read()))) {
        buffer1_1_96_4x4_address0 = grp_subconv_3x3_4_no_rel_fu_7189_input_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state608.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state627.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state649.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state668.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state690.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state546.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state570.read()))) {
        buffer1_1_96_4x4_address0 = grp_subconv_1x1_4_fu_7127_output_r_address0.read();
    } else {
        buffer1_1_96_4x4_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state572.read())) {
        buffer1_1_96_4x4_ce0 = grp_shuffle_96_r_fu_7302_right_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read())) {
        buffer1_1_96_4x4_ce0 = grp_shuffle_96_l_fu_7294_left_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state613.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state654.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state695.read()))) {
        buffer1_1_96_4x4_ce0 = grp_shuffle_96_fu_7250_buffer1_1_96_4x4_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state598.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state639.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state680.read()))) {
        buffer1_1_96_4x4_ce0 = grp_subconv_3x3_4_no_rel_fu_7189_input_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state608.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state627.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state649.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state668.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state690.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state546.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state570.read()))) {
        buffer1_1_96_4x4_ce0 = grp_subconv_1x1_4_fu_7127_output_r_ce0.read();
    } else {
        buffer1_1_96_4x4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state608.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state627.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state649.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state668.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state690.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state546.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state570.read()))) {
        buffer1_1_96_4x4_we0 = grp_subconv_1x1_4_fu_7127_output_r_we0.read();
    } else {
        buffer1_1_96_4x4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ci26_cast_fu_10451_p1() {
    ci26_cast_fu_10451_p1 = esl_zext<7,5>(ci26_reg_3763.read());
}

void ShuffleNetV2::thread_ci28_cast_fu_11169_p1() {
    ci28_cast_fu_11169_p1 = esl_zext<7,5>(ci28_reg_3884.read());
}

void ShuffleNetV2::thread_ci30_cast_fu_11883_p1() {
    ci30_cast_fu_11883_p1 = esl_zext<7,5>(ci30_reg_4005.read());
}

void ShuffleNetV2::thread_ci32_cast_fu_12382_p1() {
    ci32_cast_fu_12382_p1 = esl_zext<7,5>(ci32_reg_4093.read());
}

void ShuffleNetV2::thread_ci34_cast_fu_13096_p1() {
    ci34_cast_fu_13096_p1 = esl_zext<7,5>(ci34_reg_4214.read());
}

void ShuffleNetV2::thread_ci36_cast_fu_13674_p1() {
    ci36_cast_fu_13674_p1 = esl_zext<7,5>(ci36_reg_4335.read());
}

void ShuffleNetV2::thread_ci38_cast_fu_14388_p1() {
    ci38_cast_fu_14388_p1 = esl_zext<7,5>(ci38_reg_4456.read());
}

void ShuffleNetV2::thread_ci40_cast_fu_14970_p1() {
    ci40_cast_fu_14970_p1 = esl_zext<7,5>(ci40_reg_4577.read());
}

void ShuffleNetV2::thread_ci42_cast_fu_15696_p1() {
    ci42_cast_fu_15696_p1 = esl_zext<7,5>(ci42_reg_4698.read());
}

void ShuffleNetV2::thread_ci44_cast_fu_16278_p1() {
    ci44_cast_fu_16278_p1 = esl_zext<7,5>(ci44_reg_4819.read());
}

void ShuffleNetV2::thread_ci46_cast_fu_16988_p1() {
    ci46_cast_fu_16988_p1 = esl_zext<7,5>(ci46_reg_4940.read());
}

void ShuffleNetV2::thread_ci48_cast_fu_17566_p1() {
    ci48_cast_fu_17566_p1 = esl_zext<7,5>(ci48_reg_5061.read());
}

void ShuffleNetV2::thread_ci50_cast_fu_18284_p1() {
    ci50_cast_fu_18284_p1 = esl_zext<7,5>(ci50_reg_5182.read());
}

void ShuffleNetV2::thread_ci52_cast_fu_18862_p1() {
    ci52_cast_fu_18862_p1 = esl_zext<7,5>(ci52_reg_5303.read());
}

void ShuffleNetV2::thread_ci54_cast_fu_19580_p1() {
    ci54_cast_fu_19580_p1 = esl_zext<7,5>(ci54_reg_5424.read());
}

void ShuffleNetV2::thread_ci56_cast_fu_20158_p1() {
    ci56_cast_fu_20158_p1 = esl_zext<7,5>(ci56_reg_5545.read());
}

void ShuffleNetV2::thread_ci58_cast_fu_20880_p1() {
    ci58_cast_fu_20880_p1 = esl_zext<7,5>(ci58_reg_5666.read());
}

void ShuffleNetV2::thread_ci60_cast_fu_21470_p1() {
    ci60_cast_fu_21470_p1 = esl_zext<7,5>(ci60_reg_5787.read());
}

void ShuffleNetV2::thread_ci62_cast_fu_22192_p1() {
    ci62_cast_fu_22192_p1 = esl_zext<7,5>(ci62_reg_5908.read());
}

void ShuffleNetV2::thread_ci64_cast_fu_22649_p1() {
    ci64_cast_fu_22649_p1 = esl_zext<8,5>(ci64_reg_5996.read());
}

void ShuffleNetV2::thread_ci66_cast_fu_23351_p1() {
    ci66_cast_fu_23351_p1 = esl_zext<8,5>(ci66_reg_6117.read());
}

void ShuffleNetV2::thread_ci68_cast_fu_24053_p1() {
    ci68_cast_fu_24053_p1 = esl_zext<8,5>(ci68_reg_6238.read());
}

void ShuffleNetV2::thread_ci70_cast_fu_24536_p1() {
    ci70_cast_fu_24536_p1 = esl_zext<8,5>(ci70_reg_6326.read());
}

void ShuffleNetV2::thread_ci72_cast_fu_25230_p1() {
    ci72_cast_fu_25230_p1 = esl_zext<8,5>(ci72_reg_6447.read());
}

void ShuffleNetV2::thread_ci74_cast_fu_25804_p1() {
    ci74_cast_fu_25804_p1 = esl_zext<8,5>(ci74_reg_6568.read());
}

void ShuffleNetV2::thread_ci76_cast_fu_26510_p1() {
    ci76_cast_fu_26510_p1 = esl_zext<8,5>(ci76_reg_6689.read());
}

void ShuffleNetV2::thread_ci78_cast_fu_27072_p1() {
    ci78_cast_fu_27072_p1 = esl_zext<8,5>(ci78_reg_6810.read());
}

void ShuffleNetV2::thread_ci80_cast_fu_27760_p1() {
    ci80_cast_fu_27760_p1 = esl_zext<8,5>(ci80_reg_6931.read());
}

void ShuffleNetV2::thread_ci_11_fu_7743_p2() {
    ci_11_fu_7743_p2 = (!ci10_reg_3113.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci10_reg_3113.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_13_fu_8103_p2() {
    ci_13_fu_8103_p2 = (!ci12_reg_3192.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci12_reg_3192.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_15_fu_8391_p2() {
    ci_15_fu_8391_p2 = (!ci14_reg_3259.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci14_reg_3259.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_17_fu_8755_p2() {
    ci_17_fu_8755_p2 = (!ci16_reg_3338.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci16_reg_3338.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_19_fu_9128_p2() {
    ci_19_fu_9128_p2 = (!ci18_reg_3438.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci18_reg_3438.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_21_fu_9494_p2() {
    ci_21_fu_9494_p2 = (!ci20_reg_3517.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci20_reg_3517.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_23_fu_9865_p2() {
    ci_23_fu_9865_p2 = (!ci22_reg_3617.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci22_reg_3617.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_25_fu_10239_p2() {
    ci_25_fu_10239_p2 = (!ci24_reg_3696.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci24_reg_3696.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_27_fu_10461_p2() {
    ci_27_fu_10461_p2 = (!ci26_reg_3763.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci26_reg_3763.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_29_fu_11179_p2() {
    ci_29_fu_11179_p2 = (!ci28_reg_3884.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci28_reg_3884.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_31_fu_11893_p2() {
    ci_31_fu_11893_p2 = (!ci30_reg_4005.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci30_reg_4005.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_33_fu_12392_p2() {
    ci_33_fu_12392_p2 = (!ci32_reg_4093.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci32_reg_4093.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_35_fu_13106_p2() {
    ci_35_fu_13106_p2 = (!ci34_reg_4214.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci34_reg_4214.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_37_fu_13684_p2() {
    ci_37_fu_13684_p2 = (!ci36_reg_4335.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci36_reg_4335.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_39_fu_14398_p2() {
    ci_39_fu_14398_p2 = (!ci38_reg_4456.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci38_reg_4456.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_41_fu_14980_p2() {
    ci_41_fu_14980_p2 = (!ci40_reg_4577.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci40_reg_4577.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_43_fu_15706_p2() {
    ci_43_fu_15706_p2 = (!ci42_reg_4698.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci42_reg_4698.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_45_fu_16288_p2() {
    ci_45_fu_16288_p2 = (!ci44_reg_4819.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci44_reg_4819.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_47_fu_16998_p2() {
    ci_47_fu_16998_p2 = (!ci46_reg_4940.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci46_reg_4940.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_49_fu_17576_p2() {
    ci_49_fu_17576_p2 = (!ci48_reg_5061.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci48_reg_5061.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_51_fu_18294_p2() {
    ci_51_fu_18294_p2 = (!ci50_reg_5182.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci50_reg_5182.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_53_fu_18872_p2() {
    ci_53_fu_18872_p2 = (!ci52_reg_5303.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci52_reg_5303.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_55_fu_19590_p2() {
    ci_55_fu_19590_p2 = (!ci54_reg_5424.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci54_reg_5424.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_57_fu_20168_p2() {
    ci_57_fu_20168_p2 = (!ci56_reg_5545.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci56_reg_5545.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_59_fu_20890_p2() {
    ci_59_fu_20890_p2 = (!ci58_reg_5666.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci58_reg_5666.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_61_fu_21480_p2() {
    ci_61_fu_21480_p2 = (!ci60_reg_5787.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci60_reg_5787.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_63_fu_22202_p2() {
    ci_63_fu_22202_p2 = (!ci62_reg_5908.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci62_reg_5908.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_65_fu_22659_p2() {
    ci_65_fu_22659_p2 = (!ci64_reg_5996.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci64_reg_5996.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_67_fu_23361_p2() {
    ci_67_fu_23361_p2 = (!ci66_reg_6117.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci66_reg_6117.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_69_fu_24063_p2() {
    ci_69_fu_24063_p2 = (!ci68_reg_6238.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci68_reg_6238.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_71_fu_24546_p2() {
    ci_71_fu_24546_p2 = (!ci70_reg_6326.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci70_reg_6326.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_73_fu_25240_p2() {
    ci_73_fu_25240_p2 = (!ci72_reg_6447.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci72_reg_6447.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_75_fu_25814_p2() {
    ci_75_fu_25814_p2 = (!ci74_reg_6568.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci74_reg_6568.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_77_fu_26520_p2() {
    ci_77_fu_26520_p2 = (!ci76_reg_6689.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci76_reg_6689.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_79_fu_27082_p2() {
    ci_79_fu_27082_p2 = (!ci78_reg_6810.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci78_reg_6810.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_81_fu_27770_p2() {
    ci_81_fu_27770_p2 = (!ci80_reg_6931.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci80_reg_6931.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_82_fu_28163_p2() {
    ci_82_fu_28163_p2 = (!ci_i_reg_7031.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(ci_i_reg_7031.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void ShuffleNetV2::thread_ci_fu_7460_p2() {
    ci_fu_7460_p2 = (!ci9_reg_3034.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci9_reg_3034.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co101_cast1_fu_16582_p1() {
    co101_cast1_fu_16582_p1 = esl_zext<9,5>(co100_reg_4863.read());
}

void ShuffleNetV2::thread_co101_cast_fu_16578_p1() {
    co101_cast_fu_16578_p1 = esl_zext<7,5>(co100_reg_4863.read());
}

void ShuffleNetV2::thread_co103_cast_fu_16924_p1() {
    co103_cast_fu_16924_p1 = esl_zext<11,5>(co102_reg_4929.read());
}

void ShuffleNetV2::thread_co106_cast_fu_17371_p1() {
    co106_cast_fu_17371_p1 = esl_zext<7,6>(co106_reg_5017.read());
}

void ShuffleNetV2::thread_co108_cast_fu_17502_p1() {
    co108_cast_fu_17502_p1 = esl_zext<11,5>(co108_reg_5050.read());
}

void ShuffleNetV2::thread_co111_cast424_cast_fu_17870_p1() {
    co111_cast424_cast_fu_17870_p1 = esl_zext<8,5>(co110_reg_5105.read());
}

void ShuffleNetV2::thread_co111_cast_fu_17866_p1() {
    co111_cast_fu_17866_p1 = esl_zext<7,5>(co110_reg_5105.read());
}

void ShuffleNetV2::thread_co113_cast_fu_18220_p1() {
    co113_cast_fu_18220_p1 = esl_zext<11,5>(co112_reg_5171.read());
}

void ShuffleNetV2::thread_co116_cast_fu_18667_p1() {
    co116_cast_fu_18667_p1 = esl_zext<7,6>(co116_reg_5259.read());
}

void ShuffleNetV2::thread_co118_cast_fu_18798_p1() {
    co118_cast_fu_18798_p1 = esl_zext<11,5>(co118_reg_5292.read());
}

void ShuffleNetV2::thread_co121_cast382_cast_fu_19166_p1() {
    co121_cast382_cast_fu_19166_p1 = esl_zext<8,5>(co120_reg_5347.read());
}

void ShuffleNetV2::thread_co121_cast_fu_19162_p1() {
    co121_cast_fu_19162_p1 = esl_zext<7,5>(co120_reg_5347.read());
}

void ShuffleNetV2::thread_co123_cast_fu_19516_p1() {
    co123_cast_fu_19516_p1 = esl_zext<11,5>(co122_reg_5413.read());
}

void ShuffleNetV2::thread_co126_cast_fu_19963_p1() {
    co126_cast_fu_19963_p1 = esl_zext<7,6>(co126_reg_5501.read());
}

void ShuffleNetV2::thread_co128_cast354_cast_fu_20094_p1() {
    co128_cast354_cast_fu_20094_p1 = esl_zext<10,5>(co128_reg_5534.read());
}

void ShuffleNetV2::thread_co131_cast1_fu_20470_p1() {
    co131_cast1_fu_20470_p1 = esl_zext<10,5>(co130_reg_5589.read());
}

void ShuffleNetV2::thread_co131_cast_fu_20466_p1() {
    co131_cast_fu_20466_p1 = esl_zext<7,5>(co130_reg_5589.read());
}

void ShuffleNetV2::thread_co133_cast331_cast_fu_20816_p1() {
    co133_cast331_cast_fu_20816_p1 = esl_zext<10,5>(co132_reg_5655.read());
}

void ShuffleNetV2::thread_co136_cast_fu_21275_p1() {
    co136_cast_fu_21275_p1 = esl_zext<7,6>(co136_reg_5743.read());
}

void ShuffleNetV2::thread_co138_cast312_cast_fu_21406_p1() {
    co138_cast312_cast_fu_21406_p1 = esl_zext<9,5>(co138_reg_5776.read());
}

void ShuffleNetV2::thread_co141_cast1_fu_21786_p1() {
    co141_cast1_fu_21786_p1 = esl_zext<10,5>(co140_reg_5831.read());
}

void ShuffleNetV2::thread_co141_cast_fu_21782_p1() {
    co141_cast_fu_21782_p1 = esl_zext<7,5>(co140_reg_5831.read());
}

void ShuffleNetV2::thread_co143_cast_fu_22128_p1() {
    co143_cast_fu_22128_p1 = esl_zext<12,5>(co142_reg_5897.read());
}

void ShuffleNetV2::thread_co146_cast_fu_22587_p1() {
    co146_cast_fu_22587_p1 = esl_zext<12,5>(co146_reg_5985.read());
}

void ShuffleNetV2::thread_co149_cast1_fu_22947_p1() {
    co149_cast1_fu_22947_p1 = esl_zext<10,5>(co148_reg_6040.read());
}

void ShuffleNetV2::thread_co149_cast_fu_22943_p1() {
    co149_cast_fu_22943_p1 = esl_zext<8,5>(co148_reg_6040.read());
}

void ShuffleNetV2::thread_co151_cast_fu_23289_p1() {
    co151_cast_fu_23289_p1 = esl_zext<12,5>(co150_reg_6106.read());
}

void ShuffleNetV2::thread_co153_cast1_fu_23653_p1() {
    co153_cast1_fu_23653_p1 = esl_zext<10,5>(co152_reg_6161.read());
}

void ShuffleNetV2::thread_co153_cast_fu_23649_p1() {
    co153_cast_fu_23649_p1 = esl_zext<8,5>(co152_reg_6161.read());
}

void ShuffleNetV2::thread_co155_cast_fu_23991_p1() {
    co155_cast_fu_23991_p1 = esl_zext<12,5>(co154_reg_6227.read());
}

void ShuffleNetV2::thread_co157_cast_fu_24343_p1() {
    co157_cast_fu_24343_p1 = esl_zext<8,7>(co156_reg_6282.read());
}

void ShuffleNetV2::thread_co158_cast_fu_24474_p1() {
    co158_cast_fu_24474_p1 = esl_zext<12,5>(co158_reg_6315.read());
}

void ShuffleNetV2::thread_co161_cast1_fu_24830_p1() {
    co161_cast1_fu_24830_p1 = esl_zext<10,5>(co160_reg_6370.read());
}

void ShuffleNetV2::thread_co161_cast_fu_24826_p1() {
    co161_cast_fu_24826_p1 = esl_zext<8,5>(co160_reg_6370.read());
}

void ShuffleNetV2::thread_co163_cast188_cast_fu_25168_p1() {
    co163_cast188_cast_fu_25168_p1 = esl_zext<11,5>(co162_reg_6436.read());
}

void ShuffleNetV2::thread_co166_cast_fu_25611_p1() {
    co166_cast_fu_25611_p1 = esl_zext<8,7>(co166_reg_6524.read());
}

void ShuffleNetV2::thread_co168_cast_fu_25742_p1() {
    co168_cast_fu_25742_p1 = esl_zext<13,5>(co168_reg_6557.read());
}

void ShuffleNetV2::thread_co16_cast_fu_7651_p1() {
    co16_cast_fu_7651_p1 = esl_zext<6,5>(co16_reg_3102.read());
}

void ShuffleNetV2::thread_co171_cast155_cast_fu_26094_p1() {
    co171_cast155_cast_fu_26094_p1 = esl_zext<9,5>(co170_reg_6612.read());
}

void ShuffleNetV2::thread_co171_cast_fu_26090_p1() {
    co171_cast_fu_26090_p1 = esl_zext<8,5>(co170_reg_6612.read());
}

void ShuffleNetV2::thread_co173_cast_fu_26448_p1() {
    co173_cast_fu_26448_p1 = esl_zext<13,5>(co172_reg_6678.read());
}

void ShuffleNetV2::thread_co176_cast_fu_26879_p1() {
    co176_cast_fu_26879_p1 = esl_zext<8,7>(co176_reg_6766.read());
}

void ShuffleNetV2::thread_co178_cast_fu_27010_p1() {
    co178_cast_fu_27010_p1 = esl_zext<13,5>(co178_reg_6799.read());
}

void ShuffleNetV2::thread_co181_cast1_fu_27362_p1() {
    co181_cast1_fu_27362_p1 = esl_zext<11,5>(co180_reg_6854.read());
}

void ShuffleNetV2::thread_co181_cast_fu_27358_p1() {
    co181_cast_fu_27358_p1 = esl_zext<8,5>(co180_reg_6854.read());
}

void ShuffleNetV2::thread_co183_cast_fu_27698_p1() {
    co183_cast_fu_27698_p1 = esl_zext<13,5>(co182_reg_6920.read());
}

void ShuffleNetV2::thread_co19_cast_fu_7808_p1() {
    co19_cast_fu_7808_p1 = esl_zext<6,5>(co19_reg_3136.read());
}

void ShuffleNetV2::thread_co23_cast_fu_8011_p1() {
    co23_cast_fu_8011_p1 = esl_zext<7,5>(co23_reg_3181.read());
}

void ShuffleNetV2::thread_co26_cast_fu_8168_p1() {
    co26_cast_fu_8168_p1 = esl_zext<6,5>(co26_reg_3215.read());
}

void ShuffleNetV2::thread_co29_cast_fu_8299_p1() {
    co29_cast_fu_8299_p1 = esl_zext<7,5>(co29_reg_3248.read());
}

void ShuffleNetV2::thread_co31_cast_fu_8456_p1() {
    co31_cast_fu_8456_p1 = esl_zext<7,5>(co31_reg_3282.read());
}

void ShuffleNetV2::thread_co36_cast_fu_8905_p1() {
    co36_cast_fu_8905_p1 = esl_zext<6,5>(co36_reg_3394.read());
}

void ShuffleNetV2::thread_co38_cast_fu_9036_p1() {
    co38_cast_fu_9036_p1 = esl_zext<8,5>(co38_reg_3427.read());
}

void ShuffleNetV2::thread_co41_cast_fu_9197_p1() {
    co41_cast_fu_9197_p1 = esl_zext<7,5>(co40_reg_3461.read());
}

void ShuffleNetV2::thread_co43_cast_fu_9402_p1() {
    co43_cast_fu_9402_p1 = esl_zext<8,5>(co42_reg_3506.read());
}

void ShuffleNetV2::thread_co46_cast_fu_9642_p1() {
    co46_cast_fu_9642_p1 = esl_zext<6,5>(co46_reg_3573.read());
}

void ShuffleNetV2::thread_co48_cast_fu_9773_p1() {
    co48_cast_fu_9773_p1 = esl_zext<8,5>(co48_reg_3606.read());
}

void ShuffleNetV2::thread_co56_cast_fu_10387_p1() {
    co56_cast_fu_10387_p1 = esl_zext<9,5>(co56_reg_3752.read());
}

void ShuffleNetV2::thread_co59_cast1_fu_10755_p1() {
    co59_cast1_fu_10755_p1 = esl_zext<8,5>(co58_reg_3807.read());
}

void ShuffleNetV2::thread_co59_cast_fu_10751_p1() {
    co59_cast_fu_10751_p1 = esl_zext<7,5>(co58_reg_3807.read());
}

void ShuffleNetV2::thread_co61_cast_fu_11105_p1() {
    co61_cast_fu_11105_p1 = esl_zext<9,5>(co60_reg_3873.read());
}

void ShuffleNetV2::thread_co63_cast1_fu_11477_p1() {
    co63_cast1_fu_11477_p1 = esl_zext<8,5>(co62_reg_3928.read());
}

void ShuffleNetV2::thread_co63_cast_fu_11473_p1() {
    co63_cast_fu_11473_p1 = esl_zext<7,5>(co62_reg_3928.read());
}

void ShuffleNetV2::thread_co65_cast_fu_11819_p1() {
    co65_cast_fu_11819_p1 = esl_zext<10,5>(co64_reg_3994.read());
}

void ShuffleNetV2::thread_co67_cast_fu_12187_p1() {
    co67_cast_fu_12187_p1 = esl_zext<7,6>(co66_reg_4049.read());
}

void ShuffleNetV2::thread_co68_cast_fu_12318_p1() {
    co68_cast_fu_12318_p1 = esl_zext<10,5>(co68_reg_4082.read());
}

void ShuffleNetV2::thread_co71_cast1_fu_12686_p1() {
    co71_cast1_fu_12686_p1 = esl_zext<9,5>(co70_reg_4137.read());
}

void ShuffleNetV2::thread_co71_cast_fu_12682_p1() {
    co71_cast_fu_12682_p1 = esl_zext<7,5>(co70_reg_4137.read());
}

void ShuffleNetV2::thread_co73_cast_fu_13032_p1() {
    co73_cast_fu_13032_p1 = esl_zext<10,5>(co72_reg_4203.read());
}

void ShuffleNetV2::thread_co76_cast_fu_13479_p1() {
    co76_cast_fu_13479_p1 = esl_zext<7,6>(co76_reg_4291.read());
}

void ShuffleNetV2::thread_co78_cast_fu_13610_p1() {
    co78_cast_fu_13610_p1 = esl_zext<10,5>(co78_reg_4324.read());
}

void ShuffleNetV2::thread_co81_cast1_fu_13978_p1() {
    co81_cast1_fu_13978_p1 = esl_zext<9,5>(co80_reg_4379.read());
}

void ShuffleNetV2::thread_co81_cast_fu_13974_p1() {
    co81_cast_fu_13974_p1 = esl_zext<7,5>(co80_reg_4379.read());
}

void ShuffleNetV2::thread_co83_cast_fu_14324_p1() {
    co83_cast_fu_14324_p1 = esl_zext<10,5>(co82_reg_4445.read());
}

void ShuffleNetV2::thread_co86_cast_fu_14775_p1() {
    co86_cast_fu_14775_p1 = esl_zext<7,6>(co86_reg_4533.read());
}

void ShuffleNetV2::thread_co88_cast522_cast_fu_14906_p1() {
    co88_cast522_cast_fu_14906_p1 = esl_zext<9,5>(co88_reg_4566.read());
}

void ShuffleNetV2::thread_co91_cast1_fu_15286_p1() {
    co91_cast1_fu_15286_p1 = esl_zext<9,5>(co90_reg_4621.read());
}

void ShuffleNetV2::thread_co91_cast_fu_15282_p1() {
    co91_cast_fu_15282_p1 = esl_zext<7,5>(co90_reg_4621.read());
}

void ShuffleNetV2::thread_co93_cast_fu_15632_p1() {
    co93_cast_fu_15632_p1 = esl_zext<11,5>(co92_reg_4687.read());
}

void ShuffleNetV2::thread_co96_cast_fu_16083_p1() {
    co96_cast_fu_16083_p1 = esl_zext<7,6>(co96_reg_4775.read());
}

void ShuffleNetV2::thread_co98_cast_fu_16214_p1() {
    co98_cast_fu_16214_p1 = esl_zext<11,5>(co98_reg_4808.read());
}

void ShuffleNetV2::thread_co_101_fu_16592_p2() {
    co_101_fu_16592_p2 = (!co100_reg_4863.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co100_reg_4863.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_103_fu_16934_p2() {
    co_103_fu_16934_p2 = (!co102_reg_4929.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co102_reg_4929.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_105_fu_17294_p2() {
    co_105_fu_17294_p2 = (!co104_reg_4984.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co104_reg_4984.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_107_fu_17381_p2() {
    co_107_fu_17381_p2 = (!co106_reg_5017.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co106_reg_5017.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_109_fu_17512_p2() {
    co_109_fu_17512_p2 = (!co108_reg_5050.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co108_reg_5050.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_111_fu_17880_p2() {
    co_111_fu_17880_p2 = (!co110_reg_5105.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co110_reg_5105.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_113_fu_18230_p2() {
    co_113_fu_18230_p2 = (!co112_reg_5171.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co112_reg_5171.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_115_fu_18590_p2() {
    co_115_fu_18590_p2 = (!co114_reg_5226.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co114_reg_5226.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_117_fu_18677_p2() {
    co_117_fu_18677_p2 = (!co116_reg_5259.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co116_reg_5259.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_119_fu_18808_p2() {
    co_119_fu_18808_p2 = (!co118_reg_5292.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co118_reg_5292.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_121_fu_19176_p2() {
    co_121_fu_19176_p2 = (!co120_reg_5347.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co120_reg_5347.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_123_fu_19526_p2() {
    co_123_fu_19526_p2 = (!co122_reg_5413.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co122_reg_5413.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_125_fu_19886_p2() {
    co_125_fu_19886_p2 = (!co124_reg_5468.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co124_reg_5468.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_127_fu_19973_p2() {
    co_127_fu_19973_p2 = (!co126_reg_5501.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co126_reg_5501.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_129_fu_20104_p2() {
    co_129_fu_20104_p2 = (!co128_reg_5534.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co128_reg_5534.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_131_fu_20480_p2() {
    co_131_fu_20480_p2 = (!co130_reg_5589.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co130_reg_5589.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_133_fu_20826_p2() {
    co_133_fu_20826_p2 = (!co132_reg_5655.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co132_reg_5655.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_135_fu_21198_p2() {
    co_135_fu_21198_p2 = (!co134_reg_5710.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co134_reg_5710.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_137_fu_21285_p2() {
    co_137_fu_21285_p2 = (!co136_reg_5743.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co136_reg_5743.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_139_fu_21416_p2() {
    co_139_fu_21416_p2 = (!co138_reg_5776.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co138_reg_5776.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_141_fu_21796_p2() {
    co_141_fu_21796_p2 = (!co140_reg_5831.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co140_reg_5831.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_143_fu_22138_p2() {
    co_143_fu_22138_p2 = (!co142_reg_5897.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co142_reg_5897.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_145_fu_22510_p2() {
    co_145_fu_22510_p2 = (!co144_reg_5952.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co144_reg_5952.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_147_fu_22597_p2() {
    co_147_fu_22597_p2 = (!co146_reg_5985.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co146_reg_5985.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_149_fu_22957_p2() {
    co_149_fu_22957_p2 = (!co148_reg_6040.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co148_reg_6040.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_151_fu_23299_p2() {
    co_151_fu_23299_p2 = (!co150_reg_6106.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co150_reg_6106.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_153_fu_23663_p2() {
    co_153_fu_23663_p2 = (!co152_reg_6161.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co152_reg_6161.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_155_fu_24001_p2() {
    co_155_fu_24001_p2 = (!co154_reg_6227.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co154_reg_6227.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_157_fu_24353_p2() {
    co_157_fu_24353_p2 = (!co156_reg_6282.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co156_reg_6282.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_159_fu_24484_p2() {
    co_159_fu_24484_p2 = (!co158_reg_6315.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co158_reg_6315.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_161_fu_24840_p2() {
    co_161_fu_24840_p2 = (!co160_reg_6370.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co160_reg_6370.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_163_fu_25178_p2() {
    co_163_fu_25178_p2 = (!co162_reg_6436.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co162_reg_6436.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_165_fu_25534_p2() {
    co_165_fu_25534_p2 = (!co164_reg_6491.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co164_reg_6491.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_167_fu_25621_p2() {
    co_167_fu_25621_p2 = (!co166_reg_6524.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co166_reg_6524.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_169_fu_25752_p2() {
    co_169_fu_25752_p2 = (!co168_reg_6557.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co168_reg_6557.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_171_fu_26104_p2() {
    co_171_fu_26104_p2 = (!co170_reg_6612.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co170_reg_6612.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_173_fu_26458_p2() {
    co_173_fu_26458_p2 = (!co172_reg_6678.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co172_reg_6678.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_175_fu_26802_p2() {
    co_175_fu_26802_p2 = (!co174_reg_6733.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co174_reg_6733.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_177_fu_26889_p2() {
    co_177_fu_26889_p2 = (!co176_reg_6766.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co176_reg_6766.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_179_fu_27020_p2() {
    co_179_fu_27020_p2 = (!co178_reg_6799.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co178_reg_6799.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_181_fu_27372_p2() {
    co_181_fu_27372_p2 = (!co180_reg_6854.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co180_reg_6854.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_183_fu_27708_p2() {
    co_183_fu_27708_p2 = (!co182_reg_6920.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co182_reg_6920.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_185_fu_28052_p2() {
    co_185_fu_28052_p2 = (!co184_reg_6975.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co184_reg_6975.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_186_fu_28135_p2() {
    co_186_fu_28135_p2 = (!co_i_reg_7008.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(co_i_reg_7008.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_co_25_fu_7518_p2() {
    co_25_fu_7518_p2 = (!co12_reg_3057.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co12_reg_3057.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_26_fu_7661_p2() {
    co_26_fu_7661_p2 = (!co16_reg_3102.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co16_reg_3102.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_27_fu_7818_p2() {
    co_27_fu_7818_p2 = (!co19_reg_3136.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co19_reg_3136.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_28_fu_8021_p2() {
    co_28_fu_8021_p2 = (!co23_reg_3181.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co23_reg_3181.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_29_fu_8178_p2() {
    co_29_fu_8178_p2 = (!co26_reg_3215.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co26_reg_3215.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_30_fu_8309_p2() {
    co_30_fu_8309_p2 = (!co29_reg_3248.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co29_reg_3248.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_32_fu_8466_p2() {
    co_32_fu_8466_p2 = (!co31_reg_3282.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co31_reg_3282.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_34_fu_8667_p2() {
    co_34_fu_8667_p2 = (!co33_reg_3327.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co33_reg_3327.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_36_fu_8828_p2() {
    co_36_fu_8828_p2 = (!co35_reg_3361.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co35_reg_3361.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_37_fu_8915_p2() {
    co_37_fu_8915_p2 = (!co36_reg_3394.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co36_reg_3394.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_39_fu_9046_p2() {
    co_39_fu_9046_p2 = (!co38_reg_3427.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co38_reg_3427.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_41_fu_9207_p2() {
    co_41_fu_9207_p2 = (!co40_reg_3461.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co40_reg_3461.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_43_fu_9412_p2() {
    co_43_fu_9412_p2 = (!co42_reg_3506.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co42_reg_3506.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_45_fu_9565_p2() {
    co_45_fu_9565_p2 = (!co44_reg_3540.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co44_reg_3540.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_47_fu_9652_p2() {
    co_47_fu_9652_p2 = (!co46_reg_3573.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co46_reg_3573.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_49_fu_9783_p2() {
    co_49_fu_9783_p2 = (!co48_reg_3606.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co48_reg_3606.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_51_fu_9934_p2() {
    co_51_fu_9934_p2 = (!co50_reg_3640.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co50_reg_3640.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_53_fu_10151_p2() {
    co_53_fu_10151_p2 = (!co52_reg_3685.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co52_reg_3685.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_55_fu_10310_p2() {
    co_55_fu_10310_p2 = (!co54_reg_3719.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co54_reg_3719.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_57_fu_10397_p2() {
    co_57_fu_10397_p2 = (!co56_reg_3752.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co56_reg_3752.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_59_fu_10765_p2() {
    co_59_fu_10765_p2 = (!co58_reg_3807.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co58_reg_3807.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_61_fu_11115_p2() {
    co_61_fu_11115_p2 = (!co60_reg_3873.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co60_reg_3873.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_63_fu_11487_p2() {
    co_63_fu_11487_p2 = (!co62_reg_3928.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co62_reg_3928.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_65_fu_11829_p2() {
    co_65_fu_11829_p2 = (!co64_reg_3994.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co64_reg_3994.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_67_fu_12197_p2() {
    co_67_fu_12197_p2 = (!co66_reg_4049.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co66_reg_4049.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_69_fu_12328_p2() {
    co_69_fu_12328_p2 = (!co68_reg_4082.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co68_reg_4082.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_71_fu_12696_p2() {
    co_71_fu_12696_p2 = (!co70_reg_4137.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co70_reg_4137.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_73_fu_13042_p2() {
    co_73_fu_13042_p2 = (!co72_reg_4203.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co72_reg_4203.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_75_fu_13402_p2() {
    co_75_fu_13402_p2 = (!co74_reg_4258.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co74_reg_4258.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_77_fu_13489_p2() {
    co_77_fu_13489_p2 = (!co76_reg_4291.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co76_reg_4291.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_79_fu_13620_p2() {
    co_79_fu_13620_p2 = (!co78_reg_4324.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co78_reg_4324.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_81_fu_13988_p2() {
    co_81_fu_13988_p2 = (!co80_reg_4379.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co80_reg_4379.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_83_fu_14334_p2() {
    co_83_fu_14334_p2 = (!co82_reg_4445.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co82_reg_4445.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_85_fu_14698_p2() {
    co_85_fu_14698_p2 = (!co84_reg_4500.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co84_reg_4500.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_87_fu_14785_p2() {
    co_87_fu_14785_p2 = (!co86_reg_4533.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co86_reg_4533.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_89_fu_14916_p2() {
    co_89_fu_14916_p2 = (!co88_reg_4566.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co88_reg_4566.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_91_fu_15296_p2() {
    co_91_fu_15296_p2 = (!co90_reg_4621.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co90_reg_4621.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_93_fu_15642_p2() {
    co_93_fu_15642_p2 = (!co92_reg_4687.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co92_reg_4687.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_95_fu_16006_p2() {
    co_95_fu_16006_p2 = (!co94_reg_4742.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co94_reg_4742.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_97_fu_16093_p2() {
    co_97_fu_16093_p2 = (!co96_reg_4775.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co96_reg_4775.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_99_fu_16224_p2() {
    co_99_fu_16224_p2 = (!co98_reg_4808.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co98_reg_4808.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_fu_7414_p2() {
    co_fu_7414_p2 = (!co9_reg_3023.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co9_reg_3023.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_conv1_bias_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        conv1_bias_address0 =  (sc_lv<5>) (tmp_reg_28196.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        conv1_bias_address0 = grp_conv1_fu_7042_bias_address0.read();
    } else {
        conv1_bias_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_conv1_bias_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        conv1_bias_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        conv1_bias_ce0 = grp_conv1_fu_7042_bias_ce0.read();
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

void ShuffleNetV2::thread_conv1_output_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        conv1_output_address0 = grp_subconv_3x3_32_strid_fu_7102_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        conv1_output_address0 = grp_subconv_1x1_32_fu_7090_conv1_output_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        conv1_output_address0 = grp_conv1_fu_7042_output_r_address0.read();
    } else {
        conv1_output_address0 = "XXXXXXXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_conv1_output_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        conv1_output_ce0 = grp_subconv_3x3_32_strid_fu_7102_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        conv1_output_ce0 = grp_subconv_1x1_32_fu_7090_conv1_output_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        conv1_output_ce0 = grp_conv1_fu_7042_output_r_ce0.read();
    } else {
        conv1_output_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        conv1_output_we0 = grp_conv1_fu_7042_output_r_we0.read();
    } else {
        conv1_output_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_weight_address0() {
    conv1_weight_address0 = grp_conv1_fu_7042_weight_address0.read();
}

void ShuffleNetV2::thread_conv1_weight_ce0() {
    conv1_weight_ce0 = grp_conv1_fu_7042_weight_ce0.read();
}

void ShuffleNetV2::thread_conv_last_bias_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        conv_last_bias_address0 =  (sc_lv<9>) (tmp_126_fu_7367_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state697.read())) {
        conv_last_bias_address0 = grp_conv_last_fu_7054_bias_address0.read();
    } else {
        conv_last_bias_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_bias_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        conv_last_bias_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state697.read())) {
        conv_last_bias_ce0 = grp_conv_last_fu_7054_bias_ce0.read();
    } else {
        conv_last_bias_ce0 = ap_const_logic_0;
    }
}

}

