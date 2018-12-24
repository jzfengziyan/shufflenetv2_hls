#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_sum83_fu_45423_p2() {
    sum83_fu_45423_p2 = (!i175_cast_reg_63127.read().is_01() || !tmp72_fu_45417_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i175_cast_reg_63127.read()) + sc_biguint<12>(tmp72_fu_45417_p2.read()));
}

void ShuffleNetV2::thread_sum84_cast1_fu_40894_p1() {
    sum84_cast1_fu_40894_p1 = esl_sext<11,10>(sum66_reg_59418.read());
}

void ShuffleNetV2::thread_sum84_cast_fu_40897_p1() {
    sum84_cast_fu_40897_p1 = esl_zext<32,11>(sum84_cast1_fu_40894_p1.read());
}

void ShuffleNetV2::thread_sum84_fu_45856_p2() {
    sum84_fu_45856_p2 = (!i179_cast_reg_63709.read().is_01() || !tmp74_fu_45850_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i179_cast_reg_63709.read()) + sc_biguint<12>(tmp74_fu_45850_p2.read()));
}

void ShuffleNetV2::thread_sum85_fu_45705_p2() {
    sum85_fu_45705_p2 = (!co164_cast182_cast_reg_63169.read().is_01() || !tmp73_fu_45699_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(co164_cast182_cast_reg_63169.read()) + sc_biguint<11>(tmp73_fu_45699_p2.read()));
}

void ShuffleNetV2::thread_sum86_cast1_fu_41625_p1() {
    sum86_cast1_fu_41625_p1 = esl_sext<11,10>(sum68_reg_59858.read());
}

void ShuffleNetV2::thread_sum86_cast_fu_41628_p1() {
    sum86_cast_fu_41628_p1 = esl_zext<32,11>(sum86_cast1_fu_41625_p1.read());
}

void ShuffleNetV2::thread_sum86_fu_46615_p2() {
    sum86_fu_46615_p2 = (!i184_cast_reg_64389.read().is_01() || !tmp76_fu_46609_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i184_cast_reg_64389.read()) + sc_biguint<12>(tmp76_fu_46609_p2.read()));
}

void ShuffleNetV2::thread_sum87_fu_46472_p2() {
    sum87_fu_46472_p2 = (!tmp75_fu_46466_p2.read().is_01() || !co169_cast_reg_63849.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp75_fu_46466_p2.read()) + sc_biguint<13>(co169_cast_reg_63849.read()));
}

void ShuffleNetV2::thread_sum88_cast1_fu_41966_p1() {
    sum88_cast1_fu_41966_p1 = esl_sext<11,10>(sum70_reg_59991.read());
}

void ShuffleNetV2::thread_sum88_cast_fu_41969_p1() {
    sum88_cast_fu_41969_p1 = esl_zext<32,11>(sum88_cast1_fu_41966_p1.read());
}

void ShuffleNetV2::thread_sum88_fu_46964_p2() {
    sum88_fu_46964_p2 = (!i187_cast_reg_64522.read().is_01() || !tmp78_fu_46958_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i187_cast_reg_64522.read()) + sc_biguint<12>(tmp78_fu_46958_p2.read()));
}

void ShuffleNetV2::thread_sum89_cast1_fu_42367_p1() {
    sum89_cast1_fu_42367_p1 = esl_sext<11,10>(sum71_reg_60333.read());
}

void ShuffleNetV2::thread_sum89_cast_fu_42370_p1() {
    sum89_cast_fu_42370_p1 = esl_zext<32,11>(sum89_cast1_fu_42367_p1.read());
}

void ShuffleNetV2::thread_sum89_fu_47389_p2() {
    sum89_fu_47389_p2 = (!i191_cast_reg_65104.read().is_01() || !tmp80_fu_47383_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i191_cast_reg_65104.read()) + sc_biguint<12>(tmp80_fu_47383_p2.read()));
}

void ShuffleNetV2::thread_sum8_fu_28552_p3() {
    sum8_fu_28552_p3 = esl_concat<1,5>(ap_const_lv1_1, co52_reg_18673.read());
}

void ShuffleNetV2::thread_sum90_fu_47246_p2() {
    sum90_fu_47246_p2 = (!tmp79_fu_47240_p2.read().is_01() || !co174_cast_reg_64564.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp79_fu_47240_p2.read()) + sc_biguint<13>(co174_cast_reg_64564.read()));
}

void ShuffleNetV2::thread_sum91_cast1_fu_42915_p1() {
    sum91_cast1_fu_42915_p1 = esl_sext<11,10>(sum73_reg_60959.read());
}

void ShuffleNetV2::thread_sum91_cast_fu_42918_p1() {
    sum91_cast_fu_42918_p1 = esl_zext<32,11>(sum91_cast1_fu_42915_p1.read());
}

void ShuffleNetV2::thread_sum91_fu_48148_p2() {
    sum91_fu_48148_p2 = (!i196_cast_reg_65784.read().is_01() || !tmp82_fu_48142_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i196_cast_reg_65784.read()) + sc_biguint<12>(tmp82_fu_48142_p2.read()));
}

void ShuffleNetV2::thread_sum92_fu_48005_p2() {
    sum92_fu_48005_p2 = (!tmp81_fu_47999_p2.read().is_01() || !co179_cast_reg_65244.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp81_fu_47999_p2.read()) + sc_biguint<13>(co179_cast_reg_65244.read()));
}

void ShuffleNetV2::thread_sum93_cast1_fu_43256_p1() {
    sum93_cast1_fu_43256_p1 = esl_sext<11,9>(sum75_reg_61092.read());
}

void ShuffleNetV2::thread_sum93_cast_fu_43259_p1() {
    sum93_cast_fu_43259_p1 = esl_zext<32,11>(sum93_cast1_fu_43256_p1.read());
}

void ShuffleNetV2::thread_sum93_fu_48489_p2() {
    sum93_fu_48489_p2 = (!i199_cast_reg_65917.read().is_01() || !tmp84_fu_48483_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i199_cast_reg_65917.read()) + sc_biguint<12>(tmp84_fu_48483_p2.read()));
}

void ShuffleNetV2::thread_sum94_cast_fu_43693_p1() {
    sum94_cast_fu_43693_p1 = esl_zext<32,12>(sum76_reg_61674.read());
}

void ShuffleNetV2::thread_sum94_fu_48914_p2() {
    sum94_fu_48914_p2 = (!i203_cast_reg_66499.read().is_01() || !tmp86_fu_48908_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i203_cast_reg_66499.read()) + sc_biguint<12>(tmp86_fu_48908_p2.read()));
}

void ShuffleNetV2::thread_sum95_fu_48771_p2() {
    sum95_fu_48771_p2 = (!tmp85_fu_48765_p2.read().is_01() || !co184_cast_reg_65959.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp85_fu_48765_p2.read()) + sc_biguint<13>(co184_cast_reg_65959.read()));
}

void ShuffleNetV2::thread_sum96_cast_fu_44030_p1() {
    sum96_cast_fu_44030_p1 = esl_zext<32,12>(sum78_reg_61807.read());
}

void ShuffleNetV2::thread_sum97_cast_fu_44455_p1() {
    sum97_cast_fu_44455_p1 = esl_zext<32,12>(sum79_reg_62389.read());
}

void ShuffleNetV2::thread_sum99_cast_fu_45091_p1() {
    sum99_cast_fu_45091_p1 = esl_zext<32,12>(sum81_reg_63025.read());
}

void ShuffleNetV2::thread_sum9_fu_26453_p2() {
    sum9_fu_26453_p2 = (!co16_cast_fu_26437_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co16_cast_fu_26437_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_sum_V_fu_49367_p2() {
    sum_V_fu_49367_p2 = (!tmp_289_fu_49346_p10.read().is_01() || !p_05_1_i_reg_22107.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_289_fu_49346_p10.read()) + sc_biguint<8>(p_05_1_i_reg_22107.read()));
}

void ShuffleNetV2::thread_sum_fu_26790_p2() {
    sum_fu_26790_p2 = (!co22_cast_fu_26774_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co22_cast_fu_26774_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp10_fu_30807_p2() {
    tmp10_fu_30807_p2 = (!ap_const_lv10_228.is_01() || !tmp_64_cast_fu_30798_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_64_cast_fu_30798_p1.read()));
}

void ShuffleNetV2::thread_tmp11_fu_31264_p2() {
    tmp11_fu_31264_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_86_cast_fu_31260_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_86_cast_fu_31260_p1.read()));
}

void ShuffleNetV2::thread_tmp12_fu_31407_p2() {
    tmp12_fu_31407_p2 = (!ap_const_lv10_258.is_01() || !tmp_80_cast_fu_31398_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_80_cast_fu_31398_p1.read()));
}

void ShuffleNetV2::thread_tmp13_cast1_fu_31580_p1() {
    tmp13_cast1_fu_31580_p1 = esl_sext<8,7>(tmp13_fu_31574_p2.read());
}

void ShuffleNetV2::thread_tmp13_cast_fu_31584_p1() {
    tmp13_cast_fu_31584_p1 = esl_zext<9,8>(tmp13_cast1_fu_31580_p1.read());
}

void ShuffleNetV2::thread_tmp13_fu_31574_p2() {
    tmp13_fu_31574_p2 = (!ap_const_lv7_58.is_01() || !tmp_78_fu_31536_p2.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_78_fu_31536_p2.read()));
}

void ShuffleNetV2::thread_tmp14_fu_31752_p2() {
    tmp14_fu_31752_p2 = (!ap_const_lv10_288.is_01() || !tmp_88_cast_fu_31743_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_288) + sc_bigint<10>(tmp_88_cast_fu_31743_p1.read()));
}

void ShuffleNetV2::thread_tmp15_fu_31998_p2() {
    tmp15_fu_31998_p2 = (!ap_const_lv10_258.is_01() || !tmp_103_cast_fu_31994_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_103_cast_fu_31994_p1.read()));
}

void ShuffleNetV2::thread_tmp16_fu_32141_p2() {
    tmp16_fu_32141_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_97_cast_fu_32132_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_97_cast_fu_32132_p1.read()));
}

void ShuffleNetV2::thread_tmp17_fu_32717_p2() {
    tmp17_fu_32717_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_115_cast_fu_32713_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_115_cast_fu_32713_p1.read()));
}

void ShuffleNetV2::thread_tmp18_fu_32860_p2() {
    tmp18_fu_32860_p2 = (!ap_const_lv10_2E8.is_01() || !tmp_109_cast_fu_32851_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2E8) + sc_bigint<10>(tmp_109_cast_fu_32851_p1.read()));
}

void ShuffleNetV2::thread_tmp19_fu_33031_p2() {
    tmp19_fu_33031_p2 = (!ap_const_lv9_108.is_01() || !tmp_123_cast_fu_32995_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_108) + sc_bigint<9>(tmp_123_cast_fu_32995_p1.read()));
}

void ShuffleNetV2::thread_tmp1_fu_29196_p2() {
    tmp1_fu_29196_p2 = (!ap_const_lv9_D8.is_01() || !tmp_39_cast_fu_29192_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_D8) + sc_bigint<9>(tmp_39_cast_fu_29192_p1.read()));
}

void ShuffleNetV2::thread_tmp20_fu_33201_p2() {
    tmp20_fu_33201_p2 = (!ap_const_lv9_118.is_01() || !tmp_117_cast_cast_fu_33192_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_118) + sc_bigint<9>(tmp_117_cast_cast_fu_33192_p1.read()));
}

void ShuffleNetV2::thread_tmp21_fu_33451_p2() {
    tmp21_fu_33451_p2 = (!ap_const_lv10_318.is_01() || !tmp_132_cast_fu_33447_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_132_cast_fu_33447_p1.read()));
}

void ShuffleNetV2::thread_tmp22_fu_33594_p2() {
    tmp22_fu_33594_p2 = (!ap_const_lv9_148.is_01() || !tmp_126_cast_cast_fu_33585_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_148) + sc_bigint<9>(tmp_126_cast_cast_fu_33585_p1.read()));
}

void ShuffleNetV2::thread_tmp23_fu_34174_p2() {
    tmp23_fu_34174_p2 = (!ap_const_lv9_178.is_01() || !tmp_144_cast_cast_fu_34170_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_144_cast_cast_fu_34170_p1.read()));
}

void ShuffleNetV2::thread_tmp24_fu_34325_p2() {
    tmp24_fu_34325_p2 = (!ap_const_lv9_178.is_01() || !tmp_138_cast_cast_fu_34316_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_138_cast_cast_fu_34316_p1.read()));
}

void ShuffleNetV2::thread_tmp25_fu_34500_p2() {
    tmp25_fu_34500_p2 = (!ap_const_lv9_138.is_01() || !tmp_152_cast_fu_34464_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_152_cast_fu_34464_p1.read()));
}

void ShuffleNetV2::thread_tmp26_fu_34666_p2() {
    tmp26_fu_34666_p2 = (!ap_const_lv8_A8.is_01() || !tmp_146_cast_cast_fu_34657_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_146_cast_cast_fu_34657_p1.read()));
}

void ShuffleNetV2::thread_tmp27_fu_34916_p2() {
    tmp27_fu_34916_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_161_cast_fu_34912_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_161_cast_fu_34912_p1.read()));
}

void ShuffleNetV2::thread_tmp28_cast1_fu_35061_p1() {
    tmp28_cast1_fu_35061_p1 = esl_sext<10,7>(tmp28_fu_35055_p2.read());
}

void ShuffleNetV2::thread_tmp28_cast_fu_35065_p1() {
    tmp28_cast_fu_35065_p1 = esl_zext<11,10>(tmp28_cast1_fu_35061_p1.read());
}

void ShuffleNetV2::thread_tmp28_fu_35055_p2() {
    tmp28_fu_35055_p2 = (!ap_const_lv7_58.is_01() || !tmp_114_fu_35044_p2.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_114_fu_35044_p2.read()));
}

void ShuffleNetV2::thread_tmp29_fu_35639_p2() {
    tmp29_fu_35639_p2 = (!ap_const_lv11_438.is_01() || !tmp_173_cast_fu_35635_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_173_cast_fu_35635_p1.read()));
}

void ShuffleNetV2::thread_tmp2_fu_29339_p2() {
    tmp2_fu_29339_p2 = (!ap_const_lv9_168.is_01() || !tmp_34_cast_fu_29330_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_34_cast_fu_29330_p1.read()));
}

void ShuffleNetV2::thread_tmp30_fu_35782_p2() {
    tmp30_fu_35782_p2 = (!ap_const_lv11_408.is_01() || !tmp_167_cast_fu_35773_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_408) + sc_bigint<11>(tmp_167_cast_fu_35773_p1.read()));
}

void ShuffleNetV2::thread_tmp31_fu_35953_p2() {
    tmp31_fu_35953_p2 = (!ap_const_lv9_168.is_01() || !tmp_181_cast_fu_35917_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_181_cast_fu_35917_p1.read()));
}

void ShuffleNetV2::thread_tmp32_fu_36119_p2() {
    tmp32_fu_36119_p2 = (!ap_const_lv11_438.is_01() || !tmp_175_cast_fu_36110_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_175_cast_fu_36110_p1.read()));
}

void ShuffleNetV2::thread_tmp33_fu_36365_p2() {
    tmp33_fu_36365_p2 = (!ap_const_lv11_498.is_01() || !tmp_190_cast_fu_36361_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_190_cast_fu_36361_p1.read()));
}

void ShuffleNetV2::thread_tmp34_fu_36508_p2() {
    tmp34_fu_36508_p2 = (!ap_const_lv11_468.is_01() || !tmp_184_cast_fu_36499_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_468) + sc_bigint<11>(tmp_184_cast_fu_36499_p1.read()));
}

void ShuffleNetV2::thread_tmp35_fu_37084_p2() {
    tmp35_fu_37084_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_202_cast_fu_37080_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_202_cast_fu_37080_p1.read()));
}

void ShuffleNetV2::thread_tmp36_fu_37227_p2() {
    tmp36_fu_37227_p2 = (!ap_const_lv11_498.is_01() || !tmp_196_cast_fu_37218_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_196_cast_fu_37218_p1.read()));
}

void ShuffleNetV2::thread_tmp37_fu_37398_p2() {
    tmp37_fu_37398_p2 = (!ap_const_lv8_98.is_01() || !tmp_210_cast_cast_fu_37362_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_210_cast_cast_fu_37362_p1.read()));
}

void ShuffleNetV2::thread_tmp38_fu_37572_p2() {
    tmp38_fu_37572_p2 = (!ap_const_lv11_4C8.is_01() || !tmp_204_cast_fu_37563_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4C8) + sc_bigint<11>(tmp_204_cast_fu_37563_p1.read()));
}

void ShuffleNetV2::thread_tmp39_fu_37818_p2() {
    tmp39_fu_37818_p2 = (!ap_const_lv11_558.is_01() || !tmp_219_cast_fu_37814_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_219_cast_fu_37814_p1.read()));
}

void ShuffleNetV2::thread_tmp3_fu_29510_p2() {
    tmp3_fu_29510_p2 = (!ap_const_lv8_78.is_01() || !tmp_46_cast_fu_29474_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_78) + sc_bigint<8>(tmp_46_cast_fu_29474_p1.read()));
}

void ShuffleNetV2::thread_tmp40_fu_37961_p2() {
    tmp40_fu_37961_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_213_cast_fu_37952_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_213_cast_fu_37952_p1.read()));
}

void ShuffleNetV2::thread_tmp41_fu_38537_p2() {
    tmp41_fu_38537_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_231_cast_fu_38533_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_231_cast_fu_38533_p1.read()));
}

void ShuffleNetV2::thread_tmp42_fu_38680_p2() {
    tmp42_fu_38680_p2 = (!ap_const_lv11_528.is_01() || !tmp_225_cast_fu_38671_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_528) + sc_bigint<11>(tmp_225_cast_fu_38671_p1.read()));
}

void ShuffleNetV2::thread_tmp43_fu_38851_p2() {
    tmp43_fu_38851_p2 = (!ap_const_lv8_C8.is_01() || !tmp_239_cast_cast_fu_38815_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_239_cast_cast_fu_38815_p1.read()));
}

void ShuffleNetV2::thread_tmp44_fu_39029_p2() {
    tmp44_fu_39029_p2 = (!ap_const_lv11_558.is_01() || !tmp_233_cast_fu_39020_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_233_cast_fu_39020_p1.read()));
}

void ShuffleNetV2::thread_tmp45_fu_39275_p2() {
    tmp45_fu_39275_p2 = (!ap_const_lv11_618.is_01() || !tmp_248_cast_fu_39271_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_618) + sc_bigint<11>(tmp_248_cast_fu_39271_p1.read()));
}

void ShuffleNetV2::thread_tmp46_fu_39418_p2() {
    tmp46_fu_39418_p2 = (!ap_const_lv11_588.is_01() || !tmp_242_cast_fu_39409_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_588) + sc_bigint<11>(tmp_242_cast_fu_39409_p1.read()));
}

void ShuffleNetV2::thread_tmp47_fu_39994_p2() {
    tmp47_fu_39994_p2 = (!ap_const_lv10_278.is_01() || !tmp_260_cast_cast_fu_39990_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_260_cast_cast_fu_39990_p1.read()));
}

void ShuffleNetV2::thread_tmp48_fu_40145_p2() {
    tmp48_fu_40145_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_254_cast_fu_40136_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_254_cast_fu_40136_p1.read()));
}

void ShuffleNetV2::thread_tmp49_fu_40316_p2() {
    tmp49_fu_40316_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_268_cast_fu_40280_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_268_cast_fu_40280_p1.read()));
}

void ShuffleNetV2::thread_tmp4_fu_29680_p2() {
    tmp4_fu_29680_p2 = (!ap_const_lv8_98.is_01() || !tmp_41_cast_cast_fu_29671_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_41_cast_cast_fu_29671_p1.read()));
}

void ShuffleNetV2::thread_tmp50_fu_40486_p2() {
    tmp50_fu_40486_p2 = (!ap_const_lv11_5E8.is_01() || !tmp_262_cast_fu_40477_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5E8) + sc_bigint<11>(tmp_262_cast_fu_40477_p1.read()));
}

void ShuffleNetV2::thread_tmp51_fu_40732_p2() {
    tmp51_fu_40732_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_277_cast_cast_fu_40728_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_277_cast_cast_fu_40728_p1.read()));
}

void ShuffleNetV2::thread_tmp52_fu_40883_p2() {
    tmp52_fu_40883_p2 = (!ap_const_lv10_218.is_01() || !tmp_271_cast_cast_fu_40874_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_218) + sc_bigint<10>(tmp_271_cast_cast_fu_40874_p1.read()));
}

void ShuffleNetV2::thread_tmp53_fu_41463_p2() {
    tmp53_fu_41463_p2 = (!ap_const_lv9_138.is_01() || !tmp_289_cast_cast_fu_41459_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_289_cast_cast_fu_41459_p1.read()));
}

void ShuffleNetV2::thread_tmp54_fu_41614_p2() {
    tmp54_fu_41614_p2 = (!ap_const_lv10_248.is_01() || !tmp_283_cast_cast_fu_41605_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_248) + sc_bigint<10>(tmp_283_cast_cast_fu_41605_p1.read()));
}

void ShuffleNetV2::thread_tmp55_fu_41789_p2() {
    tmp55_fu_41789_p2 = (!ap_const_lv10_228.is_01() || !tmp_297_cast_fu_41753_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_297_cast_fu_41753_p1.read()));
}

void ShuffleNetV2::thread_tmp56_fu_41955_p2() {
    tmp56_fu_41955_p2 = (!ap_const_lv10_278.is_01() || !tmp_291_cast_cast_fu_41946_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_291_cast_cast_fu_41946_p1.read()));
}

void ShuffleNetV2::thread_tmp57_cast1_fu_42211_p1() {
    tmp57_cast1_fu_42211_p1 = esl_sext<11,9>(tmp57_fu_42205_p2.read());
}

void ShuffleNetV2::thread_tmp57_cast_fu_42215_p1() {
    tmp57_cast_fu_42215_p1 = esl_zext<12,11>(tmp57_cast1_fu_42211_p1.read());
}

void ShuffleNetV2::thread_tmp57_fu_42205_p2() {
    tmp57_fu_42205_p2 = (!ap_const_lv9_198.is_01() || !tmp_306_cast_cast_fu_42201_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_306_cast_cast_fu_42201_p1.read()));
}

void ShuffleNetV2::thread_tmp58_fu_42356_p2() {
    tmp58_fu_42356_p2 = (!ap_const_lv10_2A8.is_01() || !tmp_300_cast_cast_fu_42347_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2A8) + sc_bigint<10>(tmp_300_cast_cast_fu_42347_p1.read()));
}

void ShuffleNetV2::thread_tmp59_fu_42761_p2() {
    tmp59_fu_42761_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_318_cast_fu_42757_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_318_cast_fu_42757_p1.read()));
}

void ShuffleNetV2::thread_tmp5_fu_29930_p2() {
    tmp5_fu_29930_p2 = (!ap_const_lv9_138.is_01() || !tmp_54_cast_fu_29926_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_54_cast_fu_29926_p1.read()));
}

void ShuffleNetV2::thread_tmp60_fu_42904_p2() {
    tmp60_fu_42904_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_311_cast_cast_fu_42895_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_311_cast_cast_fu_42895_p1.read()));
}

void ShuffleNetV2::thread_tmp61_fu_43079_p2() {
    tmp61_fu_43079_p2 = (!ap_const_lv10_258.is_01() || !tmp_326_cast_fu_43043_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_326_cast_fu_43043_p1.read()));
}

void ShuffleNetV2::thread_tmp62_fu_43245_p2() {
    tmp62_fu_43245_p2 = (!ap_const_lv9_138.is_01() || !tmp_320_cast_cast_fu_43236_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_320_cast_cast_fu_43236_p1.read()));
}

void ShuffleNetV2::thread_tmp63_fu_43531_p2() {
    tmp63_fu_43531_p2 = (!ap_const_lv12_978.is_01() || !tmp_336_cast_fu_43527_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_336_cast_fu_43527_p1.read()));
}

void ShuffleNetV2::thread_tmp64_cast1_fu_43680_p1() {
    tmp64_cast1_fu_43680_p1 = esl_sext<11,9>(tmp64_fu_43674_p2.read());
}

void ShuffleNetV2::thread_tmp64_cast_fu_43684_p1() {
    tmp64_cast_fu_43684_p1 = esl_zext<12,11>(tmp64_cast1_fu_43680_p1.read());
}

void ShuffleNetV2::thread_tmp64_fu_43674_p2() {
    tmp64_fu_43674_p2 = (!ap_const_lv9_198.is_01() || !tmp_329_cast_cast_fu_43665_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_329_cast_cast_fu_43665_p1.read()));
}

void ShuffleNetV2::thread_tmp65_fu_43853_p2() {
    tmp65_fu_43853_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_344_cast_fu_43817_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_344_cast_fu_43817_p1.read()));
}

void ShuffleNetV2::thread_tmp66_fu_44019_p2() {
    tmp66_fu_44019_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_338_cast_fu_44010_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_338_cast_fu_44010_p1.read()));
}

void ShuffleNetV2::thread_tmp67_fu_44301_p2() {
    tmp67_fu_44301_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_358_cast_fu_44297_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_358_cast_fu_44297_p1.read()));
}

void ShuffleNetV2::thread_tmp68_fu_44444_p2() {
    tmp68_fu_44444_p2 = (!ap_const_lv12_858.is_01() || !tmp_347_cast_fu_44435_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_858) + sc_bigint<12>(tmp_347_cast_fu_44435_p1.read()));
}

void ShuffleNetV2::thread_tmp69_fu_44937_p2() {
    tmp69_fu_44937_p2 = (!ap_const_lv12_C78.is_01() || !tmp_367_cast_fu_44933_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C78) + sc_bigint<12>(tmp_367_cast_fu_44933_p1.read()));
}

void ShuffleNetV2::thread_tmp6_fu_30073_p2() {
    tmp6_fu_30073_p2 = (!ap_const_lv8_C8.is_01() || !tmp_49_cast_cast_fu_30064_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_49_cast_cast_fu_30064_p1.read()));
}

void ShuffleNetV2::thread_tmp70_fu_45080_p2() {
    tmp70_fu_45080_p2 = (!ap_const_lv12_8B8.is_01() || !tmp_360_cast_fu_45071_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_8B8) + sc_bigint<12>(tmp_360_cast_fu_45071_p1.read()));
}

void ShuffleNetV2::thread_tmp71_fu_45251_p2() {
    tmp71_fu_45251_p2 = (!ap_const_lv10_318.is_01() || !tmp_375_cast_fu_45215_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_375_cast_fu_45215_p1.read()));
}

void ShuffleNetV2::thread_tmp72_fu_45417_p2() {
    tmp72_fu_45417_p2 = (!ap_const_lv12_918.is_01() || !tmp_369_cast_fu_45408_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_918) + sc_bigint<12>(tmp_369_cast_fu_45408_p1.read()));
}

void ShuffleNetV2::thread_tmp73_fu_45699_p2() {
    tmp73_fu_45699_p2 = (!ap_const_lv11_5F8.is_01() || !tmp_385_cast_cast_fu_45695_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5F8) + sc_bigint<11>(tmp_385_cast_cast_fu_45695_p1.read()));
}

void ShuffleNetV2::thread_tmp74_fu_45850_p2() {
    tmp74_fu_45850_p2 = (!ap_const_lv12_978.is_01() || !tmp_378_cast_fu_45841_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_378_cast_fu_45841_p1.read()));
}

void ShuffleNetV2::thread_tmp75_fu_46466_p2() {
    tmp75_fu_46466_p2 = (!ap_const_lv13_F78.is_01() || !tmp_398_cast_fu_46462_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_F78) + sc_bigint<13>(tmp_398_cast_fu_46462_p1.read()));
}

void ShuffleNetV2::thread_tmp76_fu_46609_p2() {
    tmp76_fu_46609_p2 = (!ap_const_lv12_9D8.is_01() || !tmp_391_cast_fu_46600_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_9D8) + sc_bigint<12>(tmp_391_cast_fu_46600_p1.read()));
}

void ShuffleNetV2::thread_tmp77_fu_46780_p2() {
    tmp77_fu_46780_p2 = (!ap_const_lv9_178.is_01() || !tmp_406_cast_cast_fu_46744_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_406_cast_cast_fu_46744_p1.read()));
}

void ShuffleNetV2::thread_tmp78_fu_46958_p2() {
    tmp78_fu_46958_p2 = (!ap_const_lv12_A38.is_01() || !tmp_400_cast_fu_46949_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A38) + sc_bigint<12>(tmp_400_cast_fu_46949_p1.read()));
}

void ShuffleNetV2::thread_tmp79_fu_47240_p2() {
    tmp79_fu_47240_p2 = (!ap_const_lv13_10F8.is_01() || !tmp_416_cast_fu_47236_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_10F8) + sc_bigint<13>(tmp_416_cast_fu_47236_p1.read()));
}

void ShuffleNetV2::thread_tmp7_fu_30248_p2() {
    tmp7_fu_30248_p2 = (!ap_const_lv8_A8.is_01() || !tmp_61_cast_fu_30212_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_61_cast_fu_30212_p1.read()));
}

void ShuffleNetV2::thread_tmp80_fu_47383_p2() {
    tmp80_fu_47383_p2 = (!ap_const_lv12_A98.is_01() || !tmp_409_cast_fu_47374_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A98) + sc_bigint<12>(tmp_409_cast_fu_47374_p1.read()));
}

void ShuffleNetV2::thread_tmp81_fu_47999_p2() {
    tmp81_fu_47999_p2 = (!ap_const_lv13_1278.is_01() || !tmp_429_cast_fu_47995_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1278) + sc_bigint<13>(tmp_429_cast_fu_47995_p1.read()));
}

void ShuffleNetV2::thread_tmp82_fu_48142_p2() {
    tmp82_fu_48142_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_422_cast_fu_48133_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_422_cast_fu_48133_p1.read()));
}

void ShuffleNetV2::thread_tmp83_fu_48313_p2() {
    tmp83_fu_48313_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_437_cast_fu_48277_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_437_cast_fu_48277_p1.read()));
}

void ShuffleNetV2::thread_tmp84_fu_48483_p2() {
    tmp84_fu_48483_p2 = (!ap_const_lv12_B58.is_01() || !tmp_431_cast_fu_48474_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_B58) + sc_bigint<12>(tmp_431_cast_fu_48474_p1.read()));
}

