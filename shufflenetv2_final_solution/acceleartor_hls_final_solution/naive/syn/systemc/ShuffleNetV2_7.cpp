#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_p_shl87_fu_15863_p3() {
    p_shl87_fu_15863_p3 = esl_concat<1,3>(tmp_1217_fu_15847_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl88_cast_fu_16261_p1() {
    p_shl88_cast_fu_16261_p1 = esl_zext<7,6>(p_shl88_fu_16253_p3.read());
}

void ShuffleNetV2::thread_p_shl88_fu_16253_p3() {
    p_shl88_fu_16253_p3 = esl_concat<2,4>(tmp_1236_fu_16249_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl89_cast_fu_16273_p1() {
    p_shl89_cast_fu_16273_p1 = esl_zext<7,4>(p_shl89_fu_16265_p3.read());
}

void ShuffleNetV2::thread_p_shl89_fu_16265_p3() {
    p_shl89_fu_16265_p3 = esl_concat<2,2>(tmp_1236_fu_16249_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl8_cast_fu_10953_p1() {
    p_shl8_cast_fu_10953_p1 = esl_zext<7,6>(p_shl8_fu_10945_p3.read());
}

void ShuffleNetV2::thread_p_shl8_fu_10945_p3() {
    p_shl8_fu_10945_p3 = esl_concat<1,5>(tmp_1009_fu_10941_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl90_cast_fu_16327_p1() {
    p_shl90_cast_fu_16327_p1 = esl_zext<8,7>(p_shl90_fu_16319_p3.read());
}

void ShuffleNetV2::thread_p_shl90_fu_16319_p3() {
    p_shl90_fu_16319_p3 = esl_concat<2,5>(tmp_1236_fu_16249_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl91_cast_fu_16339_p1() {
    p_shl91_cast_fu_16339_p1 = esl_zext<8,5>(p_shl91_fu_16331_p3.read());
}

void ShuffleNetV2::thread_p_shl91_fu_16331_p3() {
    p_shl91_fu_16331_p3 = esl_concat<2,3>(tmp_1236_fu_16249_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl92_cast_fu_16898_p1() {
    p_shl92_cast_fu_16898_p1 = esl_zext<7,6>(p_shl92_fu_16890_p3.read());
}

void ShuffleNetV2::thread_p_shl92_fu_16890_p3() {
    p_shl92_fu_16890_p3 = esl_concat<1,5>(tmp_1255_fu_16886_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl93_cast_fu_16910_p1() {
    p_shl93_cast_fu_16910_p1 = esl_zext<7,4>(p_shl93_fu_16902_p3.read());
}

void ShuffleNetV2::thread_p_shl93_fu_16902_p3() {
    p_shl93_fu_16902_p3 = esl_concat<1,3>(tmp_1255_fu_16886_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl94_cast_fu_17194_p1() {
    p_shl94_cast_fu_17194_p1 = esl_zext<7,6>(p_shl94_fu_17186_p3.read());
}

void ShuffleNetV2::thread_p_shl94_fu_17186_p3() {
    p_shl94_fu_17186_p3 = esl_concat<1,5>(tmp_1267_fu_17182_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl95_cast_fu_17206_p1() {
    p_shl95_cast_fu_17206_p1 = esl_zext<7,4>(p_shl95_fu_17198_p3.read());
}

void ShuffleNetV2::thread_p_shl95_fu_17198_p3() {
    p_shl95_fu_17198_p3 = esl_concat<1,3>(tmp_1267_fu_17182_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl96_cast_fu_16987_p1() {
    p_shl96_cast_fu_16987_p1 = esl_zext<7,6>(p_shl96_fu_16979_p3.read());
}

void ShuffleNetV2::thread_p_shl96_fu_16979_p3() {
    p_shl96_fu_16979_p3 = esl_concat<2,4>(tmp_1268_fu_16975_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl97_cast_fu_16999_p1() {
    p_shl97_cast_fu_16999_p1 = esl_zext<7,4>(p_shl97_fu_16991_p3.read());
}

void ShuffleNetV2::thread_p_shl97_fu_16991_p3() {
    p_shl97_fu_16991_p3 = esl_concat<2,2>(tmp_1268_fu_16975_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl98_cast_fu_17053_p1() {
    p_shl98_cast_fu_17053_p1 = esl_zext<8,7>(p_shl98_fu_17045_p3.read());
}

void ShuffleNetV2::thread_p_shl98_fu_17045_p3() {
    p_shl98_fu_17045_p3 = esl_concat<2,5>(tmp_1268_fu_16975_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl99_cast_fu_17065_p1() {
    p_shl99_cast_fu_17065_p1 = esl_zext<8,5>(p_shl99_fu_17057_p3.read());
}

void ShuffleNetV2::thread_p_shl99_fu_17057_p3() {
    p_shl99_fu_17057_p3 = esl_concat<2,3>(tmp_1268_fu_16975_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl9_cast_fu_10965_p1() {
    p_shl9_cast_fu_10965_p1 = esl_zext<7,4>(p_shl9_fu_10957_p3.read());
}

void ShuffleNetV2::thread_p_shl9_fu_10957_p3() {
    p_shl9_fu_10957_p3 = esl_concat<1,3>(tmp_1009_fu_10941_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl_cast_fu_10288_p1() {
    p_shl_cast_fu_10288_p1 = esl_zext<7,6>(p_shl_fu_10280_p3.read());
}

void ShuffleNetV2::thread_p_shl_fu_10280_p3() {
    p_shl_fu_10280_p3 = esl_concat<1,5>(tmp_984_fu_10276_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_10_fu_17888_p2() {
    shuffle_conv_1x1_V8_10_fu_17888_p2 = (!tmp_1599_cast_fu_17884_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1599_cast_fu_17884_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_11_fu_18610_p2() {
    shuffle_conv_1x1_V8_11_fu_18610_p2 = (!tmp_1638_cast_fu_18606_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1638_cast_fu_18606_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_12_fu_19375_p2() {
    shuffle_conv_1x1_V8_12_fu_19375_p2 = (!tmp_1677_cast_fu_19371_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1677_cast_fu_19371_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_13_fu_20097_p2() {
    shuffle_conv_1x1_V8_13_fu_20097_p2 = (!tmp_1716_cast_fu_20093_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1716_cast_fu_20093_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_14_fu_20866_p2() {
    shuffle_conv_1x1_V8_14_fu_20866_p2 = (!tmp_1755_cast_fu_20862_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1755_cast_fu_20862_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_15_fu_21596_p2() {
    shuffle_conv_1x1_V8_15_fu_21596_p2 = (!tmp_1796_cast_fu_21592_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1796_cast_fu_21592_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_16_fu_22365_p2() {
    shuffle_conv_1x1_V8_16_fu_22365_p2 = (!tmp_1836_cast_fu_22361_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1836_cast_fu_22361_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_17_fu_23099_p2() {
    shuffle_conv_1x1_V8_17_fu_23099_p2 = (!tmp_1877_cast_fu_23095_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1877_cast_fu_23095_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_18_fu_23872_p2() {
    shuffle_conv_1x1_V8_18_fu_23872_p2 = (!tmp_1915_cast_fu_23868_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1915_cast_fu_23868_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_19_fu_24375_p2() {
    shuffle_conv_1x1_V8_19_fu_24375_p2 = (!tmp_1937_cast_fu_24371_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1937_cast_fu_24371_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_1_fu_12051_p2() {
    shuffle_conv_1x1_V8_1_fu_12051_p2 = (!tmp_1300_cast_fu_12047_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1300_cast_fu_12047_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_20_fu_25128_p2() {
    shuffle_conv_1x1_V8_20_fu_25128_p2 = (!tmp_1971_cast_fu_25124_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1971_cast_fu_25124_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_21_fu_25881_p2() {
    shuffle_conv_1x1_V8_21_fu_25881_p2 = (!tmp_2011_cast_fu_25877_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2011_cast_fu_25877_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_22_fu_26472_p2() {
    shuffle_conv_1x1_V8_22_fu_26472_p2 = (!tmp_2038_cast_fu_26468_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2038_cast_fu_26468_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_23_fu_27225_p2() {
    shuffle_conv_1x1_V8_23_fu_27225_p2 = (!tmp_2077_cast_fu_27221_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2077_cast_fu_27221_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_24_fu_27939_p2() {
    shuffle_conv_1x1_V8_24_fu_27939_p2 = (!tmp_2115_cast_fu_27935_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2115_cast_fu_27935_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_25_fu_28696_p2() {
    shuffle_conv_1x1_V8_25_fu_28696_p2 = (!tmp_2153_cast_fu_28692_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2153_cast_fu_28692_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_26_fu_29410_p2() {
    shuffle_conv_1x1_V8_26_fu_29410_p2 = (!tmp_2191_cast_fu_29406_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2191_cast_fu_29406_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_27_fu_30159_p2() {
    shuffle_conv_1x1_V8_27_fu_30159_p2 = (!tmp_2228_cast_fu_30155_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2228_cast_fu_30155_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_28_fu_11286_p2() {
    shuffle_conv_1x1_V8_28_fu_11286_p2 = (!tmp_1259_cast1_fu_11282_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1259_cast1_fu_11282_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_29_fu_11291_p1() {
    shuffle_conv_1x1_V8_29_fu_11291_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_28_fu_11286_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_2_fu_12654_p2() {
    shuffle_conv_1x1_V8_2_fu_12654_p2 = (!tmp_1328_cast_fu_12650_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1328_cast_fu_12650_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_30_fu_12056_p1() {
    shuffle_conv_1x1_V8_30_fu_12056_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_1_fu_12051_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_31_fu_12659_p1() {
    shuffle_conv_1x1_V8_31_fu_12659_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_2_fu_12654_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_32_fu_13424_p1() {
    shuffle_conv_1x1_V8_32_fu_13424_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_3_fu_13419_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_33_fu_14146_p1() {
    shuffle_conv_1x1_V8_33_fu_14146_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_4_fu_14141_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_34_fu_14911_p1() {
    shuffle_conv_1x1_V8_34_fu_14911_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_5_fu_14906_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_35_fu_15645_p1() {
    shuffle_conv_1x1_V8_35_fu_15645_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_6_fu_15640_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_36_fu_16410_p1() {
    shuffle_conv_1x1_V8_36_fu_16410_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_7_fu_16405_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_37_fu_17136_p1() {
    shuffle_conv_1x1_V8_37_fu_17136_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_8_fu_17131_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_38_fu_17893_p1() {
    shuffle_conv_1x1_V8_38_fu_17893_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_10_fu_17888_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_39_fu_18615_p1() {
    shuffle_conv_1x1_V8_39_fu_18615_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_11_fu_18610_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_3_fu_13419_p2() {
    shuffle_conv_1x1_V8_3_fu_13419_p2 = (!tmp_1366_cast_fu_13415_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1366_cast_fu_13415_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_40_fu_19380_p1() {
    shuffle_conv_1x1_V8_40_fu_19380_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_12_fu_19375_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_41_fu_20102_p1() {
    shuffle_conv_1x1_V8_41_fu_20102_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_13_fu_20097_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_42_fu_20871_p1() {
    shuffle_conv_1x1_V8_42_fu_20871_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_14_fu_20866_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_43_fu_21601_p1() {
    shuffle_conv_1x1_V8_43_fu_21601_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_15_fu_21596_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_44_fu_22370_p1() {
    shuffle_conv_1x1_V8_44_fu_22370_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_16_fu_22365_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_45_fu_23104_p1() {
    shuffle_conv_1x1_V8_45_fu_23104_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_17_fu_23099_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_46_fu_23877_p1() {
    shuffle_conv_1x1_V8_46_fu_23877_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_18_fu_23872_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_47_fu_24380_p1() {
    shuffle_conv_1x1_V8_47_fu_24380_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_19_fu_24375_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_48_fu_25133_p1() {
    shuffle_conv_1x1_V8_48_fu_25133_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_20_fu_25128_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_49_fu_25886_p1() {
    shuffle_conv_1x1_V8_49_fu_25886_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_21_fu_25881_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_4_fu_14141_p2() {
    shuffle_conv_1x1_V8_4_fu_14141_p2 = (!tmp_1405_cast_fu_14137_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1405_cast_fu_14137_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_50_fu_26477_p1() {
    shuffle_conv_1x1_V8_50_fu_26477_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_22_fu_26472_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_51_fu_27230_p1() {
    shuffle_conv_1x1_V8_51_fu_27230_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_23_fu_27225_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_52_fu_27944_p1() {
    shuffle_conv_1x1_V8_52_fu_27944_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_24_fu_27939_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_53_fu_28701_p1() {
    shuffle_conv_1x1_V8_53_fu_28701_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_25_fu_28696_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_54_fu_29415_p1() {
    shuffle_conv_1x1_V8_54_fu_29415_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_26_fu_29410_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_55_fu_30164_p1() {
    shuffle_conv_1x1_V8_55_fu_30164_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_27_fu_30159_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_5_fu_14906_p2() {
    shuffle_conv_1x1_V8_5_fu_14906_p2 = (!tmp_1443_cast_fu_14902_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1443_cast_fu_14902_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_6_fu_15640_p2() {
    shuffle_conv_1x1_V8_6_fu_15640_p2 = (!tmp_1484_cast_fu_15636_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1484_cast_fu_15636_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_7_fu_16405_p2() {
    shuffle_conv_1x1_V8_7_fu_16405_p2 = (!tmp_1522_cast_fu_16401_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1522_cast_fu_16401_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_8_fu_17131_p2() {
    shuffle_conv_1x1_V8_8_fu_17131_p2 = (!tmp_1561_cast_fu_17127_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1561_cast_fu_17127_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_9_fu_10521_p2() {
    shuffle_conv_1x1_V8_9_fu_10521_p2 = (!tmp_1224_cast_fu_10517_p1.read().is_01() || !tmp_490_cast_reg_30684.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1224_cast_fu_10517_p1.read()) + sc_bigint<33>(tmp_490_cast_reg_30684.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_s_fu_10526_p1() {
    shuffle_conv_1x1_V8_s_fu_10526_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_9_fu_10521_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_10_fu_24748_p2() {
    shuffle_conv_3x3_V6_10_fu_24748_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_1598_fu_24743_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_1598_fu_24743_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_11_fu_25505_p2() {
    shuffle_conv_3x3_V6_11_fu_25505_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_1627_fu_25500_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_1627_fu_25500_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_12_fu_26841_p2() {
    shuffle_conv_3x3_V6_12_fu_26841_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_1683_fu_26836_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_1683_fu_26836_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_13_fu_28320_p2() {
    shuffle_conv_3x3_V6_13_fu_28320_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_1750_fu_28315_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_1750_fu_28315_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_14_fu_29783_p2() {
    shuffle_conv_3x3_V6_14_fu_29783_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_1814_fu_29778_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_1814_fu_29778_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_1_fu_18987_p2() {
    shuffle_conv_3x3_V6_1_fu_18987_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_1356_fu_18982_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_1356_fu_18982_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_2_fu_20478_p2() {
    shuffle_conv_3x3_V6_2_fu_20478_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_1419_fu_20473_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_1419_fu_20473_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_3_fu_21969_p2() {
    shuffle_conv_3x3_V6_3_fu_21969_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_1483_fu_21964_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_1483_fu_21964_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_4_fu_23472_p2() {
    shuffle_conv_3x3_V6_4_fu_23472_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_1549_fu_23467_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_1549_fu_23467_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_5_fu_10894_p2() {
    shuffle_conv_3x3_V6_5_fu_10894_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_1024_fu_10889_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_1024_fu_10889_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_6_fu_11659_p2() {
    shuffle_conv_3x3_V6_6_fu_11659_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_1051_fu_11654_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_1051_fu_11654_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_7_fu_13031_p2() {
    shuffle_conv_3x3_V6_7_fu_13031_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_1105_fu_13026_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_1105_fu_13026_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_8_fu_14514_p2() {
    shuffle_conv_3x3_V6_8_fu_14514_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_1167_fu_14509_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_1167_fu_14509_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_9_fu_16013_p2() {
    shuffle_conv_3x3_V6_9_fu_16013_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_1231_fu_16008_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_1231_fu_16008_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_s_fu_17500_p2() {
    shuffle_conv_3x3_V6_s_fu_17500_p2 = (!tmp_373_reg_30725.read().is_01() || !tmp_1293_fu_17495_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_373_reg_30725.read()) + sc_biguint<64>(tmp_1293_fu_17495_p2.read()));
}

void ShuffleNetV2::thread_shuffleunit0_0_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state286.read())) {
        shuffleunit0_0_outpu_address0 =  (sc_lv<14>) (tmp_1171_cast_fu_9391_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        shuffleunit0_0_outpu_address0 =  (sc_lv<14>) (tmp_1123_cast_fu_8752_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read())) {
        shuffleunit0_0_outpu_address0 = grp_shuffle_24_p_fu_6542_output_V_address0.read();
    } else {
        shuffleunit0_0_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit0_0_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state286.read()))) {
        shuffleunit0_0_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read())) {
        shuffleunit0_0_outpu_ce0 = grp_shuffle_24_p_fu_6542_output_V_ce0.read();
    } else {
        shuffleunit0_0_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_0_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read())) {
        shuffleunit0_0_outpu_we0 = grp_shuffle_24_p_fu_6542_output_V_we0.read();
    } else {
        shuffleunit0_0_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_1_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state357.read())) {
        shuffleunit0_1_outpu_address0 =  (sc_lv<14>) (tmp_1208_cast_fu_10255_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state291.read())) {
        shuffleunit0_1_outpu_address0 =  (sc_lv<14>) (tmp_1175_cast_fu_9590_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state288.read())) {
        shuffleunit0_1_outpu_address0 = grp_shuffle_24_p_fu_6542_output_V_address0.read();
    } else {
        shuffleunit0_1_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit0_1_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state357.read()))) {
        shuffleunit0_1_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state288.read())) {
        shuffleunit0_1_outpu_ce0 = grp_shuffle_24_p_fu_6542_output_V_ce0.read();
    } else {
        shuffleunit0_1_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_1_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state288.read())) {
        shuffleunit0_1_outpu_we0 = grp_shuffle_24_p_fu_6542_output_V_we0.read();
    } else {
        shuffleunit0_1_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_2_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state359.read())) {
        shuffleunit0_2_outpu_address0 = grp_shuffle_24_p_fu_6542_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read())) {
        shuffleunit0_2_outpu_address0 = grp_subconv_1x1_16p_p_fu_6480_shuffleunit0_2_outpu_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state469.read())) {
        shuffleunit0_2_outpu_address0 = grp_subconv_3x3_16_strid_fu_6394_input_V_address0.read();
    } else {
        shuffleunit0_2_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit0_2_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state359.read())) {
        shuffleunit0_2_outpu_ce0 = grp_shuffle_24_p_fu_6542_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read())) {
        shuffleunit0_2_outpu_ce0 = grp_subconv_1x1_16p_p_fu_6480_shuffleunit0_2_outpu_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state469.read())) {
        shuffleunit0_2_outpu_ce0 = grp_subconv_3x3_16_strid_fu_6394_input_V_ce0.read();
    } else {
        shuffleunit0_2_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_2_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state359.read())) {
        shuffleunit0_2_outpu_we0 = grp_shuffle_24_p_fu_6542_output_V_we0.read();
    } else {
        shuffleunit0_2_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_0_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state673.read())) {
        shuffleunit1_0_outpu_address0 =  (sc_lv<14>) (tmp_1464_cast_fu_15155_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state589.read())) {
        shuffleunit1_0_outpu_address0 =  (sc_lv<14>) (tmp_1388_cast_fu_13866_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read())) {
        shuffleunit1_0_outpu_address0 = grp_shuffle_48_p_fu_6566_output_V_address0.read();
    } else {
        shuffleunit1_0_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_0_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state589.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state673.read()))) {
        shuffleunit1_0_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read())) {
        shuffleunit1_0_outpu_ce0 = grp_shuffle_48_p_fu_6566_output_V_ce0.read();
    } else {
        shuffleunit1_0_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_0_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read())) {
        shuffleunit1_0_outpu_we0 = grp_shuffle_48_p_fu_6566_output_V_we0.read();
    } else {
        shuffleunit1_0_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_1_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state762.read())) {
        shuffleunit1_1_outpu_address0 =  (sc_lv<14>) (tmp_1543_cast_fu_16654_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state678.read())) {
        shuffleunit1_1_outpu_address0 =  (sc_lv<14>) (tmp_1466_cast_fu_15362_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state675.read())) {
        shuffleunit1_1_outpu_address0 = grp_shuffle_48_p_fu_6566_output_V_address0.read();
    } else {
        shuffleunit1_1_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_1_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state678.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state762.read()))) {
        shuffleunit1_1_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state675.read())) {
        shuffleunit1_1_outpu_ce0 = grp_shuffle_48_p_fu_6566_output_V_ce0.read();
    } else {
        shuffleunit1_1_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_1_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state675.read())) {
        shuffleunit1_1_outpu_we0 = grp_shuffle_48_p_fu_6566_output_V_we0.read();
    } else {
        shuffleunit1_1_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_2_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state851.read())) {
        shuffleunit1_2_outpu_address0 =  (sc_lv<14>) (tmp_1620_cast_fu_18133_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state767.read())) {
        shuffleunit1_2_outpu_address0 =  (sc_lv<14>) (tmp_1544_cast_fu_16856_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state764.read())) {
        shuffleunit1_2_outpu_address0 = grp_shuffle_48_p_fu_6566_output_V_address0.read();
    } else {
        shuffleunit1_2_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_2_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state767.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state851.read()))) {
        shuffleunit1_2_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state764.read())) {
        shuffleunit1_2_outpu_ce0 = grp_shuffle_48_p_fu_6566_output_V_ce0.read();
    } else {
        shuffleunit1_2_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_2_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state764.read())) {
        shuffleunit1_2_outpu_we0 = grp_shuffle_48_p_fu_6566_output_V_we0.read();
    } else {
        shuffleunit1_2_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_3_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state940.read())) {
        shuffleunit1_3_outpu_address0 =  (sc_lv<14>) (tmp_1698_cast_fu_19620_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state856.read())) {
        shuffleunit1_3_outpu_address0 =  (sc_lv<14>) (tmp_1622_cast_fu_18340_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state853.read())) {
        shuffleunit1_3_outpu_address0 = grp_shuffle_48_p_fu_6566_output_V_address0.read();
    } else {
        shuffleunit1_3_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_3_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state856.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state940.read()))) {
        shuffleunit1_3_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state853.read())) {
        shuffleunit1_3_outpu_ce0 = grp_shuffle_48_p_fu_6566_output_V_ce0.read();
    } else {
        shuffleunit1_3_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_3_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state853.read())) {
        shuffleunit1_3_outpu_we0 = grp_shuffle_48_p_fu_6566_output_V_we0.read();
    } else {
        shuffleunit1_3_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_4_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1029.read())) {
        shuffleunit1_4_outpu_address0 =  (sc_lv<14>) (tmp_1776_cast_fu_21111_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        shuffleunit1_4_outpu_address0 =  (sc_lv<14>) (tmp_1699_cast_fu_19822_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state942.read())) {
        shuffleunit1_4_outpu_address0 = grp_shuffle_48_p_fu_6566_output_V_address0.read();
    } else {
        shuffleunit1_4_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_4_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1029.read()))) {
        shuffleunit1_4_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state942.read())) {
        shuffleunit1_4_outpu_ce0 = grp_shuffle_48_p_fu_6566_output_V_ce0.read();
    } else {
        shuffleunit1_4_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_4_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state942.read())) {
        shuffleunit1_4_outpu_we0 = grp_shuffle_48_p_fu_6566_output_V_we0.read();
    } else {
        shuffleunit1_4_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_5_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read())) {
        shuffleunit1_5_outpu_address0 =  (sc_lv<14>) (tmp_1857_cast_fu_22614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1034.read())) {
        shuffleunit1_5_outpu_address0 =  (sc_lv<14>) (tmp_1778_cast_fu_21318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1031.read())) {
        shuffleunit1_5_outpu_address0 = grp_shuffle_48_p_fu_6566_output_V_address0.read();
    } else {
        shuffleunit1_5_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_5_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1034.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()))) {
        shuffleunit1_5_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1031.read())) {
        shuffleunit1_5_outpu_ce0 = grp_shuffle_48_p_fu_6566_output_V_ce0.read();
    } else {
        shuffleunit1_5_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_5_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1031.read())) {
        shuffleunit1_5_outpu_we0 = grp_shuffle_48_p_fu_6566_output_V_we0.read();
    } else {
        shuffleunit1_5_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_6_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1207.read())) {
        shuffleunit1_6_outpu_address0 =  (sc_lv<14>) (tmp_1922_cast_fu_24121_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1123.read())) {
        shuffleunit1_6_outpu_address0 =  (sc_lv<14>) (tmp_1859_cast_fu_22821_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1120.read())) {
        shuffleunit1_6_outpu_address0 = grp_shuffle_48_p_fu_6566_output_V_address0.read();
    } else {
        shuffleunit1_6_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_6_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1123.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1207.read()))) {
        shuffleunit1_6_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1120.read())) {
        shuffleunit1_6_outpu_ce0 = grp_shuffle_48_p_fu_6566_output_V_ce0.read();
    } else {
        shuffleunit1_6_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_6_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1120.read())) {
        shuffleunit1_6_outpu_we0 = grp_shuffle_48_p_fu_6566_output_V_we0.read();
    } else {
        shuffleunit1_6_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_7_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1209.read())) {
        shuffleunit1_7_outpu_address0 = grp_shuffle_48_p_fu_6566_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1235.read())) {
        shuffleunit1_7_outpu_address0 = grp_subconv_1x1_8p_p_fu_6468_shuffleunit1_7_outpu_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read())) {
        shuffleunit1_7_outpu_address0 = grp_subconv_3x3_8_stride_fu_6381_input_V_address0.read();
    } else {
        shuffleunit1_7_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_7_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1209.read())) {
        shuffleunit1_7_outpu_ce0 = grp_shuffle_48_p_fu_6566_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1235.read())) {
        shuffleunit1_7_outpu_ce0 = grp_subconv_1x1_8p_p_fu_6468_shuffleunit1_7_outpu_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read())) {
        shuffleunit1_7_outpu_ce0 = grp_subconv_3x3_8_stride_fu_6381_input_V_ce0.read();
    } else {
        shuffleunit1_7_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_7_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1209.read())) {
        shuffleunit1_7_outpu_we0 = grp_shuffle_48_p_fu_6566_output_V_we0.read();
    } else {
        shuffleunit1_7_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_0_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1523.read())) {
        shuffleunit2_0_outpu_address0 =  (sc_lv<13>) (tmp_2174_cast_fu_28945_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1439.read())) {
        shuffleunit2_0_outpu_address0 =  (sc_lv<13>) (tmp_2099_cast_fu_27676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1436.read())) {
        shuffleunit2_0_outpu_address0 = grp_shuffle_96_p_fu_6554_output_V_address0.read();
    } else {
        shuffleunit2_0_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_0_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1439.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1523.read()))) {
        shuffleunit2_0_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1436.read())) {
        shuffleunit2_0_outpu_ce0 = grp_shuffle_96_p_fu_6554_output_V_ce0.read();
    } else {
        shuffleunit2_0_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_0_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1436.read())) {
        shuffleunit2_0_outpu_we0 = grp_shuffle_96_p_fu_6554_output_V_we0.read();
    } else {
        shuffleunit2_0_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_1_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1612.read())) {
        shuffleunit2_1_outpu_address0 =  (sc_lv<13>) (tmp_2245_cast_fu_30408_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1528.read())) {
        shuffleunit2_1_outpu_address0 =  (sc_lv<13>) (tmp_2175_cast_fu_29147_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1525.read())) {
        shuffleunit2_1_outpu_address0 = grp_shuffle_96_p_fu_6554_output_V_address0.read();
    } else {
        shuffleunit2_1_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_1_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1528.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1612.read()))) {
        shuffleunit2_1_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1525.read())) {
        shuffleunit2_1_outpu_ce0 = grp_shuffle_96_p_fu_6554_output_V_ce0.read();
    } else {
        shuffleunit2_1_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_1_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1525.read())) {
        shuffleunit2_1_outpu_we0 = grp_shuffle_96_p_fu_6554_output_V_we0.read();
    } else {
        shuffleunit2_1_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1618.read())) {
        shuffleunit2_2_outpu_1_address0 =  (sc_lv<12>) (tmp_2246_cast_fu_30570_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read())) {
        shuffleunit2_2_outpu_1_address0 = grp_conv_last_fu_6455_input_V_address0.read();
    } else {
        shuffleunit2_2_outpu_1_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1618.read())) {
        shuffleunit2_2_outpu_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read())) {
        shuffleunit2_2_outpu_1_ce0 = grp_conv_last_fu_6455_input_V_ce0.read();
    } else {
        shuffleunit2_2_outpu_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1618.read())) {
        shuffleunit2_2_outpu_1_we0 = ap_const_logic_1;
    } else {
        shuffleunit2_2_outpu_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1617.read())) {
        shuffleunit2_2_outpu_address0 =  (sc_lv<13>) (tmp_2247_cast_fu_30565_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read())) {
        shuffleunit2_2_outpu_address0 = grp_shuffle_96_p_fu_6554_output_V_address0.read();
    } else {
        shuffleunit2_2_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1617.read())) {
        shuffleunit2_2_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read())) {
        shuffleunit2_2_outpu_ce0 = grp_shuffle_96_p_fu_6554_output_V_ce0.read();
    } else {
        shuffleunit2_2_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read())) {
        shuffleunit2_2_outpu_we0 = grp_shuffle_96_p_fu_6554_output_V_we0.read();
    } else {
        shuffleunit2_2_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_tmp10_fu_12145_p2() {
    tmp10_fu_12145_p2 = (!ap_const_lv10_228.is_01() || !tmp_527_cast_fu_12136_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_527_cast_fu_12136_p1.read()));
}

void ShuffleNetV2::thread_tmp11_fu_12602_p2() {
    tmp11_fu_12602_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_570_cast_fu_12598_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_570_cast_fu_12598_p1.read()));
}

void ShuffleNetV2::thread_tmp12_fu_12748_p2() {
    tmp12_fu_12748_p2 = (!ap_const_lv10_258.is_01() || !tmp_556_cast_fu_12739_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_556_cast_fu_12739_p1.read()));
}

void ShuffleNetV2::thread_tmp13_cast1_fu_12902_p1() {
    tmp13_cast1_fu_12902_p1 = esl_sext<8,7>(tmp13_fu_12896_p2.read());
}

void ShuffleNetV2::thread_tmp13_cast_fu_12906_p1() {
    tmp13_cast_fu_12906_p1 = esl_zext<9,8>(tmp13_cast1_fu_12902_p1.read());
}

void ShuffleNetV2::thread_tmp13_fu_12896_p2() {
    tmp13_fu_12896_p2 = (!ap_const_lv7_58.is_01() || !tmp_419_fu_12885_p2.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_419_fu_12885_p2.read()));
}

void ShuffleNetV2::thread_tmp14_fu_13121_p2() {
    tmp14_fu_13121_p2 = (!ap_const_lv10_288.is_01() || !tmp_574_cast_fu_13112_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_288) + sc_bigint<10>(tmp_574_cast_fu_13112_p1.read()));
}

void ShuffleNetV2::thread_tmp15_fu_13367_p2() {
    tmp15_fu_13367_p2 = (!ap_const_lv10_258.is_01() || !tmp_603_cast_fu_13363_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_603_cast_fu_13363_p1.read()));
}

void ShuffleNetV2::thread_tmp16_fu_13513_p2() {
    tmp16_fu_13513_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_584_cast_fu_13504_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_584_cast_fu_13504_p1.read()));
}

void ShuffleNetV2::thread_tmp17_fu_14089_p2() {
    tmp17_fu_14089_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_630_cast_fu_14085_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_630_cast_fu_14085_p1.read()));
}

void ShuffleNetV2::thread_tmp18_fu_14235_p2() {
    tmp18_fu_14235_p2 = (!ap_const_lv10_2E8.is_01() || !tmp_616_cast_fu_14226_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2E8) + sc_bigint<10>(tmp_616_cast_fu_14226_p1.read()));
}

void ShuffleNetV2::thread_tmp19_fu_14387_p2() {
    tmp19_fu_14387_p2 = (!ap_const_lv9_108.is_01() || !tmp_653_cast_fu_14378_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_108) + sc_bigint<9>(tmp_653_cast_fu_14378_p1.read()));
}

void ShuffleNetV2::thread_tmp1_fu_10469_p2() {
    tmp1_fu_10469_p2 = (!ap_const_lv9_D8.is_01() || !tmp_480_cast_fu_10465_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_D8) + sc_bigint<9>(tmp_480_cast_fu_10465_p1.read()));
}

void ShuffleNetV2::thread_tmp20_fu_14604_p2() {
    tmp20_fu_14604_p2 = (!ap_const_lv9_118.is_01() || !tmp_634_cast_cast_fu_14595_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_118) + sc_bigint<9>(tmp_634_cast_cast_fu_14595_p1.read()));
}

void ShuffleNetV2::thread_tmp21_fu_14854_p2() {
    tmp21_fu_14854_p2 = (!ap_const_lv10_318.is_01() || !tmp_663_cast_fu_14850_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_663_cast_fu_14850_p1.read()));
}

void ShuffleNetV2::thread_tmp22_fu_15000_p2() {
    tmp22_fu_15000_p2 = (!ap_const_lv9_148.is_01() || !tmp_644_cast_cast_fu_14991_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_148) + sc_bigint<9>(tmp_644_cast_cast_fu_14991_p1.read()));
}

void ShuffleNetV2::thread_tmp23_fu_15580_p2() {
    tmp23_fu_15580_p2 = (!ap_const_lv9_178.is_01() || !tmp_690_cast_cast_fu_15576_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_690_cast_cast_fu_15576_p1.read()));
}

void ShuffleNetV2::thread_tmp24_fu_15734_p2() {
    tmp24_fu_15734_p2 = (!ap_const_lv9_178.is_01() || !tmp_676_cast_cast_fu_15725_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_676_cast_cast_fu_15725_p1.read()));
}

void ShuffleNetV2::thread_tmp25_fu_15890_p2() {
    tmp25_fu_15890_p2 = (!ap_const_lv9_138.is_01() || !tmp_713_cast_fu_15881_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_713_cast_fu_15881_p1.read()));
}

void ShuffleNetV2::thread_tmp26_fu_16103_p2() {
    tmp26_fu_16103_p2 = (!ap_const_lv8_A8.is_01() || !tmp_694_cast_cast_fu_16094_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_694_cast_cast_fu_16094_p1.read()));
}

void ShuffleNetV2::thread_tmp27_fu_16353_p2() {
    tmp27_fu_16353_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_723_cast_fu_16349_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_723_cast_fu_16349_p1.read()));
}

void ShuffleNetV2::thread_tmp28_cast1_fu_16501_p1() {
    tmp28_cast1_fu_16501_p1 = esl_sext<10,7>(tmp28_fu_16495_p2.read());
}

void ShuffleNetV2::thread_tmp28_cast_fu_16505_p1() {
    tmp28_cast_fu_16505_p1 = esl_zext<11,10>(tmp28_cast1_fu_16501_p1.read());
}

void ShuffleNetV2::thread_tmp28_fu_16495_p2() {
    tmp28_fu_16495_p2 = (!ap_const_lv7_58.is_01() || !tmp_517_fu_16484_p2.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_517_fu_16484_p2.read()));
}

void ShuffleNetV2::thread_tmp29_fu_17079_p2() {
    tmp29_fu_17079_p2 = (!ap_const_lv11_438.is_01() || !tmp_750_cast_fu_17075_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_750_cast_fu_17075_p1.read()));
}

void ShuffleNetV2::thread_tmp2_fu_10615_p2() {
    tmp2_fu_10615_p2 = (!ap_const_lv9_168.is_01() || !tmp_466_cast_fu_10606_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_466_cast_fu_10606_p1.read()));
}

void ShuffleNetV2::thread_tmp30_fu_17225_p2() {
    tmp30_fu_17225_p2 = (!ap_const_lv11_408.is_01() || !tmp_736_cast_fu_17216_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_408) + sc_bigint<11>(tmp_736_cast_fu_17216_p1.read()));
}

void ShuffleNetV2::thread_tmp31_fu_17377_p2() {
    tmp31_fu_17377_p2 = (!ap_const_lv9_168.is_01() || !tmp_773_cast_fu_17368_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_773_cast_fu_17368_p1.read()));
}

void ShuffleNetV2::thread_tmp32_fu_17590_p2() {
    tmp32_fu_17590_p2 = (!ap_const_lv11_438.is_01() || !tmp_754_cast_fu_17581_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_754_cast_fu_17581_p1.read()));
}

void ShuffleNetV2::thread_tmp33_fu_17836_p2() {
    tmp33_fu_17836_p2 = (!ap_const_lv11_498.is_01() || !tmp_783_cast_fu_17832_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_783_cast_fu_17832_p1.read()));
}

void ShuffleNetV2::thread_tmp34_fu_17982_p2() {
    tmp34_fu_17982_p2 = (!ap_const_lv11_468.is_01() || !tmp_764_cast_fu_17973_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_468) + sc_bigint<11>(tmp_764_cast_fu_17973_p1.read()));
}

void ShuffleNetV2::thread_tmp35_fu_18558_p2() {
    tmp35_fu_18558_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_810_cast_fu_18554_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_810_cast_fu_18554_p1.read()));
}

void ShuffleNetV2::thread_tmp36_fu_18704_p2() {
    tmp36_fu_18704_p2 = (!ap_const_lv11_498.is_01() || !tmp_796_cast_fu_18695_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_796_cast_fu_18695_p1.read()));
}

void ShuffleNetV2::thread_tmp37_fu_18856_p2() {
    tmp37_fu_18856_p2 = (!ap_const_lv8_98.is_01() || !tmp_833_cast_cast_fu_18847_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_833_cast_cast_fu_18847_p1.read()));
}

void ShuffleNetV2::thread_tmp38_fu_19077_p2() {
    tmp38_fu_19077_p2 = (!ap_const_lv11_4C8.is_01() || !tmp_814_cast_fu_19068_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4C8) + sc_bigint<11>(tmp_814_cast_fu_19068_p1.read()));
}

void ShuffleNetV2::thread_tmp39_fu_19323_p2() {
    tmp39_fu_19323_p2 = (!ap_const_lv11_558.is_01() || !tmp_843_cast_fu_19319_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_843_cast_fu_19319_p1.read()));
}

void ShuffleNetV2::thread_tmp3_fu_10767_p2() {
    tmp3_fu_10767_p2 = (!ap_const_lv8_78.is_01() || !tmp_503_cast_fu_10758_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_78) + sc_bigint<8>(tmp_503_cast_fu_10758_p1.read()));
}

void ShuffleNetV2::thread_tmp40_fu_19469_p2() {
    tmp40_fu_19469_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_824_cast_fu_19460_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_824_cast_fu_19460_p1.read()));
}

void ShuffleNetV2::thread_tmp41_fu_20045_p2() {
    tmp41_fu_20045_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_870_cast_fu_20041_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_870_cast_fu_20041_p1.read()));
}

void ShuffleNetV2::thread_tmp42_fu_20191_p2() {
    tmp42_fu_20191_p2 = (!ap_const_lv11_528.is_01() || !tmp_856_cast_fu_20182_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_528) + sc_bigint<11>(tmp_856_cast_fu_20182_p1.read()));
}

void ShuffleNetV2::thread_tmp43_fu_20343_p2() {
    tmp43_fu_20343_p2 = (!ap_const_lv8_C8.is_01() || !tmp_893_cast_cast_fu_20334_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_893_cast_cast_fu_20334_p1.read()));
}

void ShuffleNetV2::thread_tmp44_fu_20568_p2() {
    tmp44_fu_20568_p2 = (!ap_const_lv11_558.is_01() || !tmp_874_cast_fu_20559_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_874_cast_fu_20559_p1.read()));
}

void ShuffleNetV2::thread_tmp45_fu_20814_p2() {
    tmp45_fu_20814_p2 = (!ap_const_lv11_618.is_01() || !tmp_903_cast_fu_20810_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_618) + sc_bigint<11>(tmp_903_cast_fu_20810_p1.read()));
}

void ShuffleNetV2::thread_tmp46_fu_20960_p2() {
    tmp46_fu_20960_p2 = (!ap_const_lv11_588.is_01() || !tmp_884_cast_fu_20951_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_588) + sc_bigint<11>(tmp_884_cast_fu_20951_p1.read()));
}

void ShuffleNetV2::thread_tmp47_fu_21536_p2() {
    tmp47_fu_21536_p2 = (!ap_const_lv10_278.is_01() || !tmp_930_cast_cast_fu_21532_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_930_cast_cast_fu_21532_p1.read()));
}

void ShuffleNetV2::thread_tmp48_fu_21690_p2() {
    tmp48_fu_21690_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_916_cast_fu_21681_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_916_cast_fu_21681_p1.read()));
}

void ShuffleNetV2::thread_tmp49_fu_21842_p2() {
    tmp49_fu_21842_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_953_cast_fu_21833_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_953_cast_fu_21833_p1.read()));
}

void ShuffleNetV2::thread_tmp4_fu_10984_p2() {
    tmp4_fu_10984_p2 = (!ap_const_lv8_98.is_01() || !tmp_484_cast_cast_fu_10975_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_484_cast_cast_fu_10975_p1.read()));
}

