#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_1470_cast_fu_28624_p1() {
    tmp_1470_cast_fu_28624_p1 = esl_zext<32,15>(tmp_1045_fu_28619_p2.read());
}

void ShuffleNetV2::thread_tmp_1471_cast_fu_28634_p1() {
    tmp_1471_cast_fu_28634_p1 = esl_zext<32,14>(tmp_1046_reg_45513.read());
}

void ShuffleNetV2::thread_tmp_1480_cast_fu_28868_p1() {
    tmp_1480_cast_fu_28868_p1 = esl_sext<18,17>(tmp_1049_fu_28862_p2.read());
}

void ShuffleNetV2::thread_tmp_1481_cast_fu_28877_p1() {
    tmp_1481_cast_fu_28877_p1 = esl_sext<32,18>(tmp_1050_fu_28872_p2.read());
}

void ShuffleNetV2::thread_tmp_1487_cast_fu_28943_p1() {
    tmp_1487_cast_fu_28943_p1 = esl_sext<32,8>(tmp_1052_reg_45595.read());
}

void ShuffleNetV2::thread_tmp_1499_cast_fu_29315_p1() {
    tmp_1499_cast_fu_29315_p1 = esl_zext<32,10>(tmp_1057_reg_45719.read());
}

void ShuffleNetV2::thread_tmp_1502_cast_fu_29270_p1() {
    tmp_1502_cast_fu_29270_p1 = esl_sext<13,12>(tmp_1060_fu_29264_p2.read());
}

void ShuffleNetV2::thread_tmp_1503_cast_fu_29279_p1() {
    tmp_1503_cast_fu_29279_p1 = esl_sext<32,13>(tmp_1061_reg_45724.read());
}

void ShuffleNetV2::thread_tmp_1518_cast_fu_29653_p1() {
    tmp_1518_cast_fu_29653_p1 = esl_sext<18,17>(tmp_1069_fu_29647_p2.read());
}

void ShuffleNetV2::thread_tmp_1519_cast_fu_29662_p1() {
    tmp_1519_cast_fu_29662_p1 = esl_sext<32,18>(tmp_1070_fu_29657_p2.read());
}

void ShuffleNetV2::thread_tmp_1525_cast_fu_29728_p1() {
    tmp_1525_cast_fu_29728_p1 = esl_sext<32,8>(tmp_1072_reg_45855.read());
}

void ShuffleNetV2::thread_tmp_1546_cast_fu_29973_p1() {
    tmp_1546_cast_fu_29973_p1 = esl_zext<32,15>(tmp_1085_fu_29968_p2.read());
}

void ShuffleNetV2::thread_tmp_1547_cast_fu_30175_p1() {
    tmp_1547_cast_fu_30175_p1 = esl_zext<32,15>(tmp_1086_fu_30170_p2.read());
}

void ShuffleNetV2::thread_tmp_1548_cast_fu_30185_p1() {
    tmp_1548_cast_fu_30185_p1 = esl_zext<32,14>(tmp_1087_reg_45998.read());
}

void ShuffleNetV2::thread_tmp_1559_cast_fu_30427_p1() {
    tmp_1559_cast_fu_30427_p1 = esl_sext<18,17>(tmp_1092_fu_30421_p2.read());
}

void ShuffleNetV2::thread_tmp_1560_cast_fu_30436_p1() {
    tmp_1560_cast_fu_30436_p1 = esl_sext<32,18>(tmp_1093_fu_30431_p2.read());
}

void ShuffleNetV2::thread_tmp_1566_cast_fu_30502_p1() {
    tmp_1566_cast_fu_30502_p1 = esl_sext<32,8>(tmp_1095_reg_46080.read());
}

void ShuffleNetV2::thread_tmp_1578_cast_fu_30866_p1() {
    tmp_1578_cast_fu_30866_p1 = esl_zext<32,10>(tmp_1100_reg_46204.read());
}

void ShuffleNetV2::thread_tmp_1580_cast_fu_30821_p1() {
    tmp_1580_cast_fu_30821_p1 = esl_sext<14,13>(tmp_1102_fu_30815_p2.read());
}

void ShuffleNetV2::thread_tmp_1581_cast_fu_30830_p1() {
    tmp_1581_cast_fu_30830_p1 = esl_sext<32,14>(tmp_1103_reg_46209.read());
}

void ShuffleNetV2::thread_tmp_1598_cast_fu_31212_p1() {
    tmp_1598_cast_fu_31212_p1 = esl_sext<18,17>(tmp_1113_fu_31206_p2.read());
}

void ShuffleNetV2::thread_tmp_1599_cast_fu_31221_p1() {
    tmp_1599_cast_fu_31221_p1 = esl_sext<32,18>(tmp_1114_fu_31216_p2.read());
}

void ShuffleNetV2::thread_tmp_1605_cast_fu_31287_p1() {
    tmp_1605_cast_fu_31287_p1 = esl_sext<32,8>(tmp_1116_reg_46340.read());
}

void ShuffleNetV2::thread_tmp_1626_cast_fu_31536_p1() {
    tmp_1626_cast_fu_31536_p1 = esl_zext<32,15>(tmp_1129_fu_31531_p2.read());
}

void ShuffleNetV2::thread_tmp_1627_cast_fu_31738_p1() {
    tmp_1627_cast_fu_31738_p1 = esl_zext<32,15>(tmp_1130_fu_31733_p2.read());
}

void ShuffleNetV2::thread_tmp_1628_cast_fu_31748_p1() {
    tmp_1628_cast_fu_31748_p1 = esl_zext<32,14>(tmp_1131_reg_46483.read());
}

void ShuffleNetV2::thread_tmp_1639_cast_fu_31990_p1() {
    tmp_1639_cast_fu_31990_p1 = esl_sext<18,17>(tmp_1136_fu_31984_p2.read());
}

void ShuffleNetV2::thread_tmp_1640_cast_fu_31999_p1() {
    tmp_1640_cast_fu_31999_p1 = esl_sext<32,18>(tmp_1137_fu_31994_p2.read());
}

void ShuffleNetV2::thread_tmp_1646_cast_fu_32065_p1() {
    tmp_1646_cast_fu_32065_p1 = esl_sext<32,8>(tmp_1139_reg_46565.read());
}

void ShuffleNetV2::thread_tmp_1658_cast_fu_32429_p1() {
    tmp_1658_cast_fu_32429_p1 = esl_zext<32,10>(tmp_1144_reg_46689.read());
}

void ShuffleNetV2::thread_tmp_165_fu_17130_p2() {
    tmp_165_fu_17130_p2 = (!co35_cast_fu_17114_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co35_cast_fu_17114_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_1661_cast_fu_32393_p1() {
    tmp_1661_cast_fu_32393_p1 = esl_sext<32,13>(tmp_1147_reg_46694.read());
}

void ShuffleNetV2::thread_tmp_166_fu_17918_p2() {
    tmp_166_fu_17918_p2 = (!co48_cast_fu_17902_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co48_cast_fu_17902_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_1676_cast_fu_32779_p1() {
    tmp_1676_cast_fu_32779_p1 = esl_sext<19,18>(tmp_1155_fu_32773_p2.read());
}

void ShuffleNetV2::thread_tmp_1677_cast_fu_32788_p1() {
    tmp_1677_cast_fu_32788_p1 = esl_sext<32,19>(tmp_1156_fu_32783_p2.read());
}

void ShuffleNetV2::thread_tmp_1683_cast_fu_32854_p1() {
    tmp_1683_cast_fu_32854_p1 = esl_sext<32,8>(tmp_1158_reg_46825.read());
}

void ShuffleNetV2::thread_tmp_168_fu_18730_p2() {
    tmp_168_fu_18730_p2 = (!p_shl_cast_fu_18714_p1.read().is_01() || !p_shl1_cast_fu_18726_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl_cast_fu_18714_p1.read()) - sc_biguint<7>(p_shl1_cast_fu_18726_p1.read()));
}

void ShuffleNetV2::thread_tmp_1690_cast_fu_33103_p1() {
    tmp_1690_cast_fu_33103_p1 = esl_zext<32,15>(tmp_1161_fu_33098_p2.read());
}

void ShuffleNetV2::thread_tmp_1698_cast_fu_33326_p1() {
    tmp_1698_cast_fu_33326_p1 = esl_sext<19,18>(tmp_1164_fu_33320_p2.read());
}

void ShuffleNetV2::thread_tmp_1699_cast_fu_33335_p1() {
    tmp_1699_cast_fu_33335_p1 = esl_sext<32,19>(tmp_1165_fu_33330_p2.read());
}

void ShuffleNetV2::thread_tmp_169_cast_cast_fu_18746_p1() {
    tmp_169_cast_cast_fu_18746_p1 = esl_zext<9,4>(tmp_2231_fu_18736_p4.read());
}

void ShuffleNetV2::thread_tmp_1705_cast_fu_33401_p1() {
    tmp_1705_cast_fu_33401_p1 = esl_sext<32,10>(tmp_1167_reg_46996.read());
}

void ShuffleNetV2::thread_tmp_170_cast_fu_19084_p1() {
    tmp_170_cast_fu_19084_p1 = esl_sext<9,7>(tmp_170_fu_19078_p2.read());
}

void ShuffleNetV2::thread_tmp_170_fu_19078_p2() {
    tmp_170_fu_19078_p2 = (!p_shl2_cast_fu_19062_p1.read().is_01() || !p_shl3_cast_fu_19074_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl2_cast_fu_19062_p1.read()) - sc_biguint<7>(p_shl3_cast_fu_19074_p1.read()));
}

void ShuffleNetV2::thread_tmp_1717_cast_fu_33765_p1() {
    tmp_1717_cast_fu_33765_p1 = esl_zext<32,11>(tmp_1172_reg_47120.read());
}

void ShuffleNetV2::thread_tmp_171_cast_fu_19118_p1() {
    tmp_171_cast_fu_19118_p1 = esl_sext<32,7>(tmp_171_reg_42503.read());
}

void ShuffleNetV2::thread_tmp_171_fu_19088_p2() {
    tmp_171_fu_19088_p2 = (!tmp_170_fu_19078_p2.read().is_01() || !i37_cast1_reg_42482.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_170_fu_19078_p2.read()) + sc_biguint<7>(i37_cast1_reg_42482.read()));
}

void ShuffleNetV2::thread_tmp_1720_cast_fu_33729_p1() {
    tmp_1720_cast_fu_33729_p1 = esl_sext<32,13>(tmp_1175_reg_47125.read());
}

void ShuffleNetV2::thread_tmp_1731_cast_fu_34095_p1() {
    tmp_1731_cast_fu_34095_p1 = esl_sext<19,18>(tmp_1180_fu_34089_p2.read());
}

void ShuffleNetV2::thread_tmp_1732_cast_fu_34104_p1() {
    tmp_1732_cast_fu_34104_p1 = esl_sext<32,19>(tmp_1181_fu_34099_p2.read());
}

void ShuffleNetV2::thread_tmp_1738_cast_fu_34170_p1() {
    tmp_1738_cast_fu_34170_p1 = esl_sext<32,10>(tmp_1183_reg_47256.read());
}

void ShuffleNetV2::thread_tmp_173_cast_cast_fu_18775_p1() {
    tmp_173_cast_cast_fu_18775_p1 = esl_sext<8,7>(tmp_173_fu_18770_p2.read());
}

void ShuffleNetV2::thread_tmp_173_fu_18770_p2() {
    tmp_173_fu_18770_p2 = (!tmp_168_reg_42405.read().is_01() || !ci34_cast_fu_18750_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_reg_42405.read()) + sc_biguint<7>(ci34_cast_fu_18750_p1.read()));
}

void ShuffleNetV2::thread_tmp_174_cast_cast_fu_18825_p1() {
    tmp_174_cast_cast_fu_18825_p1 = esl_sext<9,7>(tmp_174_fu_18819_p2.read());
}

void ShuffleNetV2::thread_tmp_174_fu_18819_p2() {
    tmp_174_fu_18819_p2 = (!p_shl4_cast_fu_18803_p1.read().is_01() || !p_shl5_cast_fu_18815_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl4_cast_fu_18803_p1.read()) - sc_biguint<7>(p_shl5_cast_fu_18815_p1.read()));
}

void ShuffleNetV2::thread_tmp_1750_cast_fu_34538_p1() {
    tmp_1750_cast_fu_34538_p1 = esl_zext<32,11>(tmp_1188_reg_47380.read());
}

void ShuffleNetV2::thread_tmp_1753_cast_fu_34502_p1() {
    tmp_1753_cast_fu_34502_p1 = esl_sext<32,13>(tmp_1191_reg_47385.read());
}

void ShuffleNetV2::thread_tmp_1759_cast_fu_35100_p1() {
    tmp_1759_cast_fu_35100_p1 = esl_sext<12,11>(tmp_1196_fu_35094_p2.read());
}

void ShuffleNetV2::thread_tmp_175_cast_fu_18885_p1() {
    tmp_175_cast_fu_18885_p1 = esl_sext<10,9>(tmp_175_reg_42441.read());
}

void ShuffleNetV2::thread_tmp_175_fu_18829_p2() {
    tmp_175_fu_18829_p2 = (!tmp_174_cast_cast_fu_18825_p1.read().is_01() || !tmp_169_cast_cast_reg_42410.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_174_cast_cast_fu_18825_p1.read()) + sc_biguint<9>(tmp_169_cast_cast_reg_42410.read()));
}

void ShuffleNetV2::thread_tmp_1762_cast_fu_35156_p1() {
    tmp_1762_cast_fu_35156_p1 = esl_sext<13,12>(tmp_1199_fu_35150_p2.read());
}

void ShuffleNetV2::thread_tmp_176_cast_fu_18864_p1() {
    tmp_176_cast_fu_18864_p1 = esl_sext<9,8>(tmp_176_fu_18858_p2.read());
}

void ShuffleNetV2::thread_tmp_176_fu_18858_p2() {
    tmp_176_fu_18858_p2 = (!p_shl6_cast_fu_18842_p1.read().is_01() || !p_shl7_cast_fu_18854_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl6_cast_fu_18842_p1.read()) - sc_biguint<8>(p_shl7_cast_fu_18854_p1.read()));
}

void ShuffleNetV2::thread_tmp_1770_cast_fu_34864_p1() {
    tmp_1770_cast_fu_34864_p1 = esl_sext<19,18>(tmp_1202_fu_34858_p2.read());
}

void ShuffleNetV2::thread_tmp_1771_cast_fu_34873_p1() {
    tmp_1771_cast_fu_34873_p1 = esl_sext<32,19>(tmp_1203_fu_34868_p2.read());
}

void ShuffleNetV2::thread_tmp_1777_cast_fu_34939_p1() {
    tmp_1777_cast_fu_34939_p1 = esl_sext<32,10>(tmp_1205_reg_47516.read());
}

void ShuffleNetV2::thread_tmp_1788_cast_fu_35267_p1() {
    tmp_1788_cast_fu_35267_p1 = esl_zext<32,14>(tmp_1210_fu_35262_p2.read());
}

void ShuffleNetV2::thread_tmp_1789_cast_fu_35277_p1() {
    tmp_1789_cast_fu_35277_p1 = esl_zext<32,13>(tmp_1211_reg_47615.read());
}

void ShuffleNetV2::thread_tmp_178_cast_cast_fu_19425_p1() {
    tmp_178_cast_cast_fu_19425_p1 = esl_sext<8,7>(tmp_178_fu_19419_p2.read());
}

void ShuffleNetV2::thread_tmp_178_fu_19419_p2() {
    tmp_178_fu_19419_p2 = (!p_shl8_cast_fu_19403_p1.read().is_01() || !p_shl9_cast_fu_19415_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_cast_fu_19403_p1.read()) - sc_biguint<7>(p_shl9_cast_fu_19415_p1.read()));
}

void ShuffleNetV2::thread_tmp_1797_cast_fu_35499_p1() {
    tmp_1797_cast_fu_35499_p1 = esl_sext<19,18>(tmp_1214_fu_35493_p2.read());
}

void ShuffleNetV2::thread_tmp_1798_cast_fu_35508_p1() {
    tmp_1798_cast_fu_35508_p1 = esl_sext<32,19>(tmp_1215_fu_35503_p2.read());
}

void ShuffleNetV2::thread_tmp_179_cast_fu_19463_p1() {
    tmp_179_cast_fu_19463_p1 = esl_sext<32,7>(tmp_179_reg_42636.read());
}

void ShuffleNetV2::thread_tmp_179_fu_19429_p2() {
    tmp_179_fu_19429_p2 = (!tmp_178_fu_19419_p2.read().is_01() || !i39_cast_reg_42615.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_178_fu_19419_p2.read()) + sc_biguint<7>(i39_cast_reg_42615.read()));
}

void ShuffleNetV2::thread_tmp_1804_cast_fu_35574_p1() {
    tmp_1804_cast_fu_35574_p1 = esl_sext<32,10>(tmp_1217_reg_47697.read());
}

void ShuffleNetV2::thread_tmp_1816_cast_fu_35934_p1() {
    tmp_1816_cast_fu_35934_p1 = esl_zext<32,11>(tmp_1222_reg_47821.read());
}

void ShuffleNetV2::thread_tmp_1819_cast_fu_35898_p1() {
    tmp_1819_cast_fu_35898_p1 = esl_sext<32,13>(tmp_1225_reg_47826.read());
}

void ShuffleNetV2::thread_tmp_1825_cast_fu_36504_p1() {
    tmp_1825_cast_fu_36504_p1 = esl_sext<12,11>(tmp_1230_fu_36498_p2.read());
}

void ShuffleNetV2::thread_tmp_182_fu_19511_p2() {
    tmp_182_fu_19511_p2 = (!p_shl10_cast_fu_19495_p1.read().is_01() || !p_shl11_cast_fu_19507_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_cast_fu_19495_p1.read()) - sc_biguint<7>(p_shl11_cast_fu_19507_p1.read()));
}

void ShuffleNetV2::thread_tmp_1835_cast_fu_36268_p1() {
    tmp_1835_cast_fu_36268_p1 = esl_sext<19,18>(tmp_1235_fu_36262_p2.read());
}

void ShuffleNetV2::thread_tmp_1836_cast_fu_36277_p1() {
    tmp_1836_cast_fu_36277_p1 = esl_sext<32,19>(tmp_1236_fu_36272_p2.read());
}

void ShuffleNetV2::thread_tmp_183_cast_cast_fu_19527_p1() {
    tmp_183_cast_cast_fu_19527_p1 = esl_zext<9,4>(tmp_2240_fu_19517_p4.read());
}

void ShuffleNetV2::thread_tmp_1842_cast_fu_36343_p1() {
    tmp_1842_cast_fu_36343_p1 = esl_sext<32,10>(tmp_1238_reg_47957.read());
}

void ShuffleNetV2::thread_tmp_1845_cast_fu_36627_p1() {
    tmp_1845_cast_fu_36627_p1 = esl_sext<12,11>(tmp_1241_fu_36621_p2.read());
}

void ShuffleNetV2::thread_tmp_1848_cast_fu_36683_p1() {
    tmp_1848_cast_fu_36683_p1 = esl_sext<13,12>(tmp_1244_fu_36677_p2.read());
}

void ShuffleNetV2::thread_tmp_184_cast_fu_19228_p1() {
    tmp_184_cast_fu_19228_p1 = esl_sext<8,7>(tmp_184_fu_19222_p2.read());
}

void ShuffleNetV2::thread_tmp_184_fu_19222_p2() {
    tmp_184_fu_19222_p2 = (!p_shl12_cast_fu_19206_p1.read().is_01() || !p_shl13_cast_fu_19218_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl12_cast_fu_19206_p1.read()) - sc_biguint<7>(p_shl13_cast_fu_19218_p1.read()));
}

void ShuffleNetV2::thread_tmp_185_cast_cast_fu_19237_p1() {
    tmp_185_cast_cast_fu_19237_p1 = esl_sext<10,7>(tmp_185_fu_19232_p2.read());
}

void ShuffleNetV2::thread_tmp_185_fu_19232_p2() {
    tmp_185_fu_19232_p2 = (!co60_cast1_reg_42524.read().is_01() || !tmp_184_fu_19222_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co60_cast1_reg_42524.read()) + sc_biguint<7>(tmp_184_fu_19222_p2.read()));
}

void ShuffleNetV2::thread_tmp_1863_cast_fu_36592_p1() {
    tmp_1863_cast_fu_36592_p1 = esl_zext<32,14>(tmp_1251_fu_36587_p2.read());
}

void ShuffleNetV2::thread_tmp_1864_cast_fu_36794_p1() {
    tmp_1864_cast_fu_36794_p1 = esl_zext<32,14>(tmp_1252_fu_36789_p2.read());
}

void ShuffleNetV2::thread_tmp_1865_cast_fu_36804_p1() {
    tmp_1865_cast_fu_36804_p1 = esl_zext<32,13>(tmp_1253_reg_48100.read());
}

void ShuffleNetV2::thread_tmp_1873_cast_fu_37026_p1() {
    tmp_1873_cast_fu_37026_p1 = esl_sext<20,19>(tmp_1256_fu_37020_p2.read());
}

void ShuffleNetV2::thread_tmp_1874_cast_fu_37035_p1() {
    tmp_1874_cast_fu_37035_p1 = esl_sext<32,20>(tmp_1257_fu_37030_p2.read());
}

void ShuffleNetV2::thread_tmp_187_cast_cast_fu_19865_p1() {
    tmp_187_cast_cast_fu_19865_p1 = esl_sext<8,7>(tmp_187_fu_19859_p2.read());
}

void ShuffleNetV2::thread_tmp_187_fu_19859_p2() {
    tmp_187_fu_19859_p2 = (!p_shl14_cast_fu_19843_p1.read().is_01() || !p_shl15_cast_fu_19855_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl14_cast_fu_19843_p1.read()) - sc_biguint<7>(p_shl15_cast_fu_19855_p1.read()));
}

void ShuffleNetV2::thread_tmp_1880_cast_fu_37101_p1() {
    tmp_1880_cast_fu_37101_p1 = esl_sext<32,10>(tmp_1259_reg_48182.read());
}

void ShuffleNetV2::thread_tmp_188_cast_fu_19903_p1() {
    tmp_188_cast_fu_19903_p1 = esl_sext<32,7>(tmp_188_reg_42763.read());
}

void ShuffleNetV2::thread_tmp_188_fu_19869_p2() {
    tmp_188_fu_19869_p2 = (!tmp_187_fu_19859_p2.read().is_01() || !i43_cast_reg_42742.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_187_fu_19859_p2.read()) + sc_biguint<7>(i43_cast_reg_42742.read()));
}

void ShuffleNetV2::thread_tmp_1892_cast_fu_37473_p1() {
    tmp_1892_cast_fu_37473_p1 = esl_zext<32,11>(tmp_1264_reg_48306.read());
}

void ShuffleNetV2::thread_tmp_1895_cast_fu_37428_p1() {
    tmp_1895_cast_fu_37428_p1 = esl_sext<14,13>(tmp_1267_fu_37422_p2.read());
}

void ShuffleNetV2::thread_tmp_1896_cast_fu_37437_p1() {
    tmp_1896_cast_fu_37437_p1 = esl_sext<32,14>(tmp_1268_reg_48311.read());
}

void ShuffleNetV2::thread_tmp_1902_cast_fu_38035_p1() {
    tmp_1902_cast_fu_38035_p1 = esl_sext<12,11>(tmp_1273_fu_38029_p2.read());
}

void ShuffleNetV2::thread_tmp_190_cast_cast_fu_19556_p1() {
    tmp_190_cast_cast_fu_19556_p1 = esl_sext<8,7>(tmp_190_fu_19551_p2.read());
}

void ShuffleNetV2::thread_tmp_190_fu_19551_p2() {
    tmp_190_fu_19551_p2 = (!tmp_182_reg_42665.read().is_01() || !ci36_cast_fu_19531_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_182_reg_42665.read()) + sc_biguint<7>(ci36_cast_fu_19531_p1.read()));
}

void ShuffleNetV2::thread_tmp_1910_cast_fu_37799_p1() {
    tmp_1910_cast_fu_37799_p1 = esl_sext<20,19>(tmp_1276_fu_37793_p2.read());
}

void ShuffleNetV2::thread_tmp_1911_cast_fu_37808_p1() {
    tmp_1911_cast_fu_37808_p1 = esl_sext<32,20>(tmp_1277_fu_37803_p2.read());
}

void ShuffleNetV2::thread_tmp_1917_cast_fu_37874_p1() {
    tmp_1917_cast_fu_37874_p1 = esl_sext<32,10>(tmp_1279_reg_48442.read());
}

void ShuffleNetV2::thread_tmp_191_cast_cast_fu_19606_p1() {
    tmp_191_cast_cast_fu_19606_p1 = esl_sext<9,7>(tmp_191_fu_19600_p2.read());
}

void ShuffleNetV2::thread_tmp_191_fu_19600_p2() {
    tmp_191_fu_19600_p2 = (!p_shl16_cast_fu_19584_p1.read().is_01() || !p_shl17_cast_fu_19596_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl16_cast_fu_19584_p1.read()) - sc_biguint<7>(p_shl17_cast_fu_19596_p1.read()));
}

void ShuffleNetV2::thread_tmp_1920_cast_fu_38158_p1() {
    tmp_1920_cast_fu_38158_p1 = esl_sext<12,11>(tmp_1282_fu_38152_p2.read());
}

void ShuffleNetV2::thread_tmp_1923_cast_fu_38214_p1() {
    tmp_1923_cast_fu_38214_p1 = esl_sext<13,12>(tmp_1285_fu_38208_p2.read());
}

void ShuffleNetV2::thread_tmp_192_cast_fu_19666_p1() {
    tmp_192_cast_fu_19666_p1 = esl_sext<10,9>(tmp_192_reg_42701.read());
}

void ShuffleNetV2::thread_tmp_192_fu_19610_p2() {
    tmp_192_fu_19610_p2 = (!tmp_191_cast_cast_fu_19606_p1.read().is_01() || !tmp_183_cast_cast_reg_42670.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_191_cast_cast_fu_19606_p1.read()) + sc_biguint<9>(tmp_183_cast_cast_reg_42670.read()));
}

void ShuffleNetV2::thread_tmp_1938_cast_fu_38123_p1() {
    tmp_1938_cast_fu_38123_p1 = esl_zext<32,14>(tmp_1292_fu_38118_p2.read());
}

void ShuffleNetV2::thread_tmp_1939_cast_fu_38325_p1() {
    tmp_1939_cast_fu_38325_p1 = esl_zext<32,14>(tmp_1293_fu_38320_p2.read());
}

void ShuffleNetV2::thread_tmp_193_cast_fu_19645_p1() {
    tmp_193_cast_fu_19645_p1 = esl_sext<9,8>(tmp_193_fu_19639_p2.read());
}

void ShuffleNetV2::thread_tmp_193_fu_19639_p2() {
    tmp_193_fu_19639_p2 = (!p_shl18_cast_fu_19623_p1.read().is_01() || !p_shl19_cast_fu_19635_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl18_cast_fu_19623_p1.read()) - sc_biguint<8>(p_shl19_cast_fu_19635_p1.read()));
}