void ShuffleNetV2::thread_tmp85_fu_48765_p2() {
    tmp85_fu_48765_p2 = (!ap_const_lv13_13F8.is_01() || !tmp_447_cast_fu_48761_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_13F8) + sc_bigint<13>(tmp_447_cast_fu_48761_p1.read()));
}

void ShuffleNetV2::thread_tmp86_fu_48908_p2() {
    tmp86_fu_48908_p2 = (!ap_const_lv12_BB8.is_01() || !tmp_440_cast_fu_48899_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_BB8) + sc_bigint<12>(tmp_440_cast_fu_48899_p1.read()));
}

void ShuffleNetV2::thread_tmp8_fu_30414_p2() {
    tmp8_fu_30414_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_56_cast_fu_30405_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_56_cast_fu_30405_p1.read()));
}

void ShuffleNetV2::thread_tmp9_cast_fu_30666_p1() {
    tmp9_cast_fu_30666_p1 = esl_zext<10,9>(tmp9_fu_30660_p2.read());
}

void ShuffleNetV2::thread_tmp9_fu_30660_p2() {
    tmp9_fu_30660_p2 = (!ap_const_lv9_198.is_01() || !tmp_72_cast_fu_30656_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_72_cast_fu_30656_p1.read()));
}

void ShuffleNetV2::thread_tmp_1000_fu_37834_p3() {
    tmp_1000_fu_37834_p3 = esl_concat<11,5>(sum57_reg_57541.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1001_fu_37845_p3() {
    tmp_1001_fu_37845_p3 = esl_concat<11,3>(sum57_reg_57541.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1002_fu_37856_p2() {
    tmp_1002_fu_37856_p2 = (!p_shl459_cast_fu_37841_p1.read().is_01() || !p_shl460_cast_fu_37852_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl459_cast_fu_37841_p1.read()) - sc_biguint<17>(p_shl460_cast_fu_37852_p1.read()));
}

void ShuffleNetV2::thread_tmp_1003_fu_37866_p2() {
    tmp_1003_fu_37866_p2 = (!ci58_cast1_cast_reg_57280.read().is_01() || !tmp_1205_cast_fu_37862_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci58_cast1_cast_reg_57280.read()) + sc_bigint<18>(tmp_1205_cast_fu_37862_p1.read()));
}

void ShuffleNetV2::thread_tmp_1004_fu_38109_p3() {
    tmp_1004_fu_38109_p3 = esl_concat<6,3>(co117_reg_20291.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1005_fu_38121_p3() {
    tmp_1005_fu_38121_p3 = esl_concat<6,1>(co117_reg_20291.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1006_fu_38133_p2() {
    tmp_1006_fu_38133_p2 = (!p_shl466_cast_fu_38129_p1.read().is_01() || !p_shl465_cast_fu_38117_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl466_cast_fu_38129_p1.read()) + sc_biguint<10>(p_shl465_cast_fu_38117_p1.read()));
}

void ShuffleNetV2::thread_tmp_1007_fu_38161_p3() {
    tmp_1007_fu_38161_p3 = esl_concat<7,3>(tmp_152_fu_38155_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1008_fu_38173_p3() {
    tmp_1008_fu_38173_p3 = esl_concat<7,1>(tmp_152_fu_38155_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1009_fu_38185_p2() {
    tmp_1009_fu_38185_p2 = (!p_shl468_cast_fu_38181_p1.read().is_01() || !p_shl467_cast_fu_38169_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl468_cast_fu_38181_p1.read()) + sc_biguint<11>(p_shl467_cast_fu_38169_p1.read()));
}

void ShuffleNetV2::thread_tmp_100_cast_fu_31870_p1() {
    tmp_100_cast_fu_31870_p1 = esl_sext<32,7>(tmp_77_fu_31865_p2.read());
}

void ShuffleNetV2::thread_tmp_100_fu_33441_p2() {
    tmp_100_fu_33441_p2 = (!p_shl70_cast_fu_33425_p1.read().is_01() || !p_shl71_cast_fu_33437_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl70_cast_fu_33425_p1.read()) - sc_biguint<8>(p_shl71_cast_fu_33437_p1.read()));
}

void ShuffleNetV2::thread_tmp_1010_cast_fu_33495_p1() {
    tmp_1010_cast_fu_33495_p1 = esl_sext<17,16>(tmp_843_fu_33489_p2.read());
}

void ShuffleNetV2::thread_tmp_1010_fu_38048_p2() {
    tmp_1010_fu_38048_p2 = (!h_91_cast_cast_fu_38044_p1.read().is_01() || !tmp_997_reg_57599.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_91_cast_cast_fu_38044_p1.read()) + sc_biguint<10>(tmp_997_reg_57599.read()));
}

void ShuffleNetV2::thread_tmp_1011_cast_fu_33504_p1() {
    tmp_1011_cast_fu_33504_p1 = esl_sext<32,17>(tmp_844_fu_33499_p2.read());
}

void ShuffleNetV2::thread_tmp_1011_fu_38053_p3() {
    tmp_1011_fu_38053_p3 = esl_concat<10,3>(tmp_1010_fu_38048_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1012_fu_38065_p3() {
    tmp_1012_fu_38065_p3 = esl_concat<10,1>(tmp_1010_fu_38048_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1013_fu_38077_p2() {
    tmp_1013_fu_38077_p2 = (!p_shl463_cast_fu_38061_p1.read().is_01() || !p_shl464_cast_fu_38073_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl463_cast_fu_38061_p1.read()) + sc_biguint<15>(p_shl464_cast_fu_38073_p1.read()));
}

void ShuffleNetV2::thread_tmp_1014_fu_38336_p1() {
    tmp_1014_fu_38336_p1 = co119_reg_20324.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1015_fu_38211_p2() {
    tmp_1015_fu_38211_p2 = (!h_93_cast_cast_fu_38207_p1.read().is_01() || !tmp_1009_reg_57656.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_93_cast_cast_fu_38207_p1.read()) + sc_biguint<11>(tmp_1009_reg_57656.read()));
}

void ShuffleNetV2::thread_tmp_1016_fu_38216_p3() {
    tmp_1016_fu_38216_p3 = esl_concat<11,3>(tmp_1015_fu_38211_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1017_fu_38228_p3() {
    tmp_1017_fu_38228_p3 = esl_concat<11,1>(tmp_1015_fu_38211_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1018_fu_38240_p2() {
    tmp_1018_fu_38240_p2 = (!p_shl471_cast_fu_38224_p1.read().is_01() || !p_shl472_cast_fu_38236_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl471_cast_fu_38224_p1.read()) + sc_biguint<15>(p_shl472_cast_fu_38236_p1.read()));
}

void ShuffleNetV2::thread_tmp_1019_fu_38246_p2() {
    tmp_1019_fu_38246_p2 = (!h_93_cast_cast1_fu_38203_p1.read().is_01() || !tmp_1006_reg_57643.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_93_cast_cast1_fu_38203_p1.read()) + sc_biguint<10>(tmp_1006_reg_57643.read()));
}

void ShuffleNetV2::thread_tmp_101_fu_33792_p2() {
    tmp_101_fu_33792_p2 = (!co87_cast_fu_33776_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co87_cast_fu_33776_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_1020_fu_38251_p3() {
    tmp_1020_fu_38251_p3 = esl_concat<10,3>(tmp_1019_fu_38246_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1021_fu_38263_p3() {
    tmp_1021_fu_38263_p3 = esl_concat<10,1>(tmp_1019_fu_38246_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1022_fu_38275_p2() {
    tmp_1022_fu_38275_p2 = (!p_shl469_cast_fu_38259_p1.read().is_01() || !p_shl470_cast_fu_38271_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl469_cast_fu_38259_p1.read()) + sc_biguint<14>(p_shl470_cast_fu_38271_p1.read()));
}

void ShuffleNetV2::thread_tmp_1023_fu_38099_p2() {
    tmp_1023_fu_38099_p2 = (!tmp_1013_reg_57620.read().is_01() || !w_92_cast_cast_fu_38095_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1013_reg_57620.read()) + sc_biguint<15>(w_92_cast_cast_fu_38095_p1.read()));
}

void ShuffleNetV2::thread_tmp_1024_fu_38301_p2() {
    tmp_1024_fu_38301_p2 = (!tmp_1018_reg_57669.read().is_01() || !w_94_cast_cast_fu_38297_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1018_reg_57669.read()) + sc_biguint<15>(w_94_cast_cast_fu_38297_p1.read()));
}

void ShuffleNetV2::thread_tmp_1025_fu_38311_p2() {
    tmp_1025_fu_38311_p2 = (!tmp_1022_reg_57674.read().is_01() || !w_94_cast_cast1_fu_38293_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1022_reg_57674.read()) + sc_biguint<14>(w_94_cast_cast1_fu_38293_p1.read()));
}

void ShuffleNetV2::thread_tmp_1026_fu_38637_p1() {
    tmp_1026_fu_38637_p1 = k44_reg_20368.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1027_fu_38473_p1() {
    tmp_1027_fu_38473_p1 = i109_reg_20346.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1028_fu_38553_p3() {
    tmp_1028_fu_38553_p3 = esl_concat<11,5>(sum59_reg_57981.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1029_fu_38564_p3() {
    tmp_1029_fu_38564_p3 = esl_concat<11,3>(sum59_reg_57981.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_102_fu_34001_p2() {
    tmp_102_fu_34001_p2 = (!p_shl72_cast_fu_33985_p1.read().is_01() || !p_shl73_cast_fu_33997_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl72_cast_fu_33985_p1.read()) - sc_biguint<7>(p_shl73_cast_fu_33997_p1.read()));
}

void ShuffleNetV2::thread_tmp_1030_fu_38575_p2() {
    tmp_1030_fu_38575_p2 = (!p_shl473_cast_fu_38560_p1.read().is_01() || !p_shl474_cast_fu_38571_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl473_cast_fu_38560_p1.read()) - sc_biguint<17>(p_shl474_cast_fu_38571_p1.read()));
}

void ShuffleNetV2::thread_tmp_1031_fu_38585_p2() {
    tmp_1031_fu_38585_p2 = (!ci60_cast1_cast_reg_57720.read().is_01() || !tmp_1238_cast_fu_38581_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci60_cast1_cast_reg_57720.read()) + sc_bigint<18>(tmp_1238_cast_fu_38581_p1.read()));
}

void ShuffleNetV2::thread_tmp_1032_cast_fu_33741_p1() {
    tmp_1032_cast_fu_33741_p1 = esl_zext<32,15>(tmp_864_fu_33736_p2.read());
}

void ShuffleNetV2::thread_tmp_1032_fu_39074_p1() {
    tmp_1032_fu_39074_p1 = co123_reg_20445.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1033_cast_fu_33943_p1() {
    tmp_1033_cast_fu_33943_p1 = esl_zext<32,15>(tmp_865_fu_33938_p2.read());
}

void ShuffleNetV2::thread_tmp_1033_fu_38986_p1() {
    tmp_1033_fu_38986_p1 = k46_reg_20434.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1034_cast_fu_33953_p1() {
    tmp_1034_cast_fu_33953_p1 = esl_zext<32,14>(tmp_866_reg_54947.read());
}

void ShuffleNetV2::thread_tmp_1034_fu_38781_p1() {
    tmp_1034_fu_38781_p1 = i114_reg_20412.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1035_fu_38828_p3() {
    tmp_1035_fu_38828_p3 = esl_concat<7,2>(tmp_164_fu_38819_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1036_fu_38840_p2() {
    tmp_1036_fu_38840_p2 = (!p_shl478_cast_fu_38836_p1.read().is_01() || !tmp_240_cast_cast_fu_38824_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl478_cast_fu_38836_p1.read()) - sc_bigint<10>(tmp_240_cast_cast_fu_38824_p1.read()));
}

void ShuffleNetV2::thread_tmp_1037_fu_38846_p2() {
    tmp_1037_fu_38846_p2 = (!tmp_1036_fu_38840_p2.read().is_01() || !w95_cast_cast_reg_58062.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1036_fu_38840_p2.read()) + sc_biguint<10>(w95_cast_cast_reg_58062.read()));
}

void ShuffleNetV2::thread_tmp_1038_fu_38862_p2() {
    tmp_1038_fu_38862_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1037_reg_58101.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1039_fu_38867_p2() {
    tmp_1039_fu_38867_p2 = (!tmp_1038_fu_38862_p2.read().is_01() || !tmp_1037_reg_58101.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1038_fu_38862_p2.read()) - sc_biguint<10>(tmp_1037_reg_58101.read()));
}

void ShuffleNetV2::thread_tmp_103_cast_fu_31994_p1() {
    tmp_103_cast_fu_31994_p1 = esl_sext<10,8>(tmp_83_fu_31988_p2.read());
}

void ShuffleNetV2::thread_tmp_103_fu_34041_p2() {
    tmp_103_fu_34041_p2 = (!ci48_cast_fu_34021_p1.read().is_01() || !tmp_102_reg_54965.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci48_cast_fu_34021_p1.read()) + sc_biguint<7>(tmp_102_reg_54965.read()));
}

void ShuffleNetV2::thread_tmp_1040_fu_38872_p2() {
    tmp_1040_fu_38872_p2 = (!tmp_1039_fu_38867_p2.read().is_01() || !h94_cast_cast_reg_58080.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1039_fu_38867_p2.read()) + sc_biguint<10>(h94_cast_cast_reg_58080.read()));
}

void ShuffleNetV2::thread_tmp_1041_fu_38884_p3() {
    tmp_1041_fu_38884_p3 = esl_concat<8,2>(sum31_reg_58107.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1042_fu_38891_p1() {
    tmp_1042_fu_38891_p1 = esl_sext<11,10>(tmp_1041_fu_38884_p3.read());
}

void ShuffleNetV2::thread_tmp_1043_fu_38899_p2() {
    tmp_1043_fu_38899_p2 = (!p_shl476_cast_fu_38895_p1.read().is_01() || !sum31_cast_cast_fu_38880_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl476_cast_fu_38895_p1.read()) - sc_biguint<12>(sum31_cast_cast_fu_38880_p1.read()));
}

void ShuffleNetV2::thread_tmp_1044_fu_38909_p2() {
    tmp_1044_fu_38909_p2 = (!tmp_1254_cast_fu_38905_p1.read().is_01() || !w95_cast_cast1_reg_58057.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1254_cast_fu_38905_p1.read()) + sc_biguint<13>(w95_cast_cast1_reg_58057.read()));
}

void ShuffleNetV2::thread_tmp_1045_cast_fu_34226_p1() {
    tmp_1045_cast_fu_34226_p1 = esl_sext<17,16>(tmp_873_fu_34220_p2.read());
}

void ShuffleNetV2::thread_tmp_1045_fu_38917_p3() {
    tmp_1045_fu_38917_p3 = esl_concat<13,2>(tmp_1044_reg_58118.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1046_cast_fu_34235_p1() {
    tmp_1046_cast_fu_34235_p1 = esl_sext<32,17>(tmp_874_fu_34230_p2.read());
}

void ShuffleNetV2::thread_tmp_1046_fu_38928_p2() {
    tmp_1046_fu_38928_p2 = (!p_shl249_fu_38924_p1.read().is_01() || !tmp_1255_cast_fu_38914_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl249_fu_38924_p1.read()) - sc_bigint<32>(tmp_1255_cast_fu_38914_p1.read()));
}

void ShuffleNetV2::thread_tmp_1047_fu_38934_p2() {
    tmp_1047_fu_38934_p2 = (!tmp_1046_fu_38928_p2.read().is_01() || !h94_cast_reg_58075.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1046_fu_38928_p2.read()) + sc_biguint<32>(h94_cast_reg_58075.read()));
}

void ShuffleNetV2::thread_tmp_1048_fu_39447_p3() {
    tmp_1048_fu_39447_p3 = esl_concat<6,3>(co125_reg_20500.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1049_fu_39459_p3() {
    tmp_1049_fu_39459_p3 = esl_concat<6,1>(co125_reg_20500.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_104_fu_34310_p2() {
    tmp_104_fu_34310_p2 = (!p_shl74_cast_fu_34294_p1.read().is_01() || !p_shl75_cast_fu_34306_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl74_cast_fu_34294_p1.read()) - sc_biguint<7>(p_shl75_cast_fu_34306_p1.read()));
}

void ShuffleNetV2::thread_tmp_1050_fu_39471_p2() {
    tmp_1050_fu_39471_p2 = (!p_shl482_cast_fu_39467_p1.read().is_01() || !p_shl481_cast_fu_39455_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl482_cast_fu_39467_p1.read()) + sc_biguint<10>(p_shl481_cast_fu_39455_p1.read()));
}

void ShuffleNetV2::thread_tmp_1051_fu_39375_p1() {
    tmp_1051_fu_39375_p1 = k48_reg_20489.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1052_fu_39211_p1() {
    tmp_1052_fu_39211_p1 = i116_reg_20467.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1053_fu_39291_p3() {
    tmp_1053_fu_39291_p3 = esl_concat<11,5>(sum62_reg_58456.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1054_fu_39302_p3() {
    tmp_1054_fu_39302_p3 = esl_concat<11,3>(sum62_reg_58456.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1055_fu_39313_p2() {
    tmp_1055_fu_39313_p2 = (!p_shl479_cast_fu_39298_p1.read().is_01() || !p_shl480_cast_fu_39309_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl479_cast_fu_39298_p1.read()) - sc_biguint<17>(p_shl480_cast_fu_39309_p1.read()));
}

void ShuffleNetV2::thread_tmp_1056_fu_39323_p2() {
    tmp_1056_fu_39323_p2 = (!ci62_cast1_cast_reg_58195.read().is_01() || !tmp_1270_cast_fu_39319_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci62_cast1_cast_reg_58195.read()) + sc_bigint<18>(tmp_1270_cast_fu_39319_p1.read()));
}

void ShuffleNetV2::thread_tmp_1057_fu_39566_p3() {
    tmp_1057_fu_39566_p3 = esl_concat<6,3>(co127_reg_20533.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1058_cast_fu_34587_p1() {
    tmp_1058_cast_fu_34587_p1 = esl_zext<32,10>(tmp_883_reg_55368.read());
}

void ShuffleNetV2::thread_tmp_1058_fu_39578_p3() {
    tmp_1058_fu_39578_p3 = esl_concat<6,1>(co127_reg_20533.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1059_fu_39590_p2() {
    tmp_1059_fu_39590_p2 = (!p_shl486_cast_fu_39586_p1.read().is_01() || !p_shl485_cast_fu_39574_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl486_cast_fu_39586_p1.read()) + sc_biguint<10>(p_shl485_cast_fu_39574_p1.read()));
}

void ShuffleNetV2::thread_tmp_105_fu_34320_p2() {
    tmp_105_fu_34320_p2 = (!tmp_104_fu_34310_p2.read().is_01() || !i80_cast_reg_55257.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_104_fu_34310_p2.read()) + sc_biguint<7>(i80_cast_reg_55257.read()));
}

void ShuffleNetV2::thread_tmp_1060_fu_39618_p3() {
    tmp_1060_fu_39618_p3 = esl_concat<7,3>(tmp_169_fu_39612_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1061_cast_fu_34551_p1() {
    tmp_1061_cast_fu_34551_p1 = esl_sext<32,12>(tmp_886_reg_55373.read());
}

void ShuffleNetV2::thread_tmp_1061_fu_39630_p3() {
    tmp_1061_fu_39630_p3 = esl_concat<7,1>(tmp_169_fu_39612_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1062_fu_39642_p2() {
    tmp_1062_fu_39642_p2 = (!p_shl488_cast_fu_39638_p1.read().is_01() || !p_shl487_cast_fu_39626_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl488_cast_fu_39638_p1.read()) + sc_biguint<11>(p_shl487_cast_fu_39626_p1.read()));
}

void ShuffleNetV2::thread_tmp_1063_fu_39505_p2() {
    tmp_1063_fu_39505_p2 = (!h_97_cast_cast_fu_39501_p1.read().is_01() || !tmp_1050_reg_58514.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_97_cast_cast_fu_39501_p1.read()) + sc_biguint<10>(tmp_1050_reg_58514.read()));
}

void ShuffleNetV2::thread_tmp_1064_fu_39510_p3() {
    tmp_1064_fu_39510_p3 = esl_concat<10,3>(tmp_1063_fu_39505_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1065_fu_39522_p3() {
    tmp_1065_fu_39522_p3 = esl_concat<10,1>(tmp_1063_fu_39505_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1066_fu_39534_p2() {
    tmp_1066_fu_39534_p2 = (!p_shl483_cast_fu_39518_p1.read().is_01() || !p_shl484_cast_fu_39530_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl483_cast_fu_39518_p1.read()) + sc_biguint<15>(p_shl484_cast_fu_39530_p1.read()));
}

void ShuffleNetV2::thread_tmp_1067_fu_39793_p1() {
    tmp_1067_fu_39793_p1 = co129_reg_20566.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1068_fu_39668_p2() {
    tmp_1068_fu_39668_p2 = (!h_99_cast_cast_fu_39664_p1.read().is_01() || !tmp_1062_reg_58571.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_99_cast_cast_fu_39664_p1.read()) + sc_biguint<11>(tmp_1062_reg_58571.read()));
}

void ShuffleNetV2::thread_tmp_1069_fu_39673_p3() {
    tmp_1069_fu_39673_p3 = esl_concat<11,3>(tmp_1068_fu_39668_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_106_fu_34134_p2() {
    tmp_106_fu_34134_p2 = (!p_shl76_fu_34114_p3.read().is_01() || !p_shl77_cast_fu_34130_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl76_fu_34114_p3.read()) - sc_biguint<6>(p_shl77_cast_fu_34130_p1.read()));
}

void ShuffleNetV2::thread_tmp_1070_fu_39685_p3() {
    tmp_1070_fu_39685_p3 = esl_concat<11,1>(tmp_1068_fu_39668_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1071_fu_39697_p2() {
    tmp_1071_fu_39697_p2 = (!p_shl491_cast_fu_39681_p1.read().is_01() || !p_shl492_cast_fu_39693_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl491_cast_fu_39681_p1.read()) + sc_biguint<15>(p_shl492_cast_fu_39693_p1.read()));
}

void ShuffleNetV2::thread_tmp_1072_fu_39703_p2() {
    tmp_1072_fu_39703_p2 = (!h_99_cast_cast1_fu_39660_p1.read().is_01() || !tmp_1059_reg_58558.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_99_cast_cast1_fu_39660_p1.read()) + sc_biguint<10>(tmp_1059_reg_58558.read()));
}

void ShuffleNetV2::thread_tmp_1073_fu_39708_p3() {
    tmp_1073_fu_39708_p3 = esl_concat<10,3>(tmp_1072_fu_39703_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1074_fu_39720_p3() {
    tmp_1074_fu_39720_p3 = esl_concat<10,1>(tmp_1072_fu_39703_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1075_fu_39732_p2() {
    tmp_1075_fu_39732_p2 = (!p_shl489_cast_fu_39716_p1.read().is_01() || !p_shl490_cast_fu_39728_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl489_cast_fu_39716_p1.read()) + sc_biguint<14>(p_shl490_cast_fu_39728_p1.read()));
}

void ShuffleNetV2::thread_tmp_1076_cast_fu_34960_p1() {
    tmp_1076_cast_fu_34960_p1 = esl_sext<18,17>(tmp_897_fu_34954_p2.read());
}

void ShuffleNetV2::thread_tmp_1076_fu_39556_p2() {
    tmp_1076_fu_39556_p2 = (!tmp_1066_reg_58535.read().is_01() || !w_98_cast_cast_fu_39552_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1066_reg_58535.read()) + sc_biguint<15>(w_98_cast_cast_fu_39552_p1.read()));
}

void ShuffleNetV2::thread_tmp_1077_cast_fu_34969_p1() {
    tmp_1077_cast_fu_34969_p1 = esl_sext<32,18>(tmp_898_fu_34964_p2.read());
}

void ShuffleNetV2::thread_tmp_1077_fu_39758_p2() {
    tmp_1077_fu_39758_p2 = (!tmp_1071_reg_58584.read().is_01() || !w_100_cast_cast_fu_39754_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1071_reg_58584.read()) + sc_biguint<15>(w_100_cast_cast_fu_39754_p1.read()));
}

void ShuffleNetV2::thread_tmp_1078_fu_39768_p2() {
    tmp_1078_fu_39768_p2 = (!tmp_1075_reg_58589.read().is_01() || !w_100_cast_cast1_fu_39750_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1075_reg_58589.read()) + sc_biguint<14>(w_100_cast_cast1_fu_39750_p1.read()));
}

void ShuffleNetV2::thread_tmp_1079_fu_40102_p1() {
    tmp_1079_fu_40102_p1 = k50_reg_20610.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_107_fu_34164_p2() {
    tmp_107_fu_34164_p2 = (!p_shl78_cast_fu_34148_p1.read().is_01() || !p_shl79_cast_fu_34160_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl78_cast_fu_34148_p1.read()) - sc_biguint<8>(p_shl79_cast_fu_34160_p1.read()));
}

void ShuffleNetV2::thread_tmp_1080_fu_39930_p1() {
    tmp_1080_fu_39930_p1 = i120_reg_20588.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1081_fu_40010_p3() {
    tmp_1081_fu_40010_p3 = esl_concat<10,5>(sum64_reg_58896.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1082_fu_40017_p1() {
    tmp_1082_fu_40017_p1 = esl_sext<16,15>(tmp_1081_fu_40010_p3.read());
}

void ShuffleNetV2::thread_tmp_1083_fu_40025_p3() {
    tmp_1083_fu_40025_p3 = esl_concat<10,3>(sum64_reg_58896.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1084_fu_40032_p1() {
    tmp_1084_fu_40032_p1 = esl_sext<14,13>(tmp_1083_fu_40025_p3.read());
}

void ShuffleNetV2::thread_tmp_1085_fu_40040_p2() {
    tmp_1085_fu_40040_p2 = (!p_shl493_cast_fu_40021_p1.read().is_01() || !p_shl494_cast_fu_40036_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl493_cast_fu_40021_p1.read()) - sc_biguint<17>(p_shl494_cast_fu_40036_p1.read()));
}

void ShuffleNetV2::thread_tmp_1086_fu_40050_p2() {
    tmp_1086_fu_40050_p2 = (!tmp_1305_cast_fu_40046_p1.read().is_01() || !ci64_cast1_cast_reg_58635.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp_1305_cast_fu_40046_p1.read()) + sc_biguint<18>(ci64_cast1_cast_reg_58635.read()));
}

void ShuffleNetV2::thread_tmp_1087_fu_40531_p1() {
    tmp_1087_fu_40531_p1 = co133_reg_20687.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1088_fu_40443_p1() {
    tmp_1088_fu_40443_p1 = k52_reg_20676.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1089_fu_40246_p1() {
    tmp_1089_fu_40246_p1 = i125_reg_20654.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_108_cast_fu_32560_p1() {
    tmp_108_cast_fu_32560_p1 = esl_zext<6,4>(p_lshr_f5_cast_fu_32550_p4.read());
}

void ShuffleNetV2::thread_tmp_108_fu_34743_p2() {
    tmp_108_fu_34743_p2 = (!p_shl82_cast_fu_34727_p1.read().is_01() || !p_shl83_cast_fu_34739_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl82_cast_fu_34727_p1.read()) - sc_biguint<7>(p_shl83_cast_fu_34739_p1.read()));
}

void ShuffleNetV2::thread_tmp_1090_fu_40293_p3() {
    tmp_1090_fu_40293_p3 = esl_concat<7,2>(tmp_181_fu_40284_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1091_fu_40305_p2() {
    tmp_1091_fu_40305_p2 = (!p_shl498_cast_fu_40301_p1.read().is_01() || !tmp_269_cast_cast_fu_40289_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl498_cast_fu_40301_p1.read()) - sc_bigint<10>(tmp_269_cast_cast_fu_40289_p1.read()));
}

void ShuffleNetV2::thread_tmp_1092_fu_40311_p2() {
    tmp_1092_fu_40311_p2 = (!w101_cast_cast_reg_58977.read().is_01() || !tmp_1091_fu_40305_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w101_cast_cast_reg_58977.read()) + sc_biguint<10>(tmp_1091_fu_40305_p2.read()));
}

void ShuffleNetV2::thread_tmp_1093_fu_40327_p2() {
    tmp_1093_fu_40327_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1092_reg_59016.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1094_fu_40332_p2() {
    tmp_1094_fu_40332_p2 = (!tmp_1093_fu_40327_p2.read().is_01() || !tmp_1092_reg_59016.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1093_fu_40327_p2.read()) - sc_biguint<10>(tmp_1092_reg_59016.read()));
}

void ShuffleNetV2::thread_tmp_1095_fu_40337_p2() {
    tmp_1095_fu_40337_p2 = (!h100_cast_cast_reg_58995.read().is_01() || !tmp_1094_fu_40332_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h100_cast_cast_reg_58995.read()) + sc_biguint<10>(tmp_1094_fu_40332_p2.read()));
}

void ShuffleNetV2::thread_tmp_1096_fu_40345_p3() {
    tmp_1096_fu_40345_p3 = esl_concat<10,2>(sum33_reg_59022.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1097_fu_40356_p2() {
    tmp_1097_fu_40356_p2 = (!p_shl496_cast_fu_40352_p1.read().is_01() || !sum33_cast_cast_fu_40342_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl496_cast_fu_40352_p1.read()) - sc_biguint<13>(sum33_cast_cast_fu_40342_p1.read()));
}

void ShuffleNetV2::thread_tmp_1098_cast_fu_35206_p1() {
    tmp_1098_cast_fu_35206_p1 = esl_zext<32,15>(tmp_918_fu_35201_p2.read());
}

void ShuffleNetV2::thread_tmp_1098_fu_40366_p2() {
    tmp_1098_fu_40366_p2 = (!w101_cast_cast1_reg_58972.read().is_01() || !tmp_1320_cast_fu_40362_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(w101_cast_cast1_reg_58972.read()) + sc_bigint<14>(tmp_1320_cast_fu_40362_p1.read()));
}

void ShuffleNetV2::thread_tmp_1099_cast_fu_35408_p1() {
    tmp_1099_cast_fu_35408_p1 = esl_zext<32,15>(tmp_919_fu_35403_p2.read());
}

void ShuffleNetV2::thread_tmp_1099_fu_40374_p3() {
    tmp_1099_fu_40374_p3 = esl_concat<14,2>(tmp_1098_reg_59033.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_109_cast_fu_32851_p1() {
    tmp_109_cast_fu_32851_p1 = esl_sext<10,7>(tmp_87_fu_32845_p2.read());
}

void ShuffleNetV2::thread_tmp_109_fu_34651_p2() {
    tmp_109_fu_34651_p2 = (!p_shl80_cast_fu_34635_p1.read().is_01() || !p_shl81_cast_fu_34647_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl80_cast_fu_34635_p1.read()) - sc_biguint<7>(p_shl81_cast_fu_34647_p1.read()));
}

void ShuffleNetV2::thread_tmp_1100_cast_fu_35418_p1() {
    tmp_1100_cast_fu_35418_p1 = esl_zext<32,14>(tmp_920_reg_55862.read());
}

void ShuffleNetV2::thread_tmp_1100_fu_40385_p2() {
    tmp_1100_fu_40385_p2 = (!p_shl255_fu_40381_p1.read().is_01() || !tmp_1321_cast_fu_40371_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl255_fu_40381_p1.read()) - sc_bigint<32>(tmp_1321_cast_fu_40371_p1.read()));
}

void ShuffleNetV2::thread_tmp_1101_fu_40391_p2() {
    tmp_1101_fu_40391_p2 = (!h100_cast_reg_58990.read().is_01() || !tmp_1100_fu_40385_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h100_cast_reg_58990.read()) + sc_biguint<32>(tmp_1100_fu_40385_p2.read()));
}

void ShuffleNetV2::thread_tmp_1102_fu_40916_p3() {
    tmp_1102_fu_40916_p3 = esl_concat<6,3>(co135_reg_20742.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1103_fu_40928_p3() {
    tmp_1103_fu_40928_p3 = esl_concat<6,1>(co135_reg_20742.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1104_fu_40940_p2() {
    tmp_1104_fu_40940_p2 = (!p_shl502_cast_fu_40936_p1.read().is_01() || !p_shl501_cast_fu_40924_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl502_cast_fu_40936_p1.read()) + sc_biguint<10>(p_shl501_cast_fu_40924_p1.read()));
}

void ShuffleNetV2::thread_tmp_1105_fu_40840_p1() {
    tmp_1105_fu_40840_p1 = k54_reg_20731.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1106_fu_40668_p1() {
    tmp_1106_fu_40668_p1 = i127_reg_20709.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1107_fu_40748_p3() {
    tmp_1107_fu_40748_p3 = esl_concat<10,5>(sum67_reg_59371.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1108_fu_40755_p1() {
    tmp_1108_fu_40755_p1 = esl_sext<16,15>(tmp_1107_fu_40748_p3.read());
}

void ShuffleNetV2::thread_tmp_1109_cast_fu_35683_p1() {
    tmp_1109_cast_fu_35683_p1 = esl_sext<18,17>(tmp_925_fu_35677_p2.read());
}

void ShuffleNetV2::thread_tmp_1109_fu_40763_p3() {
    tmp_1109_fu_40763_p3 = esl_concat<10,3>(sum67_reg_59371.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_110_cast_fu_32885_p1() {
    tmp_110_cast_fu_32885_p1 = esl_sext<32,7>(tmp_88_reg_54363.read());
}

void ShuffleNetV2::thread_tmp_110_fu_34661_p2() {
    tmp_110_fu_34661_p2 = (!tmp_109_fu_34651_p2.read().is_01() || !i83_cast_reg_55390.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_109_fu_34651_p2.read()) + sc_biguint<7>(i83_cast_reg_55390.read()));
}

void ShuffleNetV2::thread_tmp_1110_cast_fu_35692_p1() {
    tmp_1110_cast_fu_35692_p1 = esl_sext<32,18>(tmp_926_fu_35687_p2.read());
}

void ShuffleNetV2::thread_tmp_1110_fu_40770_p1() {
    tmp_1110_fu_40770_p1 = esl_sext<14,13>(tmp_1109_fu_40763_p3.read());
}

void ShuffleNetV2::thread_tmp_1111_fu_40778_p2() {
    tmp_1111_fu_40778_p2 = (!p_shl499_cast_fu_40759_p1.read().is_01() || !p_shl500_cast_fu_40774_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl499_cast_fu_40759_p1.read()) - sc_biguint<17>(p_shl500_cast_fu_40774_p1.read()));
}

void ShuffleNetV2::thread_tmp_1112_fu_40788_p2() {
    tmp_1112_fu_40788_p2 = (!tmp_1338_cast_fu_40784_p1.read().is_01() || !ci66_cast1_cast_reg_59110.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp_1338_cast_fu_40784_p1.read()) + sc_biguint<18>(ci66_cast1_cast_reg_59110.read()));
}

void ShuffleNetV2::thread_tmp_1113_fu_41035_p3() {
    tmp_1113_fu_41035_p3 = esl_concat<6,3>(co137_reg_20775.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1114_fu_41047_p3() {
    tmp_1114_fu_41047_p3 = esl_concat<6,1>(co137_reg_20775.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1115_fu_41059_p2() {
    tmp_1115_fu_41059_p2 = (!p_shl506_cast_fu_41055_p1.read().is_01() || !p_shl505_cast_fu_41043_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl506_cast_fu_41055_p1.read()) + sc_biguint<10>(p_shl505_cast_fu_41043_p1.read()));
}

void ShuffleNetV2::thread_tmp_1116_fu_41087_p3() {
    tmp_1116_fu_41087_p3 = esl_concat<7,3>(tmp_186_fu_41081_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1117_fu_41099_p3() {
    tmp_1117_fu_41099_p3 = esl_concat<7,1>(tmp_186_fu_41081_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1118_fu_41111_p2() {
    tmp_1118_fu_41111_p2 = (!p_shl508_cast_fu_41107_p1.read().is_01() || !p_shl507_cast_fu_41095_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl508_cast_fu_41107_p1.read()) + sc_biguint<11>(p_shl507_cast_fu_41095_p1.read()));
}

void ShuffleNetV2::thread_tmp_1119_fu_40974_p2() {
    tmp_1119_fu_40974_p2 = (!h_103_cast_cast_fu_40970_p1.read().is_01() || !tmp_1104_reg_59429.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_103_cast_cast_fu_40970_p1.read()) + sc_biguint<10>(tmp_1104_reg_59429.read()));
}

void ShuffleNetV2::thread_tmp_111_fu_34783_p2() {
    tmp_111_fu_34783_p2 = (!ci50_cast_fu_34763_p1.read().is_01() || !tmp_108_reg_55440.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci50_cast_fu_34763_p1.read()) + sc_biguint<7>(tmp_108_reg_55440.read()));
}

void ShuffleNetV2::thread_tmp_1120_fu_40979_p3() {
    tmp_1120_fu_40979_p3 = esl_concat<10,3>(tmp_1119_fu_40974_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1121_fu_40991_p3() {
    tmp_1121_fu_40991_p3 = esl_concat<10,1>(tmp_1119_fu_40974_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1122_cast_fu_36040_p1() {
    tmp_1122_cast_fu_36040_p1 = esl_zext<32,10>(tmp_935_reg_56283.read());
}

void ShuffleNetV2::thread_tmp_1122_fu_41003_p2() {
    tmp_1122_fu_41003_p2 = (!p_shl503_cast_fu_40987_p1.read().is_01() || !p_shl504_cast_fu_40999_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl503_cast_fu_40987_p1.read()) + sc_biguint<15>(p_shl504_cast_fu_40999_p1.read()));
}

void ShuffleNetV2::thread_tmp_1123_fu_41262_p1() {
    tmp_1123_fu_41262_p1 = co139_reg_20808.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1124_fu_41137_p2() {
    tmp_1124_fu_41137_p2 = (!h_105_cast_cast_fu_41133_p1.read().is_01() || !tmp_1118_reg_59486.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_105_cast_cast_fu_41133_p1.read()) + sc_biguint<11>(tmp_1118_reg_59486.read()));
}

void ShuffleNetV2::thread_tmp_1125_cast_fu_36004_p1() {
    tmp_1125_cast_fu_36004_p1 = esl_sext<32,12>(tmp_938_reg_56288.read());
}

void ShuffleNetV2::thread_tmp_1125_fu_41142_p3() {
    tmp_1125_fu_41142_p3 = esl_concat<11,3>(tmp_1124_fu_41137_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1126_fu_41154_p3() {
    tmp_1126_fu_41154_p3 = esl_concat<11,1>(tmp_1124_fu_41137_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1127_fu_41166_p2() {
    tmp_1127_fu_41166_p2 = (!p_shl511_cast_fu_41150_p1.read().is_01() || !p_shl512_cast_fu_41162_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl511_cast_fu_41150_p1.read()) + sc_biguint<15>(p_shl512_cast_fu_41162_p1.read()));
}

void ShuffleNetV2::thread_tmp_1128_fu_41172_p2() {
    tmp_1128_fu_41172_p2 = (!h_105_cast_cast1_fu_41129_p1.read().is_01() || !tmp_1115_reg_59473.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_105_cast_cast1_fu_41129_p1.read()) + sc_biguint<10>(tmp_1115_reg_59473.read()));
}

void ShuffleNetV2::thread_tmp_1129_fu_41177_p3() {
    tmp_1129_fu_41177_p3 = esl_concat<10,3>(tmp_1128_fu_41172_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_112_cast_fu_32589_p1() {
    tmp_112_cast_fu_32589_p1 = esl_sext<32,7>(tmp_86_fu_32584_p2.read());
}

void ShuffleNetV2::thread_tmp_112_fu_34458_p2() {
    tmp_112_fu_34458_p2 = (!p_shl84_cast_fu_34442_p1.read().is_01() || !p_shl85_cast_fu_34454_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl84_cast_fu_34442_p1.read()) - sc_biguint<7>(p_shl85_cast_fu_34454_p1.read()));
}

void ShuffleNetV2::thread_tmp_1130_fu_41189_p3() {
    tmp_1130_fu_41189_p3 = esl_concat<10,1>(tmp_1128_fu_41172_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1131_fu_41201_p2() {
    tmp_1131_fu_41201_p2 = (!p_shl509_cast_fu_41185_p1.read().is_01() || !p_shl510_cast_fu_41197_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl509_cast_fu_41185_p1.read()) + sc_biguint<14>(p_shl510_cast_fu_41197_p1.read()));
}

void ShuffleNetV2::thread_tmp_1132_fu_41025_p2() {
    tmp_1132_fu_41025_p2 = (!tmp_1122_reg_59450.read().is_01() || !w_104_cast_cast_fu_41021_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1122_reg_59450.read()) + sc_biguint<15>(w_104_cast_cast_fu_41021_p1.read()));
}

void ShuffleNetV2::thread_tmp_1133_fu_41227_p2() {
    tmp_1133_fu_41227_p2 = (!tmp_1127_reg_59499.read().is_01() || !w_106_cast_cast_fu_41223_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1127_reg_59499.read()) + sc_biguint<15>(w_106_cast_cast_fu_41223_p1.read()));
}

void ShuffleNetV2::thread_tmp_1134_fu_41237_p2() {
    tmp_1134_fu_41237_p2 = (!tmp_1131_reg_59504.read().is_01() || !w_106_cast_cast1_fu_41219_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1131_reg_59504.read()) + sc_biguint<14>(w_106_cast_cast1_fu_41219_p1.read()));
}

void ShuffleNetV2::thread_tmp_1135_fu_41571_p1() {
    tmp_1135_fu_41571_p1 = k56_reg_20852.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1136_fu_41399_p1() {
    tmp_1136_fu_41399_p1 = i131_reg_20830.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1137_fu_41479_p3() {
    tmp_1137_fu_41479_p3 = esl_concat<9,5>(sum69_reg_59811.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1138_fu_41486_p1() {
    tmp_1138_fu_41486_p1 = esl_sext<16,14>(tmp_1137_fu_41479_p3.read());
}

void ShuffleNetV2::thread_tmp_1139_fu_41494_p3() {
    tmp_1139_fu_41494_p3 = esl_concat<9,3>(sum69_reg_59811.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_113_fu_34468_p2() {
    tmp_113_fu_34468_p2 = (!co92_cast1_reg_55299.read().is_01() || !tmp_112_fu_34458_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co92_cast1_reg_55299.read()) + sc_biguint<7>(tmp_112_fu_34458_p2.read()));
}

void ShuffleNetV2::thread_tmp_1140_cast_fu_36409_p1() {
    tmp_1140_cast_fu_36409_p1 = esl_sext<18,17>(tmp_949_fu_36403_p2.read());
}

void ShuffleNetV2::thread_tmp_1140_fu_41501_p1() {
    tmp_1140_fu_41501_p1 = esl_sext<14,12>(tmp_1139_fu_41494_p3.read());
}

void ShuffleNetV2::thread_tmp_1141_cast_fu_36418_p1() {
    tmp_1141_cast_fu_36418_p1 = esl_sext<32,18>(tmp_950_fu_36413_p2.read());
}

void ShuffleNetV2::thread_tmp_1141_fu_41509_p2() {
    tmp_1141_fu_41509_p2 = (!p_shl513_cast_fu_41490_p1.read().is_01() || !p_shl514_cast_fu_41505_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl513_cast_fu_41490_p1.read()) - sc_biguint<17>(p_shl514_cast_fu_41505_p1.read()));
}

void ShuffleNetV2::thread_tmp_1142_fu_41519_p2() {
    tmp_1142_fu_41519_p2 = (!tmp_1373_cast_fu_41515_p1.read().is_01() || !ci68_cast1_cast_reg_59550.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp_1373_cast_fu_41515_p1.read()) + sc_biguint<18>(ci68_cast1_cast_reg_59550.read()));
}

void ShuffleNetV2::thread_tmp_1143_fu_42004_p1() {
    tmp_1143_fu_42004_p1 = co143_reg_20929.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1144_fu_41912_p1() {
    tmp_1144_fu_41912_p1 = k58_reg_20918.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1145_fu_41719_p1() {
    tmp_1145_fu_41719_p1 = i136_reg_20896.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1146_fu_41766_p3() {
    tmp_1146_fu_41766_p3 = esl_concat<7,2>(tmp_198_fu_41757_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1147_fu_41778_p2() {
    tmp_1147_fu_41778_p2 = (!p_shl518_cast_fu_41774_p1.read().is_01() || !tmp_298_cast_cast_fu_41762_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl518_cast_fu_41774_p1.read()) - sc_bigint<10>(tmp_298_cast_cast_fu_41762_p1.read()));
}

void ShuffleNetV2::thread_tmp_1148_fu_41784_p2() {
    tmp_1148_fu_41784_p2 = (!w107_cast_cast_reg_59892.read().is_01() || !tmp_1147_fu_41778_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w107_cast_cast_reg_59892.read()) + sc_biguint<10>(tmp_1147_fu_41778_p2.read()));
}

void ShuffleNetV2::thread_tmp_1149_fu_41800_p2() {
    tmp_1149_fu_41800_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1148_reg_59931.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_114_fu_35044_p2() {
    tmp_114_fu_35044_p2 = (!p_shl86_cast_fu_35028_p1.read().is_01() || !p_shl87_cast_fu_35040_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl86_cast_fu_35028_p1.read()) - sc_biguint<7>(p_shl87_cast_fu_35040_p1.read()));
}

void ShuffleNetV2::thread_tmp_1150_fu_41805_p2() {
    tmp_1150_fu_41805_p2 = (!tmp_1149_fu_41800_p2.read().is_01() || !tmp_1148_reg_59931.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1149_fu_41800_p2.read()) - sc_biguint<10>(tmp_1148_reg_59931.read()));
}

void ShuffleNetV2::thread_tmp_1151_fu_41810_p2() {
    tmp_1151_fu_41810_p2 = (!h106_cast_cast_reg_59910.read().is_01() || !tmp_1150_fu_41805_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h106_cast_cast_reg_59910.read()) + sc_biguint<10>(tmp_1150_fu_41805_p2.read()));
}

void ShuffleNetV2::thread_tmp_1152_fu_41818_p3() {
    tmp_1152_fu_41818_p3 = esl_concat<10,2>(sum35_reg_59937.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1153_fu_41829_p2() {
    tmp_1153_fu_41829_p2 = (!p_shl516_cast_fu_41825_p1.read().is_01() || !sum35_cast_cast_fu_41815_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl516_cast_fu_41825_p1.read()) - sc_biguint<13>(sum35_cast_cast_fu_41815_p1.read()));
}

void ShuffleNetV2::thread_tmp_1154_fu_41835_p2() {
    tmp_1154_fu_41835_p2 = (!w107_cast_cast1_reg_59887.read().is_01() || !tmp_1153_fu_41829_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w107_cast_cast1_reg_59887.read()) + sc_biguint<13>(tmp_1153_fu_41829_p2.read()));
}

void ShuffleNetV2::thread_tmp_1155_fu_41843_p3() {
    tmp_1155_fu_41843_p3 = esl_concat<13,2>(tmp_1154_reg_59948.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1156_fu_41854_p2() {
    tmp_1156_fu_41854_p2 = (!p_shl258_fu_41850_p1.read().is_01() || !tmp_1389_cast_fu_41840_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl258_fu_41850_p1.read()) - sc_bigint<32>(tmp_1389_cast_fu_41840_p1.read()));
}

void ShuffleNetV2::thread_tmp_1157_fu_41860_p2() {
    tmp_1157_fu_41860_p2 = (!h106_cast_reg_59905.read().is_01() || !tmp_1156_fu_41854_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h106_cast_reg_59905.read()) + sc_biguint<32>(tmp_1156_fu_41854_p2.read()));
}

void ShuffleNetV2::thread_tmp_1158_fu_42389_p3() {
    tmp_1158_fu_42389_p3 = esl_concat<6,3>(co145_reg_20984.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1159_fu_42401_p3() {
    tmp_1159_fu_42401_p3 = esl_concat<6,1>(co145_reg_20984.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_115_cast_fu_32713_p1() {
    tmp_115_cast_fu_32713_p1 = esl_sext<10,8>(tmp_90_fu_32707_p2.read());
}

void ShuffleNetV2::thread_tmp_115_fu_35050_p2() {
    tmp_115_fu_35050_p2 = (!tmp_114_fu_35044_p2.read().is_01() || !i87_cast1_reg_55732.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_114_fu_35044_p2.read()) + sc_biguint<7>(i87_cast1_reg_55732.read()));
}

void ShuffleNetV2::thread_tmp_1160_fu_42413_p2() {
    tmp_1160_fu_42413_p2 = (!p_shl522_cast_fu_42409_p1.read().is_01() || !p_shl521_cast_fu_42397_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl522_cast_fu_42409_p1.read()) + sc_biguint<10>(p_shl521_cast_fu_42397_p1.read()));
}

void ShuffleNetV2::thread_tmp_1161_fu_42313_p1() {
    tmp_1161_fu_42313_p1 = k60_reg_20973.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1162_cast_fu_36651_p1() {
    tmp_1162_cast_fu_36651_p1 = esl_zext<32,15>(tmp_970_fu_36646_p2.read());
}

void ShuffleNetV2::thread_tmp_1162_fu_42141_p1() {
    tmp_1162_fu_42141_p1 = i138_reg_20951.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1163_cast_fu_36853_p1() {
    tmp_1163_cast_fu_36853_p1 = esl_zext<32,15>(tmp_971_fu_36848_p2.read());
}

void ShuffleNetV2::thread_tmp_1163_fu_42229_p3() {
    tmp_1163_fu_42229_p3 = esl_concat<12,5>(sum72_reg_60286.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1164_cast_fu_36863_p1() {
    tmp_1164_cast_fu_36863_p1 = esl_zext<32,14>(tmp_972_reg_56777.read());
}

void ShuffleNetV2::thread_tmp_1164_fu_42240_p3() {
    tmp_1164_fu_42240_p3 = esl_concat<12,3>(sum72_reg_60286.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1165_fu_42251_p2() {
    tmp_1165_fu_42251_p2 = (!p_shl519_cast_fu_42236_p1.read().is_01() || !p_shl520_cast_fu_42247_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl519_cast_fu_42236_p1.read()) - sc_biguint<18>(p_shl520_cast_fu_42247_p1.read()));
}

void ShuffleNetV2::thread_tmp_1166_fu_42261_p2() {
    tmp_1166_fu_42261_p2 = (!ci70_cast1_cast_reg_60025.read().is_01() || !tmp_1404_cast_fu_42257_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci70_cast1_cast_reg_60025.read()) + sc_bigint<19>(tmp_1404_cast_fu_42257_p1.read()));
}

void ShuffleNetV2::thread_tmp_1167_fu_42524_p1() {
    tmp_1167_fu_42524_p1 = co147_reg_21017.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1168_fu_42540_p2() {
    tmp_1168_fu_42540_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co147_reg_21017.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1169_fu_42447_p2() {
    tmp_1169_fu_42447_p2 = (!h_109_cast_cast_fu_42443_p1.read().is_01() || !tmp_1160_reg_60344.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_109_cast_cast_fu_42443_p1.read()) + sc_biguint<10>(tmp_1160_reg_60344.read()));
}

void ShuffleNetV2::thread_tmp_116_fu_34876_p2() {
    tmp_116_fu_34876_p2 = (!p_shl88_fu_34856_p3.read().is_01() || !p_shl89_cast_fu_34872_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl88_fu_34856_p3.read()) - sc_biguint<6>(p_shl89_cast_fu_34872_p1.read()));
}

void ShuffleNetV2::thread_tmp_1170_fu_42452_p3() {
    tmp_1170_fu_42452_p3 = esl_concat<10,3>(tmp_1169_fu_42447_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1171_fu_42464_p3() {
    tmp_1171_fu_42464_p3 = esl_concat<10,1>(tmp_1169_fu_42447_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1172_fu_42476_p2() {
    tmp_1172_fu_42476_p2 = (!p_shl523_cast_fu_42460_p1.read().is_01() || !p_shl524_cast_fu_42472_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl523_cast_fu_42460_p1.read()) + sc_biguint<15>(p_shl524_cast_fu_42472_p1.read()));
}

void ShuffleNetV2::thread_tmp_1173_cast_fu_37128_p1() {
    tmp_1173_cast_fu_37128_p1 = esl_sext<18,17>(tmp_977_fu_37122_p2.read());
}

void ShuffleNetV2::thread_tmp_1173_fu_42498_p2() {
    tmp_1173_fu_42498_p2 = (!tmp_1172_reg_60365.read().is_01() || !w_110_cast_cast_fu_42494_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1172_reg_60365.read()) + sc_biguint<15>(w_110_cast_cast_fu_42494_p1.read()));
}

void ShuffleNetV2::thread_tmp_1174_cast_fu_37137_p1() {
    tmp_1174_cast_fu_37137_p1 = esl_sext<32,18>(tmp_978_fu_37132_p2.read());
}

void ShuffleNetV2::thread_tmp_1174_fu_42861_p1() {
    tmp_1174_fu_42861_p1 = k62_reg_21061.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1175_fu_42707_p1() {
    tmp_1175_fu_42707_p1 = i142_reg_21039.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1176_fu_42723_p2() {
    tmp_1176_fu_42723_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i142_reg_21039.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1177_fu_42777_p3() {
    tmp_1177_fu_42777_p3 = esl_concat<12,5>(sum74_reg_60912.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1178_fu_42788_p3() {
    tmp_1178_fu_42788_p3 = esl_concat<12,3>(sum74_reg_60912.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1179_fu_42799_p2() {
    tmp_1179_fu_42799_p2 = (!p_shl525_cast_fu_42784_p1.read().is_01() || !p_shl526_cast_fu_42795_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl525_cast_fu_42784_p1.read()) - sc_biguint<18>(p_shl526_cast_fu_42795_p1.read()));
}

void ShuffleNetV2::thread_tmp_117_cast_cast_fu_33192_p1() {
    tmp_117_cast_cast_fu_33192_p1 = esl_sext<9,7>(tmp_92_fu_33186_p2.read());
}

void ShuffleNetV2::thread_tmp_117_fu_34906_p2() {
    tmp_117_fu_34906_p2 = (!p_shl90_cast_fu_34890_p1.read().is_01() || !p_shl91_cast_fu_34902_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl90_cast_fu_34890_p1.read()) - sc_biguint<8>(p_shl91_cast_fu_34902_p1.read()));
}

void ShuffleNetV2::thread_tmp_1180_fu_42809_p2() {
    tmp_1180_fu_42809_p2 = (!ci72_cast1_cast_reg_60411.read().is_01() || !tmp_1420_cast_fu_42805_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci72_cast1_cast_reg_60411.read()) + sc_bigint<19>(tmp_1420_cast_fu_42805_p1.read()));
}

void ShuffleNetV2::thread_tmp_1181_fu_43294_p1() {
    tmp_1181_fu_43294_p1 = co151_reg_21138.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1182_fu_43310_p2() {
    tmp_1182_fu_43310_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co151_reg_21138.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1183_fu_43202_p1() {
    tmp_1183_fu_43202_p1 = k64_reg_21127.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1184_fu_43009_p1() {
    tmp_1184_fu_43009_p1 = i147_reg_21105.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1185_fu_43056_p3() {
    tmp_1185_fu_43056_p3 = esl_concat<8,2>(tmp_216_fu_43047_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1186_cast_fu_37493_p1() {
    tmp_1186_cast_fu_37493_p1 = esl_zext<32,10>(tmp_987_reg_57198.read());
}

void ShuffleNetV2::thread_tmp_1186_fu_43068_p2() {
    tmp_1186_fu_43068_p2 = (!p_shl530_cast_fu_43064_p1.read().is_01() || !tmp_327_cast_cast_fu_43052_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl530_cast_fu_43064_p1.read()) - sc_bigint<11>(tmp_327_cast_cast_fu_43052_p1.read()));
}

void ShuffleNetV2::thread_tmp_1187_fu_43074_p2() {
    tmp_1187_fu_43074_p2 = (!w111_cast_cast_reg_60993.read().is_01() || !tmp_1186_fu_43068_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w111_cast_cast_reg_60993.read()) + sc_biguint<11>(tmp_1186_fu_43068_p2.read()));
}

void ShuffleNetV2::thread_tmp_1188_fu_43090_p2() {
    tmp_1188_fu_43090_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1187_reg_61032.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1189_fu_43095_p2() {
    tmp_1189_fu_43095_p2 = (!tmp_1188_fu_43090_p2.read().is_01() || !tmp_1187_reg_61032.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1188_fu_43090_p2.read()) - sc_biguint<11>(tmp_1187_reg_61032.read()));
}

void ShuffleNetV2::thread_tmp_118_cast_fu_33230_p1() {
    tmp_118_cast_fu_33230_p1 = esl_sext<32,7>(tmp_93_reg_54496.read());
}

void ShuffleNetV2::thread_tmp_118_fu_35257_p2() {
    tmp_118_fu_35257_p2 = (!co97_cast_fu_35241_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co97_cast_fu_35241_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_1190_cast_fu_37457_p1() {
    tmp_1190_cast_fu_37457_p1 = esl_sext<32,12>(tmp_991_reg_57203.read());
}

void ShuffleNetV2::thread_tmp_1190_fu_43100_p2() {
    tmp_1190_fu_43100_p2 = (!h110_cast_cast_reg_61011.read().is_01() || !tmp_1189_fu_43095_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h110_cast_cast_reg_61011.read()) + sc_biguint<11>(tmp_1189_fu_43095_p2.read()));
}

void ShuffleNetV2::thread_tmp_1191_fu_43108_p3() {
    tmp_1191_fu_43108_p3 = esl_concat<10,2>(sum37_reg_61038.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1192_fu_43119_p2() {
    tmp_1192_fu_43119_p2 = (!p_shl528_cast_fu_43115_p1.read().is_01() || !sum37_cast_cast_fu_43105_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl528_cast_fu_43115_p1.read()) - sc_biguint<13>(sum37_cast_cast_fu_43105_p1.read()));
}

void ShuffleNetV2::thread_tmp_1193_fu_43125_p2() {
    tmp_1193_fu_43125_p2 = (!w111_cast_cast1_reg_60988.read().is_01() || !tmp_1192_fu_43119_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w111_cast_cast1_reg_60988.read()) + sc_biguint<13>(tmp_1192_fu_43119_p2.read()));
}

void ShuffleNetV2::thread_tmp_1194_fu_43133_p3() {
    tmp_1194_fu_43133_p3 = esl_concat<13,2>(tmp_1193_reg_61049.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1195_fu_43144_p2() {
    tmp_1195_fu_43144_p2 = (!p_shl262_fu_43140_p1.read().is_01() || !tmp_1436_cast_fu_43130_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl262_fu_43140_p1.read()) - sc_bigint<32>(tmp_1436_cast_fu_43130_p1.read()));
}

void ShuffleNetV2::thread_tmp_1196_fu_43150_p2() {
    tmp_1196_fu_43150_p2 = (!h110_cast_reg_61006.read().is_01() || !tmp_1195_fu_43144_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h110_cast_reg_61006.read()) + sc_biguint<32>(tmp_1195_fu_43144_p2.read()));
}

void ShuffleNetV2::thread_tmp_1197_fu_43631_p1() {
    tmp_1197_fu_43631_p1 = k66_reg_21182.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1198_fu_43477_p1() {
    tmp_1198_fu_43477_p1 = i149_reg_21160.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1199_fu_43493_p2() {
    tmp_1199_fu_43493_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i149_reg_21160.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_119_fu_35466_p2() {
    tmp_119_fu_35466_p2 = (!p_shl92_cast_fu_35450_p1.read().is_01() || !p_shl93_cast_fu_35462_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl92_cast_fu_35450_p1.read()) - sc_biguint<7>(p_shl93_cast_fu_35462_p1.read()));
}

void ShuffleNetV2::thread_tmp_1200_fu_43547_p3() {
    tmp_1200_fu_43547_p3 = esl_concat<12,5>(sum77_reg_61627.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1201_fu_43558_p3() {
    tmp_1201_fu_43558_p3 = esl_concat<12,3>(sum77_reg_61627.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1202_fu_43569_p2() {
    tmp_1202_fu_43569_p2 = (!p_shl531_cast_fu_43554_p1.read().is_01() || !p_shl532_cast_fu_43565_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl531_cast_fu_43554_p1.read()) - sc_biguint<18>(p_shl532_cast_fu_43565_p1.read()));
}

void ShuffleNetV2::thread_tmp_1203_fu_43579_p2() {
    tmp_1203_fu_43579_p2 = (!ci74_cast1_cast_reg_61126.read().is_01() || !tmp_1447_cast_fu_43575_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci74_cast1_cast_reg_61126.read()) + sc_bigint<19>(tmp_1447_cast_fu_43575_p1.read()));
}

void ShuffleNetV2::thread_tmp_1204_fu_44064_p1() {
    tmp_1204_fu_44064_p1 = co155_reg_21259.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1205_cast_fu_37862_p1() {
    tmp_1205_cast_fu_37862_p1 = esl_sext<18,17>(tmp_1002_fu_37856_p2.read());
}

void ShuffleNetV2::thread_tmp_1205_fu_44080_p2() {
    tmp_1205_fu_44080_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co155_reg_21259.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1206_cast_fu_37871_p1() {
    tmp_1206_cast_fu_37871_p1 = esl_sext<32,18>(tmp_1003_fu_37866_p2.read());
}

void ShuffleNetV2::thread_tmp_1206_fu_43976_p1() {
    tmp_1206_fu_43976_p1 = k68_reg_21248.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1207_fu_43783_p1() {
    tmp_1207_fu_43783_p1 = i154_reg_21226.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1208_fu_43830_p3() {
    tmp_1208_fu_43830_p3 = esl_concat<8,2>(tmp_227_fu_43821_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1209_fu_43842_p2() {
    tmp_1209_fu_43842_p2 = (!p_shl536_cast_fu_43838_p1.read().is_01() || !tmp_345_cast_cast_fu_43826_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl536_cast_fu_43838_p1.read()) - sc_bigint<11>(tmp_345_cast_cast_fu_43826_p1.read()));
}

void ShuffleNetV2::thread_tmp_120_fu_35506_p2() {
    tmp_120_fu_35506_p2 = (!ci52_cast_fu_35486_p1.read().is_01() || !tmp_119_reg_55880.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci52_cast_fu_35486_p1.read()) + sc_biguint<7>(tmp_119_reg_55880.read()));
}

void ShuffleNetV2::thread_tmp_1210_fu_43848_p2() {
    tmp_1210_fu_43848_p2 = (!w113_cast_cast_reg_61708.read().is_01() || !tmp_1209_fu_43842_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w113_cast_cast_reg_61708.read()) + sc_biguint<11>(tmp_1209_fu_43842_p2.read()));
}

void ShuffleNetV2::thread_tmp_1211_fu_43864_p2() {
    tmp_1211_fu_43864_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1210_reg_61747.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1212_fu_43869_p2() {
    tmp_1212_fu_43869_p2 = (!tmp_1211_fu_43864_p2.read().is_01() || !tmp_1210_reg_61747.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1211_fu_43864_p2.read()) - sc_biguint<11>(tmp_1210_reg_61747.read()));
}

void ShuffleNetV2::thread_tmp_1213_fu_43874_p2() {
    tmp_1213_fu_43874_p2 = (!h112_cast_cast_reg_61726.read().is_01() || !tmp_1212_fu_43869_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h112_cast_cast_reg_61726.read()) + sc_biguint<11>(tmp_1212_fu_43869_p2.read()));
}

void ShuffleNetV2::thread_tmp_1214_fu_43882_p3() {
    tmp_1214_fu_43882_p3 = esl_concat<10,2>(sum39_reg_61753.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1215_fu_43893_p2() {
    tmp_1215_fu_43893_p2 = (!p_shl534_cast_fu_43889_p1.read().is_01() || !sum39_cast_cast_fu_43879_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl534_cast_fu_43889_p1.read()) - sc_biguint<13>(sum39_cast_cast_fu_43879_p1.read()));
}

void ShuffleNetV2::thread_tmp_1216_fu_43899_p2() {
    tmp_1216_fu_43899_p2 = (!w113_cast_cast1_reg_61703.read().is_01() || !tmp_1215_fu_43893_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w113_cast_cast1_reg_61703.read()) + sc_biguint<13>(tmp_1215_fu_43893_p2.read()));
}

void ShuffleNetV2::thread_tmp_1217_fu_43907_p3() {
    tmp_1217_fu_43907_p3 = esl_concat<13,2>(tmp_1216_reg_61764.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1218_fu_43918_p2() {
    tmp_1218_fu_43918_p2 = (!p_shl267_fu_43914_p1.read().is_01() || !tmp_1463_cast_fu_43904_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl267_fu_43914_p1.read()) - sc_bigint<32>(tmp_1463_cast_fu_43904_p1.read()));
}

void ShuffleNetV2::thread_tmp_1219_fu_43924_p2() {
    tmp_1219_fu_43924_p2 = (!h112_cast_reg_61721.read().is_01() || !tmp_1218_fu_43918_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h112_cast_reg_61721.read()) + sc_biguint<32>(tmp_1218_fu_43918_p2.read()));
}

void ShuffleNetV2::thread_tmp_121_fu_35767_p2() {
    tmp_121_fu_35767_p2 = (!p_shl94_cast_fu_35751_p1.read().is_01() || !p_shl95_cast_fu_35763_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl94_cast_fu_35751_p1.read()) - sc_biguint<7>(p_shl95_cast_fu_35763_p1.read()));
}

void ShuffleNetV2::thread_tmp_1220_fu_44473_p3() {
    tmp_1220_fu_44473_p3 = esl_concat<7,3>(co157_reg_21314.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1221_fu_44485_p3() {
    tmp_1221_fu_44485_p3 = esl_concat<7,1>(co157_reg_21314.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1222_fu_44497_p2() {
    tmp_1222_fu_44497_p2 = (!p_shl539_cast_fu_44481_p1.read().is_01() || !p_shl540_cast_fu_44493_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl539_cast_fu_44481_p1.read()) - sc_biguint<11>(p_shl540_cast_fu_44493_p1.read()));
}

void ShuffleNetV2::thread_tmp_1223_fu_44529_p3() {
    tmp_1223_fu_44529_p3 = esl_concat<8,3>(tmp_228_fu_44523_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1224_fu_44541_p3() {
    tmp_1224_fu_44541_p3 = esl_concat<8,1>(tmp_228_fu_44523_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1225_fu_44553_p2() {
    tmp_1225_fu_44553_p2 = (!p_shl541_cast_fu_44537_p1.read().is_01() || !p_shl542_cast_fu_44549_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl541_cast_fu_44537_p1.read()) - sc_biguint<12>(p_shl542_cast_fu_44549_p1.read()));
}

void ShuffleNetV2::thread_tmp_1226_fu_44401_p1() {
    tmp_1226_fu_44401_p1 = k70_reg_21303.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1227_cast_fu_38104_p1() {
    tmp_1227_cast_fu_38104_p1 = esl_zext<32,15>(tmp_1023_fu_38099_p2.read());
}

void ShuffleNetV2::thread_tmp_1227_fu_44247_p1() {
    tmp_1227_fu_44247_p1 = i156_reg_21281.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1228_cast_fu_38306_p1() {
    tmp_1228_cast_fu_38306_p1 = esl_zext<32,15>(tmp_1024_fu_38301_p2.read());
}

void ShuffleNetV2::thread_tmp_1228_fu_44263_p2() {
    tmp_1228_fu_44263_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i156_reg_21281.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1229_cast_fu_38316_p1() {
    tmp_1229_cast_fu_38316_p1 = esl_zext<32,14>(tmp_1025_reg_57692.read());
}

void ShuffleNetV2::thread_tmp_1229_fu_44317_p3() {
    tmp_1229_fu_44317_p3 = esl_concat<12,5>(sum80_reg_62342.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_122_cast_fu_33294_p1() {
    tmp_122_cast_fu_33294_p1 = esl_zext<6,4>(p_lshr_f6_cast_fu_33284_p4.read());
}

void ShuffleNetV2::thread_tmp_122_fu_35777_p2() {
    tmp_122_fu_35777_p2 = (!tmp_121_fu_35767_p2.read().is_01() || !i92_cast1_reg_56172.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_121_fu_35767_p2.read()) + sc_biguint<7>(i92_cast1_reg_56172.read()));
}

void ShuffleNetV2::thread_tmp_1230_fu_44328_p3() {
    tmp_1230_fu_44328_p3 = esl_concat<12,3>(sum80_reg_62342.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1231_fu_44339_p2() {
    tmp_1231_fu_44339_p2 = (!p_shl537_cast_fu_44324_p1.read().is_01() || !p_shl538_cast_fu_44335_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl537_cast_fu_44324_p1.read()) - sc_biguint<18>(p_shl538_cast_fu_44335_p1.read()));
}

void ShuffleNetV2::thread_tmp_1232_fu_44349_p2() {
    tmp_1232_fu_44349_p2 = (!ci76_cast1_cast_reg_61841.read().is_01() || !tmp_1480_cast_fu_44345_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci76_cast1_cast_reg_61841.read()) + sc_bigint<19>(tmp_1480_cast_fu_44345_p1.read()));
}

void ShuffleNetV2::thread_tmp_1233_fu_44700_p1() {
    tmp_1233_fu_44700_p1 = co159_reg_21347.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1234_fu_44716_p2() {
    tmp_1234_fu_44716_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co159_reg_21347.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1235_fu_44583_p2() {
    tmp_1235_fu_44583_p2 = (!h_115_cast_cast_fu_44579_p1.read().is_01() || !tmp_1472_cast_reg_62413.read().is_01())? sc_lv<13>(): (sc_biguint<13>(h_115_cast_cast_fu_44579_p1.read()) + sc_bigint<13>(tmp_1472_cast_reg_62413.read()));
}

void ShuffleNetV2::thread_tmp_1236_fu_44588_p1() {
    tmp_1236_fu_44588_p1 = tmp_1235_fu_44583_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1237_fu_44608_p2() {
    tmp_1237_fu_44608_p2 = (!p_shl545_cast_fu_44592_p3.read().is_01() || !p_shl546_cast_fu_44600_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl545_cast_fu_44592_p3.read()) - sc_biguint<14>(p_shl546_cast_fu_44600_p3.read()));
}

void ShuffleNetV2::thread_tmp_1238_cast_fu_38581_p1() {
    tmp_1238_cast_fu_38581_p1 = esl_sext<18,17>(tmp_1030_fu_38575_p2.read());
}

void ShuffleNetV2::thread_tmp_1238_fu_44614_p2() {
    tmp_1238_fu_44614_p2 = (!h_115_cast_cast1_fu_44575_p1.read().is_01() || !tmp_1469_cast_reg_62400.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h_115_cast_cast1_fu_44575_p1.read()) + sc_bigint<12>(tmp_1469_cast_reg_62400.read()));
}

void ShuffleNetV2::thread_tmp_1239_cast_fu_38590_p1() {
    tmp_1239_cast_fu_38590_p1 = esl_sext<32,18>(tmp_1031_fu_38585_p2.read());
}

void ShuffleNetV2::thread_tmp_1239_fu_44619_p1() {
    tmp_1239_fu_44619_p1 = tmp_1238_fu_44614_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_123_cast_fu_32995_p1() {
    tmp_123_cast_fu_32995_p1 = esl_sext<9,7>(tmp_95_fu_32989_p2.read());
}

void ShuffleNetV2::thread_tmp_123_fu_35599_p2() {
    tmp_123_fu_35599_p2 = (!p_shl96_fu_35579_p3.read().is_01() || !p_shl97_cast_fu_35595_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl96_fu_35579_p3.read()) - sc_biguint<6>(p_shl97_cast_fu_35595_p1.read()));
}

void ShuffleNetV2::thread_tmp_1240_fu_44639_p2() {
    tmp_1240_fu_44639_p2 = (!p_shl543_cast_fu_44623_p3.read().is_01() || !p_shl544_cast_fu_44631_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl543_cast_fu_44623_p3.read()) - sc_biguint<13>(p_shl544_cast_fu_44631_p3.read()));
}

void ShuffleNetV2::thread_tmp_1241_fu_44665_p2() {
    tmp_1241_fu_44665_p2 = (!tmp_1237_reg_62426.read().is_01() || !w_116_cast_cast_fu_44661_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1237_reg_62426.read()) + sc_biguint<14>(w_116_cast_cast_fu_44661_p1.read()));
}

void ShuffleNetV2::thread_tmp_1242_fu_44675_p2() {
    tmp_1242_fu_44675_p2 = (!tmp_1240_reg_62431.read().is_01() || !w_116_cast_cast1_fu_44657_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1240_reg_62431.read()) + sc_biguint<13>(w_116_cast_cast1_fu_44657_p1.read()));
}

void ShuffleNetV2::thread_tmp_1243_fu_45037_p1() {
    tmp_1243_fu_45037_p1 = k72_reg_21391.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1244_fu_44883_p1() {
    tmp_1244_fu_44883_p1 = i160_reg_21369.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1245_fu_44899_p2() {
    tmp_1245_fu_44899_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i160_reg_21369.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1246_fu_44953_p3() {
    tmp_1246_fu_44953_p3 = esl_concat<12,5>(sum82_reg_62978.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1247_fu_44964_p3() {
    tmp_1247_fu_44964_p3 = esl_concat<12,3>(sum82_reg_62978.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1248_fu_44975_p2() {
    tmp_1248_fu_44975_p2 = (!p_shl547_cast_fu_44960_p1.read().is_01() || !p_shl548_cast_fu_44971_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl547_cast_fu_44960_p1.read()) - sc_biguint<18>(p_shl548_cast_fu_44971_p1.read()));
}

void ShuffleNetV2::thread_tmp_1249_fu_44985_p2() {
    tmp_1249_fu_44985_p2 = (!ci78_cast1_cast_reg_62477.read().is_01() || !tmp_1501_cast_fu_44981_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci78_cast1_cast_reg_62477.read()) + sc_bigint<19>(tmp_1501_cast_fu_44981_p1.read()));
}

void ShuffleNetV2::thread_tmp_124_cast_cast_fu_33004_p1() {
    tmp_124_cast_cast_fu_33004_p1 = esl_sext<10,7>(tmp_96_fu_32999_p2.read());
}

void ShuffleNetV2::thread_tmp_124_fu_35629_p2() {
    tmp_124_fu_35629_p2 = (!p_shl98_cast_fu_35613_p1.read().is_01() || !p_shl99_cast_fu_35625_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl98_cast_fu_35613_p1.read()) - sc_biguint<8>(p_shl99_cast_fu_35625_p1.read()));
}

void ShuffleNetV2::thread_tmp_1250_fu_45462_p1() {
    tmp_1250_fu_45462_p1 = co163_reg_21468.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1251_cast_fu_38950_p1() {
    tmp_1251_cast_fu_38950_p1 = esl_zext<32,10>(tmp_1040_reg_58113.read());
}

void ShuffleNetV2::thread_tmp_1251_fu_45478_p2() {
    tmp_1251_fu_45478_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co163_reg_21468.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1252_fu_45374_p1() {
    tmp_1252_fu_45374_p1 = k74_reg_21457.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1253_fu_45181_p1() {
    tmp_1253_fu_45181_p1 = i165_reg_21435.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1254_cast_fu_38905_p1() {
    tmp_1254_cast_fu_38905_p1 = esl_sext<13,12>(tmp_1043_fu_38899_p2.read());
}

void ShuffleNetV2::thread_tmp_1254_fu_45228_p3() {
    tmp_1254_fu_45228_p3 = esl_concat<8,2>(tmp_246_fu_45219_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1255_cast_fu_38914_p1() {
    tmp_1255_cast_fu_38914_p1 = esl_sext<32,13>(tmp_1044_reg_58118.read());
}

void ShuffleNetV2::thread_tmp_1255_fu_45240_p2() {
    tmp_1255_fu_45240_p2 = (!p_shl552_cast_fu_45236_p1.read().is_01() || !tmp_376_cast_cast_fu_45224_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl552_cast_fu_45236_p1.read()) - sc_bigint<11>(tmp_376_cast_cast_fu_45224_p1.read()));
}

void ShuffleNetV2::thread_tmp_1256_fu_45246_p2() {
    tmp_1256_fu_45246_p2 = (!w117_cast_cast_reg_63059.read().is_01() || !tmp_1255_fu_45240_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w117_cast_cast_reg_63059.read()) + sc_biguint<11>(tmp_1255_fu_45240_p2.read()));
}

void ShuffleNetV2::thread_tmp_1257_fu_45262_p2() {
    tmp_1257_fu_45262_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1256_reg_63098.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1258_fu_45267_p2() {
    tmp_1258_fu_45267_p2 = (!tmp_1257_fu_45262_p2.read().is_01() || !tmp_1256_reg_63098.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1257_fu_45262_p2.read()) - sc_biguint<11>(tmp_1256_reg_63098.read()));
}

void ShuffleNetV2::thread_tmp_1259_fu_45272_p2() {
    tmp_1259_fu_45272_p2 = (!h116_cast_cast_reg_63077.read().is_01() || !tmp_1258_fu_45267_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h116_cast_cast_reg_63077.read()) + sc_biguint<11>(tmp_1258_fu_45267_p2.read()));
}

void ShuffleNetV2::thread_tmp_125_fu_36192_p2() {
    tmp_125_fu_36192_p2 = (!p_shl102_cast_fu_36176_p1.read().is_01() || !p_shl103_cast_fu_36188_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl102_cast_fu_36176_p1.read()) - sc_biguint<7>(p_shl103_cast_fu_36188_p1.read()));
}

void ShuffleNetV2::thread_tmp_1260_fu_45280_p3() {
    tmp_1260_fu_45280_p3 = esl_concat<10,2>(sum41_reg_63104.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1261_fu_45291_p2() {
    tmp_1261_fu_45291_p2 = (!p_shl550_cast_fu_45287_p1.read().is_01() || !sum41_cast_cast_fu_45277_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl550_cast_fu_45287_p1.read()) - sc_biguint<13>(sum41_cast_cast_fu_45277_p1.read()));
}

void ShuffleNetV2::thread_tmp_1262_fu_45297_p2() {
    tmp_1262_fu_45297_p2 = (!w117_cast_cast1_reg_63054.read().is_01() || !tmp_1261_fu_45291_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w117_cast_cast1_reg_63054.read()) + sc_biguint<13>(tmp_1261_fu_45291_p2.read()));
}

void ShuffleNetV2::thread_tmp_1263_fu_45305_p3() {
    tmp_1263_fu_45305_p3 = esl_concat<13,2>(tmp_1262_reg_63115.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1264_fu_45316_p2() {
    tmp_1264_fu_45316_p2 = (!p_shl273_fu_45312_p1.read().is_01() || !tmp_1517_cast_fu_45302_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl273_fu_45312_p1.read()) - sc_bigint<32>(tmp_1517_cast_fu_45302_p1.read()));
}

void ShuffleNetV2::thread_tmp_1265_fu_45322_p2() {
    tmp_1265_fu_45322_p2 = (!h116_cast_reg_63072.read().is_01() || !tmp_1264_fu_45316_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h116_cast_reg_63072.read()) + sc_biguint<32>(tmp_1264_fu_45316_p2.read()));
}

void ShuffleNetV2::thread_tmp_1266_fu_45879_p3() {
    tmp_1266_fu_45879_p3 = esl_concat<7,3>(co165_reg_21523.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1267_fu_45891_p3() {
    tmp_1267_fu_45891_p3 = esl_concat<7,1>(co165_reg_21523.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1268_fu_45903_p2() {
    tmp_1268_fu_45903_p2 = (!p_shl555_cast_fu_45887_p1.read().is_01() || !p_shl556_cast_fu_45899_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl555_cast_fu_45887_p1.read()) - sc_biguint<11>(p_shl556_cast_fu_45899_p1.read()));
}

void ShuffleNetV2::thread_tmp_1269_fu_45807_p1() {
    tmp_1269_fu_45807_p1 = k76_reg_21512.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_126_cast_cast_fu_33585_p1() {
    tmp_126_cast_cast_fu_33585_p1 = esl_sext<9,7>(tmp_97_fu_33579_p2.read());
}

void ShuffleNetV2::thread_tmp_126_fu_36104_p2() {
    tmp_126_fu_36104_p2 = (!p_shl100_cast_fu_36088_p1.read().is_01() || !p_shl101_cast_fu_36100_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl100_cast_fu_36088_p1.read()) - sc_biguint<7>(p_shl101_cast_fu_36100_p1.read()));
}

void ShuffleNetV2::thread_tmp_1270_cast_fu_39319_p1() {
    tmp_1270_cast_fu_39319_p1 = esl_sext<18,17>(tmp_1055_fu_39313_p2.read());
}

void ShuffleNetV2::thread_tmp_1270_fu_45645_p1() {
    tmp_1270_fu_45645_p1 = i167_reg_21490.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1271_cast_fu_39328_p1() {
    tmp_1271_cast_fu_39328_p1 = esl_sext<32,18>(tmp_1056_fu_39323_p2.read());
}

void ShuffleNetV2::thread_tmp_1271_fu_45661_p2() {
    tmp_1271_fu_45661_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i167_reg_21490.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1272_fu_45715_p3() {
    tmp_1272_fu_45715_p3 = esl_concat<11,5>(sum85_reg_63693.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1273_fu_45722_p1() {
    tmp_1273_fu_45722_p1 = esl_sext<17,16>(tmp_1272_fu_45715_p3.read());
}

void ShuffleNetV2::thread_tmp_1274_fu_45730_p3() {
    tmp_1274_fu_45730_p3 = esl_concat<11,3>(sum85_reg_63693.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1275_fu_45737_p1() {
    tmp_1275_fu_45737_p1 = esl_sext<15,14>(tmp_1274_fu_45730_p3.read());
}

void ShuffleNetV2::thread_tmp_1276_fu_45745_p2() {
    tmp_1276_fu_45745_p2 = (!p_shl553_cast_fu_45726_p1.read().is_01() || !p_shl554_cast_fu_45741_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl553_cast_fu_45726_p1.read()) - sc_biguint<18>(p_shl554_cast_fu_45741_p1.read()));
}

void ShuffleNetV2::thread_tmp_1277_fu_45755_p2() {
    tmp_1277_fu_45755_p2 = (!tmp_1533_cast_fu_45751_p1.read().is_01() || !ci80_cast1_cast_reg_63192.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp_1533_cast_fu_45751_p1.read()) + sc_biguint<19>(ci80_cast1_cast_reg_63192.read()));
}

void ShuffleNetV2::thread_tmp_1278_fu_46002_p3() {
    tmp_1278_fu_46002_p3 = esl_concat<7,3>(co167_reg_21556.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1279_fu_46014_p3() {
    tmp_1279_fu_46014_p3 = esl_concat<7,1>(co167_reg_21556.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_127_cast_fu_33623_p1() {
    tmp_127_cast_fu_33623_p1 = esl_sext<32,7>(tmp_98_reg_54838.read());
}

void ShuffleNetV2::thread_tmp_127_fu_36114_p2() {
    tmp_127_fu_36114_p2 = (!tmp_126_fu_36104_p2.read().is_01() || !i95_cast1_reg_56305.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_126_fu_36104_p2.read()) + sc_biguint<7>(i95_cast1_reg_56305.read()));
}

void ShuffleNetV2::thread_tmp_1280_fu_46026_p2() {
    tmp_1280_fu_46026_p2 = (!p_shl559_cast_fu_46010_p1.read().is_01() || !p_shl560_cast_fu_46022_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl559_cast_fu_46010_p1.read()) - sc_biguint<11>(p_shl560_cast_fu_46022_p1.read()));
}

void ShuffleNetV2::thread_tmp_1281_fu_46058_p3() {
    tmp_1281_fu_46058_p3 = esl_concat<8,3>(tmp_251_fu_46052_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1282_fu_46070_p3() {
    tmp_1282_fu_46070_p3 = esl_concat<8,1>(tmp_251_fu_46052_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1283_fu_46082_p2() {
    tmp_1283_fu_46082_p2 = (!p_shl561_cast_fu_46066_p1.read().is_01() || !p_shl562_cast_fu_46078_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl561_cast_fu_46066_p1.read()) - sc_biguint<12>(p_shl562_cast_fu_46078_p1.read()));
}

void ShuffleNetV2::thread_tmp_1284_fu_45941_p2() {
    tmp_1284_fu_45941_p2 = (!tmp_1523_cast_reg_63751.read().is_01() || !h_119_cast_cast_fu_45937_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1523_cast_reg_63751.read()) + sc_biguint<12>(h_119_cast_cast_fu_45937_p1.read()));
}

void ShuffleNetV2::thread_tmp_1285_fu_45946_p1() {
    tmp_1285_fu_45946_p1 = tmp_1284_fu_45941_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1286_fu_45958_p3() {
    tmp_1286_fu_45958_p3 = esl_concat<12,1>(tmp_1284_fu_45941_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1287_fu_45970_p2() {
    tmp_1287_fu_45970_p2 = (!p_shl557_cast_fu_45950_p3.read().is_01() || !p_shl558_cast_fu_45966_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl557_cast_fu_45950_p3.read()) - sc_bigint<14>(p_shl558_cast_fu_45966_p1.read()));
}

void ShuffleNetV2::thread_tmp_1288_fu_46229_p1() {
    tmp_1288_fu_46229_p1 = co169_reg_21589.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1289_fu_46245_p2() {
    tmp_1289_fu_46245_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co169_reg_21589.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_128_fu_36232_p2() {
    tmp_128_fu_36232_p2 = (!ci54_cast_fu_36212_p1.read().is_01() || !tmp_125_reg_56355.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci54_cast_fu_36212_p1.read()) + sc_biguint<7>(tmp_125_reg_56355.read()));
}

void ShuffleNetV2::thread_tmp_1290_fu_46112_p2() {
    tmp_1290_fu_46112_p2 = (!h_121_cast_cast_fu_46108_p1.read().is_01() || !tmp_1540_cast_reg_63808.read().is_01())? sc_lv<13>(): (sc_biguint<13>(h_121_cast_cast_fu_46108_p1.read()) + sc_bigint<13>(tmp_1540_cast_reg_63808.read()));
}

void ShuffleNetV2::thread_tmp_1291_fu_46117_p1() {
    tmp_1291_fu_46117_p1 = tmp_1290_fu_46112_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1292_cast_fu_39561_p1() {
    tmp_1292_cast_fu_39561_p1 = esl_zext<32,15>(tmp_1076_fu_39556_p2.read());
}

void ShuffleNetV2::thread_tmp_1292_fu_46137_p2() {
    tmp_1292_fu_46137_p2 = (!p_shl565_cast_fu_46121_p3.read().is_01() || !p_shl566_cast_fu_46129_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl565_cast_fu_46121_p3.read()) - sc_biguint<14>(p_shl566_cast_fu_46129_p3.read()));
}

void ShuffleNetV2::thread_tmp_1293_cast_fu_39763_p1() {
    tmp_1293_cast_fu_39763_p1 = esl_zext<32,15>(tmp_1077_fu_39758_p2.read());
}

void ShuffleNetV2::thread_tmp_1293_fu_46143_p2() {
    tmp_1293_fu_46143_p2 = (!h_121_cast_cast1_fu_46104_p1.read().is_01() || !tmp_1537_cast_reg_63795.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h_121_cast_cast1_fu_46104_p1.read()) + sc_bigint<12>(tmp_1537_cast_reg_63795.read()));
}

void ShuffleNetV2::thread_tmp_1294_cast_fu_39773_p1() {
    tmp_1294_cast_fu_39773_p1 = esl_zext<32,14>(tmp_1078_reg_58607.read());
}

void ShuffleNetV2::thread_tmp_1294_fu_46148_p1() {
    tmp_1294_fu_46148_p1 = tmp_1293_fu_46143_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1295_fu_46168_p2() {
    tmp_1295_fu_46168_p2 = (!p_shl563_cast_fu_46152_p3.read().is_01() || !p_shl564_cast_fu_46160_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl563_cast_fu_46152_p3.read()) - sc_biguint<13>(p_shl564_cast_fu_46160_p3.read()));
}

void ShuffleNetV2::thread_tmp_1296_fu_45992_p2() {
    tmp_1296_fu_45992_p2 = (!tmp_1287_reg_63772.read().is_01() || !w_120_cast_cast_fu_45988_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1287_reg_63772.read()) + sc_biguint<14>(w_120_cast_cast_fu_45988_p1.read()));
}

void ShuffleNetV2::thread_tmp_1297_fu_46194_p2() {
    tmp_1297_fu_46194_p2 = (!tmp_1292_reg_63821.read().is_01() || !w_122_cast_cast_fu_46190_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1292_reg_63821.read()) + sc_biguint<14>(w_122_cast_cast_fu_46190_p1.read()));
}

void ShuffleNetV2::thread_tmp_1298_fu_46204_p2() {
    tmp_1298_fu_46204_p2 = (!tmp_1295_reg_63826.read().is_01() || !w_122_cast_cast1_fu_46186_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1295_reg_63826.read()) + sc_biguint<13>(w_122_cast_cast1_fu_46186_p1.read()));
}

void ShuffleNetV2::thread_tmp_1299_fu_46566_p1() {
    tmp_1299_fu_46566_p1 = k78_reg_21633.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_129_cast_fu_33323_p1() {
    tmp_129_cast_fu_33323_p1 = esl_sext<32,7>(tmp_94_fu_33318_p2.read());
}

void ShuffleNetV2::thread_tmp_129_fu_35911_p2() {
    tmp_129_fu_35911_p2 = (!p_shl104_cast_fu_35895_p1.read().is_01() || !p_shl105_cast_fu_35907_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl104_cast_fu_35895_p1.read()) - sc_biguint<7>(p_shl105_cast_fu_35907_p1.read()));
}

void ShuffleNetV2::thread_tmp_1300_fu_46412_p1() {
    tmp_1300_fu_46412_p1 = i171_reg_21611.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1301_fu_46428_p2() {
    tmp_1301_fu_46428_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i171_reg_21611.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1302_fu_46482_p3() {
    tmp_1302_fu_46482_p3 = esl_concat<13,5>(sum87_reg_64373.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1303_fu_46493_p3() {
    tmp_1303_fu_46493_p3 = esl_concat<13,3>(sum87_reg_64373.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1304_fu_46504_p2() {
    tmp_1304_fu_46504_p2 = (!p_shl567_cast_fu_46489_p1.read().is_01() || !p_shl568_cast_fu_46500_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl567_cast_fu_46489_p1.read()) - sc_biguint<19>(p_shl568_cast_fu_46500_p1.read()));
}

void ShuffleNetV2::thread_tmp_1305_cast_fu_40046_p1() {
    tmp_1305_cast_fu_40046_p1 = esl_sext<18,17>(tmp_1085_fu_40040_p2.read());
}

void ShuffleNetV2::thread_tmp_1305_fu_46514_p2() {
    tmp_1305_fu_46514_p2 = (!ci82_cast1_cast_reg_63872.read().is_01() || !tmp_1565_cast_fu_46510_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci82_cast1_cast_reg_63872.read()) + sc_bigint<20>(tmp_1565_cast_fu_46510_p1.read()));
}

void ShuffleNetV2::thread_tmp_1306_cast_fu_40055_p1() {
    tmp_1306_cast_fu_40055_p1 = esl_sext<32,18>(tmp_1086_fu_40050_p2.read());
}

void ShuffleNetV2::thread_tmp_1306_fu_47003_p1() {
    tmp_1306_fu_47003_p1 = co173_reg_21710.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1307_fu_47019_p2() {
    tmp_1307_fu_47019_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co173_reg_21710.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1308_fu_46915_p1() {
    tmp_1308_fu_46915_p1 = k80_reg_21699.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1309_fu_46710_p1() {
    tmp_1309_fu_46710_p1 = i176_reg_21677.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_130_fu_35921_p2() {
    tmp_130_fu_35921_p2 = (!co102_cast1_reg_56214.read().is_01() || !tmp_129_fu_35911_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co102_cast1_reg_56214.read()) + sc_biguint<7>(tmp_129_fu_35911_p2.read()));
}

void ShuffleNetV2::thread_tmp_1310_fu_46757_p3() {
    tmp_1310_fu_46757_p3 = esl_concat<8,2>(tmp_265_fu_46748_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1311_fu_46769_p2() {
    tmp_1311_fu_46769_p2 = (!p_shl572_cast_fu_46765_p1.read().is_01() || !tmp_407_cast_cast_fu_46753_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl572_cast_fu_46765_p1.read()) - sc_bigint<11>(tmp_407_cast_cast_fu_46753_p1.read()));
}

void ShuffleNetV2::thread_tmp_1312_fu_46775_p2() {
    tmp_1312_fu_46775_p2 = (!tmp_1311_fu_46769_p2.read().is_01() || !w123_cast_cast_reg_64454.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1311_fu_46769_p2.read()) + sc_biguint<11>(w123_cast_cast_reg_64454.read()));
}

void ShuffleNetV2::thread_tmp_1313_fu_46791_p2() {
    tmp_1313_fu_46791_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1312_reg_64493.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1314_fu_46796_p2() {
    tmp_1314_fu_46796_p2 = (!tmp_1313_fu_46791_p2.read().is_01() || !tmp_1312_reg_64493.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1313_fu_46791_p2.read()) - sc_biguint<11>(tmp_1312_reg_64493.read()));
}

void ShuffleNetV2::thread_tmp_1315_fu_46801_p2() {
    tmp_1315_fu_46801_p2 = (!tmp_1314_fu_46796_p2.read().is_01() || !h122_cast_cast_reg_64472.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1314_fu_46796_p2.read()) + sc_biguint<11>(h122_cast_cast_reg_64472.read()));
}

void ShuffleNetV2::thread_tmp_1316_fu_46813_p3() {
    tmp_1316_fu_46813_p3 = esl_concat<9,2>(sum43_reg_64499.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1317_fu_46820_p1() {
    tmp_1317_fu_46820_p1 = esl_sext<12,11>(tmp_1316_fu_46813_p3.read());
}

void ShuffleNetV2::thread_tmp_1318_cast_fu_40407_p1() {
    tmp_1318_cast_fu_40407_p1 = esl_zext<32,10>(tmp_1095_reg_59028.read());
}

void ShuffleNetV2::thread_tmp_1318_fu_46828_p2() {
    tmp_1318_fu_46828_p2 = (!p_shl570_cast_fu_46824_p1.read().is_01() || !sum43_cast_cast_fu_46809_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl570_cast_fu_46824_p1.read()) - sc_biguint<13>(sum43_cast_cast_fu_46809_p1.read()));
}

void ShuffleNetV2::thread_tmp_1319_fu_46838_p2() {
    tmp_1319_fu_46838_p2 = (!tmp_1581_cast_fu_46834_p1.read().is_01() || !w123_cast_cast1_reg_64449.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_1581_cast_fu_46834_p1.read()) + sc_biguint<14>(w123_cast_cast1_reg_64449.read()));
}

void ShuffleNetV2::thread_tmp_131_fu_36493_p2() {
    tmp_131_fu_36493_p2 = (!p_shl106_cast_fu_36477_p1.read().is_01() || !p_shl107_cast_fu_36489_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl106_cast_fu_36477_p1.read()) - sc_biguint<7>(p_shl107_cast_fu_36489_p1.read()));
}

void ShuffleNetV2::thread_tmp_1320_cast_fu_40362_p1() {
    tmp_1320_cast_fu_40362_p1 = esl_sext<14,13>(tmp_1097_fu_40356_p2.read());
}

void ShuffleNetV2::thread_tmp_1320_fu_46846_p3() {
    tmp_1320_fu_46846_p3 = esl_concat<14,2>(tmp_1319_reg_64510.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1321_cast_fu_40371_p1() {
    tmp_1321_cast_fu_40371_p1 = esl_sext<32,14>(tmp_1098_reg_59033.read());
}

void ShuffleNetV2::thread_tmp_1321_fu_46857_p2() {
    tmp_1321_fu_46857_p2 = (!p_shl275_fu_46853_p1.read().is_01() || !tmp_1582_cast_fu_46843_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl275_fu_46853_p1.read()) - sc_bigint<32>(tmp_1582_cast_fu_46843_p1.read()));
}

void ShuffleNetV2::thread_tmp_1322_fu_46863_p2() {
    tmp_1322_fu_46863_p2 = (!tmp_1321_fu_46857_p2.read().is_01() || !h122_cast_reg_64467.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1321_fu_46857_p2.read()) + sc_biguint<32>(h122_cast_reg_64467.read()));
}

void ShuffleNetV2::thread_tmp_1323_fu_47412_p3() {
    tmp_1323_fu_47412_p3 = esl_concat<7,3>(co175_reg_21765.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1324_fu_47424_p3() {
    tmp_1324_fu_47424_p3 = esl_concat<7,1>(co175_reg_21765.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1325_fu_47436_p2() {
    tmp_1325_fu_47436_p2 = (!p_shl575_cast_fu_47420_p1.read().is_01() || !p_shl576_cast_fu_47432_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl575_cast_fu_47420_p1.read()) - sc_biguint<11>(p_shl576_cast_fu_47432_p1.read()));
}

void ShuffleNetV2::thread_tmp_1326_fu_47340_p1() {
    tmp_1326_fu_47340_p1 = k82_reg_21754.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1327_fu_47186_p1() {
    tmp_1327_fu_47186_p1 = i178_reg_21732.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1328_fu_47202_p2() {
    tmp_1328_fu_47202_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i178_reg_21732.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1329_fu_47256_p3() {
    tmp_1329_fu_47256_p3 = esl_concat<13,5>(sum90_reg_65088.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_132_cast_fu_33447_p1() {
    tmp_132_cast_fu_33447_p1 = esl_sext<10,8>(tmp_100_fu_33441_p2.read());
}

void ShuffleNetV2::thread_tmp_132_fu_36503_p2() {
    tmp_132_fu_36503_p2 = (!tmp_131_fu_36493_p2.read().is_01() || !i99_cast1_reg_56647.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_131_fu_36493_p2.read()) + sc_biguint<7>(i99_cast1_reg_56647.read()));
}

void ShuffleNetV2::thread_tmp_132_t_fu_29207_p2() {
    tmp_132_t_fu_29207_p2 = (!tmp_cast_reg_51794.read().is_01() || !tmp_38_fu_29156_p2.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_cast_reg_51794.read()) + sc_biguint<6>(tmp_38_fu_29156_p2.read()));
}

void ShuffleNetV2::thread_tmp_1330_fu_47267_p3() {
    tmp_1330_fu_47267_p3 = esl_concat<13,3>(sum90_reg_65088.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1331_fu_47278_p2() {
    tmp_1331_fu_47278_p2 = (!p_shl573_cast_fu_47263_p1.read().is_01() || !p_shl574_cast_fu_47274_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl573_cast_fu_47263_p1.read()) - sc_biguint<19>(p_shl574_cast_fu_47274_p1.read()));
}

void ShuffleNetV2::thread_tmp_1332_fu_47288_p2() {
    tmp_1332_fu_47288_p2 = (!ci84_cast1_cast_reg_64587.read().is_01() || !tmp_1596_cast_fu_47284_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci84_cast1_cast_reg_64587.read()) + sc_bigint<20>(tmp_1596_cast_fu_47284_p1.read()));
}

void ShuffleNetV2::thread_tmp_1333_fu_47535_p3() {
    tmp_1333_fu_47535_p3 = esl_concat<7,3>(co177_reg_21798.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1334_fu_47547_p3() {
    tmp_1334_fu_47547_p3 = esl_concat<7,1>(co177_reg_21798.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1335_fu_47559_p2() {
    tmp_1335_fu_47559_p2 = (!p_shl579_cast_fu_47543_p1.read().is_01() || !p_shl580_cast_fu_47555_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl579_cast_fu_47543_p1.read()) - sc_biguint<11>(p_shl580_cast_fu_47555_p1.read()));
}

void ShuffleNetV2::thread_tmp_1336_fu_47591_p3() {
    tmp_1336_fu_47591_p3 = esl_concat<8,3>(tmp_270_fu_47585_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1337_fu_47603_p3() {
    tmp_1337_fu_47603_p3 = esl_concat<8,1>(tmp_270_fu_47585_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1338_cast_fu_40784_p1() {
    tmp_1338_cast_fu_40784_p1 = esl_sext<18,17>(tmp_1111_fu_40778_p2.read());
}

void ShuffleNetV2::thread_tmp_1338_fu_47615_p2() {
    tmp_1338_fu_47615_p2 = (!p_shl581_cast_fu_47599_p1.read().is_01() || !p_shl582_cast_fu_47611_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl581_cast_fu_47599_p1.read()) - sc_biguint<12>(p_shl582_cast_fu_47611_p1.read()));
}

void ShuffleNetV2::thread_tmp_1339_cast_fu_40793_p1() {
    tmp_1339_cast_fu_40793_p1 = esl_sext<32,18>(tmp_1112_fu_40788_p2.read());
}

void ShuffleNetV2::thread_tmp_1339_fu_47474_p2() {
    tmp_1339_fu_47474_p2 = (!tmp_1588_cast_reg_65146.read().is_01() || !h_125_cast_cast_fu_47470_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1588_cast_reg_65146.read()) + sc_biguint<12>(h_125_cast_cast_fu_47470_p1.read()));
}

void ShuffleNetV2::thread_tmp_133_fu_36325_p2() {
    tmp_133_fu_36325_p2 = (!p_shl108_fu_36305_p3.read().is_01() || !p_shl109_cast_fu_36321_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl108_fu_36305_p3.read()) - sc_biguint<6>(p_shl109_cast_fu_36321_p1.read()));
}

void ShuffleNetV2::thread_tmp_1340_fu_47479_p1() {
    tmp_1340_fu_47479_p1 = tmp_1339_fu_47474_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1341_fu_47491_p3() {
    tmp_1341_fu_47491_p3 = esl_concat<12,1>(tmp_1339_fu_47474_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1342_fu_47503_p2() {
    tmp_1342_fu_47503_p2 = (!p_shl577_cast_fu_47483_p3.read().is_01() || !p_shl578_cast_fu_47499_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl577_cast_fu_47483_p3.read()) - sc_bigint<14>(p_shl578_cast_fu_47499_p1.read()));
}

void ShuffleNetV2::thread_tmp_1343_fu_47762_p1() {
    tmp_1343_fu_47762_p1 = co179_reg_21831.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1344_fu_47778_p2() {
    tmp_1344_fu_47778_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co179_reg_21831.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1345_fu_47645_p2() {
    tmp_1345_fu_47645_p2 = (!h_127_cast_cast_fu_47641_p1.read().is_01() || !tmp_1603_cast_reg_65203.read().is_01())? sc_lv<13>(): (sc_biguint<13>(h_127_cast_cast_fu_47641_p1.read()) + sc_bigint<13>(tmp_1603_cast_reg_65203.read()));
}

void ShuffleNetV2::thread_tmp_1346_fu_47650_p1() {
    tmp_1346_fu_47650_p1 = tmp_1345_fu_47645_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1347_fu_47670_p2() {
    tmp_1347_fu_47670_p2 = (!p_shl585_cast_fu_47654_p3.read().is_01() || !p_shl586_cast_fu_47662_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl585_cast_fu_47654_p3.read()) - sc_biguint<14>(p_shl586_cast_fu_47662_p3.read()));
}

void ShuffleNetV2::thread_tmp_1348_fu_47676_p2() {
    tmp_1348_fu_47676_p2 = (!h_127_cast_cast1_fu_47637_p1.read().is_01() || !tmp_1600_cast_reg_65190.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h_127_cast_cast1_fu_47637_p1.read()) + sc_bigint<12>(tmp_1600_cast_reg_65190.read()));
}

void ShuffleNetV2::thread_tmp_1349_fu_47681_p1() {
    tmp_1349_fu_47681_p1 = tmp_1348_fu_47676_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_134_fu_36355_p2() {
    tmp_134_fu_36355_p2 = (!p_shl110_cast_fu_36339_p1.read().is_01() || !p_shl111_cast_fu_36351_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl110_cast_fu_36339_p1.read()) - sc_biguint<8>(p_shl111_cast_fu_36351_p1.read()));
}

void ShuffleNetV2::thread_tmp_1350_fu_47701_p2() {
    tmp_1350_fu_47701_p2 = (!p_shl583_cast_fu_47685_p3.read().is_01() || !p_shl584_cast_fu_47693_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl583_cast_fu_47685_p3.read()) - sc_biguint<13>(p_shl584_cast_fu_47693_p3.read()));
}

void ShuffleNetV2::thread_tmp_1351_fu_47525_p2() {
    tmp_1351_fu_47525_p2 = (!tmp_1342_reg_65167.read().is_01() || !w_126_cast_cast_fu_47521_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1342_reg_65167.read()) + sc_biguint<14>(w_126_cast_cast_fu_47521_p1.read()));
}

void ShuffleNetV2::thread_tmp_1352_fu_47727_p2() {
    tmp_1352_fu_47727_p2 = (!tmp_1347_reg_65216.read().is_01() || !w_128_cast_cast_fu_47723_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1347_reg_65216.read()) + sc_biguint<14>(w_128_cast_cast_fu_47723_p1.read()));
}

void ShuffleNetV2::thread_tmp_1353_fu_47737_p2() {
    tmp_1353_fu_47737_p2 = (!tmp_1350_reg_65221.read().is_01() || !w_128_cast_cast1_fu_47719_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1350_reg_65221.read()) + sc_biguint<13>(w_128_cast_cast1_fu_47719_p1.read()));
}

void ShuffleNetV2::thread_tmp_1354_fu_48099_p1() {
    tmp_1354_fu_48099_p1 = k84_reg_21875.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1355_fu_47945_p1() {
    tmp_1355_fu_47945_p1 = i182_reg_21853.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1356_fu_47961_p2() {
    tmp_1356_fu_47961_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i182_reg_21853.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1357_fu_48015_p3() {
    tmp_1357_fu_48015_p3 = esl_concat<13,5>(sum92_reg_65768.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1358_fu_48026_p3() {
    tmp_1358_fu_48026_p3 = esl_concat<13,3>(sum92_reg_65768.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1359_fu_48037_p2() {
    tmp_1359_fu_48037_p2 = (!p_shl587_cast_fu_48022_p1.read().is_01() || !p_shl588_cast_fu_48033_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl587_cast_fu_48022_p1.read()) - sc_biguint<19>(p_shl588_cast_fu_48033_p1.read()));
}

void ShuffleNetV2::thread_tmp_135_fu_36702_p2() {
    tmp_135_fu_36702_p2 = (!co107_cast_fu_36686_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co107_cast_fu_36686_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_1360_cast_fu_41030_p1() {
    tmp_1360_cast_fu_41030_p1 = esl_zext<32,15>(tmp_1132_fu_41025_p2.read());
}

void ShuffleNetV2::thread_tmp_1360_fu_48047_p2() {
    tmp_1360_fu_48047_p2 = (!ci86_cast1_cast_reg_65267.read().is_01() || !tmp_1628_cast_fu_48043_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci86_cast1_cast_reg_65267.read()) + sc_bigint<20>(tmp_1628_cast_fu_48043_p1.read()));
}

void ShuffleNetV2::thread_tmp_1361_cast_fu_41232_p1() {
    tmp_1361_cast_fu_41232_p1 = esl_zext<32,15>(tmp_1133_fu_41227_p2.read());
}

void ShuffleNetV2::thread_tmp_1361_fu_48528_p1() {
    tmp_1361_fu_48528_p1 = co183_reg_21952.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1362_cast_fu_41242_p1() {
    tmp_1362_cast_fu_41242_p1 = esl_zext<32,14>(tmp_1134_reg_59522.read());
}

void ShuffleNetV2::thread_tmp_1362_fu_48544_p2() {
    tmp_1362_fu_48544_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co183_reg_21952.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1363_fu_48440_p1() {
    tmp_1363_fu_48440_p1 = k86_reg_21941.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1364_fu_48243_p1() {
    tmp_1364_fu_48243_p1 = i187_reg_21919.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1365_fu_48290_p3() {
    tmp_1365_fu_48290_p3 = esl_concat<8,2>(tmp_284_fu_48281_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1366_fu_48302_p2() {
    tmp_1366_fu_48302_p2 = (!p_shl592_cast_fu_48298_p1.read().is_01() || !tmp_438_cast_cast_fu_48286_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl592_cast_fu_48298_p1.read()) - sc_bigint<11>(tmp_438_cast_cast_fu_48286_p1.read()));
}

void ShuffleNetV2::thread_tmp_1367_fu_48308_p2() {
    tmp_1367_fu_48308_p2 = (!w129_cast_cast_reg_65849.read().is_01() || !tmp_1366_fu_48302_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w129_cast_cast_reg_65849.read()) + sc_biguint<11>(tmp_1366_fu_48302_p2.read()));
}

void ShuffleNetV2::thread_tmp_1368_fu_48324_p2() {
    tmp_1368_fu_48324_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1367_reg_65888.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1369_fu_48329_p2() {
    tmp_1369_fu_48329_p2 = (!tmp_1368_fu_48324_p2.read().is_01() || !tmp_1367_reg_65888.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1368_fu_48324_p2.read()) - sc_biguint<11>(tmp_1367_reg_65888.read()));
}

void ShuffleNetV2::thread_tmp_136_fu_36911_p2() {
    tmp_136_fu_36911_p2 = (!p_shl112_cast_fu_36895_p1.read().is_01() || !p_shl113_cast_fu_36907_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl112_cast_fu_36895_p1.read()) - sc_biguint<7>(p_shl113_cast_fu_36907_p1.read()));
}

void ShuffleNetV2::thread_tmp_1370_fu_48334_p2() {
    tmp_1370_fu_48334_p2 = (!h128_cast_cast_reg_65867.read().is_01() || !tmp_1369_fu_48329_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h128_cast_cast_reg_65867.read()) + sc_biguint<11>(tmp_1369_fu_48329_p2.read()));
}

void ShuffleNetV2::thread_tmp_1371_fu_48342_p3() {
    tmp_1371_fu_48342_p3 = esl_concat<11,2>(sum45_reg_65894.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1372_fu_48353_p2() {
    tmp_1372_fu_48353_p2 = (!p_shl590_cast_fu_48349_p1.read().is_01() || !sum45_cast_cast_fu_48339_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl590_cast_fu_48349_p1.read()) - sc_biguint<14>(sum45_cast_cast_fu_48339_p1.read()));
}

void ShuffleNetV2::thread_tmp_1373_cast_fu_41515_p1() {
    tmp_1373_cast_fu_41515_p1 = esl_sext<18,17>(tmp_1141_fu_41509_p2.read());
}

void ShuffleNetV2::thread_tmp_1373_fu_48363_p2() {
    tmp_1373_fu_48363_p2 = (!w129_cast_cast1_reg_65844.read().is_01() || !tmp_1643_cast_fu_48359_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w129_cast_cast1_reg_65844.read()) + sc_bigint<15>(tmp_1643_cast_fu_48359_p1.read()));
}

void ShuffleNetV2::thread_tmp_1374_cast_fu_41524_p1() {
    tmp_1374_cast_fu_41524_p1 = esl_sext<32,18>(tmp_1142_fu_41519_p2.read());
}

void ShuffleNetV2::thread_tmp_1374_fu_48371_p3() {
    tmp_1374_fu_48371_p3 = esl_concat<15,2>(tmp_1373_reg_65905.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1375_fu_48382_p2() {
    tmp_1375_fu_48382_p2 = (!p_shl276_fu_48378_p1.read().is_01() || !tmp_1644_cast_fu_48368_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl276_fu_48378_p1.read()) - sc_bigint<32>(tmp_1644_cast_fu_48368_p1.read()));
}

void ShuffleNetV2::thread_tmp_1376_fu_48388_p2() {
    tmp_1376_fu_48388_p2 = (!h128_cast_reg_65862.read().is_01() || !tmp_1375_fu_48382_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h128_cast_reg_65862.read()) + sc_biguint<32>(tmp_1375_fu_48382_p2.read()));
}

void ShuffleNetV2::thread_tmp_1377_fu_48937_p3() {
    tmp_1377_fu_48937_p3 = esl_concat<7,3>(co185_reg_22007.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1378_fu_48949_p3() {
    tmp_1378_fu_48949_p3 = esl_concat<7,1>(co185_reg_22007.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1379_fu_48961_p2() {
    tmp_1379_fu_48961_p2 = (!p_shl595_cast_fu_48945_p1.read().is_01() || !p_shl596_cast_fu_48957_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl595_cast_fu_48945_p1.read()) - sc_biguint<11>(p_shl596_cast_fu_48957_p1.read()));
}

void ShuffleNetV2::thread_tmp_137_cast_fu_34017_p1() {
    tmp_137_cast_fu_34017_p1 = esl_zext<6,4>(p_lshr_f7_cast_fu_34007_p4.read());
}

void ShuffleNetV2::thread_tmp_137_fu_36951_p2() {
    tmp_137_fu_36951_p2 = (!ci56_cast_fu_36931_p1.read().is_01() || !tmp_136_reg_56795.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci56_cast_fu_36931_p1.read()) + sc_biguint<7>(tmp_136_reg_56795.read()));
}

void ShuffleNetV2::thread_tmp_1380_fu_48865_p1() {
    tmp_1380_fu_48865_p1 = k88_reg_21996.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1381_fu_48711_p1() {
    tmp_1381_fu_48711_p1 = i189_reg_21974.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1382_fu_48727_p2() {
    tmp_1382_fu_48727_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i189_reg_21974.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1383_fu_48781_p3() {
    tmp_1383_fu_48781_p3 = esl_concat<13,5>(sum95_reg_66483.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1384_fu_48792_p3() {
    tmp_1384_fu_48792_p3 = esl_concat<13,3>(sum95_reg_66483.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1385_fu_48803_p2() {
    tmp_1385_fu_48803_p2 = (!p_shl593_cast_fu_48788_p1.read().is_01() || !p_shl594_cast_fu_48799_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl593_cast_fu_48788_p1.read()) - sc_biguint<19>(p_shl594_cast_fu_48799_p1.read()));
}

void ShuffleNetV2::thread_tmp_1386_cast_fu_41876_p1() {
    tmp_1386_cast_fu_41876_p1 = esl_zext<32,10>(tmp_1151_reg_59943.read());
}

void ShuffleNetV2::thread_tmp_1386_fu_48813_p2() {
    tmp_1386_fu_48813_p2 = (!ci88_cast1_cast_reg_65982.read().is_01() || !tmp_1658_cast_fu_48809_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci88_cast1_cast_reg_65982.read()) + sc_bigint<20>(tmp_1658_cast_fu_48809_p1.read()));
}

void ShuffleNetV2::thread_tmp_1387_fu_49060_p3() {
    tmp_1387_fu_49060_p3 = esl_concat<8,2>(ci90_reg_22040.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1388_fu_49072_p3() {
    tmp_1388_fu_49072_p3 = esl_concat<8,3>(ci90_reg_22040.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1389_cast_fu_41840_p1() {
    tmp_1389_cast_fu_41840_p1 = esl_sext<32,13>(tmp_1154_reg_59948.read());
}

void ShuffleNetV2::thread_tmp_1389_fu_49084_p3() {
    tmp_1389_fu_49084_p3 = esl_concat<8,1>(ci90_reg_22040.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_138_cast_cast_fu_34316_p1() {
    tmp_138_cast_cast_fu_34316_p1 = esl_sext<9,7>(tmp_104_fu_34310_p2.read());
}

void ShuffleNetV2::thread_tmp_138_fu_37212_p2() {
    tmp_138_fu_37212_p2 = (!p_shl114_cast_fu_37196_p1.read().is_01() || !p_shl115_cast_fu_37208_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl114_cast_fu_37196_p1.read()) - sc_biguint<7>(p_shl115_cast_fu_37208_p1.read()));
}

void ShuffleNetV2::thread_tmp_1390_fu_49096_p2() {
    tmp_1390_fu_49096_p2 = (!p_shl599_cast_fu_49080_p1.read().is_01() || !p_shl600_cast_fu_49092_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl599_cast_fu_49080_p1.read()) - sc_biguint<12>(p_shl600_cast_fu_49092_p1.read()));
}

void ShuffleNetV2::thread_tmp_1391_fu_48999_p2() {
    tmp_1391_fu_48999_p2 = (!tmp_1650_cast_reg_66541.read().is_01() || !h_131_cast_cast_fu_48995_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1650_cast_reg_66541.read()) + sc_biguint<12>(h_131_cast_cast_fu_48995_p1.read()));
}

void ShuffleNetV2::thread_tmp_1392_fu_49004_p1() {
    tmp_1392_fu_49004_p1 = tmp_1391_fu_48999_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1393_fu_49016_p3() {
    tmp_1393_fu_49016_p3 = esl_concat<12,1>(tmp_1391_fu_48999_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1394_fu_49028_p2() {
    tmp_1394_fu_49028_p2 = (!p_shl597_cast_fu_49008_p3.read().is_01() || !p_shl598_cast_fu_49024_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl597_cast_fu_49008_p3.read()) - sc_bigint<14>(p_shl598_cast_fu_49024_p1.read()));
}

void ShuffleNetV2::thread_tmp_1395_fu_49122_p2() {
    tmp_1395_fu_49122_p2 = (!w131_cast_cast_fu_49118_p1.read().is_01() || !tmp_1661_cast_reg_66585.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w131_cast_cast_fu_49118_p1.read()) + sc_biguint<11>(tmp_1661_cast_reg_66585.read()));
}

void ShuffleNetV2::thread_tmp_1396_fu_49238_p1() {
    tmp_1396_fu_49238_p1 = co_i_reg_22073.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1397_fu_49252_p3() {
    tmp_1397_fu_49252_p3 = esl_concat<7,2>(newIndex_i_fu_49242_p4.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1398_fu_49151_p2() {
    tmp_1398_fu_49151_p2 = (!w_133_cast_cast_fu_49147_p1.read().is_01() || !tmp_1664_cast_reg_66590.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w_133_cast_cast_fu_49147_p1.read()) + sc_bigint<13>(tmp_1664_cast_reg_66590.read()));
}

void ShuffleNetV2::thread_tmp_1399_fu_49156_p1() {
    tmp_1399_fu_49156_p1 = tmp_1398_fu_49151_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_139_cast_fu_34354_p1() {
    tmp_139_cast_fu_34354_p1 = esl_sext<32,7>(tmp_105_reg_55278.read());
}

void ShuffleNetV2::thread_tmp_139_fu_37222_p2() {
    tmp_139_fu_37222_p2 = (!tmp_138_fu_37212_p2.read().is_01() || !i104_cast1_reg_57087.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_138_fu_37212_p2.read()) + sc_biguint<7>(i104_cast1_reg_57087.read()));
}

void ShuffleNetV2::thread_tmp_1400_fu_49176_p2() {
    tmp_1400_fu_49176_p2 = (!p_shl601_cast_fu_49160_p3.read().is_01() || !p_shl602_cast_fu_49168_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl601_cast_fu_49160_p3.read()) - sc_biguint<14>(p_shl602_cast_fu_49168_p3.read()));
}

void ShuffleNetV2::thread_tmp_1401_fu_49050_p2() {
    tmp_1401_fu_49050_p2 = (!tmp_1394_reg_66562.read().is_01() || !w_134_cast_cast_fu_49046_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1394_reg_66562.read()) + sc_biguint<14>(w_134_cast_cast_fu_49046_p1.read()));
}

void ShuffleNetV2::thread_tmp_1402_fu_49268_p2() {
    tmp_1402_fu_49268_p2 = (!h_i_cast_cast_fu_49264_p1.read().is_01() || !tmp_1673_cast_reg_66657.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_i_cast_cast_fu_49264_p1.read()) + sc_biguint<10>(tmp_1673_cast_reg_66657.read()));
}

void ShuffleNetV2::thread_tmp_1403_fu_49186_p2() {
    tmp_1403_fu_49186_p2 = (!tmp_1671_cast_reg_66603.read().is_01() || !h132_cast_cast_fu_49182_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1671_cast_reg_66603.read()) + sc_biguint<13>(h132_cast_cast_fu_49182_p1.read()));
}

void ShuffleNetV2::thread_tmp_1404_cast_fu_42257_p1() {
    tmp_1404_cast_fu_42257_p1 = esl_sext<19,18>(tmp_1165_fu_42251_p2.read());
}

void ShuffleNetV2::thread_tmp_1404_fu_49373_p3() {
    tmp_1404_fu_49373_p3 = p_i_reg_22084.read().range(7, 7);
}

void ShuffleNetV2::thread_tmp_1405_cast_fu_42266_p1() {
    tmp_1405_cast_fu_42266_p1 = esl_sext<32,19>(tmp_1166_fu_42261_p2.read());
}

void ShuffleNetV2::thread_tmp_1406_fu_49212_p2() {
    tmp_1406_fu_49212_p2 = (!tmp_1400_reg_66616.read().is_01() || !h_133_cast_cast_fu_49208_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1400_reg_66616.read()) + sc_biguint<14>(h_133_cast_cast_fu_49208_p1.read()));
}

void ShuffleNetV2::thread_tmp_1407_fu_49317_p2() {
    tmp_1407_fu_49317_p2 = (!tmp_1681_cast_reg_66662.read().is_01() || !w_i_cast_cast_fu_49313_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1681_cast_reg_66662.read()) + sc_biguint<12>(w_i_cast_cast_fu_49313_p1.read()));
}

void ShuffleNetV2::thread_tmp_140_fu_37044_p2() {
    tmp_140_fu_37044_p2 = (!p_shl116_fu_37024_p3.read().is_01() || !p_shl117_cast_fu_37040_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl116_fu_37024_p3.read()) - sc_biguint<6>(p_shl117_cast_fu_37040_p1.read()));
}

void ShuffleNetV2::thread_tmp_1412_cast_fu_42503_p1() {
    tmp_1412_cast_fu_42503_p1 = esl_zext<32,15>(tmp_1173_fu_42498_p2.read());
}

void ShuffleNetV2::thread_tmp_141_cast_fu_34046_p1() {
    tmp_141_cast_fu_34046_p1 = esl_sext<32,7>(tmp_103_fu_34041_p2.read());
}

void ShuffleNetV2::thread_tmp_141_fu_37074_p2() {
    tmp_141_fu_37074_p2 = (!p_shl118_cast_fu_37058_p1.read().is_01() || !p_shl119_cast_fu_37070_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl118_cast_fu_37058_p1.read()) - sc_biguint<8>(p_shl119_cast_fu_37070_p1.read()));
}

void ShuffleNetV2::thread_tmp_1420_cast_fu_42805_p1() {
    tmp_1420_cast_fu_42805_p1 = esl_sext<19,18>(tmp_1179_fu_42799_p2.read());
}

void ShuffleNetV2::thread_tmp_1421_cast_fu_42814_p1() {
    tmp_1421_cast_fu_42814_p1 = esl_sext<32,19>(tmp_1180_fu_42809_p2.read());
}

void ShuffleNetV2::thread_tmp_142_fu_37645_p2() {
    tmp_142_fu_37645_p2 = (!p_shl122_cast_fu_37629_p1.read().is_01() || !p_shl123_cast_fu_37641_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl122_cast_fu_37629_p1.read()) - sc_biguint<7>(p_shl123_cast_fu_37641_p1.read()));
}

void ShuffleNetV2::thread_tmp_1433_cast_fu_43166_p1() {
    tmp_1433_cast_fu_43166_p1 = esl_zext<32,11>(tmp_1190_reg_61044.read());
}

void ShuffleNetV2::thread_tmp_1436_cast_fu_43130_p1() {
    tmp_1436_cast_fu_43130_p1 = esl_sext<32,13>(tmp_1193_reg_61049.read());
}

void ShuffleNetV2::thread_tmp_143_fu_37557_p2() {
    tmp_143_fu_37557_p2 = (!p_shl120_cast_fu_37541_p1.read().is_01() || !p_shl121_cast_fu_37553_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl120_cast_fu_37541_p1.read()) - sc_biguint<7>(p_shl121_cast_fu_37553_p1.read()));
}

void ShuffleNetV2::thread_tmp_1447_cast_fu_43575_p1() {
    tmp_1447_cast_fu_43575_p1 = esl_sext<19,18>(tmp_1202_fu_43569_p2.read());
}

void ShuffleNetV2::thread_tmp_1448_cast_fu_43584_p1() {
    tmp_1448_cast_fu_43584_p1 = esl_sext<32,19>(tmp_1203_fu_43579_p2.read());
}

void ShuffleNetV2::thread_tmp_144_cast_cast_fu_34170_p1() {
    tmp_144_cast_cast_fu_34170_p1 = esl_sext<9,8>(tmp_107_fu_34164_p2.read());
}

void ShuffleNetV2::thread_tmp_144_fu_37567_p2() {
    tmp_144_fu_37567_p2 = (!tmp_143_fu_37557_p2.read().is_01() || !i107_cast1_reg_57220.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_143_fu_37557_p2.read()) + sc_biguint<7>(i107_cast1_reg_57220.read()));
}

void ShuffleNetV2::thread_tmp_145_fu_37685_p2() {
    tmp_145_fu_37685_p2 = (!ci58_cast_fu_37665_p1.read().is_01() || !tmp_142_reg_57270.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci58_cast_fu_37665_p1.read()) + sc_biguint<7>(tmp_142_reg_57270.read()));
}

void ShuffleNetV2::thread_tmp_1460_cast_fu_43940_p1() {
    tmp_1460_cast_fu_43940_p1 = esl_zext<32,11>(tmp_1213_reg_61759.read());
}

void ShuffleNetV2::thread_tmp_1463_cast_fu_43904_p1() {
    tmp_1463_cast_fu_43904_p1 = esl_sext<32,13>(tmp_1216_reg_61764.read());
}

void ShuffleNetV2::thread_tmp_1469_cast_fu_44503_p1() {
    tmp_1469_cast_fu_44503_p1 = esl_sext<12,11>(tmp_1222_fu_44497_p2.read());
}

void ShuffleNetV2::thread_tmp_146_cast_cast_fu_34657_p1() {
    tmp_146_cast_cast_fu_34657_p1 = esl_sext<8,7>(tmp_109_fu_34651_p2.read());
}

void ShuffleNetV2::thread_tmp_146_fu_37356_p2() {
    tmp_146_fu_37356_p2 = (!p_shl124_cast_fu_37340_p1.read().is_01() || !p_shl125_cast_fu_37352_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl124_cast_fu_37340_p1.read()) - sc_biguint<7>(p_shl125_cast_fu_37352_p1.read()));
}

void ShuffleNetV2::thread_tmp_1472_cast_fu_44559_p1() {
    tmp_1472_cast_fu_44559_p1 = esl_sext<13,12>(tmp_1225_fu_44553_p2.read());
}

void ShuffleNetV2::thread_tmp_147_cast_fu_34695_p1() {
    tmp_147_cast_fu_34695_p1 = esl_sext<32,7>(tmp_110_reg_55411.read());
}

void ShuffleNetV2::thread_tmp_147_fu_37366_p2() {
    tmp_147_fu_37366_p2 = (!tmp_146_fu_37356_p2.read().is_01() || !co112_cast_reg_57129.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_146_fu_37356_p2.read()) + sc_biguint<7>(co112_cast_reg_57129.read()));
}

void ShuffleNetV2::thread_tmp_1480_cast_fu_44345_p1() {
    tmp_1480_cast_fu_44345_p1 = esl_sext<19,18>(tmp_1231_fu_44339_p2.read());
}

void ShuffleNetV2::thread_tmp_1481_cast_fu_44354_p1() {
    tmp_1481_cast_fu_44354_p1 = esl_sext<32,19>(tmp_1232_fu_44349_p2.read());
}

void ShuffleNetV2::thread_tmp_148_fu_37946_p2() {
    tmp_148_fu_37946_p2 = (!p_shl126_cast_fu_37930_p1.read().is_01() || !p_shl127_cast_fu_37942_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl126_cast_fu_37930_p1.read()) - sc_biguint<7>(p_shl127_cast_fu_37942_p1.read()));
}

void ShuffleNetV2::thread_tmp_1492_cast_fu_44670_p1() {
    tmp_1492_cast_fu_44670_p1 = esl_zext<32,14>(tmp_1241_fu_44665_p2.read());
}

void ShuffleNetV2::thread_tmp_1493_cast_fu_44680_p1() {
    tmp_1493_cast_fu_44680_p1 = esl_zext<32,13>(tmp_1242_reg_62449.read());
}

void ShuffleNetV2::thread_tmp_149_fu_37956_p2() {
    tmp_149_fu_37956_p2 = (!tmp_148_fu_37946_p2.read().is_01() || !i111_cast1_reg_57562.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_148_fu_37946_p2.read()) + sc_biguint<7>(i111_cast1_reg_57562.read()));
}

void ShuffleNetV2::thread_tmp_1501_cast_fu_44981_p1() {
    tmp_1501_cast_fu_44981_p1 = esl_sext<19,18>(tmp_1248_fu_44975_p2.read());
}

void ShuffleNetV2::thread_tmp_1502_cast_fu_44990_p1() {
    tmp_1502_cast_fu_44990_p1 = esl_sext<32,19>(tmp_1249_fu_44985_p2.read());
}

void ShuffleNetV2::thread_tmp_150_fu_37778_p2() {
    tmp_150_fu_37778_p2 = (!p_shl128_fu_37758_p3.read().is_01() || !p_shl129_cast_fu_37774_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl128_fu_37758_p3.read()) - sc_biguint<6>(p_shl129_cast_fu_37774_p1.read()));
}

void ShuffleNetV2::thread_tmp_1514_cast_fu_45338_p1() {
    tmp_1514_cast_fu_45338_p1 = esl_zext<32,11>(tmp_1259_reg_63110.read());
}

void ShuffleNetV2::thread_tmp_1517_cast_fu_45302_p1() {
    tmp_1517_cast_fu_45302_p1 = esl_sext<32,13>(tmp_1262_reg_63115.read());
}

void ShuffleNetV2::thread_tmp_151_cast_fu_34759_p1() {
    tmp_151_cast_fu_34759_p1 = esl_zext<6,4>(p_lshr_f8_cast_fu_34749_p4.read());
}

void ShuffleNetV2::thread_tmp_151_fu_37808_p2() {
    tmp_151_fu_37808_p2 = (!p_shl130_cast_fu_37792_p1.read().is_01() || !p_shl131_cast_fu_37804_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl130_cast_fu_37792_p1.read()) - sc_biguint<8>(p_shl131_cast_fu_37804_p1.read()));
}

void ShuffleNetV2::thread_tmp_1523_cast_fu_45909_p1() {
    tmp_1523_cast_fu_45909_p1 = esl_sext<12,11>(tmp_1268_fu_45903_p2.read());
}

void ShuffleNetV2::thread_tmp_152_cast_fu_34464_p1() {
    tmp_152_cast_fu_34464_p1 = esl_sext<9,7>(tmp_112_fu_34458_p2.read());
}

void ShuffleNetV2::thread_tmp_152_fu_38155_p2() {
    tmp_152_fu_38155_p2 = (!co117_cast_fu_38139_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co117_cast_fu_38139_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_1533_cast_fu_45751_p1() {
    tmp_1533_cast_fu_45751_p1 = esl_sext<19,18>(tmp_1276_fu_45745_p2.read());
}

void ShuffleNetV2::thread_tmp_1534_cast_fu_45760_p1() {
    tmp_1534_cast_fu_45760_p1 = esl_sext<32,19>(tmp_1277_fu_45755_p2.read());
}

void ShuffleNetV2::thread_tmp_1537_cast_fu_46032_p1() {
    tmp_1537_cast_fu_46032_p1 = esl_sext<12,11>(tmp_1280_fu_46026_p2.read());
}

void ShuffleNetV2::thread_tmp_153_cast_cast_fu_34473_p1() {
    tmp_153_cast_cast_fu_34473_p1 = esl_sext<10,7>(tmp_113_fu_34468_p2.read());
}

void ShuffleNetV2::thread_tmp_153_fu_38364_p2() {
    tmp_153_fu_38364_p2 = (!p_shl132_cast_fu_38348_p1.read().is_01() || !p_shl133_cast_fu_38360_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl132_cast_fu_38348_p1.read()) - sc_biguint<7>(p_shl133_cast_fu_38360_p1.read()));
}

void ShuffleNetV2::thread_tmp_153_t_fu_29941_p2() {
    tmp_153_t_fu_29941_p2 = (!tmp_75_cast_reg_52269.read().is_01() || !tmp_53_fu_29890_p2.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_75_cast_reg_52269.read()) + sc_biguint<6>(tmp_53_fu_29890_p2.read()));
}

void ShuffleNetV2::thread_tmp_1540_cast_fu_46088_p1() {
    tmp_1540_cast_fu_46088_p1 = esl_sext<13,12>(tmp_1283_fu_46082_p2.read());
}

void ShuffleNetV2::thread_tmp_154_fu_38404_p2() {
    tmp_154_fu_38404_p2 = (!ci60_cast_fu_38384_p1.read().is_01() || !tmp_153_reg_57710.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci60_cast_fu_38384_p1.read()) + sc_biguint<7>(tmp_153_reg_57710.read()));
}

void ShuffleNetV2::thread_tmp_1555_cast_fu_45997_p1() {
    tmp_1555_cast_fu_45997_p1 = esl_zext<32,14>(tmp_1296_fu_45992_p2.read());
}

void ShuffleNetV2::thread_tmp_1556_cast_fu_46199_p1() {
    tmp_1556_cast_fu_46199_p1 = esl_zext<32,14>(tmp_1297_fu_46194_p2.read());
}

void ShuffleNetV2::thread_tmp_1557_cast_fu_46209_p1() {
    tmp_1557_cast_fu_46209_p1 = esl_zext<32,13>(tmp_1298_reg_63844.read());
}

void ShuffleNetV2::thread_tmp_155_fu_38665_p2() {
    tmp_155_fu_38665_p2 = (!p_shl134_cast_fu_38649_p1.read().is_01() || !p_shl135_cast_fu_38661_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl134_cast_fu_38649_p1.read()) - sc_biguint<7>(p_shl135_cast_fu_38661_p1.read()));
}

void ShuffleNetV2::thread_tmp_1565_cast_fu_46510_p1() {
    tmp_1565_cast_fu_46510_p1 = esl_sext<20,19>(tmp_1304_fu_46504_p2.read());
}

void ShuffleNetV2::thread_tmp_1566_cast_fu_46519_p1() {
    tmp_1566_cast_fu_46519_p1 = esl_sext<32,20>(tmp_1305_fu_46514_p2.read());
}

void ShuffleNetV2::thread_tmp_156_cast_fu_35088_p1() {
    tmp_156_cast_fu_35088_p1 = esl_sext<32,7>(tmp_115_reg_55753.read());
}

void ShuffleNetV2::thread_tmp_156_fu_38675_p2() {
    tmp_156_fu_38675_p2 = (!tmp_155_fu_38665_p2.read().is_01() || !i116_cast1_reg_58002.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_155_fu_38665_p2.read()) + sc_biguint<7>(i116_cast1_reg_58002.read()));
}

void ShuffleNetV2::thread_tmp_1578_cast_fu_46879_p1() {
    tmp_1578_cast_fu_46879_p1 = esl_zext<32,11>(tmp_1315_reg_64505.read());
}

void ShuffleNetV2::thread_tmp_157_fu_38497_p2() {
    tmp_157_fu_38497_p2 = (!p_shl136_fu_38477_p3.read().is_01() || !p_shl137_cast_fu_38493_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl136_fu_38477_p3.read()) - sc_biguint<6>(p_shl137_cast_fu_38493_p1.read()));
}

void ShuffleNetV2::thread_tmp_1581_cast_fu_46834_p1() {
    tmp_1581_cast_fu_46834_p1 = esl_sext<14,13>(tmp_1318_fu_46828_p2.read());
}

void ShuffleNetV2::thread_tmp_1582_cast_fu_46843_p1() {
    tmp_1582_cast_fu_46843_p1 = esl_sext<32,14>(tmp_1319_reg_64510.read());
}

void ShuffleNetV2::thread_tmp_1588_cast_fu_47442_p1() {
    tmp_1588_cast_fu_47442_p1 = esl_sext<12,11>(tmp_1325_fu_47436_p2.read());
}

void ShuffleNetV2::thread_tmp_158_cast_fu_34788_p1() {
    tmp_158_cast_fu_34788_p1 = esl_sext<32,7>(tmp_111_fu_34783_p2.read());
}

void ShuffleNetV2::thread_tmp_158_fu_38527_p2() {
    tmp_158_fu_38527_p2 = (!p_shl138_cast_fu_38511_p1.read().is_01() || !p_shl139_cast_fu_38523_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl138_cast_fu_38511_p1.read()) - sc_biguint<8>(p_shl139_cast_fu_38523_p1.read()));
}

void ShuffleNetV2::thread_tmp_1596_cast_fu_47284_p1() {
    tmp_1596_cast_fu_47284_p1 = esl_sext<20,19>(tmp_1331_fu_47278_p2.read());
}

void ShuffleNetV2::thread_tmp_1597_cast_fu_47293_p1() {
    tmp_1597_cast_fu_47293_p1 = esl_sext<32,20>(tmp_1332_fu_47288_p2.read());
}

void ShuffleNetV2::thread_tmp_159_fu_39102_p2() {
    tmp_159_fu_39102_p2 = (!p_shl142_cast_fu_39086_p1.read().is_01() || !p_shl143_cast_fu_39098_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl142_cast_fu_39086_p1.read()) - sc_biguint<7>(p_shl143_cast_fu_39098_p1.read()));
}

void ShuffleNetV2::thread_tmp_1600_cast_fu_47565_p1() {
    tmp_1600_cast_fu_47565_p1 = esl_sext<12,11>(tmp_1335_fu_47559_p2.read());
}

void ShuffleNetV2::thread_tmp_1603_cast_fu_47621_p1() {
    tmp_1603_cast_fu_47621_p1 = esl_sext<13,12>(tmp_1338_fu_47615_p2.read());
}

void ShuffleNetV2::thread_tmp_160_fu_39014_p2() {
    tmp_160_fu_39014_p2 = (!p_shl140_cast_fu_38998_p1.read().is_01() || !p_shl141_cast_fu_39010_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl140_cast_fu_38998_p1.read()) - sc_biguint<7>(p_shl141_cast_fu_39010_p1.read()));
}

void ShuffleNetV2::thread_tmp_1618_cast_fu_47530_p1() {
    tmp_1618_cast_fu_47530_p1 = esl_zext<32,14>(tmp_1351_fu_47525_p2.read());
}

void ShuffleNetV2::thread_tmp_1619_cast_fu_47732_p1() {
    tmp_1619_cast_fu_47732_p1 = esl_zext<32,14>(tmp_1352_fu_47727_p2.read());
}

void ShuffleNetV2::thread_tmp_161_cast_fu_34912_p1() {
    tmp_161_cast_fu_34912_p1 = esl_sext<11,8>(tmp_117_fu_34906_p2.read());
}

void ShuffleNetV2::thread_tmp_161_fu_39024_p2() {
    tmp_161_fu_39024_p2 = (!tmp_160_fu_39014_p2.read().is_01() || !i119_cast1_reg_58135.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_160_fu_39014_p2.read()) + sc_biguint<7>(i119_cast1_reg_58135.read()));
}

void ShuffleNetV2::thread_tmp_1620_cast_fu_47742_p1() {
    tmp_1620_cast_fu_47742_p1 = esl_zext<32,13>(tmp_1353_reg_65239.read());
}

void ShuffleNetV2::thread_tmp_1628_cast_fu_48043_p1() {
    tmp_1628_cast_fu_48043_p1 = esl_sext<20,19>(tmp_1359_fu_48037_p2.read());
}

void ShuffleNetV2::thread_tmp_1629_cast_fu_48052_p1() {
    tmp_1629_cast_fu_48052_p1 = esl_sext<32,20>(tmp_1360_fu_48047_p2.read());
}

void ShuffleNetV2::thread_tmp_162_fu_39142_p2() {
    tmp_162_fu_39142_p2 = (!ci62_cast_fu_39122_p1.read().is_01() || !tmp_159_reg_58185.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci62_cast_fu_39122_p1.read()) + sc_biguint<7>(tmp_159_reg_58185.read()));
}

void ShuffleNetV2::thread_tmp_163_fu_38809_p2() {
    tmp_163_fu_38809_p2 = (!p_shl144_cast_fu_38793_p1.read().is_01() || !p_shl145_cast_fu_38805_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl144_cast_fu_38793_p1.read()) - sc_biguint<7>(p_shl145_cast_fu_38805_p1.read()));
}

void ShuffleNetV2::thread_tmp_1641_cast_fu_48404_p1() {
    tmp_1641_cast_fu_48404_p1 = esl_zext<32,11>(tmp_1370_reg_65900.read());
}

void ShuffleNetV2::thread_tmp_1643_cast_fu_48359_p1() {
    tmp_1643_cast_fu_48359_p1 = esl_sext<15,14>(tmp_1372_fu_48353_p2.read());
}

void ShuffleNetV2::thread_tmp_1644_cast_fu_48368_p1() {
    tmp_1644_cast_fu_48368_p1 = esl_sext<32,15>(tmp_1373_reg_65905.read());
}

void ShuffleNetV2::thread_tmp_164_fu_38819_p2() {
    tmp_164_fu_38819_p2 = (!tmp_163_fu_38809_p2.read().is_01() || !co122_cast_reg_58044.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_163_fu_38809_p2.read()) + sc_biguint<7>(co122_cast_reg_58044.read()));
}

void ShuffleNetV2::thread_tmp_1650_cast_fu_48967_p1() {
    tmp_1650_cast_fu_48967_p1 = esl_sext<12,11>(tmp_1379_fu_48961_p2.read());
}

void ShuffleNetV2::thread_tmp_1658_cast_fu_48809_p1() {
    tmp_1658_cast_fu_48809_p1 = esl_sext<20,19>(tmp_1385_fu_48803_p2.read());
}

void ShuffleNetV2::thread_tmp_1659_cast_fu_48818_p1() {
    tmp_1659_cast_fu_48818_p1 = esl_sext<32,20>(tmp_1386_fu_48813_p2.read());
}

void ShuffleNetV2::thread_tmp_165_fu_39403_p2() {
    tmp_165_fu_39403_p2 = (!p_shl146_cast_fu_39387_p1.read().is_01() || !p_shl147_cast_fu_39399_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl146_cast_fu_39387_p1.read()) - sc_biguint<7>(p_shl147_cast_fu_39399_p1.read()));
}

void ShuffleNetV2::thread_tmp_1661_cast_fu_49068_p1() {
    tmp_1661_cast_fu_49068_p1 = esl_zext<11,10>(tmp_1387_fu_49060_p3.read());
}

void ShuffleNetV2::thread_tmp_1664_cast_fu_49102_p1() {
    tmp_1664_cast_fu_49102_p1 = esl_sext<13,12>(tmp_1390_fu_49096_p2.read());
}

void ShuffleNetV2::thread_tmp_166_cast_fu_35482_p1() {
    tmp_166_cast_fu_35482_p1 = esl_zext<6,4>(p_lshr_f9_cast_fu_35472_p4.read());
}

void ShuffleNetV2::thread_tmp_166_fu_39413_p2() {
    tmp_166_fu_39413_p2 = (!tmp_165_fu_39403_p2.read().is_01() || !i123_cast1_reg_58477.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_165_fu_39403_p2.read()) + sc_biguint<7>(i123_cast1_reg_58477.read()));
}

void ShuffleNetV2::thread_tmp_1671_cast_fu_49127_p3() {
    tmp_1671_cast_fu_49127_p3 = esl_concat<11,2>(tmp_1395_fu_49122_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1673_cast_fu_49260_p1() {
    tmp_1673_cast_fu_49260_p1 = esl_zext<10,9>(tmp_1397_fu_49252_p3.read());
}

void ShuffleNetV2::thread_tmp_1678_cast_fu_49055_p1() {
    tmp_1678_cast_fu_49055_p1 = esl_zext<32,14>(tmp_1401_fu_49050_p2.read());
}

void ShuffleNetV2::thread_tmp_167_cast_fu_35773_p1() {
    tmp_167_cast_fu_35773_p1 = esl_sext<11,7>(tmp_121_fu_35767_p2.read());
}

void ShuffleNetV2::thread_tmp_167_fu_39235_p2() {
    tmp_167_fu_39235_p2 = (!p_shl148_fu_39215_p3.read().is_01() || !p_shl149_cast_fu_39231_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl148_fu_39215_p3.read()) - sc_biguint<6>(p_shl149_cast_fu_39231_p1.read()));
}

void ShuffleNetV2::thread_tmp_1681_cast_fu_49273_p3() {
    tmp_1681_cast_fu_49273_p3 = esl_concat<10,2>(tmp_1402_fu_49268_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1682_cast_fu_49191_p1() {
    tmp_1682_cast_fu_49191_p1 = esl_zext<32,13>(tmp_1403_fu_49186_p2.read());
}

void ShuffleNetV2::thread_tmp_1684_cast_fu_49217_p1() {
    tmp_1684_cast_fu_49217_p1 = esl_zext<32,14>(tmp_1406_fu_49212_p2.read());
}

void ShuffleNetV2::thread_tmp_1685_cast_fu_49322_p1() {
    tmp_1685_cast_fu_49322_p1 = esl_zext<32,12>(tmp_1407_fu_49317_p2.read());
}

void ShuffleNetV2::thread_tmp_168_cast_fu_35807_p1() {
    tmp_168_cast_fu_35807_p1 = esl_sext<32,7>(tmp_122_reg_56193.read());
}

void ShuffleNetV2::thread_tmp_168_fu_39265_p2() {
    tmp_168_fu_39265_p2 = (!p_shl150_cast_fu_39249_p1.read().is_01() || !p_shl151_cast_fu_39261_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl150_cast_fu_39249_p1.read()) - sc_biguint<8>(p_shl151_cast_fu_39261_p1.read()));
}

void ShuffleNetV2::thread_tmp_169_fu_39612_p2() {
    tmp_169_fu_39612_p2 = (!co127_cast_fu_39596_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co127_cast_fu_39596_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_170_cast_fu_35511_p1() {
    tmp_170_cast_fu_35511_p1 = esl_sext<32,7>(tmp_120_fu_35506_p2.read());
}

void ShuffleNetV2::thread_tmp_170_fu_39821_p2() {
    tmp_170_fu_39821_p2 = (!p_shl152_cast_fu_39805_p1.read().is_01() || !p_shl153_cast_fu_39817_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl152_cast_fu_39805_p1.read()) - sc_biguint<7>(p_shl153_cast_fu_39817_p1.read()));
}

void ShuffleNetV2::thread_tmp_171_fu_39861_p2() {
    tmp_171_fu_39861_p2 = (!ci64_cast_fu_39841_p1.read().is_01() || !tmp_170_reg_58625.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci64_cast_fu_39841_p1.read()) + sc_biguint<7>(tmp_170_reg_58625.read()));
}

void ShuffleNetV2::thread_tmp_172_fu_40130_p2() {
    tmp_172_fu_40130_p2 = (!p_shl154_cast_fu_40114_p1.read().is_01() || !p_shl155_cast_fu_40126_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl154_cast_fu_40114_p1.read()) - sc_biguint<7>(p_shl155_cast_fu_40126_p1.read()));
}

void ShuffleNetV2::thread_tmp_173_cast_fu_35635_p1() {
    tmp_173_cast_fu_35635_p1 = esl_sext<11,8>(tmp_124_fu_35629_p2.read());
}

void ShuffleNetV2::thread_tmp_173_fu_40140_p2() {
    tmp_173_fu_40140_p2 = (!tmp_172_fu_40130_p2.read().is_01() || !i128_cast1_reg_58917.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_172_fu_40130_p2.read()) + sc_biguint<7>(i128_cast1_reg_58917.read()));
}

void ShuffleNetV2::thread_tmp_174_fu_39954_p2() {
    tmp_174_fu_39954_p2 = (!p_shl156_fu_39934_p3.read().is_01() || !p_shl157_cast_fu_39950_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl156_fu_39934_p3.read()) - sc_biguint<6>(p_shl157_cast_fu_39950_p1.read()));
}

void ShuffleNetV2::thread_tmp_175_cast_fu_36110_p1() {
    tmp_175_cast_fu_36110_p1 = esl_sext<11,7>(tmp_126_fu_36104_p2.read());
}

void ShuffleNetV2::thread_tmp_175_fu_39984_p2() {
    tmp_175_fu_39984_p2 = (!p_shl158_cast_fu_39968_p1.read().is_01() || !p_shl159_cast_fu_39980_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl158_cast_fu_39968_p1.read()) - sc_biguint<8>(p_shl159_cast_fu_39980_p1.read()));
}

void ShuffleNetV2::thread_tmp_175_t_fu_30675_p2() {
    tmp_175_t_fu_30675_p2 = (!tmp_77_cast_reg_52744.read().is_01() || !tmp_66_fu_30620_p2.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_77_cast_reg_52744.read()) + sc_biguint<6>(tmp_66_fu_30620_p2.read()));
}

void ShuffleNetV2::thread_tmp_176_cast_fu_36144_p1() {
    tmp_176_cast_fu_36144_p1 = esl_sext<32,7>(tmp_127_reg_56326.read());
}

void ShuffleNetV2::thread_tmp_176_fu_40559_p2() {
    tmp_176_fu_40559_p2 = (!p_shl162_cast_fu_40543_p1.read().is_01() || !p_shl163_cast_fu_40555_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl162_cast_fu_40543_p1.read()) - sc_biguint<7>(p_shl163_cast_fu_40555_p1.read()));
}

void ShuffleNetV2::thread_tmp_177_fu_40471_p2() {
    tmp_177_fu_40471_p2 = (!p_shl160_cast_fu_40455_p1.read().is_01() || !p_shl161_cast_fu_40467_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl160_cast_fu_40455_p1.read()) - sc_biguint<7>(p_shl161_cast_fu_40467_p1.read()));
}

void ShuffleNetV2::thread_tmp_178_fu_40481_p2() {
    tmp_178_fu_40481_p2 = (!tmp_177_fu_40471_p2.read().is_01() || !i131_cast1_reg_59050.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_177_fu_40471_p2.read()) + sc_biguint<7>(i131_cast1_reg_59050.read()));
}

void ShuffleNetV2::thread_tmp_179_fu_40599_p2() {
    tmp_179_fu_40599_p2 = (!ci66_cast_fu_40579_p1.read().is_01() || !tmp_176_reg_59100.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci66_cast_fu_40579_p1.read()) + sc_biguint<7>(tmp_176_reg_59100.read()));
}

void ShuffleNetV2::thread_tmp_180_cast_fu_36208_p1() {
    tmp_180_cast_fu_36208_p1 = esl_zext<6,4>(p_lshr_f10_cast_fu_36198_p4.read());
}

void ShuffleNetV2::thread_tmp_180_fu_40274_p2() {
    tmp_180_fu_40274_p2 = (!p_shl164_cast_fu_40258_p1.read().is_01() || !p_shl165_cast_fu_40270_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl164_cast_fu_40258_p1.read()) - sc_biguint<7>(p_shl165_cast_fu_40270_p1.read()));
}

void ShuffleNetV2::thread_tmp_181_cast_fu_35917_p1() {
    tmp_181_cast_fu_35917_p1 = esl_sext<9,7>(tmp_129_fu_35911_p2.read());
}

void ShuffleNetV2::thread_tmp_181_fu_40284_p2() {
    tmp_181_fu_40284_p2 = (!co132_cast1_reg_58959.read().is_01() || !tmp_180_fu_40274_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co132_cast1_reg_58959.read()) + sc_biguint<7>(tmp_180_fu_40274_p2.read()));
}

void ShuffleNetV2::thread_tmp_182_cast_cast_fu_35926_p1() {
    tmp_182_cast_cast_fu_35926_p1 = esl_sext<10,7>(tmp_130_fu_35921_p2.read());
}

void ShuffleNetV2::thread_tmp_182_fu_40868_p2() {
    tmp_182_fu_40868_p2 = (!p_shl166_cast_fu_40852_p1.read().is_01() || !p_shl167_cast_fu_40864_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl166_cast_fu_40852_p1.read()) - sc_biguint<7>(p_shl167_cast_fu_40864_p1.read()));
}

void ShuffleNetV2::thread_tmp_183_fu_40878_p2() {
    tmp_183_fu_40878_p2 = (!tmp_182_fu_40868_p2.read().is_01() || !i135_cast_reg_59392.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_182_fu_40868_p2.read()) + sc_biguint<7>(i135_cast_reg_59392.read()));
}

void ShuffleNetV2::thread_tmp_184_cast_fu_36499_p1() {
    tmp_184_cast_fu_36499_p1 = esl_sext<11,7>(tmp_131_fu_36493_p2.read());
}

void ShuffleNetV2::thread_tmp_184_fu_40692_p2() {
    tmp_184_fu_40692_p2 = (!p_shl168_fu_40672_p3.read().is_01() || !p_shl169_cast_fu_40688_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl168_fu_40672_p3.read()) - sc_biguint<6>(p_shl169_cast_fu_40688_p1.read()));
}

void ShuffleNetV2::thread_tmp_185_cast_fu_36533_p1() {
    tmp_185_cast_fu_36533_p1 = esl_sext<32,7>(tmp_132_reg_56668.read());
}

void ShuffleNetV2::thread_tmp_185_fu_40722_p2() {
    tmp_185_fu_40722_p2 = (!p_shl170_cast_fu_40706_p1.read().is_01() || !p_shl171_cast_fu_40718_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl170_cast_fu_40706_p1.read()) - sc_biguint<8>(p_shl171_cast_fu_40718_p1.read()));
}

void ShuffleNetV2::thread_tmp_186_fu_41081_p2() {
    tmp_186_fu_41081_p2 = (!co137_cast_fu_41065_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co137_cast_fu_41065_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_187_cast_fu_36237_p1() {
    tmp_187_cast_fu_36237_p1 = esl_sext<32,7>(tmp_128_fu_36232_p2.read());
}

void ShuffleNetV2::thread_tmp_187_fu_41290_p2() {
    tmp_187_fu_41290_p2 = (!p_shl172_cast_fu_41274_p1.read().is_01() || !p_shl173_cast_fu_41286_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl172_cast_fu_41274_p1.read()) - sc_biguint<7>(p_shl173_cast_fu_41286_p1.read()));
}

void ShuffleNetV2::thread_tmp_188_fu_41330_p2() {
    tmp_188_fu_41330_p2 = (!ci68_cast_fu_41310_p1.read().is_01() || !tmp_187_reg_59540.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci68_cast_fu_41310_p1.read()) + sc_biguint<7>(tmp_187_reg_59540.read()));
}

void ShuffleNetV2::thread_tmp_188_t_fu_31275_p2() {
    tmp_188_t_fu_31275_p2 = (!tmp_78_cast_reg_53140.read().is_01() || !tmp_72_fu_31224_p2.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_78_cast_reg_53140.read()) + sc_biguint<6>(tmp_72_fu_31224_p2.read()));
}

void ShuffleNetV2::thread_tmp_189_fu_41599_p2() {
    tmp_189_fu_41599_p2 = (!p_shl174_cast_fu_41583_p1.read().is_01() || !p_shl175_cast_fu_41595_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl174_cast_fu_41583_p1.read()) - sc_biguint<7>(p_shl175_cast_fu_41595_p1.read()));
}

void ShuffleNetV2::thread_tmp_190_cast_fu_36361_p1() {
    tmp_190_cast_fu_36361_p1 = esl_sext<11,8>(tmp_134_fu_36355_p2.read());
}

void ShuffleNetV2::thread_tmp_190_fu_41609_p2() {
    tmp_190_fu_41609_p2 = (!tmp_189_fu_41599_p2.read().is_01() || !i140_cast_reg_59832.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_189_fu_41599_p2.read()) + sc_biguint<7>(i140_cast_reg_59832.read()));
}

void ShuffleNetV2::thread_tmp_191_fu_41423_p2() {
    tmp_191_fu_41423_p2 = (!p_shl176_fu_41403_p3.read().is_01() || !p_shl177_cast_fu_41419_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl176_fu_41403_p3.read()) - sc_biguint<6>(p_shl177_cast_fu_41419_p1.read()));
}

void ShuffleNetV2::thread_tmp_192_fu_41453_p2() {
    tmp_192_fu_41453_p2 = (!p_shl178_cast_fu_41437_p1.read().is_01() || !p_shl179_cast_fu_41449_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl178_cast_fu_41437_p1.read()) - sc_biguint<8>(p_shl179_cast_fu_41449_p1.read()));
}

void ShuffleNetV2::thread_tmp_193_fu_42032_p2() {
    tmp_193_fu_42032_p2 = (!p_shl182_cast_fu_42016_p1.read().is_01() || !p_shl183_cast_fu_42028_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl182_cast_fu_42016_p1.read()) - sc_biguint<7>(p_shl183_cast_fu_42028_p1.read()));
}

void ShuffleNetV2::thread_tmp_194_fu_41940_p2() {
    tmp_194_fu_41940_p2 = (!p_shl180_cast_fu_41924_p1.read().is_01() || !p_shl181_cast_fu_41936_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl180_cast_fu_41924_p1.read()) - sc_biguint<7>(p_shl181_cast_fu_41936_p1.read()));
}

void ShuffleNetV2::thread_tmp_195_cast_fu_36927_p1() {
    tmp_195_cast_fu_36927_p1 = esl_zext<6,4>(p_lshr_f11_cast_fu_36917_p4.read());
}

void ShuffleNetV2::thread_tmp_195_fu_41950_p2() {
    tmp_195_fu_41950_p2 = (!tmp_194_fu_41940_p2.read().is_01() || !i143_cast_reg_59965.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_194_fu_41940_p2.read()) + sc_biguint<7>(i143_cast_reg_59965.read()));
}

void ShuffleNetV2::thread_tmp_196_cast_fu_37218_p1() {
    tmp_196_cast_fu_37218_p1 = esl_sext<11,7>(tmp_138_fu_37212_p2.read());
}

void ShuffleNetV2::thread_tmp_196_fu_42072_p2() {
    tmp_196_fu_42072_p2 = (!ci70_cast_fu_42052_p1.read().is_01() || !tmp_193_reg_60015.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci70_cast_fu_42052_p1.read()) + sc_biguint<7>(tmp_193_reg_60015.read()));
}

void ShuffleNetV2::thread_tmp_197_cast_fu_37252_p1() {
    tmp_197_cast_fu_37252_p1 = esl_sext<32,7>(tmp_139_reg_57108.read());
}

void ShuffleNetV2::thread_tmp_197_fu_41747_p2() {
    tmp_197_fu_41747_p2 = (!p_shl184_cast_fu_41731_p1.read().is_01() || !p_shl185_cast_fu_41743_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl184_cast_fu_41731_p1.read()) - sc_biguint<7>(p_shl185_cast_fu_41743_p1.read()));
}

void ShuffleNetV2::thread_tmp_198_fu_41757_p2() {
    tmp_198_fu_41757_p2 = (!co142_cast1_reg_59874.read().is_01() || !tmp_197_fu_41747_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co142_cast1_reg_59874.read()) + sc_biguint<7>(tmp_197_fu_41747_p2.read()));
}

void ShuffleNetV2::thread_tmp_199_cast_fu_36956_p1() {
    tmp_199_cast_fu_36956_p1 = esl_sext<32,7>(tmp_137_fu_36951_p2.read());
}

void ShuffleNetV2::thread_tmp_199_fu_42341_p2() {
    tmp_199_fu_42341_p2 = (!p_shl186_cast_fu_42325_p1.read().is_01() || !p_shl187_cast_fu_42337_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl186_cast_fu_42325_p1.read()) - sc_biguint<7>(p_shl187_cast_fu_42337_p1.read()));
}

void ShuffleNetV2::thread_tmp_200_fu_42351_p2() {
    tmp_200_fu_42351_p2 = (!tmp_199_fu_42341_p2.read().is_01() || !i147_cast_reg_60307.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_199_fu_42341_p2.read()) + sc_biguint<7>(i147_cast_reg_60307.read()));
}

void ShuffleNetV2::thread_tmp_201_fu_42165_p2() {
    tmp_201_fu_42165_p2 = (!p_shl188_fu_42145_p3.read().is_01() || !p_shl189_cast_fu_42161_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl188_fu_42145_p3.read()) - sc_biguint<6>(p_shl189_cast_fu_42161_p1.read()));
}

void ShuffleNetV2::thread_tmp_202_cast_fu_37080_p1() {
    tmp_202_cast_fu_37080_p1 = esl_sext<11,8>(tmp_141_fu_37074_p2.read());
}

void ShuffleNetV2::thread_tmp_202_fu_42195_p2() {
    tmp_202_fu_42195_p2 = (!p_shl190_cast_fu_42179_p1.read().is_01() || !p_shl191_cast_fu_42191_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl190_cast_fu_42179_p1.read()) - sc_biguint<8>(p_shl191_cast_fu_42191_p1.read()));
}

void ShuffleNetV2::thread_tmp_203_fu_42550_p2() {
    tmp_203_fu_42550_p2 = (!p_shl192_cast_fu_42536_p1.read().is_01() || !p_shl193_cast_fu_42546_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl192_cast_fu_42536_p1.read()) - sc_biguint<8>(p_shl193_cast_fu_42546_p1.read()));
}

void ShuffleNetV2::thread_tmp_204_cast_fu_37563_p1() {
    tmp_204_cast_fu_37563_p1 = esl_sext<11,7>(tmp_143_fu_37557_p2.read());
}

void ShuffleNetV2::thread_tmp_204_fu_42566_p1() {
    tmp_204_fu_42566_p1 = esl_zext<7,3>(p_lshr_f19_cast_fu_42556_p4.read());
}

void ShuffleNetV2::thread_tmp_205_cast_fu_37597_p1() {
    tmp_205_cast_fu_37597_p1 = esl_sext<32,7>(tmp_144_reg_57241.read());
}

void ShuffleNetV2::thread_tmp_205_fu_42590_p2() {
    tmp_205_fu_42590_p2 = (!ci72_cast_fu_42570_p1.read().is_01() || !tmp_203_reg_60401.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ci72_cast_fu_42570_p1.read()) + sc_biguint<8>(tmp_203_reg_60401.read()));
}

void ShuffleNetV2::thread_tmp_206_fu_42889_p2() {
    tmp_206_fu_42889_p2 = (!p_shl194_cast_fu_42873_p1.read().is_01() || !p_shl195_cast_fu_42885_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl194_cast_fu_42873_p1.read()) - sc_biguint<8>(p_shl195_cast_fu_42885_p1.read()));
}

void ShuffleNetV2::thread_tmp_207_fu_42899_p2() {
    tmp_207_fu_42899_p2 = (!tmp_206_fu_42889_p2.read().is_01() || !i152_cast_reg_60933.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_206_fu_42889_p2.read()) + sc_biguint<8>(i152_cast_reg_60933.read()));
}

void ShuffleNetV2::thread_tmp_208_fu_42733_p2() {
    tmp_208_fu_42733_p2 = (!p_shl196_fu_42711_p3.read().is_01() || !p_shl197_cast_fu_42729_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl196_fu_42711_p3.read()) - sc_biguint<7>(p_shl197_cast_fu_42729_p1.read()));
}

void ShuffleNetV2::thread_tmp_209_cast_fu_37661_p1() {
    tmp_209_cast_fu_37661_p1 = esl_zext<6,4>(p_lshr_f12_cast_fu_37651_p4.read());
}

void ShuffleNetV2::thread_tmp_209_fu_42751_p2() {
    tmp_209_fu_42751_p2 = (!p_shl198_cast_fu_42747_p1.read().is_01() || !p_shl196_cast_fu_42719_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl198_cast_fu_42747_p1.read()) - sc_biguint<10>(p_shl196_cast_fu_42719_p1.read()));
}

void ShuffleNetV2::thread_tmp_209_t_fu_32009_p2() {
    tmp_209_t_fu_32009_p2 = (!tmp_93_cast_reg_53615.read().is_01() || !tmp_82_fu_31958_p2.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_93_cast_reg_53615.read()) + sc_biguint<6>(tmp_82_fu_31958_p2.read()));
}

void ShuffleNetV2::thread_tmp_210_cast_cast_fu_37362_p1() {
    tmp_210_cast_cast_fu_37362_p1 = esl_sext<8,7>(tmp_146_fu_37356_p2.read());
}

void ShuffleNetV2::thread_tmp_210_fu_43320_p2() {
    tmp_210_fu_43320_p2 = (!p_shl201_cast_fu_43306_p1.read().is_01() || !p_shl202_cast_fu_43316_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl201_cast_fu_43306_p1.read()) - sc_biguint<8>(p_shl202_cast_fu_43316_p1.read()));
}

void ShuffleNetV2::thread_tmp_211_cast_cast_fu_37371_p1() {
    tmp_211_cast_cast_fu_37371_p1 = esl_sext<10,7>(tmp_147_fu_37366_p2.read());
}

void ShuffleNetV2::thread_tmp_211_fu_43336_p1() {
    tmp_211_fu_43336_p1 = esl_zext<7,3>(p_lshr_f20_cast_fu_43326_p4.read());
}

void ShuffleNetV2::thread_tmp_212_fu_43230_p2() {
    tmp_212_fu_43230_p2 = (!p_shl199_cast_fu_43214_p1.read().is_01() || !p_shl200_cast_fu_43226_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl199_cast_fu_43214_p1.read()) - sc_biguint<8>(p_shl200_cast_fu_43226_p1.read()));
}

void ShuffleNetV2::thread_tmp_213_cast_fu_37952_p1() {
    tmp_213_cast_fu_37952_p1 = esl_sext<11,7>(tmp_148_fu_37946_p2.read());
}

void ShuffleNetV2::thread_tmp_213_fu_43240_p2() {
    tmp_213_fu_43240_p2 = (!tmp_212_fu_43230_p2.read().is_01() || !i155_cast_reg_61066.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_212_fu_43230_p2.read()) + sc_biguint<8>(i155_cast_reg_61066.read()));
}

void ShuffleNetV2::thread_tmp_214_cast_fu_37986_p1() {
    tmp_214_cast_fu_37986_p1 = esl_sext<32,7>(tmp_149_reg_57583.read());
}

void ShuffleNetV2::thread_tmp_214_fu_43360_p2() {
    tmp_214_fu_43360_p2 = (!ci74_cast_fu_43340_p1.read().is_01() || !tmp_210_reg_61116.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ci74_cast_fu_43340_p1.read()) + sc_biguint<8>(tmp_210_reg_61116.read()));
}

void ShuffleNetV2::thread_tmp_215_fu_43037_p2() {
    tmp_215_fu_43037_p2 = (!p_shl203_cast_fu_43021_p1.read().is_01() || !p_shl204_cast_fu_43033_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl203_cast_fu_43021_p1.read()) - sc_biguint<8>(p_shl204_cast_fu_43033_p1.read()));
}

void ShuffleNetV2::thread_tmp_216_cast_fu_37690_p1() {
    tmp_216_cast_fu_37690_p1 = esl_sext<32,7>(tmp_145_fu_37685_p2.read());
}

void ShuffleNetV2::thread_tmp_216_fu_43047_p2() {
    tmp_216_fu_43047_p2 = (!co150_cast1_reg_60975.read().is_01() || !tmp_215_fu_43037_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co150_cast1_reg_60975.read()) + sc_biguint<8>(tmp_215_fu_43037_p2.read()));
}

void ShuffleNetV2::thread_tmp_217_fu_43659_p2() {
    tmp_217_fu_43659_p2 = (!p_shl205_cast_fu_43643_p1.read().is_01() || !p_shl206_cast_fu_43655_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl205_cast_fu_43643_p1.read()) - sc_biguint<8>(p_shl206_cast_fu_43655_p1.read()));
}

void ShuffleNetV2::thread_tmp_218_fu_43669_p2() {
    tmp_218_fu_43669_p2 = (!tmp_217_fu_43659_p2.read().is_01() || !i159_cast1_reg_61648.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_217_fu_43659_p2.read()) + sc_biguint<8>(i159_cast1_reg_61648.read()));
}

void ShuffleNetV2::thread_tmp_219_cast_fu_37814_p1() {
    tmp_219_cast_fu_37814_p1 = esl_sext<11,8>(tmp_151_fu_37808_p2.read());
}

void ShuffleNetV2::thread_tmp_219_fu_43503_p2() {
    tmp_219_fu_43503_p2 = (!p_shl207_fu_43481_p3.read().is_01() || !p_shl208_cast_fu_43499_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl207_fu_43481_p3.read()) - sc_biguint<7>(p_shl208_cast_fu_43499_p1.read()));
}

void ShuffleNetV2::thread_tmp_220_fu_43521_p2() {
    tmp_220_fu_43521_p2 = (!p_shl209_cast_fu_43517_p1.read().is_01() || !p_shl207_cast_fu_43489_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl209_cast_fu_43517_p1.read()) - sc_biguint<10>(p_shl207_cast_fu_43489_p1.read()));
}

void ShuffleNetV2::thread_tmp_221_fu_44090_p2() {
    tmp_221_fu_44090_p2 = (!p_shl212_cast_fu_44076_p1.read().is_01() || !p_shl213_cast_fu_44086_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl212_cast_fu_44076_p1.read()) - sc_biguint<8>(p_shl213_cast_fu_44086_p1.read()));
}

void ShuffleNetV2::thread_tmp_222_fu_44106_p1() {
    tmp_222_fu_44106_p1 = esl_zext<7,3>(p_lshr_f21_cast_fu_44096_p4.read());
}

void ShuffleNetV2::thread_tmp_223_fu_44004_p2() {
    tmp_223_fu_44004_p2 = (!p_shl210_cast_fu_43988_p1.read().is_01() || !p_shl211_cast_fu_44000_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl210_cast_fu_43988_p1.read()) - sc_biguint<8>(p_shl211_cast_fu_44000_p1.read()));
}

void ShuffleNetV2::thread_tmp_223_t_fu_32728_p2() {
    tmp_223_t_fu_32728_p2 = (!tmp_108_cast_reg_54055.read().is_01() || !tmp_89_fu_32677_p2.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_108_cast_reg_54055.read()) + sc_biguint<6>(tmp_89_fu_32677_p2.read()));
}

void ShuffleNetV2::thread_tmp_224_cast_fu_38380_p1() {
    tmp_224_cast_fu_38380_p1 = esl_zext<6,4>(p_lshr_f13_cast_fu_38370_p4.read());
}

void ShuffleNetV2::thread_tmp_224_fu_44014_p2() {
    tmp_224_fu_44014_p2 = (!tmp_223_fu_44004_p2.read().is_01() || !i163_cast1_reg_61781.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_223_fu_44004_p2.read()) + sc_biguint<8>(i163_cast1_reg_61781.read()));
}

void ShuffleNetV2::thread_tmp_225_cast_fu_38671_p1() {
    tmp_225_cast_fu_38671_p1 = esl_sext<11,7>(tmp_155_fu_38665_p2.read());
}

void ShuffleNetV2::thread_tmp_225_fu_44130_p2() {
    tmp_225_fu_44130_p2 = (!ci76_cast_fu_44110_p1.read().is_01() || !tmp_221_reg_61831.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ci76_cast_fu_44110_p1.read()) + sc_biguint<8>(tmp_221_reg_61831.read()));
}

void ShuffleNetV2::thread_tmp_226_cast_fu_38705_p1() {
    tmp_226_cast_fu_38705_p1 = esl_sext<32,7>(tmp_156_reg_58023.read());
}

void ShuffleNetV2::thread_tmp_226_fu_43811_p2() {
    tmp_226_fu_43811_p2 = (!p_shl214_cast_fu_43795_p1.read().is_01() || !p_shl215_cast_fu_43807_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl214_cast_fu_43795_p1.read()) - sc_biguint<8>(p_shl215_cast_fu_43807_p1.read()));
}

void ShuffleNetV2::thread_tmp_227_fu_43821_p2() {
    tmp_227_fu_43821_p2 = (!co154_cast1_reg_61690.read().is_01() || !tmp_226_fu_43811_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co154_cast1_reg_61690.read()) + sc_biguint<8>(tmp_226_fu_43811_p2.read()));
}

void ShuffleNetV2::thread_tmp_228_cast_fu_38409_p1() {
    tmp_228_cast_fu_38409_p1 = esl_sext<32,7>(tmp_154_fu_38404_p2.read());
}

void ShuffleNetV2::thread_tmp_228_fu_44523_p2() {
    tmp_228_fu_44523_p2 = (!co158_cast_fu_44507_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co158_cast_fu_44507_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_229_fu_44429_p2() {
    tmp_229_fu_44429_p2 = (!p_shl216_cast_fu_44413_p1.read().is_01() || !p_shl217_cast_fu_44425_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl216_cast_fu_44413_p1.read()) - sc_biguint<8>(p_shl217_cast_fu_44425_p1.read()));
}

void ShuffleNetV2::thread_tmp_230_fu_44439_p2() {
    tmp_230_fu_44439_p2 = (!tmp_229_fu_44429_p2.read().is_01() || !i167_cast1_reg_62363.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_229_fu_44429_p2.read()) + sc_biguint<8>(i167_cast1_reg_62363.read()));
}

void ShuffleNetV2::thread_tmp_231_cast_fu_38533_p1() {
    tmp_231_cast_fu_38533_p1 = esl_sext<11,8>(tmp_158_fu_38527_p2.read());
}

void ShuffleNetV2::thread_tmp_231_fu_44273_p2() {
    tmp_231_fu_44273_p2 = (!p_shl220_fu_44251_p3.read().is_01() || !p_shl221_cast_fu_44269_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl220_fu_44251_p3.read()) - sc_biguint<7>(p_shl221_cast_fu_44269_p1.read()));
}

void ShuffleNetV2::thread_tmp_232_fu_44291_p2() {
    tmp_232_fu_44291_p2 = (!p_shl222_cast_fu_44287_p1.read().is_01() || !p_shl220_cast_fu_44259_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl222_cast_fu_44287_p1.read()) - sc_biguint<10>(p_shl220_cast_fu_44259_p1.read()));
}

void ShuffleNetV2::thread_tmp_233_cast_fu_39020_p1() {
    tmp_233_cast_fu_39020_p1 = esl_sext<11,7>(tmp_160_fu_39014_p2.read());
}

void ShuffleNetV2::thread_tmp_233_fu_44726_p2() {
    tmp_233_fu_44726_p2 = (!p_shl218_cast_fu_44712_p1.read().is_01() || !p_shl219_cast_fu_44722_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl218_cast_fu_44712_p1.read()) - sc_biguint<8>(p_shl219_cast_fu_44722_p1.read()));
}

void ShuffleNetV2::thread_tmp_234_cast_fu_39054_p1() {
    tmp_234_cast_fu_39054_p1 = esl_sext<32,7>(tmp_161_reg_58156.read());
}

void ShuffleNetV2::thread_tmp_234_fu_44742_p1() {
    tmp_234_fu_44742_p1 = esl_zext<7,3>(p_lshr_f22_cast_fu_44732_p4.read());
}

void ShuffleNetV2::thread_tmp_235_fu_44766_p2() {
    tmp_235_fu_44766_p2 = (!ci78_cast_fu_44746_p1.read().is_01() || !tmp_233_reg_62467.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ci78_cast_fu_44746_p1.read()) + sc_biguint<8>(tmp_233_reg_62467.read()));
}

void ShuffleNetV2::thread_tmp_236_fu_45065_p2() {
    tmp_236_fu_45065_p2 = (!p_shl223_cast_fu_45049_p1.read().is_01() || !p_shl224_cast_fu_45061_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl223_cast_fu_45049_p1.read()) - sc_biguint<8>(p_shl224_cast_fu_45061_p1.read()));
}

void ShuffleNetV2::thread_tmp_237_fu_45075_p2() {
    tmp_237_fu_45075_p2 = (!tmp_236_fu_45065_p2.read().is_01() || !i172_cast1_reg_62999.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_236_fu_45065_p2.read()) + sc_biguint<8>(i172_cast1_reg_62999.read()));
}

void ShuffleNetV2::thread_tmp_238_cast_fu_39118_p1() {
    tmp_238_cast_fu_39118_p1 = esl_zext<6,4>(p_lshr_f14_cast_fu_39108_p4.read());
}

void ShuffleNetV2::thread_tmp_238_fu_44909_p2() {
    tmp_238_fu_44909_p2 = (!p_shl225_fu_44887_p3.read().is_01() || !p_shl226_cast_fu_44905_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl225_fu_44887_p3.read()) - sc_biguint<7>(p_shl226_cast_fu_44905_p1.read()));
}

void ShuffleNetV2::thread_tmp_239_cast_cast_fu_38815_p1() {
    tmp_239_cast_cast_fu_38815_p1 = esl_sext<8,7>(tmp_163_fu_38809_p2.read());
}

void ShuffleNetV2::thread_tmp_239_fu_44927_p2() {
    tmp_239_fu_44927_p2 = (!p_shl227_cast_fu_44923_p1.read().is_01() || !p_shl225_cast_fu_44895_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl227_cast_fu_44923_p1.read()) - sc_biguint<10>(p_shl225_cast_fu_44895_p1.read()));
}

void ShuffleNetV2::thread_tmp_240_cast_cast_fu_38824_p1() {
    tmp_240_cast_cast_fu_38824_p1 = esl_sext<10,7>(tmp_164_fu_38819_p2.read());
}

void ShuffleNetV2::thread_tmp_240_fu_45488_p2() {
    tmp_240_fu_45488_p2 = (!p_shl230_cast_fu_45474_p1.read().is_01() || !p_shl231_cast_fu_45484_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl230_cast_fu_45474_p1.read()) - sc_biguint<8>(p_shl231_cast_fu_45484_p1.read()));
}

void ShuffleNetV2::thread_tmp_241_fu_45504_p1() {
    tmp_241_fu_45504_p1 = esl_zext<7,3>(p_lshr_f23_cast_fu_45494_p4.read());
}

void ShuffleNetV2::thread_tmp_242_cast_fu_39409_p1() {
    tmp_242_cast_fu_39409_p1 = esl_sext<11,7>(tmp_165_fu_39403_p2.read());
}

void ShuffleNetV2::thread_tmp_242_fu_45402_p2() {
    tmp_242_fu_45402_p2 = (!p_shl228_cast_fu_45386_p1.read().is_01() || !p_shl229_cast_fu_45398_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl228_cast_fu_45386_p1.read()) - sc_biguint<8>(p_shl229_cast_fu_45398_p1.read()));
}

void ShuffleNetV2::thread_tmp_243_cast_fu_39443_p1() {
    tmp_243_cast_fu_39443_p1 = esl_sext<32,7>(tmp_166_reg_58498.read());
}

void ShuffleNetV2::thread_tmp_243_fu_45412_p2() {
    tmp_243_fu_45412_p2 = (!tmp_242_fu_45402_p2.read().is_01() || !i175_cast1_reg_63132.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_242_fu_45402_p2.read()) + sc_biguint<8>(i175_cast1_reg_63132.read()));
}

void ShuffleNetV2::thread_tmp_244_fu_45528_p2() {
    tmp_244_fu_45528_p2 = (!ci80_cast_fu_45508_p1.read().is_01() || !tmp_240_reg_63182.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ci80_cast_fu_45508_p1.read()) + sc_biguint<8>(tmp_240_reg_63182.read()));
}

void ShuffleNetV2::thread_tmp_244_t_fu_33462_p2() {
    tmp_244_t_fu_33462_p2 = (!tmp_122_cast_reg_54530.read().is_01() || !tmp_99_fu_33411_p2.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_122_cast_reg_54530.read()) + sc_biguint<6>(tmp_99_fu_33411_p2.read()));
}

void ShuffleNetV2::thread_tmp_245_cast_fu_39147_p1() {
    tmp_245_cast_fu_39147_p1 = esl_sext<32,7>(tmp_162_fu_39142_p2.read());
}

void ShuffleNetV2::thread_tmp_245_fu_45209_p2() {
    tmp_245_fu_45209_p2 = (!p_shl232_cast_fu_45193_p1.read().is_01() || !p_shl233_cast_fu_45205_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl232_cast_fu_45193_p1.read()) - sc_biguint<8>(p_shl233_cast_fu_45205_p1.read()));
}

void ShuffleNetV2::thread_tmp_246_fu_45219_p2() {
    tmp_246_fu_45219_p2 = (!co162_cast1_reg_63041.read().is_01() || !tmp_245_fu_45209_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co162_cast1_reg_63041.read()) + sc_biguint<8>(tmp_245_fu_45209_p2.read()));
}

void ShuffleNetV2::thread_tmp_247_fu_45835_p2() {
    tmp_247_fu_45835_p2 = (!p_shl234_cast_fu_45819_p1.read().is_01() || !p_shl235_cast_fu_45831_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl234_cast_fu_45819_p1.read()) - sc_biguint<8>(p_shl235_cast_fu_45831_p1.read()));
}

void ShuffleNetV2::thread_tmp_248_cast_fu_39271_p1() {
    tmp_248_cast_fu_39271_p1 = esl_sext<11,8>(tmp_168_fu_39265_p2.read());
}

void ShuffleNetV2::thread_tmp_248_fu_45845_p2() {
    tmp_248_fu_45845_p2 = (!tmp_247_fu_45835_p2.read().is_01() || !i179_cast1_reg_63714.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_247_fu_45835_p2.read()) + sc_biguint<8>(i179_cast1_reg_63714.read()));
}

void ShuffleNetV2::thread_tmp_249_fu_45671_p2() {
    tmp_249_fu_45671_p2 = (!p_shl236_fu_45649_p3.read().is_01() || !p_shl237_cast_fu_45667_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl236_fu_45649_p3.read()) - sc_biguint<7>(p_shl237_cast_fu_45667_p1.read()));
}

void ShuffleNetV2::thread_tmp_250_fu_45689_p2() {
    tmp_250_fu_45689_p2 = (!p_shl238_cast_fu_45685_p1.read().is_01() || !p_shl236_cast_fu_45657_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl238_cast_fu_45685_p1.read()) - sc_biguint<10>(p_shl236_cast_fu_45657_p1.read()));
}

void ShuffleNetV2::thread_tmp_251_fu_46052_p2() {
    tmp_251_fu_46052_p2 = (!co167_cast_fu_46036_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co167_cast_fu_46036_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_252_fu_46255_p2() {
    tmp_252_fu_46255_p2 = (!p_shl239_cast_fu_46241_p1.read().is_01() || !p_shl240_cast_fu_46251_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl239_cast_fu_46241_p1.read()) - sc_biguint<8>(p_shl240_cast_fu_46251_p1.read()));
}

void ShuffleNetV2::thread_tmp_253_cast_fu_39837_p1() {
    tmp_253_cast_fu_39837_p1 = esl_zext<6,4>(p_lshr_f15_cast_fu_39827_p4.read());
}

void ShuffleNetV2::thread_tmp_253_fu_46271_p1() {
    tmp_253_fu_46271_p1 = esl_zext<7,3>(p_lshr_f24_cast_fu_46261_p4.read());
}

void ShuffleNetV2::thread_tmp_254_cast_fu_40136_p1() {
    tmp_254_cast_fu_40136_p1 = esl_sext<11,7>(tmp_172_fu_40130_p2.read());
}

void ShuffleNetV2::thread_tmp_254_fu_46295_p2() {
    tmp_254_fu_46295_p2 = (!ci82_cast_fu_46275_p1.read().is_01() || !tmp_252_reg_63862.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ci82_cast_fu_46275_p1.read()) + sc_biguint<8>(tmp_252_reg_63862.read()));
}

void ShuffleNetV2::thread_tmp_255_cast_fu_40170_p1() {
    tmp_255_cast_fu_40170_p1 = esl_sext<32,7>(tmp_173_reg_58938.read());
}

void ShuffleNetV2::thread_tmp_255_fu_46594_p2() {
    tmp_255_fu_46594_p2 = (!p_shl241_cast_fu_46578_p1.read().is_01() || !p_shl242_cast_fu_46590_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl241_cast_fu_46578_p1.read()) - sc_biguint<8>(p_shl242_cast_fu_46590_p1.read()));
}

void ShuffleNetV2::thread_tmp_256_fu_46604_p2() {
    tmp_256_fu_46604_p2 = (!tmp_255_fu_46594_p2.read().is_01() || !i184_cast1_reg_64394.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_255_fu_46594_p2.read()) + sc_biguint<8>(i184_cast1_reg_64394.read()));
}

void ShuffleNetV2::thread_tmp_257_cast_fu_39866_p1() {
    tmp_257_cast_fu_39866_p1 = esl_sext<32,7>(tmp_171_fu_39861_p2.read());
}

void ShuffleNetV2::thread_tmp_257_fu_46438_p2() {
    tmp_257_fu_46438_p2 = (!p_shl243_fu_46416_p3.read().is_01() || !p_shl244_cast_fu_46434_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl243_fu_46416_p3.read()) - sc_biguint<7>(p_shl244_cast_fu_46434_p1.read()));
}

void ShuffleNetV2::thread_tmp_258_fu_46456_p2() {
    tmp_258_fu_46456_p2 = (!p_shl245_cast_fu_46452_p1.read().is_01() || !p_shl243_cast_fu_46424_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl245_cast_fu_46452_p1.read()) - sc_biguint<10>(p_shl243_cast_fu_46424_p1.read()));
}

void ShuffleNetV2::thread_tmp_258_t_fu_34185_p2() {
    tmp_258_t_fu_34185_p2 = (!tmp_106_fu_34134_p2.read().is_01() || !tmp_137_cast_reg_54970.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_106_fu_34134_p2.read()) + sc_biguint<6>(tmp_137_cast_reg_54970.read()));
}

void ShuffleNetV2::thread_tmp_259_fu_47029_p2() {
    tmp_259_fu_47029_p2 = (!p_shl248_cast_fu_47015_p1.read().is_01() || !p_shl249_cast_fu_47025_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl248_cast_fu_47015_p1.read()) - sc_biguint<8>(p_shl249_cast_fu_47025_p1.read()));
}

void ShuffleNetV2::thread_tmp_260_cast_cast_fu_39990_p1() {
    tmp_260_cast_cast_fu_39990_p1 = esl_sext<10,8>(tmp_175_fu_39984_p2.read());
}

void ShuffleNetV2::thread_tmp_260_fu_47045_p1() {
    tmp_260_fu_47045_p1 = esl_zext<7,3>(p_lshr_f25_cast_fu_47035_p4.read());
}

void ShuffleNetV2::thread_tmp_261_fu_46943_p2() {
    tmp_261_fu_46943_p2 = (!p_shl246_cast_fu_46927_p1.read().is_01() || !p_shl247_cast_fu_46939_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl246_cast_fu_46927_p1.read()) - sc_biguint<8>(p_shl247_cast_fu_46939_p1.read()));
}

void ShuffleNetV2::thread_tmp_262_cast_fu_40477_p1() {
    tmp_262_cast_fu_40477_p1 = esl_sext<11,7>(tmp_177_fu_40471_p2.read());
}

void ShuffleNetV2::thread_tmp_262_fu_46953_p2() {
    tmp_262_fu_46953_p2 = (!tmp_261_fu_46943_p2.read().is_01() || !i187_cast1_reg_64527.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_261_fu_46943_p2.read()) + sc_biguint<8>(i187_cast1_reg_64527.read()));
}

void ShuffleNetV2::thread_tmp_263_cast_fu_40511_p1() {
    tmp_263_cast_fu_40511_p1 = esl_sext<32,7>(tmp_178_reg_59071.read());
}

void ShuffleNetV2::thread_tmp_263_fu_47069_p2() {
    tmp_263_fu_47069_p2 = (!ci84_cast_fu_47049_p1.read().is_01() || !tmp_259_reg_64577.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ci84_cast_fu_47049_p1.read()) + sc_biguint<8>(tmp_259_reg_64577.read()));
}

void ShuffleNetV2::thread_tmp_264_fu_46738_p2() {
    tmp_264_fu_46738_p2 = (!p_shl250_cast_fu_46722_p1.read().is_01() || !p_shl251_cast_fu_46734_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl250_cast_fu_46722_p1.read()) - sc_biguint<8>(p_shl251_cast_fu_46734_p1.read()));
}

void ShuffleNetV2::thread_tmp_265_fu_46748_p2() {
    tmp_265_fu_46748_p2 = (!tmp_264_fu_46738_p2.read().is_01() || !co172_cast_reg_64436.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_264_fu_46738_p2.read()) + sc_biguint<8>(co172_cast_reg_64436.read()));
}

void ShuffleNetV2::thread_tmp_266_fu_47368_p2() {
    tmp_266_fu_47368_p2 = (!p_shl252_cast_fu_47352_p1.read().is_01() || !p_shl253_cast_fu_47364_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl252_cast_fu_47352_p1.read()) - sc_biguint<8>(p_shl253_cast_fu_47364_p1.read()));
}

void ShuffleNetV2::thread_tmp_267_cast_fu_40575_p1() {
    tmp_267_cast_fu_40575_p1 = esl_zext<6,4>(p_lshr_f16_cast_fu_40565_p4.read());
}

void ShuffleNetV2::thread_tmp_267_fu_47378_p2() {
    tmp_267_fu_47378_p2 = (!tmp_266_fu_47368_p2.read().is_01() || !i191_cast1_reg_65109.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_266_fu_47368_p2.read()) + sc_biguint<8>(i191_cast1_reg_65109.read()));
}

void ShuffleNetV2::thread_tmp_268_cast_fu_40280_p1() {
    tmp_268_cast_fu_40280_p1 = esl_sext<10,7>(tmp_180_fu_40274_p2.read());
}

void ShuffleNetV2::thread_tmp_268_fu_47212_p2() {
    tmp_268_fu_47212_p2 = (!p_shl254_fu_47190_p3.read().is_01() || !p_shl255_cast_fu_47208_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl254_fu_47190_p3.read()) - sc_biguint<7>(p_shl255_cast_fu_47208_p1.read()));
}

void ShuffleNetV2::thread_tmp_269_cast_cast_fu_40289_p1() {
    tmp_269_cast_cast_fu_40289_p1 = esl_sext<10,7>(tmp_181_fu_40284_p2.read());
}

void ShuffleNetV2::thread_tmp_269_fu_47230_p2() {
    tmp_269_fu_47230_p2 = (!p_shl256_cast_fu_47226_p1.read().is_01() || !p_shl254_cast_fu_47198_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl256_cast_fu_47226_p1.read()) - sc_biguint<10>(p_shl254_cast_fu_47198_p1.read()));
}

void ShuffleNetV2::thread_tmp_270_fu_47585_p2() {
    tmp_270_fu_47585_p2 = (!co177_cast_fu_47569_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co177_cast_fu_47569_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_271_cast_cast_fu_40874_p1() {
    tmp_271_cast_cast_fu_40874_p1 = esl_sext<10,7>(tmp_182_fu_40868_p2.read());
}

void ShuffleNetV2::thread_tmp_271_fu_47788_p2() {
    tmp_271_fu_47788_p2 = (!p_shl257_cast_fu_47774_p1.read().is_01() || !p_shl258_cast_fu_47784_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl257_cast_fu_47774_p1.read()) - sc_biguint<8>(p_shl258_cast_fu_47784_p1.read()));
}

void ShuffleNetV2::thread_tmp_272_cast_fu_40912_p1() {
    tmp_272_cast_fu_40912_p1 = esl_sext<32,7>(tmp_183_reg_59413.read());
}

void ShuffleNetV2::thread_tmp_272_fu_47804_p1() {
    tmp_272_fu_47804_p1 = esl_zext<7,3>(p_lshr_f26_cast_fu_47794_p4.read());
}

void ShuffleNetV2::thread_tmp_273_fu_47828_p2() {
    tmp_273_fu_47828_p2 = (!ci86_cast_fu_47808_p1.read().is_01() || !tmp_271_reg_65257.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ci86_cast_fu_47808_p1.read()) + sc_biguint<8>(tmp_271_reg_65257.read()));
}

void ShuffleNetV2::thread_tmp_274_cast_fu_40604_p1() {
    tmp_274_cast_fu_40604_p1 = esl_sext<32,7>(tmp_179_fu_40599_p2.read());
}

void ShuffleNetV2::thread_tmp_274_fu_48127_p2() {
    tmp_274_fu_48127_p2 = (!p_shl259_cast_fu_48111_p1.read().is_01() || !p_shl260_cast_fu_48123_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl259_cast_fu_48111_p1.read()) - sc_biguint<8>(p_shl260_cast_fu_48123_p1.read()));
}

void ShuffleNetV2::thread_tmp_275_fu_48137_p2() {
    tmp_275_fu_48137_p2 = (!tmp_274_fu_48127_p2.read().is_01() || !i196_cast1_reg_65789.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_274_fu_48127_p2.read()) + sc_biguint<8>(i196_cast1_reg_65789.read()));
}

void ShuffleNetV2::thread_tmp_276_fu_47971_p2() {
    tmp_276_fu_47971_p2 = (!p_shl261_fu_47949_p3.read().is_01() || !p_shl262_cast_fu_47967_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl261_fu_47949_p3.read()) - sc_biguint<7>(p_shl262_cast_fu_47967_p1.read()));
}

void ShuffleNetV2::thread_tmp_277_cast_cast_fu_40728_p1() {
    tmp_277_cast_cast_fu_40728_p1 = esl_sext<10,8>(tmp_185_fu_40722_p2.read());
}

void ShuffleNetV2::thread_tmp_277_fu_47989_p2() {
    tmp_277_fu_47989_p2 = (!p_shl263_cast_fu_47985_p1.read().is_01() || !p_shl261_cast_fu_47957_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl263_cast_fu_47985_p1.read()) - sc_biguint<10>(p_shl261_cast_fu_47957_p1.read()));
}

void ShuffleNetV2::thread_tmp_278_fu_48554_p2() {
    tmp_278_fu_48554_p2 = (!p_shl266_cast_fu_48540_p1.read().is_01() || !p_shl267_cast_fu_48550_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl266_cast_fu_48540_p1.read()) - sc_biguint<8>(p_shl267_cast_fu_48550_p1.read()));
}

void ShuffleNetV2::thread_tmp_279_fu_48570_p1() {
    tmp_279_fu_48570_p1 = esl_zext<7,3>(p_lshr_f27_cast_fu_48560_p4.read());
}

void ShuffleNetV2::thread_tmp_279_t_fu_34927_p2() {
    tmp_279_t_fu_34927_p2 = (!tmp_151_cast_reg_55445.read().is_01() || !tmp_116_fu_34876_p2.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_151_cast_reg_55445.read()) + sc_biguint<6>(tmp_116_fu_34876_p2.read()));
}

void ShuffleNetV2::thread_tmp_280_fu_48468_p2() {
    tmp_280_fu_48468_p2 = (!p_shl264_cast_fu_48452_p1.read().is_01() || !p_shl265_cast_fu_48464_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl264_cast_fu_48452_p1.read()) - sc_biguint<8>(p_shl265_cast_fu_48464_p1.read()));
}

void ShuffleNetV2::thread_tmp_281_fu_48478_p2() {
    tmp_281_fu_48478_p2 = (!tmp_280_fu_48468_p2.read().is_01() || !i199_cast1_reg_65922.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_280_fu_48468_p2.read()) + sc_biguint<8>(i199_cast1_reg_65922.read()));
}

void ShuffleNetV2::thread_tmp_282_cast_fu_41306_p1() {
    tmp_282_cast_fu_41306_p1 = esl_zext<6,4>(p_lshr_f17_cast_fu_41296_p4.read());
}

void ShuffleNetV2::thread_tmp_282_fu_48594_p2() {
    tmp_282_fu_48594_p2 = (!ci88_cast_fu_48574_p1.read().is_01() || !tmp_278_reg_65972.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ci88_cast_fu_48574_p1.read()) + sc_biguint<8>(tmp_278_reg_65972.read()));
}

void ShuffleNetV2::thread_tmp_283_cast_cast_fu_41605_p1() {
    tmp_283_cast_cast_fu_41605_p1 = esl_sext<10,7>(tmp_189_fu_41599_p2.read());
}

void ShuffleNetV2::thread_tmp_283_fu_48271_p2() {
    tmp_283_fu_48271_p2 = (!p_shl268_cast_fu_48255_p1.read().is_01() || !p_shl269_cast_fu_48267_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl268_cast_fu_48255_p1.read()) - sc_biguint<8>(p_shl269_cast_fu_48267_p1.read()));
}

void ShuffleNetV2::thread_tmp_284_cast_fu_41643_p1() {
    tmp_284_cast_fu_41643_p1 = esl_sext<32,7>(tmp_190_reg_59853.read());
}

void ShuffleNetV2::thread_tmp_284_fu_48281_p2() {
    tmp_284_fu_48281_p2 = (!co182_cast1_reg_65831.read().is_01() || !tmp_283_fu_48271_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co182_cast1_reg_65831.read()) + sc_biguint<8>(tmp_283_fu_48271_p2.read()));
}

void ShuffleNetV2::thread_tmp_285_fu_48893_p2() {
    tmp_285_fu_48893_p2 = (!p_shl270_cast_fu_48877_p1.read().is_01() || !p_shl271_cast_fu_48889_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl270_cast_fu_48877_p1.read()) - sc_biguint<8>(p_shl271_cast_fu_48889_p1.read()));
}

void ShuffleNetV2::thread_tmp_286_cast_fu_41335_p1() {
    tmp_286_cast_fu_41335_p1 = esl_sext<32,7>(tmp_188_fu_41330_p2.read());
}

void ShuffleNetV2::thread_tmp_286_fu_48903_p2() {
    tmp_286_fu_48903_p2 = (!tmp_285_fu_48893_p2.read().is_01() || !i203_cast1_reg_66504.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_285_fu_48893_p2.read()) + sc_biguint<8>(i203_cast1_reg_66504.read()));
}

void ShuffleNetV2::thread_tmp_287_fu_48737_p2() {
    tmp_287_fu_48737_p2 = (!p_shl272_fu_48715_p3.read().is_01() || !p_shl273_cast_fu_48733_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl272_fu_48715_p3.read()) - sc_biguint<7>(p_shl273_cast_fu_48733_p1.read()));
}

void ShuffleNetV2::thread_tmp_288_fu_48755_p2() {
    tmp_288_fu_48755_p2 = (!p_shl274_cast_fu_48751_p1.read().is_01() || !p_shl272_cast_fu_48723_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl274_cast_fu_48751_p1.read()) - sc_biguint<10>(p_shl272_cast_fu_48723_p1.read()));
}

void ShuffleNetV2::thread_tmp_289_cast_cast_fu_41459_p1() {
    tmp_289_cast_cast_fu_41459_p1 = esl_sext<9,8>(tmp_192_fu_41453_p2.read());
}

void ShuffleNetV2::thread_tmp_291_cast_cast_fu_41946_p1() {
    tmp_291_cast_cast_fu_41946_p1 = esl_sext<10,7>(tmp_194_fu_41940_p2.read());
}

void ShuffleNetV2::thread_tmp_292_cast_fu_41984_p1() {
    tmp_292_cast_fu_41984_p1 = esl_sext<32,7>(tmp_195_reg_59986.read());
}

void ShuffleNetV2::thread_tmp_293_t_fu_35650_p2() {
    tmp_293_t_fu_35650_p2 = (!tmp_166_cast_reg_55885.read().is_01() || !tmp_123_fu_35599_p2.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_166_cast_reg_55885.read()) + sc_biguint<6>(tmp_123_fu_35599_p2.read()));
}

void ShuffleNetV2::thread_tmp_296_cast_fu_42048_p1() {
    tmp_296_cast_fu_42048_p1 = esl_zext<6,4>(p_lshr_f18_cast_fu_42038_p4.read());
}

void ShuffleNetV2::thread_tmp_297_cast_fu_41753_p1() {
    tmp_297_cast_fu_41753_p1 = esl_sext<10,7>(tmp_197_fu_41747_p2.read());
}

void ShuffleNetV2::thread_tmp_298_cast_cast_fu_41762_p1() {
    tmp_298_cast_cast_fu_41762_p1 = esl_sext<10,7>(tmp_198_fu_41757_p2.read());
}

void ShuffleNetV2::thread_tmp_300_cast_cast_fu_42347_p1() {
    tmp_300_cast_cast_fu_42347_p1 = esl_sext<10,7>(tmp_199_fu_42341_p2.read());
}

void ShuffleNetV2::thread_tmp_301_cast_fu_42385_p1() {
    tmp_301_cast_fu_42385_p1 = esl_sext<32,7>(tmp_200_reg_60328.read());
}

void ShuffleNetV2::thread_tmp_303_cast_fu_42077_p1() {
    tmp_303_cast_fu_42077_p1 = esl_sext<32,7>(tmp_196_fu_42072_p2.read());
}

void ShuffleNetV2::thread_tmp_306_cast_cast_fu_42201_p1() {
    tmp_306_cast_cast_fu_42201_p1 = esl_sext<9,8>(tmp_202_fu_42195_p2.read());
}

void ShuffleNetV2::thread_tmp_30_fu_27423_p2() {
    tmp_30_fu_27423_p2 = (!co35_cast_fu_27407_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co35_cast_fu_27407_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_311_cast_cast_fu_42895_p1() {
    tmp_311_cast_cast_fu_42895_p1 = esl_sext<10,8>(tmp_206_fu_42889_p2.read());
}

void ShuffleNetV2::thread_tmp_312_cast_fu_42933_p1() {
    tmp_312_cast_fu_42933_p1 = esl_sext<32,8>(tmp_207_reg_60954.read());
}

void ShuffleNetV2::thread_tmp_314_cast_fu_42595_p1() {
    tmp_314_cast_fu_42595_p1 = esl_sext<32,8>(tmp_205_fu_42590_p2.read());
}

void ShuffleNetV2::thread_tmp_314_t_fu_36376_p2() {
    tmp_314_t_fu_36376_p2 = (!tmp_180_cast_reg_56360.read().is_01() || !tmp_133_fu_36325_p2.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_180_cast_reg_56360.read()) + sc_biguint<6>(tmp_133_fu_36325_p2.read()));
}

void ShuffleNetV2::thread_tmp_318_cast_fu_42757_p1() {
    tmp_318_cast_fu_42757_p1 = esl_sext<12,10>(tmp_209_fu_42751_p2.read());
}

void ShuffleNetV2::thread_tmp_31_fu_28211_p2() {
    tmp_31_fu_28211_p2 = (!co47_cast_fu_28195_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co47_cast_fu_28195_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_320_cast_cast_fu_43236_p1() {
    tmp_320_cast_cast_fu_43236_p1 = esl_sext<9,8>(tmp_212_fu_43230_p2.read());
}

void ShuffleNetV2::thread_tmp_321_cast_fu_43274_p1() {
    tmp_321_cast_fu_43274_p1 = esl_sext<32,8>(tmp_213_reg_61087.read());
}

void ShuffleNetV2::thread_tmp_326_cast_fu_43043_p1() {
    tmp_326_cast_fu_43043_p1 = esl_sext<10,8>(tmp_215_fu_43037_p2.read());
}

void ShuffleNetV2::thread_tmp_327_cast_cast_fu_43052_p1() {
    tmp_327_cast_cast_fu_43052_p1 = esl_sext<11,8>(tmp_216_fu_43047_p2.read());
}

void ShuffleNetV2::thread_tmp_328_t_fu_37095_p2() {
    tmp_328_t_fu_37095_p2 = (!tmp_195_cast_reg_56800.read().is_01() || !tmp_140_fu_37044_p2.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_195_cast_reg_56800.read()) + sc_biguint<6>(tmp_140_fu_37044_p2.read()));
}

void ShuffleNetV2::thread_tmp_329_cast_cast_fu_43665_p1() {
    tmp_329_cast_cast_fu_43665_p1 = esl_sext<9,8>(tmp_217_fu_43659_p2.read());
}

void ShuffleNetV2::thread_tmp_330_cast_fu_43707_p1() {
    tmp_330_cast_fu_43707_p1 = esl_sext<32,8>(tmp_218_reg_61669.read());
}

void ShuffleNetV2::thread_tmp_332_cast_fu_43365_p1() {
    tmp_332_cast_fu_43365_p1 = esl_sext<32,8>(tmp_214_fu_43360_p2.read());
}

void ShuffleNetV2::thread_tmp_336_cast_fu_43527_p1() {
    tmp_336_cast_fu_43527_p1 = esl_sext<12,10>(tmp_220_fu_43521_p2.read());
}

void ShuffleNetV2::thread_tmp_338_cast_fu_44010_p1() {
    tmp_338_cast_fu_44010_p1 = esl_sext<12,8>(tmp_223_fu_44004_p2.read());
}

void ShuffleNetV2::thread_tmp_339_cast_fu_44044_p1() {
    tmp_339_cast_fu_44044_p1 = esl_sext<32,8>(tmp_224_reg_61802.read());
}

void ShuffleNetV2::thread_tmp_33_fu_29023_p2() {
    tmp_33_fu_29023_p2 = (!p_shl_cast_fu_29007_p1.read().is_01() || !p_shl1_cast_fu_29019_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl_cast_fu_29007_p1.read()) - sc_biguint<7>(p_shl1_cast_fu_29019_p1.read()));
}

void ShuffleNetV2::thread_tmp_344_cast_fu_43817_p1() {
    tmp_344_cast_fu_43817_p1 = esl_sext<10,8>(tmp_226_fu_43811_p2.read());
}

void ShuffleNetV2::thread_tmp_345_cast_cast_fu_43826_p1() {
    tmp_345_cast_cast_fu_43826_p1 = esl_sext<11,8>(tmp_227_fu_43821_p2.read());
}

void ShuffleNetV2::thread_tmp_347_cast_fu_44435_p1() {
    tmp_347_cast_fu_44435_p1 = esl_sext<12,8>(tmp_229_fu_44429_p2.read());
}

void ShuffleNetV2::thread_tmp_348_cast_fu_44469_p1() {
    tmp_348_cast_fu_44469_p1 = esl_sext<32,8>(tmp_230_reg_62384.read());
}

void ShuffleNetV2::thread_tmp_349_t_fu_37829_p2() {
    tmp_349_t_fu_37829_p2 = (!tmp_209_cast_reg_57275.read().is_01() || !tmp_150_fu_37778_p2.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_209_cast_reg_57275.read()) + sc_biguint<6>(tmp_150_fu_37778_p2.read()));
}

void ShuffleNetV2::thread_tmp_34_cast_fu_29330_p1() {
    tmp_34_cast_fu_29330_p1 = esl_sext<9,7>(tmp_34_fu_29324_p2.read());
}

void ShuffleNetV2::thread_tmp_34_fu_29324_p2() {
    tmp_34_fu_29324_p2 = (!p_shl2_cast_fu_29308_p1.read().is_01() || !p_shl3_cast_fu_29320_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl2_cast_fu_29308_p1.read()) - sc_biguint<7>(p_shl3_cast_fu_29320_p1.read()));
}

void ShuffleNetV2::thread_tmp_350_cast_fu_44135_p1() {
    tmp_350_cast_fu_44135_p1 = esl_sext<32,8>(tmp_225_fu_44130_p2.read());
}

void ShuffleNetV2::thread_tmp_358_cast_fu_44297_p1() {
    tmp_358_cast_fu_44297_p1 = esl_sext<12,10>(tmp_232_fu_44291_p2.read());
}

void ShuffleNetV2::thread_tmp_35_cast_fu_29364_p1() {
    tmp_35_cast_fu_29364_p1 = esl_sext<32,7>(tmp_35_reg_52102.read());
}

void ShuffleNetV2::thread_tmp_35_fu_29334_p2() {
    tmp_35_fu_29334_p2 = (!tmp_34_fu_29324_p2.read().is_01() || !i37_cast1_reg_52081.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_34_fu_29324_p2.read()) + sc_biguint<7>(i37_cast1_reg_52081.read()));
}

