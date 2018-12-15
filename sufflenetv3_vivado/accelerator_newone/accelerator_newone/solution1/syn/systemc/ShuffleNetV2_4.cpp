#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        ShuffleConvs_0_Downs_address0 = grp_subconv_3x3_32_strid_fu_7479_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        ShuffleConvs_0_Downs_address0 = grp_subconv_1x1_32_p_fu_7395_ShuffleConvs_0_Downs_address0.read();
    } else {
        ShuffleConvs_0_Downs_address0 = "XXXXXXXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        ShuffleConvs_0_Downs_ce0 = grp_subconv_3x3_32_strid_fu_7479_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        ShuffleConvs_0_Downs_ce0 = grp_subconv_1x1_32_p_fu_7395_ShuffleConvs_0_Downs_ce0.read();
    } else {
        ShuffleConvs_0_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_0_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        ShuffleConvs_0_Downs_we0 = grp_subconv_1x1_32_p_fu_7395_ShuffleConvs_0_Downs_we0.read();
    } else {
        ShuffleConvs_0_Downs_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read())) {
        ShuffleConvs_1_Downs_address0 = grp_subconv_3x3_16_strid_fu_7505_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        ShuffleConvs_1_Downs_address0 = grp_subconv_1x1_16p_p_fu_7419_ShuffleConvs_1_Downs_address0.read();
    } else {
        ShuffleConvs_1_Downs_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read())) {
        ShuffleConvs_1_Downs_ce0 = grp_subconv_3x3_16_strid_fu_7505_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        ShuffleConvs_1_Downs_ce0 = grp_subconv_1x1_16p_p_fu_7419_ShuffleConvs_1_Downs_ce0.read();
    } else {
        ShuffleConvs_1_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_1_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        ShuffleConvs_1_Downs_we0 = grp_subconv_1x1_16p_p_fu_7419_ShuffleConvs_1_Downs_we0.read();
    } else {
        ShuffleConvs_1_Downs_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read())) {
        ShuffleConvs_2_Downs_address0 = grp_subconv_3x3_8_stride_fu_7492_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state528.read())) {
        ShuffleConvs_2_Downs_address0 = grp_subconv_1x1_8p_p_fu_7407_ShuffleConvs_2_Downs_address0.read();
    } else {
        ShuffleConvs_2_Downs_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read())) {
        ShuffleConvs_2_Downs_ce0 = grp_subconv_3x3_8_stride_fu_7492_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state528.read())) {
        ShuffleConvs_2_Downs_ce0 = grp_subconv_1x1_8p_p_fu_7407_ShuffleConvs_2_Downs_ce0.read();
    } else {
        ShuffleConvs_2_Downs_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ShuffleConvs_2_Downs_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state528.read())) {
        ShuffleConvs_2_Downs_we0 = grp_subconv_1x1_8p_p_fu_7407_ShuffleConvs_2_Downs_we0.read();
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

void ShuffleNetV2::thread_ap_CS_fsm_state711() {
    ap_CS_fsm_state711 = ap_CS_fsm.read()[710];
}

void ShuffleNetV2::thread_ap_CS_fsm_state712() {
    ap_CS_fsm_state712 = ap_CS_fsm.read()[711];
}

void ShuffleNetV2::thread_ap_CS_fsm_state713() {
    ap_CS_fsm_state713 = ap_CS_fsm.read()[712];
}

void ShuffleNetV2::thread_ap_CS_fsm_state714() {
    ap_CS_fsm_state714 = ap_CS_fsm.read()[713];
}

void ShuffleNetV2::thread_ap_CS_fsm_state715() {
    ap_CS_fsm_state715 = ap_CS_fsm.read()[714];
}

void ShuffleNetV2::thread_ap_CS_fsm_state716() {
    ap_CS_fsm_state716 = ap_CS_fsm.read()[715];
}

void ShuffleNetV2::thread_ap_CS_fsm_state717() {
    ap_CS_fsm_state717 = ap_CS_fsm.read()[716];
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

void ShuffleNetV2::thread_ap_CS_fsm_state721() {
    ap_CS_fsm_state721 = ap_CS_fsm.read()[720];
}

void ShuffleNetV2::thread_ap_CS_fsm_state723() {
    ap_CS_fsm_state723 = ap_CS_fsm.read()[722];
}

void ShuffleNetV2::thread_ap_CS_fsm_state724() {
    ap_CS_fsm_state724 = ap_CS_fsm.read()[723];
}

void ShuffleNetV2::thread_ap_CS_fsm_state728() {
    ap_CS_fsm_state728 = ap_CS_fsm.read()[727];
}

void ShuffleNetV2::thread_ap_CS_fsm_state729() {
    ap_CS_fsm_state729 = ap_CS_fsm.read()[728];
}

void ShuffleNetV2::thread_ap_CS_fsm_state73() {
    ap_CS_fsm_state73 = ap_CS_fsm.read()[72];
}

void ShuffleNetV2::thread_ap_CS_fsm_state733() {
    ap_CS_fsm_state733 = ap_CS_fsm.read()[732];
}

void ShuffleNetV2::thread_ap_CS_fsm_state734() {
    ap_CS_fsm_state734 = ap_CS_fsm.read()[733];
}

void ShuffleNetV2::thread_ap_CS_fsm_state737() {
    ap_CS_fsm_state737 = ap_CS_fsm.read()[736];
}

void ShuffleNetV2::thread_ap_CS_fsm_state738() {
    ap_CS_fsm_state738 = ap_CS_fsm.read()[737];
}

void ShuffleNetV2::thread_ap_CS_fsm_state739() {
    ap_CS_fsm_state739 = ap_CS_fsm.read()[738];
}

void ShuffleNetV2::thread_ap_CS_fsm_state74() {
    ap_CS_fsm_state74 = ap_CS_fsm.read()[73];
}

void ShuffleNetV2::thread_ap_CS_fsm_state740() {
    ap_CS_fsm_state740 = ap_CS_fsm.read()[739];
}

void ShuffleNetV2::thread_ap_CS_fsm_state741() {
    ap_CS_fsm_state741 = ap_CS_fsm.read()[740];
}

void ShuffleNetV2::thread_ap_CS_fsm_state742() {
    ap_CS_fsm_state742 = ap_CS_fsm.read()[741];
}

void ShuffleNetV2::thread_ap_CS_fsm_state745() {
    ap_CS_fsm_state745 = ap_CS_fsm.read()[744];
}

void ShuffleNetV2::thread_ap_CS_fsm_state746() {
    ap_CS_fsm_state746 = ap_CS_fsm.read()[745];
}

void ShuffleNetV2::thread_ap_CS_fsm_state75() {
    ap_CS_fsm_state75 = ap_CS_fsm.read()[74];
}

void ShuffleNetV2::thread_ap_CS_fsm_state750() {
    ap_CS_fsm_state750 = ap_CS_fsm.read()[749];
}

void ShuffleNetV2::thread_ap_CS_fsm_state751() {
    ap_CS_fsm_state751 = ap_CS_fsm.read()[750];
}

void ShuffleNetV2::thread_ap_CS_fsm_state752() {
    ap_CS_fsm_state752 = ap_CS_fsm.read()[751];
}

void ShuffleNetV2::thread_ap_CS_fsm_state756() {
    ap_CS_fsm_state756 = ap_CS_fsm.read()[755];
}

void ShuffleNetV2::thread_ap_CS_fsm_state757() {
    ap_CS_fsm_state757 = ap_CS_fsm.read()[756];
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state739.read()) && 
         esl_seteq<1,1,1>(exitcond1_i_fu_30691_p2.read(), ap_const_lv1_1))) {
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state739.read()) && 
         esl_seteq<1,1,1>(exitcond1_i_fu_30691_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_avgpool_output_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state740.read())) {
        avgpool_output_address0 =  (sc_lv<9>) (tmp_i_736_fu_30731_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read())) {
        avgpool_output_address0 =  (sc_lv<9>) (tmp_i3_fu_30686_p1.read());
    } else {
        avgpool_output_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_avgpool_output_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state740.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()))) {
        avgpool_output_ce0 = ap_const_logic_1;
    } else {
        avgpool_output_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_avgpool_output_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read())) {
        avgpool_output_we0 = ap_const_logic_1;
    } else {
        avgpool_output_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_259_fu_11135_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_254_fu_10976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_246_fu_10759_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_237_fu_10282_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_231_fu_10125_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_223_fu_9920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_214_fu_9437_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_209_fu_9276_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_201_fu_9071_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_194_fu_8711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_188_fu_8554_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_181_fu_8351_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_175_fu_8194_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        bias_24_address0 =  (sc_lv<5>) (tmp_168_fu_8055_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        bias_24_address0 = grp_subconv_3x3_16_no_re_fu_7518_bias_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()))) {
        bias_24_address0 = grp_subconv_3x3_32_strid_fu_7479_bias_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        bias_24_address0 = grp_subconv_1x1_16_p_fu_7455_bias_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        bias_24_address0 = grp_subconv_1x1_32_p_fu_7395_bias_address0.read();
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
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        bias_24_ce0 = grp_subconv_3x3_16_no_re_fu_7518_bias_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()))) {
        bias_24_ce0 = grp_subconv_3x3_32_strid_fu_7479_bias_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        bias_24_ce0 = grp_subconv_1x1_16_p_fu_7455_bias_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        bias_24_ce0 = grp_subconv_1x1_32_p_fu_7395_bias_ce0.read();
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
        bias_48_address0 =  (sc_lv<6>) (tmp_670_fu_24263_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state502.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_654_fu_23887_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state490.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_640_fu_23541_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_620_fu_22835_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state461.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_606_fu_22459_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state449.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_595_fu_22109_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state430.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_577_fu_21407_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state420.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_563_fu_21043_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state408.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_552_fu_20689_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state389.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_534_fu_19995_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_520_fu_19631_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_509_fu_19277_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state348.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_491_fu_18583_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state338.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_477_fu_18219_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_466_fu_17873_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_448_fu_17179_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state297.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_434_fu_16811_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state285.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_423_fu_16461_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state266.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_405_fu_15755_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state256.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_391_fu_15387_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_380_fu_15037_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_362_fu_14343_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_348_fu_13979_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_337_fu_13629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state187.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_322_fu_13054_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_307_fu_12686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_296_fu_12340_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_282_fu_11972_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        bias_48_address0 =  (sc_lv<6>) (tmp_271_fu_11618_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()))) {
        bias_48_address0 = grp_subconv_3x3_8_no_rel_fu_7542_bias_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()))) {
        bias_48_address0 = grp_subconv_3x3_16_strid_fu_7505_bias_address0.read();
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
        bias_48_address0 = grp_subconv_1x1_8_p_fu_7443_bias_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        bias_48_address0 = grp_subconv_1x1_16p_p_fu_7419_bias_address0.read();
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
        bias_48_ce0 = grp_subconv_3x3_8_no_rel_fu_7542_bias_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()))) {
        bias_48_ce0 = grp_subconv_3x3_16_strid_fu_7505_bias_ce0.read();
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
        bias_48_ce0 = grp_subconv_1x1_8_p_fu_7443_bias_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        bias_48_ce0 = grp_subconv_1x1_16p_p_fu_7419_bias_ce0.read();
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
        bias_96_address0 =  (sc_lv<7>) (tmp_889_fu_30161_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state683.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_873_fu_29813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state671.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_860_fu_29473_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state652.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_840_fu_28791_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state642.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_824_fu_28443_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state630.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_813_fu_28085_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state611.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_793_fu_27403_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state601.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_776_fu_27043_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state589.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_765_fu_26701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state573.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_748_fu_26138_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state563.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_728_fu_25786_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state549.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_717_fu_25444_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state539.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_701_fu_25084_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state527.read())) {
        bias_96_address0 =  (sc_lv<7>) (tmp_686_fu_24738_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        bias_96_address0 = grp_subconv_3x3_4_no_rel_fu_7530_bias_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read()))) {
        bias_96_address0 = grp_subconv_3x3_8_stride_fu_7492_bias_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state550.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()))) {
        bias_96_address0 = grp_subconv_1x1_4_p_fu_7431_bias_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state528.read())) {
        bias_96_address0 = grp_subconv_1x1_8p_p_fu_7407_bias_address0.read();
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
        bias_96_ce0 = grp_subconv_3x3_4_no_rel_fu_7530_bias_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read()))) {
        bias_96_ce0 = grp_subconv_3x3_8_stride_fu_7492_bias_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state550.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()))) {
        bias_96_ce0 = grp_subconv_1x1_4_p_fu_7431_bias_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state528.read())) {
        bias_96_ce0 = grp_subconv_1x1_8p_p_fu_7407_bias_ce0.read();
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
        bias_address0 =  (sc_lv<12>) (tmp_887_fu_30154_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state682.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_871_fu_29806_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state670.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_858_fu_29466_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state651.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_838_fu_28784_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state641.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_822_fu_28436_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_811_fu_28078_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_790_fu_27396_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state600.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_774_fu_27036_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state588.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_762_fu_26694_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state572.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_746_fu_26131_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state562.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_726_fu_25779_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_715_fu_25437_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state538.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_699_fu_25076_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_684_fu_24730_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state511.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_668_fu_24255_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state501.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_652_fu_23879_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state489.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_637_fu_23533_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_618_fu_22827_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state460.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_604_fu_22452_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state448.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_593_fu_22102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state429.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_575_fu_21400_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state419.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_561_fu_21036_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state407.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_550_fu_20682_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state388.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_532_fu_19988_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state378.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_518_fu_19624_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_507_fu_19270_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state347.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_489_fu_18576_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state337.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_475_fu_18212_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state325.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_464_fu_17866_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state306.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_446_fu_17172_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_432_fu_16803_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_421_fu_16453_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state265.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_403_fu_15747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state255.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_389_fu_15379_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state243.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_378_fu_15030_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_360_fu_14336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state214.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_346_fu_13972_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state202.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_335_fu_13622_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_320_fu_13047_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_305_fu_12679_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_294_fu_12332_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_280_fu_11964_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_269_fu_11611_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_258_fu_11130_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_253_fu_10971_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_245_fu_10754_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state97.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_236_fu_10277_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_230_fu_10120_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_222_fu_9915_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_213_fu_9432_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_208_fu_9271_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_200_fu_9066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_193_fu_8706_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_187_fu_8549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_180_fu_8346_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_174_fu_8189_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_167_fu_8050_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_162_fu_7801_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_159_fu_7765_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        bias_address0 =  (sc_lv<12>) (tmp_fu_7734_p1.read());
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
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_1180_cast_reg_31893.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read())) {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_1146_cast_fu_10605_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_1143_cast_reg_31630.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_1094_cast_fu_9760_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_1091_cast_reg_31367.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_1041_cast_fu_8915_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        buffer0_1_24_16x16_p_address0 = grp_shuffle_24_p_fu_7554_left_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        buffer0_1_24_16x16_p_address0 = grp_subconv_3x3_16_no_re_fu_7518_output_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()))) {
        buffer0_1_24_16x16_p_address0 = grp_subconv_3x3_32_strid_fu_7479_output_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        buffer0_1_24_16x16_p_address0 = grp_subconv_1x1_16_p_fu_7455_input_r_address0.read();
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
        buffer0_1_24_16x16_p_ce0 = grp_shuffle_24_p_fu_7554_left_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        buffer0_1_24_16x16_p_ce0 = grp_subconv_3x3_16_no_re_fu_7518_output_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()))) {
        buffer0_1_24_16x16_p_ce0 = grp_subconv_3x3_32_strid_fu_7479_output_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        buffer0_1_24_16x16_p_ce0 = grp_subconv_1x1_16_p_fu_7455_input_r_ce0.read();
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
        buffer0_1_24_16x16_p_d0 = grp_subconv_3x3_16_no_re_fu_7518_output_r_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()))) {
        buffer0_1_24_16x16_p_d0 = grp_subconv_3x3_32_strid_fu_7479_output_r_d0.read();
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
        buffer0_1_24_16x16_p_we0 = grp_subconv_3x3_16_no_re_fu_7518_output_r_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()))) {
        buffer0_1_24_16x16_p_we0 = grp_subconv_3x3_32_strid_fu_7479_output_r_we0.read();
    } else {
        buffer0_1_24_16x16_p_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_48_8x8_p_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state517.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1894_cast_reg_36091.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1830_cast_fu_23166_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state476.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1829_cast_reg_35641.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1750_cast_fu_21738_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state435.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1748_cast_reg_35191.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state399.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1672_cast_fu_20326_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state394.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1670_cast_reg_34741.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state358.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1593_cast_fu_18914_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state353.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1592_cast_reg_34291.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state317.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1516_cast_fu_17510_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1515_cast_reg_33841.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state276.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1437_cast_fu_16086_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state271.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1436_cast_reg_33391.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state235.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1361_cast_fu_14674_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1359_cast_reg_32941.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read())) {
        buffer0_1_48_8x8_p_address0 =  (sc_lv<13>) (tmp_1284_cast_fu_13266_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state477.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state518.read()))) {
        buffer0_1_48_8x8_p_address0 = grp_shuffle_48_p_fu_7578_left_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()))) {
        buffer0_1_48_8x8_p_address0 = grp_subconv_3x3_8_no_rel_fu_7542_output_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()))) {
        buffer0_1_48_8x8_p_address0 = grp_subconv_3x3_16_strid_fu_7505_output_r_address0.read();
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
        buffer0_1_48_8x8_p_address0 = grp_subconv_1x1_8_p_fu_7443_input_r_address0.read();
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
        buffer0_1_48_8x8_p_ce0 = grp_shuffle_48_p_fu_7578_left_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()))) {
        buffer0_1_48_8x8_p_ce0 = grp_subconv_3x3_8_no_rel_fu_7542_output_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()))) {
        buffer0_1_48_8x8_p_ce0 = grp_subconv_3x3_16_strid_fu_7505_output_r_ce0.read();
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
        buffer0_1_48_8x8_p_ce0 = grp_subconv_1x1_8_p_fu_7443_input_r_ce0.read();
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
        buffer0_1_48_8x8_p_d0 = grp_subconv_3x3_8_no_rel_fu_7542_output_r_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()))) {
        buffer0_1_48_8x8_p_d0 = grp_subconv_3x3_16_strid_fu_7505_output_r_d0.read();
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
        buffer0_1_48_8x8_p_we0 = grp_subconv_3x3_8_no_rel_fu_7542_output_r_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()))) {
        buffer0_1_48_8x8_p_we0 = grp_subconv_3x3_16_strid_fu_7505_output_r_we0.read();
    } else {
        buffer0_1_48_8x8_p_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_96_4x4_p_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state698.read())) {
        buffer0_1_96_4x4_p_address0 =  (sc_lv<12>) (tmp_2249_cast_reg_38039.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state662.read())) {
        buffer0_1_96_4x4_p_address0 =  (sc_lv<12>) (tmp_2148_cast_fu_29126_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state657.read())) {
        buffer0_1_96_4x4_p_address0 =  (sc_lv<12>) (tmp_2146_cast_reg_37589.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state621.read())) {
        buffer0_1_96_4x4_p_address0 =  (sc_lv<12>) (tmp_2072_cast_fu_27738_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read())) {
        buffer0_1_96_4x4_p_address0 =  (sc_lv<12>) (tmp_2070_cast_reg_37139.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state580.read())) {
        buffer0_1_96_4x4_p_address0 =  (sc_lv<12>) (tmp_1995_cast_fu_26350_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state699.read()))) {
        buffer0_1_96_4x4_p_address0 = grp_shuffle_96_p_fu_7566_left_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        buffer0_1_96_4x4_p_address0 = grp_subconv_3x3_4_no_rel_fu_7530_output_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read()))) {
        buffer0_1_96_4x4_p_address0 = grp_subconv_3x3_8_stride_fu_7492_output_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state550.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()))) {
        buffer0_1_96_4x4_p_address0 = grp_subconv_1x1_4_p_fu_7431_input_r_address0.read();
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
        buffer0_1_96_4x4_p_ce0 = grp_shuffle_96_p_fu_7566_left_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        buffer0_1_96_4x4_p_ce0 = grp_subconv_3x3_4_no_rel_fu_7530_output_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read()))) {
        buffer0_1_96_4x4_p_ce0 = grp_subconv_3x3_8_stride_fu_7492_output_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state550.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()))) {
        buffer0_1_96_4x4_p_ce0 = grp_subconv_1x1_4_p_fu_7431_input_r_ce0.read();
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
        buffer0_1_96_4x4_p_d0 = grp_subconv_3x3_4_no_rel_fu_7530_output_r_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read()))) {
        buffer0_1_96_4x4_p_d0 = grp_subconv_3x3_8_stride_fu_7492_output_r_d0.read();
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
        buffer0_1_96_4x4_p_we0 = grp_subconv_3x3_4_no_rel_fu_7530_output_r_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read()))) {
        buffer0_1_96_4x4_p_we0 = grp_subconv_3x3_8_stride_fu_7492_output_r_we0.read();
    } else {
        buffer0_1_96_4x4_p_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_24_16x16_p_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        buffer1_1_24_16x16_p_address0 = grp_shuffle_24_r_p_fu_7603_right_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        buffer1_1_24_16x16_p_address0 = grp_shuffle_24_l_p_fu_7595_left_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        buffer1_1_24_16x16_p_address0 = grp_shuffle_24_p_fu_7554_buffer1_1_24_16x16_p_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        buffer1_1_24_16x16_p_address0 = grp_subconv_3x3_16_no_re_fu_7518_input_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        buffer1_1_24_16x16_p_address0 = grp_subconv_1x1_16_p_fu_7455_output_r_address0.read();
    } else {
        buffer1_1_24_16x16_p_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_24_16x16_p_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        buffer1_1_24_16x16_p_ce0 = grp_shuffle_24_r_p_fu_7603_right_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        buffer1_1_24_16x16_p_ce0 = grp_shuffle_24_l_p_fu_7595_left_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()))) {
        buffer1_1_24_16x16_p_ce0 = grp_shuffle_24_p_fu_7554_buffer1_1_24_16x16_p_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        buffer1_1_24_16x16_p_ce0 = grp_subconv_3x3_16_no_re_fu_7518_input_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        buffer1_1_24_16x16_p_ce0 = grp_subconv_1x1_16_p_fu_7455_output_r_ce0.read();
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
        buffer1_1_24_16x16_p_we0 = grp_subconv_1x1_16_p_fu_7455_output_r_we0.read();
    } else {
        buffer1_1_24_16x16_p_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_48_8x8_p_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read())) {
        buffer1_1_48_8x8_p_address0 = grp_shuffle_48_r_p_fu_7635_right_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
        buffer1_1_48_8x8_p_address0 = grp_shuffle_48_l_p_fu_7627_left_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state477.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state518.read()))) {
        buffer1_1_48_8x8_p_address0 = grp_shuffle_48_p_fu_7578_buffer1_1_48_8x8_p_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()))) {
        buffer1_1_48_8x8_p_address0 = grp_subconv_3x3_8_no_rel_fu_7542_input_r_address0.read();
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
        buffer1_1_48_8x8_p_address0 = grp_subconv_1x1_8_p_fu_7443_output_r_address0.read();
    } else {
        buffer1_1_48_8x8_p_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_48_8x8_p_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read())) {
        buffer1_1_48_8x8_p_ce0 = grp_shuffle_48_r_p_fu_7635_right_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
        buffer1_1_48_8x8_p_ce0 = grp_shuffle_48_l_p_fu_7627_left_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state477.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state518.read()))) {
        buffer1_1_48_8x8_p_ce0 = grp_shuffle_48_p_fu_7578_buffer1_1_48_8x8_p_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()))) {
        buffer1_1_48_8x8_p_ce0 = grp_subconv_3x3_8_no_rel_fu_7542_input_r_ce0.read();
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
        buffer1_1_48_8x8_p_ce0 = grp_subconv_1x1_8_p_fu_7443_output_r_ce0.read();
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
        buffer1_1_48_8x8_p_we0 = grp_subconv_1x1_8_p_fu_7443_output_r_we0.read();
    } else {
        buffer1_1_48_8x8_p_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read())) {
        buffer1_1_96_4x4_p_address0 = grp_shuffle_96_r_p_fu_7619_right_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state552.read())) {
        buffer1_1_96_4x4_p_address0 = grp_shuffle_96_l_p_fu_7611_left_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state699.read()))) {
        buffer1_1_96_4x4_p_address0 = grp_shuffle_96_p_fu_7566_buffer1_1_96_4x4_p_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        buffer1_1_96_4x4_p_address0 = grp_subconv_3x3_4_no_rel_fu_7530_input_r_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state550.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()))) {
        buffer1_1_96_4x4_p_address0 = grp_subconv_1x1_4_p_fu_7431_output_r_address0.read();
    } else {
        buffer1_1_96_4x4_p_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read())) {
        buffer1_1_96_4x4_p_ce0 = grp_shuffle_96_r_p_fu_7619_right_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state552.read())) {
        buffer1_1_96_4x4_p_ce0 = grp_shuffle_96_l_p_fu_7611_left_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state699.read()))) {
        buffer1_1_96_4x4_p_ce0 = grp_shuffle_96_p_fu_7566_buffer1_1_96_4x4_p_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        buffer1_1_96_4x4_p_ce0 = grp_subconv_3x3_4_no_rel_fu_7530_input_r_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state550.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()))) {
        buffer1_1_96_4x4_p_ce0 = grp_subconv_1x1_4_p_fu_7431_output_r_ce0.read();
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
        buffer1_1_96_4x4_p_we0 = grp_subconv_1x1_4_p_fu_7431_output_r_we0.read();
    } else {
        buffer1_1_96_4x4_p_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ci26_cast_fu_11323_p1() {
    ci26_cast_fu_11323_p1 = esl_zext<7,5>(ci26_reg_4059.read());
}

void ShuffleNetV2::thread_ci28_cast_fu_12041_p1() {
    ci28_cast_fu_12041_p1 = esl_zext<7,5>(ci28_reg_4180.read());
}

void ShuffleNetV2::thread_ci30_cast_fu_12755_p1() {
    ci30_cast_fu_12755_p1 = esl_zext<7,5>(ci30_reg_4301.read());
}

void ShuffleNetV2::thread_ci32_cast_fu_13334_p1() {
    ci32_cast_fu_13334_p1 = esl_zext<7,5>(ci32_reg_4389.read());
}

void ShuffleNetV2::thread_ci34_cast_fu_14048_p1() {
    ci34_cast_fu_14048_p1 = esl_zext<7,5>(ci34_reg_4510.read());
}

void ShuffleNetV2::thread_ci36_cast_fu_14742_p1() {
    ci36_cast_fu_14742_p1 = esl_zext<7,5>(ci36_reg_4631.read());
}

void ShuffleNetV2::thread_ci38_cast_fu_15456_p1() {
    ci38_cast_fu_15456_p1 = esl_zext<7,5>(ci38_reg_4752.read());
}

void ShuffleNetV2::thread_ci40_cast_fu_16154_p1() {
    ci40_cast_fu_16154_p1 = esl_zext<7,5>(ci40_reg_4873.read());
}

void ShuffleNetV2::thread_ci42_cast_fu_16880_p1() {
    ci42_cast_fu_16880_p1 = esl_zext<7,5>(ci42_reg_4994.read());
}

void ShuffleNetV2::thread_ci44_cast_fu_17578_p1() {
    ci44_cast_fu_17578_p1 = esl_zext<7,5>(ci44_reg_5115.read());
}

void ShuffleNetV2::thread_ci46_cast_fu_18288_p1() {
    ci46_cast_fu_18288_p1 = esl_zext<7,5>(ci46_reg_5236.read());
}

void ShuffleNetV2::thread_ci48_cast_fu_18982_p1() {
    ci48_cast_fu_18982_p1 = esl_zext<7,5>(ci48_reg_5357.read());
}

void ShuffleNetV2::thread_ci50_cast_fu_19700_p1() {
    ci50_cast_fu_19700_p1 = esl_zext<7,5>(ci50_reg_5478.read());
}

void ShuffleNetV2::thread_ci52_cast_fu_20394_p1() {
    ci52_cast_fu_20394_p1 = esl_zext<7,5>(ci52_reg_5599.read());
}

void ShuffleNetV2::thread_ci54_cast_fu_21112_p1() {
    ci54_cast_fu_21112_p1 = esl_zext<7,5>(ci54_reg_5720.read());
}

void ShuffleNetV2::thread_ci56_cast_fu_21806_p1() {
    ci56_cast_fu_21806_p1 = esl_zext<7,5>(ci56_reg_5841.read());
}

void ShuffleNetV2::thread_ci58_cast_fu_22528_p1() {
    ci58_cast_fu_22528_p1 = esl_zext<7,5>(ci58_reg_5962.read());
}

void ShuffleNetV2::thread_ci60_cast_fu_23234_p1() {
    ci60_cast_fu_23234_p1 = esl_zext<7,5>(ci60_reg_6083.read());
}

void ShuffleNetV2::thread_ci62_cast_fu_23956_p1() {
    ci62_cast_fu_23956_p1 = esl_zext<7,5>(ci62_reg_6204.read());
}

void ShuffleNetV2::thread_ci64_cast_fu_24449_p1() {
    ci64_cast_fu_24449_p1 = esl_zext<8,5>(ci64_reg_6292.read());
}

void ShuffleNetV2::thread_ci66_cast_fu_25151_p1() {
    ci66_cast_fu_25151_p1 = esl_zext<8,5>(ci66_reg_6413.read());
}

void ShuffleNetV2::thread_ci68_cast_fu_25853_p1() {
    ci68_cast_fu_25853_p1 = esl_zext<8,5>(ci68_reg_6534.read());
}

void ShuffleNetV2::thread_ci70_cast_fu_26416_p1() {
    ci70_cast_fu_26416_p1 = esl_zext<8,5>(ci70_reg_6622.read());
}

void ShuffleNetV2::thread_ci72_cast_fu_27110_p1() {
    ci72_cast_fu_27110_p1 = esl_zext<8,5>(ci72_reg_6743.read());
}

void ShuffleNetV2::thread_ci74_cast_fu_27804_p1() {
    ci74_cast_fu_27804_p1 = esl_zext<8,5>(ci74_reg_6864.read());
}

void ShuffleNetV2::thread_ci76_cast_fu_28510_p1() {
    ci76_cast_fu_28510_p1 = esl_zext<8,5>(ci76_reg_6985.read());
}

void ShuffleNetV2::thread_ci78_cast_fu_29192_p1() {
    ci78_cast_fu_29192_p1 = esl_zext<8,5>(ci78_reg_7106.read());
}

void ShuffleNetV2::thread_ci80_cast_fu_29880_p1() {
    ci80_cast_fu_29880_p1 = esl_zext<8,5>(ci80_reg_7227.read());
}

void ShuffleNetV2::thread_ci_10_fu_8008_p2() {
    ci_10_fu_8008_p2 = (!ci3_reg_3330.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci3_reg_3330.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_11_fu_8291_p2() {
    ci_11_fu_8291_p2 = (!ci10_reg_3409.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci10_reg_3409.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_13_fu_8651_p2() {
    ci_13_fu_8651_p2 = (!ci12_reg_3488.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci12_reg_3488.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_15_fu_9011_p2() {
    ci_15_fu_9011_p2 = (!ci14_reg_3555.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci14_reg_3555.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_17_fu_9375_p2() {
    ci_17_fu_9375_p2 = (!ci16_reg_3634.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci16_reg_3634.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_19_fu_9856_p2() {
    ci_19_fu_9856_p2 = (!ci18_reg_3734.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci18_reg_3734.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_21_fu_10222_p2() {
    ci_21_fu_10222_p2 = (!ci20_reg_3813.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci20_reg_3813.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_23_fu_10701_p2() {
    ci_23_fu_10701_p2 = (!ci22_reg_3913.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci22_reg_3913.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_25_fu_11075_p2() {
    ci_25_fu_11075_p2 = (!ci24_reg_3992.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci24_reg_3992.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_27_fu_11333_p2() {
    ci_27_fu_11333_p2 = (!ci26_reg_4059.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci26_reg_4059.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_29_fu_12051_p2() {
    ci_29_fu_12051_p2 = (!ci28_reg_4180.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci28_reg_4180.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_31_fu_12765_p2() {
    ci_31_fu_12765_p2 = (!ci30_reg_4301.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci30_reg_4301.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_33_fu_13344_p2() {
    ci_33_fu_13344_p2 = (!ci32_reg_4389.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci32_reg_4389.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_35_fu_14058_p2() {
    ci_35_fu_14058_p2 = (!ci34_reg_4510.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci34_reg_4510.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_37_fu_14752_p2() {
    ci_37_fu_14752_p2 = (!ci36_reg_4631.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci36_reg_4631.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_39_fu_15466_p2() {
    ci_39_fu_15466_p2 = (!ci38_reg_4752.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci38_reg_4752.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_41_fu_16164_p2() {
    ci_41_fu_16164_p2 = (!ci40_reg_4873.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci40_reg_4873.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_43_fu_16890_p2() {
    ci_43_fu_16890_p2 = (!ci42_reg_4994.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci42_reg_4994.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_45_fu_17588_p2() {
    ci_45_fu_17588_p2 = (!ci44_reg_5115.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci44_reg_5115.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_47_fu_18298_p2() {
    ci_47_fu_18298_p2 = (!ci46_reg_5236.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci46_reg_5236.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_49_fu_18992_p2() {
    ci_49_fu_18992_p2 = (!ci48_reg_5357.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci48_reg_5357.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_51_fu_19710_p2() {
    ci_51_fu_19710_p2 = (!ci50_reg_5478.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci50_reg_5478.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_53_fu_20404_p2() {
    ci_53_fu_20404_p2 = (!ci52_reg_5599.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci52_reg_5599.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_55_fu_21122_p2() {
    ci_55_fu_21122_p2 = (!ci54_reg_5720.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci54_reg_5720.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_57_fu_21816_p2() {
    ci_57_fu_21816_p2 = (!ci56_reg_5841.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci56_reg_5841.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_59_fu_22538_p2() {
    ci_59_fu_22538_p2 = (!ci58_reg_5962.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci58_reg_5962.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_61_fu_23244_p2() {
    ci_61_fu_23244_p2 = (!ci60_reg_6083.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci60_reg_6083.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_63_fu_23966_p2() {
    ci_63_fu_23966_p2 = (!ci62_reg_6204.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci62_reg_6204.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_65_fu_24459_p2() {
    ci_65_fu_24459_p2 = (!ci64_reg_6292.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci64_reg_6292.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_67_fu_25161_p2() {
    ci_67_fu_25161_p2 = (!ci66_reg_6413.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci66_reg_6413.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_69_fu_25863_p2() {
    ci_69_fu_25863_p2 = (!ci68_reg_6534.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci68_reg_6534.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_71_fu_26426_p2() {
    ci_71_fu_26426_p2 = (!ci70_reg_6622.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci70_reg_6622.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_73_fu_27120_p2() {
    ci_73_fu_27120_p2 = (!ci72_reg_6743.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci72_reg_6743.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_75_fu_27814_p2() {
    ci_75_fu_27814_p2 = (!ci74_reg_6864.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci74_reg_6864.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_77_fu_28520_p2() {
    ci_77_fu_28520_p2 = (!ci76_reg_6985.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci76_reg_6985.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_79_fu_29202_p2() {
    ci_79_fu_29202_p2 = (!ci78_reg_7106.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci78_reg_7106.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_81_fu_29890_p2() {
    ci_81_fu_29890_p2 = (!ci80_reg_7227.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci80_reg_7227.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_83_fu_30295_p2() {
    ci_83_fu_30295_p2 = (!ci82_reg_7304.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ci82_reg_7304.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void ShuffleNetV2::thread_ci_84_fu_30725_p2() {
    ci_84_fu_30725_p2 = (!ci_i_reg_7372.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(ci_i_reg_7372.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void ShuffleNetV2::thread_ci_9_fu_7817_p2() {
    ci_9_fu_7817_p2 = (!ci_reg_3286.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(ci_reg_3286.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_co101_cast1_fu_16470_p1() {
    co101_cast1_fu_16470_p1 = esl_zext<9,5>(co99_reg_4917.read());
}

void ShuffleNetV2::thread_co101_cast_fu_16466_p1() {
    co101_cast_fu_16466_p1 = esl_zext<7,5>(co99_reg_4917.read());
}

void ShuffleNetV2::thread_co103_cast_fu_16816_p1() {
    co103_cast_fu_16816_p1 = esl_zext<11,5>(co101_reg_4983.read());
}

void ShuffleNetV2::thread_co106_cast_fu_17303_p1() {
    co106_cast_fu_17303_p1 = esl_zext<7,6>(co105_reg_5071.read());
}

void ShuffleNetV2::thread_co108_cast_fu_17514_p1() {
    co108_cast_fu_17514_p1 = esl_zext<11,5>(co107_reg_5104.read());
}

void ShuffleNetV2::thread_co111_cast1_fu_17882_p1() {
    co111_cast1_fu_17882_p1 = esl_zext<9,5>(co109_reg_5159.read());
}

void ShuffleNetV2::thread_co111_cast_fu_17878_p1() {
    co111_cast_fu_17878_p1 = esl_zext<7,5>(co109_reg_5159.read());
}

void ShuffleNetV2::thread_co113_cast_fu_18224_p1() {
    co113_cast_fu_18224_p1 = esl_zext<11,5>(co111_reg_5225.read());
}

void ShuffleNetV2::thread_co116_cast_fu_18707_p1() {
    co116_cast_fu_18707_p1 = esl_zext<7,6>(co115_reg_5313.read());
}

void ShuffleNetV2::thread_co118_cast_fu_18918_p1() {
    co118_cast_fu_18918_p1 = esl_zext<11,5>(co117_reg_5346.read());
}

void ShuffleNetV2::thread_co121_cast406_cast_fu_19286_p1() {
    co121_cast406_cast_fu_19286_p1 = esl_zext<8,5>(co119_reg_5401.read());
}

void ShuffleNetV2::thread_co121_cast_fu_19282_p1() {
    co121_cast_fu_19282_p1 = esl_zext<7,5>(co119_reg_5401.read());
}

void ShuffleNetV2::thread_co123_cast_fu_19636_p1() {
    co123_cast_fu_19636_p1 = esl_zext<11,5>(co121_reg_5467.read());
}

void ShuffleNetV2::thread_co126_cast_fu_20119_p1() {
    co126_cast_fu_20119_p1 = esl_zext<7,6>(co125_reg_5555.read());
}

void ShuffleNetV2::thread_co128_cast_fu_20330_p1() {
    co128_cast_fu_20330_p1 = esl_zext<11,5>(co127_reg_5588.read());
}

void ShuffleNetV2::thread_co12_cast_fu_8356_p1() {
    co12_cast_fu_8356_p1 = esl_zext<6,5>(co12_reg_3432.read());
}

void ShuffleNetV2::thread_co131_cast368_cast_fu_20698_p1() {
    co131_cast368_cast_fu_20698_p1 = esl_zext<8,5>(co129_reg_5643.read());
}

void ShuffleNetV2::thread_co131_cast_fu_20694_p1() {
    co131_cast_fu_20694_p1 = esl_zext<7,5>(co129_reg_5643.read());
}

void ShuffleNetV2::thread_co133_cast_fu_21048_p1() {
    co133_cast_fu_21048_p1 = esl_zext<11,5>(co131_reg_5709.read());
}

void ShuffleNetV2::thread_co136_cast_fu_21531_p1() {
    co136_cast_fu_21531_p1 = esl_zext<7,6>(co135_reg_5797.read());
}

void ShuffleNetV2::thread_co138_cast344_cast_fu_21742_p1() {
    co138_cast344_cast_fu_21742_p1 = esl_zext<10,5>(co137_reg_5830.read());
}

void ShuffleNetV2::thread_co141_cast1_fu_22118_p1() {
    co141_cast1_fu_22118_p1 = esl_zext<10,5>(co139_reg_5885.read());
}

void ShuffleNetV2::thread_co141_cast_fu_22114_p1() {
    co141_cast_fu_22114_p1 = esl_zext<7,5>(co139_reg_5885.read());
}

void ShuffleNetV2::thread_co143_cast321_cast_fu_22464_p1() {
    co143_cast321_cast_fu_22464_p1 = esl_zext<10,5>(co141_reg_5951.read());
}

void ShuffleNetV2::thread_co146_cast_fu_22959_p1() {
    co146_cast_fu_22959_p1 = esl_zext<7,6>(co145_reg_6039.read());
}

void ShuffleNetV2::thread_co148_cast306_cast_fu_23170_p1() {
    co148_cast306_cast_fu_23170_p1 = esl_zext<9,5>(co147_reg_6072.read());
}

void ShuffleNetV2::thread_co151_cast1_fu_23550_p1() {
    co151_cast1_fu_23550_p1 = esl_zext<10,5>(co149_reg_6127.read());
}

void ShuffleNetV2::thread_co151_cast_fu_23546_p1() {
    co151_cast_fu_23546_p1 = esl_zext<7,5>(co149_reg_6127.read());
}

void ShuffleNetV2::thread_co153_cast_fu_23892_p1() {
    co153_cast_fu_23892_p1 = esl_zext<12,5>(co151_reg_6193.read());
}

void ShuffleNetV2::thread_co156_cast_fu_24387_p1() {
    co156_cast_fu_24387_p1 = esl_zext<12,5>(co155_reg_6281.read());
}

void ShuffleNetV2::thread_co159_cast1_fu_24747_p1() {
    co159_cast1_fu_24747_p1 = esl_zext<10,5>(co157_reg_6336.read());
}

void ShuffleNetV2::thread_co159_cast_fu_24743_p1() {
    co159_cast_fu_24743_p1 = esl_zext<8,5>(co157_reg_6336.read());
}

void ShuffleNetV2::thread_co161_cast_fu_25089_p1() {
    co161_cast_fu_25089_p1 = esl_zext<12,5>(co159_reg_6402.read());
}

void ShuffleNetV2::thread_co163_cast1_fu_25453_p1() {
    co163_cast1_fu_25453_p1 = esl_zext<10,5>(co161_reg_6457.read());
}

void ShuffleNetV2::thread_co163_cast_fu_25449_p1() {
    co163_cast_fu_25449_p1 = esl_zext<8,5>(co161_reg_6457.read());
}

void ShuffleNetV2::thread_co165_cast_fu_25791_p1() {
    co165_cast_fu_25791_p1 = esl_zext<12,5>(co163_reg_6523.read());
}

void ShuffleNetV2::thread_co167_cast_fu_26143_p1() {
    co167_cast_fu_26143_p1 = esl_zext<8,7>(co165_reg_6578.read());
}

void ShuffleNetV2::thread_co168_cast_fu_26354_p1() {
    co168_cast_fu_26354_p1 = esl_zext<12,5>(co167_reg_6611.read());
}

void ShuffleNetV2::thread_co16_cast_fu_8559_p1() {
    co16_cast_fu_8559_p1 = esl_zext<7,5>(co16_reg_3477.read());
}

void ShuffleNetV2::thread_co171_cast1_fu_26710_p1() {
    co171_cast1_fu_26710_p1 = esl_zext<10,5>(co169_reg_6666.read());
}

void ShuffleNetV2::thread_co171_cast_fu_26706_p1() {
    co171_cast_fu_26706_p1 = esl_zext<8,5>(co169_reg_6666.read());
}

void ShuffleNetV2::thread_co173_cast186_cast_fu_27048_p1() {
    co173_cast186_cast_fu_27048_p1 = esl_zext<11,5>(co171_reg_6732.read());
}

void ShuffleNetV2::thread_co176_cast_fu_27531_p1() {
    co176_cast_fu_27531_p1 = esl_zext<8,7>(co175_reg_6820.read());
}

void ShuffleNetV2::thread_co178_cast_fu_27742_p1() {
    co178_cast_fu_27742_p1 = esl_zext<13,5>(co177_reg_6853.read());
}

void ShuffleNetV2::thread_co181_cast157_cast_fu_28094_p1() {
    co181_cast157_cast_fu_28094_p1 = esl_zext<9,5>(co179_reg_6908.read());
}

void ShuffleNetV2::thread_co181_cast_fu_28090_p1() {
    co181_cast_fu_28090_p1 = esl_zext<8,5>(co179_reg_6908.read());
}

void ShuffleNetV2::thread_co183_cast_fu_28448_p1() {
    co183_cast_fu_28448_p1 = esl_zext<13,5>(co181_reg_6974.read());
}

void ShuffleNetV2::thread_co186_cast_fu_28919_p1() {
    co186_cast_fu_28919_p1 = esl_zext<8,7>(co185_reg_7062.read());
}

void ShuffleNetV2::thread_co188_cast_fu_29130_p1() {
    co188_cast_fu_29130_p1 = esl_zext<13,5>(co187_reg_7095.read());
}

void ShuffleNetV2::thread_co191_cast1_fu_29482_p1() {
    co191_cast1_fu_29482_p1 = esl_zext<11,5>(co189_reg_7150.read());
}

void ShuffleNetV2::thread_co191_cast_fu_29478_p1() {
    co191_cast_fu_29478_p1 = esl_zext<8,5>(co189_reg_7150.read());
}

void ShuffleNetV2::thread_co193_cast_fu_29818_p1() {
    co193_cast_fu_29818_p1 = esl_zext<13,5>(co191_reg_7216.read());
}

void ShuffleNetV2::thread_co19_cast_fu_8716_p1() {
    co19_cast_fu_8716_p1 = esl_zext<6,5>(co19_reg_3511.read());
}

void ShuffleNetV2::thread_co22_cast_fu_8919_p1() {
    co22_cast_fu_8919_p1 = esl_zext<7,5>(co22_reg_3544.read());
}

void ShuffleNetV2::thread_co25_cast_fu_9076_p1() {
    co25_cast_fu_9076_p1 = esl_zext<7,5>(co25_reg_3578.read());
}

void ShuffleNetV2::thread_co35_cast_fu_9561_p1() {
    co35_cast_fu_9561_p1 = esl_zext<6,5>(co35_reg_3690.read());
}

void ShuffleNetV2::thread_co38_cast_fu_9764_p1() {
    co38_cast_fu_9764_p1 = esl_zext<8,5>(co38_reg_3723.read());
}

void ShuffleNetV2::thread_co41_cast_fu_9925_p1() {
    co41_cast_fu_9925_p1 = esl_zext<7,5>(co41_reg_3757.read());
}

void ShuffleNetV2::thread_co45_cast_fu_10130_p1() {
    co45_cast_fu_10130_p1 = esl_zext<8,5>(co45_reg_3802.read());
}

void ShuffleNetV2::thread_co51_cast_fu_10406_p1() {
    co51_cast_fu_10406_p1 = esl_zext<6,5>(co51_reg_3869.read());
}

void ShuffleNetV2::thread_co54_cast_fu_10609_p1() {
    co54_cast_fu_10609_p1 = esl_zext<8,5>(co54_reg_3902.read());
}

void ShuffleNetV2::thread_co66_cast_fu_11259_p1() {
    co66_cast_fu_11259_p1 = esl_zext<9,5>(co65_reg_4048.read());
}

void ShuffleNetV2::thread_co69_cast1_fu_11627_p1() {
    co69_cast1_fu_11627_p1 = esl_zext<8,5>(co67_reg_4103.read());
}

void ShuffleNetV2::thread_co69_cast_fu_11623_p1() {
    co69_cast_fu_11623_p1 = esl_zext<7,5>(co67_reg_4103.read());
}

void ShuffleNetV2::thread_co71_cast_fu_11977_p1() {
    co71_cast_fu_11977_p1 = esl_zext<9,5>(co69_reg_4169.read());
}

void ShuffleNetV2::thread_co73_cast1_fu_12349_p1() {
    co73_cast1_fu_12349_p1 = esl_zext<8,5>(co71_reg_4224.read());
}

void ShuffleNetV2::thread_co73_cast_fu_12345_p1() {
    co73_cast_fu_12345_p1 = esl_zext<7,5>(co71_reg_4224.read());
}

void ShuffleNetV2::thread_co75_cast_fu_12691_p1() {
    co75_cast_fu_12691_p1 = esl_zext<10,5>(co73_reg_4290.read());
}

void ShuffleNetV2::thread_co77_cast_fu_13059_p1() {
    co77_cast_fu_13059_p1 = esl_zext<7,6>(co75_reg_4345.read());
}

void ShuffleNetV2::thread_co78_cast_fu_13270_p1() {
    co78_cast_fu_13270_p1 = esl_zext<10,5>(co77_reg_4378.read());
}

void ShuffleNetV2::thread_co81_cast1_fu_13638_p1() {
    co81_cast1_fu_13638_p1 = esl_zext<9,5>(co79_reg_4433.read());
}

void ShuffleNetV2::thread_co81_cast_fu_13634_p1() {
    co81_cast_fu_13634_p1 = esl_zext<7,5>(co79_reg_4433.read());
}

void ShuffleNetV2::thread_co83_cast_fu_13984_p1() {
    co83_cast_fu_13984_p1 = esl_zext<10,5>(co81_reg_4499.read());
}

void ShuffleNetV2::thread_co86_cast_fu_14467_p1() {
    co86_cast_fu_14467_p1 = esl_zext<7,6>(co85_reg_4587.read());
}

void ShuffleNetV2::thread_co88_cast_fu_14678_p1() {
    co88_cast_fu_14678_p1 = esl_zext<10,5>(co87_reg_4620.read());
}

void ShuffleNetV2::thread_co91_cast1_fu_15046_p1() {
    co91_cast1_fu_15046_p1 = esl_zext<9,5>(co89_reg_4675.read());
}

void ShuffleNetV2::thread_co91_cast_fu_15042_p1() {
    co91_cast_fu_15042_p1 = esl_zext<7,5>(co89_reg_4675.read());
}

void ShuffleNetV2::thread_co93_cast_fu_15392_p1() {
    co93_cast_fu_15392_p1 = esl_zext<10,5>(co91_reg_4741.read());
}

void ShuffleNetV2::thread_co96_cast_fu_15879_p1() {
    co96_cast_fu_15879_p1 = esl_zext<7,6>(co95_reg_4829.read());
}

void ShuffleNetV2::thread_co98_cast496_cast_fu_16090_p1() {
    co98_cast496_cast_fu_16090_p1 = esl_zext<9,5>(co97_reg_4862.read());
}

void ShuffleNetV2::thread_co9_cast_fu_8199_p1() {
    co9_cast_fu_8199_p1 = esl_zext<6,5>(co9_reg_3398.read());
}

void ShuffleNetV2::thread_co_100_fu_16480_p2() {
    co_100_fu_16480_p2 = (!co99_reg_4917.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co99_reg_4917.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_102_fu_16826_p2() {
    co_102_fu_16826_p2 = (!co101_reg_4983.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co101_reg_4983.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_104_fu_17190_p2() {
    co_104_fu_17190_p2 = (!co103_reg_5038.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co103_reg_5038.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_106_fu_17313_p2() {
    co_106_fu_17313_p2 = (!co105_reg_5071.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co105_reg_5071.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_108_fu_17524_p2() {
    co_108_fu_17524_p2 = (!co107_reg_5104.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co107_reg_5104.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_110_fu_17892_p2() {
    co_110_fu_17892_p2 = (!co109_reg_5159.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co109_reg_5159.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_112_fu_18234_p2() {
    co_112_fu_18234_p2 = (!co111_reg_5225.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co111_reg_5225.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_114_fu_18594_p2() {
    co_114_fu_18594_p2 = (!co113_reg_5280.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co113_reg_5280.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_116_fu_18717_p2() {
    co_116_fu_18717_p2 = (!co115_reg_5313.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co115_reg_5313.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_118_fu_18928_p2() {
    co_118_fu_18928_p2 = (!co117_reg_5346.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co117_reg_5346.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_120_fu_19296_p2() {
    co_120_fu_19296_p2 = (!co119_reg_5401.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co119_reg_5401.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_122_fu_19646_p2() {
    co_122_fu_19646_p2 = (!co121_reg_5467.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co121_reg_5467.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_124_fu_20006_p2() {
    co_124_fu_20006_p2 = (!co123_reg_5522.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co123_reg_5522.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_126_fu_20129_p2() {
    co_126_fu_20129_p2 = (!co125_reg_5555.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co125_reg_5555.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_128_fu_20340_p2() {
    co_128_fu_20340_p2 = (!co127_reg_5588.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co127_reg_5588.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_130_fu_20708_p2() {
    co_130_fu_20708_p2 = (!co129_reg_5643.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co129_reg_5643.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_132_fu_21058_p2() {
    co_132_fu_21058_p2 = (!co131_reg_5709.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co131_reg_5709.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_134_fu_21418_p2() {
    co_134_fu_21418_p2 = (!co133_reg_5764.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co133_reg_5764.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_136_fu_21541_p2() {
    co_136_fu_21541_p2 = (!co135_reg_5797.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co135_reg_5797.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_138_fu_21752_p2() {
    co_138_fu_21752_p2 = (!co137_reg_5830.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co137_reg_5830.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_140_fu_22128_p2() {
    co_140_fu_22128_p2 = (!co139_reg_5885.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co139_reg_5885.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_142_fu_22474_p2() {
    co_142_fu_22474_p2 = (!co141_reg_5951.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co141_reg_5951.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_144_fu_22846_p2() {
    co_144_fu_22846_p2 = (!co143_reg_6006.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co143_reg_6006.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_146_fu_22969_p2() {
    co_146_fu_22969_p2 = (!co145_reg_6039.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co145_reg_6039.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_148_fu_23180_p2() {
    co_148_fu_23180_p2 = (!co147_reg_6072.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co147_reg_6072.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_150_fu_23560_p2() {
    co_150_fu_23560_p2 = (!co149_reg_6127.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co149_reg_6127.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_152_fu_23902_p2() {
    co_152_fu_23902_p2 = (!co151_reg_6193.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co151_reg_6193.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_154_fu_24274_p2() {
    co_154_fu_24274_p2 = (!co153_reg_6248.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co153_reg_6248.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_156_fu_24397_p2() {
    co_156_fu_24397_p2 = (!co155_reg_6281.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co155_reg_6281.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_158_fu_24757_p2() {
    co_158_fu_24757_p2 = (!co157_reg_6336.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co157_reg_6336.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_160_fu_25099_p2() {
    co_160_fu_25099_p2 = (!co159_reg_6402.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co159_reg_6402.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_162_fu_25463_p2() {
    co_162_fu_25463_p2 = (!co161_reg_6457.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co161_reg_6457.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_164_fu_25801_p2() {
    co_164_fu_25801_p2 = (!co163_reg_6523.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co163_reg_6523.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_166_fu_26153_p2() {
    co_166_fu_26153_p2 = (!co165_reg_6578.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co165_reg_6578.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_168_fu_26364_p2() {
    co_168_fu_26364_p2 = (!co167_reg_6611.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co167_reg_6611.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_170_fu_26720_p2() {
    co_170_fu_26720_p2 = (!co169_reg_6666.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co169_reg_6666.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_172_fu_27058_p2() {
    co_172_fu_27058_p2 = (!co171_reg_6732.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co171_reg_6732.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_174_fu_27414_p2() {
    co_174_fu_27414_p2 = (!co173_reg_6787.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co173_reg_6787.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_176_fu_27541_p2() {
    co_176_fu_27541_p2 = (!co175_reg_6820.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co175_reg_6820.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_178_fu_27752_p2() {
    co_178_fu_27752_p2 = (!co177_reg_6853.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co177_reg_6853.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_180_fu_28104_p2() {
    co_180_fu_28104_p2 = (!co179_reg_6908.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co179_reg_6908.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_182_fu_28458_p2() {
    co_182_fu_28458_p2 = (!co181_reg_6974.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co181_reg_6974.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_184_fu_28802_p2() {
    co_184_fu_28802_p2 = (!co183_reg_7029.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co183_reg_7029.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_186_fu_28929_p2() {
    co_186_fu_28929_p2 = (!co185_reg_7062.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co185_reg_7062.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_188_fu_29140_p2() {
    co_188_fu_29140_p2 = (!co187_reg_7095.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co187_reg_7095.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_190_fu_29492_p2() {
    co_190_fu_29492_p2 = (!co189_reg_7150.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co189_reg_7150.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_192_fu_29828_p2() {
    co_192_fu_29828_p2 = (!co191_reg_7216.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co191_reg_7216.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_194_fu_30172_p2() {
    co_194_fu_30172_p2 = (!co193_reg_7271.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co193_reg_7271.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_195_fu_30456_p2() {
    co_195_fu_30456_p2 = (!co_i1_reg_7337.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(co_i1_reg_7337.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void ShuffleNetV2::thread_co_196_fu_30697_p2() {
    co_196_fu_30697_p2 = (!co_i_reg_7349.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(co_i_reg_7349.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_co_46_fu_7962_p2() {
    co_46_fu_7962_p2 = (!co_reg_3319.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co_reg_3319.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_47_fu_8066_p2() {
    co_47_fu_8066_p2 = (!co5_reg_3353.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co5_reg_3353.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_48_fu_8209_p2() {
    co_48_fu_8209_p2 = (!co9_reg_3398.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co9_reg_3398.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_49_fu_8366_p2() {
    co_49_fu_8366_p2 = (!co12_reg_3432.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co12_reg_3432.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_50_fu_8569_p2() {
    co_50_fu_8569_p2 = (!co16_reg_3477.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co16_reg_3477.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_51_fu_8726_p2() {
    co_51_fu_8726_p2 = (!co19_reg_3511.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co19_reg_3511.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_52_fu_8929_p2() {
    co_52_fu_8929_p2 = (!co22_reg_3544.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co22_reg_3544.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_53_fu_9086_p2() {
    co_53_fu_9086_p2 = (!co25_reg_3578.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co25_reg_3578.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_54_fu_9287_p2() {
    co_54_fu_9287_p2 = (!co29_reg_3623.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co29_reg_3623.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_55_fu_9448_p2() {
    co_55_fu_9448_p2 = (!co32_reg_3657.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co32_reg_3657.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_56_fu_9571_p2() {
    co_56_fu_9571_p2 = (!co35_reg_3690.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co35_reg_3690.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_57_fu_9774_p2() {
    co_57_fu_9774_p2 = (!co38_reg_3723.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co38_reg_3723.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_58_fu_9935_p2() {
    co_58_fu_9935_p2 = (!co41_reg_3757.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co41_reg_3757.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_59_fu_10140_p2() {
    co_59_fu_10140_p2 = (!co45_reg_3802.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co45_reg_3802.read()) + sc_biguint<5>(ap_const_lv5_1));
}

}