void ShuffleNetV2::thread_tmp_1940_cast_fu_38335_p1() {
    tmp_1940_cast_fu_38335_p1 = esl_zext<32,13>(tmp_1294_reg_48585.read());
}

void ShuffleNetV2::thread_tmp_1948_cast_fu_38557_p1() {
    tmp_1948_cast_fu_38557_p1 = esl_sext<20,19>(tmp_1297_fu_38551_p2.read());
}

void ShuffleNetV2::thread_tmp_1949_cast_fu_38566_p1() {
    tmp_1949_cast_fu_38566_p1 = esl_sext<32,20>(tmp_1298_fu_38561_p2.read());
}

void ShuffleNetV2::thread_tmp_1955_cast_fu_38632_p1() {
    tmp_1955_cast_fu_38632_p1 = esl_sext<32,10>(tmp_1300_reg_48667.read());
}

void ShuffleNetV2::thread_tmp_195_cast_fu_20206_p1() {
    tmp_195_cast_fu_20206_p1 = esl_sext<10,7>(tmp_195_fu_20200_p2.read());
}

void ShuffleNetV2::thread_tmp_195_fu_20200_p2() {
    tmp_195_fu_20200_p2 = (!p_shl20_cast_fu_20184_p1.read().is_01() || !p_shl21_cast_fu_20196_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl20_cast_fu_20184_p1.read()) - sc_biguint<7>(p_shl21_cast_fu_20196_p1.read()));
}

void ShuffleNetV2::thread_tmp_1967_cast_fu_38996_p1() {
    tmp_1967_cast_fu_38996_p1 = esl_zext<32,11>(tmp_1305_reg_48791.read());
}

void ShuffleNetV2::thread_tmp_1969_cast_fu_38951_p1() {
    tmp_1969_cast_fu_38951_p1 = esl_sext<15,14>(tmp_1307_fu_38945_p2.read());
}

void ShuffleNetV2::thread_tmp_196_cast_fu_20240_p1() {
    tmp_196_cast_fu_20240_p1 = esl_sext<32,7>(tmp_196_reg_42896.read());
}

void ShuffleNetV2::thread_tmp_196_fu_20210_p2() {
    tmp_196_fu_20210_p2 = (!tmp_195_fu_20200_p2.read().is_01() || !i47_cast1_reg_42875.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_195_fu_20200_p2.read()) + sc_biguint<7>(i47_cast1_reg_42875.read()));
}

void ShuffleNetV2::thread_tmp_1970_cast_fu_38960_p1() {
    tmp_1970_cast_fu_38960_p1 = esl_sext<32,15>(tmp_1308_reg_48796.read());
}

void ShuffleNetV2::thread_tmp_1976_cast_fu_39558_p1() {
    tmp_1976_cast_fu_39558_p1 = esl_sext<12,11>(tmp_1313_fu_39552_p2.read());
}

void ShuffleNetV2::thread_tmp_1984_cast_fu_39322_p1() {
    tmp_1984_cast_fu_39322_p1 = esl_sext<20,19>(tmp_1316_fu_39316_p2.read());
}

void ShuffleNetV2::thread_tmp_1985_cast_fu_39331_p1() {
    tmp_1985_cast_fu_39331_p1 = esl_sext<32,20>(tmp_1317_fu_39326_p2.read());
}

void ShuffleNetV2::thread_tmp_1991_cast_fu_39397_p1() {
    tmp_1991_cast_fu_39397_p1 = esl_sext<32,10>(tmp_1319_reg_48927.read());
}

void ShuffleNetV2::thread_tmp_1994_cast_fu_39681_p1() {
    tmp_1994_cast_fu_39681_p1 = esl_sext<13,12>(tmp_1322_fu_39675_p2.read());
}

void ShuffleNetV2::thread_tmp_1996_cast_fu_39693_p1() {
    tmp_1996_cast_fu_39693_p1 = esl_zext<11,10>(tmp_1323_fu_39685_p3.read());
}

void ShuffleNetV2::thread_tmp_199_fu_20288_p2() {
    tmp_199_fu_20288_p2 = (!p_shl22_cast_fu_20272_p1.read().is_01() || !p_shl23_cast_fu_20284_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl22_cast_fu_20272_p1.read()) - sc_biguint<7>(p_shl23_cast_fu_20284_p1.read()));
}

void ShuffleNetV2::thread_tmp_2003_cast_fu_39718_p3() {
    tmp_2003_cast_fu_39718_p3 = esl_concat<11,2>(tmp_1326_fu_39713_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2008_cast_fu_39646_p1() {
    tmp_2008_cast_fu_39646_p1 = esl_zext<32,14>(tmp_1329_fu_39641_p2.read());
}

void ShuffleNetV2::thread_tmp_2009_cast_fu_39782_p1() {
    tmp_2009_cast_fu_39782_p1 = esl_zext<32,13>(tmp_1330_fu_39777_p2.read());
}

void ShuffleNetV2::thread_tmp_200_cast_cast_fu_20304_p1() {
    tmp_200_cast_cast_fu_20304_p1 = esl_zext<9,4>(tmp_2251_fu_20294_p4.read());
}

void ShuffleNetV2::thread_tmp_2010_cast_fu_39808_p1() {
    tmp_2010_cast_fu_39808_p1 = esl_zext<32,14>(tmp_1331_fu_39803_p2.read());
}

void ShuffleNetV2::thread_tmp_201_cast_fu_20013_p1() {
    tmp_201_cast_fu_20013_p1 = esl_sext<8,7>(tmp_201_fu_20007_p2.read());
}

void ShuffleNetV2::thread_tmp_201_fu_20007_p2() {
    tmp_201_fu_20007_p2 = (!p_shl24_cast_fu_19991_p1.read().is_01() || !p_shl25_cast_fu_20003_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl24_cast_fu_19991_p1.read()) - sc_biguint<7>(p_shl25_cast_fu_20003_p1.read()));
}

void ShuffleNetV2::thread_tmp_202_cast_cast_fu_20022_p1() {
    tmp_202_cast_cast_fu_20022_p1 = esl_sext<10,7>(tmp_202_fu_20017_p2.read());
}

void ShuffleNetV2::thread_tmp_202_fu_20017_p2() {
    tmp_202_fu_20017_p2 = (!co64_cast1_reg_42784.read().is_01() || !tmp_201_fu_20007_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co64_cast1_reg_42784.read()) + sc_biguint<7>(tmp_201_fu_20007_p2.read()));
}

void ShuffleNetV2::thread_tmp_204_cast_fu_20646_p1() {
    tmp_204_cast_fu_20646_p1 = esl_sext<10,7>(tmp_204_fu_20640_p2.read());
}

void ShuffleNetV2::thread_tmp_204_fu_20640_p2() {
    tmp_204_fu_20640_p2 = (!p_shl26_cast_fu_20624_p1.read().is_01() || !p_shl27_cast_fu_20636_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl26_cast_fu_20624_p1.read()) - sc_biguint<7>(p_shl27_cast_fu_20636_p1.read()));
}

void ShuffleNetV2::thread_tmp_205_cast_fu_20680_p1() {
    tmp_205_cast_fu_20680_p1 = esl_sext<32,7>(tmp_205_reg_43023.read());
}

void ShuffleNetV2::thread_tmp_205_fu_20650_p2() {
    tmp_205_fu_20650_p2 = (!tmp_204_fu_20640_p2.read().is_01() || !i51_cast1_reg_43002.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_204_fu_20640_p2.read()) + sc_biguint<7>(i51_cast1_reg_43002.read()));
}

void ShuffleNetV2::thread_tmp_207_cast_cast_fu_20333_p1() {
    tmp_207_cast_cast_fu_20333_p1 = esl_sext<8,7>(tmp_207_fu_20328_p2.read());
}

void ShuffleNetV2::thread_tmp_207_fu_20328_p2() {
    tmp_207_fu_20328_p2 = (!tmp_199_reg_42925.read().is_01() || !ci38_cast_fu_20308_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_199_reg_42925.read()) + sc_biguint<7>(ci38_cast_fu_20308_p1.read()));
}

void ShuffleNetV2::thread_tmp_208_fu_20730_p2() {
    tmp_208_fu_20730_p2 = (!co68_cast_fu_20714_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co68_cast_fu_20714_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_210_fu_20939_p2() {
    tmp_210_fu_20939_p2 = (!p_shl28_cast_fu_20923_p1.read().is_01() || !p_shl29_cast_fu_20935_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl28_cast_fu_20923_p1.read()) - sc_biguint<7>(p_shl29_cast_fu_20935_p1.read()));
}

void ShuffleNetV2::thread_tmp_211_cast_cast_fu_20955_p1() {
    tmp_211_cast_cast_fu_20955_p1 = esl_zext<9,4>(tmp_2262_fu_20945_p4.read());
}

void ShuffleNetV2::thread_tmp_212_cast_cast_fu_20383_p1() {
    tmp_212_cast_cast_fu_20383_p1 = esl_sext<9,7>(tmp_212_fu_20377_p2.read());
}

void ShuffleNetV2::thread_tmp_212_fu_20377_p2() {
    tmp_212_fu_20377_p2 = (!p_shl30_cast_fu_20361_p1.read().is_01() || !p_shl31_cast_fu_20373_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl30_cast_fu_20361_p1.read()) - sc_biguint<7>(p_shl31_cast_fu_20373_p1.read()));
}

void ShuffleNetV2::thread_tmp_213_cast_fu_20447_p1() {
    tmp_213_cast_fu_20447_p1 = esl_sext<10,9>(tmp_213_reg_42961.read());
}

void ShuffleNetV2::thread_tmp_213_fu_20387_p2() {
    tmp_213_fu_20387_p2 = (!tmp_212_cast_cast_fu_20383_p1.read().is_01() || !tmp_200_cast_cast_reg_42930.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_212_cast_cast_fu_20383_p1.read()) + sc_biguint<9>(tmp_200_cast_cast_reg_42930.read()));
}

void ShuffleNetV2::thread_tmp_214_cast_fu_20422_p1() {
    tmp_214_cast_fu_20422_p1 = esl_sext<9,8>(tmp_214_fu_20416_p2.read());
}

void ShuffleNetV2::thread_tmp_214_fu_20416_p2() {
    tmp_214_fu_20416_p2 = (!p_shl32_cast_fu_20400_p1.read().is_01() || !p_shl33_cast_fu_20412_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl32_cast_fu_20400_p1.read()) - sc_biguint<8>(p_shl33_cast_fu_20412_p1.read()));
}

void ShuffleNetV2::thread_tmp_2158_fu_15337_p2() {
    tmp_2158_fu_15337_p2 = (!bias_V_read_reg_40042.read().is_01() || !ap_const_lv32_C18.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40042.read()) + sc_biguint<32>(ap_const_lv32_C18));
}

void ShuffleNetV2::thread_tmp_2159_fu_15364_p2() {
    tmp_2159_fu_15364_p2 = (!bias_V_read_reg_40042.read().is_01() || !ap_const_lv32_E18.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40042.read()) + sc_biguint<32>(ap_const_lv32_E18));
}