void ShuffleNetV2::thread_tmp_360_cast_fu_45071_p1() {
    tmp_360_cast_fu_45071_p1 = esl_sext<12,8>(tmp_236_fu_45065_p2.read());
}

void ShuffleNetV2::thread_tmp_361_cast_fu_45105_p1() {
    tmp_361_cast_fu_45105_p1 = esl_sext<32,8>(tmp_237_reg_63020.read());
}

void ShuffleNetV2::thread_tmp_363_cast_fu_44771_p1() {
    tmp_363_cast_fu_44771_p1 = esl_sext<32,8>(tmp_235_fu_44766_p2.read());
}

void ShuffleNetV2::thread_tmp_363_t_fu_38548_p2() {
    tmp_363_t_fu_38548_p2 = (!tmp_224_cast_reg_57715.read().is_01() || !tmp_157_fu_38497_p2.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_224_cast_reg_57715.read()) + sc_biguint<6>(tmp_157_fu_38497_p2.read()));
}

void ShuffleNetV2::thread_tmp_367_cast_fu_44933_p1() {
    tmp_367_cast_fu_44933_p1 = esl_sext<12,10>(tmp_239_fu_44927_p2.read());
}

void ShuffleNetV2::thread_tmp_369_cast_fu_45408_p1() {
    tmp_369_cast_fu_45408_p1 = esl_sext<12,8>(tmp_242_fu_45402_p2.read());
}

