#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_ci64_cast_fu_31544_p1() {
    ci64_cast_fu_31544_p1 = esl_zext<7,5>(ci64_reg_11611.read());
}

void ShuffleNetV2::thread_ci66_cast1_cast_fu_32113_p1() {
    ci66_cast1_cast_fu_32113_p1 = esl_zext<19,5>(ci66_reg_11699.read());
}

void ShuffleNetV2::thread_ci66_cast_fu_32109_p1() {
    ci66_cast_fu_32109_p1 = esl_zext<8,5>(ci66_reg_11699.read());
}

void ShuffleNetV2::thread_ci68_cast1_cast_fu_32870_p1() {
    ci68_cast1_cast_fu_32870_p1 = esl_zext<19,5>(ci68_reg_11820.read());
}

void ShuffleNetV2::thread_ci68_cast_fu_32866_p1() {
    ci68_cast_fu_32866_p1 = esl_zext<8,5>(ci68_reg_11820.read());
}

void ShuffleNetV2::thread_ci70_cast1_cast_fu_33627_p1() {
    ci70_cast1_cast_fu_33627_p1 = esl_zext<19,5>(ci70_reg_11941.read());
}

void ShuffleNetV2::thread_ci70_cast_fu_33623_p1() {
    ci70_cast_fu_33623_p1 = esl_zext<8,5>(ci70_reg_11941.read());
}

void ShuffleNetV2::thread_ci72_cast1_cast_fu_34250_p1() {
    ci72_cast1_cast_fu_34250_p1 = esl_zext<19,5>(ci72_reg_12029.read());
}

void ShuffleNetV2::thread_ci72_cast_fu_34246_p1() {
    ci72_cast_fu_34246_p1 = esl_zext<8,5>(ci72_reg_12029.read());
}

void ShuffleNetV2::thread_ci74_cast1_cast_fu_34999_p1() {
    ci74_cast1_cast_fu_34999_p1 = esl_zext<19,5>(ci74_reg_12150.read());
}

void ShuffleNetV2::thread_ci74_cast_fu_34995_p1() {
    ci74_cast_fu_34995_p1 = esl_zext<8,5>(ci74_reg_12150.read());
}

void ShuffleNetV2::thread_ci76_cast1_cast_fu_35753_p1() {
    ci76_cast1_cast_fu_35753_p1 = esl_zext<20,5>(ci76_reg_12271.read());
}

void ShuffleNetV2::thread_ci76_cast_fu_35749_p1() {
    ci76_cast_fu_35749_p1 = esl_zext<8,5>(ci76_reg_12271.read());
}

void ShuffleNetV2::thread_ci78_cast1_cast_fu_36514_p1() {
    ci78_cast1_cast_fu_36514_p1 = esl_zext<20,5>(ci78_reg_12392.read());
}

void ShuffleNetV2::thread_ci78_cast_fu_36510_p1() {
    ci78_cast_fu_36510_p1 = esl_zext<8,5>(ci78_reg_12392.read());
}

void ShuffleNetV2::thread_ci80_cast1_cast_fu_37260_p1() {
    ci80_cast1_cast_fu_37260_p1 = esl_zext<20,5>(ci80_reg_12513.read());
}

void ShuffleNetV2::thread_ci80_cast_fu_37256_p1() {
    ci80_cast_fu_37256_p1 = esl_zext<8,5>(ci80_reg_12513.read());
}

void ShuffleNetV2::thread_ci82_cast1_cast_fu_38013_p1() {
    ci82_cast1_cast_fu_38013_p1 = esl_zext<20,5>(ci82_reg_12634.read());
}

void ShuffleNetV2::thread_ci82_cast_fu_38009_p1() {
    ci82_cast_fu_38009_p1 = esl_zext<8,5>(ci82_reg_12634.read());
}