void ShuffleNetV2::thread_tmp_2160_fu_15442_p3() {
    tmp_2160_fu_15442_p3 = esl_concat<8,5>(tmp_665_fu_15437_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_2161_fu_15592_p2() {
    tmp_2161_fu_15592_p2 = (!bias_V_read_reg_40042.read().is_01() || !ap_const_lv32_18.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40042.read()) + sc_biguint<32>(ap_const_lv32_18));
}

void ShuffleNetV2::thread_tmp_2162_fu_15577_p1() {
    tmp_2162_fu_15577_p1 = esl_sext<32,11>(tmp_664_fu_15559_p2.read());
}

void ShuffleNetV2::thread_tmp_2163_fu_15581_p2() {
    tmp_2163_fu_15581_p2 = (!tmp_2162_fu_15577_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2162_fu_15577_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_tmp_2164_fu_15493_p3() {
    tmp_2164_fu_15493_p3 = esl_concat<8,1>(tmp_667_reg_40274.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2165_fu_15475_p2() {
    tmp_2165_fu_15475_p2 = (!tmp_666_fu_15450_p1.read().is_01() || !image_V_read_reg_40186.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_666_fu_15450_p1.read()) + sc_biguint<32>(image_V_read_reg_40186.read()));
}

void ShuffleNetV2::thread_tmp_2166_fu_15697_p2() {
    tmp_2166_fu_15697_p2 = (!bias_V_read_reg_40042.read().is_01() || !ap_const_lv32_30.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40042.read()) + sc_biguint<32>(ap_const_lv32_30));
}

void ShuffleNetV2::thread_tmp_2167_fu_15721_p3() {
    tmp_2167_fu_15721_p3 = esl_concat<9,2>(tmp_672_fu_15712_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2168_fu_15751_p2() {
    tmp_2168_fu_15751_p2 = (!tmp_673_fu_15733_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_673_fu_15733_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_tmp_2169_fu_15867_p2() {
    tmp_2169_fu_15867_p2 = (!bias_V_read_reg_40042.read().is_01() || !ap_const_lv32_48.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40042.read()) + sc_biguint<32>(ap_const_lv32_48));
}

void ShuffleNetV2::thread_tmp_216_cast_fu_21293_p1() {
    tmp_216_cast_fu_21293_p1 = esl_sext<10,7>(tmp_216_fu_21287_p2.read());
}

void ShuffleNetV2::thread_tmp_216_fu_21287_p2() {
    tmp_216_fu_21287_p2 = (!p_shl34_cast_fu_21271_p1.read().is_01() || !p_shl35_cast_fu_21283_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl34_cast_fu_21271_p1.read()) - sc_biguint<7>(p_shl35_cast_fu_21283_p1.read()));
}

void ShuffleNetV2::thread_tmp_2170_fu_15852_p1() {
    tmp_2170_fu_15852_p1 = esl_sext<32,12>(tmp_677_fu_15846_p2.read());
}

void ShuffleNetV2::thread_tmp_2171_fu_15856_p2() {
    tmp_2171_fu_15856_p2 = (!shuffle_conv_1x1_V_r_reg_40116.read().is_01() || !tmp_2170_fu_15852_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()) + sc_bigint<32>(tmp_2170_fu_15852_p1.read()));
}

void ShuffleNetV2::thread_tmp_2173_fu_16017_p3() {
    tmp_2173_fu_16017_p3 = esl_concat<9,2>(tmp_682_fu_16008_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2174_fu_16040_p2() {
    tmp_2174_fu_16040_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_684_fu_16035_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2175_fu_16117_p3() {
    tmp_2175_fu_16117_p3 = esl_concat<1,5>(ap_const_lv1_1, tmp_2172_reg_9782.read());
}

void ShuffleNetV2::thread_tmp_2176_fu_16125_p1() {
    tmp_2176_fu_16125_p1 = esl_sext<7,6>(tmp_2175_fu_16117_p3.read());
}

void ShuffleNetV2::thread_tmp_2177_fu_16129_p1() {
    tmp_2177_fu_16129_p1 = esl_zext<32,7>(tmp_2176_fu_16125_p1.read());
}

void ShuffleNetV2::thread_tmp_2178_fu_16133_p2() {
    tmp_2178_fu_16133_p2 = (!tmp_2177_fu_16129_p1.read().is_01() || !bias_V_read_reg_40042.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_2177_fu_16129_p1.read()) + sc_biguint<32>(bias_V_read_reg_40042.read()));
}

void ShuffleNetV2::thread_tmp_2179_fu_16064_p2() {
    tmp_2179_fu_16064_p2 = (!tmp_683_fu_16029_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_683_fu_16029_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_tmp_217_cast_fu_21327_p1() {
    tmp_217_cast_fu_21327_p1 = esl_sext<32,7>(tmp_217_reg_43204.read());
}

void ShuffleNetV2::thread_tmp_217_fu_21297_p2() {
    tmp_217_fu_21297_p2 = (!tmp_216_fu_21287_p2.read().is_01() || !i56_cast1_reg_43183.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_216_fu_21287_p2.read()) + sc_biguint<7>(i56_cast1_reg_43183.read()));
}

void ShuffleNetV2::thread_tmp_2180_fu_16211_p2() {
    tmp_2180_fu_16211_p2 = (!bias_V_read_reg_40042.read().is_01() || !ap_const_lv32_78.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40042.read()) + sc_biguint<32>(ap_const_lv32_78));
}

void ShuffleNetV2::thread_tmp_2181_fu_16196_p1() {
    tmp_2181_fu_16196_p1 = esl_sext<32,13>(tmp_689_fu_16190_p2.read());
}

void ShuffleNetV2::thread_tmp_2182_fu_16200_p2() {
    tmp_2182_fu_16200_p2 = (!shuffle_conv_1x1_V_r_reg_40116.read().is_01() || !tmp_2181_fu_16196_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()) + sc_bigint<32>(tmp_2181_fu_16196_p1.read()));
}

void ShuffleNetV2::thread_tmp_2183_fu_16548_p2() {
    tmp_2183_fu_16548_p2 = (!bias_V_read_reg_40042.read().is_01() || !ap_const_lv32_90.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40042.read()) + sc_biguint<32>(ap_const_lv32_90));
}

void ShuffleNetV2::thread_tmp_2184_fu_16533_p1() {
    tmp_2184_fu_16533_p1 = esl_sext<32,13>(tmp_698_fu_16527_p2.read());
}

void ShuffleNetV2::thread_tmp_2185_fu_16537_p2() {
    tmp_2185_fu_16537_p2 = (!shuffle_conv_1x1_V_r_reg_40116.read().is_01() || !tmp_2184_fu_16533_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()) + sc_bigint<32>(tmp_2184_fu_16533_p1.read()));
}

void ShuffleNetV2::thread_tmp_2186_fu_16393_p3() {
    tmp_2186_fu_16393_p3 = esl_concat<11,1>(tmp_699_fu_16380_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2187_fu_16424_p3() {
    tmp_2187_fu_16424_p3 = esl_concat<10,1>(tmp_701_fu_16411_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2188_fu_16685_p2() {
    tmp_2188_fu_16685_p2 = (!bias_V_read_reg_40042.read().is_01() || !ap_const_lv32_A8.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40042.read()) + sc_biguint<32>(ap_const_lv32_A8));
}

void ShuffleNetV2::thread_tmp_2189_fu_16713_p3() {
    tmp_2189_fu_16713_p3 = esl_concat<10,2>(tmp_709_fu_16704_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2190_fu_16736_p2() {
    tmp_2190_fu_16736_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_711_fu_16731_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2191_fu_16760_p2() {
    tmp_2191_fu_16760_p2 = (!tmp_710_fu_16725_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_710_fu_16725_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_tmp_2192_fu_16867_p1() {
    tmp_2192_fu_16867_p1 = esl_sext<32,13>(tmp_718_fu_16861_p2.read());
}

void ShuffleNetV2::thread_tmp_2193_fu_16871_p2() {
    tmp_2193_fu_16871_p2 = (!shuffle_conv_1x1_V_r_reg_40116.read().is_01() || !tmp_2192_fu_16867_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()) + sc_bigint<32>(tmp_2192_fu_16867_p1.read()));
}

void ShuffleNetV2::thread_tmp_2195_fu_16938_p3() {
    tmp_2195_fu_16938_p3 = esl_concat<2,5>(ap_const_lv2_2, tmp_2194_reg_9961.read());
}

void ShuffleNetV2::thread_tmp_2196_fu_16946_p1() {
    tmp_2196_fu_16946_p1 = esl_sext<8,7>(tmp_2195_fu_16938_p3.read());
}

void ShuffleNetV2::thread_tmp_2197_fu_16950_p1() {
    tmp_2197_fu_16950_p1 = esl_zext<32,8>(tmp_2196_fu_16946_p1.read());
}

void ShuffleNetV2::thread_tmp_2198_fu_16954_p2() {
    tmp_2198_fu_16954_p2 = (!tmp_2197_fu_16950_p1.read().is_01() || !bias_V_read_reg_40042.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_2197_fu_16950_p1.read()) + sc_biguint<32>(bias_V_read_reg_40042.read()));
}

void ShuffleNetV2::thread_tmp_2199_fu_17028_p3() {
    tmp_2199_fu_17028_p3 = esl_concat<10,4>(tmp_728_fu_17023_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_219_cast_cast_fu_20984_p1() {
    tmp_219_cast_cast_fu_20984_p1 = esl_sext<8,7>(tmp_219_fu_20979_p2.read());
}

void ShuffleNetV2::thread_tmp_219_fu_20979_p2() {
    tmp_219_fu_20979_p2 = (!tmp_210_reg_43106.read().is_01() || !ci40_cast_fu_20959_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_210_reg_43106.read()) + sc_biguint<7>(ci40_cast_fu_20959_p1.read()));
}

void ShuffleNetV2::thread_tmp_2200_fu_17040_p3() {
    tmp_2200_fu_17040_p3 = esl_concat<10,1>(tmp_728_fu_17023_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2201_fu_17354_p2() {
    tmp_2201_fu_17354_p2 = (!bias_V_read_reg_40042.read().is_01() || !ap_const_lv32_D8.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40042.read()) + sc_biguint<32>(ap_const_lv32_D8));
}

void ShuffleNetV2::thread_tmp_2202_fu_17339_p1() {
    tmp_2202_fu_17339_p1 = esl_sext<32,14>(tmp_732_fu_17333_p2.read());
}

void ShuffleNetV2::thread_tmp_2203_fu_17343_p2() {
    tmp_2203_fu_17343_p2 = (!shuffle_conv_1x1_V_r_reg_40116.read().is_01() || !tmp_2202_fu_17339_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()) + sc_bigint<32>(tmp_2202_fu_17339_p1.read()));
}

void ShuffleNetV2::thread_tmp_2204_fu_17199_p3() {
    tmp_2204_fu_17199_p3 = esl_concat<11,1>(tmp_733_fu_17186_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2205_fu_17230_p3() {
    tmp_2205_fu_17230_p3 = esl_concat<10,1>(tmp_735_fu_17217_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2206_fu_17491_p2() {
    tmp_2206_fu_17491_p2 = (!bias_V_read_reg_40042.read().is_01() || !ap_const_lv32_F0.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40042.read()) + sc_biguint<32>(ap_const_lv32_F0));
}

void ShuffleNetV2::thread_tmp_2207_fu_17519_p3() {
    tmp_2207_fu_17519_p3 = esl_concat<10,2>(tmp_744_fu_17510_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2208_fu_17542_p2() {
    tmp_2208_fu_17542_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_746_fu_17537_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2209_fu_17566_p2() {
    tmp_2209_fu_17566_p2 = (!tmp_745_fu_17531_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_745_fu_17531_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_tmp_220_cast_cast_fu_21034_p1() {
    tmp_220_cast_cast_fu_21034_p1 = esl_sext<9,7>(tmp_220_fu_21028_p2.read());
}

void ShuffleNetV2::thread_tmp_220_fu_21028_p2() {
    tmp_220_fu_21028_p2 = (!p_shl36_cast_fu_21012_p1.read().is_01() || !p_shl37_cast_fu_21024_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl36_cast_fu_21012_p1.read()) - sc_biguint<7>(p_shl37_cast_fu_21024_p1.read()));
}

void ShuffleNetV2::thread_tmp_2210_fu_17686_p2() {
    tmp_2210_fu_17686_p2 = (!bias_V_read_reg_40042.read().is_01() || !ap_const_lv32_108.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40042.read()) + sc_biguint<32>(ap_const_lv32_108));
}

void ShuffleNetV2::thread_tmp_2211_fu_17671_p1() {
    tmp_2211_fu_17671_p1 = esl_sext<32,14>(tmp_751_fu_17665_p2.read());
}

void ShuffleNetV2::thread_tmp_2212_fu_17675_p2() {
    tmp_2212_fu_17675_p2 = (!shuffle_conv_1x1_V_r_reg_40116.read().is_01() || !tmp_2211_fu_17671_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()) + sc_bigint<32>(tmp_2211_fu_17671_p1.read()));
}

void ShuffleNetV2::thread_tmp_2213_fu_17816_p3() {
    tmp_2213_fu_17816_p3 = esl_concat<10,4>(tmp_761_fu_17811_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_2214_fu_17828_p3() {
    tmp_2214_fu_17828_p3 = esl_concat<10,1>(tmp_761_fu_17811_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2215_fu_18127_p1() {
    tmp_2215_fu_18127_p1 = esl_sext<32,14>(tmp_765_fu_18121_p2.read());
}

void ShuffleNetV2::thread_tmp_2216_fu_18131_p2() {
    tmp_2216_fu_18131_p2 = (!shuffle_conv_1x1_V_r_reg_40116.read().is_01() || !tmp_2215_fu_18127_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()) + sc_bigint<32>(tmp_2215_fu_18127_p1.read()));
}

void ShuffleNetV2::thread_tmp_2217_fu_17987_p3() {
    tmp_2217_fu_17987_p3 = esl_concat<11,1>(tmp_766_fu_17974_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2218_fu_18018_p3() {
    tmp_2218_fu_18018_p3 = esl_concat<10,1>(tmp_768_fu_18005_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_221_cast_fu_21094_p1() {
    tmp_221_cast_fu_21094_p1 = esl_sext<10,9>(tmp_221_reg_43142.read());
}

void ShuffleNetV2::thread_tmp_221_fu_21038_p2() {
    tmp_221_fu_21038_p2 = (!tmp_220_cast_cast_fu_21034_p1.read().is_01() || !tmp_211_cast_cast_reg_43111.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_220_cast_cast_fu_21034_p1.read()) + sc_biguint<9>(tmp_211_cast_cast_reg_43111.read()));
}

void ShuffleNetV2::thread_tmp_2220_fu_18198_p3() {
    tmp_2220_fu_18198_p3 = esl_concat<4,5>(ap_const_lv4_9, tmp_2219_reg_10239.read());
}

void ShuffleNetV2::thread_tmp_2221_fu_18206_p1() {
    tmp_2221_fu_18206_p1 = esl_zext<32,9>(tmp_2220_fu_18198_p3.read());
}

void ShuffleNetV2::thread_tmp_2222_fu_18210_p2() {
    tmp_2222_fu_18210_p2 = (!tmp_2221_fu_18206_p1.read().is_01() || !bias_V_read_reg_40042.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_2221_fu_18206_p1.read()) + sc_biguint<32>(bias_V_read_reg_40042.read()));
}

void ShuffleNetV2::thread_tmp_2223_fu_18303_p2() {
    tmp_2223_fu_18303_p2 = (!bias_V_read_reg_40042.read().is_01() || !ap_const_lv32_138.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40042.read()) + sc_biguint<32>(ap_const_lv32_138));
}

void ShuffleNetV2::thread_tmp_2224_fu_18331_p3() {
    tmp_2224_fu_18331_p3 = esl_concat<11,2>(tmp_778_fu_18322_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2225_fu_18354_p2() {
    tmp_2225_fu_18354_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_780_fu_18349_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2226_fu_18378_p2() {
    tmp_2226_fu_18378_p2 = (!tmp_779_fu_18343_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_779_fu_18343_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_tmp_2227_fu_18500_p2() {
    tmp_2227_fu_18500_p2 = (!bias_V_read_reg_40042.read().is_01() || !ap_const_lv32_150.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40042.read()) + sc_biguint<32>(ap_const_lv32_150));
}

void ShuffleNetV2::thread_tmp_2228_fu_18485_p1() {
    tmp_2228_fu_18485_p1 = esl_sext<32,14>(tmp_787_fu_18479_p2.read());
}

void ShuffleNetV2::thread_tmp_2229_fu_18489_p2() {
    tmp_2229_fu_18489_p2 = (!shuffle_conv_1x1_V_r_reg_40116.read().is_01() || !tmp_2228_fu_18485_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()) + sc_bigint<32>(tmp_2228_fu_18485_p1.read()));
}

void ShuffleNetV2::thread_tmp_222_cast_fu_21073_p1() {
    tmp_222_cast_fu_21073_p1 = esl_sext<10,8>(tmp_222_fu_21067_p2.read());
}

void ShuffleNetV2::thread_tmp_222_fu_21067_p2() {
    tmp_222_fu_21067_p2 = (!p_shl38_cast_fu_21051_p1.read().is_01() || !p_shl39_cast_fu_21063_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl38_cast_fu_21051_p1.read()) - sc_biguint<8>(p_shl39_cast_fu_21063_p1.read()));
}

void ShuffleNetV2::thread_tmp_2230_fu_18702_p1() {
    tmp_2230_fu_18702_p1 = co58_reg_10361.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2231_fu_18736_p4() {
    tmp_2231_fu_18736_p4 = co58_reg_10361.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2232_fu_18630_p3() {
    tmp_2232_fu_18630_p3 = esl_concat<10,4>(tmp_791_fu_18625_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_2233_fu_18642_p3() {
    tmp_2233_fu_18642_p3 = esl_concat<10,1>(tmp_791_fu_18625_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2234_fu_19050_p1() {
    tmp_2234_fu_19050_p1 = k_reg_10405.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2235_fu_18791_p1() {
    tmp_2235_fu_18791_p1 = i36_reg_10383.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2236_fu_18987_p1() {
    tmp_2236_fu_18987_p1 = grp_fu_18879_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2239_fu_19483_p1() {
    tmp_2239_fu_19483_p1 = co62_reg_10482.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2240_fu_19517_p4() {
    tmp_2240_fu_19517_p4 = co62_reg_10482.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2241_fu_19391_p1() {
    tmp_2241_fu_19391_p1 = k8_reg_10471.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2242_fu_19194_p1() {
    tmp_2242_fu_19194_p1 = i41_reg_10449.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2243_fu_19275_p2() {
    tmp_2243_fu_19275_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_802_reg_42581.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2244_fu_19322_p3() {
    tmp_2244_fu_19322_p3 = esl_concat<12,2>(tmp_807_reg_42598.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2245_fu_19831_p1() {
    tmp_2245_fu_19831_p1 = k9_reg_10526.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2246_fu_19572_p1() {
    tmp_2246_fu_19572_p1 = i43_reg_10504.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2247_fu_19768_p1() {
    tmp_2247_fu_19768_p1 = grp_fu_19660_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_224_cast_fu_21638_p1() {
    tmp_224_cast_fu_21638_p1 = esl_sext<10,7>(tmp_224_fu_21632_p2.read());
}

void ShuffleNetV2::thread_tmp_224_fu_21632_p2() {
    tmp_224_fu_21632_p2 = (!p_shl40_cast_fu_21616_p1.read().is_01() || !p_shl41_cast_fu_21628_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl40_cast_fu_21616_p1.read()) - sc_biguint<7>(p_shl41_cast_fu_21628_p1.read()));
}

void ShuffleNetV2::thread_tmp_2250_fu_20260_p1() {
    tmp_2250_fu_20260_p1 = co66_reg_10603.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2251_fu_20294_p4() {
    tmp_2251_fu_20294_p4 = co66_reg_10603.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2252_fu_20172_p1() {
    tmp_2252_fu_20172_p1 = k10_reg_10592.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2253_fu_19979_p1() {
    tmp_2253_fu_19979_p1 = i48_reg_10570.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2254_fu_20060_p2() {
    tmp_2254_fu_20060_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_818_reg_42841.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2255_fu_20103_p3() {
    tmp_2255_fu_20103_p3 = esl_concat<11,2>(tmp_823_reg_42858.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2256_fu_20612_p1() {
    tmp_2256_fu_20612_p1 = k12_reg_10647.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2257_fu_20349_p1() {
    tmp_2257_fu_20349_p1 = i50_reg_10625.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2258_fu_20549_p1() {
    tmp_2258_fu_20549_p1 = grp_fu_20441_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_225_cast_fu_21672_p1() {
    tmp_225_cast_fu_21672_p1 = esl_sext<32,7>(tmp_225_reg_43337.read());
}

void ShuffleNetV2::thread_tmp_225_fu_21642_p2() {
    tmp_225_fu_21642_p2 = (!tmp_224_fu_21632_p2.read().is_01() || !i59_cast1_reg_43316.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_224_fu_21632_p2.read()) + sc_biguint<7>(i59_cast1_reg_43316.read()));
}

void ShuffleNetV2::thread_tmp_2261_fu_20911_p1() {
    tmp_2261_fu_20911_p1 = co69_reg_10691.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2262_fu_20945_p4() {
    tmp_2262_fu_20945_p4 = co69_reg_10691.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2263_fu_20791_p3() {
    tmp_2263_fu_20791_p3 = esl_concat<11,3>(tmp_838_fu_20786_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2264_fu_20803_p3() {
    tmp_2264_fu_20803_p3 = esl_concat<11,1>(tmp_838_fu_20786_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2265_fu_20826_p3() {
    tmp_2265_fu_20826_p3 = esl_concat<10,3>(tmp_840_fu_20821_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2266_fu_20838_p3() {
    tmp_2266_fu_20838_p3 = esl_concat<10,1>(tmp_840_fu_20821_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2267_fu_21259_p1() {
    tmp_2267_fu_21259_p1 = k14_reg_10735.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2268_fu_21000_p1() {
    tmp_2268_fu_21000_p1 = i54_reg_10713.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2269_fu_21196_p1() {
    tmp_2269_fu_21196_p1 = grp_fu_21088_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2272_fu_21692_p1() {
    tmp_2272_fu_21692_p1 = co73_reg_10812.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2273_fu_21726_p4() {
    tmp_2273_fu_21726_p4 = co73_reg_10812.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2274_fu_21604_p1() {
    tmp_2274_fu_21604_p1 = k16_reg_10801.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2275_fu_21403_p1() {
    tmp_2275_fu_21403_p1 = i59_reg_10779.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2276_fu_21488_p2() {
    tmp_2276_fu_21488_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_852_reg_43282.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2277_fu_21535_p3() {
    tmp_2277_fu_21535_p3 = esl_concat<13,2>(tmp_857_reg_43299.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2278_fu_22040_p1() {
    tmp_2278_fu_22040_p1 = k18_reg_10856.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2279_fu_21781_p1() {
    tmp_2279_fu_21781_p1 = i61_reg_10834.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2280_fu_21977_p1() {
    tmp_2280_fu_21977_p1 = grp_fu_21869_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2283_fu_22175_p3() {
    tmp_2283_fu_22175_p3 = esl_concat<10,3>(tmp_875_fu_22170_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2284_fu_22187_p3() {
    tmp_2284_fu_22187_p3 = esl_concat<10,1>(tmp_875_fu_22170_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2285_fu_22458_p1() {
    tmp_2285_fu_22458_p1 = co79_reg_10933.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2286_fu_22492_p4() {
    tmp_2286_fu_22492_p4 = co79_reg_10933.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2287_fu_22338_p3() {
    tmp_2287_fu_22338_p3 = esl_concat<11,3>(tmp_877_fu_22333_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2288_fu_22350_p3() {
    tmp_2288_fu_22350_p3 = esl_concat<11,1>(tmp_877_fu_22333_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2289_fu_22373_p3() {
    tmp_2289_fu_22373_p3 = esl_concat<10,3>(tmp_879_fu_22368_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_228_fu_21720_p2() {
    tmp_228_fu_21720_p2 = (!p_shl42_cast_fu_21704_p1.read().is_01() || !p_shl43_cast_fu_21716_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl42_cast_fu_21704_p1.read()) - sc_biguint<7>(p_shl43_cast_fu_21716_p1.read()));
}

void ShuffleNetV2::thread_tmp_2290_fu_22385_p3() {
    tmp_2290_fu_22385_p3 = esl_concat<10,1>(tmp_879_fu_22368_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2291_fu_22806_p1() {
    tmp_2291_fu_22806_p1 = k20_reg_10977.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2292_fu_22547_p1() {
    tmp_2292_fu_22547_p1 = i65_reg_10955.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2293_fu_22743_p1() {
    tmp_2293_fu_22743_p1 = grp_fu_22635_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2296_fu_23239_p1() {
    tmp_2296_fu_23239_p1 = co83_reg_11054.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2297_fu_23273_p4() {
    tmp_2297_fu_23273_p4 = co83_reg_11054.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2298_fu_23147_p1() {
    tmp_2298_fu_23147_p1 = k22_reg_11043.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2299_fu_22950_p1() {
    tmp_2299_fu_22950_p1 = i70_reg_11021.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_229_cast_cast_fu_21736_p1() {
    tmp_229_cast_cast_fu_21736_p1 = esl_zext<9,4>(tmp_2273_fu_21726_p4.read());
}

void ShuffleNetV2::thread_tmp_2300_fu_23031_p2() {
    tmp_2300_fu_23031_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_892_reg_43767.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2301_fu_23078_p3() {
    tmp_2301_fu_23078_p3 = esl_concat<13,2>(tmp_897_reg_43784.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2302_fu_23587_p1() {
    tmp_2302_fu_23587_p1 = k24_reg_11098.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2303_fu_23328_p1() {
    tmp_2303_fu_23328_p1 = i72_reg_11076.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2304_fu_23524_p1() {
    tmp_2304_fu_23524_p1 = grp_fu_23416_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2307_fu_23726_p3() {
    tmp_2307_fu_23726_p3 = esl_concat<10,3>(tmp_915_fu_23721_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2308_fu_23738_p3() {
    tmp_2308_fu_23738_p3 = esl_concat<10,1>(tmp_915_fu_23721_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2309_fu_24009_p1() {
    tmp_2309_fu_24009_p1 = co89_reg_11175.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_230_fu_21431_p2() {
    tmp_230_fu_21431_p2 = (!p_shl44_cast_fu_21415_p1.read().is_01() || !p_shl45_cast_fu_21427_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl44_cast_fu_21415_p1.read()) - sc_biguint<7>(p_shl45_cast_fu_21427_p1.read()));
}

void ShuffleNetV2::thread_tmp_2310_fu_24043_p4() {
    tmp_2310_fu_24043_p4 = co89_reg_11175.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2311_fu_23889_p3() {
    tmp_2311_fu_23889_p3 = esl_concat<11,3>(tmp_917_fu_23884_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2312_fu_23901_p3() {
    tmp_2312_fu_23901_p3 = esl_concat<11,1>(tmp_917_fu_23884_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2313_fu_23924_p3() {
    tmp_2313_fu_23924_p3 = esl_concat<10,3>(tmp_919_fu_23919_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2314_fu_23936_p3() {
    tmp_2314_fu_23936_p3 = esl_concat<10,1>(tmp_919_fu_23919_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2315_fu_24365_p1() {
    tmp_2315_fu_24365_p1 = k26_reg_11219.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2316_fu_24098_p1() {
    tmp_2316_fu_24098_p1 = i76_reg_11197.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2317_fu_24302_p1() {
    tmp_2317_fu_24302_p1 = grp_fu_24186_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_231_cast_cast_fu_21442_p1() {
    tmp_231_cast_cast_fu_21442_p1 = esl_sext<10,7>(tmp_231_fu_21437_p2.read());
}

void ShuffleNetV2::thread_tmp_231_fu_21437_p2() {
    tmp_231_fu_21437_p2 = (!co72_cast1_reg_43225.read().is_01() || !tmp_230_fu_21431_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co72_cast1_reg_43225.read()) + sc_biguint<7>(tmp_230_fu_21431_p2.read()));
}

void ShuffleNetV2::thread_tmp_2320_fu_24798_p1() {
    tmp_2320_fu_24798_p1 = co93_reg_11296.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2321_fu_24832_p4() {
    tmp_2321_fu_24832_p4 = co93_reg_11296.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2322_fu_24706_p1() {
    tmp_2322_fu_24706_p1 = k28_reg_11285.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2323_fu_24513_p1() {
    tmp_2323_fu_24513_p1 = i81_reg_11263.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2324_fu_24594_p2() {
    tmp_2324_fu_24594_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_934_reg_44252.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2325_fu_24637_p3() {
    tmp_2325_fu_24637_p3 = esl_concat<12,2>(tmp_939_reg_44269.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2326_fu_25146_p1() {
    tmp_2326_fu_25146_p1 = k30_reg_11340.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2327_fu_24887_p1() {
    tmp_2327_fu_24887_p1 = i83_reg_11318.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2328_fu_25083_p1() {
    tmp_2328_fu_25083_p1 = grp_fu_24975_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2331_fu_25285_p3() {
    tmp_2331_fu_25285_p3 = esl_concat<10,3>(tmp_957_fu_25280_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2332_fu_25297_p3() {
    tmp_2332_fu_25297_p3 = esl_concat<10,1>(tmp_957_fu_25280_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2333_fu_25568_p1() {
    tmp_2333_fu_25568_p1 = co99_reg_11417.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2334_fu_25602_p4() {
    tmp_2334_fu_25602_p4 = co99_reg_11417.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2335_fu_25448_p3() {
    tmp_2335_fu_25448_p3 = esl_concat<11,3>(tmp_959_fu_25443_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2336_fu_25460_p3() {
    tmp_2336_fu_25460_p3 = esl_concat<11,1>(tmp_959_fu_25443_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2337_fu_25483_p3() {
    tmp_2337_fu_25483_p3 = esl_concat<10,3>(tmp_961_fu_25478_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2338_fu_25495_p3() {
    tmp_2338_fu_25495_p3 = esl_concat<10,1>(tmp_961_fu_25478_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2339_fu_25916_p1() {
    tmp_2339_fu_25916_p1 = k32_reg_11461.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_233_cast_fu_22074_p1() {
    tmp_233_cast_fu_22074_p1 = esl_sext<10,7>(tmp_233_fu_22068_p2.read());
}

void ShuffleNetV2::thread_tmp_233_fu_22068_p2() {
    tmp_233_fu_22068_p2 = (!p_shl46_cast_fu_22052_p1.read().is_01() || !p_shl47_cast_fu_22064_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl46_cast_fu_22052_p1.read()) - sc_biguint<7>(p_shl47_cast_fu_22064_p1.read()));
}

void ShuffleNetV2::thread_tmp_2340_fu_25657_p1() {
    tmp_2340_fu_25657_p1 = i87_reg_11439.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2341_fu_25853_p1() {
    tmp_2341_fu_25853_p1 = grp_fu_25745_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2344_fu_26341_p1() {
    tmp_2344_fu_26341_p1 = co103_reg_11538.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2345_fu_26375_p4() {
    tmp_2345_fu_26375_p4 = co103_reg_11538.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2346_fu_26253_p1() {
    tmp_2346_fu_26253_p1 = k34_reg_11527.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2347_fu_26060_p1() {
    tmp_2347_fu_26060_p1 = i92_reg_11505.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2348_fu_26141_p2() {
    tmp_2348_fu_26141_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_974_reg_44737.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2349_fu_26184_p3() {
    tmp_2349_fu_26184_p3 = esl_concat<12,2>(tmp_979_reg_44754.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_234_cast_fu_22108_p1() {
    tmp_234_cast_fu_22108_p1 = esl_sext<32,7>(tmp_234_reg_43464.read());
}

void ShuffleNetV2::thread_tmp_234_fu_22078_p2() {
    tmp_234_fu_22078_p2 = (!tmp_233_fu_22068_p2.read().is_01() || !i63_cast1_reg_43443.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_233_fu_22068_p2.read()) + sc_biguint<7>(i63_cast1_reg_43443.read()));
}

void ShuffleNetV2::thread_tmp_2350_fu_26689_p1() {
    tmp_2350_fu_26689_p1 = k36_reg_11582.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2351_fu_26430_p1() {
    tmp_2351_fu_26430_p1 = i94_reg_11560.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2352_fu_26626_p1() {
    tmp_2352_fu_26626_p1 = grp_fu_26518_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2355_fu_26824_p3() {
    tmp_2355_fu_26824_p3 = esl_concat<10,3>(tmp_997_fu_26819_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2356_fu_26836_p3() {
    tmp_2356_fu_26836_p3 = esl_concat<10,1>(tmp_997_fu_26819_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2357_fu_27107_p1() {
    tmp_2357_fu_27107_p1 = co109_reg_11659.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2358_fu_27141_p4() {
    tmp_2358_fu_27141_p4 = co109_reg_11659.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2359_fu_26987_p3() {
    tmp_2359_fu_26987_p3 = esl_concat<11,3>(tmp_999_fu_26982_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2360_fu_26999_p3() {
    tmp_2360_fu_26999_p3 = esl_concat<11,1>(tmp_999_fu_26982_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2361_fu_27022_p3() {
    tmp_2361_fu_27022_p3 = esl_concat<10,3>(tmp_1001_fu_27017_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2362_fu_27034_p3() {
    tmp_2362_fu_27034_p3 = esl_concat<10,1>(tmp_1001_fu_27017_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2363_fu_27455_p1() {
    tmp_2363_fu_27455_p1 = k38_reg_11703.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2364_fu_27196_p1() {
    tmp_2364_fu_27196_p1 = i98_reg_11681.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2365_fu_27392_p1() {
    tmp_2365_fu_27392_p1 = grp_fu_27284_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2368_fu_27888_p1() {
    tmp_2368_fu_27888_p1 = co113_reg_11780.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2369_fu_27922_p4() {
    tmp_2369_fu_27922_p4 = co113_reg_11780.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_236_cast_cast_fu_21765_p1() {
    tmp_236_cast_cast_fu_21765_p1 = esl_sext<8,7>(tmp_236_fu_21760_p2.read());
}

void ShuffleNetV2::thread_tmp_236_fu_21760_p2() {
    tmp_236_fu_21760_p2 = (!tmp_228_reg_43366.read().is_01() || !ci42_cast_fu_21740_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_228_reg_43366.read()) + sc_biguint<7>(ci42_cast_fu_21740_p1.read()));
}

void ShuffleNetV2::thread_tmp_2370_fu_27800_p1() {
    tmp_2370_fu_27800_p1 = k40_reg_11769.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2371_fu_27599_p1() {
    tmp_2371_fu_27599_p1 = i103_reg_11747.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2372_fu_27680_p2() {
    tmp_2372_fu_27680_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1014_reg_45222.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2373_fu_27731_p3() {
    tmp_2373_fu_27731_p3 = esl_concat<12,2>(tmp_1020_reg_45239.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2374_fu_28236_p1() {
    tmp_2374_fu_28236_p1 = k42_reg_11824.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2375_fu_27977_p1() {
    tmp_2375_fu_27977_p1 = i105_reg_11802.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2376_fu_28173_p1() {
    tmp_2376_fu_28173_p1 = grp_fu_28065_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2379_fu_28371_p3() {
    tmp_2379_fu_28371_p3 = esl_concat<10,3>(tmp_1038_fu_28366_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_237_cast_cast_fu_21815_p1() {
    tmp_237_cast_cast_fu_21815_p1 = esl_sext<9,7>(tmp_237_fu_21809_p2.read());
}

void ShuffleNetV2::thread_tmp_237_fu_21809_p2() {
    tmp_237_fu_21809_p2 = (!p_shl48_cast_fu_21793_p1.read().is_01() || !p_shl49_cast_fu_21805_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl48_cast_fu_21793_p1.read()) - sc_biguint<7>(p_shl49_cast_fu_21805_p1.read()));
}

void ShuffleNetV2::thread_tmp_2380_fu_28383_p3() {
    tmp_2380_fu_28383_p3 = esl_concat<10,1>(tmp_1038_fu_28366_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2381_fu_28654_p1() {
    tmp_2381_fu_28654_p1 = co119_reg_11901.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2382_fu_28688_p4() {
    tmp_2382_fu_28688_p4 = co119_reg_11901.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2383_fu_28534_p3() {
    tmp_2383_fu_28534_p3 = esl_concat<11,3>(tmp_1040_fu_28529_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2384_fu_28546_p3() {
    tmp_2384_fu_28546_p3 = esl_concat<11,1>(tmp_1040_fu_28529_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2385_fu_28569_p3() {
    tmp_2385_fu_28569_p3 = esl_concat<10,3>(tmp_1042_fu_28564_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2386_fu_28581_p3() {
    tmp_2386_fu_28581_p3 = esl_concat<10,1>(tmp_1042_fu_28564_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2387_fu_29002_p1() {
    tmp_2387_fu_29002_p1 = k44_reg_11945.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2388_fu_28743_p1() {
    tmp_2388_fu_28743_p1 = i109_reg_11923.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2389_fu_28939_p1() {
    tmp_2389_fu_28939_p1 = grp_fu_28831_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_238_cast_fu_21875_p1() {
    tmp_238_cast_fu_21875_p1 = esl_sext<10,9>(tmp_238_reg_43402.read());
}

void ShuffleNetV2::thread_tmp_238_fu_21819_p2() {
    tmp_238_fu_21819_p2 = (!tmp_237_cast_cast_fu_21815_p1.read().is_01() || !tmp_229_cast_cast_reg_43371.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_237_cast_cast_fu_21815_p1.read()) + sc_biguint<9>(tmp_229_cast_cast_reg_43371.read()));
}

void ShuffleNetV2::thread_tmp_2392_fu_29439_p1() {
    tmp_2392_fu_29439_p1 = co123_reg_12022.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2393_fu_29473_p4() {
    tmp_2393_fu_29473_p4 = co123_reg_12022.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2394_fu_29351_p1() {
    tmp_2394_fu_29351_p1 = k46_reg_12011.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2395_fu_29146_p1() {
    tmp_2395_fu_29146_p1 = i114_reg_11989.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2396_fu_29227_p2() {
    tmp_2396_fu_29227_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1055_reg_45707.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2397_fu_29282_p3() {
    tmp_2397_fu_29282_p3 = esl_concat<13,2>(tmp_1061_reg_45724.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2398_fu_29787_p1() {
    tmp_2398_fu_29787_p1 = k48_reg_12066.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2399_fu_29528_p1() {
    tmp_2399_fu_29528_p1 = i116_reg_12044.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_239_cast_fu_21854_p1() {
    tmp_239_cast_fu_21854_p1 = esl_sext<10,8>(tmp_239_fu_21848_p2.read());
}

void ShuffleNetV2::thread_tmp_239_fu_21848_p2() {
    tmp_239_fu_21848_p2 = (!p_shl50_cast_fu_21832_p1.read().is_01() || !p_shl51_cast_fu_21844_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl50_cast_fu_21832_p1.read()) - sc_biguint<8>(p_shl51_cast_fu_21844_p1.read()));
}

void ShuffleNetV2::thread_tmp_2400_fu_29724_p1() {
    tmp_2400_fu_29724_p1 = grp_fu_29616_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2403_fu_29922_p3() {
    tmp_2403_fu_29922_p3 = esl_concat<10,3>(tmp_1079_fu_29917_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2404_fu_29934_p3() {
    tmp_2404_fu_29934_p3 = esl_concat<10,1>(tmp_1079_fu_29917_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2405_fu_30205_p1() {
    tmp_2405_fu_30205_p1 = co129_reg_12143.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2406_fu_30239_p4() {
    tmp_2406_fu_30239_p4 = co129_reg_12143.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2407_fu_30085_p3() {
    tmp_2407_fu_30085_p3 = esl_concat<11,3>(tmp_1081_fu_30080_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2408_fu_30097_p3() {
    tmp_2408_fu_30097_p3 = esl_concat<11,1>(tmp_1081_fu_30080_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2409_fu_30120_p3() {
    tmp_2409_fu_30120_p3 = esl_concat<10,3>(tmp_1083_fu_30115_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2410_fu_30132_p3() {
    tmp_2410_fu_30132_p3 = esl_concat<10,1>(tmp_1083_fu_30115_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2411_fu_30561_p1() {
    tmp_2411_fu_30561_p1 = k50_reg_12187.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2412_fu_30294_p1() {
    tmp_2412_fu_30294_p1 = i120_reg_12165.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2413_fu_30498_p1() {
    tmp_2413_fu_30498_p1 = grp_fu_30382_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2416_fu_30990_p1() {
    tmp_2416_fu_30990_p1 = co133_reg_12264.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2417_fu_31024_p4() {
    tmp_2417_fu_31024_p4 = co133_reg_12264.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2418_fu_30902_p1() {
    tmp_2418_fu_30902_p1 = k52_reg_12253.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2419_fu_30705_p1() {
    tmp_2419_fu_30705_p1 = i125_reg_12231.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_241_fu_22277_p2() {
    tmp_241_fu_22277_p2 = (!co78_cast_fu_22261_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co78_cast_fu_22261_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_2420_fu_30786_p2() {
    tmp_2420_fu_30786_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1098_reg_46192.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2421_fu_30833_p3() {
    tmp_2421_fu_30833_p3 = esl_concat<14,2>(tmp_1103_reg_46209.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2422_fu_31346_p1() {
    tmp_2422_fu_31346_p1 = k54_reg_12308.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2423_fu_31079_p1() {
    tmp_2423_fu_31079_p1 = i127_reg_12286.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2424_fu_31283_p1() {
    tmp_2424_fu_31283_p1 = grp_fu_31167_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2427_fu_31485_p3() {
    tmp_2427_fu_31485_p3 = esl_concat<10,3>(tmp_1123_fu_31480_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2428_fu_31497_p3() {
    tmp_2428_fu_31497_p3 = esl_concat<10,1>(tmp_1123_fu_31480_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2429_fu_31768_p1() {
    tmp_2429_fu_31768_p1 = co139_reg_12385.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2430_fu_31802_p4() {
    tmp_2430_fu_31802_p4 = co139_reg_12385.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2431_fu_31648_p3() {
    tmp_2431_fu_31648_p3 = esl_concat<11,3>(tmp_1125_fu_31643_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2432_fu_31660_p3() {
    tmp_2432_fu_31660_p3 = esl_concat<11,1>(tmp_1125_fu_31643_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2433_fu_31683_p3() {
    tmp_2433_fu_31683_p3 = esl_concat<10,3>(tmp_1127_fu_31678_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2434_fu_31695_p3() {
    tmp_2434_fu_31695_p3 = esl_concat<10,1>(tmp_1127_fu_31678_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2435_fu_32124_p1() {
    tmp_2435_fu_32124_p1 = k56_reg_12429.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2436_fu_31857_p1() {
    tmp_2436_fu_31857_p1 = i131_reg_12407.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2437_fu_32061_p1() {
    tmp_2437_fu_32061_p1 = grp_fu_31945_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_243_fu_22486_p2() {
    tmp_243_fu_22486_p2 = (!p_shl52_cast_fu_22470_p1.read().is_01() || !p_shl53_cast_fu_22482_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl52_cast_fu_22470_p1.read()) - sc_biguint<7>(p_shl53_cast_fu_22482_p1.read()));
}

void ShuffleNetV2::thread_tmp_2440_fu_32557_p1() {
    tmp_2440_fu_32557_p1 = co143_reg_12506.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2441_fu_32591_p4() {
    tmp_2441_fu_32591_p4 = co143_reg_12506.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2442_fu_32465_p1() {
    tmp_2442_fu_32465_p1 = k58_reg_12495.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2443_fu_32272_p1() {
    tmp_2443_fu_32272_p1 = i136_reg_12473.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2444_fu_32353_p2() {
    tmp_2444_fu_32353_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1142_reg_46677.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2445_fu_32396_p3() {
    tmp_2445_fu_32396_p3 = esl_concat<13,2>(tmp_1147_reg_46694.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2446_fu_32913_p1() {
    tmp_2446_fu_32913_p1 = k60_reg_12550.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2447_fu_32646_p1() {
    tmp_2447_fu_32646_p1 = i138_reg_12528.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2448_fu_32850_p1() {
    tmp_2448_fu_32850_p1 = grp_fu_32742_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_244_cast_cast_fu_22502_p1() {
    tmp_244_cast_cast_fu_22502_p1 = esl_zext<9,4>(tmp_2286_fu_22492_p4.read());
}

void ShuffleNetV2::thread_tmp_2451_fu_33124_p1() {
    tmp_2451_fu_33124_p1 = co147_reg_12594.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2452_fu_33140_p2() {
    tmp_2452_fu_33140_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co147_reg_12594.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2453_fu_33156_p4() {
    tmp_2453_fu_33156_p4 = co147_reg_12594.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2454_fu_33052_p3() {
    tmp_2454_fu_33052_p3 = esl_concat<10,3>(tmp_1159_fu_33047_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2455_fu_33064_p3() {
    tmp_2455_fu_33064_p3 = esl_concat<10,1>(tmp_1159_fu_33047_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2456_fu_33460_p1() {
    tmp_2456_fu_33460_p1 = k62_reg_12638.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2457_fu_33211_p1() {
    tmp_2457_fu_33211_p1 = i142_reg_12616.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2458_fu_33231_p2() {
    tmp_2458_fu_33231_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i142_reg_12616.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2459_fu_33397_p1() {
    tmp_2459_fu_33397_p1 = grp_fu_33289_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_245_cast_fu_22840_p1() {
    tmp_245_cast_fu_22840_p1 = esl_sext<10,7>(tmp_245_fu_22834_p2.read());
}

void ShuffleNetV2::thread_tmp_245_fu_22834_p2() {
    tmp_245_fu_22834_p2 = (!p_shl54_cast_fu_22818_p1.read().is_01() || !p_shl55_cast_fu_22830_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl54_cast_fu_22818_p1.read()) - sc_biguint<7>(p_shl55_cast_fu_22830_p1.read()));
}

void ShuffleNetV2::thread_tmp_2462_fu_33893_p1() {
    tmp_2462_fu_33893_p1 = co151_reg_12715.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2463_fu_33909_p2() {
    tmp_2463_fu_33909_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co151_reg_12715.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2464_fu_33925_p4() {
    tmp_2464_fu_33925_p4 = co151_reg_12715.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2465_fu_33801_p1() {
    tmp_2465_fu_33801_p1 = k64_reg_12704.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2466_fu_33608_p1() {
    tmp_2466_fu_33608_p1 = i147_reg_12682.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2467_fu_33689_p2() {
    tmp_2467_fu_33689_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1170_reg_47108.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2468_fu_33732_p3() {
    tmp_2468_fu_33732_p3 = esl_concat<13,2>(tmp_1175_reg_47125.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2469_fu_34229_p1() {
    tmp_2469_fu_34229_p1 = k66_reg_12759.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_246_cast_fu_22874_p1() {
    tmp_246_cast_fu_22874_p1 = esl_sext<32,7>(tmp_246_reg_43689.read());
}

void ShuffleNetV2::thread_tmp_246_fu_22844_p2() {
    tmp_246_fu_22844_p2 = (!tmp_245_fu_22834_p2.read().is_01() || !i68_cast1_reg_43668.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_245_fu_22834_p2.read()) + sc_biguint<7>(i68_cast1_reg_43668.read()));
}

void ShuffleNetV2::thread_tmp_2470_fu_33980_p1() {
    tmp_2470_fu_33980_p1 = i149_reg_12737.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2471_fu_34000_p2() {
    tmp_2471_fu_34000_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i149_reg_12737.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2472_fu_34166_p1() {
    tmp_2472_fu_34166_p1 = grp_fu_34058_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2475_fu_34662_p1() {
    tmp_2475_fu_34662_p1 = co155_reg_12836.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2476_fu_34678_p2() {
    tmp_2476_fu_34678_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co155_reg_12836.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2477_fu_34694_p4() {
    tmp_2477_fu_34694_p4 = co155_reg_12836.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2478_fu_34574_p1() {
    tmp_2478_fu_34574_p1 = k68_reg_12825.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2479_fu_34381_p1() {
    tmp_2479_fu_34381_p1 = i154_reg_12803.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2480_fu_34462_p2() {
    tmp_2480_fu_34462_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1186_reg_47368.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2481_fu_34505_p3() {
    tmp_2481_fu_34505_p3 = esl_concat<13,2>(tmp_1191_reg_47385.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2482_fu_34998_p1() {
    tmp_2482_fu_34998_p1 = k70_reg_12880.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2483_fu_34749_p1() {
    tmp_2483_fu_34749_p1 = i156_reg_12858.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2484_fu_34769_p2() {
    tmp_2484_fu_34769_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i156_reg_12858.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2485_fu_34935_p1() {
    tmp_2485_fu_34935_p1 = grp_fu_34827_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2488_fu_35297_p1() {
    tmp_2488_fu_35297_p1 = co159_reg_12924.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2489_fu_35313_p2() {
    tmp_2489_fu_35313_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co159_reg_12924.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_248_cast_cast_fu_22531_p1() {
    tmp_248_cast_cast_fu_22531_p1 = esl_sext<8,7>(tmp_248_fu_22526_p2.read());
}

void ShuffleNetV2::thread_tmp_248_fu_22526_p2() {
    tmp_248_fu_22526_p2 = (!tmp_243_reg_43591.read().is_01() || !ci44_cast_fu_22506_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_243_reg_43591.read()) + sc_biguint<7>(ci44_cast_fu_22506_p1.read()));
}

void ShuffleNetV2::thread_tmp_2490_fu_35329_p4() {
    tmp_2490_fu_35329_p4 = co159_reg_12924.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2491_fu_35185_p1() {
    tmp_2491_fu_35185_p1 = tmp_1206_fu_35180_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2492_fu_35216_p1() {
    tmp_2492_fu_35216_p1 = tmp_1208_fu_35211_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_2493_fu_35633_p1() {
    tmp_2493_fu_35633_p1 = k72_reg_12968.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2494_fu_35384_p1() {
    tmp_2494_fu_35384_p1 = i160_reg_12946.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2495_fu_35404_p2() {
    tmp_2495_fu_35404_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i160_reg_12946.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2496_fu_35570_p1() {
    tmp_2496_fu_35570_p1 = grp_fu_35462_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2499_fu_36058_p1() {
    tmp_2499_fu_36058_p1 = co163_reg_13045.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_249_cast_cast_fu_22581_p1() {
    tmp_249_cast_cast_fu_22581_p1 = esl_sext<9,7>(tmp_249_fu_22575_p2.read());
}

void ShuffleNetV2::thread_tmp_249_fu_22575_p2() {
    tmp_249_fu_22575_p2 = (!p_shl56_cast_fu_22559_p1.read().is_01() || !p_shl57_cast_fu_22571_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl56_cast_fu_22559_p1.read()) - sc_biguint<7>(p_shl57_cast_fu_22571_p1.read()));
}

void ShuffleNetV2::thread_tmp_2500_fu_36074_p2() {
    tmp_2500_fu_36074_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co163_reg_13045.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2501_fu_36090_p4() {
    tmp_2501_fu_36090_p4 = co163_reg_13045.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2502_fu_35970_p1() {
    tmp_2502_fu_35970_p1 = k74_reg_13034.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2503_fu_35777_p1() {
    tmp_2503_fu_35777_p1 = i165_reg_13012.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2504_fu_35858_p2() {
    tmp_2504_fu_35858_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1220_reg_47809.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2505_fu_35901_p3() {
    tmp_2505_fu_35901_p3 = esl_concat<13,2>(tmp_1225_reg_47826.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2506_fu_36402_p1() {
    tmp_2506_fu_36402_p1 = k76_reg_13089.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2507_fu_36145_p1() {
    tmp_2507_fu_36145_p1 = i167_reg_13067.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2508_fu_36165_p2() {
    tmp_2508_fu_36165_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i167_reg_13067.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2509_fu_36339_p1() {
    tmp_2509_fu_36339_p1 = grp_fu_36223_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_250_cast_fu_22641_p1() {
    tmp_250_cast_fu_22641_p1 = esl_sext<10,9>(tmp_250_reg_43627.read());
}

void ShuffleNetV2::thread_tmp_250_fu_22585_p2() {
    tmp_250_fu_22585_p2 = (!tmp_249_cast_cast_fu_22581_p1.read().is_01() || !tmp_244_cast_cast_reg_43596.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_249_cast_cast_fu_22581_p1.read()) + sc_biguint<9>(tmp_244_cast_cast_reg_43596.read()));
}

void ShuffleNetV2::thread_tmp_2512_fu_36541_p1() {
    tmp_2512_fu_36541_p1 = tmp_1245_fu_36536_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2513_fu_36553_p3() {
    tmp_2513_fu_36553_p3 = esl_concat<12,1>(tmp_1245_fu_36536_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2514_fu_36824_p1() {
    tmp_2514_fu_36824_p1 = co169_reg_13166.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2515_fu_36840_p2() {
    tmp_2515_fu_36840_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co169_reg_13166.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2516_fu_36856_p4() {
    tmp_2516_fu_36856_p4 = co169_reg_13166.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2517_fu_36712_p1() {
    tmp_2517_fu_36712_p1 = tmp_1247_fu_36707_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2518_fu_36743_p1() {
    tmp_2518_fu_36743_p1 = tmp_1249_fu_36738_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_2519_fu_37160_p1() {
    tmp_2519_fu_37160_p1 = k78_reg_13210.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_251_cast_fu_22620_p1() {
    tmp_251_cast_fu_22620_p1 = esl_sext<10,8>(tmp_251_fu_22614_p2.read());
}

void ShuffleNetV2::thread_tmp_251_fu_22614_p2() {
    tmp_251_fu_22614_p2 = (!p_shl58_cast_fu_22598_p1.read().is_01() || !p_shl59_cast_fu_22610_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl58_cast_fu_22598_p1.read()) - sc_biguint<8>(p_shl59_cast_fu_22610_p1.read()));
}

void ShuffleNetV2::thread_tmp_2520_fu_36911_p1() {
    tmp_2520_fu_36911_p1 = i171_reg_13188.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2521_fu_36931_p2() {
    tmp_2521_fu_36931_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i171_reg_13188.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2522_fu_37097_p1() {
    tmp_2522_fu_37097_p1 = grp_fu_36989_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2525_fu_37597_p1() {
    tmp_2525_fu_37597_p1 = co173_reg_13287.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2526_fu_37613_p2() {
    tmp_2526_fu_37613_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co173_reg_13287.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2527_fu_37629_p4() {
    tmp_2527_fu_37629_p4 = co173_reg_13287.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2528_fu_37509_p1() {
    tmp_2528_fu_37509_p1 = k80_reg_13276.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2529_fu_37304_p1() {
    tmp_2529_fu_37304_p1 = i176_reg_13254.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2530_fu_37385_p2() {
    tmp_2530_fu_37385_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1262_reg_48294.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2531_fu_37440_p3() {
    tmp_2531_fu_37440_p3 = esl_concat<14,2>(tmp_1268_reg_48311.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2532_fu_37933_p1() {
    tmp_2532_fu_37933_p1 = k82_reg_13331.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2533_fu_37684_p1() {
    tmp_2533_fu_37684_p1 = i178_reg_13309.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2534_fu_37704_p2() {
    tmp_2534_fu_37704_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i178_reg_13309.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2535_fu_37870_p1() {
    tmp_2535_fu_37870_p1 = grp_fu_37762_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2538_fu_38072_p1() {
    tmp_2538_fu_38072_p1 = tmp_1286_fu_38067_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2539_fu_38084_p3() {
    tmp_2539_fu_38084_p3 = esl_concat<12,1>(tmp_1286_fu_38067_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_253_cast_cast_fu_23181_p1() {
    tmp_253_cast_cast_fu_23181_p1 = esl_sext<9,7>(tmp_253_fu_23175_p2.read());
}

void ShuffleNetV2::thread_tmp_253_fu_23175_p2() {
    tmp_253_fu_23175_p2 = (!p_shl60_cast_fu_23159_p1.read().is_01() || !p_shl61_cast_fu_23171_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl60_cast_fu_23159_p1.read()) - sc_biguint<7>(p_shl61_cast_fu_23171_p1.read()));
}

void ShuffleNetV2::thread_tmp_2540_fu_38355_p1() {
    tmp_2540_fu_38355_p1 = co179_reg_13408.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2541_fu_38371_p2() {
    tmp_2541_fu_38371_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co179_reg_13408.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2542_fu_38387_p4() {
    tmp_2542_fu_38387_p4 = co179_reg_13408.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2543_fu_38243_p1() {
    tmp_2543_fu_38243_p1 = tmp_1288_fu_38238_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2544_fu_38274_p1() {
    tmp_2544_fu_38274_p1 = tmp_1290_fu_38269_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_2545_fu_38691_p1() {
    tmp_2545_fu_38691_p1 = k84_reg_13452.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2546_fu_38442_p1() {
    tmp_2546_fu_38442_p1 = i182_reg_13430.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2547_fu_38462_p2() {
    tmp_2547_fu_38462_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i182_reg_13430.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2548_fu_38628_p1() {
    tmp_2548_fu_38628_p1 = grp_fu_38520_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_254_cast_fu_23219_p1() {
    tmp_254_cast_fu_23219_p1 = esl_sext<32,7>(tmp_254_reg_43822.read());
}

void ShuffleNetV2::thread_tmp_254_fu_23185_p2() {
    tmp_254_fu_23185_p2 = (!tmp_253_fu_23175_p2.read().is_01() || !i71_cast_reg_43801.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_253_fu_23175_p2.read()) + sc_biguint<7>(i71_cast_reg_43801.read()));
}

void ShuffleNetV2::thread_tmp_2551_fu_39120_p1() {
    tmp_2551_fu_39120_p1 = co183_reg_13529.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2552_fu_39136_p2() {
    tmp_2552_fu_39136_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co183_reg_13529.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2553_fu_39152_p4() {
    tmp_2553_fu_39152_p4 = co183_reg_13529.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2554_fu_39032_p1() {
    tmp_2554_fu_39032_p1 = k86_reg_13518.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2555_fu_38835_p1() {
    tmp_2555_fu_38835_p1 = i187_reg_13496.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2556_fu_38916_p2() {
    tmp_2556_fu_38916_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1303_reg_48779.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2557_fu_38963_p3() {
    tmp_2557_fu_38963_p3 = esl_concat<15,2>(tmp_1308_reg_48796.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2558_fu_39456_p1() {
    tmp_2558_fu_39456_p1 = k88_reg_13573.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2559_fu_39207_p1() {
    tmp_2559_fu_39207_p1 = i189_reg_13551.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_255_fu_23267_p2() {
    tmp_255_fu_23267_p2 = (!p_shl62_cast_fu_23251_p1.read().is_01() || !p_shl63_cast_fu_23263_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl62_cast_fu_23251_p1.read()) - sc_biguint<7>(p_shl63_cast_fu_23263_p1.read()));
}

void ShuffleNetV2::thread_tmp_2560_fu_39227_p2() {
    tmp_2560_fu_39227_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i189_reg_13551.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2561_fu_39393_p1() {
    tmp_2561_fu_39393_p1 = grp_fu_39285_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2564_fu_39595_p1() {
    tmp_2564_fu_39595_p1 = tmp_1324_fu_39590_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2565_fu_39607_p3() {
    tmp_2565_fu_39607_p3 = esl_concat<12,1>(tmp_1324_fu_39590_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2566_fu_39747_p1() {
    tmp_2566_fu_39747_p1 = tmp_1327_fu_39742_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_256_fu_23307_p2() {
    tmp_256_fu_23307_p2 = (!tmp_255_reg_43851.read().is_01() || !ci46_cast_fu_23287_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_255_reg_43851.read()) + sc_biguint<7>(ci46_cast_fu_23287_p1.read()));
}

void ShuffleNetV2::thread_tmp_257_fu_22978_p2() {
    tmp_257_fu_22978_p2 = (!p_shl64_cast_fu_22962_p1.read().is_01() || !p_shl65_cast_fu_22974_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl64_cast_fu_22962_p1.read()) - sc_biguint<7>(p_shl65_cast_fu_22974_p1.read()));
}

void ShuffleNetV2::thread_tmp_258_cast_cast_fu_23283_p1() {
    tmp_258_cast_cast_fu_23283_p1 = esl_zext<9,4>(tmp_2297_fu_23273_p4.read());
}

void ShuffleNetV2::thread_tmp_258_fu_22988_p2() {
    tmp_258_fu_22988_p2 = (!co82_cast1_reg_43710.read().is_01() || !tmp_257_fu_22978_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co82_cast1_reg_43710.read()) + sc_biguint<7>(tmp_257_fu_22978_p2.read()));
}

void ShuffleNetV2::thread_tmp_259_cast_fu_22984_p1() {
    tmp_259_cast_fu_22984_p1 = esl_sext<9,7>(tmp_257_fu_22978_p2.read());
}

void ShuffleNetV2::thread_tmp_259_fu_23615_p2() {
    tmp_259_fu_23615_p2 = (!p_shl66_cast_fu_23599_p1.read().is_01() || !p_shl67_cast_fu_23611_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl66_cast_fu_23599_p1.read()) - sc_biguint<7>(p_shl67_cast_fu_23611_p1.read()));
}

void ShuffleNetV2::thread_tmp_260_cast_cast_fu_22993_p1() {
    tmp_260_cast_cast_fu_22993_p1 = esl_sext<10,7>(tmp_258_fu_22988_p2.read());
}

void ShuffleNetV2::thread_tmp_260_fu_23625_p2() {
    tmp_260_fu_23625_p2 = (!tmp_259_fu_23615_p2.read().is_01() || !i75_cast_reg_43928.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_259_fu_23615_p2.read()) + sc_biguint<7>(i75_cast_reg_43928.read()));
}

void ShuffleNetV2::thread_tmp_261_fu_23356_p2() {
    tmp_261_fu_23356_p2 = (!p_shl68_cast_fu_23340_p1.read().is_01() || !p_shl69_cast_fu_23352_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl68_cast_fu_23340_p1.read()) - sc_biguint<7>(p_shl69_cast_fu_23352_p1.read()));
}

void ShuffleNetV2::thread_tmp_262_cast_cast_fu_23621_p1() {
    tmp_262_cast_cast_fu_23621_p1 = esl_sext<9,7>(tmp_259_fu_23615_p2.read());
}

void ShuffleNetV2::thread_tmp_262_cast_fu_23422_p1() {
    tmp_262_cast_fu_23422_p1 = esl_sext<10,9>(tmp_262_reg_43887.read());
}

void ShuffleNetV2::thread_tmp_262_fu_23366_p2() {
    tmp_262_fu_23366_p2 = (!tmp_266_cast_cast_fu_23362_p1.read().is_01() || !tmp_258_cast_cast_reg_43856.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_266_cast_cast_fu_23362_p1.read()) + sc_biguint<9>(tmp_258_cast_cast_reg_43856.read()));
}

void ShuffleNetV2::thread_tmp_263_cast_fu_23659_p1() {
    tmp_263_cast_fu_23659_p1 = esl_sext<32,7>(tmp_260_reg_43949.read());
}

void ShuffleNetV2::thread_tmp_263_fu_23395_p2() {
    tmp_263_fu_23395_p2 = (!p_shl70_cast_fu_23379_p1.read().is_01() || !p_shl71_cast_fu_23391_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl70_cast_fu_23379_p1.read()) - sc_biguint<8>(p_shl71_cast_fu_23391_p1.read()));
}

void ShuffleNetV2::thread_tmp_264_fu_23828_p2() {
    tmp_264_fu_23828_p2 = (!co88_cast_fu_23812_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co88_cast_fu_23812_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_265_cast_cast_fu_23312_p1() {
    tmp_265_cast_cast_fu_23312_p1 = esl_sext<8,7>(tmp_256_fu_23307_p2.read());
}

void ShuffleNetV2::thread_tmp_265_fu_24037_p2() {
    tmp_265_fu_24037_p2 = (!p_shl72_cast_fu_24021_p1.read().is_01() || !p_shl73_cast_fu_24033_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl72_cast_fu_24021_p1.read()) - sc_biguint<7>(p_shl73_cast_fu_24033_p1.read()));
}

void ShuffleNetV2::thread_tmp_266_cast_cast_fu_23362_p1() {
    tmp_266_cast_cast_fu_23362_p1 = esl_sext<9,7>(tmp_261_fu_23356_p2.read());
}

void ShuffleNetV2::thread_tmp_266_fu_24077_p2() {
    tmp_266_fu_24077_p2 = (!tmp_265_reg_44076.read().is_01() || !ci48_cast_fu_24057_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_265_reg_44076.read()) + sc_biguint<7>(ci48_cast_fu_24057_p1.read()));
}

void ShuffleNetV2::thread_tmp_267_fu_24393_p2() {
    tmp_267_fu_24393_p2 = (!p_shl74_cast_fu_24377_p1.read().is_01() || !p_shl75_cast_fu_24389_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl74_cast_fu_24377_p1.read()) - sc_biguint<7>(p_shl75_cast_fu_24389_p1.read()));
}

void ShuffleNetV2::thread_tmp_268_cast_fu_23401_p1() {
    tmp_268_cast_fu_23401_p1 = esl_sext<10,8>(tmp_263_fu_23395_p2.read());
}

void ShuffleNetV2::thread_tmp_268_fu_24403_p2() {
    tmp_268_fu_24403_p2 = (!tmp_267_fu_24393_p2.read().is_01() || !i80_cast_reg_44153.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_267_fu_24393_p2.read()) + sc_biguint<7>(i80_cast_reg_44153.read()));
}

void ShuffleNetV2::thread_tmp_269_fu_24126_p2() {
    tmp_269_fu_24126_p2 = (!p_shl76_cast_fu_24110_p1.read().is_01() || !p_shl77_cast_fu_24122_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl76_cast_fu_24110_p1.read()) - sc_biguint<7>(p_shl77_cast_fu_24122_p1.read()));
}

void ShuffleNetV2::thread_tmp_270_cast_fu_24192_p1() {
    tmp_270_cast_fu_24192_p1 = esl_sext<10,9>(tmp_270_reg_44112.read());
}

void ShuffleNetV2::thread_tmp_270_fu_24136_p2() {
    tmp_270_fu_24136_p2 = (!tmp_273_cast_cast_reg_44081.read().is_01() || !tmp_278_cast_cast_fu_24132_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_273_cast_cast_reg_44081.read()) + sc_bigint<9>(tmp_278_cast_cast_fu_24132_p1.read()));
}

void ShuffleNetV2::thread_tmp_271_fu_24165_p2() {
    tmp_271_fu_24165_p2 = (!p_shl78_cast_fu_24149_p1.read().is_01() || !p_shl79_cast_fu_24161_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl78_cast_fu_24149_p1.read()) - sc_biguint<8>(p_shl79_cast_fu_24161_p1.read()));
}

void ShuffleNetV2::thread_tmp_272_fu_24826_p2() {
    tmp_272_fu_24826_p2 = (!p_shl82_cast_fu_24810_p1.read().is_01() || !p_shl83_cast_fu_24822_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl82_cast_fu_24810_p1.read()) - sc_biguint<7>(p_shl83_cast_fu_24822_p1.read()));
}

void ShuffleNetV2::thread_tmp_273_cast_cast_fu_24053_p1() {
    tmp_273_cast_cast_fu_24053_p1 = esl_zext<9,4>(tmp_2310_fu_24043_p4.read());
}

void ShuffleNetV2::thread_tmp_273_fu_24734_p2() {
    tmp_273_fu_24734_p2 = (!p_shl80_cast_fu_24718_p1.read().is_01() || !p_shl81_cast_fu_24730_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl80_cast_fu_24718_p1.read()) - sc_biguint<7>(p_shl81_cast_fu_24730_p1.read()));
}

void ShuffleNetV2::thread_tmp_274_cast_cast_fu_24399_p1() {
    tmp_274_cast_cast_fu_24399_p1 = esl_sext<9,7>(tmp_267_fu_24393_p2.read());
}

void ShuffleNetV2::thread_tmp_274_fu_24744_p2() {
    tmp_274_fu_24744_p2 = (!tmp_273_fu_24734_p2.read().is_01() || !i83_cast_reg_44286.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_273_fu_24734_p2.read()) + sc_biguint<7>(i83_cast_reg_44286.read()));
}

void ShuffleNetV2::thread_tmp_275_cast_fu_24437_p1() {
    tmp_275_cast_fu_24437_p1 = esl_sext<32,7>(tmp_268_reg_44174.read());
}

void ShuffleNetV2::thread_tmp_275_fu_24866_p2() {
    tmp_275_fu_24866_p2 = (!tmp_272_reg_44336.read().is_01() || !ci50_cast_fu_24846_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_272_reg_44336.read()) + sc_biguint<7>(ci50_cast_fu_24846_p1.read()));
}

void ShuffleNetV2::thread_tmp_276_fu_24541_p2() {
    tmp_276_fu_24541_p2 = (!p_shl84_cast_fu_24525_p1.read().is_01() || !p_shl85_cast_fu_24537_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl84_cast_fu_24525_p1.read()) - sc_biguint<7>(p_shl85_cast_fu_24537_p1.read()));
}

void ShuffleNetV2::thread_tmp_277_cast_cast_fu_24082_p1() {
    tmp_277_cast_cast_fu_24082_p1 = esl_sext<8,7>(tmp_266_fu_24077_p2.read());
}

void ShuffleNetV2::thread_tmp_277_fu_24551_p2() {
    tmp_277_fu_24551_p2 = (!co92_cast1_reg_44195.read().is_01() || !tmp_276_fu_24541_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co92_cast1_reg_44195.read()) + sc_biguint<7>(tmp_276_fu_24541_p2.read()));
}

void ShuffleNetV2::thread_tmp_278_cast_cast_fu_24132_p1() {
    tmp_278_cast_cast_fu_24132_p1 = esl_sext<9,7>(tmp_269_fu_24126_p2.read());
}

void ShuffleNetV2::thread_tmp_278_fu_25174_p2() {
    tmp_278_fu_25174_p2 = (!p_shl86_cast_fu_25158_p1.read().is_01() || !p_shl87_cast_fu_25170_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl86_cast_fu_25158_p1.read()) - sc_biguint<7>(p_shl87_cast_fu_25170_p1.read()));
}

void ShuffleNetV2::thread_tmp_279_fu_25180_p2() {
    tmp_279_fu_25180_p2 = (!tmp_278_fu_25174_p2.read().is_01() || !i87_cast1_reg_44413.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_278_fu_25174_p2.read()) + sc_biguint<7>(i87_cast1_reg_44413.read()));
}

void ShuffleNetV2::thread_tmp_280_cast_cast_fu_24171_p1() {
    tmp_280_cast_cast_fu_24171_p1 = esl_sext<9,8>(tmp_271_fu_24165_p2.read());
}

void ShuffleNetV2::thread_tmp_280_fu_24915_p2() {
    tmp_280_fu_24915_p2 = (!p_shl88_cast_fu_24899_p1.read().is_01() || !p_shl89_cast_fu_24911_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl88_cast_fu_24899_p1.read()) - sc_biguint<7>(p_shl89_cast_fu_24911_p1.read()));
}

void ShuffleNetV2::thread_tmp_281_cast_fu_24981_p1() {
    tmp_281_cast_fu_24981_p1 = esl_sext<10,9>(tmp_281_reg_44372.read());
}

void ShuffleNetV2::thread_tmp_281_fu_24925_p2() {
    tmp_281_fu_24925_p2 = (!tmp_295_cast_cast_fu_24921_p1.read().is_01() || !tmp_287_cast_cast_reg_44341.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_295_cast_cast_fu_24921_p1.read()) + sc_biguint<9>(tmp_287_cast_cast_reg_44341.read()));
}

void ShuffleNetV2::thread_tmp_282_cast_cast_fu_24740_p1() {
    tmp_282_cast_cast_fu_24740_p1 = esl_sext<8,7>(tmp_273_fu_24734_p2.read());
}

void ShuffleNetV2::thread_tmp_282_fu_24954_p2() {
    tmp_282_fu_24954_p2 = (!p_shl90_cast_fu_24938_p1.read().is_01() || !p_shl91_cast_fu_24950_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl90_cast_fu_24938_p1.read()) - sc_biguint<8>(p_shl91_cast_fu_24950_p1.read()));
}

void ShuffleNetV2::thread_tmp_283_cast_fu_24778_p1() {
    tmp_283_cast_fu_24778_p1 = esl_sext<32,7>(tmp_274_reg_44307.read());
}

void ShuffleNetV2::thread_tmp_283_fu_25387_p2() {
    tmp_283_fu_25387_p2 = (!co98_cast_fu_25371_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co98_cast_fu_25371_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_284_fu_25596_p2() {
    tmp_284_fu_25596_p2 = (!p_shl92_cast_fu_25580_p1.read().is_01() || !p_shl93_cast_fu_25592_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl92_cast_fu_25580_p1.read()) - sc_biguint<7>(p_shl93_cast_fu_25592_p1.read()));
}

void ShuffleNetV2::thread_tmp_285_fu_25636_p2() {
    tmp_285_fu_25636_p2 = (!tmp_284_reg_44561.read().is_01() || !ci52_cast_fu_25616_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_284_reg_44561.read()) + sc_biguint<7>(ci52_cast_fu_25616_p1.read()));
}

void ShuffleNetV2::thread_tmp_286_fu_25944_p2() {
    tmp_286_fu_25944_p2 = (!p_shl94_cast_fu_25928_p1.read().is_01() || !p_shl95_cast_fu_25940_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl94_cast_fu_25928_p1.read()) - sc_biguint<7>(p_shl95_cast_fu_25940_p1.read()));
}

void ShuffleNetV2::thread_tmp_287_cast_cast_fu_24842_p1() {
    tmp_287_cast_cast_fu_24842_p1 = esl_zext<9,4>(tmp_2321_fu_24832_p4.read());
}

void ShuffleNetV2::thread_tmp_287_fu_25954_p2() {
    tmp_287_fu_25954_p2 = (!tmp_286_fu_25944_p2.read().is_01() || !i92_cast1_reg_44638.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_286_fu_25944_p2.read()) + sc_biguint<7>(i92_cast1_reg_44638.read()));
}

void ShuffleNetV2::thread_tmp_288_cast_fu_24547_p1() {
    tmp_288_cast_fu_24547_p1 = esl_sext<9,7>(tmp_276_fu_24541_p2.read());
}

void ShuffleNetV2::thread_tmp_288_fu_25685_p2() {
    tmp_288_fu_25685_p2 = (!p_shl96_cast_fu_25669_p1.read().is_01() || !p_shl97_cast_fu_25681_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl96_cast_fu_25669_p1.read()) - sc_biguint<7>(p_shl97_cast_fu_25681_p1.read()));
}

void ShuffleNetV2::thread_tmp_289_cast_cast_fu_24556_p1() {
    tmp_289_cast_cast_fu_24556_p1 = esl_sext<10,7>(tmp_277_fu_24551_p2.read());
}

void ShuffleNetV2::thread_tmp_289_cast_fu_25751_p1() {
    tmp_289_cast_fu_25751_p1 = esl_sext<10,9>(tmp_289_reg_44597.read());
}

void ShuffleNetV2::thread_tmp_289_fu_25695_p2() {
    tmp_289_fu_25695_p2 = (!tmp_307_cast_cast_fu_25691_p1.read().is_01() || !tmp_302_cast_cast_reg_44566.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_307_cast_cast_fu_25691_p1.read()) + sc_biguint<9>(tmp_302_cast_cast_reg_44566.read()));
}

void ShuffleNetV2::thread_tmp_290_fu_25724_p2() {
    tmp_290_fu_25724_p2 = (!p_shl98_cast_fu_25708_p1.read().is_01() || !p_shl99_cast_fu_25720_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl98_cast_fu_25708_p1.read()) - sc_biguint<8>(p_shl99_cast_fu_25720_p1.read()));
}

void ShuffleNetV2::thread_tmp_291_fu_26369_p2() {
    tmp_291_fu_26369_p2 = (!p_shl102_cast_fu_26353_p1.read().is_01() || !p_shl103_cast_fu_26365_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl102_cast_fu_26353_p1.read()) - sc_biguint<7>(p_shl103_cast_fu_26365_p1.read()));
}

void ShuffleNetV2::thread_tmp_292_cast_fu_25218_p1() {
    tmp_292_cast_fu_25218_p1 = esl_sext<32,7>(tmp_279_reg_44434.read());
}

void ShuffleNetV2::thread_tmp_292_fu_26281_p2() {
    tmp_292_fu_26281_p2 = (!p_shl100_cast_fu_26265_p1.read().is_01() || !p_shl101_cast_fu_26277_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl100_cast_fu_26265_p1.read()) - sc_biguint<7>(p_shl101_cast_fu_26277_p1.read()));
}

void ShuffleNetV2::thread_tmp_293_fu_26291_p2() {
    tmp_293_fu_26291_p2 = (!tmp_292_fu_26281_p2.read().is_01() || !i95_cast1_reg_44771.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_292_fu_26281_p2.read()) + sc_biguint<7>(i95_cast1_reg_44771.read()));
}

void ShuffleNetV2::thread_tmp_294_cast_cast_fu_24871_p1() {
    tmp_294_cast_cast_fu_24871_p1 = esl_sext<8,7>(tmp_275_fu_24866_p2.read());
}

void ShuffleNetV2::thread_tmp_294_fu_26409_p2() {
    tmp_294_fu_26409_p2 = (!tmp_291_reg_44821.read().is_01() || !ci54_cast_fu_26389_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_291_reg_44821.read()) + sc_biguint<7>(ci54_cast_fu_26389_p1.read()));
}

void ShuffleNetV2::thread_tmp_295_cast_cast_fu_24921_p1() {
    tmp_295_cast_cast_fu_24921_p1 = esl_sext<9,7>(tmp_280_fu_24915_p2.read());
}

void ShuffleNetV2::thread_tmp_295_fu_26088_p2() {
    tmp_295_fu_26088_p2 = (!p_shl104_cast_fu_26072_p1.read().is_01() || !p_shl105_cast_fu_26084_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl104_cast_fu_26072_p1.read()) - sc_biguint<7>(p_shl105_cast_fu_26084_p1.read()));
}

void ShuffleNetV2::thread_tmp_296_fu_26098_p2() {
    tmp_296_fu_26098_p2 = (!co102_cast1_reg_44680.read().is_01() || !tmp_295_fu_26088_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co102_cast1_reg_44680.read()) + sc_biguint<7>(tmp_295_fu_26088_p2.read()));
}

void ShuffleNetV2::thread_tmp_297_cast_fu_24960_p1() {
    tmp_297_cast_fu_24960_p1 = esl_sext<11,8>(tmp_282_fu_24954_p2.read());
}

void ShuffleNetV2::thread_tmp_297_fu_26717_p2() {
    tmp_297_fu_26717_p2 = (!p_shl106_cast_fu_26701_p1.read().is_01() || !p_shl107_cast_fu_26713_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl106_cast_fu_26701_p1.read()) - sc_biguint<7>(p_shl107_cast_fu_26713_p1.read()));
}

void ShuffleNetV2::thread_tmp_298_fu_26727_p2() {
    tmp_298_fu_26727_p2 = (!tmp_297_fu_26717_p2.read().is_01() || !i99_cast1_reg_44898.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_297_fu_26717_p2.read()) + sc_biguint<7>(i99_cast1_reg_44898.read()));
}

void ShuffleNetV2::thread_tmp_299_fu_26458_p2() {
    tmp_299_fu_26458_p2 = (!p_shl108_cast_fu_26442_p1.read().is_01() || !p_shl109_cast_fu_26454_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl108_cast_fu_26442_p1.read()) - sc_biguint<7>(p_shl109_cast_fu_26454_p1.read()));
}

void ShuffleNetV2::thread_tmp_300_cast_fu_26524_p1() {
    tmp_300_cast_fu_26524_p1 = esl_sext<10,9>(tmp_300_reg_44857.read());
}

void ShuffleNetV2::thread_tmp_300_fu_26468_p2() {
    tmp_300_fu_26468_p2 = (!tmp_324_cast_cast_fu_26464_p1.read().is_01() || !tmp_316_cast_cast_reg_44826.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_324_cast_cast_fu_26464_p1.read()) + sc_biguint<9>(tmp_316_cast_cast_reg_44826.read()));
}

void ShuffleNetV2::thread_tmp_301_fu_26497_p2() {
    tmp_301_fu_26497_p2 = (!p_shl110_cast_fu_26481_p1.read().is_01() || !p_shl111_cast_fu_26493_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl110_cast_fu_26481_p1.read()) - sc_biguint<8>(p_shl111_cast_fu_26493_p1.read()));
}

void ShuffleNetV2::thread_tmp_302_cast_cast_fu_25612_p1() {
    tmp_302_cast_cast_fu_25612_p1 = esl_zext<9,4>(tmp_2334_fu_25602_p4.read());
}

void ShuffleNetV2::thread_tmp_302_fu_26926_p2() {
    tmp_302_fu_26926_p2 = (!co108_cast_fu_26910_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co108_cast_fu_26910_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_303_cast_fu_25950_p1() {
    tmp_303_cast_fu_25950_p1 = esl_sext<11,7>(tmp_286_fu_25944_p2.read());
}

void ShuffleNetV2::thread_tmp_303_fu_27135_p2() {
    tmp_303_fu_27135_p2 = (!p_shl112_cast_fu_27119_p1.read().is_01() || !p_shl113_cast_fu_27131_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl112_cast_fu_27119_p1.read()) - sc_biguint<7>(p_shl113_cast_fu_27131_p1.read()));
}

void ShuffleNetV2::thread_tmp_304_cast_fu_25984_p1() {
    tmp_304_cast_fu_25984_p1 = esl_sext<32,7>(tmp_287_reg_44659.read());
}

void ShuffleNetV2::thread_tmp_304_fu_27175_p2() {
    tmp_304_fu_27175_p2 = (!tmp_303_reg_45046.read().is_01() || !ci56_cast_fu_27155_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_303_reg_45046.read()) + sc_biguint<7>(ci56_cast_fu_27155_p1.read()));
}

void ShuffleNetV2::thread_tmp_305_fu_27483_p2() {
    tmp_305_fu_27483_p2 = (!p_shl114_cast_fu_27467_p1.read().is_01() || !p_shl115_cast_fu_27479_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl114_cast_fu_27467_p1.read()) - sc_biguint<7>(p_shl115_cast_fu_27479_p1.read()));
}

void ShuffleNetV2::thread_tmp_306_cast_cast_fu_25641_p1() {
    tmp_306_cast_cast_fu_25641_p1 = esl_sext<8,7>(tmp_285_fu_25636_p2.read());
}

void ShuffleNetV2::thread_tmp_306_fu_27493_p2() {
    tmp_306_fu_27493_p2 = (!tmp_305_fu_27483_p2.read().is_01() || !i104_cast1_reg_45123.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_305_fu_27483_p2.read()) + sc_biguint<7>(i104_cast1_reg_45123.read()));
}

void ShuffleNetV2::thread_tmp_307_cast_cast_fu_25691_p1() {
    tmp_307_cast_cast_fu_25691_p1 = esl_sext<9,7>(tmp_288_fu_25685_p2.read());
}

void ShuffleNetV2::thread_tmp_307_fu_27224_p2() {
    tmp_307_fu_27224_p2 = (!p_shl116_cast_fu_27208_p1.read().is_01() || !p_shl117_cast_fu_27220_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl116_cast_fu_27208_p1.read()) - sc_biguint<7>(p_shl117_cast_fu_27220_p1.read()));
}

void ShuffleNetV2::thread_tmp_308_cast_fu_27290_p1() {
    tmp_308_cast_fu_27290_p1 = esl_sext<10,9>(tmp_308_reg_45082.read());
}

void ShuffleNetV2::thread_tmp_308_fu_27234_p2() {
    tmp_308_fu_27234_p2 = (!tmp_336_cast_cast_fu_27230_p1.read().is_01() || !tmp_331_cast_cast_reg_45051.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_336_cast_cast_fu_27230_p1.read()) + sc_biguint<9>(tmp_331_cast_cast_reg_45051.read()));
}

void ShuffleNetV2::thread_tmp_309_cast_fu_25730_p1() {
    tmp_309_cast_fu_25730_p1 = esl_sext<11,8>(tmp_290_fu_25724_p2.read());
}

void ShuffleNetV2::thread_tmp_309_fu_27263_p2() {
    tmp_309_fu_27263_p2 = (!p_shl118_cast_fu_27247_p1.read().is_01() || !p_shl119_cast_fu_27259_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl118_cast_fu_27247_p1.read()) - sc_biguint<8>(p_shl119_cast_fu_27259_p1.read()));
}

void ShuffleNetV2::thread_tmp_310_fu_27916_p2() {
    tmp_310_fu_27916_p2 = (!p_shl122_cast_fu_27900_p1.read().is_01() || !p_shl123_cast_fu_27912_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl122_cast_fu_27900_p1.read()) - sc_biguint<7>(p_shl123_cast_fu_27912_p1.read()));
}

void ShuffleNetV2::thread_tmp_311_cast_fu_26287_p1() {
    tmp_311_cast_fu_26287_p1 = esl_sext<11,7>(tmp_292_fu_26281_p2.read());
}

void ShuffleNetV2::thread_tmp_311_fu_27828_p2() {
    tmp_311_fu_27828_p2 = (!p_shl120_cast_fu_27812_p1.read().is_01() || !p_shl121_cast_fu_27824_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl120_cast_fu_27812_p1.read()) - sc_biguint<7>(p_shl121_cast_fu_27824_p1.read()));
}

void ShuffleNetV2::thread_tmp_312_cast_fu_26321_p1() {
    tmp_312_cast_fu_26321_p1 = esl_sext<32,7>(tmp_293_reg_44792.read());
}

void ShuffleNetV2::thread_tmp_312_fu_27838_p2() {
    tmp_312_fu_27838_p2 = (!tmp_311_fu_27828_p2.read().is_01() || !i107_cast1_reg_45256.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_311_fu_27828_p2.read()) + sc_biguint<7>(i107_cast1_reg_45256.read()));
}

void ShuffleNetV2::thread_tmp_313_fu_27956_p2() {
    tmp_313_fu_27956_p2 = (!tmp_310_reg_45306.read().is_01() || !ci58_cast_fu_27936_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_310_reg_45306.read()) + sc_biguint<7>(ci58_cast_fu_27936_p1.read()));
}

void ShuffleNetV2::thread_tmp_314_fu_27627_p2() {
    tmp_314_fu_27627_p2 = (!p_shl124_cast_fu_27611_p1.read().is_01() || !p_shl125_cast_fu_27623_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl124_cast_fu_27611_p1.read()) - sc_biguint<7>(p_shl125_cast_fu_27623_p1.read()));
}

void ShuffleNetV2::thread_tmp_315_fu_27637_p2() {
    tmp_315_fu_27637_p2 = (!tmp_314_fu_27627_p2.read().is_01() || !co112_cast_reg_45165.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_314_fu_27627_p2.read()) + sc_biguint<7>(co112_cast_reg_45165.read()));
}

void ShuffleNetV2::thread_tmp_316_cast_cast_fu_26385_p1() {
    tmp_316_cast_cast_fu_26385_p1 = esl_zext<9,4>(tmp_2345_fu_26375_p4.read());
}

void ShuffleNetV2::thread_tmp_316_fu_28264_p2() {
    tmp_316_fu_28264_p2 = (!p_shl126_cast_fu_28248_p1.read().is_01() || !p_shl127_cast_fu_28260_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl126_cast_fu_28248_p1.read()) - sc_biguint<7>(p_shl127_cast_fu_28260_p1.read()));
}

void ShuffleNetV2::thread_tmp_317_cast_fu_26094_p1() {
    tmp_317_cast_fu_26094_p1 = esl_sext<9,7>(tmp_295_fu_26088_p2.read());
}

void ShuffleNetV2::thread_tmp_317_fu_28274_p2() {
    tmp_317_fu_28274_p2 = (!tmp_316_fu_28264_p2.read().is_01() || !i111_cast1_reg_45383.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_316_fu_28264_p2.read()) + sc_biguint<7>(i111_cast1_reg_45383.read()));
}

void ShuffleNetV2::thread_tmp_318_cast_cast_fu_26103_p1() {
    tmp_318_cast_cast_fu_26103_p1 = esl_sext<10,7>(tmp_296_fu_26098_p2.read());
}

void ShuffleNetV2::thread_tmp_318_fu_28005_p2() {
    tmp_318_fu_28005_p2 = (!p_shl128_cast_fu_27989_p1.read().is_01() || !p_shl129_cast_fu_28001_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl128_cast_fu_27989_p1.read()) - sc_biguint<7>(p_shl129_cast_fu_28001_p1.read()));
}

void ShuffleNetV2::thread_tmp_319_cast_fu_28071_p1() {
    tmp_319_cast_fu_28071_p1 = esl_sext<10,9>(tmp_319_reg_45342.read());
}

void ShuffleNetV2::thread_tmp_319_fu_28015_p2() {
    tmp_319_fu_28015_p2 = (!tmp_353_cast_cast_fu_28011_p1.read().is_01() || !tmp_345_cast_cast_reg_45311.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_353_cast_cast_fu_28011_p1.read()) + sc_biguint<9>(tmp_345_cast_cast_reg_45311.read()));
}

void ShuffleNetV2::thread_tmp_320_cast_fu_26723_p1() {
    tmp_320_cast_fu_26723_p1 = esl_sext<11,7>(tmp_297_fu_26717_p2.read());
}

void ShuffleNetV2::thread_tmp_320_fu_28044_p2() {
    tmp_320_fu_28044_p2 = (!p_shl130_cast_fu_28028_p1.read().is_01() || !p_shl131_cast_fu_28040_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl130_cast_fu_28028_p1.read()) - sc_biguint<8>(p_shl131_cast_fu_28040_p1.read()));
}

void ShuffleNetV2::thread_tmp_321_cast_fu_26757_p1() {
    tmp_321_cast_fu_26757_p1 = esl_sext<32,7>(tmp_298_reg_44919.read());
}

void ShuffleNetV2::thread_tmp_321_fu_28473_p2() {
    tmp_321_fu_28473_p2 = (!co118_cast_fu_28457_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co118_cast_fu_28457_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_322_fu_28682_p2() {
    tmp_322_fu_28682_p2 = (!p_shl132_cast_fu_28666_p1.read().is_01() || !p_shl133_cast_fu_28678_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl132_cast_fu_28666_p1.read()) - sc_biguint<7>(p_shl133_cast_fu_28678_p1.read()));
}

void ShuffleNetV2::thread_tmp_323_cast_cast_fu_26414_p1() {
    tmp_323_cast_cast_fu_26414_p1 = esl_sext<8,7>(tmp_294_fu_26409_p2.read());
}

void ShuffleNetV2::thread_tmp_323_fu_28722_p2() {
    tmp_323_fu_28722_p2 = (!tmp_322_reg_45531.read().is_01() || !ci60_cast_fu_28702_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_322_reg_45531.read()) + sc_biguint<7>(ci60_cast_fu_28702_p1.read()));
}

void ShuffleNetV2::thread_tmp_324_cast_cast_fu_26464_p1() {
    tmp_324_cast_cast_fu_26464_p1 = esl_sext<9,7>(tmp_299_fu_26458_p2.read());
}

void ShuffleNetV2::thread_tmp_324_fu_29030_p2() {
    tmp_324_fu_29030_p2 = (!p_shl134_cast_fu_29014_p1.read().is_01() || !p_shl135_cast_fu_29026_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl134_cast_fu_29014_p1.read()) - sc_biguint<7>(p_shl135_cast_fu_29026_p1.read()));
}

void ShuffleNetV2::thread_tmp_325_fu_29040_p2() {
    tmp_325_fu_29040_p2 = (!tmp_324_fu_29030_p2.read().is_01() || !i116_cast1_reg_45608.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_324_fu_29030_p2.read()) + sc_biguint<7>(i116_cast1_reg_45608.read()));
}

void ShuffleNetV2::thread_tmp_326_cast_fu_26503_p1() {
    tmp_326_cast_fu_26503_p1 = esl_sext<11,8>(tmp_301_fu_26497_p2.read());
}

void ShuffleNetV2::thread_tmp_326_fu_28771_p2() {
    tmp_326_fu_28771_p2 = (!p_shl136_cast_fu_28755_p1.read().is_01() || !p_shl137_cast_fu_28767_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl136_cast_fu_28755_p1.read()) - sc_biguint<7>(p_shl137_cast_fu_28767_p1.read()));
}

void ShuffleNetV2::thread_tmp_327_cast_fu_28837_p1() {
    tmp_327_cast_fu_28837_p1 = esl_sext<10,9>(tmp_327_reg_45567.read());
}

void ShuffleNetV2::thread_tmp_327_fu_28781_p2() {
    tmp_327_fu_28781_p2 = (!tmp_365_cast_cast_fu_28777_p1.read().is_01() || !tmp_360_cast_cast_reg_45536.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_365_cast_cast_fu_28777_p1.read()) + sc_biguint<9>(tmp_360_cast_cast_reg_45536.read()));
}

void ShuffleNetV2::thread_tmp_328_fu_28810_p2() {
    tmp_328_fu_28810_p2 = (!p_shl138_cast_fu_28794_p1.read().is_01() || !p_shl139_cast_fu_28806_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl138_cast_fu_28794_p1.read()) - sc_biguint<8>(p_shl139_cast_fu_28806_p1.read()));
}

void ShuffleNetV2::thread_tmp_329_fu_29467_p2() {
    tmp_329_fu_29467_p2 = (!p_shl142_cast_fu_29451_p1.read().is_01() || !p_shl143_cast_fu_29463_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl142_cast_fu_29451_p1.read()) - sc_biguint<7>(p_shl143_cast_fu_29463_p1.read()));
}

void ShuffleNetV2::thread_tmp_330_fu_29379_p2() {
    tmp_330_fu_29379_p2 = (!p_shl140_cast_fu_29363_p1.read().is_01() || !p_shl141_cast_fu_29375_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl140_cast_fu_29363_p1.read()) - sc_biguint<7>(p_shl141_cast_fu_29375_p1.read()));
}

void ShuffleNetV2::thread_tmp_331_cast_cast_fu_27151_p1() {
    tmp_331_cast_cast_fu_27151_p1 = esl_zext<9,4>(tmp_2358_fu_27141_p4.read());
}

void ShuffleNetV2::thread_tmp_331_fu_29389_p2() {
    tmp_331_fu_29389_p2 = (!tmp_330_fu_29379_p2.read().is_01() || !i119_cast1_reg_45741.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_330_fu_29379_p2.read()) + sc_biguint<7>(i119_cast1_reg_45741.read()));
}

void ShuffleNetV2::thread_tmp_332_cast_fu_27489_p1() {
    tmp_332_cast_fu_27489_p1 = esl_sext<11,7>(tmp_305_fu_27483_p2.read());
}

void ShuffleNetV2::thread_tmp_332_fu_29507_p2() {
    tmp_332_fu_29507_p2 = (!tmp_329_reg_45791.read().is_01() || !ci62_cast_fu_29487_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_329_reg_45791.read()) + sc_biguint<7>(ci62_cast_fu_29487_p1.read()));
}

void ShuffleNetV2::thread_tmp_333_cast_fu_27523_p1() {
    tmp_333_cast_fu_27523_p1 = esl_sext<32,7>(tmp_306_reg_45144.read());
}

void ShuffleNetV2::thread_tmp_333_fu_29174_p2() {
    tmp_333_fu_29174_p2 = (!p_shl144_cast_fu_29158_p1.read().is_01() || !p_shl145_cast_fu_29170_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl144_cast_fu_29158_p1.read()) - sc_biguint<7>(p_shl145_cast_fu_29170_p1.read()));
}

void ShuffleNetV2::thread_tmp_334_fu_29184_p2() {
    tmp_334_fu_29184_p2 = (!tmp_333_fu_29174_p2.read().is_01() || !co122_cast_reg_45650.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_333_fu_29174_p2.read()) + sc_biguint<7>(co122_cast_reg_45650.read()));
}

void ShuffleNetV2::thread_tmp_335_cast_cast_fu_27180_p1() {
    tmp_335_cast_cast_fu_27180_p1 = esl_sext<8,7>(tmp_304_fu_27175_p2.read());
}

void ShuffleNetV2::thread_tmp_335_fu_29815_p2() {
    tmp_335_fu_29815_p2 = (!p_shl146_cast_fu_29799_p1.read().is_01() || !p_shl147_cast_fu_29811_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl146_cast_fu_29799_p1.read()) - sc_biguint<7>(p_shl147_cast_fu_29811_p1.read()));
}

void ShuffleNetV2::thread_tmp_336_cast_cast_fu_27230_p1() {
    tmp_336_cast_cast_fu_27230_p1 = esl_sext<9,7>(tmp_307_fu_27224_p2.read());
}

void ShuffleNetV2::thread_tmp_336_fu_29825_p2() {
    tmp_336_fu_29825_p2 = (!tmp_335_fu_29815_p2.read().is_01() || !i123_cast1_reg_45868.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_335_fu_29815_p2.read()) + sc_biguint<7>(i123_cast1_reg_45868.read()));
}

void ShuffleNetV2::thread_tmp_337_fu_29556_p2() {
    tmp_337_fu_29556_p2 = (!p_shl148_cast_fu_29540_p1.read().is_01() || !p_shl149_cast_fu_29552_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl148_cast_fu_29540_p1.read()) - sc_biguint<7>(p_shl149_cast_fu_29552_p1.read()));
}

void ShuffleNetV2::thread_tmp_338_cast1_fu_29622_p1() {
    tmp_338_cast1_fu_29622_p1 = esl_sext<10,9>(tmp_338_reg_45827.read());
}

void ShuffleNetV2::thread_tmp_338_cast_fu_27269_p1() {
    tmp_338_cast_fu_27269_p1 = esl_sext<11,8>(tmp_309_fu_27263_p2.read());
}

void ShuffleNetV2::thread_tmp_338_fu_29566_p2() {
    tmp_338_fu_29566_p2 = (!tmp_382_cast_cast_fu_29562_p1.read().is_01() || !tmp_374_cast_cast_reg_45796.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_382_cast_cast_fu_29562_p1.read()) + sc_biguint<9>(tmp_374_cast_cast_reg_45796.read()));
}

void ShuffleNetV2::thread_tmp_339_fu_29595_p2() {
    tmp_339_fu_29595_p2 = (!p_shl150_cast_fu_29579_p1.read().is_01() || !p_shl151_cast_fu_29591_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl150_cast_fu_29579_p1.read()) - sc_biguint<8>(p_shl151_cast_fu_29591_p1.read()));
}

void ShuffleNetV2::thread_tmp_340_cast_fu_27834_p1() {
    tmp_340_cast_fu_27834_p1 = esl_sext<11,7>(tmp_311_fu_27828_p2.read());
}

void ShuffleNetV2::thread_tmp_340_fu_30024_p2() {
    tmp_340_fu_30024_p2 = (!co128_cast_fu_30008_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co128_cast_fu_30008_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_341_cast_fu_27868_p1() {
    tmp_341_cast_fu_27868_p1 = esl_sext<32,7>(tmp_312_reg_45277.read());
}

void ShuffleNetV2::thread_tmp_341_fu_30233_p2() {
    tmp_341_fu_30233_p2 = (!p_shl152_cast_fu_30217_p1.read().is_01() || !p_shl153_cast_fu_30229_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl152_cast_fu_30217_p1.read()) - sc_biguint<7>(p_shl153_cast_fu_30229_p1.read()));
}

void ShuffleNetV2::thread_tmp_342_fu_30273_p2() {
    tmp_342_fu_30273_p2 = (!tmp_341_reg_46016.read().is_01() || !ci64_cast_fu_30253_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_341_reg_46016.read()) + sc_biguint<7>(ci64_cast_fu_30253_p1.read()));
}

void ShuffleNetV2::thread_tmp_343_fu_30589_p2() {
    tmp_343_fu_30589_p2 = (!p_shl154_cast_fu_30573_p1.read().is_01() || !p_shl155_cast_fu_30585_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl154_cast_fu_30573_p1.read()) - sc_biguint<7>(p_shl155_cast_fu_30585_p1.read()));
}

void ShuffleNetV2::thread_tmp_344_fu_30599_p2() {
    tmp_344_fu_30599_p2 = (!tmp_343_fu_30589_p2.read().is_01() || !i128_cast1_reg_46093.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_343_fu_30589_p2.read()) + sc_biguint<7>(i128_cast1_reg_46093.read()));
}

void ShuffleNetV2::thread_tmp_345_cast_cast_fu_27932_p1() {
    tmp_345_cast_cast_fu_27932_p1 = esl_zext<9,4>(tmp_2369_fu_27922_p4.read());
}

void ShuffleNetV2::thread_tmp_345_fu_30322_p2() {
    tmp_345_fu_30322_p2 = (!p_shl156_cast_fu_30306_p1.read().is_01() || !p_shl157_cast_fu_30318_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl156_cast_fu_30306_p1.read()) - sc_biguint<7>(p_shl157_cast_fu_30318_p1.read()));
}

void ShuffleNetV2::thread_tmp_346_cast_cast_fu_27633_p1() {
    tmp_346_cast_cast_fu_27633_p1 = esl_sext<8,7>(tmp_314_fu_27627_p2.read());
}

void ShuffleNetV2::thread_tmp_346_cast_fu_30388_p1() {
    tmp_346_cast_fu_30388_p1 = esl_sext<10,9>(tmp_346_reg_46052.read());
}

void ShuffleNetV2::thread_tmp_346_fu_30332_p2() {
    tmp_346_fu_30332_p2 = (!tmp_389_cast_cast_reg_46021.read().is_01() || !tmp_394_cast_cast_fu_30328_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_389_cast_cast_reg_46021.read()) + sc_bigint<9>(tmp_394_cast_cast_fu_30328_p1.read()));
}

void ShuffleNetV2::thread_tmp_347_cast_cast_fu_27642_p1() {
    tmp_347_cast_cast_fu_27642_p1 = esl_sext<10,7>(tmp_315_fu_27637_p2.read());
}

void ShuffleNetV2::thread_tmp_347_fu_30361_p2() {
    tmp_347_fu_30361_p2 = (!p_shl158_cast_fu_30345_p1.read().is_01() || !p_shl159_cast_fu_30357_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl158_cast_fu_30345_p1.read()) - sc_biguint<8>(p_shl159_cast_fu_30357_p1.read()));
}

void ShuffleNetV2::thread_tmp_348_fu_31018_p2() {
    tmp_348_fu_31018_p2 = (!p_shl162_cast_fu_31002_p1.read().is_01() || !p_shl163_cast_fu_31014_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl162_cast_fu_31002_p1.read()) - sc_biguint<7>(p_shl163_cast_fu_31014_p1.read()));
}

void ShuffleNetV2::thread_tmp_349_cast_fu_28270_p1() {
    tmp_349_cast_fu_28270_p1 = esl_sext<11,7>(tmp_316_fu_28264_p2.read());
}

void ShuffleNetV2::thread_tmp_349_fu_30930_p2() {
    tmp_349_fu_30930_p2 = (!p_shl160_cast_fu_30914_p1.read().is_01() || !p_shl161_cast_fu_30926_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl160_cast_fu_30914_p1.read()) - sc_biguint<7>(p_shl161_cast_fu_30926_p1.read()));
}

void ShuffleNetV2::thread_tmp_350_cast_fu_28304_p1() {
    tmp_350_cast_fu_28304_p1 = esl_sext<32,7>(tmp_317_reg_45404.read());
}

void ShuffleNetV2::thread_tmp_350_fu_30940_p2() {
    tmp_350_fu_30940_p2 = (!tmp_349_fu_30930_p2.read().is_01() || !i131_cast1_reg_46226.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_349_fu_30930_p2.read()) + sc_biguint<7>(i131_cast1_reg_46226.read()));
}

void ShuffleNetV2::thread_tmp_351_fu_31058_p2() {
    tmp_351_fu_31058_p2 = (!tmp_348_reg_46276.read().is_01() || !ci66_cast_fu_31038_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_348_reg_46276.read()) + sc_biguint<7>(ci66_cast_fu_31038_p1.read()));
}

void ShuffleNetV2::thread_tmp_352_cast_cast_fu_27961_p1() {
    tmp_352_cast_cast_fu_27961_p1 = esl_sext<8,7>(tmp_313_fu_27956_p2.read());
}

void ShuffleNetV2::thread_tmp_352_fu_30733_p2() {
    tmp_352_fu_30733_p2 = (!p_shl164_cast_fu_30717_p1.read().is_01() || !p_shl165_cast_fu_30729_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl164_cast_fu_30717_p1.read()) - sc_biguint<7>(p_shl165_cast_fu_30729_p1.read()));
}

void ShuffleNetV2::thread_tmp_353_cast_cast_fu_28011_p1() {
    tmp_353_cast_cast_fu_28011_p1 = esl_sext<9,7>(tmp_318_fu_28005_p2.read());
}

void ShuffleNetV2::thread_tmp_353_fu_30743_p2() {
    tmp_353_fu_30743_p2 = (!co132_cast1_reg_46135.read().is_01() || !tmp_352_fu_30733_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co132_cast1_reg_46135.read()) + sc_biguint<7>(tmp_352_fu_30733_p2.read()));
}

void ShuffleNetV2::thread_tmp_354_fu_31374_p2() {
    tmp_354_fu_31374_p2 = (!p_shl166_cast_fu_31358_p1.read().is_01() || !p_shl167_cast_fu_31370_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl166_cast_fu_31358_p1.read()) - sc_biguint<7>(p_shl167_cast_fu_31370_p1.read()));
}

void ShuffleNetV2::thread_tmp_355_cast_fu_28050_p1() {
    tmp_355_cast_fu_28050_p1 = esl_sext<11,8>(tmp_320_fu_28044_p2.read());
}

void ShuffleNetV2::thread_tmp_355_fu_31384_p2() {
    tmp_355_fu_31384_p2 = (!tmp_354_fu_31374_p2.read().is_01() || !i135_cast_reg_46353.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_354_fu_31374_p2.read()) + sc_biguint<7>(i135_cast_reg_46353.read()));
}

void ShuffleNetV2::thread_tmp_356_fu_31107_p2() {
    tmp_356_fu_31107_p2 = (!p_shl168_cast_fu_31091_p1.read().is_01() || !p_shl169_cast_fu_31103_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl168_cast_fu_31091_p1.read()) - sc_biguint<7>(p_shl169_cast_fu_31103_p1.read()));
}

void ShuffleNetV2::thread_tmp_357_cast_fu_31173_p1() {
    tmp_357_cast_fu_31173_p1 = esl_sext<10,9>(tmp_357_reg_46312.read());
}

void ShuffleNetV2::thread_tmp_357_fu_31117_p2() {
    tmp_357_fu_31117_p2 = (!tmp_403_cast_cast_reg_46281.read().is_01() || !tmp_411_cast_cast_fu_31113_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_403_cast_cast_reg_46281.read()) + sc_bigint<9>(tmp_411_cast_cast_fu_31113_p1.read()));
}

void ShuffleNetV2::thread_tmp_358_fu_31146_p2() {
    tmp_358_fu_31146_p2 = (!p_shl170_cast_fu_31130_p1.read().is_01() || !p_shl171_cast_fu_31142_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl170_cast_fu_31130_p1.read()) - sc_biguint<8>(p_shl171_cast_fu_31142_p1.read()));
}

void ShuffleNetV2::thread_tmp_359_fu_31587_p2() {
    tmp_359_fu_31587_p2 = (!co138_cast_fu_31571_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co138_cast_fu_31571_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_360_cast_cast_fu_28698_p1() {
    tmp_360_cast_cast_fu_28698_p1 = esl_zext<9,4>(tmp_2382_fu_28688_p4.read());
}

void ShuffleNetV2::thread_tmp_360_fu_31796_p2() {
    tmp_360_fu_31796_p2 = (!p_shl172_cast_fu_31780_p1.read().is_01() || !p_shl173_cast_fu_31792_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl172_cast_fu_31780_p1.read()) - sc_biguint<7>(p_shl173_cast_fu_31792_p1.read()));
}

void ShuffleNetV2::thread_tmp_361_cast_fu_29036_p1() {
    tmp_361_cast_fu_29036_p1 = esl_sext<11,7>(tmp_324_fu_29030_p2.read());
}

void ShuffleNetV2::thread_tmp_361_fu_31836_p2() {
    tmp_361_fu_31836_p2 = (!tmp_360_reg_46501.read().is_01() || !ci68_cast_fu_31816_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_360_reg_46501.read()) + sc_biguint<7>(ci68_cast_fu_31816_p1.read()));
}

void ShuffleNetV2::thread_tmp_362_cast_fu_29070_p1() {
    tmp_362_cast_fu_29070_p1 = esl_sext<32,7>(tmp_325_reg_45629.read());
}

void ShuffleNetV2::thread_tmp_362_fu_32152_p2() {
    tmp_362_fu_32152_p2 = (!p_shl174_cast_fu_32136_p1.read().is_01() || !p_shl175_cast_fu_32148_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl174_cast_fu_32136_p1.read()) - sc_biguint<7>(p_shl175_cast_fu_32148_p1.read()));
}

void ShuffleNetV2::thread_tmp_363_fu_32162_p2() {
    tmp_363_fu_32162_p2 = (!tmp_362_fu_32152_p2.read().is_01() || !i140_cast_reg_46578.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_362_fu_32152_p2.read()) + sc_biguint<7>(i140_cast_reg_46578.read()));
}

void ShuffleNetV2::thread_tmp_364_cast_cast_fu_28727_p1() {
    tmp_364_cast_cast_fu_28727_p1 = esl_sext<8,7>(tmp_323_fu_28722_p2.read());
}

void ShuffleNetV2::thread_tmp_364_fu_31885_p2() {
    tmp_364_fu_31885_p2 = (!p_shl176_cast_fu_31869_p1.read().is_01() || !p_shl177_cast_fu_31881_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl176_cast_fu_31869_p1.read()) - sc_biguint<7>(p_shl177_cast_fu_31881_p1.read()));
}

void ShuffleNetV2::thread_tmp_365_cast_cast_fu_28777_p1() {
    tmp_365_cast_cast_fu_28777_p1 = esl_sext<9,7>(tmp_326_fu_28771_p2.read());
}

void ShuffleNetV2::thread_tmp_365_cast_fu_31951_p1() {
    tmp_365_cast_fu_31951_p1 = esl_sext<10,9>(tmp_365_reg_46537.read());
}

void ShuffleNetV2::thread_tmp_365_fu_31895_p2() {
    tmp_365_fu_31895_p2 = (!tmp_418_cast_cast_reg_46506.read().is_01() || !tmp_423_cast_cast_fu_31891_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_418_cast_cast_reg_46506.read()) + sc_bigint<9>(tmp_423_cast_cast_fu_31891_p1.read()));
}

void ShuffleNetV2::thread_tmp_366_fu_31924_p2() {
    tmp_366_fu_31924_p2 = (!p_shl178_cast_fu_31908_p1.read().is_01() || !p_shl179_cast_fu_31920_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl178_cast_fu_31908_p1.read()) - sc_biguint<8>(p_shl179_cast_fu_31920_p1.read()));
}

void ShuffleNetV2::thread_tmp_367_cast_fu_28816_p1() {
    tmp_367_cast_fu_28816_p1 = esl_sext<11,8>(tmp_328_fu_28810_p2.read());
}

void ShuffleNetV2::thread_tmp_367_fu_32585_p2() {
    tmp_367_fu_32585_p2 = (!p_shl182_cast_fu_32569_p1.read().is_01() || !p_shl183_cast_fu_32581_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl182_cast_fu_32569_p1.read()) - sc_biguint<7>(p_shl183_cast_fu_32581_p1.read()));
}

void ShuffleNetV2::thread_tmp_368_fu_32493_p2() {
    tmp_368_fu_32493_p2 = (!p_shl180_cast_fu_32477_p1.read().is_01() || !p_shl181_cast_fu_32489_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl180_cast_fu_32477_p1.read()) - sc_biguint<7>(p_shl181_cast_fu_32489_p1.read()));
}

void ShuffleNetV2::thread_tmp_369_cast_fu_29385_p1() {
    tmp_369_cast_fu_29385_p1 = esl_sext<11,7>(tmp_330_fu_29379_p2.read());
}

void ShuffleNetV2::thread_tmp_369_fu_32503_p2() {
    tmp_369_fu_32503_p2 = (!tmp_368_fu_32493_p2.read().is_01() || !i143_cast_reg_46711.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_368_fu_32493_p2.read()) + sc_biguint<7>(i143_cast_reg_46711.read()));
}

void ShuffleNetV2::thread_tmp_370_cast_fu_29419_p1() {
    tmp_370_cast_fu_29419_p1 = esl_sext<32,7>(tmp_331_reg_45762.read());
}

void ShuffleNetV2::thread_tmp_370_fu_32625_p2() {
    tmp_370_fu_32625_p2 = (!tmp_367_reg_46761.read().is_01() || !ci70_cast_fu_32605_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_367_reg_46761.read()) + sc_biguint<7>(ci70_cast_fu_32605_p1.read()));
}

void ShuffleNetV2::thread_tmp_371_fu_32300_p2() {
    tmp_371_fu_32300_p2 = (!p_shl184_cast_fu_32284_p1.read().is_01() || !p_shl185_cast_fu_32296_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl184_cast_fu_32284_p1.read()) - sc_biguint<7>(p_shl185_cast_fu_32296_p1.read()));
}

void ShuffleNetV2::thread_tmp_372_fu_32310_p2() {
    tmp_372_fu_32310_p2 = (!co142_cast1_reg_46620.read().is_01() || !tmp_371_fu_32300_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co142_cast1_reg_46620.read()) + sc_biguint<7>(tmp_371_fu_32300_p2.read()));
}

void ShuffleNetV2::thread_tmp_373_fu_32941_p2() {
    tmp_373_fu_32941_p2 = (!p_shl186_cast_fu_32925_p1.read().is_01() || !p_shl187_cast_fu_32937_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl186_cast_fu_32925_p1.read()) - sc_biguint<7>(p_shl187_cast_fu_32937_p1.read()));
}

void ShuffleNetV2::thread_tmp_374_cast_cast_fu_29483_p1() {
    tmp_374_cast_cast_fu_29483_p1 = esl_zext<9,4>(tmp_2393_fu_29473_p4.read());
}

void ShuffleNetV2::thread_tmp_374_fu_32951_p2() {
    tmp_374_fu_32951_p2 = (!tmp_373_fu_32941_p2.read().is_01() || !i147_cast_reg_46838.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_373_fu_32941_p2.read()) + sc_biguint<7>(i147_cast_reg_46838.read()));
}

void ShuffleNetV2::thread_tmp_375_cast_cast_fu_29180_p1() {
    tmp_375_cast_cast_fu_29180_p1 = esl_sext<8,7>(tmp_333_fu_29174_p2.read());
}

void ShuffleNetV2::thread_tmp_375_fu_32674_p2() {
    tmp_375_fu_32674_p2 = (!p_shl188_cast_fu_32658_p1.read().is_01() || !p_shl189_cast_fu_32670_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl188_cast_fu_32658_p1.read()) - sc_biguint<7>(p_shl189_cast_fu_32670_p1.read()));
}

void ShuffleNetV2::thread_tmp_376_cast_cast_fu_29189_p1() {
    tmp_376_cast_cast_fu_29189_p1 = esl_sext<10,7>(tmp_334_fu_29184_p2.read());
}

void ShuffleNetV2::thread_tmp_376_cast_fu_32748_p1() {
    tmp_376_cast_fu_32748_p1 = esl_sext<10,9>(tmp_376_reg_46797.read());
}

void ShuffleNetV2::thread_tmp_376_fu_32684_p2() {
    tmp_376_fu_32684_p2 = (!tmp_440_cast_cast_fu_32680_p1.read().is_01() || !tmp_432_cast_cast_reg_46766.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_440_cast_cast_fu_32680_p1.read()) + sc_biguint<9>(tmp_432_cast_cast_reg_46766.read()));
}

void ShuffleNetV2::thread_tmp_377_fu_32713_p2() {
    tmp_377_fu_32713_p2 = (!p_shl190_cast_fu_32697_p1.read().is_01() || !p_shl191_cast_fu_32709_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl190_cast_fu_32697_p1.read()) - sc_biguint<8>(p_shl191_cast_fu_32709_p1.read()));
}

void ShuffleNetV2::thread_tmp_378_cast_fu_29821_p1() {
    tmp_378_cast_fu_29821_p1 = esl_sext<11,7>(tmp_335_fu_29815_p2.read());
}

void ShuffleNetV2::thread_tmp_378_fu_33150_p2() {
    tmp_378_fu_33150_p2 = (!p_shl192_cast_fu_33136_p1.read().is_01() || !p_shl193_cast_fu_33146_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl192_cast_fu_33136_p1.read()) - sc_biguint<8>(p_shl193_cast_fu_33146_p1.read()));
}

void ShuffleNetV2::thread_tmp_379_cast_fu_29855_p1() {
    tmp_379_cast_fu_29855_p1 = esl_sext<32,7>(tmp_336_reg_45889.read());
}

void ShuffleNetV2::thread_tmp_379_fu_33190_p2() {
    tmp_379_fu_33190_p2 = (!tmp_378_reg_46932.read().is_01() || !ci72_cast_fu_33170_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_378_reg_46932.read()) + sc_biguint<8>(ci72_cast_fu_33170_p1.read()));
}

void ShuffleNetV2::thread_tmp_380_fu_33488_p2() {
    tmp_380_fu_33488_p2 = (!p_shl194_cast_fu_33472_p1.read().is_01() || !p_shl195_cast_fu_33484_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl194_cast_fu_33472_p1.read()) - sc_biguint<8>(p_shl195_cast_fu_33484_p1.read()));
}

void ShuffleNetV2::thread_tmp_381_cast_cast_fu_29512_p1() {
    tmp_381_cast_cast_fu_29512_p1 = esl_sext<8,7>(tmp_332_fu_29507_p2.read());
}

void ShuffleNetV2::thread_tmp_381_fu_33498_p2() {
    tmp_381_fu_33498_p2 = (!tmp_380_fu_33488_p2.read().is_01() || !i152_cast_reg_47009.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_380_fu_33488_p2.read()) + sc_biguint<8>(i152_cast_reg_47009.read()));
}

void ShuffleNetV2::thread_tmp_382_cast_cast_fu_29562_p1() {
    tmp_382_cast_cast_fu_29562_p1 = esl_sext<9,7>(tmp_337_fu_29556_p2.read());
}

void ShuffleNetV2::thread_tmp_382_fu_33241_p2() {
    tmp_382_fu_33241_p2 = (!p_shl196_cast_fu_33227_p1.read().is_01() || !p_shl197_cast_fu_33237_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl196_cast_fu_33227_p1.read()) - sc_biguint<8>(p_shl197_cast_fu_33237_p1.read()));
}

void ShuffleNetV2::thread_tmp_383_cast_fu_33295_p1() {
    tmp_383_cast_fu_33295_p1 = esl_sext<11,10>(tmp_383_reg_46968.read());
}

void ShuffleNetV2::thread_tmp_383_fu_33251_p2() {
    tmp_383_fu_33251_p2 = (!tmp_451_cast_cast_fu_33247_p1.read().is_01() || !tmp_446_cast_cast_reg_46937.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_451_cast_cast_fu_33247_p1.read()) + sc_biguint<10>(tmp_446_cast_cast_reg_46937.read()));
}

void ShuffleNetV2::thread_tmp_384_cast_fu_29601_p1() {
    tmp_384_cast_fu_29601_p1 = esl_sext<11,8>(tmp_339_fu_29595_p2.read());
}

void ShuffleNetV2::thread_tmp_384_fu_33268_p2() {
    tmp_384_fu_33268_p2 = (!p_shl198_cast_fu_33264_p1.read().is_01() || !p_shl196_cast1_fu_33223_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl198_cast_fu_33264_p1.read()) - sc_biguint<10>(p_shl196_cast1_fu_33223_p1.read()));
}

void ShuffleNetV2::thread_tmp_385_fu_33919_p2() {
    tmp_385_fu_33919_p2 = (!p_shl201_cast_fu_33905_p1.read().is_01() || !p_shl202_cast_fu_33915_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl201_cast_fu_33905_p1.read()) - sc_biguint<8>(p_shl202_cast_fu_33915_p1.read()));
}

void ShuffleNetV2::thread_tmp_386_fu_33829_p2() {
    tmp_386_fu_33829_p2 = (!p_shl199_cast_fu_33813_p1.read().is_01() || !p_shl200_cast_fu_33825_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl199_cast_fu_33813_p1.read()) - sc_biguint<8>(p_shl200_cast_fu_33825_p1.read()));
}

void ShuffleNetV2::thread_tmp_387_fu_33839_p2() {
    tmp_387_fu_33839_p2 = (!tmp_386_fu_33829_p2.read().is_01() || !i155_cast_reg_47142.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_386_fu_33829_p2.read()) + sc_biguint<8>(i155_cast_reg_47142.read()));
}

void ShuffleNetV2::thread_tmp_388_fu_33959_p2() {
    tmp_388_fu_33959_p2 = (!tmp_385_reg_47192.read().is_01() || !ci74_cast_fu_33939_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_385_reg_47192.read()) + sc_biguint<8>(ci74_cast_fu_33939_p1.read()));
}

void ShuffleNetV2::thread_tmp_389_cast_cast_fu_30249_p1() {
    tmp_389_cast_cast_fu_30249_p1 = esl_zext<9,4>(tmp_2406_fu_30239_p4.read());
}

void ShuffleNetV2::thread_tmp_389_fu_33636_p2() {
    tmp_389_fu_33636_p2 = (!p_shl203_cast_fu_33620_p1.read().is_01() || !p_shl204_cast_fu_33632_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl203_cast_fu_33620_p1.read()) - sc_biguint<8>(p_shl204_cast_fu_33632_p1.read()));
}

void ShuffleNetV2::thread_tmp_390_cast_fu_30595_p1() {
    tmp_390_cast_fu_30595_p1 = esl_sext<11,7>(tmp_343_fu_30589_p2.read());
}

void ShuffleNetV2::thread_tmp_390_fu_33646_p2() {
    tmp_390_fu_33646_p2 = (!co150_cast1_reg_47051.read().is_01() || !tmp_389_fu_33636_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co150_cast1_reg_47051.read()) + sc_biguint<8>(tmp_389_fu_33636_p2.read()));
}

void ShuffleNetV2::thread_tmp_391_cast_fu_30629_p1() {
    tmp_391_cast_fu_30629_p1 = esl_sext<32,7>(tmp_344_reg_46114.read());
}

void ShuffleNetV2::thread_tmp_391_fu_34257_p2() {
    tmp_391_fu_34257_p2 = (!p_shl205_cast_fu_34241_p1.read().is_01() || !p_shl206_cast_fu_34253_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl205_cast_fu_34241_p1.read()) - sc_biguint<8>(p_shl206_cast_fu_34253_p1.read()));
}

void ShuffleNetV2::thread_tmp_392_fu_34267_p2() {
    tmp_392_fu_34267_p2 = (!tmp_391_fu_34257_p2.read().is_01() || !i159_cast1_reg_47269.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_391_fu_34257_p2.read()) + sc_biguint<8>(i159_cast1_reg_47269.read()));
}

void ShuffleNetV2::thread_tmp_393_cast_cast_fu_30278_p1() {
    tmp_393_cast_cast_fu_30278_p1 = esl_sext<8,7>(tmp_342_fu_30273_p2.read());
}

void ShuffleNetV2::thread_tmp_393_fu_34010_p2() {
    tmp_393_fu_34010_p2 = (!p_shl207_cast_fu_33996_p1.read().is_01() || !p_shl208_cast_fu_34006_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl207_cast_fu_33996_p1.read()) - sc_biguint<8>(p_shl208_cast_fu_34006_p1.read()));
}

void ShuffleNetV2::thread_tmp_394_cast_cast_fu_30328_p1() {
    tmp_394_cast_cast_fu_30328_p1 = esl_sext<9,7>(tmp_345_fu_30322_p2.read());
}

void ShuffleNetV2::thread_tmp_394_cast_fu_34064_p1() {
    tmp_394_cast_fu_34064_p1 = esl_sext<11,10>(tmp_394_reg_47228.read());
}

void ShuffleNetV2::thread_tmp_394_fu_34020_p2() {
    tmp_394_fu_34020_p2 = (!tmp_468_cast_cast_fu_34016_p1.read().is_01() || !tmp_460_cast_cast_reg_47197.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_468_cast_cast_fu_34016_p1.read()) + sc_biguint<10>(tmp_460_cast_cast_reg_47197.read()));
}

void ShuffleNetV2::thread_tmp_395_fu_34037_p2() {
    tmp_395_fu_34037_p2 = (!p_shl209_cast_fu_34033_p1.read().is_01() || !p_shl207_cast1_fu_33992_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl209_cast_fu_34033_p1.read()) - sc_biguint<10>(p_shl207_cast1_fu_33992_p1.read()));
}

void ShuffleNetV2::thread_tmp_396_cast_cast_fu_30367_p1() {
    tmp_396_cast_cast_fu_30367_p1 = esl_sext<10,8>(tmp_347_fu_30361_p2.read());
}

void ShuffleNetV2::thread_tmp_396_fu_34688_p2() {
    tmp_396_fu_34688_p2 = (!p_shl212_cast_fu_34674_p1.read().is_01() || !p_shl213_cast_fu_34684_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl212_cast_fu_34674_p1.read()) - sc_biguint<8>(p_shl213_cast_fu_34684_p1.read()));
}

void ShuffleNetV2::thread_tmp_397_fu_34602_p2() {
    tmp_397_fu_34602_p2 = (!p_shl210_cast_fu_34586_p1.read().is_01() || !p_shl211_cast_fu_34598_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl210_cast_fu_34586_p1.read()) - sc_biguint<8>(p_shl211_cast_fu_34598_p1.read()));
}

void ShuffleNetV2::thread_tmp_398_cast_fu_30936_p1() {
    tmp_398_cast_fu_30936_p1 = esl_sext<11,7>(tmp_349_fu_30930_p2.read());
}

void ShuffleNetV2::thread_tmp_398_fu_34612_p2() {
    tmp_398_fu_34612_p2 = (!tmp_397_fu_34602_p2.read().is_01() || !i163_cast1_reg_47402.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_397_fu_34602_p2.read()) + sc_biguint<8>(i163_cast1_reg_47402.read()));
}

void ShuffleNetV2::thread_tmp_399_cast_fu_30970_p1() {
    tmp_399_cast_fu_30970_p1 = esl_sext<32,7>(tmp_350_reg_46247.read());
}

void ShuffleNetV2::thread_tmp_399_fu_34728_p2() {
    tmp_399_fu_34728_p2 = (!tmp_396_reg_47452.read().is_01() || !ci76_cast_fu_34708_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_396_reg_47452.read()) + sc_biguint<8>(ci76_cast_fu_34708_p1.read()));
}

void ShuffleNetV2::thread_tmp_400_fu_34409_p2() {
    tmp_400_fu_34409_p2 = (!p_shl214_cast_fu_34393_p1.read().is_01() || !p_shl215_cast_fu_34405_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl214_cast_fu_34393_p1.read()) - sc_biguint<8>(p_shl215_cast_fu_34405_p1.read()));
}

void ShuffleNetV2::thread_tmp_401_fu_34419_p2() {
    tmp_401_fu_34419_p2 = (!co154_cast1_reg_47311.read().is_01() || !tmp_400_fu_34409_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co154_cast1_reg_47311.read()) + sc_biguint<8>(tmp_400_fu_34409_p2.read()));
}

void ShuffleNetV2::thread_tmp_402_fu_35120_p2() {
    tmp_402_fu_35120_p2 = (!co158_cast_fu_35104_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co158_cast_fu_35104_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_403_cast_cast_fu_31034_p1() {
    tmp_403_cast_cast_fu_31034_p1 = esl_zext<9,4>(tmp_2417_fu_31024_p4.read());
}

void ShuffleNetV2::thread_tmp_403_fu_35026_p2() {
    tmp_403_fu_35026_p2 = (!p_shl216_cast_fu_35010_p1.read().is_01() || !p_shl217_cast_fu_35022_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl216_cast_fu_35010_p1.read()) - sc_biguint<8>(p_shl217_cast_fu_35022_p1.read()));
}

void ShuffleNetV2::thread_tmp_404_cast_fu_30739_p1() {
    tmp_404_cast_fu_30739_p1 = esl_sext<10,7>(tmp_352_fu_30733_p2.read());
}

void ShuffleNetV2::thread_tmp_404_fu_35036_p2() {
    tmp_404_fu_35036_p2 = (!tmp_403_fu_35026_p2.read().is_01() || !i167_cast1_reg_47529.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_403_fu_35026_p2.read()) + sc_biguint<8>(i167_cast1_reg_47529.read()));
}

void ShuffleNetV2::thread_tmp_405_cast_cast_fu_30748_p1() {
    tmp_405_cast_cast_fu_30748_p1 = esl_sext<10,7>(tmp_353_fu_30743_p2.read());
}

void ShuffleNetV2::thread_tmp_405_fu_34779_p2() {
    tmp_405_fu_34779_p2 = (!p_shl220_cast_fu_34765_p1.read().is_01() || !p_shl221_cast_fu_34775_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl220_cast_fu_34765_p1.read()) - sc_biguint<8>(p_shl221_cast_fu_34775_p1.read()));
}

void ShuffleNetV2::thread_tmp_406_cast_fu_34833_p1() {
    tmp_406_cast_fu_34833_p1 = esl_sext<11,10>(tmp_406_reg_47488.read());
}

void ShuffleNetV2::thread_tmp_406_fu_34789_p2() {
    tmp_406_fu_34789_p2 = (!tmp_489_cast_cast_fu_34785_p1.read().is_01() || !tmp_477_cast_cast_reg_47457.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_489_cast_cast_fu_34785_p1.read()) + sc_biguint<10>(tmp_477_cast_cast_reg_47457.read()));
}

void ShuffleNetV2::thread_tmp_407_cast_cast_fu_31380_p1() {
    tmp_407_cast_cast_fu_31380_p1 = esl_sext<10,7>(tmp_354_fu_31374_p2.read());
}

void ShuffleNetV2::thread_tmp_407_fu_34806_p2() {
    tmp_407_fu_34806_p2 = (!p_shl222_cast_fu_34802_p1.read().is_01() || !p_shl220_cast1_fu_34761_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl222_cast_fu_34802_p1.read()) - sc_biguint<10>(p_shl220_cast1_fu_34761_p1.read()));
}

void ShuffleNetV2::thread_tmp_408_cast_fu_31418_p1() {
    tmp_408_cast_fu_31418_p1 = esl_sext<32,7>(tmp_355_reg_46374.read());
}

void ShuffleNetV2::thread_tmp_408_fu_35323_p2() {
    tmp_408_fu_35323_p2 = (!p_shl218_cast_fu_35309_p1.read().is_01() || !p_shl219_cast_fu_35319_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl218_cast_fu_35309_p1.read()) - sc_biguint<8>(p_shl219_cast_fu_35319_p1.read()));
}

void ShuffleNetV2::thread_tmp_409_fu_35363_p2() {
    tmp_409_fu_35363_p2 = (!tmp_408_reg_47633.read().is_01() || !ci78_cast_fu_35343_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_408_reg_47633.read()) + sc_biguint<8>(ci78_cast_fu_35343_p1.read()));
}

void ShuffleNetV2::thread_tmp_410_cast_cast_fu_31063_p1() {
    tmp_410_cast_cast_fu_31063_p1 = esl_sext<8,7>(tmp_351_fu_31058_p2.read());
}

void ShuffleNetV2::thread_tmp_410_fu_35661_p2() {
    tmp_410_fu_35661_p2 = (!p_shl223_cast_fu_35645_p1.read().is_01() || !p_shl224_cast_fu_35657_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl223_cast_fu_35645_p1.read()) - sc_biguint<8>(p_shl224_cast_fu_35657_p1.read()));
}

void ShuffleNetV2::thread_tmp_411_cast_cast_fu_31113_p1() {
    tmp_411_cast_cast_fu_31113_p1 = esl_sext<9,7>(tmp_356_fu_31107_p2.read());
}

void ShuffleNetV2::thread_tmp_411_fu_35671_p2() {
    tmp_411_fu_35671_p2 = (!tmp_410_fu_35661_p2.read().is_01() || !i172_cast1_reg_47710.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_410_fu_35661_p2.read()) + sc_biguint<8>(i172_cast1_reg_47710.read()));
}

void ShuffleNetV2::thread_tmp_412_fu_35414_p2() {
    tmp_412_fu_35414_p2 = (!p_shl225_cast_fu_35400_p1.read().is_01() || !p_shl226_cast_fu_35410_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl225_cast_fu_35400_p1.read()) - sc_biguint<8>(p_shl226_cast_fu_35410_p1.read()));
}

void ShuffleNetV2::thread_tmp_413_cast_cast_fu_31152_p1() {
    tmp_413_cast_cast_fu_31152_p1 = esl_sext<10,8>(tmp_358_fu_31146_p2.read());
}

void ShuffleNetV2::thread_tmp_413_cast_fu_35468_p1() {
    tmp_413_cast_fu_35468_p1 = esl_sext<11,10>(tmp_413_reg_47669.read());
}

void ShuffleNetV2::thread_tmp_413_fu_35424_p2() {
    tmp_413_fu_35424_p2 = (!tmp_497_cast_cast_fu_35420_p1.read().is_01() || !tmp_488_cast_cast_reg_47638.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_497_cast_cast_fu_35420_p1.read()) + sc_biguint<10>(tmp_488_cast_cast_reg_47638.read()));
}

void ShuffleNetV2::thread_tmp_414_fu_35441_p2() {
    tmp_414_fu_35441_p2 = (!p_shl227_cast_fu_35437_p1.read().is_01() || !p_shl225_cast1_fu_35396_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl227_cast_fu_35437_p1.read()) - sc_biguint<10>(p_shl225_cast1_fu_35396_p1.read()));
}

void ShuffleNetV2::thread_tmp_415_fu_36084_p2() {
    tmp_415_fu_36084_p2 = (!p_shl230_cast_fu_36070_p1.read().is_01() || !p_shl231_cast_fu_36080_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl230_cast_fu_36070_p1.read()) - sc_biguint<8>(p_shl231_cast_fu_36080_p1.read()));
}

void ShuffleNetV2::thread_tmp_416_fu_35998_p2() {
    tmp_416_fu_35998_p2 = (!p_shl228_cast_fu_35982_p1.read().is_01() || !p_shl229_cast_fu_35994_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl228_cast_fu_35982_p1.read()) - sc_biguint<8>(p_shl229_cast_fu_35994_p1.read()));
}

void ShuffleNetV2::thread_tmp_417_fu_36008_p2() {
    tmp_417_fu_36008_p2 = (!tmp_416_fu_35998_p2.read().is_01() || !i175_cast1_reg_47843.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_416_fu_35998_p2.read()) + sc_biguint<8>(i175_cast1_reg_47843.read()));
}

void ShuffleNetV2::thread_tmp_418_cast_cast_fu_31812_p1() {
    tmp_418_cast_cast_fu_31812_p1 = esl_zext<9,4>(tmp_2430_fu_31802_p4.read());
}

void ShuffleNetV2::thread_tmp_418_fu_36124_p2() {
    tmp_418_fu_36124_p2 = (!tmp_415_reg_47893.read().is_01() || !ci80_cast_fu_36104_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_415_reg_47893.read()) + sc_biguint<8>(ci80_cast_fu_36104_p1.read()));
}

void ShuffleNetV2::thread_tmp_419_cast_cast_fu_32158_p1() {
    tmp_419_cast_cast_fu_32158_p1 = esl_sext<10,7>(tmp_362_fu_32152_p2.read());
}

void ShuffleNetV2::thread_tmp_419_fu_35805_p2() {
    tmp_419_fu_35805_p2 = (!p_shl232_cast_fu_35789_p1.read().is_01() || !p_shl233_cast_fu_35801_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl232_cast_fu_35789_p1.read()) - sc_biguint<8>(p_shl233_cast_fu_35801_p1.read()));
}

void ShuffleNetV2::thread_tmp_420_cast_fu_32196_p1() {
    tmp_420_cast_fu_32196_p1 = esl_sext<32,7>(tmp_363_reg_46599.read());
}

void ShuffleNetV2::thread_tmp_420_fu_35815_p2() {
    tmp_420_fu_35815_p2 = (!co162_cast1_reg_47752.read().is_01() || !tmp_419_fu_35805_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co162_cast1_reg_47752.read()) + sc_biguint<8>(tmp_419_fu_35805_p2.read()));
}

void ShuffleNetV2::thread_tmp_421_fu_36430_p2() {
    tmp_421_fu_36430_p2 = (!p_shl234_cast_fu_36414_p1.read().is_01() || !p_shl235_cast_fu_36426_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl234_cast_fu_36414_p1.read()) - sc_biguint<8>(p_shl235_cast_fu_36426_p1.read()));
}

void ShuffleNetV2::thread_tmp_422_cast_cast_fu_31841_p1() {
    tmp_422_cast_cast_fu_31841_p1 = esl_sext<8,7>(tmp_361_fu_31836_p2.read());
}

void ShuffleNetV2::thread_tmp_422_fu_36440_p2() {
    tmp_422_fu_36440_p2 = (!tmp_421_fu_36430_p2.read().is_01() || !i179_cast1_reg_47970.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_421_fu_36430_p2.read()) + sc_biguint<8>(i179_cast1_reg_47970.read()));
}

void ShuffleNetV2::thread_tmp_423_cast_cast_fu_31891_p1() {
    tmp_423_cast_cast_fu_31891_p1 = esl_sext<9,7>(tmp_364_fu_31885_p2.read());
}

void ShuffleNetV2::thread_tmp_423_fu_36175_p2() {
    tmp_423_fu_36175_p2 = (!p_shl236_cast_fu_36161_p1.read().is_01() || !p_shl237_cast_fu_36171_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl236_cast_fu_36161_p1.read()) - sc_biguint<8>(p_shl237_cast_fu_36171_p1.read()));
}

void ShuffleNetV2::thread_tmp_424_cast_fu_36229_p1() {
    tmp_424_cast_fu_36229_p1 = esl_sext<11,10>(tmp_424_reg_47929.read());
}

void ShuffleNetV2::thread_tmp_424_fu_36185_p2() {
    tmp_424_fu_36185_p2 = (!tmp_506_cast_cast_reg_47898.read().is_01() || !tmp_514_cast_cast_fu_36181_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_506_cast_cast_reg_47898.read()) + sc_bigint<10>(tmp_514_cast_cast_fu_36181_p1.read()));
}

void ShuffleNetV2::thread_tmp_425_cast_cast_fu_31930_p1() {
    tmp_425_cast_cast_fu_31930_p1 = esl_sext<9,8>(tmp_366_fu_31924_p2.read());
}

void ShuffleNetV2::thread_tmp_425_fu_36202_p2() {
    tmp_425_fu_36202_p2 = (!p_shl238_cast_fu_36198_p1.read().is_01() || !p_shl236_cast1_fu_36157_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl238_cast_fu_36198_p1.read()) - sc_biguint<10>(p_shl236_cast1_fu_36157_p1.read()));
}

void ShuffleNetV2::thread_tmp_426_fu_36647_p2() {
    tmp_426_fu_36647_p2 = (!co168_cast_fu_36631_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co168_cast_fu_36631_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_427_cast_cast_fu_32499_p1() {
    tmp_427_cast_cast_fu_32499_p1 = esl_sext<10,7>(tmp_368_fu_32493_p2.read());
}

void ShuffleNetV2::thread_tmp_427_fu_36850_p2() {
    tmp_427_fu_36850_p2 = (!p_shl239_cast_fu_36836_p1.read().is_01() || !p_shl240_cast_fu_36846_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl239_cast_fu_36836_p1.read()) - sc_biguint<8>(p_shl240_cast_fu_36846_p1.read()));
}

void ShuffleNetV2::thread_tmp_428_cast_fu_32537_p1() {
    tmp_428_cast_fu_32537_p1 = esl_sext<32,7>(tmp_369_reg_46732.read());
}

void ShuffleNetV2::thread_tmp_428_fu_36890_p2() {
    tmp_428_fu_36890_p2 = (!tmp_427_reg_48118.read().is_01() || !ci82_cast_fu_36870_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_427_reg_48118.read()) + sc_biguint<8>(ci82_cast_fu_36870_p1.read()));
}

void ShuffleNetV2::thread_tmp_429_fu_37188_p2() {
    tmp_429_fu_37188_p2 = (!p_shl241_cast_fu_37172_p1.read().is_01() || !p_shl242_cast_fu_37184_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl241_cast_fu_37172_p1.read()) - sc_biguint<8>(p_shl242_cast_fu_37184_p1.read()));
}

void ShuffleNetV2::thread_tmp_430_fu_37198_p2() {
    tmp_430_fu_37198_p2 = (!tmp_429_fu_37188_p2.read().is_01() || !i184_cast1_reg_48195.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_429_fu_37188_p2.read()) + sc_biguint<8>(i184_cast1_reg_48195.read()));
}

void ShuffleNetV2::thread_tmp_431_fu_36941_p2() {
    tmp_431_fu_36941_p2 = (!p_shl243_cast_fu_36927_p1.read().is_01() || !p_shl244_cast_fu_36937_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl243_cast_fu_36927_p1.read()) - sc_biguint<8>(p_shl244_cast_fu_36937_p1.read()));
}

void ShuffleNetV2::thread_tmp_432_cast_cast_fu_32601_p1() {
    tmp_432_cast_cast_fu_32601_p1 = esl_zext<9,4>(tmp_2441_fu_32591_p4.read());
}

void ShuffleNetV2::thread_tmp_432_cast_fu_36995_p1() {
    tmp_432_cast_fu_36995_p1 = esl_sext<11,10>(tmp_432_reg_48154.read());
}

void ShuffleNetV2::thread_tmp_432_fu_36951_p2() {
    tmp_432_fu_36951_p2 = (!tmp_526_cast_cast_fu_36947_p1.read().is_01() || !tmp_521_cast_cast_reg_48123.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_526_cast_cast_fu_36947_p1.read()) + sc_biguint<10>(tmp_521_cast_cast_reg_48123.read()));
}

void ShuffleNetV2::thread_tmp_433_cast_fu_32306_p1() {
    tmp_433_cast_fu_32306_p1 = esl_sext<10,7>(tmp_371_fu_32300_p2.read());
}

void ShuffleNetV2::thread_tmp_433_fu_36968_p2() {
    tmp_433_fu_36968_p2 = (!p_shl245_cast_fu_36964_p1.read().is_01() || !p_shl243_cast1_fu_36923_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl245_cast_fu_36964_p1.read()) - sc_biguint<10>(p_shl243_cast1_fu_36923_p1.read()));
}

void ShuffleNetV2::thread_tmp_434_cast_cast_fu_32315_p1() {
    tmp_434_cast_cast_fu_32315_p1 = esl_sext<10,7>(tmp_372_fu_32310_p2.read());
}

void ShuffleNetV2::thread_tmp_434_fu_37623_p2() {
    tmp_434_fu_37623_p2 = (!p_shl248_cast_fu_37609_p1.read().is_01() || !p_shl249_cast_fu_37619_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl248_cast_fu_37609_p1.read()) - sc_biguint<8>(p_shl249_cast_fu_37619_p1.read()));
}

void ShuffleNetV2::thread_tmp_435_fu_37537_p2() {
    tmp_435_fu_37537_p2 = (!p_shl246_cast_fu_37521_p1.read().is_01() || !p_shl247_cast_fu_37533_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl246_cast_fu_37521_p1.read()) - sc_biguint<8>(p_shl247_cast_fu_37533_p1.read()));
}

void ShuffleNetV2::thread_tmp_436_cast_cast_fu_32947_p1() {
    tmp_436_cast_cast_fu_32947_p1 = esl_sext<10,7>(tmp_373_fu_32941_p2.read());
}

void ShuffleNetV2::thread_tmp_436_fu_37547_p2() {
    tmp_436_fu_37547_p2 = (!tmp_435_fu_37537_p2.read().is_01() || !i187_cast1_reg_48328.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_435_fu_37537_p2.read()) + sc_biguint<8>(i187_cast1_reg_48328.read()));
}

void ShuffleNetV2::thread_tmp_437_cast_fu_32985_p1() {
    tmp_437_cast_fu_32985_p1 = esl_sext<32,7>(tmp_374_reg_46859.read());
}

void ShuffleNetV2::thread_tmp_437_fu_37663_p2() {
    tmp_437_fu_37663_p2 = (!tmp_434_reg_48378.read().is_01() || !ci84_cast_fu_37643_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_434_reg_48378.read()) + sc_biguint<8>(ci84_cast_fu_37643_p1.read()));
}

void ShuffleNetV2::thread_tmp_438_fu_37332_p2() {
    tmp_438_fu_37332_p2 = (!p_shl250_cast_fu_37316_p1.read().is_01() || !p_shl251_cast_fu_37328_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl250_cast_fu_37316_p1.read()) - sc_biguint<8>(p_shl251_cast_fu_37328_p1.read()));
}

void ShuffleNetV2::thread_tmp_439_cast_cast_fu_32630_p1() {
    tmp_439_cast_cast_fu_32630_p1 = esl_sext<8,7>(tmp_370_fu_32625_p2.read());
}

void ShuffleNetV2::thread_tmp_439_fu_37342_p2() {
    tmp_439_fu_37342_p2 = (!tmp_438_fu_37332_p2.read().is_01() || !co172_cast_reg_48237.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_438_fu_37332_p2.read()) + sc_biguint<8>(co172_cast_reg_48237.read()));
}

void ShuffleNetV2::thread_tmp_440_cast_cast_fu_32680_p1() {
    tmp_440_cast_cast_fu_32680_p1 = esl_sext<9,7>(tmp_375_fu_32674_p2.read());
}

void ShuffleNetV2::thread_tmp_440_fu_37961_p2() {
    tmp_440_fu_37961_p2 = (!p_shl252_cast_fu_37945_p1.read().is_01() || !p_shl253_cast_fu_37957_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl252_cast_fu_37945_p1.read()) - sc_biguint<8>(p_shl253_cast_fu_37957_p1.read()));
}

void ShuffleNetV2::thread_tmp_441_fu_37971_p2() {
    tmp_441_fu_37971_p2 = (!tmp_440_fu_37961_p2.read().is_01() || !i191_cast1_reg_48455.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_440_fu_37961_p2.read()) + sc_biguint<8>(i191_cast1_reg_48455.read()));
}

void ShuffleNetV2::thread_tmp_442_cast_cast_fu_32719_p1() {
    tmp_442_cast_cast_fu_32719_p1 = esl_sext<9,8>(tmp_377_fu_32713_p2.read());
}

void ShuffleNetV2::thread_tmp_442_fu_37714_p2() {
    tmp_442_fu_37714_p2 = (!p_shl254_cast_fu_37700_p1.read().is_01() || !p_shl255_cast_fu_37710_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl254_cast_fu_37700_p1.read()) - sc_biguint<8>(p_shl255_cast_fu_37710_p1.read()));
}

void ShuffleNetV2::thread_tmp_443_cast_fu_37768_p1() {
    tmp_443_cast_fu_37768_p1 = esl_sext<11,10>(tmp_443_reg_48414.read());
}

void ShuffleNetV2::thread_tmp_443_fu_37724_p2() {
    tmp_443_fu_37724_p2 = (!tmp_543_cast_cast_fu_37720_p1.read().is_01() || !tmp_535_cast_cast_reg_48383.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_543_cast_cast_fu_37720_p1.read()) + sc_biguint<10>(tmp_535_cast_cast_reg_48383.read()));
}

void ShuffleNetV2::thread_tmp_444_fu_37741_p2() {
    tmp_444_fu_37741_p2 = (!p_shl256_cast_fu_37737_p1.read().is_01() || !p_shl254_cast1_fu_37696_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl256_cast_fu_37737_p1.read()) - sc_biguint<10>(p_shl254_cast1_fu_37696_p1.read()));
}

void ShuffleNetV2::thread_tmp_445_fu_38178_p2() {
    tmp_445_fu_38178_p2 = (!co178_cast_fu_38162_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co178_cast_fu_38162_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_446_cast_cast_fu_33166_p1() {
    tmp_446_cast_cast_fu_33166_p1 = esl_zext<10,3>(tmp_2453_fu_33156_p4.read());
}

void ShuffleNetV2::thread_tmp_446_fu_38381_p2() {
    tmp_446_fu_38381_p2 = (!p_shl257_cast_fu_38367_p1.read().is_01() || !p_shl258_cast_fu_38377_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl257_cast_fu_38367_p1.read()) - sc_biguint<8>(p_shl258_cast_fu_38377_p1.read()));
}

void ShuffleNetV2::thread_tmp_447_cast_cast_fu_33494_p1() {
    tmp_447_cast_cast_fu_33494_p1 = esl_sext<10,8>(tmp_380_fu_33488_p2.read());
}

void ShuffleNetV2::thread_tmp_447_fu_38421_p2() {
    tmp_447_fu_38421_p2 = (!tmp_446_reg_48603.read().is_01() || !ci86_cast_fu_38401_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_446_reg_48603.read()) + sc_biguint<8>(ci86_cast_fu_38401_p1.read()));
}

void ShuffleNetV2::thread_tmp_448_cast_fu_33532_p1() {
    tmp_448_cast_fu_33532_p1 = esl_sext<32,8>(tmp_381_reg_47030.read());
}

void ShuffleNetV2::thread_tmp_448_fu_38719_p2() {
    tmp_448_fu_38719_p2 = (!p_shl259_cast_fu_38703_p1.read().is_01() || !p_shl260_cast_fu_38715_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl259_cast_fu_38703_p1.read()) - sc_biguint<8>(p_shl260_cast_fu_38715_p1.read()));
}

void ShuffleNetV2::thread_tmp_449_fu_38729_p2() {
    tmp_449_fu_38729_p2 = (!tmp_448_fu_38719_p2.read().is_01() || !i196_cast1_reg_48680.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_448_fu_38719_p2.read()) + sc_biguint<8>(i196_cast1_reg_48680.read()));
}

void ShuffleNetV2::thread_tmp_450_cast_cast_fu_33195_p1() {
    tmp_450_cast_cast_fu_33195_p1 = esl_sext<10,8>(tmp_379_fu_33190_p2.read());
}

void ShuffleNetV2::thread_tmp_450_fu_38472_p2() {
    tmp_450_fu_38472_p2 = (!p_shl261_cast_fu_38458_p1.read().is_01() || !p_shl262_cast_fu_38468_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl261_cast_fu_38458_p1.read()) - sc_biguint<8>(p_shl262_cast_fu_38468_p1.read()));
}

void ShuffleNetV2::thread_tmp_451_cast_cast_fu_33247_p1() {
    tmp_451_cast_cast_fu_33247_p1 = esl_sext<10,8>(tmp_382_fu_33241_p2.read());
}

void ShuffleNetV2::thread_tmp_451_cast_fu_38526_p1() {
    tmp_451_cast_fu_38526_p1 = esl_sext<11,10>(tmp_451_reg_48639.read());
}

void ShuffleNetV2::thread_tmp_451_fu_38482_p2() {
    tmp_451_fu_38482_p2 = (!tmp_555_cast_cast_fu_38478_p1.read().is_01() || !tmp_550_cast_cast_reg_48608.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_555_cast_cast_fu_38478_p1.read()) + sc_biguint<10>(tmp_550_cast_cast_reg_48608.read()));
}

void ShuffleNetV2::thread_tmp_452_fu_38499_p2() {
    tmp_452_fu_38499_p2 = (!p_shl263_cast_fu_38495_p1.read().is_01() || !p_shl261_cast1_fu_38454_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl263_cast_fu_38495_p1.read()) - sc_biguint<10>(p_shl261_cast1_fu_38454_p1.read()));
}

void ShuffleNetV2::thread_tmp_453_cast_fu_33274_p1() {
    tmp_453_cast_fu_33274_p1 = esl_sext<12,10>(tmp_384_fu_33268_p2.read());
}

void ShuffleNetV2::thread_tmp_453_fu_39146_p2() {
    tmp_453_fu_39146_p2 = (!p_shl266_cast_fu_39132_p1.read().is_01() || !p_shl267_cast_fu_39142_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl266_cast_fu_39132_p1.read()) - sc_biguint<8>(p_shl267_cast_fu_39142_p1.read()));
}

void ShuffleNetV2::thread_tmp_454_fu_39060_p2() {
    tmp_454_fu_39060_p2 = (!p_shl264_cast_fu_39044_p1.read().is_01() || !p_shl265_cast_fu_39056_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl264_cast_fu_39044_p1.read()) - sc_biguint<8>(p_shl265_cast_fu_39056_p1.read()));
}

void ShuffleNetV2::thread_tmp_455_cast_cast_fu_33835_p1() {
    tmp_455_cast_cast_fu_33835_p1 = esl_sext<9,8>(tmp_386_fu_33829_p2.read());
}

void ShuffleNetV2::thread_tmp_455_fu_39070_p2() {
    tmp_455_fu_39070_p2 = (!tmp_454_fu_39060_p2.read().is_01() || !i199_cast1_reg_48813.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_454_fu_39060_p2.read()) + sc_biguint<8>(i199_cast1_reg_48813.read()));
}

void ShuffleNetV2::thread_tmp_456_cast_fu_33873_p1() {
    tmp_456_cast_fu_33873_p1 = esl_sext<32,8>(tmp_387_reg_47163.read());
}

void ShuffleNetV2::thread_tmp_456_fu_39186_p2() {
    tmp_456_fu_39186_p2 = (!tmp_453_reg_48863.read().is_01() || !ci88_cast_fu_39166_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_453_reg_48863.read()) + sc_biguint<8>(ci88_cast_fu_39166_p1.read()));
}

void ShuffleNetV2::thread_tmp_457_fu_38863_p2() {
    tmp_457_fu_38863_p2 = (!p_shl268_cast_fu_38847_p1.read().is_01() || !p_shl269_cast_fu_38859_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl268_cast_fu_38847_p1.read()) - sc_biguint<8>(p_shl269_cast_fu_38859_p1.read()));
}

void ShuffleNetV2::thread_tmp_458_fu_38873_p2() {
    tmp_458_fu_38873_p2 = (!co182_cast1_reg_48722.read().is_01() || !tmp_457_fu_38863_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co182_cast1_reg_48722.read()) + sc_biguint<8>(tmp_457_fu_38863_p2.read()));
}

void ShuffleNetV2::thread_tmp_459_fu_39484_p2() {
    tmp_459_fu_39484_p2 = (!p_shl270_cast_fu_39468_p1.read().is_01() || !p_shl271_cast_fu_39480_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl270_cast_fu_39468_p1.read()) - sc_biguint<8>(p_shl271_cast_fu_39480_p1.read()));
}

void ShuffleNetV2::thread_tmp_460_cast_cast_fu_33935_p1() {
    tmp_460_cast_cast_fu_33935_p1 = esl_zext<10,3>(tmp_2464_fu_33925_p4.read());
}

void ShuffleNetV2::thread_tmp_460_fu_39494_p2() {
    tmp_460_fu_39494_p2 = (!tmp_459_fu_39484_p2.read().is_01() || !i203_cast1_reg_48940.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_459_fu_39484_p2.read()) + sc_biguint<8>(i203_cast1_reg_48940.read()));
}

void ShuffleNetV2::thread_tmp_461_cast_fu_33642_p1() {
    tmp_461_cast_fu_33642_p1 = esl_sext<10,8>(tmp_389_fu_33636_p2.read());
}

void ShuffleNetV2::thread_tmp_461_fu_39237_p2() {
    tmp_461_fu_39237_p2 = (!p_shl272_cast_fu_39223_p1.read().is_01() || !p_shl273_cast_fu_39233_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl272_cast_fu_39223_p1.read()) - sc_biguint<8>(p_shl273_cast_fu_39233_p1.read()));
}

void ShuffleNetV2::thread_tmp_462_cast_cast_fu_33651_p1() {
    tmp_462_cast_cast_fu_33651_p1 = esl_sext<11,8>(tmp_390_fu_33646_p2.read());
}

void ShuffleNetV2::thread_tmp_462_cast_fu_39291_p1() {
    tmp_462_cast_fu_39291_p1 = esl_sext<11,10>(tmp_462_reg_48899.read());
}

void ShuffleNetV2::thread_tmp_462_fu_39247_p2() {
    tmp_462_fu_39247_p2 = (!tmp_572_cast_cast_fu_39243_p1.read().is_01() || !tmp_564_cast_cast_reg_48868.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_572_cast_cast_fu_39243_p1.read()) + sc_biguint<10>(tmp_564_cast_cast_reg_48868.read()));
}

void ShuffleNetV2::thread_tmp_463_fu_39264_p2() {
    tmp_463_fu_39264_p2 = (!p_shl274_cast_fu_39260_p1.read().is_01() || !p_shl272_cast1_fu_39219_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl274_cast_fu_39260_p1.read()) - sc_biguint<10>(p_shl272_cast1_fu_39219_p1.read()));
}

void ShuffleNetV2::thread_tmp_464_cast_cast_fu_34263_p1() {
    tmp_464_cast_cast_fu_34263_p1 = esl_sext<9,8>(tmp_391_fu_34257_p2.read());
}

void ShuffleNetV2::thread_tmp_465_cast_fu_34305_p1() {
    tmp_465_cast_fu_34305_p1 = esl_sext<32,8>(tmp_392_reg_47290.read());
}

void ShuffleNetV2::thread_tmp_467_cast_cast_fu_33964_p1() {
    tmp_467_cast_cast_fu_33964_p1 = esl_sext<10,8>(tmp_388_fu_33959_p2.read());
}

void ShuffleNetV2::thread_tmp_468_cast_cast_fu_34016_p1() {
    tmp_468_cast_cast_fu_34016_p1 = esl_sext<10,8>(tmp_393_fu_34010_p2.read());
}

void ShuffleNetV2::thread_tmp_470_cast_fu_34043_p1() {
    tmp_470_cast_fu_34043_p1 = esl_sext<12,10>(tmp_395_fu_34037_p2.read());
}

void ShuffleNetV2::thread_tmp_472_cast_fu_34608_p1() {
    tmp_472_cast_fu_34608_p1 = esl_sext<12,8>(tmp_397_fu_34602_p2.read());
}

void ShuffleNetV2::thread_tmp_473_cast_fu_34642_p1() {
    tmp_473_cast_fu_34642_p1 = esl_sext<32,8>(tmp_398_reg_47423.read());
}

void ShuffleNetV2::thread_tmp_477_cast_cast_fu_34704_p1() {
    tmp_477_cast_cast_fu_34704_p1 = esl_zext<10,3>(tmp_2477_fu_34694_p4.read());
}

void ShuffleNetV2::thread_tmp_478_cast_fu_34415_p1() {
    tmp_478_cast_fu_34415_p1 = esl_sext<10,8>(tmp_400_fu_34409_p2.read());
}

void ShuffleNetV2::thread_tmp_479_cast_cast_fu_34424_p1() {
    tmp_479_cast_cast_fu_34424_p1 = esl_sext<11,8>(tmp_401_fu_34419_p2.read());
}

void ShuffleNetV2::thread_tmp_481_cast_fu_35032_p1() {
    tmp_481_cast_fu_35032_p1 = esl_sext<12,8>(tmp_403_fu_35026_p2.read());
}

void ShuffleNetV2::thread_tmp_482_cast_fu_35066_p1() {
    tmp_482_cast_fu_35066_p1 = esl_sext<32,8>(tmp_404_reg_47550.read());
}

void ShuffleNetV2::thread_tmp_484_cast_cast_fu_34733_p1() {
    tmp_484_cast_cast_fu_34733_p1 = esl_sext<10,8>(tmp_399_fu_34728_p2.read());
}

void ShuffleNetV2::thread_tmp_488_cast_cast_fu_35339_p1() {
    tmp_488_cast_cast_fu_35339_p1 = esl_zext<10,3>(tmp_2490_fu_35329_p4.read());
}

void ShuffleNetV2::thread_tmp_489_cast_cast_fu_34785_p1() {
    tmp_489_cast_cast_fu_34785_p1 = esl_sext<10,8>(tmp_405_fu_34779_p2.read());
}

void ShuffleNetV2::thread_tmp_491_cast_fu_34812_p1() {
    tmp_491_cast_fu_34812_p1 = esl_sext<12,10>(tmp_407_fu_34806_p2.read());
}

void ShuffleNetV2::thread_tmp_493_cast_fu_35667_p1() {
    tmp_493_cast_fu_35667_p1 = esl_sext<12,8>(tmp_410_fu_35661_p2.read());
}

void ShuffleNetV2::thread_tmp_494_cast_fu_35701_p1() {
    tmp_494_cast_fu_35701_p1 = esl_sext<32,8>(tmp_411_reg_47731.read());
}

void ShuffleNetV2::thread_tmp_496_cast_cast_fu_35368_p1() {
    tmp_496_cast_cast_fu_35368_p1 = esl_sext<10,8>(tmp_409_fu_35363_p2.read());
}

void ShuffleNetV2::thread_tmp_497_cast_cast_fu_35420_p1() {
    tmp_497_cast_cast_fu_35420_p1 = esl_sext<10,8>(tmp_412_fu_35414_p2.read());
}

void ShuffleNetV2::thread_tmp_499_cast_fu_35447_p1() {
    tmp_499_cast_fu_35447_p1 = esl_sext<12,10>(tmp_414_fu_35441_p2.read());
}

void ShuffleNetV2::thread_tmp_501_cast_fu_36004_p1() {
    tmp_501_cast_fu_36004_p1 = esl_sext<12,8>(tmp_416_fu_35998_p2.read());
}

void ShuffleNetV2::thread_tmp_502_cast_fu_36038_p1() {
    tmp_502_cast_fu_36038_p1 = esl_sext<32,8>(tmp_417_reg_47864.read());
}

void ShuffleNetV2::thread_tmp_506_cast_cast_fu_36100_p1() {
    tmp_506_cast_cast_fu_36100_p1 = esl_zext<10,3>(tmp_2501_fu_36090_p4.read());
}

void ShuffleNetV2::thread_tmp_507_cast_fu_35811_p1() {
    tmp_507_cast_fu_35811_p1 = esl_sext<10,8>(tmp_419_fu_35805_p2.read());
}

void ShuffleNetV2::thread_tmp_508_cast_cast_fu_35820_p1() {
    tmp_508_cast_cast_fu_35820_p1 = esl_sext<11,8>(tmp_420_fu_35815_p2.read());
}

void ShuffleNetV2::thread_tmp_510_cast_fu_36436_p1() {
    tmp_510_cast_fu_36436_p1 = esl_sext<12,8>(tmp_421_fu_36430_p2.read());
}

void ShuffleNetV2::thread_tmp_511_cast_fu_36470_p1() {
    tmp_511_cast_fu_36470_p1 = esl_sext<32,8>(tmp_422_reg_47991.read());
}

void ShuffleNetV2::thread_tmp_513_cast_cast_fu_36129_p1() {
    tmp_513_cast_cast_fu_36129_p1 = esl_sext<10,8>(tmp_418_fu_36124_p2.read());
}

void ShuffleNetV2::thread_tmp_514_cast_cast_fu_36181_p1() {
    tmp_514_cast_cast_fu_36181_p1 = esl_sext<10,8>(tmp_423_fu_36175_p2.read());
}

void ShuffleNetV2::thread_tmp_516_cast_cast_fu_36208_p1() {
    tmp_516_cast_cast_fu_36208_p1 = esl_sext<11,10>(tmp_425_fu_36202_p2.read());
}

void ShuffleNetV2::thread_tmp_521_cast_cast_fu_36866_p1() {
    tmp_521_cast_cast_fu_36866_p1 = esl_zext<10,3>(tmp_2516_fu_36856_p4.read());
}

void ShuffleNetV2::thread_tmp_522_cast_fu_37194_p1() {
    tmp_522_cast_fu_37194_p1 = esl_sext<12,8>(tmp_429_fu_37188_p2.read());
}

void ShuffleNetV2::thread_tmp_523_cast_fu_37228_p1() {
    tmp_523_cast_fu_37228_p1 = esl_sext<32,8>(tmp_430_reg_48216.read());
}

void ShuffleNetV2::thread_tmp_525_cast_cast_fu_36895_p1() {
    tmp_525_cast_cast_fu_36895_p1 = esl_sext<10,8>(tmp_428_fu_36890_p2.read());
}

void ShuffleNetV2::thread_tmp_526_cast_cast_fu_36947_p1() {
    tmp_526_cast_cast_fu_36947_p1 = esl_sext<10,8>(tmp_431_fu_36941_p2.read());
}

void ShuffleNetV2::thread_tmp_528_cast_fu_36974_p1() {
    tmp_528_cast_fu_36974_p1 = esl_sext<13,10>(tmp_433_fu_36968_p2.read());
}

void ShuffleNetV2::thread_tmp_530_cast_fu_37543_p1() {
    tmp_530_cast_fu_37543_p1 = esl_sext<12,8>(tmp_435_fu_37537_p2.read());
}

void ShuffleNetV2::thread_tmp_531_cast_fu_37577_p1() {
    tmp_531_cast_fu_37577_p1 = esl_sext<32,8>(tmp_436_reg_48349.read());
}

void ShuffleNetV2::thread_tmp_535_cast_cast_fu_37639_p1() {
    tmp_535_cast_cast_fu_37639_p1 = esl_zext<10,3>(tmp_2527_fu_37629_p4.read());
}

void ShuffleNetV2::thread_tmp_536_cast_cast_fu_37338_p1() {
    tmp_536_cast_cast_fu_37338_p1 = esl_sext<9,8>(tmp_438_fu_37332_p2.read());
}

void ShuffleNetV2::thread_tmp_537_cast_cast_fu_37347_p1() {
    tmp_537_cast_cast_fu_37347_p1 = esl_sext<11,8>(tmp_439_fu_37342_p2.read());
}

void ShuffleNetV2::thread_tmp_539_cast_fu_37967_p1() {
    tmp_539_cast_fu_37967_p1 = esl_sext<12,8>(tmp_440_fu_37961_p2.read());
}

void ShuffleNetV2::thread_tmp_540_cast_fu_38001_p1() {
    tmp_540_cast_fu_38001_p1 = esl_sext<32,8>(tmp_441_reg_48476.read());
}

void ShuffleNetV2::thread_tmp_542_cast_cast_fu_37668_p1() {
    tmp_542_cast_cast_fu_37668_p1 = esl_sext<10,8>(tmp_437_fu_37663_p2.read());
}

void ShuffleNetV2::thread_tmp_543_cast_cast_fu_37720_p1() {
    tmp_543_cast_cast_fu_37720_p1 = esl_sext<10,8>(tmp_442_fu_37714_p2.read());
}

void ShuffleNetV2::thread_tmp_545_cast_fu_37747_p1() {
    tmp_545_cast_fu_37747_p1 = esl_sext<13,10>(tmp_444_fu_37741_p2.read());
}

void ShuffleNetV2::thread_tmp_550_cast_cast_fu_38397_p1() {
    tmp_550_cast_cast_fu_38397_p1 = esl_zext<10,3>(tmp_2542_fu_38387_p4.read());
}

void ShuffleNetV2::thread_tmp_551_cast_fu_38725_p1() {
    tmp_551_cast_fu_38725_p1 = esl_sext<12,8>(tmp_448_fu_38719_p2.read());
}

void ShuffleNetV2::thread_tmp_552_cast_fu_38759_p1() {
    tmp_552_cast_fu_38759_p1 = esl_sext<32,8>(tmp_449_reg_48701.read());
}

void ShuffleNetV2::thread_tmp_554_cast_cast_fu_38426_p1() {
    tmp_554_cast_cast_fu_38426_p1 = esl_sext<10,8>(tmp_447_fu_38421_p2.read());
}

void ShuffleNetV2::thread_tmp_555_cast_cast_fu_38478_p1() {
    tmp_555_cast_cast_fu_38478_p1 = esl_sext<10,8>(tmp_450_fu_38472_p2.read());
}

void ShuffleNetV2::thread_tmp_557_cast_fu_38505_p1() {
    tmp_557_cast_fu_38505_p1 = esl_sext<13,10>(tmp_452_fu_38499_p2.read());
}

void ShuffleNetV2::thread_tmp_559_cast_fu_39066_p1() {
    tmp_559_cast_fu_39066_p1 = esl_sext<12,8>(tmp_454_fu_39060_p2.read());
}

void ShuffleNetV2::thread_tmp_560_cast_fu_39100_p1() {
    tmp_560_cast_fu_39100_p1 = esl_sext<32,8>(tmp_455_reg_48834.read());
}

void ShuffleNetV2::thread_tmp_564_cast_cast_fu_39162_p1() {
    tmp_564_cast_cast_fu_39162_p1 = esl_zext<10,3>(tmp_2553_fu_39152_p4.read());
}

void ShuffleNetV2::thread_tmp_565_cast_fu_38869_p1() {
    tmp_565_cast_fu_38869_p1 = esl_sext<11,8>(tmp_457_fu_38863_p2.read());
}

void ShuffleNetV2::thread_tmp_566_cast_cast_fu_38878_p1() {
    tmp_566_cast_cast_fu_38878_p1 = esl_sext<11,8>(tmp_458_fu_38873_p2.read());
}

void ShuffleNetV2::thread_tmp_568_cast_fu_39490_p1() {
    tmp_568_cast_fu_39490_p1 = esl_sext<12,8>(tmp_459_fu_39484_p2.read());
}

void ShuffleNetV2::thread_tmp_569_cast_fu_39524_p1() {
    tmp_569_cast_fu_39524_p1 = esl_sext<32,8>(tmp_460_reg_48961.read());
}

void ShuffleNetV2::thread_tmp_571_cast_cast_fu_39191_p1() {
    tmp_571_cast_cast_fu_39191_p1 = esl_sext<10,8>(tmp_456_fu_39186_p2.read());
}

void ShuffleNetV2::thread_tmp_572_cast_cast_fu_39243_p1() {
    tmp_572_cast_cast_fu_39243_p1 = esl_sext<10,8>(tmp_461_fu_39237_p2.read());
}

void ShuffleNetV2::thread_tmp_574_cast_fu_39270_p1() {
    tmp_574_cast_fu_39270_p1 = esl_sext<13,10>(tmp_463_fu_39264_p2.read());
}

void ShuffleNetV2::thread_tmp_660_fu_15403_p3() {
    tmp_660_fu_15403_p3 = esl_concat<2,1>(ci_reg_9604.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_661_fu_15415_p2() {
    tmp_661_fu_15415_p2 = (!p_shl276_cast_fu_15411_p1.read().is_01() || !tmp_805_cast_fu_15399_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl276_cast_fu_15411_p1.read()) + sc_biguint<8>(tmp_805_cast_fu_15399_p1.read()));
}

void ShuffleNetV2::thread_tmp_662_fu_15535_p3() {
    tmp_662_fu_15535_p3 = esl_concat<5,5>(co_reg_9637.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_663_fu_15547_p3() {
    tmp_663_fu_15547_p3 = esl_concat<5,3>(co_reg_9637.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_664_fu_15559_p2() {
    tmp_664_fu_15559_p2 = (!p_shl279_cast_fu_15543_p1.read().is_01() || !p_shl280_cast_fu_15555_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl279_cast_fu_15543_p1.read()) - sc_biguint<11>(p_shl280_cast_fu_15555_p1.read()));
}

void ShuffleNetV2::thread_tmp_665_fu_15437_p2() {
    tmp_665_fu_15437_p2 = (!w_cast_cast_fu_15433_p1.read().is_01() || !tmp_805_cast_reg_40248.read().is_01())? sc_lv<8>(): (sc_biguint<8>(w_cast_cast_fu_15433_p1.read()) + sc_biguint<8>(tmp_805_cast_reg_40248.read()));
}

void ShuffleNetV2::thread_tmp_666_fu_15450_p1() {
    tmp_666_fu_15450_p1 = esl_zext<32,13>(tmp_2160_fu_15442_p3.read());
}

void ShuffleNetV2::thread_tmp_667_fu_15470_p2() {
    tmp_667_fu_15470_p2 = (!w_45_cast_cast_fu_15466_p1.read().is_01() || !tmp_661_reg_40253.read().is_01())? sc_lv<8>(): (sc_biguint<8>(w_45_cast_cast_fu_15466_p1.read()) + sc_biguint<8>(tmp_661_reg_40253.read()));
}

void ShuffleNetV2::thread_tmp_668_fu_15504_p2() {
    tmp_668_fu_15504_p2 = (!p_shl277_cast_fu_15486_p3.read().is_01() || !p_shl278_cast_fu_15500_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl277_cast_fu_15486_p3.read()) + sc_biguint<13>(p_shl278_cast_fu_15500_p1.read()));
}

void ShuffleNetV2::thread_tmp_669_fu_15526_p2() {
    tmp_669_fu_15526_p2 = (!tmp_668_reg_40286.read().is_01() || !h_44_cast_cast_fu_15522_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_668_reg_40286.read()) + sc_biguint<13>(h_44_cast_cast_fu_15522_p1.read()));
}

void ShuffleNetV2::thread_tmp_670_fu_15663_p3() {
    tmp_670_fu_15663_p3 = esl_concat<5,2>(co5_reg_9671.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_671_fu_15675_p2() {
    tmp_671_fu_15675_p2 = (!p_shl281_cast_fu_15671_p1.read().is_01() || !co5_cast_cast_fu_15659_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl281_cast_fu_15671_p1.read()) - sc_biguint<8>(co5_cast_cast_fu_15659_p1.read()));
}

void ShuffleNetV2::thread_tmp_672_fu_15712_p2() {
    tmp_672_fu_15712_p2 = (!tmp_823_cast_reg_40470.read().is_01() || !w6_cast_cast_fu_15708_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_823_cast_reg_40470.read()) + sc_biguint<9>(w6_cast_cast_fu_15708_p1.read()));
}

void ShuffleNetV2::thread_tmp_673_fu_15733_p2() {
    tmp_673_fu_15733_p2 = (!p_shl193_fu_15729_p1.read().is_01() || !tmp_824_cast_fu_15717_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl193_fu_15729_p1.read()) - sc_bigint<32>(tmp_824_cast_fu_15717_p1.read()));
}

void ShuffleNetV2::thread_tmp_674_fu_15766_p2() {
    tmp_674_fu_15766_p2 = (!h7_cast_fu_15762_p1.read().is_01() || !tmp_673_reg_40489.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h7_cast_fu_15762_p1.read()) + sc_biguint<32>(tmp_673_reg_40489.read()));
}

void ShuffleNetV2::thread_tmp_675_fu_15822_p3() {
    tmp_675_fu_15822_p3 = esl_concat<6,5>(sum6_fu_15816_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_676_fu_15834_p3() {
    tmp_676_fu_15834_p3 = esl_concat<6,3>(sum6_fu_15816_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_677_fu_15846_p2() {
    tmp_677_fu_15846_p2 = (!p_shl283_cast_fu_15830_p1.read().is_01() || !p_shl284_cast_fu_15842_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl283_cast_fu_15830_p1.read()) - sc_biguint<12>(p_shl284_cast_fu_15842_p1.read()));
}

void ShuffleNetV2::thread_tmp_678_fu_15938_p3() {
    tmp_678_fu_15938_p3 = esl_concat<5,2>(co12_reg_9749.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_679_fu_15950_p2() {
    tmp_679_fu_15950_p2 = (!p_shl285_cast_fu_15946_p1.read().is_01() || !co12_cast1_cast_fu_15934_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl285_cast_fu_15946_p1.read()) - sc_biguint<8>(co12_cast1_cast_fu_15934_p1.read()));
}

void ShuffleNetV2::thread_tmp_680_fu_15986_p3() {
    tmp_680_fu_15986_p3 = esl_concat<6,2>(sum5_fu_15976_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_681_fu_15998_p2() {
    tmp_681_fu_15998_p2 = (!p_shl286_cast_fu_15994_p1.read().is_01() || !sum5_cast_cast_fu_15982_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_shl286_cast_fu_15994_p1.read()) - sc_biguint<9>(sum5_cast_cast_fu_15982_p1.read()));
}

void ShuffleNetV2::thread_tmp_682_fu_16008_p2() {
    tmp_682_fu_16008_p2 = (!w13_cast_cast_fu_16004_p1.read().is_01() || !tmp_681_reg_40708.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w13_cast_cast_fu_16004_p1.read()) + sc_biguint<9>(tmp_681_reg_40708.read()));
}

void ShuffleNetV2::thread_tmp_683_fu_16029_p2() {
    tmp_683_fu_16029_p2 = (!p_shl197_fu_16025_p1.read().is_01() || !tmp_836_cast_fu_16013_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl197_fu_16025_p1.read()) - sc_bigint<32>(tmp_836_cast_fu_16013_p1.read()));
}

void ShuffleNetV2::thread_tmp_684_fu_16035_p2() {
    tmp_684_fu_16035_p2 = (!w13_cast_cast_fu_16004_p1.read().is_01() || !tmp_833_cast_reg_40695.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w13_cast_cast_fu_16004_p1.read()) + sc_bigint<9>(tmp_833_cast_reg_40695.read()));
}

void ShuffleNetV2::thread_tmp_685_fu_16046_p2() {
    tmp_685_fu_16046_p2 = (!tmp_2174_fu_16040_p2.read().is_01() || !tmp_684_fu_16035_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_2174_fu_16040_p2.read()) - sc_biguint<9>(tmp_684_fu_16035_p2.read()));
}

void ShuffleNetV2::thread_tmp_686_fu_16079_p2() {
    tmp_686_fu_16079_p2 = (!tmp_685_reg_40713.read().is_01() || !h14_cast_cast_fu_16075_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_685_reg_40713.read()) + sc_biguint<9>(h14_cast_cast_fu_16075_p1.read()));
}

void ShuffleNetV2::thread_tmp_687_fu_16166_p3() {
    tmp_687_fu_16166_p3 = esl_concat<7,5>(sum9_fu_16160_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_688_fu_16178_p3() {
    tmp_688_fu_16178_p3 = esl_concat<7,3>(sum9_fu_16160_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_689_fu_16190_p2() {
    tmp_689_fu_16190_p2 = (!p_shl289_cast_fu_16174_p1.read().is_01() || !p_shl290_cast_fu_16186_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl289_cast_fu_16174_p1.read()) - sc_biguint<13>(p_shl290_cast_fu_16186_p1.read()));
}

}