void ShuffleNetV2::thread_tmp_370_cast_fu_45442_p1() {
    tmp_370_cast_fu_45442_p1 = esl_sext<32,8>(tmp_243_reg_63153.read());
}

void ShuffleNetV2::thread_tmp_375_cast_fu_45215_p1() {
    tmp_375_cast_fu_45215_p1 = esl_sext<10,8>(tmp_245_fu_45209_p2.read());
}

void ShuffleNetV2::thread_tmp_376_cast_cast_fu_45224_p1() {
    tmp_376_cast_cast_fu_45224_p1 = esl_sext<11,8>(tmp_246_fu_45219_p2.read());
}

void ShuffleNetV2::thread_tmp_378_cast_fu_45841_p1() {
    tmp_378_cast_fu_45841_p1 = esl_sext<12,8>(tmp_247_fu_45835_p2.read());
}

void ShuffleNetV2::thread_tmp_379_cast_fu_45875_p1() {
    tmp_379_cast_fu_45875_p1 = esl_sext<32,8>(tmp_248_reg_63735.read());
}

void ShuffleNetV2::thread_tmp_37_cast_fu_29068_p1() {
    tmp_37_cast_fu_29068_p1 = esl_sext<32,7>(tmp_37_fu_29063_p2.read());
}

void ShuffleNetV2::thread_tmp_37_fu_29063_p2() {
    tmp_37_fu_29063_p2 = (!ci34_cast_fu_29043_p1.read().is_01() || !tmp_33_reg_51789.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci34_cast_fu_29043_p1.read()) + sc_biguint<7>(tmp_33_reg_51789.read()));
}