void ShuffleNetV2::thread_ci_11_fu_14366_p2() {
    ci_11_fu_14366_p2 = (!ci_reg_8698.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(ci_reg_8698.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_ci_12_fu_14576_p2() {
    ci_12_fu_14576_p2 = (!ci3_reg_8743.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci3_reg_8743.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_13_fu_14851_p2() {
    ci_13_fu_14851_p2 = (!ci10_reg_8821.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci10_reg_8821.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_15_fu_15195_p2() {
    ci_15_fu_15195_p2 = (!ci14_reg_8899.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci14_reg_8899.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_17_fu_15532_p2() {
    ci_17_fu_15532_p2 = (!ci16_reg_8966.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci16_reg_8966.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_19_fu_15855_p2() {
    ci_19_fu_15855_p2 = (!ci18_reg_9044.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci18_reg_9044.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_21_fu_16338_p2() {
    ci_21_fu_16338_p2 = (!ci20_reg_9144.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci20_reg_9144.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_23_fu_16670_p2() {
    ci_23_fu_16670_p2 = (!ci22_reg_9222.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci22_reg_9222.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_25_fu_17115_p2() {
    ci_25_fu_17115_p2 = (!ci24_reg_9322.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci24_reg_9322.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_27_fu_17484_p2() {
    ci_27_fu_17484_p2 = (!ci26_reg_9400.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci26_reg_9400.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_29_fu_17703_p2() {
    ci_29_fu_17703_p2 = (!ci28_reg_9466.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci28_reg_9466.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_31_fu_18484_p2() {
    ci_31_fu_18484_p2 = (!ci30_reg_9587.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci30_reg_9587.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_33_fu_19261_p2() {
    ci_33_fu_19261_p2 = (!ci32_reg_9708.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci32_reg_9708.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_35_fu_19912_p2() {
    ci_35_fu_19912_p2 = (!ci34_reg_9796.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci34_reg_9796.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_37_fu_20693_p2() {
    ci_37_fu_20693_p2 = (!ci36_reg_9917.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci36_reg_9917.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_39_fu_21459_p2() {
    ci_39_fu_21459_p2 = (!ci38_reg_10038.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci38_reg_10038.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_41_fu_22240_p2() {
    ci_41_fu_22240_p2 = (!ci40_reg_10159.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci40_reg_10159.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_43_fu_23010_p2() {
    ci_43_fu_23010_p2 = (!ci42_reg_10280.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci42_reg_10280.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_45_fu_23799_p2() {
    ci_45_fu_23799_p2 = (!ci44_reg_10401.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci44_reg_10401.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_47_fu_24569_p2() {
    ci_47_fu_24569_p2 = (!ci46_reg_10522.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci46_reg_10522.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_49_fu_25342_p2() {
    ci_49_fu_25342_p2 = (!ci48_reg_10643.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci48_reg_10643.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_51_fu_26108_p2() {
    ci_51_fu_26108_p2 = (!ci50_reg_10764.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci50_reg_10764.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_53_fu_26889_p2() {
    ci_53_fu_26889_p2 = (!ci52_reg_10885.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci52_reg_10885.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_55_fu_27655_p2() {
    ci_55_fu_27655_p2 = (!ci54_reg_11006.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci54_reg_11006.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_57_fu_28440_p2() {
    ci_57_fu_28440_p2 = (!ci56_reg_11127.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci56_reg_11127.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_59_fu_29206_p2() {
    ci_59_fu_29206_p2 = (!ci58_reg_11248.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci58_reg_11248.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_61_fu_29991_p2() {
    ci_61_fu_29991_p2 = (!ci60_reg_11369.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci60_reg_11369.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_63_fu_30769_p2() {
    ci_63_fu_30769_p2 = (!ci62_reg_11490.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci62_reg_11490.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_65_fu_31558_p2() {
    ci_65_fu_31558_p2 = (!ci64_reg_11611.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci64_reg_11611.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_67_fu_32123_p2() {
    ci_67_fu_32123_p2 = (!ci66_reg_11699.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci66_reg_11699.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_69_fu_32880_p2() {
    ci_69_fu_32880_p2 = (!ci68_reg_11820.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci68_reg_11820.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_71_fu_33637_p2() {
    ci_71_fu_33637_p2 = (!ci70_reg_11941.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci70_reg_11941.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_73_fu_34260_p2() {
    ci_73_fu_34260_p2 = (!ci72_reg_12029.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci72_reg_12029.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_75_fu_35009_p2() {
    ci_75_fu_35009_p2 = (!ci74_reg_12150.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci74_reg_12150.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_77_fu_35763_p2() {
    ci_77_fu_35763_p2 = (!ci76_reg_12271.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci76_reg_12271.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_79_fu_36524_p2() {
    ci_79_fu_36524_p2 = (!ci78_reg_12392.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci78_reg_12392.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_81_fu_37270_p2() {
    ci_81_fu_37270_p2 = (!ci80_reg_12513.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci80_reg_12513.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_83_fu_38023_p2() {
    ci_83_fu_38023_p2 = (!ci82_reg_12634.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci82_reg_12634.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_84_fu_38534_p2() {
    ci_84_fu_38534_p2 = (!ci83_reg_12711.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ci83_reg_12711.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void ShuffleNetV2::thread_co100_cast1_fu_24931_p1() {
    co100_cast1_fu_24931_p1 = esl_zext<7,5>(co99_reg_10566.read());
}

void ShuffleNetV2::thread_co100_cast_fu_24927_p1() {
    co100_cast_fu_24927_p1 = esl_zext<9,5>(co99_reg_10566.read());
}

void ShuffleNetV2::thread_co103_cast_fu_25264_p1() {
    co103_cast_fu_25264_p1 = esl_zext<11,5>(co101_reg_10632.read());
}

void ShuffleNetV2::thread_co106_cast_fu_25849_p1() {
    co106_cast_fu_25849_p1 = esl_zext<7,6>(co105_reg_10720.read());
}

void ShuffleNetV2::thread_co108_cast_fu_26030_p1() {
    co108_cast_fu_26030_p1 = esl_zext<11,5>(co107_reg_10753.read());
}

void ShuffleNetV2::thread_co110_cast400_cast_fu_26466_p1() {
    co110_cast400_cast_fu_26466_p1 = esl_zext<8,5>(co109_reg_10808.read());
}

void ShuffleNetV2::thread_co110_cast_fu_26470_p1() {
    co110_cast_fu_26470_p1 = esl_zext<7,5>(co109_reg_10808.read());
}

void ShuffleNetV2::thread_co113_cast_fu_26811_p1() {
    co113_cast_fu_26811_p1 = esl_zext<11,5>(co111_reg_10874.read());
}

void ShuffleNetV2::thread_co116_cast_fu_27396_p1() {
    co116_cast_fu_27396_p1 = esl_zext<7,6>(co115_reg_10962.read());
}

void ShuffleNetV2::thread_co118_cast_fu_27577_p1() {
    co118_cast_fu_27577_p1 = esl_zext<11,5>(co117_reg_10995.read());
}

void ShuffleNetV2::thread_co120_cast362_cast_fu_28013_p1() {
    co120_cast362_cast_fu_28013_p1 = esl_zext<8,5>(co119_reg_11050.read());
}

void ShuffleNetV2::thread_co120_cast_fu_28017_p1() {
    co120_cast_fu_28017_p1 = esl_zext<7,5>(co119_reg_11050.read());
}

void ShuffleNetV2::thread_co123_cast_fu_28362_p1() {
    co123_cast_fu_28362_p1 = esl_zext<11,5>(co121_reg_11116.read());
}

void ShuffleNetV2::thread_co126_cast_fu_28947_p1() {
    co126_cast_fu_28947_p1 = esl_zext<7,6>(co125_reg_11204.read());
}

void ShuffleNetV2::thread_co128_cast337_cast_fu_29128_p1() {
    co128_cast337_cast_fu_29128_p1 = esl_zext<10,5>(co127_reg_11237.read());
}

void ShuffleNetV2::thread_co12_cast1_cast_fu_14873_p1() {
    co12_cast1_cast_fu_14873_p1 = esl_zext<8,5>(co12_reg_8843.read());
}

void ShuffleNetV2::thread_co12_cast_fu_14899_p1() {
    co12_cast_fu_14899_p1 = esl_zext<6,5>(co12_reg_8843.read());
}

void ShuffleNetV2::thread_co130_cast1_fu_29576_p1() {
    co130_cast1_fu_29576_p1 = esl_zext<7,5>(co129_reg_11292.read());
}

void ShuffleNetV2::thread_co130_cast_fu_29572_p1() {
    co130_cast_fu_29572_p1 = esl_zext<10,5>(co129_reg_11292.read());
}

void ShuffleNetV2::thread_co133_cast314_cast_fu_29913_p1() {
    co133_cast314_cast_fu_29913_p1 = esl_zext<10,5>(co131_reg_11358.read());
}

void ShuffleNetV2::thread_co136_cast_fu_30510_p1() {
    co136_cast_fu_30510_p1 = esl_zext<7,6>(co135_reg_11446.read());
}

void ShuffleNetV2::thread_co138_cast299_cast_fu_30691_p1() {
    co138_cast299_cast_fu_30691_p1 = esl_zext<9,5>(co137_reg_11479.read());
}

void ShuffleNetV2::thread_co140_cast1_fu_31143_p1() {
    co140_cast1_fu_31143_p1 = esl_zext<7,5>(co139_reg_11534.read());
}

void ShuffleNetV2::thread_co140_cast_fu_31139_p1() {
    co140_cast_fu_31139_p1 = esl_zext<10,5>(co139_reg_11534.read());
}

void ShuffleNetV2::thread_co143_cast_fu_31480_p1() {
    co143_cast_fu_31480_p1 = esl_zext<12,5>(co141_reg_11600.read());
}

void ShuffleNetV2::thread_co146_cast_fu_32047_p1() {
    co146_cast_fu_32047_p1 = esl_zext<12,5>(co145_reg_11688.read());
}

void ShuffleNetV2::thread_co148_cast1_fu_32467_p1() {
    co148_cast1_fu_32467_p1 = esl_zext<8,5>(co147_reg_11743.read());
}

void ShuffleNetV2::thread_co148_cast_fu_32463_p1() {
    co148_cast_fu_32463_p1 = esl_zext<10,5>(co147_reg_11743.read());
}

void ShuffleNetV2::thread_co151_cast_fu_32804_p1() {
    co151_cast_fu_32804_p1 = esl_zext<12,5>(co149_reg_11809.read());
}

void ShuffleNetV2::thread_co152_cast1_fu_33228_p1() {
    co152_cast1_fu_33228_p1 = esl_zext<8,5>(co151_reg_11864.read());
}

void ShuffleNetV2::thread_co152_cast_fu_33224_p1() {
    co152_cast_fu_33224_p1 = esl_zext<10,5>(co151_reg_11864.read());
}

void ShuffleNetV2::thread_co155_cast_fu_33561_p1() {
    co155_cast_fu_33561_p1 = esl_zext<12,5>(co153_reg_11930.read());
}

void ShuffleNetV2::thread_co156_cast_fu_34007_p1() {
    co156_cast_fu_34007_p1 = esl_zext<8,7>(co155_reg_11985.read());
}

void ShuffleNetV2::thread_co158_cast_fu_34184_p1() {
    co158_cast_fu_34184_p1 = esl_zext<12,5>(co157_reg_12018.read());
}

void ShuffleNetV2::thread_co160_cast1_fu_34600_p1() {
    co160_cast1_fu_34600_p1 = esl_zext<8,5>(co159_reg_12073.read());
}

void ShuffleNetV2::thread_co160_cast_fu_34596_p1() {
    co160_cast_fu_34596_p1 = esl_zext<10,5>(co159_reg_12073.read());
}

void ShuffleNetV2::thread_co163_cast179_cast_fu_34933_p1() {
    co163_cast179_cast_fu_34933_p1 = esl_zext<11,5>(co161_reg_12139.read());
}

void ShuffleNetV2::thread_co166_cast_fu_35510_p1() {
    co166_cast_fu_35510_p1 = esl_zext<8,7>(co165_reg_12227.read());
}

void ShuffleNetV2::thread_co168_cast_fu_35687_p1() {
    co168_cast_fu_35687_p1 = esl_zext<13,5>(co167_reg_12260.read());
}

void ShuffleNetV2::thread_co16_cast_fu_15083_p1() {
    co16_cast_fu_15083_p1 = esl_zext<7,5>(co16_reg_8887.read());
}

void ShuffleNetV2::thread_co170_cast151_cast_fu_36099_p1() {
    co170_cast151_cast_fu_36099_p1 = esl_zext<9,5>(co169_reg_12315.read());
}

void ShuffleNetV2::thread_co170_cast_fu_36103_p1() {
    co170_cast_fu_36103_p1 = esl_zext<8,5>(co169_reg_12315.read());
}

void ShuffleNetV2::thread_co173_cast_fu_36448_p1() {
    co173_cast_fu_36448_p1 = esl_zext<13,5>(co171_reg_12381.read());
}

void ShuffleNetV2::thread_co176_cast_fu_37017_p1() {
    co176_cast_fu_37017_p1 = esl_zext<8,7>(co175_reg_12469.read());
}

void ShuffleNetV2::thread_co178_cast_fu_37194_p1() {
    co178_cast_fu_37194_p1 = esl_zext<13,5>(co177_reg_12502.read());
}

void ShuffleNetV2::thread_co180_cast1_fu_37610_p1() {
    co180_cast1_fu_37610_p1 = esl_zext<8,5>(co179_reg_12557.read());
}

void ShuffleNetV2::thread_co180_cast_fu_37606_p1() {
    co180_cast_fu_37606_p1 = esl_zext<11,5>(co179_reg_12557.read());
}

void ShuffleNetV2::thread_co183_cast_fu_37947_p1() {
    co183_cast_fu_37947_p1 = esl_zext<13,5>(co181_reg_12623.read());
}

void ShuffleNetV2::thread_co19_cast_fu_15247_p1() {
    co19_cast_fu_15247_p1 = esl_zext<6,5>(co19_reg_8921.read());
}

void ShuffleNetV2::thread_co22_cast_fu_15420_p1() {
    co22_cast_fu_15420_p1 = esl_zext<7,5>(co22_reg_8954.read());
}

void ShuffleNetV2::thread_co25_cast1_cast_fu_15558_p1() {
    co25_cast1_cast_fu_15558_p1 = esl_zext<8,5>(co25_reg_8988.read());
}

void ShuffleNetV2::thread_co25_cast_fu_15554_p1() {
    co25_cast_fu_15554_p1 = esl_zext<7,5>(co25_reg_8988.read());
}

void ShuffleNetV2::thread_co35_cast_fu_16053_p1() {
    co35_cast_fu_16053_p1 = esl_zext<6,5>(co35_reg_9099.read());
}

void ShuffleNetV2::thread_co38_cast_fu_16226_p1() {
    co38_cast_fu_16226_p1 = esl_zext<8,5>(co38_reg_9132.read());
}

void ShuffleNetV2::thread_co41_cast1_cast_fu_16364_p1() {
    co41_cast1_cast_fu_16364_p1 = esl_zext<8,5>(co41_reg_9166.read());
}

void ShuffleNetV2::thread_co41_cast_fu_16360_p1() {
    co41_cast_fu_16360_p1 = esl_zext<7,5>(co41_reg_9166.read());
}

void ShuffleNetV2::thread_co43_cast_fu_16558_p1() {
    co43_cast_fu_16558_p1 = esl_zext<8,5>(co43_reg_9210.read());
}

void ShuffleNetV2::thread_co46_cast_fu_16841_p1() {
    co46_cast_fu_16841_p1 = esl_zext<6,5>(co46_reg_9277.read());
}

void ShuffleNetV2::thread_co48_cast_fu_17014_p1() {
    co48_cast_fu_17014_p1 = esl_zext<8,5>(co48_reg_9310.read());
}

void ShuffleNetV2::thread_co51_cast_cast_fu_17160_p1() {
    co51_cast_cast_fu_17160_p1 = esl_zext<8,5>(co51_reg_9344.read());
}

void ShuffleNetV2::thread_co56_cast_fu_17625_p1() {
    co56_cast_fu_17625_p1 = esl_zext<9,5>(co56_reg_9455.read());
}

void ShuffleNetV2::thread_co58_cast1_fu_18065_p1() {
    co58_cast1_fu_18065_p1 = esl_zext<7,5>(co58_reg_9510.read());
}

void ShuffleNetV2::thread_co58_cast_fu_18061_p1() {
    co58_cast_fu_18061_p1 = esl_zext<8,5>(co58_reg_9510.read());
}

void ShuffleNetV2::thread_co5_cast_cast_fu_14598_p1() {
    co5_cast_cast_fu_14598_p1 = esl_zext<8,5>(co5_reg_8765.read());
}

void ShuffleNetV2::thread_co61_cast_fu_18406_p1() {
    co61_cast_fu_18406_p1 = esl_zext<9,5>(co60_reg_9576.read());
}

void ShuffleNetV2::thread_co62_cast1_fu_18850_p1() {
    co62_cast1_fu_18850_p1 = esl_zext<7,5>(co62_reg_9631.read());
}

void ShuffleNetV2::thread_co62_cast_fu_18846_p1() {
    co62_cast_fu_18846_p1 = esl_zext<8,5>(co62_reg_9631.read());
}

void ShuffleNetV2::thread_co65_cast_fu_19183_p1() {
    co65_cast_fu_19183_p1 = esl_zext<10,5>(co64_reg_9697.read());
}

void ShuffleNetV2::thread_co66_cast_fu_19653_p1() {
    co66_cast_fu_19653_p1 = esl_zext<7,6>(co66_reg_9752.read());
}

void ShuffleNetV2::thread_co68_cast_fu_19834_p1() {
    co68_cast_fu_19834_p1 = esl_zext<10,5>(co67_reg_9785.read());
}

void ShuffleNetV2::thread_co70_cast1_fu_20274_p1() {
    co70_cast1_fu_20274_p1 = esl_zext<7,5>(co69_reg_9840.read());
}

void ShuffleNetV2::thread_co70_cast_fu_20270_p1() {
    co70_cast_fu_20270_p1 = esl_zext<9,5>(co69_reg_9840.read());
}

void ShuffleNetV2::thread_co73_cast_fu_20615_p1() {
    co73_cast_fu_20615_p1 = esl_zext<10,5>(co71_reg_9906.read());
}

void ShuffleNetV2::thread_co76_cast_fu_21200_p1() {
    co76_cast_fu_21200_p1 = esl_zext<7,6>(co75_reg_9994.read());
}

void ShuffleNetV2::thread_co78_cast_fu_21381_p1() {
    co78_cast_fu_21381_p1 = esl_zext<10,5>(co77_reg_10027.read());
}

void ShuffleNetV2::thread_co80_cast1_fu_21821_p1() {
    co80_cast1_fu_21821_p1 = esl_zext<7,5>(co79_reg_10082.read());
}

void ShuffleNetV2::thread_co80_cast_fu_21817_p1() {
    co80_cast_fu_21817_p1 = esl_zext<9,5>(co79_reg_10082.read());
}

void ShuffleNetV2::thread_co83_cast_fu_22162_p1() {
    co83_cast_fu_22162_p1 = esl_zext<10,5>(co81_reg_10148.read());
}

void ShuffleNetV2::thread_co86_cast_fu_22751_p1() {
    co86_cast_fu_22751_p1 = esl_zext<7,6>(co85_reg_10236.read());
}

void ShuffleNetV2::thread_co88_cast489_cast_fu_22932_p1() {
    co88_cast489_cast_fu_22932_p1 = esl_zext<9,5>(co87_reg_10269.read());
}

void ShuffleNetV2::thread_co90_cast1_fu_23384_p1() {
    co90_cast1_fu_23384_p1 = esl_zext<7,5>(co89_reg_10324.read());
}

void ShuffleNetV2::thread_co90_cast_fu_23380_p1() {
    co90_cast_fu_23380_p1 = esl_zext<9,5>(co89_reg_10324.read());
}

void ShuffleNetV2::thread_co93_cast_fu_23721_p1() {
    co93_cast_fu_23721_p1 = esl_zext<11,5>(co91_reg_10390.read());
}

void ShuffleNetV2::thread_co96_cast_fu_24310_p1() {
    co96_cast_fu_24310_p1 = esl_zext<7,6>(co95_reg_10478.read());
}

void ShuffleNetV2::thread_co98_cast_fu_24491_p1() {
    co98_cast_fu_24491_p1 = esl_zext<11,5>(co97_reg_10511.read());
}

void ShuffleNetV2::thread_co9_cast_fu_14739_p1() {
    co9_cast_fu_14739_p1 = esl_zext<6,5>(co9_reg_8809.read());
}

void ShuffleNetV2::thread_co_100_fu_24941_p2() {
    co_100_fu_24941_p2 = (!co99_reg_10566.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co99_reg_10566.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_102_fu_25274_p2() {
    co_102_fu_25274_p2 = (!co101_reg_10632.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co101_reg_10632.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_104_fu_25736_p2() {
    co_104_fu_25736_p2 = (!co103_reg_10687.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co103_reg_10687.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_106_fu_25859_p2() {
    co_106_fu_25859_p2 = (!co105_reg_10720.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co105_reg_10720.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_108_fu_26040_p2() {
    co_108_fu_26040_p2 = (!co107_reg_10753.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co107_reg_10753.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_110_fu_26480_p2() {
    co_110_fu_26480_p2 = (!co109_reg_10808.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co109_reg_10808.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_112_fu_26821_p2() {
    co_112_fu_26821_p2 = (!co111_reg_10874.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co111_reg_10874.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_114_fu_27283_p2() {
    co_114_fu_27283_p2 = (!co113_reg_10929.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co113_reg_10929.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_116_fu_27406_p2() {
    co_116_fu_27406_p2 = (!co115_reg_10962.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co115_reg_10962.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_118_fu_27587_p2() {
    co_118_fu_27587_p2 = (!co117_reg_10995.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co117_reg_10995.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_120_fu_28027_p2() {
    co_120_fu_28027_p2 = (!co119_reg_11050.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co119_reg_11050.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_122_fu_28372_p2() {
    co_122_fu_28372_p2 = (!co121_reg_11116.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co121_reg_11116.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_124_fu_28834_p2() {
    co_124_fu_28834_p2 = (!co123_reg_11171.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co123_reg_11171.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_126_fu_28957_p2() {
    co_126_fu_28957_p2 = (!co125_reg_11204.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co125_reg_11204.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_128_fu_29138_p2() {
    co_128_fu_29138_p2 = (!co127_reg_11237.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co127_reg_11237.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_130_fu_29586_p2() {
    co_130_fu_29586_p2 = (!co129_reg_11292.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co129_reg_11292.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_132_fu_29923_p2() {
    co_132_fu_29923_p2 = (!co131_reg_11358.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co131_reg_11358.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_134_fu_30397_p2() {
    co_134_fu_30397_p2 = (!co133_reg_11413.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co133_reg_11413.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_136_fu_30520_p2() {
    co_136_fu_30520_p2 = (!co135_reg_11446.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co135_reg_11446.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_138_fu_30701_p2() {
    co_138_fu_30701_p2 = (!co137_reg_11479.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co137_reg_11479.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_140_fu_31153_p2() {
    co_140_fu_31153_p2 = (!co139_reg_11534.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co139_reg_11534.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_142_fu_31490_p2() {
    co_142_fu_31490_p2 = (!co141_reg_11600.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co141_reg_11600.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_144_fu_31964_p2() {
    co_144_fu_31964_p2 = (!co143_reg_11655.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co143_reg_11655.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_146_fu_32057_p2() {
    co_146_fu_32057_p2 = (!co145_reg_11688.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co145_reg_11688.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_148_fu_32477_p2() {
    co_148_fu_32477_p2 = (!co147_reg_11743.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co147_reg_11743.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_150_fu_32814_p2() {
    co_150_fu_32814_p2 = (!co149_reg_11809.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co149_reg_11809.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_152_fu_33238_p2() {
    co_152_fu_33238_p2 = (!co151_reg_11864.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co151_reg_11864.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_154_fu_33571_p2() {
    co_154_fu_33571_p2 = (!co153_reg_11930.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co153_reg_11930.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_156_fu_34017_p2() {
    co_156_fu_34017_p2 = (!co155_reg_11985.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co155_reg_11985.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_158_fu_34194_p2() {
    co_158_fu_34194_p2 = (!co157_reg_12018.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co157_reg_12018.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_160_fu_34610_p2() {
    co_160_fu_34610_p2 = (!co159_reg_12073.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co159_reg_12073.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_162_fu_34943_p2() {
    co_162_fu_34943_p2 = (!co161_reg_12139.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co161_reg_12139.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_164_fu_35393_p2() {
    co_164_fu_35393_p2 = (!co163_reg_12194.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co163_reg_12194.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_166_fu_35520_p2() {
    co_166_fu_35520_p2 = (!co165_reg_12227.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co165_reg_12227.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_168_fu_35697_p2() {
    co_168_fu_35697_p2 = (!co167_reg_12260.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co167_reg_12260.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_170_fu_36113_p2() {
    co_170_fu_36113_p2 = (!co169_reg_12315.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co169_reg_12315.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_172_fu_36458_p2() {
    co_172_fu_36458_p2 = (!co171_reg_12381.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co171_reg_12381.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_174_fu_36900_p2() {
    co_174_fu_36900_p2 = (!co173_reg_12436.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co173_reg_12436.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_176_fu_37027_p2() {
    co_176_fu_37027_p2 = (!co175_reg_12469.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co175_reg_12469.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_178_fu_37204_p2() {
    co_178_fu_37204_p2 = (!co177_reg_12502.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co177_reg_12502.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_180_fu_37620_p2() {
    co_180_fu_37620_p2 = (!co179_reg_12557.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co179_reg_12557.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_182_fu_37957_p2() {
    co_182_fu_37957_p2 = (!co181_reg_12623.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co181_reg_12623.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_184_fu_38399_p2() {
    co_184_fu_38399_p2 = (!co183_reg_12678.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co183_reg_12678.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_34_fu_14510_p2() {
    co_34_fu_14510_p2 = (!co_reg_8731.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co_reg_8731.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_35_fu_14630_p2() {
    co_35_fu_14630_p2 = (!co5_reg_8765.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co5_reg_8765.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_36_fu_14749_p2() {
    co_36_fu_14749_p2 = (!co9_reg_8809.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co9_reg_8809.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_37_fu_14909_p2() {
    co_37_fu_14909_p2 = (!co12_reg_8843.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co12_reg_8843.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_38_fu_15093_p2() {
    co_38_fu_15093_p2 = (!co16_reg_8887.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co16_reg_8887.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_39_fu_15257_p2() {
    co_39_fu_15257_p2 = (!co19_reg_8921.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co19_reg_8921.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_40_fu_15430_p2() {
    co_40_fu_15430_p2 = (!co22_reg_8954.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co22_reg_8954.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_41_fu_15590_p2() {
    co_41_fu_15590_p2 = (!co25_reg_8988.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co25_reg_8988.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_42_fu_15758_p2() {
    co_42_fu_15758_p2 = (!co29_reg_9032.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co29_reg_9032.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_43_fu_15940_p2() {
    co_43_fu_15940_p2 = (!co32_reg_9066.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co32_reg_9066.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_44_fu_16063_p2() {
    co_44_fu_16063_p2 = (!co35_reg_9099.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co35_reg_9099.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_45_fu_16236_p2() {
    co_45_fu_16236_p2 = (!co38_reg_9132.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co38_reg_9132.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_46_fu_16396_p2() {
    co_46_fu_16396_p2 = (!co41_reg_9166.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co41_reg_9166.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_47_fu_16568_p2() {
    co_47_fu_16568_p2 = (!co43_reg_9210.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co43_reg_9210.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_48_fu_16728_p2() {
    co_48_fu_16728_p2 = (!co45_reg_9244.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co45_reg_9244.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_49_fu_16851_p2() {
    co_49_fu_16851_p2 = (!co46_reg_9277.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co46_reg_9277.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_50_fu_17024_p2() {
    co_50_fu_17024_p2 = (!co48_reg_9310.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co48_reg_9310.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_52_fu_17192_p2() {
    co_52_fu_17192_p2 = (!co51_reg_9344.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co51_reg_9344.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_54_fu_17376_p2() {
    co_54_fu_17376_p2 = (!co53_reg_9388.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co53_reg_9388.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_56_fu_17542_p2() {
    co_56_fu_17542_p2 = (!co55_reg_9422.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co55_reg_9422.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_57_fu_17635_p2() {
    co_57_fu_17635_p2 = (!co56_reg_9455.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co56_reg_9455.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_59_fu_18075_p2() {
    co_59_fu_18075_p2 = (!co58_reg_9510.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co58_reg_9510.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_61_fu_18416_p2() {
    co_61_fu_18416_p2 = (!co60_reg_9576.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co60_reg_9576.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_63_fu_18860_p2() {
    co_63_fu_18860_p2 = (!co62_reg_9631.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co62_reg_9631.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_65_fu_19193_p2() {
    co_65_fu_19193_p2 = (!co64_reg_9697.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co64_reg_9697.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_67_fu_19663_p2() {
    co_67_fu_19663_p2 = (!co66_reg_9752.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co66_reg_9752.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_68_fu_19844_p2() {
    co_68_fu_19844_p2 = (!co67_reg_9785.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co67_reg_9785.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_70_fu_20284_p2() {
    co_70_fu_20284_p2 = (!co69_reg_9840.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co69_reg_9840.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_72_fu_20625_p2() {
    co_72_fu_20625_p2 = (!co71_reg_9906.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co71_reg_9906.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_74_fu_21087_p2() {
    co_74_fu_21087_p2 = (!co73_reg_9961.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co73_reg_9961.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_76_fu_21210_p2() {
    co_76_fu_21210_p2 = (!co75_reg_9994.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co75_reg_9994.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_78_fu_21391_p2() {
    co_78_fu_21391_p2 = (!co77_reg_10027.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co77_reg_10027.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_80_fu_21831_p2() {
    co_80_fu_21831_p2 = (!co79_reg_10082.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co79_reg_10082.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_82_fu_22172_p2() {
    co_82_fu_22172_p2 = (!co81_reg_10148.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co81_reg_10148.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_84_fu_22638_p2() {
    co_84_fu_22638_p2 = (!co83_reg_10203.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co83_reg_10203.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_86_fu_22761_p2() {
    co_86_fu_22761_p2 = (!co85_reg_10236.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co85_reg_10236.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_88_fu_22942_p2() {
    co_88_fu_22942_p2 = (!co87_reg_10269.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co87_reg_10269.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_90_fu_23394_p2() {
    co_90_fu_23394_p2 = (!co89_reg_10324.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co89_reg_10324.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_92_fu_23731_p2() {
    co_92_fu_23731_p2 = (!co91_reg_10390.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co91_reg_10390.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_94_fu_24197_p2() {
    co_94_fu_24197_p2 = (!co93_reg_10445.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co93_reg_10445.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_96_fu_24320_p2() {
    co_96_fu_24320_p2 = (!co95_reg_10478.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co95_reg_10478.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_98_fu_24501_p2() {
    co_98_fu_24501_p2 = (!co97_reg_10511.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co97_reg_10511.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_conv1_bias_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_bias_V_address0 =  (sc_lv<5>) (i_cast_reg_39063.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_bias_V_address0 = grp_conv1_p_fu_13008_bias_V_address0.read();
    } else {
        conv1_bias_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_conv1_bias_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_bias_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_bias_V_ce0 = grp_conv1_p_fu_13008_bias_V_ce0.read();
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
        conv1_output_p_V_0_address0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_0_address0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_0_address0 = grp_conv1_p_fu_13008_conv1_output_p_V_0_address0.read();
    } else {
        conv1_output_p_V_0_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_0_ce0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_0_ce0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_0_ce0 = grp_conv1_p_fu_13008_conv1_output_p_V_0_ce0.read();
    } else {
        conv1_output_p_V_0_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_0_we0 = grp_conv1_p_fu_13008_conv1_output_p_V_0_we0.read();
    } else {
        conv1_output_p_V_0_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_10_address0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_10_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_10_address0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_10_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_10_address0 = grp_conv1_p_fu_13008_conv1_output_p_V_10_address0.read();
    } else {
        conv1_output_p_V_10_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_10_ce0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_10_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_10_ce0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_10_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_10_ce0 = grp_conv1_p_fu_13008_conv1_output_p_V_10_ce0.read();
    } else {
        conv1_output_p_V_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_10_we0 = grp_conv1_p_fu_13008_conv1_output_p_V_10_we0.read();
    } else {
        conv1_output_p_V_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_11_address0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_11_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_11_address0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_11_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_11_address0 = grp_conv1_p_fu_13008_conv1_output_p_V_11_address0.read();
    } else {
        conv1_output_p_V_11_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_11_ce0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_11_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_11_ce0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_11_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_11_ce0 = grp_conv1_p_fu_13008_conv1_output_p_V_11_ce0.read();
    } else {
        conv1_output_p_V_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_11_we0 = grp_conv1_p_fu_13008_conv1_output_p_V_11_we0.read();
    } else {
        conv1_output_p_V_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_1_address0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_1_address0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_1_address0 = grp_conv1_p_fu_13008_conv1_output_p_V_1_address0.read();
    } else {
        conv1_output_p_V_1_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_1_ce0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_1_ce0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_1_ce0 = grp_conv1_p_fu_13008_conv1_output_p_V_1_ce0.read();
    } else {
        conv1_output_p_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_1_we0 = grp_conv1_p_fu_13008_conv1_output_p_V_1_we0.read();
    } else {
        conv1_output_p_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_2_address0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_2_address0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_2_address0 = grp_conv1_p_fu_13008_conv1_output_p_V_2_address0.read();
    } else {
        conv1_output_p_V_2_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_2_ce0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_2_ce0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_2_ce0 = grp_conv1_p_fu_13008_conv1_output_p_V_2_ce0.read();
    } else {
        conv1_output_p_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_2_we0 = grp_conv1_p_fu_13008_conv1_output_p_V_2_we0.read();
    } else {
        conv1_output_p_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_3_address0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_3_address0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_3_address0 = grp_conv1_p_fu_13008_conv1_output_p_V_3_address0.read();
    } else {
        conv1_output_p_V_3_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_3_ce0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_3_ce0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_3_ce0 = grp_conv1_p_fu_13008_conv1_output_p_V_3_ce0.read();
    } else {
        conv1_output_p_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_3_we0 = grp_conv1_p_fu_13008_conv1_output_p_V_3_we0.read();
    } else {
        conv1_output_p_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_4_address0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_4_address0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_4_address0 = grp_conv1_p_fu_13008_conv1_output_p_V_4_address0.read();
    } else {
        conv1_output_p_V_4_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_4_ce0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_4_ce0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_4_ce0 = grp_conv1_p_fu_13008_conv1_output_p_V_4_ce0.read();
    } else {
        conv1_output_p_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_4_we0 = grp_conv1_p_fu_13008_conv1_output_p_V_4_we0.read();
    } else {
        conv1_output_p_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_5_address0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_5_address0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_5_address0 = grp_conv1_p_fu_13008_conv1_output_p_V_5_address0.read();
    } else {
        conv1_output_p_V_5_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_5_ce0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_5_ce0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_5_ce0 = grp_conv1_p_fu_13008_conv1_output_p_V_5_ce0.read();
    } else {
        conv1_output_p_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_5_we0 = grp_conv1_p_fu_13008_conv1_output_p_V_5_we0.read();
    } else {
        conv1_output_p_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_6_address0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_6_address0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_6_address0 = grp_conv1_p_fu_13008_conv1_output_p_V_6_address0.read();
    } else {
        conv1_output_p_V_6_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_6_ce0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_6_ce0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_6_ce0 = grp_conv1_p_fu_13008_conv1_output_p_V_6_ce0.read();
    } else {
        conv1_output_p_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_6_we0 = grp_conv1_p_fu_13008_conv1_output_p_V_6_we0.read();
    } else {
        conv1_output_p_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_7_address0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_7_address0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_7_address0 = grp_conv1_p_fu_13008_conv1_output_p_V_7_address0.read();
    } else {
        conv1_output_p_V_7_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_7_ce0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_7_ce0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_7_ce0 = grp_conv1_p_fu_13008_conv1_output_p_V_7_ce0.read();
    } else {
        conv1_output_p_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_7_we0 = grp_conv1_p_fu_13008_conv1_output_p_V_7_we0.read();
    } else {
        conv1_output_p_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_8_address0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_8_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_8_address0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_8_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_8_address0 = grp_conv1_p_fu_13008_conv1_output_p_V_8_address0.read();
    } else {
        conv1_output_p_V_8_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_8_ce0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_8_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_8_ce0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_8_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_8_ce0 = grp_conv1_p_fu_13008_conv1_output_p_V_8_ce0.read();
    } else {
        conv1_output_p_V_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_8_we0 = grp_conv1_p_fu_13008_conv1_output_p_V_8_we0.read();
    } else {
        conv1_output_p_V_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_9_address0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_9_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_9_address0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_9_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_9_address0 = grp_conv1_p_fu_13008_conv1_output_p_V_9_address0.read();
    } else {
        conv1_output_p_V_9_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        conv1_output_p_V_9_ce0 = grp_subconv_3x3_32_strid_fu_13547_conv1_output_p_V_9_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        conv1_output_p_V_9_ce0 = grp_subconv_1x1_32_p_fu_13099_conv1_output_p_V_9_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_9_ce0 = grp_conv1_p_fu_13008_conv1_output_p_V_9_ce0.read();
    } else {
        conv1_output_p_V_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_9_we0 = grp_conv1_p_fu_13008_conv1_output_p_V_9_we0.read();
    } else {
        conv1_output_p_V_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_bias_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        conv_last_bias_V_address0 =  (sc_lv<9>) (i1_cast_reg_39082.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_bias_V_address0 = grp_conv_last_fu_13329_bias_V_address0.read();
    } else {
        conv_last_bias_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_bias_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        conv_last_bias_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_bias_V_ce0 = grp_conv_last_fu_13329_bias_V_ce0.read();
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
        conv_last_output_V_0_address0 = grp_avgpool_fu_14141_conv_last_output_V_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_0_address0 = grp_conv_last_fu_13329_conv_last_output_V_0_address0.read();
    } else {
        conv_last_output_V_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_0_ce0 = grp_avgpool_fu_14141_conv_last_output_V_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_0_ce0 = grp_conv_last_fu_13329_conv_last_output_V_0_ce0.read();
    } else {
        conv_last_output_V_0_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_0_we0 = grp_conv_last_fu_13329_conv_last_output_V_0_we0.read();
    } else {
        conv_last_output_V_0_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_1_address0 = grp_avgpool_fu_14141_conv_last_output_V_1_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_1_address0 = grp_conv_last_fu_13329_conv_last_output_V_1_address0.read();
    } else {
        conv_last_output_V_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_1_ce0 = grp_avgpool_fu_14141_conv_last_output_V_1_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_1_ce0 = grp_conv_last_fu_13329_conv_last_output_V_1_ce0.read();
    } else {
        conv_last_output_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_1_we0 = grp_conv_last_fu_13329_conv_last_output_V_1_we0.read();
    } else {
        conv_last_output_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_2_address0 = grp_avgpool_fu_14141_conv_last_output_V_2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_2_address0 = grp_conv_last_fu_13329_conv_last_output_V_2_address0.read();
    } else {
        conv_last_output_V_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_2_ce0 = grp_avgpool_fu_14141_conv_last_output_V_2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_2_ce0 = grp_conv_last_fu_13329_conv_last_output_V_2_ce0.read();
    } else {
        conv_last_output_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_2_we0 = grp_conv_last_fu_13329_conv_last_output_V_2_we0.read();
    } else {
        conv_last_output_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_3_address0 = grp_avgpool_fu_14141_conv_last_output_V_3_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_3_address0 = grp_conv_last_fu_13329_conv_last_output_V_3_address0.read();
    } else {
        conv_last_output_V_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_3_ce0 = grp_avgpool_fu_14141_conv_last_output_V_3_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_3_ce0 = grp_conv_last_fu_13329_conv_last_output_V_3_ce0.read();
    } else {
        conv_last_output_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_3_we0 = grp_conv_last_fu_13329_conv_last_output_V_3_we0.read();
    } else {
        conv_last_output_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_4_address0 = grp_avgpool_fu_14141_conv_last_output_V_4_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_4_address0 = grp_conv_last_fu_13329_conv_last_output_V_4_address0.read();
    } else {
        conv_last_output_V_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_4_ce0 = grp_avgpool_fu_14141_conv_last_output_V_4_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_4_ce0 = grp_conv_last_fu_13329_conv_last_output_V_4_ce0.read();
    } else {
        conv_last_output_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_4_we0 = grp_conv_last_fu_13329_conv_last_output_V_4_we0.read();
    } else {
        conv_last_output_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_5_address0 = grp_avgpool_fu_14141_conv_last_output_V_5_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_5_address0 = grp_conv_last_fu_13329_conv_last_output_V_5_address0.read();
    } else {
        conv_last_output_V_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_5_ce0 = grp_avgpool_fu_14141_conv_last_output_V_5_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_5_ce0 = grp_conv_last_fu_13329_conv_last_output_V_5_ce0.read();
    } else {
        conv_last_output_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_5_we0 = grp_conv_last_fu_13329_conv_last_output_V_5_we0.read();
    } else {
        conv_last_output_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_6_address0 = grp_avgpool_fu_14141_conv_last_output_V_6_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_6_address0 = grp_conv_last_fu_13329_conv_last_output_V_6_address0.read();
    } else {
        conv_last_output_V_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_6_ce0 = grp_avgpool_fu_14141_conv_last_output_V_6_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_6_ce0 = grp_conv_last_fu_13329_conv_last_output_V_6_ce0.read();
    } else {
        conv_last_output_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_6_we0 = grp_conv_last_fu_13329_conv_last_output_V_6_we0.read();
    } else {
        conv_last_output_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_7_address0 = grp_avgpool_fu_14141_conv_last_output_V_7_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_7_address0 = grp_conv_last_fu_13329_conv_last_output_V_7_address0.read();
    } else {
        conv_last_output_V_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1722.read())) {
        conv_last_output_V_7_ce0 = grp_avgpool_fu_14141_conv_last_output_V_7_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_7_ce0 = grp_conv_last_fu_13329_conv_last_output_V_7_ce0.read();
    } else {
        conv_last_output_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        conv_last_output_V_7_we0 = grp_conv_last_fu_13329_conv_last_output_V_7_we0.read();
    } else {
        conv_last_output_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_exitcond100_fu_17342_p2() {
    exitcond100_fu_17342_p2 = (!h45_reg_9366.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h45_reg_9366.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond101_fu_17494_p2() {
    exitcond101_fu_17494_p2 = (!i30_reg_9411.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i30_reg_9411.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond102_fu_17478_p2() {
    exitcond102_fu_17478_p2 = (!ci26_reg_9400.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci26_reg_9400.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond103_fu_17536_p2() {
    exitcond103_fu_17536_p2 = (!co55_reg_9422.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co55_reg_9422.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond104_fu_17629_p2() {
    exitcond104_fu_17629_p2 = (!co56_reg_9455.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co56_reg_9455.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond105_fu_17548_p2() {
    exitcond105_fu_17548_p2 = (!h47_reg_9433.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h47_reg_9433.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond106_fu_17965_p2() {
    exitcond106_fu_17965_p2 = (!i32_reg_9488.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i32_reg_9488.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond107_fu_17697_p2() {
    exitcond107_fu_17697_p2 = (!ci28_reg_9466.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci28_reg_9466.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond108_fu_17599_p2() {
    exitcond108_fu_17599_p2 = (!w52_reg_9444.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w52_reg_9444.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond109_fu_18069_p2() {
    exitcond109_fu_18069_p2 = (!co58_reg_9510.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co58_reg_9510.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond110_fu_17977_p2() {
    exitcond110_fu_17977_p2 = (!k_reg_9499.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k_reg_9499.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond111_fu_17718_p2() {
    exitcond111_fu_17718_p2 = (!i34_reg_9477.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i34_reg_9477.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond112_fu_18306_p2() {
    exitcond112_fu_18306_p2 = (!i35_reg_9554.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i35_reg_9554.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond113_fu_18089_p2() {
    exitcond113_fu_18089_p2 = (!w54_reg_9521.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w54_reg_9521.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond114_fu_18410_p2() {
    exitcond114_fu_18410_p2 = (!co60_reg_9576.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co60_reg_9576.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond115_fu_18318_p2() {
    exitcond115_fu_18318_p2 = (!k8_reg_9565.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k8_reg_9565.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond116_fu_18109_p2() {
    exitcond116_fu_18109_p2 = (!h49_reg_9532.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h49_reg_9532.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond117_fu_18746_p2() {
    exitcond117_fu_18746_p2 = (!i37_reg_9609.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i37_reg_9609.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond118_fu_18478_p2() {
    exitcond118_fu_18478_p2 = (!ci30_reg_9587.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci30_reg_9587.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond119_fu_18121_p2() {
    exitcond119_fu_18121_p2 = (!i39_reg_9543.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i39_reg_9543.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond120_fu_18854_p2() {
    exitcond120_fu_18854_p2 = (!co62_reg_9631.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co62_reg_9631.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond121_fu_18758_p2() {
    exitcond121_fu_18758_p2 = (!k9_reg_9620.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k9_reg_9620.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond122_fu_18499_p2() {
    exitcond122_fu_18499_p2 = (!i41_reg_9598.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i41_reg_9598.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond123_fu_19087_p2() {
    exitcond123_fu_19087_p2 = (!i42_reg_9675.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i42_reg_9675.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond124_fu_18874_p2() {
    exitcond124_fu_18874_p2 = (!w56_reg_9642.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w56_reg_9642.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond125_fu_19187_p2() {
    exitcond125_fu_19187_p2 = (!co64_reg_9697.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co64_reg_9697.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond126_fu_19099_p2() {
    exitcond126_fu_19099_p2 = (!k10_reg_9686.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k10_reg_9686.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond127_fu_18894_p2() {
    exitcond127_fu_18894_p2 = (!h51_reg_9653.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h51_reg_9653.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond128_fu_19527_p2() {
    exitcond128_fu_19527_p2 = (!i44_reg_9730.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i44_reg_9730.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond129_fu_19255_p2() {
    exitcond129_fu_19255_p2 = (!ci32_reg_9708.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci32_reg_9708.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond130_fu_18906_p2() {
    exitcond130_fu_18906_p2 = (!i46_reg_9664.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i46_reg_9664.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond131_fu_19657_p2() {
    exitcond131_fu_19657_p2 = (!co66_reg_9752.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co66_reg_9752.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond132_fu_19539_p2() {
    exitcond132_fu_19539_p2 = (!k12_reg_9741.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k12_reg_9741.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond133_fu_19276_p2() {
    exitcond133_fu_19276_p2 = (!i48_reg_9719.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i48_reg_9719.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond134_fu_19838_p2() {
    exitcond134_fu_19838_p2 = (!co67_reg_9785.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co67_reg_9785.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond135_fu_19705_p2() {
    exitcond135_fu_19705_p2 = (!h53_reg_9763.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h53_reg_9763.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond136_fu_20174_p2() {
    exitcond136_fu_20174_p2 = (!i50_reg_9818.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i50_reg_9818.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond137_fu_19906_p2() {
    exitcond137_fu_19906_p2 = (!ci34_reg_9796.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci34_reg_9796.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond138_fu_19795_p2() {
    exitcond138_fu_19795_p2 = (!w58_reg_9774.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w58_reg_9774.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond139_fu_20278_p2() {
    exitcond139_fu_20278_p2 = (!co69_reg_9840.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co69_reg_9840.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond140_fu_20186_p2() {
    exitcond140_fu_20186_p2 = (!k14_reg_9829.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k14_reg_9829.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond141_fu_19927_p2() {
    exitcond141_fu_19927_p2 = (!i52_reg_9807.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i52_reg_9807.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond142_fu_20519_p2() {
    exitcond142_fu_20519_p2 = (!i53_reg_9884.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i53_reg_9884.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond143_fu_20298_p2() {
    exitcond143_fu_20298_p2 = (!w60_reg_9851.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w60_reg_9851.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond144_fu_20619_p2() {
    exitcond144_fu_20619_p2 = (!co71_reg_9906.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co71_reg_9906.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond145_fu_20531_p2() {
    exitcond145_fu_20531_p2 = (!k16_reg_9895.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k16_reg_9895.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond146_fu_20318_p2() {
    exitcond146_fu_20318_p2 = (!h55_reg_9862.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h55_reg_9862.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond147_fu_20955_p2() {
    exitcond147_fu_20955_p2 = (!i55_reg_9939.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i55_reg_9939.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond148_fu_20687_p2() {
    exitcond148_fu_20687_p2 = (!ci36_reg_9917.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci36_reg_9917.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond149_fu_20330_p2() {
    exitcond149_fu_20330_p2 = (!i57_reg_9873.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i57_reg_9873.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond150_fu_21081_p2() {
    exitcond150_fu_21081_p2 = (!co73_reg_9961.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co73_reg_9961.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond151_fu_20967_p2() {
    exitcond151_fu_20967_p2 = (!k18_reg_9950.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k18_reg_9950.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond152_fu_20708_p2() {
    exitcond152_fu_20708_p2 = (!i59_reg_9928.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i59_reg_9928.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond153_fu_21204_p2() {
    exitcond153_fu_21204_p2 = (!co75_reg_9994.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co75_reg_9994.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond154_fu_21093_p2() {
    exitcond154_fu_21093_p2 = (!h57_reg_9972.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h57_reg_9972.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond155_fu_21385_p2() {
    exitcond155_fu_21385_p2 = (!co77_reg_10027.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co77_reg_10027.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond156_fu_21252_p2() {
    exitcond156_fu_21252_p2 = (!h59_reg_10005.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h59_reg_10005.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond157_fu_21144_p2() {
    exitcond157_fu_21144_p2 = (!w62_reg_9983.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w62_reg_9983.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond158_fu_21721_p2() {
    exitcond158_fu_21721_p2 = (!i61_reg_10060.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i61_reg_10060.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond159_fu_21453_p2() {
    exitcond159_fu_21453_p2 = (!ci38_reg_10038.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci38_reg_10038.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond160_fu_21342_p2() {
    exitcond160_fu_21342_p2 = (!w64_reg_10016.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w64_reg_10016.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond161_fu_21825_p2() {
    exitcond161_fu_21825_p2 = (!co79_reg_10082.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co79_reg_10082.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond162_fu_21733_p2() {
    exitcond162_fu_21733_p2 = (!k20_reg_10071.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k20_reg_10071.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond163_fu_21474_p2() {
    exitcond163_fu_21474_p2 = (!i63_reg_10049.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i63_reg_10049.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond164_fu_22062_p2() {
    exitcond164_fu_22062_p2 = (!i64_reg_10126.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i64_reg_10126.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond165_fu_21845_p2() {
    exitcond165_fu_21845_p2 = (!w66_reg_10093.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w66_reg_10093.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond166_fu_22166_p2() {
    exitcond166_fu_22166_p2 = (!co81_reg_10148.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co81_reg_10148.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond167_fu_22074_p2() {
    exitcond167_fu_22074_p2 = (!k22_reg_10137.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k22_reg_10137.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond168_fu_21865_p2() {
    exitcond168_fu_21865_p2 = (!h61_reg_10104.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h61_reg_10104.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond169_fu_22502_p2() {
    exitcond169_fu_22502_p2 = (!i66_reg_10181.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i66_reg_10181.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond170_fu_22234_p2() {
    exitcond170_fu_22234_p2 = (!ci40_reg_10159.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci40_reg_10159.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond171_fu_21877_p2() {
    exitcond171_fu_21877_p2 = (!i68_reg_10115.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i68_reg_10115.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond172_fu_22632_p2() {
    exitcond172_fu_22632_p2 = (!co83_reg_10203.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co83_reg_10203.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond173_fu_22514_p2() {
    exitcond173_fu_22514_p2 = (!k24_reg_10192.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k24_reg_10192.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond174_fu_22255_p2() {
    exitcond174_fu_22255_p2 = (!i70_reg_10170.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i70_reg_10170.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond175_fu_22755_p2() {
    exitcond175_fu_22755_p2 = (!co85_reg_10236.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co85_reg_10236.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond176_fu_22644_p2() {
    exitcond176_fu_22644_p2 = (!h63_reg_10214.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h63_reg_10214.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond177_fu_22936_p2() {
    exitcond177_fu_22936_p2 = (!co87_reg_10269.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co87_reg_10269.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond178_fu_22803_p2() {
    exitcond178_fu_22803_p2 = (!h65_reg_10247.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h65_reg_10247.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond179_fu_22695_p2() {
    exitcond179_fu_22695_p2 = (!w68_reg_10225.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w68_reg_10225.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond180_fu_23280_p2() {
    exitcond180_fu_23280_p2 = (!i72_reg_10302.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i72_reg_10302.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond181_fu_23004_p2() {
    exitcond181_fu_23004_p2 = (!ci42_reg_10280.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci42_reg_10280.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond182_fu_22893_p2() {
    exitcond182_fu_22893_p2 = (!w70_reg_10258.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w70_reg_10258.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond183_fu_23388_p2() {
    exitcond183_fu_23388_p2 = (!co89_reg_10324.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co89_reg_10324.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond184_fu_23292_p2() {
    exitcond184_fu_23292_p2 = (!k26_reg_10313.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k26_reg_10313.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond185_fu_23025_p2() {
    exitcond185_fu_23025_p2 = (!i74_reg_10291.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i74_reg_10291.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond186_fu_23621_p2() {
    exitcond186_fu_23621_p2 = (!i75_reg_10368.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i75_reg_10368.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond187_fu_23408_p2() {
    exitcond187_fu_23408_p2 = (!w72_reg_10335.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w72_reg_10335.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond188_fu_23725_p2() {
    exitcond188_fu_23725_p2 = (!co91_reg_10390.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co91_reg_10390.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond189_fu_23633_p2() {
    exitcond189_fu_23633_p2 = (!k28_reg_10379.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k28_reg_10379.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond190_fu_23428_p2() {
    exitcond190_fu_23428_p2 = (!h67_reg_10346.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h67_reg_10346.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond191_fu_24061_p2() {
    exitcond191_fu_24061_p2 = (!i77_reg_10423.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i77_reg_10423.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond192_fu_23793_p2() {
    exitcond192_fu_23793_p2 = (!ci44_reg_10401.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci44_reg_10401.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond193_fu_23440_p2() {
    exitcond193_fu_23440_p2 = (!i79_reg_10357.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i79_reg_10357.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond194_fu_24191_p2() {
    exitcond194_fu_24191_p2 = (!co93_reg_10445.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co93_reg_10445.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond195_fu_24073_p2() {
    exitcond195_fu_24073_p2 = (!k30_reg_10434.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k30_reg_10434.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond196_fu_23814_p2() {
    exitcond196_fu_23814_p2 = (!i81_reg_10412.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i81_reg_10412.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond197_fu_24314_p2() {
    exitcond197_fu_24314_p2 = (!co95_reg_10478.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co95_reg_10478.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond198_fu_24203_p2() {
    exitcond198_fu_24203_p2 = (!h69_reg_10456.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h69_reg_10456.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond199_fu_24495_p2() {
    exitcond199_fu_24495_p2 = (!co97_reg_10511.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co97_reg_10511.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond200_fu_24362_p2() {
    exitcond200_fu_24362_p2 = (!h71_reg_10489.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h71_reg_10489.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond201_fu_24254_p2() {
    exitcond201_fu_24254_p2 = (!w74_reg_10467.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w74_reg_10467.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond202_fu_24831_p2() {
    exitcond202_fu_24831_p2 = (!i83_reg_10544.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i83_reg_10544.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond203_fu_24563_p2() {
    exitcond203_fu_24563_p2 = (!ci46_reg_10522.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci46_reg_10522.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond204_fu_24452_p2() {
    exitcond204_fu_24452_p2 = (!w76_reg_10500.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w76_reg_10500.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond205_fu_24935_p2() {
    exitcond205_fu_24935_p2 = (!co99_reg_10566.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co99_reg_10566.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond206_fu_24843_p2() {
    exitcond206_fu_24843_p2 = (!k32_reg_10555.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k32_reg_10555.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond207_fu_24584_p2() {
    exitcond207_fu_24584_p2 = (!i85_reg_10533.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i85_reg_10533.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond208_fu_25168_p2() {
    exitcond208_fu_25168_p2 = (!i86_reg_10610.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i86_reg_10610.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond209_fu_24955_p2() {
    exitcond209_fu_24955_p2 = (!w78_reg_10577.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w78_reg_10577.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond210_fu_25268_p2() {
    exitcond210_fu_25268_p2 = (!co101_reg_10632.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co101_reg_10632.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond211_fu_25180_p2() {
    exitcond211_fu_25180_p2 = (!k34_reg_10621.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k34_reg_10621.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond212_fu_24975_p2() {
    exitcond212_fu_24975_p2 = (!h73_reg_10588.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h73_reg_10588.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond213_fu_25604_p2() {
    exitcond213_fu_25604_p2 = (!i88_reg_10665.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i88_reg_10665.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond214_fu_25336_p2() {
    exitcond214_fu_25336_p2 = (!ci48_reg_10643.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci48_reg_10643.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond215_fu_24987_p2() {
    exitcond215_fu_24987_p2 = (!i90_reg_10599.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i90_reg_10599.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond216_fu_25730_p2() {
    exitcond216_fu_25730_p2 = (!co103_reg_10687.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co103_reg_10687.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond217_fu_25616_p2() {
    exitcond217_fu_25616_p2 = (!k36_reg_10676.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k36_reg_10676.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond218_fu_25357_p2() {
    exitcond218_fu_25357_p2 = (!i92_reg_10654.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i92_reg_10654.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond219_fu_25853_p2() {
    exitcond219_fu_25853_p2 = (!co105_reg_10720.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co105_reg_10720.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond220_fu_25742_p2() {
    exitcond220_fu_25742_p2 = (!h75_reg_10698.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h75_reg_10698.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond221_fu_26034_p2() {
    exitcond221_fu_26034_p2 = (!co107_reg_10753.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co107_reg_10753.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond222_fu_25901_p2() {
    exitcond222_fu_25901_p2 = (!h77_reg_10731.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h77_reg_10731.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond223_fu_25793_p2() {
    exitcond223_fu_25793_p2 = (!w80_reg_10709.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w80_reg_10709.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond224_fu_26370_p2() {
    exitcond224_fu_26370_p2 = (!i94_reg_10786.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i94_reg_10786.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond225_fu_26102_p2() {
    exitcond225_fu_26102_p2 = (!ci50_reg_10764.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci50_reg_10764.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond226_fu_25991_p2() {
    exitcond226_fu_25991_p2 = (!w82_reg_10742.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w82_reg_10742.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond227_fu_26474_p2() {
    exitcond227_fu_26474_p2 = (!co109_reg_10808.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co109_reg_10808.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond228_fu_26382_p2() {
    exitcond228_fu_26382_p2 = (!k38_reg_10797.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k38_reg_10797.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond229_fu_26123_p2() {
    exitcond229_fu_26123_p2 = (!i96_reg_10775.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i96_reg_10775.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond230_fu_26715_p2() {
    exitcond230_fu_26715_p2 = (!i97_reg_10852.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i97_reg_10852.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond231_fu_26494_p2() {
    exitcond231_fu_26494_p2 = (!w84_reg_10819.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w84_reg_10819.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond232_fu_26815_p2() {
    exitcond232_fu_26815_p2 = (!co111_reg_10874.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co111_reg_10874.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond233_fu_26727_p2() {
    exitcond233_fu_26727_p2 = (!k40_reg_10863.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k40_reg_10863.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond234_fu_26514_p2() {
    exitcond234_fu_26514_p2 = (!h79_reg_10830.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h79_reg_10830.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond235_fu_27151_p2() {
    exitcond235_fu_27151_p2 = (!i99_reg_10907.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i99_reg_10907.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond236_fu_26883_p2() {
    exitcond236_fu_26883_p2 = (!ci52_reg_10885.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci52_reg_10885.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond237_fu_26526_p2() {
    exitcond237_fu_26526_p2 = (!i101_reg_10841.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i101_reg_10841.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond238_fu_27277_p2() {
    exitcond238_fu_27277_p2 = (!co113_reg_10929.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co113_reg_10929.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond239_fu_27163_p2() {
    exitcond239_fu_27163_p2 = (!k42_reg_10918.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k42_reg_10918.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond240_fu_26904_p2() {
    exitcond240_fu_26904_p2 = (!i103_reg_10896.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i103_reg_10896.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond241_fu_27400_p2() {
    exitcond241_fu_27400_p2 = (!co115_reg_10962.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co115_reg_10962.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond242_fu_27289_p2() {
    exitcond242_fu_27289_p2 = (!h81_reg_10940.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h81_reg_10940.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond243_fu_27581_p2() {
    exitcond243_fu_27581_p2 = (!co117_reg_10995.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co117_reg_10995.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond244_fu_27448_p2() {
    exitcond244_fu_27448_p2 = (!h83_reg_10973.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h83_reg_10973.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond245_fu_27340_p2() {
    exitcond245_fu_27340_p2 = (!w86_reg_10951.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w86_reg_10951.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond246_fu_27917_p2() {
    exitcond246_fu_27917_p2 = (!i105_reg_11028.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i105_reg_11028.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond247_fu_27649_p2() {
    exitcond247_fu_27649_p2 = (!ci54_reg_11006.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci54_reg_11006.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond248_fu_27538_p2() {
    exitcond248_fu_27538_p2 = (!w88_reg_10984.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w88_reg_10984.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond249_fu_28021_p2() {
    exitcond249_fu_28021_p2 = (!co119_reg_11050.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co119_reg_11050.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond250_fu_27929_p2() {
    exitcond250_fu_27929_p2 = (!k44_reg_11039.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k44_reg_11039.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond251_fu_27670_p2() {
    exitcond251_fu_27670_p2 = (!i107_reg_11017.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i107_reg_11017.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond252_fu_28266_p2() {
    exitcond252_fu_28266_p2 = (!i108_reg_11094.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i108_reg_11094.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond253_fu_28041_p2() {
    exitcond253_fu_28041_p2 = (!w90_reg_11061.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w90_reg_11061.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond254_fu_28366_p2() {
    exitcond254_fu_28366_p2 = (!co121_reg_11116.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co121_reg_11116.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond255_fu_28278_p2() {
    exitcond255_fu_28278_p2 = (!k46_reg_11105.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k46_reg_11105.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond256_fu_28061_p2() {
    exitcond256_fu_28061_p2 = (!h85_reg_11072.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h85_reg_11072.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond257_fu_28702_p2() {
    exitcond257_fu_28702_p2 = (!i110_reg_11149.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i110_reg_11149.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond258_fu_28434_p2() {
    exitcond258_fu_28434_p2 = (!ci56_reg_11127.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci56_reg_11127.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond259_fu_28073_p2() {
    exitcond259_fu_28073_p2 = (!i112_reg_11083.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i112_reg_11083.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond260_fu_28828_p2() {
    exitcond260_fu_28828_p2 = (!co123_reg_11171.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co123_reg_11171.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond261_fu_28714_p2() {
    exitcond261_fu_28714_p2 = (!k48_reg_11160.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k48_reg_11160.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond262_fu_28455_p2() {
    exitcond262_fu_28455_p2 = (!i114_reg_11138.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i114_reg_11138.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond263_fu_28951_p2() {
    exitcond263_fu_28951_p2 = (!co125_reg_11204.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co125_reg_11204.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond264_fu_28840_p2() {
    exitcond264_fu_28840_p2 = (!h87_reg_11182.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h87_reg_11182.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond265_fu_29132_p2() {
    exitcond265_fu_29132_p2 = (!co127_reg_11237.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co127_reg_11237.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond266_fu_28999_p2() {
    exitcond266_fu_28999_p2 = (!h89_reg_11215.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h89_reg_11215.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond267_fu_28891_p2() {
    exitcond267_fu_28891_p2 = (!w92_reg_11193.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w92_reg_11193.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond268_fu_29476_p2() {
    exitcond268_fu_29476_p2 = (!i116_reg_11270.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i116_reg_11270.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond269_fu_29200_p2() {
    exitcond269_fu_29200_p2 = (!ci58_reg_11248.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci58_reg_11248.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond270_fu_29089_p2() {
    exitcond270_fu_29089_p2 = (!w94_reg_11226.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w94_reg_11226.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond271_fu_29580_p2() {
    exitcond271_fu_29580_p2 = (!co129_reg_11292.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co129_reg_11292.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond272_fu_29488_p2() {
    exitcond272_fu_29488_p2 = (!k50_reg_11281.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k50_reg_11281.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond273_fu_29221_p2() {
    exitcond273_fu_29221_p2 = (!i118_reg_11259.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i118_reg_11259.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond274_fu_29817_p2() {
    exitcond274_fu_29817_p2 = (!i119_reg_11336.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i119_reg_11336.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond275_fu_29600_p2() {
    exitcond275_fu_29600_p2 = (!w96_reg_11303.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w96_reg_11303.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond276_fu_29917_p2() {
    exitcond276_fu_29917_p2 = (!co131_reg_11358.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co131_reg_11358.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond277_fu_29829_p2() {
    exitcond277_fu_29829_p2 = (!k52_reg_11347.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k52_reg_11347.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond278_fu_29620_p2() {
    exitcond278_fu_29620_p2 = (!h91_reg_11314.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h91_reg_11314.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond279_fu_30261_p2() {
    exitcond279_fu_30261_p2 = (!i121_reg_11391.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i121_reg_11391.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond280_fu_29985_p2() {
    exitcond280_fu_29985_p2 = (!ci60_reg_11369.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci60_reg_11369.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond281_fu_29632_p2() {
    exitcond281_fu_29632_p2 = (!i123_reg_11325.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i123_reg_11325.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond282_fu_30391_p2() {
    exitcond282_fu_30391_p2 = (!co133_reg_11413.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co133_reg_11413.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond283_fu_30273_p2() {
    exitcond283_fu_30273_p2 = (!k54_reg_11402.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k54_reg_11402.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond284_fu_30006_p2() {
    exitcond284_fu_30006_p2 = (!i125_reg_11380.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i125_reg_11380.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond285_fu_30514_p2() {
    exitcond285_fu_30514_p2 = (!co135_reg_11446.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co135_reg_11446.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond286_fu_30403_p2() {
    exitcond286_fu_30403_p2 = (!h93_reg_11424.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h93_reg_11424.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond287_fu_30695_p2() {
    exitcond287_fu_30695_p2 = (!co137_reg_11479.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co137_reg_11479.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond288_fu_30562_p2() {
    exitcond288_fu_30562_p2 = (!h95_reg_11457.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h95_reg_11457.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond289_fu_30454_p2() {
    exitcond289_fu_30454_p2 = (!w98_reg_11435.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w98_reg_11435.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond290_fu_31039_p2() {
    exitcond290_fu_31039_p2 = (!i127_reg_11512.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i127_reg_11512.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond291_fu_30763_p2() {
    exitcond291_fu_30763_p2 = (!ci62_reg_11490.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci62_reg_11490.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond292_fu_30652_p2() {
    exitcond292_fu_30652_p2 = (!w100_reg_11468.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w100_reg_11468.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond293_fu_31147_p2() {
    exitcond293_fu_31147_p2 = (!co139_reg_11534.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co139_reg_11534.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond294_fu_31051_p2() {
    exitcond294_fu_31051_p2 = (!k56_reg_11523.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k56_reg_11523.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond295_fu_30784_p2() {
    exitcond295_fu_30784_p2 = (!i129_reg_11501.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i129_reg_11501.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond296_fu_31380_p2() {
    exitcond296_fu_31380_p2 = (!i130_reg_11578.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i130_reg_11578.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond297_fu_31167_p2() {
    exitcond297_fu_31167_p2 = (!w102_reg_11545.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w102_reg_11545.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond298_fu_31484_p2() {
    exitcond298_fu_31484_p2 = (!co141_reg_11600.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co141_reg_11600.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond299_fu_38618_p2() {
    exitcond299_fu_38618_p2 = (!h123_reg_12733.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h123_reg_12733.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond300_fu_38557_p2() {
    exitcond300_fu_38557_p2 = (!w126_reg_12722.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w126_reg_12722.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond301_fu_38528_p2() {
    exitcond301_fu_38528_p2 = (!ci83_reg_12711.read().is_01() || !ap_const_lv8_C0.is_01())? sc_lv<1>(): sc_lv<1>(ci83_reg_12711.read() == ap_const_lv8_C0);
}

void ShuffleNetV2::thread_exitcond302_fu_38456_p2() {
    exitcond302_fu_38456_p2 = (!w127_reg_12700.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w127_reg_12700.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond303_fu_38405_p2() {
    exitcond303_fu_38405_p2 = (!h121_reg_12689.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h121_reg_12689.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond304_fu_38393_p2() {
    exitcond304_fu_38393_p2 = (!co183_reg_12678.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co183_reg_12678.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond305_fu_38275_p2() {
    exitcond305_fu_38275_p2 = (!k88_reg_12667.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k88_reg_12667.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond306_fu_38263_p2() {
    exitcond306_fu_38263_p2 = (!i183_reg_12656.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i183_reg_12656.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond307_fu_38038_p2() {
    exitcond307_fu_38038_p2 = (!i187_reg_12645.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i187_reg_12645.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond308_fu_38017_p2() {
    exitcond308_fu_38017_p2 = (!ci82_reg_12634.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci82_reg_12634.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond309_fu_37951_p2() {
    exitcond309_fu_37951_p2 = (!co181_reg_12623.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co181_reg_12623.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond310_fu_37863_p2() {
    exitcond310_fu_37863_p2 = (!k86_reg_12612.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k86_reg_12612.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond311_fu_37851_p2() {
    exitcond311_fu_37851_p2 = (!i181_reg_12601.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i181_reg_12601.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond312_fu_37666_p2() {
    exitcond312_fu_37666_p2 = (!i185_reg_12590.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i185_reg_12590.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond313_fu_37654_p2() {
    exitcond313_fu_37654_p2 = (!h119_reg_12579.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h119_reg_12579.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond314_fu_37634_p2() {
    exitcond314_fu_37634_p2 = (!w124_reg_12568.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w124_reg_12568.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond315_fu_37614_p2() {
    exitcond315_fu_37614_p2 = (!co179_reg_12557.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co179_reg_12557.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond316_fu_37522_p2() {
    exitcond316_fu_37522_p2 = (!k84_reg_12546.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k84_reg_12546.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond317_fu_37510_p2() {
    exitcond317_fu_37510_p2 = (!i178_reg_12535.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i178_reg_12535.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond318_fu_37285_p2() {
    exitcond318_fu_37285_p2 = (!i180_reg_12524.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i180_reg_12524.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond319_fu_37264_p2() {
    exitcond319_fu_37264_p2 = (!ci80_reg_12513.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci80_reg_12513.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond320_fu_37198_p2() {
    exitcond320_fu_37198_p2 = (!co177_reg_12502.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co177_reg_12502.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond321_fu_37155_p2() {
    exitcond321_fu_37155_p2 = (!w122_reg_12491.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w122_reg_12491.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond322_fu_37073_p2() {
    exitcond322_fu_37073_p2 = (!h117_reg_12480.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h117_reg_12480.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond323_fu_37021_p2() {
    exitcond323_fu_37021_p2 = (!co175_reg_12469.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co175_reg_12469.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond324_fu_36957_p2() {
    exitcond324_fu_36957_p2 = (!w120_reg_12458.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w120_reg_12458.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond325_fu_36906_p2() {
    exitcond325_fu_36906_p2 = (!h115_reg_12447.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h115_reg_12447.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond326_fu_36894_p2() {
    exitcond326_fu_36894_p2 = (!co173_reg_12436.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co173_reg_12436.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond327_fu_36776_p2() {
    exitcond327_fu_36776_p2 = (!k82_reg_12425.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k82_reg_12425.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond328_fu_36764_p2() {
    exitcond328_fu_36764_p2 = (!i172_reg_12414.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i172_reg_12414.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond329_fu_36539_p2() {
    exitcond329_fu_36539_p2 = (!i176_reg_12403.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i176_reg_12403.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond330_fu_36518_p2() {
    exitcond330_fu_36518_p2 = (!ci78_reg_12392.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci78_reg_12392.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond331_fu_36452_p2() {
    exitcond331_fu_36452_p2 = (!co171_reg_12381.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co171_reg_12381.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond332_fu_36364_p2() {
    exitcond332_fu_36364_p2 = (!k80_reg_12370.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k80_reg_12370.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond333_fu_36352_p2() {
    exitcond333_fu_36352_p2 = (!i170_reg_12359.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i170_reg_12359.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond334_fu_36159_p2() {
    exitcond334_fu_36159_p2 = (!i174_reg_12348.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i174_reg_12348.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond335_fu_36147_p2() {
    exitcond335_fu_36147_p2 = (!h113_reg_12337.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h113_reg_12337.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond336_fu_36127_p2() {
    exitcond336_fu_36127_p2 = (!w118_reg_12326.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w118_reg_12326.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond337_fu_36107_p2() {
    exitcond337_fu_36107_p2 = (!co169_reg_12315.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co169_reg_12315.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond338_fu_36015_p2() {
    exitcond338_fu_36015_p2 = (!k78_reg_12304.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k78_reg_12304.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond339_fu_36003_p2() {
    exitcond339_fu_36003_p2 = (!i167_reg_12293.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i167_reg_12293.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond340_fu_35778_p2() {
    exitcond340_fu_35778_p2 = (!i169_reg_12282.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i169_reg_12282.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond341_fu_35757_p2() {
    exitcond341_fu_35757_p2 = (!ci76_reg_12271.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci76_reg_12271.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond342_fu_35691_p2() {
    exitcond342_fu_35691_p2 = (!co167_reg_12260.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co167_reg_12260.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond343_fu_35648_p2() {
    exitcond343_fu_35648_p2 = (!w116_reg_12249.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w116_reg_12249.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond344_fu_35566_p2() {
    exitcond344_fu_35566_p2 = (!h111_reg_12238.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h111_reg_12238.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond345_fu_35514_p2() {
    exitcond345_fu_35514_p2 = (!co165_reg_12227.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co165_reg_12227.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond346_fu_35450_p2() {
    exitcond346_fu_35450_p2 = (!w114_reg_12216.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w114_reg_12216.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond347_fu_35399_p2() {
    exitcond347_fu_35399_p2 = (!h109_reg_12205.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h109_reg_12205.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond348_fu_35387_p2() {
    exitcond348_fu_35387_p2 = (!co163_reg_12194.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co163_reg_12194.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond349_fu_35269_p2() {
    exitcond349_fu_35269_p2 = (!k76_reg_12183.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k76_reg_12183.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond350_fu_35257_p2() {
    exitcond350_fu_35257_p2 = (!i161_reg_12172.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i161_reg_12172.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond351_fu_35024_p2() {
    exitcond351_fu_35024_p2 = (!i165_reg_12161.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i165_reg_12161.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond352_fu_35003_p2() {
    exitcond352_fu_35003_p2 = (!ci74_reg_12150.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci74_reg_12150.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond353_fu_34937_p2() {
    exitcond353_fu_34937_p2 = (!co161_reg_12139.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co161_reg_12139.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond354_fu_34849_p2() {
    exitcond354_fu_34849_p2 = (!k74_reg_12128.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k74_reg_12128.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond355_fu_34837_p2() {
    exitcond355_fu_34837_p2 = (!i159_reg_12117.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i159_reg_12117.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond356_fu_34656_p2() {
    exitcond356_fu_34656_p2 = (!i163_reg_12106.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i163_reg_12106.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond357_fu_34644_p2() {
    exitcond357_fu_34644_p2 = (!h107_reg_12095.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h107_reg_12095.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond358_fu_34624_p2() {
    exitcond358_fu_34624_p2 = (!w112_reg_12084.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w112_reg_12084.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond359_fu_34604_p2() {
    exitcond359_fu_34604_p2 = (!co159_reg_12073.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co159_reg_12073.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond360_fu_34512_p2() {
    exitcond360_fu_34512_p2 = (!k72_reg_12062.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k72_reg_12062.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond361_fu_34500_p2() {
    exitcond361_fu_34500_p2 = (!i156_reg_12051.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i156_reg_12051.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond362_fu_34275_p2() {
    exitcond362_fu_34275_p2 = (!i158_reg_12040.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i158_reg_12040.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond363_fu_34254_p2() {
    exitcond363_fu_34254_p2 = (!ci72_reg_12029.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci72_reg_12029.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond364_fu_34188_p2() {
    exitcond364_fu_34188_p2 = (!co157_reg_12018.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co157_reg_12018.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond365_fu_34145_p2() {
    exitcond365_fu_34145_p2 = (!w110_reg_12007.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w110_reg_12007.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond366_fu_34063_p2() {
    exitcond366_fu_34063_p2 = (!h105_reg_11996.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h105_reg_11996.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond367_fu_34011_p2() {
    exitcond367_fu_34011_p2 = (!co155_reg_11985.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co155_reg_11985.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond368_fu_33889_p2() {
    exitcond368_fu_33889_p2 = (!k70_reg_11974.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k70_reg_11974.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond369_fu_33877_p2() {
    exitcond369_fu_33877_p2 = (!i150_reg_11963.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i150_reg_11963.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond36_fu_14291_p2() {
    exitcond36_fu_14291_p2 = (!i1_reg_8676.read().is_01() || !ap_const_lv10_200.is_01())? sc_lv<1>(): sc_lv<1>(i1_reg_8676.read() == ap_const_lv10_200);
}

void ShuffleNetV2::thread_exitcond370_fu_33652_p2() {
    exitcond370_fu_33652_p2 = (!i154_reg_11952.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i154_reg_11952.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond371_fu_33631_p2() {
    exitcond371_fu_33631_p2 = (!ci70_reg_11941.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci70_reg_11941.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond372_fu_33565_p2() {
    exitcond372_fu_33565_p2 = (!co153_reg_11930.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co153_reg_11930.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond373_fu_33477_p2() {
    exitcond373_fu_33477_p2 = (!k68_reg_11919.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k68_reg_11919.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond374_fu_33465_p2() {
    exitcond374_fu_33465_p2 = (!i148_reg_11908.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i148_reg_11908.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond375_fu_33284_p2() {
    exitcond375_fu_33284_p2 = (!i152_reg_11897.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i152_reg_11897.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond376_fu_33272_p2() {
    exitcond376_fu_33272_p2 = (!h103_reg_11886.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h103_reg_11886.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond377_fu_33252_p2() {
    exitcond377_fu_33252_p2 = (!w108_reg_11875.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w108_reg_11875.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond378_fu_33232_p2() {
    exitcond378_fu_33232_p2 = (!co151_reg_11864.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co151_reg_11864.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond379_fu_33132_p2() {
    exitcond379_fu_33132_p2 = (!k66_reg_11853.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k66_reg_11853.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond37_fu_14318_p2() {
    exitcond37_fu_14318_p2 = (!i2_reg_8687.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i2_reg_8687.read() == ap_const_lv4_A);
}

void ShuffleNetV2::thread_exitcond380_fu_33120_p2() {
    exitcond380_fu_33120_p2 = (!i143_reg_11842.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i143_reg_11842.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond381_fu_32895_p2() {
    exitcond381_fu_32895_p2 = (!i147_reg_11831.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i147_reg_11831.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond382_fu_32874_p2() {
    exitcond382_fu_32874_p2 = (!ci68_reg_11820.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci68_reg_11820.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond383_fu_32808_p2() {
    exitcond383_fu_32808_p2 = (!co149_reg_11809.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co149_reg_11809.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond384_fu_32716_p2() {
    exitcond384_fu_32716_p2 = (!k64_reg_11798.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k64_reg_11798.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond385_fu_32704_p2() {
    exitcond385_fu_32704_p2 = (!i141_reg_11787.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i141_reg_11787.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond386_fu_32523_p2() {
    exitcond386_fu_32523_p2 = (!i145_reg_11776.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i145_reg_11776.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond387_fu_32511_p2() {
    exitcond387_fu_32511_p2 = (!h101_reg_11765.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h101_reg_11765.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond388_fu_32491_p2() {
    exitcond388_fu_32491_p2 = (!w106_reg_11754.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w106_reg_11754.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond389_fu_32471_p2() {
    exitcond389_fu_32471_p2 = (!co147_reg_11743.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co147_reg_11743.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond38_fu_14360_p2() {
    exitcond38_fu_14360_p2 = (!ci_reg_8698.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(ci_reg_8698.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond390_fu_32375_p2() {
    exitcond390_fu_32375_p2 = (!k62_reg_11732.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k62_reg_11732.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond391_fu_32363_p2() {
    exitcond391_fu_32363_p2 = (!i138_reg_11721.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i138_reg_11721.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond392_fu_32138_p2() {
    exitcond392_fu_32138_p2 = (!i140_reg_11710.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i140_reg_11710.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond393_fu_32117_p2() {
    exitcond393_fu_32117_p2 = (!ci66_reg_11699.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci66_reg_11699.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond394_fu_32051_p2() {
    exitcond394_fu_32051_p2 = (!co145_reg_11688.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co145_reg_11688.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond395_fu_32021_p2() {
    exitcond395_fu_32021_p2 = (!w104_reg_11677.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w104_reg_11677.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond396_fu_31970_p2() {
    exitcond396_fu_31970_p2 = (!h99_reg_11666.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h99_reg_11666.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond397_fu_31958_p2() {
    exitcond397_fu_31958_p2 = (!co143_reg_11655.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co143_reg_11655.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond398_fu_31840_p2() {
    exitcond398_fu_31840_p2 = (!k60_reg_11644.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k60_reg_11644.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond399_fu_31828_p2() {
    exitcond399_fu_31828_p2 = (!i132_reg_11633.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i132_reg_11633.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond39_fu_14504_p2() {
    exitcond39_fu_14504_p2 = (!co_reg_8731.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co_reg_8731.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond400_fu_31573_p2() {
    exitcond400_fu_31573_p2 = (!i136_reg_11622.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i136_reg_11622.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond401_fu_31552_p2() {
    exitcond401_fu_31552_p2 = (!ci64_reg_11611.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci64_reg_11611.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond402_fu_31392_p2() {
    exitcond402_fu_31392_p2 = (!k58_reg_11589.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k58_reg_11589.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond403_fu_31187_p2() {
    exitcond403_fu_31187_p2 = (!h97_reg_11556.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h97_reg_11556.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond404_fu_31199_p2() {
    exitcond404_fu_31199_p2 = (!i134_reg_11567.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i134_reg_11567.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond40_fu_14393_p2() {
    exitcond40_fu_14393_p2 = (!w_reg_8709.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(w_reg_8709.read() == ap_const_lv6_20);
}

void ShuffleNetV2::thread_exitcond41_fu_14586_p2() {
    exitcond41_fu_14586_p2 = (!i4_reg_8754.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i4_reg_8754.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond42_fu_14570_p2() {
    exitcond42_fu_14570_p2 = (!ci3_reg_8743.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci3_reg_8743.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond43_fu_14449_p2() {
    exitcond43_fu_14449_p2 = (!h_reg_8720.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(h_reg_8720.read() == ap_const_lv6_20);
}

void ShuffleNetV2::thread_exitcond44_fu_14624_p2() {
    exitcond44_fu_14624_p2 = (!co5_reg_8765.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co5_reg_8765.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond45_fu_14727_p2() {
    exitcond45_fu_14727_p2 = (!i8_reg_8798.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i8_reg_8798.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond46_fu_14678_p2() {
    exitcond46_fu_14678_p2 = (!w6_reg_8776.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w6_reg_8776.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond47_fu_14743_p2() {
    exitcond47_fu_14743_p2 = (!co9_reg_8809.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co9_reg_8809.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond48_fu_14711_p2() {
    exitcond48_fu_14711_p2 = (!h7_reg_8787.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h7_reg_8787.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond49_fu_14861_p2() {
    exitcond49_fu_14861_p2 = (!i11_reg_8832.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i11_reg_8832.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond50_fu_14845_p2() {
    exitcond50_fu_14845_p2 = (!ci10_reg_8821.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci10_reg_8821.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond51_fu_14903_p2() {
    exitcond51_fu_14903_p2 = (!co12_reg_8843.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co12_reg_8843.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond52_fu_15044_p2() {
    exitcond52_fu_15044_p2 = (!tmp_1812_reg_8876.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1812_reg_8876.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond53_fu_14991_p2() {
    exitcond53_fu_14991_p2 = (!w13_reg_8854.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w13_reg_8854.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond54_fu_15087_p2() {
    exitcond54_fu_15087_p2 = (!co16_reg_8887.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co16_reg_8887.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond55_fu_15028_p2() {
    exitcond55_fu_15028_p2 = (!h14_reg_8865.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h14_reg_8865.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond56_fu_15205_p2() {
    exitcond56_fu_15205_p2 = (!i14_reg_8910.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i14_reg_8910.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond57_fu_15189_p2() {
    exitcond57_fu_15189_p2 = (!ci14_reg_8899.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci14_reg_8899.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond58_fu_15251_p2() {
    exitcond58_fu_15251_p2 = (!co19_reg_8921.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co19_reg_8921.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond59_fu_15424_p2() {
    exitcond59_fu_15424_p2 = (!co22_reg_8954.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co22_reg_8954.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond60_fu_15299_p2() {
    exitcond60_fu_15299_p2 = (!h20_reg_8932.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h20_reg_8932.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond61_fu_15542_p2() {
    exitcond61_fu_15542_p2 = (!i16_reg_8977.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i16_reg_8977.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond62_fu_15526_p2() {
    exitcond62_fu_15526_p2 = (!ci16_reg_8966.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci16_reg_8966.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond63_fu_15381_p2() {
    exitcond63_fu_15381_p2 = (!w21_reg_8943.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w21_reg_8943.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond64_fu_15584_p2() {
    exitcond64_fu_15584_p2 = (!co25_reg_8988.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co25_reg_8988.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond65_fu_15740_p2() {
    exitcond65_fu_15740_p2 = (!i18_reg_9021.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i18_reg_9021.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond66_fu_15687_p2() {
    exitcond66_fu_15687_p2 = (!w26_reg_8999.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w26_reg_8999.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond67_fu_15752_p2() {
    exitcond67_fu_15752_p2 = (!co29_reg_9032.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co29_reg_9032.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond68_fu_15724_p2() {
    exitcond68_fu_15724_p2 = (!h27_reg_9010.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h27_reg_9010.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond69_fu_15865_p2() {
    exitcond69_fu_15865_p2 = (!tmp_1892_reg_9055.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1892_reg_9055.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond70_fu_15849_p2() {
    exitcond70_fu_15849_p2 = (!ci18_reg_9044.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci18_reg_9044.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond71_fu_15934_p2() {
    exitcond71_fu_15934_p2 = (!co32_reg_9066.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co32_reg_9066.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond72_fu_16057_p2() {
    exitcond72_fu_16057_p2 = (!co35_reg_9099.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co35_reg_9099.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond73_fu_15946_p2() {
    exitcond73_fu_15946_p2 = (!h33_reg_9077.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h33_reg_9077.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond74_fu_16230_p2() {
    exitcond74_fu_16230_p2 = (!co38_reg_9132.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co38_reg_9132.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond75_fu_16105_p2() {
    exitcond75_fu_16105_p2 = (!h36_reg_9110.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h36_reg_9110.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond76_fu_15997_p2() {
    exitcond76_fu_15997_p2 = (!w34_reg_9088.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w34_reg_9088.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond77_fu_16348_p2() {
    exitcond77_fu_16348_p2 = (!i21_reg_9155.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i21_reg_9155.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond78_fu_16332_p2() {
    exitcond78_fu_16332_p2 = (!ci20_reg_9144.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci20_reg_9144.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond79_fu_16187_p2() {
    exitcond79_fu_16187_p2 = (!w37_reg_9121.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w37_reg_9121.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond80_fu_16390_p2() {
    exitcond80_fu_16390_p2 = (!co41_reg_9166.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co41_reg_9166.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond81_fu_16546_p2() {
    exitcond81_fu_16546_p2 = (!i23_reg_9199.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i23_reg_9199.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond82_fu_16493_p2() {
    exitcond82_fu_16493_p2 = (!w42_reg_9177.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w42_reg_9177.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond83_fu_16562_p2() {
    exitcond83_fu_16562_p2 = (!co43_reg_9210.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co43_reg_9210.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond84_fu_16530_p2() {
    exitcond84_fu_16530_p2 = (!h39_reg_9188.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h39_reg_9188.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond85_fu_16680_p2() {
    exitcond85_fu_16680_p2 = (!i25_reg_9233.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i25_reg_9233.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond86_fu_16664_p2() {
    exitcond86_fu_16664_p2 = (!ci22_reg_9222.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci22_reg_9222.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond87_fu_16722_p2() {
    exitcond87_fu_16722_p2 = (!co45_reg_9244.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co45_reg_9244.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond88_fu_16845_p2() {
    exitcond88_fu_16845_p2 = (!co46_reg_9277.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co46_reg_9277.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond89_fu_16734_p2() {
    exitcond89_fu_16734_p2 = (!h41_reg_9255.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h41_reg_9255.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond90_fu_17018_p2() {
    exitcond90_fu_17018_p2 = (!co48_reg_9310.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co48_reg_9310.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond91_fu_16893_p2() {
    exitcond91_fu_16893_p2 = (!h43_reg_9288.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h43_reg_9288.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond92_fu_16785_p2() {
    exitcond92_fu_16785_p2 = (!w46_reg_9266.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w46_reg_9266.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond93_fu_17125_p2() {
    exitcond93_fu_17125_p2 = (!tmp_1937_reg_9333.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1937_reg_9333.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond94_fu_17109_p2() {
    exitcond94_fu_17109_p2 = (!ci24_reg_9322.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci24_reg_9322.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond95_fu_16975_p2() {
    exitcond95_fu_16975_p2 = (!w48_reg_9299.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w48_reg_9299.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond96_fu_17186_p2() {
    exitcond96_fu_17186_p2 = (!co51_reg_9344.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co51_reg_9344.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond97_fu_17358_p2() {
    exitcond97_fu_17358_p2 = (!i28_reg_9377.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i28_reg_9377.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond98_fu_17305_p2() {
    exitcond98_fu_17305_p2 = (!w50_reg_9355.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w50_reg_9355.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond99_fu_17370_p2() {
    exitcond99_fu_17370_p2 = (!co53_reg_9388.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co53_reg_9388.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond_fu_14264_p2() {
    exitcond_fu_14264_p2 = (!i_reg_8665.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_8665.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_fc_bias_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        fc_bias_V_address0 =  (sc_lv<4>) (i2_cast_reg_39101.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read())) {
        fc_bias_V_address0 = grp_fc_fu_14163_bias_V_address0.read();
    } else {
        fc_bias_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ShuffleNetV2::thread_fc_bias_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        fc_bias_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1724.read())) {
        fc_bias_V_ce0 = grp_fc_fu_14163_bias_V_ce0.read();
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
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_2914_cast_fu_38639_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1713.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_2912_cast_fu_38477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1622.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_2844_cast_fu_37185_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1617.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_2842_cast_fu_36978_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1525.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_2769_cast_fu_35678_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1520.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_2767_cast_fu_35471_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1428.read())) {
        feature_buffer_192x6_address0 =  (sc_lv<13>) (tmp_2693_cast_fu_34175_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        feature_buffer_192x6_address0 = grp_shuffle_96_r_p_fu_14003_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        feature_buffer_192x6_address0 = grp_shuffle_96_l_p_fu_13973_output_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        feature_buffer_192x6_address0 = grp_shuffle_96_p_fu_13753_output_V_address0.read();
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
        feature_buffer_192x6_ce0 = grp_shuffle_96_r_p_fu_14003_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        feature_buffer_192x6_ce0 = grp_shuffle_96_l_p_fu_13973_output_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        feature_buffer_192x6_ce0 = grp_shuffle_96_p_fu_13753_output_V_ce0.read();
    } else {
        feature_buffer_192x6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_192x6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        feature_buffer_192x6_d0 = grp_shuffle_96_r_p_fu_14003_output_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        feature_buffer_192x6_d0 = grp_shuffle_96_l_p_fu_13973_output_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        feature_buffer_192x6_d0 = grp_shuffle_96_p_fu_13753_output_V_d0.read();
    } else {
        feature_buffer_192x6_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_feature_buffer_192x6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1425.read())) {
        feature_buffer_192x6_we0 = grp_shuffle_96_r_p_fu_14003_output_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1365.read())) {
        feature_buffer_192x6_we0 = grp_shuffle_96_l_p_fu_13973_output_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1522.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1715.read()))) {
        feature_buffer_192x6_we0 = grp_shuffle_96_p_fu_13753_output_V_we0.read();
    } else {
        feature_buffer_192x6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_48x18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_1890_cast_fu_17620_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_1861_cast_fu_17005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_1858_cast_fu_16806_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_1817_cast_fu_16217_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_1814_cast_fu_16018_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        feature_buffer_48x18_address0 =  (sc_lv<14>) (tmp_1771_cast_fu_15411_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        feature_buffer_48x18_address0 = grp_shuffle_24_r_p_fu_14087_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        feature_buffer_48x18_address0 = grp_shuffle_24_l_p_fu_14033_output_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()))) {
        feature_buffer_48x18_address0 = grp_shuffle_24_p_fu_13809_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state484.read())) {
        feature_buffer_48x18_address0 = grp_subconv_3x3_16_strid_fu_13797_input_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        feature_buffer_48x18_address0 = grp_subconv_1x1_16p_p_fu_12744_input_V_address0.read();
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
        feature_buffer_48x18_ce0 = grp_shuffle_24_r_p_fu_14087_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        feature_buffer_48x18_ce0 = grp_shuffle_24_l_p_fu_14033_output_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()))) {
        feature_buffer_48x18_ce0 = grp_shuffle_24_p_fu_13809_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state484.read())) {
        feature_buffer_48x18_ce0 = grp_subconv_3x3_16_strid_fu_13797_input_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        feature_buffer_48x18_ce0 = grp_subconv_1x1_16p_p_fu_12744_input_V_ce0.read();
    } else {
        feature_buffer_48x18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_48x18_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        feature_buffer_48x18_d0 = grp_shuffle_24_r_p_fu_14087_output_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        feature_buffer_48x18_d0 = grp_shuffle_24_l_p_fu_14033_output_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()))) {
        feature_buffer_48x18_d0 = grp_shuffle_24_p_fu_13809_output_V_d0.read();
    } else {
        feature_buffer_48x18_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_feature_buffer_48x18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        feature_buffer_48x18_we0 = grp_shuffle_24_r_p_fu_14087_output_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read())) {
        feature_buffer_48x18_we0 = grp_shuffle_24_l_p_fu_14033_output_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()))) {
        feature_buffer_48x18_we0 = grp_shuffle_24_p_fu_13809_output_V_we0.read();
    } else {
        feature_buffer_48x18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_96x10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1273.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_2594_cast_fu_32042_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1183.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_2532_cast_fu_30682_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1178.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_2530_cast_fu_30475_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1088.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_2452_cast_fu_29119_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1083.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_2450_cast_fu_28912_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state993.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_2375_cast_fu_27568_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state988.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_2373_cast_fu_27361_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state898.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_2298_cast_fu_26021_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state893.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_2296_cast_fu_25814_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state803.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_2222_cast_fu_24482_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state798.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_2220_cast_fu_24275_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_2144_cast_fu_22923_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state703.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_2142_cast_fu_22716_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state613.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_2068_cast_fu_21372_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state608.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_2066_cast_fu_21165_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state518.read())) {
        feature_buffer_96x10_address0 =  (sc_lv<14>) (tmp_1992_cast_fu_19825_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read())) {
        feature_buffer_96x10_address0 = grp_shuffle_48_r_p_fu_13919_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read())) {
        feature_buffer_96x10_address0 = grp_shuffle_48_l_p_fu_13865_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1393.read())) {
        feature_buffer_96x10_address0 = grp_subconv_3x3_8_stride_fu_13785_input_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state800.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state990.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1085.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1180.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1275.read()))) {
        feature_buffer_96x10_address0 = grp_shuffle_48_p_fu_13697_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        feature_buffer_96x10_address0 = grp_subconv_1x1_8p_p_fu_13043_input_V_address0.read();
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
        feature_buffer_96x10_ce0 = grp_shuffle_48_r_p_fu_13919_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read())) {
        feature_buffer_96x10_ce0 = grp_shuffle_48_l_p_fu_13865_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1393.read())) {
        feature_buffer_96x10_ce0 = grp_subconv_3x3_8_stride_fu_13785_input_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state800.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state990.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1085.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1180.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1275.read()))) {
        feature_buffer_96x10_ce0 = grp_shuffle_48_p_fu_13697_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        feature_buffer_96x10_ce0 = grp_subconv_1x1_8p_p_fu_13043_input_V_ce0.read();
    } else {
        feature_buffer_96x10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_feature_buffer_96x10_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read())) {
        feature_buffer_96x10_d0 = grp_shuffle_48_r_p_fu_13919_output_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read())) {
        feature_buffer_96x10_d0 = grp_shuffle_48_l_p_fu_13865_output_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state800.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state990.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1085.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1180.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1275.read()))) {
        feature_buffer_96x10_d0 = grp_shuffle_48_p_fu_13697_output_V_d0.read();
    } else {
        feature_buffer_96x10_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_feature_buffer_96x10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state515.read())) {
        feature_buffer_96x10_we0 = grp_shuffle_48_r_p_fu_13919_output_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state456.read())) {
        feature_buffer_96x10_we0 = grp_shuffle_48_l_p_fu_13865_output_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state800.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state895.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state990.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1085.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1180.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1275.read()))) {
        feature_buffer_96x10_we0 = grp_shuffle_48_p_fu_13697_output_V_we0.read();
    } else {
        feature_buffer_96x10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_avgpool_fu_14141_ap_start() {
    grp_avgpool_fu_14141_ap_start = ap_reg_grp_avgpool_fu_14141_ap_start.read();
}

void ShuffleNetV2::thread_grp_conv1_p_fu_13008_ap_start() {
    grp_conv1_p_fu_13008_ap_start = ap_reg_grp_conv1_p_fu_13008_ap_start.read();
}

void ShuffleNetV2::thread_grp_conv_last_fu_13329_ap_start() {
    grp_conv_last_fu_13329_ap_start = ap_reg_grp_conv_last_fu_13329_ap_start.read();
}

void ShuffleNetV2::thread_grp_fc_fu_14163_ap_start() {
    grp_fc_fu_14163_ap_start = ap_reg_grp_fc_fu_14163_ap_start.read();
}

void ShuffleNetV2::thread_grp_fu_17818_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state371.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond111_fu_17718_p2.read()))) {
        grp_fu_17818_ap_start = ap_const_logic_1;
    } else {
        grp_fu_17818_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_17818_ce() {
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
        grp_fu_17818_ce = ap_const_logic_1;
    } else {
        grp_fu_17818_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_17818_p0() {
    grp_fu_17818_p0 = (!tmp_163_cast_cast_fu_17764_p1.read().is_01() || !tmp_158_cast_cast_reg_41276.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_163_cast_cast_fu_17764_p1.read()) + sc_biguint<9>(tmp_158_cast_cast_reg_41276.read()));
}

void ShuffleNetV2::thread_grp_fu_17818_p1() {
    grp_fu_17818_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_18599_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state428.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond122_fu_18499_p2.read()))) {
        grp_fu_18599_ap_start = ap_const_logic_1;
    } else {
        grp_fu_18599_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_18599_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state430.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state437.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state428.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state429.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state431.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state433.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state434.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state435.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state438.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state439.read()))) {
        grp_fu_18599_ce = ap_const_logic_1;
    } else {
        grp_fu_18599_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_18599_p0() {
    grp_fu_18599_p0 = (!tmp_180_cast_cast_fu_18545_p1.read().is_01() || !tmp_172_cast_cast_reg_41536.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_180_cast_cast_fu_18545_p1.read()) + sc_biguint<9>(tmp_172_cast_cast_reg_41536.read()));
}

void ShuffleNetV2::thread_grp_fu_18599_p1() {
    grp_fu_18599_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_19380_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond133_fu_19276_p2.read()))) {
        grp_fu_19380_ap_start = ap_const_logic_1;
    } else {
        grp_fu_19380_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_19380_ce() {
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
        grp_fu_19380_ce = ap_const_logic_1;
    } else {
        grp_fu_19380_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_19380_p0() {
    grp_fu_19380_p0 = (!tmp_201_cast_cast_fu_19322_p1.read().is_01() || !tmp_189_cast_cast_reg_41796.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_201_cast_cast_fu_19322_p1.read()) + sc_biguint<9>(tmp_189_cast_cast_reg_41796.read()));
}

void ShuffleNetV2::thread_grp_fu_19380_p1() {
    grp_fu_19380_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_20027_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state522.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond141_fu_19927_p2.read()))) {
        grp_fu_20027_ap_start = ap_const_logic_1;
    } else {
        grp_fu_20027_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_20027_ce() {
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
        grp_fu_20027_ce = ap_const_logic_1;
    } else {
        grp_fu_20027_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_20027_p0() {
    grp_fu_20027_p0 = (!tmp_209_cast_cast_fu_19973_p1.read().is_01() || !tmp_200_cast_cast_reg_41977.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_209_cast_cast_fu_19973_p1.read()) + sc_biguint<9>(tmp_200_cast_cast_reg_41977.read()));
}

void ShuffleNetV2::thread_grp_fu_20027_p1() {
    grp_fu_20027_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_20808_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state579.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond152_fu_20708_p2.read()))) {
        grp_fu_20808_ap_start = ap_const_logic_1;
    } else {
        grp_fu_20808_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_20808_ce() {
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
        grp_fu_20808_ce = ap_const_logic_1;
    } else {
        grp_fu_20808_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_20808_p0() {
    grp_fu_20808_p0 = (!tmp_226_cast_cast_fu_20754_p1.read().is_01() || !tmp_218_cast_cast_reg_42237.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_226_cast_cast_fu_20754_p1.read()) + sc_biguint<9>(tmp_218_cast_cast_reg_42237.read()));
}

void ShuffleNetV2::thread_grp_fu_20808_p1() {
    grp_fu_20808_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_21574_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond163_fu_21474_p2.read()))) {
        grp_fu_21574_ap_start = ap_const_logic_1;
    } else {
        grp_fu_21574_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_21574_ce() {
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
        grp_fu_21574_ce = ap_const_logic_1;
    } else {
        grp_fu_21574_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_21574_p0() {
    grp_fu_21574_p0 = (!tmp_238_cast_cast_fu_21520_p1.read().is_01() || !tmp_233_cast_cast_reg_42462.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_238_cast_cast_fu_21520_p1.read()) + sc_biguint<9>(tmp_233_cast_cast_reg_42462.read()));
}

void ShuffleNetV2::thread_grp_fu_21574_p1() {
    grp_fu_21574_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_22355_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state674.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond174_fu_22255_p2.read()))) {
        grp_fu_22355_ap_start = ap_const_logic_1;
    } else {
        grp_fu_22355_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_22355_ce() {
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
        grp_fu_22355_ce = ap_const_logic_1;
    } else {
        grp_fu_22355_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_22355_p0() {
    grp_fu_22355_p0 = (!tmp_255_cast_cast_fu_22301_p1.read().is_01() || !tmp_247_cast_cast_reg_42722.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_255_cast_cast_fu_22301_p1.read()) + sc_biguint<9>(tmp_247_cast_cast_reg_42722.read()));
}

void ShuffleNetV2::thread_grp_fu_22355_p1() {
    grp_fu_22355_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_23125_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state712.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond185_fu_23025_p2.read()))) {
        grp_fu_23125_ap_start = ap_const_logic_1;
    } else {
        grp_fu_23125_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_23125_ce() {
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
        grp_fu_23125_ce = ap_const_logic_1;
    } else {
        grp_fu_23125_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_23125_p0() {
    grp_fu_23125_p0 = (!tmp_262_cast_cast_reg_42947.read().is_01() || !tmp_267_cast_cast_fu_23071_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_262_cast_cast_reg_42947.read()) + sc_bigint<9>(tmp_267_cast_cast_fu_23071_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_23125_p1() {
    grp_fu_23125_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_23914_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state769.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond196_fu_23814_p2.read()))) {
        grp_fu_23914_ap_start = ap_const_logic_1;
    } else {
        grp_fu_23914_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_23914_ce() {
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
        grp_fu_23914_ce = ap_const_logic_1;
    } else {
        grp_fu_23914_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_23914_p0() {
    grp_fu_23914_p0 = (!tmp_284_cast_cast_fu_23860_p1.read().is_01() || !tmp_276_cast_cast_reg_43207.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_284_cast_cast_fu_23860_p1.read()) + sc_biguint<9>(tmp_276_cast_cast_reg_43207.read()));
}

void ShuffleNetV2::thread_grp_fu_23914_p1() {
    grp_fu_23914_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_24684_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state807.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond207_fu_24584_p2.read()))) {
        grp_fu_24684_ap_start = ap_const_logic_1;
    } else {
        grp_fu_24684_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_24684_ce() {
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
        grp_fu_24684_ce = ap_const_logic_1;
    } else {
        grp_fu_24684_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_24684_p0() {
    grp_fu_24684_p0 = (!tmp_296_cast_cast_fu_24630_p1.read().is_01() || !tmp_291_cast_cast_reg_43432.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_296_cast_cast_fu_24630_p1.read()) + sc_biguint<9>(tmp_291_cast_cast_reg_43432.read()));
}

void ShuffleNetV2::thread_grp_fu_24684_p1() {
    grp_fu_24684_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_25457_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state864.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond218_fu_25357_p2.read()))) {
        grp_fu_25457_ap_start = ap_const_logic_1;
    } else {
        grp_fu_25457_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_25457_ce() {
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
        grp_fu_25457_ce = ap_const_logic_1;
    } else {
        grp_fu_25457_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_25457_p0() {
    grp_fu_25457_p0 = (!tmp_313_cast_cast_fu_25403_p1.read().is_01() || !tmp_305_cast_cast_reg_43692.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_313_cast_cast_fu_25403_p1.read()) + sc_biguint<9>(tmp_305_cast_cast_reg_43692.read()));
}

void ShuffleNetV2::thread_grp_fu_25457_p1() {
    grp_fu_25457_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_26223_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state902.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond229_fu_26123_p2.read()))) {
        grp_fu_26223_ap_start = ap_const_logic_1;
    } else {
        grp_fu_26223_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_26223_ce() {
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
        grp_fu_26223_ce = ap_const_logic_1;
    } else {
        grp_fu_26223_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_26223_p0() {
    grp_fu_26223_p0 = (!tmp_325_cast_cast_fu_26169_p1.read().is_01() || !tmp_320_cast_cast_reg_43917.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_325_cast_cast_fu_26169_p1.read()) + sc_biguint<9>(tmp_320_cast_cast_reg_43917.read()));
}

void ShuffleNetV2::thread_grp_fu_26223_p1() {
    grp_fu_26223_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_27004_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond240_fu_26904_p2.read()))) {
        grp_fu_27004_ap_start = ap_const_logic_1;
    } else {
        grp_fu_27004_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_27004_ce() {
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
        grp_fu_27004_ce = ap_const_logic_1;
    } else {
        grp_fu_27004_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_27004_p0() {
    grp_fu_27004_p0 = (!tmp_342_cast_cast_fu_26950_p1.read().is_01() || !tmp_334_cast_cast_reg_44177.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_342_cast_cast_fu_26950_p1.read()) + sc_biguint<9>(tmp_334_cast_cast_reg_44177.read()));
}

void ShuffleNetV2::thread_grp_fu_27004_p1() {
    grp_fu_27004_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_27770_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state997.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond251_fu_27670_p2.read()))) {
        grp_fu_27770_ap_start = ap_const_logic_1;
    } else {
        grp_fu_27770_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_27770_ce() {
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
        grp_fu_27770_ce = ap_const_logic_1;
    } else {
        grp_fu_27770_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_27770_p0() {
    grp_fu_27770_p0 = (!tmp_354_cast_cast_fu_27716_p1.read().is_01() || !tmp_349_cast_cast_reg_44402.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_354_cast_cast_fu_27716_p1.read()) + sc_biguint<9>(tmp_349_cast_cast_reg_44402.read()));
}

void ShuffleNetV2::thread_grp_fu_27770_p1() {
    grp_fu_27770_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_28555_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1054.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond262_fu_28455_p2.read()))) {
        grp_fu_28555_ap_start = ap_const_logic_1;
    } else {
        grp_fu_28555_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_28555_ce() {
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
        grp_fu_28555_ce = ap_const_logic_1;
    } else {
        grp_fu_28555_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_28555_p0() {
    grp_fu_28555_p0 = (!tmp_371_cast_cast_fu_28501_p1.read().is_01() || !tmp_363_cast_cast_reg_44662.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_371_cast_cast_fu_28501_p1.read()) + sc_biguint<9>(tmp_363_cast_cast_reg_44662.read()));
}

void ShuffleNetV2::thread_grp_fu_28555_p1() {
    grp_fu_28555_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_29321_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1092.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond273_fu_29221_p2.read()))) {
        grp_fu_29321_ap_start = ap_const_logic_1;
    } else {
        grp_fu_29321_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_29321_ce() {
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
        grp_fu_29321_ce = ap_const_logic_1;
    } else {
        grp_fu_29321_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_29321_p0() {
    grp_fu_29321_p0 = (!tmp_378_cast_cast_reg_44887.read().is_01() || !tmp_383_cast_cast_fu_29267_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_378_cast_cast_reg_44887.read()) + sc_bigint<9>(tmp_383_cast_cast_fu_29267_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_29321_p1() {
    grp_fu_29321_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_30106_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1149.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond284_fu_30006_p2.read()))) {
        grp_fu_30106_ap_start = ap_const_logic_1;
    } else {
        grp_fu_30106_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_30106_ce() {
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
        grp_fu_30106_ce = ap_const_logic_1;
    } else {
        grp_fu_30106_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_30106_p0() {
    grp_fu_30106_p0 = (!tmp_392_cast_cast_reg_45147.read().is_01() || !tmp_400_cast_cast_fu_30052_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_392_cast_cast_reg_45147.read()) + sc_bigint<9>(tmp_400_cast_cast_fu_30052_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_30106_p1() {
    grp_fu_30106_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_30884_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1187.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond295_fu_30784_p2.read()))) {
        grp_fu_30884_ap_start = ap_const_logic_1;
    } else {
        grp_fu_30884_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_30884_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1196.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1187.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1188.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1190.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1191.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1192.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1193.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1194.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1195.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1197.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1198.read()))) {
        grp_fu_30884_ce = ap_const_logic_1;
    } else {
        grp_fu_30884_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_30884_p0() {
    grp_fu_30884_p0 = (!tmp_407_cast_cast_reg_45372.read().is_01() || !tmp_412_cast_cast_fu_30830_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_407_cast_cast_reg_45372.read()) + sc_bigint<9>(tmp_412_cast_cast_fu_30830_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_30884_p1() {
    grp_fu_30884_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_31681_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1244.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond400_fu_31573_p2.read()))) {
        grp_fu_31681_ap_start = ap_const_logic_1;
    } else {
        grp_fu_31681_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_31681_ce() {
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
        grp_fu_31681_ce = ap_const_logic_1;
    } else {
        grp_fu_31681_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_31681_p0() {
    grp_fu_31681_p0 = (!tmp_429_cast_cast_fu_31619_p1.read().is_01() || !tmp_421_cast_cast_reg_45632.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_429_cast_cast_fu_31619_p1.read()) + sc_biguint<9>(tmp_421_cast_cast_reg_45632.read()));
}

void ShuffleNetV2::thread_grp_fu_31681_p1() {
    grp_fu_31681_p1 =  (sc_lv<6>) (ap_const_lv9_18);
}

void ShuffleNetV2::thread_grp_fu_32228_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond392_fu_32138_p2.read()))) {
        grp_fu_32228_ap_start = ap_const_logic_1;
    } else {
        grp_fu_32228_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_32228_ce() {
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
        grp_fu_32228_ce = ap_const_logic_1;
    } else {
        grp_fu_32228_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_32228_p0() {
    grp_fu_32228_p0 = (!tmp_440_cast_cast_fu_32186_p1.read().is_01() || !tmp_435_cast_cast_reg_45803.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_440_cast_cast_fu_32186_p1.read()) + sc_biguint<10>(tmp_435_cast_cast_reg_45803.read()));
}

void ShuffleNetV2::thread_grp_fu_32228_p1() {
    grp_fu_32228_p1 =  (sc_lv<5>) (ap_const_lv10_C);
}

void ShuffleNetV2::thread_grp_fu_32985_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1336.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond381_fu_32895_p2.read()))) {
        grp_fu_32985_ap_start = ap_const_logic_1;
    } else {
        grp_fu_32985_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_32985_ce() {
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
        grp_fu_32985_ce = ap_const_logic_1;
    } else {
        grp_fu_32985_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_32985_p0() {
    grp_fu_32985_p0 = (!tmp_457_cast_cast_fu_32943_p1.read().is_01() || !tmp_449_cast_cast_reg_46063.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_457_cast_cast_fu_32943_p1.read()) + sc_biguint<10>(tmp_449_cast_cast_reg_46063.read()));
}

void ShuffleNetV2::thread_grp_fu_32985_p1() {
    grp_fu_32985_p1 =  (sc_lv<5>) (ap_const_lv10_C);
}

void ShuffleNetV2::thread_grp_fu_33742_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1396.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond370_fu_33652_p2.read()))) {
        grp_fu_33742_ap_start = ap_const_logic_1;
    } else {
        grp_fu_33742_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_33742_ce() {
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
        grp_fu_33742_ce = ap_const_logic_1;
    } else {
        grp_fu_33742_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_33742_p0() {
    grp_fu_33742_p0 = (!tmp_478_cast_cast_fu_33700_p1.read().is_01() || !tmp_466_cast_cast_reg_46323.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_478_cast_cast_fu_33700_p1.read()) + sc_biguint<10>(tmp_466_cast_cast_reg_46323.read()));
}

void ShuffleNetV2::thread_grp_fu_33742_p1() {
    grp_fu_33742_p1 =  (sc_lv<5>) (ap_const_lv10_C);
}

void ShuffleNetV2::thread_grp_fu_34365_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1432.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond362_fu_34275_p2.read()))) {
        grp_fu_34365_ap_start = ap_const_logic_1;
    } else {
        grp_fu_34365_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_34365_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1434.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1441.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1432.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1433.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1435.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1437.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1438.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1439.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1442.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1443.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1444.read()))) {
        grp_fu_34365_ce = ap_const_logic_1;
    } else {
        grp_fu_34365_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_34365_p0() {
    grp_fu_34365_p0 = (!tmp_486_cast_cast_fu_34323_p1.read().is_01() || !tmp_477_cast_cast_reg_46504.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_486_cast_cast_fu_34323_p1.read()) + sc_biguint<10>(tmp_477_cast_cast_reg_46504.read()));
}

void ShuffleNetV2::thread_grp_fu_34365_p1() {
    grp_fu_34365_p1 =  (sc_lv<5>) (ap_const_lv10_C);
}

void ShuffleNetV2::thread_grp_fu_35114_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1490.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond351_fu_35024_p2.read()))) {
        grp_fu_35114_ap_start = ap_const_logic_1;
    } else {
        grp_fu_35114_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_35114_ce() {
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
        grp_fu_35114_ce = ap_const_logic_1;
    } else {
        grp_fu_35114_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_35114_p0() {
    grp_fu_35114_p0 = (!tmp_495_cast_cast_reg_46764.read().is_01() || !tmp_503_cast_cast_fu_35072_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_495_cast_cast_reg_46764.read()) + sc_bigint<10>(tmp_503_cast_cast_fu_35072_p1.read()));
}

void ShuffleNetV2::thread_grp_fu_35114_p1() {
    grp_fu_35114_p1 =  (sc_lv<5>) (ap_const_lv10_C);
}

void ShuffleNetV2::thread_grp_fu_35868_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1529.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond340_fu_35778_p2.read()))) {
        grp_fu_35868_ap_start = ap_const_logic_1;
    } else {
        grp_fu_35868_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_35868_ce() {
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
        grp_fu_35868_ce = ap_const_logic_1;
    } else {
        grp_fu_35868_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_35868_p0() {
    grp_fu_35868_p0 = (!tmp_515_cast_cast_fu_35826_p1.read().is_01() || !tmp_510_cast_cast_reg_46989.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_515_cast_cast_fu_35826_p1.read()) + sc_biguint<10>(tmp_510_cast_cast_reg_46989.read()));
}

void ShuffleNetV2::thread_grp_fu_35868_p1() {
    grp_fu_35868_p1 =  (sc_lv<5>) (ap_const_lv10_C);
}

void ShuffleNetV2::thread_grp_fu_36629_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1587.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond329_fu_36539_p2.read()))) {
        grp_fu_36629_ap_start = ap_const_logic_1;
    } else {
        grp_fu_36629_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_36629_ce() {
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
        grp_fu_36629_ce = ap_const_logic_1;
    } else {
        grp_fu_36629_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_36629_p0() {
    grp_fu_36629_p0 = (!tmp_532_cast_cast_fu_36587_p1.read().is_01() || !tmp_524_cast_cast_reg_47249.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_532_cast_cast_fu_36587_p1.read()) + sc_biguint<10>(tmp_524_cast_cast_reg_47249.read()));
}

void ShuffleNetV2::thread_grp_fu_36629_p1() {
    grp_fu_36629_p1 =  (sc_lv<5>) (ap_const_lv10_C);
}

void ShuffleNetV2::thread_grp_fu_37375_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1626.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond318_fu_37285_p2.read()))) {
        grp_fu_37375_ap_start = ap_const_logic_1;
    } else {
        grp_fu_37375_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_37375_ce() {
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
        grp_fu_37375_ce = ap_const_logic_1;
    } else {
        grp_fu_37375_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_37375_p0() {
    grp_fu_37375_p0 = (!tmp_544_cast_cast_fu_37333_p1.read().is_01() || !tmp_539_cast_cast_reg_47474.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_544_cast_cast_fu_37333_p1.read()) + sc_biguint<10>(tmp_539_cast_cast_reg_47474.read()));
}

void ShuffleNetV2::thread_grp_fu_37375_p1() {
    grp_fu_37375_p1 =  (sc_lv<5>) (ap_const_lv10_C);
}

void ShuffleNetV2::thread_grp_fu_38128_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1684.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond307_fu_38038_p2.read()))) {
        grp_fu_38128_ap_start = ap_const_logic_1;
    } else {
        grp_fu_38128_ap_start = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_38128_ce() {
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
        grp_fu_38128_ce = ap_const_logic_1;
    } else {
        grp_fu_38128_ce = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_fu_38128_p0() {
    grp_fu_38128_p0 = (!tmp_561_cast_cast_fu_38086_p1.read().is_01() || !tmp_553_cast_cast_reg_47734.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_561_cast_cast_fu_38086_p1.read()) + sc_biguint<10>(tmp_553_cast_cast_reg_47734.read()));
}

void ShuffleNetV2::thread_grp_fu_38128_p1() {
    grp_fu_38128_p1 =  (sc_lv<5>) (ap_const_lv10_C);
}

void ShuffleNetV2::thread_grp_shuffle_24_l_p_fu_14033_ap_start() {
    grp_shuffle_24_l_p_fu_14033_ap_start = ap_reg_grp_shuffle_24_l_p_fu_14033_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_24_p_fu_13809_ap_start() {
    grp_shuffle_24_p_fu_13809_ap_start = ap_reg_grp_shuffle_24_p_fu_13809_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_24_r_p_fu_14087_ap_start() {
    grp_shuffle_24_r_p_fu_14087_ap_start = ap_reg_grp_shuffle_24_r_p_fu_14087_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_l_p_fu_13865_ap_start() {
    grp_shuffle_48_l_p_fu_13865_ap_start = ap_reg_grp_shuffle_48_l_p_fu_13865_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_p_fu_13697_ap_start() {
    grp_shuffle_48_p_fu_13697_ap_start = ap_reg_grp_shuffle_48_p_fu_13697_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_r_p_fu_13919_ap_start() {
    grp_shuffle_48_r_p_fu_13919_ap_start = ap_reg_grp_shuffle_48_r_p_fu_13919_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_l_p_fu_13973_ap_start() {
    grp_shuffle_96_l_p_fu_13973_ap_start = ap_reg_grp_shuffle_96_l_p_fu_13973_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_p_fu_13753_ap_start() {
    grp_shuffle_96_p_fu_13753_ap_start = ap_reg_grp_shuffle_96_p_fu_13753_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_r_p_fu_14003_ap_start() {
    grp_shuffle_96_r_p_fu_14003_ap_start = ap_reg_grp_shuffle_96_r_p_fu_14003_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_16_p_fu_13225_ap_start() {
    grp_subconv_1x1_16_p_fu_13225_ap_start = ap_reg_grp_subconv_1x1_16_p_fu_13225_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_16p_p_fu_12744_ap_start() {
    grp_subconv_1x1_16p_p_fu_12744_ap_start = ap_reg_grp_subconv_1x1_16p_p_fu_12744_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_32_p_fu_13099_ap_start() {
    grp_subconv_1x1_32_p_fu_13099_ap_start = ap_reg_grp_subconv_1x1_32_p_fu_13099_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_4_p_fu_12952_ap_start() {
    grp_subconv_1x1_4_p_fu_12952_ap_start = ap_reg_grp_subconv_1x1_4_p_fu_12952_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_8_p_fu_12848_ap_start() {
    grp_subconv_1x1_8_p_fu_12848_ap_start = ap_reg_grp_subconv_1x1_8_p_fu_12848_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_8p_p_fu_13043_ap_start() {
    grp_subconv_1x1_8p_p_fu_13043_ap_start = ap_reg_grp_subconv_1x1_8p_p_fu_13043_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_no_re_fu_13639_ap_start() {
    grp_subconv_3x3_16_no_re_fu_13639_ap_start = ap_reg_grp_subconv_3x3_16_no_re_fu_13639_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_strid_1_fu_13363_ap_start() {
    grp_subconv_3x3_16_strid_1_fu_13363_ap_start = ap_reg_grp_subconv_3x3_16_strid_1_fu_13363_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_strid_fu_13797_ap_start() {
    grp_subconv_3x3_16_strid_fu_13797_ap_start = ap_reg_grp_subconv_3x3_16_strid_fu_13797_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_32_strid_1_fu_13581_ap_start() {
    grp_subconv_3x3_32_strid_1_fu_13581_ap_start = ap_reg_grp_subconv_3x3_32_strid_1_fu_13581_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_32_strid_fu_13547_ap_start() {
    grp_subconv_3x3_32_strid_fu_13547_ap_start = ap_reg_grp_subconv_3x3_32_strid_fu_13547_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_4_no_rel_fu_13479_ap_start() {
    grp_subconv_3x3_4_no_rel_fu_13479_ap_start = ap_reg_grp_subconv_3x3_4_no_rel_fu_13479_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_8_no_rel_fu_13421_ap_start() {
    grp_subconv_3x3_8_no_rel_fu_13421_ap_start = ap_reg_grp_subconv_3x3_8_no_rel_fu_13421_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_8_stride_1_fu_13513_ap_start() {
    grp_subconv_3x3_8_stride_1_fu_13513_ap_start = ap_reg_grp_subconv_3x3_8_stride_1_fu_13513_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_8_stride_fu_13785_ap_start() {
    grp_subconv_3x3_8_stride_fu_13785_ap_start = ap_reg_grp_subconv_3x3_8_stride_fu_13785_ap_start.read();
}

void ShuffleNetV2::thread_h102_cast_cast_fu_31183_p1() {
    h102_cast_cast_fu_31183_p1 = esl_zext<10,2>(h97_reg_11556.read());
}

void ShuffleNetV2::thread_h102_cast_fu_31179_p1() {
    h102_cast_fu_31179_p1 = esl_zext<32,2>(h97_reg_11556.read());
}

void ShuffleNetV2::thread_h106_cast_cast_fu_32507_p1() {
    h106_cast_cast_fu_32507_p1 = esl_zext<11,2>(h101_reg_11765.read());
}

void ShuffleNetV2::thread_h106_cast_fu_32503_p1() {
    h106_cast_fu_32503_p1 = esl_zext<32,2>(h101_reg_11765.read());
}

void ShuffleNetV2::thread_h108_cast_cast_fu_33268_p1() {
    h108_cast_cast_fu_33268_p1 = esl_zext<11,2>(h103_reg_11886.read());
}

void ShuffleNetV2::thread_h108_cast_fu_33264_p1() {
    h108_cast_fu_33264_p1 = esl_zext<32,2>(h103_reg_11886.read());
}

void ShuffleNetV2::thread_h112_cast_cast_fu_34640_p1() {
    h112_cast_cast_fu_34640_p1 = esl_zext<11,2>(h107_reg_12095.read());
}

void ShuffleNetV2::thread_h112_cast_fu_34636_p1() {
    h112_cast_fu_34636_p1 = esl_zext<32,2>(h107_reg_12095.read());
}

void ShuffleNetV2::thread_h118_cast_cast_fu_36143_p1() {
    h118_cast_cast_fu_36143_p1 = esl_zext<11,2>(h113_reg_12337.read());
}

void ShuffleNetV2::thread_h118_cast_fu_36139_p1() {
    h118_cast_fu_36139_p1 = esl_zext<32,2>(h113_reg_12337.read());
}

void ShuffleNetV2::thread_h124_cast_cast_fu_37650_p1() {
    h124_cast_cast_fu_37650_p1 = esl_zext<11,2>(h119_reg_12579.read());
}

void ShuffleNetV2::thread_h124_cast_fu_37646_p1() {
    h124_cast_fu_37646_p1 = esl_zext<32,2>(h119_reg_12579.read());
}

void ShuffleNetV2::thread_h128_cast_cast_fu_38604_p1() {
    h128_cast_cast_fu_38604_p1 = esl_zext<13,3>(h123_reg_12733.read());
}

void ShuffleNetV2::thread_h14_cast_cast_fu_15014_p1() {
    h14_cast_cast_fu_15014_p1 = esl_zext<9,2>(h14_reg_8865.read());
}

void ShuffleNetV2::thread_h27_cast_cast_fu_15710_p1() {
    h27_cast_cast_fu_15710_p1 = esl_zext<9,2>(h27_reg_9010.read());
}

void ShuffleNetV2::thread_h43_cast_cast_fu_16516_p1() {
    h43_cast_cast_fu_16516_p1 = esl_zext<9,2>(h39_reg_9188.read());
}

void ShuffleNetV2::thread_h50_cast_cast_fu_17328_p1() {
    h50_cast_cast_fu_17328_p1 = esl_zext<9,2>(h45_reg_9366.read());
}

void ShuffleNetV2::thread_h54_cast_cast_fu_18105_p1() {
    h54_cast_cast_fu_18105_p1 = esl_zext<10,2>(h49_reg_9532.read());
}

void ShuffleNetV2::thread_h54_cast_fu_18101_p1() {
    h54_cast_fu_18101_p1 = esl_zext<32,2>(h49_reg_9532.read());
}

void ShuffleNetV2::thread_h56_cast_cast_fu_18890_p1() {
    h56_cast_cast_fu_18890_p1 = esl_zext<10,2>(h51_reg_9653.read());
}

void ShuffleNetV2::thread_h56_cast_fu_18886_p1() {
    h56_cast_fu_18886_p1 = esl_zext<32,2>(h51_reg_9653.read());
}

void ShuffleNetV2::thread_h60_cast_cast_fu_20314_p1() {
    h60_cast_cast_fu_20314_p1 = esl_zext<10,2>(h55_reg_9862.read());
}

void ShuffleNetV2::thread_h60_cast_fu_20310_p1() {
    h60_cast_fu_20310_p1 = esl_zext<32,2>(h55_reg_9862.read());
}

void ShuffleNetV2::thread_h66_cast_cast_fu_21861_p1() {
    h66_cast_cast_fu_21861_p1 = esl_zext<10,2>(h61_reg_10104.read());
}

void ShuffleNetV2::thread_h66_cast_fu_21857_p1() {
    h66_cast_fu_21857_p1 = esl_zext<32,2>(h61_reg_10104.read());
}

void ShuffleNetV2::thread_h72_cast_cast_fu_23424_p1() {
    h72_cast_cast_fu_23424_p1 = esl_zext<10,2>(h67_reg_10346.read());
}

void ShuffleNetV2::thread_h72_cast_fu_23420_p1() {
    h72_cast_fu_23420_p1 = esl_zext<32,2>(h67_reg_10346.read());
}

void ShuffleNetV2::thread_h78_cast_cast_fu_24971_p1() {
    h78_cast_cast_fu_24971_p1 = esl_zext<10,2>(h73_reg_10588.read());
}

void ShuffleNetV2::thread_h78_cast_fu_24967_p1() {
    h78_cast_fu_24967_p1 = esl_zext<32,2>(h73_reg_10588.read());
}

void ShuffleNetV2::thread_h7_cast_fu_14701_p1() {
    h7_cast_fu_14701_p1 = esl_zext<32,2>(h7_reg_8787.read());
}

void ShuffleNetV2::thread_h84_cast_cast_fu_26510_p1() {
    h84_cast_cast_fu_26510_p1 = esl_zext<10,2>(h79_reg_10830.read());
}

void ShuffleNetV2::thread_h84_cast_fu_26506_p1() {
    h84_cast_fu_26506_p1 = esl_zext<32,2>(h79_reg_10830.read());
}

void ShuffleNetV2::thread_h90_cast_cast_fu_28057_p1() {
    h90_cast_cast_fu_28057_p1 = esl_zext<10,2>(h85_reg_11072.read());
}

void ShuffleNetV2::thread_h90_cast_fu_28053_p1() {
    h90_cast_fu_28053_p1 = esl_zext<32,2>(h85_reg_11072.read());
}

void ShuffleNetV2::thread_h96_cast_cast_fu_29616_p1() {
    h96_cast_cast_fu_29616_p1 = esl_zext<10,2>(h91_reg_11314.read());
}

void ShuffleNetV2::thread_h96_cast_fu_29612_p1() {
    h96_cast_fu_29612_p1 = esl_zext<32,2>(h91_reg_11314.read());
}

void ShuffleNetV2::thread_h_100_fu_31976_p2() {
    h_100_fu_31976_p2 = (!h99_reg_11666.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h99_reg_11666.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_101_cast_cast1_fu_30574_p1() {
    h_101_cast_cast1_fu_30574_p1 = esl_zext<11,4>(h_96_fu_30568_p2.read());
}

void ShuffleNetV2::thread_h_101_cast_cast_fu_30578_p1() {
    h_101_cast_cast_fu_30578_p1 = esl_zext<10,4>(h_96_fu_30568_p2.read());
}

void ShuffleNetV2::thread_h_102_fu_32517_p2() {
    h_102_fu_32517_p2 = (!h101_reg_11765.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h101_reg_11765.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_104_fu_33278_p2() {
    h_104_fu_33278_p2 = (!h103_reg_11886.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h103_reg_11886.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_105_cast_cast_fu_31982_p1() {
    h_105_cast_cast_fu_31982_p1 = esl_zext<10,4>(h_100_fu_31976_p2.read());
}

void ShuffleNetV2::thread_h_106_fu_34069_p2() {
    h_106_fu_34069_p2 = (!h105_reg_11996.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h105_reg_11996.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_108_fu_34650_p2() {
    h_108_fu_34650_p2 = (!h107_reg_12095.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h107_reg_12095.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_110_fu_35405_p2() {
    h_110_fu_35405_p2 = (!h109_reg_12205.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h109_reg_12205.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_111_cast_cast1_fu_34075_p1() {
    h_111_cast_cast1_fu_34075_p1 = esl_zext<13,3>(h_106_fu_34069_p2.read());
}

void ShuffleNetV2::thread_h_111_cast_cast_fu_34079_p1() {
    h_111_cast_cast_fu_34079_p1 = esl_zext<12,3>(h_106_fu_34069_p2.read());
}

void ShuffleNetV2::thread_h_112_fu_35572_p2() {
    h_112_fu_35572_p2 = (!h111_reg_12238.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h111_reg_12238.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_114_fu_36153_p2() {
    h_114_fu_36153_p2 = (!h113_reg_12337.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h113_reg_12337.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_115_cast_cast_fu_35411_p1() {
    h_115_cast_cast_fu_35411_p1 = esl_zext<12,3>(h_110_fu_35405_p2.read());
}

void ShuffleNetV2::thread_h_116_fu_36912_p2() {
    h_116_fu_36912_p2 = (!h115_reg_12447.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h115_reg_12447.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_117_cast_cast1_fu_35578_p1() {
    h_117_cast_cast1_fu_35578_p1 = esl_zext<13,3>(h_112_fu_35572_p2.read());
}

void ShuffleNetV2::thread_h_117_cast_cast_fu_35582_p1() {
    h_117_cast_cast_fu_35582_p1 = esl_zext<12,3>(h_112_fu_35572_p2.read());
}

void ShuffleNetV2::thread_h_118_fu_37079_p2() {
    h_118_fu_37079_p2 = (!h117_reg_12480.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h117_reg_12480.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_120_fu_37660_p2() {
    h_120_fu_37660_p2 = (!h119_reg_12579.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h119_reg_12579.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_121_cast_cast_fu_36918_p1() {
    h_121_cast_cast_fu_36918_p1 = esl_zext<12,3>(h_116_fu_36912_p2.read());
}

void ShuffleNetV2::thread_h_122_fu_38411_p2() {
    h_122_fu_38411_p2 = (!h121_reg_12689.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h121_reg_12689.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_123_cast_cast1_fu_37085_p1() {
    h_123_cast_cast1_fu_37085_p1 = esl_zext<13,3>(h_118_fu_37079_p2.read());
}

void ShuffleNetV2::thread_h_123_cast_cast_fu_37089_p1() {
    h_123_cast_cast_fu_37089_p1 = esl_zext<12,3>(h_118_fu_37079_p2.read());
}

void ShuffleNetV2::thread_h_124_fu_38624_p2() {
    h_124_fu_38624_p2 = (!h123_reg_12733.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h123_reg_12733.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_127_cast_cast_fu_38417_p1() {
    h_127_cast_cast_fu_38417_p1 = esl_zext<12,3>(h_122_fu_38411_p2.read());
}

void ShuffleNetV2::thread_h_129_cast_cast_fu_38630_p1() {
    h_129_cast_cast_fu_38630_p1 = esl_zext<14,3>(h_124_fu_38624_p2.read());
}

void ShuffleNetV2::thread_h_32_fu_14455_p2() {
    h_32_fu_14455_p2 = (!h_reg_8720.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(h_reg_8720.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_h_33_fu_14717_p2() {
    h_33_fu_14717_p2 = (!h7_reg_8787.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h7_reg_8787.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_34_fu_15034_p2() {
    h_34_fu_15034_p2 = (!h14_reg_8865.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h14_reg_8865.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_35_fu_15305_p2() {
    h_35_fu_15305_p2 = (!h20_reg_8932.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h20_reg_8932.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_36_fu_15730_p2() {
    h_36_fu_15730_p2 = (!h27_reg_9010.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h27_reg_9010.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_37_fu_15952_p2() {
    h_37_fu_15952_p2 = (!h33_reg_9077.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h33_reg_9077.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_38_cast_cast_fu_14461_p1() {
    h_38_cast_cast_fu_14461_p1 = esl_zext<13,6>(h_32_fu_14455_p2.read());
}

void ShuffleNetV2::thread_h_38_fu_16111_p2() {
    h_38_fu_16111_p2 = (!h36_reg_9110.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h36_reg_9110.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_40_fu_16536_p2() {
    h_40_fu_16536_p2 = (!h39_reg_9188.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h39_reg_9188.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_41_cast_cast1_fu_15311_p1() {
    h_41_cast_cast1_fu_15311_p1 = esl_zext<11,5>(h_35_fu_15305_p2.read());
}

void ShuffleNetV2::thread_h_41_cast_cast_fu_15315_p1() {
    h_41_cast_cast_fu_15315_p1 = esl_zext<10,5>(h_35_fu_15305_p2.read());
}

void ShuffleNetV2::thread_h_42_fu_16740_p2() {
    h_42_fu_16740_p2 = (!h41_reg_9255.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h41_reg_9255.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_43_cast_cast_fu_15958_p1() {
    h_43_cast_cast_fu_15958_p1 = esl_zext<10,5>(h_37_fu_15952_p2.read());
}

void ShuffleNetV2::thread_h_44_cast_cast1_fu_16117_p1() {
    h_44_cast_cast1_fu_16117_p1 = esl_zext<11,5>(h_38_fu_16111_p2.read());
}

void ShuffleNetV2::thread_h_44_cast_cast_fu_16121_p1() {
    h_44_cast_cast_fu_16121_p1 = esl_zext<10,5>(h_38_fu_16111_p2.read());
}

void ShuffleNetV2::thread_h_44_fu_16899_p2() {
    h_44_fu_16899_p2 = (!h43_reg_9288.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h43_reg_9288.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_46_fu_17348_p2() {
    h_46_fu_17348_p2 = (!h45_reg_9366.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h45_reg_9366.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_47_cast_cast_fu_16746_p1() {
    h_47_cast_cast_fu_16746_p1 = esl_zext<10,5>(h_42_fu_16740_p2.read());
}

void ShuffleNetV2::thread_h_48_fu_17554_p2() {
    h_48_fu_17554_p2 = (!h47_reg_9433.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h47_reg_9433.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_49_cast_cast1_fu_16905_p1() {
    h_49_cast_cast1_fu_16905_p1 = esl_zext<11,5>(h_44_fu_16899_p2.read());
}

void ShuffleNetV2::thread_h_49_cast_cast_fu_16909_p1() {
    h_49_cast_cast_fu_16909_p1 = esl_zext<10,5>(h_44_fu_16899_p2.read());
}

void ShuffleNetV2::thread_h_50_fu_18115_p2() {
    h_50_fu_18115_p2 = (!h49_reg_9532.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h49_reg_9532.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_52_fu_18900_p2() {
    h_52_fu_18900_p2 = (!h51_reg_9653.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h51_reg_9653.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_53_cast_cast_fu_17560_p1() {
    h_53_cast_cast_fu_17560_p1 = esl_zext<10,5>(h_48_fu_17554_p2.read());
}

void ShuffleNetV2::thread_h_54_fu_19711_p2() {
    h_54_fu_19711_p2 = (!h53_reg_9763.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h53_reg_9763.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_56_fu_20324_p2() {
    h_56_fu_20324_p2 = (!h55_reg_9862.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h55_reg_9862.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_58_fu_21099_p2() {
    h_58_fu_21099_p2 = (!h57_reg_9972.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h57_reg_9972.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_59_cast_cast1_fu_19717_p1() {
    h_59_cast_cast1_fu_19717_p1 = esl_zext<11,4>(h_54_fu_19711_p2.read());
}

void ShuffleNetV2::thread_h_59_cast_cast_fu_19721_p1() {
    h_59_cast_cast_fu_19721_p1 = esl_zext<10,4>(h_54_fu_19711_p2.read());
}

void ShuffleNetV2::thread_h_60_fu_21258_p2() {
    h_60_fu_21258_p2 = (!h59_reg_10005.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h59_reg_10005.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_62_fu_21871_p2() {
    h_62_fu_21871_p2 = (!h61_reg_10104.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h61_reg_10104.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_63_cast_cast_fu_21105_p1() {
    h_63_cast_cast_fu_21105_p1 = esl_zext<10,4>(h_58_fu_21099_p2.read());
}

void ShuffleNetV2::thread_h_64_fu_22650_p2() {
    h_64_fu_22650_p2 = (!h63_reg_10214.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h63_reg_10214.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_65_cast_cast1_fu_21264_p1() {
    h_65_cast_cast1_fu_21264_p1 = esl_zext<11,4>(h_60_fu_21258_p2.read());
}

void ShuffleNetV2::thread_h_65_cast_cast_fu_21268_p1() {
    h_65_cast_cast_fu_21268_p1 = esl_zext<10,4>(h_60_fu_21258_p2.read());
}

void ShuffleNetV2::thread_h_66_fu_22809_p2() {
    h_66_fu_22809_p2 = (!h65_reg_10247.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h65_reg_10247.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_68_fu_23434_p2() {
    h_68_fu_23434_p2 = (!h67_reg_10346.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h67_reg_10346.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_69_cast_cast_fu_22656_p1() {
    h_69_cast_cast_fu_22656_p1 = esl_zext<10,4>(h_64_fu_22650_p2.read());
}

void ShuffleNetV2::thread_h_70_fu_24209_p2() {
    h_70_fu_24209_p2 = (!h69_reg_10456.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h69_reg_10456.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_71_cast_cast1_fu_22815_p1() {
    h_71_cast_cast1_fu_22815_p1 = esl_zext<11,4>(h_66_fu_22809_p2.read());
}

void ShuffleNetV2::thread_h_71_cast_cast_fu_22819_p1() {
    h_71_cast_cast_fu_22819_p1 = esl_zext<10,4>(h_66_fu_22809_p2.read());
}

void ShuffleNetV2::thread_h_72_fu_24368_p2() {
    h_72_fu_24368_p2 = (!h71_reg_10489.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h71_reg_10489.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_74_fu_24981_p2() {
    h_74_fu_24981_p2 = (!h73_reg_10588.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h73_reg_10588.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_75_cast_cast_fu_24215_p1() {
    h_75_cast_cast_fu_24215_p1 = esl_zext<10,4>(h_70_fu_24209_p2.read());
}

void ShuffleNetV2::thread_h_76_fu_25748_p2() {
    h_76_fu_25748_p2 = (!h75_reg_10698.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h75_reg_10698.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_77_cast_cast1_fu_24374_p1() {
    h_77_cast_cast1_fu_24374_p1 = esl_zext<11,4>(h_72_fu_24368_p2.read());
}

void ShuffleNetV2::thread_h_77_cast_cast_fu_24378_p1() {
    h_77_cast_cast_fu_24378_p1 = esl_zext<10,4>(h_72_fu_24368_p2.read());
}

void ShuffleNetV2::thread_h_78_fu_25907_p2() {
    h_78_fu_25907_p2 = (!h77_reg_10731.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h77_reg_10731.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_80_fu_26520_p2() {
    h_80_fu_26520_p2 = (!h79_reg_10830.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h79_reg_10830.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_81_cast_cast_fu_25754_p1() {
    h_81_cast_cast_fu_25754_p1 = esl_zext<10,4>(h_76_fu_25748_p2.read());
}

void ShuffleNetV2::thread_h_82_fu_27295_p2() {
    h_82_fu_27295_p2 = (!h81_reg_10940.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h81_reg_10940.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_83_cast_cast1_fu_25913_p1() {
    h_83_cast_cast1_fu_25913_p1 = esl_zext<11,4>(h_78_fu_25907_p2.read());
}

void ShuffleNetV2::thread_h_83_cast_cast_fu_25917_p1() {
    h_83_cast_cast_fu_25917_p1 = esl_zext<10,4>(h_78_fu_25907_p2.read());
}

void ShuffleNetV2::thread_h_84_fu_27454_p2() {
    h_84_fu_27454_p2 = (!h83_reg_10973.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h83_reg_10973.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_86_fu_28067_p2() {
    h_86_fu_28067_p2 = (!h85_reg_11072.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h85_reg_11072.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_87_cast_cast_fu_27301_p1() {
    h_87_cast_cast_fu_27301_p1 = esl_zext<10,4>(h_82_fu_27295_p2.read());
}

void ShuffleNetV2::thread_h_88_fu_28846_p2() {
    h_88_fu_28846_p2 = (!h87_reg_11182.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h87_reg_11182.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_89_cast_cast1_fu_27460_p1() {
    h_89_cast_cast1_fu_27460_p1 = esl_zext<11,4>(h_84_fu_27454_p2.read());
}

void ShuffleNetV2::thread_h_89_cast_cast_fu_27464_p1() {
    h_89_cast_cast_fu_27464_p1 = esl_zext<10,4>(h_84_fu_27454_p2.read());
}

void ShuffleNetV2::thread_h_90_fu_29005_p2() {
    h_90_fu_29005_p2 = (!h89_reg_11215.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h89_reg_11215.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_92_fu_29626_p2() {
    h_92_fu_29626_p2 = (!h91_reg_11314.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h91_reg_11314.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_93_cast_cast_fu_28852_p1() {
    h_93_cast_cast_fu_28852_p1 = esl_zext<10,4>(h_88_fu_28846_p2.read());
}

void ShuffleNetV2::thread_h_94_fu_30409_p2() {
    h_94_fu_30409_p2 = (!h93_reg_11424.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h93_reg_11424.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_95_cast_cast1_fu_29011_p1() {
    h_95_cast_cast1_fu_29011_p1 = esl_zext<11,4>(h_90_fu_29005_p2.read());
}

void ShuffleNetV2::thread_h_95_cast_cast_fu_29015_p1() {
    h_95_cast_cast_fu_29015_p1 = esl_zext<10,4>(h_90_fu_29005_p2.read());
}

void ShuffleNetV2::thread_h_96_fu_30568_p2() {
    h_96_fu_30568_p2 = (!h95_reg_11457.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h95_reg_11457.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_98_fu_31193_p2() {
    h_98_fu_31193_p2 = (!h97_reg_11556.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h97_reg_11556.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_99_cast_cast_fu_30415_p1() {
    h_99_cast_cast_fu_30415_p1 = esl_zext<10,4>(h_94_fu_30409_p2.read());
}

void ShuffleNetV2::thread_i102_cast1_fu_26366_p1() {
    i102_cast1_fu_26366_p1 = esl_zext<7,5>(i94_reg_10786.read());
}

void ShuffleNetV2::thread_i102_cast_fu_26362_p1() {
    i102_cast_fu_26362_p1 = esl_zext<11,5>(i94_reg_10786.read());
}

void ShuffleNetV2::thread_i105_cast1_fu_26711_p1() {
    i105_cast1_fu_26711_p1 = esl_zext<7,5>(i97_reg_10852.read());
}

void ShuffleNetV2::thread_i105_cast_fu_26707_p1() {
    i105_cast_fu_26707_p1 = esl_zext<11,5>(i97_reg_10852.read());
}

void ShuffleNetV2::thread_i109_cast1_fu_27147_p1() {
    i109_cast1_fu_27147_p1 = esl_zext<7,5>(i99_reg_10907.read());
}

void ShuffleNetV2::thread_i109_cast_fu_27143_p1() {
    i109_cast_fu_27143_p1 = esl_zext<11,5>(i99_reg_10907.read());
}

void ShuffleNetV2::thread_i114_cast1_fu_27913_p1() {
    i114_cast1_fu_27913_p1 = esl_zext<7,5>(i105_reg_11028.read());
}

void ShuffleNetV2::thread_i114_cast_fu_27909_p1() {
    i114_cast_fu_27909_p1 = esl_zext<11,5>(i105_reg_11028.read());
}

void ShuffleNetV2::thread_i117_cast1_fu_28262_p1() {
    i117_cast1_fu_28262_p1 = esl_zext<7,5>(i108_reg_11094.read());
}

void ShuffleNetV2::thread_i117_cast_fu_28258_p1() {
    i117_cast_fu_28258_p1 = esl_zext<11,5>(i108_reg_11094.read());
}

void ShuffleNetV2::thread_i11_cast1_fu_14857_p1() {
    i11_cast1_fu_14857_p1 = esl_zext<32,5>(i11_reg_8832.read());
}

void ShuffleNetV2::thread_i121_cast1_fu_28698_p1() {
    i121_cast1_fu_28698_p1 = esl_zext<7,5>(i110_reg_11149.read());
}

void ShuffleNetV2::thread_i121_cast_fu_28694_p1() {
    i121_cast_fu_28694_p1 = esl_zext<11,5>(i110_reg_11149.read());
}

void ShuffleNetV2::thread_i126_cast1_fu_29472_p1() {
    i126_cast1_fu_29472_p1 = esl_zext<7,5>(i116_reg_11270.read());
}

void ShuffleNetV2::thread_i126_cast_fu_29468_p1() {
    i126_cast_fu_29468_p1 = esl_zext<11,5>(i116_reg_11270.read());
}

void ShuffleNetV2::thread_i129_cast1_fu_29813_p1() {
    i129_cast1_fu_29813_p1 = esl_zext<7,5>(i119_reg_11336.read());
}

void ShuffleNetV2::thread_i129_cast_fu_29809_p1() {
    i129_cast_fu_29809_p1 = esl_zext<11,5>(i119_reg_11336.read());
}

void ShuffleNetV2::thread_i133_cast305_cast_fu_30253_p1() {
    i133_cast305_cast_fu_30253_p1 = esl_zext<10,5>(i121_reg_11391.read());
}

void ShuffleNetV2::thread_i133_cast_fu_30257_p1() {
    i133_cast_fu_30257_p1 = esl_zext<7,5>(i121_reg_11391.read());
}

void ShuffleNetV2::thread_i138_cast290_cast_fu_31031_p1() {
    i138_cast290_cast_fu_31031_p1 = esl_zext<10,5>(i127_reg_11512.read());
}

void ShuffleNetV2::thread_i138_cast_fu_31035_p1() {
    i138_cast_fu_31035_p1 = esl_zext<7,5>(i127_reg_11512.read());
}

void ShuffleNetV2::thread_i13_cast_fu_15040_p1() {
    i13_cast_fu_15040_p1 = esl_zext<32,5>(tmp_1812_reg_8876.read());
}

void ShuffleNetV2::thread_i141_cast280_cast_fu_31372_p1() {
    i141_cast280_cast_fu_31372_p1 = esl_zext<10,5>(i130_reg_11578.read());
}

void ShuffleNetV2::thread_i141_cast_fu_31376_p1() {
    i141_cast_fu_31376_p1 = esl_zext<7,5>(i130_reg_11578.read());
}

void ShuffleNetV2::thread_i145_cast267_cast_fu_31820_p1() {
    i145_cast267_cast_fu_31820_p1 = esl_zext<10,5>(i132_reg_11633.read());
}

void ShuffleNetV2::thread_i145_cast_fu_31824_p1() {
    i145_cast_fu_31824_p1 = esl_zext<7,5>(i132_reg_11633.read());
}

void ShuffleNetV2::thread_i150_cast253_cast_fu_32355_p1() {
    i150_cast253_cast_fu_32355_p1 = esl_zext<10,5>(i138_reg_11721.read());
}

void ShuffleNetV2::thread_i150_cast_fu_32359_p1() {
    i150_cast_fu_32359_p1 = esl_zext<8,5>(i138_reg_11721.read());
}

void ShuffleNetV2::thread_i153_cast243_cast_fu_32696_p1() {
    i153_cast243_cast_fu_32696_p1 = esl_zext<9,5>(i141_reg_11787.read());
}

void ShuffleNetV2::thread_i153_cast_fu_32700_p1() {
    i153_cast_fu_32700_p1 = esl_zext<8,5>(i141_reg_11787.read());
}

void ShuffleNetV2::thread_i157_cast1_fu_33116_p1() {
    i157_cast1_fu_33116_p1 = esl_zext<8,5>(i143_reg_11842.read());
}

void ShuffleNetV2::thread_i157_cast_fu_33112_p1() {
    i157_cast_fu_33112_p1 = esl_zext<12,5>(i143_reg_11842.read());
}

void ShuffleNetV2::thread_i15_cast1_fu_15201_p1() {
    i15_cast1_fu_15201_p1 = esl_zext<32,5>(i14_reg_8910.read());
}

void ShuffleNetV2::thread_i161_cast1_fu_33461_p1() {
    i161_cast1_fu_33461_p1 = esl_zext<8,5>(i148_reg_11908.read());
}

void ShuffleNetV2::thread_i161_cast_fu_33457_p1() {
    i161_cast_fu_33457_p1 = esl_zext<12,5>(i148_reg_11908.read());
}

void ShuffleNetV2::thread_i165_cast1_fu_33873_p1() {
    i165_cast1_fu_33873_p1 = esl_zext<8,5>(i150_reg_11963.read());
}

void ShuffleNetV2::thread_i165_cast_fu_33869_p1() {
    i165_cast_fu_33869_p1 = esl_zext<12,5>(i150_reg_11963.read());
}

void ShuffleNetV2::thread_i170_cast1_fu_34496_p1() {
    i170_cast1_fu_34496_p1 = esl_zext<8,5>(i156_reg_12051.read());
}

void ShuffleNetV2::thread_i170_cast_fu_34492_p1() {
    i170_cast_fu_34492_p1 = esl_zext<12,5>(i156_reg_12051.read());
}

void ShuffleNetV2::thread_i173_cast1_fu_34833_p1() {
    i173_cast1_fu_34833_p1 = esl_zext<8,5>(i159_reg_12117.read());
}

void ShuffleNetV2::thread_i173_cast_fu_34829_p1() {
    i173_cast_fu_34829_p1 = esl_zext<12,5>(i159_reg_12117.read());
}

void ShuffleNetV2::thread_i177_cast1_fu_35253_p1() {
    i177_cast1_fu_35253_p1 = esl_zext<8,5>(i161_reg_12172.read());
}

void ShuffleNetV2::thread_i177_cast_fu_35249_p1() {
    i177_cast_fu_35249_p1 = esl_zext<12,5>(i161_reg_12172.read());
}

void ShuffleNetV2::thread_i17_cast1_fu_15538_p1() {
    i17_cast1_fu_15538_p1 = esl_zext<32,5>(i16_reg_8977.read());
}

void ShuffleNetV2::thread_i182_cast1_fu_35999_p1() {
    i182_cast1_fu_35999_p1 = esl_zext<8,5>(i167_reg_12293.read());
}

void ShuffleNetV2::thread_i182_cast_fu_35995_p1() {
    i182_cast_fu_35995_p1 = esl_zext<12,5>(i167_reg_12293.read());
}

void ShuffleNetV2::thread_i185_cast1_fu_36348_p1() {
    i185_cast1_fu_36348_p1 = esl_zext<8,5>(i170_reg_12359.read());
}

void ShuffleNetV2::thread_i185_cast_fu_36344_p1() {
    i185_cast_fu_36344_p1 = esl_zext<12,5>(i170_reg_12359.read());
}

void ShuffleNetV2::thread_i189_cast1_fu_36760_p1() {
    i189_cast1_fu_36760_p1 = esl_zext<8,5>(i172_reg_12414.read());
}

void ShuffleNetV2::thread_i189_cast_fu_36756_p1() {
    i189_cast_fu_36756_p1 = esl_zext<12,5>(i172_reg_12414.read());
}

}

