#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_944_fu_14184_p2() {
    tmp_944_fu_14184_p2 = (!p_shl409_cast_fu_14168_p1.read().is_01() || !p_shl410_cast_fu_14180_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl409_cast_fu_14168_p1.read()) + sc_biguint<15>(p_shl410_cast_fu_14180_p1.read()));
}

void ShuffleNetV2::thread_tmp_945_fu_14318_p2() {
    tmp_945_fu_14318_p2 = (!tmp_307_cast2_fu_14314_p1.read().is_01() || !tmp_942_reg_32472.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_307_cast2_fu_14314_p1.read()) + sc_biguint<10>(tmp_942_reg_32472.read()));
}

void ShuffleNetV2::thread_tmp_946_fu_14347_p2() {
    tmp_946_fu_14347_p2 = (!p_shl417_cast_fu_14331_p1.read().is_01() || !p_shl418_cast_fu_14343_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl417_cast_fu_14331_p1.read()) + sc_biguint<14>(p_shl418_cast_fu_14343_p1.read()));
}

void ShuffleNetV2::thread_tmp_947_cast1_fu_8779_p1() {
    tmp_947_cast1_fu_8779_p1 = esl_sext<64,14>(tmp_512_fu_8774_p2.read());
}

void ShuffleNetV2::thread_tmp_947_cast_fu_26244_p1() {
    tmp_947_cast_fu_26244_p1 = esl_sext<12,10>(tmp_719_fu_26238_p2.read());
}

void ShuffleNetV2::thread_tmp_947_fu_14353_p2() {
    tmp_947_fu_14353_p2 = (!tmp_307_cast1_fu_14310_p1.read().is_01() || !tmp_939_reg_32467.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_307_cast1_fu_14310_p1.read()) + sc_biguint<11>(tmp_939_reg_32467.read()));
}

void ShuffleNetV2::thread_tmp_948_cast_fu_8789_p1() {
    tmp_948_cast_fu_8789_p1 = esl_sext<64,11>(tmp_513_reg_30707.read());
}

void ShuffleNetV2::thread_tmp_948_fu_14382_p2() {
    tmp_948_fu_14382_p2 = (!p_shl415_cast_fu_14366_p1.read().is_01() || !p_shl416_cast_fu_14378_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl415_cast_fu_14366_p1.read()) + sc_biguint<15>(p_shl416_cast_fu_14378_p1.read()));
}

void ShuffleNetV2::thread_tmp_949_cast_fu_8664_p1() {
    tmp_949_cast_fu_8664_p1 = esl_zext<64,14>(tmp_515_reg_30666.read());
}

void ShuffleNetV2::thread_tmp_949_fu_14206_p2() {
    tmp_949_fu_14206_p2 = (!tmp_944_reg_32436.read().is_01() || !tmp_308_cast_fu_14202_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_944_reg_32436.read()) + sc_biguint<15>(tmp_308_cast_fu_14202_p1.read()));
}

void ShuffleNetV2::thread_tmp_950_cast_fu_8659_p1() {
    tmp_950_cast_fu_8659_p1 = esl_zext<64,15>(tmp_516_fu_8654_p2.read());
}

void ShuffleNetV2::thread_tmp_950_fu_14408_p2() {
    tmp_950_fu_14408_p2 = (!tmp_946_reg_32485.read().is_01() || !tmp_312_cast_fu_14404_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_946_reg_32485.read()) + sc_biguint<14>(tmp_312_cast_fu_14404_p1.read()));
}

void ShuffleNetV2::thread_tmp_951_fu_14413_p2() {
    tmp_951_fu_14413_p2 = (!tmp_948_reg_32490.read().is_01() || !tmp_312_cast1_fu_14400_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_948_reg_32490.read()) + sc_biguint<15>(tmp_312_cast1_fu_14400_p1.read()));
}