void ShuffleNetV2::thread_tmp_381_cast_fu_45533_p1() {
    tmp_381_cast_fu_45533_p1 = esl_sext<32,8>(tmp_244_fu_45528_p2.read());
}

void ShuffleNetV2::thread_tmp_384_t_fu_39286_p2() {
    tmp_384_t_fu_39286_p2 = (!tmp_238_cast_reg_58190.read().is_01() || !tmp_167_fu_39235_p2.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_238_cast_reg_58190.read()) + sc_biguint<6>(tmp_167_fu_39235_p2.read()));
}

void ShuffleNetV2::thread_tmp_385_cast_cast_fu_45695_p1() {
    tmp_385_cast_cast_fu_45695_p1 = esl_sext<11,10>(tmp_250_fu_45689_p2.read());
}

void ShuffleNetV2::thread_tmp_38_fu_29156_p2() {
    tmp_38_fu_29156_p2 = (!p_shl4_fu_29136_p3.read().is_01() || !p_shl5_cast_fu_29152_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl4_fu_29136_p3.read()) - sc_biguint<6>(p_shl5_cast_fu_29152_p1.read()));
}

void ShuffleNetV2::thread_tmp_391_cast_fu_46600_p1() {
    tmp_391_cast_fu_46600_p1 = esl_sext<12,8>(tmp_255_fu_46594_p2.read());
}

void ShuffleNetV2::thread_tmp_392_cast_fu_46634_p1() {
    tmp_392_cast_fu_46634_p1 = esl_sext<32,8>(tmp_256_reg_64415.read());
}

void ShuffleNetV2::thread_tmp_394_cast_fu_46300_p1() {
    tmp_394_cast_fu_46300_p1 = esl_sext<32,8>(tmp_254_fu_46295_p2.read());
}

void ShuffleNetV2::thread_tmp_398_cast_fu_46462_p1() {
    tmp_398_cast_fu_46462_p1 = esl_sext<13,10>(tmp_258_fu_46456_p2.read());
}

void ShuffleNetV2::thread_tmp_398_t_fu_40005_p2() {
    tmp_398_t_fu_40005_p2 = (!tmp_174_fu_39954_p2.read().is_01() || !tmp_253_cast_reg_58630.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_174_fu_39954_p2.read()) + sc_biguint<6>(tmp_253_cast_reg_58630.read()));
}

}

