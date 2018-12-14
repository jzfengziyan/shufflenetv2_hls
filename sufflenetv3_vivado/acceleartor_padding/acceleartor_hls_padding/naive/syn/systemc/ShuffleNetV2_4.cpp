#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        ShuffleConvs_0_Downs_address0 = grp_subconv_3x3_32_strid_fu_7254_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        ShuffleConvs_0_Downs_address0 = grp_subconv_1x1_32_p_fu_7242_ShuffleConvs_0_Downs_address0.read();
    } else {
        ShuffleConvs_0_Downs_address0 = "XXXXXXXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        ShuffleConvs_0_Downs_ce0 = grp_subconv_3x3_32_strid_fu_7254_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        ShuffleConvs_0_Downs_ce0 = grp_subconv_1x1_32_p_fu_7242_ShuffleConvs_0_Downs_ce0.read();
    } else {
        ShuffleConvs_0_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        ShuffleConvs_0_Downs_we0 = grp_subconv_1x1_32_p_fu_7242_ShuffleConvs_0_Downs_we0.read();
    } else {
        ShuffleConvs_0_Downs_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read())) {
        ShuffleConvs_1_Downs_address0 = grp_subconv_3x3_16_strid_fu_7292_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        ShuffleConvs_1_Downs_address0 = grp_subconv_1x1_16p_p_fu_7230_ShuffleConvs_1_Downs_address0.read();
    } else {
        ShuffleConvs_1_Downs_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read())) {
        ShuffleConvs_1_Downs_ce0 = grp_subconv_3x3_16_strid_fu_7292_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        ShuffleConvs_1_Downs_ce0 = grp_subconv_1x1_16p_p_fu_7230_ShuffleConvs_1_Downs_ce0.read();
    } else {
        ShuffleConvs_1_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        ShuffleConvs_1_Downs_we0 = grp_subconv_1x1_16p_p_fu_7230_ShuffleConvs_1_Downs_we0.read();
    } else {
        ShuffleConvs_1_Downs_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read())) {
        ShuffleConvs_2_Downs_address0 = grp_subconv_3x3_8_stride_fu_7267_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state528.read())) {
        ShuffleConvs_2_Downs_address0 = grp_subconv_1x1_8p_p_fu_7218_ShuffleConvs_2_Downs_address0.read();
    } else {
        ShuffleConvs_2_Downs_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read())) {
        ShuffleConvs_2_Downs_ce0 = grp_subconv_3x3_8_stride_fu_7267_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state528.read())) {
        ShuffleConvs_2_Downs_ce0 = grp_subconv_1x1_8p_p_fu_7218_ShuffleConvs_2_Downs_ce0.read();
    } else {
        ShuffleConvs_2_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state528.read())) {
        ShuffleConvs_2_Downs_we0 = grp_subconv_1x1_8p_p_fu_7218_ShuffleConvs_2_Downs_we0.read();
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

void ShuffleNetV2::thread_ap_CS_fsm_state704() {
    ap_CS_fsm_state704 = ap_CS_fsm.read()[703];
}

void ShuffleNetV2::thread_ap_CS_fsm_state705() {
    ap_CS_fsm_state705 = ap_CS_fsm.read()[704];
}

void ShuffleNetV2::thread_ap_CS_fsm_state706() {
    ap_CS_fsm_state706 = ap_CS_fsm.read()[705];
}

void ShuffleNetV2::thread_ap_CS_fsm_state707() {
    ap_CS_fsm_state707 = ap_CS_fsm.read()[706];
}

void ShuffleNetV2::thread_ap_CS_fsm_state708() {
    ap_CS_fsm_state708 = ap_CS_fsm.read()[707];
}

void ShuffleNetV2::thread_ap_CS_fsm_state709() {
    ap_CS_fsm_state709 = ap_CS_fsm.read()[708];
}

void ShuffleNetV2::thread_ap_CS_fsm_state71() {
    ap_CS_fsm_state71 = ap_CS_fsm.read()[70];
}

void ShuffleNetV2::thread_ap_CS_fsm_state710() {
    ap_CS_fsm_state710 = ap_CS_fsm.read()[709];
}

void ShuffleNetV2::thread_ap_CS_fsm_state713() {
    ap_CS_fsm_state713 = ap_CS_fsm.read()[712];
}

void ShuffleNetV2::thread_ap_CS_fsm_state714() {
    ap_CS_fsm_state714 = ap_CS_fsm.read()[713];
}

void ShuffleNetV2::thread_ap_CS_fsm_state718() {
    ap_CS_fsm_state718 = ap_CS_fsm.read()[717];
}

void ShuffleNetV2::thread_ap_CS_fsm_state719() {
    ap_CS_fsm_state719 = ap_CS_fsm.read()[718];
}

void ShuffleNetV2::thread_ap_CS_fsm_state72() {
    ap_CS_fsm_state72 = ap_CS_fsm.read()[71];
}

void ShuffleNetV2::thread_ap_CS_fsm_state720() {
    ap_CS_fsm_state720 = ap_CS_fsm.read()[719];
}

void ShuffleNetV2::thread_ap_CS_fsm_state724() {
    ap_CS_fsm_state724 = ap_CS_fsm.read()[723];
}

void ShuffleNetV2::thread_ap_CS_fsm_state725() {
    ap_CS_fsm_state725 = ap_CS_fsm.read()[724];
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state707.read()) && 
         esl_seteq<1,1,1>(exitcond1_i_fu_30199_p2.read(), ap_const_lv1_1))) {
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state707.read()) && 
         esl_seteq<1,1,1>(exitcond1_i_fu_30199_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_avgpool_output_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        avgpool_output_address0 =  (sc_lv<9>) (tmp_i_672_fu_30239_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state706.read())) {
        avgpool_output_address0 = grp_avgpool_fu_7365_output_r_address0.read();
    } else {
        avgpool_output_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_avgpool_output_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        avgpool_output_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state706.read())) {
        avgpool_output_ce0 = grp_avgpool_fu_7365_output_r_ce0.read();
    } else {
        avgpool_output_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_avgpool_output_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state706.read())) {
        avgpool_output_we0 = grp_avgpool_fu_7365_output_r_we0.read();
    } else {
        avgpool_output_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_196_fu_10884_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_191_fu_10725_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_183_fu_10508_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_174_fu_10031_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_168_fu_9874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_160_fu_9669_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_151_fu_9186_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_146_fu_9025_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_138_fu_8820_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_131_fu_8460_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_125_fu_8303_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_118_fu_8100_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_112_fu_7943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_105_fu_7804_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        bias_24_address0 = grp_subconv_1x1_16_p_fu_7353_bias_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        bias_24_address0 = grp_subconv_3x3_16_no_re_fu_7341_bias_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()))) {
        bias_24_address0 = grp_subconv_3x3_32_strid_fu_7254_bias_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        bias_24_address0 = grp_subconv_1x1_32_p_fu_7242_bias_address0.read();
    } else {
        bias_24_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_bias_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()))) {
        bias_24_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        bias_24_ce0 = grp_subconv_1x1_16_p_fu_7353_bias_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        bias_24_ce0 = grp_subconv_3x3_16_no_re_fu_7341_bias_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()))) {
        bias_24_ce0 = grp_subconv_3x3_32_strid_fu_7254_bias_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        bias_24_ce0 = grp_subconv_1x1_32_p_fu_7242_bias_ce0.read();
    } else {
        bias_24_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_24_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()))) {
        bias_24_we0 = ap_const_logic_1;
    } else {
        bias_24_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_48_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state512.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_625_fu_24012_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state502.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_607_fu_23636_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state490.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_595_fu_23290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_575_fu_22584_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state461.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_557_fu_22208_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state449.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_545_fu_21858_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state430.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_525_fu_21156_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state420.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_507_fu_20792_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_495_fu_20438_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state389.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_475_fu_19744_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_457_fu_19380_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_446_fu_19026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state348.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_428_fu_18332_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state338.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_414_fu_17968_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_403_fu_17622_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_385_fu_16928_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_371_fu_16560_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state285.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_360_fu_16210_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state266.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_342_fu_15504_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state256.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_328_fu_15136_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_317_fu_14786_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_299_fu_14092_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_285_fu_13728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_274_fu_13378_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_259_fu_12803_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_244_fu_12435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_233_fu_12089_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_219_fu_11721_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_208_fu_11367_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()))) {
        bias_48_address0 = grp_subconv_3x3_8_no_rel_fu_7329_bias_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state286.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state472.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state188.read()))) {
        bias_48_address0 = grp_subconv_1x1_8_p_fu_7305_bias_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()))) {
        bias_48_address0 = grp_subconv_3x3_16_strid_fu_7292_bias_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        bias_48_address0 = grp_subconv_1x1_16p_p_fu_7230_bias_address0.read();
    } else {
        bias_48_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_bias_48_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state256.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state266.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state285.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state338.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state348.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state389.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state420.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state430.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state449.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state461.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state490.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state502.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state512.read()))) {
        bias_48_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()))) {
        bias_48_ce0 = grp_subconv_3x3_8_no_rel_fu_7329_bias_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state286.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state472.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state188.read()))) {
        bias_48_ce0 = grp_subconv_1x1_8_p_fu_7305_bias_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()))) {
        bias_48_ce0 = grp_subconv_3x3_16_strid_fu_7292_bias_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        bias_48_ce0 = grp_subconv_1x1_16p_p_fu_7230_bias_ce0.read();
    } else {
        bias_48_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_48_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state256.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state266.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state285.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state338.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state348.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state389.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state420.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state430.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state449.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state461.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state490.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state502.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state512.read()))) {
        bias_48_we0 = ap_const_logic_1;
    } else {
        bias_48_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_96_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state693.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_844_fu_29910_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state683.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_826_fu_29562_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state671.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_814_fu_29222_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state652.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_794_fu_28540_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state642.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_778_fu_28192_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state630.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_765_fu_27834_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state611.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_745_fu_27152_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state601.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_731_fu_26792_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state589.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_718_fu_26450_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state573.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_700_fu_25887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state563.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_684_fu_25535_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state549.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_672_fu_25193_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state539.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_654_fu_24833_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state527.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_642_fu_24487_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        bias_96_address0 = grp_subconv_3x3_4_no_rel_fu_7317_bias_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read()))) {
        bias_96_address0 = grp_subconv_3x3_8_stride_fu_7267_bias_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state528.read())) {
        bias_96_address0 = grp_subconv_1x1_8p_p_fu_7218_bias_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state550.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()))) {
        bias_96_address0 = grp_subconv_1x1_4_p_fu_7206_bias_address0.read();
    } else {
        bias_96_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_bias_96_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state527.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state539.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state549.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state563.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state573.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state589.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state601.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state611.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state630.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state642.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state652.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state671.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state683.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state693.read()))) {
        bias_96_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        bias_96_ce0 = grp_subconv_3x3_4_no_rel_fu_7317_bias_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read()))) {
        bias_96_ce0 = grp_subconv_3x3_8_stride_fu_7267_bias_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state528.read())) {
        bias_96_ce0 = grp_subconv_1x1_8p_p_fu_7218_bias_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state550.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()))) {
        bias_96_ce0 = grp_subconv_1x1_4_p_fu_7206_bias_ce0.read();
    } else {
        bias_96_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_96_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state527.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state539.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state549.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state563.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state573.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state589.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state601.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state611.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state630.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state642.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state652.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state671.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state683.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state693.read()))) {
        bias_96_we0 = ap_const_logic_1;
    } else {
        bias_96_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state692.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_842_fu_29903_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state682.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_824_fu_29555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state670.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_812_fu_29215_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state651.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_792_fu_28533_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state641.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_774_fu_28185_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_763_fu_27827_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_743_fu_27145_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state600.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_728_fu_26785_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state588.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_716_fu_26443_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state572.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_698_fu_25880_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state562.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_681_fu_25528_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_670_fu_25186_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state538.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_651_fu_24825_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_640_fu_24479_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state511.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_623_fu_24004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state501.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_605_fu_23628_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state489.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_593_fu_23282_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_573_fu_22576_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state460.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_555_fu_22201_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state448.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_543_fu_21851_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state429.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_523_fu_21149_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state419.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_505_fu_20785_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state407.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_493_fu_20431_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state388.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_473_fu_19737_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state378.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_455_fu_19373_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_444_fu_19019_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state347.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_426_fu_18325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state337.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_412_fu_17961_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_401_fu_17615_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state306.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_383_fu_16921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_369_fu_16552_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_358_fu_16202_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state265.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_340_fu_15496_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state255.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_326_fu_15128_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_315_fu_14779_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_297_fu_14085_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state214.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_283_fu_13721_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state202.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_272_fu_13371_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_257_fu_12796_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_242_fu_12428_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_231_fu_12081_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_217_fu_11713_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_206_fu_11360_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_195_fu_10879_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_190_fu_10720_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_182_fu_10503_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_173_fu_10026_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_167_fu_9869_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_159_fu_9664_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_150_fu_9181_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_145_fu_9020_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_137_fu_8815_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_130_fu_8455_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_124_fu_8298_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_117_fu_8095_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_111_fu_7938_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_104_fu_7799_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_99_fu_7550_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_96_fu_7514_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_fu_7483_p1.read());
    } else {
        bias_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_bias_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state202.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state214.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state255.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state265.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state306.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state337.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state347.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state378.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state388.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state407.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state419.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state429.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state448.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state460.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state489.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state501.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state511.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state538.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state562.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state572.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state588.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state641.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state651.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state670.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state682.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state692.read()))) {
        bias_ce0 = ap_const_logic_1;
    } else {
        bias_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_24_16x16_p_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read())) {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_1089_cast_reg_31401.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read())) {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_1055_cast_fu_10354_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_1052_cast1_reg_31138.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_1003_cast_fu_9509_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_1000_cast1_reg_30875.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_949_cast_fu_8664_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        buffer0_1_24_16x16_p_address0 = grp_shuffle_24_p_fu_7373_left_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        buffer0_1_24_16x16_p_address0 = grp_subconv_1x1_16_p_fu_7353_input_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        buffer0_1_24_16x16_p_address0 = grp_subconv_3x3_16_no_re_fu_7341_output_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()))) {
        buffer0_1_24_16x16_p_address0 = grp_subconv_3x3_32_strid_fu_7254_output_r_address0.read();
    } else {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer0_1_24_16x16_p_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        buffer0_1_24_16x16_p_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        buffer0_1_24_16x16_p_ce0 = grp_shuffle_24_p_fu_7373_left_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        buffer0_1_24_16x16_p_ce0 = grp_subconv_1x1_16_p_fu_7353_input_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        buffer0_1_24_16x16_p_ce0 = grp_subconv_3x3_16_no_re_fu_7341_output_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()))) {
        buffer0_1_24_16x16_p_ce0 = grp_subconv_3x3_32_strid_fu_7254_output_r_ce0.read();
    } else {
        buffer0_1_24_16x16_p_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_24_16x16_p_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        buffer0_1_24_16x16_p_d0 = shuffleunit0_1_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()))) {
        buffer0_1_24_16x16_p_d0 = shuffleunit0_0_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()))) {
        buffer0_1_24_16x16_p_d0 = downsampleunit0_outp_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        buffer0_1_24_16x16_p_d0 = grp_subconv_3x3_16_no_re_fu_7341_output_r_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()))) {
        buffer0_1_24_16x16_p_d0 = grp_subconv_3x3_32_strid_fu_7254_output_r_d0.read();
    } else {
        buffer0_1_24_16x16_p_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer0_1_24_16x16_p_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state131.read()))) {
        buffer0_1_24_16x16_p_we0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        buffer0_1_24_16x16_p_we0 = grp_subconv_3x3_16_no_re_fu_7341_output_r_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()))) {
        buffer0_1_24_16x16_p_we0 = grp_subconv_3x3_32_strid_fu_7254_output_r_we0.read();
    } else {
        buffer0_1_24_16x16_p_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_48_8x8_p_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state517.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1803_cast_reg_35599.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1740_cast_fu_22915_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state476.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1738_cast_reg_35149.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1658_cast_fu_21487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state435.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1657_cast_reg_34699.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state399.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1581_cast_fu_20075_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state394.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1579_cast_reg_34249.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state358.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1502_cast_fu_18663_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state353.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1501_cast_reg_33799.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state317.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1426_cast_fu_17259_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1424_cast_reg_33349.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state276.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1346_cast_fu_15835_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state271.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1345_cast_reg_32899.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state235.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1269_cast_fu_14423_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1268_cast_reg_32449.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1193_cast_fu_13015_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state477.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state518.read()))) {
        buffer0_1_48_8x8_p_address0 = grp_shuffle_48_p_fu_7397_left_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()))) {
        buffer0_1_48_8x8_p_address0 = grp_subconv_3x3_8_no_rel_fu_7329_output_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state286.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state472.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state188.read()))) {
        buffer0_1_48_8x8_p_address0 = grp_subconv_1x1_8_p_fu_7305_input_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()))) {
        buffer0_1_48_8x8_p_address0 = grp_subconv_3x3_16_strid_fu_7292_output_r_address0.read();
    } else {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer0_1_48_8x8_p_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state235.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state271.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state276.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state317.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state353.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state358.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state394.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state399.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state435.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state476.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state517.read()))) {
        buffer0_1_48_8x8_p_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state477.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state518.read()))) {
        buffer0_1_48_8x8_p_ce0 = grp_shuffle_48_p_fu_7397_left_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()))) {
        buffer0_1_48_8x8_p_ce0 = grp_subconv_3x3_8_no_rel_fu_7329_output_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state286.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state472.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state188.read()))) {
        buffer0_1_48_8x8_p_ce0 = grp_subconv_1x1_8_p_fu_7305_input_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()))) {
        buffer0_1_48_8x8_p_ce0 = grp_subconv_3x3_16_strid_fu_7292_output_r_ce0.read();
    } else {
        buffer0_1_48_8x8_p_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_48_8x8_p_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state517.read()))) {
        buffer0_1_48_8x8_p_d0 = shuffleunit1_6_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state476.read()))) {
        buffer0_1_48_8x8_p_d0 = shuffleunit1_5_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state399.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state435.read()))) {
        buffer0_1_48_8x8_p_d0 = shuffleunit1_4_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state358.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state394.read()))) {
        buffer0_1_48_8x8_p_d0 = shuffleunit1_3_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state317.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state353.read()))) {
        buffer0_1_48_8x8_p_d0 = shuffleunit1_2_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state276.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()))) {
        buffer0_1_48_8x8_p_d0 = shuffleunit1_1_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state235.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state271.read()))) {
        buffer0_1_48_8x8_p_d0 = shuffleunit1_0_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()))) {
        buffer0_1_48_8x8_p_d0 = downsampleunit1_outp_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()))) {
        buffer0_1_48_8x8_p_d0 = grp_subconv_3x3_8_no_rel_fu_7329_output_r_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()))) {
        buffer0_1_48_8x8_p_d0 = grp_subconv_3x3_16_strid_fu_7292_output_r_d0.read();
    } else {
        buffer0_1_48_8x8_p_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer0_1_48_8x8_p_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state235.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state271.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state276.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state317.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state353.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state358.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state394.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state399.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state435.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state476.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state517.read()))) {
        buffer0_1_48_8x8_p_we0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()))) {
        buffer0_1_48_8x8_p_we0 = grp_subconv_3x3_8_no_rel_fu_7329_output_r_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()))) {
        buffer0_1_48_8x8_p_we0 = grp_subconv_3x3_16_strid_fu_7292_output_r_we0.read();
    } else {
        buffer0_1_48_8x8_p_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_96_4x4_p_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state698.read())) {
        buffer0_1_96_4x4_p_address0 =  (sc_lv<12>) (tmp_2128_cast_reg_37547.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state662.read())) {
        buffer0_1_96_4x4_p_address0 =  (sc_lv<12>) (tmp_2056_cast_fu_28875_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state657.read())) {
        buffer0_1_96_4x4_p_address0 =  (sc_lv<12>) (tmp_2055_cast_reg_37097.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state621.read())) {
        buffer0_1_96_4x4_p_address0 =  (sc_lv<12>) (tmp_1981_cast_fu_27487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read())) {
        buffer0_1_96_4x4_p_address0 =  (sc_lv<12>) (tmp_1979_cast_reg_36647.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state580.read())) {
        buffer0_1_96_4x4_p_address0 =  (sc_lv<12>) (tmp_1903_cast_fu_26099_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state699.read()))) {
        buffer0_1_96_4x4_p_address0 = grp_shuffle_96_p_fu_7385_left_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        buffer0_1_96_4x4_p_address0 = grp_subconv_3x3_4_no_rel_fu_7317_output_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read()))) {
        buffer0_1_96_4x4_p_address0 = grp_subconv_3x3_8_stride_fu_7267_output_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state550.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()))) {
        buffer0_1_96_4x4_p_address0 = grp_subconv_1x1_4_p_fu_7206_input_r_address0.read();
    } else {
        buffer0_1_96_4x4_p_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer0_1_96_4x4_p_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state580.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state621.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state657.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state662.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state698.read()))) {
        buffer0_1_96_4x4_p_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state699.read()))) {
        buffer0_1_96_4x4_p_ce0 = grp_shuffle_96_p_fu_7385_left_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        buffer0_1_96_4x4_p_ce0 = grp_subconv_3x3_4_no_rel_fu_7317_output_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read()))) {
        buffer0_1_96_4x4_p_ce0 = grp_subconv_3x3_8_stride_fu_7267_output_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state550.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()))) {
        buffer0_1_96_4x4_p_ce0 = grp_subconv_1x1_4_p_fu_7206_input_r_ce0.read();
    } else {
        buffer0_1_96_4x4_p_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_96_4x4_p_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state662.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state698.read()))) {
        buffer0_1_96_4x4_p_d0 = shuffleunit2_1_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state621.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state657.read()))) {
        buffer0_1_96_4x4_p_d0 = shuffleunit2_0_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state580.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read()))) {
        buffer0_1_96_4x4_p_d0 = downsampleunit2_outp_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        buffer0_1_96_4x4_p_d0 = grp_subconv_3x3_4_no_rel_fu_7317_output_r_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read()))) {
        buffer0_1_96_4x4_p_d0 = grp_subconv_3x3_8_stride_fu_7267_output_r_d0.read();
    } else {
        buffer0_1_96_4x4_p_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer0_1_96_4x4_p_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state580.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state621.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state657.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state662.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state698.read()))) {
        buffer0_1_96_4x4_p_we0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        buffer0_1_96_4x4_p_we0 = grp_subconv_3x3_4_no_rel_fu_7317_output_r_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read()))) {
        buffer0_1_96_4x4_p_we0 = grp_subconv_3x3_8_stride_fu_7267_output_r_we0.read();
    } else {
        buffer0_1_96_4x4_p_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_24_16x16_p_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        buffer1_1_24_16x16_p_address0 = grp_shuffle_24_r_p_fu_7422_right_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        buffer1_1_24_16x16_p_address0 = grp_shuffle_24_l_p_fu_7414_left_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        buffer1_1_24_16x16_p_address0 = grp_shuffle_24_p_fu_7373_buffer1_1_24_16x16_p_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        buffer1_1_24_16x16_p_address0 = grp_subconv_1x1_16_p_fu_7353_output_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        buffer1_1_24_16x16_p_address0 = grp_subconv_3x3_16_no_re_fu_7341_input_r_address0.read();
    } else {
        buffer1_1_24_16x16_p_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_24_16x16_p_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        buffer1_1_24_16x16_p_ce0 = grp_shuffle_24_r_p_fu_7422_right_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        buffer1_1_24_16x16_p_ce0 = grp_shuffle_24_l_p_fu_7414_left_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        buffer1_1_24_16x16_p_ce0 = grp_shuffle_24_p_fu_7373_buffer1_1_24_16x16_p_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        buffer1_1_24_16x16_p_ce0 = grp_subconv_1x1_16_p_fu_7353_output_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        buffer1_1_24_16x16_p_ce0 = grp_subconv_3x3_16_no_re_fu_7341_input_r_ce0.read();
    } else {
        buffer1_1_24_16x16_p_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_24_16x16_p_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        buffer1_1_24_16x16_p_we0 = grp_subconv_1x1_16_p_fu_7353_output_r_we0.read();
    } else {
        buffer1_1_24_16x16_p_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_48_8x8_p_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read())) {
        buffer1_1_48_8x8_p_address0 = grp_shuffle_48_r_p_fu_7454_right_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
        buffer1_1_48_8x8_p_address0 = grp_shuffle_48_l_p_fu_7446_left_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state477.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state518.read()))) {
        buffer1_1_48_8x8_p_address0 = grp_shuffle_48_p_fu_7397_buffer1_1_48_8x8_p_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()))) {
        buffer1_1_48_8x8_p_address0 = grp_subconv_3x3_8_no_rel_fu_7329_input_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state286.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state472.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state188.read()))) {
        buffer1_1_48_8x8_p_address0 = grp_subconv_1x1_8_p_fu_7305_output_r_address0.read();
    } else {
        buffer1_1_48_8x8_p_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_48_8x8_p_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read())) {
        buffer1_1_48_8x8_p_ce0 = grp_shuffle_48_r_p_fu_7454_right_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
        buffer1_1_48_8x8_p_ce0 = grp_shuffle_48_l_p_fu_7446_left_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state477.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state518.read()))) {
        buffer1_1_48_8x8_p_ce0 = grp_shuffle_48_p_fu_7397_buffer1_1_48_8x8_p_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()))) {
        buffer1_1_48_8x8_p_ce0 = grp_subconv_3x3_8_no_rel_fu_7329_input_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state286.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state409.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state472.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state188.read()))) {
        buffer1_1_48_8x8_p_ce0 = grp_subconv_1x1_8_p_fu_7305_output_r_ce0.read();
    } else {
        buffer1_1_48_8x8_p_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_48_8x8_p_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state286.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state327.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state390.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state472.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state188.read()))) {
        buffer1_1_48_8x8_p_we0 = grp_subconv_1x1_8_p_fu_7305_output_r_we0.read();
    } else {
        buffer1_1_48_8x8_p_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read())) {
        buffer1_1_96_4x4_p_address0 = grp_shuffle_96_r_p_fu_7438_right_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state552.read())) {
        buffer1_1_96_4x4_p_address0 = grp_shuffle_96_l_p_fu_7430_left_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state699.read()))) {
        buffer1_1_96_4x4_p_address0 = grp_shuffle_96_p_fu_7385_buffer1_1_96_4x4_p_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        buffer1_1_96_4x4_p_address0 = grp_subconv_3x3_4_no_rel_fu_7317_input_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state550.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()))) {
        buffer1_1_96_4x4_p_address0 = grp_subconv_1x1_4_p_fu_7206_output_r_address0.read();
    } else {
        buffer1_1_96_4x4_p_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read())) {
        buffer1_1_96_4x4_p_ce0 = grp_shuffle_96_r_p_fu_7438_right_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state552.read())) {
        buffer1_1_96_4x4_p_ce0 = grp_shuffle_96_l_p_fu_7430_left_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state699.read()))) {
        buffer1_1_96_4x4_p_ce0 = grp_shuffle_96_p_fu_7385_buffer1_1_96_4x4_p_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        buffer1_1_96_4x4_p_ce0 = grp_subconv_3x3_4_no_rel_fu_7317_input_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state550.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()))) {
        buffer1_1_96_4x4_p_ce0 = grp_subconv_1x1_4_p_fu_7206_output_r_ce0.read();
    } else {
        buffer1_1_96_4x4_p_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state550.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()))) {
        buffer1_1_96_4x4_p_we0 = grp_subconv_1x1_4_p_fu_7206_output_r_we0.read();
    } else {
        buffer1_1_96_4x4_p_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ci26_cast_fu_11072_p1() {
    ci26_cast_fu_11072_p1 = esl_zext<7,5>(ci26_reg_3882.read());
}

void ShuffleNetV2::thread_ci28_cast_fu_11790_p1() {
    ci28_cast_fu_11790_p1 = esl_zext<7,5>(ci28_reg_4003.read());
}

void ShuffleNetV2::thread_ci30_cast_fu_12504_p1() {
    ci30_cast_fu_12504_p1 = esl_zext<7,5>(ci30_reg_4124.read());
}

void ShuffleNetV2::thread_ci32_cast_fu_13083_p1() {
    ci32_cast_fu_13083_p1 = esl_zext<7,5>(ci32_reg_4212.read());
}

void ShuffleNetV2::thread_ci34_cast_fu_13797_p1() {
    ci34_cast_fu_13797_p1 = esl_zext<7,5>(ci34_reg_4333.read());
}

void ShuffleNetV2::thread_ci36_cast_fu_14491_p1() {
    ci36_cast_fu_14491_p1 = esl_zext<7,5>(ci36_reg_4454.read());
}

void ShuffleNetV2::thread_ci38_cast_fu_15205_p1() {
    ci38_cast_fu_15205_p1 = esl_zext<7,5>(ci38_reg_4575.read());
}

void ShuffleNetV2::thread_ci40_cast_fu_15903_p1() {
    ci40_cast_fu_15903_p1 = esl_zext<7,5>(ci40_reg_4696.read());
}

void ShuffleNetV2::thread_ci42_cast_fu_16629_p1() {
    ci42_cast_fu_16629_p1 = esl_zext<7,5>(ci42_reg_4817.read());
}

void ShuffleNetV2::thread_ci44_cast_fu_17327_p1() {
    ci44_cast_fu_17327_p1 = esl_zext<7,5>(ci44_reg_4938.read());
}

void ShuffleNetV2::thread_ci46_cast_fu_18037_p1() {
    ci46_cast_fu_18037_p1 = esl_zext<7,5>(ci46_reg_5059.read());
}

void ShuffleNetV2::thread_ci48_cast_fu_18731_p1() {
    ci48_cast_fu_18731_p1 = esl_zext<7,5>(ci48_reg_5180.read());
}

void ShuffleNetV2::thread_ci50_cast_fu_19449_p1() {
    ci50_cast_fu_19449_p1 = esl_zext<7,5>(ci50_reg_5301.read());
}

void ShuffleNetV2::thread_ci52_cast_fu_20143_p1() {
    ci52_cast_fu_20143_p1 = esl_zext<7,5>(ci52_reg_5422.read());
}

void ShuffleNetV2::thread_ci54_cast_fu_20861_p1() {
    ci54_cast_fu_20861_p1 = esl_zext<7,5>(ci54_reg_5543.read());
}

void ShuffleNetV2::thread_ci56_cast_fu_21555_p1() {
    ci56_cast_fu_21555_p1 = esl_zext<7,5>(ci56_reg_5664.read());
}

void ShuffleNetV2::thread_ci58_cast_fu_22277_p1() {
    ci58_cast_fu_22277_p1 = esl_zext<7,5>(ci58_reg_5785.read());
}

void ShuffleNetV2::thread_ci60_cast_fu_22983_p1() {
    ci60_cast_fu_22983_p1 = esl_zext<7,5>(ci60_reg_5906.read());
}

void ShuffleNetV2::thread_ci62_cast_fu_23705_p1() {
    ci62_cast_fu_23705_p1 = esl_zext<7,5>(ci62_reg_6027.read());
}

void ShuffleNetV2::thread_ci64_cast_fu_24198_p1() {
    ci64_cast_fu_24198_p1 = esl_zext<8,5>(ci64_reg_6115.read());
}

void ShuffleNetV2::thread_ci66_cast_fu_24900_p1() {
    ci66_cast_fu_24900_p1 = esl_zext<8,5>(ci66_reg_6236.read());
}

void ShuffleNetV2::thread_ci68_cast_fu_25602_p1() {
    ci68_cast_fu_25602_p1 = esl_zext<8,5>(ci68_reg_6357.read());
}

void ShuffleNetV2::thread_ci70_cast_fu_26165_p1() {
    ci70_cast_fu_26165_p1 = esl_zext<8,5>(ci70_reg_6445.read());
}

void ShuffleNetV2::thread_ci72_cast_fu_26859_p1() {
    ci72_cast_fu_26859_p1 = esl_zext<8,5>(ci72_reg_6566.read());
}

void ShuffleNetV2::thread_ci74_cast_fu_27553_p1() {
    ci74_cast_fu_27553_p1 = esl_zext<8,5>(ci74_reg_6687.read());
}

void ShuffleNetV2::thread_ci76_cast_fu_28259_p1() {
    ci76_cast_fu_28259_p1 = esl_zext<8,5>(ci76_reg_6808.read());
}

void ShuffleNetV2::thread_ci78_cast_fu_28941_p1() {
    ci78_cast_fu_28941_p1 = esl_zext<8,5>(ci78_reg_6929.read());
}

void ShuffleNetV2::thread_ci80_cast_fu_29629_p1() {
    ci80_cast_fu_29629_p1 = esl_zext<8,5>(ci80_reg_7050.read());
}

void ShuffleNetV2::thread_ci_10_fu_7757_p2() {
    ci_10_fu_7757_p2 = (!ci3_reg_3153.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci3_reg_3153.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_11_fu_8040_p2() {
    ci_11_fu_8040_p2 = (!ci10_reg_3232.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci10_reg_3232.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_13_fu_8400_p2() {
    ci_13_fu_8400_p2 = (!ci12_reg_3311.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci12_reg_3311.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_15_fu_8760_p2() {
    ci_15_fu_8760_p2 = (!ci14_reg_3378.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci14_reg_3378.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_17_fu_9124_p2() {
    ci_17_fu_9124_p2 = (!ci16_reg_3457.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci16_reg_3457.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_19_fu_9605_p2() {
    ci_19_fu_9605_p2 = (!ci18_reg_3557.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci18_reg_3557.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_21_fu_9971_p2() {
    ci_21_fu_9971_p2 = (!ci20_reg_3636.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci20_reg_3636.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_23_fu_10450_p2() {
    ci_23_fu_10450_p2 = (!ci22_reg_3736.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci22_reg_3736.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_25_fu_10824_p2() {
    ci_25_fu_10824_p2 = (!ci24_reg_3815.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci24_reg_3815.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_27_fu_11082_p2() {
    ci_27_fu_11082_p2 = (!ci26_reg_3882.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci26_reg_3882.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_29_fu_11800_p2() {
    ci_29_fu_11800_p2 = (!ci28_reg_4003.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci28_reg_4003.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_31_fu_12514_p2() {
    ci_31_fu_12514_p2 = (!ci30_reg_4124.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci30_reg_4124.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_33_fu_13093_p2() {
    ci_33_fu_13093_p2 = (!ci32_reg_4212.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci32_reg_4212.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_35_fu_13807_p2() {
    ci_35_fu_13807_p2 = (!ci34_reg_4333.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci34_reg_4333.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_37_fu_14501_p2() {
    ci_37_fu_14501_p2 = (!ci36_reg_4454.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci36_reg_4454.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_39_fu_15215_p2() {
    ci_39_fu_15215_p2 = (!ci38_reg_4575.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci38_reg_4575.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_41_fu_15913_p2() {
    ci_41_fu_15913_p2 = (!ci40_reg_4696.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci40_reg_4696.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_43_fu_16639_p2() {
    ci_43_fu_16639_p2 = (!ci42_reg_4817.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci42_reg_4817.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_45_fu_17337_p2() {
    ci_45_fu_17337_p2 = (!ci44_reg_4938.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci44_reg_4938.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_47_fu_18047_p2() {
    ci_47_fu_18047_p2 = (!ci46_reg_5059.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci46_reg_5059.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_49_fu_18741_p2() {
    ci_49_fu_18741_p2 = (!ci48_reg_5180.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci48_reg_5180.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_51_fu_19459_p2() {
    ci_51_fu_19459_p2 = (!ci50_reg_5301.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci50_reg_5301.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_53_fu_20153_p2() {
    ci_53_fu_20153_p2 = (!ci52_reg_5422.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci52_reg_5422.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_55_fu_20871_p2() {
    ci_55_fu_20871_p2 = (!ci54_reg_5543.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci54_reg_5543.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_57_fu_21565_p2() {
    ci_57_fu_21565_p2 = (!ci56_reg_5664.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci56_reg_5664.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_59_fu_22287_p2() {
    ci_59_fu_22287_p2 = (!ci58_reg_5785.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci58_reg_5785.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_61_fu_22993_p2() {
    ci_61_fu_22993_p2 = (!ci60_reg_5906.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci60_reg_5906.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_63_fu_23715_p2() {
    ci_63_fu_23715_p2 = (!ci62_reg_6027.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci62_reg_6027.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_65_fu_24208_p2() {
    ci_65_fu_24208_p2 = (!ci64_reg_6115.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci64_reg_6115.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_67_fu_24910_p2() {
    ci_67_fu_24910_p2 = (!ci66_reg_6236.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci66_reg_6236.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_69_fu_25612_p2() {
    ci_69_fu_25612_p2 = (!ci68_reg_6357.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci68_reg_6357.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_71_fu_26175_p2() {
    ci_71_fu_26175_p2 = (!ci70_reg_6445.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci70_reg_6445.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_73_fu_26869_p2() {
    ci_73_fu_26869_p2 = (!ci72_reg_6566.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci72_reg_6566.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_75_fu_27563_p2() {
    ci_75_fu_27563_p2 = (!ci74_reg_6687.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci74_reg_6687.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_77_fu_28269_p2() {
    ci_77_fu_28269_p2 = (!ci76_reg_6808.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci76_reg_6808.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_79_fu_28951_p2() {
    ci_79_fu_28951_p2 = (!ci78_reg_6929.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci78_reg_6929.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_81_fu_29639_p2() {
    ci_81_fu_29639_p2 = (!ci80_reg_7050.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci80_reg_7050.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_83_fu_30044_p2() {
    ci_83_fu_30044_p2 = (!ci82_reg_7127.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ci82_reg_7127.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void ShuffleNetV2::thread_ci_84_fu_30233_p2() {
    ci_84_fu_30233_p2 = (!ci_i_reg_7183.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(ci_i_reg_7183.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void ShuffleNetV2::thread_ci_9_fu_7566_p2() {
    ci_9_fu_7566_p2 = (!ci_reg_3109.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(ci_reg_3109.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_co101_cast_fu_17973_p1() {
    co101_cast_fu_17973_p1 = esl_zext<11,5>(co100_reg_5048.read());
}

void ShuffleNetV2::thread_co104_cast_fu_18456_p1() {
    co104_cast_fu_18456_p1 = esl_zext<7,6>(co104_reg_5136.read());
}

void ShuffleNetV2::thread_co106_cast_fu_18667_p1() {
    co106_cast_fu_18667_p1 = esl_zext<11,5>(co106_reg_5169.read());
}

void ShuffleNetV2::thread_co109_cast401_cast_fu_19035_p1() {
    co109_cast401_cast_fu_19035_p1 = esl_zext<8,5>(co108_reg_5224.read());
}

void ShuffleNetV2::thread_co109_cast_fu_19031_p1() {
    co109_cast_fu_19031_p1 = esl_zext<7,5>(co108_reg_5224.read());
}

void ShuffleNetV2::thread_co111_cast_fu_19385_p1() {
    co111_cast_fu_19385_p1 = esl_zext<11,5>(co110_reg_5290.read());
}

void ShuffleNetV2::thread_co114_cast_fu_19868_p1() {
    co114_cast_fu_19868_p1 = esl_zext<7,6>(co114_reg_5378.read());
}

void ShuffleNetV2::thread_co116_cast_fu_20079_p1() {
    co116_cast_fu_20079_p1 = esl_zext<11,5>(co116_reg_5411.read());
}

void ShuffleNetV2::thread_co119_cast363_cast_fu_20447_p1() {
    co119_cast363_cast_fu_20447_p1 = esl_zext<8,5>(co118_reg_5466.read());
}

void ShuffleNetV2::thread_co119_cast_fu_20443_p1() {
    co119_cast_fu_20443_p1 = esl_zext<7,5>(co118_reg_5466.read());
}

void ShuffleNetV2::thread_co121_cast_fu_20797_p1() {
    co121_cast_fu_20797_p1 = esl_zext<11,5>(co120_reg_5532.read());
}

void ShuffleNetV2::thread_co124_cast_fu_21280_p1() {
    co124_cast_fu_21280_p1 = esl_zext<7,6>(co124_reg_5620.read());
}

void ShuffleNetV2::thread_co126_cast339_cast_fu_21491_p1() {
    co126_cast339_cast_fu_21491_p1 = esl_zext<10,5>(co126_reg_5653.read());
}

void ShuffleNetV2::thread_co129_cast1_fu_21867_p1() {
    co129_cast1_fu_21867_p1 = esl_zext<10,5>(co128_reg_5708.read());
}

void ShuffleNetV2::thread_co129_cast_fu_21863_p1() {
    co129_cast_fu_21863_p1 = esl_zext<7,5>(co128_reg_5708.read());
}

void ShuffleNetV2::thread_co12_cast_fu_8105_p1() {
    co12_cast_fu_8105_p1 = esl_zext<6,5>(co12_reg_3255.read());
}

void ShuffleNetV2::thread_co131_cast316_cast_fu_22213_p1() {
    co131_cast316_cast_fu_22213_p1 = esl_zext<10,5>(co130_reg_5774.read());
}

void ShuffleNetV2::thread_co134_cast_fu_22708_p1() {
    co134_cast_fu_22708_p1 = esl_zext<7,6>(co134_reg_5862.read());
}

void ShuffleNetV2::thread_co136_cast301_cast_fu_22919_p1() {
    co136_cast301_cast_fu_22919_p1 = esl_zext<9,5>(co136_reg_5895.read());
}

void ShuffleNetV2::thread_co139_cast1_fu_23299_p1() {
    co139_cast1_fu_23299_p1 = esl_zext<10,5>(co138_reg_5950.read());
}

void ShuffleNetV2::thread_co139_cast_fu_23295_p1() {
    co139_cast_fu_23295_p1 = esl_zext<7,5>(co138_reg_5950.read());
}

void ShuffleNetV2::thread_co141_cast_fu_23641_p1() {
    co141_cast_fu_23641_p1 = esl_zext<12,5>(co140_reg_6016.read());
}

void ShuffleNetV2::thread_co144_cast_fu_24136_p1() {
    co144_cast_fu_24136_p1 = esl_zext<12,5>(co144_reg_6104.read());
}

void ShuffleNetV2::thread_co147_cast1_fu_24496_p1() {
    co147_cast1_fu_24496_p1 = esl_zext<10,5>(co146_reg_6159.read());
}

void ShuffleNetV2::thread_co147_cast_fu_24492_p1() {
    co147_cast_fu_24492_p1 = esl_zext<8,5>(co146_reg_6159.read());
}

void ShuffleNetV2::thread_co149_cast_fu_24838_p1() {
    co149_cast_fu_24838_p1 = esl_zext<12,5>(co148_reg_6225.read());
}

void ShuffleNetV2::thread_co151_cast1_fu_25202_p1() {
    co151_cast1_fu_25202_p1 = esl_zext<10,5>(co150_reg_6280.read());
}

void ShuffleNetV2::thread_co151_cast_fu_25198_p1() {
    co151_cast_fu_25198_p1 = esl_zext<8,5>(co150_reg_6280.read());
}

void ShuffleNetV2::thread_co153_cast_fu_25540_p1() {
    co153_cast_fu_25540_p1 = esl_zext<12,5>(co152_reg_6346.read());
}

void ShuffleNetV2::thread_co155_cast_fu_25892_p1() {
    co155_cast_fu_25892_p1 = esl_zext<8,7>(co154_reg_6401.read());
}

void ShuffleNetV2::thread_co156_cast_fu_26103_p1() {
    co156_cast_fu_26103_p1 = esl_zext<12,5>(co156_reg_6434.read());
}

void ShuffleNetV2::thread_co159_cast1_fu_26459_p1() {
    co159_cast1_fu_26459_p1 = esl_zext<10,5>(co158_reg_6489.read());
}

void ShuffleNetV2::thread_co159_cast_fu_26455_p1() {
    co159_cast_fu_26455_p1 = esl_zext<8,5>(co158_reg_6489.read());
}

void ShuffleNetV2::thread_co161_cast181_cast_fu_26797_p1() {
    co161_cast181_cast_fu_26797_p1 = esl_zext<11,5>(co160_reg_6555.read());
}

void ShuffleNetV2::thread_co164_cast_fu_27280_p1() {
    co164_cast_fu_27280_p1 = esl_zext<8,7>(co164_reg_6643.read());
}

void ShuffleNetV2::thread_co166_cast_fu_27491_p1() {
    co166_cast_fu_27491_p1 = esl_zext<13,5>(co166_reg_6676.read());
}

void ShuffleNetV2::thread_co169_cast152_cast_fu_27843_p1() {
    co169_cast152_cast_fu_27843_p1 = esl_zext<9,5>(co168_reg_6731.read());
}

void ShuffleNetV2::thread_co169_cast_fu_27839_p1() {
    co169_cast_fu_27839_p1 = esl_zext<8,5>(co168_reg_6731.read());
}

void ShuffleNetV2::thread_co16_cast_fu_8308_p1() {
    co16_cast_fu_8308_p1 = esl_zext<7,5>(co16_reg_3300.read());
}

void ShuffleNetV2::thread_co171_cast_fu_28197_p1() {
    co171_cast_fu_28197_p1 = esl_zext<13,5>(co170_reg_6797.read());
}

void ShuffleNetV2::thread_co174_cast_fu_28668_p1() {
    co174_cast_fu_28668_p1 = esl_zext<8,7>(co174_reg_6885.read());
}

void ShuffleNetV2::thread_co176_cast_fu_28879_p1() {
    co176_cast_fu_28879_p1 = esl_zext<13,5>(co176_reg_6918.read());
}

void ShuffleNetV2::thread_co179_cast1_fu_29231_p1() {
    co179_cast1_fu_29231_p1 = esl_zext<11,5>(co178_reg_6973.read());
}

void ShuffleNetV2::thread_co179_cast_fu_29227_p1() {
    co179_cast_fu_29227_p1 = esl_zext<8,5>(co178_reg_6973.read());
}

void ShuffleNetV2::thread_co181_cast_fu_29567_p1() {
    co181_cast_fu_29567_p1 = esl_zext<13,5>(co180_reg_7039.read());
}

void ShuffleNetV2::thread_co19_cast_fu_8465_p1() {
    co19_cast_fu_8465_p1 = esl_zext<6,5>(co19_reg_3334.read());
}

void ShuffleNetV2::thread_co22_cast_fu_8668_p1() {
    co22_cast_fu_8668_p1 = esl_zext<7,5>(co22_reg_3367.read());
}

void ShuffleNetV2::thread_co25_cast_fu_8825_p1() {
    co25_cast_fu_8825_p1 = esl_zext<7,5>(co25_reg_3401.read());
}

void ShuffleNetV2::thread_co34_cast_fu_9310_p1() {
    co34_cast_fu_9310_p1 = esl_zext<6,5>(co34_reg_3513.read());
}

void ShuffleNetV2::thread_co36_cast_fu_9513_p1() {
    co36_cast_fu_9513_p1 = esl_zext<8,5>(co36_reg_3546.read());
}

void ShuffleNetV2::thread_co39_cast_fu_9674_p1() {
    co39_cast_fu_9674_p1 = esl_zext<7,5>(co38_reg_3580.read());
}

void ShuffleNetV2::thread_co41_cast_fu_9879_p1() {
    co41_cast_fu_9879_p1 = esl_zext<8,5>(co40_reg_3625.read());
}

void ShuffleNetV2::thread_co44_cast_fu_10155_p1() {
    co44_cast_fu_10155_p1 = esl_zext<6,5>(co44_reg_3692.read());
}

void ShuffleNetV2::thread_co46_cast_fu_10358_p1() {
    co46_cast_fu_10358_p1 = esl_zext<8,5>(co46_reg_3725.read());
}

void ShuffleNetV2::thread_co54_cast_fu_11008_p1() {
    co54_cast_fu_11008_p1 = esl_zext<9,5>(co54_reg_3871.read());
}

void ShuffleNetV2::thread_co57_cast1_fu_11376_p1() {
    co57_cast1_fu_11376_p1 = esl_zext<8,5>(co56_reg_3926.read());
}

void ShuffleNetV2::thread_co57_cast_fu_11372_p1() {
    co57_cast_fu_11372_p1 = esl_zext<7,5>(co56_reg_3926.read());
}

void ShuffleNetV2::thread_co59_cast_fu_11726_p1() {
    co59_cast_fu_11726_p1 = esl_zext<9,5>(co58_reg_3992.read());
}

void ShuffleNetV2::thread_co61_cast1_fu_12098_p1() {
    co61_cast1_fu_12098_p1 = esl_zext<8,5>(co60_reg_4047.read());
}

void ShuffleNetV2::thread_co61_cast_fu_12094_p1() {
    co61_cast_fu_12094_p1 = esl_zext<7,5>(co60_reg_4047.read());
}

void ShuffleNetV2::thread_co63_cast_fu_12440_p1() {
    co63_cast_fu_12440_p1 = esl_zext<10,5>(co62_reg_4113.read());
}

void ShuffleNetV2::thread_co65_cast_fu_12808_p1() {
    co65_cast_fu_12808_p1 = esl_zext<7,6>(co64_reg_4168.read());
}

void ShuffleNetV2::thread_co66_cast_fu_13019_p1() {
    co66_cast_fu_13019_p1 = esl_zext<10,5>(co66_reg_4201.read());
}

void ShuffleNetV2::thread_co69_cast1_fu_13387_p1() {
    co69_cast1_fu_13387_p1 = esl_zext<9,5>(co68_reg_4256.read());
}

void ShuffleNetV2::thread_co69_cast_fu_13383_p1() {
    co69_cast_fu_13383_p1 = esl_zext<7,5>(co68_reg_4256.read());
}

void ShuffleNetV2::thread_co71_cast_fu_13733_p1() {
    co71_cast_fu_13733_p1 = esl_zext<10,5>(co70_reg_4322.read());
}

void ShuffleNetV2::thread_co74_cast_fu_14216_p1() {
    co74_cast_fu_14216_p1 = esl_zext<7,6>(co74_reg_4410.read());
}

void ShuffleNetV2::thread_co76_cast_fu_14427_p1() {
    co76_cast_fu_14427_p1 = esl_zext<10,5>(co76_reg_4443.read());
}

void ShuffleNetV2::thread_co79_cast1_fu_14795_p1() {
    co79_cast1_fu_14795_p1 = esl_zext<9,5>(co78_reg_4498.read());
}

void ShuffleNetV2::thread_co79_cast_fu_14791_p1() {
    co79_cast_fu_14791_p1 = esl_zext<7,5>(co78_reg_4498.read());
}

void ShuffleNetV2::thread_co81_cast_fu_15141_p1() {
    co81_cast_fu_15141_p1 = esl_zext<10,5>(co80_reg_4564.read());
}

void ShuffleNetV2::thread_co84_cast_fu_15628_p1() {
    co84_cast_fu_15628_p1 = esl_zext<7,6>(co84_reg_4652.read());
}

void ShuffleNetV2::thread_co86_cast491_cast_fu_15839_p1() {
    co86_cast491_cast_fu_15839_p1 = esl_zext<9,5>(co86_reg_4685.read());
}

void ShuffleNetV2::thread_co89_cast1_fu_16219_p1() {
    co89_cast1_fu_16219_p1 = esl_zext<9,5>(co88_reg_4740.read());
}

void ShuffleNetV2::thread_co89_cast_fu_16215_p1() {
    co89_cast_fu_16215_p1 = esl_zext<7,5>(co88_reg_4740.read());
}

void ShuffleNetV2::thread_co91_cast_fu_16565_p1() {
    co91_cast_fu_16565_p1 = esl_zext<11,5>(co90_reg_4806.read());
}

void ShuffleNetV2::thread_co94_cast_fu_17052_p1() {
    co94_cast_fu_17052_p1 = esl_zext<7,6>(co94_reg_4894.read());
}

void ShuffleNetV2::thread_co96_cast_fu_17263_p1() {
    co96_cast_fu_17263_p1 = esl_zext<11,5>(co96_reg_4927.read());
}

void ShuffleNetV2::thread_co99_cast1_fu_17631_p1() {
    co99_cast1_fu_17631_p1 = esl_zext<9,5>(co98_reg_4982.read());
}

void ShuffleNetV2::thread_co99_cast_fu_17627_p1() {
    co99_cast_fu_17627_p1 = esl_zext<7,5>(co98_reg_4982.read());
}

void ShuffleNetV2::thread_co9_cast_fu_7948_p1() {
    co9_cast_fu_7948_p1 = esl_zext<6,5>(co9_reg_3221.read());
}

void ShuffleNetV2::thread_co_101_fu_17983_p2() {
    co_101_fu_17983_p2 = (!co100_reg_5048.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co100_reg_5048.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_103_fu_18343_p2() {
    co_103_fu_18343_p2 = (!co102_reg_5103.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co102_reg_5103.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_105_fu_18466_p2() {
    co_105_fu_18466_p2 = (!co104_reg_5136.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co104_reg_5136.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_107_fu_18677_p2() {
    co_107_fu_18677_p2 = (!co106_reg_5169.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co106_reg_5169.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_109_fu_19045_p2() {
    co_109_fu_19045_p2 = (!co108_reg_5224.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co108_reg_5224.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_111_fu_19395_p2() {
    co_111_fu_19395_p2 = (!co110_reg_5290.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co110_reg_5290.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_113_fu_19755_p2() {
    co_113_fu_19755_p2 = (!co112_reg_5345.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co112_reg_5345.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_115_fu_19878_p2() {
    co_115_fu_19878_p2 = (!co114_reg_5378.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co114_reg_5378.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_117_fu_20089_p2() {
    co_117_fu_20089_p2 = (!co116_reg_5411.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co116_reg_5411.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_119_fu_20457_p2() {
    co_119_fu_20457_p2 = (!co118_reg_5466.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co118_reg_5466.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_121_fu_20807_p2() {
    co_121_fu_20807_p2 = (!co120_reg_5532.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co120_reg_5532.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_123_fu_21167_p2() {
    co_123_fu_21167_p2 = (!co122_reg_5587.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co122_reg_5587.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_125_fu_21290_p2() {
    co_125_fu_21290_p2 = (!co124_reg_5620.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co124_reg_5620.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_127_fu_21501_p2() {
    co_127_fu_21501_p2 = (!co126_reg_5653.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co126_reg_5653.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_129_fu_21877_p2() {
    co_129_fu_21877_p2 = (!co128_reg_5708.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co128_reg_5708.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_131_fu_22223_p2() {
    co_131_fu_22223_p2 = (!co130_reg_5774.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co130_reg_5774.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_133_fu_22595_p2() {
    co_133_fu_22595_p2 = (!co132_reg_5829.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co132_reg_5829.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_135_fu_22718_p2() {
    co_135_fu_22718_p2 = (!co134_reg_5862.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co134_reg_5862.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_137_fu_22929_p2() {
    co_137_fu_22929_p2 = (!co136_reg_5895.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co136_reg_5895.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_139_fu_23309_p2() {
    co_139_fu_23309_p2 = (!co138_reg_5950.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co138_reg_5950.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_141_fu_23651_p2() {
    co_141_fu_23651_p2 = (!co140_reg_6016.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co140_reg_6016.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_143_fu_24023_p2() {
    co_143_fu_24023_p2 = (!co142_reg_6071.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co142_reg_6071.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_145_fu_24146_p2() {
    co_145_fu_24146_p2 = (!co144_reg_6104.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co144_reg_6104.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_147_fu_24506_p2() {
    co_147_fu_24506_p2 = (!co146_reg_6159.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co146_reg_6159.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_149_fu_24848_p2() {
    co_149_fu_24848_p2 = (!co148_reg_6225.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co148_reg_6225.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_151_fu_25212_p2() {
    co_151_fu_25212_p2 = (!co150_reg_6280.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co150_reg_6280.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_153_fu_25550_p2() {
    co_153_fu_25550_p2 = (!co152_reg_6346.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co152_reg_6346.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_155_fu_25902_p2() {
    co_155_fu_25902_p2 = (!co154_reg_6401.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co154_reg_6401.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_157_fu_26113_p2() {
    co_157_fu_26113_p2 = (!co156_reg_6434.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co156_reg_6434.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_159_fu_26469_p2() {
    co_159_fu_26469_p2 = (!co158_reg_6489.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co158_reg_6489.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_161_fu_26807_p2() {
    co_161_fu_26807_p2 = (!co160_reg_6555.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co160_reg_6555.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_163_fu_27163_p2() {
    co_163_fu_27163_p2 = (!co162_reg_6610.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co162_reg_6610.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_165_fu_27290_p2() {
    co_165_fu_27290_p2 = (!co164_reg_6643.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co164_reg_6643.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_167_fu_27501_p2() {
    co_167_fu_27501_p2 = (!co166_reg_6676.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co166_reg_6676.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_169_fu_27853_p2() {
    co_169_fu_27853_p2 = (!co168_reg_6731.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co168_reg_6731.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_171_fu_28207_p2() {
    co_171_fu_28207_p2 = (!co170_reg_6797.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co170_reg_6797.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_173_fu_28551_p2() {
    co_173_fu_28551_p2 = (!co172_reg_6852.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co172_reg_6852.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_175_fu_28678_p2() {
    co_175_fu_28678_p2 = (!co174_reg_6885.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co174_reg_6885.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_177_fu_28889_p2() {
    co_177_fu_28889_p2 = (!co176_reg_6918.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co176_reg_6918.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_179_fu_29241_p2() {
    co_179_fu_29241_p2 = (!co178_reg_6973.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co178_reg_6973.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_181_fu_29577_p2() {
    co_181_fu_29577_p2 = (!co180_reg_7039.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co180_reg_7039.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_183_fu_29921_p2() {
    co_183_fu_29921_p2 = (!co182_reg_7094.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co182_reg_7094.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_184_fu_30205_p2() {
    co_184_fu_30205_p2 = (!co_i_reg_7160.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(co_i_reg_7160.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_co_25_fu_7711_p2() {
    co_25_fu_7711_p2 = (!co_reg_3142.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co_reg_3142.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_26_fu_7815_p2() {
    co_26_fu_7815_p2 = (!co5_reg_3176.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co5_reg_3176.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_27_fu_7958_p2() {
    co_27_fu_7958_p2 = (!co9_reg_3221.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co9_reg_3221.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_28_fu_8115_p2() {
    co_28_fu_8115_p2 = (!co12_reg_3255.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co12_reg_3255.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_29_fu_8318_p2() {
    co_29_fu_8318_p2 = (!co16_reg_3300.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co16_reg_3300.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_30_fu_8475_p2() {
    co_30_fu_8475_p2 = (!co19_reg_3334.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co19_reg_3334.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_31_fu_8678_p2() {
    co_31_fu_8678_p2 = (!co22_reg_3367.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co22_reg_3367.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_32_fu_8835_p2() {
    co_32_fu_8835_p2 = (!co25_reg_3401.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co25_reg_3401.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_33_fu_9036_p2() {
    co_33_fu_9036_p2 = (!co29_reg_3446.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co29_reg_3446.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_34_fu_9197_p2() {
    co_34_fu_9197_p2 = (!co32_reg_3480.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co32_reg_3480.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_35_fu_9320_p2() {
    co_35_fu_9320_p2 = (!co34_reg_3513.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co34_reg_3513.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_37_fu_9523_p2() {
    co_37_fu_9523_p2 = (!co36_reg_3546.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co36_reg_3546.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_39_fu_9684_p2() {
    co_39_fu_9684_p2 = (!co38_reg_3580.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co38_reg_3580.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_41_fu_9889_p2() {
    co_41_fu_9889_p2 = (!co40_reg_3625.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co40_reg_3625.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_43_fu_10042_p2() {
    co_43_fu_10042_p2 = (!co42_reg_3659.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co42_reg_3659.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_45_fu_10165_p2() {
    co_45_fu_10165_p2 = (!co44_reg_3692.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co44_reg_3692.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_47_fu_10368_p2() {
    co_47_fu_10368_p2 = (!co46_reg_3725.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co46_reg_3725.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_49_fu_10519_p2() {
    co_49_fu_10519_p2 = (!co48_reg_3759.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co48_reg_3759.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_51_fu_10736_p2() {
    co_51_fu_10736_p2 = (!co50_reg_3804.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co50_reg_3804.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_53_fu_10895_p2() {
    co_53_fu_10895_p2 = (!co52_reg_3838.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co52_reg_3838.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_55_fu_11018_p2() {
    co_55_fu_11018_p2 = (!co54_reg_3871.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co54_reg_3871.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_57_fu_11386_p2() {
    co_57_fu_11386_p2 = (!co56_reg_3926.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co56_reg_3926.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_59_fu_11736_p2() {
    co_59_fu_11736_p2 = (!co58_reg_3992.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co58_reg_3992.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_61_fu_12108_p2() {
    co_61_fu_12108_p2 = (!co60_reg_4047.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co60_reg_4047.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_63_fu_12450_p2() {
    co_63_fu_12450_p2 = (!co62_reg_4113.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co62_reg_4113.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_65_fu_12818_p2() {
    co_65_fu_12818_p2 = (!co64_reg_4168.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co64_reg_4168.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_67_fu_13029_p2() {
    co_67_fu_13029_p2 = (!co66_reg_4201.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co66_reg_4201.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_69_fu_13397_p2() {
    co_69_fu_13397_p2 = (!co68_reg_4256.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co68_reg_4256.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_71_fu_13743_p2() {
    co_71_fu_13743_p2 = (!co70_reg_4322.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co70_reg_4322.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_73_fu_14103_p2() {
    co_73_fu_14103_p2 = (!co72_reg_4377.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co72_reg_4377.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_75_fu_14226_p2() {
    co_75_fu_14226_p2 = (!co74_reg_4410.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co74_reg_4410.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_77_fu_14437_p2() {
    co_77_fu_14437_p2 = (!co76_reg_4443.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co76_reg_4443.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_79_fu_14805_p2() {
    co_79_fu_14805_p2 = (!co78_reg_4498.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co78_reg_4498.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_81_fu_15151_p2() {
    co_81_fu_15151_p2 = (!co80_reg_4564.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co80_reg_4564.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_83_fu_15515_p2() {
    co_83_fu_15515_p2 = (!co82_reg_4619.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co82_reg_4619.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_85_fu_15638_p2() {
    co_85_fu_15638_p2 = (!co84_reg_4652.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co84_reg_4652.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_87_fu_15849_p2() {
    co_87_fu_15849_p2 = (!co86_reg_4685.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co86_reg_4685.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_89_fu_16229_p2() {
    co_89_fu_16229_p2 = (!co88_reg_4740.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co88_reg_4740.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_91_fu_16575_p2() {
    co_91_fu_16575_p2 = (!co90_reg_4806.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co90_reg_4806.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_93_fu_16939_p2() {
    co_93_fu_16939_p2 = (!co92_reg_4861.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co92_reg_4861.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_95_fu_17062_p2() {
    co_95_fu_17062_p2 = (!co94_reg_4894.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co94_reg_4894.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_97_fu_17273_p2() {
    co_97_fu_17273_p2 = (!co96_reg_4927.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co96_reg_4927.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_99_fu_17641_p2() {
    co_99_fu_17641_p2 = (!co98_reg_4982.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co98_reg_4982.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_conv1_bias_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        conv1_bias_address0 =  (sc_lv<5>) (tmp_reg_30266.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        conv1_bias_address0 = grp_conv1_p_fu_7194_bias_address0.read();
    } else {
        conv1_bias_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

}

