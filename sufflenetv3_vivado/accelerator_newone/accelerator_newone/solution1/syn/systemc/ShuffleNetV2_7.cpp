#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_1110_fu_15901_p3() {
    tmp_1110_fu_15901_p3 = esl_concat<7,3>(tmp_410_fu_15895_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1111_cast_cast_fu_28196_p1() {
    tmp_1111_cast_cast_fu_28196_p1 = esl_sext<9,8>(tmp_829_fu_28190_p2.read());
}

void ShuffleNetV2::thread_tmp_1111_fu_15913_p3() {
    tmp_1111_fu_15913_p3 = esl_concat<7,1>(tmp_410_fu_15895_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1112_cast_fu_10084_p1() {
    tmp_1112_cast_fu_10084_p1 = esl_zext<64,15>(tmp_850_fu_10079_p2.read());
}

void ShuffleNetV2::thread_tmp_1112_fu_15925_p2() {
    tmp_1112_fu_15925_p2 = (!p_shl438_cast_fu_15921_p1.read().is_01() || !p_shl437_cast_fu_15909_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl438_cast_fu_15921_p1.read()) + sc_biguint<11>(p_shl437_cast_fu_15909_p1.read()));
}

void ShuffleNetV2::thread_tmp_1113_cast1_fu_10094_p1() {
    tmp_1113_cast1_fu_10094_p1 = esl_zext<64,9>(tmp_852_reg_31529.read());
}

void ShuffleNetV2::thread_tmp_1113_cast_fu_28216_p1() {
    tmp_1113_cast_fu_28216_p1 = esl_sext<10,9>(tmp_830_reg_37371.read());
}

void ShuffleNetV2::thread_tmp_1113_fu_15931_p3() {
    tmp_1113_fu_15931_p3 = esl_concat<6,3>(co95_reg_4829.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1114_cast_fu_10241_p1() {
    tmp_1114_cast_fu_10241_p1 = esl_sext<64,15>(tmp_853_fu_10236_p2.read());
}

void ShuffleNetV2::thread_tmp_1114_fu_15943_p3() {
    tmp_1114_fu_15943_p3 = esl_concat<6,1>(co95_reg_4829.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1115_cast1_fu_10251_p1() {
    tmp_1115_cast1_fu_10251_p1 = esl_sext<64,11>(tmp_854_reg_31578.read());
}

void ShuffleNetV2::thread_tmp_1115_cast_fu_28280_p1() {
    tmp_1115_cast_fu_28280_p1 = esl_sext<32,8>(tmp_833_reg_37377.read());
}

void ShuffleNetV2::thread_tmp_1115_fu_15955_p2() {
    tmp_1115_fu_15955_p2 = (!p_shl436_cast_fu_15951_p1.read().is_01() || !p_shl435_cast_fu_15939_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl436_cast_fu_15951_p1.read()) + sc_biguint<10>(p_shl435_cast_fu_15939_p1.read()));
}

void ShuffleNetV2::thread_tmp_1116_fu_15818_p2() {
    tmp_1116_fu_15818_p2 = (!tmp_411_cast_fu_15814_p1.read().is_01() || !tmp_1099_reg_33365.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_411_cast_fu_15814_p1.read()) + sc_biguint<10>(tmp_1099_reg_33365.read()));
}

void ShuffleNetV2::thread_tmp_1117_fu_15823_p3() {
    tmp_1117_fu_15823_p3 = esl_concat<10,3>(tmp_1116_fu_15818_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1118_cast_fu_28589_p1() {
    tmp_1118_cast_fu_28589_p1 = esl_sext<13,10>(tmp_841_fu_28583_p2.read());
}

void ShuffleNetV2::thread_tmp_1118_fu_15835_p3() {
    tmp_1118_fu_15835_p3 = esl_concat<10,1>(tmp_1116_fu_15818_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1119_fu_15847_p2() {
    tmp_1119_fu_15847_p2 = (!p_shl433_cast_fu_15831_p1.read().is_01() || !p_shl434_cast_fu_15843_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl433_cast_fu_15831_p1.read()) + sc_biguint<15>(p_shl434_cast_fu_15843_p1.read()));
}

void ShuffleNetV2::thread_tmp_1120_fu_16106_p1() {
    tmp_1120_fu_16106_p1 = co97_reg_4862.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1121_fu_15981_p2() {
    tmp_1121_fu_15981_p2 = (!tmp_413_cast_fu_15977_p1.read().is_01() || !tmp_1115_reg_33414.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_413_cast_fu_15977_p1.read()) + sc_biguint<10>(tmp_1115_reg_33414.read()));
}

void ShuffleNetV2::thread_tmp_1122_fu_15986_p3() {
    tmp_1122_fu_15986_p3 = esl_concat<10,3>(tmp_1121_fu_15981_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1123_fu_15998_p3() {
    tmp_1123_fu_15998_p3 = esl_concat<10,1>(tmp_1121_fu_15981_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1124_fu_16010_p2() {
    tmp_1124_fu_16010_p2 = (!p_shl441_cast_fu_15994_p1.read().is_01() || !p_shl442_cast_fu_16006_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl441_cast_fu_15994_p1.read()) + sc_biguint<14>(p_shl442_cast_fu_16006_p1.read()));
}

void ShuffleNetV2::thread_tmp_1125_fu_16016_p2() {
    tmp_1125_fu_16016_p2 = (!tmp_413_cast1_fu_15973_p1.read().is_01() || !tmp_1112_reg_33409.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_413_cast1_fu_15973_p1.read()) + sc_biguint<11>(tmp_1112_reg_33409.read()));
}

void ShuffleNetV2::thread_tmp_1126_fu_16021_p3() {
    tmp_1126_fu_16021_p3 = esl_concat<11,3>(tmp_1125_fu_16016_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1127_fu_16033_p3() {
    tmp_1127_fu_16033_p3 = esl_concat<11,1>(tmp_1125_fu_16016_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1128_fu_16045_p2() {
    tmp_1128_fu_16045_p2 = (!p_shl439_cast_fu_16029_p1.read().is_01() || !p_shl440_cast_fu_16041_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl439_cast_fu_16029_p1.read()) + sc_biguint<15>(p_shl440_cast_fu_16041_p1.read()));
}

void ShuffleNetV2::thread_tmp_1129_fu_15869_p2() {
    tmp_1129_fu_15869_p2 = (!tmp_1119_reg_33378.read().is_01() || !tmp_414_cast1_fu_15865_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1119_reg_33378.read()) + sc_biguint<15>(tmp_414_cast1_fu_15865_p1.read()));
}

void ShuffleNetV2::thread_tmp_1130_cast_fu_29188_p1() {
    tmp_1130_cast_fu_29188_p1 = esl_zext<8,3>(p_lshr_f26_cast_fu_29178_p4.read());
}

void ShuffleNetV2::thread_tmp_1130_fu_16071_p2() {
    tmp_1130_fu_16071_p2 = (!tmp_1124_reg_33427.read().is_01() || !tmp_418_cast2_fu_16067_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1124_reg_33427.read()) + sc_biguint<14>(tmp_418_cast2_fu_16067_p1.read()));
}

void ShuffleNetV2::thread_tmp_1131_cast_fu_10661_p1() {
    tmp_1131_cast_fu_10661_p1 = esl_sext<15,14>(tmp_896_fu_10655_p2.read());
}

void ShuffleNetV2::thread_tmp_1131_fu_16076_p2() {
    tmp_1131_fu_16076_p2 = (!tmp_1128_reg_33432.read().is_01() || !tmp_418_cast1_fu_16063_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1128_reg_33432.read()) + sc_biguint<15>(tmp_418_cast1_fu_16063_p1.read()));
}

void ShuffleNetV2::thread_tmp_1132_fu_16396_p1() {
    tmp_1132_fu_16396_p1 = k14_reg_4906.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1133_fu_16195_p1() {
    tmp_1133_fu_16195_p1 = i70_reg_4884.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1134_cast_fu_29446_p1() {
    tmp_1134_cast_fu_29446_p1 = esl_sext<12,8>(tmp_856_fu_29440_p2.read());
}

void ShuffleNetV2::thread_tmp_1134_fu_16310_p3() {
    tmp_1134_fu_16310_p3 = esl_concat<9,5>(tmp_425_reg_33504.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1135_fu_16317_p1() {
    tmp_1135_fu_16317_p1 = esl_sext<15,14>(tmp_1134_fu_16310_p3.read());
}

void ShuffleNetV2::thread_tmp_1136_fu_16325_p3() {
    tmp_1136_fu_16325_p3 = esl_concat<9,3>(tmp_425_reg_33504.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1137_fu_16332_p1() {
    tmp_1137_fu_16332_p1 = esl_sext<13,12>(tmp_1136_fu_16325_p3.read());
}

void ShuffleNetV2::thread_tmp_1138_cast_fu_29470_p1() {
    tmp_1138_cast_fu_29470_p1 = esl_sext<32,8>(tmp_859_reg_37749.read());
}

void ShuffleNetV2::thread_tmp_1138_fu_16340_p2() {
    tmp_1138_fu_16340_p2 = (!p_shl445_cast_fu_16321_p1.read().is_01() || !p_shl446_cast_fu_16336_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl445_cast_fu_16321_p1.read()) - sc_biguint<16>(p_shl446_cast_fu_16336_p1.read()));
}

void ShuffleNetV2::thread_tmp_1139_fu_16350_p2() {
    tmp_1139_fu_16350_p2 = (!tmp_415_cast_reg_33486.read().is_01() || !tmp_1447_cast_fu_16346_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_415_cast_reg_33486.read()) + sc_bigint<17>(tmp_1447_cast_fu_16346_p1.read()));
}

void ShuffleNetV2::thread_tmp_1140_fu_16279_p3() {
    tmp_1140_fu_16279_p3 = esl_concat<7,6>(tmp_427_fu_16274_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1141_fu_16287_p3() {
    tmp_1141_fu_16287_p3 = esl_concat<7,4>(tmp_427_fu_16274_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1142_fu_16299_p2() {
    tmp_1142_fu_16299_p2 = (!tmp_1140_fu_16279_p3.read().is_01() || !p_shl444_cast_fu_16295_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1140_fu_16279_p3.read()) - sc_bigint<13>(p_shl444_cast_fu_16295_p1.read()));
}

void ShuffleNetV2::thread_tmp_1143_cast_fu_10401_p1() {
    tmp_1143_cast_fu_10401_p1 = esl_zext<64,15>(tmp_904_fu_10396_p2.read());
}

void ShuffleNetV2::thread_tmp_1143_fu_16305_p2() {
    tmp_1143_fu_16305_p2 = (!tmp_417_cast_reg_33491.read().is_01() || !tmp_1142_fu_16299_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_417_cast_reg_33491.read()) + sc_biguint<13>(tmp_1142_fu_16299_p2.read()));
}

void ShuffleNetV2::thread_tmp_1144_cast_fu_10720_p1() {
    tmp_1144_cast_fu_10720_p1 = esl_sext<64,15>(tmp_905_fu_10715_p2.read());
}

void ShuffleNetV2::thread_tmp_1144_fu_16832_p1() {
    tmp_1144_fu_16832_p1 = co101_reg_4983.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1145_cast1_fu_10730_p1() {
    tmp_1145_cast1_fu_10730_p1 = esl_sext<64,11>(tmp_906_reg_31725.read());
}

void ShuffleNetV2::thread_tmp_1145_cast_fu_29271_p1() {
    tmp_1145_cast_fu_29271_p1 = esl_sext<13,10>(tmp_861_fu_29265_p2.read());
}

void ShuffleNetV2::thread_tmp_1145_fu_16746_p1() {
    tmp_1145_fu_16746_p1 = k16_reg_4972.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1146_cast_fu_10605_p1() {
    tmp_1146_cast_fu_10605_p1 = esl_zext<64,14>(tmp_907_reg_31684.read());
}

void ShuffleNetV2::thread_tmp_1146_fu_16538_p1() {
    tmp_1146_fu_16538_p1 = i76_reg_4950.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1147_cast_fu_10600_p1() {
    tmp_1147_cast_fu_10600_p1 = esl_zext<64,15>(tmp_908_fu_10595_p2.read());
}

void ShuffleNetV2::thread_tmp_1147_fu_16595_p3() {
    tmp_1147_fu_16595_p3 = esl_concat<9,2>(tmp_440_reg_33623.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1148_fu_16606_p2() {
    tmp_1148_fu_16606_p2 = (!p_shl450_cast_fu_16602_p1.read().is_01() || !tmp_441_cast1_fu_16592_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl450_cast_fu_16602_p1.read()) - sc_biguint<12>(tmp_441_cast1_fu_16592_p1.read()));
}

void ShuffleNetV2::thread_tmp_1149_fu_16612_p2() {
    tmp_1149_fu_16612_p2 = (!tmp_428_cast_reg_33592.read().is_01() || !tmp_1148_fu_16606_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_428_cast_reg_33592.read()) + sc_biguint<12>(tmp_1148_fu_16606_p2.read()));
}

void ShuffleNetV2::thread_tmp_1150_cast_fu_10816_p1() {
    tmp_1150_cast_fu_10816_p1 = esl_sext<11,10>(tmp_911_fu_10810_p2.read());
}

void ShuffleNetV2::thread_tmp_1150_fu_16621_p3() {
    tmp_1150_fu_16621_p3 = esl_concat<12,2>(tmp_1149_fu_16612_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1151_fu_16633_p2() {
    tmp_1151_fu_16633_p2 = (!p_shl449_cast_fu_16629_p1.read().is_01() || !tmp_1465_cast_fu_16617_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl449_cast_fu_16629_p1.read()) - sc_bigint<15>(tmp_1465_cast_fu_16617_p1.read()));
}

void ShuffleNetV2::thread_tmp_1152_cast1_fu_10842_p1() {
    tmp_1152_cast1_fu_10842_p1 = esl_sext<9,8>(tmp_913_fu_10836_p2.read());
}

void ShuffleNetV2::thread_tmp_1152_cast_fu_29786_p1() {
    tmp_1152_cast_fu_29786_p1 = esl_sext<12,8>(tmp_869_fu_29780_p2.read());
}

void ShuffleNetV2::thread_tmp_1152_fu_16639_p2() {
    tmp_1152_fu_16639_p2 = (!tmp_435_cast_reg_33610.read().is_01() || !tmp_1151_fu_16633_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_435_cast_reg_33610.read()) + sc_biguint<15>(tmp_1151_fu_16633_p2.read()));
}

void ShuffleNetV2::thread_tmp_1153_cast_fu_10871_p1() {
    tmp_1153_cast_fu_10871_p1 = esl_sext<15,11>(tmp_914_fu_10866_p2.read());
}

void ShuffleNetV2::thread_tmp_1153_fu_16651_p3() {
    tmp_1153_fu_16651_p3 = esl_concat<7,2>(tmp_442_reg_33629.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1154_fu_16658_p1() {
    tmp_1154_fu_16658_p1 = esl_sext<34,9>(tmp_1153_fu_16651_p3.read());
}

void ShuffleNetV2::thread_tmp_1155_fu_16666_p2() {
    tmp_1155_fu_16666_p2 = (!p_shl448_cast_fu_16662_p1.read().is_01() || !tmp_443_cast_fu_16647_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl448_cast_fu_16662_p1.read()) - sc_biguint<35>(tmp_443_cast_fu_16647_p1.read()));
}

void ShuffleNetV2::thread_tmp_1156_cast_fu_29810_p1() {
    tmp_1156_cast_fu_29810_p1 = esl_sext<32,8>(tmp_872_reg_37889.read());
}

void ShuffleNetV2::thread_tmp_1156_fu_16676_p2() {
    tmp_1156_fu_16676_p2 = (!tmp_428_cast1_reg_33587.read().is_01() || !tmp_1471_cast_fu_16672_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_428_cast1_reg_33587.read()) + sc_bigint<36>(tmp_1471_cast_fu_16672_p1.read()));
}

void ShuffleNetV2::thread_tmp_1157_fu_16681_p1() {
    tmp_1157_fu_16681_p1 = tmp_1156_fu_16676_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1158_fu_16685_p1() {
    tmp_1158_fu_16685_p1 = tmp_1156_fu_16676_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1159_fu_16700_p2() {
    tmp_1159_fu_16700_p2 = (!p_shl447_cast_fu_16693_p3.read().is_01() || !tmp_1157_reg_33640.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl447_cast_fu_16693_p3.read()) - sc_biguint<10>(tmp_1157_reg_33640.read()));
}

void ShuffleNetV2::thread_tmp_1160_cast_fu_29876_p1() {
    tmp_1160_cast_fu_29876_p1 = esl_zext<8,3>(p_lshr_f27_cast_fu_29866_p4.read());
}

void ShuffleNetV2::thread_tmp_1160_fu_16705_p2() {
    tmp_1160_fu_16705_p2 = (!tmp_435_cast1_reg_33605.read().is_01() || !tmp_1159_fu_16700_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_435_cast1_reg_33605.read()) + sc_biguint<10>(tmp_1159_fu_16700_p2.read()));
}

void ShuffleNetV2::thread_tmp_1161_fu_17196_p3() {
    tmp_1161_fu_17196_p3 = esl_concat<6,3>(co103_reg_5038.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1162_cast_fu_30134_p1() {
    tmp_1162_cast_fu_30134_p1 = esl_sext<12,8>(tmp_885_fu_30128_p2.read());
}

void ShuffleNetV2::thread_tmp_1162_fu_17208_p3() {
    tmp_1162_fu_17208_p3 = esl_concat<6,1>(co103_reg_5038.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1163_cast_fu_11035_p1() {
    tmp_1163_cast_fu_11035_p1 = esl_sext<15,14>(tmp_922_fu_11029_p2.read());
}

void ShuffleNetV2::thread_tmp_1163_fu_17220_p2() {
    tmp_1163_fu_17220_p2 = (!p_shl456_cast_fu_17216_p1.read().is_01() || !p_shl455_cast_fu_17204_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl456_cast_fu_17216_p1.read()) + sc_biguint<10>(p_shl455_cast_fu_17204_p1.read()));
}

void ShuffleNetV2::thread_tmp_1164_fu_17114_p1() {
    tmp_1164_fu_17114_p1 = k18_reg_5027.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1165_fu_16921_p1() {
    tmp_1165_fu_16921_p1 = i78_reg_5005.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1166_cast_fu_30158_p1() {
    tmp_1166_cast_fu_30158_p1 = esl_sext<32,8>(tmp_888_reg_37995.read());
}

void ShuffleNetV2::thread_tmp_1166_fu_17036_p3() {
    tmp_1166_fu_17036_p3 = esl_concat<11,5>(tmp_450_reg_33750.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1167_cast_fu_10935_p1() {
    tmp_1167_cast_fu_10935_p1 = esl_zext<64,15>(tmp_926_fu_10930_p2.read());
}

void ShuffleNetV2::thread_tmp_1167_fu_17047_p3() {
    tmp_1167_fu_17047_p3 = esl_concat<11,3>(tmp_450_reg_33750.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1168_cast_fu_10945_p1() {
    tmp_1168_cast_fu_10945_p1 = esl_zext<64,9>(tmp_927_reg_31792.read());
}

void ShuffleNetV2::thread_tmp_1168_fu_17058_p2() {
    tmp_1168_fu_17058_p2 = (!p_shl453_cast_fu_17043_p1.read().is_01() || !p_shl454_cast_fu_17054_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl453_cast_fu_17043_p1.read()) - sc_biguint<17>(p_shl454_cast_fu_17054_p1.read()));
}

void ShuffleNetV2::thread_tmp_1169_cast_fu_11094_p1() {
    tmp_1169_cast_fu_11094_p1 = esl_sext<64,15>(tmp_928_fu_11089_p2.read());
}

void ShuffleNetV2::thread_tmp_1169_fu_17068_p2() {
    tmp_1169_fu_17068_p2 = (!tmp_436_cast_reg_33732.read().is_01() || !tmp_1485_cast_fu_17064_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_436_cast_reg_33732.read()) + sc_bigint<18>(tmp_1485_cast_fu_17064_p1.read()));
}

void ShuffleNetV2::thread_tmp_1170_cast_fu_11104_p1() {
    tmp_1170_cast_fu_11104_p1 = esl_sext<64,11>(tmp_929_reg_31841.read());
}

void ShuffleNetV2::thread_tmp_1170_fu_17005_p3() {
    tmp_1170_fu_17005_p3 = esl_concat<7,6>(tmp_452_fu_17000_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1171_cast_fu_29584_p1() {
    tmp_1171_cast_fu_29584_p1 = esl_sext<11,8>(tmp_878_fu_29578_p2.read());
}

void ShuffleNetV2::thread_tmp_1171_fu_17013_p3() {
    tmp_1171_fu_17013_p3 = esl_concat<7,4>(tmp_452_fu_17000_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1172_fu_17025_p2() {
    tmp_1172_fu_17025_p2 = (!tmp_1170_fu_17005_p3.read().is_01() || !p_shl452_cast_fu_17021_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1170_fu_17005_p3.read()) - sc_bigint<13>(p_shl452_cast_fu_17021_p1.read()));
}

void ShuffleNetV2::thread_tmp_1173_fu_17031_p2() {
    tmp_1173_fu_17031_p2 = (!tmp_438_cast_reg_33737.read().is_01() || !tmp_1172_fu_17025_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_438_cast_reg_33737.read()) + sc_biguint<13>(tmp_1172_fu_17025_p2.read()));
}

void ShuffleNetV2::thread_tmp_1174_fu_17325_p3() {
    tmp_1174_fu_17325_p3 = esl_concat<7,3>(tmp_453_fu_17319_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1175_cast_fu_29650_p1() {
    tmp_1175_cast_fu_29650_p1 = esl_sext<32,8>(tmp_883_reg_37827.read());
}

void ShuffleNetV2::thread_tmp_1175_fu_17337_p3() {
    tmp_1175_fu_17337_p3 = esl_concat<7,1>(tmp_453_fu_17319_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1176_fu_17349_p2() {
    tmp_1176_fu_17349_p2 = (!p_shl462_cast_fu_17345_p1.read().is_01() || !p_shl461_cast_fu_17333_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl462_cast_fu_17345_p1.read()) + sc_biguint<11>(p_shl461_cast_fu_17333_p1.read()));
}

void ShuffleNetV2::thread_tmp_1177_fu_17355_p3() {
    tmp_1177_fu_17355_p3 = esl_concat<6,3>(co105_reg_5071.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1178_cast_fu_29959_p1() {
    tmp_1178_cast_fu_29959_p1 = esl_sext<13,10>(tmp_890_fu_29953_p2.read());
}

void ShuffleNetV2::thread_tmp_1178_fu_17367_p3() {
    tmp_1178_fu_17367_p3 = esl_concat<6,1>(co105_reg_5071.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1179_fu_17379_p2() {
    tmp_1179_fu_17379_p2 = (!p_shl460_cast_fu_17375_p1.read().is_01() || !p_shl459_cast_fu_17363_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl460_cast_fu_17375_p1.read()) + sc_biguint<10>(p_shl459_cast_fu_17363_p1.read()));
}

void ShuffleNetV2::thread_tmp_1180_cast_fu_11254_p1() {
    tmp_1180_cast_fu_11254_p1 = esl_zext<64,15>(tmp_935_fu_11249_p2.read());
}

void ShuffleNetV2::thread_tmp_1180_fu_17242_p2() {
    tmp_1180_fu_17242_p2 = (!tmp_454_cast_fu_17238_p1.read().is_01() || !tmp_1163_reg_33815.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_454_cast_fu_17238_p1.read()) + sc_biguint<10>(tmp_1163_reg_33815.read()));
}

void ShuffleNetV2::thread_tmp_1181_fu_17247_p3() {
    tmp_1181_fu_17247_p3 = esl_concat<10,3>(tmp_1180_fu_17242_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1182_fu_17259_p3() {
    tmp_1182_fu_17259_p3 = esl_concat<10,1>(tmp_1180_fu_17242_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1183_fu_17271_p2() {
    tmp_1183_fu_17271_p2 = (!p_shl457_cast_fu_17255_p1.read().is_01() || !p_shl458_cast_fu_17267_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl457_cast_fu_17255_p1.read()) + sc_biguint<15>(p_shl458_cast_fu_17267_p1.read()));
}

void ShuffleNetV2::thread_tmp_1184_fu_17530_p1() {
    tmp_1184_fu_17530_p1 = co107_reg_5104.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1185_fu_17405_p2() {
    tmp_1185_fu_17405_p2 = (!tmp_456_cast1_fu_17401_p1.read().is_01() || !tmp_1179_reg_33864.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_456_cast1_fu_17401_p1.read()) + sc_biguint<10>(tmp_1179_reg_33864.read()));
}

void ShuffleNetV2::thread_tmp_1186_fu_17410_p3() {
    tmp_1186_fu_17410_p3 = esl_concat<10,3>(tmp_1185_fu_17405_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1187_cast_fu_11507_p1() {
    tmp_1187_cast_fu_11507_p1 = esl_sext<16,15>(tmp_938_fu_11501_p2.read());
}

void ShuffleNetV2::thread_tmp_1187_fu_17422_p3() {
    tmp_1187_fu_17422_p3 = esl_concat<10,1>(tmp_1185_fu_17405_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1188_cast_fu_11516_p1() {
    tmp_1188_cast_fu_11516_p1 = esl_sext<64,16>(tmp_939_fu_11511_p2.read());
}

void ShuffleNetV2::thread_tmp_1188_fu_17434_p2() {
    tmp_1188_fu_17434_p2 = (!p_shl465_cast_fu_17418_p1.read().is_01() || !p_shl466_cast_fu_17430_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl465_cast_fu_17418_p1.read()) + sc_biguint<14>(p_shl466_cast_fu_17430_p1.read()));
}

void ShuffleNetV2::thread_tmp_1189_fu_17440_p2() {
    tmp_1189_fu_17440_p2 = (!tmp_456_cast_fu_17397_p1.read().is_01() || !tmp_1176_reg_33859.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_456_cast_fu_17397_p1.read()) + sc_biguint<11>(tmp_1176_reg_33859.read()));
}

void ShuffleNetV2::thread_tmp_1190_fu_17445_p3() {
    tmp_1190_fu_17445_p3 = esl_concat<11,3>(tmp_1189_fu_17440_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1191_fu_17457_p3() {
    tmp_1191_fu_17457_p3 = esl_concat<11,1>(tmp_1189_fu_17440_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1192_fu_17469_p2() {
    tmp_1192_fu_17469_p2 = (!p_shl463_cast_fu_17453_p1.read().is_01() || !p_shl464_cast_fu_17465_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl463_cast_fu_17453_p1.read()) + sc_biguint<15>(p_shl464_cast_fu_17465_p1.read()));
}

void ShuffleNetV2::thread_tmp_1193_fu_17293_p2() {
    tmp_1193_fu_17293_p2 = (!tmp_1183_reg_33828.read().is_01() || !tmp_457_cast_fu_17289_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1183_reg_33828.read()) + sc_biguint<15>(tmp_457_cast_fu_17289_p1.read()));
}

void ShuffleNetV2::thread_tmp_1194_fu_17495_p2() {
    tmp_1194_fu_17495_p2 = (!tmp_1188_reg_33877.read().is_01() || !tmp_461_cast_fu_17491_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1188_reg_33877.read()) + sc_biguint<14>(tmp_461_cast_fu_17491_p1.read()));
}

void ShuffleNetV2::thread_tmp_1195_fu_17500_p2() {
    tmp_1195_fu_17500_p2 = (!tmp_1192_reg_33882.read().is_01() || !tmp_461_cast1_fu_17487_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1192_reg_33882.read()) + sc_biguint<15>(tmp_461_cast1_fu_17487_p1.read()));
}

void ShuffleNetV2::thread_tmp_1196_cast_fu_11521_p1() {
    tmp_1196_cast_fu_11521_p1 = esl_sext<64,13>(tmp_943_reg_31958.read());
}

void ShuffleNetV2::thread_tmp_1196_fu_17812_p1() {
    tmp_1196_fu_17812_p1 = k20_reg_5148.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1197_fu_17619_p1() {
    tmp_1197_fu_17619_p1 = i82_reg_5126.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1198_fu_17734_p3() {
    tmp_1198_fu_17734_p3 = esl_concat<11,5>(tmp_468_reg_33954.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1199_fu_17745_p3() {
    tmp_1199_fu_17745_p3 = esl_concat<11,3>(tmp_468_reg_33954.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1200_fu_17756_p2() {
    tmp_1200_fu_17756_p2 = (!p_shl469_cast_fu_17741_p1.read().is_01() || !p_shl470_cast_fu_17752_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl469_cast_fu_17741_p1.read()) - sc_biguint<17>(p_shl470_cast_fu_17752_p1.read()));
}

void ShuffleNetV2::thread_tmp_1201_fu_17766_p2() {
    tmp_1201_fu_17766_p2 = (!tmp_458_cast_reg_33936.read().is_01() || !tmp_1524_cast_fu_17762_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_458_cast_reg_33936.read()) + sc_bigint<18>(tmp_1524_cast_fu_17762_p1.read()));
}

void ShuffleNetV2::thread_tmp_1202_fu_17703_p3() {
    tmp_1202_fu_17703_p3 = esl_concat<7,6>(tmp_470_fu_17698_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1203_fu_17711_p3() {
    tmp_1203_fu_17711_p3 = esl_concat<7,4>(tmp_470_fu_17698_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1204_cast_fu_11769_p1() {
    tmp_1204_cast_fu_11769_p1 = esl_sext<12,11>(tmp_945_fu_11763_p2.read());
}

void ShuffleNetV2::thread_tmp_1204_fu_17723_p2() {
    tmp_1204_fu_17723_p2 = (!tmp_1202_fu_17703_p3.read().is_01() || !p_shl468_cast_fu_17719_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1202_fu_17703_p3.read()) - sc_bigint<13>(p_shl468_cast_fu_17719_p1.read()));
}

void ShuffleNetV2::thread_tmp_1205_cast_fu_11778_p1() {
    tmp_1205_cast_fu_11778_p1 = esl_sext<15,12>(tmp_946_fu_11773_p2.read());
}

void ShuffleNetV2::thread_tmp_1205_fu_17729_p2() {
    tmp_1205_fu_17729_p2 = (!tmp_460_cast1_reg_33941.read().is_01() || !tmp_1204_fu_17723_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_460_cast1_reg_33941.read()) + sc_biguint<13>(tmp_1204_fu_17723_p2.read()));
}

void ShuffleNetV2::thread_tmp_1206_fu_18240_p1() {
    tmp_1206_fu_18240_p1 = co111_reg_5225.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1207_fu_18158_p1() {
    tmp_1207_fu_18158_p1 = k22_reg_5214.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1208_cast_fu_11850_p1() {
    tmp_1208_cast_fu_11850_p1 = esl_zext<64,15>(tmp_948_reg_32083.read());
}

void ShuffleNetV2::thread_tmp_1208_fu_17950_p1() {
    tmp_1208_fu_17950_p1 = i88_reg_5192.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1209_fu_18007_p3() {
    tmp_1209_fu_18007_p3 = esl_concat<9,2>(tmp_483_reg_34073.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1210_fu_18018_p2() {
    tmp_1210_fu_18018_p2 = (!p_shl474_cast_fu_18014_p1.read().is_01() || !tmp_484_cast_fu_18004_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl474_cast_fu_18014_p1.read()) - sc_biguint<12>(tmp_484_cast_fu_18004_p1.read()));
}

void ShuffleNetV2::thread_tmp_1211_cast_fu_11833_p1() {
    tmp_1211_cast_fu_11833_p1 = esl_sext<36,35>(tmp_951_fu_11827_p2.read());
}

void ShuffleNetV2::thread_tmp_1211_fu_18024_p2() {
    tmp_1211_fu_18024_p2 = (!tmp_471_cast2_reg_34042.read().is_01() || !tmp_1210_fu_18018_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_471_cast2_reg_34042.read()) + sc_biguint<12>(tmp_1210_fu_18018_p2.read()));
}

void ShuffleNetV2::thread_tmp_1212_fu_18033_p3() {
    tmp_1212_fu_18033_p3 = esl_concat<12,2>(tmp_1211_fu_18024_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1213_fu_18045_p2() {
    tmp_1213_fu_18045_p2 = (!p_shl473_cast_fu_18041_p1.read().is_01() || !tmp_1542_cast_fu_18029_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl473_cast_fu_18041_p1.read()) - sc_bigint<15>(tmp_1542_cast_fu_18029_p1.read()));
}

void ShuffleNetV2::thread_tmp_1214_fu_18051_p2() {
    tmp_1214_fu_18051_p2 = (!tmp_478_cast_reg_34060.read().is_01() || !tmp_1213_fu_18045_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_478_cast_reg_34060.read()) + sc_biguint<15>(tmp_1213_fu_18045_p2.read()));
}

void ShuffleNetV2::thread_tmp_1215_cast_fu_11871_p1() {
    tmp_1215_cast_fu_11871_p1 = esl_zext<64,10>(tmp_955_reg_32103.read());
}

void ShuffleNetV2::thread_tmp_1215_fu_18063_p3() {
    tmp_1215_fu_18063_p3 = esl_concat<7,2>(tmp_485_reg_34079.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1216_fu_18070_p1() {
    tmp_1216_fu_18070_p1 = esl_sext<34,9>(tmp_1215_fu_18063_p3.read());
}

void ShuffleNetV2::thread_tmp_1217_fu_18078_p2() {
    tmp_1217_fu_18078_p2 = (!p_shl472_cast_fu_18074_p1.read().is_01() || !tmp_486_cast_fu_18059_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl472_cast_fu_18074_p1.read()) - sc_biguint<35>(tmp_486_cast_fu_18059_p1.read()));
}

void ShuffleNetV2::thread_tmp_1218_fu_18088_p2() {
    tmp_1218_fu_18088_p2 = (!tmp_471_cast1_reg_34037.read().is_01() || !tmp_1548_cast_fu_18084_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_471_cast1_reg_34037.read()) + sc_bigint<36>(tmp_1548_cast_fu_18084_p1.read()));
}

void ShuffleNetV2::thread_tmp_1219_fu_18093_p1() {
    tmp_1219_fu_18093_p1 = tmp_1218_fu_18088_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1220_fu_18097_p1() {
    tmp_1220_fu_18097_p1 = tmp_1218_fu_18088_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1221_fu_18112_p2() {
    tmp_1221_fu_18112_p2 = (!p_shl471_cast_fu_18105_p3.read().is_01() || !tmp_1219_reg_34090.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl471_cast_fu_18105_p3.read()) - sc_biguint<10>(tmp_1219_reg_34090.read()));
}

void ShuffleNetV2::thread_tmp_1222_cast_fu_12225_p1() {
    tmp_1222_cast_fu_12225_p1 = esl_sext<16,15>(tmp_960_fu_12219_p2.read());
}

void ShuffleNetV2::thread_tmp_1222_fu_18117_p2() {
    tmp_1222_fu_18117_p2 = (!tmp_478_cast1_reg_34055.read().is_01() || !tmp_1221_fu_18112_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_478_cast1_reg_34055.read()) + sc_biguint<10>(tmp_1221_fu_18112_p2.read()));
}

void ShuffleNetV2::thread_tmp_1223_cast_fu_12234_p1() {
    tmp_1223_cast_fu_12234_p1 = esl_sext<64,16>(tmp_961_fu_12229_p2.read());
}

void ShuffleNetV2::thread_tmp_1223_fu_18600_p3() {
    tmp_1223_fu_18600_p3 = esl_concat<6,3>(co113_reg_5280.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1224_fu_18612_p3() {
    tmp_1224_fu_18612_p3 = esl_concat<6,1>(co113_reg_5280.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1225_fu_18624_p2() {
    tmp_1225_fu_18624_p2 = (!p_shl480_cast_fu_18620_p1.read().is_01() || !p_shl479_cast_fu_18608_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl480_cast_fu_18620_p1.read()) + sc_biguint<10>(p_shl479_cast_fu_18608_p1.read()));
}

void ShuffleNetV2::thread_tmp_1226_fu_18522_p1() {
    tmp_1226_fu_18522_p1 = k24_reg_5269.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1227_fu_18329_p1() {
    tmp_1227_fu_18329_p1 = i90_reg_5247.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1228_fu_18444_p3() {
    tmp_1228_fu_18444_p3 = esl_concat<11,5>(tmp_493_reg_34200.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1229_fu_18455_p3() {
    tmp_1229_fu_18455_p3 = esl_concat<11,3>(tmp_493_reg_34200.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1230_fu_18466_p2() {
    tmp_1230_fu_18466_p2 = (!p_shl477_cast_fu_18451_p1.read().is_01() || !p_shl478_cast_fu_18462_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl477_cast_fu_18451_p1.read()) - sc_biguint<17>(p_shl478_cast_fu_18462_p1.read()));
}

void ShuffleNetV2::thread_tmp_1231_cast_fu_12239_p1() {
    tmp_1231_cast_fu_12239_p1 = esl_sext<64,13>(tmp_965_reg_32204.read());
}

void ShuffleNetV2::thread_tmp_1231_fu_18476_p2() {
    tmp_1231_fu_18476_p2 = (!tmp_479_cast_reg_34182.read().is_01() || !tmp_1562_cast_fu_18472_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_479_cast_reg_34182.read()) + sc_bigint<18>(tmp_1562_cast_fu_18472_p1.read()));
}

void ShuffleNetV2::thread_tmp_1232_fu_18413_p3() {
    tmp_1232_fu_18413_p3 = esl_concat<7,6>(tmp_495_fu_18408_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1233_fu_18421_p3() {
    tmp_1233_fu_18421_p3 = esl_concat<7,4>(tmp_495_fu_18408_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1234_fu_18433_p2() {
    tmp_1234_fu_18433_p2 = (!tmp_1232_fu_18413_p3.read().is_01() || !p_shl476_cast_fu_18429_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1232_fu_18413_p3.read()) - sc_bigint<13>(p_shl476_cast_fu_18429_p1.read()));
}

void ShuffleNetV2::thread_tmp_1235_fu_18439_p2() {
    tmp_1235_fu_18439_p2 = (!tmp_481_cast1_reg_34187.read().is_01() || !tmp_1234_fu_18433_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_481_cast1_reg_34187.read()) + sc_biguint<13>(tmp_1234_fu_18433_p2.read()));
}

void ShuffleNetV2::thread_tmp_1236_fu_18729_p3() {
    tmp_1236_fu_18729_p3 = esl_concat<7,3>(tmp_496_fu_18723_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1237_fu_18741_p3() {
    tmp_1237_fu_18741_p3 = esl_concat<7,1>(tmp_496_fu_18723_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1238_fu_18753_p2() {
    tmp_1238_fu_18753_p2 = (!p_shl486_cast_fu_18749_p1.read().is_01() || !p_shl485_cast_fu_18737_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl486_cast_fu_18749_p1.read()) + sc_biguint<11>(p_shl485_cast_fu_18737_p1.read()));
}

void ShuffleNetV2::thread_tmp_1239_fu_18759_p3() {
    tmp_1239_fu_18759_p3 = esl_concat<6,3>(co115_reg_5313.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1240_cast_fu_12496_p1() {
    tmp_1240_cast_fu_12496_p1 = esl_sext<15,11>(tmp_971_fu_12491_p2.read());
}

void ShuffleNetV2::thread_tmp_1240_fu_18771_p3() {
    tmp_1240_fu_18771_p3 = esl_concat<6,1>(co115_reg_5313.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1241_fu_18783_p2() {
    tmp_1241_fu_18783_p2 = (!p_shl484_cast_fu_18779_p1.read().is_01() || !p_shl483_cast_fu_18767_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl484_cast_fu_18779_p1.read()) + sc_biguint<10>(p_shl483_cast_fu_18767_p1.read()));
}

void ShuffleNetV2::thread_tmp_1242_fu_18646_p2() {
    tmp_1242_fu_18646_p2 = (!tmp_497_cast_fu_18642_p1.read().is_01() || !tmp_1225_reg_34265.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_497_cast_fu_18642_p1.read()) + sc_biguint<10>(tmp_1225_reg_34265.read()));
}

void ShuffleNetV2::thread_tmp_1243_cast_fu_12568_p1() {
    tmp_1243_cast_fu_12568_p1 = esl_zext<64,15>(tmp_974_reg_32329.read());
}

void ShuffleNetV2::thread_tmp_1243_fu_18651_p3() {
    tmp_1243_fu_18651_p3 = esl_concat<10,3>(tmp_1242_fu_18646_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1244_fu_18663_p3() {
    tmp_1244_fu_18663_p3 = esl_concat<10,1>(tmp_1242_fu_18646_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1245_fu_18675_p2() {
    tmp_1245_fu_18675_p2 = (!p_shl481_cast_fu_18659_p1.read().is_01() || !p_shl482_cast_fu_18671_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl481_cast_fu_18659_p1.read()) + sc_biguint<15>(p_shl482_cast_fu_18671_p1.read()));
}

void ShuffleNetV2::thread_tmp_1246_cast_fu_12551_p1() {
    tmp_1246_cast_fu_12551_p1 = esl_sext<36,35>(tmp_977_fu_12545_p2.read());
}

void ShuffleNetV2::thread_tmp_1246_fu_18934_p1() {
    tmp_1246_fu_18934_p1 = co117_reg_5346.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1247_fu_18809_p2() {
    tmp_1247_fu_18809_p2 = (!tmp_499_cast_fu_18805_p1.read().is_01() || !tmp_1241_reg_34314.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_499_cast_fu_18805_p1.read()) + sc_biguint<10>(tmp_1241_reg_34314.read()));
}

void ShuffleNetV2::thread_tmp_1248_fu_18814_p3() {
    tmp_1248_fu_18814_p3 = esl_concat<10,3>(tmp_1247_fu_18809_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1249_fu_18826_p3() {
    tmp_1249_fu_18826_p3 = esl_concat<10,1>(tmp_1247_fu_18809_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1250_cast_fu_12589_p1() {
    tmp_1250_cast_fu_12589_p1 = esl_zext<64,10>(tmp_982_reg_32349.read());
}

void ShuffleNetV2::thread_tmp_1250_fu_18838_p2() {
    tmp_1250_fu_18838_p2 = (!p_shl489_cast_fu_18822_p1.read().is_01() || !p_shl490_cast_fu_18834_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl489_cast_fu_18822_p1.read()) + sc_biguint<14>(p_shl490_cast_fu_18834_p1.read()));
}

void ShuffleNetV2::thread_tmp_1251_fu_18844_p2() {
    tmp_1251_fu_18844_p2 = (!tmp_499_cast1_fu_18801_p1.read().is_01() || !tmp_1238_reg_34309.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_499_cast1_fu_18801_p1.read()) + sc_biguint<11>(tmp_1238_reg_34309.read()));
}

void ShuffleNetV2::thread_tmp_1252_fu_18849_p3() {
    tmp_1252_fu_18849_p3 = esl_concat<11,3>(tmp_1251_fu_18844_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1253_fu_18861_p3() {
    tmp_1253_fu_18861_p3 = esl_concat<11,1>(tmp_1251_fu_18844_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1254_fu_18873_p2() {
    tmp_1254_fu_18873_p2 = (!p_shl487_cast_fu_18857_p1.read().is_01() || !p_shl488_cast_fu_18869_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl487_cast_fu_18857_p1.read()) + sc_biguint<15>(p_shl488_cast_fu_18869_p1.read()));
}

void ShuffleNetV2::thread_tmp_1255_fu_18697_p2() {
    tmp_1255_fu_18697_p2 = (!tmp_1245_reg_34278.read().is_01() || !tmp_500_cast_fu_18693_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1245_reg_34278.read()) + sc_biguint<15>(tmp_500_cast_fu_18693_p1.read()));
}

void ShuffleNetV2::thread_tmp_1256_fu_18899_p2() {
    tmp_1256_fu_18899_p2 = (!tmp_1250_reg_34327.read().is_01() || !tmp_504_cast_fu_18895_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1250_reg_34327.read()) + sc_biguint<14>(tmp_504_cast_fu_18895_p1.read()));
}

void ShuffleNetV2::thread_tmp_1257_fu_18904_p2() {
    tmp_1257_fu_18904_p2 = (!tmp_1254_reg_34332.read().is_01() || !tmp_504_cast1_fu_18891_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1254_reg_34332.read()) + sc_biguint<15>(tmp_504_cast1_fu_18891_p1.read()));
}

void ShuffleNetV2::thread_tmp_1258_fu_19216_p1() {
    tmp_1258_fu_19216_p1 = k26_reg_5390.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1259_fu_19023_p1() {
    tmp_1259_fu_19023_p1 = i94_reg_5368.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1260_fu_19138_p3() {
    tmp_1260_fu_19138_p3 = esl_concat<11,5>(tmp_511_reg_34404.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1261_fu_19149_p3() {
    tmp_1261_fu_19149_p3 = esl_concat<11,3>(tmp_511_reg_34404.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1262_fu_19160_p2() {
    tmp_1262_fu_19160_p2 = (!p_shl493_cast_fu_19145_p1.read().is_01() || !p_shl494_cast_fu_19156_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl493_cast_fu_19145_p1.read()) - sc_biguint<17>(p_shl494_cast_fu_19156_p1.read()));
}

void ShuffleNetV2::thread_tmp_1263_cast_fu_12943_p1() {
    tmp_1263_cast_fu_12943_p1 = esl_sext<17,16>(tmp_993_fu_12937_p2.read());
}

void ShuffleNetV2::thread_tmp_1263_fu_19170_p2() {
    tmp_1263_fu_19170_p2 = (!tmp_501_cast_reg_34386.read().is_01() || !tmp_1601_cast_fu_19166_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_501_cast_reg_34386.read()) + sc_bigint<18>(tmp_1601_cast_fu_19166_p1.read()));
}

void ShuffleNetV2::thread_tmp_1264_cast_fu_12952_p1() {
    tmp_1264_cast_fu_12952_p1 = esl_sext<64,17>(tmp_994_fu_12947_p2.read());
}

void ShuffleNetV2::thread_tmp_1264_fu_19107_p3() {
    tmp_1264_fu_19107_p3 = esl_concat<7,6>(tmp_513_fu_19102_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1265_fu_19115_p3() {
    tmp_1265_fu_19115_p3 = esl_concat<7,4>(tmp_513_fu_19102_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1266_fu_19127_p2() {
    tmp_1266_fu_19127_p2 = (!tmp_1264_fu_19107_p3.read().is_01() || !p_shl492_cast_fu_19123_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1264_fu_19107_p3.read()) - sc_bigint<13>(p_shl492_cast_fu_19123_p1.read()));
}

void ShuffleNetV2::thread_tmp_1267_fu_19133_p2() {
    tmp_1267_fu_19133_p2 = (!tmp_503_cast_reg_34391.read().is_01() || !tmp_1266_fu_19127_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_503_cast_reg_34391.read()) + sc_biguint<13>(tmp_1266_fu_19127_p2.read()));
}

void ShuffleNetV2::thread_tmp_1268_fu_19652_p1() {
    tmp_1268_fu_19652_p1 = co121_reg_5467.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1269_fu_19570_p1() {
    tmp_1269_fu_19570_p1 = k28_reg_5456.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1270_fu_19354_p1() {
    tmp_1270_fu_19354_p1 = i100_reg_5434.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1271_fu_19415_p3() {
    tmp_1271_fu_19415_p3 = esl_concat<8,2>(tmp_526_reg_34523.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1272_cast_fu_12957_p1() {
    tmp_1272_cast_fu_12957_p1 = esl_sext<64,13>(tmp_998_reg_32450.read());
}

void ShuffleNetV2::thread_tmp_1272_fu_19422_p1() {
    tmp_1272_fu_19422_p1 = esl_sext<11,10>(tmp_1271_fu_19415_p3.read());
}

void ShuffleNetV2::thread_tmp_1273_fu_19430_p2() {
    tmp_1273_fu_19430_p2 = (!p_shl498_cast_fu_19426_p1.read().is_01() || !tmp_527_cast_fu_19411_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl498_cast_fu_19426_p1.read()) - sc_biguint<12>(tmp_527_cast_fu_19411_p1.read()));
}

void ShuffleNetV2::thread_tmp_1274_fu_19436_p2() {
    tmp_1274_fu_19436_p2 = (!tmp_514_cast_reg_34492.read().is_01() || !tmp_1273_fu_19430_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_514_cast_reg_34492.read()) + sc_biguint<12>(tmp_1273_fu_19430_p2.read()));
}

void ShuffleNetV2::thread_tmp_1275_fu_19445_p3() {
    tmp_1275_fu_19445_p3 = esl_concat<12,2>(tmp_1274_fu_19436_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1276_fu_19457_p2() {
    tmp_1276_fu_19457_p2 = (!p_shl497_cast_fu_19453_p1.read().is_01() || !tmp_1620_cast_fu_19441_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl497_cast_fu_19453_p1.read()) - sc_bigint<15>(tmp_1620_cast_fu_19441_p1.read()));
}

void ShuffleNetV2::thread_tmp_1277_fu_19463_p2() {
    tmp_1277_fu_19463_p2 = (!tmp_521_cast_reg_34510.read().is_01() || !tmp_1276_fu_19457_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_521_cast_reg_34510.read()) + sc_biguint<15>(tmp_1276_fu_19457_p2.read()));
}

void ShuffleNetV2::thread_tmp_1278_fu_19475_p3() {
    tmp_1278_fu_19475_p3 = esl_concat<7,2>(tmp_528_reg_34529.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1279_fu_19482_p1() {
    tmp_1279_fu_19482_p1 = esl_sext<34,9>(tmp_1278_fu_19475_p3.read());
}

void ShuffleNetV2::thread_tmp_1280_fu_19490_p2() {
    tmp_1280_fu_19490_p2 = (!p_shl496_cast_fu_19486_p1.read().is_01() || !tmp_529_cast1_fu_19471_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl496_cast_fu_19486_p1.read()) - sc_biguint<35>(tmp_529_cast1_fu_19471_p1.read()));
}

void ShuffleNetV2::thread_tmp_1281_fu_19500_p2() {
    tmp_1281_fu_19500_p2 = (!tmp_514_cast1_reg_34487.read().is_01() || !tmp_1626_cast_fu_19496_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_514_cast1_reg_34487.read()) + sc_bigint<36>(tmp_1626_cast_fu_19496_p1.read()));
}

void ShuffleNetV2::thread_tmp_1282_fu_19505_p1() {
    tmp_1282_fu_19505_p1 = tmp_1281_fu_19500_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1283_cast_fu_13256_p1() {
    tmp_1283_cast_fu_13256_p1 = esl_zext<64,15>(tmp_1008_fu_13251_p2.read());
}

void ShuffleNetV2::thread_tmp_1283_fu_19509_p1() {
    tmp_1283_fu_19509_p1 = tmp_1281_fu_19500_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1284_cast_fu_13266_p1() {
    tmp_1284_cast_fu_13266_p1 = esl_zext<64,14>(tmp_1009_reg_32550.read());
}

void ShuffleNetV2::thread_tmp_1284_fu_19524_p2() {
    tmp_1284_fu_19524_p2 = (!p_shl495_cast_fu_19517_p3.read().is_01() || !tmp_1282_reg_34540.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl495_cast_fu_19517_p3.read()) - sc_biguint<10>(tmp_1282_reg_34540.read()));
}

void ShuffleNetV2::thread_tmp_1285_fu_19529_p2() {
    tmp_1285_fu_19529_p2 = (!tmp_521_cast1_reg_34505.read().is_01() || !tmp_1284_fu_19524_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_521_cast1_reg_34505.read()) + sc_biguint<10>(tmp_1284_fu_19524_p2.read()));
}

void ShuffleNetV2::thread_tmp_1286_fu_20012_p3() {
    tmp_1286_fu_20012_p3 = esl_concat<6,3>(co123_reg_5522.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1287_fu_20024_p3() {
    tmp_1287_fu_20024_p3 = esl_concat<6,1>(co123_reg_5522.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1288_fu_20036_p2() {
    tmp_1288_fu_20036_p2 = (!p_shl504_cast_fu_20032_p1.read().is_01() || !p_shl503_cast_fu_20020_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl504_cast_fu_20032_p1.read()) + sc_biguint<10>(p_shl503_cast_fu_20020_p1.read()));
}

void ShuffleNetV2::thread_tmp_1289_fu_19934_p1() {
    tmp_1289_fu_19934_p1 = k30_reg_5511.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1290_fu_19741_p1() {
    tmp_1290_fu_19741_p1 = i102_reg_5489.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1291_cast_fu_13518_p1() {
    tmp_1291_cast_fu_13518_p1 = esl_sext<17,16>(tmp_1014_fu_13512_p2.read());
}

void ShuffleNetV2::thread_tmp_1291_fu_19856_p3() {
    tmp_1291_fu_19856_p3 = esl_concat<11,5>(tmp_536_reg_34650.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1292_cast_fu_13527_p1() {
    tmp_1292_cast_fu_13527_p1 = esl_sext<64,17>(tmp_1015_fu_13522_p2.read());
}

void ShuffleNetV2::thread_tmp_1292_fu_19867_p3() {
    tmp_1292_fu_19867_p3 = esl_concat<11,3>(tmp_536_reg_34650.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1293_fu_19878_p2() {
    tmp_1293_fu_19878_p2 = (!p_shl501_cast_fu_19863_p1.read().is_01() || !p_shl502_cast_fu_19874_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl501_cast_fu_19863_p1.read()) - sc_biguint<17>(p_shl502_cast_fu_19874_p1.read()));
}

void ShuffleNetV2::thread_tmp_1294_fu_19888_p2() {
    tmp_1294_fu_19888_p2 = (!tmp_522_cast_reg_34632.read().is_01() || !tmp_1640_cast_fu_19884_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_522_cast_reg_34632.read()) + sc_bigint<18>(tmp_1640_cast_fu_19884_p1.read()));
}

void ShuffleNetV2::thread_tmp_1295_fu_19825_p3() {
    tmp_1295_fu_19825_p3 = esl_concat<7,6>(tmp_538_fu_19820_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1296_fu_19833_p3() {
    tmp_1296_fu_19833_p3 = esl_concat<7,4>(tmp_538_fu_19820_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1297_fu_19845_p2() {
    tmp_1297_fu_19845_p2 = (!tmp_1295_fu_19825_p3.read().is_01() || !p_shl500_cast_fu_19841_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1295_fu_19825_p3.read()) - sc_bigint<13>(p_shl500_cast_fu_19841_p1.read()));
}

void ShuffleNetV2::thread_tmp_1298_fu_19851_p2() {
    tmp_1298_fu_19851_p2 = (!tmp_524_cast_reg_34637.read().is_01() || !tmp_1297_fu_19845_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_524_cast_reg_34637.read()) + sc_biguint<13>(tmp_1297_fu_19845_p2.read()));
}

void ShuffleNetV2::thread_tmp_1299_fu_20141_p3() {
    tmp_1299_fu_20141_p3 = esl_concat<7,3>(tmp_539_fu_20135_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1300_cast_fu_13532_p1() {
    tmp_1300_cast_fu_13532_p1 = esl_sext<64,13>(tmp_1019_reg_32610.read());
}

void ShuffleNetV2::thread_tmp_1300_fu_20153_p3() {
    tmp_1300_fu_20153_p3 = esl_concat<7,1>(tmp_539_fu_20135_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1301_fu_20165_p2() {
    tmp_1301_fu_20165_p2 = (!p_shl510_cast_fu_20161_p1.read().is_01() || !p_shl509_cast_fu_20149_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl510_cast_fu_20161_p1.read()) + sc_biguint<11>(p_shl509_cast_fu_20149_p1.read()));
}

void ShuffleNetV2::thread_tmp_1302_fu_20171_p3() {
    tmp_1302_fu_20171_p3 = esl_concat<6,3>(co125_reg_5555.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1303_fu_20183_p3() {
    tmp_1303_fu_20183_p3 = esl_concat<6,1>(co125_reg_5555.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1304_fu_20195_p2() {
    tmp_1304_fu_20195_p2 = (!p_shl508_cast_fu_20191_p1.read().is_01() || !p_shl507_cast_fu_20179_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl508_cast_fu_20191_p1.read()) + sc_biguint<10>(p_shl507_cast_fu_20179_p1.read()));
}

void ShuffleNetV2::thread_tmp_1305_fu_20058_p2() {
    tmp_1305_fu_20058_p2 = (!tmp_540_cast_fu_20054_p1.read().is_01() || !tmp_1288_reg_34715.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_540_cast_fu_20054_p1.read()) + sc_biguint<10>(tmp_1288_reg_34715.read()));
}

void ShuffleNetV2::thread_tmp_1306_fu_20063_p3() {
    tmp_1306_fu_20063_p3 = esl_concat<10,3>(tmp_1305_fu_20058_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1307_fu_20075_p3() {
    tmp_1307_fu_20075_p3 = esl_concat<10,1>(tmp_1305_fu_20058_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1308_cast_fu_13784_p1() {
    tmp_1308_cast_fu_13784_p1 = esl_sext<13,12>(tmp_1024_fu_13778_p2.read());
}

void ShuffleNetV2::thread_tmp_1308_fu_20087_p2() {
    tmp_1308_fu_20087_p2 = (!p_shl505_cast_fu_20071_p1.read().is_01() || !p_shl506_cast_fu_20083_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl505_cast_fu_20071_p1.read()) + sc_biguint<15>(p_shl506_cast_fu_20083_p1.read()));
}

void ShuffleNetV2::thread_tmp_1309_cast_fu_13793_p1() {
    tmp_1309_cast_fu_13793_p1 = esl_sext<15,13>(tmp_1025_fu_13788_p2.read());
}

void ShuffleNetV2::thread_tmp_1309_fu_20346_p1() {
    tmp_1309_fu_20346_p1 = co127_reg_5588.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1310_fu_20221_p2() {
    tmp_1310_fu_20221_p2 = (!tmp_542_cast_fu_20217_p1.read().is_01() || !tmp_1301_reg_34759.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_542_cast_fu_20217_p1.read()) + sc_biguint<11>(tmp_1301_reg_34759.read()));
}

void ShuffleNetV2::thread_tmp_1311_fu_20226_p3() {
    tmp_1311_fu_20226_p3 = esl_concat<11,3>(tmp_1310_fu_20221_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1312_cast_fu_13861_p1() {
    tmp_1312_cast_fu_13861_p1 = esl_zext<64,15>(tmp_1027_reg_32735.read());
}

void ShuffleNetV2::thread_tmp_1312_fu_20238_p3() {
    tmp_1312_fu_20238_p3 = esl_concat<11,1>(tmp_1310_fu_20221_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1313_fu_20250_p2() {
    tmp_1313_fu_20250_p2 = (!p_shl513_cast_fu_20234_p1.read().is_01() || !p_shl514_cast_fu_20246_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl513_cast_fu_20234_p1.read()) + sc_biguint<15>(p_shl514_cast_fu_20246_p1.read()));
}

void ShuffleNetV2::thread_tmp_1314_fu_20256_p2() {
    tmp_1314_fu_20256_p2 = (!tmp_542_cast1_fu_20213_p1.read().is_01() || !tmp_1304_reg_34764.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_542_cast1_fu_20213_p1.read()) + sc_biguint<10>(tmp_1304_reg_34764.read()));
}

void ShuffleNetV2::thread_tmp_1315_cast_fu_13844_p1() {
    tmp_1315_cast_fu_13844_p1 = esl_sext<36,35>(tmp_1030_fu_13838_p2.read());
}

void ShuffleNetV2::thread_tmp_1315_fu_20261_p3() {
    tmp_1315_fu_20261_p3 = esl_concat<10,3>(tmp_1314_fu_20256_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1316_fu_20273_p3() {
    tmp_1316_fu_20273_p3 = esl_concat<10,1>(tmp_1314_fu_20256_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1317_fu_20285_p2() {
    tmp_1317_fu_20285_p2 = (!p_shl511_cast_fu_20269_p1.read().is_01() || !p_shl512_cast_fu_20281_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl511_cast_fu_20269_p1.read()) + sc_biguint<14>(p_shl512_cast_fu_20281_p1.read()));
}

void ShuffleNetV2::thread_tmp_1318_fu_20109_p2() {
    tmp_1318_fu_20109_p2 = (!tmp_1308_reg_34728.read().is_01() || !tmp_543_cast_fu_20105_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1308_reg_34728.read()) + sc_biguint<15>(tmp_543_cast_fu_20105_p1.read()));
}

void ShuffleNetV2::thread_tmp_1319_cast_fu_13882_p1() {
    tmp_1319_cast_fu_13882_p1 = esl_zext<64,10>(tmp_1035_reg_32755.read());
}

void ShuffleNetV2::thread_tmp_1319_fu_20311_p2() {
    tmp_1319_fu_20311_p2 = (!tmp_1313_reg_34777.read().is_01() || !tmp_547_cast_fu_20307_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1313_reg_34777.read()) + sc_biguint<15>(tmp_547_cast_fu_20307_p1.read()));
}

void ShuffleNetV2::thread_tmp_1320_fu_20321_p2() {
    tmp_1320_fu_20321_p2 = (!tmp_1317_reg_34782.read().is_01() || !tmp_547_cast1_fu_20303_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1317_reg_34782.read()) + sc_biguint<14>(tmp_547_cast1_fu_20303_p1.read()));
}

void ShuffleNetV2::thread_tmp_1321_fu_20628_p1() {
    tmp_1321_fu_20628_p1 = k32_reg_5632.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1322_fu_20435_p1() {
    tmp_1322_fu_20435_p1 = i106_reg_5610.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1323_fu_20550_p3() {
    tmp_1323_fu_20550_p3 = esl_concat<11,5>(tmp_554_reg_34854.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1324_fu_20561_p3() {
    tmp_1324_fu_20561_p3 = esl_concat<11,3>(tmp_554_reg_34854.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1325_fu_20572_p2() {
    tmp_1325_fu_20572_p2 = (!p_shl517_cast_fu_20557_p1.read().is_01() || !p_shl518_cast_fu_20568_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl517_cast_fu_20557_p1.read()) - sc_biguint<17>(p_shl518_cast_fu_20568_p1.read()));
}

void ShuffleNetV2::thread_tmp_1326_fu_20582_p2() {
    tmp_1326_fu_20582_p2 = (!tmp_544_cast_reg_34836.read().is_01() || !tmp_1679_cast_fu_20578_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_544_cast_reg_34836.read()) + sc_bigint<18>(tmp_1679_cast_fu_20578_p1.read()));
}

void ShuffleNetV2::thread_tmp_1327_fu_20519_p3() {
    tmp_1327_fu_20519_p3 = esl_concat<7,6>(tmp_556_fu_20514_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1328_fu_20527_p3() {
    tmp_1328_fu_20527_p3 = esl_concat<7,4>(tmp_556_fu_20514_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1329_cast_fu_14232_p1() {
    tmp_1329_cast_fu_14232_p1 = esl_sext<17,16>(tmp_1043_fu_14226_p2.read());
}

void ShuffleNetV2::thread_tmp_1329_fu_20539_p2() {
    tmp_1329_fu_20539_p2 = (!tmp_1327_fu_20519_p3.read().is_01() || !p_shl516_cast_fu_20535_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1327_fu_20519_p3.read()) - sc_bigint<13>(p_shl516_cast_fu_20535_p1.read()));
}

void ShuffleNetV2::thread_tmp_1330_cast_fu_14241_p1() {
    tmp_1330_cast_fu_14241_p1 = esl_sext<64,17>(tmp_1044_fu_14236_p2.read());
}

void ShuffleNetV2::thread_tmp_1330_fu_20545_p2() {
    tmp_1330_fu_20545_p2 = (!tmp_546_cast1_reg_34841.read().is_01() || !tmp_1329_fu_20539_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_546_cast1_reg_34841.read()) + sc_biguint<13>(tmp_1329_fu_20539_p2.read()));
}

void ShuffleNetV2::thread_tmp_1331_fu_21064_p1() {
    tmp_1331_fu_21064_p1 = co131_reg_5709.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1332_fu_20982_p1() {
    tmp_1332_fu_20982_p1 = k34_reg_5698.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1333_fu_20766_p1() {
    tmp_1333_fu_20766_p1 = i112_reg_5676.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1334_fu_20827_p3() {
    tmp_1334_fu_20827_p3 = esl_concat<8,2>(tmp_569_reg_34973.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1335_fu_20834_p1() {
    tmp_1335_fu_20834_p1 = esl_sext<11,10>(tmp_1334_fu_20827_p3.read());
}

void ShuffleNetV2::thread_tmp_1336_fu_20842_p2() {
    tmp_1336_fu_20842_p2 = (!p_shl522_cast_fu_20838_p1.read().is_01() || !tmp_570_cast_fu_20823_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl522_cast_fu_20838_p1.read()) - sc_biguint<12>(tmp_570_cast_fu_20823_p1.read()));
}

void ShuffleNetV2::thread_tmp_1337_fu_20852_p2() {
    tmp_1337_fu_20852_p2 = (!tmp_1697_cast_fu_20848_p1.read().is_01() || !tmp_557_cast_reg_34942.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1697_cast_fu_20848_p1.read()) + sc_biguint<13>(tmp_557_cast_reg_34942.read()));
}

void ShuffleNetV2::thread_tmp_1338_cast_fu_14246_p1() {
    tmp_1338_cast_fu_14246_p1 = esl_sext<64,13>(tmp_1048_reg_32856.read());
}

void ShuffleNetV2::thread_tmp_1338_fu_20869_p2() {
    tmp_1338_fu_20869_p2 = (!p_shl521_cast_fu_20861_p3.read().is_01() || !tmp_1698_cast_fu_20857_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl521_cast_fu_20861_p3.read()) - sc_bigint<15>(tmp_1698_cast_fu_20857_p1.read()));
}

void ShuffleNetV2::thread_tmp_1339_fu_20875_p2() {
    tmp_1339_fu_20875_p2 = (!tmp_1338_fu_20869_p2.read().is_01() || !tmp_564_cast_reg_34960.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1338_fu_20869_p2.read()) + sc_biguint<15>(tmp_564_cast_reg_34960.read()));
}

void ShuffleNetV2::thread_tmp_1340_fu_20887_p3() {
    tmp_1340_fu_20887_p3 = esl_concat<7,2>(tmp_571_reg_34979.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1341_fu_20894_p1() {
    tmp_1341_fu_20894_p1 = esl_sext<34,9>(tmp_1340_fu_20887_p3.read());
}

void ShuffleNetV2::thread_tmp_1342_fu_20902_p2() {
    tmp_1342_fu_20902_p2 = (!p_shl520_cast_fu_20898_p1.read().is_01() || !tmp_572_cast_fu_20883_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl520_cast_fu_20898_p1.read()) - sc_biguint<35>(tmp_572_cast_fu_20883_p1.read()));
}

void ShuffleNetV2::thread_tmp_1343_fu_20912_p2() {
    tmp_1343_fu_20912_p2 = (!tmp_1704_cast_fu_20908_p1.read().is_01() || !tmp_557_cast1_reg_34937.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1704_cast_fu_20908_p1.read()) + sc_biguint<36>(tmp_557_cast1_reg_34937.read()));
}

void ShuffleNetV2::thread_tmp_1344_fu_20917_p1() {
    tmp_1344_fu_20917_p1 = tmp_1343_fu_20912_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1345_fu_20921_p1() {
    tmp_1345_fu_20921_p1 = tmp_1343_fu_20912_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1346_fu_20936_p2() {
    tmp_1346_fu_20936_p2 = (!p_shl519_cast_fu_20929_p3.read().is_01() || !tmp_1344_reg_34990.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl519_cast_fu_20929_p3.read()) - sc_biguint<10>(tmp_1344_reg_34990.read()));
}

void ShuffleNetV2::thread_tmp_1347_fu_20941_p2() {
    tmp_1347_fu_20941_p2 = (!tmp_1346_fu_20936_p2.read().is_01() || !tmp_564_cast1_reg_34955.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1346_fu_20936_p2.read()) + sc_biguint<10>(tmp_564_cast1_reg_34955.read()));
}

void ShuffleNetV2::thread_tmp_1348_fu_21424_p3() {
    tmp_1348_fu_21424_p3 = esl_concat<6,3>(co133_reg_5764.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1349_fu_21436_p3() {
    tmp_1349_fu_21436_p3 = esl_concat<6,1>(co133_reg_5764.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1350_fu_21448_p2() {
    tmp_1350_fu_21448_p2 = (!p_shl528_cast_fu_21444_p1.read().is_01() || !p_shl527_cast_fu_21432_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl528_cast_fu_21444_p1.read()) + sc_biguint<10>(p_shl527_cast_fu_21432_p1.read()));
}

void ShuffleNetV2::thread_tmp_1351_fu_21346_p1() {
    tmp_1351_fu_21346_p1 = k36_reg_5753.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1352_fu_21153_p1() {
    tmp_1352_fu_21153_p1 = i114_reg_5731.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1353_fu_21268_p3() {
    tmp_1353_fu_21268_p3 = esl_concat<11,5>(tmp_579_reg_35100.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1354_fu_21279_p3() {
    tmp_1354_fu_21279_p3 = esl_concat<11,3>(tmp_579_reg_35100.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1355_fu_21290_p2() {
    tmp_1355_fu_21290_p2 = (!p_shl525_cast_fu_21275_p1.read().is_01() || !p_shl526_cast_fu_21286_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl525_cast_fu_21275_p1.read()) - sc_biguint<17>(p_shl526_cast_fu_21286_p1.read()));
}

void ShuffleNetV2::thread_tmp_1356_fu_21300_p2() {
    tmp_1356_fu_21300_p2 = (!tmp_565_cast1_reg_35082.read().is_01() || !tmp_1718_cast_fu_21296_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_565_cast1_reg_35082.read()) + sc_bigint<18>(tmp_1718_cast_fu_21296_p1.read()));
}

void ShuffleNetV2::thread_tmp_1357_fu_21237_p3() {
    tmp_1357_fu_21237_p3 = esl_concat<7,6>(tmp_581_fu_21232_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1358_fu_21245_p3() {
    tmp_1358_fu_21245_p3 = esl_concat<7,4>(tmp_581_fu_21232_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1359_cast_fu_14462_p1() {
    tmp_1359_cast_fu_14462_p1 = esl_zext<64,15>(tmp_1068_fu_14457_p2.read());
}

void ShuffleNetV2::thread_tmp_1359_fu_21257_p2() {
    tmp_1359_fu_21257_p2 = (!tmp_1357_fu_21237_p3.read().is_01() || !p_shl524_cast_fu_21253_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1357_fu_21237_p3.read()) - sc_bigint<13>(p_shl524_cast_fu_21253_p1.read()));
}

void ShuffleNetV2::thread_tmp_1360_cast_fu_14664_p1() {
    tmp_1360_cast_fu_14664_p1 = esl_zext<64,15>(tmp_1069_fu_14659_p2.read());
}

void ShuffleNetV2::thread_tmp_1360_fu_21263_p2() {
    tmp_1360_fu_21263_p2 = (!tmp_567_cast_reg_35087.read().is_01() || !tmp_1359_fu_21257_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_567_cast_reg_35087.read()) + sc_biguint<13>(tmp_1359_fu_21257_p2.read()));
}

void ShuffleNetV2::thread_tmp_1361_cast_fu_14674_p1() {
    tmp_1361_cast_fu_14674_p1 = esl_zext<64,14>(tmp_1070_reg_33000.read());
}

void ShuffleNetV2::thread_tmp_1361_fu_21553_p3() {
    tmp_1361_fu_21553_p3 = esl_concat<7,3>(tmp_582_fu_21547_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1362_fu_21565_p3() {
    tmp_1362_fu_21565_p3 = esl_concat<7,1>(tmp_582_fu_21547_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1363_fu_21577_p2() {
    tmp_1363_fu_21577_p2 = (!p_shl534_cast_fu_21573_p1.read().is_01() || !p_shl533_cast_fu_21561_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl534_cast_fu_21573_p1.read()) + sc_biguint<11>(p_shl533_cast_fu_21561_p1.read()));
}

void ShuffleNetV2::thread_tmp_1364_fu_21583_p3() {
    tmp_1364_fu_21583_p3 = esl_concat<6,3>(co135_reg_5797.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1365_fu_21595_p3() {
    tmp_1365_fu_21595_p3 = esl_concat<6,1>(co135_reg_5797.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1366_fu_21607_p2() {
    tmp_1366_fu_21607_p2 = (!p_shl532_cast_fu_21603_p1.read().is_01() || !p_shl531_cast_fu_21591_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl532_cast_fu_21603_p1.read()) + sc_biguint<10>(p_shl531_cast_fu_21591_p1.read()));
}

void ShuffleNetV2::thread_tmp_1367_fu_21470_p2() {
    tmp_1367_fu_21470_p2 = (!tmp_583_cast_fu_21466_p1.read().is_01() || !tmp_1350_reg_35165.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_583_cast_fu_21466_p1.read()) + sc_biguint<10>(tmp_1350_reg_35165.read()));
}

void ShuffleNetV2::thread_tmp_1368_cast_fu_14926_p1() {
    tmp_1368_cast_fu_14926_p1 = esl_sext<17,16>(tmp_1075_fu_14920_p2.read());
}

void ShuffleNetV2::thread_tmp_1368_fu_21475_p3() {
    tmp_1368_fu_21475_p3 = esl_concat<10,3>(tmp_1367_fu_21470_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1369_cast_fu_14935_p1() {
    tmp_1369_cast_fu_14935_p1 = esl_sext<64,17>(tmp_1076_fu_14930_p2.read());
}

void ShuffleNetV2::thread_tmp_1369_fu_21487_p3() {
    tmp_1369_fu_21487_p3 = esl_concat<10,1>(tmp_1367_fu_21470_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1370_fu_21499_p2() {
    tmp_1370_fu_21499_p2 = (!p_shl529_cast_fu_21483_p1.read().is_01() || !p_shl530_cast_fu_21495_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl529_cast_fu_21483_p1.read()) + sc_biguint<15>(p_shl530_cast_fu_21495_p1.read()));
}

void ShuffleNetV2::thread_tmp_1371_fu_21758_p1() {
    tmp_1371_fu_21758_p1 = co137_reg_5830.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1372_fu_21633_p2() {
    tmp_1372_fu_21633_p2 = (!tmp_585_cast_fu_21629_p1.read().is_01() || !tmp_1363_reg_35209.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_585_cast_fu_21629_p1.read()) + sc_biguint<11>(tmp_1363_reg_35209.read()));
}

void ShuffleNetV2::thread_tmp_1373_fu_21638_p3() {
    tmp_1373_fu_21638_p3 = esl_concat<11,3>(tmp_1372_fu_21633_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1374_fu_21650_p3() {
    tmp_1374_fu_21650_p3 = esl_concat<11,1>(tmp_1372_fu_21633_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1375_fu_21662_p2() {
    tmp_1375_fu_21662_p2 = (!p_shl537_cast_fu_21646_p1.read().is_01() || !p_shl538_cast_fu_21658_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl537_cast_fu_21646_p1.read()) + sc_biguint<15>(p_shl538_cast_fu_21658_p1.read()));
}

void ShuffleNetV2::thread_tmp_1376_fu_21668_p2() {
    tmp_1376_fu_21668_p2 = (!tmp_585_cast1_fu_21625_p1.read().is_01() || !tmp_1366_reg_35214.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_585_cast1_fu_21625_p1.read()) + sc_biguint<10>(tmp_1366_reg_35214.read()));
}

void ShuffleNetV2::thread_tmp_1377_cast_fu_14940_p1() {
    tmp_1377_cast_fu_14940_p1 = esl_sext<64,13>(tmp_1080_reg_33060.read());
}

void ShuffleNetV2::thread_tmp_1377_fu_21673_p3() {
    tmp_1377_fu_21673_p3 = esl_concat<10,3>(tmp_1376_fu_21668_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1378_fu_21685_p3() {
    tmp_1378_fu_21685_p3 = esl_concat<10,1>(tmp_1376_fu_21668_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1379_fu_21697_p2() {
    tmp_1379_fu_21697_p2 = (!p_shl535_cast_fu_21681_p1.read().is_01() || !p_shl536_cast_fu_21693_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl535_cast_fu_21681_p1.read()) + sc_biguint<14>(p_shl536_cast_fu_21693_p1.read()));
}

void ShuffleNetV2::thread_tmp_1380_fu_21521_p2() {
    tmp_1380_fu_21521_p2 = (!tmp_1370_reg_35178.read().is_01() || !tmp_586_cast_fu_21517_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1370_reg_35178.read()) + sc_biguint<15>(tmp_586_cast_fu_21517_p1.read()));
}

void ShuffleNetV2::thread_tmp_1381_fu_21723_p2() {
    tmp_1381_fu_21723_p2 = (!tmp_1375_reg_35227.read().is_01() || !tmp_590_cast_fu_21719_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1375_reg_35227.read()) + sc_biguint<15>(tmp_590_cast_fu_21719_p1.read()));
}

void ShuffleNetV2::thread_tmp_1382_fu_21733_p2() {
    tmp_1382_fu_21733_p2 = (!tmp_1379_reg_35232.read().is_01() || !tmp_590_cast1_fu_21715_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1379_reg_35232.read()) + sc_biguint<14>(tmp_590_cast1_fu_21715_p1.read()));
}

void ShuffleNetV2::thread_tmp_1383_fu_22048_p1() {
    tmp_1383_fu_22048_p1 = k38_reg_5874.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1384_fu_21847_p1() {
    tmp_1384_fu_21847_p1 = i118_reg_5852.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1385_cast_fu_15188_p1() {
    tmp_1385_cast_fu_15188_p1 = esl_sext<13,12>(tmp_1085_fu_15182_p2.read());
}

void ShuffleNetV2::thread_tmp_1385_fu_21962_p3() {
    tmp_1385_fu_21962_p3 = esl_concat<10,5>(tmp_597_reg_35304.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1386_cast_fu_15197_p1() {
    tmp_1386_cast_fu_15197_p1 = esl_sext<15,13>(tmp_1086_fu_15192_p2.read());
}

void ShuffleNetV2::thread_tmp_1386_fu_21969_p1() {
    tmp_1386_fu_21969_p1 = esl_sext<16,15>(tmp_1385_fu_21962_p3.read());
}

void ShuffleNetV2::thread_tmp_1387_fu_21977_p3() {
    tmp_1387_fu_21977_p3 = esl_concat<10,3>(tmp_597_reg_35304.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1388_fu_21984_p1() {
    tmp_1388_fu_21984_p1 = esl_sext<14,13>(tmp_1387_fu_21977_p3.read());
}

void ShuffleNetV2::thread_tmp_1389_cast_fu_15265_p1() {
    tmp_1389_cast_fu_15265_p1 = esl_zext<64,15>(tmp_1088_reg_33185.read());
}

void ShuffleNetV2::thread_tmp_1389_fu_21992_p2() {
    tmp_1389_fu_21992_p2 = (!p_shl541_cast_fu_21973_p1.read().is_01() || !p_shl542_cast_fu_21988_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl541_cast_fu_21973_p1.read()) - sc_biguint<17>(p_shl542_cast_fu_21988_p1.read()));
}

void ShuffleNetV2::thread_tmp_1390_fu_22002_p2() {
    tmp_1390_fu_22002_p2 = (!tmp_587_cast_reg_35286.read().is_01() || !tmp_1759_cast_fu_21998_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_587_cast_reg_35286.read()) + sc_bigint<18>(tmp_1759_cast_fu_21998_p1.read()));
}

void ShuffleNetV2::thread_tmp_1391_fu_21931_p3() {
    tmp_1391_fu_21931_p3 = esl_concat<7,6>(tmp_599_fu_21926_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1392_cast_fu_15248_p1() {
    tmp_1392_cast_fu_15248_p1 = esl_sext<36,35>(tmp_1091_fu_15242_p2.read());
}

void ShuffleNetV2::thread_tmp_1392_fu_21939_p3() {
    tmp_1392_fu_21939_p3 = esl_concat<7,4>(tmp_599_fu_21926_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1393_fu_21951_p2() {
    tmp_1393_fu_21951_p2 = (!tmp_1391_fu_21931_p3.read().is_01() || !p_shl540_cast_fu_21947_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1391_fu_21931_p3.read()) - sc_bigint<13>(p_shl540_cast_fu_21947_p1.read()));
}

void ShuffleNetV2::thread_tmp_1394_fu_21957_p2() {
    tmp_1394_fu_21957_p2 = (!tmp_589_cast1_reg_35291.read().is_01() || !tmp_1393_fu_21951_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_589_cast1_reg_35291.read()) + sc_biguint<13>(tmp_1393_fu_21951_p2.read()));
}

void ShuffleNetV2::thread_tmp_1395_fu_22480_p1() {
    tmp_1395_fu_22480_p1 = co141_reg_5951.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1396_cast_fu_15286_p1() {
    tmp_1396_cast_fu_15286_p1 = esl_zext<64,10>(tmp_1096_reg_33205.read());
}

void ShuffleNetV2::thread_tmp_1396_fu_22398_p1() {
    tmp_1396_fu_22398_p1 = k40_reg_5940.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1397_fu_22186_p1() {
    tmp_1397_fu_22186_p1 = i124_reg_5918.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1398_fu_22243_p3() {
    tmp_1398_fu_22243_p3 = esl_concat<10,2>(tmp_612_reg_35423.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1399_fu_22254_p2() {
    tmp_1399_fu_22254_p2 = (!p_shl546_cast_fu_22250_p1.read().is_01() || !tmp_613_cast1_fu_22240_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl546_cast_fu_22250_p1.read()) - sc_biguint<13>(tmp_613_cast1_fu_22240_p1.read()));
}

void ShuffleNetV2::thread_tmp_1400_fu_22264_p2() {
    tmp_1400_fu_22264_p2 = (!tmp_1776_cast_fu_22260_p1.read().is_01() || !tmp_600_cast_reg_35392.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_1776_cast_fu_22260_p1.read()) + sc_biguint<14>(tmp_600_cast_reg_35392.read()));
}

void ShuffleNetV2::thread_tmp_1401_fu_22273_p1() {
    tmp_1401_fu_22273_p1 = tmp_1400_fu_22264_p2.read().range(13-1, 0);
}

void ShuffleNetV2::thread_tmp_1402_fu_22285_p2() {
    tmp_1402_fu_22285_p2 = (!p_shl545_cast_fu_22277_p3.read().is_01() || !tmp_1777_cast_fu_22269_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl545_cast_fu_22277_p3.read()) - sc_bigint<15>(tmp_1777_cast_fu_22269_p1.read()));
}

void ShuffleNetV2::thread_tmp_1403_fu_22291_p2() {
    tmp_1403_fu_22291_p2 = (!tmp_1402_fu_22285_p2.read().is_01() || !tmp_607_cast_reg_35410.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1402_fu_22285_p2.read()) + sc_biguint<15>(tmp_607_cast_reg_35410.read()));
}

void ShuffleNetV2::thread_tmp_1404_fu_22303_p3() {
    tmp_1404_fu_22303_p3 = esl_concat<7,2>(tmp_614_reg_35429.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1405_fu_22310_p1() {
    tmp_1405_fu_22310_p1 = esl_sext<34,9>(tmp_1404_fu_22303_p3.read());
}

void ShuffleNetV2::thread_tmp_1406_cast_fu_15640_p1() {
    tmp_1406_cast_fu_15640_p1 = esl_sext<17,16>(tmp_1104_fu_15634_p2.read());
}

void ShuffleNetV2::thread_tmp_1406_fu_22318_p2() {
    tmp_1406_fu_22318_p2 = (!p_shl544_cast_fu_22314_p1.read().is_01() || !tmp_615_cast_fu_22299_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl544_cast_fu_22314_p1.read()) - sc_biguint<35>(tmp_615_cast_fu_22299_p1.read()));
}

void ShuffleNetV2::thread_tmp_1407_cast_fu_15649_p1() {
    tmp_1407_cast_fu_15649_p1 = esl_sext<64,17>(tmp_1105_fu_15644_p2.read());
}

void ShuffleNetV2::thread_tmp_1407_fu_22328_p2() {
    tmp_1407_fu_22328_p2 = (!tmp_1783_cast_fu_22324_p1.read().is_01() || !tmp_600_cast1_reg_35387.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1783_cast_fu_22324_p1.read()) + sc_biguint<36>(tmp_600_cast1_reg_35387.read()));
}

void ShuffleNetV2::thread_tmp_1408_fu_22333_p1() {
    tmp_1408_fu_22333_p1 = tmp_1407_fu_22328_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1409_fu_22337_p1() {
    tmp_1409_fu_22337_p1 = tmp_1407_fu_22328_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1410_fu_22352_p2() {
    tmp_1410_fu_22352_p2 = (!p_shl543_cast_fu_22345_p3.read().is_01() || !tmp_1408_reg_35440.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl543_cast_fu_22345_p3.read()) - sc_biguint<10>(tmp_1408_reg_35440.read()));
}

void ShuffleNetV2::thread_tmp_1411_fu_22357_p2() {
    tmp_1411_fu_22357_p2 = (!tmp_1410_fu_22352_p2.read().is_01() || !tmp_607_cast1_reg_35405.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1410_fu_22352_p2.read()) + sc_biguint<10>(tmp_607_cast1_reg_35405.read()));
}

void ShuffleNetV2::thread_tmp_1412_fu_22852_p3() {
    tmp_1412_fu_22852_p3 = esl_concat<6,3>(co143_reg_6006.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1413_fu_22864_p3() {
    tmp_1413_fu_22864_p3 = esl_concat<6,1>(co143_reg_6006.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1414_fu_22876_p2() {
    tmp_1414_fu_22876_p2 = (!p_shl552_cast_fu_22872_p1.read().is_01() || !p_shl551_cast_fu_22860_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl552_cast_fu_22872_p1.read()) + sc_biguint<10>(p_shl551_cast_fu_22860_p1.read()));
}

void ShuffleNetV2::thread_tmp_1415_cast_fu_15654_p1() {
    tmp_1415_cast_fu_15654_p1 = esl_sext<64,13>(tmp_1109_reg_33306.read());
}

void ShuffleNetV2::thread_tmp_1415_fu_22770_p1() {
    tmp_1415_fu_22770_p1 = k42_reg_5995.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1416_fu_22569_p1() {
    tmp_1416_fu_22569_p1 = i126_reg_5973.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1417_fu_22684_p3() {
    tmp_1417_fu_22684_p3 = esl_concat<10,5>(tmp_622_reg_35550.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1418_fu_22691_p1() {
    tmp_1418_fu_22691_p1 = esl_sext<16,15>(tmp_1417_fu_22684_p3.read());
}

void ShuffleNetV2::thread_tmp_1419_fu_22699_p3() {
    tmp_1419_fu_22699_p3 = esl_concat<10,3>(tmp_622_reg_35550.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1420_fu_22706_p1() {
    tmp_1420_fu_22706_p1 = esl_sext<14,13>(tmp_1419_fu_22699_p3.read());
}

void ShuffleNetV2::thread_tmp_1421_fu_22714_p2() {
    tmp_1421_fu_22714_p2 = (!p_shl549_cast_fu_22695_p1.read().is_01() || !p_shl550_cast_fu_22710_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl549_cast_fu_22695_p1.read()) - sc_biguint<17>(p_shl550_cast_fu_22710_p1.read()));
}

void ShuffleNetV2::thread_tmp_1422_fu_22724_p2() {
    tmp_1422_fu_22724_p2 = (!tmp_608_cast_reg_35532.read().is_01() || !tmp_1799_cast_fu_22720_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_608_cast_reg_35532.read()) + sc_bigint<18>(tmp_1799_cast_fu_22720_p1.read()));
}

void ShuffleNetV2::thread_tmp_1423_fu_22653_p3() {
    tmp_1423_fu_22653_p3 = esl_concat<7,6>(tmp_624_fu_22648_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1424_fu_22661_p3() {
    tmp_1424_fu_22661_p3 = esl_concat<7,4>(tmp_624_fu_22648_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1425_fu_22673_p2() {
    tmp_1425_fu_22673_p2 = (!tmp_1423_fu_22653_p3.read().is_01() || !p_shl548_cast_fu_22669_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1423_fu_22653_p3.read()) - sc_bigint<13>(p_shl548_cast_fu_22669_p1.read()));
}

void ShuffleNetV2::thread_tmp_1426_fu_22679_p2() {
    tmp_1426_fu_22679_p2 = (!tmp_610_cast1_reg_35537.read().is_01() || !tmp_1425_fu_22673_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_610_cast1_reg_35537.read()) + sc_biguint<13>(tmp_1425_fu_22673_p2.read()));
}

void ShuffleNetV2::thread_tmp_1427_fu_22981_p3() {
    tmp_1427_fu_22981_p3 = esl_concat<7,3>(tmp_625_fu_22975_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1428_fu_22993_p3() {
    tmp_1428_fu_22993_p3 = esl_concat<7,1>(tmp_625_fu_22975_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1429_fu_23005_p2() {
    tmp_1429_fu_23005_p2 = (!p_shl558_cast_fu_23001_p1.read().is_01() || !p_shl557_cast_fu_22989_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl558_cast_fu_23001_p1.read()) + sc_biguint<11>(p_shl557_cast_fu_22989_p1.read()));
}

void ShuffleNetV2::thread_tmp_1430_fu_23011_p3() {
    tmp_1430_fu_23011_p3 = esl_concat<6,3>(co145_reg_6039.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1431_fu_23023_p3() {
    tmp_1431_fu_23023_p3 = esl_concat<6,1>(co145_reg_6039.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1432_fu_23035_p2() {
    tmp_1432_fu_23035_p2 = (!p_shl556_cast_fu_23031_p1.read().is_01() || !p_shl555_cast_fu_23019_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl556_cast_fu_23031_p1.read()) + sc_biguint<10>(p_shl555_cast_fu_23019_p1.read()));
}

void ShuffleNetV2::thread_tmp_1433_fu_22898_p2() {
    tmp_1433_fu_22898_p2 = (!tmp_626_cast_fu_22894_p1.read().is_01() || !tmp_1414_reg_35615.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_626_cast_fu_22894_p1.read()) + sc_biguint<10>(tmp_1414_reg_35615.read()));
}

void ShuffleNetV2::thread_tmp_1434_fu_22903_p3() {
    tmp_1434_fu_22903_p3 = esl_concat<10,3>(tmp_1433_fu_22898_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1435_fu_22915_p3() {
    tmp_1435_fu_22915_p3 = esl_concat<10,1>(tmp_1433_fu_22898_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1436_cast_fu_15874_p1() {
    tmp_1436_cast_fu_15874_p1 = esl_zext<64,15>(tmp_1129_fu_15869_p2.read());
}

void ShuffleNetV2::thread_tmp_1436_fu_22927_p2() {
    tmp_1436_fu_22927_p2 = (!p_shl553_cast_fu_22911_p1.read().is_01() || !p_shl554_cast_fu_22923_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl553_cast_fu_22911_p1.read()) + sc_biguint<15>(p_shl554_cast_fu_22923_p1.read()));
}

void ShuffleNetV2::thread_tmp_1437_cast_fu_16086_p1() {
    tmp_1437_cast_fu_16086_p1 = esl_zext<64,14>(tmp_1130_reg_33445.read());
}

void ShuffleNetV2::thread_tmp_1437_fu_23186_p1() {
    tmp_1437_fu_23186_p1 = co147_reg_6072.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1438_cast_fu_16081_p1() {
    tmp_1438_cast_fu_16081_p1 = esl_zext<64,15>(tmp_1131_fu_16076_p2.read());
}

void ShuffleNetV2::thread_tmp_1438_fu_23061_p2() {
    tmp_1438_fu_23061_p2 = (!tmp_628_cast_fu_23057_p1.read().is_01() || !tmp_1432_reg_35664.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_628_cast_fu_23057_p1.read()) + sc_biguint<10>(tmp_1432_reg_35664.read()));
}

void ShuffleNetV2::thread_tmp_1439_fu_23066_p3() {
    tmp_1439_fu_23066_p3 = esl_concat<10,3>(tmp_1438_fu_23061_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1440_fu_23078_p3() {
    tmp_1440_fu_23078_p3 = esl_concat<10,1>(tmp_1438_fu_23061_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1441_fu_23090_p2() {
    tmp_1441_fu_23090_p2 = (!p_shl561_cast_fu_23074_p1.read().is_01() || !p_shl562_cast_fu_23086_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl561_cast_fu_23074_p1.read()) + sc_biguint<14>(p_shl562_cast_fu_23086_p1.read()));
}

void ShuffleNetV2::thread_tmp_1442_fu_23096_p2() {
    tmp_1442_fu_23096_p2 = (!tmp_628_cast1_fu_23053_p1.read().is_01() || !tmp_1429_reg_35659.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_628_cast1_fu_23053_p1.read()) + sc_biguint<11>(tmp_1429_reg_35659.read()));
}

void ShuffleNetV2::thread_tmp_1443_fu_23101_p3() {
    tmp_1443_fu_23101_p3 = esl_concat<11,3>(tmp_1442_fu_23096_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1444_fu_23113_p3() {
    tmp_1444_fu_23113_p3 = esl_concat<11,1>(tmp_1442_fu_23096_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1445_fu_23125_p2() {
    tmp_1445_fu_23125_p2 = (!p_shl559_cast_fu_23109_p1.read().is_01() || !p_shl560_cast_fu_23121_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl559_cast_fu_23109_p1.read()) + sc_biguint<15>(p_shl560_cast_fu_23121_p1.read()));
}

void ShuffleNetV2::thread_tmp_1446_fu_22949_p2() {
    tmp_1446_fu_22949_p2 = (!tmp_1436_reg_35628.read().is_01() || !tmp_629_cast1_fu_22945_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1436_reg_35628.read()) + sc_biguint<15>(tmp_629_cast1_fu_22945_p1.read()));
}

void ShuffleNetV2::thread_tmp_1447_cast_fu_16346_p1() {
    tmp_1447_cast_fu_16346_p1 = esl_sext<17,16>(tmp_1138_fu_16340_p2.read());
}

void ShuffleNetV2::thread_tmp_1447_fu_23151_p2() {
    tmp_1447_fu_23151_p2 = (!tmp_1441_reg_35677.read().is_01() || !tmp_634_cast_fu_23147_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1441_reg_35677.read()) + sc_biguint<14>(tmp_634_cast_fu_23147_p1.read()));
}

void ShuffleNetV2::thread_tmp_1448_cast_fu_16355_p1() {
    tmp_1448_cast_fu_16355_p1 = esl_sext<64,17>(tmp_1139_fu_16350_p2.read());
}

void ShuffleNetV2::thread_tmp_1448_fu_23156_p2() {
    tmp_1448_fu_23156_p2 = (!tmp_1445_reg_35682.read().is_01() || !tmp_634_cast1_fu_23143_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1445_reg_35682.read()) + sc_biguint<15>(tmp_634_cast1_fu_23143_p1.read()));
}

void ShuffleNetV2::thread_tmp_1449_fu_23476_p1() {
    tmp_1449_fu_23476_p1 = k44_reg_6116.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1450_fu_23275_p1() {
    tmp_1450_fu_23275_p1 = i130_reg_6094.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1451_fu_23390_p3() {
    tmp_1451_fu_23390_p3 = esl_concat<9,5>(tmp_645_reg_35754.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1452_fu_23397_p1() {
    tmp_1452_fu_23397_p1 = esl_sext<16,14>(tmp_1451_fu_23390_p3.read());
}

void ShuffleNetV2::thread_tmp_1453_fu_23405_p3() {
    tmp_1453_fu_23405_p3 = esl_concat<9,3>(tmp_645_reg_35754.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1454_fu_23412_p1() {
    tmp_1454_fu_23412_p1 = esl_sext<14,12>(tmp_1453_fu_23405_p3.read());
}

void ShuffleNetV2::thread_tmp_1455_fu_23420_p2() {
    tmp_1455_fu_23420_p2 = (!p_shl565_cast_fu_23401_p1.read().is_01() || !p_shl566_cast_fu_23416_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl565_cast_fu_23401_p1.read()) - sc_biguint<17>(p_shl566_cast_fu_23416_p1.read()));
}

void ShuffleNetV2::thread_tmp_1456_cast_fu_16360_p1() {
    tmp_1456_cast_fu_16360_p1 = esl_sext<64,13>(tmp_1143_reg_33510.read());
}

void ShuffleNetV2::thread_tmp_1456_fu_23430_p2() {
    tmp_1456_fu_23430_p2 = (!tmp_631_cast_reg_35736.read().is_01() || !tmp_1840_cast_fu_23426_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_631_cast_reg_35736.read()) + sc_bigint<18>(tmp_1840_cast_fu_23426_p1.read()));
}

void ShuffleNetV2::thread_tmp_1457_fu_23359_p3() {
    tmp_1457_fu_23359_p3 = esl_concat<7,6>(tmp_647_fu_23354_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1458_fu_23367_p3() {
    tmp_1458_fu_23367_p3 = esl_concat<7,4>(tmp_647_fu_23354_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1459_fu_23379_p2() {
    tmp_1459_fu_23379_p2 = (!tmp_1457_fu_23359_p3.read().is_01() || !p_shl564_cast_fu_23375_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1457_fu_23359_p3.read()) - sc_bigint<13>(p_shl564_cast_fu_23375_p1.read()));
}

void ShuffleNetV2::thread_tmp_1460_fu_23385_p2() {
    tmp_1460_fu_23385_p2 = (!tmp_633_cast1_reg_35741.read().is_01() || !tmp_1459_fu_23379_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_633_cast1_reg_35741.read()) + sc_biguint<13>(tmp_1459_fu_23379_p2.read()));
}

void ShuffleNetV2::thread_tmp_1461_fu_23908_p1() {
    tmp_1461_fu_23908_p1 = co151_reg_6193.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1462_fu_23822_p1() {
    tmp_1462_fu_23822_p1 = k46_reg_6182.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1463_fu_23618_p1() {
    tmp_1463_fu_23618_p1 = i136_reg_6160.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1464_fu_23675_p3() {
    tmp_1464_fu_23675_p3 = esl_concat<10,2>(tmp_661_reg_35873.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1465_cast_fu_16617_p1() {
    tmp_1465_cast_fu_16617_p1 = esl_sext<15,12>(tmp_1149_fu_16612_p2.read());
}

void ShuffleNetV2::thread_tmp_1465_fu_23686_p2() {
    tmp_1465_fu_23686_p2 = (!p_shl570_cast_fu_23682_p1.read().is_01() || !tmp_662_cast_fu_23672_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl570_cast_fu_23682_p1.read()) - sc_biguint<13>(tmp_662_cast_fu_23672_p1.read()));
}

void ShuffleNetV2::thread_tmp_1466_fu_23692_p2() {
    tmp_1466_fu_23692_p2 = (!tmp_1465_fu_23686_p2.read().is_01() || !tmp_648_cast_reg_35842.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1465_fu_23686_p2.read()) + sc_biguint<13>(tmp_648_cast_reg_35842.read()));
}

void ShuffleNetV2::thread_tmp_1467_fu_23709_p2() {
    tmp_1467_fu_23709_p2 = (!p_shl569_cast_fu_23701_p3.read().is_01() || !tmp_1858_cast_fu_23697_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl569_cast_fu_23701_p3.read()) - sc_bigint<15>(tmp_1858_cast_fu_23697_p1.read()));
}

void ShuffleNetV2::thread_tmp_1468_cast_fu_16689_p1() {
    tmp_1468_cast_fu_16689_p1 = esl_zext<64,15>(tmp_1152_reg_33635.read());
}

void ShuffleNetV2::thread_tmp_1468_fu_23715_p2() {
    tmp_1468_fu_23715_p2 = (!tmp_1467_fu_23709_p2.read().is_01() || !tmp_655_cast2_reg_35860.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1467_fu_23709_p2.read()) + sc_biguint<15>(tmp_655_cast2_reg_35860.read()));
}

void ShuffleNetV2::thread_tmp_1469_fu_23727_p3() {
    tmp_1469_fu_23727_p3 = esl_concat<7,2>(tmp_664_reg_35879.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1470_fu_23734_p1() {
    tmp_1470_fu_23734_p1 = esl_sext<34,9>(tmp_1469_fu_23727_p3.read());
}

void ShuffleNetV2::thread_tmp_1471_cast_fu_16672_p1() {
    tmp_1471_cast_fu_16672_p1 = esl_sext<36,35>(tmp_1155_fu_16666_p2.read());
}

void ShuffleNetV2::thread_tmp_1471_fu_23742_p2() {
    tmp_1471_fu_23742_p2 = (!p_shl568_cast_fu_23738_p1.read().is_01() || !tmp_665_cast_fu_23723_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl568_cast_fu_23738_p1.read()) - sc_biguint<35>(tmp_665_cast_fu_23723_p1.read()));
}

void ShuffleNetV2::thread_tmp_1472_fu_23752_p2() {
    tmp_1472_fu_23752_p2 = (!tmp_1864_cast_fu_23748_p1.read().is_01() || !tmp_648_cast1_reg_35837.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1864_cast_fu_23748_p1.read()) + sc_biguint<36>(tmp_648_cast1_reg_35837.read()));
}

void ShuffleNetV2::thread_tmp_1473_fu_23757_p1() {
    tmp_1473_fu_23757_p1 = tmp_1472_fu_23752_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1474_fu_23761_p1() {
    tmp_1474_fu_23761_p1 = tmp_1472_fu_23752_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1475_cast_fu_16710_p1() {
    tmp_1475_cast_fu_16710_p1 = esl_zext<64,10>(tmp_1160_reg_33655.read());
}

void ShuffleNetV2::thread_tmp_1475_fu_23776_p2() {
    tmp_1475_fu_23776_p2 = (!p_shl567_cast_fu_23769_p3.read().is_01() || !tmp_1473_reg_35890.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl567_cast_fu_23769_p3.read()) - sc_biguint<10>(tmp_1473_reg_35890.read()));
}

void ShuffleNetV2::thread_tmp_1476_fu_23781_p2() {
    tmp_1476_fu_23781_p2 = (!tmp_1475_fu_23776_p2.read().is_01() || !tmp_655_cast1_reg_35855.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1475_fu_23776_p2.read()) + sc_biguint<10>(tmp_655_cast1_reg_35855.read()));
}

void ShuffleNetV2::thread_tmp_1477_fu_24280_p3() {
    tmp_1477_fu_24280_p3 = esl_concat<6,3>(co153_reg_6248.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1478_fu_24292_p3() {
    tmp_1478_fu_24292_p3 = esl_concat<6,1>(co153_reg_6248.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1479_fu_24304_p2() {
    tmp_1479_fu_24304_p2 = (!p_shl576_cast_fu_24300_p1.read().is_01() || !p_shl575_cast_fu_24288_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl576_cast_fu_24300_p1.read()) + sc_biguint<10>(p_shl575_cast_fu_24288_p1.read()));
}

void ShuffleNetV2::thread_tmp_1480_fu_24198_p1() {
    tmp_1480_fu_24198_p1 = k48_reg_6237.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1481_fu_23997_p1() {
    tmp_1481_fu_23997_p1 = i138_reg_6215.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1482_fu_24120_p3() {
    tmp_1482_fu_24120_p3 = esl_concat<12,5>(tmp_672_reg_36000.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1483_fu_24131_p3() {
    tmp_1483_fu_24131_p3 = esl_concat<12,3>(tmp_672_reg_36000.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1484_fu_24142_p2() {
    tmp_1484_fu_24142_p2 = (!p_shl573_cast_fu_24127_p1.read().is_01() || !p_shl574_cast_fu_24138_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl573_cast_fu_24127_p1.read()) - sc_biguint<18>(p_shl574_cast_fu_24138_p1.read()));
}

void ShuffleNetV2::thread_tmp_1485_cast_fu_17064_p1() {
    tmp_1485_cast_fu_17064_p1 = esl_sext<18,17>(tmp_1168_fu_17058_p2.read());
}

void ShuffleNetV2::thread_tmp_1485_fu_24152_p2() {
    tmp_1485_fu_24152_p2 = (!tmp_656_cast_reg_35982.read().is_01() || !tmp_1878_cast_fu_24148_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_656_cast_reg_35982.read()) + sc_bigint<19>(tmp_1878_cast_fu_24148_p1.read()));
}

void ShuffleNetV2::thread_tmp_1486_cast_fu_17073_p1() {
    tmp_1486_cast_fu_17073_p1 = esl_sext<64,18>(tmp_1169_fu_17068_p2.read());
}

void ShuffleNetV2::thread_tmp_1486_fu_24089_p3() {
    tmp_1486_fu_24089_p3 = esl_concat<7,6>(tmp_674_fu_24084_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1487_fu_24097_p3() {
    tmp_1487_fu_24097_p3 = esl_concat<7,4>(tmp_674_fu_24084_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1488_fu_24109_p2() {
    tmp_1488_fu_24109_p2 = (!tmp_1486_fu_24089_p3.read().is_01() || !p_shl572_cast_fu_24105_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1486_fu_24089_p3.read()) - sc_bigint<13>(p_shl572_cast_fu_24105_p1.read()));
}

void ShuffleNetV2::thread_tmp_1489_fu_24115_p2() {
    tmp_1489_fu_24115_p2 = (!tmp_658_cast_reg_35987.read().is_01() || !tmp_1488_fu_24109_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_658_cast_reg_35987.read()) + sc_biguint<13>(tmp_1488_fu_24109_p2.read()));
}

void ShuffleNetV2::thread_tmp_1490_fu_24403_p1() {
    tmp_1490_fu_24403_p1 = co155_reg_6281.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1491_fu_24419_p2() {
    tmp_1491_fu_24419_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co155_reg_6281.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1492_fu_24326_p2() {
    tmp_1492_fu_24326_p2 = (!tmp_676_cast_fu_24322_p1.read().is_01() || !tmp_1479_reg_36065.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_676_cast_fu_24322_p1.read()) + sc_biguint<10>(tmp_1479_reg_36065.read()));
}

void ShuffleNetV2::thread_tmp_1493_fu_24331_p3() {
    tmp_1493_fu_24331_p3 = esl_concat<10,3>(tmp_1492_fu_24326_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1494_cast_fu_17078_p1() {
    tmp_1494_cast_fu_17078_p1 = esl_sext<64,13>(tmp_1173_reg_33756.read());
}

void ShuffleNetV2::thread_tmp_1494_fu_24343_p3() {
    tmp_1494_fu_24343_p3 = esl_concat<10,1>(tmp_1492_fu_24326_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1495_fu_24355_p2() {
    tmp_1495_fu_24355_p2 = (!p_shl577_cast_fu_24339_p1.read().is_01() || !p_shl578_cast_fu_24351_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl577_cast_fu_24339_p1.read()) + sc_biguint<15>(p_shl578_cast_fu_24351_p1.read()));
}

void ShuffleNetV2::thread_tmp_1496_fu_24377_p2() {
    tmp_1496_fu_24377_p2 = (!tmp_1495_reg_36078.read().is_01() || !tmp_681_cast_fu_24373_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1495_reg_36078.read()) + sc_biguint<15>(tmp_681_cast_fu_24373_p1.read()));
}

void ShuffleNetV2::thread_tmp_1497_fu_24673_p1() {
    tmp_1497_fu_24673_p1 = k50_reg_6325.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1498_fu_24490_p1() {
    tmp_1498_fu_24490_p1 = i142_reg_6303.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1499_fu_24595_p3() {
    tmp_1499_fu_24595_p3 = esl_concat<12,5>(tmp_689_reg_36150.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1500_fu_24606_p3() {
    tmp_1500_fu_24606_p3 = esl_concat<12,3>(tmp_689_reg_36150.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1501_fu_24617_p2() {
    tmp_1501_fu_24617_p2 = (!p_shl581_cast_fu_24602_p1.read().is_01() || !p_shl582_cast_fu_24613_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl581_cast_fu_24602_p1.read()) - sc_biguint<18>(p_shl582_cast_fu_24613_p1.read()));
}

void ShuffleNetV2::thread_tmp_1502_fu_24627_p2() {
    tmp_1502_fu_24627_p2 = (!tmp_677_cast_reg_36132.read().is_01() || !tmp_1901_cast_fu_24623_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_677_cast_reg_36132.read()) + sc_bigint<19>(tmp_1901_cast_fu_24623_p1.read()));
}

void ShuffleNetV2::thread_tmp_1503_fu_24543_p2() {
    tmp_1503_fu_24543_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i142_reg_6303.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1504_fu_24564_p3() {
    tmp_1504_fu_24564_p3 = esl_concat<8,7>(tmp_692_fu_24559_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1505_fu_24572_p3() {
    tmp_1505_fu_24572_p3 = esl_concat<8,5>(tmp_692_fu_24559_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1506_fu_24584_p2() {
    tmp_1506_fu_24584_p2 = (!tmp_1504_fu_24564_p3.read().is_01() || !p_shl580_cast_fu_24580_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1504_fu_24564_p3.read()) - sc_bigint<15>(p_shl580_cast_fu_24580_p1.read()));
}

void ShuffleNetV2::thread_tmp_1507_fu_24590_p2() {
    tmp_1507_fu_24590_p2 = (!tmp_679_cast_reg_36137.read().is_01() || !tmp_1506_fu_24584_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_679_cast_reg_36137.read()) + sc_biguint<15>(tmp_1506_fu_24584_p2.read()));
}

void ShuffleNetV2::thread_tmp_1508_fu_25105_p1() {
    tmp_1508_fu_25105_p1 = co159_reg_6402.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1509_fu_25121_p2() {
    tmp_1509_fu_25121_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co159_reg_6402.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1510_fu_25019_p1() {
    tmp_1510_fu_25019_p1 = k52_reg_6391.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1511_fu_24815_p1() {
    tmp_1511_fu_24815_p1 = i148_reg_6369.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1512_fu_24872_p3() {
    tmp_1512_fu_24872_p3 = esl_concat<10,2>(tmp_707_reg_36269.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1513_fu_24883_p2() {
    tmp_1513_fu_24883_p2 = (!p_shl586_cast_fu_24879_p1.read().is_01() || !tmp_708_cast_fu_24869_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl586_cast_fu_24879_p1.read()) - sc_biguint<13>(tmp_708_cast_fu_24869_p1.read()));
}

void ShuffleNetV2::thread_tmp_1514_fu_24889_p2() {
    tmp_1514_fu_24889_p2 = (!tmp_1513_fu_24883_p2.read().is_01() || !tmp_695_cast_reg_36238.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1513_fu_24883_p2.read()) + sc_biguint<13>(tmp_695_cast_reg_36238.read()));
}

void ShuffleNetV2::thread_tmp_1515_cast_fu_17298_p1() {
    tmp_1515_cast_fu_17298_p1 = esl_zext<64,15>(tmp_1193_fu_17293_p2.read());
}

void ShuffleNetV2::thread_tmp_1515_fu_24906_p2() {
    tmp_1515_fu_24906_p2 = (!p_shl585_cast_fu_24898_p3.read().is_01() || !tmp_1918_cast_fu_24894_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl585_cast_fu_24898_p3.read()) - sc_bigint<15>(tmp_1918_cast_fu_24894_p1.read()));
}

void ShuffleNetV2::thread_tmp_1516_cast_fu_17510_p1() {
    tmp_1516_cast_fu_17510_p1 = esl_zext<64,14>(tmp_1194_reg_33895.read());
}

void ShuffleNetV2::thread_tmp_1516_fu_24912_p2() {
    tmp_1516_fu_24912_p2 = (!tmp_1515_fu_24906_p2.read().is_01() || !tmp_702_cast_reg_36256.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1515_fu_24906_p2.read()) + sc_biguint<15>(tmp_702_cast_reg_36256.read()));
}

void ShuffleNetV2::thread_tmp_1517_cast_fu_17505_p1() {
    tmp_1517_cast_fu_17505_p1 = esl_zext<64,15>(tmp_1195_fu_17500_p2.read());
}

void ShuffleNetV2::thread_tmp_1517_fu_24924_p3() {
    tmp_1517_fu_24924_p3 = esl_concat<8,2>(tmp_709_reg_36275.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1518_fu_24931_p1() {
    tmp_1518_fu_24931_p1 = esl_sext<34,10>(tmp_1517_fu_24924_p3.read());
}

void ShuffleNetV2::thread_tmp_1519_fu_24939_p2() {
    tmp_1519_fu_24939_p2 = (!p_shl584_cast_fu_24935_p1.read().is_01() || !tmp_711_cast1_fu_24920_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl584_cast_fu_24935_p1.read()) - sc_biguint<35>(tmp_711_cast1_fu_24920_p1.read()));
}

void ShuffleNetV2::thread_tmp_1520_fu_24949_p2() {
    tmp_1520_fu_24949_p2 = (!tmp_1924_cast_fu_24945_p1.read().is_01() || !tmp_695_cast1_reg_36233.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1924_cast_fu_24945_p1.read()) + sc_biguint<36>(tmp_695_cast1_reg_36233.read()));
}

void ShuffleNetV2::thread_tmp_1521_fu_24954_p1() {
    tmp_1521_fu_24954_p1 = tmp_1520_fu_24949_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1522_fu_24958_p1() {
    tmp_1522_fu_24958_p1 = tmp_1520_fu_24949_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1523_fu_24973_p2() {
    tmp_1523_fu_24973_p2 = (!p_shl583_cast_fu_24966_p3.read().is_01() || !tmp_1521_reg_36286.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl583_cast_fu_24966_p3.read()) - sc_biguint<11>(tmp_1521_reg_36286.read()));
}

void ShuffleNetV2::thread_tmp_1524_cast_fu_17762_p1() {
    tmp_1524_cast_fu_17762_p1 = esl_sext<18,17>(tmp_1200_fu_17756_p2.read());
}

void ShuffleNetV2::thread_tmp_1524_fu_24978_p2() {
    tmp_1524_fu_24978_p2 = (!tmp_1523_fu_24973_p2.read().is_01() || !tmp_702_cast1_reg_36251.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1523_fu_24973_p2.read()) + sc_biguint<11>(tmp_702_cast1_reg_36251.read()));
}

void ShuffleNetV2::thread_tmp_1525_cast_fu_17771_p1() {
    tmp_1525_cast_fu_17771_p1 = esl_sext<64,18>(tmp_1201_fu_17766_p2.read());
}

void ShuffleNetV2::thread_tmp_1525_fu_25375_p1() {
    tmp_1525_fu_25375_p1 = k54_reg_6446.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1526_fu_25192_p1() {
    tmp_1526_fu_25192_p1 = i150_reg_6424.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1527_fu_25297_p3() {
    tmp_1527_fu_25297_p3 = esl_concat<12,5>(tmp_719_reg_36396.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1528_fu_25308_p3() {
    tmp_1528_fu_25308_p3 = esl_concat<12,3>(tmp_719_reg_36396.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1529_fu_25319_p2() {
    tmp_1529_fu_25319_p2 = (!p_shl589_cast_fu_25304_p1.read().is_01() || !p_shl590_cast_fu_25315_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl589_cast_fu_25304_p1.read()) - sc_biguint<18>(p_shl590_cast_fu_25315_p1.read()));
}

void ShuffleNetV2::thread_tmp_1530_fu_25329_p2() {
    tmp_1530_fu_25329_p2 = (!tmp_703_cast_reg_36378.read().is_01() || !tmp_1935_cast_fu_25325_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_703_cast_reg_36378.read()) + sc_bigint<19>(tmp_1935_cast_fu_25325_p1.read()));
}

void ShuffleNetV2::thread_tmp_1531_fu_25245_p2() {
    tmp_1531_fu_25245_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i150_reg_6424.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1532_fu_25266_p3() {
    tmp_1532_fu_25266_p3 = esl_concat<8,7>(tmp_721_fu_25261_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1533_cast_fu_17776_p1() {
    tmp_1533_cast_fu_17776_p1 = esl_sext<64,13>(tmp_1205_reg_33960.read());
}

void ShuffleNetV2::thread_tmp_1533_fu_25274_p3() {
    tmp_1533_fu_25274_p3 = esl_concat<8,5>(tmp_721_fu_25261_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1534_fu_25286_p2() {
    tmp_1534_fu_25286_p2 = (!tmp_1532_fu_25266_p3.read().is_01() || !p_shl588_cast_fu_25282_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1532_fu_25266_p3.read()) - sc_bigint<15>(p_shl588_cast_fu_25282_p1.read()));
}

void ShuffleNetV2::thread_tmp_1535_fu_25292_p2() {
    tmp_1535_fu_25292_p2 = (!tmp_705_cast_reg_36383.read().is_01() || !tmp_1534_fu_25286_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_705_cast_reg_36383.read()) + sc_biguint<15>(tmp_1534_fu_25286_p2.read()));
}

void ShuffleNetV2::thread_tmp_1536_fu_25807_p1() {
    tmp_1536_fu_25807_p1 = co163_reg_6523.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1537_fu_25823_p2() {
    tmp_1537_fu_25823_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co163_reg_6523.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1538_fu_25725_p1() {
    tmp_1538_fu_25725_p1 = k56_reg_6512.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1539_fu_25521_p1() {
    tmp_1539_fu_25521_p1 = i156_reg_6490.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1540_fu_25578_p3() {
    tmp_1540_fu_25578_p3 = esl_concat<10,2>(tmp_735_reg_36515.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1541_fu_25589_p2() {
    tmp_1541_fu_25589_p2 = (!p_shl594_cast_fu_25585_p1.read().is_01() || !tmp_736_cast_fu_25575_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl594_cast_fu_25585_p1.read()) - sc_biguint<13>(tmp_736_cast_fu_25575_p1.read()));
}

void ShuffleNetV2::thread_tmp_1542_cast_fu_18029_p1() {
    tmp_1542_cast_fu_18029_p1 = esl_sext<15,12>(tmp_1211_fu_18024_p2.read());
}

void ShuffleNetV2::thread_tmp_1542_fu_25595_p2() {
    tmp_1542_fu_25595_p2 = (!tmp_1541_fu_25589_p2.read().is_01() || !tmp_722_cast_reg_36484.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1541_fu_25589_p2.read()) + sc_biguint<13>(tmp_722_cast_reg_36484.read()));
}

void ShuffleNetV2::thread_tmp_1543_fu_25612_p2() {
    tmp_1543_fu_25612_p2 = (!p_shl593_cast_fu_25604_p3.read().is_01() || !tmp_1952_cast_fu_25600_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl593_cast_fu_25604_p3.read()) - sc_bigint<15>(tmp_1952_cast_fu_25600_p1.read()));
}

void ShuffleNetV2::thread_tmp_1544_fu_25618_p2() {
    tmp_1544_fu_25618_p2 = (!tmp_1543_fu_25612_p2.read().is_01() || !tmp_729_cast_reg_36502.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1543_fu_25612_p2.read()) + sc_biguint<15>(tmp_729_cast_reg_36502.read()));
}

void ShuffleNetV2::thread_tmp_1545_cast_fu_18101_p1() {
    tmp_1545_cast_fu_18101_p1 = esl_zext<64,15>(tmp_1214_reg_34085.read());
}

void ShuffleNetV2::thread_tmp_1545_fu_25630_p3() {
    tmp_1545_fu_25630_p3 = esl_concat<8,2>(tmp_737_reg_36521.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1546_fu_25637_p1() {
    tmp_1546_fu_25637_p1 = esl_sext<34,10>(tmp_1545_fu_25630_p3.read());
}

void ShuffleNetV2::thread_tmp_1547_fu_25645_p2() {
    tmp_1547_fu_25645_p2 = (!p_shl592_cast_fu_25641_p1.read().is_01() || !tmp_739_cast_fu_25626_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl592_cast_fu_25641_p1.read()) - sc_biguint<35>(tmp_739_cast_fu_25626_p1.read()));
}

void ShuffleNetV2::thread_tmp_1548_cast_fu_18084_p1() {
    tmp_1548_cast_fu_18084_p1 = esl_sext<36,35>(tmp_1217_fu_18078_p2.read());
}

void ShuffleNetV2::thread_tmp_1548_fu_25655_p2() {
    tmp_1548_fu_25655_p2 = (!tmp_1958_cast_fu_25651_p1.read().is_01() || !tmp_722_cast1_reg_36479.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1958_cast_fu_25651_p1.read()) + sc_biguint<36>(tmp_722_cast1_reg_36479.read()));
}

void ShuffleNetV2::thread_tmp_1549_fu_25660_p1() {
    tmp_1549_fu_25660_p1 = tmp_1548_fu_25655_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1550_fu_25664_p1() {
    tmp_1550_fu_25664_p1 = tmp_1548_fu_25655_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1551_fu_25679_p2() {
    tmp_1551_fu_25679_p2 = (!p_shl591_cast_fu_25672_p3.read().is_01() || !tmp_1549_reg_36532.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl591_cast_fu_25672_p3.read()) - sc_biguint<11>(tmp_1549_reg_36532.read()));
}

void ShuffleNetV2::thread_tmp_1552_cast_fu_18122_p1() {
    tmp_1552_cast_fu_18122_p1 = esl_zext<64,10>(tmp_1222_reg_34105.read());
}

void ShuffleNetV2::thread_tmp_1552_fu_25684_p2() {
    tmp_1552_fu_25684_p2 = (!tmp_1551_fu_25679_p2.read().is_01() || !tmp_729_cast1_reg_36497.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1551_fu_25679_p2.read()) + sc_biguint<11>(tmp_729_cast1_reg_36497.read()));
}

void ShuffleNetV2::thread_tmp_1553_fu_26165_p3() {
    tmp_1553_fu_26165_p3 = esl_concat<8,3>(tmp_740_fu_26159_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1554_fu_26177_p3() {
    tmp_1554_fu_26177_p3 = esl_concat<8,1>(tmp_740_fu_26159_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1555_fu_26189_p2() {
    tmp_1555_fu_26189_p2 = (!p_shl601_cast_fu_26173_p1.read().is_01() || !p_shl602_cast_fu_26185_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl601_cast_fu_26173_p1.read()) - sc_biguint<12>(p_shl602_cast_fu_26185_p1.read()));
}

void ShuffleNetV2::thread_tmp_1556_fu_26199_p3() {
    tmp_1556_fu_26199_p3 = esl_concat<7,3>(co165_reg_6578.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1557_fu_26211_p3() {
    tmp_1557_fu_26211_p3 = esl_concat<7,1>(co165_reg_6578.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1558_fu_26223_p2() {
    tmp_1558_fu_26223_p2 = (!p_shl599_cast_fu_26207_p1.read().is_01() || !p_shl600_cast_fu_26219_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl599_cast_fu_26207_p1.read()) - sc_biguint<11>(p_shl600_cast_fu_26219_p1.read()));
}

void ShuffleNetV2::thread_tmp_1559_fu_26077_p1() {
    tmp_1559_fu_26077_p1 = k58_reg_6567.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1560_fu_25894_p1() {
    tmp_1560_fu_25894_p1 = i158_reg_6545.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1561_fu_25999_p3() {
    tmp_1561_fu_25999_p3 = esl_concat<12,5>(tmp_750_reg_36642.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1562_cast_fu_18472_p1() {
    tmp_1562_cast_fu_18472_p1 = esl_sext<18,17>(tmp_1230_fu_18466_p2.read());
}

void ShuffleNetV2::thread_tmp_1562_fu_26010_p3() {
    tmp_1562_fu_26010_p3 = esl_concat<12,3>(tmp_750_reg_36642.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1563_cast_fu_18481_p1() {
    tmp_1563_cast_fu_18481_p1 = esl_sext<64,18>(tmp_1231_fu_18476_p2.read());
}

void ShuffleNetV2::thread_tmp_1563_fu_26021_p2() {
    tmp_1563_fu_26021_p2 = (!p_shl597_cast_fu_26006_p1.read().is_01() || !p_shl598_cast_fu_26017_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl597_cast_fu_26006_p1.read()) - sc_biguint<18>(p_shl598_cast_fu_26017_p1.read()));
}

void ShuffleNetV2::thread_tmp_1564_fu_26031_p2() {
    tmp_1564_fu_26031_p2 = (!tmp_731_cast_reg_36624.read().is_01() || !tmp_1975_cast_fu_26027_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_731_cast_reg_36624.read()) + sc_bigint<19>(tmp_1975_cast_fu_26027_p1.read()));
}

void ShuffleNetV2::thread_tmp_1565_fu_25947_p2() {
    tmp_1565_fu_25947_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i158_reg_6545.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1566_fu_25968_p3() {
    tmp_1566_fu_25968_p3 = esl_concat<8,7>(tmp_752_fu_25963_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1567_fu_25976_p3() {
    tmp_1567_fu_25976_p3 = esl_concat<8,5>(tmp_752_fu_25963_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1568_fu_25988_p2() {
    tmp_1568_fu_25988_p2 = (!tmp_1566_fu_25968_p3.read().is_01() || !p_shl596_cast_fu_25984_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1566_fu_25968_p3.read()) - sc_bigint<15>(p_shl596_cast_fu_25984_p1.read()));
}

void ShuffleNetV2::thread_tmp_1569_fu_25994_p2() {
    tmp_1569_fu_25994_p2 = (!tmp_733_cast1_reg_36629.read().is_01() || !tmp_1568_fu_25988_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_733_cast1_reg_36629.read()) + sc_biguint<15>(tmp_1568_fu_25988_p2.read()));
}

void ShuffleNetV2::thread_tmp_1570_fu_26370_p1() {
    tmp_1570_fu_26370_p1 = co167_reg_6611.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1571_cast_fu_18486_p1() {
    tmp_1571_cast_fu_18486_p1 = esl_sext<64,13>(tmp_1235_reg_34206.read());
}

void ShuffleNetV2::thread_tmp_1571_fu_26386_p2() {
    tmp_1571_fu_26386_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co167_reg_6611.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1572_fu_26253_p2() {
    tmp_1572_fu_26253_p2 = (!tmp_754_cast_fu_26249_p1.read().is_01() || !tmp_1965_cast_reg_36707.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_754_cast_fu_26249_p1.read()) + sc_bigint<13>(tmp_1965_cast_reg_36707.read()));
}

void ShuffleNetV2::thread_tmp_1573_fu_26258_p1() {
    tmp_1573_fu_26258_p1 = tmp_1572_fu_26253_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1574_fu_26278_p2() {
    tmp_1574_fu_26278_p2 = (!p_shl605_cast_fu_26262_p3.read().is_01() || !p_shl606_cast_fu_26270_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl605_cast_fu_26262_p3.read()) - sc_biguint<14>(p_shl606_cast_fu_26270_p3.read()));
}

void ShuffleNetV2::thread_tmp_1575_fu_26284_p2() {
    tmp_1575_fu_26284_p2 = (!tmp_754_cast1_fu_26245_p1.read().is_01() || !tmp_1968_cast_reg_36712.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_754_cast1_fu_26245_p1.read()) + sc_bigint<12>(tmp_1968_cast_reg_36712.read()));
}

void ShuffleNetV2::thread_tmp_1576_fu_26289_p1() {
    tmp_1576_fu_26289_p1 = tmp_1575_fu_26284_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1577_fu_26309_p2() {
    tmp_1577_fu_26309_p2 = (!p_shl603_cast_fu_26293_p3.read().is_01() || !p_shl604_cast_fu_26301_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl603_cast_fu_26293_p3.read()) - sc_biguint<13>(p_shl604_cast_fu_26301_p3.read()));
}

void ShuffleNetV2::thread_tmp_1578_fu_26335_p2() {
    tmp_1578_fu_26335_p2 = (!tmp_1574_reg_36725.read().is_01() || !tmp_758_cast_fu_26331_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1574_reg_36725.read()) + sc_biguint<14>(tmp_758_cast_fu_26331_p1.read()));
}

void ShuffleNetV2::thread_tmp_1579_fu_26345_p2() {
    tmp_1579_fu_26345_p2 = (!tmp_1577_reg_36730.read().is_01() || !tmp_758_cast1_fu_26327_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1577_reg_36730.read()) + sc_biguint<13>(tmp_758_cast1_fu_26327_p1.read()));
}

void ShuffleNetV2::thread_tmp_1580_fu_26640_p1() {
    tmp_1580_fu_26640_p1 = k60_reg_6655.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1581_fu_26457_p1() {
    tmp_1581_fu_26457_p1 = i162_reg_6633.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1582_fu_26562_p3() {
    tmp_1582_fu_26562_p3 = esl_concat<12,5>(tmp_767_reg_36802.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1583_fu_26573_p3() {
    tmp_1583_fu_26573_p3 = esl_concat<12,3>(tmp_767_reg_36802.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1584_fu_26584_p2() {
    tmp_1584_fu_26584_p2 = (!p_shl609_cast_fu_26569_p1.read().is_01() || !p_shl610_cast_fu_26580_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl609_cast_fu_26569_p1.read()) - sc_biguint<18>(p_shl610_cast_fu_26580_p1.read()));
}

void ShuffleNetV2::thread_tmp_1585_fu_26594_p2() {
    tmp_1585_fu_26594_p2 = (!tmp_755_cast_reg_36784.read().is_01() || !tmp_2002_cast_fu_26590_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_755_cast_reg_36784.read()) + sc_bigint<19>(tmp_2002_cast_fu_26590_p1.read()));
}

void ShuffleNetV2::thread_tmp_1586_fu_26510_p2() {
    tmp_1586_fu_26510_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i162_reg_6633.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1587_fu_26531_p3() {
    tmp_1587_fu_26531_p3 = esl_concat<8,7>(tmp_769_fu_26526_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1588_fu_26539_p3() {
    tmp_1588_fu_26539_p3 = esl_concat<8,5>(tmp_769_fu_26526_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1589_fu_26551_p2() {
    tmp_1589_fu_26551_p2 = (!tmp_1587_fu_26531_p3.read().is_01() || !p_shl608_cast_fu_26547_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1587_fu_26531_p3.read()) - sc_bigint<15>(p_shl608_cast_fu_26547_p1.read()));
}

void ShuffleNetV2::thread_tmp_1590_fu_26557_p2() {
    tmp_1590_fu_26557_p2 = (!tmp_757_cast_reg_36789.read().is_01() || !tmp_1589_fu_26551_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_757_cast_reg_36789.read()) + sc_biguint<15>(tmp_1589_fu_26551_p2.read()));
}

void ShuffleNetV2::thread_tmp_1591_fu_27064_p1() {
    tmp_1591_fu_27064_p1 = co171_reg_6732.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1592_cast_fu_18702_p1() {
    tmp_1592_cast_fu_18702_p1 = esl_zext<64,15>(tmp_1255_fu_18697_p2.read());
}

void ShuffleNetV2::thread_tmp_1592_fu_27080_p2() {
    tmp_1592_fu_27080_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co171_reg_6732.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1593_cast_fu_18914_p1() {
    tmp_1593_cast_fu_18914_p1 = esl_zext<64,14>(tmp_1256_reg_34345.read());
}

void ShuffleNetV2::thread_tmp_1593_fu_26982_p1() {
    tmp_1593_fu_26982_p1 = k62_reg_6721.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1594_cast_fu_18909_p1() {
    tmp_1594_cast_fu_18909_p1 = esl_zext<64,15>(tmp_1257_fu_18904_p2.read());
}

void ShuffleNetV2::thread_tmp_1594_fu_26778_p1() {
    tmp_1594_fu_26778_p1 = i168_reg_6699.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1595_fu_26835_p3() {
    tmp_1595_fu_26835_p3 = esl_concat<10,2>(tmp_783_reg_36921.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1596_fu_26846_p2() {
    tmp_1596_fu_26846_p2 = (!p_shl614_cast_fu_26842_p1.read().is_01() || !tmp_784_cast_fu_26832_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl614_cast_fu_26842_p1.read()) - sc_biguint<13>(tmp_784_cast_fu_26832_p1.read()));
}

void ShuffleNetV2::thread_tmp_1597_fu_26852_p2() {
    tmp_1597_fu_26852_p2 = (!tmp_1596_fu_26846_p2.read().is_01() || !tmp_770_cast_reg_36890.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1596_fu_26846_p2.read()) + sc_biguint<13>(tmp_770_cast_reg_36890.read()));
}

void ShuffleNetV2::thread_tmp_1598_fu_26869_p2() {
    tmp_1598_fu_26869_p2 = (!p_shl613_cast_fu_26861_p3.read().is_01() || !tmp_2019_cast_fu_26857_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl613_cast_fu_26861_p3.read()) - sc_bigint<15>(tmp_2019_cast_fu_26857_p1.read()));
}

void ShuffleNetV2::thread_tmp_1599_fu_26875_p2() {
    tmp_1599_fu_26875_p2 = (!tmp_1598_fu_26869_p2.read().is_01() || !tmp_777_cast2_reg_36908.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1598_fu_26869_p2.read()) + sc_biguint<15>(tmp_777_cast2_reg_36908.read()));
}

void ShuffleNetV2::thread_tmp_159_fu_7765_p1() {
    tmp_159_fu_7765_p1 = esl_zext<64,12>(tmp_cast_fu_7761_p1.read());
}

void ShuffleNetV2::thread_tmp_1600_fu_26887_p3() {
    tmp_1600_fu_26887_p3 = esl_concat<8,2>(tmp_785_reg_36927.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1601_cast_fu_19166_p1() {
    tmp_1601_cast_fu_19166_p1 = esl_sext<18,17>(tmp_1262_fu_19160_p2.read());
}

void ShuffleNetV2::thread_tmp_1601_fu_26894_p1() {
    tmp_1601_fu_26894_p1 = esl_sext<34,10>(tmp_1600_fu_26887_p3.read());
}

void ShuffleNetV2::thread_tmp_1602_cast_fu_19175_p1() {
    tmp_1602_cast_fu_19175_p1 = esl_sext<64,18>(tmp_1263_fu_19170_p2.read());
}

void ShuffleNetV2::thread_tmp_1602_fu_26902_p2() {
    tmp_1602_fu_26902_p2 = (!p_shl612_cast_fu_26898_p1.read().is_01() || !tmp_786_cast_fu_26883_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl612_cast_fu_26898_p1.read()) - sc_biguint<35>(tmp_786_cast_fu_26883_p1.read()));
}

void ShuffleNetV2::thread_tmp_1603_fu_26912_p2() {
    tmp_1603_fu_26912_p2 = (!tmp_2025_cast_fu_26908_p1.read().is_01() || !tmp_770_cast1_reg_36885.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2025_cast_fu_26908_p1.read()) + sc_biguint<36>(tmp_770_cast1_reg_36885.read()));
}

void ShuffleNetV2::thread_tmp_1604_fu_26917_p1() {
    tmp_1604_fu_26917_p1 = tmp_1603_fu_26912_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1605_fu_26921_p1() {
    tmp_1605_fu_26921_p1 = tmp_1603_fu_26912_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1606_fu_26936_p2() {
    tmp_1606_fu_26936_p2 = (!p_shl611_cast_fu_26929_p3.read().is_01() || !tmp_1604_reg_36938.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl611_cast_fu_26929_p3.read()) - sc_biguint<11>(tmp_1604_reg_36938.read()));
}

void ShuffleNetV2::thread_tmp_1607_fu_26941_p2() {
    tmp_1607_fu_26941_p2 = (!tmp_1606_fu_26936_p2.read().is_01() || !tmp_777_cast1_reg_36903.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1606_fu_26936_p2.read()) + sc_biguint<11>(tmp_777_cast1_reg_36903.read()));
}

void ShuffleNetV2::thread_tmp_1608_fu_27420_p3() {
    tmp_1608_fu_27420_p3 = esl_concat<7,3>(co173_reg_6787.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1609_fu_27432_p3() {
    tmp_1609_fu_27432_p3 = esl_concat<7,1>(co173_reg_6787.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_160_fu_7770_p1() {
    tmp_160_fu_7770_p1 = esl_zext<64,10>(i1_reg_3262.read());
}

void ShuffleNetV2::thread_tmp_1610_cast_fu_19180_p1() {
    tmp_1610_cast_fu_19180_p1 = esl_sext<64,13>(tmp_1267_reg_34410.read());
}

void ShuffleNetV2::thread_tmp_1610_fu_27444_p2() {
    tmp_1610_fu_27444_p2 = (!p_shl619_cast_fu_27428_p1.read().is_01() || !p_shl620_cast_fu_27440_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl619_cast_fu_27428_p1.read()) - sc_biguint<11>(p_shl620_cast_fu_27440_p1.read()));
}

void ShuffleNetV2::thread_tmp_1611_fu_27342_p1() {
    tmp_1611_fu_27342_p1 = k64_reg_6776.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1612_fu_27151_p1() {
    tmp_1612_fu_27151_p1 = i170_reg_6754.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1613_fu_27256_p3() {
    tmp_1613_fu_27256_p3 = esl_concat<11,5>(tmp_795_reg_37048.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1614_fu_27263_p1() {
    tmp_1614_fu_27263_p1 = esl_sext<17,16>(tmp_1613_fu_27256_p3.read());
}

void ShuffleNetV2::thread_tmp_1615_fu_27271_p3() {
    tmp_1615_fu_27271_p3 = esl_concat<11,3>(tmp_795_reg_37048.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1616_fu_27278_p1() {
    tmp_1616_fu_27278_p1 = esl_sext<15,14>(tmp_1615_fu_27271_p3.read());
}

void ShuffleNetV2::thread_tmp_1617_fu_27286_p2() {
    tmp_1617_fu_27286_p2 = (!p_shl617_cast_fu_27267_p1.read().is_01() || !p_shl618_cast_fu_27282_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl617_cast_fu_27267_p1.read()) - sc_biguint<18>(p_shl618_cast_fu_27282_p1.read()));
}

void ShuffleNetV2::thread_tmp_1618_fu_27296_p2() {
    tmp_1618_fu_27296_p2 = (!tmp_778_cast_reg_37030.read().is_01() || !tmp_2041_cast_fu_27292_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_778_cast_reg_37030.read()) + sc_bigint<19>(tmp_2041_cast_fu_27292_p1.read()));
}

void ShuffleNetV2::thread_tmp_1619_fu_27204_p2() {
    tmp_1619_fu_27204_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i170_reg_6754.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_161_fu_7791_p2() {
    tmp_161_fu_7791_p2 = (!i2_cast713_cast_fu_7775_p1.read().is_01() || !ap_const_lv10_218.is_01())? sc_lv<10>(): (sc_biguint<10>(i2_cast713_cast_fu_7775_p1.read()) + sc_bigint<10>(ap_const_lv10_218));
}

void ShuffleNetV2::thread_tmp_1620_cast_fu_19441_p1() {
    tmp_1620_cast_fu_19441_p1 = esl_sext<15,12>(tmp_1274_fu_19436_p2.read());
}

void ShuffleNetV2::thread_tmp_1620_fu_27225_p3() {
    tmp_1620_fu_27225_p3 = esl_concat<8,7>(tmp_797_fu_27220_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1621_fu_27233_p3() {
    tmp_1621_fu_27233_p3 = esl_concat<8,5>(tmp_797_fu_27220_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1622_fu_27245_p2() {
    tmp_1622_fu_27245_p2 = (!tmp_1620_fu_27225_p3.read().is_01() || !p_shl616_cast_fu_27241_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1620_fu_27225_p3.read()) - sc_bigint<15>(p_shl616_cast_fu_27241_p1.read()));
}

void ShuffleNetV2::thread_tmp_1623_cast_fu_19513_p1() {
    tmp_1623_cast_fu_19513_p1 = esl_zext<64,15>(tmp_1277_reg_34535.read());
}

void ShuffleNetV2::thread_tmp_1623_fu_27251_p2() {
    tmp_1623_fu_27251_p2 = (!tmp_781_cast1_reg_37035.read().is_01() || !tmp_1622_fu_27245_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_781_cast1_reg_37035.read()) + sc_biguint<15>(tmp_1622_fu_27245_p2.read()));
}

void ShuffleNetV2::thread_tmp_1624_fu_27553_p3() {
    tmp_1624_fu_27553_p3 = esl_concat<8,3>(tmp_798_fu_27547_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1625_fu_27565_p3() {
    tmp_1625_fu_27565_p3 = esl_concat<8,1>(tmp_798_fu_27547_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1626_cast_fu_19496_p1() {
    tmp_1626_cast_fu_19496_p1 = esl_sext<36,35>(tmp_1280_fu_19490_p2.read());
}

void ShuffleNetV2::thread_tmp_1626_fu_27577_p2() {
    tmp_1626_fu_27577_p2 = (!p_shl625_cast_fu_27561_p1.read().is_01() || !p_shl626_cast_fu_27573_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl625_cast_fu_27561_p1.read()) - sc_biguint<12>(p_shl626_cast_fu_27573_p1.read()));
}

void ShuffleNetV2::thread_tmp_1627_fu_27587_p3() {
    tmp_1627_fu_27587_p3 = esl_concat<7,3>(co175_reg_6820.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1628_fu_27599_p3() {
    tmp_1628_fu_27599_p3 = esl_concat<7,1>(co175_reg_6820.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1629_fu_27611_p2() {
    tmp_1629_fu_27611_p2 = (!p_shl623_cast_fu_27595_p1.read().is_01() || !p_shl624_cast_fu_27607_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl623_cast_fu_27595_p1.read()) - sc_biguint<11>(p_shl624_cast_fu_27607_p1.read()));
}

void ShuffleNetV2::thread_tmp_162_fu_7801_p1() {
    tmp_162_fu_7801_p1 = esl_zext<64,12>(tmp_225_cast_fu_7797_p1.read());
}

void ShuffleNetV2::thread_tmp_1630_cast_fu_19534_p1() {
    tmp_1630_cast_fu_19534_p1 = esl_zext<64,10>(tmp_1285_reg_34555.read());
}

void ShuffleNetV2::thread_tmp_1630_fu_27470_p2() {
    tmp_1630_fu_27470_p2 = (!tmp_2032_cast_reg_37113.read().is_01() || !tmp_799_cast_fu_27466_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_2032_cast_reg_37113.read()) + sc_biguint<12>(tmp_799_cast_fu_27466_p1.read()));
}

void ShuffleNetV2::thread_tmp_1631_fu_27475_p1() {
    tmp_1631_fu_27475_p1 = tmp_1630_fu_27470_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1632_fu_27487_p3() {
    tmp_1632_fu_27487_p3 = esl_concat<12,1>(tmp_1630_fu_27470_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1633_fu_27499_p2() {
    tmp_1633_fu_27499_p2 = (!p_shl621_cast_fu_27479_p3.read().is_01() || !p_shl622_cast_fu_27495_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl621_cast_fu_27479_p3.read()) - sc_bigint<14>(p_shl622_cast_fu_27495_p1.read()));
}

void ShuffleNetV2::thread_tmp_1634_fu_27758_p1() {
    tmp_1634_fu_27758_p1 = co177_reg_6853.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1635_fu_27774_p2() {
    tmp_1635_fu_27774_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co177_reg_6853.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1636_fu_27641_p2() {
    tmp_1636_fu_27641_p2 = (!tmp_801_cast_fu_27637_p1.read().is_01() || !tmp_2052_cast_reg_37157.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_801_cast_fu_27637_p1.read()) + sc_bigint<13>(tmp_2052_cast_reg_37157.read()));
}

void ShuffleNetV2::thread_tmp_1637_fu_27646_p1() {
    tmp_1637_fu_27646_p1 = tmp_1636_fu_27641_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1638_fu_27666_p2() {
    tmp_1638_fu_27666_p2 = (!p_shl629_cast_fu_27650_p3.read().is_01() || !p_shl630_cast_fu_27658_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl629_cast_fu_27650_p3.read()) - sc_biguint<14>(p_shl630_cast_fu_27658_p3.read()));
}

void ShuffleNetV2::thread_tmp_1639_fu_27672_p2() {
    tmp_1639_fu_27672_p2 = (!tmp_801_cast1_fu_27633_p1.read().is_01() || !tmp_2055_cast_reg_37162.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_801_cast1_fu_27633_p1.read()) + sc_bigint<12>(tmp_2055_cast_reg_37162.read()));
}

void ShuffleNetV2::thread_tmp_163_fu_7806_p1() {
    tmp_163_fu_7806_p1 = esl_zext<64,4>(i2_reg_3274.read());
}

void ShuffleNetV2::thread_tmp_1640_cast_fu_19884_p1() {
    tmp_1640_cast_fu_19884_p1 = esl_sext<18,17>(tmp_1293_fu_19878_p2.read());
}

void ShuffleNetV2::thread_tmp_1640_fu_27677_p1() {
    tmp_1640_fu_27677_p1 = tmp_1639_fu_27672_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1641_cast_fu_19893_p1() {
    tmp_1641_cast_fu_19893_p1 = esl_sext<64,18>(tmp_1294_fu_19888_p2.read());
}

void ShuffleNetV2::thread_tmp_1641_fu_27697_p2() {
    tmp_1641_fu_27697_p2 = (!p_shl627_cast_fu_27681_p3.read().is_01() || !p_shl628_cast_fu_27689_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl627_cast_fu_27681_p3.read()) - sc_biguint<13>(p_shl628_cast_fu_27689_p3.read()));
}

void ShuffleNetV2::thread_tmp_1642_fu_27521_p2() {
    tmp_1642_fu_27521_p2 = (!tmp_1633_reg_37126.read().is_01() || !tmp_802_cast_fu_27517_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1633_reg_37126.read()) + sc_biguint<14>(tmp_802_cast_fu_27517_p1.read()));
}

void ShuffleNetV2::thread_tmp_1643_fu_27723_p2() {
    tmp_1643_fu_27723_p2 = (!tmp_1638_reg_37175.read().is_01() || !tmp_807_cast_fu_27719_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1638_reg_37175.read()) + sc_biguint<14>(tmp_807_cast_fu_27719_p1.read()));
}

void ShuffleNetV2::thread_tmp_1644_fu_27733_p2() {
    tmp_1644_fu_27733_p2 = (!tmp_1641_reg_37180.read().is_01() || !tmp_807_cast1_fu_27715_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1641_reg_37180.read()) + sc_biguint<13>(tmp_807_cast1_fu_27715_p1.read()));
}

void ShuffleNetV2::thread_tmp_1645_fu_28024_p1() {
    tmp_1645_fu_28024_p1 = k66_reg_6897.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1646_fu_27845_p1() {
    tmp_1646_fu_27845_p1 = i174_reg_6875.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1647_fu_27950_p3() {
    tmp_1647_fu_27950_p3 = esl_concat<13,5>(tmp_815_reg_37252.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1648_fu_27961_p3() {
    tmp_1648_fu_27961_p3 = esl_concat<13,3>(tmp_815_reg_37252.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1649_cast_fu_19898_p1() {
    tmp_1649_cast_fu_19898_p1 = esl_sext<64,13>(tmp_1298_reg_34656.read());
}

void ShuffleNetV2::thread_tmp_1649_fu_27972_p2() {
    tmp_1649_fu_27972_p2 = (!p_shl633_cast_fu_27957_p1.read().is_01() || !p_shl634_cast_fu_27968_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl633_cast_fu_27957_p1.read()) - sc_biguint<19>(p_shl634_cast_fu_27968_p1.read()));
}

void ShuffleNetV2::thread_tmp_164_cast_fu_7865_p1() {
    tmp_164_cast_fu_7865_p1 = esl_zext<8,6>(w_reg_3297.read());
}

void ShuffleNetV2::thread_tmp_1650_fu_27978_p2() {
    tmp_1650_fu_27978_p2 = (!tmp_803_cast_reg_37234.read().is_01() || !tmp_1649_fu_27972_p2.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_803_cast_reg_37234.read()) + sc_biguint<19>(tmp_1649_fu_27972_p2.read()));
}

void ShuffleNetV2::thread_tmp_1651_fu_27898_p2() {
    tmp_1651_fu_27898_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i174_reg_6875.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1652_fu_27919_p3() {
    tmp_1652_fu_27919_p3 = esl_concat<8,7>(tmp_817_fu_27914_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1653_fu_27927_p3() {
    tmp_1653_fu_27927_p3 = esl_concat<8,5>(tmp_817_fu_27914_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1654_fu_27939_p2() {
    tmp_1654_fu_27939_p2 = (!tmp_1652_fu_27919_p3.read().is_01() || !p_shl632_cast_fu_27935_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1652_fu_27919_p3.read()) - sc_bigint<15>(p_shl632_cast_fu_27935_p1.read()));
}

void ShuffleNetV2::thread_tmp_1655_fu_27945_p2() {
    tmp_1655_fu_27945_p2 = (!tmp_806_cast_reg_37239.read().is_01() || !tmp_1654_fu_27939_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_806_cast_reg_37239.read()) + sc_biguint<15>(tmp_1654_fu_27939_p2.read()));
}

void ShuffleNetV2::thread_tmp_1656_fu_28464_p1() {
    tmp_1656_fu_28464_p1 = co181_reg_6974.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1657_fu_28480_p2() {
    tmp_1657_fu_28480_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co181_reg_6974.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1658_fu_28382_p1() {
    tmp_1658_fu_28382_p1 = k68_reg_6963.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1659_fu_28162_p1() {
    tmp_1659_fu_28162_p1 = i180_reg_6941.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_165_cast_fu_7882_p1() {
    tmp_165_cast_fu_7882_p1 = esl_zext<8,6>(w_45_fu_7859_p2.read());
}

void ShuffleNetV2::thread_tmp_1660_fu_28223_p3() {
    tmp_1660_fu_28223_p3 = esl_concat<9,2>(tmp_830_reg_37371.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1661_fu_28230_p1() {
    tmp_1661_fu_28230_p1 = esl_sext<12,11>(tmp_1660_fu_28223_p3.read());
}

void ShuffleNetV2::thread_tmp_1662_fu_28238_p2() {
    tmp_1662_fu_28238_p2 = (!p_shl638_cast_fu_28234_p1.read().is_01() || !tmp_831_cast1_fu_28219_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl638_cast_fu_28234_p1.read()) - sc_biguint<13>(tmp_831_cast1_fu_28219_p1.read()));
}

void ShuffleNetV2::thread_tmp_1663_fu_28248_p2() {
    tmp_1663_fu_28248_p2 = (!tmp_2096_cast_fu_28244_p1.read().is_01() || !tmp_818_cast_reg_37340.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_2096_cast_fu_28244_p1.read()) + sc_biguint<14>(tmp_818_cast_reg_37340.read()));
}

void ShuffleNetV2::thread_tmp_1664_fu_28257_p1() {
    tmp_1664_fu_28257_p1 = tmp_1663_fu_28248_p2.read().range(13-1, 0);
}

void ShuffleNetV2::thread_tmp_1665_fu_28269_p2() {
    tmp_1665_fu_28269_p2 = (!p_shl637_cast_fu_28261_p3.read().is_01() || !tmp_2097_cast_fu_28253_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl637_cast_fu_28261_p3.read()) - sc_bigint<15>(tmp_2097_cast_fu_28253_p1.read()));
}

void ShuffleNetV2::thread_tmp_1666_fu_28275_p2() {
    tmp_1666_fu_28275_p2 = (!tmp_1665_fu_28269_p2.read().is_01() || !tmp_825_cast_reg_37358.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1665_fu_28269_p2.read()) + sc_biguint<15>(tmp_825_cast_reg_37358.read()));
}

void ShuffleNetV2::thread_tmp_1667_fu_28287_p3() {
    tmp_1667_fu_28287_p3 = esl_concat<8,2>(tmp_833_reg_37377.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1668_fu_28294_p1() {
    tmp_1668_fu_28294_p1 = esl_sext<34,10>(tmp_1667_fu_28287_p3.read());
}

void ShuffleNetV2::thread_tmp_1669_fu_28302_p2() {
    tmp_1669_fu_28302_p2 = (!p_shl636_cast_fu_28298_p1.read().is_01() || !tmp_834_cast_fu_28283_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl636_cast_fu_28298_p1.read()) - sc_biguint<35>(tmp_834_cast_fu_28283_p1.read()));
}

void ShuffleNetV2::thread_tmp_166_fu_8044_p2() {
    tmp_166_fu_8044_p2 = (!i4_cast_fu_8028_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(i4_cast_fu_8028_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_1670_cast_fu_20114_p1() {
    tmp_1670_cast_fu_20114_p1 = esl_zext<64,15>(tmp_1318_fu_20109_p2.read());
}

void ShuffleNetV2::thread_tmp_1670_fu_28312_p2() {
    tmp_1670_fu_28312_p2 = (!tmp_2103_cast_fu_28308_p1.read().is_01() || !tmp_818_cast1_reg_37335.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2103_cast_fu_28308_p1.read()) + sc_biguint<36>(tmp_818_cast1_reg_37335.read()));
}

void ShuffleNetV2::thread_tmp_1671_cast_fu_20316_p1() {
    tmp_1671_cast_fu_20316_p1 = esl_zext<64,15>(tmp_1319_fu_20311_p2.read());
}

void ShuffleNetV2::thread_tmp_1671_fu_28317_p1() {
    tmp_1671_fu_28317_p1 = tmp_1670_fu_28312_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1672_cast_fu_20326_p1() {
    tmp_1672_cast_fu_20326_p1 = esl_zext<64,14>(tmp_1320_reg_34800.read());
}

void ShuffleNetV2::thread_tmp_1672_fu_28321_p1() {
    tmp_1672_fu_28321_p1 = tmp_1670_fu_28312_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1673_fu_28336_p2() {
    tmp_1673_fu_28336_p2 = (!p_shl635_cast_fu_28329_p3.read().is_01() || !tmp_1671_reg_37388.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl635_cast_fu_28329_p3.read()) - sc_biguint<11>(tmp_1671_reg_37388.read()));
}

void ShuffleNetV2::thread_tmp_1674_fu_28341_p2() {
    tmp_1674_fu_28341_p2 = (!tmp_1673_fu_28336_p2.read().is_01() || !tmp_825_cast1_reg_37353.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1673_fu_28336_p2.read()) + sc_biguint<11>(tmp_825_cast1_reg_37353.read()));
}

void ShuffleNetV2::thread_tmp_1675_fu_28808_p3() {
    tmp_1675_fu_28808_p3 = esl_concat<7,3>(co183_reg_7029.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1676_fu_28820_p3() {
    tmp_1676_fu_28820_p3 = esl_concat<7,1>(co183_reg_7029.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1677_fu_28832_p2() {
    tmp_1677_fu_28832_p2 = (!p_shl643_cast_fu_28816_p1.read().is_01() || !p_shl644_cast_fu_28828_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl643_cast_fu_28816_p1.read()) - sc_biguint<11>(p_shl644_cast_fu_28828_p1.read()));
}

void ShuffleNetV2::thread_tmp_1678_fu_28730_p1() {
    tmp_1678_fu_28730_p1 = k70_reg_7018.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1679_cast_fu_20578_p1() {
    tmp_1679_cast_fu_20578_p1 = esl_sext<18,17>(tmp_1325_fu_20572_p2.read());
}

void ShuffleNetV2::thread_tmp_1679_fu_28551_p1() {
    tmp_1679_fu_28551_p1 = i182_reg_6996.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_167_fu_8050_p1() {
    tmp_167_fu_8050_p1 = esl_zext<64,6>(tmp_166_fu_8044_p2.read());
}

void ShuffleNetV2::thread_tmp_1680_cast_fu_20587_p1() {
    tmp_1680_cast_fu_20587_p1 = esl_sext<64,18>(tmp_1326_fu_20582_p2.read());
}

void ShuffleNetV2::thread_tmp_1680_fu_28656_p3() {
    tmp_1680_fu_28656_p3 = esl_concat<13,5>(tmp_842_reg_37498.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1681_fu_28667_p3() {
    tmp_1681_fu_28667_p3 = esl_concat<13,3>(tmp_842_reg_37498.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1682_fu_28678_p2() {
    tmp_1682_fu_28678_p2 = (!p_shl641_cast_fu_28663_p1.read().is_01() || !p_shl642_cast_fu_28674_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl641_cast_fu_28663_p1.read()) - sc_biguint<19>(p_shl642_cast_fu_28674_p1.read()));
}

void ShuffleNetV2::thread_tmp_1683_fu_28684_p2() {
    tmp_1683_fu_28684_p2 = (!tmp_826_cast_reg_37480.read().is_01() || !tmp_1682_fu_28678_p2.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_826_cast_reg_37480.read()) + sc_biguint<19>(tmp_1682_fu_28678_p2.read()));
}

void ShuffleNetV2::thread_tmp_1684_fu_28604_p2() {
    tmp_1684_fu_28604_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i182_reg_6996.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1685_fu_28625_p3() {
    tmp_1685_fu_28625_p3 = esl_concat<8,7>(tmp_844_fu_28620_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1686_fu_28633_p3() {
    tmp_1686_fu_28633_p3 = esl_concat<8,5>(tmp_844_fu_28620_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1687_fu_28645_p2() {
    tmp_1687_fu_28645_p2 = (!tmp_1685_fu_28625_p3.read().is_01() || !p_shl640_cast_fu_28641_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1685_fu_28625_p3.read()) - sc_bigint<15>(p_shl640_cast_fu_28641_p1.read()));
}

void ShuffleNetV2::thread_tmp_1688_cast_fu_20592_p1() {
    tmp_1688_cast_fu_20592_p1 = esl_sext<64,13>(tmp_1330_reg_34860.read());
}

void ShuffleNetV2::thread_tmp_1688_fu_28651_p2() {
    tmp_1688_fu_28651_p2 = (!tmp_828_cast_reg_37485.read().is_01() || !tmp_1687_fu_28645_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_828_cast_reg_37485.read()) + sc_biguint<15>(tmp_1687_fu_28645_p2.read()));
}

void ShuffleNetV2::thread_tmp_1689_fu_28941_p3() {
    tmp_1689_fu_28941_p3 = esl_concat<8,3>(tmp_845_fu_28935_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_168_fu_8055_p1() {
    tmp_168_fu_8055_p1 = esl_zext<64,5>(i4_reg_3341.read());
}

void ShuffleNetV2::thread_tmp_1690_fu_28953_p3() {
    tmp_1690_fu_28953_p3 = esl_concat<8,1>(tmp_845_fu_28935_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1691_fu_28965_p2() {
    tmp_1691_fu_28965_p2 = (!p_shl649_cast_fu_28949_p1.read().is_01() || !p_shl650_cast_fu_28961_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl649_cast_fu_28949_p1.read()) - sc_biguint<12>(p_shl650_cast_fu_28961_p1.read()));
}

void ShuffleNetV2::thread_tmp_1692_fu_28975_p3() {
    tmp_1692_fu_28975_p3 = esl_concat<7,3>(co185_reg_7062.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1693_fu_28987_p3() {
    tmp_1693_fu_28987_p3 = esl_concat<7,1>(co185_reg_7062.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1694_fu_28999_p2() {
    tmp_1694_fu_28999_p2 = (!p_shl647_cast_fu_28983_p1.read().is_01() || !p_shl648_cast_fu_28995_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl647_cast_fu_28983_p1.read()) - sc_biguint<11>(p_shl648_cast_fu_28995_p1.read()));
}

void ShuffleNetV2::thread_tmp_1695_fu_28858_p2() {
    tmp_1695_fu_28858_p2 = (!tmp_2110_cast_reg_37563.read().is_01() || !tmp_846_cast1_fu_28854_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_2110_cast_reg_37563.read()) + sc_biguint<12>(tmp_846_cast1_fu_28854_p1.read()));
}

void ShuffleNetV2::thread_tmp_1696_fu_28863_p1() {
    tmp_1696_fu_28863_p1 = tmp_1695_fu_28858_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1697_cast_fu_20848_p1() {
    tmp_1697_cast_fu_20848_p1 = esl_sext<13,12>(tmp_1336_fu_20842_p2.read());
}

void ShuffleNetV2::thread_tmp_1697_fu_28875_p3() {
    tmp_1697_fu_28875_p3 = esl_concat<12,1>(tmp_1695_fu_28858_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1698_cast_fu_20857_p1() {
    tmp_1698_cast_fu_20857_p1 = esl_sext<15,13>(tmp_1337_fu_20852_p2.read());
}

void ShuffleNetV2::thread_tmp_1698_fu_28887_p2() {
    tmp_1698_fu_28887_p2 = (!p_shl645_cast_fu_28867_p3.read().is_01() || !p_shl646_cast_fu_28883_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl645_cast_fu_28867_p3.read()) - sc_bigint<14>(p_shl646_cast_fu_28883_p1.read()));
}

void ShuffleNetV2::thread_tmp_1699_fu_29146_p1() {
    tmp_1699_fu_29146_p1 = co187_reg_7095.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_169_cast_fu_8014_p1() {
    tmp_169_cast_fu_8014_p1 = esl_zext<12,5>(ci3_reg_3330.read());
}

void ShuffleNetV2::thread_tmp_1700_fu_29162_p2() {
    tmp_1700_fu_29162_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co187_reg_7095.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1701_cast_fu_20925_p1() {
    tmp_1701_cast_fu_20925_p1 = esl_zext<64,15>(tmp_1339_reg_34985.read());
}

void ShuffleNetV2::thread_tmp_1701_fu_29029_p2() {
    tmp_1701_fu_29029_p2 = (!tmp_848_cast_fu_29025_p1.read().is_01() || !tmp_2128_cast_reg_37607.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_848_cast_fu_29025_p1.read()) + sc_bigint<13>(tmp_2128_cast_reg_37607.read()));
}

void ShuffleNetV2::thread_tmp_1702_fu_29034_p1() {
    tmp_1702_fu_29034_p1 = tmp_1701_fu_29029_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1703_fu_29054_p2() {
    tmp_1703_fu_29054_p2 = (!p_shl653_cast_fu_29038_p3.read().is_01() || !p_shl654_cast_fu_29046_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl653_cast_fu_29038_p3.read()) - sc_biguint<14>(p_shl654_cast_fu_29046_p3.read()));
}

void ShuffleNetV2::thread_tmp_1704_cast_fu_20908_p1() {
    tmp_1704_cast_fu_20908_p1 = esl_sext<36,35>(tmp_1342_fu_20902_p2.read());
}

void ShuffleNetV2::thread_tmp_1704_fu_29060_p2() {
    tmp_1704_fu_29060_p2 = (!tmp_848_cast1_fu_29021_p1.read().is_01() || !tmp_2131_cast_reg_37612.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_848_cast1_fu_29021_p1.read()) + sc_bigint<12>(tmp_2131_cast_reg_37612.read()));
}

void ShuffleNetV2::thread_tmp_1705_fu_29065_p1() {
    tmp_1705_fu_29065_p1 = tmp_1704_fu_29060_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1706_fu_29085_p2() {
    tmp_1706_fu_29085_p2 = (!p_shl651_cast_fu_29069_p3.read().is_01() || !p_shl652_cast_fu_29077_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl651_cast_fu_29069_p3.read()) - sc_biguint<13>(p_shl652_cast_fu_29077_p3.read()));
}

void ShuffleNetV2::thread_tmp_1707_fu_28909_p2() {
    tmp_1707_fu_28909_p2 = (!tmp_1698_reg_37576.read().is_01() || !tmp_849_cast_fu_28905_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1698_reg_37576.read()) + sc_biguint<14>(tmp_849_cast_fu_28905_p1.read()));
}

void ShuffleNetV2::thread_tmp_1708_cast_fu_20946_p1() {
    tmp_1708_cast_fu_20946_p1 = esl_zext<64,10>(tmp_1347_reg_35005.read());
}

void ShuffleNetV2::thread_tmp_1708_fu_29111_p2() {
    tmp_1708_fu_29111_p2 = (!tmp_1703_reg_37625.read().is_01() || !tmp_855_cast_fu_29107_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1703_reg_37625.read()) + sc_biguint<14>(tmp_855_cast_fu_29107_p1.read()));
}

void ShuffleNetV2::thread_tmp_1709_fu_29121_p2() {
    tmp_1709_fu_29121_p2 = (!tmp_1706_reg_37630.read().is_01() || !tmp_855_cast1_fu_29103_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1706_reg_37630.read()) + sc_biguint<13>(tmp_855_cast1_fu_29103_p1.read()));
}

void ShuffleNetV2::thread_tmp_170_cast_fu_7929_p1() {
    tmp_170_cast_fu_7929_p1 = esl_zext<13,6>(h_reg_3308.read());
}

void ShuffleNetV2::thread_tmp_1710_fu_29412_p1() {
    tmp_1710_fu_29412_p1 = k72_reg_7139.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1711_fu_29233_p1() {
    tmp_1711_fu_29233_p1 = i186_reg_7117.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1712_fu_29338_p3() {
    tmp_1712_fu_29338_p3 = esl_concat<13,5>(tmp_863_reg_37702.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1713_fu_29349_p3() {
    tmp_1713_fu_29349_p3 = esl_concat<13,3>(tmp_863_reg_37702.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1714_fu_29360_p2() {
    tmp_1714_fu_29360_p2 = (!p_shl657_cast_fu_29345_p1.read().is_01() || !p_shl658_cast_fu_29356_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl657_cast_fu_29345_p1.read()) - sc_biguint<19>(p_shl658_cast_fu_29356_p1.read()));
}

void ShuffleNetV2::thread_tmp_1715_fu_29366_p2() {
    tmp_1715_fu_29366_p2 = (!tmp_850_cast1_reg_37684.read().is_01() || !tmp_1714_fu_29360_p2.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_850_cast1_reg_37684.read()) + sc_biguint<19>(tmp_1714_fu_29360_p2.read()));
}

void ShuffleNetV2::thread_tmp_1716_fu_29286_p2() {
    tmp_1716_fu_29286_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i186_reg_7117.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1717_fu_29307_p3() {
    tmp_1717_fu_29307_p3 = esl_concat<8,7>(tmp_866_fu_29302_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1718_cast_fu_21296_p1() {
    tmp_1718_cast_fu_21296_p1 = esl_sext<18,17>(tmp_1355_fu_21290_p2.read());
}

void ShuffleNetV2::thread_tmp_1718_fu_29315_p3() {
    tmp_1718_fu_29315_p3 = esl_concat<8,5>(tmp_866_fu_29302_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1719_cast_fu_21305_p1() {
    tmp_1719_cast_fu_21305_p1 = esl_sext<64,18>(tmp_1356_fu_21300_p2.read());
}

void ShuffleNetV2::thread_tmp_1719_fu_29327_p2() {
    tmp_1719_fu_29327_p2 = (!tmp_1717_fu_29307_p3.read().is_01() || !p_shl656_cast_fu_29323_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1717_fu_29307_p3.read()) - sc_bigint<15>(p_shl656_cast_fu_29323_p1.read()));
}

void ShuffleNetV2::thread_tmp_171_cast_fu_7943_p1() {
    tmp_171_cast_fu_7943_p1 = esl_zext<13,6>(h_46_fu_7923_p2.read());
}

void ShuffleNetV2::thread_tmp_1720_fu_29333_p2() {
    tmp_1720_fu_29333_p2 = (!tmp_852_cast_reg_37689.read().is_01() || !tmp_1719_fu_29327_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_852_cast_reg_37689.read()) + sc_biguint<15>(tmp_1719_fu_29327_p2.read()));
}

void ShuffleNetV2::thread_tmp_1721_fu_29834_p1() {
    tmp_1721_fu_29834_p1 = co191_reg_7216.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1722_fu_29850_p2() {
    tmp_1722_fu_29850_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co191_reg_7216.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1723_fu_29752_p1() {
    tmp_1723_fu_29752_p1 = k74_reg_7205.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1724_fu_29550_p1() {
    tmp_1724_fu_29550_p1 = i192_reg_7183.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1725_fu_29607_p3() {
    tmp_1725_fu_29607_p3 = esl_concat<11,2>(tmp_880_reg_37821.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1726_fu_29618_p2() {
    tmp_1726_fu_29618_p2 = (!p_shl662_cast_fu_29614_p1.read().is_01() || !tmp_881_cast_fu_29604_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl662_cast_fu_29614_p1.read()) - sc_biguint<14>(tmp_881_cast_fu_29604_p1.read()));
}

void ShuffleNetV2::thread_tmp_1727_cast_fu_21310_p1() {
    tmp_1727_cast_fu_21310_p1 = esl_sext<64,13>(tmp_1360_reg_35106.read());
}

void ShuffleNetV2::thread_tmp_1727_fu_29628_p2() {
    tmp_1727_fu_29628_p2 = (!tmp_2171_cast_fu_29624_p1.read().is_01() || !tmp_867_cast_reg_37790.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_2171_cast_fu_29624_p1.read()) + sc_biguint<15>(tmp_867_cast_reg_37790.read()));
}

void ShuffleNetV2::thread_tmp_1728_fu_29633_p2() {
    tmp_1728_fu_29633_p2 = (!ap_const_lv15_2.is_01())? sc_lv<15>(): tmp_1727_fu_29628_p2.read() << (unsigned short)ap_const_lv15_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1729_fu_29639_p2() {
    tmp_1729_fu_29639_p2 = (!tmp_1728_fu_29633_p2.read().is_01() || !tmp_1727_fu_29628_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1728_fu_29633_p2.read()) - sc_biguint<15>(tmp_1727_fu_29628_p2.read()));
}

void ShuffleNetV2::thread_tmp_172_cast_fu_8072_p1() {
    tmp_172_cast_fu_8072_p1 = esl_zext<8,5>(co5_reg_3353.read());
}

void ShuffleNetV2::thread_tmp_1730_fu_29645_p2() {
    tmp_1730_fu_29645_p2 = (!tmp_1729_fu_29639_p2.read().is_01() || !tmp_874_cast_reg_37808.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1729_fu_29639_p2.read()) + sc_biguint<15>(tmp_874_cast_reg_37808.read()));
}

void ShuffleNetV2::thread_tmp_1731_fu_29657_p3() {
    tmp_1731_fu_29657_p3 = esl_concat<8,2>(tmp_883_reg_37827.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1732_fu_29664_p1() {
    tmp_1732_fu_29664_p1 = esl_sext<34,10>(tmp_1731_fu_29657_p3.read());
}

void ShuffleNetV2::thread_tmp_1733_fu_29672_p2() {
    tmp_1733_fu_29672_p2 = (!p_shl660_cast_fu_29668_p1.read().is_01() || !tmp_884_cast_fu_29653_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl660_cast_fu_29668_p1.read()) - sc_biguint<35>(tmp_884_cast_fu_29653_p1.read()));
}

void ShuffleNetV2::thread_tmp_1734_fu_29682_p2() {
    tmp_1734_fu_29682_p2 = (!tmp_2178_cast_fu_29678_p1.read().is_01() || !tmp_867_cast1_reg_37785.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2178_cast_fu_29678_p1.read()) + sc_biguint<36>(tmp_867_cast1_reg_37785.read()));
}

void ShuffleNetV2::thread_tmp_1735_fu_29687_p1() {
    tmp_1735_fu_29687_p1 = tmp_1734_fu_29682_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1736_fu_29691_p1() {
    tmp_1736_fu_29691_p1 = tmp_1734_fu_29682_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1737_fu_29706_p2() {
    tmp_1737_fu_29706_p2 = (!p_shl659_cast_fu_29699_p3.read().is_01() || !tmp_1735_reg_37838.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl659_cast_fu_29699_p3.read()) - sc_biguint<11>(tmp_1735_reg_37838.read()));
}

void ShuffleNetV2::thread_tmp_1738_fu_29711_p2() {
    tmp_1738_fu_29711_p2 = (!tmp_1737_fu_29706_p2.read().is_01() || !tmp_874_cast1_reg_37803.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1737_fu_29706_p2.read()) + sc_biguint<11>(tmp_874_cast1_reg_37803.read()));
}

void ShuffleNetV2::thread_tmp_1739_fu_30178_p3() {
    tmp_1739_fu_30178_p3 = esl_concat<7,3>(co193_reg_7271.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_173_fu_8183_p2() {
    tmp_173_fu_8183_p2 = (!i8_cast_fu_8167_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(i8_cast_fu_8167_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_1740_fu_30190_p3() {
    tmp_1740_fu_30190_p3 = esl_concat<7,1>(co193_reg_7271.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1741_fu_30202_p2() {
    tmp_1741_fu_30202_p2 = (!p_shl667_cast_fu_30186_p1.read().is_01() || !p_shl668_cast_fu_30198_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl667_cast_fu_30186_p1.read()) - sc_biguint<11>(p_shl668_cast_fu_30198_p1.read()));
}

void ShuffleNetV2::thread_tmp_1742_fu_30100_p1() {
    tmp_1742_fu_30100_p1 = k76_reg_7260.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1743_fu_29921_p1() {
    tmp_1743_fu_29921_p1 = i194_reg_7238.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1744_fu_30026_p3() {
    tmp_1744_fu_30026_p3 = esl_concat<13,5>(tmp_891_reg_37948.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1745_fu_30037_p3() {
    tmp_1745_fu_30037_p3 = esl_concat<13,3>(tmp_891_reg_37948.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1746_fu_30048_p2() {
    tmp_1746_fu_30048_p2 = (!p_shl665_cast_fu_30033_p1.read().is_01() || !p_shl666_cast_fu_30044_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl665_cast_fu_30033_p1.read()) - sc_biguint<19>(p_shl666_cast_fu_30044_p1.read()));
}

void ShuffleNetV2::thread_tmp_1747_fu_30054_p2() {
    tmp_1747_fu_30054_p2 = (!tmp_875_cast_reg_37930.read().is_01() || !tmp_1746_fu_30048_p2.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_875_cast_reg_37930.read()) + sc_biguint<19>(tmp_1746_fu_30048_p2.read()));
}

void ShuffleNetV2::thread_tmp_1748_cast_fu_21526_p1() {
    tmp_1748_cast_fu_21526_p1 = esl_zext<64,15>(tmp_1380_fu_21521_p2.read());
}

void ShuffleNetV2::thread_tmp_1748_fu_29974_p2() {
    tmp_1748_fu_29974_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i194_reg_7238.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1749_cast_fu_21728_p1() {
    tmp_1749_cast_fu_21728_p1 = esl_zext<64,15>(tmp_1381_fu_21723_p2.read());
}

void ShuffleNetV2::thread_tmp_1749_fu_29995_p3() {
    tmp_1749_fu_29995_p3 = esl_concat<8,7>(tmp_893_fu_29990_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_174_fu_8189_p1() {
    tmp_174_fu_8189_p1 = esl_zext<64,7>(tmp_173_fu_8183_p2.read());
}

void ShuffleNetV2::thread_tmp_1750_cast_fu_21738_p1() {
    tmp_1750_cast_fu_21738_p1 = esl_zext<64,14>(tmp_1382_reg_35250.read());
}

void ShuffleNetV2::thread_tmp_1750_fu_30003_p3() {
    tmp_1750_fu_30003_p3 = esl_concat<8,5>(tmp_893_fu_29990_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1751_fu_30015_p2() {
    tmp_1751_fu_30015_p2 = (!tmp_1749_fu_29995_p3.read().is_01() || !p_shl664_cast_fu_30011_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1749_fu_29995_p3.read()) - sc_bigint<15>(p_shl664_cast_fu_30011_p1.read()));
}

void ShuffleNetV2::thread_tmp_1752_fu_30021_p2() {
    tmp_1752_fu_30021_p2 = (!tmp_877_cast_reg_37935.read().is_01() || !tmp_1751_fu_30015_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_877_cast_reg_37935.read()) + sc_biguint<15>(tmp_1751_fu_30015_p2.read()));
}

void ShuffleNetV2::thread_tmp_1753_fu_30301_p3() {
    tmp_1753_fu_30301_p3 = esl_concat<8,3>(ci82_reg_7304.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1754_fu_30313_p3() {
    tmp_1754_fu_30313_p3 = esl_concat<8,1>(ci82_reg_7304.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1755_fu_30325_p2() {
    tmp_1755_fu_30325_p2 = (!p_shl671_cast_fu_30309_p1.read().is_01() || !p_shl672_cast_fu_30321_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl671_cast_fu_30309_p1.read()) - sc_biguint<12>(p_shl672_cast_fu_30321_p1.read()));
}

void ShuffleNetV2::thread_tmp_1756_fu_30335_p3() {
    tmp_1756_fu_30335_p3 = esl_concat<8,2>(ci82_reg_7304.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1757_fu_30228_p2() {
    tmp_1757_fu_30228_p2 = (!tmp_2185_cast_reg_38013.read().is_01() || !tmp_894_cast_fu_30224_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_2185_cast_reg_38013.read()) + sc_biguint<12>(tmp_894_cast_fu_30224_p1.read()));
}

void ShuffleNetV2::thread_tmp_1758_fu_30233_p1() {
    tmp_1758_fu_30233_p1 = tmp_1757_fu_30228_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1759_cast_fu_21998_p1() {
    tmp_1759_cast_fu_21998_p1 = esl_sext<18,17>(tmp_1389_fu_21992_p2.read());
}

void ShuffleNetV2::thread_tmp_1759_fu_30245_p3() {
    tmp_1759_fu_30245_p3 = esl_concat<12,1>(tmp_1757_fu_30228_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_175_fu_8194_p1() {
    tmp_175_fu_8194_p1 = esl_zext<64,5>(i8_reg_3386.read());
}

void ShuffleNetV2::thread_tmp_1760_cast_fu_22007_p1() {
    tmp_1760_cast_fu_22007_p1 = esl_sext<64,18>(tmp_1390_fu_22002_p2.read());
}

void ShuffleNetV2::thread_tmp_1760_fu_30257_p2() {
    tmp_1760_fu_30257_p2 = (!p_shl669_cast_fu_30237_p3.read().is_01() || !p_shl670_cast_fu_30253_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl669_cast_fu_30237_p3.read()) - sc_bigint<14>(p_shl670_cast_fu_30253_p1.read()));
}

void ShuffleNetV2::thread_tmp_1761_fu_30462_p3() {
    tmp_1761_fu_30462_p3 = esl_concat<10,4>(co_i1_reg_7337.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1762_fu_30470_p1() {
    tmp_1762_fu_30470_p1 = esl_zext<64,14>(tmp_1761_fu_30462_p3.read());
}

void ShuffleNetV2::thread_tmp_1763_fu_30475_p2() {
    tmp_1763_fu_30475_p2 = (tmp_1761_fu_30462_p3.read() | ap_const_lv14_1);
}

void ShuffleNetV2::thread_tmp_1764_fu_30481_p3() {
    tmp_1764_fu_30481_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_1763_fu_30475_p2.read());
}

void ShuffleNetV2::thread_tmp_1765_fu_30490_p2() {
    tmp_1765_fu_30490_p2 = (tmp_1761_reg_38111.read() | ap_const_lv14_2);
}

void ShuffleNetV2::thread_tmp_1766_fu_30495_p3() {
    tmp_1766_fu_30495_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_1765_fu_30490_p2.read());
}

void ShuffleNetV2::thread_tmp_1767_fu_30504_p2() {
    tmp_1767_fu_30504_p2 = (tmp_1761_reg_38111.read() | ap_const_lv14_3);
}

void ShuffleNetV2::thread_tmp_1768_cast_fu_22012_p1() {
    tmp_1768_cast_fu_22012_p1 = esl_sext<64,13>(tmp_1394_reg_35310.read());
}

void ShuffleNetV2::thread_tmp_1768_fu_30509_p3() {
    tmp_1768_fu_30509_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_1767_fu_30504_p2.read());
}

void ShuffleNetV2::thread_tmp_1769_fu_30518_p2() {
    tmp_1769_fu_30518_p2 = (tmp_1761_reg_38111.read() | ap_const_lv14_4);
}

void ShuffleNetV2::thread_tmp_176_cast_fu_8110_p1() {
    tmp_176_cast_fu_8110_p1 = esl_zext<9,2>(w6_reg_3364.read());
}

void ShuffleNetV2::thread_tmp_1770_fu_30523_p3() {
    tmp_1770_fu_30523_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_1769_fu_30518_p2.read());
}

void ShuffleNetV2::thread_tmp_1771_fu_30532_p2() {
    tmp_1771_fu_30532_p2 = (tmp_1761_reg_38111.read() | ap_const_lv14_5);
}

void ShuffleNetV2::thread_tmp_1772_fu_30537_p3() {
    tmp_1772_fu_30537_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_1771_fu_30532_p2.read());
}

void ShuffleNetV2::thread_tmp_1773_fu_30546_p2() {
    tmp_1773_fu_30546_p2 = (tmp_1761_reg_38111.read() | ap_const_lv14_6);
}

void ShuffleNetV2::thread_tmp_1774_fu_30551_p3() {
    tmp_1774_fu_30551_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_1773_fu_30546_p2.read());
}

void ShuffleNetV2::thread_tmp_1775_fu_30560_p2() {
    tmp_1775_fu_30560_p2 = (tmp_1761_reg_38111.read() | ap_const_lv14_7);
}

void ShuffleNetV2::thread_tmp_1776_cast_fu_22260_p1() {
    tmp_1776_cast_fu_22260_p1 = esl_sext<14,13>(tmp_1399_fu_22254_p2.read());
}

void ShuffleNetV2::thread_tmp_1776_fu_30565_p3() {
    tmp_1776_fu_30565_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_1775_fu_30560_p2.read());
}

void ShuffleNetV2::thread_tmp_1777_cast_fu_22269_p1() {
    tmp_1777_cast_fu_22269_p1 = esl_sext<15,14>(tmp_1400_fu_22264_p2.read());
}

void ShuffleNetV2::thread_tmp_1777_fu_30574_p2() {
    tmp_1777_fu_30574_p2 = (tmp_1761_reg_38111.read() | ap_const_lv14_8);
}

void ShuffleNetV2::thread_tmp_1778_fu_30579_p3() {
    tmp_1778_fu_30579_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_1777_fu_30574_p2.read());
}

void ShuffleNetV2::thread_tmp_1779_fu_30588_p2() {
    tmp_1779_fu_30588_p2 = (tmp_1761_reg_38111.read() | ap_const_lv14_9);
}

void ShuffleNetV2::thread_tmp_177_fu_8215_p2() {
    tmp_177_fu_8215_p2 = (!co9_cast_fu_8199_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co9_cast_fu_8199_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_1780_cast_fu_22341_p1() {
    tmp_1780_cast_fu_22341_p1 = esl_zext<64,15>(tmp_1403_reg_35435.read());
}

void ShuffleNetV2::thread_tmp_1780_fu_30593_p3() {
    tmp_1780_fu_30593_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_1779_fu_30588_p2.read());
}

void ShuffleNetV2::thread_tmp_1781_fu_30602_p2() {
    tmp_1781_fu_30602_p2 = (tmp_1761_reg_38111.read() | ap_const_lv14_A);
}

void ShuffleNetV2::thread_tmp_1782_fu_30607_p3() {
    tmp_1782_fu_30607_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_1781_fu_30602_p2.read());
}

void ShuffleNetV2::thread_tmp_1783_cast_fu_22324_p1() {
    tmp_1783_cast_fu_22324_p1 = esl_sext<36,35>(tmp_1406_fu_22318_p2.read());
}

void ShuffleNetV2::thread_tmp_1783_fu_30616_p2() {
    tmp_1783_fu_30616_p2 = (tmp_1761_reg_38111.read() | ap_const_lv14_B);
}

void ShuffleNetV2::thread_tmp_1784_fu_30621_p3() {
    tmp_1784_fu_30621_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_1783_fu_30616_p2.read());
}

void ShuffleNetV2::thread_tmp_1785_fu_30630_p2() {
    tmp_1785_fu_30630_p2 = (tmp_1761_reg_38111.read() | ap_const_lv14_C);
}

void ShuffleNetV2::thread_tmp_1786_fu_30635_p3() {
    tmp_1786_fu_30635_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_1785_fu_30630_p2.read());
}

void ShuffleNetV2::thread_tmp_1787_cast_fu_22362_p1() {
    tmp_1787_cast_fu_22362_p1 = esl_zext<64,10>(tmp_1411_reg_35455.read());
}

void ShuffleNetV2::thread_tmp_1787_fu_30644_p2() {
    tmp_1787_fu_30644_p2 = (tmp_1761_reg_38111.read() | ap_const_lv14_D);
}

void ShuffleNetV2::thread_tmp_1788_fu_30649_p3() {
    tmp_1788_fu_30649_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_1787_fu_30644_p2.read());
}

void ShuffleNetV2::thread_tmp_1789_fu_30658_p2() {
    tmp_1789_fu_30658_p2 = (tmp_1761_reg_38111.read() | ap_const_lv14_E);
}

void ShuffleNetV2::thread_tmp_178_cast_fu_8153_p1() {
    tmp_178_cast_fu_8153_p1 = esl_zext<15,2>(h7_reg_3375.read());
}

void ShuffleNetV2::thread_tmp_1790_fu_30663_p3() {
    tmp_1790_fu_30663_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_1789_fu_30658_p2.read());
}

void ShuffleNetV2::thread_tmp_1791_fu_30672_p2() {
    tmp_1791_fu_30672_p2 = (tmp_1761_reg_38111.read() | ap_const_lv14_F);
}

void ShuffleNetV2::thread_tmp_1792_fu_30677_p3() {
    tmp_1792_fu_30677_p3 = esl_concat<50,14>(ap_const_lv50_0, tmp_1791_fu_30672_p2.read());
}

void ShuffleNetV2::thread_tmp_1793_fu_30363_p2() {
    tmp_1793_fu_30363_p2 = (!tmp_895_cast1_fu_30359_p1.read().is_01() || !tmp_2203_cast_reg_38057.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_895_cast1_fu_30359_p1.read()) + sc_bigint<13>(tmp_2203_cast_reg_38057.read()));
}

void ShuffleNetV2::thread_tmp_1794_fu_30368_p1() {
    tmp_1794_fu_30368_p1 = tmp_1793_fu_30363_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1795_fu_30388_p2() {
    tmp_1795_fu_30388_p2 = (!p_shl673_cast_fu_30372_p3.read().is_01() || !p_shl674_cast_fu_30380_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl673_cast_fu_30372_p3.read()) - sc_biguint<14>(p_shl674_cast_fu_30380_p3.read()));
}

void ShuffleNetV2::thread_tmp_1796_fu_30398_p2() {
    tmp_1796_fu_30398_p2 = (!tmp_896_cast_fu_30394_p1.read().is_01() || !tmp_2205_cast_reg_38062.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_896_cast_fu_30394_p1.read()) + sc_biguint<11>(tmp_2205_cast_reg_38062.read()));
}

void ShuffleNetV2::thread_tmp_1797_fu_30279_p2() {
    tmp_1797_fu_30279_p2 = (!tmp_1760_reg_38026.read().is_01() || !tmp_897_cast_fu_30275_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1760_reg_38026.read()) + sc_biguint<14>(tmp_897_cast_fu_30275_p1.read()));
}

void ShuffleNetV2::thread_tmp_1798_fu_30707_p3() {
    tmp_1798_fu_30707_p3 = esl_concat<4,9>(co_i_reg_7349.read(), ap_const_lv9_0);
}

void ShuffleNetV2::thread_tmp_1799_cast_fu_22720_p1() {
    tmp_1799_cast_fu_22720_p1 = esl_sext<18,17>(tmp_1421_fu_22714_p2.read());
}

void ShuffleNetV2::thread_tmp_1799_fu_30427_p2() {
    tmp_1799_fu_30427_p2 = (!tmp_1795_reg_38075.read().is_01() || !tmp_898_cast_fu_30423_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1795_reg_38075.read()) + sc_biguint<14>(tmp_898_cast_fu_30423_p1.read()));
}

void ShuffleNetV2::thread_tmp_179_fu_8340_p2() {
    tmp_179_fu_8340_p2 = (!i6_cast_fu_8324_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(i6_cast_fu_8324_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp_1800_cast_fu_22729_p1() {
    tmp_1800_cast_fu_22729_p1 = esl_sext<64,18>(tmp_1422_fu_22724_p2.read());
}

void ShuffleNetV2::thread_tmp_1800_fu_30441_p2() {
    tmp_1800_fu_30441_p2 = (!tmp_2248_cast_reg_38080.read().is_01() || !tmp_900_cast_fu_30437_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_2248_cast_reg_38080.read()) + sc_biguint<13>(tmp_900_cast_fu_30437_p1.read()));
}

void ShuffleNetV2::thread_tmp_1801_fu_30740_p2() {
    tmp_1801_fu_30740_p2 = (!tmp_2251_cast_reg_38258.read().is_01() || !tmp_i_cast_fu_30736_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_2251_cast_reg_38258.read()) + sc_biguint<14>(tmp_i_cast_fu_30736_p1.read()));
}

void ShuffleNetV2::thread_tmp_1808_cast_fu_22734_p1() {
    tmp_1808_cast_fu_22734_p1 = esl_sext<64,13>(tmp_1426_reg_35556.read());
}

void ShuffleNetV2::thread_tmp_180_fu_8346_p1() {
    tmp_180_fu_8346_p1 = esl_zext<64,7>(tmp_179_fu_8340_p2.read());
}

void ShuffleNetV2::thread_tmp_181_fu_8351_p1() {
    tmp_181_fu_8351_p1 = esl_zext<64,5>(i6_reg_3420.read());
}

void ShuffleNetV2::thread_tmp_1829_cast_fu_22954_p1() {
    tmp_1829_cast_fu_22954_p1 = esl_zext<64,15>(tmp_1446_fu_22949_p2.read());
}

void ShuffleNetV2::thread_tmp_182_cast1_fu_8297_p1() {
    tmp_182_cast1_fu_8297_p1 = esl_zext<11,5>(ci10_reg_3409.read());
}

void ShuffleNetV2::thread_tmp_182_cast_fu_8301_p1() {
    tmp_182_cast_fu_8301_p1 = esl_zext<13,5>(ci10_reg_3409.read());
}

void ShuffleNetV2::thread_tmp_1830_cast_fu_23166_p1() {
    tmp_1830_cast_fu_23166_p1 = esl_zext<64,14>(tmp_1447_reg_35695.read());
}

void ShuffleNetV2::thread_tmp_1831_cast_fu_23161_p1() {
    tmp_1831_cast_fu_23161_p1 = esl_zext<64,15>(tmp_1448_fu_23156_p2.read());
}

void ShuffleNetV2::thread_tmp_183_fu_8372_p2() {
    tmp_183_fu_8372_p2 = (!co12_cast_fu_8356_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co12_cast_fu_8356_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_1840_cast_fu_23426_p1() {
    tmp_1840_cast_fu_23426_p1 = esl_sext<18,17>(tmp_1455_fu_23420_p2.read());
}

void ShuffleNetV2::thread_tmp_1841_cast_fu_23435_p1() {
    tmp_1841_cast_fu_23435_p1 = esl_sext<64,18>(tmp_1456_fu_23430_p2.read());
}

void ShuffleNetV2::thread_tmp_1849_cast_fu_23440_p1() {
    tmp_1849_cast_fu_23440_p1 = esl_sext<64,13>(tmp_1460_reg_35760.read());
}

void ShuffleNetV2::thread_tmp_184_cast_fu_8378_p1() {
    tmp_184_cast_fu_8378_p1 = esl_zext<9,6>(tmp_183_fu_8372_p2.read());
}

void ShuffleNetV2::thread_tmp_1858_cast_fu_23697_p1() {
    tmp_1858_cast_fu_23697_p1 = esl_sext<15,13>(tmp_1466_fu_23692_p2.read());
}

void ShuffleNetV2::thread_tmp_185_cast_fu_8400_p1() {
    tmp_185_cast_fu_8400_p1 = esl_zext<8,5>(co12_reg_3432.read());
}

void ShuffleNetV2::thread_tmp_1861_cast_fu_23765_p1() {
    tmp_1861_cast_fu_23765_p1 = esl_zext<64,15>(tmp_1468_reg_35885.read());
}

void ShuffleNetV2::thread_tmp_1864_cast_fu_23748_p1() {
    tmp_1864_cast_fu_23748_p1 = esl_sext<36,35>(tmp_1471_fu_23742_p2.read());
}

void ShuffleNetV2::thread_tmp_1868_cast_fu_23786_p1() {
    tmp_1868_cast_fu_23786_p1 = esl_zext<64,10>(tmp_1476_reg_35905.read());
}

void ShuffleNetV2::thread_tmp_186_fu_8537_p3() {
    tmp_186_fu_8537_p3 = esl_concat<1,5>(ap_const_lv1_1, i7_reg_3465.read());
}

void ShuffleNetV2::thread_tmp_1878_cast_fu_24148_p1() {
    tmp_1878_cast_fu_24148_p1 = esl_sext<19,18>(tmp_1484_fu_24142_p2.read());
}

void ShuffleNetV2::thread_tmp_1879_cast_fu_24157_p1() {
    tmp_1879_cast_fu_24157_p1 = esl_sext<64,19>(tmp_1485_fu_24152_p2.read());
}

void ShuffleNetV2::thread_tmp_187_fu_8549_p1() {
    tmp_187_fu_8549_p1 = esl_zext<64,7>(tmp_254_cast_fu_8545_p1.read());
}

void ShuffleNetV2::thread_tmp_1887_cast_fu_24162_p1() {
    tmp_1887_cast_fu_24162_p1 = esl_sext<64,13>(tmp_1489_reg_36006.read());
}

void ShuffleNetV2::thread_tmp_188_fu_8554_p1() {
    tmp_188_fu_8554_p1 = esl_zext<64,5>(i7_reg_3465.read());
}

void ShuffleNetV2::thread_tmp_1894_cast_fu_24382_p1() {
    tmp_1894_cast_fu_24382_p1 = esl_zext<64,15>(tmp_1496_fu_24377_p2.read());
}

void ShuffleNetV2::thread_tmp_189_cast_fu_8438_p1() {
    tmp_189_cast_fu_8438_p1 = esl_zext<9,2>(w13_reg_3443.read());
}

void ShuffleNetV2::thread_tmp_1901_cast_fu_24623_p1() {
    tmp_1901_cast_fu_24623_p1 = esl_sext<19,18>(tmp_1501_fu_24617_p2.read());
}

void ShuffleNetV2::thread_tmp_1902_cast_fu_24632_p1() {
    tmp_1902_cast_fu_24632_p1 = esl_sext<64,19>(tmp_1502_fu_24627_p2.read());
}

void ShuffleNetV2::thread_tmp_1909_cast_fu_24637_p1() {
    tmp_1909_cast_fu_24637_p1 = esl_sext<64,15>(tmp_1507_reg_36156.read());
}

void ShuffleNetV2::thread_tmp_190_fu_8575_p2() {
    tmp_190_fu_8575_p2 = (!co16_cast_fu_8559_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co16_cast_fu_8559_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_1918_cast_fu_24894_p1() {
    tmp_1918_cast_fu_24894_p1 = esl_sext<15,13>(tmp_1514_fu_24889_p2.read());
}

void ShuffleNetV2::thread_tmp_191_cast1_fu_8498_p1() {
    tmp_191_cast1_fu_8498_p1 = esl_zext<9,2>(h14_reg_3454.read());
}

void ShuffleNetV2::thread_tmp_191_cast_fu_8502_p1() {
    tmp_191_cast_fu_8502_p1 = esl_zext<15,2>(h14_reg_3454.read());
}

void ShuffleNetV2::thread_tmp_1921_cast_fu_24962_p1() {
    tmp_1921_cast_fu_24962_p1 = esl_zext<64,15>(tmp_1516_reg_36281.read());
}

void ShuffleNetV2::thread_tmp_1924_cast_fu_24945_p1() {
    tmp_1924_cast_fu_24945_p1 = esl_sext<36,35>(tmp_1519_fu_24939_p2.read());
}

void ShuffleNetV2::thread_tmp_1928_cast_fu_24983_p1() {
    tmp_1928_cast_fu_24983_p1 = esl_zext<64,11>(tmp_1524_reg_36301.read());
}

void ShuffleNetV2::thread_tmp_192_fu_8700_p2() {
    tmp_192_fu_8700_p2 = (!i9_cast_fu_8684_p1.read().is_01() || !ap_const_lv8_78.is_01())? sc_lv<8>(): (sc_biguint<8>(i9_cast_fu_8684_p1.read()) + sc_biguint<8>(ap_const_lv8_78));
}

void ShuffleNetV2::thread_tmp_1935_cast_fu_25325_p1() {
    tmp_1935_cast_fu_25325_p1 = esl_sext<19,18>(tmp_1529_fu_25319_p2.read());
}

void ShuffleNetV2::thread_tmp_1936_cast_fu_25334_p1() {
    tmp_1936_cast_fu_25334_p1 = esl_sext<64,19>(tmp_1530_fu_25329_p2.read());
}

void ShuffleNetV2::thread_tmp_193_fu_8706_p1() {
    tmp_193_fu_8706_p1 = esl_zext<64,8>(tmp_192_fu_8700_p2.read());
}

void ShuffleNetV2::thread_tmp_1943_cast_fu_25339_p1() {
    tmp_1943_cast_fu_25339_p1 = esl_sext<64,15>(tmp_1535_reg_36402.read());
}

void ShuffleNetV2::thread_tmp_194_fu_8711_p1() {
    tmp_194_fu_8711_p1 = esl_zext<64,5>(i9_reg_3499.read());
}

void ShuffleNetV2::thread_tmp_1952_cast_fu_25600_p1() {
    tmp_1952_cast_fu_25600_p1 = esl_sext<15,13>(tmp_1542_fu_25595_p2.read());
}

void ShuffleNetV2::thread_tmp_1955_cast_fu_25668_p1() {
    tmp_1955_cast_fu_25668_p1 = esl_zext<64,15>(tmp_1544_reg_36527.read());
}

void ShuffleNetV2::thread_tmp_1958_cast_fu_25651_p1() {
    tmp_1958_cast_fu_25651_p1 = esl_sext<36,35>(tmp_1547_fu_25645_p2.read());
}

void ShuffleNetV2::thread_tmp_195_cast1_fu_8657_p1() {
    tmp_195_cast1_fu_8657_p1 = esl_zext<11,5>(ci12_reg_3488.read());
}

void ShuffleNetV2::thread_tmp_195_cast_fu_8661_p1() {
    tmp_195_cast_fu_8661_p1 = esl_zext<14,5>(ci12_reg_3488.read());
}

void ShuffleNetV2::thread_tmp_1962_cast_fu_25689_p1() {
    tmp_1962_cast_fu_25689_p1 = esl_zext<64,11>(tmp_1552_reg_36547.read());
}

void ShuffleNetV2::thread_tmp_1965_cast_fu_26195_p1() {
    tmp_1965_cast_fu_26195_p1 = esl_sext<13,12>(tmp_1555_fu_26189_p2.read());
}

void ShuffleNetV2::thread_tmp_1968_cast_fu_26229_p1() {
    tmp_1968_cast_fu_26229_p1 = esl_sext<12,11>(tmp_1558_fu_26223_p2.read());
}

void ShuffleNetV2::thread_tmp_196_fu_8732_p2() {
    tmp_196_fu_8732_p2 = (!co19_cast_fu_8716_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co19_cast_fu_8716_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_1975_cast_fu_26027_p1() {
    tmp_1975_cast_fu_26027_p1 = esl_sext<19,18>(tmp_1563_fu_26021_p2.read());
}

void ShuffleNetV2::thread_tmp_1976_cast_fu_26036_p1() {
    tmp_1976_cast_fu_26036_p1 = esl_sext<64,19>(tmp_1564_fu_26031_p2.read());
}

void ShuffleNetV2::thread_tmp_197_fu_8935_p2() {
    tmp_197_fu_8935_p2 = (!co22_cast_fu_8919_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co22_cast_fu_8919_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp_1983_cast_fu_26041_p1() {
    tmp_1983_cast_fu_26041_p1 = esl_sext<64,15>(tmp_1569_reg_36648.read());
}

void ShuffleNetV2::thread_tmp_198_cast1_fu_8810_p1() {
    tmp_198_cast1_fu_8810_p1 = esl_zext<10,5>(h_49_fu_8804_p2.read());
}

void ShuffleNetV2::thread_tmp_198_cast_fu_8814_p1() {
    tmp_198_cast_fu_8814_p1 = esl_zext<11,5>(h_49_fu_8804_p2.read());
}

void ShuffleNetV2::thread_tmp_1994_cast_fu_26340_p1() {
    tmp_1994_cast_fu_26340_p1 = esl_zext<64,14>(tmp_1578_fu_26335_p2.read());
}

void ShuffleNetV2::thread_tmp_1995_cast_fu_26350_p1() {
    tmp_1995_cast_fu_26350_p1 = esl_zext<64,13>(tmp_1579_reg_36748.read());
}

void ShuffleNetV2::thread_tmp_199_fu_9060_p2() {
    tmp_199_fu_9060_p2 = (!i10_cast_fu_9044_p1.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<8>(): (sc_biguint<8>(i10_cast_fu_9044_p1.read()) + sc_bigint<8>(ap_const_lv8_90));
}

void ShuffleNetV2::thread_tmp_2002_cast_fu_26590_p1() {
    tmp_2002_cast_fu_26590_p1 = esl_sext<19,18>(tmp_1584_fu_26584_p2.read());
}

void ShuffleNetV2::thread_tmp_2003_cast_fu_26599_p1() {
    tmp_2003_cast_fu_26599_p1 = esl_sext<64,19>(tmp_1585_fu_26594_p2.read());
}

void ShuffleNetV2::thread_tmp_200_fu_9066_p1() {
    tmp_200_fu_9066_p1 = esl_zext<64,8>(tmp_199_fu_9060_p2.read());
}

void ShuffleNetV2::thread_tmp_2010_cast_fu_26604_p1() {
    tmp_2010_cast_fu_26604_p1 = esl_sext<64,15>(tmp_1590_reg_36808.read());
}

void ShuffleNetV2::thread_tmp_2019_cast_fu_26857_p1() {
    tmp_2019_cast_fu_26857_p1 = esl_sext<15,13>(tmp_1597_fu_26852_p2.read());
}

void ShuffleNetV2::thread_tmp_201_fu_9071_p1() {
    tmp_201_fu_9071_p1 = esl_zext<64,5>(i10_reg_3566.read());
}

void ShuffleNetV2::thread_tmp_2022_cast_fu_26925_p1() {
    tmp_2022_cast_fu_26925_p1 = esl_zext<64,15>(tmp_1599_reg_36933.read());
}

void ShuffleNetV2::thread_tmp_2025_cast_fu_26908_p1() {
    tmp_2025_cast_fu_26908_p1 = esl_sext<36,35>(tmp_1602_fu_26902_p2.read());
}

void ShuffleNetV2::thread_tmp_2029_cast_fu_26946_p1() {
    tmp_2029_cast_fu_26946_p1 = esl_zext<64,11>(tmp_1607_reg_36953.read());
}

void ShuffleNetV2::thread_tmp_202_cast1_fu_9017_p1() {
    tmp_202_cast1_fu_9017_p1 = esl_zext<11,5>(ci14_reg_3555.read());
}

void ShuffleNetV2::thread_tmp_202_cast_fu_9021_p1() {
    tmp_202_cast_fu_9021_p1 = esl_zext<14,5>(ci14_reg_3555.read());
}

void ShuffleNetV2::thread_tmp_2032_cast_fu_27450_p1() {
    tmp_2032_cast_fu_27450_p1 = esl_sext<12,11>(tmp_1610_fu_27444_p2.read());
}

void ShuffleNetV2::thread_tmp_203_cast1_fu_8892_p1() {
    tmp_203_cast1_fu_8892_p1 = esl_zext<14,5>(w_48_fu_8886_p2.read());
}

void ShuffleNetV2::thread_tmp_203_cast_fu_8896_p1() {
    tmp_203_cast_fu_8896_p1 = esl_zext<15,5>(w_48_fu_8886_p2.read());
}

void ShuffleNetV2::thread_tmp_2041_cast_fu_27292_p1() {
    tmp_2041_cast_fu_27292_p1 = esl_sext<19,18>(tmp_1617_fu_27286_p2.read());
}

void ShuffleNetV2::thread_tmp_2042_cast_fu_27301_p1() {
    tmp_2042_cast_fu_27301_p1 = esl_sext<64,19>(tmp_1618_fu_27296_p2.read());
}

void ShuffleNetV2::thread_tmp_2049_cast_fu_27306_p1() {
    tmp_2049_cast_fu_27306_p1 = esl_sext<64,15>(tmp_1623_reg_37054.read());
}

void ShuffleNetV2::thread_tmp_204_fu_9092_p2() {
    tmp_204_fu_9092_p2 = (!co25_cast_fu_9076_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co25_cast_fu_9076_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_2052_cast_fu_27583_p1() {
    tmp_2052_cast_fu_27583_p1 = esl_sext<13,12>(tmp_1626_fu_27577_p2.read());
}

void ShuffleNetV2::thread_tmp_2055_cast_fu_27617_p1() {
    tmp_2055_cast_fu_27617_p1 = esl_sext<12,11>(tmp_1629_fu_27611_p2.read());
}

void ShuffleNetV2::thread_tmp_205_cast_fu_9098_p1() {
    tmp_205_cast_fu_9098_p1 = esl_zext<10,7>(tmp_204_fu_9092_p2.read());
}

void ShuffleNetV2::thread_tmp_206_cast_fu_9120_p1() {
    tmp_206_cast_fu_9120_p1 = esl_zext<8,5>(co25_reg_3578.read());
}

void ShuffleNetV2::thread_tmp_2070_cast_fu_27526_p1() {
    tmp_2070_cast_fu_27526_p1 = esl_zext<64,14>(tmp_1642_fu_27521_p2.read());
}

void ShuffleNetV2::thread_tmp_2071_cast_fu_27728_p1() {
    tmp_2071_cast_fu_27728_p1 = esl_zext<64,14>(tmp_1643_fu_27723_p2.read());
}

void ShuffleNetV2::thread_tmp_2072_cast_fu_27738_p1() {
    tmp_2072_cast_fu_27738_p1 = esl_zext<64,13>(tmp_1644_reg_37198.read());
}

void ShuffleNetV2::thread_tmp_207_fu_9265_p2() {
    tmp_207_fu_9265_p2 = (!i11_cast_fu_9249_p1.read().is_01() || !ap_const_lv8_A8.is_01())? sc_lv<8>(): (sc_biguint<8>(i11_cast_fu_9249_p1.read()) + sc_bigint<8>(ap_const_lv8_A8));
}

void ShuffleNetV2::thread_tmp_2080_cast_fu_27983_p1() {
    tmp_2080_cast_fu_27983_p1 = esl_sext<64,19>(tmp_1650_fu_27978_p2.read());
}

void ShuffleNetV2::thread_tmp_2087_cast_fu_27988_p1() {
    tmp_2087_cast_fu_27988_p1 = esl_sext<64,15>(tmp_1655_reg_37258.read());
}

void ShuffleNetV2::thread_tmp_208_fu_9271_p1() {
    tmp_208_fu_9271_p1 = esl_zext<64,8>(tmp_207_fu_9265_p2.read());
}

void ShuffleNetV2::thread_tmp_2096_cast_fu_28244_p1() {
    tmp_2096_cast_fu_28244_p1 = esl_sext<14,13>(tmp_1662_fu_28238_p2.read());
}

void ShuffleNetV2::thread_tmp_2097_cast_fu_28253_p1() {
    tmp_2097_cast_fu_28253_p1 = esl_sext<15,14>(tmp_1663_fu_28248_p2.read());
}

void ShuffleNetV2::thread_tmp_209_fu_9276_p1() {
    tmp_209_fu_9276_p1 = esl_zext<64,5>(i11_reg_3611.read());
}

void ShuffleNetV2::thread_tmp_2100_cast_fu_28325_p1() {
    tmp_2100_cast_fu_28325_p1 = esl_zext<64,15>(tmp_1666_reg_37383.read());
}

void ShuffleNetV2::thread_tmp_2103_cast_fu_28308_p1() {
    tmp_2103_cast_fu_28308_p1 = esl_sext<36,35>(tmp_1669_fu_28302_p2.read());
}

void ShuffleNetV2::thread_tmp_2107_cast_fu_28346_p1() {
    tmp_2107_cast_fu_28346_p1 = esl_zext<64,11>(tmp_1674_reg_37403.read());
}

void ShuffleNetV2::thread_tmp_210_cast1_fu_9158_p1() {
    tmp_210_cast1_fu_9158_p1 = esl_zext<9,2>(w26_reg_3589.read());
}

void ShuffleNetV2::thread_tmp_210_cast_fu_9162_p1() {
    tmp_210_cast_fu_9162_p1 = esl_zext<10,2>(w26_reg_3589.read());
}

void ShuffleNetV2::thread_tmp_2110_cast_fu_28838_p1() {
    tmp_2110_cast_fu_28838_p1 = esl_sext<12,11>(tmp_1677_fu_28832_p2.read());
}

void ShuffleNetV2::thread_tmp_2118_cast_fu_28689_p1() {
    tmp_2118_cast_fu_28689_p1 = esl_sext<64,19>(tmp_1683_fu_28684_p2.read());
}

void ShuffleNetV2::thread_tmp_211_cast1_fu_9222_p1() {
    tmp_211_cast1_fu_9222_p1 = esl_zext<9,2>(h27_reg_3600.read());
}

void ShuffleNetV2::thread_tmp_211_cast_fu_9226_p1() {
    tmp_211_cast_fu_9226_p1 = esl_zext<15,2>(h27_reg_3600.read());
}

void ShuffleNetV2::thread_tmp_2125_cast_fu_28694_p1() {
    tmp_2125_cast_fu_28694_p1 = esl_sext<64,15>(tmp_1688_reg_37504.read());
}

void ShuffleNetV2::thread_tmp_2128_cast_fu_28971_p1() {
    tmp_2128_cast_fu_28971_p1 = esl_sext<13,12>(tmp_1691_fu_28965_p2.read());
}

void ShuffleNetV2::thread_tmp_212_fu_9420_p3() {
    tmp_212_fu_9420_p3 = esl_concat<2,5>(ap_const_lv2_2, i13_reg_3645.read());
}

void ShuffleNetV2::thread_tmp_2131_cast_fu_29005_p1() {
    tmp_2131_cast_fu_29005_p1 = esl_sext<12,11>(tmp_1694_fu_28999_p2.read());
}

void ShuffleNetV2::thread_tmp_213_fu_9432_p1() {
    tmp_213_fu_9432_p1 = esl_zext<64,8>(tmp_289_cast_fu_9428_p1.read());
}

void ShuffleNetV2::thread_tmp_2146_cast_fu_28914_p1() {
    tmp_2146_cast_fu_28914_p1 = esl_zext<64,14>(tmp_1707_fu_28909_p2.read());
}

void ShuffleNetV2::thread_tmp_2147_cast_fu_29116_p1() {
    tmp_2147_cast_fu_29116_p1 = esl_zext<64,14>(tmp_1708_fu_29111_p2.read());
}

void ShuffleNetV2::thread_tmp_2148_cast_fu_29126_p1() {
    tmp_2148_cast_fu_29126_p1 = esl_zext<64,13>(tmp_1709_reg_37648.read());
}

void ShuffleNetV2::thread_tmp_214_fu_9437_p1() {
    tmp_214_fu_9437_p1 = esl_zext<64,5>(i13_reg_3645.read());
}

void ShuffleNetV2::thread_tmp_2156_cast_fu_29371_p1() {
    tmp_2156_cast_fu_29371_p1 = esl_sext<64,19>(tmp_1715_fu_29366_p2.read());
}

void ShuffleNetV2::thread_tmp_215_cast1_fu_9381_p1() {
    tmp_215_cast1_fu_9381_p1 = esl_zext<11,5>(ci16_reg_3634.read());
}

void ShuffleNetV2::thread_tmp_215_cast_fu_9385_p1() {
    tmp_215_cast_fu_9385_p1 = esl_zext<14,5>(ci16_reg_3634.read());
}

void ShuffleNetV2::thread_tmp_2163_cast_fu_29376_p1() {
    tmp_2163_cast_fu_29376_p1 = esl_sext<64,15>(tmp_1720_reg_37708.read());
}

void ShuffleNetV2::thread_tmp_216_fu_9577_p2() {
    tmp_216_fu_9577_p2 = (!co35_cast_fu_9561_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co35_cast_fu_9561_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_2171_cast_fu_29624_p1() {
    tmp_2171_cast_fu_29624_p1 = esl_sext<15,14>(tmp_1726_fu_29618_p2.read());
}

void ShuffleNetV2::thread_tmp_2175_cast_fu_29695_p1() {
    tmp_2175_cast_fu_29695_p1 = esl_zext<64,15>(tmp_1730_reg_37833.read());
}

void ShuffleNetV2::thread_tmp_2178_cast_fu_29678_p1() {
    tmp_2178_cast_fu_29678_p1 = esl_sext<36,35>(tmp_1733_fu_29672_p2.read());
}

void ShuffleNetV2::thread_tmp_217_cast_fu_9496_p1() {
    tmp_217_cast_fu_9496_p1 = esl_zext<10,5>(h_51_fu_9490_p2.read());
}

void ShuffleNetV2::thread_tmp_2182_cast_fu_29716_p1() {
    tmp_2182_cast_fu_29716_p1 = esl_zext<64,11>(tmp_1738_reg_37853.read());
}

void ShuffleNetV2::thread_tmp_2185_cast_fu_30208_p1() {
    tmp_2185_cast_fu_30208_p1 = esl_sext<12,11>(tmp_1741_fu_30202_p2.read());
}

void ShuffleNetV2::thread_tmp_218_fu_9780_p2() {
    tmp_218_fu_9780_p2 = (!co38_cast_fu_9764_p1.read().is_01() || !ap_const_lv8_78.is_01())? sc_lv<8>(): (sc_biguint<8>(co38_cast_fu_9764_p1.read()) + sc_biguint<8>(ap_const_lv8_78));
}

void ShuffleNetV2::thread_tmp_2193_cast_fu_30059_p1() {
    tmp_2193_cast_fu_30059_p1 = esl_sext<64,19>(tmp_1747_fu_30054_p2.read());
}

void ShuffleNetV2::thread_tmp_219_cast1_fu_9655_p1() {
    tmp_219_cast1_fu_9655_p1 = esl_zext<11,5>(h_52_fu_9649_p2.read());
}

void ShuffleNetV2::thread_tmp_219_cast_fu_9659_p1() {
    tmp_219_cast_fu_9659_p1 = esl_zext<10,5>(h_52_fu_9649_p2.read());
}

void ShuffleNetV2::thread_tmp_2200_cast_fu_30064_p1() {
    tmp_2200_cast_fu_30064_p1 = esl_sext<64,15>(tmp_1752_reg_37954.read());
}

void ShuffleNetV2::thread_tmp_2203_cast_fu_30331_p1() {
    tmp_2203_cast_fu_30331_p1 = esl_sext<13,12>(tmp_1755_fu_30325_p2.read());
}

void ShuffleNetV2::thread_tmp_2205_cast_fu_30343_p1() {
    tmp_2205_cast_fu_30343_p1 = esl_zext<11,10>(tmp_1756_fu_30335_p3.read());
}

void ShuffleNetV2::thread_tmp_220_cast_fu_9547_p1() {
    tmp_220_cast_fu_9547_p1 = esl_zext<15,5>(w_50_fu_9541_p2.read());
}

void ShuffleNetV2::thread_tmp_221_fu_9905_p2() {
    tmp_221_fu_9905_p2 = (!i15_cast664_cast_fu_9889_p1.read().is_01() || !ap_const_lv7_58.is_01())? sc_lv<7>(): (sc_biguint<7>(i15_cast664_cast_fu_9889_p1.read()) + sc_bigint<7>(ap_const_lv7_58));
}

void ShuffleNetV2::thread_tmp_222_fu_9915_p1() {
    tmp_222_fu_9915_p1 = esl_zext<64,8>(tmp_302_cast_fu_9911_p1.read());
}

void ShuffleNetV2::thread_tmp_223_fu_9920_p1() {
    tmp_223_fu_9920_p1 = esl_zext<64,5>(i15_reg_3745.read());
}

void ShuffleNetV2::thread_tmp_2248_cast_fu_30403_p3() {
    tmp_2248_cast_fu_30403_p3 = esl_concat<11,2>(tmp_1796_fu_30398_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2249_cast_fu_30284_p1() {
    tmp_2249_cast_fu_30284_p1 = esl_zext<64,14>(tmp_1797_fu_30279_p2.read());
}

void ShuffleNetV2::thread_tmp_224_cast1_fu_9862_p1() {
    tmp_224_cast1_fu_9862_p1 = esl_zext<11,5>(ci18_reg_3734.read());
}

void ShuffleNetV2::thread_tmp_224_cast_fu_9866_p1() {
    tmp_224_cast_fu_9866_p1 = esl_zext<15,5>(ci18_reg_3734.read());
}

void ShuffleNetV2::thread_tmp_2251_cast_fu_30715_p1() {
    tmp_2251_cast_fu_30715_p1 = esl_zext<14,13>(tmp_1798_fu_30707_p3.read());
}

void ShuffleNetV2::thread_tmp_2252_cast_fu_30432_p1() {
    tmp_2252_cast_fu_30432_p1 = esl_zext<64,14>(tmp_1799_fu_30427_p2.read());
}

void ShuffleNetV2::thread_tmp_2253_cast_fu_30446_p1() {
    tmp_2253_cast_fu_30446_p1 = esl_zext<64,13>(tmp_1800_reg_38098.read());
}

void ShuffleNetV2::thread_tmp_2254_cast_fu_30745_p1() {
    tmp_2254_cast_fu_30745_p1 = esl_zext<64,14>(tmp_1801_fu_30740_p2.read());
}

void ShuffleNetV2::thread_tmp_225_cast1_fu_9737_p1() {
    tmp_225_cast1_fu_9737_p1 = esl_zext<15,5>(w_51_fu_9731_p2.read());
}

}