void ShuffleNetV2::thread_tmp50_fu_22059_p2() {
    tmp50_fu_22059_p2 = (!ap_const_lv11_5E8.is_01() || !tmp_934_cast_fu_22050_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5E8) + sc_bigint<11>(tmp_934_cast_fu_22050_p1.read()));
}

void ShuffleNetV2::thread_tmp51_fu_22305_p2() {
    tmp51_fu_22305_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_963_cast_cast_fu_22301_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_963_cast_cast_fu_22301_p1.read()));
}

void ShuffleNetV2::thread_tmp52_fu_22459_p2() {
    tmp52_fu_22459_p2 = (!ap_const_lv10_218.is_01() || !tmp_944_cast_cast_fu_22450_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_218) + sc_bigint<10>(tmp_944_cast_cast_fu_22450_p1.read()));
}

void ShuffleNetV2::thread_tmp53_fu_23039_p2() {
    tmp53_fu_23039_p2 = (!ap_const_lv9_138.is_01() || !tmp_990_cast_cast_fu_23035_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_990_cast_cast_fu_23035_p1.read()));
}

void ShuffleNetV2::thread_tmp54_fu_23193_p2() {
    tmp54_fu_23193_p2 = (!ap_const_lv10_248.is_01() || !tmp_976_cast_cast_fu_23184_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_248) + sc_bigint<10>(tmp_976_cast_cast_fu_23184_p1.read()));
}

void ShuffleNetV2::thread_tmp55_fu_23349_p2() {
    tmp55_fu_23349_p2 = (!ap_const_lv10_228.is_01() || !tmp_1013_cast_fu_23340_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_1013_cast_fu_23340_p1.read()));
}

void ShuffleNetV2::thread_tmp56_fu_23562_p2() {
    tmp56_fu_23562_p2 = (!ap_const_lv10_278.is_01() || !tmp_994_cast_cast_fu_23553_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_994_cast_cast_fu_23553_p1.read()));
}

void ShuffleNetV2::thread_tmp57_cast1_fu_23818_p1() {
    tmp57_cast1_fu_23818_p1 = esl_sext<11,9>(tmp57_fu_23812_p2.read());
}

void ShuffleNetV2::thread_tmp57_cast_fu_23822_p1() {
    tmp57_cast_fu_23822_p1 = esl_zext<12,11>(tmp57_cast1_fu_23818_p1.read());
}

void ShuffleNetV2::thread_tmp57_fu_23812_p2() {
    tmp57_fu_23812_p2 = (!ap_const_lv9_198.is_01() || !tmp_1023_cast_cast_fu_23808_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_1023_cast_cast_fu_23808_p1.read()));
}

void ShuffleNetV2::thread_tmp58_fu_23966_p2() {
    tmp58_fu_23966_p2 = (!ap_const_lv10_2A8.is_01() || !tmp_1004_cast_cast_fu_23957_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2A8) + sc_bigint<10>(tmp_1004_cast_cast_fu_23957_p1.read()));
}

void ShuffleNetV2::thread_tmp59_fu_24323_p2() {
    tmp59_fu_24323_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_1045_cast_fu_24319_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_1045_cast_fu_24319_p1.read()));
}

void ShuffleNetV2::thread_tmp5_fu_11234_p2() {
    tmp5_fu_11234_p2 = (!ap_const_lv9_138.is_01() || !tmp_513_cast_fu_11230_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_513_cast_fu_11230_p1.read()));
}

void ShuffleNetV2::thread_tmp60_fu_24469_p2() {
    tmp60_fu_24469_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_1031_cast_cast_fu_24460_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_1031_cast_cast_fu_24460_p1.read()));
}

void ShuffleNetV2::thread_tmp61_fu_24625_p2() {
    tmp61_fu_24625_p2 = (!ap_const_lv10_258.is_01() || !tmp_1068_cast_fu_24616_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_1068_cast_fu_24616_p1.read()));
}

void ShuffleNetV2::thread_tmp62_fu_24838_p2() {
    tmp62_fu_24838_p2 = (!ap_const_lv9_138.is_01() || !tmp_1049_cast_cast_fu_24829_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_1049_cast_cast_fu_24829_p1.read()));
}

void ShuffleNetV2::thread_tmp63_fu_25076_p2() {
    tmp63_fu_25076_p2 = (!ap_const_lv12_978.is_01() || !tmp_1078_cast_fu_25072_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_1078_cast_fu_25072_p1.read()));
}

void ShuffleNetV2::thread_tmp64_cast1_fu_25228_p1() {
    tmp64_cast1_fu_25228_p1 = esl_sext<11,9>(tmp64_fu_25222_p2.read());
}

void ShuffleNetV2::thread_tmp64_cast_fu_25232_p1() {
    tmp64_cast_fu_25232_p1 = esl_zext<12,11>(tmp64_cast1_fu_25228_p1.read());
}

void ShuffleNetV2::thread_tmp64_fu_25222_p2() {
    tmp64_fu_25222_p2 = (!ap_const_lv9_198.is_01() || !tmp_1059_cast_cast_fu_25213_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_1059_cast_cast_fu_25213_p1.read()));
}

void ShuffleNetV2::thread_tmp65_fu_25382_p2() {
    tmp65_fu_25382_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_1101_cast_fu_25373_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_1101_cast_fu_25373_p1.read()));
}

void ShuffleNetV2::thread_tmp66_fu_25595_p2() {
    tmp66_fu_25595_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_1082_cast_fu_25586_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_1082_cast_fu_25586_p1.read()));
}

void ShuffleNetV2::thread_tmp67_fu_25829_p2() {
    tmp67_fu_25829_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_1116_cast_fu_25825_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_1116_cast_fu_25825_p1.read()));
}

void ShuffleNetV2::thread_tmp68_fu_25975_p2() {
    tmp68_fu_25975_p2 = (!ap_const_lv12_858.is_01() || !tmp_1092_cast_fu_25966_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_858) + sc_bigint<12>(tmp_1092_cast_fu_25966_p1.read()));
}

void ShuffleNetV2::thread_tmp69_fu_26420_p2() {
    tmp69_fu_26420_p2 = (!ap_const_lv12_C78.is_01() || !tmp_1135_cast_fu_26416_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C78) + sc_bigint<12>(tmp_1135_cast_fu_26416_p1.read()));
}

void ShuffleNetV2::thread_tmp6_fu_11380_p2() {
    tmp6_fu_11380_p2 = (!ap_const_lv8_C8.is_01() || !tmp_494_cast_cast_fu_11371_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_494_cast_cast_fu_11371_p1.read()));
}

void ShuffleNetV2::thread_tmp70_fu_26566_p2() {
    tmp70_fu_26566_p2 = (!ap_const_lv12_8B8.is_01() || !tmp_1121_cast_fu_26557_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_8B8) + sc_bigint<12>(tmp_1121_cast_fu_26557_p1.read()));
}

void ShuffleNetV2::thread_tmp71_fu_26718_p2() {
    tmp71_fu_26718_p2 = (!ap_const_lv10_318.is_01() || !tmp_1158_cast_fu_26709_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_1158_cast_fu_26709_p1.read()));
}

void ShuffleNetV2::thread_tmp72_fu_26931_p2() {
    tmp72_fu_26931_p2 = (!ap_const_lv12_918.is_01() || !tmp_1139_cast_fu_26922_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_918) + sc_bigint<12>(tmp_1139_cast_fu_26922_p1.read()));
}

void ShuffleNetV2::thread_tmp73_fu_27165_p2() {
    tmp73_fu_27165_p2 = (!ap_const_lv11_5F8.is_01() || !tmp_1168_cast_cast_fu_27161_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5F8) + sc_bigint<11>(tmp_1168_cast_cast_fu_27161_p1.read()));
}

void ShuffleNetV2::thread_tmp74_fu_27319_p2() {
    tmp74_fu_27319_p2 = (!ap_const_lv12_978.is_01() || !tmp_1149_cast_fu_27310_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_1149_cast_fu_27310_p1.read()));
}

void ShuffleNetV2::thread_tmp75_fu_27887_p2() {
    tmp75_fu_27887_p2 = (!ap_const_lv13_F78.is_01() || !tmp_1195_cast_fu_27883_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_F78) + sc_bigint<13>(tmp_1195_cast_fu_27883_p1.read()));
}

void ShuffleNetV2::thread_tmp76_fu_28033_p2() {
    tmp76_fu_28033_p2 = (!ap_const_lv12_9D8.is_01() || !tmp_1181_cast_fu_28024_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_9D8) + sc_bigint<12>(tmp_1181_cast_fu_28024_p1.read()));
}

void ShuffleNetV2::thread_tmp77_fu_28185_p2() {
    tmp77_fu_28185_p2 = (!ap_const_lv9_178.is_01() || !tmp_1218_cast_cast_fu_28176_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_1218_cast_cast_fu_28176_p1.read()));
}

void ShuffleNetV2::thread_tmp78_fu_28410_p2() {
    tmp78_fu_28410_p2 = (!ap_const_lv12_A38.is_01() || !tmp_1199_cast_fu_28401_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A38) + sc_bigint<12>(tmp_1199_cast_fu_28401_p1.read()));
}

void ShuffleNetV2::thread_tmp79_fu_28644_p2() {
    tmp79_fu_28644_p2 = (!ap_const_lv13_10F8.is_01() || !tmp_1228_cast_fu_28640_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_10F8) + sc_bigint<13>(tmp_1228_cast_fu_28640_p1.read()));
}

void ShuffleNetV2::thread_tmp7_fu_11536_p2() {
    tmp7_fu_11536_p2 = (!ap_const_lv8_A8.is_01() || !tmp_536_cast_fu_11527_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_536_cast_fu_11527_p1.read()));
}

void ShuffleNetV2::thread_tmp80_fu_28790_p2() {
    tmp80_fu_28790_p2 = (!ap_const_lv12_A98.is_01() || !tmp_1209_cast_fu_28781_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A98) + sc_bigint<12>(tmp_1209_cast_fu_28781_p1.read()));
}

void ShuffleNetV2::thread_tmp81_fu_29358_p2() {
    tmp81_fu_29358_p2 = (!ap_const_lv13_1278.is_01() || !tmp_1255_cast_fu_29354_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1278) + sc_bigint<13>(tmp_1255_cast_fu_29354_p1.read()));
}

void ShuffleNetV2::thread_tmp82_fu_29504_p2() {
    tmp82_fu_29504_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_1241_cast_fu_29495_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_1241_cast_fu_29495_p1.read()));
}

void ShuffleNetV2::thread_tmp83_fu_29656_p2() {
    tmp83_fu_29656_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_1278_cast_fu_29647_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_1278_cast_fu_29647_p1.read()));
}

void ShuffleNetV2::thread_tmp84_fu_29873_p2() {
    tmp84_fu_29873_p2 = (!ap_const_lv12_B58.is_01() || !tmp_1259_cast_fu_29864_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_B58) + sc_bigint<12>(tmp_1259_cast_fu_29864_p1.read()));
}

void ShuffleNetV2::thread_tmp85_fu_30107_p2() {
    tmp85_fu_30107_p2 = (!ap_const_lv13_13F8.is_01() || !tmp_1288_cast_fu_30103_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_13F8) + sc_bigint<13>(tmp_1288_cast_fu_30103_p1.read()));
}

void ShuffleNetV2::thread_tmp86_fu_30253_p2() {
    tmp86_fu_30253_p2 = (!ap_const_lv12_BB8.is_01() || !tmp_1269_cast_fu_30244_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_BB8) + sc_bigint<12>(tmp_1269_cast_fu_30244_p1.read()));
}

void ShuffleNetV2::thread_tmp8_fu_11749_p2() {
    tmp8_fu_11749_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_517_cast_fu_11740_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_517_cast_fu_11740_p1.read()));
}

void ShuffleNetV2::thread_tmp9_cast_fu_12001_p1() {
    tmp9_cast_fu_12001_p1 = esl_zext<10,9>(tmp9_fu_11995_p2.read());
}

void ShuffleNetV2::thread_tmp9_fu_11995_p2() {
    tmp9_fu_11995_p2 = (!ap_const_lv9_198.is_01() || !tmp_551_cast_fu_11991_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_551_cast_fu_11991_p1.read()));
}

void ShuffleNetV2::thread_tmp_1000_cast_fu_30556_p1() {
    tmp_1000_cast_fu_30556_p1 = esl_zext<14,3>(h_119_fu_30541_p2.read());
}

