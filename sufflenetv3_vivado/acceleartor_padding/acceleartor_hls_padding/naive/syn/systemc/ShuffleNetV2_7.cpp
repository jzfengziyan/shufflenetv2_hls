#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_1118_fu_18532_p2() {
    tmp_1118_fu_18532_p2 = (!p_shl484_cast_fu_18528_p1.read().is_01() || !p_shl483_cast_fu_18516_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl484_cast_fu_18528_p1.read()) + sc_biguint<10>(p_shl483_cast_fu_18516_p1.read()));
}

void ShuffleNetV2::thread_tmp_1119_fu_18395_p2() {
    tmp_1119_fu_18395_p2 = (!tmp_434_cast_fu_18391_p1.read().is_01() || !tmp_1102_reg_33773.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_434_cast_fu_18391_p1.read()) + sc_biguint<10>(tmp_1102_reg_33773.read()));
}

void ShuffleNetV2::thread_tmp_111_fu_7938_p1() {
    tmp_111_fu_7938_p1 = esl_zext<64,7>(tmp_110_fu_7932_p2.read());
}

void ShuffleNetV2::thread_tmp_1120_cast_fu_11582_p1() {
    tmp_1120_cast_fu_11582_p1 = esl_sext<36,35>(tmp_864_fu_11576_p2.read());
}