void ShuffleNetV2::thread_tmp_952_fu_14647_p3() {
    tmp_952_fu_14647_p3 = esl_concat<10,5>(tmp_319_reg_32562.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_953_fu_14658_p3() {
    tmp_953_fu_14658_p3 = esl_concat<10,3>(tmp_319_reg_32562.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_954_cast1_fu_8891_p1() {
    tmp_954_cast1_fu_8891_p1 = esl_sext<9,8>(tmp_532_fu_8885_p2.read());
}

void ShuffleNetV2::thread_tmp_954_cast_fu_26765_p1() {
    tmp_954_cast_fu_26765_p1 = esl_sext<12,8>(tmp_725_fu_26759_p2.read());
}

void ShuffleNetV2::thread_tmp_954_fu_14669_p2() {
    tmp_954_fu_14669_p2 = (!p_shl421_cast_fu_14654_p1.read().is_01() || !p_shl422_cast_fu_14665_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl421_cast_fu_14654_p1.read()) - sc_biguint<16>(p_shl422_cast_fu_14665_p1.read()));
}

void ShuffleNetV2::thread_tmp_955_cast_fu_8920_p1() {
    tmp_955_cast_fu_8920_p1 = esl_sext<15,10>(tmp_534_fu_8915_p2.read());
}

void ShuffleNetV2::thread_tmp_955_fu_14679_p2() {
    tmp_955_fu_14679_p2 = (!tmp_309_cast_reg_32544.read().is_01() || !tmp_1277_cast_fu_14675_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_309_cast_reg_32544.read()) + sc_bigint<17>(tmp_1277_cast_fu_14675_p1.read()));
}

void ShuffleNetV2::thread_tmp_956_fu_14616_p3() {
    tmp_956_fu_14616_p3 = esl_concat<7,6>(tmp_321_fu_14611_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_957_fu_14624_p3() {
    tmp_957_fu_14624_p3 = esl_concat<7,4>(tmp_321_fu_14611_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_958_cast_fu_26789_p1() {
    tmp_958_cast_fu_26789_p1 = esl_sext<32,8>(tmp_729_reg_36497.read());
}

void ShuffleNetV2::thread_tmp_958_fu_14636_p2() {
    tmp_958_fu_14636_p2 = (!tmp_956_fu_14616_p3.read().is_01() || !p_shl420_cast_fu_14632_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_956_fu_14616_p3.read()) - sc_bigint<13>(p_shl420_cast_fu_14632_p1.read()));
}

void ShuffleNetV2::thread_tmp_959_fu_14642_p2() {
    tmp_959_fu_14642_p2 = (!tmp_311_cast1_reg_32549.read().is_01() || !tmp_958_fu_14636_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_311_cast1_reg_32549.read()) + sc_biguint<13>(tmp_958_fu_14636_p2.read()));
}

void ShuffleNetV2::thread_tmp_960_fu_14863_p1() {
    tmp_960_fu_14863_p1 = i64_reg_4531.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_961_fu_14920_p3() {
    tmp_961_fu_14920_p3 = esl_concat<9,2>(tmp_334_reg_32681.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_962_cast_fu_26855_p1() {
    tmp_962_cast_fu_26855_p1 = esl_zext<8,3>(p_lshr_f23_cast_fu_26845_p4.read());
}

void ShuffleNetV2::thread_tmp_962_fu_14931_p2() {
    tmp_962_fu_14931_p2 = (!p_shl426_cast_fu_14927_p1.read().is_01() || !tmp_335_cast_fu_14917_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl426_cast_fu_14927_p1.read()) - sc_biguint<12>(tmp_335_cast_fu_14917_p1.read()));
}

void ShuffleNetV2::thread_tmp_963_fu_14941_p2() {
    tmp_963_fu_14941_p2 = (!tmp_1294_cast_fu_14937_p1.read().is_01() || !tmp_322_cast2_reg_32650.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1294_cast_fu_14937_p1.read()) + sc_biguint<13>(tmp_322_cast2_reg_32650.read()));
}

void ShuffleNetV2::thread_tmp_964_cast_fu_27125_p1() {
    tmp_964_cast_fu_27125_p1 = esl_sext<12,8>(tmp_741_fu_27119_p2.read());
}

void ShuffleNetV2::thread_tmp_964_fu_14958_p2() {
    tmp_964_fu_14958_p2 = (!p_shl425_cast_fu_14950_p3.read().is_01() || !tmp_1295_cast_fu_14946_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl425_cast_fu_14950_p3.read()) - sc_bigint<15>(tmp_1295_cast_fu_14946_p1.read()));
}

void ShuffleNetV2::thread_tmp_965_cast_fu_9084_p1() {
    tmp_965_cast_fu_9084_p1 = esl_sext<14,13>(tmp_558_fu_9078_p2.read());
}

void ShuffleNetV2::thread_tmp_965_fu_14964_p2() {
    tmp_965_fu_14964_p2 = (!tmp_964_fu_14958_p2.read().is_01() || !tmp_329_cast_reg_32668.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_964_fu_14958_p2.read()) + sc_biguint<15>(tmp_329_cast_reg_32668.read()));
}

void ShuffleNetV2::thread_tmp_966_fu_14976_p3() {
    tmp_966_fu_14976_p3 = esl_concat<7,2>(tmp_336_reg_32687.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_967_fu_14983_p1() {
    tmp_967_fu_14983_p1 = esl_sext<34,9>(tmp_966_fu_14976_p3.read());
}

void ShuffleNetV2::thread_tmp_968_cast_fu_27149_p1() {
    tmp_968_cast_fu_27149_p1 = esl_sext<32,8>(tmp_744_reg_36603.read());
}

void ShuffleNetV2::thread_tmp_968_fu_14991_p2() {
    tmp_968_fu_14991_p2 = (!p_shl424_cast_fu_14987_p1.read().is_01() || !tmp_337_cast_fu_14972_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl424_cast_fu_14987_p1.read()) - sc_biguint<35>(tmp_337_cast_fu_14972_p1.read()));
}

void ShuffleNetV2::thread_tmp_969_cast_fu_8984_p1() {
    tmp_969_cast_fu_8984_p1 = esl_zext<64,15>(tmp_563_fu_8979_p2.read());
}

void ShuffleNetV2::thread_tmp_969_fu_15001_p2() {
    tmp_969_fu_15001_p2 = (!tmp_1301_cast_fu_14997_p1.read().is_01() || !tmp_322_cast1_reg_32645.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1301_cast_fu_14997_p1.read()) + sc_biguint<36>(tmp_322_cast1_reg_32645.read()));
}

void ShuffleNetV2::thread_tmp_96_fu_7514_p1() {
    tmp_96_fu_7514_p1 = esl_zext<64,12>(tmp_cast_fu_7510_p1.read());
}

void ShuffleNetV2::thread_tmp_970_cast_fu_8994_p1() {
    tmp_970_cast_fu_8994_p1 = esl_zext<64,9>(tmp_565_reg_30774.read());
}

void ShuffleNetV2::thread_tmp_970_fu_15006_p1() {
    tmp_970_fu_15006_p1 = tmp_969_fu_15001_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_971_cast_fu_9143_p1() {
    tmp_971_cast_fu_9143_p1 = esl_sext<64,14>(tmp_566_fu_9138_p2.read());
}

void ShuffleNetV2::thread_tmp_971_fu_15010_p1() {
    tmp_971_fu_15010_p1 = tmp_969_fu_15001_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_972_cast_fu_9153_p1() {
    tmp_972_cast_fu_9153_p1 = esl_sext<64,11>(tmp_568_reg_30823.read());
}

void ShuffleNetV2::thread_tmp_972_fu_15025_p2() {
    tmp_972_fu_15025_p2 = (!p_shl423_cast_fu_15018_p3.read().is_01() || !tmp_970_reg_32698.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl423_cast_fu_15018_p3.read()) - sc_biguint<10>(tmp_970_reg_32698.read()));
}

void ShuffleNetV2::thread_tmp_973_cast_fu_26561_p1() {
    tmp_973_cast_fu_26561_p1 = esl_sext<10,8>(tmp_736_fu_26555_p2.read());
}

void ShuffleNetV2::thread_tmp_973_fu_15030_p2() {
    tmp_973_fu_15030_p2 = (!tmp_972_fu_15025_p2.read().is_01() || !tmp_329_cast1_reg_32663.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_972_fu_15025_p2.read()) + sc_biguint<10>(tmp_329_cast1_reg_32663.read()));
}

void ShuffleNetV2::thread_tmp_974_fu_15521_p3() {
    tmp_974_fu_15521_p3 = esl_concat<6,3>(co82_reg_4619.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_975_fu_15533_p3() {
    tmp_975_fu_15533_p3 = esl_concat<6,1>(co82_reg_4619.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_976_fu_15545_p2() {
    tmp_976_fu_15545_p2 = (!p_shl432_cast_fu_15541_p1.read().is_01() || !p_shl431_cast_fu_15529_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl432_cast_fu_15541_p1.read()) + sc_biguint<10>(p_shl431_cast_fu_15529_p1.read()));
}

void ShuffleNetV2::thread_tmp_977_cast_fu_26629_p1() {
    tmp_977_cast_fu_26629_p1 = esl_sext<32,8>(tmp_739_reg_36435.read());
}

void ShuffleNetV2::thread_tmp_977_fu_15439_p1() {
    tmp_977_fu_15439_p1 = k12_reg_4608.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_978_fu_15246_p1() {
    tmp_978_fu_15246_p1 = i66_reg_4586.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_979_fu_15361_p3() {
    tmp_979_fu_15361_p3 = esl_concat<10,5>(tmp_344_reg_32808.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_97_fu_7519_p1() {
    tmp_97_fu_7519_p1 = esl_zext<64,10>(i1_reg_3085.read());
}

void ShuffleNetV2::thread_tmp_980_cast_cast_fu_26938_p1() {
    tmp_980_cast_cast_fu_26938_p1 = esl_sext<11,10>(tmp_746_fu_26932_p2.read());
}

void ShuffleNetV2::thread_tmp_980_fu_15372_p3() {
    tmp_980_fu_15372_p3 = esl_concat<10,3>(tmp_344_reg_32808.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_981_fu_15383_p2() {
    tmp_981_fu_15383_p2 = (!p_shl429_cast_fu_15368_p1.read().is_01() || !p_shl430_cast_fu_15379_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl429_cast_fu_15368_p1.read()) - sc_biguint<16>(p_shl430_cast_fu_15379_p1.read()));
}

void ShuffleNetV2::thread_tmp_982_fu_15393_p2() {
    tmp_982_fu_15393_p2 = (!tmp_330_cast_reg_32790.read().is_01() || !tmp_1315_cast_fu_15389_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_330_cast_reg_32790.read()) + sc_bigint<17>(tmp_1315_cast_fu_15389_p1.read()));
}

void ShuffleNetV2::thread_tmp_983_fu_15330_p3() {
    tmp_983_fu_15330_p3 = esl_concat<7,6>(tmp_346_fu_15325_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_984_fu_15338_p3() {
    tmp_984_fu_15338_p3 = esl_concat<7,4>(tmp_346_fu_15325_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_985_fu_15350_p2() {
    tmp_985_fu_15350_p2 = (!tmp_983_fu_15330_p3.read().is_01() || !p_shl428_cast_fu_15346_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_983_fu_15330_p3.read()) - sc_bigint<13>(p_shl428_cast_fu_15346_p1.read()));
}

void ShuffleNetV2::thread_tmp_986_fu_15356_p2() {
    tmp_986_fu_15356_p2 = (!tmp_332_cast1_reg_32795.read().is_01() || !tmp_985_fu_15350_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_332_cast1_reg_32795.read()) + sc_biguint<13>(tmp_985_fu_15350_p2.read()));
}

void ShuffleNetV2::thread_tmp_987_fu_15650_p3() {
    tmp_987_fu_15650_p3 = esl_concat<7,3>(tmp_347_fu_15644_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_988_cast_fu_9565_p1() {
    tmp_988_cast_fu_9565_p1 = esl_sext<15,14>(tmp_610_fu_9559_p2.read());
}

void ShuffleNetV2::thread_tmp_988_fu_15662_p3() {
    tmp_988_fu_15662_p3 = esl_concat<7,1>(tmp_347_fu_15644_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_989_fu_15674_p2() {
    tmp_989_fu_15674_p2 = (!p_shl438_cast_fu_15670_p1.read().is_01() || !p_shl437_cast_fu_15658_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl438_cast_fu_15670_p1.read()) + sc_biguint<11>(p_shl437_cast_fu_15658_p1.read()));
}

void ShuffleNetV2::thread_tmp_98_fu_7540_p2() {
    tmp_98_fu_7540_p2 = (!i2_cast708_cast_fu_7524_p1.read().is_01() || !ap_const_lv10_218.is_01())? sc_lv<10>(): (sc_biguint<10>(i2_cast708_cast_fu_7524_p1.read()) + sc_bigint<10>(ap_const_lv10_218));
}

void ShuffleNetV2::thread_tmp_990_fu_15680_p3() {
    tmp_990_fu_15680_p3 = esl_concat<6,3>(co84_reg_4652.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_991_fu_15692_p3() {
    tmp_991_fu_15692_p3 = esl_concat<6,1>(co84_reg_4652.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_992_cast_fu_27549_p1() {
    tmp_992_cast_fu_27549_p1 = esl_zext<8,3>(p_lshr_f24_cast_fu_27539_p4.read());
}

void ShuffleNetV2::thread_tmp_992_fu_15704_p2() {
    tmp_992_fu_15704_p2 = (!p_shl436_cast_fu_15700_p1.read().is_01() || !p_shl435_cast_fu_15688_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl436_cast_fu_15700_p1.read()) + sc_biguint<10>(p_shl435_cast_fu_15688_p1.read()));
}

void ShuffleNetV2::thread_tmp_993_fu_15567_p2() {
    tmp_993_fu_15567_p2 = (!tmp_348_cast_fu_15563_p1.read().is_01() || !tmp_976_reg_32873.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_348_cast_fu_15563_p1.read()) + sc_biguint<10>(tmp_976_reg_32873.read()));
}

void ShuffleNetV2::thread_tmp_994_fu_15572_p3() {
    tmp_994_fu_15572_p3 = esl_concat<10,3>(tmp_993_fu_15567_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_995_fu_15584_p3() {
    tmp_995_fu_15584_p3 = esl_concat<10,1>(tmp_993_fu_15567_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_996_cast_fu_27807_p1() {
    tmp_996_cast_fu_27807_p1 = esl_sext<12,8>(tmp_761_fu_27801_p2.read());
}

void ShuffleNetV2::thread_tmp_996_fu_15596_p2() {
    tmp_996_fu_15596_p2 = (!p_shl433_cast_fu_15580_p1.read().is_01() || !p_shl434_cast_fu_15592_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl433_cast_fu_15580_p1.read()) + sc_biguint<15>(p_shl434_cast_fu_15592_p1.read()));
}

void ShuffleNetV2::thread_tmp_997_fu_15855_p1() {
    tmp_997_fu_15855_p1 = co86_reg_4685.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_998_fu_15730_p2() {
    tmp_998_fu_15730_p2 = (!tmp_350_cast_fu_15726_p1.read().is_01() || !tmp_992_reg_32922.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_350_cast_fu_15726_p1.read()) + sc_biguint<10>(tmp_992_reg_32922.read()));
}

void ShuffleNetV2::thread_tmp_999_fu_15735_p3() {
    tmp_999_fu_15735_p3 = esl_concat<10,3>(tmp_998_fu_15730_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_99_fu_7550_p1() {
    tmp_99_fu_7550_p1 = esl_zext<64,12>(tmp_147_cast_fu_7546_p1.read());
}

void ShuffleNetV2::thread_tmp_cast_fu_7510_p1() {
    tmp_cast_fu_7510_p1 = esl_sext<12,11>(tmp_s_fu_7504_p2.read());
}

void ShuffleNetV2::thread_tmp_fu_7483_p1() {
    tmp_fu_7483_p1 = esl_zext<64,5>(i_reg_3074.read());
}

void ShuffleNetV2::thread_tmp_i_672_fu_30239_p1() {
    tmp_i_672_fu_30239_p1 = esl_zext<64,10>(ci_i_reg_7183.read());
}

void ShuffleNetV2::thread_tmp_i_cast_fu_30244_p1() {
    tmp_i_cast_fu_30244_p1 = esl_zext<14,10>(ci_i_reg_7183.read());
}

void ShuffleNetV2::thread_tmp_i_fu_30211_p1() {
    tmp_i_fu_30211_p1 = esl_zext<64,4>(co_i_reg_7160.read());
}

void ShuffleNetV2::thread_tmp_s_fu_7504_p2() {
    tmp_s_fu_7504_p2 = (!i1_cast710_cast_fu_7488_p1.read().is_01() || !ap_const_lv11_418.is_01())? sc_lv<11>(): (sc_biguint<11>(i1_cast710_cast_fu_7488_p1.read()) + sc_bigint<11>(ap_const_lv11_418));
}

void ShuffleNetV2::thread_w_100_fu_26070_p2() {
    w_100_fu_26070_p2 = (!w99_reg_6423.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w99_reg_6423.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_102_fu_26481_p2() {
    w_102_fu_26481_p2 = (!w101_reg_6500.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w101_reg_6500.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_104_fu_27260_p2() {
    w_104_fu_27260_p2 = (!w103_reg_6632.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w103_reg_6632.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_106_fu_27458_p2() {
    w_106_fu_27458_p2 = (!w105_reg_6665.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w105_reg_6665.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_108_fu_27865_p2() {
    w_108_fu_27865_p2 = (!w107_reg_6742.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w107_reg_6742.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_110_fu_28648_p2() {
    w_110_fu_28648_p2 = (!w109_reg_6874.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w109_reg_6874.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_112_fu_28846_p2() {
    w_112_fu_28846_p2 = (!w111_reg_6907.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w111_reg_6907.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_114_fu_29253_p2() {
    w_114_fu_29253_p2 = (!w113_reg_6984.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w113_reg_6984.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_117_fu_30102_p2() {
    w_117_fu_30102_p2 = (!w115_reg_7138.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w115_reg_7138.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_1_fu_30018_p2() {
    w_1_fu_30018_p2 = (!w116_reg_7116.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w116_reg_7116.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_25_fu_7608_p2() {
    w_25_fu_7608_p2 = (!w_reg_3120.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(w_reg_3120.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_w_26_fu_7853_p2() {
    w_26_fu_7853_p2 = (!w6_reg_3187.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w6_reg_3187.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_27_fu_8181_p2() {
    w_27_fu_8181_p2 = (!w13_reg_3266.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w13_reg_3266.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_28_fu_8635_p2() {
    w_28_fu_8635_p2 = (!w21_reg_3356.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w21_reg_3356.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_29_fu_8901_p2() {
    w_29_fu_8901_p2 = (!w26_reg_3412.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w26_reg_3412.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_31_fu_9290_p2() {
    w_31_fu_9290_p2 = (!w30_reg_3502.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w30_reg_3502.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_33_fu_9480_p2() {
    w_33_fu_9480_p2 = (!w32_reg_3535.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w32_reg_3535.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_35_fu_9750_p2() {
    w_35_fu_9750_p2 = (!w34_reg_3591.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w34_reg_3591.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_37_fu_10135_p2() {
    w_37_fu_10135_p2 = (!w36_reg_3681.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w36_reg_3681.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_39_fu_10325_p2() {
    w_39_fu_10325_p2 = (!w38_reg_3714.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w38_reg_3714.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_41_fu_10601_p2() {
    w_41_fu_10601_p2 = (!w40_reg_3770.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w40_reg_3770.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_43_fu_10988_p2() {
    w_43_fu_10988_p2 = (!w42_reg_3860.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w42_reg_3860.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_45_fu_11398_p2() {
    w_45_fu_11398_p2 = (!w44_reg_3937.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w44_reg_3937.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_47_fu_12120_p2() {
    w_47_fu_12120_p2 = (!w46_reg_4058.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w46_reg_4058.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_49_fu_12986_p2() {
    w_49_fu_12986_p2 = (!w48_reg_4190.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w48_reg_4190.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_50_fu_13409_p2() {
    w_50_fu_13409_p2 = (!w49_reg_4267.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w49_reg_4267.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_52_fu_14196_p2() {
    w_52_fu_14196_p2 = (!w51_reg_4399.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w51_reg_4399.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_54_fu_14394_p2() {
    w_54_fu_14394_p2 = (!w53_reg_4432.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w53_reg_4432.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_56_fu_14817_p2() {
    w_56_fu_14817_p2 = (!w55_reg_4509.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w55_reg_4509.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_58_fu_15608_p2() {
    w_58_fu_15608_p2 = (!w57_reg_4641.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w57_reg_4641.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_60_fu_15806_p2() {
    w_60_fu_15806_p2 = (!w59_reg_4674.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w59_reg_4674.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_62_fu_16241_p2() {
    w_62_fu_16241_p2 = (!w61_reg_4751.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w61_reg_4751.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_64_fu_17032_p2() {
    w_64_fu_17032_p2 = (!w63_reg_4883.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w63_reg_4883.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_66_fu_17230_p2() {
    w_66_fu_17230_p2 = (!w65_reg_4916.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w65_reg_4916.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_68_fu_17653_p2() {
    w_68_fu_17653_p2 = (!w67_reg_4993.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w67_reg_4993.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_70_fu_18436_p2() {
    w_70_fu_18436_p2 = (!w69_reg_5125.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w69_reg_5125.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_72_fu_18634_p2() {
    w_72_fu_18634_p2 = (!w71_reg_5158.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w71_reg_5158.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_74_fu_19057_p2() {
    w_74_fu_19057_p2 = (!w73_reg_5235.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w73_reg_5235.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_76_fu_19848_p2() {
    w_76_fu_19848_p2 = (!w75_reg_5367.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w75_reg_5367.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_78_fu_20046_p2() {
    w_78_fu_20046_p2 = (!w77_reg_5400.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w77_reg_5400.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_80_fu_20469_p2() {
    w_80_fu_20469_p2 = (!w79_reg_5477.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w79_reg_5477.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_82_fu_21260_p2() {
    w_82_fu_21260_p2 = (!w81_reg_5609.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w81_reg_5609.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_84_fu_21458_p2() {
    w_84_fu_21458_p2 = (!w83_reg_5642.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w83_reg_5642.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_86_fu_21889_p2() {
    w_86_fu_21889_p2 = (!w85_reg_5719.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w85_reg_5719.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_88_fu_22688_p2() {
    w_88_fu_22688_p2 = (!w87_reg_5851.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w87_reg_5851.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_90_fu_22886_p2() {
    w_90_fu_22886_p2 = (!w89_reg_5884.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w89_reg_5884.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_92_fu_23321_p2() {
    w_92_fu_23321_p2 = (!w91_reg_5961.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w91_reg_5961.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_94_fu_24116_p2() {
    w_94_fu_24116_p2 = (!w93_reg_6093.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w93_reg_6093.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_96_fu_24518_p2() {
    w_96_fu_24518_p2 = (!w95_reg_6170.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w95_reg_6170.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_98_fu_25224_p2() {
    w_98_fu_25224_p2 = (!w97_reg_6291.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w97_reg_6291.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_weights_24_1_3x3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        weights_24_1_3x3_address0 =  (sc_lv<8>) (tmp_1077_cast_fu_10694_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read())) {
        weights_24_1_3x3_address0 =  (sc_lv<8>) (tmp_1022_cast1_fu_9843_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        weights_24_1_3x3_address0 =  (sc_lv<8>) (tmp_970_cast_fu_8994_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weights_24_1_3x3_address0 =  (sc_lv<8>) (tmp_832_cast1_fu_8270_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        weights_24_1_3x3_address0 =  (sc_lv<8>) (tmp_663_cast_reg_30434.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        weights_24_1_3x3_address0 = grp_subconv_3x3_16_no_re_fu_7341_weight_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()))) {
        weights_24_1_3x3_address0 = grp_subconv_3x3_32_strid_fu_7254_weight_address0.read();
    } else {
        weights_24_1_3x3_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_1_3x3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()))) {
        weights_24_1_3x3_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()))) {
        weights_24_1_3x3_ce0 = grp_subconv_3x3_16_no_re_fu_7341_weight_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()))) {
        weights_24_1_3x3_ce0 = grp_subconv_3x3_32_strid_fu_7254_weight_ce0.read();
    } else {
        weights_24_1_3x3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_1_3x3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()))) {
        weights_24_1_3x3_we0 = ap_const_logic_1;
    } else {
        weights_24_1_3x3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_1079_cast_fu_10853_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_1054_cast_fu_10479_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_1024_cast1_fu_10000_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_1002_cast_fu_9634_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_972_cast_fu_9153_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_948_cast_fu_8789_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_835_cast_fu_8429_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_666_cast_fu_8069_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_563_cast_reg_30377.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        weights_24_24_1x1_address0 = grp_subconv_1x1_16_p_fu_7353_weight_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weights_24_24_1x1_address0 = grp_subconv_1x1_32_p_fu_7242_weight_address0.read();
    } else {
        weights_24_24_1x1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()))) {
        weights_24_24_1x1_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        weights_24_24_1x1_ce0 = grp_subconv_1x1_16_p_fu_7353_weight_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weights_24_24_1x1_ce0 = grp_subconv_1x1_32_p_fu_7242_weight_ce0.read();
    } else {
        weights_24_24_1x1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state96.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()))) {
        weights_24_24_1x1_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1777_cast_fu_23535_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state457.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1696_cast_fu_22111_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1617_cast_fu_20695_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state375.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1539_cast_fu_19283_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1461_cast_fu_17871_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1384_cast_fu_16459_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state252.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1305_cast_fu_15035_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1228_cast_fu_13631_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1159_cast_fu_12338_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1124_cast_fu_11620_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()))) {
        weights_48_1_3x3_address0 = grp_subconv_3x3_8_no_rel_fu_7329_weight_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()))) {
        weights_48_1_3x3_address0 = grp_subconv_3x3_16_strid_fu_7292_weight_address0.read();
    } else {
        weights_48_1_3x3_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state252.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state375.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state457.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()))) {
        weights_48_1_3x3_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()))) {
        weights_48_1_3x3_ce0 = grp_subconv_3x3_8_no_rel_fu_7329_weight_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()))) {
        weights_48_1_3x3_ce0 = grp_subconv_3x3_16_strid_fu_7292_weight_ce0.read();
    } else {
        weights_48_1_3x3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state149.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state252.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state375.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state457.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state498.read()))) {
        weights_48_1_3x3_we0 = ap_const_logic_1;
    } else {
        weights_48_1_3x3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state508.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1796_cast_fu_23911_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state486.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1758_cast_fu_23189_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state467.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1717_cast_fu_22483_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state445.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1677_cast_fu_21761_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state426.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1636_cast_fu_21059_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state404.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1597_cast_fu_20341_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1558_cast_fu_19647_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1519_cast_fu_18929_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1480_cast_fu_18235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1442_cast_fu_17525_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1403_cast_fu_16827_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1365_cast_fu_16109_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1324_cast_fu_15403_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1286_cast_fu_14689_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1247_cast_fu_13995_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1209_cast_fu_13281_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1181_cast_fu_12706_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1140_cast_fu_11988_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1105_cast_fu_11270_p1.read());
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
        weights_48_48_1x1_address0 = grp_subconv_1x1_8_p_fu_7305_weight_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        weights_48_48_1x1_address0 = grp_subconv_1x1_16p_p_fu_7230_weight_address0.read();
    } else {
        weights_48_48_1x1_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state404.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state426.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state467.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state508.read()))) {
        weights_48_48_1x1_ce0 = ap_const_logic_1;
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
        weights_48_48_1x1_ce0 = grp_subconv_1x1_8_p_fu_7305_weight_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read())) {
        weights_48_48_1x1_ce0 = grp_subconv_1x1_16p_p_fu_7230_weight_ce0.read();
    } else {
        weights_48_48_1x1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state183.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state281.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state303.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state322.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state344.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state404.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state426.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state467.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state508.read()))) {
        weights_48_48_1x1_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state679.read())) {
        weights_96_1_3x3_address0 =  (sc_lv<10>) (tmp_2091_cast_fu_29465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state638.read())) {
        weights_96_1_3x3_address0 =  (sc_lv<10>) (tmp_2016_cast_fu_28095_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state597.read())) {
        weights_96_1_3x3_address0 =  (sc_lv<10>) (tmp_1938_cast_fu_26695_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state559.read())) {
        weights_96_1_3x3_address0 =  (sc_lv<10>) (tmp_1871_cast_fu_25438_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state535.read())) {
        weights_96_1_3x3_address0 =  (sc_lv<10>) (tmp_1837_cast_fu_24732_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        weights_96_1_3x3_address0 = grp_subconv_3x3_4_no_rel_fu_7317_weight_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read()))) {
        weights_96_1_3x3_address0 = grp_subconv_3x3_8_stride_fu_7267_weight_address0.read();
    } else {
        weights_96_1_3x3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state535.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state559.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state597.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state638.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state679.read()))) {
        weights_96_1_3x3_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        weights_96_1_3x3_ce0 = grp_subconv_3x3_4_no_rel_fu_7317_weight_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read()))) {
        weights_96_1_3x3_ce0 = grp_subconv_3x3_8_stride_fu_7267_weight_ce0.read();
    } else {
        weights_96_1_3x3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state535.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state559.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state597.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state638.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state679.read()))) {
        weights_96_1_3x3_we0 = ap_const_logic_1;
    } else {
        weights_96_1_3x3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state689.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_2109_cast_fu_29813_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state667.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_2072_cast_fu_29125_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state648.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_2034_cast_fu_28443_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state626.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_1996_cast_fu_27737_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state607.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_1958_cast_fu_27055_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state585.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_1919_cast_fu_26353_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state569.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_1892_cast_fu_25790_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state545.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_1852_cast_fu_25088_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state523.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_1818_cast_fu_24386_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state528.read())) {
        weights_96_96_1x1_address0 = grp_subconv_1x1_8p_p_fu_7218_weight_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state550.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()))) {
        weights_96_96_1x1_address0 = grp_subconv_1x1_4_p_fu_7206_weight_address0.read();
    } else {
        weights_96_96_1x1_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state523.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state545.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state569.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state585.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state607.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state626.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state648.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state667.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state689.read()))) {
        weights_96_96_1x1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state528.read())) {
        weights_96_96_1x1_ce0 = grp_subconv_1x1_8p_p_fu_7218_weight_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state612.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state550.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state574.read()))) {
        weights_96_96_1x1_ce0 = grp_subconv_1x1_4_p_fu_7206_weight_ce0.read();
    } else {
        weights_96_96_1x1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state523.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state545.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state569.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state585.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state607.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state626.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state648.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state667.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state689.read()))) {
        weights_96_96_1x1_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_we0 = ap_const_logic_0;
    }
}

}