void ShuffleNetV2::thread_tmp_1000_fu_10404_p3() {
    tmp_1000_fu_10404_p3 = esl_concat<7,6>(tmp_339_fu_10399_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1001_fu_10412_p3() {
    tmp_1001_fu_10412_p3 = esl_concat<7,4>(tmp_339_fu_10399_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1002_cast_fu_23663_p1() {
    tmp_1002_cast_fu_23663_p1 = esl_zext<7,4>(p_lshr_f18_cast_fu_23653_p4.read());
}

void ShuffleNetV2::thread_tmp_1002_fu_10424_p2() {
    tmp_1002_fu_10424_p2 = (!tmp_1000_fu_10404_p3.read().is_01() || !p_shl370_cast_fu_10420_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1000_fu_10404_p3.read()) - sc_bigint<13>(p_shl370_cast_fu_10420_p1.read()));
}

void ShuffleNetV2::thread_tmp_1003_fu_10430_p2() {
    tmp_1003_fu_10430_p2 = (!tmp_330_cast_reg_31928.read().is_01() || !tmp_1002_fu_10424_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_330_cast_reg_31928.read()) + sc_biguint<13>(tmp_1002_fu_10424_p2.read()));
}

void ShuffleNetV2::thread_tmp_1004_cast_cast_fu_23957_p1() {
    tmp_1004_cast_cast_fu_23957_p1 = esl_sext<10,7>(tmp_767_fu_23951_p2.read());
}

void ShuffleNetV2::thread_tmp_1004_fu_10480_p3() {
    tmp_1004_fu_10480_p3 = esl_concat<9,5>(tmp_341_reg_31951.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1005_cast_fu_23999_p1() {
    tmp_1005_cast_fu_23999_p1 = esl_sext<32,7>(tmp_768_reg_36103.read());
}

void ShuffleNetV2::thread_tmp_1005_fu_10491_p3() {
    tmp_1005_fu_10491_p3 = esl_concat<9,3>(tmp_341_reg_31951.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1006_fu_10502_p2() {
    tmp_1006_fu_10502_p2 = (!p_shl367_cast_fu_10487_p1.read().is_01() || !p_shl368_cast_fu_10498_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl367_cast_fu_10487_p1.read()) - sc_biguint<15>(p_shl368_cast_fu_10498_p1.read()));
}

void ShuffleNetV2::thread_tmp_1007_fu_10512_p2() {
    tmp_1007_fu_10512_p2 = (!tmp_331_cast_reg_31933.read().is_01() || !tmp_1223_cast_fu_10508_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_331_cast_reg_31933.read()) + sc_bigint<16>(tmp_1223_cast_fu_10508_p1.read()));
}

void ShuffleNetV2::thread_tmp_1008_cast_fu_23977_p1() {
    tmp_1008_cast_fu_23977_p1 = esl_sext<11,10>(tmp_770_reg_36108.read());
}

void ShuffleNetV2::thread_tmp_1008_fu_11041_p1() {
    tmp_1008_fu_11041_p1 = co58_reg_3187.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1009_fu_10941_p1() {
    tmp_1009_fu_10941_p1 = k2_reg_3176.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1010_fu_10724_p1() {
    tmp_1010_fu_10724_p1 = i33_reg_3154.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1011_fu_10785_p3() {
    tmp_1011_fu_10785_p3 = esl_concat<7,2>(tmp_354_reg_32067.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1012_fu_10792_p1() {
    tmp_1012_fu_10792_p1 = esl_sext<34,9>(tmp_1011_fu_10785_p3.read());
}

void ShuffleNetV2::thread_tmp_1013_cast_fu_23340_p1() {
    tmp_1013_cast_fu_23340_p1 = esl_sext<10,7>(tmp_760_fu_23334_p2.read());
}

void ShuffleNetV2::thread_tmp_1013_fu_10800_p2() {
    tmp_1013_fu_10800_p2 = (!p_shl374_cast_fu_10796_p1.read().is_01() || !tmp_355_cast_fu_10781_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl374_cast_fu_10796_p1.read()) - sc_biguint<35>(tmp_355_cast_fu_10781_p1.read()));
}

void ShuffleNetV2::thread_tmp_1014_cast_fu_23360_p1() {
    tmp_1014_cast_fu_23360_p1 = esl_sext<32,7>(tmp_761_reg_35930.read());
}

void ShuffleNetV2::thread_tmp_1014_fu_10810_p2() {
    tmp_1014_fu_10810_p2 = (!tmp_1233_cast_fu_10806_p1.read().is_01() || !tmp_342_cast_reg_32036.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1233_cast_fu_10806_p1.read()) + sc_biguint<36>(tmp_342_cast_reg_32036.read()));
}

void ShuffleNetV2::thread_tmp_1015_fu_10815_p1() {
    tmp_1015_fu_10815_p1 = tmp_1014_fu_10810_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1016_fu_10819_p1() {
    tmp_1016_fu_10819_p1 = tmp_1014_fu_10810_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1017_fu_10859_p2() {
    tmp_1017_fu_10859_p2 = (!p_shl373_cast_fu_10852_p3.read().is_01() || !tmp_1015_reg_32079.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl373_cast_fu_10852_p3.read()) - sc_biguint<10>(tmp_1015_reg_32079.read()));
}

void ShuffleNetV2::thread_tmp_1018_fu_10864_p2() {
    tmp_1018_fu_10864_p2 = (!tmp_1017_fu_10859_p2.read().is_01() || !tmp_349_cast_reg_32054.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1017_fu_10859_p2.read()) + sc_biguint<10>(tmp_349_cast_reg_32054.read()));
}

void ShuffleNetV2::thread_tmp_1019_fu_10826_p3() {
    tmp_1019_fu_10826_p3 = esl_concat<8,2>(tmp_356_reg_32073.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1020_fu_10837_p2() {
    tmp_1020_fu_10837_p2 = (!p_shl372_cast_fu_10833_p1.read().is_01() || !tmp_357_cast_fu_10823_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl372_cast_fu_10833_p1.read()) - sc_biguint<11>(tmp_357_cast_fu_10823_p1.read()));
}

void ShuffleNetV2::thread_tmp_1021_fu_10847_p2() {
    tmp_1021_fu_10847_p2 = (!tmp_1239_cast_fu_10843_p1.read().is_01() || !tmp_342_cast1_reg_32031.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1239_cast_fu_10843_p1.read()) + sc_biguint<12>(tmp_342_cast1_reg_32031.read()));
}

void ShuffleNetV2::thread_tmp_1022_fu_10872_p3() {
    tmp_1022_fu_10872_p3 = esl_concat<12,2>(tmp_1021_reg_32089.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1023_cast_cast_fu_23808_p1() {
    tmp_1023_cast_cast_fu_23808_p1 = esl_sext<9,8>(tmp_774_fu_23802_p2.read());
}

void ShuffleNetV2::thread_tmp_1023_fu_10883_p2() {
    tmp_1023_fu_10883_p2 = (!p_shl219_fu_10879_p1.read().is_01() || !tmp_1240_cast_fu_10869_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl219_fu_10879_p1.read()) - sc_bigint<64>(tmp_1240_cast_fu_10869_p1.read()));
}

void ShuffleNetV2::thread_tmp_1024_fu_10889_p2() {
    tmp_1024_fu_10889_p2 = (!tmp_1023_fu_10883_p2.read().is_01() || !tmp_349_reg_32049.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1023_fu_10883_p2.read()) + sc_biguint<64>(tmp_349_reg_32049.read()));
}

void ShuffleNetV2::thread_tmp_1025_fu_11337_p1() {
    tmp_1025_fu_11337_p1 = k3_reg_3231.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1026_fu_11130_p1() {
    tmp_1026_fu_11130_p1 = i35_reg_3209.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1027_fu_11169_p3() {
    tmp_1027_fu_11169_p3 = esl_concat<7,6>(tmp_364_fu_11164_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1028_fu_11177_p3() {
    tmp_1028_fu_11177_p3 = esl_concat<7,4>(tmp_364_fu_11164_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1029_cast_fu_24184_p1() {
    tmp_1029_cast_fu_24184_p1 = esl_zext<8,3>(p_lshr_f19_cast_fu_24174_p4.read());
}

void ShuffleNetV2::thread_tmp_1029_fu_11189_p2() {
    tmp_1029_fu_11189_p2 = (!tmp_1027_fu_11169_p3.read().is_01() || !p_shl378_cast_fu_11185_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1027_fu_11169_p3.read()) - sc_bigint<13>(p_shl378_cast_fu_11185_p1.read()));
}

void ShuffleNetV2::thread_tmp_1030_fu_11195_p2() {
    tmp_1030_fu_11195_p2 = (!tmp_351_cast_reg_32179.read().is_01() || !tmp_1029_fu_11189_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_351_cast_reg_32179.read()) + sc_biguint<13>(tmp_1029_fu_11189_p2.read()));
}

void ShuffleNetV2::thread_tmp_1031_cast_cast_fu_24460_p1() {
    tmp_1031_cast_cast_fu_24460_p1 = esl_sext<10,8>(tmp_783_fu_24454_p2.read());
}

void ShuffleNetV2::thread_tmp_1031_fu_11245_p3() {
    tmp_1031_fu_11245_p3 = esl_concat<9,5>(tmp_366_reg_32202.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1032_cast_fu_24502_p1() {
    tmp_1032_cast_fu_24502_p1 = esl_sext<32,8>(tmp_784_reg_36255.read());
}

void ShuffleNetV2::thread_tmp_1032_fu_11256_p3() {
    tmp_1032_fu_11256_p3 = esl_concat<9,3>(tmp_366_reg_32202.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1033_fu_11267_p2() {
    tmp_1033_fu_11267_p2 = (!p_shl375_cast_fu_11252_p1.read().is_01() || !p_shl376_cast_fu_11263_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl375_cast_fu_11252_p1.read()) - sc_biguint<15>(p_shl376_cast_fu_11263_p1.read()));
}

void ShuffleNetV2::thread_tmp_1034_fu_11277_p2() {
    tmp_1034_fu_11277_p2 = (!tmp_352_cast_reg_32184.read().is_01() || !tmp_1258_cast_fu_11273_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_352_cast_reg_32184.read()) + sc_bigint<16>(tmp_1258_cast_fu_11273_p1.read()));
}

void ShuffleNetV2::thread_tmp_1035_cast_fu_24480_p1() {
    tmp_1035_cast_fu_24480_p1 = esl_sext<11,10>(tmp_786_reg_36260.read());
}

void ShuffleNetV2::thread_tmp_1035_fu_11802_p1() {
    tmp_1035_fu_11802_p1 = co62_reg_3308.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1036_fu_11706_p1() {
    tmp_1036_fu_11706_p1 = k4_reg_3297.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1037_fu_11493_p1() {
    tmp_1037_fu_11493_p1 = i40_reg_3275.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1038_fu_11554_p3() {
    tmp_1038_fu_11554_p3 = esl_concat<7,2>(tmp_379_reg_32318.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1039_fu_11561_p1() {
    tmp_1039_fu_11561_p1 = esl_sext<34,9>(tmp_1038_fu_11554_p3.read());
}

void ShuffleNetV2::thread_tmp_1040_fu_11569_p2() {
    tmp_1040_fu_11569_p2 = (!p_shl382_cast_fu_11565_p1.read().is_01() || !tmp_380_cast_fu_11550_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl382_cast_fu_11565_p1.read()) - sc_biguint<35>(tmp_380_cast_fu_11550_p1.read()));
}

void ShuffleNetV2::thread_tmp_1041_fu_11579_p2() {
    tmp_1041_fu_11579_p2 = (!tmp_1268_cast_fu_11575_p1.read().is_01() || !tmp_367_cast_reg_32287.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1268_cast_fu_11575_p1.read()) + sc_biguint<36>(tmp_367_cast_reg_32287.read()));
}

void ShuffleNetV2::thread_tmp_1042_fu_11584_p1() {
    tmp_1042_fu_11584_p1 = tmp_1041_fu_11579_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1043_fu_11588_p1() {
    tmp_1043_fu_11588_p1 = tmp_1041_fu_11579_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1044_fu_11624_p2() {
    tmp_1044_fu_11624_p2 = (!p_shl381_cast_fu_11617_p3.read().is_01() || !tmp_1042_reg_32330.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl381_cast_fu_11617_p3.read()) - sc_biguint<10>(tmp_1042_reg_32330.read()));
}

void ShuffleNetV2::thread_tmp_1045_cast_fu_24319_p1() {
    tmp_1045_cast_fu_24319_p1 = esl_sext<12,10>(tmp_791_fu_24313_p2.read());
}

void ShuffleNetV2::thread_tmp_1045_fu_11629_p2() {
    tmp_1045_fu_11629_p2 = (!tmp_1044_fu_11624_p2.read().is_01() || !tmp_374_cast_reg_32305.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1044_fu_11624_p2.read()) + sc_biguint<10>(tmp_374_cast_reg_32305.read()));
}

void ShuffleNetV2::thread_tmp_1046_fu_11595_p3() {
    tmp_1046_fu_11595_p3 = esl_concat<8,2>(tmp_381_reg_32324.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1047_fu_11606_p2() {
    tmp_1047_fu_11606_p2 = (!p_shl380_cast_fu_11602_p1.read().is_01() || !tmp_382_cast_fu_11592_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl380_cast_fu_11602_p1.read()) - sc_biguint<11>(tmp_382_cast_fu_11592_p1.read()));
}

void ShuffleNetV2::thread_tmp_1048_fu_11612_p2() {
    tmp_1048_fu_11612_p2 = (!tmp_1047_fu_11606_p2.read().is_01() || !tmp_367_cast1_reg_32282.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1047_fu_11606_p2.read()) + sc_biguint<11>(tmp_367_cast1_reg_32282.read()));
}

void ShuffleNetV2::thread_tmp_1049_cast_cast_fu_24829_p1() {
    tmp_1049_cast_cast_fu_24829_p1 = esl_sext<9,8>(tmp_798_fu_24823_p2.read());
}

void ShuffleNetV2::thread_tmp_1049_fu_11637_p3() {
    tmp_1049_fu_11637_p3 = esl_concat<11,2>(tmp_1048_reg_32340.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1050_cast_fu_24871_p1() {
    tmp_1050_cast_fu_24871_p1 = esl_sext<32,8>(tmp_799_reg_36398.read());
}

void ShuffleNetV2::thread_tmp_1050_fu_11648_p2() {
    tmp_1050_fu_11648_p2 = (!p_shl221_fu_11644_p1.read().is_01() || !tmp_1275_cast_fu_11634_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl221_fu_11644_p1.read()) - sc_bigint<64>(tmp_1275_cast_fu_11634_p1.read()));
}

void ShuffleNetV2::thread_tmp_1051_fu_11654_p2() {
    tmp_1051_fu_11654_p2 = (!tmp_1050_fu_11648_p2.read().is_01() || !tmp_374_reg_32300.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1050_fu_11648_p2.read()) + sc_biguint<64>(tmp_374_reg_32300.read()));
}

void ShuffleNetV2::thread_tmp_1052_fu_12198_p3() {
    tmp_1052_fu_12198_p3 = esl_concat<6,3>(co64_reg_3363.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1053_cast_fu_24849_p1() {
    tmp_1053_cast_fu_24849_p1 = esl_sext<11,9>(tmp_801_reg_36403.read());
}

void ShuffleNetV2::thread_tmp_1053_fu_12210_p3() {
    tmp_1053_fu_12210_p3 = esl_concat<6,1>(co64_reg_3363.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1054_fu_12222_p2() {
    tmp_1054_fu_12222_p2 = (!p_shl390_cast_fu_12218_p1.read().is_01() || !p_shl389_cast_fu_12206_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl390_cast_fu_12218_p1.read()) + sc_biguint<10>(p_shl389_cast_fu_12206_p1.read()));
}

void ShuffleNetV2::thread_tmp_1055_fu_12234_p3() {
    tmp_1055_fu_12234_p3 = esl_concat<7,3>(tmp_383_fu_12228_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1056_fu_12246_p3() {
    tmp_1056_fu_12246_p3 = esl_concat<7,1>(tmp_383_fu_12228_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1057_cast_fu_24937_p1() {
    tmp_1057_cast_fu_24937_p1 = esl_zext<8,3>(p_lshr_f20_cast_fu_24927_p4.read());
}

void ShuffleNetV2::thread_tmp_1057_fu_12258_p2() {
    tmp_1057_fu_12258_p2 = (!p_shl388_cast_fu_12254_p1.read().is_01() || !p_shl387_cast_fu_12242_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl388_cast_fu_12254_p1.read()) + sc_biguint<11>(p_shl387_cast_fu_12242_p1.read()));
}

void ShuffleNetV2::thread_tmp_1058_fu_12102_p1() {
    tmp_1058_fu_12102_p1 = k5_reg_3352.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1059_cast_cast_fu_25213_p1() {
    tmp_1059_cast_cast_fu_25213_p1 = esl_sext<9,8>(tmp_813_fu_25207_p2.read());
}

void ShuffleNetV2::thread_tmp_1059_cast_fu_8042_p1() {
    tmp_1059_cast_fu_8042_p1 = esl_sext<64,11>(tmp_582_reg_31204.read());
}

void ShuffleNetV2::thread_tmp_1059_fu_11891_p1() {
    tmp_1059_fu_11891_p1 = i42_reg_3330.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1060_cast_fu_25259_p1() {
    tmp_1060_cast_fu_25259_p1 = esl_sext<32,8>(tmp_814_reg_36506.read());
}

void ShuffleNetV2::thread_tmp_1060_fu_11930_p3() {
    tmp_1060_fu_11930_p3 = esl_concat<7,6>(tmp_390_fu_11925_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1061_fu_11938_p3() {
    tmp_1061_fu_11938_p3 = esl_concat<7,4>(tmp_390_fu_11925_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1062_cast_fu_7901_p1() {
    tmp_1062_cast_fu_7901_p1 = esl_zext<64,14>(tmp_583_reg_31161.read());
}

void ShuffleNetV2::thread_tmp_1062_fu_11950_p2() {
    tmp_1062_fu_11950_p2 = (!tmp_1060_fu_11930_p3.read().is_01() || !p_shl386_cast_fu_11946_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1060_fu_11930_p3.read()) - sc_bigint<13>(p_shl386_cast_fu_11946_p1.read()));
}

void ShuffleNetV2::thread_tmp_1063_cast_fu_7896_p1() {
    tmp_1063_cast_fu_7896_p1 = esl_zext<64,15>(tmp_584_fu_7891_p2.read());
}

void ShuffleNetV2::thread_tmp_1063_fu_11956_p2() {
    tmp_1063_fu_11956_p2 = (!tmp_376_cast_reg_32430.read().is_01() || !tmp_1062_fu_11950_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_376_cast_reg_32430.read()) + sc_biguint<13>(tmp_1062_fu_11950_p2.read()));
}

void ShuffleNetV2::thread_tmp_1064_fu_12010_p3() {
    tmp_1064_fu_12010_p3 = esl_concat<10,5>(tmp_392_reg_32453.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1065_fu_12021_p3() {
    tmp_1065_fu_12021_p3 = esl_concat<10,3>(tmp_392_reg_32453.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1066_fu_12032_p2() {
    tmp_1066_fu_12032_p2 = (!p_shl383_cast_fu_12017_p1.read().is_01() || !p_shl384_cast_fu_12028_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl383_cast_fu_12017_p1.read()) - sc_biguint<16>(p_shl384_cast_fu_12028_p1.read()));
}

void ShuffleNetV2::thread_tmp_1067_fu_12042_p2() {
    tmp_1067_fu_12042_p2 = (!tmp_377_cast_reg_32435.read().is_01() || !tmp_1299_cast_fu_12038_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_377_cast_reg_32435.read()) + sc_bigint<17>(tmp_1299_cast_fu_12038_p1.read()));
}

void ShuffleNetV2::thread_tmp_1068_cast_fu_24616_p1() {
    tmp_1068_cast_fu_24616_p1 = esl_sext<10,8>(tmp_807_fu_24610_p2.read());
}

void ShuffleNetV2::thread_tmp_1068_fu_12409_p1() {
    tmp_1068_fu_12409_p1 = co66_reg_3396.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1069_cast_fu_24636_p1() {
    tmp_1069_cast_fu_24636_p1 = esl_sext<32,8>(tmp_808_reg_36333.read());
}

void ShuffleNetV2::thread_tmp_1069_fu_12284_p2() {
    tmp_1069_fu_12284_p2 = (!tmp_394_cast_fu_12280_p1.read().is_01() || !tmp_1057_reg_32520.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_394_cast_fu_12280_p1.read()) + sc_biguint<11>(tmp_1057_reg_32520.read()));
}

void ShuffleNetV2::thread_tmp_1070_fu_12289_p3() {
    tmp_1070_fu_12289_p3 = esl_concat<11,3>(tmp_1069_fu_12284_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1071_cast_fu_8101_p1() {
    tmp_1071_cast_fu_8101_p1 = esl_sext<9,8>(tmp_593_fu_8095_p2.read());
}

void ShuffleNetV2::thread_tmp_1071_fu_12301_p3() {
    tmp_1071_fu_12301_p3 = esl_concat<11,1>(tmp_1069_fu_12284_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1072_fu_12313_p2() {
    tmp_1072_fu_12313_p2 = (!p_shl393_cast_fu_12297_p1.read().is_01() || !p_shl394_cast_fu_12309_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl393_cast_fu_12297_p1.read()) + sc_biguint<15>(p_shl394_cast_fu_12309_p1.read()));
}

void ShuffleNetV2::thread_tmp_1073_fu_12319_p2() {
    tmp_1073_fu_12319_p2 = (!tmp_394_cast1_fu_12276_p1.read().is_01() || !tmp_1054_reg_32515.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_394_cast1_fu_12276_p1.read()) + sc_biguint<10>(tmp_1054_reg_32515.read()));
}

void ShuffleNetV2::thread_tmp_1074_cast_fu_8173_p1() {
    tmp_1074_cast_fu_8173_p1 = esl_sext<64,10>(tmp_599_fu_8168_p2.read());
}

void ShuffleNetV2::thread_tmp_1074_fu_12324_p3() {
    tmp_1074_fu_12324_p3 = esl_concat<10,3>(tmp_1073_fu_12319_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1075_fu_12336_p3() {
    tmp_1075_fu_12336_p3 = esl_concat<10,1>(tmp_1073_fu_12319_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1076_fu_12348_p2() {
    tmp_1076_fu_12348_p2 = (!p_shl391_cast_fu_12332_p1.read().is_01() || !p_shl392_cast_fu_12344_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl391_cast_fu_12332_p1.read()) + sc_biguint<14>(p_shl392_cast_fu_12344_p1.read()));
}

void ShuffleNetV2::thread_tmp_1077_fu_12374_p2() {
    tmp_1077_fu_12374_p2 = (!tmp_1072_reg_32533.read().is_01() || !tmp_398_cast_fu_12370_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1072_reg_32533.read()) + sc_biguint<15>(tmp_398_cast_fu_12370_p1.read()));
}

void ShuffleNetV2::thread_tmp_1078_cast_fu_25072_p1() {
    tmp_1078_cast_fu_25072_p1 = esl_sext<12,10>(tmp_821_fu_25066_p2.read());
}

void ShuffleNetV2::thread_tmp_1078_fu_12384_p2() {
    tmp_1078_fu_12384_p2 = (!tmp_1076_reg_32538.read().is_01() || !tmp_398_cast1_fu_12366_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1076_reg_32538.read()) + sc_biguint<14>(tmp_398_cast1_fu_12366_p1.read()));
}

void ShuffleNetV2::thread_tmp_1079_fu_12705_p1() {
    tmp_1079_fu_12705_p1 = k6_reg_3440.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1080_fu_12498_p1() {
    tmp_1080_fu_12498_p1 = i46_reg_3418.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1081_fu_12537_p3() {
    tmp_1081_fu_12537_p3 = esl_concat<7,6>(tmp_405_fu_12532_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1082_cast_fu_25586_p1() {
    tmp_1082_cast_fu_25586_p1 = esl_sext<12,8>(tmp_825_fu_25580_p2.read());
}

void ShuffleNetV2::thread_tmp_1082_fu_12545_p3() {
    tmp_1082_fu_12545_p3 = esl_concat<7,4>(tmp_405_fu_12532_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1083_cast_fu_25624_p1() {
    tmp_1083_cast_fu_25624_p1 = esl_sext<32,8>(tmp_826_reg_36649.read());
}

void ShuffleNetV2::thread_tmp_1083_fu_12557_p2() {
    tmp_1083_fu_12557_p2 = (!tmp_1081_fu_12537_p3.read().is_01() || !p_shl398_cast_fu_12553_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1081_fu_12537_p3.read()) - sc_bigint<13>(p_shl398_cast_fu_12553_p1.read()));
}

void ShuffleNetV2::thread_tmp_1084_fu_12563_p2() {
    tmp_1084_fu_12563_p2 = (!tmp_396_cast_reg_32592.read().is_01() || !tmp_1083_fu_12557_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_396_cast_reg_32592.read()) + sc_biguint<13>(tmp_1083_fu_12557_p2.read()));
}

void ShuffleNetV2::thread_tmp_1085_fu_12613_p3() {
    tmp_1085_fu_12613_p3 = esl_concat<10,5>(tmp_407_reg_32615.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1086_fu_12624_p3() {
    tmp_1086_fu_12624_p3 = esl_concat<10,3>(tmp_407_reg_32615.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1087_fu_12635_p2() {
    tmp_1087_fu_12635_p2 = (!p_shl395_cast_fu_12620_p1.read().is_01() || !p_shl396_cast_fu_12631_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl395_cast_fu_12620_p1.read()) - sc_biguint<16>(p_shl396_cast_fu_12631_p1.read()));
}

void ShuffleNetV2::thread_tmp_1088_fu_12645_p2() {
    tmp_1088_fu_12645_p2 = (!tmp_397_cast_reg_32597.read().is_01() || !tmp_1327_cast_fu_12641_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_397_cast_reg_32597.read()) + sc_bigint<17>(tmp_1327_cast_fu_12641_p1.read()));
}

void ShuffleNetV2::thread_tmp_1089_cast_fu_8242_p1() {
    tmp_1089_cast_fu_8242_p1 = esl_zext<64,9>(tmp_643_reg_31274.read());
}

void ShuffleNetV2::thread_tmp_1089_fu_13174_p1() {
    tmp_1089_fu_13174_p1 = co70_reg_3517.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1090_cast_fu_25690_p1() {
    tmp_1090_cast_fu_25690_p1 = esl_zext<8,3>(p_lshr_f21_cast_fu_25680_p4.read());
}

void ShuffleNetV2::thread_tmp_1090_fu_13078_p1() {
    tmp_1090_fu_13078_p1 = k7_reg_3506.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1091_cast_fu_8387_p1() {
    tmp_1091_cast_fu_8387_p1 = esl_sext<64,11>(tmp_662_reg_31314.read());
}

void ShuffleNetV2::thread_tmp_1091_fu_12857_p1() {
    tmp_1091_fu_12857_p1 = i52_reg_3484.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1092_cast_fu_25966_p1() {
    tmp_1092_cast_fu_25966_p1 = esl_sext<12,8>(tmp_842_fu_25960_p2.read());
}

void ShuffleNetV2::thread_tmp_1092_fu_12922_p3() {
    tmp_1092_fu_12922_p3 = esl_concat<7,2>(tmp_420_reg_32731.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1093_cast_fu_26004_p1() {
    tmp_1093_cast_fu_26004_p1 = esl_sext<32,8>(tmp_844_reg_36757.read());
}

void ShuffleNetV2::thread_tmp_1093_fu_12929_p1() {
    tmp_1093_fu_12929_p1 = esl_sext<34,9>(tmp_1092_fu_12922_p3.read());
}

void ShuffleNetV2::thread_tmp_1094_fu_12937_p2() {
    tmp_1094_fu_12937_p2 = (!p_shl402_cast_fu_12933_p1.read().is_01() || !tmp_421_cast_fu_12918_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl402_cast_fu_12933_p1.read()) - sc_biguint<35>(tmp_421_cast_fu_12918_p1.read()));
}

void ShuffleNetV2::thread_tmp_1095_fu_12947_p2() {
    tmp_1095_fu_12947_p2 = (!tmp_1337_cast_fu_12943_p1.read().is_01() || !tmp_408_cast_reg_32700.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1337_cast_fu_12943_p1.read()) + sc_biguint<36>(tmp_408_cast_reg_32700.read()));
}

void ShuffleNetV2::thread_tmp_1096_fu_12952_p1() {
    tmp_1096_fu_12952_p1 = tmp_1095_fu_12947_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1097_fu_12956_p1() {
    tmp_1097_fu_12956_p1 = tmp_1095_fu_12947_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1098_fu_12996_p2() {
    tmp_1098_fu_12996_p2 = (!p_shl401_cast_fu_12989_p3.read().is_01() || !tmp_1096_reg_32743.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl401_cast_fu_12989_p3.read()) - sc_biguint<10>(tmp_1096_reg_32743.read()));
}

void ShuffleNetV2::thread_tmp_1099_fu_13001_p2() {
    tmp_1099_fu_13001_p2 = (!tmp_1098_fu_12996_p2.read().is_01() || !tmp_415_cast_reg_32718.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1098_fu_12996_p2.read()) + sc_biguint<10>(tmp_415_cast_reg_32718.read()));
}

void ShuffleNetV2::thread_tmp_1100_fu_12963_p3() {
    tmp_1100_fu_12963_p3 = esl_concat<9,2>(tmp_422_reg_32737.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1101_cast_fu_25373_p1() {
    tmp_1101_cast_fu_25373_p1 = esl_sext<10,8>(tmp_835_fu_25367_p2.read());
}

void ShuffleNetV2::thread_tmp_1101_fu_12974_p2() {
    tmp_1101_fu_12974_p2 = (!p_shl400_cast_fu_12970_p1.read().is_01() || !tmp_423_cast_fu_12960_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl400_cast_fu_12970_p1.read()) - sc_biguint<12>(tmp_423_cast_fu_12960_p1.read()));
}

void ShuffleNetV2::thread_tmp_1102_cast_fu_25393_p1() {
    tmp_1102_cast_fu_25393_p1 = esl_sext<32,8>(tmp_836_reg_36584.read());
}

void ShuffleNetV2::thread_tmp_1102_fu_12984_p2() {
    tmp_1102_fu_12984_p2 = (!tmp_1343_cast_fu_12980_p1.read().is_01() || !tmp_408_cast1_reg_32695.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1343_cast_fu_12980_p1.read()) + sc_biguint<13>(tmp_408_cast1_reg_32695.read()));
}

void ShuffleNetV2::thread_tmp_1103_fu_13009_p3() {
    tmp_1103_fu_13009_p3 = esl_concat<13,2>(tmp_1102_reg_32753.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1104_fu_13020_p2() {
    tmp_1104_fu_13020_p2 = (!p_shl226_fu_13016_p1.read().is_01() || !tmp_1344_cast_fu_13006_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl226_fu_13016_p1.read()) - sc_bigint<64>(tmp_1344_cast_fu_13006_p1.read()));
}

void ShuffleNetV2::thread_tmp_1105_fu_13026_p2() {
    tmp_1105_fu_13026_p2 = (!tmp_1104_fu_13020_p2.read().is_01() || !tmp_415_reg_32713.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1104_fu_13020_p2.read()) + sc_biguint<64>(tmp_415_reg_32713.read()));
}

void ShuffleNetV2::thread_tmp_1106_fu_13562_p3() {
    tmp_1106_fu_13562_p3 = esl_concat<6,3>(co72_reg_3572.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1107_fu_13574_p3() {
    tmp_1107_fu_13574_p3 = esl_concat<6,1>(co72_reg_3572.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1108_fu_13586_p2() {
    tmp_1108_fu_13586_p2 = (!p_shl408_cast_fu_13582_p1.read().is_01() || !p_shl407_cast_fu_13570_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl408_cast_fu_13582_p1.read()) + sc_biguint<10>(p_shl407_cast_fu_13570_p1.read()));
}

void ShuffleNetV2::thread_tmp_1109_fu_13470_p1() {
    tmp_1109_fu_13470_p1 = k8_reg_3561.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1110_fu_13263_p1() {
    tmp_1110_fu_13263_p1 = i54_reg_3539.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1111_fu_13302_p3() {
    tmp_1111_fu_13302_p3 = esl_concat<7,6>(tmp_430_fu_13297_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1112_cast_fu_26281_p1() {
    tmp_1112_cast_fu_26281_p1 = esl_zext<8,3>(p_lshr_f22_cast_fu_26271_p4.read());
}

void ShuffleNetV2::thread_tmp_1112_fu_13310_p3() {
    tmp_1112_fu_13310_p3 = esl_concat<7,4>(tmp_430_fu_13297_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1113_fu_13322_p2() {
    tmp_1113_fu_13322_p2 = (!tmp_1111_fu_13302_p3.read().is_01() || !p_shl406_cast_fu_13318_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1111_fu_13302_p3.read()) - sc_bigint<13>(p_shl406_cast_fu_13318_p1.read()));
}

void ShuffleNetV2::thread_tmp_1114_fu_13328_p2() {
    tmp_1114_fu_13328_p2 = (!tmp_417_cast_reg_32843.read().is_01() || !tmp_1113_fu_13322_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_417_cast_reg_32843.read()) + sc_biguint<13>(tmp_1113_fu_13322_p2.read()));
}

void ShuffleNetV2::thread_tmp_1115_fu_13378_p3() {
    tmp_1115_fu_13378_p3 = esl_concat<10,5>(tmp_432_reg_32866.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1116_cast_fu_25825_p1() {
    tmp_1116_cast_fu_25825_p1 = esl_sext<12,10>(tmp_850_fu_25819_p2.read());
}

void ShuffleNetV2::thread_tmp_1116_fu_13389_p3() {
    tmp_1116_fu_13389_p3 = esl_concat<10,3>(tmp_432_reg_32866.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1117_fu_13400_p2() {
    tmp_1117_fu_13400_p2 = (!p_shl403_cast_fu_13385_p1.read().is_01() || !p_shl404_cast_fu_13396_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl403_cast_fu_13385_p1.read()) - sc_biguint<16>(p_shl404_cast_fu_13396_p1.read()));
}

void ShuffleNetV2::thread_tmp_1118_fu_13410_p2() {
    tmp_1118_fu_13410_p2 = (!tmp_418_cast_reg_32848.read().is_01() || !tmp_1365_cast_fu_13406_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_418_cast_reg_32848.read()) + sc_bigint<17>(tmp_1365_cast_fu_13406_p1.read()));
}

void ShuffleNetV2::thread_tmp_1119_cast_fu_8553_p1() {
    tmp_1119_cast_fu_8553_p1 = esl_zext<64,15>(tmp_734_fu_8548_p2.read());
}

void ShuffleNetV2::thread_tmp_1119_fu_13685_p3() {
    tmp_1119_fu_13685_p3 = esl_concat<6,3>(co74_reg_3605.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1120_fu_13697_p3() {
    tmp_1120_fu_13697_p3 = esl_concat<6,1>(co74_reg_3605.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1121_cast1_fu_8898_p1() {
    tmp_1121_cast1_fu_8898_p1 = esl_sext<64,11>(tmp_735_reg_31464.read());
}

void ShuffleNetV2::thread_tmp_1121_cast_fu_26557_p1() {
    tmp_1121_cast_fu_26557_p1 = esl_sext<12,8>(tmp_859_fu_26551_p2.read());
}

void ShuffleNetV2::thread_tmp_1121_fu_13709_p2() {
    tmp_1121_fu_13709_p2 = (!p_shl414_cast_fu_13705_p1.read().is_01() || !p_shl413_cast_fu_13693_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl414_cast_fu_13705_p1.read()) + sc_biguint<10>(p_shl413_cast_fu_13693_p1.read()));
}

void ShuffleNetV2::thread_tmp_1122_cast1_fu_8757_p1() {
    tmp_1122_cast1_fu_8757_p1 = esl_zext<64,14>(tmp_740_reg_31421.read());
}

void ShuffleNetV2::thread_tmp_1122_cast_fu_26595_p1() {
    tmp_1122_cast_fu_26595_p1 = esl_sext<32,8>(tmp_861_reg_36919.read());
}

void ShuffleNetV2::thread_tmp_1122_fu_13721_p3() {
    tmp_1122_fu_13721_p3 = esl_concat<7,3>(tmp_433_fu_13715_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1123_cast_fu_8752_p1() {
    tmp_1123_cast_fu_8752_p1 = esl_zext<64,15>(tmp_741_fu_8747_p2.read());
}

void ShuffleNetV2::thread_tmp_1123_fu_13733_p3() {
    tmp_1123_fu_13733_p3 = esl_concat<7,1>(tmp_433_fu_13715_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1124_fu_13745_p2() {
    tmp_1124_fu_13745_p2 = (!p_shl412_cast_fu_13741_p1.read().is_01() || !p_shl411_cast_fu_13729_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl412_cast_fu_13741_p1.read()) + sc_biguint<11>(p_shl411_cast_fu_13729_p1.read()));
}

void ShuffleNetV2::thread_tmp_1125_cast_fu_8957_p1() {
    tmp_1125_cast_fu_8957_p1 = esl_sext<9,8>(tmp_749_fu_8951_p2.read());
}

void ShuffleNetV2::thread_tmp_1125_fu_13608_p2() {
    tmp_1125_fu_13608_p2 = (!tmp_434_cast_fu_13604_p1.read().is_01() || !tmp_1108_reg_32928.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_434_cast_fu_13604_p1.read()) + sc_biguint<10>(tmp_1108_reg_32928.read()));
}

void ShuffleNetV2::thread_tmp_1126_fu_13613_p3() {
    tmp_1126_fu_13613_p3 = esl_concat<10,3>(tmp_1125_fu_13608_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1127_fu_13625_p3() {
    tmp_1127_fu_13625_p3 = esl_concat<10,1>(tmp_1125_fu_13608_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1128_cast_fu_9029_p1() {
    tmp_1128_cast_fu_9029_p1 = esl_sext<64,10>(tmp_759_fu_9024_p2.read());
}

void ShuffleNetV2::thread_tmp_1128_fu_13637_p2() {
    tmp_1128_fu_13637_p2 = (!p_shl409_cast_fu_13621_p1.read().is_01() || !p_shl410_cast_fu_13633_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl409_cast_fu_13621_p1.read()) + sc_biguint<15>(p_shl410_cast_fu_13633_p1.read()));
}

void ShuffleNetV2::thread_tmp_1129_fu_13896_p1() {
    tmp_1129_fu_13896_p1 = co76_reg_3638.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1130_fu_13771_p2() {
    tmp_1130_fu_13771_p2 = (!tmp_436_cast_fu_13767_p1.read().is_01() || !tmp_1124_reg_32977.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_436_cast_fu_13767_p1.read()) + sc_biguint<11>(tmp_1124_reg_32977.read()));
}

void ShuffleNetV2::thread_tmp_1131_fu_13776_p3() {
    tmp_1131_fu_13776_p3 = esl_concat<11,3>(tmp_1130_fu_13771_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1132_fu_13788_p3() {
    tmp_1132_fu_13788_p3 = esl_concat<11,1>(tmp_1130_fu_13771_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1133_fu_13800_p2() {
    tmp_1133_fu_13800_p2 = (!p_shl417_cast_fu_13784_p1.read().is_01() || !p_shl418_cast_fu_13796_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl417_cast_fu_13784_p1.read()) + sc_biguint<15>(p_shl418_cast_fu_13796_p1.read()));
}

void ShuffleNetV2::thread_tmp_1134_fu_13806_p2() {
    tmp_1134_fu_13806_p2 = (!tmp_436_cast1_fu_13763_p1.read().is_01() || !tmp_1121_reg_32972.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_436_cast1_fu_13763_p1.read()) + sc_biguint<10>(tmp_1121_reg_32972.read()));
}

void ShuffleNetV2::thread_tmp_1135_cast_fu_26416_p1() {
    tmp_1135_cast_fu_26416_p1 = esl_sext<12,10>(tmp_867_fu_26410_p2.read());
}

void ShuffleNetV2::thread_tmp_1135_fu_13811_p3() {
    tmp_1135_fu_13811_p3 = esl_concat<10,3>(tmp_1134_fu_13806_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1136_fu_13823_p3() {
    tmp_1136_fu_13823_p3 = esl_concat<10,1>(tmp_1134_fu_13806_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1137_fu_13835_p2() {
    tmp_1137_fu_13835_p2 = (!p_shl415_cast_fu_13819_p1.read().is_01() || !p_shl416_cast_fu_13831_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl415_cast_fu_13819_p1.read()) + sc_biguint<14>(p_shl416_cast_fu_13831_p1.read()));
}

void ShuffleNetV2::thread_tmp_1138_fu_13659_p2() {
    tmp_1138_fu_13659_p2 = (!tmp_1128_reg_32941.read().is_01() || !tmp_437_cast_fu_13655_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1128_reg_32941.read()) + sc_biguint<15>(tmp_437_cast_fu_13655_p1.read()));
}

void ShuffleNetV2::thread_tmp_1139_cast_fu_26922_p1() {
    tmp_1139_cast_fu_26922_p1 = esl_sext<12,8>(tmp_871_fu_26916_p2.read());
}

void ShuffleNetV2::thread_tmp_1139_fu_13861_p2() {
    tmp_1139_fu_13861_p2 = (!tmp_1133_reg_32990.read().is_01() || !tmp_441_cast_fu_13857_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1133_reg_32990.read()) + sc_biguint<15>(tmp_441_cast_fu_13857_p1.read()));
}

void ShuffleNetV2::thread_tmp_1140_cast_fu_26960_p1() {
    tmp_1140_cast_fu_26960_p1 = esl_sext<32,8>(tmp_872_reg_37062.read());
}

void ShuffleNetV2::thread_tmp_1140_fu_13871_p2() {
    tmp_1140_fu_13871_p2 = (!tmp_1137_reg_32995.read().is_01() || !tmp_441_cast1_fu_13853_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1137_reg_32995.read()) + sc_biguint<14>(tmp_441_cast1_fu_13853_p1.read()));
}

void ShuffleNetV2::thread_tmp_1141_cast_fu_9098_p1() {
    tmp_1141_cast_fu_9098_p1 = esl_zext<64,9>(tmp_805_reg_31534.read());
}

void ShuffleNetV2::thread_tmp_1141_fu_14192_p1() {
    tmp_1141_fu_14192_p1 = k9_reg_3682.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1142_fu_13985_p1() {
    tmp_1142_fu_13985_p1 = i58_reg_3660.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1143_cast_fu_9256_p1() {
    tmp_1143_cast_fu_9256_p1 = esl_sext<64,11>(tmp_806_reg_31580.read());
}

void ShuffleNetV2::thread_tmp_1143_fu_14024_p3() {
    tmp_1143_fu_14024_p3 = esl_concat<7,6>(tmp_448_fu_14019_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1144_fu_14032_p3() {
    tmp_1144_fu_14032_p3 = esl_concat<7,4>(tmp_448_fu_14019_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1145_fu_14044_p2() {
    tmp_1145_fu_14044_p2 = (!tmp_1143_fu_14024_p3.read().is_01() || !p_shl422_cast_fu_14040_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1143_fu_14024_p3.read()) - sc_bigint<13>(p_shl422_cast_fu_14040_p1.read()));
}

void ShuffleNetV2::thread_tmp_1146_fu_14050_p2() {
    tmp_1146_fu_14050_p2 = (!tmp_439_cast_reg_33049.read().is_01() || !tmp_1145_fu_14044_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_439_cast_reg_33049.read()) + sc_biguint<13>(tmp_1145_fu_14044_p2.read()));
}

void ShuffleNetV2::thread_tmp_1147_cast_fu_27026_p1() {
    tmp_1147_cast_fu_27026_p1 = esl_zext<8,3>(p_lshr_f23_cast_fu_27016_p4.read());
}

void ShuffleNetV2::thread_tmp_1147_fu_14100_p3() {
    tmp_1147_fu_14100_p3 = esl_concat<10,5>(tmp_450_reg_33072.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1148_fu_14111_p3() {
    tmp_1148_fu_14111_p3 = esl_concat<10,3>(tmp_450_reg_33072.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1149_cast_fu_27310_p1() {
    tmp_1149_cast_fu_27310_p1 = esl_sext<12,8>(tmp_886_fu_27304_p2.read());
}

void ShuffleNetV2::thread_tmp_1149_fu_14122_p2() {
    tmp_1149_fu_14122_p2 = (!p_shl419_cast_fu_14107_p1.read().is_01() || !p_shl420_cast_fu_14118_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl419_cast_fu_14107_p1.read()) - sc_biguint<16>(p_shl420_cast_fu_14118_p1.read()));
}

void ShuffleNetV2::thread_tmp_1150_cast_fu_27348_p1() {
    tmp_1150_cast_fu_27348_p1 = esl_sext<32,8>(tmp_888_reg_37170.read());
}

void ShuffleNetV2::thread_tmp_1150_fu_14132_p2() {
    tmp_1150_fu_14132_p2 = (!tmp_440_cast_reg_33054.read().is_01() || !tmp_1404_cast_fu_14128_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_440_cast_reg_33054.read()) + sc_bigint<17>(tmp_1404_cast_fu_14128_p1.read()));
}

void ShuffleNetV2::thread_tmp_1151_fu_14661_p1() {
    tmp_1151_fu_14661_p1 = co80_reg_3759.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1152_fu_14561_p1() {
    tmp_1152_fu_14561_p1 = k10_reg_3748.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1153_fu_14344_p1() {
    tmp_1153_fu_14344_p1 = i64_reg_3726.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1154_fu_14405_p3() {
    tmp_1154_fu_14405_p3 = esl_concat<7,2>(tmp_463_reg_33188.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1155_fu_14412_p1() {
    tmp_1155_fu_14412_p1 = esl_sext<34,9>(tmp_1154_fu_14405_p3.read());
}

void ShuffleNetV2::thread_tmp_1156_fu_14420_p2() {
    tmp_1156_fu_14420_p2 = (!p_shl426_cast_fu_14416_p1.read().is_01() || !tmp_464_cast1_fu_14401_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl426_cast_fu_14416_p1.read()) - sc_biguint<35>(tmp_464_cast1_fu_14401_p1.read()));
}

void ShuffleNetV2::thread_tmp_1157_fu_14430_p2() {
    tmp_1157_fu_14430_p2 = (!tmp_1414_cast_fu_14426_p1.read().is_01() || !tmp_451_cast_reg_33157.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1414_cast_fu_14426_p1.read()) + sc_biguint<36>(tmp_451_cast_reg_33157.read()));
}

void ShuffleNetV2::thread_tmp_1158_cast_fu_26709_p1() {
    tmp_1158_cast_fu_26709_p1 = esl_sext<10,8>(tmp_880_fu_26703_p2.read());
}

void ShuffleNetV2::thread_tmp_1158_fu_14435_p1() {
    tmp_1158_fu_14435_p1 = tmp_1157_fu_14430_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1159_cast_fu_26729_p1() {
    tmp_1159_cast_fu_26729_p1 = esl_sext<32,8>(tmp_881_reg_36997.read());
}

void ShuffleNetV2::thread_tmp_1159_fu_14439_p1() {
    tmp_1159_fu_14439_p1 = tmp_1157_fu_14430_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1160_fu_14479_p2() {
    tmp_1160_fu_14479_p2 = (!p_shl425_cast_fu_14472_p3.read().is_01() || !tmp_1158_reg_33200.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl425_cast_fu_14472_p3.read()) - sc_biguint<10>(tmp_1158_reg_33200.read()));
}

void ShuffleNetV2::thread_tmp_1161_fu_14484_p2() {
    tmp_1161_fu_14484_p2 = (!tmp_1160_fu_14479_p2.read().is_01() || !tmp_458_cast_reg_33175.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1160_fu_14479_p2.read()) + sc_biguint<10>(tmp_458_cast_reg_33175.read()));
}

void ShuffleNetV2::thread_tmp_1162_fu_14446_p3() {
    tmp_1162_fu_14446_p3 = esl_concat<9,2>(tmp_465_reg_33194.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1163_fu_14457_p2() {
    tmp_1163_fu_14457_p2 = (!p_shl424_cast_fu_14453_p1.read().is_01() || !tmp_466_cast1_fu_14443_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl424_cast_fu_14453_p1.read()) - sc_biguint<12>(tmp_466_cast1_fu_14443_p1.read()));
}

void ShuffleNetV2::thread_tmp_1164_fu_14467_p2() {
    tmp_1164_fu_14467_p2 = (!tmp_1420_cast_fu_14463_p1.read().is_01() || !tmp_451_cast1_reg_33152.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1420_cast_fu_14463_p1.read()) + sc_biguint<13>(tmp_451_cast1_reg_33152.read()));
}

void ShuffleNetV2::thread_tmp_1165_fu_14492_p3() {
    tmp_1165_fu_14492_p3 = esl_concat<13,2>(tmp_1164_reg_33210.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1166_fu_14503_p2() {
    tmp_1166_fu_14503_p2 = (!p_shl231_fu_14499_p1.read().is_01() || !tmp_1421_cast_fu_14489_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl231_fu_14499_p1.read()) - sc_bigint<64>(tmp_1421_cast_fu_14489_p1.read()));
}

void ShuffleNetV2::thread_tmp_1167_fu_14509_p2() {
    tmp_1167_fu_14509_p2 = (!tmp_1166_fu_14503_p2.read().is_01() || !tmp_458_reg_33170.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1166_fu_14503_p2.read()) + sc_biguint<64>(tmp_458_reg_33170.read()));
}

void ShuffleNetV2::thread_tmp_1168_cast_cast_fu_27161_p1() {
    tmp_1168_cast_cast_fu_27161_p1 = esl_sext<11,10>(tmp_894_fu_27155_p2.read());
}

void ShuffleNetV2::thread_tmp_1168_fu_15053_p3() {
    tmp_1168_fu_15053_p3 = esl_concat<6,3>(co82_reg_3814.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1169_fu_15065_p3() {
    tmp_1169_fu_15065_p3 = esl_concat<6,1>(co82_reg_3814.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1170_fu_15077_p2() {
    tmp_1170_fu_15077_p2 = (!p_shl432_cast_fu_15073_p1.read().is_01() || !p_shl431_cast_fu_15061_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl432_cast_fu_15073_p1.read()) + sc_biguint<10>(p_shl431_cast_fu_15061_p1.read()));
}

void ShuffleNetV2::thread_tmp_1171_cast_fu_9391_p1() {
    tmp_1171_cast_fu_9391_p1 = esl_zext<64,15>(tmp_885_fu_9386_p2.read());
}

void ShuffleNetV2::thread_tmp_1171_fu_14957_p1() {
    tmp_1171_fu_14957_p1 = k12_reg_3803.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1172_fu_14750_p1() {
    tmp_1172_fu_14750_p1 = i66_reg_3781.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1173_cast_fu_9721_p1() {
    tmp_1173_cast_fu_9721_p1 = esl_sext<64,11>(tmp_902_reg_31718.read());
}

void ShuffleNetV2::thread_tmp_1173_fu_14789_p3() {
    tmp_1173_fu_14789_p3 = esl_concat<7,6>(tmp_473_fu_14784_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1174_cast_fu_9595_p1() {
    tmp_1174_cast_fu_9595_p1 = esl_zext<64,14>(tmp_903_reg_31681.read());
}

void ShuffleNetV2::thread_tmp_1174_fu_14797_p3() {
    tmp_1174_fu_14797_p3 = esl_concat<7,4>(tmp_473_fu_14784_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1175_cast_fu_9590_p1() {
    tmp_1175_cast_fu_9590_p1 = esl_zext<64,15>(tmp_904_fu_9585_p2.read());
}

void ShuffleNetV2::thread_tmp_1175_fu_14809_p2() {
    tmp_1175_fu_14809_p2 = (!tmp_1173_fu_14789_p3.read().is_01() || !p_shl430_cast_fu_14805_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1173_fu_14789_p3.read()) - sc_bigint<13>(p_shl430_cast_fu_14805_p1.read()));
}

void ShuffleNetV2::thread_tmp_1176_fu_14815_p2() {
    tmp_1176_fu_14815_p2 = (!tmp_460_cast_reg_33300.read().is_01() || !tmp_1175_fu_14809_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_460_cast_reg_33300.read()) + sc_biguint<13>(tmp_1175_fu_14809_p2.read()));
}

void ShuffleNetV2::thread_tmp_1177_cast_fu_9803_p1() {
    tmp_1177_cast_fu_9803_p1 = esl_sext<9,8>(tmp_914_fu_9797_p2.read());
}

void ShuffleNetV2::thread_tmp_1177_fu_14865_p3() {
    tmp_1177_fu_14865_p3 = esl_concat<10,5>(tmp_475_reg_33323.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1178_cast_fu_27748_p1() {
    tmp_1178_cast_fu_27748_p1 = esl_zext<8,3>(p_lshr_f24_cast_fu_27738_p4.read());
}

void ShuffleNetV2::thread_tmp_1178_fu_14876_p3() {
    tmp_1178_fu_14876_p3 = esl_concat<10,3>(tmp_475_reg_33323.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1179_fu_14887_p2() {
    tmp_1179_fu_14887_p2 = (!p_shl427_cast_fu_14872_p1.read().is_01() || !p_shl428_cast_fu_14883_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl427_cast_fu_14872_p1.read()) - sc_biguint<16>(p_shl428_cast_fu_14883_p1.read()));
}

void ShuffleNetV2::thread_tmp_1180_cast_fu_9847_p1() {
    tmp_1180_cast_fu_9847_p1 = esl_sext<11,10>(tmp_924_fu_9841_p2.read());
}

void ShuffleNetV2::thread_tmp_1180_fu_14897_p2() {
    tmp_1180_fu_14897_p2 = (!tmp_461_cast_reg_33305.read().is_01() || !tmp_1442_cast_fu_14893_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_461_cast_reg_33305.read()) + sc_bigint<17>(tmp_1442_cast_fu_14893_p1.read()));
}

void ShuffleNetV2::thread_tmp_1181_cast1_fu_9891_p1() {
    tmp_1181_cast1_fu_9891_p1 = esl_sext<64,11>(tmp_927_fu_9886_p2.read());
}

void ShuffleNetV2::thread_tmp_1181_cast_fu_28024_p1() {
    tmp_1181_cast_fu_28024_p1 = esl_sext<12,8>(tmp_907_fu_28018_p2.read());
}

void ShuffleNetV2::thread_tmp_1181_fu_15176_p3() {
    tmp_1181_fu_15176_p3 = esl_concat<6,3>(co84_reg_3847.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1182_cast_fu_28062_p1() {
    tmp_1182_cast_fu_28062_p1 = esl_sext<32,8>(tmp_908_reg_37376.read());
}

void ShuffleNetV2::thread_tmp_1182_fu_15188_p3() {
    tmp_1182_fu_15188_p3 = esl_concat<6,1>(co84_reg_3847.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1183_fu_15200_p2() {
    tmp_1183_fu_15200_p2 = (!p_shl438_cast_fu_15196_p1.read().is_01() || !p_shl437_cast_fu_15184_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl438_cast_fu_15196_p1.read()) + sc_biguint<10>(p_shl437_cast_fu_15184_p1.read()));
}

void ShuffleNetV2::thread_tmp_1184_fu_15212_p3() {
    tmp_1184_fu_15212_p3 = esl_concat<7,3>(tmp_476_fu_15206_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1185_fu_15224_p3() {
    tmp_1185_fu_15224_p3 = esl_concat<7,1>(tmp_476_fu_15206_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1186_fu_15236_p2() {
    tmp_1186_fu_15236_p2 = (!p_shl436_cast_fu_15232_p1.read().is_01() || !p_shl435_cast_fu_15220_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl436_cast_fu_15232_p1.read()) + sc_biguint<11>(p_shl435_cast_fu_15220_p1.read()));
}

void ShuffleNetV2::thread_tmp_1187_fu_15099_p2() {
    tmp_1187_fu_15099_p2 = (!tmp_477_cast_fu_15095_p1.read().is_01() || !tmp_1170_reg_33385.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_477_cast_fu_15095_p1.read()) + sc_biguint<10>(tmp_1170_reg_33385.read()));
}

void ShuffleNetV2::thread_tmp_1188_fu_15104_p3() {
    tmp_1188_fu_15104_p3 = esl_concat<10,3>(tmp_1187_fu_15099_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1189_fu_15116_p3() {
    tmp_1189_fu_15116_p3 = esl_concat<10,1>(tmp_1187_fu_15099_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1190_fu_15128_p2() {
    tmp_1190_fu_15128_p2 = (!p_shl433_cast_fu_15112_p1.read().is_01() || !p_shl434_cast_fu_15124_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl433_cast_fu_15112_p1.read()) + sc_biguint<15>(p_shl434_cast_fu_15124_p1.read()));
}

void ShuffleNetV2::thread_tmp_1191_fu_15387_p1() {
    tmp_1191_fu_15387_p1 = co86_reg_3880.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1192_fu_15262_p2() {
    tmp_1192_fu_15262_p2 = (!tmp_479_cast_fu_15258_p1.read().is_01() || !tmp_1183_reg_33429.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_479_cast_fu_15258_p1.read()) + sc_biguint<10>(tmp_1183_reg_33429.read()));
}

void ShuffleNetV2::thread_tmp_1193_fu_15267_p3() {
    tmp_1193_fu_15267_p3 = esl_concat<10,3>(tmp_1192_fu_15262_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1194_fu_15279_p3() {
    tmp_1194_fu_15279_p3 = esl_concat<10,1>(tmp_1192_fu_15262_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1195_cast_fu_27883_p1() {
    tmp_1195_cast_fu_27883_p1 = esl_sext<13,10>(tmp_915_fu_27877_p2.read());
}

void ShuffleNetV2::thread_tmp_1195_fu_15291_p2() {
    tmp_1195_fu_15291_p2 = (!p_shl441_cast_fu_15275_p1.read().is_01() || !p_shl442_cast_fu_15287_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl441_cast_fu_15275_p1.read()) + sc_biguint<14>(p_shl442_cast_fu_15287_p1.read()));
}

void ShuffleNetV2::thread_tmp_1196_cast_fu_9960_p1() {
    tmp_1196_cast_fu_9960_p1 = esl_zext<64,9>(tmp_974_reg_31794.read());
}

void ShuffleNetV2::thread_tmp_1196_fu_15297_p2() {
    tmp_1196_fu_15297_p2 = (!tmp_479_cast1_fu_15254_p1.read().is_01() || !tmp_1186_reg_33434.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_479_cast1_fu_15254_p1.read()) + sc_biguint<11>(tmp_1186_reg_33434.read()));
}

void ShuffleNetV2::thread_tmp_1197_fu_15302_p3() {
    tmp_1197_fu_15302_p3 = esl_concat<11,3>(tmp_1196_fu_15297_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1198_cast_fu_10120_p1() {
    tmp_1198_cast_fu_10120_p1 = esl_sext<64,11>(tmp_977_reg_31840.read());
}

void ShuffleNetV2::thread_tmp_1198_fu_15314_p3() {
    tmp_1198_fu_15314_p3 = esl_concat<11,1>(tmp_1196_fu_15297_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1199_cast_fu_28401_p1() {
    tmp_1199_cast_fu_28401_p1 = esl_sext<12,8>(tmp_920_fu_28395_p2.read());
}

void ShuffleNetV2::thread_tmp_1199_fu_15326_p2() {
    tmp_1199_fu_15326_p2 = (!p_shl439_cast_fu_15310_p1.read().is_01() || !p_shl440_cast_fu_15322_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl439_cast_fu_15310_p1.read()) + sc_biguint<15>(p_shl440_cast_fu_15322_p1.read()));
}

void ShuffleNetV2::thread_tmp_1200_cast_fu_28439_p1() {
    tmp_1200_cast_fu_28439_p1 = esl_sext<32,8>(tmp_921_reg_37519.read());
}

void ShuffleNetV2::thread_tmp_1200_fu_15150_p2() {
    tmp_1200_fu_15150_p2 = (!tmp_1190_reg_33398.read().is_01() || !tmp_480_cast1_fu_15146_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1190_reg_33398.read()) + sc_biguint<15>(tmp_480_cast1_fu_15146_p1.read()));
}

void ShuffleNetV2::thread_tmp_1201_fu_15352_p2() {
    tmp_1201_fu_15352_p2 = (!tmp_1195_reg_33447.read().is_01() || !tmp_485_cast2_fu_15348_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1195_reg_33447.read()) + sc_biguint<14>(tmp_485_cast2_fu_15348_p1.read()));
}

void ShuffleNetV2::thread_tmp_1202_fu_15357_p2() {
    tmp_1202_fu_15357_p2 = (!tmp_1199_reg_33452.read().is_01() || !tmp_485_cast1_fu_15344_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1199_reg_33452.read()) + sc_biguint<15>(tmp_485_cast1_fu_15344_p1.read()));
}

void ShuffleNetV2::thread_tmp_1203_fu_15691_p1() {
    tmp_1203_fu_15691_p1 = k14_reg_3924.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1204_fu_15476_p1() {
    tmp_1204_fu_15476_p1 = i70_reg_3902.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1205_fu_15515_p3() {
    tmp_1205_fu_15515_p3 = esl_concat<7,6>(tmp_495_fu_15510_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1206_fu_15523_p3() {
    tmp_1206_fu_15523_p3 = esl_concat<7,4>(tmp_495_fu_15510_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1207_cast_fu_28505_p1() {
    tmp_1207_cast_fu_28505_p1 = esl_zext<8,3>(p_lshr_f25_cast_fu_28495_p4.read());
}

void ShuffleNetV2::thread_tmp_1207_fu_15535_p2() {
    tmp_1207_fu_15535_p2 = (!tmp_1205_fu_15515_p3.read().is_01() || !p_shl446_cast_fu_15531_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1205_fu_15515_p3.read()) - sc_bigint<13>(p_shl446_cast_fu_15531_p1.read()));
}

void ShuffleNetV2::thread_tmp_1208_cast_fu_10255_p1() {
    tmp_1208_cast_fu_10255_p1 = esl_zext<64,15>(tmp_997_fu_10250_p2.read());
}

void ShuffleNetV2::thread_tmp_1208_fu_15541_p2() {
    tmp_1208_fu_15541_p2 = (!tmp_483_cast_reg_33506.read().is_01() || !tmp_1207_fu_15535_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_483_cast_reg_33506.read()) + sc_biguint<13>(tmp_1207_fu_15535_p2.read()));
}

void ShuffleNetV2::thread_tmp_1209_cast_fu_28781_p1() {
    tmp_1209_cast_fu_28781_p1 = esl_sext<12,8>(tmp_936_fu_28775_p2.read());
}

void ShuffleNetV2::thread_tmp_1209_fu_15591_p3() {
    tmp_1209_fu_15591_p3 = esl_concat<9,5>(tmp_498_reg_33529.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1210_cast_fu_28819_p1() {
    tmp_1210_cast_fu_28819_p1 = esl_sext<32,8>(tmp_937_reg_37627.read());
}

void ShuffleNetV2::thread_tmp_1210_fu_15598_p1() {
    tmp_1210_fu_15598_p1 = esl_sext<15,14>(tmp_1209_fu_15591_p3.read());
}

void ShuffleNetV2::thread_tmp_1211_fu_15606_p3() {
    tmp_1211_fu_15606_p3 = esl_concat<9,3>(tmp_498_reg_33529.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1212_fu_15613_p1() {
    tmp_1212_fu_15613_p1 = esl_sext<13,12>(tmp_1211_fu_15606_p3.read());
}

void ShuffleNetV2::thread_tmp_1213_fu_15621_p2() {
    tmp_1213_fu_15621_p2 = (!p_shl443_cast_fu_15602_p1.read().is_01() || !p_shl444_cast_fu_15617_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl443_cast_fu_15602_p1.read()) - sc_biguint<16>(p_shl444_cast_fu_15617_p1.read()));
}

void ShuffleNetV2::thread_tmp_1214_fu_15631_p2() {
    tmp_1214_fu_15631_p2 = (!tmp_484_cast_reg_33511.read().is_01() || !tmp_1483_cast_fu_15627_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_484_cast_reg_33511.read()) + sc_bigint<17>(tmp_1483_cast_fu_15627_p1.read()));
}

void ShuffleNetV2::thread_tmp_1215_fu_16160_p1() {
    tmp_1215_fu_16160_p1 = co90_reg_4001.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1216_fu_16060_p1() {
    tmp_1216_fu_16060_p1 = k16_reg_3990.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1217_fu_15847_p1() {
    tmp_1217_fu_15847_p1 = i76_reg_3968.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1218_cast_cast_fu_28176_p1() {
    tmp_1218_cast_cast_fu_28176_p1 = esl_sext<9,8>(tmp_929_fu_28170_p2.read());
}

void ShuffleNetV2::thread_tmp_1218_cast_fu_10536_p1() {
    tmp_1218_cast_fu_10536_p1 = esl_sext<64,13>(tmp_1003_reg_31946.read());
}

void ShuffleNetV2::thread_tmp_1218_fu_15908_p3() {
    tmp_1218_fu_15908_p3 = esl_concat<7,2>(tmp_511_reg_33645.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1219_cast_fu_28196_p1() {
    tmp_1219_cast_fu_28196_p1 = esl_sext<32,8>(tmp_930_reg_37454.read());
}

void ShuffleNetV2::thread_tmp_1219_fu_15915_p1() {
    tmp_1219_fu_15915_p1 = esl_sext<34,9>(tmp_1218_fu_15908_p3.read());
}

void ShuffleNetV2::thread_tmp_1220_fu_15923_p2() {
    tmp_1220_fu_15923_p2 = (!p_shl450_cast_fu_15919_p1.read().is_01() || !tmp_513_cast1_fu_15904_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl450_cast_fu_15919_p1.read()) - sc_biguint<35>(tmp_513_cast1_fu_15904_p1.read()));
}

void ShuffleNetV2::thread_tmp_1221_fu_15933_p2() {
    tmp_1221_fu_15933_p2 = (!tmp_1493_cast_fu_15929_p1.read().is_01() || !tmp_499_cast_reg_33614.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1493_cast_fu_15929_p1.read()) + sc_biguint<36>(tmp_499_cast_reg_33614.read()));
}

void ShuffleNetV2::thread_tmp_1222_cast_fu_28241_p1() {
    tmp_1222_cast_fu_28241_p1 = esl_sext<10,9>(tmp_933_reg_37460.read());
}

void ShuffleNetV2::thread_tmp_1222_fu_15938_p1() {
    tmp_1222_fu_15938_p1 = tmp_1221_fu_15933_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1223_cast_fu_10508_p1() {
    tmp_1223_cast_fu_10508_p1 = esl_sext<16,15>(tmp_1006_fu_10502_p2.read());
}

void ShuffleNetV2::thread_tmp_1223_fu_15942_p1() {
    tmp_1223_fu_15942_p1 = tmp_1221_fu_15933_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1224_cast_fu_10517_p1() {
    tmp_1224_cast_fu_10517_p1 = esl_sext<33,16>(tmp_1007_fu_10512_p2.read());
}

void ShuffleNetV2::thread_tmp_1224_fu_15978_p2() {
    tmp_1224_fu_15978_p2 = (!p_shl449_cast_fu_15971_p3.read().is_01() || !tmp_1222_reg_33657.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl449_cast_fu_15971_p3.read()) - sc_biguint<10>(tmp_1222_reg_33657.read()));
}

void ShuffleNetV2::thread_tmp_1225_fu_15983_p2() {
    tmp_1225_fu_15983_p2 = (!tmp_1224_fu_15978_p2.read().is_01() || !tmp_506_cast_reg_33632.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1224_fu_15978_p2.read()) + sc_biguint<10>(tmp_506_cast_reg_33632.read()));
}

void ShuffleNetV2::thread_tmp_1226_fu_15949_p3() {
    tmp_1226_fu_15949_p3 = esl_concat<9,2>(tmp_514_reg_33651.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1227_fu_15960_p2() {
    tmp_1227_fu_15960_p2 = (!p_shl448_cast_fu_15956_p1.read().is_01() || !tmp_516_cast_fu_15946_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl448_cast_fu_15956_p1.read()) - sc_biguint<12>(tmp_516_cast_fu_15946_p1.read()));
}

void ShuffleNetV2::thread_tmp_1228_cast_fu_28640_p1() {
    tmp_1228_cast_fu_28640_p1 = esl_sext<13,10>(tmp_943_fu_28634_p2.read());
}

void ShuffleNetV2::thread_tmp_1228_fu_15966_p2() {
    tmp_1228_fu_15966_p2 = (!tmp_1227_fu_15960_p2.read().is_01() || !tmp_499_cast1_reg_33609.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1227_fu_15960_p2.read()) + sc_biguint<12>(tmp_499_cast1_reg_33609.read()));
}

void ShuffleNetV2::thread_tmp_1229_fu_15991_p3() {
    tmp_1229_fu_15991_p3 = esl_concat<12,2>(tmp_1228_reg_33667.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1230_fu_16002_p2() {
    tmp_1230_fu_16002_p2 = (!p_shl237_fu_15998_p1.read().is_01() || !tmp_1500_cast_fu_15988_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl237_fu_15998_p1.read()) - sc_bigint<64>(tmp_1500_cast_fu_15988_p1.read()));
}

void ShuffleNetV2::thread_tmp_1231_fu_16008_p2() {
    tmp_1231_fu_16008_p2 = (!tmp_1230_fu_16002_p2.read().is_01() || !tmp_506_reg_33627.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1230_fu_16002_p2.read()) + sc_biguint<64>(tmp_506_reg_33627.read()));
}

void ShuffleNetV2::thread_tmp_1232_fu_16552_p3() {
    tmp_1232_fu_16552_p3 = esl_concat<6,3>(co92_reg_4056.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1233_cast_fu_10806_p1() {
    tmp_1233_cast_fu_10806_p1 = esl_sext<36,35>(tmp_1013_fu_10800_p2.read());
}

void ShuffleNetV2::thread_tmp_1233_fu_16564_p3() {
    tmp_1233_fu_16564_p3 = esl_concat<6,1>(co92_reg_4056.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1234_fu_16576_p2() {
    tmp_1234_fu_16576_p2 = (!p_shl456_cast_fu_16572_p1.read().is_01() || !p_shl455_cast_fu_16560_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl456_cast_fu_16572_p1.read()) + sc_biguint<10>(p_shl455_cast_fu_16560_p1.read()));
}

void ShuffleNetV2::thread_tmp_1235_fu_16456_p1() {
    tmp_1235_fu_16456_p1 = k18_reg_4045.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1236_fu_16249_p1() {
    tmp_1236_fu_16249_p1 = i78_reg_4023.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1237_cast_fu_10905_p1() {
    tmp_1237_cast_fu_10905_p1 = esl_zext<64,10>(tmp_1018_reg_32095.read());
}

void ShuffleNetV2::thread_tmp_1237_fu_16288_p3() {
    tmp_1237_fu_16288_p3 = esl_concat<7,6>(tmp_523_fu_16283_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1238_cast_fu_29219_p1() {
    tmp_1238_cast_fu_29219_p1 = esl_zext<8,3>(p_lshr_f26_cast_fu_29209_p4.read());
}

void ShuffleNetV2::thread_tmp_1238_fu_16296_p3() {
    tmp_1238_fu_16296_p3 = esl_concat<7,4>(tmp_523_fu_16283_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1239_cast_fu_10843_p1() {
    tmp_1239_cast_fu_10843_p1 = esl_sext<12,11>(tmp_1020_fu_10837_p2.read());
}

void ShuffleNetV2::thread_tmp_1239_fu_16308_p2() {
    tmp_1239_fu_16308_p2 = (!tmp_1237_fu_16288_p3.read().is_01() || !p_shl454_cast_fu_16304_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1237_fu_16288_p3.read()) - sc_bigint<13>(p_shl454_cast_fu_16304_p1.read()));
}

void ShuffleNetV2::thread_tmp_1240_cast_fu_10869_p1() {
    tmp_1240_cast_fu_10869_p1 = esl_sext<64,12>(tmp_1021_reg_32089.read());
}

void ShuffleNetV2::thread_tmp_1240_fu_16314_p2() {
    tmp_1240_fu_16314_p2 = (!tmp_508_cast_reg_33757.read().is_01() || !tmp_1239_fu_16308_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_508_cast_reg_33757.read()) + sc_biguint<13>(tmp_1239_fu_16308_p2.read()));
}

void ShuffleNetV2::thread_tmp_1241_cast_fu_29495_p1() {
    tmp_1241_cast_fu_29495_p1 = esl_sext<12,8>(tmp_955_fu_29489_p2.read());
}

void ShuffleNetV2::thread_tmp_1241_fu_16364_p3() {
    tmp_1241_fu_16364_p3 = esl_concat<11,5>(tmp_525_reg_33780.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1242_cast_fu_29533_p1() {
    tmp_1242_cast_fu_29533_p1 = esl_sext<32,8>(tmp_956_reg_37833.read());
}

void ShuffleNetV2::thread_tmp_1242_fu_16375_p3() {
    tmp_1242_fu_16375_p3 = esl_concat<11,3>(tmp_525_reg_33780.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1243_fu_16386_p2() {
    tmp_1243_fu_16386_p2 = (!p_shl451_cast_fu_16371_p1.read().is_01() || !p_shl452_cast_fu_16382_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl451_cast_fu_16371_p1.read()) - sc_biguint<17>(p_shl452_cast_fu_16382_p1.read()));
}

void ShuffleNetV2::thread_tmp_1244_fu_16396_p2() {
    tmp_1244_fu_16396_p2 = (!tmp_509_cast_reg_33762.read().is_01() || !tmp_1521_cast_fu_16392_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_509_cast_reg_33762.read()) + sc_bigint<18>(tmp_1521_cast_fu_16392_p1.read()));
}

void ShuffleNetV2::thread_tmp_1245_fu_16675_p3() {
    tmp_1245_fu_16675_p3 = esl_concat<6,3>(co94_reg_4089.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1246_fu_16687_p3() {
    tmp_1246_fu_16687_p3 = esl_concat<6,1>(co94_reg_4089.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1247_fu_16699_p2() {
    tmp_1247_fu_16699_p2 = (!p_shl462_cast_fu_16695_p1.read().is_01() || !p_shl461_cast_fu_16683_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl462_cast_fu_16695_p1.read()) + sc_biguint<10>(p_shl461_cast_fu_16683_p1.read()));
}

void ShuffleNetV2::thread_tmp_1248_fu_16711_p3() {
    tmp_1248_fu_16711_p3 = esl_concat<7,3>(tmp_526_fu_16705_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1249_fu_16723_p3() {
    tmp_1249_fu_16723_p3 = esl_concat<7,1>(tmp_526_fu_16705_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1250_fu_16735_p2() {
    tmp_1250_fu_16735_p2 = (!p_shl460_cast_fu_16731_p1.read().is_01() || !p_shl459_cast_fu_16719_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl460_cast_fu_16731_p1.read()) + sc_biguint<11>(p_shl459_cast_fu_16719_p1.read()));
}

void ShuffleNetV2::thread_tmp_1251_fu_16598_p2() {
    tmp_1251_fu_16598_p2 = (!tmp_527_cast1_fu_16594_p1.read().is_01() || !tmp_1234_reg_33842.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_527_cast1_fu_16594_p1.read()) + sc_biguint<10>(tmp_1234_reg_33842.read()));
}

void ShuffleNetV2::thread_tmp_1252_fu_16603_p3() {
    tmp_1252_fu_16603_p3 = esl_concat<10,3>(tmp_1251_fu_16598_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1253_cast_fu_11301_p1() {
    tmp_1253_cast_fu_11301_p1 = esl_sext<64,13>(tmp_1030_reg_32197.read());
}

void ShuffleNetV2::thread_tmp_1253_fu_16615_p3() {
    tmp_1253_fu_16615_p3 = esl_concat<10,1>(tmp_1251_fu_16598_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1254_fu_16627_p2() {
    tmp_1254_fu_16627_p2 = (!p_shl457_cast_fu_16611_p1.read().is_01() || !p_shl458_cast_fu_16623_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl457_cast_fu_16611_p1.read()) + sc_biguint<15>(p_shl458_cast_fu_16623_p1.read()));
}

void ShuffleNetV2::thread_tmp_1255_cast_fu_29354_p1() {
    tmp_1255_cast_fu_29354_p1 = esl_sext<13,10>(tmp_966_fu_29348_p2.read());
}

void ShuffleNetV2::thread_tmp_1255_fu_16886_p1() {
    tmp_1255_fu_16886_p1 = co96_reg_4122.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1256_fu_16761_p2() {
    tmp_1256_fu_16761_p2 = (!tmp_529_cast_fu_16757_p1.read().is_01() || !tmp_1250_reg_33891.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_529_cast_fu_16757_p1.read()) + sc_biguint<11>(tmp_1250_reg_33891.read()));
}

void ShuffleNetV2::thread_tmp_1257_fu_16766_p3() {
    tmp_1257_fu_16766_p3 = esl_concat<11,3>(tmp_1256_fu_16761_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1258_cast_fu_11273_p1() {
    tmp_1258_cast_fu_11273_p1 = esl_sext<16,15>(tmp_1033_fu_11267_p2.read());
}

void ShuffleNetV2::thread_tmp_1258_fu_16778_p3() {
    tmp_1258_fu_16778_p3 = esl_concat<11,1>(tmp_1256_fu_16761_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1259_cast1_fu_11282_p1() {
    tmp_1259_cast1_fu_11282_p1 = esl_sext<33,16>(tmp_1034_fu_11277_p2.read());
}

void ShuffleNetV2::thread_tmp_1259_cast_fu_29864_p1() {
    tmp_1259_cast_fu_29864_p1 = esl_sext<12,8>(tmp_970_fu_29858_p2.read());
}

void ShuffleNetV2::thread_tmp_1259_fu_16790_p2() {
    tmp_1259_fu_16790_p2 = (!p_shl465_cast_fu_16774_p1.read().is_01() || !p_shl466_cast_fu_16786_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl465_cast_fu_16774_p1.read()) + sc_biguint<15>(p_shl466_cast_fu_16786_p1.read()));
}

void ShuffleNetV2::thread_tmp_1260_cast_fu_29902_p1() {
    tmp_1260_cast_fu_29902_p1 = esl_sext<32,8>(tmp_971_reg_37976.read());
}

void ShuffleNetV2::thread_tmp_1260_fu_16796_p2() {
    tmp_1260_fu_16796_p2 = (!tmp_529_cast1_fu_16753_p1.read().is_01() || !tmp_1247_reg_33886.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_529_cast1_fu_16753_p1.read()) + sc_biguint<10>(tmp_1247_reg_33886.read()));
}

void ShuffleNetV2::thread_tmp_1261_fu_16801_p3() {
    tmp_1261_fu_16801_p3 = esl_concat<10,3>(tmp_1260_fu_16796_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1262_fu_16813_p3() {
    tmp_1262_fu_16813_p3 = esl_concat<10,1>(tmp_1260_fu_16796_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1263_fu_16825_p2() {
    tmp_1263_fu_16825_p2 = (!p_shl463_cast_fu_16809_p1.read().is_01() || !p_shl464_cast_fu_16821_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl463_cast_fu_16809_p1.read()) + sc_biguint<14>(p_shl464_cast_fu_16821_p1.read()));
}

void ShuffleNetV2::thread_tmp_1264_fu_16649_p2() {
    tmp_1264_fu_16649_p2 = (!tmp_1254_reg_33855.read().is_01() || !tmp_530_cast_fu_16645_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1254_reg_33855.read()) + sc_biguint<15>(tmp_530_cast_fu_16645_p1.read()));
}

void ShuffleNetV2::thread_tmp_1265_fu_16851_p2() {
    tmp_1265_fu_16851_p2 = (!tmp_1259_reg_33904.read().is_01() || !tmp_535_cast_fu_16847_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1259_reg_33904.read()) + sc_biguint<15>(tmp_535_cast_fu_16847_p1.read()));
}

void ShuffleNetV2::thread_tmp_1266_fu_16861_p2() {
    tmp_1266_fu_16861_p2 = (!tmp_1263_reg_33909.read().is_01() || !tmp_535_cast1_fu_16843_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1263_reg_33909.read()) + sc_biguint<14>(tmp_535_cast1_fu_16843_p1.read()));
}

void ShuffleNetV2::thread_tmp_1267_cast_fu_29968_p1() {
    tmp_1267_cast_fu_29968_p1 = esl_zext<8,3>(p_lshr_f27_cast_fu_29958_p4.read());
}

void ShuffleNetV2::thread_tmp_1267_fu_17182_p1() {
    tmp_1267_fu_17182_p1 = k20_reg_4166.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1268_cast_fu_11575_p1() {
    tmp_1268_cast_fu_11575_p1 = esl_sext<36,35>(tmp_1040_fu_11569_p2.read());
}

void ShuffleNetV2::thread_tmp_1268_fu_16975_p1() {
    tmp_1268_fu_16975_p1 = i82_reg_4144.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1269_cast_fu_30244_p1() {
    tmp_1269_cast_fu_30244_p1 = esl_sext<12,8>(tmp_986_fu_30238_p2.read());
}

void ShuffleNetV2::thread_tmp_1269_fu_17014_p3() {
    tmp_1269_fu_17014_p3 = esl_concat<7,6>(tmp_545_fu_17009_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1270_cast_fu_30282_p1() {
    tmp_1270_cast_fu_30282_p1 = esl_sext<32,8>(tmp_987_reg_38084.read());
}

void ShuffleNetV2::thread_tmp_1270_fu_17022_p3() {
    tmp_1270_fu_17022_p3 = esl_concat<7,4>(tmp_545_fu_17009_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1271_fu_17034_p2() {
    tmp_1271_fu_17034_p2 = (!tmp_1269_fu_17014_p3.read().is_01() || !p_shl470_cast_fu_17030_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1269_fu_17014_p3.read()) - sc_bigint<13>(p_shl470_cast_fu_17030_p1.read()));
}

void ShuffleNetV2::thread_tmp_1272_cast_fu_11670_p1() {
    tmp_1272_cast_fu_11670_p1 = esl_zext<64,10>(tmp_1045_reg_32346.read());
}

void ShuffleNetV2::thread_tmp_1272_fu_17040_p2() {
    tmp_1272_fu_17040_p2 = (!tmp_533_cast_reg_33963.read().is_01() || !tmp_1271_fu_17034_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_533_cast_reg_33963.read()) + sc_biguint<13>(tmp_1271_fu_17034_p2.read()));
}

void ShuffleNetV2::thread_tmp_1273_fu_17090_p3() {
    tmp_1273_fu_17090_p3 = esl_concat<11,5>(tmp_548_reg_33986.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1274_fu_17101_p3() {
    tmp_1274_fu_17101_p3 = esl_concat<11,3>(tmp_548_reg_33986.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1275_cast_fu_11634_p1() {
    tmp_1275_cast_fu_11634_p1 = esl_sext<64,11>(tmp_1048_reg_32340.read());
}

void ShuffleNetV2::thread_tmp_1275_fu_17112_p2() {
    tmp_1275_fu_17112_p2 = (!p_shl467_cast_fu_17097_p1.read().is_01() || !p_shl468_cast_fu_17108_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl467_cast_fu_17097_p1.read()) - sc_biguint<17>(p_shl468_cast_fu_17108_p1.read()));
}

void ShuffleNetV2::thread_tmp_1276_fu_17122_p2() {
    tmp_1276_fu_17122_p2 = (!tmp_534_cast_reg_33968.read().is_01() || !tmp_1560_cast_fu_17118_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_534_cast_reg_33968.read()) + sc_bigint<18>(tmp_1560_cast_fu_17118_p1.read()));
}

void ShuffleNetV2::thread_tmp_1277_fu_17643_p1() {
    tmp_1277_fu_17643_p1 = co100_reg_4243.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1278_cast_fu_29647_p1() {
    tmp_1278_cast_fu_29647_p1 = esl_sext<11,8>(tmp_979_fu_29641_p2.read());
}

void ShuffleNetV2::thread_tmp_1278_fu_17547_p1() {
    tmp_1278_fu_17547_p1 = k22_reg_4232.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1279_cast_fu_29667_p1() {
    tmp_1279_cast_fu_29667_p1 = esl_sext<32,8>(tmp_980_reg_37911.read());
}

void ShuffleNetV2::thread_tmp_1279_fu_17334_p1() {
    tmp_1279_fu_17334_p1 = i88_reg_4210.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1280_fu_17395_p3() {
    tmp_1280_fu_17395_p3 = esl_concat<7,2>(tmp_561_reg_34102.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1281_fu_17402_p1() {
    tmp_1281_fu_17402_p1 = esl_sext<34,9>(tmp_1280_fu_17395_p3.read());
}

void ShuffleNetV2::thread_tmp_1282_fu_17410_p2() {
    tmp_1282_fu_17410_p2 = (!p_shl474_cast_fu_17406_p1.read().is_01() || !tmp_563_cast_fu_17391_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl474_cast_fu_17406_p1.read()) - sc_biguint<35>(tmp_563_cast_fu_17391_p1.read()));
}

void ShuffleNetV2::thread_tmp_1283_fu_17420_p2() {
    tmp_1283_fu_17420_p2 = (!tmp_1570_cast_fu_17416_p1.read().is_01() || !tmp_549_cast_reg_34071.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1570_cast_fu_17416_p1.read()) + sc_biguint<36>(tmp_549_cast_reg_34071.read()));
}

void ShuffleNetV2::thread_tmp_1284_fu_17425_p1() {
    tmp_1284_fu_17425_p1 = tmp_1283_fu_17420_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1285_fu_17429_p1() {
    tmp_1285_fu_17429_p1 = tmp_1283_fu_17420_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1286_fu_17465_p2() {
    tmp_1286_fu_17465_p2 = (!p_shl473_cast_fu_17458_p3.read().is_01() || !tmp_1284_reg_34114.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl473_cast_fu_17458_p3.read()) - sc_biguint<10>(tmp_1284_reg_34114.read()));
}

void ShuffleNetV2::thread_tmp_1287_fu_17470_p2() {
    tmp_1287_fu_17470_p2 = (!tmp_1286_fu_17465_p2.read().is_01() || !tmp_556_cast1_reg_34089.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1286_fu_17465_p2.read()) + sc_biguint<10>(tmp_556_cast1_reg_34089.read()));
}

void ShuffleNetV2::thread_tmp_1288_cast_fu_30103_p1() {
    tmp_1288_cast_fu_30103_p1 = esl_sext<13,10>(tmp_993_fu_30097_p2.read());
}

void ShuffleNetV2::thread_tmp_1288_fu_17436_p3() {
    tmp_1288_fu_17436_p3 = esl_concat<9,2>(tmp_564_reg_34108.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1289_fu_17447_p2() {
    tmp_1289_fu_17447_p2 = (!p_shl472_cast_fu_17443_p1.read().is_01() || !tmp_566_cast_fu_17433_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl472_cast_fu_17443_p1.read()) - sc_biguint<12>(tmp_566_cast_fu_17433_p1.read()));
}

void ShuffleNetV2::thread_tmp_1290_fu_17453_p2() {
    tmp_1290_fu_17453_p2 = (!tmp_1289_fu_17447_p2.read().is_01() || !tmp_549_cast1_reg_34066.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1289_fu_17447_p2.read()) + sc_biguint<12>(tmp_549_cast1_reg_34066.read()));
}

void ShuffleNetV2::thread_tmp_1291_fu_17478_p3() {
    tmp_1291_fu_17478_p3 = esl_concat<12,2>(tmp_1290_reg_34124.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1292_fu_17489_p2() {
    tmp_1292_fu_17489_p2 = (!p_shl240_fu_17485_p1.read().is_01() || !tmp_1577_cast_fu_17475_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl240_fu_17485_p1.read()) - sc_bigint<64>(tmp_1577_cast_fu_17475_p1.read()));
}

void ShuffleNetV2::thread_tmp_1293_fu_17495_p2() {
    tmp_1293_fu_17495_p2 = (!tmp_1292_fu_17489_p2.read().is_01() || !tmp_556_reg_34084.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1292_fu_17489_p2.read()) + sc_biguint<64>(tmp_556_reg_34084.read()));
}

void ShuffleNetV2::thread_tmp_1294_cast_fu_12066_p1() {
    tmp_1294_cast_fu_12066_p1 = esl_sext<64,13>(tmp_1063_reg_32448.read());
}

void ShuffleNetV2::thread_tmp_1294_fu_18031_p3() {
    tmp_1294_fu_18031_p3 = esl_concat<6,3>(co102_reg_4298.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1295_fu_18043_p3() {
    tmp_1295_fu_18043_p3 = esl_concat<6,1>(co102_reg_4298.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1296_fu_18055_p2() {
    tmp_1296_fu_18055_p2 = (!p_shl480_cast_fu_18051_p1.read().is_01() || !p_shl479_cast_fu_18039_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl480_cast_fu_18051_p1.read()) + sc_biguint<10>(p_shl479_cast_fu_18039_p1.read()));
}

void ShuffleNetV2::thread_tmp_1297_fu_17939_p1() {
    tmp_1297_fu_17939_p1 = k24_reg_4287.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1298_fu_17732_p1() {
    tmp_1298_fu_17732_p1 = i90_reg_4265.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1299_cast_fu_12038_p1() {
    tmp_1299_cast_fu_12038_p1 = esl_sext<17,16>(tmp_1066_fu_12032_p2.read());
}

void ShuffleNetV2::thread_tmp_1299_fu_17771_p3() {
    tmp_1299_fu_17771_p3 = esl_concat<7,6>(tmp_573_fu_17766_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1300_cast_fu_12047_p1() {
    tmp_1300_cast_fu_12047_p1 = esl_sext<33,17>(tmp_1067_fu_12042_p2.read());
}

void ShuffleNetV2::thread_tmp_1300_fu_17779_p3() {
    tmp_1300_fu_17779_p3 = esl_concat<7,4>(tmp_573_fu_17766_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1301_fu_17791_p2() {
    tmp_1301_fu_17791_p2 = (!tmp_1299_fu_17771_p3.read().is_01() || !p_shl478_cast_fu_17787_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1299_fu_17771_p3.read()) - sc_bigint<13>(p_shl478_cast_fu_17787_p1.read()));
}

void ShuffleNetV2::thread_tmp_1302_fu_17797_p2() {
    tmp_1302_fu_17797_p2 = (!tmp_558_cast_reg_34214.read().is_01() || !tmp_1301_fu_17791_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_558_cast_reg_34214.read()) + sc_biguint<13>(tmp_1301_fu_17791_p2.read()));
}

void ShuffleNetV2::thread_tmp_1303_fu_17847_p3() {
    tmp_1303_fu_17847_p3 = esl_concat<11,5>(tmp_575_reg_34237.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1304_fu_17858_p3() {
    tmp_1304_fu_17858_p3 = esl_concat<11,3>(tmp_575_reg_34237.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1305_fu_17869_p2() {
    tmp_1305_fu_17869_p2 = (!p_shl475_cast_fu_17854_p1.read().is_01() || !p_shl476_cast_fu_17865_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl475_cast_fu_17854_p1.read()) - sc_biguint<17>(p_shl476_cast_fu_17865_p1.read()));
}

void ShuffleNetV2::thread_tmp_1306_fu_17879_p2() {
    tmp_1306_fu_17879_p2 = (!tmp_559_cast_reg_34219.read().is_01() || !tmp_1598_cast_fu_17875_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_559_cast_reg_34219.read()) + sc_bigint<18>(tmp_1598_cast_fu_17875_p1.read()));
}

void ShuffleNetV2::thread_tmp_1307_fu_18154_p3() {
    tmp_1307_fu_18154_p3 = esl_concat<6,3>(co104_reg_4331.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1308_fu_18166_p3() {
    tmp_1308_fu_18166_p3 = esl_concat<6,1>(co104_reg_4331.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1309_fu_18178_p2() {
    tmp_1309_fu_18178_p2 = (!p_shl486_cast_fu_18174_p1.read().is_01() || !p_shl485_cast_fu_18162_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl486_cast_fu_18174_p1.read()) + sc_biguint<10>(p_shl485_cast_fu_18162_p1.read()));
}

void ShuffleNetV2::thread_tmp_1310_fu_18190_p3() {
    tmp_1310_fu_18190_p3 = esl_concat<7,3>(tmp_576_fu_18184_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1311_cast_fu_12379_p1() {
    tmp_1311_cast_fu_12379_p1 = esl_zext<64,15>(tmp_1077_fu_12374_p2.read());
}

void ShuffleNetV2::thread_tmp_1311_fu_18202_p3() {
    tmp_1311_fu_18202_p3 = esl_concat<7,1>(tmp_576_fu_18184_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1312_cast_fu_12389_p1() {
    tmp_1312_cast_fu_12389_p1 = esl_zext<64,14>(tmp_1078_reg_32556.read());
}

void ShuffleNetV2::thread_tmp_1312_fu_18214_p2() {
    tmp_1312_fu_18214_p2 = (!p_shl484_cast_fu_18210_p1.read().is_01() || !p_shl483_cast_fu_18198_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl484_cast_fu_18210_p1.read()) + sc_biguint<11>(p_shl483_cast_fu_18198_p1.read()));
}

void ShuffleNetV2::thread_tmp_1313_fu_18077_p2() {
    tmp_1313_fu_18077_p2 = (!tmp_577_cast_fu_18073_p1.read().is_01() || !tmp_1296_reg_34299.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_577_cast_fu_18073_p1.read()) + sc_biguint<10>(tmp_1296_reg_34299.read()));
}

void ShuffleNetV2::thread_tmp_1314_fu_18082_p3() {
    tmp_1314_fu_18082_p3 = esl_concat<10,3>(tmp_1313_fu_18077_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1315_fu_18094_p3() {
    tmp_1315_fu_18094_p3 = esl_concat<10,1>(tmp_1313_fu_18077_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1316_fu_18106_p2() {
    tmp_1316_fu_18106_p2 = (!p_shl481_cast_fu_18090_p1.read().is_01() || !p_shl482_cast_fu_18102_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl481_cast_fu_18090_p1.read()) + sc_biguint<15>(p_shl482_cast_fu_18102_p1.read()));
}

void ShuffleNetV2::thread_tmp_1317_fu_18365_p1() {
    tmp_1317_fu_18365_p1 = co106_reg_4364.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1318_fu_18240_p2() {
    tmp_1318_fu_18240_p2 = (!tmp_579_cast_fu_18236_p1.read().is_01() || !tmp_1309_reg_34343.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_579_cast_fu_18236_p1.read()) + sc_biguint<10>(tmp_1309_reg_34343.read()));
}

void ShuffleNetV2::thread_tmp_1319_fu_18245_p3() {
    tmp_1319_fu_18245_p3 = esl_concat<10,3>(tmp_1318_fu_18240_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1320_fu_18257_p3() {
    tmp_1320_fu_18257_p3 = esl_concat<10,1>(tmp_1318_fu_18240_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1321_fu_18269_p2() {
    tmp_1321_fu_18269_p2 = (!p_shl489_cast_fu_18253_p1.read().is_01() || !p_shl490_cast_fu_18265_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl489_cast_fu_18253_p1.read()) + sc_biguint<14>(p_shl490_cast_fu_18265_p1.read()));
}

void ShuffleNetV2::thread_tmp_1322_cast_fu_12669_p1() {
    tmp_1322_cast_fu_12669_p1 = esl_sext<64,13>(tmp_1084_reg_32610.read());
}

void ShuffleNetV2::thread_tmp_1322_fu_18275_p2() {
    tmp_1322_fu_18275_p2 = (!tmp_579_cast1_fu_18232_p1.read().is_01() || !tmp_1312_reg_34348.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_579_cast1_fu_18232_p1.read()) + sc_biguint<11>(tmp_1312_reg_34348.read()));
}

void ShuffleNetV2::thread_tmp_1323_fu_18280_p3() {
    tmp_1323_fu_18280_p3 = esl_concat<11,3>(tmp_1322_fu_18275_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1324_fu_18292_p3() {
    tmp_1324_fu_18292_p3 = esl_concat<11,1>(tmp_1322_fu_18275_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1325_fu_18304_p2() {
    tmp_1325_fu_18304_p2 = (!p_shl487_cast_fu_18288_p1.read().is_01() || !p_shl488_cast_fu_18300_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl487_cast_fu_18288_p1.read()) + sc_biguint<15>(p_shl488_cast_fu_18300_p1.read()));
}

void ShuffleNetV2::thread_tmp_1326_fu_18128_p2() {
    tmp_1326_fu_18128_p2 = (!tmp_1316_reg_34312.read().is_01() || !tmp_580_cast_fu_18124_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1316_reg_34312.read()) + sc_biguint<15>(tmp_580_cast_fu_18124_p1.read()));
}

void ShuffleNetV2::thread_tmp_1327_cast_fu_12641_p1() {
    tmp_1327_cast_fu_12641_p1 = esl_sext<17,16>(tmp_1087_fu_12635_p2.read());
}

void ShuffleNetV2::thread_tmp_1327_fu_18330_p2() {
    tmp_1327_fu_18330_p2 = (!tmp_1321_reg_34361.read().is_01() || !tmp_585_cast2_fu_18326_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1321_reg_34361.read()) + sc_biguint<14>(tmp_585_cast2_fu_18326_p1.read()));
}

void ShuffleNetV2::thread_tmp_1328_cast_fu_12650_p1() {
    tmp_1328_cast_fu_12650_p1 = esl_sext<33,17>(tmp_1088_fu_12645_p2.read());
}

void ShuffleNetV2::thread_tmp_1328_fu_18335_p2() {
    tmp_1328_fu_18335_p2 = (!tmp_1325_reg_34366.read().is_01() || !tmp_585_cast1_fu_18322_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1325_reg_34366.read()) + sc_biguint<15>(tmp_585_cast1_fu_18322_p1.read()));
}

void ShuffleNetV2::thread_tmp_1329_fu_18661_p1() {
    tmp_1329_fu_18661_p1 = k26_reg_4408.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1330_fu_18454_p1() {
    tmp_1330_fu_18454_p1 = i94_reg_4386.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1331_fu_18493_p3() {
    tmp_1331_fu_18493_p3 = esl_concat<7,6>(tmp_595_fu_18488_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1332_fu_18501_p3() {
    tmp_1332_fu_18501_p3 = esl_concat<7,4>(tmp_595_fu_18488_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1333_fu_18513_p2() {
    tmp_1333_fu_18513_p2 = (!tmp_1331_fu_18493_p3.read().is_01() || !p_shl494_cast_fu_18509_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1331_fu_18493_p3.read()) - sc_bigint<13>(p_shl494_cast_fu_18509_p1.read()));
}

void ShuffleNetV2::thread_tmp_1334_fu_18519_p2() {
    tmp_1334_fu_18519_p2 = (!tmp_583_cast_reg_34420.read().is_01() || !tmp_1333_fu_18513_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_583_cast_reg_34420.read()) + sc_biguint<13>(tmp_1333_fu_18513_p2.read()));
}

void ShuffleNetV2::thread_tmp_1335_fu_18569_p3() {
    tmp_1335_fu_18569_p3 = esl_concat<11,5>(tmp_598_reg_34443.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1336_fu_18580_p3() {
    tmp_1336_fu_18580_p3 = esl_concat<11,3>(tmp_598_reg_34443.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1337_cast_fu_12943_p1() {
    tmp_1337_cast_fu_12943_p1 = esl_sext<36,35>(tmp_1094_fu_12937_p2.read());
}

void ShuffleNetV2::thread_tmp_1337_fu_18591_p2() {
    tmp_1337_fu_18591_p2 = (!p_shl491_cast_fu_18576_p1.read().is_01() || !p_shl492_cast_fu_18587_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl491_cast_fu_18576_p1.read()) - sc_biguint<17>(p_shl492_cast_fu_18587_p1.read()));
}

void ShuffleNetV2::thread_tmp_1338_fu_18601_p2() {
    tmp_1338_fu_18601_p2 = (!tmp_584_cast1_reg_34425.read().is_01() || !tmp_1637_cast_fu_18597_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_584_cast1_reg_34425.read()) + sc_bigint<18>(tmp_1637_cast_fu_18597_p1.read()));
}

void ShuffleNetV2::thread_tmp_1339_fu_19130_p1() {
    tmp_1339_fu_19130_p1 = co110_reg_4485.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1340_fu_19034_p1() {
    tmp_1340_fu_19034_p1 = k28_reg_4474.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1341_cast_fu_13042_p1() {
    tmp_1341_cast_fu_13042_p1 = esl_zext<64,10>(tmp_1099_reg_32759.read());
}

void ShuffleNetV2::thread_tmp_1341_fu_18813_p1() {
    tmp_1341_fu_18813_p1 = i100_reg_4452.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1342_fu_18874_p3() {
    tmp_1342_fu_18874_p3 = esl_concat<7,2>(tmp_611_reg_34559.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1343_cast_fu_12980_p1() {
    tmp_1343_cast_fu_12980_p1 = esl_sext<13,12>(tmp_1101_fu_12974_p2.read());
}

void ShuffleNetV2::thread_tmp_1343_fu_18881_p1() {
    tmp_1343_fu_18881_p1 = esl_sext<34,9>(tmp_1342_fu_18874_p3.read());
}

void ShuffleNetV2::thread_tmp_1344_cast_fu_13006_p1() {
    tmp_1344_cast_fu_13006_p1 = esl_sext<64,13>(tmp_1102_reg_32753.read());
}

void ShuffleNetV2::thread_tmp_1344_fu_18889_p2() {
    tmp_1344_fu_18889_p2 = (!p_shl498_cast_fu_18885_p1.read().is_01() || !tmp_613_cast1_fu_18870_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl498_cast_fu_18885_p1.read()) - sc_biguint<35>(tmp_613_cast1_fu_18870_p1.read()));
}

void ShuffleNetV2::thread_tmp_1345_fu_18899_p2() {
    tmp_1345_fu_18899_p2 = (!tmp_1647_cast_fu_18895_p1.read().is_01() || !tmp_599_cast_reg_34528.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1647_cast_fu_18895_p1.read()) + sc_biguint<36>(tmp_599_cast_reg_34528.read()));
}

void ShuffleNetV2::thread_tmp_1346_fu_18904_p1() {
    tmp_1346_fu_18904_p1 = tmp_1345_fu_18899_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1347_fu_18908_p1() {
    tmp_1347_fu_18908_p1 = tmp_1345_fu_18899_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1348_fu_18952_p2() {
    tmp_1348_fu_18952_p2 = (!p_shl497_cast_fu_18945_p3.read().is_01() || !tmp_1346_reg_34571.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl497_cast_fu_18945_p3.read()) - sc_biguint<10>(tmp_1346_reg_34571.read()));
}

void ShuffleNetV2::thread_tmp_1349_fu_18957_p2() {
    tmp_1349_fu_18957_p2 = (!tmp_1348_fu_18952_p2.read().is_01() || !tmp_606_cast_reg_34546.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1348_fu_18952_p2.read()) + sc_biguint<10>(tmp_606_cast_reg_34546.read()));
}

void ShuffleNetV2::thread_tmp_1350_fu_18919_p3() {
    tmp_1350_fu_18919_p3 = esl_concat<8,2>(tmp_614_reg_34565.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1351_fu_18926_p1() {
    tmp_1351_fu_18926_p1 = esl_sext<11,10>(tmp_1350_fu_18919_p3.read());
}

void ShuffleNetV2::thread_tmp_1352_fu_18934_p2() {
    tmp_1352_fu_18934_p2 = (!p_shl496_cast_fu_18930_p1.read().is_01() || !tmp_616_cast1_fu_18915_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl496_cast_fu_18930_p1.read()) - sc_biguint<12>(tmp_616_cast1_fu_18915_p1.read()));
}

void ShuffleNetV2::thread_tmp_1353_fu_18940_p2() {
    tmp_1353_fu_18940_p2 = (!tmp_1352_fu_18934_p2.read().is_01() || !tmp_599_cast1_reg_34523.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1352_fu_18934_p2.read()) + sc_biguint<12>(tmp_599_cast1_reg_34523.read()));
}

void ShuffleNetV2::thread_tmp_1354_fu_18965_p3() {
    tmp_1354_fu_18965_p3 = esl_concat<12,2>(tmp_1353_reg_34581.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1355_fu_18976_p2() {
    tmp_1355_fu_18976_p2 = (!p_shl244_fu_18972_p1.read().is_01() || !tmp_1655_cast_fu_18962_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl244_fu_18972_p1.read()) - sc_bigint<64>(tmp_1655_cast_fu_18962_p1.read()));
}

void ShuffleNetV2::thread_tmp_1356_fu_18982_p2() {
    tmp_1356_fu_18982_p2 = (!tmp_1355_fu_18976_p2.read().is_01() || !tmp_606_reg_34541.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1355_fu_18976_p2.read()) + sc_biguint<64>(tmp_606_reg_34541.read()));
}

void ShuffleNetV2::thread_tmp_1357_fu_19518_p3() {
    tmp_1357_fu_19518_p3 = esl_concat<6,3>(co112_reg_4540.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1358_fu_19530_p3() {
    tmp_1358_fu_19530_p3 = esl_concat<6,1>(co112_reg_4540.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1359_fu_19542_p2() {
    tmp_1359_fu_19542_p2 = (!p_shl504_cast_fu_19538_p1.read().is_01() || !p_shl503_cast_fu_19526_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl504_cast_fu_19538_p1.read()) + sc_biguint<10>(p_shl503_cast_fu_19526_p1.read()));
}

void ShuffleNetV2::thread_tmp_1360_cast_fu_13434_p1() {
    tmp_1360_cast_fu_13434_p1 = esl_sext<64,13>(tmp_1114_reg_32861.read());
}

void ShuffleNetV2::thread_tmp_1360_fu_19426_p1() {
    tmp_1360_fu_19426_p1 = k30_reg_4529.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1361_fu_19219_p1() {
    tmp_1361_fu_19219_p1 = i102_reg_4507.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1362_fu_19258_p3() {
    tmp_1362_fu_19258_p3 = esl_concat<7,6>(tmp_623_fu_19253_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1363_fu_19266_p3() {
    tmp_1363_fu_19266_p3 = esl_concat<7,4>(tmp_623_fu_19253_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1364_fu_19278_p2() {
    tmp_1364_fu_19278_p2 = (!tmp_1362_fu_19258_p3.read().is_01() || !p_shl502_cast_fu_19274_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1362_fu_19258_p3.read()) - sc_bigint<13>(p_shl502_cast_fu_19274_p1.read()));
}

void ShuffleNetV2::thread_tmp_1365_cast_fu_13406_p1() {
    tmp_1365_cast_fu_13406_p1 = esl_sext<17,16>(tmp_1117_fu_13400_p2.read());
}

void ShuffleNetV2::thread_tmp_1365_fu_19284_p2() {
    tmp_1365_fu_19284_p2 = (!tmp_608_cast_reg_34671.read().is_01() || !tmp_1364_fu_19278_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_608_cast_reg_34671.read()) + sc_biguint<13>(tmp_1364_fu_19278_p2.read()));
}

void ShuffleNetV2::thread_tmp_1366_cast_fu_13415_p1() {
    tmp_1366_cast_fu_13415_p1 = esl_sext<33,17>(tmp_1118_fu_13410_p2.read());
}

void ShuffleNetV2::thread_tmp_1366_fu_19334_p3() {
    tmp_1366_fu_19334_p3 = esl_concat<11,5>(tmp_625_reg_34694.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1367_fu_19345_p3() {
    tmp_1367_fu_19345_p3 = esl_concat<11,3>(tmp_625_reg_34694.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1368_fu_19356_p2() {
    tmp_1368_fu_19356_p2 = (!p_shl499_cast_fu_19341_p1.read().is_01() || !p_shl500_cast_fu_19352_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl499_cast_fu_19341_p1.read()) - sc_biguint<17>(p_shl500_cast_fu_19352_p1.read()));
}

void ShuffleNetV2::thread_tmp_1369_fu_19366_p2() {
    tmp_1369_fu_19366_p2 = (!tmp_609_cast_reg_34676.read().is_01() || !tmp_1676_cast_fu_19362_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_609_cast_reg_34676.read()) + sc_bigint<18>(tmp_1676_cast_fu_19362_p1.read()));
}

void ShuffleNetV2::thread_tmp_1370_fu_19641_p3() {
    tmp_1370_fu_19641_p3 = esl_concat<6,3>(co114_reg_4573.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1371_fu_19653_p3() {
    tmp_1371_fu_19653_p3 = esl_concat<6,1>(co114_reg_4573.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1372_fu_19665_p2() {
    tmp_1372_fu_19665_p2 = (!p_shl510_cast_fu_19661_p1.read().is_01() || !p_shl509_cast_fu_19649_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl510_cast_fu_19661_p1.read()) + sc_biguint<10>(p_shl509_cast_fu_19649_p1.read()));
}

void ShuffleNetV2::thread_tmp_1373_fu_19677_p3() {
    tmp_1373_fu_19677_p3 = esl_concat<7,3>(tmp_626_fu_19671_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1374_fu_19689_p3() {
    tmp_1374_fu_19689_p3 = esl_concat<7,1>(tmp_626_fu_19671_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1375_fu_19701_p2() {
    tmp_1375_fu_19701_p2 = (!p_shl508_cast_fu_19697_p1.read().is_01() || !p_shl507_cast_fu_19685_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl508_cast_fu_19697_p1.read()) + sc_biguint<11>(p_shl507_cast_fu_19685_p1.read()));
}

void ShuffleNetV2::thread_tmp_1376_fu_19564_p2() {
    tmp_1376_fu_19564_p2 = (!tmp_627_cast_fu_19560_p1.read().is_01() || !tmp_1359_reg_34756.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_627_cast_fu_19560_p1.read()) + sc_biguint<10>(tmp_1359_reg_34756.read()));
}

void ShuffleNetV2::thread_tmp_1377_fu_19569_p3() {
    tmp_1377_fu_19569_p3 = esl_concat<10,3>(tmp_1376_fu_19564_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1378_fu_19581_p3() {
    tmp_1378_fu_19581_p3 = esl_concat<10,1>(tmp_1376_fu_19564_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1379_fu_19593_p2() {
    tmp_1379_fu_19593_p2 = (!p_shl505_cast_fu_19577_p1.read().is_01() || !p_shl506_cast_fu_19589_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl505_cast_fu_19577_p1.read()) + sc_biguint<15>(p_shl506_cast_fu_19589_p1.read()));
}

void ShuffleNetV2::thread_tmp_1380_fu_19852_p1() {
    tmp_1380_fu_19852_p1 = co116_reg_4606.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1381_fu_19727_p2() {
    tmp_1381_fu_19727_p2 = (!tmp_629_cast_fu_19723_p1.read().is_01() || !tmp_1375_reg_34805.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_629_cast_fu_19723_p1.read()) + sc_biguint<11>(tmp_1375_reg_34805.read()));
}

void ShuffleNetV2::thread_tmp_1382_fu_19732_p3() {
    tmp_1382_fu_19732_p3 = esl_concat<11,3>(tmp_1381_fu_19727_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1383_fu_19744_p3() {
    tmp_1383_fu_19744_p3 = esl_concat<11,1>(tmp_1381_fu_19727_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1384_fu_19756_p2() {
    tmp_1384_fu_19756_p2 = (!p_shl513_cast_fu_19740_p1.read().is_01() || !p_shl514_cast_fu_19752_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl513_cast_fu_19740_p1.read()) + sc_biguint<15>(p_shl514_cast_fu_19752_p1.read()));
}

void ShuffleNetV2::thread_tmp_1385_fu_19762_p2() {
    tmp_1385_fu_19762_p2 = (!tmp_629_cast1_fu_19719_p1.read().is_01() || !tmp_1372_reg_34800.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_629_cast1_fu_19719_p1.read()) + sc_biguint<10>(tmp_1372_reg_34800.read()));
}

void ShuffleNetV2::thread_tmp_1386_fu_19767_p3() {
    tmp_1386_fu_19767_p3 = esl_concat<10,3>(tmp_1385_fu_19762_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1387_cast_fu_13664_p1() {
    tmp_1387_cast_fu_13664_p1 = esl_zext<64,15>(tmp_1138_fu_13659_p2.read());
}

void ShuffleNetV2::thread_tmp_1387_fu_19779_p3() {
    tmp_1387_fu_19779_p3 = esl_concat<10,1>(tmp_1385_fu_19762_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1388_cast_fu_13866_p1() {
    tmp_1388_cast_fu_13866_p1 = esl_zext<64,15>(tmp_1139_fu_13861_p2.read());
}

void ShuffleNetV2::thread_tmp_1388_fu_19791_p2() {
    tmp_1388_fu_19791_p2 = (!p_shl511_cast_fu_19775_p1.read().is_01() || !p_shl512_cast_fu_19787_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl511_cast_fu_19775_p1.read()) + sc_biguint<14>(p_shl512_cast_fu_19787_p1.read()));
}

void ShuffleNetV2::thread_tmp_1389_cast_fu_13876_p1() {
    tmp_1389_cast_fu_13876_p1 = esl_zext<64,14>(tmp_1140_reg_33013.read());
}

void ShuffleNetV2::thread_tmp_1389_fu_19615_p2() {
    tmp_1389_fu_19615_p2 = (!tmp_1379_reg_34769.read().is_01() || !tmp_630_cast1_fu_19611_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1379_reg_34769.read()) + sc_biguint<15>(tmp_630_cast1_fu_19611_p1.read()));
}

void ShuffleNetV2::thread_tmp_1390_fu_19817_p2() {
    tmp_1390_fu_19817_p2 = (!tmp_1384_reg_34818.read().is_01() || !tmp_635_cast2_fu_19813_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1384_reg_34818.read()) + sc_biguint<15>(tmp_635_cast2_fu_19813_p1.read()));
}

void ShuffleNetV2::thread_tmp_1391_fu_19827_p2() {
    tmp_1391_fu_19827_p2 = (!tmp_1388_reg_34823.read().is_01() || !tmp_635_cast1_fu_19809_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1388_reg_34823.read()) + sc_biguint<14>(tmp_635_cast1_fu_19809_p1.read()));
}

void ShuffleNetV2::thread_tmp_1392_fu_20148_p1() {
    tmp_1392_fu_20148_p1 = k32_reg_4650.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1393_fu_19941_p1() {
    tmp_1393_fu_19941_p1 = i106_reg_4628.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1394_fu_19980_p3() {
    tmp_1394_fu_19980_p3 = esl_concat<7,6>(tmp_645_fu_19975_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1395_fu_19988_p3() {
    tmp_1395_fu_19988_p3 = esl_concat<7,4>(tmp_645_fu_19975_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1396_fu_20000_p2() {
    tmp_1396_fu_20000_p2 = (!tmp_1394_fu_19980_p3.read().is_01() || !p_shl518_cast_fu_19996_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1394_fu_19980_p3.read()) - sc_bigint<13>(p_shl518_cast_fu_19996_p1.read()));
}

void ShuffleNetV2::thread_tmp_1397_fu_20006_p2() {
    tmp_1397_fu_20006_p2 = (!tmp_633_cast_reg_34877.read().is_01() || !tmp_1396_fu_20000_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_633_cast_reg_34877.read()) + sc_biguint<13>(tmp_1396_fu_20000_p2.read()));
}

void ShuffleNetV2::thread_tmp_1398_fu_20056_p3() {
    tmp_1398_fu_20056_p3 = esl_concat<11,5>(tmp_648_reg_34900.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1399_cast_fu_14156_p1() {
    tmp_1399_cast_fu_14156_p1 = esl_sext<64,13>(tmp_1146_reg_33067.read());
}

void ShuffleNetV2::thread_tmp_1399_fu_20067_p3() {
    tmp_1399_fu_20067_p3 = esl_concat<11,3>(tmp_648_reg_34900.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1400_fu_20078_p2() {
    tmp_1400_fu_20078_p2 = (!p_shl515_cast_fu_20063_p1.read().is_01() || !p_shl516_cast_fu_20074_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl515_cast_fu_20063_p1.read()) - sc_biguint<17>(p_shl516_cast_fu_20074_p1.read()));
}

void ShuffleNetV2::thread_tmp_1401_fu_20088_p2() {
    tmp_1401_fu_20088_p2 = (!tmp_634_cast_reg_34882.read().is_01() || !tmp_1715_cast_fu_20084_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_634_cast_reg_34882.read()) + sc_bigint<18>(tmp_1715_cast_fu_20084_p1.read()));
}

void ShuffleNetV2::thread_tmp_1402_fu_20621_p1() {
    tmp_1402_fu_20621_p1 = co120_reg_4727.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1403_fu_20525_p1() {
    tmp_1403_fu_20525_p1 = k34_reg_4716.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1404_cast_fu_14128_p1() {
    tmp_1404_cast_fu_14128_p1 = esl_sext<17,16>(tmp_1149_fu_14122_p2.read());
}

void ShuffleNetV2::thread_tmp_1404_fu_20300_p1() {
    tmp_1404_fu_20300_p1 = i112_reg_4694.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1405_cast_fu_14137_p1() {
    tmp_1405_cast_fu_14137_p1 = esl_sext<33,17>(tmp_1150_fu_14132_p2.read());
}

void ShuffleNetV2::thread_tmp_1405_fu_20361_p3() {
    tmp_1405_fu_20361_p3 = esl_concat<7,2>(tmp_661_reg_35016.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1406_fu_20368_p1() {
    tmp_1406_fu_20368_p1 = esl_sext<34,9>(tmp_1405_fu_20361_p3.read());
}

void ShuffleNetV2::thread_tmp_1407_fu_20376_p2() {
    tmp_1407_fu_20376_p2 = (!p_shl522_cast_fu_20372_p1.read().is_01() || !tmp_663_cast1_fu_20357_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl522_cast_fu_20372_p1.read()) - sc_biguint<35>(tmp_663_cast1_fu_20357_p1.read()));
}

void ShuffleNetV2::thread_tmp_1408_fu_20386_p2() {
    tmp_1408_fu_20386_p2 = (!tmp_1725_cast_fu_20382_p1.read().is_01() || !tmp_649_cast_reg_34985.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1725_cast_fu_20382_p1.read()) + sc_biguint<36>(tmp_649_cast_reg_34985.read()));
}

void ShuffleNetV2::thread_tmp_1409_fu_20391_p1() {
    tmp_1409_fu_20391_p1 = tmp_1408_fu_20386_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1410_fu_20395_p1() {
    tmp_1410_fu_20395_p1 = tmp_1408_fu_20386_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1411_fu_20443_p2() {
    tmp_1411_fu_20443_p2 = (!p_shl521_cast_fu_20436_p3.read().is_01() || !tmp_1409_reg_35028.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl521_cast_fu_20436_p3.read()) - sc_biguint<10>(tmp_1409_reg_35028.read()));
}

void ShuffleNetV2::thread_tmp_1412_fu_20448_p2() {
    tmp_1412_fu_20448_p2 = (!tmp_1411_fu_20443_p2.read().is_01() || !tmp_656_cast_reg_35003.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1411_fu_20443_p2.read()) + sc_biguint<10>(tmp_656_cast_reg_35003.read()));
}

void ShuffleNetV2::thread_tmp_1413_fu_20406_p3() {
    tmp_1413_fu_20406_p3 = esl_concat<8,2>(tmp_664_reg_35022.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1414_cast_fu_14426_p1() {
    tmp_1414_cast_fu_14426_p1 = esl_sext<36,35>(tmp_1156_fu_14420_p2.read());
}

void ShuffleNetV2::thread_tmp_1414_fu_20413_p1() {
    tmp_1414_fu_20413_p1 = esl_sext<11,10>(tmp_1413_fu_20406_p3.read());
}

void ShuffleNetV2::thread_tmp_1415_fu_20421_p2() {
    tmp_1415_fu_20421_p2 = (!p_shl520_cast_fu_20417_p1.read().is_01() || !tmp_666_cast_fu_20402_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl520_cast_fu_20417_p1.read()) - sc_biguint<12>(tmp_666_cast_fu_20402_p1.read()));
}

void ShuffleNetV2::thread_tmp_1416_fu_20431_p2() {
    tmp_1416_fu_20431_p2 = (!tmp_1732_cast_fu_20427_p1.read().is_01() || !tmp_649_cast1_reg_34980.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1732_cast_fu_20427_p1.read()) + sc_biguint<13>(tmp_649_cast1_reg_34980.read()));
}

void ShuffleNetV2::thread_tmp_1417_fu_20456_p3() {
    tmp_1417_fu_20456_p3 = esl_concat<13,2>(tmp_1416_reg_35038.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1418_cast_fu_14525_p1() {
    tmp_1418_cast_fu_14525_p1 = esl_zext<64,10>(tmp_1161_reg_33216.read());
}

void ShuffleNetV2::thread_tmp_1418_fu_20467_p2() {
    tmp_1418_fu_20467_p2 = (!p_shl249_fu_20463_p1.read().is_01() || !tmp_1733_cast_fu_20453_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl249_fu_20463_p1.read()) - sc_bigint<64>(tmp_1733_cast_fu_20453_p1.read()));
}

void ShuffleNetV2::thread_tmp_1419_fu_20473_p2() {
    tmp_1419_fu_20473_p2 = (!tmp_1418_fu_20467_p2.read().is_01() || !tmp_656_reg_34998.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1418_fu_20467_p2.read()) + sc_biguint<64>(tmp_656_reg_34998.read()));
}

void ShuffleNetV2::thread_tmp_1420_cast_fu_14463_p1() {
    tmp_1420_cast_fu_14463_p1 = esl_sext<13,12>(tmp_1163_fu_14457_p2.read());
}

void ShuffleNetV2::thread_tmp_1420_fu_21009_p3() {
    tmp_1420_fu_21009_p3 = esl_concat<6,3>(co122_reg_4782.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1421_cast_fu_14489_p1() {
    tmp_1421_cast_fu_14489_p1 = esl_sext<64,13>(tmp_1164_reg_33210.read());
}

void ShuffleNetV2::thread_tmp_1421_fu_21021_p3() {
    tmp_1421_fu_21021_p3 = esl_concat<6,1>(co122_reg_4782.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1422_fu_21033_p2() {
    tmp_1422_fu_21033_p2 = (!p_shl528_cast_fu_21029_p1.read().is_01() || !p_shl527_cast_fu_21017_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl528_cast_fu_21029_p1.read()) + sc_biguint<10>(p_shl527_cast_fu_21017_p1.read()));
}

void ShuffleNetV2::thread_tmp_1423_fu_20917_p1() {
    tmp_1423_fu_20917_p1 = k36_reg_4771.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1424_fu_20710_p1() {
    tmp_1424_fu_20710_p1 = i114_reg_4749.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1425_fu_20749_p3() {
    tmp_1425_fu_20749_p3 = esl_concat<7,6>(tmp_673_fu_20744_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1426_fu_20757_p3() {
    tmp_1426_fu_20757_p3 = esl_concat<7,4>(tmp_673_fu_20744_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1427_fu_20769_p2() {
    tmp_1427_fu_20769_p2 = (!tmp_1425_fu_20749_p3.read().is_01() || !p_shl526_cast_fu_20765_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1425_fu_20749_p3.read()) - sc_bigint<13>(p_shl526_cast_fu_20765_p1.read()));
}

void ShuffleNetV2::thread_tmp_1428_fu_20775_p2() {
    tmp_1428_fu_20775_p2 = (!tmp_658_cast_reg_35128.read().is_01() || !tmp_1427_fu_20769_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_658_cast_reg_35128.read()) + sc_biguint<13>(tmp_1427_fu_20769_p2.read()));
}

void ShuffleNetV2::thread_tmp_1429_fu_20825_p3() {
    tmp_1429_fu_20825_p3 = esl_concat<11,5>(tmp_675_reg_35151.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1430_fu_20836_p3() {
    tmp_1430_fu_20836_p3 = esl_concat<11,3>(tmp_675_reg_35151.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1431_fu_20847_p2() {
    tmp_1431_fu_20847_p2 = (!p_shl523_cast_fu_20832_p1.read().is_01() || !p_shl524_cast_fu_20843_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl523_cast_fu_20832_p1.read()) - sc_biguint<17>(p_shl524_cast_fu_20843_p1.read()));
}

void ShuffleNetV2::thread_tmp_1432_fu_20857_p2() {
    tmp_1432_fu_20857_p2 = (!tmp_659_cast_reg_35133.read().is_01() || !tmp_1754_cast_fu_20853_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_659_cast_reg_35133.read()) + sc_bigint<18>(tmp_1754_cast_fu_20853_p1.read()));
}

void ShuffleNetV2::thread_tmp_1433_fu_21132_p3() {
    tmp_1433_fu_21132_p3 = esl_concat<6,3>(co124_reg_4815.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1434_fu_21144_p3() {
    tmp_1434_fu_21144_p3 = esl_concat<6,1>(co124_reg_4815.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1435_fu_21156_p2() {
    tmp_1435_fu_21156_p2 = (!p_shl534_cast_fu_21152_p1.read().is_01() || !p_shl533_cast_fu_21140_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl534_cast_fu_21152_p1.read()) + sc_biguint<10>(p_shl533_cast_fu_21140_p1.read()));
}

void ShuffleNetV2::thread_tmp_1436_fu_21168_p3() {
    tmp_1436_fu_21168_p3 = esl_concat<7,3>(tmp_676_fu_21162_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1437_cast_fu_14921_p1() {
    tmp_1437_cast_fu_14921_p1 = esl_sext<64,13>(tmp_1176_reg_33318.read());
}

void ShuffleNetV2::thread_tmp_1437_fu_21180_p3() {
    tmp_1437_fu_21180_p3 = esl_concat<7,1>(tmp_676_fu_21162_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1438_fu_21192_p2() {
    tmp_1438_fu_21192_p2 = (!p_shl532_cast_fu_21188_p1.read().is_01() || !p_shl531_cast_fu_21176_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl532_cast_fu_21188_p1.read()) + sc_biguint<11>(p_shl531_cast_fu_21176_p1.read()));
}

void ShuffleNetV2::thread_tmp_1439_fu_21055_p2() {
    tmp_1439_fu_21055_p2 = (!tmp_677_cast1_fu_21051_p1.read().is_01() || !tmp_1422_reg_35213.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_677_cast1_fu_21051_p1.read()) + sc_biguint<10>(tmp_1422_reg_35213.read()));
}

void ShuffleNetV2::thread_tmp_1440_fu_21060_p3() {
    tmp_1440_fu_21060_p3 = esl_concat<10,3>(tmp_1439_fu_21055_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1441_fu_21072_p3() {
    tmp_1441_fu_21072_p3 = esl_concat<10,1>(tmp_1439_fu_21055_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1442_cast_fu_14893_p1() {
    tmp_1442_cast_fu_14893_p1 = esl_sext<17,16>(tmp_1179_fu_14887_p2.read());
}

void ShuffleNetV2::thread_tmp_1442_fu_21084_p2() {
    tmp_1442_fu_21084_p2 = (!p_shl529_cast_fu_21068_p1.read().is_01() || !p_shl530_cast_fu_21080_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl529_cast_fu_21068_p1.read()) + sc_biguint<15>(p_shl530_cast_fu_21080_p1.read()));
}

void ShuffleNetV2::thread_tmp_1443_cast_fu_14902_p1() {
    tmp_1443_cast_fu_14902_p1 = esl_sext<33,17>(tmp_1180_fu_14897_p2.read());
}

void ShuffleNetV2::thread_tmp_1443_fu_21343_p1() {
    tmp_1443_fu_21343_p1 = co126_reg_4848.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1444_fu_21218_p2() {
    tmp_1444_fu_21218_p2 = (!tmp_679_cast_fu_21214_p1.read().is_01() || !tmp_1435_reg_35257.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_679_cast_fu_21214_p1.read()) + sc_biguint<10>(tmp_1435_reg_35257.read()));
}

void ShuffleNetV2::thread_tmp_1445_fu_21223_p3() {
    tmp_1445_fu_21223_p3 = esl_concat<10,3>(tmp_1444_fu_21218_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1446_fu_21235_p3() {
    tmp_1446_fu_21235_p3 = esl_concat<10,1>(tmp_1444_fu_21218_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1447_fu_21247_p2() {
    tmp_1447_fu_21247_p2 = (!p_shl537_cast_fu_21231_p1.read().is_01() || !p_shl538_cast_fu_21243_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl537_cast_fu_21231_p1.read()) + sc_biguint<14>(p_shl538_cast_fu_21243_p1.read()));
}

void ShuffleNetV2::thread_tmp_1448_fu_21253_p2() {
    tmp_1448_fu_21253_p2 = (!tmp_679_cast1_fu_21210_p1.read().is_01() || !tmp_1438_reg_35262.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_679_cast1_fu_21210_p1.read()) + sc_biguint<11>(tmp_1438_reg_35262.read()));
}

void ShuffleNetV2::thread_tmp_1449_fu_21258_p3() {
    tmp_1449_fu_21258_p3 = esl_concat<11,3>(tmp_1448_fu_21253_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1450_fu_21270_p3() {
    tmp_1450_fu_21270_p3 = esl_concat<11,1>(tmp_1448_fu_21253_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1451_fu_21282_p2() {
    tmp_1451_fu_21282_p2 = (!p_shl535_cast_fu_21266_p1.read().is_01() || !p_shl536_cast_fu_21278_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl535_cast_fu_21266_p1.read()) + sc_biguint<15>(p_shl536_cast_fu_21278_p1.read()));
}

void ShuffleNetV2::thread_tmp_1452_fu_21106_p2() {
    tmp_1452_fu_21106_p2 = (!tmp_1442_reg_35226.read().is_01() || !tmp_680_cast1_fu_21102_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1442_reg_35226.read()) + sc_biguint<15>(tmp_680_cast1_fu_21102_p1.read()));
}

void ShuffleNetV2::thread_tmp_1453_fu_21308_p2() {
    tmp_1453_fu_21308_p2 = (!tmp_1447_reg_35275.read().is_01() || !tmp_685_cast_fu_21304_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1447_reg_35275.read()) + sc_biguint<14>(tmp_685_cast_fu_21304_p1.read()));
}

void ShuffleNetV2::thread_tmp_1454_fu_21313_p2() {
    tmp_1454_fu_21313_p2 = (!tmp_1451_reg_35280.read().is_01() || !tmp_685_cast1_fu_21300_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1451_reg_35280.read()) + sc_biguint<15>(tmp_685_cast1_fu_21300_p1.read()));
}

void ShuffleNetV2::thread_tmp_1455_fu_21647_p1() {
    tmp_1455_fu_21647_p1 = k38_reg_4892.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1456_fu_21432_p1() {
    tmp_1456_fu_21432_p1 = i118_reg_4870.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1457_fu_21471_p3() {
    tmp_1457_fu_21471_p3 = esl_concat<7,6>(tmp_695_fu_21466_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1458_fu_21479_p3() {
    tmp_1458_fu_21479_p3 = esl_concat<7,4>(tmp_695_fu_21466_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1459_fu_21491_p2() {
    tmp_1459_fu_21491_p2 = (!tmp_1457_fu_21471_p3.read().is_01() || !p_shl542_cast_fu_21487_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1457_fu_21471_p3.read()) - sc_bigint<13>(p_shl542_cast_fu_21487_p1.read()));
}

void ShuffleNetV2::thread_tmp_1460_fu_21497_p2() {
    tmp_1460_fu_21497_p2 = (!tmp_683_cast_reg_35334.read().is_01() || !tmp_1459_fu_21491_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_683_cast_reg_35334.read()) + sc_biguint<13>(tmp_1459_fu_21491_p2.read()));
}

void ShuffleNetV2::thread_tmp_1461_fu_21547_p3() {
    tmp_1461_fu_21547_p3 = esl_concat<10,5>(tmp_698_reg_35357.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1462_fu_21554_p1() {
    tmp_1462_fu_21554_p1 = esl_sext<16,15>(tmp_1461_fu_21547_p3.read());
}

void ShuffleNetV2::thread_tmp_1463_fu_21562_p3() {
    tmp_1463_fu_21562_p3 = esl_concat<10,3>(tmp_698_reg_35357.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1464_cast_fu_15155_p1() {
    tmp_1464_cast_fu_15155_p1 = esl_zext<64,15>(tmp_1200_fu_15150_p2.read());
}

void ShuffleNetV2::thread_tmp_1464_fu_21569_p1() {
    tmp_1464_fu_21569_p1 = esl_sext<14,13>(tmp_1463_fu_21562_p3.read());
}

void ShuffleNetV2::thread_tmp_1465_cast_fu_15367_p1() {
    tmp_1465_cast_fu_15367_p1 = esl_zext<64,14>(tmp_1201_reg_33465.read());
}

void ShuffleNetV2::thread_tmp_1465_fu_21577_p2() {
    tmp_1465_fu_21577_p2 = (!p_shl539_cast_fu_21558_p1.read().is_01() || !p_shl540_cast_fu_21573_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl539_cast_fu_21558_p1.read()) - sc_biguint<17>(p_shl540_cast_fu_21573_p1.read()));
}

void ShuffleNetV2::thread_tmp_1466_cast_fu_15362_p1() {
    tmp_1466_cast_fu_15362_p1 = esl_zext<64,15>(tmp_1202_fu_15357_p2.read());
}

void ShuffleNetV2::thread_tmp_1466_fu_21587_p2() {
    tmp_1466_fu_21587_p2 = (!tmp_684_cast_reg_35339.read().is_01() || !tmp_1795_cast_fu_21583_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_684_cast_reg_35339.read()) + sc_bigint<18>(tmp_1795_cast_fu_21583_p1.read()));
}

void ShuffleNetV2::thread_tmp_1467_fu_22112_p1() {
    tmp_1467_fu_22112_p1 = co130_reg_4969.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1468_fu_22016_p1() {
    tmp_1468_fu_22016_p1 = k40_reg_4958.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1469_fu_21799_p1() {
    tmp_1469_fu_21799_p1 = i124_reg_4936.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1470_fu_21860_p3() {
    tmp_1470_fu_21860_p3 = esl_concat<7,2>(tmp_711_reg_35473.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1471_fu_21867_p1() {
    tmp_1471_fu_21867_p1 = esl_sext<34,9>(tmp_1470_fu_21860_p3.read());
}

void ShuffleNetV2::thread_tmp_1472_fu_21875_p2() {
    tmp_1472_fu_21875_p2 = (!p_shl546_cast_fu_21871_p1.read().is_01() || !tmp_713_cast1_fu_21856_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl546_cast_fu_21871_p1.read()) - sc_biguint<35>(tmp_713_cast1_fu_21856_p1.read()));
}

void ShuffleNetV2::thread_tmp_1473_fu_21885_p2() {
    tmp_1473_fu_21885_p2 = (!tmp_1805_cast_fu_21881_p1.read().is_01() || !tmp_699_cast_reg_35442.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1805_cast_fu_21881_p1.read()) + sc_biguint<36>(tmp_699_cast_reg_35442.read()));
}

void ShuffleNetV2::thread_tmp_1474_fu_21890_p1() {
    tmp_1474_fu_21890_p1 = tmp_1473_fu_21885_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1475_fu_21894_p1() {
    tmp_1475_fu_21894_p1 = tmp_1473_fu_21885_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1476_cast_fu_15655_p1() {
    tmp_1476_cast_fu_15655_p1 = esl_sext<64,13>(tmp_1208_reg_33524.read());
}

void ShuffleNetV2::thread_tmp_1476_fu_21934_p2() {
    tmp_1476_fu_21934_p2 = (!p_shl545_cast_fu_21927_p3.read().is_01() || !tmp_1474_reg_35485.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl545_cast_fu_21927_p3.read()) - sc_biguint<10>(tmp_1474_reg_35485.read()));
}

void ShuffleNetV2::thread_tmp_1477_fu_21939_p2() {
    tmp_1477_fu_21939_p2 = (!tmp_1476_fu_21934_p2.read().is_01() || !tmp_706_cast_reg_35460.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1476_fu_21934_p2.read()) + sc_biguint<10>(tmp_706_cast_reg_35460.read()));
}

void ShuffleNetV2::thread_tmp_1478_fu_21901_p3() {
    tmp_1478_fu_21901_p3 = esl_concat<10,2>(tmp_714_reg_35479.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1479_fu_21912_p2() {
    tmp_1479_fu_21912_p2 = (!p_shl544_cast_fu_21908_p1.read().is_01() || !tmp_716_cast_fu_21898_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl544_cast_fu_21908_p1.read()) - sc_biguint<13>(tmp_716_cast_fu_21898_p1.read()));
}

void ShuffleNetV2::thread_tmp_1480_fu_21922_p2() {
    tmp_1480_fu_21922_p2 = (!tmp_1811_cast_fu_21918_p1.read().is_01() || !tmp_699_cast1_reg_35437.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_1811_cast_fu_21918_p1.read()) + sc_biguint<14>(tmp_699_cast1_reg_35437.read()));
}

void ShuffleNetV2::thread_tmp_1481_fu_21947_p3() {
    tmp_1481_fu_21947_p3 = esl_concat<14,2>(tmp_1480_reg_35495.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1482_fu_21958_p2() {
    tmp_1482_fu_21958_p2 = (!p_shl255_fu_21954_p1.read().is_01() || !tmp_1812_cast_fu_21944_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl255_fu_21954_p1.read()) - sc_bigint<64>(tmp_1812_cast_fu_21944_p1.read()));
}

void ShuffleNetV2::thread_tmp_1483_cast_fu_15627_p1() {
    tmp_1483_cast_fu_15627_p1 = esl_sext<17,16>(tmp_1213_fu_15621_p2.read());
}

void ShuffleNetV2::thread_tmp_1483_fu_21964_p2() {
    tmp_1483_fu_21964_p2 = (!tmp_1482_fu_21958_p2.read().is_01() || !tmp_706_reg_35455.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1482_fu_21958_p2.read()) + sc_biguint<64>(tmp_706_reg_35455.read()));
}

void ShuffleNetV2::thread_tmp_1484_cast_fu_15636_p1() {
    tmp_1484_cast_fu_15636_p1 = esl_sext<33,17>(tmp_1214_fu_15631_p2.read());
}

void ShuffleNetV2::thread_tmp_1484_fu_22512_p3() {
    tmp_1484_fu_22512_p3 = esl_concat<6,3>(co132_reg_5024.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1485_fu_22524_p3() {
    tmp_1485_fu_22524_p3 = esl_concat<6,1>(co132_reg_5024.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1486_fu_22536_p2() {
    tmp_1486_fu_22536_p2 = (!p_shl552_cast_fu_22532_p1.read().is_01() || !p_shl551_cast_fu_22520_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl552_cast_fu_22532_p1.read()) + sc_biguint<10>(p_shl551_cast_fu_22520_p1.read()));
}

void ShuffleNetV2::thread_tmp_1487_fu_22416_p1() {
    tmp_1487_fu_22416_p1 = k42_reg_5013.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1488_fu_22201_p1() {
    tmp_1488_fu_22201_p1 = i126_reg_4991.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1489_fu_22240_p3() {
    tmp_1489_fu_22240_p3 = esl_concat<7,6>(tmp_723_fu_22235_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1490_fu_22248_p3() {
    tmp_1490_fu_22248_p3 = esl_concat<7,4>(tmp_723_fu_22235_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1491_fu_22260_p2() {
    tmp_1491_fu_22260_p2 = (!tmp_1489_fu_22240_p3.read().is_01() || !p_shl550_cast_fu_22256_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1489_fu_22240_p3.read()) - sc_bigint<13>(p_shl550_cast_fu_22256_p1.read()));
}

void ShuffleNetV2::thread_tmp_1492_fu_22266_p2() {
    tmp_1492_fu_22266_p2 = (!tmp_708_cast_reg_35585.read().is_01() || !tmp_1491_fu_22260_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_708_cast_reg_35585.read()) + sc_biguint<13>(tmp_1491_fu_22260_p2.read()));
}

void ShuffleNetV2::thread_tmp_1493_cast_fu_15929_p1() {
    tmp_1493_cast_fu_15929_p1 = esl_sext<36,35>(tmp_1220_fu_15923_p2.read());
}

void ShuffleNetV2::thread_tmp_1493_fu_22316_p3() {
    tmp_1493_fu_22316_p3 = esl_concat<10,5>(tmp_725_reg_35608.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1494_fu_22323_p1() {
    tmp_1494_fu_22323_p1 = esl_sext<16,15>(tmp_1493_fu_22316_p3.read());
}

void ShuffleNetV2::thread_tmp_1495_fu_22331_p3() {
    tmp_1495_fu_22331_p3 = esl_concat<10,3>(tmp_725_reg_35608.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1496_fu_22338_p1() {
    tmp_1496_fu_22338_p1 = esl_sext<14,13>(tmp_1495_fu_22331_p3.read());
}

void ShuffleNetV2::thread_tmp_1497_cast_fu_16024_p1() {
    tmp_1497_cast_fu_16024_p1 = esl_zext<64,10>(tmp_1225_reg_33673.read());
}

void ShuffleNetV2::thread_tmp_1497_fu_22346_p2() {
    tmp_1497_fu_22346_p2 = (!p_shl547_cast_fu_22327_p1.read().is_01() || !p_shl548_cast_fu_22342_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl547_cast_fu_22327_p1.read()) - sc_biguint<17>(p_shl548_cast_fu_22342_p1.read()));
}

void ShuffleNetV2::thread_tmp_1498_fu_22356_p2() {
    tmp_1498_fu_22356_p2 = (!tmp_709_cast_reg_35590.read().is_01() || !tmp_1835_cast_fu_22352_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_709_cast_reg_35590.read()) + sc_bigint<18>(tmp_1835_cast_fu_22352_p1.read()));
}

void ShuffleNetV2::thread_tmp_1499_fu_22635_p3() {
    tmp_1499_fu_22635_p3 = esl_concat<6,3>(co134_reg_5057.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1500_cast_fu_15988_p1() {
    tmp_1500_cast_fu_15988_p1 = esl_sext<64,12>(tmp_1228_reg_33667.read());
}

void ShuffleNetV2::thread_tmp_1500_fu_22647_p3() {
    tmp_1500_fu_22647_p3 = esl_concat<6,1>(co134_reg_5057.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1501_fu_22659_p2() {
    tmp_1501_fu_22659_p2 = (!p_shl558_cast_fu_22655_p1.read().is_01() || !p_shl557_cast_fu_22643_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl558_cast_fu_22655_p1.read()) + sc_biguint<10>(p_shl557_cast_fu_22643_p1.read()));
}

void ShuffleNetV2::thread_tmp_1502_fu_22671_p3() {
    tmp_1502_fu_22671_p3 = esl_concat<7,3>(tmp_726_fu_22665_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1503_fu_22683_p3() {
    tmp_1503_fu_22683_p3 = esl_concat<7,1>(tmp_726_fu_22665_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1504_fu_22695_p2() {
    tmp_1504_fu_22695_p2 = (!p_shl556_cast_fu_22691_p1.read().is_01() || !p_shl555_cast_fu_22679_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl556_cast_fu_22691_p1.read()) + sc_biguint<11>(p_shl555_cast_fu_22679_p1.read()));
}

void ShuffleNetV2::thread_tmp_1505_fu_22558_p2() {
    tmp_1505_fu_22558_p2 = (!tmp_727_cast_fu_22554_p1.read().is_01() || !tmp_1486_reg_35670.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_727_cast_fu_22554_p1.read()) + sc_biguint<10>(tmp_1486_reg_35670.read()));
}

void ShuffleNetV2::thread_tmp_1506_fu_22563_p3() {
    tmp_1506_fu_22563_p3 = esl_concat<10,3>(tmp_1505_fu_22558_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1507_fu_22575_p3() {
    tmp_1507_fu_22575_p3 = esl_concat<10,1>(tmp_1505_fu_22558_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1508_fu_22587_p2() {
    tmp_1508_fu_22587_p2 = (!p_shl553_cast_fu_22571_p1.read().is_01() || !p_shl554_cast_fu_22583_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl553_cast_fu_22571_p1.read()) + sc_biguint<15>(p_shl554_cast_fu_22583_p1.read()));
}

void ShuffleNetV2::thread_tmp_1509_fu_22846_p1() {
    tmp_1509_fu_22846_p1 = co136_reg_5090.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1510_fu_22721_p2() {
    tmp_1510_fu_22721_p2 = (!tmp_729_cast_fu_22717_p1.read().is_01() || !tmp_1501_reg_35714.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_729_cast_fu_22717_p1.read()) + sc_biguint<10>(tmp_1501_reg_35714.read()));
}

void ShuffleNetV2::thread_tmp_1511_fu_22726_p3() {
    tmp_1511_fu_22726_p3 = esl_concat<10,3>(tmp_1510_fu_22721_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1512_fu_22738_p3() {
    tmp_1512_fu_22738_p3 = esl_concat<10,1>(tmp_1510_fu_22721_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1513_fu_22750_p2() {
    tmp_1513_fu_22750_p2 = (!p_shl561_cast_fu_22734_p1.read().is_01() || !p_shl562_cast_fu_22746_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl561_cast_fu_22734_p1.read()) + sc_biguint<14>(p_shl562_cast_fu_22746_p1.read()));
}

void ShuffleNetV2::thread_tmp_1514_fu_22756_p2() {
    tmp_1514_fu_22756_p2 = (!tmp_729_cast1_fu_22713_p1.read().is_01() || !tmp_1504_reg_35719.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_729_cast1_fu_22713_p1.read()) + sc_biguint<11>(tmp_1504_reg_35719.read()));
}

void ShuffleNetV2::thread_tmp_1515_fu_22761_p3() {
    tmp_1515_fu_22761_p3 = esl_concat<11,3>(tmp_1514_fu_22756_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1516_cast_fu_16420_p1() {
    tmp_1516_cast_fu_16420_p1 = esl_sext<64,13>(tmp_1240_reg_33775.read());
}

void ShuffleNetV2::thread_tmp_1516_fu_22773_p3() {
    tmp_1516_fu_22773_p3 = esl_concat<11,1>(tmp_1514_fu_22756_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1517_fu_22785_p2() {
    tmp_1517_fu_22785_p2 = (!p_shl559_cast_fu_22769_p1.read().is_01() || !p_shl560_cast_fu_22781_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl559_cast_fu_22769_p1.read()) + sc_biguint<15>(p_shl560_cast_fu_22781_p1.read()));
}

void ShuffleNetV2::thread_tmp_1518_fu_22609_p2() {
    tmp_1518_fu_22609_p2 = (!tmp_1508_reg_35683.read().is_01() || !tmp_730_cast_fu_22605_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1508_reg_35683.read()) + sc_biguint<15>(tmp_730_cast_fu_22605_p1.read()));
}

void ShuffleNetV2::thread_tmp_1519_fu_22811_p2() {
    tmp_1519_fu_22811_p2 = (!tmp_1513_reg_35732.read().is_01() || !tmp_735_cast_fu_22807_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1513_reg_35732.read()) + sc_biguint<14>(tmp_735_cast_fu_22807_p1.read()));
}

void ShuffleNetV2::thread_tmp_1520_fu_22816_p2() {
    tmp_1520_fu_22816_p2 = (!tmp_1517_reg_35737.read().is_01() || !tmp_735_cast1_fu_22803_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1517_reg_35737.read()) + sc_biguint<15>(tmp_735_cast1_fu_22803_p1.read()));
}

void ShuffleNetV2::thread_tmp_1521_cast_fu_16392_p1() {
    tmp_1521_cast_fu_16392_p1 = esl_sext<18,17>(tmp_1243_fu_16386_p2.read());
}

void ShuffleNetV2::thread_tmp_1521_fu_23150_p1() {
    tmp_1521_fu_23150_p1 = k44_reg_5134.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1522_cast_fu_16401_p1() {
    tmp_1522_cast_fu_16401_p1 = esl_sext<33,18>(tmp_1244_fu_16396_p2.read());
}

void ShuffleNetV2::thread_tmp_1522_fu_22935_p1() {
    tmp_1522_fu_22935_p1 = i130_reg_5112.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1523_fu_22974_p3() {
    tmp_1523_fu_22974_p3 = esl_concat<7,6>(tmp_745_fu_22969_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1524_fu_22982_p3() {
    tmp_1524_fu_22982_p3 = esl_concat<7,4>(tmp_745_fu_22969_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1525_fu_22994_p2() {
    tmp_1525_fu_22994_p2 = (!tmp_1523_fu_22974_p3.read().is_01() || !p_shl566_cast_fu_22990_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1523_fu_22974_p3.read()) - sc_bigint<13>(p_shl566_cast_fu_22990_p1.read()));
}

void ShuffleNetV2::thread_tmp_1526_fu_23000_p2() {
    tmp_1526_fu_23000_p2 = (!tmp_733_cast1_reg_35791.read().is_01() || !tmp_1525_fu_22994_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_733_cast1_reg_35791.read()) + sc_biguint<13>(tmp_1525_fu_22994_p2.read()));
}

void ShuffleNetV2::thread_tmp_1527_fu_23050_p3() {
    tmp_1527_fu_23050_p3 = esl_concat<9,5>(tmp_748_reg_35814.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1528_fu_23057_p1() {
    tmp_1528_fu_23057_p1 = esl_sext<16,14>(tmp_1527_fu_23050_p3.read());
}

void ShuffleNetV2::thread_tmp_1529_fu_23065_p3() {
    tmp_1529_fu_23065_p3 = esl_concat<9,3>(tmp_748_reg_35814.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1530_fu_23072_p1() {
    tmp_1530_fu_23072_p1 = esl_sext<14,12>(tmp_1529_fu_23065_p3.read());
}

void ShuffleNetV2::thread_tmp_1531_fu_23080_p2() {
    tmp_1531_fu_23080_p2 = (!p_shl563_cast_fu_23061_p1.read().is_01() || !p_shl564_cast_fu_23076_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl563_cast_fu_23061_p1.read()) - sc_biguint<17>(p_shl564_cast_fu_23076_p1.read()));
}

void ShuffleNetV2::thread_tmp_1532_fu_23090_p2() {
    tmp_1532_fu_23090_p2 = (!tmp_734_cast_reg_35796.read().is_01() || !tmp_1876_cast_fu_23086_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_734_cast_reg_35796.read()) + sc_bigint<18>(tmp_1876_cast_fu_23086_p1.read()));
}

void ShuffleNetV2::thread_tmp_1533_fu_23619_p1() {
    tmp_1533_fu_23619_p1 = co140_reg_5211.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1534_fu_23519_p1() {
    tmp_1534_fu_23519_p1 = k46_reg_5200.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1535_fu_23306_p1() {
    tmp_1535_fu_23306_p1 = i136_reg_5178.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1536_fu_23367_p3() {
    tmp_1536_fu_23367_p3 = esl_concat<7,2>(tmp_761_reg_35930.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1537_fu_23374_p1() {
    tmp_1537_fu_23374_p1 = esl_sext<34,9>(tmp_1536_fu_23367_p3.read());
}

void ShuffleNetV2::thread_tmp_1538_fu_23382_p2() {
    tmp_1538_fu_23382_p2 = (!p_shl570_cast_fu_23378_p1.read().is_01() || !tmp_763_cast_fu_23363_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl570_cast_fu_23378_p1.read()) - sc_biguint<35>(tmp_763_cast_fu_23363_p1.read()));
}

void ShuffleNetV2::thread_tmp_1539_fu_23392_p2() {
    tmp_1539_fu_23392_p2 = (!tmp_1886_cast_fu_23388_p1.read().is_01() || !tmp_749_cast_reg_35899.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1886_cast_fu_23388_p1.read()) + sc_biguint<36>(tmp_749_cast_reg_35899.read()));
}

void ShuffleNetV2::thread_tmp_1540_fu_23397_p1() {
    tmp_1540_fu_23397_p1 = tmp_1539_fu_23392_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1541_fu_23401_p1() {
    tmp_1541_fu_23401_p1 = tmp_1539_fu_23392_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1542_fu_23437_p2() {
    tmp_1542_fu_23437_p2 = (!p_shl569_cast_fu_23430_p3.read().is_01() || !tmp_1540_reg_35942.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl569_cast_fu_23430_p3.read()) - sc_biguint<10>(tmp_1540_reg_35942.read()));
}

void ShuffleNetV2::thread_tmp_1543_cast_fu_16654_p1() {
    tmp_1543_cast_fu_16654_p1 = esl_zext<64,15>(tmp_1264_fu_16649_p2.read());
}

void ShuffleNetV2::thread_tmp_1543_fu_23442_p2() {
    tmp_1543_fu_23442_p2 = (!tmp_1542_fu_23437_p2.read().is_01() || !tmp_756_cast_reg_35917.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1542_fu_23437_p2.read()) + sc_biguint<10>(tmp_756_cast_reg_35917.read()));
}

void ShuffleNetV2::thread_tmp_1544_cast_fu_16856_p1() {
    tmp_1544_cast_fu_16856_p1 = esl_zext<64,15>(tmp_1265_fu_16851_p2.read());
}

void ShuffleNetV2::thread_tmp_1544_fu_23408_p3() {
    tmp_1544_fu_23408_p3 = esl_concat<10,2>(tmp_764_reg_35936.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1545_cast_fu_16866_p1() {
    tmp_1545_cast_fu_16866_p1 = esl_zext<64,14>(tmp_1266_reg_33927.read());
}

void ShuffleNetV2::thread_tmp_1545_fu_23419_p2() {
    tmp_1545_fu_23419_p2 = (!p_shl568_cast_fu_23415_p1.read().is_01() || !tmp_766_cast_fu_23405_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl568_cast_fu_23415_p1.read()) - sc_biguint<13>(tmp_766_cast_fu_23405_p1.read()));
}

void ShuffleNetV2::thread_tmp_1546_fu_23425_p2() {
    tmp_1546_fu_23425_p2 = (!tmp_1545_fu_23419_p2.read().is_01() || !tmp_749_cast1_reg_35894.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1545_fu_23419_p2.read()) + sc_biguint<13>(tmp_749_cast1_reg_35894.read()));
}

void ShuffleNetV2::thread_tmp_1547_fu_23450_p3() {
    tmp_1547_fu_23450_p3 = esl_concat<13,2>(tmp_1546_reg_35952.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1548_fu_23461_p2() {
    tmp_1548_fu_23461_p2 = (!p_shl258_fu_23457_p1.read().is_01() || !tmp_1893_cast_fu_23447_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl258_fu_23457_p1.read()) - sc_bigint<64>(tmp_1893_cast_fu_23447_p1.read()));
}

void ShuffleNetV2::thread_tmp_1549_fu_23467_p2() {
    tmp_1549_fu_23467_p2 = (!tmp_1548_fu_23461_p2.read().is_01() || !tmp_756_reg_35912.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1548_fu_23461_p2.read()) + sc_biguint<64>(tmp_756_reg_35912.read()));
}

void ShuffleNetV2::thread_tmp_1550_fu_24019_p3() {
    tmp_1550_fu_24019_p3 = esl_concat<6,3>(co142_reg_5266.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1551_fu_24031_p3() {
    tmp_1551_fu_24031_p3 = esl_concat<6,1>(co142_reg_5266.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1552_fu_24043_p2() {
    tmp_1552_fu_24043_p2 = (!p_shl576_cast_fu_24039_p1.read().is_01() || !p_shl575_cast_fu_24027_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl576_cast_fu_24039_p1.read()) + sc_biguint<10>(p_shl575_cast_fu_24027_p1.read()));
}

void ShuffleNetV2::thread_tmp_1553_fu_23923_p1() {
    tmp_1553_fu_23923_p1 = k48_reg_5255.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1554_fu_23708_p1() {
    tmp_1554_fu_23708_p1 = i138_reg_5233.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1555_cast_fu_17146_p1() {
    tmp_1555_cast_fu_17146_p1 = esl_sext<64,13>(tmp_1272_reg_33981.read());
}

void ShuffleNetV2::thread_tmp_1555_fu_23747_p3() {
    tmp_1555_fu_23747_p3 = esl_concat<7,6>(tmp_773_fu_23742_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1556_fu_23755_p3() {
    tmp_1556_fu_23755_p3 = esl_concat<7,4>(tmp_773_fu_23742_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1557_fu_23767_p2() {
    tmp_1557_fu_23767_p2 = (!tmp_1555_fu_23747_p3.read().is_01() || !p_shl574_cast_fu_23763_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1555_fu_23747_p3.read()) - sc_bigint<13>(p_shl574_cast_fu_23763_p1.read()));
}

void ShuffleNetV2::thread_tmp_1558_fu_23773_p2() {
    tmp_1558_fu_23773_p2 = (!tmp_758_cast_reg_36042.read().is_01() || !tmp_1557_fu_23767_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_758_cast_reg_36042.read()) + sc_biguint<13>(tmp_1557_fu_23767_p2.read()));
}

void ShuffleNetV2::thread_tmp_1559_fu_23831_p3() {
    tmp_1559_fu_23831_p3 = esl_concat<12,5>(tmp_775_reg_36065.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1560_cast_fu_17118_p1() {
    tmp_1560_cast_fu_17118_p1 = esl_sext<18,17>(tmp_1275_fu_17112_p2.read());
}

void ShuffleNetV2::thread_tmp_1560_fu_23842_p3() {
    tmp_1560_fu_23842_p3 = esl_concat<12,3>(tmp_775_reg_36065.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1561_cast_fu_17127_p1() {
    tmp_1561_cast_fu_17127_p1 = esl_sext<33,18>(tmp_1276_fu_17122_p2.read());
}

void ShuffleNetV2::thread_tmp_1561_fu_23853_p2() {
    tmp_1561_fu_23853_p2 = (!p_shl571_cast_fu_23838_p1.read().is_01() || !p_shl572_cast_fu_23849_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl571_cast_fu_23838_p1.read()) - sc_biguint<18>(p_shl572_cast_fu_23849_p1.read()));
}

void ShuffleNetV2::thread_tmp_1562_fu_23863_p2() {
    tmp_1562_fu_23863_p2 = (!tmp_759_cast_reg_36047.read().is_01() || !tmp_1914_cast_fu_23859_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_759_cast_reg_36047.read()) + sc_bigint<19>(tmp_1914_cast_fu_23859_p1.read()));
}

void ShuffleNetV2::thread_tmp_1563_fu_24142_p1() {
    tmp_1563_fu_24142_p1 = co144_reg_5299.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1564_fu_24158_p2() {
    tmp_1564_fu_24158_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co144_reg_5299.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1565_fu_24065_p2() {
    tmp_1565_fu_24065_p2 = (!tmp_777_cast_fu_24061_p1.read().is_01() || !tmp_1552_reg_36127.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_777_cast_fu_24061_p1.read()) + sc_biguint<10>(tmp_1552_reg_36127.read()));
}

void ShuffleNetV2::thread_tmp_1566_fu_24070_p3() {
    tmp_1566_fu_24070_p3 = esl_concat<10,3>(tmp_1565_fu_24065_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1567_fu_24082_p3() {
    tmp_1567_fu_24082_p3 = esl_concat<10,1>(tmp_1565_fu_24065_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1568_fu_24094_p2() {
    tmp_1568_fu_24094_p2 = (!p_shl577_cast_fu_24078_p1.read().is_01() || !p_shl578_cast_fu_24090_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl577_cast_fu_24078_p1.read()) + sc_biguint<15>(p_shl578_cast_fu_24090_p1.read()));
}

void ShuffleNetV2::thread_tmp_1569_fu_24116_p2() {
    tmp_1569_fu_24116_p2 = (!tmp_1568_reg_36140.read().is_01() || !tmp_781_cast_fu_24112_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1568_reg_36140.read()) + sc_biguint<15>(tmp_781_cast_fu_24112_p1.read()));
}

void ShuffleNetV2::thread_tmp_1570_cast_fu_17416_p1() {
    tmp_1570_cast_fu_17416_p1 = esl_sext<36,35>(tmp_1282_fu_17410_p2.read());
}

void ShuffleNetV2::thread_tmp_1570_fu_24426_p1() {
    tmp_1570_fu_24426_p1 = k50_reg_5343.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1571_fu_24229_p1() {
    tmp_1571_fu_24229_p1 = i142_reg_5321.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1572_fu_24249_p2() {
    tmp_1572_fu_24249_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i142_reg_5321.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1573_fu_24270_p3() {
    tmp_1573_fu_24270_p3 = esl_concat<8,7>(tmp_789_fu_24265_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1574_cast_fu_17511_p1() {
    tmp_1574_cast_fu_17511_p1 = esl_zext<64,10>(tmp_1287_reg_34130.read());
}

void ShuffleNetV2::thread_tmp_1574_fu_24278_p3() {
    tmp_1574_fu_24278_p3 = esl_concat<8,5>(tmp_789_fu_24265_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1575_fu_24290_p2() {
    tmp_1575_fu_24290_p2 = (!tmp_1573_fu_24270_p3.read().is_01() || !p_shl582_cast_fu_24286_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1573_fu_24270_p3.read()) - sc_bigint<15>(p_shl582_cast_fu_24286_p1.read()));
}

void ShuffleNetV2::thread_tmp_1576_fu_24296_p2() {
    tmp_1576_fu_24296_p2 = (!tmp_779_cast_reg_36194.read().is_01() || !tmp_1575_fu_24290_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_779_cast_reg_36194.read()) + sc_biguint<15>(tmp_1575_fu_24290_p2.read()));
}

void ShuffleNetV2::thread_tmp_1577_cast_fu_17475_p1() {
    tmp_1577_cast_fu_17475_p1 = esl_sext<64,12>(tmp_1290_reg_34124.read());
}

void ShuffleNetV2::thread_tmp_1577_fu_24334_p3() {
    tmp_1577_fu_24334_p3 = esl_concat<12,5>(tmp_792_reg_36217.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1578_fu_24345_p3() {
    tmp_1578_fu_24345_p3 = esl_concat<12,3>(tmp_792_reg_36217.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1579_fu_24356_p2() {
    tmp_1579_fu_24356_p2 = (!p_shl579_cast_fu_24341_p1.read().is_01() || !p_shl580_cast_fu_24352_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl579_cast_fu_24341_p1.read()) - sc_biguint<18>(p_shl580_cast_fu_24352_p1.read()));
}

void ShuffleNetV2::thread_tmp_1580_fu_24366_p2() {
    tmp_1580_fu_24366_p2 = (!tmp_780_cast_reg_36199.read().is_01() || !tmp_1936_cast_fu_24362_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_780_cast_reg_36199.read()) + sc_bigint<19>(tmp_1936_cast_fu_24362_p1.read()));
}

void ShuffleNetV2::thread_tmp_1581_fu_24895_p1() {
    tmp_1581_fu_24895_p1 = co148_reg_5420.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1582_fu_24911_p2() {
    tmp_1582_fu_24911_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co148_reg_5420.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1583_fu_24795_p1() {
    tmp_1583_fu_24795_p1 = k52_reg_5409.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1584_fu_24582_p1() {
    tmp_1584_fu_24582_p1 = i148_reg_5387.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1585_fu_24643_p3() {
    tmp_1585_fu_24643_p3 = esl_concat<8,2>(tmp_808_reg_36333.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1586_fu_24650_p1() {
    tmp_1586_fu_24650_p1 = esl_sext<34,10>(tmp_1585_fu_24643_p3.read());
}

void ShuffleNetV2::thread_tmp_1587_fu_24658_p2() {
    tmp_1587_fu_24658_p2 = (!p_shl586_cast_fu_24654_p1.read().is_01() || !tmp_809_cast_fu_24639_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl586_cast_fu_24654_p1.read()) - sc_biguint<35>(tmp_809_cast_fu_24639_p1.read()));
}

void ShuffleNetV2::thread_tmp_1588_fu_24668_p2() {
    tmp_1588_fu_24668_p2 = (!tmp_1946_cast_fu_24664_p1.read().is_01() || !tmp_795_cast_reg_36302.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1946_cast_fu_24664_p1.read()) + sc_biguint<36>(tmp_795_cast_reg_36302.read()));
}

void ShuffleNetV2::thread_tmp_1589_fu_24673_p1() {
    tmp_1589_fu_24673_p1 = tmp_1588_fu_24668_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1590_fu_24677_p1() {
    tmp_1590_fu_24677_p1 = tmp_1588_fu_24668_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1591_fu_24713_p2() {
    tmp_1591_fu_24713_p2 = (!p_shl585_cast_fu_24706_p3.read().is_01() || !tmp_1589_reg_36345.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl585_cast_fu_24706_p3.read()) - sc_biguint<11>(tmp_1589_reg_36345.read()));
}

void ShuffleNetV2::thread_tmp_1592_fu_24718_p2() {
    tmp_1592_fu_24718_p2 = (!tmp_1591_fu_24713_p2.read().is_01() || !tmp_803_cast_reg_36320.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1591_fu_24713_p2.read()) + sc_biguint<11>(tmp_803_cast_reg_36320.read()));
}

void ShuffleNetV2::thread_tmp_1593_cast_fu_17903_p1() {
    tmp_1593_cast_fu_17903_p1 = esl_sext<64,13>(tmp_1302_reg_34232.read());
}

void ShuffleNetV2::thread_tmp_1593_fu_24684_p3() {
    tmp_1593_fu_24684_p3 = esl_concat<10,2>(tmp_810_reg_36339.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1594_fu_24695_p2() {
    tmp_1594_fu_24695_p2 = (!p_shl584_cast_fu_24691_p1.read().is_01() || !tmp_811_cast_fu_24681_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl584_cast_fu_24691_p1.read()) - sc_biguint<13>(tmp_811_cast_fu_24681_p1.read()));
}

void ShuffleNetV2::thread_tmp_1595_fu_24701_p2() {
    tmp_1595_fu_24701_p2 = (!tmp_1594_fu_24695_p2.read().is_01() || !tmp_795_cast1_reg_36297.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1594_fu_24695_p2.read()) + sc_biguint<13>(tmp_795_cast1_reg_36297.read()));
}

void ShuffleNetV2::thread_tmp_1596_fu_24726_p3() {
    tmp_1596_fu_24726_p3 = esl_concat<13,2>(tmp_1595_reg_36355.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1597_fu_24737_p2() {
    tmp_1597_fu_24737_p2 = (!p_shl262_fu_24733_p1.read().is_01() || !tmp_1953_cast_fu_24723_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl262_fu_24733_p1.read()) - sc_bigint<64>(tmp_1953_cast_fu_24723_p1.read()));
}

void ShuffleNetV2::thread_tmp_1598_cast_fu_17875_p1() {
    tmp_1598_cast_fu_17875_p1 = esl_sext<18,17>(tmp_1305_fu_17869_p2.read());
}

void ShuffleNetV2::thread_tmp_1598_fu_24743_p2() {
    tmp_1598_fu_24743_p2 = (!tmp_1597_fu_24737_p2.read().is_01() || !tmp_803_reg_36315.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1597_fu_24737_p2.read()) + sc_biguint<64>(tmp_803_reg_36315.read()));
}

void ShuffleNetV2::thread_tmp_1599_cast_fu_17884_p1() {
    tmp_1599_cast_fu_17884_p1 = esl_sext<33,18>(tmp_1306_fu_17879_p2.read());
}

void ShuffleNetV2::thread_tmp_1599_fu_25179_p1() {
    tmp_1599_fu_25179_p1 = k54_reg_5464.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1600_fu_24982_p1() {
    tmp_1600_fu_24982_p1 = i150_reg_5442.read().range(4-1, 0);
}

}