void ShuffleNetV2::thread_tmp_1120_fu_18400_p3() {
    tmp_1120_fu_18400_p3 = esl_concat<10,3>(tmp_1119_fu_18395_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1121_fu_18412_p3() {
    tmp_1121_fu_18412_p3 = esl_concat<10,1>(tmp_1119_fu_18395_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1122_fu_18424_p2() {
    tmp_1122_fu_18424_p2 = (!p_shl481_cast_fu_18408_p1.read().is_01() || !p_shl482_cast_fu_18420_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl481_cast_fu_18408_p1.read()) + sc_biguint<15>(p_shl482_cast_fu_18420_p1.read()));
}

void ShuffleNetV2::thread_tmp_1123_fu_18683_p1() {
    tmp_1123_fu_18683_p1 = co106_reg_5169.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1124_cast_fu_11620_p1() {
    tmp_1124_cast_fu_11620_p1 = esl_zext<64,10>(tmp_867_reg_31611.read());
}

void ShuffleNetV2::thread_tmp_1124_fu_18558_p2() {
    tmp_1124_fu_18558_p2 = (!tmp_436_cast_fu_18554_p1.read().is_01() || !tmp_1118_reg_33822.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_436_cast_fu_18554_p1.read()) + sc_biguint<10>(tmp_1118_reg_33822.read()));
}

void ShuffleNetV2::thread_tmp_1125_fu_18563_p3() {
    tmp_1125_fu_18563_p3 = esl_concat<10,3>(tmp_1124_fu_18558_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1126_fu_18575_p3() {
    tmp_1126_fu_18575_p3 = esl_concat<10,1>(tmp_1124_fu_18558_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1127_fu_18587_p2() {
    tmp_1127_fu_18587_p2 = (!p_shl489_cast_fu_18571_p1.read().is_01() || !p_shl490_cast_fu_18583_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl489_cast_fu_18571_p1.read()) + sc_biguint<14>(p_shl490_cast_fu_18583_p1.read()));
}

void ShuffleNetV2::thread_tmp_1128_fu_18593_p2() {
    tmp_1128_fu_18593_p2 = (!tmp_436_cast1_fu_18550_p1.read().is_01() || !tmp_1115_reg_33817.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_436_cast1_fu_18550_p1.read()) + sc_biguint<11>(tmp_1115_reg_33817.read()));
}

void ShuffleNetV2::thread_tmp_1129_fu_18598_p3() {
    tmp_1129_fu_18598_p3 = esl_concat<11,3>(tmp_1128_fu_18593_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_112_fu_7943_p1() {
    tmp_112_fu_7943_p1 = esl_zext<64,5>(i8_reg_3209.read());
}

void ShuffleNetV2::thread_tmp_1130_fu_18610_p3() {
    tmp_1130_fu_18610_p3 = esl_concat<11,1>(tmp_1128_fu_18593_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1131_cast_fu_11974_p1() {
    tmp_1131_cast_fu_11974_p1 = esl_sext<16,15>(tmp_870_fu_11968_p2.read());
}

void ShuffleNetV2::thread_tmp_1131_fu_18622_p2() {
    tmp_1131_fu_18622_p2 = (!p_shl487_cast_fu_18606_p1.read().is_01() || !p_shl488_cast_fu_18618_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl487_cast_fu_18606_p1.read()) + sc_biguint<15>(p_shl488_cast_fu_18618_p1.read()));
}

void ShuffleNetV2::thread_tmp_1132_cast_fu_11983_p1() {
    tmp_1132_cast_fu_11983_p1 = esl_sext<64,16>(tmp_871_fu_11978_p2.read());
}

void ShuffleNetV2::thread_tmp_1132_fu_18446_p2() {
    tmp_1132_fu_18446_p2 = (!tmp_1122_reg_33786.read().is_01() || !tmp_437_cast_fu_18442_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1122_reg_33786.read()) + sc_biguint<15>(tmp_437_cast_fu_18442_p1.read()));
}

void ShuffleNetV2::thread_tmp_1133_fu_18648_p2() {
    tmp_1133_fu_18648_p2 = (!tmp_1127_reg_33835.read().is_01() || !tmp_441_cast_fu_18644_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1127_reg_33835.read()) + sc_biguint<14>(tmp_441_cast_fu_18644_p1.read()));
}

void ShuffleNetV2::thread_tmp_1134_fu_18653_p2() {
    tmp_1134_fu_18653_p2 = (!tmp_1131_reg_33840.read().is_01() || !tmp_441_cast1_fu_18640_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1131_reg_33840.read()) + sc_biguint<15>(tmp_441_cast1_fu_18640_p1.read()));
}

void ShuffleNetV2::thread_tmp_1135_fu_18965_p1() {
    tmp_1135_fu_18965_p1 = k26_reg_5213.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1136_fu_18772_p1() {
    tmp_1136_fu_18772_p1 = i94_reg_5191.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1137_fu_18887_p3() {
    tmp_1137_fu_18887_p3 = esl_concat<11,5>(tmp_448_reg_33912.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1138_fu_18898_p3() {
    tmp_1138_fu_18898_p3 = esl_concat<11,3>(tmp_448_reg_33912.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1139_fu_18909_p2() {
    tmp_1139_fu_18909_p2 = (!p_shl493_cast_fu_18894_p1.read().is_01() || !p_shl494_cast_fu_18905_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl493_cast_fu_18894_p1.read()) - sc_biguint<17>(p_shl494_cast_fu_18905_p1.read()));
}

void ShuffleNetV2::thread_tmp_113_cast_fu_7859_p1() {
    tmp_113_cast_fu_7859_p1 = esl_zext<9,2>(w6_reg_3187.read());
}

void ShuffleNetV2::thread_tmp_1140_cast_fu_11988_p1() {
    tmp_1140_cast_fu_11988_p1 = esl_sext<64,13>(tmp_875_reg_31712.read());
}

void ShuffleNetV2::thread_tmp_1140_fu_18919_p2() {
    tmp_1140_fu_18919_p2 = (!tmp_438_cast_reg_33894.read().is_01() || !tmp_1510_cast_fu_18915_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_438_cast_reg_33894.read()) + sc_bigint<18>(tmp_1510_cast_fu_18915_p1.read()));
}

void ShuffleNetV2::thread_tmp_1141_fu_18856_p3() {
    tmp_1141_fu_18856_p3 = esl_concat<7,6>(tmp_450_fu_18851_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1142_fu_18864_p3() {
    tmp_1142_fu_18864_p3 = esl_concat<7,4>(tmp_450_fu_18851_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1143_fu_18876_p2() {
    tmp_1143_fu_18876_p2 = (!tmp_1141_fu_18856_p3.read().is_01() || !p_shl492_cast_fu_18872_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1141_fu_18856_p3.read()) - sc_bigint<13>(p_shl492_cast_fu_18872_p1.read()));
}

void ShuffleNetV2::thread_tmp_1144_fu_18882_p2() {
    tmp_1144_fu_18882_p2 = (!tmp_440_cast_reg_33899.read().is_01() || !tmp_1143_fu_18876_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_440_cast_reg_33899.read()) + sc_biguint<13>(tmp_1143_fu_18876_p2.read()));
}

void ShuffleNetV2::thread_tmp_1145_fu_19401_p1() {
    tmp_1145_fu_19401_p1 = co110_reg_5290.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1146_fu_19319_p1() {
    tmp_1146_fu_19319_p1 = k28_reg_5279.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1147_fu_19103_p1() {
    tmp_1147_fu_19103_p1 = i100_reg_5257.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1148_fu_19164_p3() {
    tmp_1148_fu_19164_p3 = esl_concat<8,2>(tmp_467_reg_34031.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1149_cast_fu_12245_p1() {
    tmp_1149_cast_fu_12245_p1 = esl_sext<15,11>(tmp_878_fu_12240_p2.read());
}

void ShuffleNetV2::thread_tmp_1149_fu_19171_p1() {
    tmp_1149_fu_19171_p1 = esl_sext<11,10>(tmp_1148_fu_19164_p3.read());
}

void ShuffleNetV2::thread_tmp_114_fu_7964_p2() {
    tmp_114_fu_7964_p2 = (!co9_cast_fu_7948_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co9_cast_fu_7948_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_1150_fu_19179_p2() {
    tmp_1150_fu_19179_p2 = (!p_shl498_cast_fu_19175_p1.read().is_01() || !tmp_468_cast1_fu_19160_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl498_cast_fu_19175_p1.read()) - sc_biguint<12>(tmp_468_cast1_fu_19160_p1.read()));
}

void ShuffleNetV2::thread_tmp_1151_fu_19185_p2() {
    tmp_1151_fu_19185_p2 = (!tmp_451_cast2_reg_34000.read().is_01() || !tmp_1150_fu_19179_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_451_cast2_reg_34000.read()) + sc_biguint<12>(tmp_1150_fu_19179_p2.read()));
}

void ShuffleNetV2::thread_tmp_1152_cast_fu_12317_p1() {
    tmp_1152_cast_fu_12317_p1 = esl_zext<64,15>(tmp_880_reg_31837.read());
}

void ShuffleNetV2::thread_tmp_1152_fu_19194_p3() {
    tmp_1152_fu_19194_p3 = esl_concat<12,2>(tmp_1151_fu_19185_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1153_fu_19206_p2() {
    tmp_1153_fu_19206_p2 = (!p_shl497_cast_fu_19202_p1.read().is_01() || !tmp_1529_cast_fu_19190_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl497_cast_fu_19202_p1.read()) - sc_bigint<15>(tmp_1529_cast_fu_19190_p1.read()));
}

void ShuffleNetV2::thread_tmp_1154_fu_19212_p2() {
    tmp_1154_fu_19212_p2 = (!tmp_458_cast_reg_34018.read().is_01() || !tmp_1153_fu_19206_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_458_cast_reg_34018.read()) + sc_biguint<15>(tmp_1153_fu_19206_p2.read()));
}

void ShuffleNetV2::thread_tmp_1155_cast_fu_12300_p1() {
    tmp_1155_cast_fu_12300_p1 = esl_sext<36,35>(tmp_883_fu_12294_p2.read());
}

void ShuffleNetV2::thread_tmp_1155_fu_19224_p3() {
    tmp_1155_fu_19224_p3 = esl_concat<7,2>(tmp_469_reg_34037.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1156_fu_19231_p1() {
    tmp_1156_fu_19231_p1 = esl_sext<34,9>(tmp_1155_fu_19224_p3.read());
}

void ShuffleNetV2::thread_tmp_1157_fu_19239_p2() {
    tmp_1157_fu_19239_p2 = (!p_shl496_cast_fu_19235_p1.read().is_01() || !tmp_470_cast_fu_19220_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl496_cast_fu_19235_p1.read()) - sc_biguint<35>(tmp_470_cast_fu_19220_p1.read()));
}

void ShuffleNetV2::thread_tmp_1158_fu_19249_p2() {
    tmp_1158_fu_19249_p2 = (!tmp_451_cast1_reg_33995.read().is_01() || !tmp_1535_cast_fu_19245_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_451_cast1_reg_33995.read()) + sc_bigint<36>(tmp_1535_cast_fu_19245_p1.read()));
}

void ShuffleNetV2::thread_tmp_1159_cast_fu_12338_p1() {
    tmp_1159_cast_fu_12338_p1 = esl_zext<64,10>(tmp_886_reg_31857.read());
}

void ShuffleNetV2::thread_tmp_1159_fu_19254_p1() {
    tmp_1159_fu_19254_p1 = tmp_1158_fu_19249_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_115_cast_fu_7902_p1() {
    tmp_115_cast_fu_7902_p1 = esl_zext<15,2>(h7_reg_3198.read());
}

void ShuffleNetV2::thread_tmp_1160_fu_19258_p1() {
    tmp_1160_fu_19258_p1 = tmp_1158_fu_19249_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1161_fu_19273_p2() {
    tmp_1161_fu_19273_p2 = (!p_shl495_cast_fu_19266_p3.read().is_01() || !tmp_1159_reg_34048.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl495_cast_fu_19266_p3.read()) - sc_biguint<10>(tmp_1159_reg_34048.read()));
}

void ShuffleNetV2::thread_tmp_1162_fu_19278_p2() {
    tmp_1162_fu_19278_p2 = (!tmp_458_cast1_reg_34013.read().is_01() || !tmp_1161_fu_19273_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_458_cast1_reg_34013.read()) + sc_biguint<10>(tmp_1161_fu_19273_p2.read()));
}

void ShuffleNetV2::thread_tmp_1163_fu_19761_p3() {
    tmp_1163_fu_19761_p3 = esl_concat<6,3>(co112_reg_5345.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1164_fu_19773_p3() {
    tmp_1164_fu_19773_p3 = esl_concat<6,1>(co112_reg_5345.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1165_fu_19785_p2() {
    tmp_1165_fu_19785_p2 = (!p_shl504_cast_fu_19781_p1.read().is_01() || !p_shl503_cast_fu_19769_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl504_cast_fu_19781_p1.read()) + sc_biguint<10>(p_shl503_cast_fu_19769_p1.read()));
}

void ShuffleNetV2::thread_tmp_1166_fu_19683_p1() {
    tmp_1166_fu_19683_p1 = k30_reg_5334.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1167_fu_19490_p1() {
    tmp_1167_fu_19490_p1 = i102_reg_5312.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1168_fu_19605_p3() {
    tmp_1168_fu_19605_p3 = esl_concat<11,5>(tmp_477_reg_34158.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1169_fu_19616_p3() {
    tmp_1169_fu_19616_p3 = esl_concat<11,3>(tmp_477_reg_34158.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_116_fu_8089_p2() {
    tmp_116_fu_8089_p2 = (!i6_cast_fu_8073_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(i6_cast_fu_8073_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp_1170_fu_19627_p2() {
    tmp_1170_fu_19627_p2 = (!p_shl501_cast_fu_19612_p1.read().is_01() || !p_shl502_cast_fu_19623_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl501_cast_fu_19612_p1.read()) - sc_biguint<17>(p_shl502_cast_fu_19623_p1.read()));
}

void ShuffleNetV2::thread_tmp_1171_fu_19637_p2() {
    tmp_1171_fu_19637_p2 = (!tmp_459_cast_reg_34140.read().is_01() || !tmp_1549_cast_fu_19633_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_459_cast_reg_34140.read()) + sc_bigint<18>(tmp_1549_cast_fu_19633_p1.read()));
}

void ShuffleNetV2::thread_tmp_1172_cast_fu_12692_p1() {
    tmp_1172_cast_fu_12692_p1 = esl_sext<17,16>(tmp_895_fu_12686_p2.read());
}

void ShuffleNetV2::thread_tmp_1172_fu_19574_p3() {
    tmp_1172_fu_19574_p3 = esl_concat<7,6>(tmp_479_fu_19569_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1173_cast_fu_12701_p1() {
    tmp_1173_cast_fu_12701_p1 = esl_sext<64,17>(tmp_896_fu_12696_p2.read());
}

void ShuffleNetV2::thread_tmp_1173_fu_19582_p3() {
    tmp_1173_fu_19582_p3 = esl_concat<7,4>(tmp_479_fu_19569_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1174_fu_19594_p2() {
    tmp_1174_fu_19594_p2 = (!tmp_1172_fu_19574_p3.read().is_01() || !p_shl500_cast_fu_19590_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1172_fu_19574_p3.read()) - sc_bigint<13>(p_shl500_cast_fu_19590_p1.read()));
}

void ShuffleNetV2::thread_tmp_1175_fu_19600_p2() {
    tmp_1175_fu_19600_p2 = (!tmp_462_cast_reg_34145.read().is_01() || !tmp_1174_fu_19594_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_462_cast_reg_34145.read()) + sc_biguint<13>(tmp_1174_fu_19594_p2.read()));
}

void ShuffleNetV2::thread_tmp_1176_fu_19890_p3() {
    tmp_1176_fu_19890_p3 = esl_concat<7,3>(tmp_480_fu_19884_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1177_fu_19902_p3() {
    tmp_1177_fu_19902_p3 = esl_concat<7,1>(tmp_480_fu_19884_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1178_fu_19914_p2() {
    tmp_1178_fu_19914_p2 = (!p_shl510_cast_fu_19910_p1.read().is_01() || !p_shl509_cast_fu_19898_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl510_cast_fu_19910_p1.read()) + sc_biguint<11>(p_shl509_cast_fu_19898_p1.read()));
}

void ShuffleNetV2::thread_tmp_1179_fu_19920_p3() {
    tmp_1179_fu_19920_p3 = esl_concat<6,3>(co114_reg_5378.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_117_fu_8095_p1() {
    tmp_117_fu_8095_p1 = esl_zext<64,7>(tmp_116_fu_8089_p2.read());
}

void ShuffleNetV2::thread_tmp_1180_fu_19932_p3() {
    tmp_1180_fu_19932_p3 = esl_concat<6,1>(co114_reg_5378.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1181_cast_fu_12706_p1() {
    tmp_1181_cast_fu_12706_p1 = esl_sext<64,13>(tmp_900_reg_31958.read());
}

void ShuffleNetV2::thread_tmp_1181_fu_19944_p2() {
    tmp_1181_fu_19944_p2 = (!p_shl508_cast_fu_19940_p1.read().is_01() || !p_shl507_cast_fu_19928_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl508_cast_fu_19940_p1.read()) + sc_biguint<10>(p_shl507_cast_fu_19928_p1.read()));
}

void ShuffleNetV2::thread_tmp_1182_fu_19807_p2() {
    tmp_1182_fu_19807_p2 = (!tmp_481_cast_fu_19803_p1.read().is_01() || !tmp_1165_reg_34223.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_481_cast_fu_19803_p1.read()) + sc_biguint<10>(tmp_1165_reg_34223.read()));
}

void ShuffleNetV2::thread_tmp_1183_fu_19812_p3() {
    tmp_1183_fu_19812_p3 = esl_concat<10,3>(tmp_1182_fu_19807_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1184_fu_19824_p3() {
    tmp_1184_fu_19824_p3 = esl_concat<10,1>(tmp_1182_fu_19807_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1185_fu_19836_p2() {
    tmp_1185_fu_19836_p2 = (!p_shl505_cast_fu_19820_p1.read().is_01() || !p_shl506_cast_fu_19832_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl505_cast_fu_19820_p1.read()) + sc_biguint<15>(p_shl506_cast_fu_19832_p1.read()));
}

void ShuffleNetV2::thread_tmp_1186_fu_20095_p1() {
    tmp_1186_fu_20095_p1 = co116_reg_5411.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1187_fu_19970_p2() {
    tmp_1187_fu_19970_p2 = (!tmp_484_cast_fu_19966_p1.read().is_01() || !tmp_1178_reg_34267.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_484_cast_fu_19966_p1.read()) + sc_biguint<11>(tmp_1178_reg_34267.read()));
}

void ShuffleNetV2::thread_tmp_1188_fu_19975_p3() {
    tmp_1188_fu_19975_p3 = esl_concat<11,3>(tmp_1187_fu_19970_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1189_fu_19987_p3() {
    tmp_1189_fu_19987_p3 = esl_concat<11,1>(tmp_1187_fu_19970_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_118_fu_8100_p1() {
    tmp_118_fu_8100_p1 = esl_zext<64,5>(i6_reg_3243.read());
}

void ShuffleNetV2::thread_tmp_1190_fu_19999_p2() {
    tmp_1190_fu_19999_p2 = (!p_shl513_cast_fu_19983_p1.read().is_01() || !p_shl514_cast_fu_19995_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl513_cast_fu_19983_p1.read()) + sc_biguint<15>(p_shl514_cast_fu_19995_p1.read()));
}

void ShuffleNetV2::thread_tmp_1191_fu_20005_p2() {
    tmp_1191_fu_20005_p2 = (!tmp_484_cast1_fu_19962_p1.read().is_01() || !tmp_1181_reg_34272.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_484_cast1_fu_19962_p1.read()) + sc_biguint<10>(tmp_1181_reg_34272.read()));
}

void ShuffleNetV2::thread_tmp_1192_cast_fu_13005_p1() {
    tmp_1192_cast_fu_13005_p1 = esl_zext<64,15>(tmp_905_fu_13000_p2.read());
}

void ShuffleNetV2::thread_tmp_1192_fu_20010_p3() {
    tmp_1192_fu_20010_p3 = esl_concat<10,3>(tmp_1191_fu_20005_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1193_cast_fu_13015_p1() {
    tmp_1193_cast_fu_13015_p1 = esl_zext<64,14>(tmp_906_reg_32058.read());
}

void ShuffleNetV2::thread_tmp_1193_fu_20022_p3() {
    tmp_1193_fu_20022_p3 = esl_concat<10,1>(tmp_1191_fu_20005_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1194_fu_20034_p2() {
    tmp_1194_fu_20034_p2 = (!p_shl511_cast_fu_20018_p1.read().is_01() || !p_shl512_cast_fu_20030_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl511_cast_fu_20018_p1.read()) + sc_biguint<14>(p_shl512_cast_fu_20030_p1.read()));
}

void ShuffleNetV2::thread_tmp_1195_fu_19858_p2() {
    tmp_1195_fu_19858_p2 = (!tmp_1185_reg_34236.read().is_01() || !tmp_486_cast_fu_19854_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1185_reg_34236.read()) + sc_biguint<15>(tmp_486_cast_fu_19854_p1.read()));
}

void ShuffleNetV2::thread_tmp_1196_fu_20060_p2() {
    tmp_1196_fu_20060_p2 = (!tmp_1190_reg_34285.read().is_01() || !tmp_490_cast_fu_20056_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1190_reg_34285.read()) + sc_biguint<15>(tmp_490_cast_fu_20056_p1.read()));
}

void ShuffleNetV2::thread_tmp_1197_fu_20070_p2() {
    tmp_1197_fu_20070_p2 = (!tmp_1194_reg_34290.read().is_01() || !tmp_490_cast1_fu_20052_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1194_reg_34290.read()) + sc_biguint<14>(tmp_490_cast1_fu_20052_p1.read()));
}

void ShuffleNetV2::thread_tmp_1198_fu_20377_p1() {
    tmp_1198_fu_20377_p1 = k32_reg_5455.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1199_fu_20184_p1() {
    tmp_1199_fu_20184_p1 = i106_reg_5433.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_119_cast1_fu_8046_p1() {
    tmp_119_cast1_fu_8046_p1 = esl_zext<11,5>(ci10_reg_3232.read());
}

void ShuffleNetV2::thread_tmp_119_cast_fu_8050_p1() {
    tmp_119_cast_fu_8050_p1 = esl_zext<13,5>(ci10_reg_3232.read());
}

void ShuffleNetV2::thread_tmp_119_fu_7648_p3() {
    tmp_119_fu_7648_p3 = esl_concat<8,1>(tmp_350_fu_7635_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1200_cast_fu_13267_p1() {
    tmp_1200_cast_fu_13267_p1 = esl_sext<17,16>(tmp_909_fu_13261_p2.read());
}

void ShuffleNetV2::thread_tmp_1200_fu_20299_p3() {
    tmp_1200_fu_20299_p3 = esl_concat<11,5>(tmp_497_reg_34362.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1201_cast_fu_13276_p1() {
    tmp_1201_cast_fu_13276_p1 = esl_sext<64,17>(tmp_910_fu_13271_p2.read());
}

void ShuffleNetV2::thread_tmp_1201_fu_20310_p3() {
    tmp_1201_fu_20310_p3 = esl_concat<11,3>(tmp_497_reg_34362.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1202_fu_20321_p2() {
    tmp_1202_fu_20321_p2 = (!p_shl517_cast_fu_20306_p1.read().is_01() || !p_shl518_cast_fu_20317_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl517_cast_fu_20306_p1.read()) - sc_biguint<17>(p_shl518_cast_fu_20317_p1.read()));
}

void ShuffleNetV2::thread_tmp_1203_fu_20331_p2() {
    tmp_1203_fu_20331_p2 = (!tmp_487_cast1_reg_34344.read().is_01() || !tmp_1588_cast_fu_20327_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_487_cast1_reg_34344.read()) + sc_bigint<18>(tmp_1588_cast_fu_20327_p1.read()));
}

void ShuffleNetV2::thread_tmp_1204_fu_20268_p3() {
    tmp_1204_fu_20268_p3 = esl_concat<7,6>(tmp_499_fu_20263_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1205_fu_20276_p3() {
    tmp_1205_fu_20276_p3 = esl_concat<7,4>(tmp_499_fu_20263_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1206_fu_20288_p2() {
    tmp_1206_fu_20288_p2 = (!tmp_1204_fu_20268_p3.read().is_01() || !p_shl516_cast_fu_20284_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1204_fu_20268_p3.read()) - sc_bigint<13>(p_shl516_cast_fu_20284_p1.read()));
}

void ShuffleNetV2::thread_tmp_1207_fu_20294_p2() {
    tmp_1207_fu_20294_p2 = (!tmp_489_cast_reg_34349.read().is_01() || !tmp_1206_fu_20288_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_489_cast_reg_34349.read()) + sc_biguint<13>(tmp_1206_fu_20288_p2.read()));
}

void ShuffleNetV2::thread_tmp_1208_fu_20813_p1() {
    tmp_1208_fu_20813_p1 = co120_reg_5532.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1209_cast_fu_13281_p1() {
    tmp_1209_cast_fu_13281_p1 = esl_sext<64,13>(tmp_914_reg_32118.read());
}

void ShuffleNetV2::thread_tmp_1209_fu_20731_p1() {
    tmp_1209_fu_20731_p1 = k34_reg_5521.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_120_fu_8121_p2() {
    tmp_120_fu_8121_p2 = (!co12_cast_fu_8105_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co12_cast_fu_8105_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_1210_fu_20515_p1() {
    tmp_1210_fu_20515_p1 = i112_reg_5499.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1211_fu_20576_p3() {
    tmp_1211_fu_20576_p3 = esl_concat<8,2>(tmp_517_reg_34481.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1212_fu_20583_p1() {
    tmp_1212_fu_20583_p1 = esl_sext<11,10>(tmp_1211_fu_20576_p3.read());
}

void ShuffleNetV2::thread_tmp_1213_fu_20591_p2() {
    tmp_1213_fu_20591_p2 = (!p_shl522_cast_fu_20587_p1.read().is_01() || !tmp_518_cast_fu_20572_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl522_cast_fu_20587_p1.read()) - sc_biguint<12>(tmp_518_cast_fu_20572_p1.read()));
}

void ShuffleNetV2::thread_tmp_1214_fu_20601_p2() {
    tmp_1214_fu_20601_p2 = (!tmp_1606_cast_fu_20597_p1.read().is_01() || !tmp_500_cast_reg_34450.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1606_cast_fu_20597_p1.read()) + sc_biguint<13>(tmp_500_cast_reg_34450.read()));
}

void ShuffleNetV2::thread_tmp_1215_fu_20618_p2() {
    tmp_1215_fu_20618_p2 = (!p_shl521_cast_fu_20610_p3.read().is_01() || !tmp_1607_cast_fu_20606_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl521_cast_fu_20610_p3.read()) - sc_bigint<15>(tmp_1607_cast_fu_20606_p1.read()));
}

void ShuffleNetV2::thread_tmp_1216_fu_20624_p2() {
    tmp_1216_fu_20624_p2 = (!tmp_1215_fu_20618_p2.read().is_01() || !tmp_508_cast_reg_34468.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1215_fu_20618_p2.read()) + sc_biguint<15>(tmp_508_cast_reg_34468.read()));
}

void ShuffleNetV2::thread_tmp_1217_cast_fu_13533_p1() {
    tmp_1217_cast_fu_13533_p1 = esl_sext<13,12>(tmp_916_fu_13527_p2.read());
}

void ShuffleNetV2::thread_tmp_1217_fu_20636_p3() {
    tmp_1217_fu_20636_p3 = esl_concat<7,2>(tmp_519_reg_34487.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1218_cast_fu_13542_p1() {
    tmp_1218_cast_fu_13542_p1 = esl_sext<15,13>(tmp_917_fu_13537_p2.read());
}

void ShuffleNetV2::thread_tmp_1218_fu_20643_p1() {
    tmp_1218_fu_20643_p1 = esl_sext<34,9>(tmp_1217_fu_20636_p3.read());
}

void ShuffleNetV2::thread_tmp_1219_fu_20651_p2() {
    tmp_1219_fu_20651_p2 = (!p_shl520_cast_fu_20647_p1.read().is_01() || !tmp_520_cast_fu_20632_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl520_cast_fu_20647_p1.read()) - sc_biguint<35>(tmp_520_cast_fu_20632_p1.read()));
}

void ShuffleNetV2::thread_tmp_121_cast_fu_8127_p1() {
    tmp_121_cast_fu_8127_p1 = esl_zext<9,6>(tmp_120_fu_8121_p2.read());
}

void ShuffleNetV2::thread_tmp_121_fu_7872_p3() {
    tmp_121_fu_7872_p3 = esl_concat<9,2>(tmp_373_fu_7863_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1220_fu_20661_p2() {
    tmp_1220_fu_20661_p2 = (!tmp_1613_cast_fu_20657_p1.read().is_01() || !tmp_500_cast1_reg_34445.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1613_cast_fu_20657_p1.read()) + sc_biguint<36>(tmp_500_cast1_reg_34445.read()));
}

void ShuffleNetV2::thread_tmp_1221_cast_fu_13610_p1() {
    tmp_1221_cast_fu_13610_p1 = esl_zext<64,15>(tmp_919_reg_32243.read());
}

void ShuffleNetV2::thread_tmp_1221_fu_20666_p1() {
    tmp_1221_fu_20666_p1 = tmp_1220_fu_20661_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1222_fu_20670_p1() {
    tmp_1222_fu_20670_p1 = tmp_1220_fu_20661_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1223_fu_20685_p2() {
    tmp_1223_fu_20685_p2 = (!p_shl519_cast_fu_20678_p3.read().is_01() || !tmp_1221_reg_34498.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl519_cast_fu_20678_p3.read()) - sc_biguint<10>(tmp_1221_reg_34498.read()));
}

void ShuffleNetV2::thread_tmp_1224_cast_fu_13593_p1() {
    tmp_1224_cast_fu_13593_p1 = esl_sext<36,35>(tmp_922_fu_13587_p2.read());
}

void ShuffleNetV2::thread_tmp_1224_fu_20690_p2() {
    tmp_1224_fu_20690_p2 = (!tmp_1223_fu_20685_p2.read().is_01() || !tmp_508_cast1_reg_34463.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1223_fu_20685_p2.read()) + sc_biguint<10>(tmp_508_cast1_reg_34463.read()));
}

void ShuffleNetV2::thread_tmp_1225_fu_21173_p3() {
    tmp_1225_fu_21173_p3 = esl_concat<6,3>(co122_reg_5587.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1226_fu_21185_p3() {
    tmp_1226_fu_21185_p3 = esl_concat<6,1>(co122_reg_5587.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1227_fu_21197_p2() {
    tmp_1227_fu_21197_p2 = (!p_shl528_cast_fu_21193_p1.read().is_01() || !p_shl527_cast_fu_21181_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl528_cast_fu_21193_p1.read()) + sc_biguint<10>(p_shl527_cast_fu_21181_p1.read()));
}

void ShuffleNetV2::thread_tmp_1228_cast_fu_13631_p1() {
    tmp_1228_cast_fu_13631_p1 = esl_zext<64,10>(tmp_925_reg_32263.read());
}

void ShuffleNetV2::thread_tmp_1228_fu_21095_p1() {
    tmp_1228_fu_21095_p1 = k36_reg_5576.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1229_fu_20902_p1() {
    tmp_1229_fu_20902_p1 = i114_reg_5554.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_122_cast_fu_8149_p1() {
    tmp_122_cast_fu_8149_p1 = esl_zext<8,5>(co12_reg_3255.read());
}

void ShuffleNetV2::thread_tmp_122_fu_8200_p3() {
    tmp_122_fu_8200_p3 = esl_concat<9,2>(tmp_423_fu_8191_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1230_fu_21017_p3() {
    tmp_1230_fu_21017_p3 = esl_concat<11,5>(tmp_527_reg_34608.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1231_fu_21028_p3() {
    tmp_1231_fu_21028_p3 = esl_concat<11,3>(tmp_527_reg_34608.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1232_fu_21039_p2() {
    tmp_1232_fu_21039_p2 = (!p_shl525_cast_fu_21024_p1.read().is_01() || !p_shl526_cast_fu_21035_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl525_cast_fu_21024_p1.read()) - sc_biguint<17>(p_shl526_cast_fu_21035_p1.read()));
}

void ShuffleNetV2::thread_tmp_1233_fu_21049_p2() {
    tmp_1233_fu_21049_p2 = (!tmp_509_cast_reg_34590.read().is_01() || !tmp_1627_cast_fu_21045_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_509_cast_reg_34590.read()) + sc_bigint<18>(tmp_1627_cast_fu_21045_p1.read()));
}

void ShuffleNetV2::thread_tmp_1234_fu_20986_p3() {
    tmp_1234_fu_20986_p3 = esl_concat<7,6>(tmp_529_fu_20981_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1235_fu_20994_p3() {
    tmp_1235_fu_20994_p3 = esl_concat<7,4>(tmp_529_fu_20981_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1236_fu_21006_p2() {
    tmp_1236_fu_21006_p2 = (!tmp_1234_fu_20986_p3.read().is_01() || !p_shl524_cast_fu_21002_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1234_fu_20986_p3.read()) - sc_bigint<13>(p_shl524_cast_fu_21002_p1.read()));
}

void ShuffleNetV2::thread_tmp_1237_fu_21012_p2() {
    tmp_1237_fu_21012_p2 = (!tmp_512_cast_reg_34595.read().is_01() || !tmp_1236_fu_21006_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_512_cast_reg_34595.read()) + sc_biguint<13>(tmp_1236_fu_21006_p2.read()));
}

void ShuffleNetV2::thread_tmp_1238_cast_fu_13981_p1() {
    tmp_1238_cast_fu_13981_p1 = esl_sext<17,16>(tmp_931_fu_13975_p2.read());
}

void ShuffleNetV2::thread_tmp_1238_fu_21302_p3() {
    tmp_1238_fu_21302_p3 = esl_concat<7,3>(tmp_530_fu_21296_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1239_cast_fu_13990_p1() {
    tmp_1239_cast_fu_13990_p1 = esl_sext<64,17>(tmp_932_fu_13985_p2.read());
}

void ShuffleNetV2::thread_tmp_1239_fu_21314_p3() {
    tmp_1239_fu_21314_p3 = esl_concat<7,1>(tmp_530_fu_21296_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_123_fu_8286_p3() {
    tmp_123_fu_8286_p3 = esl_concat<1,5>(ap_const_lv1_1, i7_reg_3288.read());
}

void ShuffleNetV2::thread_tmp_1240_fu_21326_p2() {
    tmp_1240_fu_21326_p2 = (!p_shl534_cast_fu_21322_p1.read().is_01() || !p_shl533_cast_fu_21310_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl534_cast_fu_21322_p1.read()) + sc_biguint<11>(p_shl533_cast_fu_21310_p1.read()));
}

void ShuffleNetV2::thread_tmp_1241_fu_21332_p3() {
    tmp_1241_fu_21332_p3 = esl_concat<6,3>(co124_reg_5620.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1242_fu_21344_p3() {
    tmp_1242_fu_21344_p3 = esl_concat<6,1>(co124_reg_5620.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1243_fu_21356_p2() {
    tmp_1243_fu_21356_p2 = (!p_shl532_cast_fu_21352_p1.read().is_01() || !p_shl531_cast_fu_21340_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl532_cast_fu_21352_p1.read()) + sc_biguint<10>(p_shl531_cast_fu_21340_p1.read()));
}

void ShuffleNetV2::thread_tmp_1244_fu_21219_p2() {
    tmp_1244_fu_21219_p2 = (!tmp_531_cast_fu_21215_p1.read().is_01() || !tmp_1227_reg_34673.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_531_cast_fu_21215_p1.read()) + sc_biguint<10>(tmp_1227_reg_34673.read()));
}

void ShuffleNetV2::thread_tmp_1245_fu_21224_p3() {
    tmp_1245_fu_21224_p3 = esl_concat<10,3>(tmp_1244_fu_21219_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1246_fu_21236_p3() {
    tmp_1246_fu_21236_p3 = esl_concat<10,1>(tmp_1244_fu_21219_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1247_cast_fu_13995_p1() {
    tmp_1247_cast_fu_13995_p1 = esl_sext<64,13>(tmp_936_reg_32364.read());
}

void ShuffleNetV2::thread_tmp_1247_fu_21248_p2() {
    tmp_1247_fu_21248_p2 = (!p_shl529_cast_fu_21232_p1.read().is_01() || !p_shl530_cast_fu_21244_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl529_cast_fu_21232_p1.read()) + sc_biguint<15>(p_shl530_cast_fu_21244_p1.read()));
}

void ShuffleNetV2::thread_tmp_1248_fu_21507_p1() {
    tmp_1248_fu_21507_p1 = co126_reg_5653.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1249_fu_21382_p2() {
    tmp_1249_fu_21382_p2 = (!tmp_534_cast_fu_21378_p1.read().is_01() || !tmp_1243_reg_34722.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_534_cast_fu_21378_p1.read()) + sc_biguint<10>(tmp_1243_reg_34722.read()));
}

void ShuffleNetV2::thread_tmp_124_fu_8298_p1() {
    tmp_124_fu_8298_p1 = esl_zext<64,7>(tmp_176_cast_fu_8294_p1.read());
}

void ShuffleNetV2::thread_tmp_1250_fu_21387_p3() {
    tmp_1250_fu_21387_p3 = esl_concat<10,3>(tmp_1249_fu_21382_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1251_fu_21399_p3() {
    tmp_1251_fu_21399_p3 = esl_concat<10,1>(tmp_1249_fu_21382_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1252_fu_21411_p2() {
    tmp_1252_fu_21411_p2 = (!p_shl537_cast_fu_21395_p1.read().is_01() || !p_shl538_cast_fu_21407_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl537_cast_fu_21395_p1.read()) + sc_biguint<14>(p_shl538_cast_fu_21407_p1.read()));
}

void ShuffleNetV2::thread_tmp_1253_fu_21417_p2() {
    tmp_1253_fu_21417_p2 = (!tmp_534_cast1_fu_21374_p1.read().is_01() || !tmp_1240_reg_34717.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_534_cast1_fu_21374_p1.read()) + sc_biguint<11>(tmp_1240_reg_34717.read()));
}

void ShuffleNetV2::thread_tmp_1254_fu_21422_p3() {
    tmp_1254_fu_21422_p3 = esl_concat<11,3>(tmp_1253_fu_21417_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1255_fu_21434_p3() {
    tmp_1255_fu_21434_p3 = esl_concat<11,1>(tmp_1253_fu_21417_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1256_fu_21446_p2() {
    tmp_1256_fu_21446_p2 = (!p_shl535_cast_fu_21430_p1.read().is_01() || !p_shl536_cast_fu_21442_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl535_cast_fu_21430_p1.read()) + sc_biguint<15>(p_shl536_cast_fu_21442_p1.read()));
}

void ShuffleNetV2::thread_tmp_1257_fu_21270_p2() {
    tmp_1257_fu_21270_p2 = (!tmp_1247_reg_34686.read().is_01() || !tmp_536_cast_fu_21266_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1247_reg_34686.read()) + sc_biguint<15>(tmp_536_cast_fu_21266_p1.read()));
}

void ShuffleNetV2::thread_tmp_1258_fu_21472_p2() {
    tmp_1258_fu_21472_p2 = (!tmp_1252_reg_34735.read().is_01() || !tmp_540_cast_fu_21468_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1252_reg_34735.read()) + sc_biguint<14>(tmp_540_cast_fu_21468_p1.read()));
}

void ShuffleNetV2::thread_tmp_1259_fu_21477_p2() {
    tmp_1259_fu_21477_p2 = (!tmp_1256_reg_34740.read().is_01() || !tmp_540_cast1_fu_21464_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1256_reg_34740.read()) + sc_biguint<15>(tmp_540_cast1_fu_21464_p1.read()));
}

void ShuffleNetV2::thread_tmp_125_fu_8303_p1() {
    tmp_125_fu_8303_p1 = esl_zext<64,5>(i7_reg_3288.read());
}

void ShuffleNetV2::thread_tmp_1260_fu_21797_p1() {
    tmp_1260_fu_21797_p1 = k38_reg_5697.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1261_fu_21596_p1() {
    tmp_1261_fu_21596_p1 = i118_reg_5675.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1262_fu_21711_p3() {
    tmp_1262_fu_21711_p3 = esl_concat<10,5>(tmp_547_reg_34812.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1263_fu_21718_p1() {
    tmp_1263_fu_21718_p1 = esl_sext<16,15>(tmp_1262_fu_21711_p3.read());
}

void ShuffleNetV2::thread_tmp_1264_fu_21726_p3() {
    tmp_1264_fu_21726_p3 = esl_concat<10,3>(tmp_547_reg_34812.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1265_fu_21733_p1() {
    tmp_1265_fu_21733_p1 = esl_sext<14,13>(tmp_1264_fu_21726_p3.read());
}

void ShuffleNetV2::thread_tmp_1266_fu_21741_p2() {
    tmp_1266_fu_21741_p2 = (!p_shl541_cast_fu_21722_p1.read().is_01() || !p_shl542_cast_fu_21737_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl541_cast_fu_21722_p1.read()) - sc_biguint<17>(p_shl542_cast_fu_21737_p1.read()));
}

void ShuffleNetV2::thread_tmp_1267_fu_21751_p2() {
    tmp_1267_fu_21751_p2 = (!tmp_537_cast_reg_34794.read().is_01() || !tmp_1668_cast_fu_21747_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_537_cast_reg_34794.read()) + sc_bigint<18>(tmp_1668_cast_fu_21747_p1.read()));
}

void ShuffleNetV2::thread_tmp_1268_cast_fu_14211_p1() {
    tmp_1268_cast_fu_14211_p1 = esl_zext<64,15>(tmp_949_fu_14206_p2.read());
}

void ShuffleNetV2::thread_tmp_1268_fu_21680_p3() {
    tmp_1268_fu_21680_p3 = esl_concat<7,6>(tmp_549_fu_21675_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1269_cast_fu_14423_p1() {
    tmp_1269_cast_fu_14423_p1 = esl_zext<64,14>(tmp_950_reg_32503.read());
}

void ShuffleNetV2::thread_tmp_1269_fu_21688_p3() {
    tmp_1269_fu_21688_p3 = esl_concat<7,4>(tmp_549_fu_21675_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_126_cast_fu_8187_p1() {
    tmp_126_cast_fu_8187_p1 = esl_zext<9,2>(w13_reg_3266.read());
}

void ShuffleNetV2::thread_tmp_126_fu_8223_p2() {
    tmp_126_fu_8223_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_436_fu_8218_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1270_cast_fu_14418_p1() {
    tmp_1270_cast_fu_14418_p1 = esl_zext<64,15>(tmp_951_fu_14413_p2.read());
}

void ShuffleNetV2::thread_tmp_1270_fu_21700_p2() {
    tmp_1270_fu_21700_p2 = (!tmp_1268_fu_21680_p3.read().is_01() || !p_shl540_cast_fu_21696_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1268_fu_21680_p3.read()) - sc_bigint<13>(p_shl540_cast_fu_21696_p1.read()));
}

void ShuffleNetV2::thread_tmp_1271_fu_21706_p2() {
    tmp_1271_fu_21706_p2 = (!tmp_539_cast_reg_34799.read().is_01() || !tmp_1270_fu_21700_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_539_cast_reg_34799.read()) + sc_biguint<13>(tmp_1270_fu_21700_p2.read()));
}

void ShuffleNetV2::thread_tmp_1272_fu_22229_p1() {
    tmp_1272_fu_22229_p1 = co130_reg_5774.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1273_fu_22147_p1() {
    tmp_1273_fu_22147_p1 = k40_reg_5763.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1274_fu_21935_p1() {
    tmp_1274_fu_21935_p1 = i124_reg_5741.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1275_fu_21992_p3() {
    tmp_1275_fu_21992_p3 = esl_concat<10,2>(tmp_567_reg_34931.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1276_fu_22003_p2() {
    tmp_1276_fu_22003_p2 = (!p_shl546_cast_fu_21999_p1.read().is_01() || !tmp_568_cast_fu_21989_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl546_cast_fu_21999_p1.read()) - sc_biguint<13>(tmp_568_cast_fu_21989_p1.read()));
}

void ShuffleNetV2::thread_tmp_1277_cast_fu_14675_p1() {
    tmp_1277_cast_fu_14675_p1 = esl_sext<17,16>(tmp_954_fu_14669_p2.read());
}

void ShuffleNetV2::thread_tmp_1277_fu_22013_p2() {
    tmp_1277_fu_22013_p2 = (!tmp_1685_cast_fu_22009_p1.read().is_01() || !tmp_550_cast_reg_34900.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_1685_cast_fu_22009_p1.read()) + sc_biguint<14>(tmp_550_cast_reg_34900.read()));
}

void ShuffleNetV2::thread_tmp_1278_cast_fu_14684_p1() {
    tmp_1278_cast_fu_14684_p1 = esl_sext<64,17>(tmp_955_fu_14679_p2.read());
}

void ShuffleNetV2::thread_tmp_1278_fu_22022_p1() {
    tmp_1278_fu_22022_p1 = tmp_1277_fu_22013_p2.read().range(13-1, 0);
}

void ShuffleNetV2::thread_tmp_1279_fu_22034_p2() {
    tmp_1279_fu_22034_p2 = (!p_shl545_cast_fu_22026_p3.read().is_01() || !tmp_1686_cast_fu_22018_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl545_cast_fu_22026_p3.read()) - sc_bigint<15>(tmp_1686_cast_fu_22018_p1.read()));
}

void ShuffleNetV2::thread_tmp_127_fu_8324_p2() {
    tmp_127_fu_8324_p2 = (!co16_cast_fu_8308_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co16_cast_fu_8308_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_1280_fu_22040_p2() {
    tmp_1280_fu_22040_p2 = (!tmp_1279_fu_22034_p2.read().is_01() || !tmp_558_cast1_reg_34918.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1279_fu_22034_p2.read()) + sc_biguint<15>(tmp_558_cast1_reg_34918.read()));
}

void ShuffleNetV2::thread_tmp_1281_fu_22052_p3() {
    tmp_1281_fu_22052_p3 = esl_concat<7,2>(tmp_569_reg_34937.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1282_fu_22059_p1() {
    tmp_1282_fu_22059_p1 = esl_sext<34,9>(tmp_1281_fu_22052_p3.read());
}

void ShuffleNetV2::thread_tmp_1283_fu_22067_p2() {
    tmp_1283_fu_22067_p2 = (!p_shl544_cast_fu_22063_p1.read().is_01() || !tmp_570_cast_fu_22048_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl544_cast_fu_22063_p1.read()) - sc_biguint<35>(tmp_570_cast_fu_22048_p1.read()));
}

void ShuffleNetV2::thread_tmp_1284_fu_22077_p2() {
    tmp_1284_fu_22077_p2 = (!tmp_1692_cast_fu_22073_p1.read().is_01() || !tmp_550_cast1_reg_34895.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1692_cast_fu_22073_p1.read()) + sc_biguint<36>(tmp_550_cast1_reg_34895.read()));
}

void ShuffleNetV2::thread_tmp_1285_fu_22082_p1() {
    tmp_1285_fu_22082_p1 = tmp_1284_fu_22077_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1286_cast_fu_14689_p1() {
    tmp_1286_cast_fu_14689_p1 = esl_sext<64,13>(tmp_959_reg_32568.read());
}

void ShuffleNetV2::thread_tmp_1286_fu_22086_p1() {
    tmp_1286_fu_22086_p1 = tmp_1284_fu_22077_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1287_fu_22101_p2() {
    tmp_1287_fu_22101_p2 = (!p_shl543_cast_fu_22094_p3.read().is_01() || !tmp_1285_reg_34948.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl543_cast_fu_22094_p3.read()) - sc_biguint<10>(tmp_1285_reg_34948.read()));
}

void ShuffleNetV2::thread_tmp_1288_fu_22106_p2() {
    tmp_1288_fu_22106_p2 = (!tmp_1287_fu_22101_p2.read().is_01() || !tmp_558_cast_reg_34913.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1287_fu_22101_p2.read()) + sc_biguint<10>(tmp_558_cast_reg_34913.read()));
}

void ShuffleNetV2::thread_tmp_1289_fu_22601_p3() {
    tmp_1289_fu_22601_p3 = esl_concat<6,3>(co132_reg_5829.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_128_cast1_fu_8247_p1() {
    tmp_128_cast1_fu_8247_p1 = esl_zext<9,2>(h14_reg_3277.read());
}

void ShuffleNetV2::thread_tmp_128_cast_fu_8251_p1() {
    tmp_128_cast_fu_8251_p1 = esl_zext<15,2>(h14_reg_3277.read());
}

void ShuffleNetV2::thread_tmp_128_fu_8580_p3() {
    tmp_128_fu_8580_p3 = esl_concat<10,1>(tmp_502_fu_8567_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1290_fu_22613_p3() {
    tmp_1290_fu_22613_p3 = esl_concat<6,1>(co132_reg_5829.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1291_fu_22625_p2() {
    tmp_1291_fu_22625_p2 = (!p_shl552_cast_fu_22621_p1.read().is_01() || !p_shl551_cast_fu_22609_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl552_cast_fu_22621_p1.read()) + sc_biguint<10>(p_shl551_cast_fu_22609_p1.read()));
}

void ShuffleNetV2::thread_tmp_1292_fu_22519_p1() {
    tmp_1292_fu_22519_p1 = k42_reg_5818.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1293_fu_22318_p1() {
    tmp_1293_fu_22318_p1 = i126_reg_5796.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1294_cast_fu_14937_p1() {
    tmp_1294_cast_fu_14937_p1 = esl_sext<13,12>(tmp_962_fu_14931_p2.read());
}

void ShuffleNetV2::thread_tmp_1294_fu_22433_p3() {
    tmp_1294_fu_22433_p3 = esl_concat<10,5>(tmp_577_reg_35058.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1295_cast_fu_14946_p1() {
    tmp_1295_cast_fu_14946_p1 = esl_sext<15,13>(tmp_963_fu_14941_p2.read());
}

void ShuffleNetV2::thread_tmp_1295_fu_22440_p1() {
    tmp_1295_fu_22440_p1 = esl_sext<16,15>(tmp_1294_fu_22433_p3.read());
}

void ShuffleNetV2::thread_tmp_1296_fu_22448_p3() {
    tmp_1296_fu_22448_p3 = esl_concat<10,3>(tmp_577_reg_35058.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1297_fu_22455_p1() {
    tmp_1297_fu_22455_p1 = esl_sext<14,13>(tmp_1296_fu_22448_p3.read());
}

void ShuffleNetV2::thread_tmp_1298_cast_fu_15014_p1() {
    tmp_1298_cast_fu_15014_p1 = esl_zext<64,15>(tmp_965_reg_32693.read());
}

void ShuffleNetV2::thread_tmp_1298_fu_22463_p2() {
    tmp_1298_fu_22463_p2 = (!p_shl549_cast_fu_22444_p1.read().is_01() || !p_shl550_cast_fu_22459_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl549_cast_fu_22444_p1.read()) - sc_biguint<17>(p_shl550_cast_fu_22459_p1.read()));
}

void ShuffleNetV2::thread_tmp_1299_fu_22473_p2() {
    tmp_1299_fu_22473_p2 = (!tmp_559_cast_reg_35040.read().is_01() || !tmp_1708_cast_fu_22469_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_559_cast_reg_35040.read()) + sc_bigint<18>(tmp_1708_cast_fu_22469_p1.read()));
}

void ShuffleNetV2::thread_tmp_129_fu_8449_p2() {
    tmp_129_fu_8449_p2 = (!i9_cast_fu_8433_p1.read().is_01() || !ap_const_lv8_78.is_01())? sc_lv<8>(): (sc_biguint<8>(i9_cast_fu_8433_p1.read()) + sc_biguint<8>(ap_const_lv8_78));
}

void ShuffleNetV2::thread_tmp_1300_fu_22402_p3() {
    tmp_1300_fu_22402_p3 = esl_concat<7,6>(tmp_579_fu_22397_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1301_cast_fu_14997_p1() {
    tmp_1301_cast_fu_14997_p1 = esl_sext<36,35>(tmp_968_fu_14991_p2.read());
}

void ShuffleNetV2::thread_tmp_1301_fu_22410_p3() {
    tmp_1301_fu_22410_p3 = esl_concat<7,4>(tmp_579_fu_22397_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1302_fu_22422_p2() {
    tmp_1302_fu_22422_p2 = (!tmp_1300_fu_22402_p3.read().is_01() || !p_shl548_cast_fu_22418_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1300_fu_22402_p3.read()) - sc_bigint<13>(p_shl548_cast_fu_22418_p1.read()));
}

void ShuffleNetV2::thread_tmp_1303_fu_22428_p2() {
    tmp_1303_fu_22428_p2 = (!tmp_562_cast1_reg_35045.read().is_01() || !tmp_1302_fu_22422_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_562_cast1_reg_35045.read()) + sc_biguint<13>(tmp_1302_fu_22422_p2.read()));
}

void ShuffleNetV2::thread_tmp_1304_fu_22730_p3() {
    tmp_1304_fu_22730_p3 = esl_concat<7,3>(tmp_580_fu_22724_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1305_cast_fu_15035_p1() {
    tmp_1305_cast_fu_15035_p1 = esl_zext<64,10>(tmp_973_reg_32713.read());
}

void ShuffleNetV2::thread_tmp_1305_fu_22742_p3() {
    tmp_1305_fu_22742_p3 = esl_concat<7,1>(tmp_580_fu_22724_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1306_fu_22754_p2() {
    tmp_1306_fu_22754_p2 = (!p_shl558_cast_fu_22750_p1.read().is_01() || !p_shl557_cast_fu_22738_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl558_cast_fu_22750_p1.read()) + sc_biguint<11>(p_shl557_cast_fu_22738_p1.read()));
}

void ShuffleNetV2::thread_tmp_1307_fu_22760_p3() {
    tmp_1307_fu_22760_p3 = esl_concat<6,3>(co134_reg_5862.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1308_fu_22772_p3() {
    tmp_1308_fu_22772_p3 = esl_concat<6,1>(co134_reg_5862.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1309_fu_22784_p2() {
    tmp_1309_fu_22784_p2 = (!p_shl556_cast_fu_22780_p1.read().is_01() || !p_shl555_cast_fu_22768_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl556_cast_fu_22780_p1.read()) + sc_biguint<10>(p_shl555_cast_fu_22768_p1.read()));
}

void ShuffleNetV2::thread_tmp_130_fu_8455_p1() {
    tmp_130_fu_8455_p1 = esl_zext<64,8>(tmp_129_fu_8449_p2.read());
}

void ShuffleNetV2::thread_tmp_1310_fu_22647_p2() {
    tmp_1310_fu_22647_p2 = (!tmp_581_cast_fu_22643_p1.read().is_01() || !tmp_1291_reg_35123.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_581_cast_fu_22643_p1.read()) + sc_biguint<10>(tmp_1291_reg_35123.read()));
}

void ShuffleNetV2::thread_tmp_1311_fu_22652_p3() {
    tmp_1311_fu_22652_p3 = esl_concat<10,3>(tmp_1310_fu_22647_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1312_fu_22664_p3() {
    tmp_1312_fu_22664_p3 = esl_concat<10,1>(tmp_1310_fu_22647_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1313_fu_22676_p2() {
    tmp_1313_fu_22676_p2 = (!p_shl553_cast_fu_22660_p1.read().is_01() || !p_shl554_cast_fu_22672_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl553_cast_fu_22660_p1.read()) + sc_biguint<15>(p_shl554_cast_fu_22672_p1.read()));
}

void ShuffleNetV2::thread_tmp_1314_fu_22935_p1() {
    tmp_1314_fu_22935_p1 = co136_reg_5895.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1315_cast_fu_15389_p1() {
    tmp_1315_cast_fu_15389_p1 = esl_sext<17,16>(tmp_981_fu_15383_p2.read());
}

void ShuffleNetV2::thread_tmp_1315_fu_22810_p2() {
    tmp_1315_fu_22810_p2 = (!tmp_584_cast_fu_22806_p1.read().is_01() || !tmp_1306_reg_35167.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_584_cast_fu_22806_p1.read()) + sc_biguint<11>(tmp_1306_reg_35167.read()));
}

void ShuffleNetV2::thread_tmp_1316_cast_fu_15398_p1() {
    tmp_1316_cast_fu_15398_p1 = esl_sext<64,17>(tmp_982_fu_15393_p2.read());
}

void ShuffleNetV2::thread_tmp_1316_fu_22815_p3() {
    tmp_1316_fu_22815_p3 = esl_concat<11,3>(tmp_1315_fu_22810_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1317_fu_22827_p3() {
    tmp_1317_fu_22827_p3 = esl_concat<11,1>(tmp_1315_fu_22810_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1318_fu_22839_p2() {
    tmp_1318_fu_22839_p2 = (!p_shl561_cast_fu_22823_p1.read().is_01() || !p_shl562_cast_fu_22835_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl561_cast_fu_22823_p1.read()) + sc_biguint<15>(p_shl562_cast_fu_22835_p1.read()));
}

void ShuffleNetV2::thread_tmp_1319_fu_22845_p2() {
    tmp_1319_fu_22845_p2 = (!tmp_584_cast1_fu_22802_p1.read().is_01() || !tmp_1309_reg_35172.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_584_cast1_fu_22802_p1.read()) + sc_biguint<10>(tmp_1309_reg_35172.read()));
}

void ShuffleNetV2::thread_tmp_131_fu_8460_p1() {
    tmp_131_fu_8460_p1 = esl_zext<64,5>(i9_reg_3322.read());
}

void ShuffleNetV2::thread_tmp_1320_fu_22850_p3() {
    tmp_1320_fu_22850_p3 = esl_concat<10,3>(tmp_1319_fu_22845_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1321_fu_22862_p3() {
    tmp_1321_fu_22862_p3 = esl_concat<10,1>(tmp_1319_fu_22845_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1322_fu_22874_p2() {
    tmp_1322_fu_22874_p2 = (!p_shl559_cast_fu_22858_p1.read().is_01() || !p_shl560_cast_fu_22870_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl559_cast_fu_22858_p1.read()) + sc_biguint<14>(p_shl560_cast_fu_22870_p1.read()));
}

void ShuffleNetV2::thread_tmp_1323_fu_22698_p2() {
    tmp_1323_fu_22698_p2 = (!tmp_1313_reg_35136.read().is_01() || !tmp_586_cast_fu_22694_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1313_reg_35136.read()) + sc_biguint<15>(tmp_586_cast_fu_22694_p1.read()));
}

void ShuffleNetV2::thread_tmp_1324_cast_fu_15403_p1() {
    tmp_1324_cast_fu_15403_p1 = esl_sext<64,13>(tmp_986_reg_32814.read());
}

void ShuffleNetV2::thread_tmp_1324_fu_22900_p2() {
    tmp_1324_fu_22900_p2 = (!tmp_1318_reg_35185.read().is_01() || !tmp_590_cast_fu_22896_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1318_reg_35185.read()) + sc_biguint<15>(tmp_590_cast_fu_22896_p1.read()));
}

void ShuffleNetV2::thread_tmp_1325_fu_22910_p2() {
    tmp_1325_fu_22910_p2 = (!tmp_1322_reg_35190.read().is_01() || !tmp_590_cast1_fu_22892_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1322_reg_35190.read()) + sc_biguint<14>(tmp_590_cast1_fu_22892_p1.read()));
}

void ShuffleNetV2::thread_tmp_1326_fu_23225_p1() {
    tmp_1326_fu_23225_p1 = k44_reg_5939.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1327_fu_23024_p1() {
    tmp_1327_fu_23024_p1 = i130_reg_5917.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1328_fu_23139_p3() {
    tmp_1328_fu_23139_p3 = esl_concat<9,5>(tmp_597_reg_35262.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1329_fu_23146_p1() {
    tmp_1329_fu_23146_p1 = esl_sext<16,14>(tmp_1328_fu_23139_p3.read());
}

void ShuffleNetV2::thread_tmp_132_cast1_fu_8406_p1() {
    tmp_132_cast1_fu_8406_p1 = esl_zext<11,5>(ci12_reg_3311.read());
}

void ShuffleNetV2::thread_tmp_132_cast_fu_8410_p1() {
    tmp_132_cast_fu_8410_p1 = esl_zext<14,5>(ci12_reg_3311.read());
}

void ShuffleNetV2::thread_tmp_132_fu_8611_p3() {
    tmp_132_fu_8611_p3 = esl_concat<11,1>(tmp_509_fu_8598_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1330_fu_23154_p3() {
    tmp_1330_fu_23154_p3 = esl_concat<9,3>(tmp_597_reg_35262.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1331_fu_23161_p1() {
    tmp_1331_fu_23161_p1 = esl_sext<14,12>(tmp_1330_fu_23154_p3.read());
}

void ShuffleNetV2::thread_tmp_1332_fu_23169_p2() {
    tmp_1332_fu_23169_p2 = (!p_shl565_cast_fu_23150_p1.read().is_01() || !p_shl566_cast_fu_23165_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl565_cast_fu_23150_p1.read()) - sc_biguint<17>(p_shl566_cast_fu_23165_p1.read()));
}

void ShuffleNetV2::thread_tmp_1333_fu_23179_p2() {
    tmp_1333_fu_23179_p2 = (!tmp_587_cast_reg_35244.read().is_01() || !tmp_1749_cast_fu_23175_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_587_cast_reg_35244.read()) + sc_bigint<18>(tmp_1749_cast_fu_23175_p1.read()));
}

void ShuffleNetV2::thread_tmp_1334_fu_23108_p3() {
    tmp_1334_fu_23108_p3 = esl_concat<7,6>(tmp_599_fu_23103_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1335_fu_23116_p3() {
    tmp_1335_fu_23116_p3 = esl_concat<7,4>(tmp_599_fu_23103_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1336_fu_23128_p2() {
    tmp_1336_fu_23128_p2 = (!tmp_1334_fu_23108_p3.read().is_01() || !p_shl564_cast_fu_23124_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1334_fu_23108_p3.read()) - sc_bigint<13>(p_shl564_cast_fu_23124_p1.read()));
}

void ShuffleNetV2::thread_tmp_1337_fu_23134_p2() {
    tmp_1337_fu_23134_p2 = (!tmp_589_cast_reg_35249.read().is_01() || !tmp_1336_fu_23128_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_589_cast_reg_35249.read()) + sc_biguint<13>(tmp_1336_fu_23128_p2.read()));
}

void ShuffleNetV2::thread_tmp_1338_fu_23657_p1() {
    tmp_1338_fu_23657_p1 = co140_reg_6016.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1339_fu_23571_p1() {
    tmp_1339_fu_23571_p1 = k46_reg_6005.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_133_fu_8481_p2() {
    tmp_133_fu_8481_p2 = (!co19_cast_fu_8465_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co19_cast_fu_8465_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_1340_fu_23367_p1() {
    tmp_1340_fu_23367_p1 = i136_reg_5983.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1341_fu_23424_p3() {
    tmp_1341_fu_23424_p3 = esl_concat<10,2>(tmp_617_reg_35381.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1342_fu_23435_p2() {
    tmp_1342_fu_23435_p2 = (!p_shl570_cast_fu_23431_p1.read().is_01() || !tmp_618_cast_fu_23421_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl570_cast_fu_23431_p1.read()) - sc_biguint<13>(tmp_618_cast_fu_23421_p1.read()));
}

void ShuffleNetV2::thread_tmp_1343_fu_23441_p2() {
    tmp_1343_fu_23441_p2 = (!tmp_1342_fu_23435_p2.read().is_01() || !tmp_600_cast_reg_35350.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1342_fu_23435_p2.read()) + sc_biguint<13>(tmp_600_cast_reg_35350.read()));
}

void ShuffleNetV2::thread_tmp_1344_fu_23458_p2() {
    tmp_1344_fu_23458_p2 = (!p_shl569_cast_fu_23450_p3.read().is_01() || !tmp_1767_cast_fu_23446_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl569_cast_fu_23450_p3.read()) - sc_bigint<15>(tmp_1767_cast_fu_23446_p1.read()));
}

void ShuffleNetV2::thread_tmp_1345_cast_fu_15623_p1() {
    tmp_1345_cast_fu_15623_p1 = esl_zext<64,15>(tmp_1006_fu_15618_p2.read());
}

void ShuffleNetV2::thread_tmp_1345_fu_23464_p2() {
    tmp_1345_fu_23464_p2 = (!tmp_1344_fu_23458_p2.read().is_01() || !tmp_608_cast_reg_35368.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1344_fu_23458_p2.read()) + sc_biguint<15>(tmp_608_cast_reg_35368.read()));
}

void ShuffleNetV2::thread_tmp_1346_cast_fu_15835_p1() {
    tmp_1346_cast_fu_15835_p1 = esl_zext<64,14>(tmp_1007_reg_32953.read());
}

void ShuffleNetV2::thread_tmp_1346_fu_23476_p3() {
    tmp_1346_fu_23476_p3 = esl_concat<7,2>(tmp_619_reg_35387.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1347_cast_fu_15830_p1() {
    tmp_1347_cast_fu_15830_p1 = esl_zext<64,15>(tmp_1008_fu_15825_p2.read());
}

void ShuffleNetV2::thread_tmp_1347_fu_23483_p1() {
    tmp_1347_fu_23483_p1 = esl_sext<34,9>(tmp_1346_fu_23476_p3.read());
}

void ShuffleNetV2::thread_tmp_1348_fu_23491_p2() {
    tmp_1348_fu_23491_p2 = (!p_shl568_cast_fu_23487_p1.read().is_01() || !tmp_620_cast_fu_23472_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl568_cast_fu_23487_p1.read()) - sc_biguint<35>(tmp_620_cast_fu_23472_p1.read()));
}

void ShuffleNetV2::thread_tmp_1349_fu_23501_p2() {
    tmp_1349_fu_23501_p2 = (!tmp_1773_cast_fu_23497_p1.read().is_01() || !tmp_600_cast1_reg_35345.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1773_cast_fu_23497_p1.read()) + sc_biguint<36>(tmp_600_cast1_reg_35345.read()));
}

void ShuffleNetV2::thread_tmp_134_fu_8684_p2() {
    tmp_134_fu_8684_p2 = (!co22_cast_fu_8668_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co22_cast_fu_8668_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp_1350_fu_23506_p1() {
    tmp_1350_fu_23506_p1 = tmp_1349_fu_23501_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1351_fu_23510_p1() {
    tmp_1351_fu_23510_p1 = tmp_1349_fu_23501_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1352_fu_23525_p2() {
    tmp_1352_fu_23525_p2 = (!p_shl567_cast_fu_23518_p3.read().is_01() || !tmp_1350_reg_35398.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl567_cast_fu_23518_p3.read()) - sc_biguint<10>(tmp_1350_reg_35398.read()));
}

void ShuffleNetV2::thread_tmp_1353_fu_23530_p2() {
    tmp_1353_fu_23530_p2 = (!tmp_1352_fu_23525_p2.read().is_01() || !tmp_608_cast1_reg_35363.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1352_fu_23525_p2.read()) + sc_biguint<10>(tmp_608_cast1_reg_35363.read()));
}

void ShuffleNetV2::thread_tmp_1354_fu_24029_p3() {
    tmp_1354_fu_24029_p3 = esl_concat<6,3>(co142_reg_6071.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1355_fu_24041_p3() {
    tmp_1355_fu_24041_p3 = esl_concat<6,1>(co142_reg_6071.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1356_cast_fu_16095_p1() {
    tmp_1356_cast_fu_16095_p1 = esl_sext<17,16>(tmp_1015_fu_16089_p2.read());
}

void ShuffleNetV2::thread_tmp_1356_fu_24053_p2() {
    tmp_1356_fu_24053_p2 = (!p_shl576_cast_fu_24049_p1.read().is_01() || !p_shl575_cast_fu_24037_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl576_cast_fu_24049_p1.read()) + sc_biguint<10>(p_shl575_cast_fu_24037_p1.read()));
}

void ShuffleNetV2::thread_tmp_1357_cast_fu_16104_p1() {
    tmp_1357_cast_fu_16104_p1 = esl_sext<64,17>(tmp_1016_fu_16099_p2.read());
}

void ShuffleNetV2::thread_tmp_1357_fu_23947_p1() {
    tmp_1357_fu_23947_p1 = k48_reg_6060.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1358_fu_23746_p1() {
    tmp_1358_fu_23746_p1 = i138_reg_6038.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1359_fu_23869_p3() {
    tmp_1359_fu_23869_p3 = esl_concat<12,5>(tmp_627_reg_35508.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_135_cast1_fu_8559_p1() {
    tmp_135_cast1_fu_8559_p1 = esl_zext<11,5>(h_28_fu_8553_p2.read());
}

void ShuffleNetV2::thread_tmp_135_cast_fu_8563_p1() {
    tmp_135_cast_fu_8563_p1 = esl_zext<10,5>(h_28_fu_8553_p2.read());
}

void ShuffleNetV2::thread_tmp_135_fu_8924_p3() {
    tmp_135_fu_8924_p3 = esl_concat<10,2>(tmp_534_fu_8915_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1360_fu_23880_p3() {
    tmp_1360_fu_23880_p3 = esl_concat<12,3>(tmp_627_reg_35508.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1361_fu_23891_p2() {
    tmp_1361_fu_23891_p2 = (!p_shl573_cast_fu_23876_p1.read().is_01() || !p_shl574_cast_fu_23887_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl573_cast_fu_23876_p1.read()) - sc_biguint<18>(p_shl574_cast_fu_23887_p1.read()));
}

void ShuffleNetV2::thread_tmp_1362_fu_23901_p2() {
    tmp_1362_fu_23901_p2 = (!tmp_609_cast_reg_35490.read().is_01() || !tmp_1787_cast_fu_23897_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_609_cast_reg_35490.read()) + sc_bigint<19>(tmp_1787_cast_fu_23897_p1.read()));
}

void ShuffleNetV2::thread_tmp_1363_fu_23838_p3() {
    tmp_1363_fu_23838_p3 = esl_concat<7,6>(tmp_629_fu_23833_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1364_fu_23846_p3() {
    tmp_1364_fu_23846_p3 = esl_concat<7,4>(tmp_629_fu_23833_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1365_cast_fu_16109_p1() {
    tmp_1365_cast_fu_16109_p1 = esl_sext<64,13>(tmp_1020_reg_33018.read());
}

void ShuffleNetV2::thread_tmp_1365_fu_23858_p2() {
    tmp_1365_fu_23858_p2 = (!tmp_1363_fu_23838_p3.read().is_01() || !p_shl572_cast_fu_23854_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1363_fu_23838_p3.read()) - sc_bigint<13>(p_shl572_cast_fu_23854_p1.read()));
}

void ShuffleNetV2::thread_tmp_1366_fu_23864_p2() {
    tmp_1366_fu_23864_p2 = (!tmp_612_cast_reg_35495.read().is_01() || !tmp_1365_fu_23858_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_612_cast_reg_35495.read()) + sc_biguint<13>(tmp_1365_fu_23858_p2.read()));
}

void ShuffleNetV2::thread_tmp_1367_fu_24152_p1() {
    tmp_1367_fu_24152_p1 = co144_reg_6104.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1368_fu_24168_p2() {
    tmp_1368_fu_24168_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co144_reg_6104.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1369_fu_24075_p2() {
    tmp_1369_fu_24075_p2 = (!tmp_631_cast_fu_24071_p1.read().is_01() || !tmp_1356_reg_35573.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_631_cast_fu_24071_p1.read()) + sc_biguint<10>(tmp_1356_reg_35573.read()));
}

void ShuffleNetV2::thread_tmp_136_fu_8809_p2() {
    tmp_136_fu_8809_p2 = (!i10_cast_fu_8793_p1.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<8>(): (sc_biguint<8>(i10_cast_fu_8793_p1.read()) + sc_bigint<8>(ap_const_lv8_90));
}

void ShuffleNetV2::thread_tmp_1370_fu_24080_p3() {
    tmp_1370_fu_24080_p3 = esl_concat<10,3>(tmp_1369_fu_24075_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1371_fu_24092_p3() {
    tmp_1371_fu_24092_p3 = esl_concat<10,1>(tmp_1369_fu_24075_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1372_fu_24104_p2() {
    tmp_1372_fu_24104_p2 = (!p_shl577_cast_fu_24088_p1.read().is_01() || !p_shl578_cast_fu_24100_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl577_cast_fu_24088_p1.read()) + sc_biguint<15>(p_shl578_cast_fu_24100_p1.read()));
}

void ShuffleNetV2::thread_tmp_1373_fu_24126_p2() {
    tmp_1373_fu_24126_p2 = (!tmp_1372_reg_35586.read().is_01() || !tmp_637_cast1_fu_24122_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1372_reg_35586.read()) + sc_biguint<15>(tmp_637_cast1_fu_24122_p1.read()));
}

void ShuffleNetV2::thread_tmp_1374_cast_fu_16366_p1() {
    tmp_1374_cast_fu_16366_p1 = esl_sext<15,12>(tmp_1026_fu_16361_p2.read());
}

void ShuffleNetV2::thread_tmp_1374_fu_24422_p1() {
    tmp_1374_fu_24422_p1 = k50_reg_6148.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1375_fu_24239_p1() {
    tmp_1375_fu_24239_p1 = i142_reg_6126.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1376_fu_24344_p3() {
    tmp_1376_fu_24344_p3 = esl_concat<12,5>(tmp_644_reg_35658.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1377_cast_fu_16438_p1() {
    tmp_1377_cast_fu_16438_p1 = esl_zext<64,15>(tmp_1029_reg_33143.read());
}

void ShuffleNetV2::thread_tmp_1377_fu_24355_p3() {
    tmp_1377_fu_24355_p3 = esl_concat<12,3>(tmp_644_reg_35658.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1378_fu_24366_p2() {
    tmp_1378_fu_24366_p2 = (!p_shl581_cast_fu_24351_p1.read().is_01() || !p_shl582_cast_fu_24362_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl581_cast_fu_24351_p1.read()) - sc_biguint<18>(p_shl582_cast_fu_24362_p1.read()));
}

void ShuffleNetV2::thread_tmp_1379_fu_24376_p2() {
    tmp_1379_fu_24376_p2 = (!tmp_633_cast1_reg_35640.read().is_01() || !tmp_1810_cast_fu_24372_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_633_cast1_reg_35640.read()) + sc_bigint<19>(tmp_1810_cast_fu_24372_p1.read()));
}

void ShuffleNetV2::thread_tmp_137_fu_8815_p1() {
    tmp_137_fu_8815_p1 = esl_zext<64,8>(tmp_136_fu_8809_p2.read());
}

void ShuffleNetV2::thread_tmp_1380_cast_fu_16421_p1() {
    tmp_1380_cast_fu_16421_p1 = esl_sext<36,35>(tmp_1032_fu_16415_p2.read());
}

void ShuffleNetV2::thread_tmp_1380_fu_24292_p2() {
    tmp_1380_fu_24292_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i142_reg_6126.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1381_fu_24313_p3() {
    tmp_1381_fu_24313_p3 = esl_concat<8,7>(tmp_646_fu_24308_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1382_fu_24321_p3() {
    tmp_1382_fu_24321_p3 = esl_concat<8,5>(tmp_646_fu_24308_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1383_fu_24333_p2() {
    tmp_1383_fu_24333_p2 = (!tmp_1381_fu_24313_p3.read().is_01() || !p_shl580_cast_fu_24329_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1381_fu_24313_p3.read()) - sc_bigint<15>(p_shl580_cast_fu_24329_p1.read()));
}

void ShuffleNetV2::thread_tmp_1384_cast_fu_16459_p1() {
    tmp_1384_cast_fu_16459_p1 = esl_zext<64,10>(tmp_1037_reg_33163.read());
}

void ShuffleNetV2::thread_tmp_1384_fu_24339_p2() {
    tmp_1384_fu_24339_p2 = (!tmp_636_cast_reg_35645.read().is_01() || !tmp_1383_fu_24333_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_636_cast_reg_35645.read()) + sc_biguint<15>(tmp_1383_fu_24333_p2.read()));
}

void ShuffleNetV2::thread_tmp_1385_fu_24854_p1() {
    tmp_1385_fu_24854_p1 = co148_reg_6225.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1386_fu_24870_p2() {
    tmp_1386_fu_24870_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co148_reg_6225.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1387_fu_24768_p1() {
    tmp_1387_fu_24768_p1 = k52_reg_6214.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1388_fu_24564_p1() {
    tmp_1388_fu_24564_p1 = i148_reg_6192.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1389_fu_24621_p3() {
    tmp_1389_fu_24621_p3 = esl_concat<10,2>(tmp_661_reg_35777.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_138_fu_8820_p1() {
    tmp_138_fu_8820_p1 = esl_zext<64,5>(i10_reg_3389.read());
}

void ShuffleNetV2::thread_tmp_1390_fu_24632_p2() {
    tmp_1390_fu_24632_p2 = (!p_shl586_cast_fu_24628_p1.read().is_01() || !tmp_662_cast_fu_24618_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl586_cast_fu_24628_p1.read()) - sc_biguint<13>(tmp_662_cast_fu_24618_p1.read()));
}

void ShuffleNetV2::thread_tmp_1391_fu_24638_p2() {
    tmp_1391_fu_24638_p2 = (!tmp_1390_fu_24632_p2.read().is_01() || !tmp_647_cast_reg_35746.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1390_fu_24632_p2.read()) + sc_biguint<13>(tmp_647_cast_reg_35746.read()));
}

void ShuffleNetV2::thread_tmp_1392_fu_24655_p2() {
    tmp_1392_fu_24655_p2 = (!p_shl585_cast_fu_24647_p3.read().is_01() || !tmp_1827_cast_fu_24643_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl585_cast_fu_24647_p3.read()) - sc_bigint<15>(tmp_1827_cast_fu_24643_p1.read()));
}

void ShuffleNetV2::thread_tmp_1393_fu_24661_p2() {
    tmp_1393_fu_24661_p2 = (!tmp_1392_fu_24655_p2.read().is_01() || !tmp_655_cast2_reg_35764.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1392_fu_24655_p2.read()) + sc_biguint<15>(tmp_655_cast2_reg_35764.read()));
}

void ShuffleNetV2::thread_tmp_1394_cast_fu_16813_p1() {
    tmp_1394_cast_fu_16813_p1 = esl_sext<18,17>(tmp_1045_fu_16807_p2.read());
}

void ShuffleNetV2::thread_tmp_1394_fu_24673_p3() {
    tmp_1394_fu_24673_p3 = esl_concat<8,2>(tmp_664_reg_35783.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1395_cast_fu_16822_p1() {
    tmp_1395_cast_fu_16822_p1 = esl_sext<64,18>(tmp_1046_fu_16817_p2.read());
}

void ShuffleNetV2::thread_tmp_1395_fu_24680_p1() {
    tmp_1395_fu_24680_p1 = esl_sext<34,10>(tmp_1394_fu_24673_p3.read());
}

void ShuffleNetV2::thread_tmp_1396_fu_24688_p2() {
    tmp_1396_fu_24688_p2 = (!p_shl584_cast_fu_24684_p1.read().is_01() || !tmp_667_cast1_fu_24669_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl584_cast_fu_24684_p1.read()) - sc_biguint<35>(tmp_667_cast1_fu_24669_p1.read()));
}

void ShuffleNetV2::thread_tmp_1397_fu_24698_p2() {
    tmp_1397_fu_24698_p2 = (!tmp_1833_cast_fu_24694_p1.read().is_01() || !tmp_647_cast1_reg_35741.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1833_cast_fu_24694_p1.read()) + sc_biguint<36>(tmp_647_cast1_reg_35741.read()));
}

void ShuffleNetV2::thread_tmp_1398_fu_24703_p1() {
    tmp_1398_fu_24703_p1 = tmp_1397_fu_24698_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1399_fu_24707_p1() {
    tmp_1399_fu_24707_p1 = tmp_1397_fu_24698_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_139_cast1_fu_8766_p1() {
    tmp_139_cast1_fu_8766_p1 = esl_zext<11,5>(ci14_reg_3378.read());
}

void ShuffleNetV2::thread_tmp_139_cast_fu_8770_p1() {
    tmp_139_cast_fu_8770_p1 = esl_zext<14,5>(ci14_reg_3378.read());
}

void ShuffleNetV2::thread_tmp_139_fu_8947_p2() {
    tmp_139_fu_8947_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_536_fu_8942_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1400_fu_24722_p2() {
    tmp_1400_fu_24722_p2 = (!p_shl583_cast_fu_24715_p3.read().is_01() || !tmp_1398_reg_35794.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl583_cast_fu_24715_p3.read()) - sc_biguint<11>(tmp_1398_reg_35794.read()));
}

void ShuffleNetV2::thread_tmp_1401_fu_24727_p2() {
    tmp_1401_fu_24727_p2 = (!tmp_1400_fu_24722_p2.read().is_01() || !tmp_655_cast1_reg_35759.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1400_fu_24722_p2.read()) + sc_biguint<11>(tmp_655_cast1_reg_35759.read()));
}

void ShuffleNetV2::thread_tmp_1402_fu_25124_p1() {
    tmp_1402_fu_25124_p1 = k54_reg_6269.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1403_cast_fu_16827_p1() {
    tmp_1403_cast_fu_16827_p1 = esl_sext<64,13>(tmp_1050_reg_33264.read());
}

void ShuffleNetV2::thread_tmp_1403_fu_24941_p1() {
    tmp_1403_fu_24941_p1 = i150_reg_6247.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1404_fu_25046_p3() {
    tmp_1404_fu_25046_p3 = esl_concat<12,5>(tmp_674_reg_35904.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1405_fu_25057_p3() {
    tmp_1405_fu_25057_p3 = esl_concat<12,3>(tmp_674_reg_35904.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1406_fu_25068_p2() {
    tmp_1406_fu_25068_p2 = (!p_shl589_cast_fu_25053_p1.read().is_01() || !p_shl590_cast_fu_25064_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl589_cast_fu_25053_p1.read()) - sc_biguint<18>(p_shl590_cast_fu_25064_p1.read()));
}

void ShuffleNetV2::thread_tmp_1407_fu_25078_p2() {
    tmp_1407_fu_25078_p2 = (!tmp_656_cast_reg_35886.read().is_01() || !tmp_1844_cast_fu_25074_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_656_cast_reg_35886.read()) + sc_bigint<19>(tmp_1844_cast_fu_25074_p1.read()));
}

void ShuffleNetV2::thread_tmp_1408_fu_24994_p2() {
    tmp_1408_fu_24994_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i150_reg_6247.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1409_fu_25015_p3() {
    tmp_1409_fu_25015_p3 = esl_concat<8,7>(tmp_676_fu_25010_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_140_cast1_fu_8641_p1() {
    tmp_140_cast1_fu_8641_p1 = esl_zext<15,5>(w_28_fu_8635_p2.read());
}

void ShuffleNetV2::thread_tmp_140_cast_fu_8645_p1() {
    tmp_140_cast_fu_8645_p1 = esl_zext<14,5>(w_28_fu_8635_p2.read());
}

void ShuffleNetV2::thread_tmp_140_fu_9254_p3() {
    tmp_140_fu_9254_p3 = esl_concat<10,4>(tmp_600_fu_9249_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1410_fu_25023_p3() {
    tmp_1410_fu_25023_p3 = esl_concat<8,5>(tmp_676_fu_25010_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1411_fu_25035_p2() {
    tmp_1411_fu_25035_p2 = (!tmp_1409_fu_25015_p3.read().is_01() || !p_shl588_cast_fu_25031_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1409_fu_25015_p3.read()) - sc_bigint<15>(p_shl588_cast_fu_25031_p1.read()));
}

void ShuffleNetV2::thread_tmp_1412_fu_25041_p2() {
    tmp_1412_fu_25041_p2 = (!tmp_658_cast_reg_35891.read().is_01() || !tmp_1411_fu_25035_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_658_cast_reg_35891.read()) + sc_biguint<15>(tmp_1411_fu_25035_p2.read()));
}

void ShuffleNetV2::thread_tmp_1413_fu_25556_p1() {
    tmp_1413_fu_25556_p1 = co152_reg_6346.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1414_fu_25572_p2() {
    tmp_1414_fu_25572_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co152_reg_6346.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1415_fu_25474_p1() {
    tmp_1415_fu_25474_p1 = k56_reg_6335.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1416_fu_25270_p1() {
    tmp_1416_fu_25270_p1 = i156_reg_6313.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1417_fu_25327_p3() {
    tmp_1417_fu_25327_p3 = esl_concat<10,2>(tmp_691_reg_36023.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1418_fu_25338_p2() {
    tmp_1418_fu_25338_p2 = (!p_shl594_cast_fu_25334_p1.read().is_01() || !tmp_692_cast_fu_25324_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl594_cast_fu_25334_p1.read()) - sc_biguint<13>(tmp_692_cast_fu_25324_p1.read()));
}

void ShuffleNetV2::thread_tmp_1419_fu_25344_p2() {
    tmp_1419_fu_25344_p2 = (!tmp_1418_fu_25338_p2.read().is_01() || !tmp_677_cast_reg_35992.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1418_fu_25338_p2.read()) + sc_biguint<13>(tmp_677_cast_reg_35992.read()));
}

void ShuffleNetV2::thread_tmp_141_fu_8841_p2() {
    tmp_141_fu_8841_p2 = (!co25_cast_fu_8825_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co25_cast_fu_8825_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_1420_fu_25361_p2() {
    tmp_1420_fu_25361_p2 = (!p_shl593_cast_fu_25353_p3.read().is_01() || !tmp_1861_cast_fu_25349_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl593_cast_fu_25353_p3.read()) - sc_bigint<15>(tmp_1861_cast_fu_25349_p1.read()));
}

void ShuffleNetV2::thread_tmp_1421_fu_25367_p2() {
    tmp_1421_fu_25367_p2 = (!tmp_1420_fu_25361_p2.read().is_01() || !tmp_686_cast_reg_36010.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1420_fu_25361_p2.read()) + sc_biguint<15>(tmp_686_cast_reg_36010.read()));
}

void ShuffleNetV2::thread_tmp_1422_fu_25379_p3() {
    tmp_1422_fu_25379_p3 = esl_concat<8,2>(tmp_693_reg_36029.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1423_fu_25386_p1() {
    tmp_1423_fu_25386_p1 = esl_sext<34,10>(tmp_1422_fu_25379_p3.read());
}

void ShuffleNetV2::thread_tmp_1424_cast_fu_17047_p1() {
    tmp_1424_cast_fu_17047_p1 = esl_zext<64,15>(tmp_1070_fu_17042_p2.read());
}

void ShuffleNetV2::thread_tmp_1424_fu_25394_p2() {
    tmp_1424_fu_25394_p2 = (!p_shl592_cast_fu_25390_p1.read().is_01() || !tmp_694_cast_fu_25375_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl592_cast_fu_25390_p1.read()) - sc_biguint<35>(tmp_694_cast_fu_25375_p1.read()));
}

void ShuffleNetV2::thread_tmp_1425_cast_fu_17249_p1() {
    tmp_1425_cast_fu_17249_p1 = esl_zext<64,15>(tmp_1071_fu_17244_p2.read());
}

void ShuffleNetV2::thread_tmp_1425_fu_25404_p2() {
    tmp_1425_fu_25404_p2 = (!tmp_1867_cast_fu_25400_p1.read().is_01() || !tmp_677_cast1_reg_35987.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1867_cast_fu_25400_p1.read()) + sc_biguint<36>(tmp_677_cast1_reg_35987.read()));
}

void ShuffleNetV2::thread_tmp_1426_cast_fu_17259_p1() {
    tmp_1426_cast_fu_17259_p1 = esl_zext<64,14>(tmp_1072_reg_33408.read());
}

void ShuffleNetV2::thread_tmp_1426_fu_25409_p1() {
    tmp_1426_fu_25409_p1 = tmp_1425_fu_25404_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1427_fu_25413_p1() {
    tmp_1427_fu_25413_p1 = tmp_1425_fu_25404_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1428_fu_25428_p2() {
    tmp_1428_fu_25428_p2 = (!p_shl591_cast_fu_25421_p3.read().is_01() || !tmp_1426_reg_36040.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl591_cast_fu_25421_p3.read()) - sc_biguint<11>(tmp_1426_reg_36040.read()));
}

void ShuffleNetV2::thread_tmp_1429_fu_25433_p2() {
    tmp_1429_fu_25433_p2 = (!tmp_1428_fu_25428_p2.read().is_01() || !tmp_686_cast1_reg_36005.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1428_fu_25428_p2.read()) + sc_biguint<11>(tmp_686_cast1_reg_36005.read()));
}

void ShuffleNetV2::thread_tmp_142_cast_fu_8847_p1() {
    tmp_142_cast_fu_8847_p1 = esl_zext<10,7>(tmp_141_fu_8841_p2.read());
}

void ShuffleNetV2::thread_tmp_142_fu_9266_p3() {
    tmp_142_fu_9266_p3 = esl_concat<10,1>(tmp_600_fu_9249_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1430_fu_25914_p3() {
    tmp_1430_fu_25914_p3 = esl_concat<8,3>(tmp_695_fu_25908_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1431_fu_25926_p3() {
    tmp_1431_fu_25926_p3 = esl_concat<8,1>(tmp_695_fu_25908_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1432_fu_25938_p2() {
    tmp_1432_fu_25938_p2 = (!p_shl601_cast_fu_25922_p1.read().is_01() || !p_shl602_cast_fu_25934_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl601_cast_fu_25922_p1.read()) - sc_biguint<12>(p_shl602_cast_fu_25934_p1.read()));
}

void ShuffleNetV2::thread_tmp_1433_cast_fu_17511_p1() {
    tmp_1433_cast_fu_17511_p1 = esl_sext<18,17>(tmp_1077_fu_17505_p2.read());
}

void ShuffleNetV2::thread_tmp_1433_fu_25948_p3() {
    tmp_1433_fu_25948_p3 = esl_concat<7,3>(co154_reg_6401.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1434_cast_fu_17520_p1() {
    tmp_1434_cast_fu_17520_p1 = esl_sext<64,18>(tmp_1078_fu_17515_p2.read());
}

void ShuffleNetV2::thread_tmp_1434_fu_25960_p3() {
    tmp_1434_fu_25960_p3 = esl_concat<7,1>(co154_reg_6401.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1435_fu_25972_p2() {
    tmp_1435_fu_25972_p2 = (!p_shl599_cast_fu_25956_p1.read().is_01() || !p_shl600_cast_fu_25968_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl599_cast_fu_25956_p1.read()) - sc_biguint<11>(p_shl600_cast_fu_25968_p1.read()));
}

void ShuffleNetV2::thread_tmp_1436_fu_25826_p1() {
    tmp_1436_fu_25826_p1 = k58_reg_6390.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1437_fu_25643_p1() {
    tmp_1437_fu_25643_p1 = i158_reg_6368.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1438_fu_25748_p3() {
    tmp_1438_fu_25748_p3 = esl_concat<12,5>(tmp_703_reg_36150.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1439_fu_25759_p3() {
    tmp_1439_fu_25759_p3 = esl_concat<12,3>(tmp_703_reg_36150.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_143_cast_fu_8869_p1() {
    tmp_143_cast_fu_8869_p1 = esl_zext<8,5>(co25_reg_3401.read());
}

void ShuffleNetV2::thread_tmp_143_fu_9425_p3() {
    tmp_143_fu_9425_p3 = esl_concat<10,1>(tmp_616_fu_9412_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1440_fu_25770_p2() {
    tmp_1440_fu_25770_p2 = (!p_shl597_cast_fu_25755_p1.read().is_01() || !p_shl598_cast_fu_25766_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl597_cast_fu_25755_p1.read()) - sc_biguint<18>(p_shl598_cast_fu_25766_p1.read()));
}

void ShuffleNetV2::thread_tmp_1441_fu_25780_p2() {
    tmp_1441_fu_25780_p2 = (!tmp_687_cast_reg_36132.read().is_01() || !tmp_1884_cast_fu_25776_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_687_cast_reg_36132.read()) + sc_bigint<19>(tmp_1884_cast_fu_25776_p1.read()));
}

void ShuffleNetV2::thread_tmp_1442_cast_fu_17525_p1() {
    tmp_1442_cast_fu_17525_p1 = esl_sext<64,13>(tmp_1082_reg_33468.read());
}

void ShuffleNetV2::thread_tmp_1442_fu_25696_p2() {
    tmp_1442_fu_25696_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i158_reg_6368.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1443_fu_25717_p3() {
    tmp_1443_fu_25717_p3 = esl_concat<8,7>(tmp_705_fu_25712_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1444_fu_25725_p3() {
    tmp_1444_fu_25725_p3 = esl_concat<8,5>(tmp_705_fu_25712_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1445_fu_25737_p2() {
    tmp_1445_fu_25737_p2 = (!tmp_1443_fu_25717_p3.read().is_01() || !p_shl596_cast_fu_25733_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1443_fu_25717_p3.read()) - sc_bigint<15>(p_shl596_cast_fu_25733_p1.read()));
}

void ShuffleNetV2::thread_tmp_1446_fu_25743_p2() {
    tmp_1446_fu_25743_p2 = (!tmp_689_cast1_reg_36137.read().is_01() || !tmp_1445_fu_25737_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_689_cast1_reg_36137.read()) + sc_biguint<15>(tmp_1445_fu_25737_p2.read()));
}

void ShuffleNetV2::thread_tmp_1447_fu_26119_p1() {
    tmp_1447_fu_26119_p1 = co156_reg_6434.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1448_fu_26135_p2() {
    tmp_1448_fu_26135_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co156_reg_6434.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1449_fu_26002_p2() {
    tmp_1449_fu_26002_p2 = (!tmp_707_cast_fu_25998_p1.read().is_01() || !tmp_1877_cast_reg_36220.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_707_cast_fu_25998_p1.read()) + sc_bigint<12>(tmp_1877_cast_reg_36220.read()));
}

void ShuffleNetV2::thread_tmp_144_fu_9014_p2() {
    tmp_144_fu_9014_p2 = (!i11_cast_fu_8998_p1.read().is_01() || !ap_const_lv8_A8.is_01())? sc_lv<8>(): (sc_biguint<8>(i11_cast_fu_8998_p1.read()) + sc_bigint<8>(ap_const_lv8_A8));
}

void ShuffleNetV2::thread_tmp_1450_fu_26007_p1() {
    tmp_1450_fu_26007_p1 = tmp_1449_fu_26002_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1451_cast_fu_17778_p1() {
    tmp_1451_cast_fu_17778_p1 = esl_sext<15,12>(tmp_1088_fu_17773_p2.read());
}

void ShuffleNetV2::thread_tmp_1451_fu_26027_p2() {
    tmp_1451_fu_26027_p2 = (!p_shl605_cast_fu_26011_p3.read().is_01() || !p_shl606_cast_fu_26019_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl605_cast_fu_26011_p3.read()) - sc_biguint<13>(p_shl606_cast_fu_26019_p3.read()));
}

void ShuffleNetV2::thread_tmp_1452_fu_26033_p2() {
    tmp_1452_fu_26033_p2 = (!tmp_707_cast1_fu_25994_p1.read().is_01() || !tmp_1874_cast_reg_36215.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_707_cast1_fu_25994_p1.read()) + sc_bigint<13>(tmp_1874_cast_reg_36215.read()));
}

void ShuffleNetV2::thread_tmp_1453_fu_26038_p1() {
    tmp_1453_fu_26038_p1 = tmp_1452_fu_26033_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1454_cast_fu_17850_p1() {
    tmp_1454_cast_fu_17850_p1 = esl_zext<64,15>(tmp_1091_reg_33593.read());
}

void ShuffleNetV2::thread_tmp_1454_fu_26058_p2() {
    tmp_1454_fu_26058_p2 = (!p_shl603_cast_fu_26042_p3.read().is_01() || !p_shl604_cast_fu_26050_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl603_cast_fu_26042_p3.read()) - sc_biguint<14>(p_shl604_cast_fu_26050_p3.read()));
}

void ShuffleNetV2::thread_tmp_1455_fu_26084_p2() {
    tmp_1455_fu_26084_p2 = (!tmp_1451_reg_36233.read().is_01() || !tmp_712_cast2_fu_26080_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1451_reg_36233.read()) + sc_biguint<13>(tmp_712_cast2_fu_26080_p1.read()));
}

void ShuffleNetV2::thread_tmp_1456_fu_26089_p2() {
    tmp_1456_fu_26089_p2 = (!tmp_1454_reg_36238.read().is_01() || !tmp_712_cast1_fu_26076_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1454_reg_36238.read()) + sc_biguint<14>(tmp_712_cast1_fu_26076_p1.read()));
}

void ShuffleNetV2::thread_tmp_1457_cast_fu_17833_p1() {
    tmp_1457_cast_fu_17833_p1 = esl_sext<36,35>(tmp_1094_fu_17827_p2.read());
}

void ShuffleNetV2::thread_tmp_1457_fu_26389_p1() {
    tmp_1457_fu_26389_p1 = k60_reg_6478.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1458_fu_26206_p1() {
    tmp_1458_fu_26206_p1 = i162_reg_6456.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1459_fu_26311_p3() {
    tmp_1459_fu_26311_p3 = esl_concat<12,5>(tmp_720_reg_36310.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_145_fu_9020_p1() {
    tmp_145_fu_9020_p1 = esl_zext<64,8>(tmp_144_fu_9014_p2.read());
}

void ShuffleNetV2::thread_tmp_1460_fu_26322_p3() {
    tmp_1460_fu_26322_p3 = esl_concat<12,3>(tmp_720_reg_36310.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1461_cast_fu_17871_p1() {
    tmp_1461_cast_fu_17871_p1 = esl_zext<64,10>(tmp_1099_reg_33613.read());
}

void ShuffleNetV2::thread_tmp_1461_fu_26333_p2() {
    tmp_1461_fu_26333_p2 = (!p_shl609_cast_fu_26318_p1.read().is_01() || !p_shl610_cast_fu_26329_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl609_cast_fu_26318_p1.read()) - sc_biguint<18>(p_shl610_cast_fu_26329_p1.read()));
}

void ShuffleNetV2::thread_tmp_1462_fu_26343_p2() {
    tmp_1462_fu_26343_p2 = (!tmp_708_cast_reg_36292.read().is_01() || !tmp_1911_cast_fu_26339_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_708_cast_reg_36292.read()) + sc_bigint<19>(tmp_1911_cast_fu_26339_p1.read()));
}

void ShuffleNetV2::thread_tmp_1463_fu_26259_p2() {
    tmp_1463_fu_26259_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i162_reg_6456.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1464_fu_26280_p3() {
    tmp_1464_fu_26280_p3 = esl_concat<8,7>(tmp_722_fu_26275_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1465_fu_26288_p3() {
    tmp_1465_fu_26288_p3 = esl_concat<8,5>(tmp_722_fu_26275_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1466_fu_26300_p2() {
    tmp_1466_fu_26300_p2 = (!tmp_1464_fu_26280_p3.read().is_01() || !p_shl608_cast_fu_26296_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1464_fu_26280_p3.read()) - sc_bigint<15>(p_shl608_cast_fu_26296_p1.read()));
}

void ShuffleNetV2::thread_tmp_1467_fu_26306_p2() {
    tmp_1467_fu_26306_p2 = (!tmp_711_cast_reg_36297.read().is_01() || !tmp_1466_fu_26300_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_711_cast_reg_36297.read()) + sc_biguint<15>(tmp_1466_fu_26300_p2.read()));
}

void ShuffleNetV2::thread_tmp_1468_fu_26813_p1() {
    tmp_1468_fu_26813_p1 = co160_reg_6555.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1469_fu_26829_p2() {
    tmp_1469_fu_26829_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co160_reg_6555.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_146_fu_9025_p1() {
    tmp_146_fu_9025_p1 = esl_zext<64,5>(i11_reg_3434.read());
}

void ShuffleNetV2::thread_tmp_1470_fu_26731_p1() {
    tmp_1470_fu_26731_p1 = k62_reg_6544.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1471_cast_fu_18221_p1() {
    tmp_1471_cast_fu_18221_p1 = esl_sext<18,17>(tmp_1107_fu_18215_p2.read());
}

void ShuffleNetV2::thread_tmp_1471_fu_26527_p1() {
    tmp_1471_fu_26527_p1 = i168_reg_6522.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1472_cast_fu_18230_p1() {
    tmp_1472_cast_fu_18230_p1 = esl_sext<64,18>(tmp_1108_fu_18225_p2.read());
}

void ShuffleNetV2::thread_tmp_1472_fu_26584_p3() {
    tmp_1472_fu_26584_p3 = esl_concat<10,2>(tmp_737_reg_36429.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1473_fu_26595_p2() {
    tmp_1473_fu_26595_p2 = (!p_shl614_cast_fu_26591_p1.read().is_01() || !tmp_738_cast_fu_26581_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl614_cast_fu_26591_p1.read()) - sc_biguint<13>(tmp_738_cast_fu_26581_p1.read()));
}

void ShuffleNetV2::thread_tmp_1474_fu_26601_p2() {
    tmp_1474_fu_26601_p2 = (!tmp_1473_fu_26595_p2.read().is_01() || !tmp_723_cast_reg_36398.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1473_fu_26595_p2.read()) + sc_biguint<13>(tmp_723_cast_reg_36398.read()));
}

void ShuffleNetV2::thread_tmp_1475_fu_26618_p2() {
    tmp_1475_fu_26618_p2 = (!p_shl613_cast_fu_26610_p3.read().is_01() || !tmp_1928_cast_fu_26606_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl613_cast_fu_26610_p3.read()) - sc_bigint<15>(tmp_1928_cast_fu_26606_p1.read()));
}

void ShuffleNetV2::thread_tmp_1476_fu_26624_p2() {
    tmp_1476_fu_26624_p2 = (!tmp_1475_fu_26618_p2.read().is_01() || !tmp_732_cast_reg_36416.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1475_fu_26618_p2.read()) + sc_biguint<15>(tmp_732_cast_reg_36416.read()));
}

void ShuffleNetV2::thread_tmp_1477_fu_26636_p3() {
    tmp_1477_fu_26636_p3 = esl_concat<8,2>(tmp_739_reg_36435.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1478_fu_26643_p1() {
    tmp_1478_fu_26643_p1 = esl_sext<34,10>(tmp_1477_fu_26636_p3.read());
}

void ShuffleNetV2::thread_tmp_1479_fu_26651_p2() {
    tmp_1479_fu_26651_p2 = (!p_shl612_cast_fu_26647_p1.read().is_01() || !tmp_740_cast_fu_26632_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl612_cast_fu_26647_p1.read()) - sc_biguint<35>(tmp_740_cast_fu_26632_p1.read()));
}

void ShuffleNetV2::thread_tmp_147_cast1_fu_8907_p1() {
    tmp_147_cast1_fu_8907_p1 = esl_zext<9,2>(w26_reg_3412.read());
}

void ShuffleNetV2::thread_tmp_147_cast2_fu_8911_p1() {
    tmp_147_cast2_fu_8911_p1 = esl_zext<10,2>(w26_reg_3412.read());
}

void ShuffleNetV2::thread_tmp_147_cast_fu_7546_p1() {
    tmp_147_cast_fu_7546_p1 = esl_sext<12,10>(tmp_98_fu_7540_p2.read());
}

void ShuffleNetV2::thread_tmp_147_fu_9456_p3() {
    tmp_147_fu_9456_p3 = esl_concat<11,1>(tmp_620_fu_9443_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1480_cast_fu_18235_p1() {
    tmp_1480_cast_fu_18235_p1 = esl_sext<64,13>(tmp_1112_reg_33714.read());
}

void ShuffleNetV2::thread_tmp_1480_fu_26661_p2() {
    tmp_1480_fu_26661_p2 = (!tmp_1934_cast_fu_26657_p1.read().is_01() || !tmp_723_cast1_reg_36393.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1934_cast_fu_26657_p1.read()) + sc_biguint<36>(tmp_723_cast1_reg_36393.read()));
}

void ShuffleNetV2::thread_tmp_1481_fu_26666_p1() {
    tmp_1481_fu_26666_p1 = tmp_1480_fu_26661_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1482_fu_26670_p1() {
    tmp_1482_fu_26670_p1 = tmp_1480_fu_26661_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1483_fu_26685_p2() {
    tmp_1483_fu_26685_p2 = (!p_shl611_cast_fu_26678_p3.read().is_01() || !tmp_1481_reg_36446.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl611_cast_fu_26678_p3.read()) - sc_biguint<11>(tmp_1481_reg_36446.read()));
}

void ShuffleNetV2::thread_tmp_1484_fu_26690_p2() {
    tmp_1484_fu_26690_p2 = (!tmp_1483_fu_26685_p2.read().is_01() || !tmp_732_cast1_reg_36411.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1483_fu_26685_p2.read()) + sc_biguint<11>(tmp_732_cast1_reg_36411.read()));
}

void ShuffleNetV2::thread_tmp_1485_fu_27169_p3() {
    tmp_1485_fu_27169_p3 = esl_concat<7,3>(co162_reg_6610.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1486_fu_27181_p3() {
    tmp_1486_fu_27181_p3 = esl_concat<7,1>(co162_reg_6610.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1487_fu_27193_p2() {
    tmp_1487_fu_27193_p2 = (!p_shl619_cast_fu_27177_p1.read().is_01() || !p_shl620_cast_fu_27189_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl619_cast_fu_27177_p1.read()) - sc_biguint<11>(p_shl620_cast_fu_27189_p1.read()));
}

void ShuffleNetV2::thread_tmp_1488_fu_27091_p1() {
    tmp_1488_fu_27091_p1 = k64_reg_6599.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1489_fu_26900_p1() {
    tmp_1489_fu_26900_p1 = i170_reg_6577.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_148_cast1_fu_8971_p1() {
    tmp_148_cast1_fu_8971_p1 = esl_zext<9,2>(h27_reg_3423.read());
}

void ShuffleNetV2::thread_tmp_148_cast_fu_8975_p1() {
    tmp_148_cast_fu_8975_p1 = esl_zext<15,2>(h27_reg_3423.read());
}

void ShuffleNetV2::thread_tmp_148_fu_9773_p3() {
    tmp_148_fu_9773_p3 = esl_concat<10,2>(tmp_658_fu_9764_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1490_fu_27005_p3() {
    tmp_1490_fu_27005_p3 = esl_concat<11,5>(tmp_747_reg_36556.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1491_fu_27012_p1() {
    tmp_1491_fu_27012_p1 = esl_sext<17,16>(tmp_1490_fu_27005_p3.read());
}

void ShuffleNetV2::thread_tmp_1492_fu_27020_p3() {
    tmp_1492_fu_27020_p3 = esl_concat<11,3>(tmp_747_reg_36556.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1493_fu_27027_p1() {
    tmp_1493_fu_27027_p1 = esl_sext<15,14>(tmp_1492_fu_27020_p3.read());
}

void ShuffleNetV2::thread_tmp_1494_fu_27035_p2() {
    tmp_1494_fu_27035_p2 = (!p_shl617_cast_fu_27016_p1.read().is_01() || !p_shl618_cast_fu_27031_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl617_cast_fu_27016_p1.read()) - sc_biguint<18>(p_shl618_cast_fu_27031_p1.read()));
}

void ShuffleNetV2::thread_tmp_1495_fu_27045_p2() {
    tmp_1495_fu_27045_p2 = (!tmp_733_cast_reg_36538.read().is_01() || !tmp_1950_cast_fu_27041_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_733_cast_reg_36538.read()) + sc_bigint<19>(tmp_1950_cast_fu_27041_p1.read()));
}

void ShuffleNetV2::thread_tmp_1496_fu_26953_p2() {
    tmp_1496_fu_26953_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i170_reg_6577.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1497_fu_26974_p3() {
    tmp_1497_fu_26974_p3 = esl_concat<8,7>(tmp_749_fu_26969_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1498_fu_26982_p3() {
    tmp_1498_fu_26982_p3 = esl_concat<8,5>(tmp_749_fu_26969_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1499_fu_26994_p2() {
    tmp_1499_fu_26994_p2 = (!tmp_1497_fu_26974_p3.read().is_01() || !p_shl616_cast_fu_26990_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1497_fu_26974_p3.read()) - sc_bigint<15>(p_shl616_cast_fu_26990_p1.read()));
}

void ShuffleNetV2::thread_tmp_149_fu_9169_p3() {
    tmp_149_fu_9169_p3 = esl_concat<2,5>(ap_const_lv2_2, i13_reg_3468.read());
}

void ShuffleNetV2::thread_tmp_1500_fu_27000_p2() {
    tmp_1500_fu_27000_p2 = (!tmp_735_cast1_reg_36543.read().is_01() || !tmp_1499_fu_26994_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_735_cast1_reg_36543.read()) + sc_biguint<15>(tmp_1499_fu_26994_p2.read()));
}

void ShuffleNetV2::thread_tmp_1501_cast_fu_18451_p1() {
    tmp_1501_cast_fu_18451_p1 = esl_zext<64,15>(tmp_1132_fu_18446_p2.read());
}

void ShuffleNetV2::thread_tmp_1501_fu_27302_p3() {
    tmp_1501_fu_27302_p3 = esl_concat<8,3>(tmp_750_fu_27296_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1502_cast_fu_18663_p1() {
    tmp_1502_cast_fu_18663_p1 = esl_zext<64,14>(tmp_1133_reg_33853.read());
}

void ShuffleNetV2::thread_tmp_1502_fu_27314_p3() {
    tmp_1502_fu_27314_p3 = esl_concat<8,1>(tmp_750_fu_27296_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1503_cast_fu_18658_p1() {
    tmp_1503_cast_fu_18658_p1 = esl_zext<64,15>(tmp_1134_fu_18653_p2.read());
}

void ShuffleNetV2::thread_tmp_1503_fu_27326_p2() {
    tmp_1503_fu_27326_p2 = (!p_shl625_cast_fu_27310_p1.read().is_01() || !p_shl626_cast_fu_27322_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl625_cast_fu_27310_p1.read()) - sc_biguint<12>(p_shl626_cast_fu_27322_p1.read()));
}

void ShuffleNetV2::thread_tmp_1504_fu_27336_p3() {
    tmp_1504_fu_27336_p3 = esl_concat<7,3>(co164_reg_6643.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1505_fu_27348_p3() {
    tmp_1505_fu_27348_p3 = esl_concat<7,1>(co164_reg_6643.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1506_fu_27360_p2() {
    tmp_1506_fu_27360_p2 = (!p_shl623_cast_fu_27344_p1.read().is_01() || !p_shl624_cast_fu_27356_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl623_cast_fu_27344_p1.read()) - sc_biguint<11>(p_shl624_cast_fu_27356_p1.read()));
}

void ShuffleNetV2::thread_tmp_1507_fu_27219_p2() {
    tmp_1507_fu_27219_p2 = (!tmp_1941_cast_reg_36621.read().is_01() || !tmp_751_cast_fu_27215_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1941_cast_reg_36621.read()) + sc_biguint<12>(tmp_751_cast_fu_27215_p1.read()));
}

void ShuffleNetV2::thread_tmp_1508_fu_27224_p1() {
    tmp_1508_fu_27224_p1 = tmp_1507_fu_27219_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1509_fu_27236_p3() {
    tmp_1509_fu_27236_p3 = esl_concat<12,1>(tmp_1507_fu_27219_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_150_fu_9181_p1() {
    tmp_150_fu_9181_p1 = esl_zext<64,8>(tmp_211_cast_fu_9177_p1.read());
}

void ShuffleNetV2::thread_tmp_1510_cast_fu_18915_p1() {
    tmp_1510_cast_fu_18915_p1 = esl_sext<18,17>(tmp_1139_fu_18909_p2.read());
}

void ShuffleNetV2::thread_tmp_1510_fu_27248_p2() {
    tmp_1510_fu_27248_p2 = (!p_shl621_cast_fu_27228_p3.read().is_01() || !p_shl622_cast_fu_27244_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl621_cast_fu_27228_p3.read()) - sc_bigint<14>(p_shl622_cast_fu_27244_p1.read()));
}

void ShuffleNetV2::thread_tmp_1511_cast_fu_18924_p1() {
    tmp_1511_cast_fu_18924_p1 = esl_sext<64,18>(tmp_1140_fu_18919_p2.read());
}

void ShuffleNetV2::thread_tmp_1511_fu_27507_p1() {
    tmp_1511_fu_27507_p1 = co166_reg_6676.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1512_fu_27523_p2() {
    tmp_1512_fu_27523_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co166_reg_6676.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1513_fu_27390_p2() {
    tmp_1513_fu_27390_p2 = (!tmp_753_cast2_fu_27386_p1.read().is_01() || !tmp_1961_cast_reg_36665.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_753_cast2_fu_27386_p1.read()) + sc_bigint<13>(tmp_1961_cast_reg_36665.read()));
}

void ShuffleNetV2::thread_tmp_1514_fu_27395_p1() {
    tmp_1514_fu_27395_p1 = tmp_1513_fu_27390_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1515_fu_27415_p2() {
    tmp_1515_fu_27415_p2 = (!p_shl629_cast_fu_27399_p3.read().is_01() || !p_shl630_cast_fu_27407_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl629_cast_fu_27399_p3.read()) - sc_biguint<14>(p_shl630_cast_fu_27407_p3.read()));
}

void ShuffleNetV2::thread_tmp_1516_fu_27421_p2() {
    tmp_1516_fu_27421_p2 = (!tmp_753_cast1_fu_27382_p1.read().is_01() || !tmp_1964_cast_reg_36670.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_753_cast1_fu_27382_p1.read()) + sc_bigint<12>(tmp_1964_cast_reg_36670.read()));
}

void ShuffleNetV2::thread_tmp_1517_fu_27426_p1() {
    tmp_1517_fu_27426_p1 = tmp_1516_fu_27421_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1518_fu_27446_p2() {
    tmp_1518_fu_27446_p2 = (!p_shl627_cast_fu_27430_p3.read().is_01() || !p_shl628_cast_fu_27438_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl627_cast_fu_27430_p3.read()) - sc_biguint<13>(p_shl628_cast_fu_27438_p3.read()));
}

void ShuffleNetV2::thread_tmp_1519_cast_fu_18929_p1() {
    tmp_1519_cast_fu_18929_p1 = esl_sext<64,13>(tmp_1144_reg_33918.read());
}

void ShuffleNetV2::thread_tmp_1519_fu_27270_p2() {
    tmp_1519_fu_27270_p2 = (!tmp_1510_reg_36634.read().is_01() || !tmp_755_cast_fu_27266_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1510_reg_36634.read()) + sc_biguint<14>(tmp_755_cast_fu_27266_p1.read()));
}

void ShuffleNetV2::thread_tmp_151_fu_9186_p1() {
    tmp_151_fu_9186_p1 = esl_zext<64,5>(i13_reg_3468.read());
}

void ShuffleNetV2::thread_tmp_1520_fu_27472_p2() {
    tmp_1520_fu_27472_p2 = (!tmp_1515_reg_36683.read().is_01() || !tmp_760_cast_fu_27468_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1515_reg_36683.read()) + sc_biguint<14>(tmp_760_cast_fu_27468_p1.read()));
}

void ShuffleNetV2::thread_tmp_1521_fu_27482_p2() {
    tmp_1521_fu_27482_p2 = (!tmp_1518_reg_36688.read().is_01() || !tmp_760_cast1_fu_27464_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1518_reg_36688.read()) + sc_biguint<13>(tmp_760_cast1_fu_27464_p1.read()));
}

void ShuffleNetV2::thread_tmp_1522_fu_27773_p1() {
    tmp_1522_fu_27773_p1 = k66_reg_6720.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1523_fu_27594_p1() {
    tmp_1523_fu_27594_p1 = i174_reg_6698.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1524_fu_27699_p3() {
    tmp_1524_fu_27699_p3 = esl_concat<13,5>(tmp_767_reg_36760.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1525_fu_27710_p3() {
    tmp_1525_fu_27710_p3 = esl_concat<13,3>(tmp_767_reg_36760.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1526_fu_27721_p2() {
    tmp_1526_fu_27721_p2 = (!p_shl633_cast_fu_27706_p1.read().is_01() || !p_shl634_cast_fu_27717_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl633_cast_fu_27706_p1.read()) - sc_biguint<19>(p_shl634_cast_fu_27717_p1.read()));
}

void ShuffleNetV2::thread_tmp_1527_fu_27727_p2() {
    tmp_1527_fu_27727_p2 = (!tmp_756_cast_reg_36742.read().is_01() || !tmp_1526_fu_27721_p2.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_756_cast_reg_36742.read()) + sc_biguint<19>(tmp_1526_fu_27721_p2.read()));
}

void ShuffleNetV2::thread_tmp_1528_fu_27647_p2() {
    tmp_1528_fu_27647_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i174_reg_6698.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1529_cast_fu_19190_p1() {
    tmp_1529_cast_fu_19190_p1 = esl_sext<15,12>(tmp_1151_fu_19185_p2.read());
}

void ShuffleNetV2::thread_tmp_1529_fu_27668_p3() {
    tmp_1529_fu_27668_p3 = esl_concat<8,7>(tmp_769_fu_27663_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_152_cast1_fu_9130_p1() {
    tmp_152_cast1_fu_9130_p1 = esl_zext<11,5>(ci16_reg_3457.read());
}

void ShuffleNetV2::thread_tmp_152_cast_fu_9134_p1() {
    tmp_152_cast_fu_9134_p1 = esl_zext<14,5>(ci16_reg_3457.read());
}

void ShuffleNetV2::thread_tmp_152_fu_9796_p2() {
    tmp_152_fu_9796_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_662_fu_9791_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1530_fu_27676_p3() {
    tmp_1530_fu_27676_p3 = esl_concat<8,5>(tmp_769_fu_27663_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1531_fu_27688_p2() {
    tmp_1531_fu_27688_p2 = (!tmp_1529_fu_27668_p3.read().is_01() || !p_shl632_cast_fu_27684_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1529_fu_27668_p3.read()) - sc_bigint<15>(p_shl632_cast_fu_27684_p1.read()));
}

void ShuffleNetV2::thread_tmp_1532_cast_fu_19262_p1() {
    tmp_1532_cast_fu_19262_p1 = esl_zext<64,15>(tmp_1154_reg_34043.read());
}

void ShuffleNetV2::thread_tmp_1532_fu_27694_p2() {
    tmp_1532_fu_27694_p2 = (!tmp_759_cast_reg_36747.read().is_01() || !tmp_1531_fu_27688_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_759_cast_reg_36747.read()) + sc_biguint<15>(tmp_1531_fu_27688_p2.read()));
}

void ShuffleNetV2::thread_tmp_1533_fu_28213_p1() {
    tmp_1533_fu_28213_p1 = co170_reg_6797.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1534_fu_28229_p2() {
    tmp_1534_fu_28229_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co170_reg_6797.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1535_cast_fu_19245_p1() {
    tmp_1535_cast_fu_19245_p1 = esl_sext<36,35>(tmp_1157_fu_19239_p2.read());
}

void ShuffleNetV2::thread_tmp_1535_fu_28131_p1() {
    tmp_1535_fu_28131_p1 = k68_reg_6786.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1536_fu_27911_p1() {
    tmp_1536_fu_27911_p1 = i180_reg_6764.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1537_fu_27972_p3() {
    tmp_1537_fu_27972_p3 = esl_concat<9,2>(tmp_785_reg_36879.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1538_fu_27979_p1() {
    tmp_1538_fu_27979_p1 = esl_sext<12,11>(tmp_1537_fu_27972_p3.read());
}

void ShuffleNetV2::thread_tmp_1539_cast_fu_19283_p1() {
    tmp_1539_cast_fu_19283_p1 = esl_zext<64,10>(tmp_1162_reg_34063.read());
}

void ShuffleNetV2::thread_tmp_1539_fu_27987_p2() {
    tmp_1539_fu_27987_p2 = (!p_shl638_cast_fu_27983_p1.read().is_01() || !tmp_786_cast_fu_27968_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl638_cast_fu_27983_p1.read()) - sc_biguint<13>(tmp_786_cast_fu_27968_p1.read()));
}

void ShuffleNetV2::thread_tmp_153_fu_9326_p2() {
    tmp_153_fu_9326_p2 = (!co34_cast_fu_9310_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co34_cast_fu_9310_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_1540_fu_27997_p2() {
    tmp_1540_fu_27997_p2 = (!tmp_2005_cast_fu_27993_p1.read().is_01() || !tmp_770_cast_reg_36848.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_2005_cast_fu_27993_p1.read()) + sc_biguint<14>(tmp_770_cast_reg_36848.read()));
}

void ShuffleNetV2::thread_tmp_1541_fu_28006_p1() {
    tmp_1541_fu_28006_p1 = tmp_1540_fu_27997_p2.read().range(13-1, 0);
}

void ShuffleNetV2::thread_tmp_1542_fu_28018_p2() {
    tmp_1542_fu_28018_p2 = (!p_shl637_cast_fu_28010_p3.read().is_01() || !tmp_2006_cast_fu_28002_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl637_cast_fu_28010_p3.read()) - sc_bigint<15>(tmp_2006_cast_fu_28002_p1.read()));
}

void ShuffleNetV2::thread_tmp_1543_fu_28024_p2() {
    tmp_1543_fu_28024_p2 = (!tmp_1542_fu_28018_p2.read().is_01() || !tmp_779_cast_reg_36866.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1542_fu_28018_p2.read()) + sc_biguint<15>(tmp_779_cast_reg_36866.read()));
}

void ShuffleNetV2::thread_tmp_1544_fu_28036_p3() {
    tmp_1544_fu_28036_p3 = esl_concat<8,2>(tmp_788_reg_36885.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1545_fu_28043_p1() {
    tmp_1545_fu_28043_p1 = esl_sext<34,10>(tmp_1544_fu_28036_p3.read());
}

void ShuffleNetV2::thread_tmp_1546_fu_28051_p2() {
    tmp_1546_fu_28051_p2 = (!p_shl636_cast_fu_28047_p1.read().is_01() || !tmp_789_cast_fu_28032_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl636_cast_fu_28047_p1.read()) - sc_biguint<35>(tmp_789_cast_fu_28032_p1.read()));
}

void ShuffleNetV2::thread_tmp_1547_fu_28061_p2() {
    tmp_1547_fu_28061_p2 = (!tmp_2012_cast_fu_28057_p1.read().is_01() || !tmp_770_cast1_reg_36843.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2012_cast_fu_28057_p1.read()) + sc_biguint<36>(tmp_770_cast1_reg_36843.read()));
}

void ShuffleNetV2::thread_tmp_1548_fu_28066_p1() {
    tmp_1548_fu_28066_p1 = tmp_1547_fu_28061_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1549_cast_fu_19633_p1() {
    tmp_1549_cast_fu_19633_p1 = esl_sext<18,17>(tmp_1170_fu_19627_p2.read());
}

void ShuffleNetV2::thread_tmp_1549_fu_28070_p1() {
    tmp_1549_fu_28070_p1 = tmp_1547_fu_28061_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_154_cast_fu_9245_p1() {
    tmp_154_cast_fu_9245_p1 = esl_zext<10,5>(h_31_fu_9239_p2.read());
}

void ShuffleNetV2::thread_tmp_154_fu_10099_p3() {
    tmp_154_fu_10099_p3 = esl_concat<10,4>(tmp_727_fu_10094_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1550_cast_fu_19642_p1() {
    tmp_1550_cast_fu_19642_p1 = esl_sext<64,18>(tmp_1171_fu_19637_p2.read());
}

void ShuffleNetV2::thread_tmp_1550_fu_28085_p2() {
    tmp_1550_fu_28085_p2 = (!p_shl635_cast_fu_28078_p3.read().is_01() || !tmp_1548_reg_36896.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl635_cast_fu_28078_p3.read()) - sc_biguint<11>(tmp_1548_reg_36896.read()));
}

void ShuffleNetV2::thread_tmp_1551_fu_28090_p2() {
    tmp_1551_fu_28090_p2 = (!tmp_1550_fu_28085_p2.read().is_01() || !tmp_779_cast1_reg_36861.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1550_fu_28085_p2.read()) + sc_biguint<11>(tmp_779_cast1_reg_36861.read()));
}

void ShuffleNetV2::thread_tmp_1552_fu_28557_p3() {
    tmp_1552_fu_28557_p3 = esl_concat<7,3>(co172_reg_6852.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1553_fu_28569_p3() {
    tmp_1553_fu_28569_p3 = esl_concat<7,1>(co172_reg_6852.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1554_fu_28581_p2() {
    tmp_1554_fu_28581_p2 = (!p_shl643_cast_fu_28565_p1.read().is_01() || !p_shl644_cast_fu_28577_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl643_cast_fu_28565_p1.read()) - sc_biguint<11>(p_shl644_cast_fu_28577_p1.read()));
}

void ShuffleNetV2::thread_tmp_1555_fu_28479_p1() {
    tmp_1555_fu_28479_p1 = k70_reg_6841.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1556_fu_28300_p1() {
    tmp_1556_fu_28300_p1 = i182_reg_6819.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1557_fu_28405_p3() {
    tmp_1557_fu_28405_p3 = esl_concat<13,5>(tmp_796_reg_37006.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1558_cast_fu_19647_p1() {
    tmp_1558_cast_fu_19647_p1 = esl_sext<64,13>(tmp_1175_reg_34164.read());
}

void ShuffleNetV2::thread_tmp_1558_fu_28416_p3() {
    tmp_1558_fu_28416_p3 = esl_concat<13,3>(tmp_796_reg_37006.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1559_fu_28427_p2() {
    tmp_1559_fu_28427_p2 = (!p_shl641_cast_fu_28412_p1.read().is_01() || !p_shl642_cast_fu_28423_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl641_cast_fu_28412_p1.read()) - sc_biguint<19>(p_shl642_cast_fu_28423_p1.read()));
}

void ShuffleNetV2::thread_tmp_155_fu_9529_p2() {
    tmp_155_fu_9529_p2 = (!co36_cast_fu_9513_p1.read().is_01() || !ap_const_lv8_78.is_01())? sc_lv<8>(): (sc_biguint<8>(co36_cast_fu_9513_p1.read()) + sc_biguint<8>(ap_const_lv8_78));
}

void ShuffleNetV2::thread_tmp_1560_fu_28433_p2() {
    tmp_1560_fu_28433_p2 = (!tmp_780_cast_reg_36988.read().is_01() || !tmp_1559_fu_28427_p2.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_780_cast_reg_36988.read()) + sc_biguint<19>(tmp_1559_fu_28427_p2.read()));
}

void ShuffleNetV2::thread_tmp_1561_fu_28353_p2() {
    tmp_1561_fu_28353_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i182_reg_6819.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1562_fu_28374_p3() {
    tmp_1562_fu_28374_p3 = esl_concat<8,7>(tmp_798_fu_28369_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1563_fu_28382_p3() {
    tmp_1563_fu_28382_p3 = esl_concat<8,5>(tmp_798_fu_28369_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1564_fu_28394_p2() {
    tmp_1564_fu_28394_p2 = (!tmp_1562_fu_28374_p3.read().is_01() || !p_shl640_cast_fu_28390_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1562_fu_28374_p3.read()) - sc_bigint<15>(p_shl640_cast_fu_28390_p1.read()));
}

void ShuffleNetV2::thread_tmp_1565_fu_28400_p2() {
    tmp_1565_fu_28400_p2 = (!tmp_782_cast_reg_36993.read().is_01() || !tmp_1564_fu_28394_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_782_cast_reg_36993.read()) + sc_biguint<15>(tmp_1564_fu_28394_p2.read()));
}

void ShuffleNetV2::thread_tmp_1566_fu_28690_p3() {
    tmp_1566_fu_28690_p3 = esl_concat<8,3>(tmp_799_fu_28684_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1567_fu_28702_p3() {
    tmp_1567_fu_28702_p3 = esl_concat<8,1>(tmp_799_fu_28684_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1568_fu_28714_p2() {
    tmp_1568_fu_28714_p2 = (!p_shl649_cast_fu_28698_p1.read().is_01() || !p_shl650_cast_fu_28710_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl649_cast_fu_28698_p1.read()) - sc_biguint<12>(p_shl650_cast_fu_28710_p1.read()));
}

void ShuffleNetV2::thread_tmp_1569_fu_28724_p3() {
    tmp_1569_fu_28724_p3 = esl_concat<7,3>(co174_reg_6885.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_156_cast1_fu_9404_p1() {
    tmp_156_cast1_fu_9404_p1 = esl_zext<11,5>(h_33_fu_9398_p2.read());
}

void ShuffleNetV2::thread_tmp_156_cast_fu_9408_p1() {
    tmp_156_cast_fu_9408_p1 = esl_zext<10,5>(h_33_fu_9398_p2.read());
}

void ShuffleNetV2::thread_tmp_156_fu_10111_p3() {
    tmp_156_fu_10111_p3 = esl_concat<10,1>(tmp_727_fu_10094_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1570_fu_28736_p3() {
    tmp_1570_fu_28736_p3 = esl_concat<7,1>(co174_reg_6885.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1571_fu_28748_p2() {
    tmp_1571_fu_28748_p2 = (!p_shl647_cast_fu_28732_p1.read().is_01() || !p_shl648_cast_fu_28744_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl647_cast_fu_28732_p1.read()) - sc_biguint<11>(p_shl648_cast_fu_28744_p1.read()));
}

void ShuffleNetV2::thread_tmp_1572_fu_28607_p2() {
    tmp_1572_fu_28607_p2 = (!tmp_2019_cast_reg_37071.read().is_01() || !tmp_800_cast_fu_28603_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_2019_cast_reg_37071.read()) + sc_biguint<12>(tmp_800_cast_fu_28603_p1.read()));
}

void ShuffleNetV2::thread_tmp_1573_fu_28612_p1() {
    tmp_1573_fu_28612_p1 = tmp_1572_fu_28607_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1574_fu_28624_p3() {
    tmp_1574_fu_28624_p3 = esl_concat<12,1>(tmp_1572_fu_28607_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1575_fu_28636_p2() {
    tmp_1575_fu_28636_p2 = (!p_shl645_cast_fu_28616_p3.read().is_01() || !p_shl646_cast_fu_28632_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl645_cast_fu_28616_p3.read()) - sc_bigint<14>(p_shl646_cast_fu_28632_p1.read()));
}

void ShuffleNetV2::thread_tmp_1576_fu_28895_p1() {
    tmp_1576_fu_28895_p1 = co176_reg_6918.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1577_fu_28911_p2() {
    tmp_1577_fu_28911_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co176_reg_6918.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1578_fu_28778_p2() {
    tmp_1578_fu_28778_p2 = (!tmp_803_cast_fu_28774_p1.read().is_01() || !tmp_2040_cast_reg_37120.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_803_cast_fu_28774_p1.read()) + sc_bigint<12>(tmp_2040_cast_reg_37120.read()));
}

void ShuffleNetV2::thread_tmp_1579_cast_fu_19863_p1() {
    tmp_1579_cast_fu_19863_p1 = esl_zext<64,15>(tmp_1195_fu_19858_p2.read());
}

void ShuffleNetV2::thread_tmp_1579_fu_28783_p1() {
    tmp_1579_fu_28783_p1 = tmp_1578_fu_28778_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_157_cast_fu_9296_p1() {
    tmp_157_cast_fu_9296_p1 = esl_zext<15,5>(w_31_fu_9290_p2.read());
}

void ShuffleNetV2::thread_tmp_157_fu_10270_p3() {
    tmp_157_fu_10270_p3 = esl_concat<10,1>(tmp_753_fu_10257_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1580_cast_fu_20065_p1() {
    tmp_1580_cast_fu_20065_p1 = esl_zext<64,15>(tmp_1196_fu_20060_p2.read());
}

void ShuffleNetV2::thread_tmp_1580_fu_28803_p2() {
    tmp_1580_fu_28803_p2 = (!p_shl653_cast_fu_28787_p3.read().is_01() || !p_shl654_cast_fu_28795_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl653_cast_fu_28787_p3.read()) - sc_biguint<13>(p_shl654_cast_fu_28795_p3.read()));
}

void ShuffleNetV2::thread_tmp_1581_cast_fu_20075_p1() {
    tmp_1581_cast_fu_20075_p1 = esl_zext<64,14>(tmp_1197_reg_34308.read());
}

void ShuffleNetV2::thread_tmp_1581_fu_28809_p2() {
    tmp_1581_fu_28809_p2 = (!tmp_803_cast1_fu_28770_p1.read().is_01() || !tmp_2037_cast_reg_37115.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_803_cast1_fu_28770_p1.read()) + sc_bigint<13>(tmp_2037_cast_reg_37115.read()));
}

void ShuffleNetV2::thread_tmp_1582_fu_28814_p1() {
    tmp_1582_fu_28814_p1 = tmp_1581_fu_28809_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1583_fu_28834_p2() {
    tmp_1583_fu_28834_p2 = (!p_shl651_cast_fu_28818_p3.read().is_01() || !p_shl652_cast_fu_28826_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl651_cast_fu_28818_p3.read()) - sc_biguint<14>(p_shl652_cast_fu_28826_p3.read()));
}

void ShuffleNetV2::thread_tmp_1584_fu_28658_p2() {
    tmp_1584_fu_28658_p2 = (!tmp_1575_reg_37084.read().is_01() || !tmp_805_cast_fu_28654_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1575_reg_37084.read()) + sc_biguint<14>(tmp_805_cast_fu_28654_p1.read()));
}

void ShuffleNetV2::thread_tmp_1585_fu_28860_p2() {
    tmp_1585_fu_28860_p2 = (!tmp_1580_reg_37133.read().is_01() || !tmp_809_cast_fu_28856_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1580_reg_37133.read()) + sc_biguint<13>(tmp_809_cast_fu_28856_p1.read()));
}

void ShuffleNetV2::thread_tmp_1586_fu_28865_p2() {
    tmp_1586_fu_28865_p2 = (!tmp_1583_reg_37138.read().is_01() || !tmp_809_cast1_fu_28852_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1583_reg_37138.read()) + sc_biguint<14>(tmp_809_cast1_fu_28852_p1.read()));
}

void ShuffleNetV2::thread_tmp_1587_fu_29161_p1() {
    tmp_1587_fu_29161_p1 = k72_reg_6962.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1588_cast_fu_20327_p1() {
    tmp_1588_cast_fu_20327_p1 = esl_sext<18,17>(tmp_1202_fu_20321_p2.read());
}

void ShuffleNetV2::thread_tmp_1588_fu_28982_p1() {
    tmp_1588_fu_28982_p1 = i186_reg_6940.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1589_cast_fu_20336_p1() {
    tmp_1589_cast_fu_20336_p1 = esl_sext<64,18>(tmp_1203_fu_20331_p2.read());
}

void ShuffleNetV2::thread_tmp_1589_fu_29087_p3() {
    tmp_1589_fu_29087_p3 = esl_concat<13,5>(tmp_816_reg_37210.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_158_fu_9654_p2() {
    tmp_158_fu_9654_p2 = (!i15_cast659_cast_fu_9638_p1.read().is_01() || !ap_const_lv7_58.is_01())? sc_lv<7>(): (sc_biguint<7>(i15_cast659_cast_fu_9638_p1.read()) + sc_bigint<7>(ap_const_lv7_58));
}

void ShuffleNetV2::thread_tmp_1590_fu_29098_p3() {
    tmp_1590_fu_29098_p3 = esl_concat<13,3>(tmp_816_reg_37210.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1591_fu_29109_p2() {
    tmp_1591_fu_29109_p2 = (!p_shl657_cast_fu_29094_p1.read().is_01() || !p_shl658_cast_fu_29105_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl657_cast_fu_29094_p1.read()) - sc_biguint<19>(p_shl658_cast_fu_29105_p1.read()));
}

void ShuffleNetV2::thread_tmp_1592_fu_29115_p2() {
    tmp_1592_fu_29115_p2 = (!tmp_806_cast_reg_37192.read().is_01() || !tmp_1591_fu_29109_p2.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_806_cast_reg_37192.read()) + sc_biguint<19>(tmp_1591_fu_29109_p2.read()));
}

void ShuffleNetV2::thread_tmp_1593_fu_29035_p2() {
    tmp_1593_fu_29035_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i186_reg_6940.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1594_fu_29056_p3() {
    tmp_1594_fu_29056_p3 = esl_concat<8,7>(tmp_818_fu_29051_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1595_fu_29064_p3() {
    tmp_1595_fu_29064_p3 = esl_concat<8,5>(tmp_818_fu_29051_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1596_fu_29076_p2() {
    tmp_1596_fu_29076_p2 = (!tmp_1594_fu_29056_p3.read().is_01() || !p_shl656_cast_fu_29072_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1594_fu_29056_p3.read()) - sc_bigint<15>(p_shl656_cast_fu_29072_p1.read()));
}

void ShuffleNetV2::thread_tmp_1597_cast_fu_20341_p1() {
    tmp_1597_cast_fu_20341_p1 = esl_sext<64,13>(tmp_1207_reg_34368.read());
}

void ShuffleNetV2::thread_tmp_1597_fu_29082_p2() {
    tmp_1597_fu_29082_p2 = (!tmp_808_cast_reg_37197.read().is_01() || !tmp_1596_fu_29076_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_808_cast_reg_37197.read()) + sc_biguint<15>(tmp_1596_fu_29076_p2.read()));
}

void ShuffleNetV2::thread_tmp_1598_fu_29583_p1() {
    tmp_1598_fu_29583_p1 = co180_reg_7039.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1599_fu_29599_p2() {
    tmp_1599_fu_29599_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co180_reg_7039.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_159_fu_9664_p1() {
    tmp_159_fu_9664_p1 = esl_zext<64,8>(tmp_224_cast_fu_9660_p1.read());
}

void ShuffleNetV2::thread_tmp_1600_fu_29501_p1() {
    tmp_1600_fu_29501_p1 = k74_reg_7028.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1601_fu_29299_p1() {
    tmp_1601_fu_29299_p1 = i192_reg_7006.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1602_fu_29356_p3() {
    tmp_1602_fu_29356_p3 = esl_concat<11,2>(tmp_836_reg_37329.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1603_fu_29367_p2() {
    tmp_1603_fu_29367_p2 = (!p_shl662_cast_fu_29363_p1.read().is_01() || !tmp_837_cast_fu_29353_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl662_cast_fu_29363_p1.read()) - sc_biguint<14>(tmp_837_cast_fu_29353_p1.read()));
}

void ShuffleNetV2::thread_tmp_1604_fu_29377_p2() {
    tmp_1604_fu_29377_p2 = (!tmp_2080_cast_fu_29373_p1.read().is_01() || !tmp_819_cast_reg_37298.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_2080_cast_fu_29373_p1.read()) + sc_biguint<15>(tmp_819_cast_reg_37298.read()));
}

void ShuffleNetV2::thread_tmp_1605_fu_29382_p2() {
    tmp_1605_fu_29382_p2 = (!ap_const_lv15_2.is_01())? sc_lv<15>(): tmp_1604_fu_29377_p2.read() << (unsigned short)ap_const_lv15_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1606_cast_fu_20597_p1() {
    tmp_1606_cast_fu_20597_p1 = esl_sext<13,12>(tmp_1213_fu_20591_p2.read());
}

void ShuffleNetV2::thread_tmp_1606_fu_29388_p2() {
    tmp_1606_fu_29388_p2 = (!tmp_1605_fu_29382_p2.read().is_01() || !tmp_1604_fu_29377_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1605_fu_29382_p2.read()) - sc_biguint<15>(tmp_1604_fu_29377_p2.read()));
}

void ShuffleNetV2::thread_tmp_1607_cast_fu_20606_p1() {
    tmp_1607_cast_fu_20606_p1 = esl_sext<15,13>(tmp_1214_fu_20601_p2.read());
}

void ShuffleNetV2::thread_tmp_1607_fu_29394_p2() {
    tmp_1607_fu_29394_p2 = (!tmp_1606_fu_29388_p2.read().is_01() || !tmp_827_cast_reg_37316.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1606_fu_29388_p2.read()) + sc_biguint<15>(tmp_827_cast_reg_37316.read()));
}

void ShuffleNetV2::thread_tmp_1608_fu_29406_p3() {
    tmp_1608_fu_29406_p3 = esl_concat<8,2>(tmp_838_reg_37335.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1609_fu_29413_p1() {
    tmp_1609_fu_29413_p1 = esl_sext<34,10>(tmp_1608_fu_29406_p3.read());
}

void ShuffleNetV2::thread_tmp_160_fu_9669_p1() {
    tmp_160_fu_9669_p1 = esl_zext<64,5>(i15_reg_3568.read());
}

void ShuffleNetV2::thread_tmp_1610_cast_fu_20674_p1() {
    tmp_1610_cast_fu_20674_p1 = esl_zext<64,15>(tmp_1216_reg_34493.read());
}

void ShuffleNetV2::thread_tmp_1610_fu_29421_p2() {
    tmp_1610_fu_29421_p2 = (!p_shl660_cast_fu_29417_p1.read().is_01() || !tmp_839_cast_fu_29402_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl660_cast_fu_29417_p1.read()) - sc_biguint<35>(tmp_839_cast_fu_29402_p1.read()));
}

void ShuffleNetV2::thread_tmp_1611_fu_29431_p2() {
    tmp_1611_fu_29431_p2 = (!tmp_2087_cast_fu_29427_p1.read().is_01() || !tmp_819_cast1_reg_37293.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2087_cast_fu_29427_p1.read()) + sc_biguint<36>(tmp_819_cast1_reg_37293.read()));
}

void ShuffleNetV2::thread_tmp_1612_fu_29436_p1() {
    tmp_1612_fu_29436_p1 = tmp_1611_fu_29431_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1613_cast_fu_20657_p1() {
    tmp_1613_cast_fu_20657_p1 = esl_sext<36,35>(tmp_1219_fu_20651_p2.read());
}

void ShuffleNetV2::thread_tmp_1613_fu_29440_p1() {
    tmp_1613_fu_29440_p1 = tmp_1611_fu_29431_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1614_fu_29455_p2() {
    tmp_1614_fu_29455_p2 = (!p_shl659_cast_fu_29448_p3.read().is_01() || !tmp_1612_reg_37346.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl659_cast_fu_29448_p3.read()) - sc_biguint<11>(tmp_1612_reg_37346.read()));
}

void ShuffleNetV2::thread_tmp_1615_fu_29460_p2() {
    tmp_1615_fu_29460_p2 = (!tmp_1614_fu_29455_p2.read().is_01() || !tmp_827_cast1_reg_37311.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1614_fu_29455_p2.read()) + sc_biguint<11>(tmp_827_cast1_reg_37311.read()));
}

void ShuffleNetV2::thread_tmp_1616_fu_29927_p3() {
    tmp_1616_fu_29927_p3 = esl_concat<7,3>(co182_reg_7094.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1617_cast_fu_20695_p1() {
    tmp_1617_cast_fu_20695_p1 = esl_zext<64,10>(tmp_1224_reg_34513.read());
}

void ShuffleNetV2::thread_tmp_1617_fu_29939_p3() {
    tmp_1617_fu_29939_p3 = esl_concat<7,1>(co182_reg_7094.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1618_fu_29951_p2() {
    tmp_1618_fu_29951_p2 = (!p_shl667_cast_fu_29935_p1.read().is_01() || !p_shl668_cast_fu_29947_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl667_cast_fu_29935_p1.read()) - sc_biguint<11>(p_shl668_cast_fu_29947_p1.read()));
}

void ShuffleNetV2::thread_tmp_1619_fu_29849_p1() {
    tmp_1619_fu_29849_p1 = k76_reg_7083.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_161_cast1_fu_9611_p1() {
    tmp_161_cast1_fu_9611_p1 = esl_zext<11,5>(ci18_reg_3557.read());
}

void ShuffleNetV2::thread_tmp_161_cast_fu_9615_p1() {
    tmp_161_cast_fu_9615_p1 = esl_zext<15,5>(ci18_reg_3557.read());
}

void ShuffleNetV2::thread_tmp_161_fu_10301_p3() {
    tmp_161_fu_10301_p3 = esl_concat<11,1>(tmp_755_fu_10288_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1620_fu_29670_p1() {
    tmp_1620_fu_29670_p1 = i194_reg_7061.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1621_fu_29775_p3() {
    tmp_1621_fu_29775_p3 = esl_concat<13,5>(tmp_846_reg_37456.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1622_fu_29786_p3() {
    tmp_1622_fu_29786_p3 = esl_concat<13,3>(tmp_846_reg_37456.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1623_fu_29797_p2() {
    tmp_1623_fu_29797_p2 = (!p_shl665_cast_fu_29782_p1.read().is_01() || !p_shl666_cast_fu_29793_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl665_cast_fu_29782_p1.read()) - sc_biguint<19>(p_shl666_cast_fu_29793_p1.read()));
}

void ShuffleNetV2::thread_tmp_1624_fu_29803_p2() {
    tmp_1624_fu_29803_p2 = (!tmp_828_cast1_reg_37438.read().is_01() || !tmp_1623_fu_29797_p2.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_828_cast1_reg_37438.read()) + sc_biguint<19>(tmp_1623_fu_29797_p2.read()));
}

void ShuffleNetV2::thread_tmp_1625_fu_29723_p2() {
    tmp_1625_fu_29723_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i194_reg_7061.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1626_fu_29744_p3() {
    tmp_1626_fu_29744_p3 = esl_concat<8,7>(tmp_848_fu_29739_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1627_cast_fu_21045_p1() {
    tmp_1627_cast_fu_21045_p1 = esl_sext<18,17>(tmp_1232_fu_21039_p2.read());
}

void ShuffleNetV2::thread_tmp_1627_fu_29752_p3() {
    tmp_1627_fu_29752_p3 = esl_concat<8,5>(tmp_848_fu_29739_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1628_cast_fu_21054_p1() {
    tmp_1628_cast_fu_21054_p1 = esl_sext<64,18>(tmp_1233_fu_21049_p2.read());
}

void ShuffleNetV2::thread_tmp_1628_fu_29764_p2() {
    tmp_1628_fu_29764_p2 = (!tmp_1626_fu_29744_p3.read().is_01() || !p_shl664_cast_fu_29760_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1626_fu_29744_p3.read()) - sc_bigint<15>(p_shl664_cast_fu_29760_p1.read()));
}

void ShuffleNetV2::thread_tmp_1629_fu_29770_p2() {
    tmp_1629_fu_29770_p2 = (!tmp_831_cast_reg_37443.read().is_01() || !tmp_1628_fu_29764_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_831_cast_reg_37443.read()) + sc_biguint<15>(tmp_1628_fu_29764_p2.read()));
}

void ShuffleNetV2::thread_tmp_162_cast1_fu_9486_p1() {
    tmp_162_cast1_fu_9486_p1 = esl_zext<15,5>(w_33_fu_9480_p2.read());
}

void ShuffleNetV2::thread_tmp_162_cast_fu_9490_p1() {
    tmp_162_cast_fu_9490_p1 = esl_zext<14,5>(w_33_fu_9480_p2.read());
}

void ShuffleNetV2::thread_tmp_162_fu_10624_p3() {
    tmp_162_fu_10624_p3 = esl_concat<11,2>(tmp_786_fu_10615_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1630_fu_30050_p3() {
    tmp_1630_fu_30050_p3 = esl_concat<8,2>(ci82_reg_7127.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1631_fu_30062_p3() {
    tmp_1631_fu_30062_p3 = esl_concat<8,3>(ci82_reg_7127.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1632_fu_30074_p3() {
    tmp_1632_fu_30074_p3 = esl_concat<8,1>(ci82_reg_7127.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1633_fu_30086_p2() {
    tmp_1633_fu_30086_p2 = (!p_shl671_cast_fu_30070_p1.read().is_01() || !p_shl672_cast_fu_30082_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl671_cast_fu_30070_p1.read()) - sc_biguint<12>(p_shl672_cast_fu_30082_p1.read()));
}

void ShuffleNetV2::thread_tmp_1634_fu_29977_p2() {
    tmp_1634_fu_29977_p2 = (!tmp_2094_cast_reg_37521.read().is_01() || !tmp_849_cast_fu_29973_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_2094_cast_reg_37521.read()) + sc_biguint<12>(tmp_849_cast_fu_29973_p1.read()));
}

void ShuffleNetV2::thread_tmp_1635_fu_29982_p1() {
    tmp_1635_fu_29982_p1 = tmp_1634_fu_29977_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1636_cast_fu_21059_p1() {
    tmp_1636_cast_fu_21059_p1 = esl_sext<64,13>(tmp_1237_reg_34614.read());
}

void ShuffleNetV2::thread_tmp_1636_fu_29994_p3() {
    tmp_1636_fu_29994_p3 = esl_concat<12,1>(tmp_1634_fu_29977_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1637_fu_30006_p2() {
    tmp_1637_fu_30006_p2 = (!p_shl669_cast_fu_29986_p3.read().is_01() || !p_shl670_cast_fu_30002_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl669_cast_fu_29986_p3.read()) - sc_bigint<14>(p_shl670_cast_fu_30002_p1.read()));
}

void ShuffleNetV2::thread_tmp_1638_fu_30215_p3() {
    tmp_1638_fu_30215_p3 = esl_concat<4,9>(co_i_reg_7160.read(), ap_const_lv9_0);
}

void ShuffleNetV2::thread_tmp_1639_fu_30112_p2() {
    tmp_1639_fu_30112_p2 = (!tmp_850_cast1_fu_30108_p1.read().is_01() || !tmp_2114_cast_reg_37570.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_850_cast1_fu_30108_p1.read()) + sc_bigint<13>(tmp_2114_cast_reg_37570.read()));
}

void ShuffleNetV2::thread_tmp_163_fu_9690_p2() {
    tmp_163_fu_9690_p2 = (!co39_cast_fu_9674_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co39_cast_fu_9674_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp_1640_fu_30117_p1() {
    tmp_1640_fu_30117_p1 = tmp_1639_fu_30112_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1641_fu_30137_p2() {
    tmp_1641_fu_30137_p2 = (!p_shl673_cast_fu_30121_p3.read().is_01() || !p_shl674_cast_fu_30129_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl673_cast_fu_30121_p3.read()) - sc_biguint<14>(p_shl674_cast_fu_30129_p3.read()));
}

void ShuffleNetV2::thread_tmp_1642_fu_30147_p2() {
    tmp_1642_fu_30147_p2 = (!tmp_852_cast_fu_30143_p1.read().is_01() || !tmp_2111_cast_reg_37565.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_852_cast_fu_30143_p1.read()) + sc_biguint<11>(tmp_2111_cast_reg_37565.read()));
}

void ShuffleNetV2::thread_tmp_1643_fu_30028_p2() {
    tmp_1643_fu_30028_p2 = (!tmp_1637_reg_37534.read().is_01() || !tmp_853_cast_fu_30024_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1637_reg_37534.read()) + sc_biguint<14>(tmp_853_cast_fu_30024_p1.read()));
}

void ShuffleNetV2::thread_tmp_1644_fu_30248_p2() {
    tmp_1644_fu_30248_p2 = (!tmp_2120_cast_reg_37625.read().is_01() || !tmp_i_cast_fu_30244_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_2120_cast_reg_37625.read()) + sc_biguint<14>(tmp_i_cast_fu_30244_p1.read()));
}

void ShuffleNetV2::thread_tmp_1645_fu_30176_p2() {
    tmp_1645_fu_30176_p2 = (!tmp_1641_reg_37583.read().is_01() || !tmp_855_cast_fu_30172_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1641_reg_37583.read()) + sc_biguint<14>(tmp_855_cast_fu_30172_p1.read()));
}

void ShuffleNetV2::thread_tmp_1646_fu_30190_p2() {
    tmp_1646_fu_30190_p2 = (!tmp_2127_cast_reg_37588.read().is_01() || !tmp_856_cast_fu_30186_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_2127_cast_reg_37588.read()) + sc_biguint<13>(tmp_856_cast_fu_30186_p1.read()));
}

void ShuffleNetV2::thread_tmp_164_cast_fu_9696_p1() {
    tmp_164_cast_fu_9696_p1 = esl_zext<10,7>(tmp_163_fu_9690_p2.read());
}

void ShuffleNetV2::thread_tmp_164_fu_10647_p2() {
    tmp_164_fu_10647_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_789_fu_10642_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1657_cast_fu_21275_p1() {
    tmp_1657_cast_fu_21275_p1 = esl_zext<64,15>(tmp_1257_fu_21270_p2.read());
}

void ShuffleNetV2::thread_tmp_1658_cast_fu_21487_p1() {
    tmp_1658_cast_fu_21487_p1 = esl_zext<64,14>(tmp_1258_reg_34753.read());
}

void ShuffleNetV2::thread_tmp_1659_cast_fu_21482_p1() {
    tmp_1659_cast_fu_21482_p1 = esl_zext<64,15>(tmp_1259_fu_21477_p2.read());
}

void ShuffleNetV2::thread_tmp_165_cast_fu_9718_p1() {
    tmp_165_cast_fu_9718_p1 = esl_zext<8,5>(co38_reg_3580.read());
}

void ShuffleNetV2::thread_tmp_165_fu_11024_p1() {
    tmp_165_fu_11024_p1 = co54_reg_3871.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1668_cast_fu_21747_p1() {
    tmp_1668_cast_fu_21747_p1 = esl_sext<18,17>(tmp_1266_fu_21741_p2.read());
}

void ShuffleNetV2::thread_tmp_1669_cast_fu_21756_p1() {
    tmp_1669_cast_fu_21756_p1 = esl_sext<64,18>(tmp_1267_fu_21751_p2.read());
}

void ShuffleNetV2::thread_tmp_166_fu_9863_p2() {
    tmp_166_fu_9863_p2 = (!i17_cast_fu_9847_p1.read().is_01() || !ap_const_lv9_F0.is_01())? sc_lv<9>(): (sc_biguint<9>(i17_cast_fu_9847_p1.read()) + sc_biguint<9>(ap_const_lv9_F0));
}

void ShuffleNetV2::thread_tmp_1677_cast_fu_21761_p1() {
    tmp_1677_cast_fu_21761_p1 = esl_sext<64,13>(tmp_1271_reg_34818.read());
}

void ShuffleNetV2::thread_tmp_167_fu_9869_p1() {
    tmp_167_fu_9869_p1 = esl_zext<64,9>(tmp_166_fu_9863_p2.read());
}

void ShuffleNetV2::thread_tmp_1685_cast_fu_22009_p1() {
    tmp_1685_cast_fu_22009_p1 = esl_sext<14,13>(tmp_1276_fu_22003_p2.read());
}

void ShuffleNetV2::thread_tmp_1686_cast_fu_22018_p1() {
    tmp_1686_cast_fu_22018_p1 = esl_sext<15,14>(tmp_1277_fu_22013_p2.read());
}

void ShuffleNetV2::thread_tmp_1689_cast_fu_22090_p1() {
    tmp_1689_cast_fu_22090_p1 = esl_zext<64,15>(tmp_1280_reg_34943.read());
}

void ShuffleNetV2::thread_tmp_168_fu_9874_p1() {
    tmp_168_fu_9874_p1 = esl_zext<64,5>(i17_reg_3613.read());
}

void ShuffleNetV2::thread_tmp_1692_cast_fu_22073_p1() {
    tmp_1692_cast_fu_22073_p1 = esl_sext<36,35>(tmp_1283_fu_22067_p2.read());
}

void ShuffleNetV2::thread_tmp_1696_cast_fu_22111_p1() {
    tmp_1696_cast_fu_22111_p1 = esl_zext<64,10>(tmp_1288_reg_34963.read());
}

void ShuffleNetV2::thread_tmp_169_cast1_fu_9756_p1() {
    tmp_169_cast1_fu_9756_p1 = esl_zext<9,2>(w34_reg_3591.read());
}

void ShuffleNetV2::thread_tmp_169_cast_fu_9760_p1() {
    tmp_169_cast_fu_9760_p1 = esl_zext<10,2>(w34_reg_3591.read());
}

void ShuffleNetV2::thread_tmp_169_fu_10952_p3() {
    tmp_169_fu_10952_p3 = esl_concat<10,4>(tmp_835_fu_10947_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1708_cast_fu_22469_p1() {
    tmp_1708_cast_fu_22469_p1 = esl_sext<18,17>(tmp_1298_fu_22463_p2.read());
}

void ShuffleNetV2::thread_tmp_1709_cast_fu_22478_p1() {
    tmp_1709_cast_fu_22478_p1 = esl_sext<64,18>(tmp_1299_fu_22473_p2.read());
}

void ShuffleNetV2::thread_tmp_170_fu_9895_p2() {
    tmp_170_fu_9895_p2 = (!co41_cast_fu_9879_p1.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<8>(): (sc_biguint<8>(co41_cast_fu_9879_p1.read()) + sc_bigint<8>(ap_const_lv8_90));
}

void ShuffleNetV2::thread_tmp_1717_cast_fu_22483_p1() {
    tmp_1717_cast_fu_22483_p1 = esl_sext<64,13>(tmp_1303_reg_35064.read());
}

void ShuffleNetV2::thread_tmp_171_cast1_fu_9820_p1() {
    tmp_171_cast1_fu_9820_p1 = esl_zext<9,2>(h34_reg_3602.read());
}

void ShuffleNetV2::thread_tmp_171_cast_fu_9824_p1() {
    tmp_171_cast_fu_9824_p1 = esl_zext<15,2>(h34_reg_3602.read());
}

void ShuffleNetV2::thread_tmp_171_fu_10964_p3() {
    tmp_171_fu_10964_p3 = esl_concat<10,1>(tmp_835_fu_10947_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_172_fu_10020_p2() {
    tmp_172_fu_10020_p2 = (!i19_cast_fu_10004_p1.read().is_01() || !ap_const_lv9_108.is_01())? sc_lv<9>(): (sc_biguint<9>(i19_cast_fu_10004_p1.read()) + sc_bigint<9>(ap_const_lv9_108));
}

void ShuffleNetV2::thread_tmp_1738_cast_fu_22703_p1() {
    tmp_1738_cast_fu_22703_p1 = esl_zext<64,15>(tmp_1323_fu_22698_p2.read());
}

void ShuffleNetV2::thread_tmp_1739_cast_fu_22905_p1() {
    tmp_1739_cast_fu_22905_p1 = esl_zext<64,15>(tmp_1324_fu_22900_p2.read());
}

void ShuffleNetV2::thread_tmp_173_fu_10026_p1() {
    tmp_173_fu_10026_p1 = esl_zext<64,9>(tmp_172_fu_10020_p2.read());
}

void ShuffleNetV2::thread_tmp_1740_cast_fu_22915_p1() {
    tmp_1740_cast_fu_22915_p1 = esl_zext<64,14>(tmp_1325_reg_35208.read());
}

void ShuffleNetV2::thread_tmp_1749_cast_fu_23175_p1() {
    tmp_1749_cast_fu_23175_p1 = esl_sext<18,17>(tmp_1332_fu_23169_p2.read());
}

void ShuffleNetV2::thread_tmp_174_fu_10031_p1() {
    tmp_174_fu_10031_p1 = esl_zext<64,5>(i19_reg_3647.read());
}

void ShuffleNetV2::thread_tmp_1750_cast_fu_23184_p1() {
    tmp_1750_cast_fu_23184_p1 = esl_sext<64,18>(tmp_1333_fu_23179_p2.read());
}

void ShuffleNetV2::thread_tmp_1758_cast_fu_23189_p1() {
    tmp_1758_cast_fu_23189_p1 = esl_sext<64,13>(tmp_1337_reg_35268.read());
}

void ShuffleNetV2::thread_tmp_175_cast1_fu_9977_p1() {
    tmp_175_cast1_fu_9977_p1 = esl_zext<11,5>(ci20_reg_3636.read());
}

void ShuffleNetV2::thread_tmp_175_cast_fu_9981_p1() {
    tmp_175_cast_fu_9981_p1 = esl_zext<15,5>(ci20_reg_3636.read());
}

void ShuffleNetV2::thread_tmp_175_fu_11306_p1() {
    tmp_175_fu_11306_p1 = k_reg_3915.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1767_cast_fu_23446_p1() {
    tmp_1767_cast_fu_23446_p1 = esl_sext<15,13>(tmp_1343_fu_23441_p2.read());
}

void ShuffleNetV2::thread_tmp_176_cast_fu_8294_p1() {
    tmp_176_cast_fu_8294_p1 = esl_sext<7,6>(tmp_123_fu_8286_p3.read());
}

void ShuffleNetV2::thread_tmp_176_fu_10171_p2() {
    tmp_176_fu_10171_p2 = (!co44_cast_fu_10155_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co44_cast_fu_10155_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_1770_cast_fu_23514_p1() {
    tmp_1770_cast_fu_23514_p1 = esl_zext<64,15>(tmp_1345_reg_35393.read());
}

void ShuffleNetV2::thread_tmp_1773_cast_fu_23497_p1() {
    tmp_1773_cast_fu_23497_p1 = esl_sext<36,35>(tmp_1348_fu_23491_p2.read());
}

void ShuffleNetV2::thread_tmp_1777_cast_fu_23535_p1() {
    tmp_1777_cast_fu_23535_p1 = esl_zext<64,10>(tmp_1353_reg_35413.read());
}

void ShuffleNetV2::thread_tmp_177_cast_fu_10090_p1() {
    tmp_177_cast_fu_10090_p1 = esl_zext<10,5>(h_37_fu_10084_p2.read());
}

void ShuffleNetV2::thread_tmp_177_fu_11113_p1() {
    tmp_177_fu_11113_p1 = i28_reg_3893.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1787_cast_fu_23897_p1() {
    tmp_1787_cast_fu_23897_p1 = esl_sext<19,18>(tmp_1361_fu_23891_p2.read());
}

void ShuffleNetV2::thread_tmp_1788_cast_fu_23906_p1() {
    tmp_1788_cast_fu_23906_p1 = esl_sext<64,19>(tmp_1362_fu_23901_p2.read());
}

void ShuffleNetV2::thread_tmp_178_fu_10374_p2() {
    tmp_178_fu_10374_p2 = (!co46_cast_fu_10358_p1.read().is_01() || !ap_const_lv8_A8.is_01())? sc_lv<8>(): (sc_biguint<8>(co46_cast_fu_10358_p1.read()) + sc_bigint<8>(ap_const_lv8_A8));
}

void ShuffleNetV2::thread_tmp_1796_cast_fu_23911_p1() {
    tmp_1796_cast_fu_23911_p1 = esl_sext<64,13>(tmp_1366_reg_35514.read());
}

void ShuffleNetV2::thread_tmp_179_cast1_fu_10249_p1() {
    tmp_179_cast1_fu_10249_p1 = esl_zext<11,5>(h_39_fu_10243_p2.read());
}

void ShuffleNetV2::thread_tmp_179_cast_fu_10253_p1() {
    tmp_179_cast_fu_10253_p1 = esl_zext<10,5>(h_39_fu_10243_p2.read());
}

void ShuffleNetV2::thread_tmp_179_fu_11742_p1() {
    tmp_179_fu_11742_p1 = co58_reg_3992.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1803_cast_fu_24131_p1() {
    tmp_1803_cast_fu_24131_p1 = esl_zext<64,15>(tmp_1373_fu_24126_p2.read());
}

void ShuffleNetV2::thread_tmp_180_cast_fu_10141_p1() {
    tmp_180_cast_fu_10141_p1 = esl_zext<15,5>(w_37_fu_10135_p2.read());
}

void ShuffleNetV2::thread_tmp_180_fu_11656_p1() {
    tmp_180_fu_11656_p1 = k2_reg_3981.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1810_cast_fu_24372_p1() {
    tmp_1810_cast_fu_24372_p1 = esl_sext<19,18>(tmp_1378_fu_24366_p2.read());
}

void ShuffleNetV2::thread_tmp_1811_cast_fu_24381_p1() {
    tmp_1811_cast_fu_24381_p1 = esl_sext<64,19>(tmp_1379_fu_24376_p2.read());
}

void ShuffleNetV2::thread_tmp_1818_cast_fu_24386_p1() {
    tmp_1818_cast_fu_24386_p1 = esl_sext<64,15>(tmp_1384_reg_35664.read());
}

void ShuffleNetV2::thread_tmp_181_fu_10495_p3() {
    tmp_181_fu_10495_p3 = esl_concat<4,5>(ap_const_lv4_9, i21_reg_3747.read());
}

void ShuffleNetV2::thread_tmp_1827_cast_fu_24643_p1() {
    tmp_1827_cast_fu_24643_p1 = esl_sext<15,13>(tmp_1391_fu_24638_p2.read());
}

void ShuffleNetV2::thread_tmp_182_fu_10503_p1() {
    tmp_182_fu_10503_p1 = esl_zext<64,9>(tmp_181_fu_10495_p3.read());
}

void ShuffleNetV2::thread_tmp_1830_cast_fu_24711_p1() {
    tmp_1830_cast_fu_24711_p1 = esl_zext<64,15>(tmp_1393_reg_35789.read());
}

void ShuffleNetV2::thread_tmp_1833_cast_fu_24694_p1() {
    tmp_1833_cast_fu_24694_p1 = esl_sext<36,35>(tmp_1396_fu_24688_p2.read());
}

void ShuffleNetV2::thread_tmp_1837_cast_fu_24732_p1() {
    tmp_1837_cast_fu_24732_p1 = esl_zext<64,11>(tmp_1401_reg_35809.read());
}

void ShuffleNetV2::thread_tmp_183_fu_10508_p1() {
    tmp_183_fu_10508_p1 = esl_zext<64,5>(i21_reg_3747.read());
}

void ShuffleNetV2::thread_tmp_1844_cast_fu_25074_p1() {
    tmp_1844_cast_fu_25074_p1 = esl_sext<19,18>(tmp_1406_fu_25068_p2.read());
}

void ShuffleNetV2::thread_tmp_1845_cast_fu_25083_p1() {
    tmp_1845_cast_fu_25083_p1 = esl_sext<64,19>(tmp_1407_fu_25078_p2.read());
}

void ShuffleNetV2::thread_tmp_184_cast1_fu_10456_p1() {
    tmp_184_cast1_fu_10456_p1 = esl_zext<11,5>(ci22_reg_3736.read());
}

void ShuffleNetV2::thread_tmp_184_cast_fu_10460_p1() {
    tmp_184_cast_fu_10460_p1 = esl_zext<15,5>(ci22_reg_3736.read());
}

void ShuffleNetV2::thread_tmp_184_fu_11444_p1() {
    tmp_184_fu_11444_p1 = i33_reg_3959.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1852_cast_fu_25088_p1() {
    tmp_1852_cast_fu_25088_p1 = esl_sext<64,15>(tmp_1412_reg_35910.read());
}

void ShuffleNetV2::thread_tmp_185_cast1_fu_10331_p1() {
    tmp_185_cast1_fu_10331_p1 = esl_zext<15,5>(w_39_fu_10325_p2.read());
}

void ShuffleNetV2::thread_tmp_185_cast_fu_10335_p1() {
    tmp_185_cast_fu_10335_p1 = esl_zext<14,5>(w_39_fu_10325_p2.read());
}

void ShuffleNetV2::thread_tmp_185_fu_11531_p3() {
    tmp_185_fu_11531_p3 = esl_concat<12,2>(tmp_859_fu_11522_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1861_cast_fu_25349_p1() {
    tmp_1861_cast_fu_25349_p1 = esl_sext<15,13>(tmp_1419_fu_25344_p2.read());
}

void ShuffleNetV2::thread_tmp_1864_cast_fu_25417_p1() {
    tmp_1864_cast_fu_25417_p1 = esl_zext<64,15>(tmp_1421_reg_36035.read());
}

void ShuffleNetV2::thread_tmp_1867_cast_fu_25400_p1() {
    tmp_1867_cast_fu_25400_p1 = esl_sext<36,35>(tmp_1424_fu_25394_p2.read());
}

void ShuffleNetV2::thread_tmp_186_fu_10525_p3() {
    tmp_186_fu_10525_p3 = esl_concat<1,5>(ap_const_lv1_1, co48_reg_3759.read());
}

void ShuffleNetV2::thread_tmp_1871_cast_fu_25438_p1() {
    tmp_1871_cast_fu_25438_p1 = esl_zext<64,11>(tmp_1429_reg_36055.read());
}

void ShuffleNetV2::thread_tmp_1874_cast_fu_25944_p1() {
    tmp_1874_cast_fu_25944_p1 = esl_sext<13,12>(tmp_1432_fu_25938_p2.read());
}

void ShuffleNetV2::thread_tmp_1877_cast_fu_25978_p1() {
    tmp_1877_cast_fu_25978_p1 = esl_sext<12,11>(tmp_1435_fu_25972_p2.read());
}

void ShuffleNetV2::thread_tmp_187_cast_fu_10537_p1() {
    tmp_187_cast_fu_10537_p1 = esl_zext<10,7>(tmp_260_cast_fu_10533_p1.read());
}

void ShuffleNetV2::thread_tmp_187_fu_11591_p1() {
    tmp_187_fu_11591_p1 = tmp_865_fu_11586_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1884_cast_fu_25776_p1() {
    tmp_1884_cast_fu_25776_p1 = esl_sext<19,18>(tmp_1440_fu_25770_p2.read());
}

void ShuffleNetV2::thread_tmp_1885_cast_fu_25785_p1() {
    tmp_1885_cast_fu_25785_p1 = esl_sext<64,19>(tmp_1441_fu_25780_p2.read());
}

void ShuffleNetV2::thread_tmp_188_cast_fu_10569_p1() {
    tmp_188_cast_fu_10569_p1 = esl_zext<8,5>(co48_reg_3759.read());
}

void ShuffleNetV2::thread_tmp_188_fu_11595_p1() {
    tmp_188_fu_11595_p1 = tmp_865_fu_11586_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1892_cast_fu_25790_p1() {
    tmp_1892_cast_fu_25790_p1 = esl_sext<64,15>(tmp_1446_reg_36156.read());
}

void ShuffleNetV2::thread_tmp_189_fu_10714_p2() {
    tmp_189_fu_10714_p2 = (!i23_cast_fu_10698_p1.read().is_01() || !ap_const_lv9_138.is_01())? sc_lv<9>(): (sc_biguint<9>(i23_cast_fu_10698_p1.read()) + sc_bigint<9>(ap_const_lv9_138));
}

void ShuffleNetV2::thread_tmp_1903_cast_fu_26099_p1() {
    tmp_1903_cast_fu_26099_p1 = esl_zext<64,13>(tmp_1455_reg_36251.read());
}

void ShuffleNetV2::thread_tmp_1904_cast_fu_26094_p1() {
    tmp_1904_cast_fu_26094_p1 = esl_zext<64,14>(tmp_1456_fu_26089_p2.read());
}

void ShuffleNetV2::thread_tmp_190_fu_10720_p1() {
    tmp_190_fu_10720_p1 = esl_zext<64,9>(tmp_189_fu_10714_p2.read());
}

void ShuffleNetV2::thread_tmp_1911_cast_fu_26339_p1() {
    tmp_1911_cast_fu_26339_p1 = esl_sext<19,18>(tmp_1461_fu_26333_p2.read());
}

void ShuffleNetV2::thread_tmp_1912_cast_fu_26348_p1() {
    tmp_1912_cast_fu_26348_p1 = esl_sext<64,19>(tmp_1462_fu_26343_p2.read());
}

void ShuffleNetV2::thread_tmp_1919_cast_fu_26353_p1() {
    tmp_1919_cast_fu_26353_p1 = esl_sext<64,15>(tmp_1467_reg_36316.read());
}

void ShuffleNetV2::thread_tmp_191_fu_10725_p1() {
    tmp_191_fu_10725_p1 = esl_zext<64,5>(i23_reg_3792.read());
}

void ShuffleNetV2::thread_tmp_1928_cast_fu_26606_p1() {
    tmp_1928_cast_fu_26606_p1 = esl_sext<15,13>(tmp_1474_fu_26601_p2.read());
}

void ShuffleNetV2::thread_tmp_192_cast1_fu_10607_p1() {
    tmp_192_cast1_fu_10607_p1 = esl_zext<9,2>(w40_reg_3770.read());
}

void ShuffleNetV2::thread_tmp_192_cast_fu_10611_p1() {
    tmp_192_cast_fu_10611_p1 = esl_zext<11,2>(w40_reg_3770.read());
}

void ShuffleNetV2::thread_tmp_192_fu_12024_p1() {
    tmp_192_fu_12024_p1 = k3_reg_4036.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1931_cast_fu_26674_p1() {
    tmp_1931_cast_fu_26674_p1 = esl_zext<64,15>(tmp_1476_reg_36441.read());
}

void ShuffleNetV2::thread_tmp_1934_cast_fu_26657_p1() {
    tmp_1934_cast_fu_26657_p1 = esl_sext<36,35>(tmp_1479_fu_26651_p2.read());
}

void ShuffleNetV2::thread_tmp_1938_cast_fu_26695_p1() {
    tmp_1938_cast_fu_26695_p1 = esl_zext<64,11>(tmp_1484_reg_36461.read());
}

void ShuffleNetV2::thread_tmp_193_cast1_fu_10671_p1() {
    tmp_193_cast1_fu_10671_p1 = esl_zext<9,2>(h40_reg_3781.read());
}

void ShuffleNetV2::thread_tmp_193_cast_fu_10675_p1() {
    tmp_193_cast_fu_10675_p1 = esl_zext<15,2>(h40_reg_3781.read());
}

void ShuffleNetV2::thread_tmp_193_fu_11831_p1() {
    tmp_193_fu_11831_p1 = i35_reg_4014.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1941_cast_fu_27199_p1() {
    tmp_1941_cast_fu_27199_p1 = esl_sext<12,11>(tmp_1487_fu_27193_p2.read());
}

void ShuffleNetV2::thread_tmp_194_fu_10873_p2() {
    tmp_194_fu_10873_p2 = (!i25_cast_fu_10857_p1.read().is_01() || !ap_const_lv9_150.is_01())? sc_lv<9>(): (sc_biguint<9>(i25_cast_fu_10857_p1.read()) + sc_bigint<9>(ap_const_lv9_150));
}

void ShuffleNetV2::thread_tmp_1950_cast_fu_27041_p1() {
    tmp_1950_cast_fu_27041_p1 = esl_sext<19,18>(tmp_1494_fu_27035_p2.read());
}

void ShuffleNetV2::thread_tmp_1951_cast_fu_27050_p1() {
    tmp_1951_cast_fu_27050_p1 = esl_sext<64,19>(tmp_1495_fu_27045_p2.read());
}

void ShuffleNetV2::thread_tmp_1958_cast_fu_27055_p1() {
    tmp_1958_cast_fu_27055_p1 = esl_sext<64,15>(tmp_1500_reg_36562.read());
}

void ShuffleNetV2::thread_tmp_195_fu_10879_p1() {
    tmp_195_fu_10879_p1 = esl_zext<64,9>(tmp_194_fu_10873_p2.read());
}

void ShuffleNetV2::thread_tmp_1961_cast_fu_27332_p1() {
    tmp_1961_cast_fu_27332_p1 = esl_sext<13,12>(tmp_1503_fu_27326_p2.read());
}

void ShuffleNetV2::thread_tmp_1964_cast_fu_27366_p1() {
    tmp_1964_cast_fu_27366_p1 = esl_sext<12,11>(tmp_1506_fu_27360_p2.read());
}

void ShuffleNetV2::thread_tmp_196_fu_10884_p1() {
    tmp_196_fu_10884_p1 = esl_zext<64,5>(i25_reg_3826.read());
}

void ShuffleNetV2::thread_tmp_1979_cast_fu_27275_p1() {
    tmp_1979_cast_fu_27275_p1 = esl_zext<64,14>(tmp_1519_fu_27270_p2.read());
}

void ShuffleNetV2::thread_tmp_197_cast1_fu_10830_p1() {
    tmp_197_cast1_fu_10830_p1 = esl_zext<11,5>(ci24_reg_3815.read());
}

void ShuffleNetV2::thread_tmp_197_cast_fu_10834_p1() {
    tmp_197_cast_fu_10834_p1 = esl_zext<15,5>(ci24_reg_3815.read());
}

void ShuffleNetV2::thread_tmp_197_fu_12456_p1() {
    tmp_197_fu_12456_p1 = co62_reg_4113.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1980_cast_fu_27477_p1() {
    tmp_1980_cast_fu_27477_p1 = esl_zext<64,14>(tmp_1520_fu_27472_p2.read());
}

void ShuffleNetV2::thread_tmp_1981_cast_fu_27487_p1() {
    tmp_1981_cast_fu_27487_p1 = esl_zext<64,13>(tmp_1521_reg_36706.read());
}

void ShuffleNetV2::thread_tmp_1989_cast_fu_27732_p1() {
    tmp_1989_cast_fu_27732_p1 = esl_sext<64,19>(tmp_1527_fu_27727_p2.read());
}

void ShuffleNetV2::thread_tmp_198_fu_11052_p2() {
    tmp_198_fu_11052_p2 = (!p_shl_cast_fu_11036_p1.read().is_01() || !p_shl1_cast_fu_11048_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl_cast_fu_11036_p1.read()) - sc_biguint<7>(p_shl1_cast_fu_11048_p1.read()));
}

void ShuffleNetV2::thread_tmp_1996_cast_fu_27737_p1() {
    tmp_1996_cast_fu_27737_p1 = esl_sext<64,15>(tmp_1532_reg_36766.read());
}

void ShuffleNetV2::thread_tmp_199_cast_fu_10943_p1() {
    tmp_199_cast_fu_10943_p1 = esl_zext<10,5>(h_43_fu_10937_p2.read());
}

void ShuffleNetV2::thread_tmp_199_fu_12374_p1() {
    tmp_199_fu_12374_p1 = k4_reg_4102.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2005_cast_fu_27993_p1() {
    tmp_2005_cast_fu_27993_p1 = esl_sext<14,13>(tmp_1539_fu_27987_p2.read());
}

void ShuffleNetV2::thread_tmp_2006_cast_fu_28002_p1() {
    tmp_2006_cast_fu_28002_p1 = esl_sext<15,14>(tmp_1540_fu_27997_p2.read());
}

void ShuffleNetV2::thread_tmp_2009_cast_fu_28074_p1() {
    tmp_2009_cast_fu_28074_p1 = esl_zext<64,15>(tmp_1543_reg_36891.read());
}

void ShuffleNetV2::thread_tmp_200_cast_fu_11088_p1() {
    tmp_200_cast_fu_11088_p1 = esl_zext<16,5>(ci26_reg_3882.read());
}

void ShuffleNetV2::thread_tmp_200_fu_12166_p1() {
    tmp_200_fu_12166_p1 = i40_reg_4080.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2012_cast_fu_28057_p1() {
    tmp_2012_cast_fu_28057_p1 = esl_sext<36,35>(tmp_1546_fu_28051_p2.read());
}

void ShuffleNetV2::thread_tmp_2016_cast_fu_28095_p1() {
    tmp_2016_cast_fu_28095_p1 = esl_zext<64,11>(tmp_1551_reg_36911.read());
}

void ShuffleNetV2::thread_tmp_2019_cast_fu_28587_p1() {
    tmp_2019_cast_fu_28587_p1 = esl_sext<12,11>(tmp_1554_fu_28581_p2.read());
}

void ShuffleNetV2::thread_tmp_201_fu_11092_p2() {
    tmp_201_fu_11092_p2 = (!tmp_198_reg_31424.read().is_01() || !ci26_cast_fu_11072_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_198_reg_31424.read()) + sc_biguint<7>(ci26_cast_fu_11072_p1.read()));
}

void ShuffleNetV2::thread_tmp_2027_cast_fu_28438_p1() {
    tmp_2027_cast_fu_28438_p1 = esl_sext<64,19>(tmp_1560_fu_28433_p2.read());
}

void ShuffleNetV2::thread_tmp_202_cast_fu_11097_p1() {
    tmp_202_cast_fu_11097_p1 = esl_sext<13,7>(tmp_201_fu_11092_p2.read());
}

void ShuffleNetV2::thread_tmp_202_fu_12249_p3() {
    tmp_202_fu_12249_p3 = esl_concat<11,2>(tmp_878_fu_12240_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2034_cast_fu_28443_p1() {
    tmp_2034_cast_fu_28443_p1 = esl_sext<64,15>(tmp_1565_reg_37012.read());
}

void ShuffleNetV2::thread_tmp_2037_cast_fu_28720_p1() {
    tmp_2037_cast_fu_28720_p1 = esl_sext<13,12>(tmp_1568_fu_28714_p2.read());
}

void ShuffleNetV2::thread_tmp_203_cast_fu_10994_p1() {
    tmp_203_cast_fu_10994_p1 = esl_zext<15,5>(w_43_fu_10988_p2.read());
}

void ShuffleNetV2::thread_tmp_203_fu_12309_p1() {
    tmp_203_fu_12309_p1 = tmp_884_fu_12304_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_2040_cast_fu_28754_p1() {
    tmp_2040_cast_fu_28754_p1 = esl_sext<12,11>(tmp_1571_fu_28748_p2.read());
}

void ShuffleNetV2::thread_tmp_204_fu_11334_p2() {
    tmp_204_fu_11334_p2 = (!p_shl2_cast_fu_11318_p1.read().is_01() || !p_shl3_cast_fu_11330_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl2_cast_fu_11318_p1.read()) - sc_biguint<7>(p_shl3_cast_fu_11330_p1.read()));
}

void ShuffleNetV2::thread_tmp_2055_cast_fu_28663_p1() {
    tmp_2055_cast_fu_28663_p1 = esl_zext<64,14>(tmp_1584_fu_28658_p2.read());
}

void ShuffleNetV2::thread_tmp_2056_cast_fu_28875_p1() {
    tmp_2056_cast_fu_28875_p1 = esl_zext<64,13>(tmp_1585_reg_37151.read());
}

void ShuffleNetV2::thread_tmp_2057_cast_fu_28870_p1() {
    tmp_2057_cast_fu_28870_p1 = esl_zext<64,14>(tmp_1586_fu_28865_p2.read());
}

void ShuffleNetV2::thread_tmp_205_fu_11350_p2() {
    tmp_205_fu_11350_p2 = (!i27_cast1_reg_31481.read().is_01() || !tmp2_fu_11344_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i27_cast1_reg_31481.read()) + sc_biguint<9>(tmp2_fu_11344_p2.read()));
}

void ShuffleNetV2::thread_tmp_2065_cast_fu_29120_p1() {
    tmp_2065_cast_fu_29120_p1 = esl_sext<64,19>(tmp_1592_fu_29115_p2.read());
}

void ShuffleNetV2::thread_tmp_206_fu_11360_p1() {
    tmp_206_fu_11360_p1 = esl_zext<64,9>(tmp_205_reg_31502.read());
}

void ShuffleNetV2::thread_tmp_2072_cast_fu_29125_p1() {
    tmp_2072_cast_fu_29125_p1 = esl_sext<64,15>(tmp_1597_reg_37216.read());
}

void ShuffleNetV2::thread_tmp_207_fu_11355_p2() {
    tmp_207_fu_11355_p2 = (!tmp_204_fu_11334_p2.read().is_01() || !i27_cast_reg_31476.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_204_fu_11334_p2.read()) + sc_biguint<7>(i27_cast_reg_31476.read()));
}

void ShuffleNetV2::thread_tmp_2080_cast_fu_29373_p1() {
    tmp_2080_cast_fu_29373_p1 = esl_sext<15,14>(tmp_1603_fu_29367_p2.read());
}

void ShuffleNetV2::thread_tmp_2084_cast_fu_29444_p1() {
    tmp_2084_cast_fu_29444_p1 = esl_zext<64,15>(tmp_1607_reg_37341.read());
}

void ShuffleNetV2::thread_tmp_2087_cast_fu_29427_p1() {
    tmp_2087_cast_fu_29427_p1 = esl_sext<36,35>(tmp_1610_fu_29421_p2.read());
}

void ShuffleNetV2::thread_tmp_208_fu_11367_p1() {
    tmp_208_fu_11367_p1 = esl_zext<64,32>(tmp_285_cast_fu_11364_p1.read());
}

void ShuffleNetV2::thread_tmp_2091_cast_fu_29465_p1() {
    tmp_2091_cast_fu_29465_p1 = esl_zext<64,11>(tmp_1615_reg_37361.read());
}

void ShuffleNetV2::thread_tmp_2094_cast_fu_29957_p1() {
    tmp_2094_cast_fu_29957_p1 = esl_sext<12,11>(tmp_1618_fu_29951_p2.read());
}

void ShuffleNetV2::thread_tmp_209_fu_11141_p2() {
    tmp_209_fu_11141_p2 = (!p_shl4_cast_fu_11125_p1.read().is_01() || !p_shl5_cast_fu_11137_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl4_cast_fu_11125_p1.read()) - sc_biguint<8>(p_shl5_cast_fu_11137_p1.read()));
}

void ShuffleNetV2::thread_tmp_2102_cast_fu_29808_p1() {
    tmp_2102_cast_fu_29808_p1 = esl_sext<64,19>(tmp_1624_fu_29803_p2.read());
}

void ShuffleNetV2::thread_tmp_2109_cast_fu_29813_p1() {
    tmp_2109_cast_fu_29813_p1 = esl_sext<64,15>(tmp_1629_reg_37462.read());
}

void ShuffleNetV2::thread_tmp_210_fu_11157_p2() {
    tmp_210_fu_11157_p2 = (!tmp1_fu_11151_p2.read().is_01() || !co54_cast_reg_31411.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp1_fu_11151_p2.read()) + sc_biguint<9>(co54_cast_reg_31411.read()));
}

void ShuffleNetV2::thread_tmp_2111_cast_fu_30058_p1() {
    tmp_2111_cast_fu_30058_p1 = esl_zext<11,10>(tmp_1630_fu_30050_p3.read());
}

void ShuffleNetV2::thread_tmp_2114_cast_fu_30092_p1() {
    tmp_2114_cast_fu_30092_p1 = esl_sext<13,12>(tmp_1633_fu_30086_p2.read());
}

void ShuffleNetV2::thread_tmp_211_cast_fu_9177_p1() {
    tmp_211_cast_fu_9177_p1 = esl_sext<8,7>(tmp_149_fu_9169_p3.read());
}

void ShuffleNetV2::thread_tmp_211_fu_11186_p2() {
    tmp_211_fu_11186_p2 = (!p_shl6_cast_fu_11170_p1.read().is_01() || !p_shl7_cast_fu_11182_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl6_cast_fu_11170_p1.read()) - sc_biguint<7>(p_shl7_cast_fu_11182_p1.read()));
}

void ShuffleNetV2::thread_tmp_2120_cast_fu_30223_p1() {
    tmp_2120_cast_fu_30223_p1 = esl_zext<14,13>(tmp_1638_fu_30215_p3.read());
}

void ShuffleNetV2::thread_tmp_2127_cast_fu_30152_p3() {
    tmp_2127_cast_fu_30152_p3 = esl_concat<11,2>(tmp_1642_fu_30147_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2128_cast_fu_30033_p1() {
    tmp_2128_cast_fu_30033_p1 = esl_zext<64,14>(tmp_1643_fu_30028_p2.read());
}

void ShuffleNetV2::thread_tmp_2129_cast_fu_30253_p1() {
    tmp_2129_cast_fu_30253_p1 = esl_zext<64,14>(tmp_1644_fu_30248_p2.read());
}

void ShuffleNetV2::thread_tmp_212_fu_11192_p2() {
    tmp_212_fu_11192_p2 = (!tmp_211_fu_11186_p2.read().is_01() || !tmp_278_cast_reg_31429.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_211_fu_11186_p2.read()) + sc_biguint<7>(tmp_278_cast_reg_31429.read()));
}

void ShuffleNetV2::thread_tmp_2130_cast_fu_30181_p1() {
    tmp_2130_cast_fu_30181_p1 = esl_zext<64,14>(tmp_1645_fu_30176_p2.read());
}

void ShuffleNetV2::thread_tmp_2131_cast_fu_30195_p1() {
    tmp_2131_cast_fu_30195_p1 = esl_zext<64,13>(tmp_1646_reg_37606.read());
}

void ShuffleNetV2::thread_tmp_213_cast1_fu_11404_p1() {
    tmp_213_cast1_fu_11404_p1 = esl_zext<36,2>(w44_reg_3937.read());
}

void ShuffleNetV2::thread_tmp_213_cast_fu_11408_p1() {
    tmp_213_cast_fu_11408_p1 = esl_zext<12,2>(w44_reg_3937.read());
}

void ShuffleNetV2::thread_tmp_213_fu_12313_p1() {
    tmp_213_fu_12313_p1 = tmp_884_fu_12304_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_214_fu_11770_p2() {
    tmp_214_fu_11770_p2 = (!p_shl10_cast_fu_11754_p1.read().is_01() || !p_shl11_cast_fu_11766_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_cast_fu_11754_p1.read()) - sc_biguint<7>(p_shl11_cast_fu_11766_p1.read()));
}

void ShuffleNetV2::thread_tmp_215_fu_11684_p2() {
    tmp_215_fu_11684_p2 = (!p_shl8_cast_fu_11668_p1.read().is_01() || !p_shl9_cast_fu_11680_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_cast_fu_11668_p1.read()) - sc_biguint<7>(p_shl9_cast_fu_11680_p1.read()));
}

void ShuffleNetV2::thread_tmp_216_fu_11700_p2() {
    tmp_216_fu_11700_p2 = (!i29_cast607_cast_reg_31621.read().is_01() || !tmp4_fu_11694_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i29_cast607_cast_reg_31621.read()) + sc_biguint<8>(tmp4_fu_11694_p2.read()));
}

void ShuffleNetV2::thread_tmp_217_fu_11713_p1() {
    tmp_217_fu_11713_p1 = esl_zext<64,9>(tmp_301_cast_fu_11710_p1.read());
}

void ShuffleNetV2::thread_tmp_218_fu_11705_p2() {
    tmp_218_fu_11705_p2 = (!tmp_215_fu_11684_p2.read().is_01() || !i29_cast_reg_31616.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_215_fu_11684_p2.read()) + sc_biguint<7>(i29_cast_reg_31616.read()));
}

void ShuffleNetV2::thread_tmp_219_fu_11721_p1() {
    tmp_219_fu_11721_p1 = esl_zext<64,32>(tmp_303_cast_fu_11718_p1.read());
}

void ShuffleNetV2::thread_tmp_220_cast1_fu_11424_p1() {
    tmp_220_cast1_fu_11424_p1 = esl_zext<10,2>(h44_reg_3948.read());
}

void ShuffleNetV2::thread_tmp_220_cast_fu_11428_p1() {
    tmp_220_cast_fu_11428_p1 = esl_zext<15,2>(h44_reg_3948.read());
}

void ShuffleNetV2::thread_tmp_220_fu_12742_p1() {
    tmp_220_fu_12742_p1 = k5_reg_4157.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_221_cast_fu_11806_p1() {
    tmp_221_cast_fu_11806_p1 = esl_zext<16,5>(ci28_reg_4003.read());
}

void ShuffleNetV2::thread_tmp_221_fu_12545_p1() {
    tmp_221_fu_12545_p1 = i42_reg_4135.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_222_fu_11810_p2() {
    tmp_222_fu_11810_p2 = (!tmp_214_reg_31670.read().is_01() || !ci28_cast_fu_11790_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_214_reg_31670.read()) + sc_biguint<7>(ci28_cast_fu_11790_p1.read()));
}

void ShuffleNetV2::thread_tmp_223_cast_fu_11815_p1() {
    tmp_223_cast_fu_11815_p1 = esl_sext<13,7>(tmp_222_fu_11810_p2.read());
}

void ShuffleNetV2::thread_tmp_223_fu_13035_p1() {
    tmp_223_fu_13035_p1 = co66_reg_4201.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_224_cast_fu_9660_p1() {
    tmp_224_cast_fu_9660_p1 = esl_sext<8,7>(tmp_158_fu_9654_p2.read());
}

void ShuffleNetV2::thread_tmp_224_fu_11472_p2() {
    tmp_224_fu_11472_p2 = (!p_shl14_cast_fu_11456_p1.read().is_01() || !p_shl15_cast_fu_11468_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl14_cast_fu_11456_p1.read()) - sc_biguint<7>(p_shl15_cast_fu_11468_p1.read()));
}

void ShuffleNetV2::thread_tmp_225_fu_11488_p2() {
    tmp_225_fu_11488_p2 = (!tmp3_fu_11482_p2.read().is_01() || !co57_cast1_reg_31522.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp3_fu_11482_p2.read()) + sc_biguint<8>(co57_cast1_reg_31522.read()));
}

void ShuffleNetV2::thread_tmp_226_cast_fu_11498_p1() {
    tmp_226_cast_fu_11498_p1 = esl_zext<11,8>(tmp_225_reg_31579.read());
}

void ShuffleNetV2::thread_tmp_226_fu_12915_p3() {
    tmp_226_fu_12915_p3 = esl_concat<11,3>(tmp_901_fu_12910_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_227_fu_11493_p2() {
    tmp_227_fu_11493_p2 = (!co57_cast_reg_31517.read().is_01() || !tmp_224_fu_11472_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co57_cast_reg_31517.read()) + sc_biguint<7>(tmp_224_fu_11472_p2.read()));
}

void ShuffleNetV2::thread_tmp_228_cast_fu_11557_p1() {
    tmp_228_cast_fu_11557_p1 = esl_zext<35,32>(tmp_322_cast_fu_11554_p1.read());
}

void ShuffleNetV2::thread_tmp_228_fu_12927_p3() {
    tmp_228_fu_12927_p3 = esl_concat<11,1>(tmp_901_fu_12910_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_229_fu_12052_p2() {
    tmp_229_fu_12052_p2 = (!p_shl12_cast_fu_12036_p1.read().is_01() || !p_shl13_cast_fu_12048_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl12_cast_fu_12036_p1.read()) - sc_biguint<7>(p_shl13_cast_fu_12048_p1.read()));
}

void ShuffleNetV2::thread_tmp_230_fu_12068_p2() {
    tmp_230_fu_12068_p2 = (!i32_cast594_cast_reg_31727.read().is_01() || !tmp6_fu_12062_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i32_cast594_cast_reg_31727.read()) + sc_biguint<8>(tmp6_fu_12062_p2.read()));
}

void ShuffleNetV2::thread_tmp_231_fu_12081_p1() {
    tmp_231_fu_12081_p1 = esl_zext<64,9>(tmp_311_cast_fu_12078_p1.read());
}

void ShuffleNetV2::thread_tmp_232_fu_12073_p2() {
    tmp_232_fu_12073_p2 = (!tmp_229_fu_12052_p2.read().is_01() || !i32_cast_reg_31722.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_229_fu_12052_p2.read()) + sc_biguint<7>(i32_cast_reg_31722.read()));
}

void ShuffleNetV2::thread_tmp_233_fu_12089_p1() {
    tmp_233_fu_12089_p1 = esl_zext<64,32>(tmp_313_cast_fu_12086_p1.read());
}

void ShuffleNetV2::thread_tmp_234_fu_11859_p2() {
    tmp_234_fu_11859_p2 = (!p_shl16_cast_fu_11843_p1.read().is_01() || !p_shl17_cast_fu_11855_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl16_cast_fu_11843_p1.read()) - sc_biguint<8>(p_shl17_cast_fu_11855_p1.read()));
}

void ShuffleNetV2::thread_tmp_235_fu_11875_p2() {
    tmp_235_fu_11875_p2 = (!tmp5_fu_11869_p2.read().is_01() || !co59_cast_reg_31657.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp5_fu_11869_p2.read()) + sc_biguint<9>(co59_cast_reg_31657.read()));
}

void ShuffleNetV2::thread_tmp_236_fu_11904_p2() {
    tmp_236_fu_11904_p2 = (!p_shl18_cast_fu_11888_p1.read().is_01() || !p_shl19_cast_fu_11900_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl18_cast_fu_11888_p1.read()) - sc_biguint<7>(p_shl19_cast_fu_11900_p1.read()));
}

void ShuffleNetV2::thread_tmp_237_fu_11910_p2() {
    tmp_237_fu_11910_p2 = (!tmp_236_fu_11904_p2.read().is_01() || !tmp_307_cast_reg_31675.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_236_fu_11904_p2.read()) + sc_biguint<7>(tmp_307_cast_reg_31675.read()));
}

void ShuffleNetV2::thread_tmp_238_cast1_fu_12126_p1() {
    tmp_238_cast1_fu_12126_p1 = esl_zext<36,2>(w46_reg_4058.read());
}

void ShuffleNetV2::thread_tmp_238_cast_fu_12130_p1() {
    tmp_238_cast_fu_12130_p1 = esl_zext<11,2>(w46_reg_4058.read());
}

void ShuffleNetV2::thread_tmp_238_fu_12950_p3() {
    tmp_238_fu_12950_p3 = esl_concat<10,3>(tmp_903_fu_12945_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_239_fu_12484_p2() {
    tmp_239_fu_12484_p2 = (!p_shl22_cast_fu_12468_p1.read().is_01() || !p_shl23_cast_fu_12480_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl22_cast_fu_12468_p1.read()) - sc_biguint<7>(p_shl23_cast_fu_12480_p1.read()));
}

void ShuffleNetV2::thread_tmp_240_fu_12402_p2() {
    tmp_240_fu_12402_p2 = (!p_shl20_cast_fu_12386_p1.read().is_01() || !p_shl21_cast_fu_12398_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl20_cast_fu_12386_p1.read()) - sc_biguint<7>(p_shl21_cast_fu_12398_p1.read()));
}

void ShuffleNetV2::thread_tmp_241_fu_12418_p2() {
    tmp_241_fu_12418_p2 = (!i37_cast1_reg_31867.read().is_01() || !tmp8_fu_12412_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i37_cast1_reg_31867.read()) + sc_biguint<10>(tmp8_fu_12412_p2.read()));
}

void ShuffleNetV2::thread_tmp_242_fu_12428_p1() {
    tmp_242_fu_12428_p1 = esl_zext<64,10>(tmp_241_reg_31888.read());
}

void ShuffleNetV2::thread_tmp_243_fu_12423_p2() {
    tmp_243_fu_12423_p2 = (!tmp_240_fu_12402_p2.read().is_01() || !i37_cast_reg_31862.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_240_fu_12402_p2.read()) + sc_biguint<7>(i37_cast_reg_31862.read()));
}

void ShuffleNetV2::thread_tmp_244_fu_12435_p1() {
    tmp_244_fu_12435_p1 = esl_zext<64,32>(tmp_336_cast_fu_12432_p1.read());
}

void ShuffleNetV2::thread_tmp_245_cast1_fu_12146_p1() {
    tmp_245_cast1_fu_12146_p1 = esl_zext<10,2>(h46_reg_4069.read());
}

void ShuffleNetV2::thread_tmp_245_cast_fu_12150_p1() {
    tmp_245_cast_fu_12150_p1 = esl_zext<15,2>(h46_reg_4069.read());
}

void ShuffleNetV2::thread_tmp_245_fu_12962_p3() {
    tmp_245_fu_12962_p3 = esl_concat<10,1>(tmp_903_fu_12945_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_246_cast_fu_12520_p1() {
    tmp_246_cast_fu_12520_p1 = esl_zext<17,5>(ci30_reg_4124.read());
}

void ShuffleNetV2::thread_tmp_246_fu_13317_p1() {
    tmp_246_fu_13317_p1 = k6_reg_4245.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_247_fu_12524_p2() {
    tmp_247_fu_12524_p2 = (!tmp_239_reg_31916.read().is_01() || !ci30_cast_fu_12504_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_239_reg_31916.read()) + sc_biguint<7>(ci30_cast_fu_12504_p1.read()));
}

void ShuffleNetV2::thread_tmp_248_cast_fu_12529_p1() {
    tmp_248_cast_fu_12529_p1 = esl_sext<13,7>(tmp_247_fu_12524_p2.read());
}

void ShuffleNetV2::thread_tmp_248_fu_13124_p1() {
    tmp_248_fu_13124_p1 = i46_reg_4223.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_249_fu_12194_p2() {
    tmp_249_fu_12194_p2 = (!p_shl26_cast_fu_12178_p1.read().is_01() || !p_shl27_cast_fu_12190_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl26_cast_fu_12178_p1.read()) - sc_biguint<7>(p_shl27_cast_fu_12190_p1.read()));
}

void ShuffleNetV2::thread_tmp_250_fu_12210_p2() {
    tmp_250_fu_12210_p2 = (!tmp7_fu_12204_p2.read().is_01() || !co61_cast1_reg_31768.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp7_fu_12204_p2.read()) + sc_biguint<8>(co61_cast1_reg_31768.read()));
}

void ShuffleNetV2::thread_tmp_251_cast_fu_12220_p1() {
    tmp_251_cast_fu_12220_p1 = esl_zext<11,8>(tmp_250_reg_31825.read());
}

void ShuffleNetV2::thread_tmp_251_fu_13749_p1() {
    tmp_251_fu_13749_p1 = co70_reg_4322.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_252_fu_12215_p2() {
    tmp_252_fu_12215_p2 = (!co61_cast_reg_31763.read().is_01() || !tmp_249_fu_12194_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co61_cast_reg_31763.read()) + sc_biguint<7>(tmp_249_fu_12194_p2.read()));
}

void ShuffleNetV2::thread_tmp_253_cast_fu_12275_p1() {
    tmp_253_cast_fu_12275_p1 = esl_zext<35,32>(tmp_355_cast_fu_12272_p1.read());
}

void ShuffleNetV2::thread_tmp_253_fu_13667_p1() {
    tmp_253_fu_13667_p1 = k7_reg_4311.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_254_fu_12824_p2() {
    tmp_254_fu_12824_p2 = (!co65_cast_fu_12808_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co65_cast_fu_12808_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_255_fu_12770_p2() {
    tmp_255_fu_12770_p2 = (!p_shl24_cast_fu_12754_p1.read().is_01() || !p_shl25_cast_fu_12766_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl24_cast_fu_12754_p1.read()) - sc_biguint<7>(p_shl25_cast_fu_12766_p1.read()));
}

void ShuffleNetV2::thread_tmp_256_fu_12786_p2() {
    tmp_256_fu_12786_p2 = (!i39_cast1_reg_31973.read().is_01() || !tmp10_fu_12780_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i39_cast1_reg_31973.read()) + sc_biguint<10>(tmp10_fu_12780_p2.read()));
}

void ShuffleNetV2::thread_tmp_257_fu_12796_p1() {
    tmp_257_fu_12796_p1 = esl_zext<64,10>(tmp_256_reg_31994.read());
}

void ShuffleNetV2::thread_tmp_258_fu_12791_p2() {
    tmp_258_fu_12791_p2 = (!tmp_255_fu_12770_p2.read().is_01() || !i39_cast_reg_31968.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_255_fu_12770_p2.read()) + sc_biguint<7>(i39_cast_reg_31968.read()));
}

void ShuffleNetV2::thread_tmp_259_fu_12803_p1() {
    tmp_259_fu_12803_p1 = esl_zext<64,32>(tmp_346_cast_fu_12800_p1.read());
}

void ShuffleNetV2::thread_tmp_260_cast_fu_10533_p1() {
    tmp_260_cast_fu_10533_p1 = esl_sext<7,6>(tmp_186_fu_10525_p3.read());
}

void ShuffleNetV2::thread_tmp_260_fu_12573_p2() {
    tmp_260_fu_12573_p2 = (!p_shl30_cast_fu_12557_p1.read().is_01() || !p_shl31_cast_fu_12569_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl30_cast_fu_12557_p1.read()) - sc_biguint<8>(p_shl31_cast_fu_12569_p1.read()));
}

void ShuffleNetV2::thread_tmp_261_fu_12593_p2() {
    tmp_261_fu_12593_p2 = (!tmp9_cast_fu_12589_p1.read().is_01() || !co63_cast_reg_31903.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp9_cast_fu_12589_p1.read()) + sc_biguint<10>(co63_cast_reg_31903.read()));
}

void ShuffleNetV2::thread_tmp_262_fu_12622_p2() {
    tmp_262_fu_12622_p2 = (!p_shl32_cast_fu_12606_p1.read().is_01() || !p_shl33_cast_fu_12618_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl32_cast_fu_12606_p1.read()) - sc_biguint<7>(p_shl33_cast_fu_12618_p1.read()));
}

void ShuffleNetV2::thread_tmp_263_fu_12628_p2() {
    tmp_263_fu_12628_p2 = (!tmp_262_fu_12622_p2.read().is_01() || !tmp_340_cast_reg_31921.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_262_fu_12622_p2.read()) + sc_biguint<7>(tmp_340_cast_reg_31921.read()));
}

void ShuffleNetV2::thread_tmp_264_fu_13063_p2() {
    tmp_264_fu_13063_p2 = (!p_shl28_cast_fu_13047_p1.read().is_01() || !p_shl29_cast_fu_13059_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl28_cast_fu_13047_p1.read()) - sc_biguint<7>(p_shl29_cast_fu_13059_p1.read()));
}

void ShuffleNetV2::thread_tmp_265_cast1_fu_12902_p1() {
    tmp_265_cast1_fu_12902_p1 = esl_zext<10,4>(h_49_fu_12896_p2.read());
}

void ShuffleNetV2::thread_tmp_265_cast_fu_12906_p1() {
    tmp_265_cast_fu_12906_p1 = esl_zext<11,4>(h_49_fu_12896_p2.read());
}

void ShuffleNetV2::thread_tmp_265_fu_13455_p1() {
    tmp_265_fu_13455_p1 = i52_reg_4289.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_266_cast_fu_13099_p1() {
    tmp_266_cast_fu_13099_p1 = esl_zext<17,5>(ci32_reg_4212.read());
}

void ShuffleNetV2::thread_tmp_266_fu_13602_p1() {
    tmp_266_fu_13602_p1 = tmp_923_fu_13597_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_267_fu_13103_p2() {
    tmp_267_fu_13103_p2 = (!tmp_264_reg_32076.read().is_01() || !ci32_cast_fu_13083_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_264_reg_32076.read()) + sc_biguint<7>(ci32_cast_fu_13083_p1.read()));
}

void ShuffleNetV2::thread_tmp_268_cast_fu_13108_p1() {
    tmp_268_cast_fu_13108_p1 = esl_sext<13,7>(tmp_267_fu_13103_p2.read());
}

void ShuffleNetV2::thread_tmp_268_fu_13606_p1() {
    tmp_268_fu_13606_p1 = tmp_923_fu_13597_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_269_cast1_fu_12992_p1() {
    tmp_269_cast1_fu_12992_p1 = esl_zext<14,4>(w_49_fu_12986_p2.read());
}

void ShuffleNetV2::thread_tmp_269_cast_fu_12996_p1() {
    tmp_269_cast_fu_12996_p1 = esl_zext<15,4>(w_49_fu_12986_p2.read());
}

void ShuffleNetV2::thread_tmp_269_fu_14031_p1() {
    tmp_269_fu_14031_p1 = k8_reg_4366.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_270_fu_13345_p2() {
    tmp_270_fu_13345_p2 = (!p_shl34_cast_fu_13329_p1.read().is_01() || !p_shl35_cast_fu_13341_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl34_cast_fu_13329_p1.read()) - sc_biguint<7>(p_shl35_cast_fu_13341_p1.read()));
}

void ShuffleNetV2::thread_tmp_271_fu_13361_p2() {
    tmp_271_fu_13361_p2 = (!i45_cast1_reg_32133.read().is_01() || !tmp12_fu_13355_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i45_cast1_reg_32133.read()) + sc_biguint<10>(tmp12_fu_13355_p2.read()));
}

void ShuffleNetV2::thread_tmp_272_fu_13371_p1() {
    tmp_272_fu_13371_p1 = esl_zext<64,10>(tmp_271_reg_32154.read());
}

void ShuffleNetV2::thread_tmp_273_fu_13366_p2() {
    tmp_273_fu_13366_p2 = (!tmp_270_fu_13345_p2.read().is_01() || !i45_cast_reg_32128.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_270_fu_13345_p2.read()) + sc_biguint<7>(i45_cast_reg_32128.read()));
}

void ShuffleNetV2::thread_tmp_274_fu_13378_p1() {
    tmp_274_fu_13378_p1 = esl_zext<64,32>(tmp_375_cast_fu_13375_p1.read());
}

void ShuffleNetV2::thread_tmp_275_fu_13152_p2() {
    tmp_275_fu_13152_p2 = (!p_shl36_cast_fu_13136_p1.read().is_01() || !p_shl37_cast_fu_13148_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl36_cast_fu_13136_p1.read()) - sc_biguint<8>(p_shl37_cast_fu_13148_p1.read()));
}

void ShuffleNetV2::thread_tmp_276_fu_13168_p2() {
    tmp_276_fu_13168_p2 = (!tmp11_fu_13162_p2.read().is_01() || !co66_cast_reg_32063.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp11_fu_13162_p2.read()) + sc_biguint<10>(co66_cast_reg_32063.read()));
}

void ShuffleNetV2::thread_tmp_277_fu_13197_p2() {
    tmp_277_fu_13197_p2 = (!p_shl38_cast_fu_13181_p1.read().is_01() || !p_shl39_cast_fu_13193_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl38_cast_fu_13181_p1.read()) - sc_biguint<7>(p_shl39_cast_fu_13193_p1.read()));
}

void ShuffleNetV2::thread_tmp_278_cast_fu_11068_p1() {
    tmp_278_cast_fu_11068_p1 = esl_zext<7,4>(p_lshr_f_cast_fu_11058_p4.read());
}

void ShuffleNetV2::thread_tmp_278_fu_13203_p2() {
    tmp_278_fu_13203_p2 = (!tmp_277_fu_13197_p2.read().is_01() || !tmp_362_cast_reg_32081.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_277_fu_13197_p2.read()) + sc_biguint<7>(tmp_362_cast_reg_32081.read()));
}

void ShuffleNetV2::thread_tmp_279_cast1_fu_13415_p1() {
    tmp_279_cast1_fu_13415_p1 = esl_zext<36,2>(w49_reg_4267.read());
}

void ShuffleNetV2::thread_tmp_279_cast_fu_13419_p1() {
    tmp_279_cast_fu_13419_p1 = esl_zext<13,2>(w49_reg_4267.read());
}

void ShuffleNetV2::thread_tmp_279_fu_13838_p1() {
    tmp_279_fu_13838_p1 = i54_reg_4344.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_280_fu_13777_p2() {
    tmp_280_fu_13777_p2 = (!p_shl42_cast_fu_13761_p1.read().is_01() || !p_shl43_cast_fu_13773_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl42_cast_fu_13761_p1.read()) - sc_biguint<7>(p_shl43_cast_fu_13773_p1.read()));
}

void ShuffleNetV2::thread_tmp_281_cast_fu_11340_p1() {
    tmp_281_cast_fu_11340_p1 = esl_sext<9,7>(tmp_204_fu_11334_p2.read());
}

void ShuffleNetV2::thread_tmp_281_fu_13695_p2() {
    tmp_281_fu_13695_p2 = (!p_shl40_cast_fu_13679_p1.read().is_01() || !p_shl41_cast_fu_13691_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl40_cast_fu_13679_p1.read()) - sc_biguint<7>(p_shl41_cast_fu_13691_p1.read()));
}

void ShuffleNetV2::thread_tmp_282_fu_13711_p2() {
    tmp_282_fu_13711_p2 = (!i49_cast1_reg_32273.read().is_01() || !tmp14_fu_13705_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i49_cast1_reg_32273.read()) + sc_biguint<10>(tmp14_fu_13705_p2.read()));
}

void ShuffleNetV2::thread_tmp_283_fu_13721_p1() {
    tmp_283_fu_13721_p1 = esl_zext<64,10>(tmp_282_reg_32294.read());
}

void ShuffleNetV2::thread_tmp_284_fu_13716_p2() {
    tmp_284_fu_13716_p2 = (!tmp_281_fu_13695_p2.read().is_01() || !i49_cast_reg_32268.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_281_fu_13695_p2.read()) + sc_biguint<7>(i49_cast_reg_32268.read()));
}

void ShuffleNetV2::thread_tmp_285_cast_fu_11364_p1() {
    tmp_285_cast_fu_11364_p1 = esl_sext<32,7>(tmp_207_reg_31507.read());
}

void ShuffleNetV2::thread_tmp_285_fu_13728_p1() {
    tmp_285_fu_13728_p1 = esl_zext<64,32>(tmp_393_cast_fu_13725_p1.read());
}

void ShuffleNetV2::thread_tmp_286_cast1_fu_13435_p1() {
    tmp_286_cast1_fu_13435_p1 = esl_zext<10,2>(h50_reg_4278.read());
}

void ShuffleNetV2::thread_tmp_286_cast_fu_13439_p1() {
    tmp_286_cast_fu_13439_p1 = esl_zext<15,2>(h50_reg_4278.read());
}

void ShuffleNetV2::thread_tmp_286_fu_14160_p3() {
    tmp_286_fu_14160_p3 = esl_concat<10,3>(tmp_943_fu_14155_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_287_cast_fu_13813_p1() {
    tmp_287_cast_fu_13813_p1 = esl_zext<17,5>(ci34_reg_4333.read());
}

void ShuffleNetV2::thread_tmp_287_fu_14172_p3() {
    tmp_287_fu_14172_p3 = esl_concat<10,1>(tmp_943_fu_14155_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_288_fu_13817_p2() {
    tmp_288_fu_13817_p2 = (!tmp_280_reg_32322.read().is_01() || !ci34_cast_fu_13797_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_280_reg_32322.read()) + sc_biguint<7>(ci34_cast_fu_13797_p1.read()));
}

void ShuffleNetV2::thread_tmp_289_cast_fu_13822_p1() {
    tmp_289_cast_fu_13822_p1 = esl_sext<13,7>(tmp_288_fu_13817_p2.read());
}

void ShuffleNetV2::thread_tmp_289_fu_14443_p1() {
    tmp_289_fu_14443_p1 = co76_reg_4443.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_290_fu_13483_p2() {
    tmp_290_fu_13483_p2 = (!p_shl46_cast_fu_13467_p1.read().is_01() || !p_shl47_cast_fu_13479_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl46_cast_fu_13467_p1.read()) - sc_biguint<7>(p_shl47_cast_fu_13479_p1.read()));
}

void ShuffleNetV2::thread_tmp_291_fu_13503_p2() {
    tmp_291_fu_13503_p2 = (!co69_cast1_reg_32174.read().is_01() || !tmp13_cast_fu_13499_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co69_cast1_reg_32174.read()) + sc_biguint<9>(tmp13_cast_fu_13499_p1.read()));
}

void ShuffleNetV2::thread_tmp_292_cast1_fu_13513_p1() {
    tmp_292_cast1_fu_13513_p1 = esl_zext<12,9>(tmp_291_reg_32231.read());
}

void ShuffleNetV2::thread_tmp_292_cast_fu_11147_p1() {
    tmp_292_cast_fu_11147_p1 = esl_sext<9,8>(tmp_209_fu_11141_p2.read());
}

void ShuffleNetV2::thread_tmp_292_fu_14323_p3() {
    tmp_292_fu_14323_p3 = esl_concat<10,3>(tmp_945_fu_14318_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_293_fu_13508_p2() {
    tmp_293_fu_13508_p2 = (!tmp_290_fu_13483_p2.read().is_01() || !co69_cast_reg_32169.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_290_fu_13483_p2.read()) + sc_biguint<7>(co69_cast_reg_32169.read()));
}

void ShuffleNetV2::thread_tmp_294_cast_fu_13568_p1() {
    tmp_294_cast_fu_13568_p1 = esl_zext<35,32>(tmp_412_cast_fu_13565_p1.read());
}

void ShuffleNetV2::thread_tmp_294_fu_14335_p3() {
    tmp_294_fu_14335_p3 = esl_concat<10,1>(tmp_945_fu_14318_p2.read(), ap_const_lv1_0);
}

}

