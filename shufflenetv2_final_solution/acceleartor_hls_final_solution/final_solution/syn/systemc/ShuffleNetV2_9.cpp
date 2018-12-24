#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_1955_cast_fu_19039_p1() {
    tmp_1955_cast_fu_19039_p1 = esl_sext<32,11>(tmp_822_reg_41724.read());
}

void ShuffleNetV2::thread_tmp_1956_fu_17424_p1() {
    tmp_1956_fu_17424_p1 = esl_sext<32,14>(tmp_786_fu_17418_p2.read());
}

void ShuffleNetV2::thread_tmp_195_fu_19316_p2() {
    tmp_195_fu_19316_p2 = (!p_shl30_cast_fu_19300_p1.read().is_01() || !p_shl31_cast_fu_19312_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl30_cast_fu_19300_p1.read()) - sc_biguint<7>(p_shl31_cast_fu_19312_p1.read()));
}

void ShuffleNetV2::thread_tmp_1965_fu_17428_p2() {
    tmp_1965_fu_17428_p2 = (!shuffle_conv_1x1_V_r_reg_38982.read().is_01() || !tmp_1956_fu_17424_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()) + sc_bigint<32>(tmp_1956_fu_17424_p1.read()));
}

void ShuffleNetV2::thread_tmp_1966_fu_17641_p1() {
    tmp_1966_fu_17641_p1 = co56_reg_9455.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1967_fu_17675_p4() {
    tmp_1967_fu_17675_p4 = co56_reg_9455.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_1968_fu_17569_p3() {
    tmp_1968_fu_17569_p3 = esl_concat<10,4>(tmp_790_fu_17564_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1969_fu_17581_p3() {
    tmp_1969_fu_17581_p3 = esl_concat<10,1>(tmp_790_fu_17564_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_196_cast_cast_fu_19272_p1() {
    tmp_196_cast_cast_fu_19272_p1 = esl_sext<8,7>(tmp_189_fu_19267_p2.read());
}

void ShuffleNetV2::thread_tmp_196_cast_fu_19386_p1() {
    tmp_196_cast_fu_19386_p1 = esl_sext<10,9>(tmp_196_reg_41827.read());
}

void ShuffleNetV2::thread_tmp_196_fu_19326_p2() {
    tmp_196_fu_19326_p2 = (!tmp_201_cast_cast_fu_19322_p1.read().is_01() || !tmp_189_cast_cast_reg_41796.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_201_cast_cast_fu_19322_p1.read()) + sc_biguint<9>(tmp_189_cast_cast_reg_41796.read()));
}

void ShuffleNetV2::thread_tmp_1970_fu_17989_p1() {
    tmp_1970_fu_17989_p1 = k_reg_9499.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1973_cast_fu_19417_p1() {
    tmp_1973_cast_fu_19417_p1 = esl_sext<17,16>(tmp_833_fu_19411_p2.read());
}

void ShuffleNetV2::thread_tmp_1974_cast_fu_19426_p1() {
    tmp_1974_cast_fu_19426_p1 = esl_sext<32,17>(tmp_834_fu_19421_p2.read());
}

void ShuffleNetV2::thread_tmp_1975_fu_17730_p1() {
    tmp_1975_fu_17730_p1 = i34_reg_9477.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1976_fu_17926_p1() {
    tmp_1976_fu_17926_p1 = grp_fu_17818_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_197_fu_19355_p2() {
    tmp_197_fu_19355_p2 = (!p_shl32_cast_fu_19339_p1.read().is_01() || !p_shl33_cast_fu_19351_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl32_cast_fu_19339_p1.read()) - sc_biguint<8>(p_shl33_cast_fu_19351_p1.read()));
}

void ShuffleNetV2::thread_tmp_1980_cast_fu_19492_p1() {
    tmp_1980_cast_fu_19492_p1 = esl_sext<32,8>(tmp_836_reg_41855.read());
}

void ShuffleNetV2::thread_tmp_1981_fu_18422_p1() {
    tmp_1981_fu_18422_p1 = co60_reg_9576.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1982_fu_18456_p4() {
    tmp_1982_fu_18456_p4 = co60_reg_9576.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_1984_fu_18330_p1() {
    tmp_1984_fu_18330_p1 = k8_reg_9565.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1985_fu_18133_p1() {
    tmp_1985_fu_18133_p1 = i39_reg_9543.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1988_fu_18214_p2() {
    tmp_1988_fu_18214_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_801_reg_41447.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1989_fu_18261_p3() {
    tmp_1989_fu_18261_p3 = esl_concat<12,2>(tmp_806_reg_41464.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_198_fu_19878_p2() {
    tmp_198_fu_19878_p2 = (!p_shl28_cast_fu_19862_p1.read().is_01() || !p_shl29_cast_fu_19874_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl28_cast_fu_19862_p1.read()) - sc_biguint<7>(p_shl29_cast_fu_19874_p1.read()));
}

void ShuffleNetV2::thread_tmp_1991_cast_fu_19830_p1() {
    tmp_1991_cast_fu_19830_p1 = esl_zext<32,14>(tmp_841_reg_41949.read());
}

void ShuffleNetV2::thread_tmp_1992_cast_fu_19825_p1() {
    tmp_1992_cast_fu_19825_p1 = esl_zext<32,15>(tmp_842_fu_19820_p2.read());
}

void ShuffleNetV2::thread_tmp_1993_fu_18770_p1() {
    tmp_1993_fu_18770_p1 = k9_reg_9620.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1994_fu_18511_p1() {
    tmp_1994_fu_18511_p1 = i41_reg_9598.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1995_fu_18707_p1() {
    tmp_1995_fu_18707_p1 = grp_fu_18599_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_1998_fu_19199_p1() {
    tmp_1998_fu_19199_p1 = co64_reg_9697.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_199_fu_19918_p2() {
    tmp_199_fu_19918_p2 = (!tmp_198_reg_41972.read().is_01() || !ci34_cast_fu_19898_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_198_reg_41972.read()) + sc_biguint<7>(ci34_cast_fu_19898_p1.read()));
}

void ShuffleNetV2::thread_tmp_2001_cast_fu_20064_p1() {
    tmp_2001_cast_fu_20064_p1 = esl_sext<17,16>(tmp_845_fu_20058_p2.read());
}

void ShuffleNetV2::thread_tmp_2002_cast_fu_20073_p1() {
    tmp_2002_cast_fu_20073_p1 = esl_sext<32,17>(tmp_846_fu_20068_p2.read());
}

void ShuffleNetV2::thread_tmp_2003_fu_19233_p4() {
    tmp_2003_fu_19233_p4 = co64_reg_9697.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2004_fu_19111_p1() {
    tmp_2004_fu_19111_p1 = k10_reg_9686.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2005_fu_18918_p1() {
    tmp_2005_fu_18918_p1 = i46_reg_9664.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2006_fu_18999_p2() {
    tmp_2006_fu_18999_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_817_reg_41707.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2008_cast_fu_20139_p1() {
    tmp_2008_cast_fu_20139_p1 = esl_sext<32,8>(tmp_848_reg_42036.read());
}

void ShuffleNetV2::thread_tmp_2009_fu_19042_p3() {
    tmp_2009_fu_19042_p3 = esl_concat<11,2>(tmp_822_reg_41724.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_200_cast_cast_fu_19894_p1() {
    tmp_200_cast_cast_fu_19894_p1 = esl_zext<9,4>(tmp_2024_fu_19884_p4.read());
}

void ShuffleNetV2::thread_tmp_200_fu_20226_p2() {
    tmp_200_fu_20226_p2 = (!p_shl34_cast_fu_20210_p1.read().is_01() || !p_shl35_cast_fu_20222_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl34_cast_fu_20210_p1.read()) - sc_biguint<7>(p_shl35_cast_fu_20222_p1.read()));
}

void ShuffleNetV2::thread_tmp_2010_fu_19551_p1() {
    tmp_2010_fu_19551_p1 = k12_reg_9741.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2011_fu_19288_p1() {
    tmp_2011_fu_19288_p1 = i48_reg_9719.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2012_fu_19488_p1() {
    tmp_2012_fu_19488_p1 = grp_fu_19380_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2018_fu_19850_p1() {
    tmp_2018_fu_19850_p1 = co67_reg_9785.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_201_cast_cast_fu_19322_p1() {
    tmp_201_cast_cast_fu_19322_p1 = esl_sext<9,7>(tmp_195_fu_19316_p2.read());
}

void ShuffleNetV2::thread_tmp_201_fu_20236_p2() {
    tmp_201_fu_20236_p2 = (!tmp_200_fu_20226_p2.read().is_01() || !i54_cast1_reg_42049.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_200_fu_20226_p2.read()) + sc_biguint<7>(i54_cast1_reg_42049.read()));
}

void ShuffleNetV2::thread_tmp_2020_cast_fu_20507_p1() {
    tmp_2020_cast_fu_20507_p1 = esl_zext<32,10>(tmp_853_reg_42160.read());
}

void ShuffleNetV2::thread_tmp_2022_cast_fu_20462_p1() {
    tmp_2022_cast_fu_20462_p1 = esl_sext<13,12>(tmp_855_fu_20456_p2.read());
}

void ShuffleNetV2::thread_tmp_2023_cast_fu_20471_p1() {
    tmp_2023_cast_fu_20471_p1 = esl_sext<32,13>(tmp_856_reg_42165.read());
}

void ShuffleNetV2::thread_tmp_2024_fu_19884_p4() {
    tmp_2024_fu_19884_p4 = co67_reg_9785.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_202_fu_19967_p2() {
    tmp_202_fu_19967_p2 = (!p_shl36_cast_fu_19951_p1.read().is_01() || !p_shl37_cast_fu_19963_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl36_cast_fu_19951_p1.read()) - sc_biguint<7>(p_shl37_cast_fu_19963_p1.read()));
}

void ShuffleNetV2::thread_tmp_2030_fu_19730_p3() {
    tmp_2030_fu_19730_p3 = esl_concat<10,3>(tmp_837_fu_19725_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2031_fu_19742_p3() {
    tmp_2031_fu_19742_p3 = esl_concat<10,1>(tmp_837_fu_19725_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2032_fu_19765_p3() {
    tmp_2032_fu_19765_p3 = esl_concat<11,3>(tmp_839_fu_19760_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2033_fu_19777_p3() {
    tmp_2033_fu_19777_p3 = esl_concat<11,1>(tmp_839_fu_19760_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2034_fu_20198_p1() {
    tmp_2034_fu_20198_p1 = k14_reg_9829.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2035_fu_19939_p1() {
    tmp_2035_fu_19939_p1 = i52_reg_9807.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2038_cast_fu_20845_p1() {
    tmp_2038_cast_fu_20845_p1 = esl_sext<17,16>(tmp_864_fu_20839_p2.read());
}

void ShuffleNetV2::thread_tmp_2039_cast_fu_20854_p1() {
    tmp_2039_cast_fu_20854_p1 = esl_sext<32,17>(tmp_865_fu_20849_p2.read());
}

void ShuffleNetV2::thread_tmp_203_cast1_fu_20033_p1() {
    tmp_203_cast1_fu_20033_p1 = esl_sext<10,9>(tmp_203_reg_42008.read());
}

void ShuffleNetV2::thread_tmp_203_cast_fu_19361_p1() {
    tmp_203_cast_fu_19361_p1 = esl_sext<9,8>(tmp_197_fu_19355_p2.read());
}

void ShuffleNetV2::thread_tmp_203_fu_19977_p2() {
    tmp_203_fu_19977_p2 = (!tmp_209_cast_cast_fu_19973_p1.read().is_01() || !tmp_200_cast_cast_reg_41977.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_209_cast_cast_fu_19973_p1.read()) + sc_biguint<9>(tmp_200_cast_cast_reg_41977.read()));
}

void ShuffleNetV2::thread_tmp_2040_fu_20135_p1() {
    tmp_2040_fu_20135_p1 = grp_fu_20027_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2043_fu_20631_p1() {
    tmp_2043_fu_20631_p1 = co71_reg_9906.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2045_cast_fu_20920_p1() {
    tmp_2045_cast_fu_20920_p1 = esl_sext<32,8>(tmp_867_reg_42296.read());
}

void ShuffleNetV2::thread_tmp_204_fu_20006_p2() {
    tmp_204_fu_20006_p2 = (!p_shl38_cast_fu_19990_p1.read().is_01() || !p_shl39_cast_fu_20002_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl38_cast_fu_19990_p1.read()) - sc_biguint<8>(p_shl39_cast_fu_20002_p1.read()));
}

void ShuffleNetV2::thread_tmp_2053_fu_20665_p4() {
    tmp_2053_fu_20665_p4 = co71_reg_9906.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2054_fu_20543_p1() {
    tmp_2054_fu_20543_p1 = k16_reg_9895.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2056_fu_20342_p1() {
    tmp_2056_fu_20342_p1 = i57_reg_9873.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2057_fu_20427_p2() {
    tmp_2057_fu_20427_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_851_reg_42148.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2059_fu_20474_p3() {
    tmp_2059_fu_20474_p3 = esl_concat<13,2>(tmp_856_reg_42165.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_205_cast_fu_20232_p1() {
    tmp_205_cast_fu_20232_p1 = esl_sext<10,7>(tmp_200_fu_20226_p2.read());
}

void ShuffleNetV2::thread_tmp_205_fu_20659_p2() {
    tmp_205_fu_20659_p2 = (!p_shl42_cast_fu_20643_p1.read().is_01() || !p_shl43_cast_fu_20655_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl42_cast_fu_20643_p1.read()) - sc_biguint<7>(p_shl43_cast_fu_20655_p1.read()));
}

void ShuffleNetV2::thread_tmp_2060_fu_20979_p1() {
    tmp_2060_fu_20979_p1 = k18_reg_9950.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2063_fu_20720_p1() {
    tmp_2063_fu_20720_p1 = i59_reg_9928.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2064_fu_20916_p1() {
    tmp_2064_fu_20916_p1 = grp_fu_20808_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2066_cast_fu_21165_p1() {
    tmp_2066_cast_fu_21165_p1 = esl_zext<32,15>(tmp_880_fu_21160_p2.read());
}

void ShuffleNetV2::thread_tmp_2067_cast_fu_21377_p1() {
    tmp_2067_cast_fu_21377_p1 = esl_zext<32,14>(tmp_881_reg_42434.read());
}

void ShuffleNetV2::thread_tmp_2068_cast_fu_21372_p1() {
    tmp_2068_cast_fu_21372_p1 = esl_zext<32,15>(tmp_882_fu_21367_p2.read());
}

void ShuffleNetV2::thread_tmp_206_cast_fu_20266_p1() {
    tmp_206_cast_fu_20266_p1 = esl_sext<32,7>(tmp_201_reg_42070.read());
}

void ShuffleNetV2::thread_tmp_206_fu_20571_p2() {
    tmp_206_fu_20571_p2 = (!p_shl40_cast_fu_20555_p1.read().is_01() || !p_shl41_cast_fu_20567_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl40_cast_fu_20555_p1.read()) - sc_biguint<7>(p_shl41_cast_fu_20567_p1.read()));
}

void ShuffleNetV2::thread_tmp_2071_fu_21114_p3() {
    tmp_2071_fu_21114_p3 = esl_concat<10,3>(tmp_874_fu_21109_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2072_fu_21126_p3() {
    tmp_2072_fu_21126_p3 = esl_concat<10,1>(tmp_874_fu_21109_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2073_fu_21397_p1() {
    tmp_2073_fu_21397_p1 = co77_reg_10027.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2074_fu_21431_p4() {
    tmp_2074_fu_21431_p4 = co77_reg_10027.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2077_cast_fu_21611_p1() {
    tmp_2077_cast_fu_21611_p1 = esl_sext<17,16>(tmp_885_fu_21605_p2.read());
}

void ShuffleNetV2::thread_tmp_2078_cast_fu_21620_p1() {
    tmp_2078_cast_fu_21620_p1 = esl_sext<32,17>(tmp_886_fu_21615_p2.read());
}

void ShuffleNetV2::thread_tmp_2079_fu_21277_p3() {
    tmp_2079_fu_21277_p3 = esl_concat<10,3>(tmp_876_fu_21272_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_207_fu_20581_p2() {
    tmp_207_fu_20581_p2 = (!tmp_206_fu_20571_p2.read().is_01() || !i57_cast1_reg_42182.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_206_fu_20571_p2.read()) + sc_biguint<7>(i57_cast1_reg_42182.read()));
}

void ShuffleNetV2::thread_tmp_2080_fu_21289_p3() {
    tmp_2080_fu_21289_p3 = esl_concat<10,1>(tmp_876_fu_21272_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2081_fu_21312_p3() {
    tmp_2081_fu_21312_p3 = esl_concat<11,3>(tmp_878_fu_21307_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2082_fu_21324_p3() {
    tmp_2082_fu_21324_p3 = esl_concat<11,1>(tmp_878_fu_21307_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2084_cast_fu_21686_p1() {
    tmp_2084_cast_fu_21686_p1 = esl_sext<32,8>(tmp_888_reg_42521.read());
}

void ShuffleNetV2::thread_tmp_2085_fu_21745_p1() {
    tmp_2085_fu_21745_p1 = k20_reg_10071.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2086_fu_21486_p1() {
    tmp_2086_fu_21486_p1 = i63_reg_10049.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2087_fu_21682_p1() {
    tmp_2087_fu_21682_p1 = grp_fu_21574_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_208_cast_cast_fu_19923_p1() {
    tmp_208_cast_cast_fu_19923_p1 = esl_sext<8,7>(tmp_199_fu_19918_p2.read());
}

void ShuffleNetV2::thread_tmp_208_fu_20699_p2() {
    tmp_208_fu_20699_p2 = (!tmp_205_reg_42232.read().is_01() || !ci36_cast_fu_20679_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_205_reg_42232.read()) + sc_biguint<7>(ci36_cast_fu_20679_p1.read()));
}

void ShuffleNetV2::thread_tmp_2090_fu_22178_p1() {
    tmp_2090_fu_22178_p1 = co81_reg_10148.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2094_fu_22212_p4() {
    tmp_2094_fu_22212_p4 = co81_reg_10148.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2096_cast_fu_22050_p1() {
    tmp_2096_cast_fu_22050_p1 = esl_zext<32,10>(tmp_893_reg_42645.read());
}

void ShuffleNetV2::thread_tmp_2098_cast_fu_22005_p1() {
    tmp_2098_cast_fu_22005_p1 = esl_sext<13,12>(tmp_895_fu_21999_p2.read());
}

void ShuffleNetV2::thread_tmp_2099_cast_fu_22014_p1() {
    tmp_2099_cast_fu_22014_p1 = esl_sext<32,13>(tmp_896_reg_42650.read());
}

void ShuffleNetV2::thread_tmp_209_cast_cast_fu_19973_p1() {
    tmp_209_cast_cast_fu_19973_p1 = esl_sext<9,7>(tmp_202_fu_19967_p2.read());
}

void ShuffleNetV2::thread_tmp_209_fu_20370_p2() {
    tmp_209_fu_20370_p2 = (!p_shl44_cast_fu_20354_p1.read().is_01() || !p_shl45_cast_fu_20366_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl44_cast_fu_20354_p1.read()) - sc_biguint<7>(p_shl45_cast_fu_20366_p1.read()));
}

void ShuffleNetV2::thread_tmp_2100_fu_22086_p1() {
    tmp_2100_fu_22086_p1 = k22_reg_10137.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2106_fu_21889_p1() {
    tmp_2106_fu_21889_p1 = i68_reg_10115.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2107_fu_21970_p2() {
    tmp_2107_fu_21970_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_891_reg_42633.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2108_fu_22017_p3() {
    tmp_2108_fu_22017_p3 = esl_concat<13,2>(tmp_896_reg_42650.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2109_fu_22526_p1() {
    tmp_2109_fu_22526_p1 = k24_reg_10192.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_210_fu_20376_p2() {
    tmp_210_fu_20376_p2 = (!co70_cast1_reg_42091.read().is_01() || !tmp_209_fu_20370_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co70_cast1_reg_42091.read()) + sc_biguint<7>(tmp_209_fu_20370_p2.read()));
}

void ShuffleNetV2::thread_tmp_2110_fu_22267_p1() {
    tmp_2110_fu_22267_p1 = i70_reg_10170.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2111_fu_22463_p1() {
    tmp_2111_fu_22463_p1 = grp_fu_22355_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2114_cast_fu_22392_p1() {
    tmp_2114_cast_fu_22392_p1 = esl_sext<17,16>(tmp_904_fu_22386_p2.read());
}

void ShuffleNetV2::thread_tmp_2114_fu_22665_p3() {
    tmp_2114_fu_22665_p3 = esl_concat<10,3>(tmp_914_fu_22660_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2115_cast_fu_22401_p1() {
    tmp_2115_cast_fu_22401_p1 = esl_sext<32,17>(tmp_905_fu_22396_p2.read());
}

void ShuffleNetV2::thread_tmp_2115_fu_22677_p3() {
    tmp_2115_fu_22677_p3 = esl_concat<10,1>(tmp_914_fu_22660_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2116_fu_22948_p1() {
    tmp_2116_fu_22948_p1 = co87_reg_10269.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2117_fu_22982_p4() {
    tmp_2117_fu_22982_p4 = co87_reg_10269.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2118_fu_22828_p3() {
    tmp_2118_fu_22828_p3 = esl_concat<10,3>(tmp_916_fu_22823_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2119_fu_22840_p3() {
    tmp_2119_fu_22840_p3 = esl_concat<10,1>(tmp_916_fu_22823_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_211_cast_fu_20012_p1() {
    tmp_211_cast_fu_20012_p1 = esl_sext<10,8>(tmp_204_fu_20006_p2.read());
}

void ShuffleNetV2::thread_tmp_211_fu_21007_p2() {
    tmp_211_fu_21007_p2 = (!p_shl46_cast_fu_20991_p1.read().is_01() || !p_shl47_cast_fu_21003_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl46_cast_fu_20991_p1.read()) - sc_biguint<7>(p_shl47_cast_fu_21003_p1.read()));
}

void ShuffleNetV2::thread_tmp_2120_fu_22863_p3() {
    tmp_2120_fu_22863_p3 = esl_concat<11,3>(tmp_918_fu_22858_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2121_cast_fu_22467_p1() {
    tmp_2121_cast_fu_22467_p1 = esl_sext<32,8>(tmp_907_reg_42781.read());
}

void ShuffleNetV2::thread_tmp_2121_fu_22875_p3() {
    tmp_2121_fu_22875_p3 = esl_concat<11,1>(tmp_918_fu_22858_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2122_fu_23304_p1() {
    tmp_2122_fu_23304_p1 = k26_reg_10313.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2123_fu_23037_p1() {
    tmp_2123_fu_23037_p1 = i74_reg_10291.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2124_fu_23241_p1() {
    tmp_2124_fu_23241_p1 = grp_fu_23125_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2127_fu_23737_p1() {
    tmp_2127_fu_23737_p1 = co91_reg_10390.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2128_fu_23771_p4() {
    tmp_2128_fu_23771_p4 = co91_reg_10390.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2129_fu_23645_p1() {
    tmp_2129_fu_23645_p1 = k28_reg_10379.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_212_fu_21017_p2() {
    tmp_212_fu_21017_p2 = (!tmp_211_fu_21007_p2.read().is_01() || !i61_cast1_reg_42309.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_211_fu_21007_p2.read()) + sc_biguint<7>(i61_cast1_reg_42309.read()));
}

void ShuffleNetV2::thread_tmp_2130_fu_23452_p1() {
    tmp_2130_fu_23452_p1 = i79_reg_10357.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2131_fu_23533_p2() {
    tmp_2131_fu_23533_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_933_reg_43118.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2132_fu_23576_p3() {
    tmp_2132_fu_23576_p3 = esl_concat<12,2>(tmp_938_reg_43135.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2133_fu_24085_p1() {
    tmp_2133_fu_24085_p1 = k30_reg_10434.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2134_fu_23826_p1() {
    tmp_2134_fu_23826_p1 = i81_reg_10412.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2135_fu_24022_p1() {
    tmp_2135_fu_24022_p1 = grp_fu_23914_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2138_fu_24224_p3() {
    tmp_2138_fu_24224_p3 = esl_concat<10,3>(tmp_956_fu_24219_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2139_fu_24236_p3() {
    tmp_2139_fu_24236_p3 = esl_concat<10,1>(tmp_956_fu_24219_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_213_cast_fu_20577_p1() {
    tmp_213_cast_fu_20577_p1 = esl_sext<10,7>(tmp_206_fu_20571_p2.read());
}

void ShuffleNetV2::thread_tmp_213_fu_20748_p2() {
    tmp_213_fu_20748_p2 = (!p_shl48_cast_fu_20732_p1.read().is_01() || !p_shl49_cast_fu_20744_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl48_cast_fu_20732_p1.read()) - sc_biguint<7>(p_shl49_cast_fu_20744_p1.read()));
}

void ShuffleNetV2::thread_tmp_2140_fu_24507_p1() {
    tmp_2140_fu_24507_p1 = co97_reg_10511.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2141_fu_24541_p4() {
    tmp_2141_fu_24541_p4 = co97_reg_10511.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2142_cast_fu_22716_p1() {
    tmp_2142_cast_fu_22716_p1 = esl_zext<32,15>(tmp_920_fu_22711_p2.read());
}

void ShuffleNetV2::thread_tmp_2142_fu_24387_p3() {
    tmp_2142_fu_24387_p3 = esl_concat<10,3>(tmp_958_fu_24382_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2143_cast_fu_22928_p1() {
    tmp_2143_cast_fu_22928_p1 = esl_zext<32,14>(tmp_921_reg_42919.read());
}

void ShuffleNetV2::thread_tmp_2143_fu_24399_p3() {
    tmp_2143_fu_24399_p3 = esl_concat<10,1>(tmp_958_fu_24382_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2144_cast_fu_22923_p1() {
    tmp_2144_cast_fu_22923_p1 = esl_zext<32,15>(tmp_922_fu_22918_p2.read());
}

void ShuffleNetV2::thread_tmp_2144_fu_24422_p3() {
    tmp_2144_fu_24422_p3 = esl_concat<11,3>(tmp_960_fu_24417_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2145_fu_24434_p3() {
    tmp_2145_fu_24434_p3 = esl_concat<11,1>(tmp_960_fu_24417_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2146_fu_24855_p1() {
    tmp_2146_fu_24855_p1 = k32_reg_10555.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2147_fu_24596_p1() {
    tmp_2147_fu_24596_p1 = i85_reg_10533.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2148_fu_24792_p1() {
    tmp_2148_fu_24792_p1 = grp_fu_24684_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_214_cast1_fu_20814_p1() {
    tmp_214_cast1_fu_20814_p1 = esl_sext<10,9>(tmp_214_reg_42268.read());
}

void ShuffleNetV2::thread_tmp_214_cast_fu_20611_p1() {
    tmp_214_cast_fu_20611_p1 = esl_sext<32,7>(tmp_207_reg_42203.read());
}

void ShuffleNetV2::thread_tmp_214_fu_20758_p2() {
    tmp_214_fu_20758_p2 = (!tmp_226_cast_cast_fu_20754_p1.read().is_01() || !tmp_218_cast_cast_reg_42237.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_226_cast_cast_fu_20754_p1.read()) + sc_biguint<9>(tmp_218_cast_cast_reg_42237.read()));
}

void ShuffleNetV2::thread_tmp_2151_fu_25280_p1() {
    tmp_2151_fu_25280_p1 = co101_reg_10632.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2152_fu_25314_p4() {
    tmp_2152_fu_25314_p4 = co101_reg_10632.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2153_fu_25192_p1() {
    tmp_2153_fu_25192_p1 = k34_reg_10621.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2154_fu_24999_p1() {
    tmp_2154_fu_24999_p1 = i90_reg_10599.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2155_cast_fu_23170_p1() {
    tmp_2155_cast_fu_23170_p1 = esl_sext<17,16>(tmp_927_fu_23164_p2.read());
}

void ShuffleNetV2::thread_tmp_2155_fu_25080_p2() {
    tmp_2155_fu_25080_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_973_reg_43603.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2156_cast_fu_23179_p1() {
    tmp_2156_cast_fu_23179_p1 = esl_sext<32,17>(tmp_928_fu_23174_p2.read());
}

void ShuffleNetV2::thread_tmp_2156_fu_25123_p3() {
    tmp_2156_fu_25123_p3 = esl_concat<12,2>(tmp_978_reg_43620.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2157_fu_25628_p1() {
    tmp_2157_fu_25628_p1 = k36_reg_10676.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2158_fu_25369_p1() {
    tmp_2158_fu_25369_p1 = i92_reg_10654.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2159_fu_25565_p1() {
    tmp_2159_fu_25565_p1 = grp_fu_25457_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_215_fu_20787_p2() {
    tmp_215_fu_20787_p2 = (!p_shl50_cast_fu_20771_p1.read().is_01() || !p_shl51_cast_fu_20783_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl50_cast_fu_20771_p1.read()) - sc_biguint<8>(p_shl51_cast_fu_20783_p1.read()));
}

void ShuffleNetV2::thread_tmp_2162_cast_fu_23245_p1() {
    tmp_2162_cast_fu_23245_p1 = esl_sext<32,8>(tmp_930_reg_43006.read());
}

void ShuffleNetV2::thread_tmp_2162_fu_25763_p3() {
    tmp_2162_fu_25763_p3 = esl_concat<10,3>(tmp_996_fu_25758_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2163_fu_25775_p3() {
    tmp_2163_fu_25775_p3 = esl_concat<10,1>(tmp_996_fu_25758_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2164_fu_26046_p1() {
    tmp_2164_fu_26046_p1 = co107_reg_10753.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2165_fu_26080_p4() {
    tmp_2165_fu_26080_p4 = co107_reg_10753.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2166_fu_25926_p3() {
    tmp_2166_fu_25926_p3 = esl_concat<10,3>(tmp_998_fu_25921_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2167_fu_25938_p3() {
    tmp_2167_fu_25938_p3 = esl_concat<10,1>(tmp_998_fu_25921_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2168_fu_25961_p3() {
    tmp_2168_fu_25961_p3 = esl_concat<11,3>(tmp_1000_fu_25956_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2169_fu_25973_p3() {
    tmp_2169_fu_25973_p3 = esl_concat<11,1>(tmp_1000_fu_25956_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_216_fu_21216_p2() {
    tmp_216_fu_21216_p2 = (!co76_cast_fu_21200_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co76_cast_fu_21200_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_2170_fu_26394_p1() {
    tmp_2170_fu_26394_p1 = k38_reg_10797.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2171_fu_26135_p1() {
    tmp_2171_fu_26135_p1 = i96_reg_10775.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2172_fu_26331_p1() {
    tmp_2172_fu_26331_p1 = grp_fu_26223_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2174_cast_fu_23609_p1() {
    tmp_2174_cast_fu_23609_p1 = esl_zext<32,10>(tmp_935_reg_43130.read());
}

void ShuffleNetV2::thread_tmp_2175_fu_26827_p1() {
    tmp_2175_fu_26827_p1 = co111_reg_10874.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2176_fu_26861_p4() {
    tmp_2176_fu_26861_p4 = co111_reg_10874.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2177_cast_fu_23573_p1() {
    tmp_2177_cast_fu_23573_p1 = esl_sext<32,12>(tmp_938_reg_43135.read());
}

void ShuffleNetV2::thread_tmp_2177_fu_26739_p1() {
    tmp_2177_fu_26739_p1 = k40_reg_10863.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2178_fu_26538_p1() {
    tmp_2178_fu_26538_p1 = i101_reg_10841.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2179_fu_26619_p2() {
    tmp_2179_fu_26619_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1013_reg_44088.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_217_fu_21425_p2() {
    tmp_217_fu_21425_p2 = (!p_shl52_cast_fu_21409_p1.read().is_01() || !p_shl53_cast_fu_21421_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl52_cast_fu_21409_p1.read()) - sc_biguint<7>(p_shl53_cast_fu_21421_p1.read()));
}

void ShuffleNetV2::thread_tmp_2180_fu_26670_p3() {
    tmp_2180_fu_26670_p3 = esl_concat<12,2>(tmp_1019_reg_44105.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2181_fu_27175_p1() {
    tmp_2181_fu_27175_p1 = k42_reg_10918.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2182_fu_26916_p1() {
    tmp_2182_fu_26916_p1 = i103_reg_10896.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2183_fu_27112_p1() {
    tmp_2183_fu_27112_p1 = grp_fu_27004_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2186_fu_27310_p3() {
    tmp_2186_fu_27310_p3 = esl_concat<10,3>(tmp_1037_fu_27305_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2187_fu_27322_p3() {
    tmp_2187_fu_27322_p3 = esl_concat<10,1>(tmp_1037_fu_27305_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2188_fu_27593_p1() {
    tmp_2188_fu_27593_p1 = co117_reg_10995.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2189_fu_27627_p4() {
    tmp_2189_fu_27627_p4 = co117_reg_10995.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_218_cast_cast_fu_20675_p1() {
    tmp_218_cast_cast_fu_20675_p1 = esl_zext<9,4>(tmp_2053_fu_20665_p4.read());
}

void ShuffleNetV2::thread_tmp_218_fu_21465_p2() {
    tmp_218_fu_21465_p2 = (!tmp_217_reg_42457.read().is_01() || !ci38_cast_fu_21445_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_217_reg_42457.read()) + sc_biguint<7>(ci38_cast_fu_21445_p1.read()));
}

void ShuffleNetV2::thread_tmp_2190_fu_27473_p3() {
    tmp_2190_fu_27473_p3 = esl_concat<10,3>(tmp_1039_fu_27468_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2191_fu_27485_p3() {
    tmp_2191_fu_27485_p3 = esl_concat<10,1>(tmp_1039_fu_27468_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2192_cast_fu_23951_p1() {
    tmp_2192_cast_fu_23951_p1 = esl_sext<18,17>(tmp_946_fu_23945_p2.read());
}

void ShuffleNetV2::thread_tmp_2192_fu_27508_p3() {
    tmp_2192_fu_27508_p3 = esl_concat<11,3>(tmp_1041_fu_27503_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2193_cast_fu_23960_p1() {
    tmp_2193_cast_fu_23960_p1 = esl_sext<32,18>(tmp_947_fu_23955_p2.read());
}

void ShuffleNetV2::thread_tmp_2193_fu_27520_p3() {
    tmp_2193_fu_27520_p3 = esl_concat<11,1>(tmp_1041_fu_27503_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2194_fu_27941_p1() {
    tmp_2194_fu_27941_p1 = k44_reg_11039.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2195_fu_27682_p1() {
    tmp_2195_fu_27682_p1 = i107_reg_11017.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2196_fu_27878_p1() {
    tmp_2196_fu_27878_p1 = grp_fu_27770_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2199_cast_fu_24026_p1() {
    tmp_2199_cast_fu_24026_p1 = esl_sext<32,8>(tmp_949_reg_43266.read());
}

void ShuffleNetV2::thread_tmp_2199_fu_28378_p1() {
    tmp_2199_fu_28378_p1 = co121_reg_11116.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_219_fu_21773_p2() {
    tmp_219_fu_21773_p2 = (!p_shl54_cast_fu_21757_p1.read().is_01() || !p_shl55_cast_fu_21769_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl54_cast_fu_21757_p1.read()) - sc_biguint<7>(p_shl55_cast_fu_21769_p1.read()));
}

void ShuffleNetV2::thread_tmp_2200_fu_28412_p4() {
    tmp_2200_fu_28412_p4 = co121_reg_11116.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2201_fu_28290_p1() {
    tmp_2201_fu_28290_p1 = k46_reg_11105.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2202_fu_28085_p1() {
    tmp_2202_fu_28085_p1 = i112_reg_11083.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2203_fu_28166_p2() {
    tmp_2203_fu_28166_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1054_reg_44573.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2204_fu_28221_p3() {
    tmp_2204_fu_28221_p3 = esl_concat<13,2>(tmp_1060_reg_44590.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2205_fu_28726_p1() {
    tmp_2205_fu_28726_p1 = k48_reg_11160.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2206_fu_28467_p1() {
    tmp_2206_fu_28467_p1 = i114_reg_11138.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2207_fu_28663_p1() {
    tmp_2207_fu_28663_p1 = grp_fu_28555_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_220_cast_cast_fu_20381_p1() {
    tmp_220_cast_cast_fu_20381_p1 = esl_sext<10,7>(tmp_210_fu_20376_p2.read());
}

void ShuffleNetV2::thread_tmp_220_fu_21783_p2() {
    tmp_220_fu_21783_p2 = (!tmp_219_fu_21773_p2.read().is_01() || !i66_cast1_reg_42534.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_219_fu_21773_p2.read()) + sc_biguint<7>(i66_cast1_reg_42534.read()));
}

void ShuffleNetV2::thread_tmp_2210_fu_28861_p3() {
    tmp_2210_fu_28861_p3 = esl_concat<10,3>(tmp_1078_fu_28856_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2211_fu_28873_p3() {
    tmp_2211_fu_28873_p3 = esl_concat<10,1>(tmp_1078_fu_28856_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2212_fu_29144_p1() {
    tmp_2212_fu_29144_p1 = co127_reg_11237.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2213_fu_29178_p4() {
    tmp_2213_fu_29178_p4 = co127_reg_11237.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2214_fu_29024_p3() {
    tmp_2214_fu_29024_p3 = esl_concat<10,3>(tmp_1080_fu_29019_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2215_fu_29036_p3() {
    tmp_2215_fu_29036_p3 = esl_concat<10,1>(tmp_1080_fu_29019_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2216_fu_29059_p3() {
    tmp_2216_fu_29059_p3 = esl_concat<11,3>(tmp_1082_fu_29054_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2217_fu_29071_p3() {
    tmp_2217_fu_29071_p3 = esl_concat<11,1>(tmp_1082_fu_29054_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2218_fu_29500_p1() {
    tmp_2218_fu_29500_p1 = k50_reg_11281.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2219_fu_29233_p1() {
    tmp_2219_fu_29233_p1 = i118_reg_11259.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_221_fu_21514_p2() {
    tmp_221_fu_21514_p2 = (!p_shl56_cast_fu_21498_p1.read().is_01() || !p_shl57_cast_fu_21510_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl56_cast_fu_21498_p1.read()) - sc_biguint<7>(p_shl57_cast_fu_21510_p1.read()));
}

void ShuffleNetV2::thread_tmp_2220_cast_fu_24275_p1() {
    tmp_2220_cast_fu_24275_p1 = esl_zext<32,15>(tmp_962_fu_24270_p2.read());
}

void ShuffleNetV2::thread_tmp_2220_fu_29437_p1() {
    tmp_2220_fu_29437_p1 = grp_fu_29321_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2221_cast_fu_24487_p1() {
    tmp_2221_cast_fu_24487_p1 = esl_zext<32,14>(tmp_963_reg_43404.read());
}

void ShuffleNetV2::thread_tmp_2222_cast_fu_24482_p1() {
    tmp_2222_cast_fu_24482_p1 = esl_zext<32,15>(tmp_964_fu_24477_p2.read());
}

void ShuffleNetV2::thread_tmp_2223_fu_29929_p1() {
    tmp_2223_fu_29929_p1 = co131_reg_11358.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2224_fu_29963_p4() {
    tmp_2224_fu_29963_p4 = co131_reg_11358.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2225_fu_29841_p1() {
    tmp_2225_fu_29841_p1 = k52_reg_11347.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2226_fu_29644_p1() {
    tmp_2226_fu_29644_p1 = i123_reg_11325.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2227_fu_29725_p2() {
    tmp_2227_fu_29725_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1097_reg_45058.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2228_fu_29772_p3() {
    tmp_2228_fu_29772_p3 = esl_concat<14,2>(tmp_1102_reg_45075.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2229_fu_30285_p1() {
    tmp_2229_fu_30285_p1 = k54_reg_11402.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_222_cast1_fu_21580_p1() {
    tmp_222_cast1_fu_21580_p1 = esl_sext<10,9>(tmp_222_reg_42493.read());
}

void ShuffleNetV2::thread_tmp_222_cast_fu_21013_p1() {
    tmp_222_cast_fu_21013_p1 = esl_sext<10,7>(tmp_211_fu_21007_p2.read());
}

void ShuffleNetV2::thread_tmp_222_fu_21524_p2() {
    tmp_222_fu_21524_p2 = (!tmp_238_cast_cast_fu_21520_p1.read().is_01() || !tmp_233_cast_cast_reg_42462.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_238_cast_cast_fu_21520_p1.read()) + sc_biguint<9>(tmp_233_cast_cast_reg_42462.read()));
}

void ShuffleNetV2::thread_tmp_2230_fu_30018_p1() {
    tmp_2230_fu_30018_p1 = i125_reg_11380.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2231_cast_fu_24721_p1() {
    tmp_2231_cast_fu_24721_p1 = esl_sext<18,17>(tmp_967_fu_24715_p2.read());
}

void ShuffleNetV2::thread_tmp_2231_fu_30222_p1() {
    tmp_2231_fu_30222_p1 = grp_fu_30106_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2232_cast_fu_24730_p1() {
    tmp_2232_cast_fu_24730_p1 = esl_sext<32,18>(tmp_968_fu_24725_p2.read());
}

void ShuffleNetV2::thread_tmp_2234_fu_30424_p3() {
    tmp_2234_fu_30424_p3 = esl_concat<10,3>(tmp_1122_fu_30419_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2235_fu_30436_p3() {
    tmp_2235_fu_30436_p3 = esl_concat<10,1>(tmp_1122_fu_30419_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2236_fu_30707_p1() {
    tmp_2236_fu_30707_p1 = co137_reg_11479.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2237_fu_30741_p4() {
    tmp_2237_fu_30741_p4 = co137_reg_11479.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2238_cast_fu_24796_p1() {
    tmp_2238_cast_fu_24796_p1 = esl_sext<32,8>(tmp_970_reg_43491.read());
}

void ShuffleNetV2::thread_tmp_2238_fu_30587_p3() {
    tmp_2238_fu_30587_p3 = esl_concat<10,3>(tmp_1124_fu_30582_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2239_fu_30599_p3() {
    tmp_2239_fu_30599_p3 = esl_concat<10,1>(tmp_1124_fu_30582_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_223_cast_fu_21047_p1() {
    tmp_223_cast_fu_21047_p1 = esl_sext<32,7>(tmp_212_reg_42330.read());
}

void ShuffleNetV2::thread_tmp_223_fu_21553_p2() {
    tmp_223_fu_21553_p2 = (!p_shl58_cast_fu_21537_p1.read().is_01() || !p_shl59_cast_fu_21549_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl58_cast_fu_21537_p1.read()) - sc_biguint<8>(p_shl59_cast_fu_21549_p1.read()));
}

void ShuffleNetV2::thread_tmp_2240_fu_30622_p3() {
    tmp_2240_fu_30622_p3 = esl_concat<11,3>(tmp_1126_fu_30617_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2241_fu_30634_p3() {
    tmp_2241_fu_30634_p3 = esl_concat<11,1>(tmp_1126_fu_30617_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2242_fu_31063_p1() {
    tmp_2242_fu_31063_p1 = k56_reg_11523.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2243_fu_30796_p1() {
    tmp_2243_fu_30796_p1 = i129_reg_11501.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2244_fu_31000_p1() {
    tmp_2244_fu_31000_p1 = grp_fu_30884_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2247_fu_31496_p1() {
    tmp_2247_fu_31496_p1 = co141_reg_11600.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2248_fu_31530_p4() {
    tmp_2248_fu_31530_p4 = co141_reg_11600.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_2249_fu_31404_p1() {
    tmp_2249_fu_31404_p1 = k58_reg_11589.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_224_fu_22206_p2() {
    tmp_224_fu_22206_p2 = (!p_shl62_cast_fu_22190_p1.read().is_01() || !p_shl63_cast_fu_22202_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl62_cast_fu_22190_p1.read()) - sc_biguint<7>(p_shl63_cast_fu_22202_p1.read()));
}

void ShuffleNetV2::thread_tmp_2250_cast_fu_25156_p1() {
    tmp_2250_cast_fu_25156_p1 = esl_zext<32,10>(tmp_975_reg_43615.read());
}

void ShuffleNetV2::thread_tmp_2250_fu_31211_p1() {
    tmp_2250_fu_31211_p1 = i134_reg_11567.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2251_fu_31292_p2() {
    tmp_2251_fu_31292_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1141_reg_45543.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2252_fu_31335_p3() {
    tmp_2252_fu_31335_p3 = esl_concat<13,2>(tmp_1146_reg_45560.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2253_cast_fu_25120_p1() {
    tmp_2253_cast_fu_25120_p1 = esl_sext<32,12>(tmp_978_reg_43620.read());
}

void ShuffleNetV2::thread_tmp_2253_fu_31852_p1() {
    tmp_2253_fu_31852_p1 = k60_reg_11644.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_2254_fu_31585_p1() {
    tmp_2254_fu_31585_p1 = i136_reg_11622.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2255_fu_31789_p1() {
    tmp_2255_fu_31789_p1 = grp_fu_31681_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_2258_fu_32063_p1() {
    tmp_2258_fu_32063_p1 = co145_reg_11688.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2259_fu_32079_p2() {
    tmp_2259_fu_32079_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co145_reg_11688.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_225_cast_cast_fu_20704_p1() {
    tmp_225_cast_cast_fu_20704_p1 = esl_sext<8,7>(tmp_208_fu_20699_p2.read());
}

void ShuffleNetV2::thread_tmp_225_fu_22114_p2() {
    tmp_225_fu_22114_p2 = (!p_shl60_cast_fu_22098_p1.read().is_01() || !p_shl61_cast_fu_22110_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl60_cast_fu_22098_p1.read()) - sc_biguint<7>(p_shl61_cast_fu_22110_p1.read()));
}

void ShuffleNetV2::thread_tmp_2260_fu_32095_p4() {
    tmp_2260_fu_32095_p4 = co145_reg_11688.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2261_fu_31991_p3() {
    tmp_2261_fu_31991_p3 = esl_concat<10,3>(tmp_1158_fu_31986_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2262_fu_32003_p3() {
    tmp_2262_fu_32003_p3 = esl_concat<10,1>(tmp_1158_fu_31986_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2263_fu_32387_p1() {
    tmp_2263_fu_32387_p1 = k62_reg_11732.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2264_fu_32150_p1() {
    tmp_2264_fu_32150_p1 = i140_reg_11710.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2265_fu_32170_p2() {
    tmp_2265_fu_32170_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i140_reg_11710.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2266_fu_32336_p1() {
    tmp_2266_fu_32336_p1 = grp_fu_32228_p2.read().range(5-1, 0);
}

void ShuffleNetV2::thread_tmp_2268_cast_fu_25494_p1() {
    tmp_2268_cast_fu_25494_p1 = esl_sext<18,17>(tmp_986_fu_25488_p2.read());
}

void ShuffleNetV2::thread_tmp_2269_cast_fu_25503_p1() {
    tmp_2269_cast_fu_25503_p1 = esl_sext<32,18>(tmp_987_fu_25498_p2.read());
}

void ShuffleNetV2::thread_tmp_2269_fu_32820_p1() {
    tmp_2269_fu_32820_p1 = co149_reg_11809.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_226_cast_cast_fu_20754_p1() {
    tmp_226_cast_cast_fu_20754_p1 = esl_sext<9,7>(tmp_213_fu_20748_p2.read());
}

void ShuffleNetV2::thread_tmp_226_fu_22124_p2() {
    tmp_226_fu_22124_p2 = (!tmp_225_fu_22114_p2.read().is_01() || !i69_cast_reg_42667.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_225_fu_22114_p2.read()) + sc_biguint<7>(i69_cast_reg_42667.read()));
}

void ShuffleNetV2::thread_tmp_2270_fu_32836_p2() {
    tmp_2270_fu_32836_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co149_reg_11809.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2271_fu_32852_p4() {
    tmp_2271_fu_32852_p4 = co149_reg_11809.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2272_fu_32728_p1() {
    tmp_2272_fu_32728_p1 = k64_reg_11798.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2273_fu_32535_p1() {
    tmp_2273_fu_32535_p1 = i145_reg_11776.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2274_fu_32616_p2() {
    tmp_2274_fu_32616_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1169_reg_45974.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2275_cast_fu_25569_p1() {
    tmp_2275_cast_fu_25569_p1 = esl_sext<32,8>(tmp_989_reg_43751.read());
}

void ShuffleNetV2::thread_tmp_2275_fu_32659_p3() {
    tmp_2275_fu_32659_p3 = esl_concat<13,2>(tmp_1174_reg_45991.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2276_fu_33144_p1() {
    tmp_2276_fu_33144_p1 = k66_reg_11853.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2277_fu_32907_p1() {
    tmp_2277_fu_32907_p1 = i147_reg_11831.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2278_fu_32927_p2() {
    tmp_2278_fu_32927_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i147_reg_11831.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2279_fu_33093_p1() {
    tmp_2279_fu_33093_p1 = grp_fu_32985_p2.read().range(5-1, 0);
}

void ShuffleNetV2::thread_tmp_227_fu_22246_p2() {
    tmp_227_fu_22246_p2 = (!tmp_224_reg_42717.read().is_01() || !ci40_cast_fu_22226_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_224_reg_42717.read()) + sc_biguint<7>(ci40_cast_fu_22226_p1.read()));
}

void ShuffleNetV2::thread_tmp_2282_fu_33577_p1() {
    tmp_2282_fu_33577_p1 = co153_reg_11930.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2283_fu_33593_p2() {
    tmp_2283_fu_33593_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co153_reg_11930.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2284_fu_33609_p4() {
    tmp_2284_fu_33609_p4 = co153_reg_11930.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2285_fu_33489_p1() {
    tmp_2285_fu_33489_p1 = k68_reg_11919.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2286_fu_33296_p1() {
    tmp_2286_fu_33296_p1 = i152_reg_11897.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2287_fu_33377_p2() {
    tmp_2287_fu_33377_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1185_reg_46234.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2288_fu_33420_p3() {
    tmp_2288_fu_33420_p3 = esl_concat<13,2>(tmp_1190_reg_46251.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2289_fu_33901_p1() {
    tmp_2289_fu_33901_p1 = k70_reg_11974.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_228_cast_fu_20793_p1() {
    tmp_228_cast_fu_20793_p1 = esl_sext<10,8>(tmp_215_fu_20787_p2.read());
}

void ShuffleNetV2::thread_tmp_228_fu_21917_p2() {
    tmp_228_fu_21917_p2 = (!p_shl64_cast_fu_21901_p1.read().is_01() || !p_shl65_cast_fu_21913_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl64_cast_fu_21901_p1.read()) - sc_biguint<7>(p_shl65_cast_fu_21913_p1.read()));
}

void ShuffleNetV2::thread_tmp_2290_fu_33664_p1() {
    tmp_2290_fu_33664_p1 = i154_reg_11952.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2291_fu_33684_p2() {
    tmp_2291_fu_33684_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i154_reg_11952.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2292_fu_33850_p1() {
    tmp_2292_fu_33850_p1 = grp_fu_33742_p2.read().range(5-1, 0);
}

void ShuffleNetV2::thread_tmp_2295_fu_34200_p1() {
    tmp_2295_fu_34200_p1 = co157_reg_12018.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2296_cast_fu_25814_p1() {
    tmp_2296_cast_fu_25814_p1 = esl_zext<32,15>(tmp_1002_fu_25809_p2.read());
}

void ShuffleNetV2::thread_tmp_2296_fu_34216_p2() {
    tmp_2296_fu_34216_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co157_reg_12018.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2297_cast_fu_26026_p1() {
    tmp_2297_cast_fu_26026_p1 = esl_zext<32,14>(tmp_1003_reg_43889.read());
}

void ShuffleNetV2::thread_tmp_2297_fu_34232_p4() {
    tmp_2297_fu_34232_p4 = co157_reg_12018.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2298_cast_fu_26021_p1() {
    tmp_2298_cast_fu_26021_p1 = esl_zext<32,15>(tmp_1004_fu_26016_p2.read());
}

void ShuffleNetV2::thread_tmp_2298_fu_34088_p1() {
    tmp_2298_fu_34088_p1 = tmp_1205_fu_34083_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_2299_fu_34119_p1() {
    tmp_2299_fu_34119_p1 = tmp_1207_fu_34114_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_229_fu_21927_p2() {
    tmp_229_fu_21927_p2 = (!co80_cast1_reg_42576.read().is_01() || !tmp_228_fu_21917_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co80_cast1_reg_42576.read()) + sc_biguint<7>(tmp_228_fu_21917_p2.read()));
}

void ShuffleNetV2::thread_tmp_2300_fu_34524_p1() {
    tmp_2300_fu_34524_p1 = k72_reg_12062.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2301_fu_34287_p1() {
    tmp_2301_fu_34287_p1 = i158_reg_12040.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2302_fu_34307_p2() {
    tmp_2302_fu_34307_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i158_reg_12040.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2303_fu_34473_p1() {
    tmp_2303_fu_34473_p1 = grp_fu_34365_p2.read().range(5-1, 0);
}

void ShuffleNetV2::thread_tmp_2306_fu_34949_p1() {
    tmp_2306_fu_34949_p1 = co161_reg_12139.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2307_cast_fu_26260_p1() {
    tmp_2307_cast_fu_26260_p1 = esl_sext<18,17>(tmp_1007_fu_26254_p2.read());
}

void ShuffleNetV2::thread_tmp_2307_fu_34965_p2() {
    tmp_2307_fu_34965_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co161_reg_12139.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2308_cast_fu_26269_p1() {
    tmp_2308_cast_fu_26269_p1 = esl_sext<32,18>(tmp_1008_fu_26264_p2.read());
}

void ShuffleNetV2::thread_tmp_2308_fu_34981_p4() {
    tmp_2308_fu_34981_p4 = co161_reg_12139.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2309_fu_34861_p1() {
    tmp_2309_fu_34861_p1 = k74_reg_12128.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_230_fu_22554_p2() {
    tmp_230_fu_22554_p2 = (!p_shl66_cast_fu_22538_p1.read().is_01() || !p_shl67_cast_fu_22550_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl66_cast_fu_22538_p1.read()) - sc_biguint<7>(p_shl67_cast_fu_22550_p1.read()));
}

void ShuffleNetV2::thread_tmp_2310_fu_34668_p1() {
    tmp_2310_fu_34668_p1 = i163_reg_12106.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2311_fu_34749_p2() {
    tmp_2311_fu_34749_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1219_reg_46675.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2312_fu_34792_p3() {
    tmp_2312_fu_34792_p3 = esl_concat<13,2>(tmp_1224_reg_46692.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2313_fu_35281_p1() {
    tmp_2313_fu_35281_p1 = k76_reg_12183.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2314_cast_fu_26335_p1() {
    tmp_2314_cast_fu_26335_p1 = esl_sext<32,8>(tmp_1010_reg_43976.read());
}

void ShuffleNetV2::thread_tmp_2314_fu_35036_p1() {
    tmp_2314_fu_35036_p1 = i165_reg_12161.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2315_fu_35056_p2() {
    tmp_2315_fu_35056_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i165_reg_12161.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2316_fu_35230_p1() {
    tmp_2316_fu_35230_p1 = grp_fu_35114_p2.read().range(5-1, 0);
}

void ShuffleNetV2::thread_tmp_2319_fu_35420_p1() {
    tmp_2319_fu_35420_p1 = tmp_1244_fu_35415_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_231_fu_22564_p2() {
    tmp_231_fu_22564_p2 = (!tmp_230_fu_22554_p2.read().is_01() || !i73_cast_reg_42794.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_230_fu_22554_p2.read()) + sc_biguint<7>(i73_cast_reg_42794.read()));
}

void ShuffleNetV2::thread_tmp_2320_fu_35432_p3() {
    tmp_2320_fu_35432_p3 = esl_concat<12,1>(tmp_1244_fu_35415_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2321_fu_35703_p1() {
    tmp_2321_fu_35703_p1 = co167_reg_12260.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2322_fu_35719_p2() {
    tmp_2322_fu_35719_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co167_reg_12260.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2323_fu_35735_p4() {
    tmp_2323_fu_35735_p4 = co167_reg_12260.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2324_fu_35591_p1() {
    tmp_2324_fu_35591_p1 = tmp_1246_fu_35586_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_2325_fu_35622_p1() {
    tmp_2325_fu_35622_p1 = tmp_1248_fu_35617_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2326_cast_fu_26703_p1() {
    tmp_2326_cast_fu_26703_p1 = esl_zext<32,10>(tmp_1015_reg_44100.read());
}

void ShuffleNetV2::thread_tmp_2326_fu_36027_p1() {
    tmp_2326_fu_36027_p1 = k78_reg_12304.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2327_fu_35790_p1() {
    tmp_2327_fu_35790_p1 = i169_reg_12282.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2328_fu_35810_p2() {
    tmp_2328_fu_35810_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i169_reg_12282.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2329_fu_35976_p1() {
    tmp_2329_fu_35976_p1 = grp_fu_35868_p2.read().range(5-1, 0);
}

void ShuffleNetV2::thread_tmp_232_fu_22295_p2() {
    tmp_232_fu_22295_p2 = (!p_shl68_cast_fu_22279_p1.read().is_01() || !p_shl69_cast_fu_22291_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl68_cast_fu_22279_p1.read()) - sc_biguint<7>(p_shl69_cast_fu_22291_p1.read()));
}

void ShuffleNetV2::thread_tmp_2330_cast_fu_26667_p1() {
    tmp_2330_cast_fu_26667_p1 = esl_sext<32,12>(tmp_1019_reg_44105.read());
}

void ShuffleNetV2::thread_tmp_2332_fu_36464_p1() {
    tmp_2332_fu_36464_p1 = co171_reg_12381.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2333_fu_36480_p2() {
    tmp_2333_fu_36480_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co171_reg_12381.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2334_fu_36496_p4() {
    tmp_2334_fu_36496_p4 = co171_reg_12381.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2335_fu_36376_p1() {
    tmp_2335_fu_36376_p1 = k80_reg_12370.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2336_fu_36171_p1() {
    tmp_2336_fu_36171_p1 = i174_reg_12348.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2337_fu_36252_p2() {
    tmp_2337_fu_36252_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1261_reg_47160.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2338_fu_36307_p3() {
    tmp_2338_fu_36307_p3 = esl_concat<14,2>(tmp_1267_reg_47177.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2339_fu_36788_p1() {
    tmp_2339_fu_36788_p1 = k82_reg_12425.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_233_cast_cast_fu_21441_p1() {
    tmp_233_cast_cast_fu_21441_p1 = esl_zext<9,4>(tmp_2074_fu_21431_p4.read());
}

void ShuffleNetV2::thread_tmp_233_cast_fu_22361_p1() {
    tmp_233_cast_fu_22361_p1 = esl_sext<10,9>(tmp_233_reg_42753.read());
}

void ShuffleNetV2::thread_tmp_233_fu_22305_p2() {
    tmp_233_fu_22305_p2 = (!tmp_255_cast_cast_fu_22301_p1.read().is_01() || !tmp_247_cast_cast_reg_42722.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_255_cast_cast_fu_22301_p1.read()) + sc_biguint<9>(tmp_247_cast_cast_reg_42722.read()));
}

void ShuffleNetV2::thread_tmp_2340_fu_36551_p1() {
    tmp_2340_fu_36551_p1 = i176_reg_12403.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2341_fu_36571_p2() {
    tmp_2341_fu_36571_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i176_reg_12403.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2342_fu_36737_p1() {
    tmp_2342_fu_36737_p1 = grp_fu_36629_p2.read().range(5-1, 0);
}

void ShuffleNetV2::thread_tmp_2345_cast_fu_27041_p1() {
    tmp_2345_cast_fu_27041_p1 = esl_sext<18,17>(tmp_1027_fu_27035_p2.read());
}

void ShuffleNetV2::thread_tmp_2345_fu_36927_p1() {
    tmp_2345_fu_36927_p1 = tmp_1285_fu_36922_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2346_cast_fu_27050_p1() {
    tmp_2346_cast_fu_27050_p1 = esl_sext<32,18>(tmp_1028_fu_27045_p2.read());
}

void ShuffleNetV2::thread_tmp_2346_fu_36939_p3() {
    tmp_2346_fu_36939_p3 = esl_concat<12,1>(tmp_1285_fu_36922_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2347_fu_37210_p1() {
    tmp_2347_fu_37210_p1 = co177_reg_12502.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2348_fu_37226_p2() {
    tmp_2348_fu_37226_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co177_reg_12502.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2349_fu_37242_p4() {
    tmp_2349_fu_37242_p4 = co177_reg_12502.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_234_cast_fu_21779_p1() {
    tmp_234_cast_fu_21779_p1 = esl_sext<10,7>(tmp_219_fu_21773_p2.read());
}

void ShuffleNetV2::thread_tmp_234_fu_22334_p2() {
    tmp_234_fu_22334_p2 = (!p_shl70_cast_fu_22318_p1.read().is_01() || !p_shl71_cast_fu_22330_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl70_cast_fu_22318_p1.read()) - sc_biguint<8>(p_shl71_cast_fu_22330_p1.read()));
}

void ShuffleNetV2::thread_tmp_2350_fu_37098_p1() {
    tmp_2350_fu_37098_p1 = tmp_1287_fu_37093_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_2351_fu_37129_p1() {
    tmp_2351_fu_37129_p1 = tmp_1289_fu_37124_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2352_cast_fu_27116_p1() {
    tmp_2352_cast_fu_27116_p1 = esl_sext<32,8>(tmp_1030_reg_44236.read());
}

void ShuffleNetV2::thread_tmp_2352_fu_37534_p1() {
    tmp_2352_fu_37534_p1 = k84_reg_12546.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2353_fu_37297_p1() {
    tmp_2353_fu_37297_p1 = i180_reg_12524.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2354_fu_37317_p2() {
    tmp_2354_fu_37317_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i180_reg_12524.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2355_fu_37483_p1() {
    tmp_2355_fu_37483_p1 = grp_fu_37375_p2.read().range(5-1, 0);
}

void ShuffleNetV2::thread_tmp_2358_fu_37963_p1() {
    tmp_2358_fu_37963_p1 = co181_reg_12623.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2359_fu_37979_p2() {
    tmp_2359_fu_37979_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co181_reg_12623.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_235_cast_fu_21813_p1() {
    tmp_235_cast_fu_21813_p1 = esl_sext<32,7>(tmp_220_reg_42555.read());
}

void ShuffleNetV2::thread_tmp_235_fu_22767_p2() {
    tmp_235_fu_22767_p2 = (!co86_cast_fu_22751_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co86_cast_fu_22751_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_2360_fu_37995_p4() {
    tmp_2360_fu_37995_p4 = co181_reg_12623.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_2361_fu_37875_p1() {
    tmp_2361_fu_37875_p1 = k86_reg_12612.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2362_fu_37678_p1() {
    tmp_2362_fu_37678_p1 = i185_reg_12590.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2363_fu_37759_p2() {
    tmp_2363_fu_37759_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1302_reg_47645.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_2364_fu_37806_p3() {
    tmp_2364_fu_37806_p3 = esl_concat<15,2>(tmp_1307_reg_47662.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2365_fu_38287_p1() {
    tmp_2365_fu_38287_p1 = k88_reg_12667.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2366_fu_38050_p1() {
    tmp_2366_fu_38050_p1 = i187_reg_12645.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2367_fu_38070_p2() {
    tmp_2367_fu_38070_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i187_reg_12645.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2368_fu_38236_p1() {
    tmp_2368_fu_38236_p1 = grp_fu_38128_p2.read().range(5-1, 0);
}

void ShuffleNetV2::thread_tmp_236_fu_22976_p2() {
    tmp_236_fu_22976_p2 = (!p_shl72_cast_fu_22960_p1.read().is_01() || !p_shl73_cast_fu_22972_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl72_cast_fu_22960_p1.read()) - sc_biguint<7>(p_shl73_cast_fu_22972_p1.read()));
}

void ShuffleNetV2::thread_tmp_2371_fu_38426_p1() {
    tmp_2371_fu_38426_p1 = tmp_1323_fu_38421_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2372_fu_38438_p3() {
    tmp_2372_fu_38438_p3 = esl_concat<12,1>(tmp_1323_fu_38421_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2373_cast_fu_27361_p1() {
    tmp_2373_cast_fu_27361_p1 = esl_zext<32,15>(tmp_1043_fu_27356_p2.read());
}

void ShuffleNetV2::thread_tmp_2373_fu_38578_p1() {
    tmp_2373_fu_38578_p1 = tmp_1326_fu_38573_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2374_cast_fu_27573_p1() {
    tmp_2374_cast_fu_27573_p1 = esl_zext<32,14>(tmp_1044_reg_44374.read());
}

void ShuffleNetV2::thread_tmp_2375_cast_fu_27568_p1() {
    tmp_2375_cast_fu_27568_p1 = esl_zext<32,15>(tmp_1045_fu_27563_p2.read());
}

void ShuffleNetV2::thread_tmp_237_cast_cast_fu_21470_p1() {
    tmp_237_cast_cast_fu_21470_p1 = esl_sext<8,7>(tmp_218_fu_21465_p2.read());
}

void ShuffleNetV2::thread_tmp_237_fu_23016_p2() {
    tmp_237_fu_23016_p2 = (!tmp_236_reg_42942.read().is_01() || !ci42_cast_fu_22996_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_236_reg_42942.read()) + sc_biguint<7>(ci42_cast_fu_22996_p1.read()));
}

void ShuffleNetV2::thread_tmp_2384_cast_fu_27807_p1() {
    tmp_2384_cast_fu_27807_p1 = esl_sext<18,17>(tmp_1048_fu_27801_p2.read());
}

void ShuffleNetV2::thread_tmp_2385_cast_fu_27816_p1() {
    tmp_2385_cast_fu_27816_p1 = esl_sext<32,18>(tmp_1049_fu_27811_p2.read());
}

void ShuffleNetV2::thread_tmp_238_cast_cast_fu_21520_p1() {
    tmp_238_cast_cast_fu_21520_p1 = esl_sext<9,7>(tmp_221_fu_21514_p2.read());
}

void ShuffleNetV2::thread_tmp_238_fu_23332_p2() {
    tmp_238_fu_23332_p2 = (!p_shl74_cast_fu_23316_p1.read().is_01() || !p_shl75_cast_fu_23328_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl74_cast_fu_23316_p1.read()) - sc_biguint<7>(p_shl75_cast_fu_23328_p1.read()));
}

void ShuffleNetV2::thread_tmp_2391_cast_fu_27882_p1() {
    tmp_2391_cast_fu_27882_p1 = esl_sext<32,8>(tmp_1051_reg_44461.read());
}

void ShuffleNetV2::thread_tmp_239_fu_23342_p2() {
    tmp_239_fu_23342_p2 = (!tmp_238_fu_23332_p2.read().is_01() || !i78_cast_reg_43019.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_238_fu_23332_p2.read()) + sc_biguint<7>(i78_cast_reg_43019.read()));
}

void ShuffleNetV2::thread_tmp_2403_cast_fu_28254_p1() {
    tmp_2403_cast_fu_28254_p1 = esl_zext<32,10>(tmp_1056_reg_44585.read());
}

void ShuffleNetV2::thread_tmp_2406_cast_fu_28209_p1() {
    tmp_2406_cast_fu_28209_p1 = esl_sext<13,12>(tmp_1059_fu_28203_p2.read());
}

void ShuffleNetV2::thread_tmp_2407_cast_fu_28218_p1() {
    tmp_2407_cast_fu_28218_p1 = esl_sext<32,13>(tmp_1060_reg_44590.read());
}

void ShuffleNetV2::thread_tmp_240_cast_fu_21559_p1() {
    tmp_240_cast_fu_21559_p1 = esl_sext<10,8>(tmp_223_fu_21553_p2.read());
}

void ShuffleNetV2::thread_tmp_240_fu_23065_p2() {
    tmp_240_fu_23065_p2 = (!p_shl76_cast_fu_23049_p1.read().is_01() || !p_shl77_cast_fu_23061_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl76_cast_fu_23049_p1.read()) - sc_biguint<7>(p_shl77_cast_fu_23061_p1.read()));
}

void ShuffleNetV2::thread_tmp_241_cast_fu_23131_p1() {
    tmp_241_cast_fu_23131_p1 = esl_sext<10,9>(tmp_241_reg_42978.read());
}

void ShuffleNetV2::thread_tmp_241_fu_23075_p2() {
    tmp_241_fu_23075_p2 = (!tmp_262_cast_cast_reg_42947.read().is_01() || !tmp_267_cast_cast_fu_23071_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_262_cast_cast_reg_42947.read()) + sc_bigint<9>(tmp_267_cast_cast_fu_23071_p1.read()));
}

void ShuffleNetV2::thread_tmp_2422_cast_fu_28592_p1() {
    tmp_2422_cast_fu_28592_p1 = esl_sext<18,17>(tmp_1068_fu_28586_p2.read());
}

void ShuffleNetV2::thread_tmp_2423_cast_fu_28601_p1() {
    tmp_2423_cast_fu_28601_p1 = esl_sext<32,18>(tmp_1069_fu_28596_p2.read());
}

void ShuffleNetV2::thread_tmp_2429_cast_fu_28667_p1() {
    tmp_2429_cast_fu_28667_p1 = esl_sext<32,8>(tmp_1071_reg_44721.read());
}

void ShuffleNetV2::thread_tmp_242_cast_cast_fu_22120_p1() {
    tmp_242_cast_cast_fu_22120_p1 = esl_sext<9,7>(tmp_225_fu_22114_p2.read());
}

void ShuffleNetV2::thread_tmp_242_fu_23104_p2() {
    tmp_242_fu_23104_p2 = (!p_shl78_cast_fu_23088_p1.read().is_01() || !p_shl79_cast_fu_23100_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl78_cast_fu_23088_p1.read()) - sc_biguint<8>(p_shl79_cast_fu_23100_p1.read()));
}

void ShuffleNetV2::thread_tmp_243_cast_fu_22158_p1() {
    tmp_243_cast_fu_22158_p1 = esl_sext<32,7>(tmp_226_reg_42688.read());
}

void ShuffleNetV2::thread_tmp_243_fu_23765_p2() {
    tmp_243_fu_23765_p2 = (!p_shl82_cast_fu_23749_p1.read().is_01() || !p_shl83_cast_fu_23761_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl82_cast_fu_23749_p1.read()) - sc_biguint<7>(p_shl83_cast_fu_23761_p1.read()));
}

void ShuffleNetV2::thread_tmp_244_fu_23673_p2() {
    tmp_244_fu_23673_p2 = (!p_shl80_cast_fu_23657_p1.read().is_01() || !p_shl81_cast_fu_23669_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl80_cast_fu_23657_p1.read()) - sc_biguint<7>(p_shl81_cast_fu_23669_p1.read()));
}

void ShuffleNetV2::thread_tmp_2450_cast_fu_28912_p1() {
    tmp_2450_cast_fu_28912_p1 = esl_zext<32,15>(tmp_1084_fu_28907_p2.read());
}

void ShuffleNetV2::thread_tmp_2451_cast_fu_29124_p1() {
    tmp_2451_cast_fu_29124_p1 = esl_zext<32,14>(tmp_1085_reg_44859.read());
}

void ShuffleNetV2::thread_tmp_2452_cast_fu_29119_p1() {
    tmp_2452_cast_fu_29119_p1 = esl_zext<32,15>(tmp_1086_fu_29114_p2.read());
}

void ShuffleNetV2::thread_tmp_245_fu_23683_p2() {
    tmp_245_fu_23683_p2 = (!tmp_244_fu_23673_p2.read().is_01() || !i81_cast_reg_43152.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_244_fu_23673_p2.read()) + sc_biguint<7>(i81_cast_reg_43152.read()));
}

void ShuffleNetV2::thread_tmp_2463_cast_fu_29366_p1() {
    tmp_2463_cast_fu_29366_p1 = esl_sext<18,17>(tmp_1091_fu_29360_p2.read());
}

void ShuffleNetV2::thread_tmp_2464_cast_fu_29375_p1() {
    tmp_2464_cast_fu_29375_p1 = esl_sext<32,18>(tmp_1092_fu_29370_p2.read());
}

void ShuffleNetV2::thread_tmp_246_fu_23805_p2() {
    tmp_246_fu_23805_p2 = (!tmp_243_reg_43202.read().is_01() || !ci44_cast_fu_23785_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_243_reg_43202.read()) + sc_biguint<7>(ci44_cast_fu_23785_p1.read()));
}

void ShuffleNetV2::thread_tmp_2470_cast_fu_29441_p1() {
    tmp_2470_cast_fu_29441_p1 = esl_sext<32,8>(tmp_1094_reg_44946.read());
}

void ShuffleNetV2::thread_tmp_247_cast_cast_fu_22222_p1() {
    tmp_247_cast_cast_fu_22222_p1 = esl_zext<9,4>(tmp_2094_fu_22212_p4.read());
}

void ShuffleNetV2::thread_tmp_247_fu_23480_p2() {
    tmp_247_fu_23480_p2 = (!p_shl84_cast_fu_23464_p1.read().is_01() || !p_shl85_cast_fu_23476_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl84_cast_fu_23464_p1.read()) - sc_biguint<7>(p_shl85_cast_fu_23476_p1.read()));
}

void ShuffleNetV2::thread_tmp_2482_cast_fu_29805_p1() {
    tmp_2482_cast_fu_29805_p1 = esl_zext<32,10>(tmp_1099_reg_45070.read());
}

void ShuffleNetV2::thread_tmp_2484_cast_fu_29760_p1() {
    tmp_2484_cast_fu_29760_p1 = esl_sext<14,13>(tmp_1101_fu_29754_p2.read());
}

void ShuffleNetV2::thread_tmp_2485_cast_fu_29769_p1() {
    tmp_2485_cast_fu_29769_p1 = esl_sext<32,14>(tmp_1102_reg_45075.read());
}

void ShuffleNetV2::thread_tmp_248_cast_fu_21923_p1() {
    tmp_248_cast_fu_21923_p1 = esl_sext<9,7>(tmp_228_fu_21917_p2.read());
}

void ShuffleNetV2::thread_tmp_248_fu_23490_p2() {
    tmp_248_fu_23490_p2 = (!co90_cast1_reg_43061.read().is_01() || !tmp_247_fu_23480_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co90_cast1_reg_43061.read()) + sc_biguint<7>(tmp_247_fu_23480_p2.read()));
}

void ShuffleNetV2::thread_tmp_249_cast_cast_fu_21932_p1() {
    tmp_249_cast_cast_fu_21932_p1 = esl_sext<10,7>(tmp_229_fu_21927_p2.read());
}

void ShuffleNetV2::thread_tmp_249_fu_24113_p2() {
    tmp_249_fu_24113_p2 = (!p_shl86_cast_fu_24097_p1.read().is_01() || !p_shl87_cast_fu_24109_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl86_cast_fu_24097_p1.read()) - sc_biguint<7>(p_shl87_cast_fu_24109_p1.read()));
}

void ShuffleNetV2::thread_tmp_2502_cast_fu_30151_p1() {
    tmp_2502_cast_fu_30151_p1 = esl_sext<18,17>(tmp_1112_fu_30145_p2.read());
}

void ShuffleNetV2::thread_tmp_2503_cast_fu_30160_p1() {
    tmp_2503_cast_fu_30160_p1 = esl_sext<32,18>(tmp_1113_fu_30155_p2.read());
}

void ShuffleNetV2::thread_tmp_2509_cast_fu_30226_p1() {
    tmp_2509_cast_fu_30226_p1 = esl_sext<32,8>(tmp_1115_reg_45206.read());
}

void ShuffleNetV2::thread_tmp_250_fu_24119_p2() {
    tmp_250_fu_24119_p2 = (!tmp_249_fu_24113_p2.read().is_01() || !i85_cast1_reg_43279.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_249_fu_24113_p2.read()) + sc_biguint<7>(i85_cast1_reg_43279.read()));
}

void ShuffleNetV2::thread_tmp_251_cast_cast_fu_22560_p1() {
    tmp_251_cast_cast_fu_22560_p1 = esl_sext<9,7>(tmp_230_fu_22554_p2.read());
}

void ShuffleNetV2::thread_tmp_251_fu_23854_p2() {
    tmp_251_fu_23854_p2 = (!p_shl88_cast_fu_23838_p1.read().is_01() || !p_shl89_cast_fu_23850_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl88_cast_fu_23838_p1.read()) - sc_biguint<7>(p_shl89_cast_fu_23850_p1.read()));
}

void ShuffleNetV2::thread_tmp_252_cast1_fu_23920_p1() {
    tmp_252_cast1_fu_23920_p1 = esl_sext<10,9>(tmp_252_reg_43238.read());
}

void ShuffleNetV2::thread_tmp_252_cast_fu_22598_p1() {
    tmp_252_cast_fu_22598_p1 = esl_sext<32,7>(tmp_231_reg_42815.read());
}

void ShuffleNetV2::thread_tmp_252_fu_23864_p2() {
    tmp_252_fu_23864_p2 = (!tmp_284_cast_cast_fu_23860_p1.read().is_01() || !tmp_276_cast_cast_reg_43207.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_284_cast_cast_fu_23860_p1.read()) + sc_biguint<9>(tmp_276_cast_cast_reg_43207.read()));
}

void ShuffleNetV2::thread_tmp_2530_cast_fu_30475_p1() {
    tmp_2530_cast_fu_30475_p1 = esl_zext<32,15>(tmp_1128_fu_30470_p2.read());
}

void ShuffleNetV2::thread_tmp_2531_cast_fu_30687_p1() {
    tmp_2531_cast_fu_30687_p1 = esl_zext<32,14>(tmp_1129_reg_45344.read());
}

void ShuffleNetV2::thread_tmp_2532_cast_fu_30682_p1() {
    tmp_2532_cast_fu_30682_p1 = esl_zext<32,15>(tmp_1130_fu_30677_p2.read());
}

void ShuffleNetV2::thread_tmp_253_fu_23893_p2() {
    tmp_253_fu_23893_p2 = (!p_shl90_cast_fu_23877_p1.read().is_01() || !p_shl91_cast_fu_23889_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl90_cast_fu_23877_p1.read()) - sc_biguint<8>(p_shl91_cast_fu_23889_p1.read()));
}

void ShuffleNetV2::thread_tmp_2543_cast_fu_30929_p1() {
    tmp_2543_cast_fu_30929_p1 = esl_sext<18,17>(tmp_1135_fu_30923_p2.read());
}

void ShuffleNetV2::thread_tmp_2544_cast_fu_30938_p1() {
    tmp_2544_cast_fu_30938_p1 = esl_sext<32,18>(tmp_1136_fu_30933_p2.read());
}

void ShuffleNetV2::thread_tmp_254_cast_cast_fu_22251_p1() {
    tmp_254_cast_cast_fu_22251_p1 = esl_sext<8,7>(tmp_227_fu_22246_p2.read());
}

void ShuffleNetV2::thread_tmp_254_fu_24326_p2() {
    tmp_254_fu_24326_p2 = (!co96_cast_fu_24310_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co96_cast_fu_24310_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_2550_cast_fu_31004_p1() {
    tmp_2550_cast_fu_31004_p1 = esl_sext<32,8>(tmp_1138_reg_45431.read());
}

void ShuffleNetV2::thread_tmp_255_cast_cast_fu_22301_p1() {
    tmp_255_cast_cast_fu_22301_p1 = esl_sext<9,7>(tmp_232_fu_22295_p2.read());
}

void ShuffleNetV2::thread_tmp_255_fu_24535_p2() {
    tmp_255_fu_24535_p2 = (!p_shl92_cast_fu_24519_p1.read().is_01() || !p_shl93_cast_fu_24531_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl92_cast_fu_24519_p1.read()) - sc_biguint<7>(p_shl93_cast_fu_24531_p1.read()));
}

void ShuffleNetV2::thread_tmp_2562_cast_fu_31368_p1() {
    tmp_2562_cast_fu_31368_p1 = esl_zext<32,10>(tmp_1143_reg_45555.read());
}

void ShuffleNetV2::thread_tmp_2565_cast_fu_31332_p1() {
    tmp_2565_cast_fu_31332_p1 = esl_sext<32,13>(tmp_1146_reg_45560.read());
}

void ShuffleNetV2::thread_tmp_256_fu_24575_p2() {
    tmp_256_fu_24575_p2 = (!tmp_255_reg_43427.read().is_01() || !ci46_cast_fu_24555_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_255_reg_43427.read()) + sc_biguint<7>(ci46_cast_fu_24555_p1.read()));
}

void ShuffleNetV2::thread_tmp_257_cast_fu_22340_p1() {
    tmp_257_cast_fu_22340_p1 = esl_sext<10,8>(tmp_234_fu_22334_p2.read());
}

void ShuffleNetV2::thread_tmp_257_fu_24883_p2() {
    tmp_257_fu_24883_p2 = (!p_shl94_cast_fu_24867_p1.read().is_01() || !p_shl95_cast_fu_24879_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl94_cast_fu_24867_p1.read()) - sc_biguint<7>(p_shl95_cast_fu_24879_p1.read()));
}

void ShuffleNetV2::thread_tmp_2580_cast_fu_31718_p1() {
    tmp_2580_cast_fu_31718_p1 = esl_sext<19,18>(tmp_1154_fu_31712_p2.read());
}

void ShuffleNetV2::thread_tmp_2581_cast_fu_31727_p1() {
    tmp_2581_cast_fu_31727_p1 = esl_sext<32,19>(tmp_1155_fu_31722_p2.read());
}

void ShuffleNetV2::thread_tmp_2587_cast_fu_31793_p1() {
    tmp_2587_cast_fu_31793_p1 = esl_sext<32,8>(tmp_1157_reg_45691.read());
}

void ShuffleNetV2::thread_tmp_258_fu_24893_p2() {
    tmp_258_fu_24893_p2 = (!tmp_257_fu_24883_p2.read().is_01() || !i90_cast1_reg_43504.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_257_fu_24883_p2.read()) + sc_biguint<7>(i90_cast1_reg_43504.read()));
}

void ShuffleNetV2::thread_tmp_2594_cast_fu_32042_p1() {
    tmp_2594_cast_fu_32042_p1 = esl_zext<32,15>(tmp_1160_fu_32037_p2.read());
}

void ShuffleNetV2::thread_tmp_259_fu_24624_p2() {
    tmp_259_fu_24624_p2 = (!p_shl96_cast_fu_24608_p1.read().is_01() || !p_shl97_cast_fu_24620_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl96_cast_fu_24608_p1.read()) - sc_biguint<7>(p_shl97_cast_fu_24620_p1.read()));
}

void ShuffleNetV2::thread_tmp_2602_cast_fu_32265_p1() {
    tmp_2602_cast_fu_32265_p1 = esl_sext<19,18>(tmp_1163_fu_32259_p2.read());
}

void ShuffleNetV2::thread_tmp_2603_cast_fu_32274_p1() {
    tmp_2603_cast_fu_32274_p1 = esl_sext<32,19>(tmp_1164_fu_32269_p2.read());
}

void ShuffleNetV2::thread_tmp_2609_cast_fu_32340_p1() {
    tmp_2609_cast_fu_32340_p1 = esl_sext<32,11>(tmp_1166_reg_45862.read());
}

void ShuffleNetV2::thread_tmp_260_cast_fu_24690_p1() {
    tmp_260_cast_fu_24690_p1 = esl_sext<10,9>(tmp_260_reg_43463.read());
}

void ShuffleNetV2::thread_tmp_260_fu_24634_p2() {
    tmp_260_fu_24634_p2 = (!tmp_296_cast_cast_fu_24630_p1.read().is_01() || !tmp_291_cast_cast_reg_43432.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_296_cast_cast_fu_24630_p1.read()) + sc_biguint<9>(tmp_291_cast_cast_reg_43432.read()));
}

void ShuffleNetV2::thread_tmp_261_fu_24663_p2() {
    tmp_261_fu_24663_p2 = (!p_shl98_cast_fu_24647_p1.read().is_01() || !p_shl99_cast_fu_24659_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl98_cast_fu_24647_p1.read()) - sc_biguint<8>(p_shl99_cast_fu_24659_p1.read()));
}

void ShuffleNetV2::thread_tmp_2621_cast_fu_32692_p1() {
    tmp_2621_cast_fu_32692_p1 = esl_zext<32,11>(tmp_1171_reg_45986.read());
}

void ShuffleNetV2::thread_tmp_2624_cast_fu_32656_p1() {
    tmp_2624_cast_fu_32656_p1 = esl_sext<32,13>(tmp_1174_reg_45991.read());
}

void ShuffleNetV2::thread_tmp_262_cast_cast_fu_22992_p1() {
    tmp_262_cast_cast_fu_22992_p1 = esl_zext<9,4>(tmp_2117_fu_22982_p4.read());
}

void ShuffleNetV2::thread_tmp_262_fu_25308_p2() {
    tmp_262_fu_25308_p2 = (!p_shl102_cast_fu_25292_p1.read().is_01() || !p_shl103_cast_fu_25304_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl102_cast_fu_25292_p1.read()) - sc_biguint<7>(p_shl103_cast_fu_25304_p1.read()));
}

void ShuffleNetV2::thread_tmp_2635_cast_fu_33022_p1() {
    tmp_2635_cast_fu_33022_p1 = esl_sext<19,18>(tmp_1179_fu_33016_p2.read());
}

void ShuffleNetV2::thread_tmp_2636_cast_fu_33031_p1() {
    tmp_2636_cast_fu_33031_p1 = esl_sext<32,19>(tmp_1180_fu_33026_p2.read());
}

void ShuffleNetV2::thread_tmp_263_cast_cast_fu_23338_p1() {
    tmp_263_cast_cast_fu_23338_p1 = esl_sext<9,7>(tmp_238_fu_23332_p2.read());
}

void ShuffleNetV2::thread_tmp_263_fu_25220_p2() {
    tmp_263_fu_25220_p2 = (!p_shl100_cast_fu_25204_p1.read().is_01() || !p_shl101_cast_fu_25216_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl100_cast_fu_25204_p1.read()) - sc_biguint<7>(p_shl101_cast_fu_25216_p1.read()));
}

void ShuffleNetV2::thread_tmp_2642_cast_fu_33097_p1() {
    tmp_2642_cast_fu_33097_p1 = esl_sext<32,11>(tmp_1182_reg_46122.read());
}

void ShuffleNetV2::thread_tmp_264_cast_fu_23376_p1() {
    tmp_264_cast_fu_23376_p1 = esl_sext<32,7>(tmp_239_reg_43040.read());
}

void ShuffleNetV2::thread_tmp_264_fu_25230_p2() {
    tmp_264_fu_25230_p2 = (!tmp_263_fu_25220_p2.read().is_01() || !i93_cast1_reg_43637.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_263_fu_25220_p2.read()) + sc_biguint<7>(i93_cast1_reg_43637.read()));
}

void ShuffleNetV2::thread_tmp_2654_cast_fu_33453_p1() {
    tmp_2654_cast_fu_33453_p1 = esl_zext<32,11>(tmp_1187_reg_46246.read());
}

void ShuffleNetV2::thread_tmp_2657_cast_fu_33417_p1() {
    tmp_2657_cast_fu_33417_p1 = esl_sext<32,13>(tmp_1190_reg_46251.read());
}

void ShuffleNetV2::thread_tmp_265_fu_25348_p2() {
    tmp_265_fu_25348_p2 = (!tmp_262_reg_43687.read().is_01() || !ci48_cast_fu_25328_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_262_reg_43687.read()) + sc_biguint<7>(ci48_cast_fu_25328_p1.read()));
}

void ShuffleNetV2::thread_tmp_2663_cast_fu_34003_p1() {
    tmp_2663_cast_fu_34003_p1 = esl_sext<12,11>(tmp_1195_fu_33997_p2.read());
}

void ShuffleNetV2::thread_tmp_2666_cast_fu_34059_p1() {
    tmp_2666_cast_fu_34059_p1 = esl_sext<13,12>(tmp_1198_fu_34053_p2.read());
}

void ShuffleNetV2::thread_tmp_266_cast_cast_fu_23021_p1() {
    tmp_266_cast_cast_fu_23021_p1 = esl_sext<8,7>(tmp_237_fu_23016_p2.read());
}

void ShuffleNetV2::thread_tmp_266_fu_25027_p2() {
    tmp_266_fu_25027_p2 = (!p_shl104_cast_fu_25011_p1.read().is_01() || !p_shl105_cast_fu_25023_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl104_cast_fu_25011_p1.read()) - sc_biguint<7>(p_shl105_cast_fu_25023_p1.read()));
}

void ShuffleNetV2::thread_tmp_2674_cast_fu_33779_p1() {
    tmp_2674_cast_fu_33779_p1 = esl_sext<19,18>(tmp_1201_fu_33773_p2.read());
}

void ShuffleNetV2::thread_tmp_2675_cast_fu_33788_p1() {
    tmp_2675_cast_fu_33788_p1 = esl_sext<32,19>(tmp_1202_fu_33783_p2.read());
}

void ShuffleNetV2::thread_tmp_267_cast_cast_fu_23071_p1() {
    tmp_267_cast_cast_fu_23071_p1 = esl_sext<9,7>(tmp_240_fu_23065_p2.read());
}

void ShuffleNetV2::thread_tmp_267_fu_25037_p2() {
    tmp_267_fu_25037_p2 = (!co100_cast1_reg_43546.read().is_01() || !tmp_266_fu_25027_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co100_cast1_reg_43546.read()) + sc_biguint<7>(tmp_266_fu_25027_p2.read()));
}

void ShuffleNetV2::thread_tmp_2681_cast_fu_33854_p1() {
    tmp_2681_cast_fu_33854_p1 = esl_sext<32,11>(tmp_1204_reg_46382.read());
}

void ShuffleNetV2::thread_tmp_268_fu_25656_p2() {
    tmp_268_fu_25656_p2 = (!p_shl106_cast_fu_25640_p1.read().is_01() || !p_shl107_cast_fu_25652_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl106_cast_fu_25640_p1.read()) - sc_biguint<7>(p_shl107_cast_fu_25652_p1.read()));
}

void ShuffleNetV2::thread_tmp_2692_cast_fu_34180_p1() {
    tmp_2692_cast_fu_34180_p1 = esl_zext<32,13>(tmp_1209_reg_46476.read());
}

void ShuffleNetV2::thread_tmp_2693_cast_fu_34175_p1() {
    tmp_2693_cast_fu_34175_p1 = esl_zext<32,14>(tmp_1210_fu_34170_p2.read());
}

void ShuffleNetV2::thread_tmp_269_cast_cast_fu_23110_p1() {
    tmp_269_cast_cast_fu_23110_p1 = esl_sext<9,8>(tmp_242_fu_23104_p2.read());
}

void ShuffleNetV2::thread_tmp_269_fu_25666_p2() {
    tmp_269_fu_25666_p2 = (!tmp_268_fu_25656_p2.read().is_01() || !i97_cast1_reg_43764.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_268_fu_25656_p2.read()) + sc_biguint<7>(i97_cast1_reg_43764.read()));
}

void ShuffleNetV2::thread_tmp_2701_cast_fu_34402_p1() {
    tmp_2701_cast_fu_34402_p1 = esl_sext<19,18>(tmp_1213_fu_34396_p2.read());
}

void ShuffleNetV2::thread_tmp_2702_cast_fu_34411_p1() {
    tmp_2702_cast_fu_34411_p1 = esl_sext<32,19>(tmp_1214_fu_34406_p2.read());
}

void ShuffleNetV2::thread_tmp_2708_cast_fu_34477_p1() {
    tmp_2708_cast_fu_34477_p1 = esl_sext<32,11>(tmp_1216_reg_46563.read());
}

void ShuffleNetV2::thread_tmp_270_fu_25397_p2() {
    tmp_270_fu_25397_p2 = (!p_shl108_cast_fu_25381_p1.read().is_01() || !p_shl109_cast_fu_25393_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl108_cast_fu_25381_p1.read()) - sc_biguint<7>(p_shl109_cast_fu_25393_p1.read()));
}

void ShuffleNetV2::thread_tmp_271_cast_cast_fu_23679_p1() {
    tmp_271_cast_cast_fu_23679_p1 = esl_sext<8,7>(tmp_244_fu_23673_p2.read());
}

void ShuffleNetV2::thread_tmp_271_cast_fu_25463_p1() {
    tmp_271_cast_fu_25463_p1 = esl_sext<10,9>(tmp_271_reg_43723.read());
}

void ShuffleNetV2::thread_tmp_271_fu_25407_p2() {
    tmp_271_fu_25407_p2 = (!tmp_313_cast_cast_fu_25403_p1.read().is_01() || !tmp_305_cast_cast_reg_43692.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_313_cast_cast_fu_25403_p1.read()) + sc_biguint<9>(tmp_305_cast_cast_reg_43692.read()));
}

void ShuffleNetV2::thread_tmp_2720_cast_fu_34825_p1() {
    tmp_2720_cast_fu_34825_p1 = esl_zext<32,11>(tmp_1221_reg_46687.read());
}

void ShuffleNetV2::thread_tmp_2723_cast_fu_34789_p1() {
    tmp_2723_cast_fu_34789_p1 = esl_sext<32,13>(tmp_1224_reg_46692.read());
}

void ShuffleNetV2::thread_tmp_2729_cast_fu_35383_p1() {
    tmp_2729_cast_fu_35383_p1 = esl_sext<12,11>(tmp_1229_fu_35377_p2.read());
}

void ShuffleNetV2::thread_tmp_272_cast_fu_23717_p1() {
    tmp_272_cast_fu_23717_p1 = esl_sext<32,7>(tmp_245_reg_43173.read());
}

void ShuffleNetV2::thread_tmp_272_fu_25436_p2() {
    tmp_272_fu_25436_p2 = (!p_shl110_cast_fu_25420_p1.read().is_01() || !p_shl111_cast_fu_25432_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl110_cast_fu_25420_p1.read()) - sc_biguint<8>(p_shl111_cast_fu_25432_p1.read()));
}

void ShuffleNetV2::thread_tmp_2739_cast_fu_35159_p1() {
    tmp_2739_cast_fu_35159_p1 = esl_sext<19,18>(tmp_1234_fu_35153_p2.read());
}

void ShuffleNetV2::thread_tmp_273_fu_25865_p2() {
    tmp_273_fu_25865_p2 = (!co106_cast_fu_25849_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co106_cast_fu_25849_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_2740_cast_fu_35168_p1() {
    tmp_2740_cast_fu_35168_p1 = esl_sext<32,19>(tmp_1235_fu_35163_p2.read());
}

void ShuffleNetV2::thread_tmp_2746_cast_fu_35234_p1() {
    tmp_2746_cast_fu_35234_p1 = esl_sext<32,11>(tmp_1237_reg_46823.read());
}

void ShuffleNetV2::thread_tmp_2749_cast_fu_35506_p1() {
    tmp_2749_cast_fu_35506_p1 = esl_sext<12,11>(tmp_1240_fu_35500_p2.read());
}

void ShuffleNetV2::thread_tmp_274_fu_26074_p2() {
    tmp_274_fu_26074_p2 = (!p_shl112_cast_fu_26058_p1.read().is_01() || !p_shl113_cast_fu_26070_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl112_cast_fu_26058_p1.read()) - sc_biguint<7>(p_shl113_cast_fu_26070_p1.read()));
}

void ShuffleNetV2::thread_tmp_2752_cast_fu_35562_p1() {
    tmp_2752_cast_fu_35562_p1 = esl_sext<13,12>(tmp_1243_fu_35556_p2.read());
}

void ShuffleNetV2::thread_tmp_275_fu_26114_p2() {
    tmp_275_fu_26114_p2 = (!tmp_274_reg_43912.read().is_01() || !ci50_cast_fu_26094_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_274_reg_43912.read()) + sc_biguint<7>(ci50_cast_fu_26094_p1.read()));
}

void ShuffleNetV2::thread_tmp_2767_cast_fu_35471_p1() {
    tmp_2767_cast_fu_35471_p1 = esl_zext<32,14>(tmp_1250_fu_35466_p2.read());
}

void ShuffleNetV2::thread_tmp_2768_cast_fu_35683_p1() {
    tmp_2768_cast_fu_35683_p1 = esl_zext<32,13>(tmp_1251_reg_46961.read());
}

void ShuffleNetV2::thread_tmp_2769_cast_fu_35678_p1() {
    tmp_2769_cast_fu_35678_p1 = esl_zext<32,14>(tmp_1252_fu_35673_p2.read());
}

void ShuffleNetV2::thread_tmp_276_cast_cast_fu_23781_p1() {
    tmp_276_cast_cast_fu_23781_p1 = esl_zext<9,4>(tmp_2128_fu_23771_p4.read());
}

void ShuffleNetV2::thread_tmp_276_fu_26422_p2() {
    tmp_276_fu_26422_p2 = (!p_shl114_cast_fu_26406_p1.read().is_01() || !p_shl115_cast_fu_26418_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl114_cast_fu_26406_p1.read()) - sc_biguint<7>(p_shl115_cast_fu_26418_p1.read()));
}

void ShuffleNetV2::thread_tmp_2777_cast_fu_35905_p1() {
    tmp_2777_cast_fu_35905_p1 = esl_sext<20,19>(tmp_1255_fu_35899_p2.read());
}

void ShuffleNetV2::thread_tmp_2778_cast_fu_35914_p1() {
    tmp_2778_cast_fu_35914_p1 = esl_sext<32,20>(tmp_1256_fu_35909_p2.read());
}

void ShuffleNetV2::thread_tmp_277_cast_fu_23486_p1() {
    tmp_277_cast_fu_23486_p1 = esl_sext<9,7>(tmp_247_fu_23480_p2.read());
}

void ShuffleNetV2::thread_tmp_277_fu_26432_p2() {
    tmp_277_fu_26432_p2 = (!tmp_276_fu_26422_p2.read().is_01() || !i102_cast1_reg_43989.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_276_fu_26422_p2.read()) + sc_biguint<7>(i102_cast1_reg_43989.read()));
}

void ShuffleNetV2::thread_tmp_2784_cast_fu_35980_p1() {
    tmp_2784_cast_fu_35980_p1 = esl_sext<32,11>(tmp_1258_reg_47048.read());
}

void ShuffleNetV2::thread_tmp_278_cast_cast_fu_23495_p1() {
    tmp_278_cast_cast_fu_23495_p1 = esl_sext<10,7>(tmp_248_fu_23490_p2.read());
}

void ShuffleNetV2::thread_tmp_278_fu_26163_p2() {
    tmp_278_fu_26163_p2 = (!p_shl116_cast_fu_26147_p1.read().is_01() || !p_shl117_cast_fu_26159_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl116_cast_fu_26147_p1.read()) - sc_biguint<7>(p_shl117_cast_fu_26159_p1.read()));
}

void ShuffleNetV2::thread_tmp_2796_cast_fu_36340_p1() {
    tmp_2796_cast_fu_36340_p1 = esl_zext<32,11>(tmp_1263_reg_47172.read());
}

void ShuffleNetV2::thread_tmp_2799_cast_fu_36295_p1() {
    tmp_2799_cast_fu_36295_p1 = esl_sext<14,13>(tmp_1266_fu_36289_p2.read());
}

void ShuffleNetV2::thread_tmp_279_cast_fu_26229_p1() {
    tmp_279_cast_fu_26229_p1 = esl_sext<10,9>(tmp_279_reg_43948.read());
}

void ShuffleNetV2::thread_tmp_279_fu_26173_p2() {
    tmp_279_fu_26173_p2 = (!tmp_325_cast_cast_fu_26169_p1.read().is_01() || !tmp_320_cast_cast_reg_43917.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_325_cast_cast_fu_26169_p1.read()) + sc_biguint<9>(tmp_320_cast_cast_reg_43917.read()));
}

void ShuffleNetV2::thread_tmp_2800_cast_fu_36304_p1() {
    tmp_2800_cast_fu_36304_p1 = esl_sext<32,14>(tmp_1267_reg_47177.read());
}

void ShuffleNetV2::thread_tmp_2806_cast_fu_36890_p1() {
    tmp_2806_cast_fu_36890_p1 = esl_sext<12,11>(tmp_1272_fu_36884_p2.read());
}

void ShuffleNetV2::thread_tmp_280_fu_26202_p2() {
    tmp_280_fu_26202_p2 = (!p_shl118_cast_fu_26186_p1.read().is_01() || !p_shl119_cast_fu_26198_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl118_cast_fu_26186_p1.read()) - sc_biguint<8>(p_shl119_cast_fu_26198_p1.read()));
}

void ShuffleNetV2::thread_tmp_2814_cast_fu_36666_p1() {
    tmp_2814_cast_fu_36666_p1 = esl_sext<20,19>(tmp_1275_fu_36660_p2.read());
}

void ShuffleNetV2::thread_tmp_2815_cast_fu_36675_p1() {
    tmp_2815_cast_fu_36675_p1 = esl_sext<32,20>(tmp_1276_fu_36670_p2.read());
}

void ShuffleNetV2::thread_tmp_281_cast_fu_24157_p1() {
    tmp_281_cast_fu_24157_p1 = esl_sext<32,7>(tmp_250_reg_43300.read());
}

void ShuffleNetV2::thread_tmp_281_fu_26855_p2() {
    tmp_281_fu_26855_p2 = (!p_shl122_cast_fu_26839_p1.read().is_01() || !p_shl123_cast_fu_26851_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl122_cast_fu_26839_p1.read()) - sc_biguint<7>(p_shl123_cast_fu_26851_p1.read()));
}

void ShuffleNetV2::thread_tmp_2821_cast_fu_36741_p1() {
    tmp_2821_cast_fu_36741_p1 = esl_sext<32,11>(tmp_1278_reg_47308.read());
}

void ShuffleNetV2::thread_tmp_2824_cast_fu_37013_p1() {
    tmp_2824_cast_fu_37013_p1 = esl_sext<12,11>(tmp_1281_fu_37007_p2.read());
}

void ShuffleNetV2::thread_tmp_2827_cast_fu_37069_p1() {
    tmp_2827_cast_fu_37069_p1 = esl_sext<13,12>(tmp_1284_fu_37063_p2.read());
}

void ShuffleNetV2::thread_tmp_282_fu_26767_p2() {
    tmp_282_fu_26767_p2 = (!p_shl120_cast_fu_26751_p1.read().is_01() || !p_shl121_cast_fu_26763_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl120_cast_fu_26751_p1.read()) - sc_biguint<7>(p_shl121_cast_fu_26763_p1.read()));
}

void ShuffleNetV2::thread_tmp_283_cast_cast_fu_23810_p1() {
    tmp_283_cast_cast_fu_23810_p1 = esl_sext<8,7>(tmp_246_fu_23805_p2.read());
}

void ShuffleNetV2::thread_tmp_283_fu_26777_p2() {
    tmp_283_fu_26777_p2 = (!tmp_282_fu_26767_p2.read().is_01() || !i105_cast1_reg_44122.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_282_fu_26767_p2.read()) + sc_biguint<7>(i105_cast1_reg_44122.read()));
}

void ShuffleNetV2::thread_tmp_2842_cast_fu_36978_p1() {
    tmp_2842_cast_fu_36978_p1 = esl_zext<32,14>(tmp_1291_fu_36973_p2.read());
}

void ShuffleNetV2::thread_tmp_2843_cast_fu_37190_p1() {
    tmp_2843_cast_fu_37190_p1 = esl_zext<32,13>(tmp_1292_reg_47446.read());
}

void ShuffleNetV2::thread_tmp_2844_cast_fu_37185_p1() {
    tmp_2844_cast_fu_37185_p1 = esl_zext<32,14>(tmp_1293_fu_37180_p2.read());
}

void ShuffleNetV2::thread_tmp_284_cast_cast_fu_23860_p1() {
    tmp_284_cast_cast_fu_23860_p1 = esl_sext<9,7>(tmp_251_fu_23854_p2.read());
}

void ShuffleNetV2::thread_tmp_284_fu_26895_p2() {
    tmp_284_fu_26895_p2 = (!tmp_281_reg_44172.read().is_01() || !ci52_cast_fu_26875_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_281_reg_44172.read()) + sc_biguint<7>(ci52_cast_fu_26875_p1.read()));
}

void ShuffleNetV2::thread_tmp_2852_cast_fu_37412_p1() {
    tmp_2852_cast_fu_37412_p1 = esl_sext<20,19>(tmp_1296_fu_37406_p2.read());
}

void ShuffleNetV2::thread_tmp_2853_cast_fu_37421_p1() {
    tmp_2853_cast_fu_37421_p1 = esl_sext<32,20>(tmp_1297_fu_37416_p2.read());
}

void ShuffleNetV2::thread_tmp_2859_cast_fu_37487_p1() {
    tmp_2859_cast_fu_37487_p1 = esl_sext<32,11>(tmp_1299_reg_47533.read());
}

void ShuffleNetV2::thread_tmp_285_fu_26566_p2() {
    tmp_285_fu_26566_p2 = (!p_shl124_cast_fu_26550_p1.read().is_01() || !p_shl125_cast_fu_26562_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl124_cast_fu_26550_p1.read()) - sc_biguint<7>(p_shl125_cast_fu_26562_p1.read()));
}

void ShuffleNetV2::thread_tmp_286_cast_fu_23899_p1() {
    tmp_286_cast_fu_23899_p1 = esl_sext<11,8>(tmp_253_fu_23893_p2.read());
}

void ShuffleNetV2::thread_tmp_286_fu_26576_p2() {
    tmp_286_fu_26576_p2 = (!tmp_285_fu_26566_p2.read().is_01() || !co110_cast_reg_44031.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_285_fu_26566_p2.read()) + sc_biguint<7>(co110_cast_reg_44031.read()));
}

void ShuffleNetV2::thread_tmp_2871_cast_fu_37839_p1() {
    tmp_2871_cast_fu_37839_p1 = esl_zext<32,11>(tmp_1304_reg_47657.read());
}

void ShuffleNetV2::thread_tmp_2873_cast_fu_37794_p1() {
    tmp_2873_cast_fu_37794_p1 = esl_sext<15,14>(tmp_1306_fu_37788_p2.read());
}

void ShuffleNetV2::thread_tmp_2874_cast_fu_37803_p1() {
    tmp_2874_cast_fu_37803_p1 = esl_sext<32,15>(tmp_1307_reg_47662.read());
}

void ShuffleNetV2::thread_tmp_287_fu_27203_p2() {
    tmp_287_fu_27203_p2 = (!p_shl126_cast_fu_27187_p1.read().is_01() || !p_shl127_cast_fu_27199_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl126_cast_fu_27187_p1.read()) - sc_biguint<7>(p_shl127_cast_fu_27199_p1.read()));
}

void ShuffleNetV2::thread_tmp_2880_cast_fu_38389_p1() {
    tmp_2880_cast_fu_38389_p1 = esl_sext<12,11>(tmp_1312_fu_38383_p2.read());
}

void ShuffleNetV2::thread_tmp_2888_cast_fu_38165_p1() {
    tmp_2888_cast_fu_38165_p1 = esl_sext<20,19>(tmp_1315_fu_38159_p2.read());
}

void ShuffleNetV2::thread_tmp_2889_cast_fu_38174_p1() {
    tmp_2889_cast_fu_38174_p1 = esl_sext<32,20>(tmp_1316_fu_38169_p2.read());
}

void ShuffleNetV2::thread_tmp_288_fu_27213_p2() {
    tmp_288_fu_27213_p2 = (!tmp_287_fu_27203_p2.read().is_01() || !i109_cast1_reg_44249.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_287_fu_27203_p2.read()) + sc_biguint<7>(i109_cast1_reg_44249.read()));
}

void ShuffleNetV2::thread_tmp_2895_cast_fu_38240_p1() {
    tmp_2895_cast_fu_38240_p1 = esl_sext<32,11>(tmp_1318_reg_47793.read());
}

void ShuffleNetV2::thread_tmp_2897_cast_fu_38490_p1() {
    tmp_2897_cast_fu_38490_p1 = esl_zext<11,10>(tmp_1319_fu_38482_p3.read());
}

void ShuffleNetV2::thread_tmp_289_fu_26944_p2() {
    tmp_289_fu_26944_p2 = (!p_shl128_cast_fu_26928_p1.read().is_01() || !p_shl129_cast_fu_26940_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl128_cast_fu_26928_p1.read()) - sc_biguint<7>(p_shl129_cast_fu_26940_p1.read()));
}

void ShuffleNetV2::thread_tmp_2900_cast_fu_38524_p1() {
    tmp_2900_cast_fu_38524_p1 = esl_sext<13,12>(tmp_1322_fu_38518_p2.read());
}

void ShuffleNetV2::thread_tmp_2907_cast_fu_38549_p3() {
    tmp_2907_cast_fu_38549_p3 = esl_concat<11,2>(tmp_1325_fu_38544_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_290_cast_fu_27010_p1() {
    tmp_290_cast_fu_27010_p1 = esl_sext<10,9>(tmp_290_reg_44208.read());
}

void ShuffleNetV2::thread_tmp_290_fu_26954_p2() {
    tmp_290_fu_26954_p2 = (!tmp_342_cast_cast_fu_26950_p1.read().is_01() || !tmp_334_cast_cast_reg_44177.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_342_cast_cast_fu_26950_p1.read()) + sc_biguint<9>(tmp_334_cast_cast_reg_44177.read()));
}

void ShuffleNetV2::thread_tmp_2912_cast_fu_38477_p1() {
    tmp_2912_cast_fu_38477_p1 = esl_zext<32,14>(tmp_1328_fu_38472_p2.read());
}

void ShuffleNetV2::thread_tmp_2913_cast_fu_38613_p1() {
    tmp_2913_cast_fu_38613_p1 = esl_zext<32,13>(tmp_1329_fu_38608_p2.read());
}

void ShuffleNetV2::thread_tmp_2914_cast_fu_38639_p1() {
    tmp_2914_cast_fu_38639_p1 = esl_zext<32,14>(tmp_1330_fu_38634_p2.read());
}

void ShuffleNetV2::thread_tmp_291_cast_cast_fu_24551_p1() {
    tmp_291_cast_cast_fu_24551_p1 = esl_zext<9,4>(tmp_2141_fu_24541_p4.read());
}

void ShuffleNetV2::thread_tmp_291_fu_26983_p2() {
    tmp_291_fu_26983_p2 = (!p_shl130_cast_fu_26967_p1.read().is_01() || !p_shl131_cast_fu_26979_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl130_cast_fu_26967_p1.read()) - sc_biguint<8>(p_shl131_cast_fu_26979_p1.read()));
}

void ShuffleNetV2::thread_tmp_292_cast_fu_24889_p1() {
    tmp_292_cast_fu_24889_p1 = esl_sext<11,7>(tmp_257_fu_24883_p2.read());
}

void ShuffleNetV2::thread_tmp_292_fu_27412_p2() {
    tmp_292_fu_27412_p2 = (!co116_cast_fu_27396_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co116_cast_fu_27396_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_293_cast_fu_24923_p1() {
    tmp_293_cast_fu_24923_p1 = esl_sext<32,7>(tmp_258_reg_43525.read());
}

void ShuffleNetV2::thread_tmp_293_fu_27621_p2() {
    tmp_293_fu_27621_p2 = (!p_shl132_cast_fu_27605_p1.read().is_01() || !p_shl133_cast_fu_27617_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl132_cast_fu_27605_p1.read()) - sc_biguint<7>(p_shl133_cast_fu_27617_p1.read()));
}

void ShuffleNetV2::thread_tmp_294_fu_27661_p2() {
    tmp_294_fu_27661_p2 = (!tmp_293_reg_44397.read().is_01() || !ci54_cast_fu_27641_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_293_reg_44397.read()) + sc_biguint<7>(ci54_cast_fu_27641_p1.read()));
}

void ShuffleNetV2::thread_tmp_295_cast_cast_fu_24580_p1() {
    tmp_295_cast_cast_fu_24580_p1 = esl_sext<8,7>(tmp_256_fu_24575_p2.read());
}

void ShuffleNetV2::thread_tmp_295_fu_27969_p2() {
    tmp_295_fu_27969_p2 = (!p_shl134_cast_fu_27953_p1.read().is_01() || !p_shl135_cast_fu_27965_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl134_cast_fu_27953_p1.read()) - sc_biguint<7>(p_shl135_cast_fu_27965_p1.read()));
}

void ShuffleNetV2::thread_tmp_296_cast_cast_fu_24630_p1() {
    tmp_296_cast_cast_fu_24630_p1 = esl_sext<9,7>(tmp_259_fu_24624_p2.read());
}

void ShuffleNetV2::thread_tmp_296_fu_27979_p2() {
    tmp_296_fu_27979_p2 = (!tmp_295_fu_27969_p2.read().is_01() || !i114_cast1_reg_44474.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_295_fu_27969_p2.read()) + sc_biguint<7>(i114_cast1_reg_44474.read()));
}

void ShuffleNetV2::thread_tmp_297_fu_27710_p2() {
    tmp_297_fu_27710_p2 = (!p_shl136_cast_fu_27694_p1.read().is_01() || !p_shl137_cast_fu_27706_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl136_cast_fu_27694_p1.read()) - sc_biguint<7>(p_shl137_cast_fu_27706_p1.read()));
}

void ShuffleNetV2::thread_tmp_298_cast1_fu_27776_p1() {
    tmp_298_cast1_fu_27776_p1 = esl_sext<10,9>(tmp_298_reg_44433.read());
}

void ShuffleNetV2::thread_tmp_298_cast_fu_24669_p1() {
    tmp_298_cast_fu_24669_p1 = esl_sext<11,8>(tmp_261_fu_24663_p2.read());
}

void ShuffleNetV2::thread_tmp_298_fu_27720_p2() {
    tmp_298_fu_27720_p2 = (!tmp_354_cast_cast_fu_27716_p1.read().is_01() || !tmp_349_cast_cast_reg_44402.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_354_cast_cast_fu_27716_p1.read()) + sc_biguint<9>(tmp_349_cast_cast_reg_44402.read()));
}

void ShuffleNetV2::thread_tmp_299_fu_27749_p2() {
    tmp_299_fu_27749_p2 = (!p_shl138_cast_fu_27733_p1.read().is_01() || !p_shl139_cast_fu_27745_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl138_cast_fu_27733_p1.read()) - sc_biguint<8>(p_shl139_cast_fu_27745_p1.read()));
}

void ShuffleNetV2::thread_tmp_300_cast_fu_25226_p1() {
    tmp_300_cast_fu_25226_p1 = esl_sext<11,7>(tmp_263_fu_25220_p2.read());
}

void ShuffleNetV2::thread_tmp_300_fu_28406_p2() {
    tmp_300_fu_28406_p2 = (!p_shl142_cast_fu_28390_p1.read().is_01() || !p_shl143_cast_fu_28402_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl142_cast_fu_28390_p1.read()) - sc_biguint<7>(p_shl143_cast_fu_28402_p1.read()));
}

void ShuffleNetV2::thread_tmp_301_cast_fu_25260_p1() {
    tmp_301_cast_fu_25260_p1 = esl_sext<32,7>(tmp_264_reg_43658.read());
}

void ShuffleNetV2::thread_tmp_301_fu_28318_p2() {
    tmp_301_fu_28318_p2 = (!p_shl140_cast_fu_28302_p1.read().is_01() || !p_shl141_cast_fu_28314_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl140_cast_fu_28302_p1.read()) - sc_biguint<7>(p_shl141_cast_fu_28314_p1.read()));
}

void ShuffleNetV2::thread_tmp_302_fu_28328_p2() {
    tmp_302_fu_28328_p2 = (!tmp_301_fu_28318_p2.read().is_01() || !i117_cast1_reg_44607.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_301_fu_28318_p2.read()) + sc_biguint<7>(i117_cast1_reg_44607.read()));
}

void ShuffleNetV2::thread_tmp_303_fu_28446_p2() {
    tmp_303_fu_28446_p2 = (!tmp_300_reg_44657.read().is_01() || !ci56_cast_fu_28426_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_300_reg_44657.read()) + sc_biguint<7>(ci56_cast_fu_28426_p1.read()));
}

void ShuffleNetV2::thread_tmp_304_fu_28113_p2() {
    tmp_304_fu_28113_p2 = (!p_shl144_cast_fu_28097_p1.read().is_01() || !p_shl145_cast_fu_28109_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl144_cast_fu_28097_p1.read()) - sc_biguint<7>(p_shl145_cast_fu_28109_p1.read()));
}

void ShuffleNetV2::thread_tmp_305_cast_cast_fu_25324_p1() {
    tmp_305_cast_cast_fu_25324_p1 = esl_zext<9,4>(tmp_2152_fu_25314_p4.read());
}

void ShuffleNetV2::thread_tmp_305_fu_28123_p2() {
    tmp_305_fu_28123_p2 = (!tmp_304_fu_28113_p2.read().is_01() || !co120_cast_reg_44516.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_304_fu_28113_p2.read()) + sc_biguint<7>(co120_cast_reg_44516.read()));
}

void ShuffleNetV2::thread_tmp_306_cast_fu_25033_p1() {
    tmp_306_cast_fu_25033_p1 = esl_sext<9,7>(tmp_266_fu_25027_p2.read());
}

void ShuffleNetV2::thread_tmp_306_fu_28754_p2() {
    tmp_306_fu_28754_p2 = (!p_shl146_cast_fu_28738_p1.read().is_01() || !p_shl147_cast_fu_28750_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl146_cast_fu_28738_p1.read()) - sc_biguint<7>(p_shl147_cast_fu_28750_p1.read()));
}

void ShuffleNetV2::thread_tmp_307_cast_cast_fu_25042_p1() {
    tmp_307_cast_cast_fu_25042_p1 = esl_sext<10,7>(tmp_267_fu_25037_p2.read());
}

void ShuffleNetV2::thread_tmp_307_fu_28764_p2() {
    tmp_307_fu_28764_p2 = (!tmp_306_fu_28754_p2.read().is_01() || !i121_cast1_reg_44734.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_306_fu_28754_p2.read()) + sc_biguint<7>(i121_cast1_reg_44734.read()));
}

void ShuffleNetV2::thread_tmp_308_fu_28495_p2() {
    tmp_308_fu_28495_p2 = (!p_shl148_cast_fu_28479_p1.read().is_01() || !p_shl149_cast_fu_28491_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl148_cast_fu_28479_p1.read()) - sc_biguint<7>(p_shl149_cast_fu_28491_p1.read()));
}

void ShuffleNetV2::thread_tmp_309_cast1_fu_28561_p1() {
    tmp_309_cast1_fu_28561_p1 = esl_sext<10,9>(tmp_309_reg_44693.read());
}

void ShuffleNetV2::thread_tmp_309_cast_fu_25662_p1() {
    tmp_309_cast_fu_25662_p1 = esl_sext<11,7>(tmp_268_fu_25656_p2.read());
}

void ShuffleNetV2::thread_tmp_309_fu_28505_p2() {
    tmp_309_fu_28505_p2 = (!tmp_371_cast_cast_fu_28501_p1.read().is_01() || !tmp_363_cast_cast_reg_44662.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_371_cast_cast_fu_28501_p1.read()) + sc_biguint<9>(tmp_363_cast_cast_reg_44662.read()));
}

void ShuffleNetV2::thread_tmp_310_cast_fu_25696_p1() {
    tmp_310_cast_fu_25696_p1 = esl_sext<32,7>(tmp_269_reg_43785.read());
}

void ShuffleNetV2::thread_tmp_310_fu_28534_p2() {
    tmp_310_fu_28534_p2 = (!p_shl150_cast_fu_28518_p1.read().is_01() || !p_shl151_cast_fu_28530_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl150_cast_fu_28518_p1.read()) - sc_biguint<8>(p_shl151_cast_fu_28530_p1.read()));
}

void ShuffleNetV2::thread_tmp_311_fu_28963_p2() {
    tmp_311_fu_28963_p2 = (!co126_cast_fu_28947_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co126_cast_fu_28947_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_312_cast_cast_fu_25353_p1() {
    tmp_312_cast_cast_fu_25353_p1 = esl_sext<8,7>(tmp_265_fu_25348_p2.read());
}

void ShuffleNetV2::thread_tmp_312_fu_29172_p2() {
    tmp_312_fu_29172_p2 = (!p_shl152_cast_fu_29156_p1.read().is_01() || !p_shl153_cast_fu_29168_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl152_cast_fu_29156_p1.read()) - sc_biguint<7>(p_shl153_cast_fu_29168_p1.read()));
}

void ShuffleNetV2::thread_tmp_313_cast_cast_fu_25403_p1() {
    tmp_313_cast_cast_fu_25403_p1 = esl_sext<9,7>(tmp_270_fu_25397_p2.read());
}

void ShuffleNetV2::thread_tmp_313_fu_29212_p2() {
    tmp_313_fu_29212_p2 = (!tmp_312_reg_44882.read().is_01() || !ci58_cast_fu_29192_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_312_reg_44882.read()) + sc_biguint<7>(ci58_cast_fu_29192_p1.read()));
}

void ShuffleNetV2::thread_tmp_314_fu_29528_p2() {
    tmp_314_fu_29528_p2 = (!p_shl154_cast_fu_29512_p1.read().is_01() || !p_shl155_cast_fu_29524_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl154_cast_fu_29512_p1.read()) - sc_biguint<7>(p_shl155_cast_fu_29524_p1.read()));
}

void ShuffleNetV2::thread_tmp_315_cast_fu_25442_p1() {
    tmp_315_cast_fu_25442_p1 = esl_sext<11,8>(tmp_272_fu_25436_p2.read());
}

void ShuffleNetV2::thread_tmp_315_fu_29538_p2() {
    tmp_315_fu_29538_p2 = (!tmp_314_fu_29528_p2.read().is_01() || !i126_cast1_reg_44959.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_314_fu_29528_p2.read()) + sc_biguint<7>(i126_cast1_reg_44959.read()));
}

void ShuffleNetV2::thread_tmp_316_fu_29261_p2() {
    tmp_316_fu_29261_p2 = (!p_shl156_cast_fu_29245_p1.read().is_01() || !p_shl157_cast_fu_29257_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl156_cast_fu_29245_p1.read()) - sc_biguint<7>(p_shl157_cast_fu_29257_p1.read()));
}

void ShuffleNetV2::thread_tmp_317_cast_fu_29327_p1() {
    tmp_317_cast_fu_29327_p1 = esl_sext<10,9>(tmp_317_reg_44918.read());
}

void ShuffleNetV2::thread_tmp_317_fu_29271_p2() {
    tmp_317_fu_29271_p2 = (!tmp_378_cast_cast_reg_44887.read().is_01() || !tmp_383_cast_cast_fu_29267_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_378_cast_cast_reg_44887.read()) + sc_bigint<9>(tmp_383_cast_cast_fu_29267_p1.read()));
}

void ShuffleNetV2::thread_tmp_318_fu_29300_p2() {
    tmp_318_fu_29300_p2 = (!p_shl158_cast_fu_29284_p1.read().is_01() || !p_shl159_cast_fu_29296_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl158_cast_fu_29284_p1.read()) - sc_biguint<8>(p_shl159_cast_fu_29296_p1.read()));
}

void ShuffleNetV2::thread_tmp_319_fu_29957_p2() {
    tmp_319_fu_29957_p2 = (!p_shl162_cast_fu_29941_p1.read().is_01() || !p_shl163_cast_fu_29953_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl162_cast_fu_29941_p1.read()) - sc_biguint<7>(p_shl163_cast_fu_29953_p1.read()));
}

void ShuffleNetV2::thread_tmp_320_cast_cast_fu_26090_p1() {
    tmp_320_cast_cast_fu_26090_p1 = esl_zext<9,4>(tmp_2165_fu_26080_p4.read());
}

void ShuffleNetV2::thread_tmp_320_fu_29869_p2() {
    tmp_320_fu_29869_p2 = (!p_shl160_cast_fu_29853_p1.read().is_01() || !p_shl161_cast_fu_29865_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl160_cast_fu_29853_p1.read()) - sc_biguint<7>(p_shl161_cast_fu_29865_p1.read()));
}

void ShuffleNetV2::thread_tmp_321_cast_fu_26428_p1() {
    tmp_321_cast_fu_26428_p1 = esl_sext<11,7>(tmp_276_fu_26422_p2.read());
}

void ShuffleNetV2::thread_tmp_321_fu_29879_p2() {
    tmp_321_fu_29879_p2 = (!tmp_320_fu_29869_p2.read().is_01() || !i129_cast1_reg_45092.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_320_fu_29869_p2.read()) + sc_biguint<7>(i129_cast1_reg_45092.read()));
}

void ShuffleNetV2::thread_tmp_322_cast_fu_26462_p1() {
    tmp_322_cast_fu_26462_p1 = esl_sext<32,7>(tmp_277_reg_44010.read());
}

void ShuffleNetV2::thread_tmp_322_fu_29997_p2() {
    tmp_322_fu_29997_p2 = (!tmp_319_reg_45142.read().is_01() || !ci60_cast_fu_29977_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_319_reg_45142.read()) + sc_biguint<7>(ci60_cast_fu_29977_p1.read()));
}

void ShuffleNetV2::thread_tmp_323_fu_29672_p2() {
    tmp_323_fu_29672_p2 = (!p_shl164_cast_fu_29656_p1.read().is_01() || !p_shl165_cast_fu_29668_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl164_cast_fu_29656_p1.read()) - sc_biguint<7>(p_shl165_cast_fu_29668_p1.read()));
}

void ShuffleNetV2::thread_tmp_324_cast_cast_fu_26119_p1() {
    tmp_324_cast_cast_fu_26119_p1 = esl_sext<8,7>(tmp_275_fu_26114_p2.read());
}

void ShuffleNetV2::thread_tmp_324_fu_29682_p2() {
    tmp_324_fu_29682_p2 = (!co130_cast1_reg_45001.read().is_01() || !tmp_323_fu_29672_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co130_cast1_reg_45001.read()) + sc_biguint<7>(tmp_323_fu_29672_p2.read()));
}

void ShuffleNetV2::thread_tmp_325_cast_cast_fu_26169_p1() {
    tmp_325_cast_cast_fu_26169_p1 = esl_sext<9,7>(tmp_278_fu_26163_p2.read());
}

void ShuffleNetV2::thread_tmp_325_fu_30313_p2() {
    tmp_325_fu_30313_p2 = (!p_shl166_cast_fu_30297_p1.read().is_01() || !p_shl167_cast_fu_30309_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl166_cast_fu_30297_p1.read()) - sc_biguint<7>(p_shl167_cast_fu_30309_p1.read()));
}

void ShuffleNetV2::thread_tmp_326_fu_30323_p2() {
    tmp_326_fu_30323_p2 = (!tmp_325_fu_30313_p2.read().is_01() || !i133_cast_reg_45219.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_325_fu_30313_p2.read()) + sc_biguint<7>(i133_cast_reg_45219.read()));
}

void ShuffleNetV2::thread_tmp_327_cast_fu_26208_p1() {
    tmp_327_cast_fu_26208_p1 = esl_sext<11,8>(tmp_280_fu_26202_p2.read());
}

void ShuffleNetV2::thread_tmp_327_fu_30046_p2() {
    tmp_327_fu_30046_p2 = (!p_shl168_cast_fu_30030_p1.read().is_01() || !p_shl169_cast_fu_30042_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl168_cast_fu_30030_p1.read()) - sc_biguint<7>(p_shl169_cast_fu_30042_p1.read()));
}

void ShuffleNetV2::thread_tmp_328_cast_fu_30112_p1() {
    tmp_328_cast_fu_30112_p1 = esl_sext<10,9>(tmp_328_reg_45178.read());
}

void ShuffleNetV2::thread_tmp_328_fu_30056_p2() {
    tmp_328_fu_30056_p2 = (!tmp_392_cast_cast_reg_45147.read().is_01() || !tmp_400_cast_cast_fu_30052_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_392_cast_cast_reg_45147.read()) + sc_bigint<9>(tmp_400_cast_cast_fu_30052_p1.read()));
}

void ShuffleNetV2::thread_tmp_329_cast_fu_26773_p1() {
    tmp_329_cast_fu_26773_p1 = esl_sext<11,7>(tmp_282_fu_26767_p2.read());
}

void ShuffleNetV2::thread_tmp_329_fu_30085_p2() {
    tmp_329_fu_30085_p2 = (!p_shl170_cast_fu_30069_p1.read().is_01() || !p_shl171_cast_fu_30081_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl170_cast_fu_30069_p1.read()) - sc_biguint<8>(p_shl171_cast_fu_30081_p1.read()));
}

void ShuffleNetV2::thread_tmp_330_cast_fu_26807_p1() {
    tmp_330_cast_fu_26807_p1 = esl_sext<32,7>(tmp_283_reg_44143.read());
}

void ShuffleNetV2::thread_tmp_330_fu_30526_p2() {
    tmp_330_fu_30526_p2 = (!co136_cast_fu_30510_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co136_cast_fu_30510_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_331_fu_30735_p2() {
    tmp_331_fu_30735_p2 = (!p_shl172_cast_fu_30719_p1.read().is_01() || !p_shl173_cast_fu_30731_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl172_cast_fu_30719_p1.read()) - sc_biguint<7>(p_shl173_cast_fu_30731_p1.read()));
}

void ShuffleNetV2::thread_tmp_332_fu_30775_p2() {
    tmp_332_fu_30775_p2 = (!tmp_331_reg_45367.read().is_01() || !ci62_cast_fu_30755_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_331_reg_45367.read()) + sc_biguint<7>(ci62_cast_fu_30755_p1.read()));
}

void ShuffleNetV2::thread_tmp_333_fu_31091_p2() {
    tmp_333_fu_31091_p2 = (!p_shl174_cast_fu_31075_p1.read().is_01() || !p_shl175_cast_fu_31087_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl174_cast_fu_31075_p1.read()) - sc_biguint<7>(p_shl175_cast_fu_31087_p1.read()));
}

void ShuffleNetV2::thread_tmp_334_cast_cast_fu_26871_p1() {
    tmp_334_cast_cast_fu_26871_p1 = esl_zext<9,4>(tmp_2176_fu_26861_p4.read());
}

void ShuffleNetV2::thread_tmp_334_fu_31101_p2() {
    tmp_334_fu_31101_p2 = (!tmp_333_fu_31091_p2.read().is_01() || !i138_cast_reg_45444.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_333_fu_31091_p2.read()) + sc_biguint<7>(i138_cast_reg_45444.read()));
}

void ShuffleNetV2::thread_tmp_335_cast_cast_fu_26572_p1() {
    tmp_335_cast_cast_fu_26572_p1 = esl_sext<8,7>(tmp_285_fu_26566_p2.read());
}

void ShuffleNetV2::thread_tmp_335_fu_30824_p2() {
    tmp_335_fu_30824_p2 = (!p_shl176_cast_fu_30808_p1.read().is_01() || !p_shl177_cast_fu_30820_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl176_cast_fu_30808_p1.read()) - sc_biguint<7>(p_shl177_cast_fu_30820_p1.read()));
}

void ShuffleNetV2::thread_tmp_336_cast_cast_fu_26581_p1() {
    tmp_336_cast_cast_fu_26581_p1 = esl_sext<10,7>(tmp_286_fu_26576_p2.read());
}

void ShuffleNetV2::thread_tmp_336_cast_fu_30890_p1() {
    tmp_336_cast_fu_30890_p1 = esl_sext<10,9>(tmp_336_reg_45403.read());
}

void ShuffleNetV2::thread_tmp_336_fu_30834_p2() {
    tmp_336_fu_30834_p2 = (!tmp_407_cast_cast_reg_45372.read().is_01() || !tmp_412_cast_cast_fu_30830_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_407_cast_cast_reg_45372.read()) + sc_bigint<9>(tmp_412_cast_cast_fu_30830_p1.read()));
}

void ShuffleNetV2::thread_tmp_337_fu_30863_p2() {
    tmp_337_fu_30863_p2 = (!p_shl178_cast_fu_30847_p1.read().is_01() || !p_shl179_cast_fu_30859_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl178_cast_fu_30847_p1.read()) - sc_biguint<8>(p_shl179_cast_fu_30859_p1.read()));
}

void ShuffleNetV2::thread_tmp_338_cast_fu_27209_p1() {
    tmp_338_cast_fu_27209_p1 = esl_sext<11,7>(tmp_287_fu_27203_p2.read());
}

void ShuffleNetV2::thread_tmp_338_fu_31524_p2() {
    tmp_338_fu_31524_p2 = (!p_shl182_cast_fu_31508_p1.read().is_01() || !p_shl183_cast_fu_31520_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl182_cast_fu_31508_p1.read()) - sc_biguint<7>(p_shl183_cast_fu_31520_p1.read()));
}

void ShuffleNetV2::thread_tmp_339_cast_fu_27243_p1() {
    tmp_339_cast_fu_27243_p1 = esl_sext<32,7>(tmp_288_reg_44270.read());
}

void ShuffleNetV2::thread_tmp_339_fu_31432_p2() {
    tmp_339_fu_31432_p2 = (!p_shl180_cast_fu_31416_p1.read().is_01() || !p_shl181_cast_fu_31428_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl180_cast_fu_31416_p1.read()) - sc_biguint<7>(p_shl181_cast_fu_31428_p1.read()));
}

void ShuffleNetV2::thread_tmp_340_fu_31442_p2() {
    tmp_340_fu_31442_p2 = (!tmp_339_fu_31432_p2.read().is_01() || !i141_cast_reg_45577.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_339_fu_31432_p2.read()) + sc_biguint<7>(i141_cast_reg_45577.read()));
}

void ShuffleNetV2::thread_tmp_341_cast_cast_fu_26900_p1() {
    tmp_341_cast_cast_fu_26900_p1 = esl_sext<8,7>(tmp_284_fu_26895_p2.read());
}

void ShuffleNetV2::thread_tmp_341_fu_31564_p2() {
    tmp_341_fu_31564_p2 = (!tmp_338_reg_45627.read().is_01() || !ci64_cast_fu_31544_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_338_reg_45627.read()) + sc_biguint<7>(ci64_cast_fu_31544_p1.read()));
}

void ShuffleNetV2::thread_tmp_342_cast_cast_fu_26950_p1() {
    tmp_342_cast_cast_fu_26950_p1 = esl_sext<9,7>(tmp_289_fu_26944_p2.read());
}

void ShuffleNetV2::thread_tmp_342_fu_31239_p2() {
    tmp_342_fu_31239_p2 = (!p_shl184_cast_fu_31223_p1.read().is_01() || !p_shl185_cast_fu_31235_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl184_cast_fu_31223_p1.read()) - sc_biguint<7>(p_shl185_cast_fu_31235_p1.read()));
}

void ShuffleNetV2::thread_tmp_343_fu_31249_p2() {
    tmp_343_fu_31249_p2 = (!co140_cast1_reg_45486.read().is_01() || !tmp_342_fu_31239_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co140_cast1_reg_45486.read()) + sc_biguint<7>(tmp_342_fu_31239_p2.read()));
}

void ShuffleNetV2::thread_tmp_344_cast_fu_26989_p1() {
    tmp_344_cast_fu_26989_p1 = esl_sext<11,8>(tmp_291_fu_26983_p2.read());
}

void ShuffleNetV2::thread_tmp_344_fu_31880_p2() {
    tmp_344_fu_31880_p2 = (!p_shl186_cast_fu_31864_p1.read().is_01() || !p_shl187_cast_fu_31876_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl186_cast_fu_31864_p1.read()) - sc_biguint<7>(p_shl187_cast_fu_31876_p1.read()));
}

void ShuffleNetV2::thread_tmp_345_fu_31890_p2() {
    tmp_345_fu_31890_p2 = (!tmp_344_fu_31880_p2.read().is_01() || !i145_cast_reg_45704.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_344_fu_31880_p2.read()) + sc_biguint<7>(i145_cast_reg_45704.read()));
}

void ShuffleNetV2::thread_tmp_346_fu_31613_p2() {
    tmp_346_fu_31613_p2 = (!p_shl188_cast_fu_31597_p1.read().is_01() || !p_shl189_cast_fu_31609_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl188_cast_fu_31597_p1.read()) - sc_biguint<7>(p_shl189_cast_fu_31609_p1.read()));
}

void ShuffleNetV2::thread_tmp_347_cast_fu_31687_p1() {
    tmp_347_cast_fu_31687_p1 = esl_sext<10,9>(tmp_347_reg_45663.read());
}

void ShuffleNetV2::thread_tmp_347_fu_31623_p2() {
    tmp_347_fu_31623_p2 = (!tmp_429_cast_cast_fu_31619_p1.read().is_01() || !tmp_421_cast_cast_reg_45632.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_429_cast_cast_fu_31619_p1.read()) + sc_biguint<9>(tmp_421_cast_cast_reg_45632.read()));
}

void ShuffleNetV2::thread_tmp_348_fu_31652_p2() {
    tmp_348_fu_31652_p2 = (!p_shl190_cast_fu_31636_p1.read().is_01() || !p_shl191_cast_fu_31648_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl190_cast_fu_31636_p1.read()) - sc_biguint<8>(p_shl191_cast_fu_31648_p1.read()));
}

void ShuffleNetV2::thread_tmp_349_cast_cast_fu_27637_p1() {
    tmp_349_cast_cast_fu_27637_p1 = esl_zext<9,4>(tmp_2189_fu_27627_p4.read());
}

void ShuffleNetV2::thread_tmp_349_fu_32089_p2() {
    tmp_349_fu_32089_p2 = (!p_shl192_cast_fu_32075_p1.read().is_01() || !p_shl193_cast_fu_32085_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl192_cast_fu_32075_p1.read()) - sc_biguint<8>(p_shl193_cast_fu_32085_p1.read()));
}

void ShuffleNetV2::thread_tmp_350_cast_fu_27975_p1() {
    tmp_350_cast_fu_27975_p1 = esl_sext<11,7>(tmp_295_fu_27969_p2.read());
}

void ShuffleNetV2::thread_tmp_350_fu_32129_p2() {
    tmp_350_fu_32129_p2 = (!tmp_349_reg_45798.read().is_01() || !ci66_cast_fu_32109_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_349_reg_45798.read()) + sc_biguint<8>(ci66_cast_fu_32109_p1.read()));
}

void ShuffleNetV2::thread_tmp_351_cast_fu_28009_p1() {
    tmp_351_cast_fu_28009_p1 = esl_sext<32,7>(tmp_296_reg_44495.read());
}

void ShuffleNetV2::thread_tmp_351_fu_32415_p2() {
    tmp_351_fu_32415_p2 = (!p_shl194_cast_fu_32399_p1.read().is_01() || !p_shl195_cast_fu_32411_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl194_cast_fu_32399_p1.read()) - sc_biguint<8>(p_shl195_cast_fu_32411_p1.read()));
}

void ShuffleNetV2::thread_tmp_352_fu_32425_p2() {
    tmp_352_fu_32425_p2 = (!tmp_351_fu_32415_p2.read().is_01() || !i150_cast_reg_45875.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_351_fu_32415_p2.read()) + sc_biguint<8>(i150_cast_reg_45875.read()));
}

void ShuffleNetV2::thread_tmp_353_cast_cast_fu_27666_p1() {
    tmp_353_cast_cast_fu_27666_p1 = esl_sext<8,7>(tmp_294_fu_27661_p2.read());
}

void ShuffleNetV2::thread_tmp_353_fu_32180_p2() {
    tmp_353_fu_32180_p2 = (!p_shl196_cast_fu_32166_p1.read().is_01() || !p_shl197_cast_fu_32176_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl196_cast_fu_32166_p1.read()) - sc_biguint<8>(p_shl197_cast_fu_32176_p1.read()));
}

void ShuffleNetV2::thread_tmp_354_cast_cast_fu_27716_p1() {
    tmp_354_cast_cast_fu_27716_p1 = esl_sext<9,7>(tmp_297_fu_27710_p2.read());
}

void ShuffleNetV2::thread_tmp_354_cast_fu_32234_p1() {
    tmp_354_cast_fu_32234_p1 = esl_sext<11,10>(tmp_354_reg_45834.read());
}

void ShuffleNetV2::thread_tmp_354_fu_32190_p2() {
    tmp_354_fu_32190_p2 = (!tmp_440_cast_cast_fu_32186_p1.read().is_01() || !tmp_435_cast_cast_reg_45803.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_440_cast_cast_fu_32186_p1.read()) + sc_biguint<10>(tmp_435_cast_cast_reg_45803.read()));
}

void ShuffleNetV2::thread_tmp_355_fu_32207_p2() {
    tmp_355_fu_32207_p2 = (!p_shl198_cast_fu_32203_p1.read().is_01() || !p_shl196_cast1_fu_32162_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl198_cast_fu_32203_p1.read()) - sc_biguint<10>(p_shl196_cast1_fu_32162_p1.read()));
}

void ShuffleNetV2::thread_tmp_356_cast_fu_27755_p1() {
    tmp_356_cast_fu_27755_p1 = esl_sext<11,8>(tmp_299_fu_27749_p2.read());
}

void ShuffleNetV2::thread_tmp_356_fu_32846_p2() {
    tmp_356_fu_32846_p2 = (!p_shl201_cast_fu_32832_p1.read().is_01() || !p_shl202_cast_fu_32842_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl201_cast_fu_32832_p1.read()) - sc_biguint<8>(p_shl202_cast_fu_32842_p1.read()));
}

void ShuffleNetV2::thread_tmp_357_fu_32756_p2() {
    tmp_357_fu_32756_p2 = (!p_shl199_cast_fu_32740_p1.read().is_01() || !p_shl200_cast_fu_32752_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl199_cast_fu_32740_p1.read()) - sc_biguint<8>(p_shl200_cast_fu_32752_p1.read()));
}

void ShuffleNetV2::thread_tmp_358_cast_fu_28324_p1() {
    tmp_358_cast_fu_28324_p1 = esl_sext<11,7>(tmp_301_fu_28318_p2.read());
}

void ShuffleNetV2::thread_tmp_358_fu_32766_p2() {
    tmp_358_fu_32766_p2 = (!tmp_357_fu_32756_p2.read().is_01() || !i153_cast_reg_46008.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_357_fu_32756_p2.read()) + sc_biguint<8>(i153_cast_reg_46008.read()));
}

void ShuffleNetV2::thread_tmp_359_cast_fu_28358_p1() {
    tmp_359_cast_fu_28358_p1 = esl_sext<32,7>(tmp_302_reg_44628.read());
}

void ShuffleNetV2::thread_tmp_359_fu_32886_p2() {
    tmp_359_fu_32886_p2 = (!tmp_356_reg_46058.read().is_01() || !ci68_cast_fu_32866_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_356_reg_46058.read()) + sc_biguint<8>(ci68_cast_fu_32866_p1.read()));
}

void ShuffleNetV2::thread_tmp_360_fu_32563_p2() {
    tmp_360_fu_32563_p2 = (!p_shl203_cast_fu_32547_p1.read().is_01() || !p_shl204_cast_fu_32559_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl203_cast_fu_32547_p1.read()) - sc_biguint<8>(p_shl204_cast_fu_32559_p1.read()));
}

void ShuffleNetV2::thread_tmp_361_fu_32573_p2() {
    tmp_361_fu_32573_p2 = (!co148_cast1_reg_45917.read().is_01() || !tmp_360_fu_32563_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co148_cast1_reg_45917.read()) + sc_biguint<8>(tmp_360_fu_32563_p2.read()));
}

void ShuffleNetV2::thread_tmp_362_fu_33172_p2() {
    tmp_362_fu_33172_p2 = (!p_shl205_cast_fu_33156_p1.read().is_01() || !p_shl206_cast_fu_33168_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl205_cast_fu_33156_p1.read()) - sc_biguint<8>(p_shl206_cast_fu_33168_p1.read()));
}

void ShuffleNetV2::thread_tmp_363_cast_cast_fu_28422_p1() {
    tmp_363_cast_cast_fu_28422_p1 = esl_zext<9,4>(tmp_2200_fu_28412_p4.read());
}

void ShuffleNetV2::thread_tmp_363_fu_33182_p2() {
    tmp_363_fu_33182_p2 = (!tmp_362_fu_33172_p2.read().is_01() || !i157_cast1_reg_46135.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_362_fu_33172_p2.read()) + sc_biguint<8>(i157_cast1_reg_46135.read()));
}

void ShuffleNetV2::thread_tmp_364_cast_cast_fu_28119_p1() {
    tmp_364_cast_cast_fu_28119_p1 = esl_sext<8,7>(tmp_304_fu_28113_p2.read());
}

void ShuffleNetV2::thread_tmp_364_fu_32937_p2() {
    tmp_364_fu_32937_p2 = (!p_shl207_cast_fu_32923_p1.read().is_01() || !p_shl208_cast_fu_32933_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl207_cast_fu_32923_p1.read()) - sc_biguint<8>(p_shl208_cast_fu_32933_p1.read()));
}

void ShuffleNetV2::thread_tmp_365_cast_cast_fu_28128_p1() {
    tmp_365_cast_cast_fu_28128_p1 = esl_sext<10,7>(tmp_305_fu_28123_p2.read());
}

void ShuffleNetV2::thread_tmp_365_cast_fu_32991_p1() {
    tmp_365_cast_fu_32991_p1 = esl_sext<11,10>(tmp_365_reg_46094.read());
}

void ShuffleNetV2::thread_tmp_365_fu_32947_p2() {
    tmp_365_fu_32947_p2 = (!tmp_457_cast_cast_fu_32943_p1.read().is_01() || !tmp_449_cast_cast_reg_46063.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_457_cast_cast_fu_32943_p1.read()) + sc_biguint<10>(tmp_449_cast_cast_reg_46063.read()));
}

void ShuffleNetV2::thread_tmp_366_fu_32964_p2() {
    tmp_366_fu_32964_p2 = (!p_shl209_cast_fu_32960_p1.read().is_01() || !p_shl207_cast1_fu_32919_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl209_cast_fu_32960_p1.read()) - sc_biguint<10>(p_shl207_cast1_fu_32919_p1.read()));
}

void ShuffleNetV2::thread_tmp_367_cast_fu_28760_p1() {
    tmp_367_cast_fu_28760_p1 = esl_sext<11,7>(tmp_306_fu_28754_p2.read());
}

void ShuffleNetV2::thread_tmp_367_fu_33603_p2() {
    tmp_367_fu_33603_p2 = (!p_shl212_cast_fu_33589_p1.read().is_01() || !p_shl213_cast_fu_33599_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl212_cast_fu_33589_p1.read()) - sc_biguint<8>(p_shl213_cast_fu_33599_p1.read()));
}

void ShuffleNetV2::thread_tmp_368_cast_fu_28794_p1() {
    tmp_368_cast_fu_28794_p1 = esl_sext<32,7>(tmp_307_reg_44755.read());
}

void ShuffleNetV2::thread_tmp_368_fu_33517_p2() {
    tmp_368_fu_33517_p2 = (!p_shl210_cast_fu_33501_p1.read().is_01() || !p_shl211_cast_fu_33513_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl210_cast_fu_33501_p1.read()) - sc_biguint<8>(p_shl211_cast_fu_33513_p1.read()));
}

void ShuffleNetV2::thread_tmp_369_fu_33527_p2() {
    tmp_369_fu_33527_p2 = (!tmp_368_fu_33517_p2.read().is_01() || !i161_cast1_reg_46268.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_368_fu_33517_p2.read()) + sc_biguint<8>(i161_cast1_reg_46268.read()));
}

void ShuffleNetV2::thread_tmp_370_cast_cast_fu_28451_p1() {
    tmp_370_cast_cast_fu_28451_p1 = esl_sext<8,7>(tmp_303_fu_28446_p2.read());
}

void ShuffleNetV2::thread_tmp_370_fu_33643_p2() {
    tmp_370_fu_33643_p2 = (!tmp_367_reg_46318.read().is_01() || !ci70_cast_fu_33623_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_367_reg_46318.read()) + sc_biguint<8>(ci70_cast_fu_33623_p1.read()));
}

void ShuffleNetV2::thread_tmp_371_cast_cast_fu_28501_p1() {
    tmp_371_cast_cast_fu_28501_p1 = esl_sext<9,7>(tmp_308_fu_28495_p2.read());
}

void ShuffleNetV2::thread_tmp_371_fu_33324_p2() {
    tmp_371_fu_33324_p2 = (!p_shl214_cast_fu_33308_p1.read().is_01() || !p_shl215_cast_fu_33320_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl214_cast_fu_33308_p1.read()) - sc_biguint<8>(p_shl215_cast_fu_33320_p1.read()));
}

void ShuffleNetV2::thread_tmp_372_fu_33334_p2() {
    tmp_372_fu_33334_p2 = (!co152_cast1_reg_46177.read().is_01() || !tmp_371_fu_33324_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co152_cast1_reg_46177.read()) + sc_biguint<8>(tmp_371_fu_33324_p2.read()));
}

void ShuffleNetV2::thread_tmp_373_cast_fu_28540_p1() {
    tmp_373_cast_fu_28540_p1 = esl_sext<11,8>(tmp_310_fu_28534_p2.read());
}

void ShuffleNetV2::thread_tmp_373_fu_34023_p2() {
    tmp_373_fu_34023_p2 = (!co156_cast_fu_34007_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co156_cast_fu_34007_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_374_fu_33929_p2() {
    tmp_374_fu_33929_p2 = (!p_shl216_cast_fu_33913_p1.read().is_01() || !p_shl217_cast_fu_33925_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl216_cast_fu_33913_p1.read()) - sc_biguint<8>(p_shl217_cast_fu_33925_p1.read()));
}

void ShuffleNetV2::thread_tmp_375_fu_33939_p2() {
    tmp_375_fu_33939_p2 = (!tmp_374_fu_33929_p2.read().is_01() || !i165_cast1_reg_46395.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_374_fu_33929_p2.read()) + sc_biguint<8>(i165_cast1_reg_46395.read()));
}

void ShuffleNetV2::thread_tmp_376_fu_33694_p2() {
    tmp_376_fu_33694_p2 = (!p_shl220_cast_fu_33680_p1.read().is_01() || !p_shl221_cast_fu_33690_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl220_cast_fu_33680_p1.read()) - sc_biguint<8>(p_shl221_cast_fu_33690_p1.read()));
}

void ShuffleNetV2::thread_tmp_377_cast_fu_33748_p1() {
    tmp_377_cast_fu_33748_p1 = esl_sext<11,10>(tmp_377_reg_46354.read());
}

void ShuffleNetV2::thread_tmp_377_fu_33704_p2() {
    tmp_377_fu_33704_p2 = (!tmp_478_cast_cast_fu_33700_p1.read().is_01() || !tmp_466_cast_cast_reg_46323.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_478_cast_cast_fu_33700_p1.read()) + sc_biguint<10>(tmp_466_cast_cast_reg_46323.read()));
}

void ShuffleNetV2::thread_tmp_378_cast_cast_fu_29188_p1() {
    tmp_378_cast_cast_fu_29188_p1 = esl_zext<9,4>(tmp_2213_fu_29178_p4.read());
}

void ShuffleNetV2::thread_tmp_378_fu_33721_p2() {
    tmp_378_fu_33721_p2 = (!p_shl222_cast_fu_33717_p1.read().is_01() || !p_shl220_cast1_fu_33676_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl222_cast_fu_33717_p1.read()) - sc_biguint<10>(p_shl220_cast1_fu_33676_p1.read()));
}

void ShuffleNetV2::thread_tmp_379_cast_fu_29534_p1() {
    tmp_379_cast_fu_29534_p1 = esl_sext<11,7>(tmp_314_fu_29528_p2.read());
}

void ShuffleNetV2::thread_tmp_379_fu_34226_p2() {
    tmp_379_fu_34226_p2 = (!p_shl218_cast_fu_34212_p1.read().is_01() || !p_shl219_cast_fu_34222_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl218_cast_fu_34212_p1.read()) - sc_biguint<8>(p_shl219_cast_fu_34222_p1.read()));
}

void ShuffleNetV2::thread_tmp_380_cast_fu_29568_p1() {
    tmp_380_cast_fu_29568_p1 = esl_sext<32,7>(tmp_315_reg_44980.read());
}

void ShuffleNetV2::thread_tmp_380_fu_34266_p2() {
    tmp_380_fu_34266_p2 = (!tmp_379_reg_46499.read().is_01() || !ci72_cast_fu_34246_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_379_reg_46499.read()) + sc_biguint<8>(ci72_cast_fu_34246_p1.read()));
}

void ShuffleNetV2::thread_tmp_381_fu_34552_p2() {
    tmp_381_fu_34552_p2 = (!p_shl223_cast_fu_34536_p1.read().is_01() || !p_shl224_cast_fu_34548_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl223_cast_fu_34536_p1.read()) - sc_biguint<8>(p_shl224_cast_fu_34548_p1.read()));
}

void ShuffleNetV2::thread_tmp_382_cast_cast_fu_29217_p1() {
    tmp_382_cast_cast_fu_29217_p1 = esl_sext<8,7>(tmp_313_fu_29212_p2.read());
}

void ShuffleNetV2::thread_tmp_382_fu_34562_p2() {
    tmp_382_fu_34562_p2 = (!tmp_381_fu_34552_p2.read().is_01() || !i170_cast1_reg_46576.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_381_fu_34552_p2.read()) + sc_biguint<8>(i170_cast1_reg_46576.read()));
}

void ShuffleNetV2::thread_tmp_383_cast_cast_fu_29267_p1() {
    tmp_383_cast_cast_fu_29267_p1 = esl_sext<9,7>(tmp_316_fu_29261_p2.read());
}

void ShuffleNetV2::thread_tmp_383_fu_34317_p2() {
    tmp_383_fu_34317_p2 = (!p_shl225_cast_fu_34303_p1.read().is_01() || !p_shl226_cast_fu_34313_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl225_cast_fu_34303_p1.read()) - sc_biguint<8>(p_shl226_cast_fu_34313_p1.read()));
}

void ShuffleNetV2::thread_tmp_384_cast_fu_34371_p1() {
    tmp_384_cast_fu_34371_p1 = esl_sext<11,10>(tmp_384_reg_46535.read());
}

void ShuffleNetV2::thread_tmp_384_fu_34327_p2() {
    tmp_384_fu_34327_p2 = (!tmp_486_cast_cast_fu_34323_p1.read().is_01() || !tmp_477_cast_cast_reg_46504.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_486_cast_cast_fu_34323_p1.read()) + sc_biguint<10>(tmp_477_cast_cast_reg_46504.read()));
}

void ShuffleNetV2::thread_tmp_385_cast_cast_fu_29306_p1() {
    tmp_385_cast_cast_fu_29306_p1 = esl_sext<10,8>(tmp_318_fu_29300_p2.read());
}

void ShuffleNetV2::thread_tmp_385_fu_34344_p2() {
    tmp_385_fu_34344_p2 = (!p_shl227_cast_fu_34340_p1.read().is_01() || !p_shl225_cast1_fu_34299_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl227_cast_fu_34340_p1.read()) - sc_biguint<10>(p_shl225_cast1_fu_34299_p1.read()));
}

void ShuffleNetV2::thread_tmp_386_fu_34975_p2() {
    tmp_386_fu_34975_p2 = (!p_shl230_cast_fu_34961_p1.read().is_01() || !p_shl231_cast_fu_34971_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl230_cast_fu_34961_p1.read()) - sc_biguint<8>(p_shl231_cast_fu_34971_p1.read()));
}

void ShuffleNetV2::thread_tmp_387_cast_fu_29875_p1() {
    tmp_387_cast_fu_29875_p1 = esl_sext<11,7>(tmp_320_fu_29869_p2.read());
}

void ShuffleNetV2::thread_tmp_387_fu_34889_p2() {
    tmp_387_fu_34889_p2 = (!p_shl228_cast_fu_34873_p1.read().is_01() || !p_shl229_cast_fu_34885_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl228_cast_fu_34873_p1.read()) - sc_biguint<8>(p_shl229_cast_fu_34885_p1.read()));
}

void ShuffleNetV2::thread_tmp_388_cast_fu_29909_p1() {
    tmp_388_cast_fu_29909_p1 = esl_sext<32,7>(tmp_321_reg_45113.read());
}

void ShuffleNetV2::thread_tmp_388_fu_34899_p2() {
    tmp_388_fu_34899_p2 = (!tmp_387_fu_34889_p2.read().is_01() || !i173_cast1_reg_46709.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_387_fu_34889_p2.read()) + sc_biguint<8>(i173_cast1_reg_46709.read()));
}

void ShuffleNetV2::thread_tmp_389_fu_35015_p2() {
    tmp_389_fu_35015_p2 = (!tmp_386_reg_46759.read().is_01() || !ci74_cast_fu_34995_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_386_reg_46759.read()) + sc_biguint<8>(ci74_cast_fu_34995_p1.read()));
}

void ShuffleNetV2::thread_tmp_390_fu_34696_p2() {
    tmp_390_fu_34696_p2 = (!p_shl232_cast_fu_34680_p1.read().is_01() || !p_shl233_cast_fu_34692_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl232_cast_fu_34680_p1.read()) - sc_biguint<8>(p_shl233_cast_fu_34692_p1.read()));
}

void ShuffleNetV2::thread_tmp_391_fu_34706_p2() {
    tmp_391_fu_34706_p2 = (!co160_cast1_reg_46618.read().is_01() || !tmp_390_fu_34696_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co160_cast1_reg_46618.read()) + sc_biguint<8>(tmp_390_fu_34696_p2.read()));
}

void ShuffleNetV2::thread_tmp_392_cast_cast_fu_29973_p1() {
    tmp_392_cast_cast_fu_29973_p1 = esl_zext<9,4>(tmp_2224_fu_29963_p4.read());
}

void ShuffleNetV2::thread_tmp_392_fu_35309_p2() {
    tmp_392_fu_35309_p2 = (!p_shl234_cast_fu_35293_p1.read().is_01() || !p_shl235_cast_fu_35305_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl234_cast_fu_35293_p1.read()) - sc_biguint<8>(p_shl235_cast_fu_35305_p1.read()));
}

void ShuffleNetV2::thread_tmp_393_cast_fu_29678_p1() {
    tmp_393_cast_fu_29678_p1 = esl_sext<10,7>(tmp_323_fu_29672_p2.read());
}

void ShuffleNetV2::thread_tmp_393_fu_35319_p2() {
    tmp_393_fu_35319_p2 = (!tmp_392_fu_35309_p2.read().is_01() || !i177_cast1_reg_46836.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_392_fu_35309_p2.read()) + sc_biguint<8>(i177_cast1_reg_46836.read()));
}

void ShuffleNetV2::thread_tmp_394_cast_cast_fu_29687_p1() {
    tmp_394_cast_cast_fu_29687_p1 = esl_sext<10,7>(tmp_324_fu_29682_p2.read());
}

void ShuffleNetV2::thread_tmp_394_fu_35066_p2() {
    tmp_394_fu_35066_p2 = (!p_shl236_cast_fu_35052_p1.read().is_01() || !p_shl237_cast_fu_35062_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl236_cast_fu_35052_p1.read()) - sc_biguint<8>(p_shl237_cast_fu_35062_p1.read()));
}

void ShuffleNetV2::thread_tmp_395_cast_fu_35120_p1() {
    tmp_395_cast_fu_35120_p1 = esl_sext<11,10>(tmp_395_reg_46795.read());
}

void ShuffleNetV2::thread_tmp_395_fu_35076_p2() {
    tmp_395_fu_35076_p2 = (!tmp_495_cast_cast_reg_46764.read().is_01() || !tmp_503_cast_cast_fu_35072_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_495_cast_cast_reg_46764.read()) + sc_bigint<10>(tmp_503_cast_cast_fu_35072_p1.read()));
}

void ShuffleNetV2::thread_tmp_396_cast_cast_fu_30319_p1() {
    tmp_396_cast_cast_fu_30319_p1 = esl_sext<10,7>(tmp_325_fu_30313_p2.read());
}

void ShuffleNetV2::thread_tmp_396_fu_35093_p2() {
    tmp_396_fu_35093_p2 = (!p_shl238_cast_fu_35089_p1.read().is_01() || !p_shl236_cast1_fu_35048_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl238_cast_fu_35089_p1.read()) - sc_biguint<10>(p_shl236_cast1_fu_35048_p1.read()));
}

void ShuffleNetV2::thread_tmp_397_cast_fu_30357_p1() {
    tmp_397_cast_fu_30357_p1 = esl_sext<32,7>(tmp_326_reg_45240.read());
}

void ShuffleNetV2::thread_tmp_397_fu_35526_p2() {
    tmp_397_fu_35526_p2 = (!co166_cast_fu_35510_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co166_cast_fu_35510_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_398_fu_35729_p2() {
    tmp_398_fu_35729_p2 = (!p_shl239_cast_fu_35715_p1.read().is_01() || !p_shl240_cast_fu_35725_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl239_cast_fu_35715_p1.read()) - sc_biguint<8>(p_shl240_cast_fu_35725_p1.read()));
}

void ShuffleNetV2::thread_tmp_399_cast_cast_fu_30002_p1() {
    tmp_399_cast_cast_fu_30002_p1 = esl_sext<8,7>(tmp_322_fu_29997_p2.read());
}

void ShuffleNetV2::thread_tmp_399_fu_35769_p2() {
    tmp_399_fu_35769_p2 = (!tmp_398_reg_46984.read().is_01() || !ci76_cast_fu_35749_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_398_reg_46984.read()) + sc_biguint<8>(ci76_cast_fu_35749_p1.read()));
}

void ShuffleNetV2::thread_tmp_400_cast_cast_fu_30052_p1() {
    tmp_400_cast_cast_fu_30052_p1 = esl_sext<9,7>(tmp_327_fu_30046_p2.read());
}

void ShuffleNetV2::thread_tmp_400_fu_36055_p2() {
    tmp_400_fu_36055_p2 = (!p_shl241_cast_fu_36039_p1.read().is_01() || !p_shl242_cast_fu_36051_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl241_cast_fu_36039_p1.read()) - sc_biguint<8>(p_shl242_cast_fu_36051_p1.read()));
}

void ShuffleNetV2::thread_tmp_401_fu_36065_p2() {
    tmp_401_fu_36065_p2 = (!tmp_400_fu_36055_p2.read().is_01() || !i182_cast1_reg_47061.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_400_fu_36055_p2.read()) + sc_biguint<8>(i182_cast1_reg_47061.read()));
}

void ShuffleNetV2::thread_tmp_402_cast_cast_fu_30091_p1() {
    tmp_402_cast_cast_fu_30091_p1 = esl_sext<10,8>(tmp_329_fu_30085_p2.read());
}

void ShuffleNetV2::thread_tmp_402_fu_35820_p2() {
    tmp_402_fu_35820_p2 = (!p_shl243_cast_fu_35806_p1.read().is_01() || !p_shl244_cast_fu_35816_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl243_cast_fu_35806_p1.read()) - sc_biguint<8>(p_shl244_cast_fu_35816_p1.read()));
}

void ShuffleNetV2::thread_tmp_403_cast_fu_35874_p1() {
    tmp_403_cast_fu_35874_p1 = esl_sext<11,10>(tmp_403_reg_47020.read());
}

void ShuffleNetV2::thread_tmp_403_fu_35830_p2() {
    tmp_403_fu_35830_p2 = (!tmp_515_cast_cast_fu_35826_p1.read().is_01() || !tmp_510_cast_cast_reg_46989.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_515_cast_cast_fu_35826_p1.read()) + sc_biguint<10>(tmp_510_cast_cast_reg_46989.read()));
}

void ShuffleNetV2::thread_tmp_404_fu_35847_p2() {
    tmp_404_fu_35847_p2 = (!p_shl245_cast_fu_35843_p1.read().is_01() || !p_shl243_cast1_fu_35802_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl245_cast_fu_35843_p1.read()) - sc_biguint<10>(p_shl243_cast1_fu_35802_p1.read()));
}

void ShuffleNetV2::thread_tmp_405_fu_36490_p2() {
    tmp_405_fu_36490_p2 = (!p_shl248_cast_fu_36476_p1.read().is_01() || !p_shl249_cast_fu_36486_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl248_cast_fu_36476_p1.read()) - sc_biguint<8>(p_shl249_cast_fu_36486_p1.read()));
}

void ShuffleNetV2::thread_tmp_406_fu_36404_p2() {
    tmp_406_fu_36404_p2 = (!p_shl246_cast_fu_36388_p1.read().is_01() || !p_shl247_cast_fu_36400_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl246_cast_fu_36388_p1.read()) - sc_biguint<8>(p_shl247_cast_fu_36400_p1.read()));
}

void ShuffleNetV2::thread_tmp_407_cast_cast_fu_30751_p1() {
    tmp_407_cast_cast_fu_30751_p1 = esl_zext<9,4>(tmp_2237_fu_30741_p4.read());
}

void ShuffleNetV2::thread_tmp_407_fu_36414_p2() {
    tmp_407_fu_36414_p2 = (!tmp_406_fu_36404_p2.read().is_01() || !i185_cast1_reg_47194.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_406_fu_36404_p2.read()) + sc_biguint<8>(i185_cast1_reg_47194.read()));
}

void ShuffleNetV2::thread_tmp_408_cast_cast_fu_31097_p1() {
    tmp_408_cast_cast_fu_31097_p1 = esl_sext<10,7>(tmp_333_fu_31091_p2.read());
}

void ShuffleNetV2::thread_tmp_408_fu_36530_p2() {
    tmp_408_fu_36530_p2 = (!tmp_405_reg_47244.read().is_01() || !ci78_cast_fu_36510_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_405_reg_47244.read()) + sc_biguint<8>(ci78_cast_fu_36510_p1.read()));
}

void ShuffleNetV2::thread_tmp_409_cast_fu_31135_p1() {
    tmp_409_cast_fu_31135_p1 = esl_sext<32,7>(tmp_334_reg_45465.read());
}

void ShuffleNetV2::thread_tmp_409_fu_36199_p2() {
    tmp_409_fu_36199_p2 = (!p_shl250_cast_fu_36183_p1.read().is_01() || !p_shl251_cast_fu_36195_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl250_cast_fu_36183_p1.read()) - sc_biguint<8>(p_shl251_cast_fu_36195_p1.read()));
}

void ShuffleNetV2::thread_tmp_410_fu_36209_p2() {
    tmp_410_fu_36209_p2 = (!tmp_409_fu_36199_p2.read().is_01() || !co170_cast_reg_47103.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_409_fu_36199_p2.read()) + sc_biguint<8>(co170_cast_reg_47103.read()));
}

void ShuffleNetV2::thread_tmp_411_cast_cast_fu_30780_p1() {
    tmp_411_cast_cast_fu_30780_p1 = esl_sext<8,7>(tmp_332_fu_30775_p2.read());
}

void ShuffleNetV2::thread_tmp_411_fu_36816_p2() {
    tmp_411_fu_36816_p2 = (!p_shl252_cast_fu_36800_p1.read().is_01() || !p_shl253_cast_fu_36812_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl252_cast_fu_36800_p1.read()) - sc_biguint<8>(p_shl253_cast_fu_36812_p1.read()));
}

void ShuffleNetV2::thread_tmp_412_cast_cast_fu_30830_p1() {
    tmp_412_cast_cast_fu_30830_p1 = esl_sext<9,7>(tmp_335_fu_30824_p2.read());
}

void ShuffleNetV2::thread_tmp_412_fu_36826_p2() {
    tmp_412_fu_36826_p2 = (!tmp_411_fu_36816_p2.read().is_01() || !i189_cast1_reg_47321.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_411_fu_36816_p2.read()) + sc_biguint<8>(i189_cast1_reg_47321.read()));
}

void ShuffleNetV2::thread_tmp_413_fu_36581_p2() {
    tmp_413_fu_36581_p2 = (!p_shl254_cast_fu_36567_p1.read().is_01() || !p_shl255_cast_fu_36577_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl254_cast_fu_36567_p1.read()) - sc_biguint<8>(p_shl255_cast_fu_36577_p1.read()));
}

void ShuffleNetV2::thread_tmp_414_cast_cast_fu_30869_p1() {
    tmp_414_cast_cast_fu_30869_p1 = esl_sext<9,8>(tmp_337_fu_30863_p2.read());
}

void ShuffleNetV2::thread_tmp_414_cast_fu_36635_p1() {
    tmp_414_cast_fu_36635_p1 = esl_sext<11,10>(tmp_414_reg_47280.read());
}

void ShuffleNetV2::thread_tmp_414_fu_36591_p2() {
    tmp_414_fu_36591_p2 = (!tmp_532_cast_cast_fu_36587_p1.read().is_01() || !tmp_524_cast_cast_reg_47249.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_532_cast_cast_fu_36587_p1.read()) + sc_biguint<10>(tmp_524_cast_cast_reg_47249.read()));
}

void ShuffleNetV2::thread_tmp_415_fu_36608_p2() {
    tmp_415_fu_36608_p2 = (!p_shl256_cast_fu_36604_p1.read().is_01() || !p_shl254_cast1_fu_36563_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl256_cast_fu_36604_p1.read()) - sc_biguint<10>(p_shl254_cast1_fu_36563_p1.read()));
}

void ShuffleNetV2::thread_tmp_416_cast_cast_fu_31438_p1() {
    tmp_416_cast_cast_fu_31438_p1 = esl_sext<10,7>(tmp_339_fu_31432_p2.read());
}

void ShuffleNetV2::thread_tmp_416_fu_37033_p2() {
    tmp_416_fu_37033_p2 = (!co176_cast_fu_37017_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co176_cast_fu_37017_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_417_cast_fu_31476_p1() {
    tmp_417_cast_fu_31476_p1 = esl_sext<32,7>(tmp_340_reg_45598.read());
}

void ShuffleNetV2::thread_tmp_417_fu_37236_p2() {
    tmp_417_fu_37236_p2 = (!p_shl257_cast_fu_37222_p1.read().is_01() || !p_shl258_cast_fu_37232_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl257_cast_fu_37222_p1.read()) - sc_biguint<8>(p_shl258_cast_fu_37232_p1.read()));
}

void ShuffleNetV2::thread_tmp_418_fu_37276_p2() {
    tmp_418_fu_37276_p2 = (!tmp_417_reg_47469.read().is_01() || !ci80_cast_fu_37256_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_417_reg_47469.read()) + sc_biguint<8>(ci80_cast_fu_37256_p1.read()));
}

void ShuffleNetV2::thread_tmp_419_fu_37562_p2() {
    tmp_419_fu_37562_p2 = (!p_shl259_cast_fu_37546_p1.read().is_01() || !p_shl260_cast_fu_37558_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl259_cast_fu_37546_p1.read()) - sc_biguint<8>(p_shl260_cast_fu_37558_p1.read()));
}

void ShuffleNetV2::thread_tmp_420_fu_37572_p2() {
    tmp_420_fu_37572_p2 = (!tmp_419_fu_37562_p2.read().is_01() || !i194_cast1_reg_47546.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_419_fu_37562_p2.read()) + sc_biguint<8>(i194_cast1_reg_47546.read()));
}

void ShuffleNetV2::thread_tmp_421_cast_cast_fu_31540_p1() {
    tmp_421_cast_cast_fu_31540_p1 = esl_zext<9,4>(tmp_2248_fu_31530_p4.read());
}

void ShuffleNetV2::thread_tmp_421_fu_37327_p2() {
    tmp_421_fu_37327_p2 = (!p_shl261_cast_fu_37313_p1.read().is_01() || !p_shl262_cast_fu_37323_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl261_cast_fu_37313_p1.read()) - sc_biguint<8>(p_shl262_cast_fu_37323_p1.read()));
}

void ShuffleNetV2::thread_tmp_422_cast1_fu_37381_p1() {
    tmp_422_cast1_fu_37381_p1 = esl_sext<11,10>(tmp_422_reg_47505.read());
}

void ShuffleNetV2::thread_tmp_422_cast_fu_31245_p1() {
    tmp_422_cast_fu_31245_p1 = esl_sext<10,7>(tmp_342_fu_31239_p2.read());
}

void ShuffleNetV2::thread_tmp_422_fu_37337_p2() {
    tmp_422_fu_37337_p2 = (!tmp_544_cast_cast_fu_37333_p1.read().is_01() || !tmp_539_cast_cast_reg_47474.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_544_cast_cast_fu_37333_p1.read()) + sc_biguint<10>(tmp_539_cast_cast_reg_47474.read()));
}

void ShuffleNetV2::thread_tmp_423_cast_cast_fu_31254_p1() {
    tmp_423_cast_cast_fu_31254_p1 = esl_sext<10,7>(tmp_343_fu_31249_p2.read());
}

void ShuffleNetV2::thread_tmp_423_fu_37354_p2() {
    tmp_423_fu_37354_p2 = (!p_shl263_cast_fu_37350_p1.read().is_01() || !p_shl261_cast1_fu_37309_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl263_cast_fu_37350_p1.read()) - sc_biguint<10>(p_shl261_cast1_fu_37309_p1.read()));
}

void ShuffleNetV2::thread_tmp_424_fu_37989_p2() {
    tmp_424_fu_37989_p2 = (!p_shl266_cast_fu_37975_p1.read().is_01() || !p_shl267_cast_fu_37985_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl266_cast_fu_37975_p1.read()) - sc_biguint<8>(p_shl267_cast_fu_37985_p1.read()));
}

void ShuffleNetV2::thread_tmp_425_cast_cast_fu_31886_p1() {
    tmp_425_cast_cast_fu_31886_p1 = esl_sext<10,7>(tmp_344_fu_31880_p2.read());
}

void ShuffleNetV2::thread_tmp_425_fu_37903_p2() {
    tmp_425_fu_37903_p2 = (!p_shl264_cast_fu_37887_p1.read().is_01() || !p_shl265_cast_fu_37899_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl264_cast_fu_37887_p1.read()) - sc_biguint<8>(p_shl265_cast_fu_37899_p1.read()));
}

void ShuffleNetV2::thread_tmp_426_cast_fu_31924_p1() {
    tmp_426_cast_fu_31924_p1 = esl_sext<32,7>(tmp_345_reg_45725.read());
}

void ShuffleNetV2::thread_tmp_426_fu_37913_p2() {
    tmp_426_fu_37913_p2 = (!tmp_425_fu_37903_p2.read().is_01() || !i197_cast1_reg_47679.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_425_fu_37903_p2.read()) + sc_biguint<8>(i197_cast1_reg_47679.read()));
}

void ShuffleNetV2::thread_tmp_427_fu_38029_p2() {
    tmp_427_fu_38029_p2 = (!tmp_424_reg_47729.read().is_01() || !ci82_cast_fu_38009_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_424_reg_47729.read()) + sc_biguint<8>(ci82_cast_fu_38009_p1.read()));
}

void ShuffleNetV2::thread_tmp_428_cast_cast_fu_31569_p1() {
    tmp_428_cast_cast_fu_31569_p1 = esl_sext<8,7>(tmp_341_fu_31564_p2.read());
}

void ShuffleNetV2::thread_tmp_428_fu_37706_p2() {
    tmp_428_fu_37706_p2 = (!p_shl268_cast_fu_37690_p1.read().is_01() || !p_shl269_cast_fu_37702_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl268_cast_fu_37690_p1.read()) - sc_biguint<8>(p_shl269_cast_fu_37702_p1.read()));
}

void ShuffleNetV2::thread_tmp_429_cast_cast_fu_31619_p1() {
    tmp_429_cast_cast_fu_31619_p1 = esl_sext<9,7>(tmp_346_fu_31613_p2.read());
}

void ShuffleNetV2::thread_tmp_429_fu_37716_p2() {
    tmp_429_fu_37716_p2 = (!co180_cast1_reg_47588.read().is_01() || !tmp_428_fu_37706_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co180_cast1_reg_47588.read()) + sc_biguint<8>(tmp_428_fu_37706_p2.read()));
}

void ShuffleNetV2::thread_tmp_430_fu_38315_p2() {
    tmp_430_fu_38315_p2 = (!p_shl270_cast_fu_38299_p1.read().is_01() || !p_shl271_cast_fu_38311_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl270_cast_fu_38299_p1.read()) - sc_biguint<8>(p_shl271_cast_fu_38311_p1.read()));
}

void ShuffleNetV2::thread_tmp_431_cast_cast_fu_31658_p1() {
    tmp_431_cast_cast_fu_31658_p1 = esl_sext<9,8>(tmp_348_fu_31652_p2.read());
}

void ShuffleNetV2::thread_tmp_431_fu_38325_p2() {
    tmp_431_fu_38325_p2 = (!tmp_430_fu_38315_p2.read().is_01() || !i201_cast1_reg_47806.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_430_fu_38315_p2.read()) + sc_biguint<8>(i201_cast1_reg_47806.read()));
}

void ShuffleNetV2::thread_tmp_432_fu_38080_p2() {
    tmp_432_fu_38080_p2 = (!p_shl272_cast_fu_38066_p1.read().is_01() || !p_shl273_cast_fu_38076_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl272_cast_fu_38066_p1.read()) - sc_biguint<8>(p_shl273_cast_fu_38076_p1.read()));
}

void ShuffleNetV2::thread_tmp_433_cast_fu_38134_p1() {
    tmp_433_cast_fu_38134_p1 = esl_sext<11,10>(tmp_433_reg_47765.read());
}

void ShuffleNetV2::thread_tmp_433_fu_38090_p2() {
    tmp_433_fu_38090_p2 = (!tmp_561_cast_cast_fu_38086_p1.read().is_01() || !tmp_553_cast_cast_reg_47734.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_561_cast_cast_fu_38086_p1.read()) + sc_biguint<10>(tmp_553_cast_cast_reg_47734.read()));
}

void ShuffleNetV2::thread_tmp_434_fu_38107_p2() {
    tmp_434_fu_38107_p2 = (!p_shl274_cast_fu_38103_p1.read().is_01() || !p_shl272_cast1_fu_38062_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl274_cast_fu_38103_p1.read()) - sc_biguint<10>(p_shl272_cast1_fu_38062_p1.read()));
}

void ShuffleNetV2::thread_tmp_435_cast_cast_fu_32105_p1() {
    tmp_435_cast_cast_fu_32105_p1 = esl_zext<10,3>(tmp_2260_fu_32095_p4.read());
}

void ShuffleNetV2::thread_tmp_436_cast_cast_fu_32421_p1() {
    tmp_436_cast_cast_fu_32421_p1 = esl_sext<10,8>(tmp_351_fu_32415_p2.read());
}

void ShuffleNetV2::thread_tmp_437_cast_fu_32459_p1() {
    tmp_437_cast_fu_32459_p1 = esl_sext<32,8>(tmp_352_reg_45896.read());
}

void ShuffleNetV2::thread_tmp_439_cast_cast_fu_32134_p1() {
    tmp_439_cast_cast_fu_32134_p1 = esl_sext<11,8>(tmp_350_fu_32129_p2.read());
}

void ShuffleNetV2::thread_tmp_440_cast_cast_fu_32186_p1() {
    tmp_440_cast_cast_fu_32186_p1 = esl_sext<10,8>(tmp_353_fu_32180_p2.read());
}

void ShuffleNetV2::thread_tmp_442_cast_fu_32213_p1() {
    tmp_442_cast_fu_32213_p1 = esl_sext<12,10>(tmp_355_fu_32207_p2.read());
}

void ShuffleNetV2::thread_tmp_444_cast_cast_fu_32762_p1() {
    tmp_444_cast_cast_fu_32762_p1 = esl_sext<9,8>(tmp_357_fu_32756_p2.read());
}

void ShuffleNetV2::thread_tmp_445_cast_fu_32800_p1() {
    tmp_445_cast_fu_32800_p1 = esl_sext<32,8>(tmp_358_reg_46029.read());
}

void ShuffleNetV2::thread_tmp_449_cast_cast_fu_32862_p1() {
    tmp_449_cast_cast_fu_32862_p1 = esl_zext<10,3>(tmp_2271_fu_32852_p4.read());
}

void ShuffleNetV2::thread_tmp_450_cast_fu_32569_p1() {
    tmp_450_cast_fu_32569_p1 = esl_sext<10,8>(tmp_360_fu_32563_p2.read());
}

void ShuffleNetV2::thread_tmp_451_cast_cast_fu_32578_p1() {
    tmp_451_cast_cast_fu_32578_p1 = esl_sext<11,8>(tmp_361_fu_32573_p2.read());
}

void ShuffleNetV2::thread_tmp_453_cast_cast_fu_33178_p1() {
    tmp_453_cast_cast_fu_33178_p1 = esl_sext<9,8>(tmp_362_fu_33172_p2.read());
}

void ShuffleNetV2::thread_tmp_454_cast_fu_33220_p1() {
    tmp_454_cast_fu_33220_p1 = esl_sext<32,8>(tmp_363_reg_46156.read());
}

void ShuffleNetV2::thread_tmp_456_cast_cast_fu_32891_p1() {
    tmp_456_cast_cast_fu_32891_p1 = esl_sext<11,8>(tmp_359_fu_32886_p2.read());
}

void ShuffleNetV2::thread_tmp_457_cast_cast_fu_32943_p1() {
    tmp_457_cast_cast_fu_32943_p1 = esl_sext<10,8>(tmp_364_fu_32937_p2.read());
}

void ShuffleNetV2::thread_tmp_459_cast_fu_32970_p1() {
    tmp_459_cast_fu_32970_p1 = esl_sext<12,10>(tmp_366_fu_32964_p2.read());
}

void ShuffleNetV2::thread_tmp_461_cast_fu_33523_p1() {
    tmp_461_cast_fu_33523_p1 = esl_sext<12,8>(tmp_368_fu_33517_p2.read());
}

void ShuffleNetV2::thread_tmp_462_cast_fu_33557_p1() {
    tmp_462_cast_fu_33557_p1 = esl_sext<32,8>(tmp_369_reg_46289.read());
}

void ShuffleNetV2::thread_tmp_466_cast_cast_fu_33619_p1() {
    tmp_466_cast_cast_fu_33619_p1 = esl_zext<10,3>(tmp_2284_fu_33609_p4.read());
}

void ShuffleNetV2::thread_tmp_467_cast_fu_33330_p1() {
    tmp_467_cast_fu_33330_p1 = esl_sext<10,8>(tmp_371_fu_33324_p2.read());
}

void ShuffleNetV2::thread_tmp_468_cast_cast_fu_33339_p1() {
    tmp_468_cast_cast_fu_33339_p1 = esl_sext<11,8>(tmp_372_fu_33334_p2.read());
}

void ShuffleNetV2::thread_tmp_470_cast_fu_33935_p1() {
    tmp_470_cast_fu_33935_p1 = esl_sext<12,8>(tmp_374_fu_33929_p2.read());
}

void ShuffleNetV2::thread_tmp_471_cast_fu_33969_p1() {
    tmp_471_cast_fu_33969_p1 = esl_sext<32,8>(tmp_375_reg_46416.read());
}

void ShuffleNetV2::thread_tmp_473_cast_cast_fu_33648_p1() {
    tmp_473_cast_cast_fu_33648_p1 = esl_sext<11,8>(tmp_370_fu_33643_p2.read());
}

void ShuffleNetV2::thread_tmp_477_cast_cast_fu_34242_p1() {
    tmp_477_cast_cast_fu_34242_p1 = esl_zext<10,3>(tmp_2297_fu_34232_p4.read());
}

void ShuffleNetV2::thread_tmp_478_cast_cast_fu_33700_p1() {
    tmp_478_cast_cast_fu_33700_p1 = esl_sext<10,8>(tmp_376_fu_33694_p2.read());
}

void ShuffleNetV2::thread_tmp_480_cast_fu_33727_p1() {
    tmp_480_cast_fu_33727_p1 = esl_sext<12,10>(tmp_378_fu_33721_p2.read());
}

void ShuffleNetV2::thread_tmp_482_cast_fu_34558_p1() {
    tmp_482_cast_fu_34558_p1 = esl_sext<12,8>(tmp_381_fu_34552_p2.read());
}

void ShuffleNetV2::thread_tmp_483_cast_fu_34592_p1() {
    tmp_483_cast_fu_34592_p1 = esl_sext<32,8>(tmp_382_reg_46597.read());
}

void ShuffleNetV2::thread_tmp_485_cast_cast_fu_34271_p1() {
    tmp_485_cast_cast_fu_34271_p1 = esl_sext<11,8>(tmp_380_fu_34266_p2.read());
}

void ShuffleNetV2::thread_tmp_486_cast_cast_fu_34323_p1() {
    tmp_486_cast_cast_fu_34323_p1 = esl_sext<10,8>(tmp_383_fu_34317_p2.read());
}

void ShuffleNetV2::thread_tmp_488_cast_fu_34350_p1() {
    tmp_488_cast_fu_34350_p1 = esl_sext<12,10>(tmp_385_fu_34344_p2.read());
}

void ShuffleNetV2::thread_tmp_490_cast_fu_34895_p1() {
    tmp_490_cast_fu_34895_p1 = esl_sext<12,8>(tmp_387_fu_34889_p2.read());
}

void ShuffleNetV2::thread_tmp_491_cast_fu_34929_p1() {
    tmp_491_cast_fu_34929_p1 = esl_sext<32,8>(tmp_388_reg_46730.read());
}

void ShuffleNetV2::thread_tmp_495_cast_cast_fu_34991_p1() {
    tmp_495_cast_cast_fu_34991_p1 = esl_zext<10,3>(tmp_2308_fu_34981_p4.read());
}

void ShuffleNetV2::thread_tmp_496_cast_fu_34702_p1() {
    tmp_496_cast_fu_34702_p1 = esl_sext<10,8>(tmp_390_fu_34696_p2.read());
}

void ShuffleNetV2::thread_tmp_497_cast_cast_fu_34711_p1() {
    tmp_497_cast_cast_fu_34711_p1 = esl_sext<11,8>(tmp_391_fu_34706_p2.read());
}

void ShuffleNetV2::thread_tmp_499_cast_fu_35315_p1() {
    tmp_499_cast_fu_35315_p1 = esl_sext<12,8>(tmp_392_fu_35309_p2.read());
}

void ShuffleNetV2::thread_tmp_500_cast_fu_35349_p1() {
    tmp_500_cast_fu_35349_p1 = esl_sext<32,8>(tmp_393_reg_46857.read());
}

void ShuffleNetV2::thread_tmp_502_cast_cast_fu_35020_p1() {
    tmp_502_cast_cast_fu_35020_p1 = esl_sext<11,8>(tmp_389_fu_35015_p2.read());
}

void ShuffleNetV2::thread_tmp_503_cast_cast_fu_35072_p1() {
    tmp_503_cast_cast_fu_35072_p1 = esl_sext<10,8>(tmp_394_fu_35066_p2.read());
}

void ShuffleNetV2::thread_tmp_505_cast_cast_fu_35099_p1() {
    tmp_505_cast_cast_fu_35099_p1 = esl_sext<11,10>(tmp_396_fu_35093_p2.read());
}

void ShuffleNetV2::thread_tmp_510_cast_cast_fu_35745_p1() {
    tmp_510_cast_cast_fu_35745_p1 = esl_zext<10,3>(tmp_2323_fu_35735_p4.read());
}

void ShuffleNetV2::thread_tmp_511_cast_fu_36061_p1() {
    tmp_511_cast_fu_36061_p1 = esl_sext<12,8>(tmp_400_fu_36055_p2.read());
}

void ShuffleNetV2::thread_tmp_512_cast_fu_36095_p1() {
    tmp_512_cast_fu_36095_p1 = esl_sext<32,8>(tmp_401_reg_47082.read());
}

void ShuffleNetV2::thread_tmp_514_cast_cast_fu_35774_p1() {
    tmp_514_cast_cast_fu_35774_p1 = esl_sext<11,8>(tmp_399_fu_35769_p2.read());
}

void ShuffleNetV2::thread_tmp_515_cast_cast_fu_35826_p1() {
    tmp_515_cast_cast_fu_35826_p1 = esl_sext<10,8>(tmp_402_fu_35820_p2.read());
}

void ShuffleNetV2::thread_tmp_517_cast_fu_35853_p1() {
    tmp_517_cast_fu_35853_p1 = esl_sext<13,10>(tmp_404_fu_35847_p2.read());
}

void ShuffleNetV2::thread_tmp_519_cast_fu_36410_p1() {
    tmp_519_cast_fu_36410_p1 = esl_sext<12,8>(tmp_406_fu_36404_p2.read());
}

void ShuffleNetV2::thread_tmp_520_cast_fu_36444_p1() {
    tmp_520_cast_fu_36444_p1 = esl_sext<32,8>(tmp_407_reg_47215.read());
}

void ShuffleNetV2::thread_tmp_524_cast_cast_fu_36506_p1() {
    tmp_524_cast_cast_fu_36506_p1 = esl_zext<10,3>(tmp_2334_fu_36496_p4.read());
}

void ShuffleNetV2::thread_tmp_525_cast_cast_fu_36205_p1() {
    tmp_525_cast_cast_fu_36205_p1 = esl_sext<9,8>(tmp_409_fu_36199_p2.read());
}

void ShuffleNetV2::thread_tmp_526_cast_cast_fu_36214_p1() {
    tmp_526_cast_cast_fu_36214_p1 = esl_sext<11,8>(tmp_410_fu_36209_p2.read());
}

void ShuffleNetV2::thread_tmp_528_cast_fu_36822_p1() {
    tmp_528_cast_fu_36822_p1 = esl_sext<12,8>(tmp_411_fu_36816_p2.read());
}

void ShuffleNetV2::thread_tmp_529_cast_fu_36856_p1() {
    tmp_529_cast_fu_36856_p1 = esl_sext<32,8>(tmp_412_reg_47342.read());
}

void ShuffleNetV2::thread_tmp_531_cast_cast_fu_36535_p1() {
    tmp_531_cast_cast_fu_36535_p1 = esl_sext<11,8>(tmp_408_fu_36530_p2.read());
}

void ShuffleNetV2::thread_tmp_532_cast_cast_fu_36587_p1() {
    tmp_532_cast_cast_fu_36587_p1 = esl_sext<10,8>(tmp_413_fu_36581_p2.read());
}

void ShuffleNetV2::thread_tmp_534_cast_fu_36614_p1() {
    tmp_534_cast_fu_36614_p1 = esl_sext<13,10>(tmp_415_fu_36608_p2.read());
}

void ShuffleNetV2::thread_tmp_539_cast_cast_fu_37252_p1() {
    tmp_539_cast_cast_fu_37252_p1 = esl_zext<10,3>(tmp_2349_fu_37242_p4.read());
}

void ShuffleNetV2::thread_tmp_540_cast_fu_37568_p1() {
    tmp_540_cast_fu_37568_p1 = esl_sext<12,8>(tmp_419_fu_37562_p2.read());
}

void ShuffleNetV2::thread_tmp_541_cast_fu_37602_p1() {
    tmp_541_cast_fu_37602_p1 = esl_sext<32,8>(tmp_420_reg_47567.read());
}

void ShuffleNetV2::thread_tmp_543_cast_cast_fu_37281_p1() {
    tmp_543_cast_cast_fu_37281_p1 = esl_sext<11,8>(tmp_418_fu_37276_p2.read());
}

void ShuffleNetV2::thread_tmp_544_cast_cast_fu_37333_p1() {
    tmp_544_cast_cast_fu_37333_p1 = esl_sext<10,8>(tmp_421_fu_37327_p2.read());
}

void ShuffleNetV2::thread_tmp_546_cast_fu_37360_p1() {
    tmp_546_cast_fu_37360_p1 = esl_sext<13,10>(tmp_423_fu_37354_p2.read());
}

void ShuffleNetV2::thread_tmp_548_cast_fu_37909_p1() {
    tmp_548_cast_fu_37909_p1 = esl_sext<12,8>(tmp_425_fu_37903_p2.read());
}

void ShuffleNetV2::thread_tmp_549_cast_fu_37943_p1() {
    tmp_549_cast_fu_37943_p1 = esl_sext<32,8>(tmp_426_reg_47700.read());
}

void ShuffleNetV2::thread_tmp_553_cast_cast_fu_38005_p1() {
    tmp_553_cast_cast_fu_38005_p1 = esl_zext<10,3>(tmp_2360_fu_37995_p4.read());
}

void ShuffleNetV2::thread_tmp_554_cast_fu_37712_p1() {
    tmp_554_cast_fu_37712_p1 = esl_sext<11,8>(tmp_428_fu_37706_p2.read());
}

void ShuffleNetV2::thread_tmp_555_cast_cast_fu_37721_p1() {
    tmp_555_cast_cast_fu_37721_p1 = esl_sext<11,8>(tmp_429_fu_37716_p2.read());
}

void ShuffleNetV2::thread_tmp_557_cast_fu_38321_p1() {
    tmp_557_cast_fu_38321_p1 = esl_sext<12,8>(tmp_430_fu_38315_p2.read());
}

void ShuffleNetV2::thread_tmp_558_cast_fu_38355_p1() {
    tmp_558_cast_fu_38355_p1 = esl_sext<32,8>(tmp_431_reg_47827.read());
}

void ShuffleNetV2::thread_tmp_560_cast_cast_fu_38034_p1() {
    tmp_560_cast_cast_fu_38034_p1 = esl_sext<11,8>(tmp_427_fu_38029_p2.read());
}

void ShuffleNetV2::thread_tmp_561_cast_cast_fu_38086_p1() {
    tmp_561_cast_cast_fu_38086_p1 = esl_sext<10,8>(tmp_432_fu_38080_p2.read());
}

void ShuffleNetV2::thread_tmp_563_cast_fu_38113_p1() {
    tmp_563_cast_fu_38113_p1 = esl_sext<13,10>(tmp_434_fu_38107_p2.read());
}

void ShuffleNetV2::thread_tmp_659_fu_14342_p3() {
    tmp_659_fu_14342_p3 = esl_concat<2,1>(ci_reg_8698.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_660_fu_14354_p2() {
    tmp_660_fu_14354_p2 = (!p_shl276_cast_fu_14350_p1.read().is_01() || !tmp_1709_cast_fu_14338_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl276_cast_fu_14350_p1.read()) + sc_biguint<8>(tmp_1709_cast_fu_14338_p1.read()));
}

void ShuffleNetV2::thread_tmp_661_fu_14474_p3() {
    tmp_661_fu_14474_p3 = esl_concat<5,5>(co_reg_8731.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_662_fu_14486_p3() {
    tmp_662_fu_14486_p3 = esl_concat<5,3>(co_reg_8731.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_663_fu_14498_p2() {
    tmp_663_fu_14498_p2 = (!p_shl279_cast_fu_14482_p1.read().is_01() || !p_shl280_cast_fu_14494_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl279_cast_fu_14482_p1.read()) - sc_biguint<11>(p_shl280_cast_fu_14494_p1.read()));
}

void ShuffleNetV2::thread_tmp_664_fu_14376_p2() {
    tmp_664_fu_14376_p2 = (!w_cast_cast_fu_14372_p1.read().is_01() || !tmp_1709_cast_reg_39114.read().is_01())? sc_lv<8>(): (sc_biguint<8>(w_cast_cast_fu_14372_p1.read()) + sc_biguint<8>(tmp_1709_cast_reg_39114.read()));
}

void ShuffleNetV2::thread_tmp_665_fu_14389_p1() {
    tmp_665_fu_14389_p1 = esl_zext<32,13>(tmp_1766_fu_14381_p3.read());
}

void ShuffleNetV2::thread_tmp_666_fu_14409_p2() {
    tmp_666_fu_14409_p2 = (!w_38_cast_cast_fu_14405_p1.read().is_01() || !tmp_660_reg_39119.read().is_01())? sc_lv<8>(): (sc_biguint<8>(w_38_cast_cast_fu_14405_p1.read()) + sc_biguint<8>(tmp_660_reg_39119.read()));
}

void ShuffleNetV2::thread_tmp_667_fu_14443_p2() {
    tmp_667_fu_14443_p2 = (!p_shl277_cast_fu_14425_p3.read().is_01() || !p_shl278_cast_fu_14439_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl277_cast_fu_14425_p3.read()) + sc_biguint<13>(p_shl278_cast_fu_14439_p1.read()));
}

void ShuffleNetV2::thread_tmp_668_fu_14465_p2() {
    tmp_668_fu_14465_p2 = (!tmp_667_reg_39152.read().is_01() || !h_38_cast_cast_fu_14461_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_667_reg_39152.read()) + sc_biguint<13>(h_38_cast_cast_fu_14461_p1.read()));
}

void ShuffleNetV2::thread_tmp_669_fu_14602_p3() {
    tmp_669_fu_14602_p3 = esl_concat<5,2>(co5_reg_8765.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_670_fu_14614_p2() {
    tmp_670_fu_14614_p2 = (!p_shl281_cast_fu_14610_p1.read().is_01() || !co5_cast_cast_fu_14598_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl281_cast_fu_14610_p1.read()) - sc_biguint<8>(co5_cast_cast_fu_14598_p1.read()));
}

void ShuffleNetV2::thread_tmp_671_fu_14651_p2() {
    tmp_671_fu_14651_p2 = (!tmp_1727_cast_reg_39336.read().is_01() || !w6_cast_cast_fu_14647_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_1727_cast_reg_39336.read()) + sc_biguint<9>(w6_cast_cast_fu_14647_p1.read()));
}

void ShuffleNetV2::thread_tmp_672_fu_14672_p2() {
    tmp_672_fu_14672_p2 = (!p_shl193_fu_14668_p1.read().is_01() || !tmp_1728_cast_fu_14656_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl193_fu_14668_p1.read()) - sc_bigint<32>(tmp_1728_cast_fu_14656_p1.read()));
}

void ShuffleNetV2::thread_tmp_673_fu_14705_p2() {
    tmp_673_fu_14705_p2 = (!h7_cast_fu_14701_p1.read().is_01() || !tmp_672_reg_39355.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h7_cast_fu_14701_p1.read()) + sc_biguint<32>(tmp_672_reg_39355.read()));
}

void ShuffleNetV2::thread_tmp_674_fu_14761_p3() {
    tmp_674_fu_14761_p3 = esl_concat<6,5>(sum6_fu_14755_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_675_fu_14773_p3() {
    tmp_675_fu_14773_p3 = esl_concat<6,3>(sum6_fu_14755_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_676_fu_14785_p2() {
    tmp_676_fu_14785_p2 = (!p_shl283_cast_fu_14769_p1.read().is_01() || !p_shl284_cast_fu_14781_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl283_cast_fu_14769_p1.read()) - sc_biguint<12>(p_shl284_cast_fu_14781_p1.read()));
}

void ShuffleNetV2::thread_tmp_677_fu_14877_p3() {
    tmp_677_fu_14877_p3 = esl_concat<5,2>(co12_reg_8843.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_678_fu_14889_p2() {
    tmp_678_fu_14889_p2 = (!p_shl285_cast_fu_14885_p1.read().is_01() || !co12_cast1_cast_fu_14873_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl285_cast_fu_14885_p1.read()) - sc_biguint<8>(co12_cast1_cast_fu_14873_p1.read()));
}

void ShuffleNetV2::thread_tmp_679_fu_14925_p3() {
    tmp_679_fu_14925_p3 = esl_concat<6,2>(sum5_fu_14915_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_680_fu_14937_p2() {
    tmp_680_fu_14937_p2 = (!p_shl286_cast_fu_14933_p1.read().is_01() || !sum5_cast_cast_fu_14921_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_shl286_cast_fu_14933_p1.read()) - sc_biguint<9>(sum5_cast_cast_fu_14921_p1.read()));
}

void ShuffleNetV2::thread_tmp_681_fu_14947_p2() {
    tmp_681_fu_14947_p2 = (!w13_cast_cast_fu_14943_p1.read().is_01() || !tmp_680_reg_39574.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w13_cast_cast_fu_14943_p1.read()) + sc_biguint<9>(tmp_680_reg_39574.read()));
}

void ShuffleNetV2::thread_tmp_682_fu_14968_p2() {
    tmp_682_fu_14968_p2 = (!p_shl197_fu_14964_p1.read().is_01() || !tmp_1740_cast_fu_14952_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl197_fu_14964_p1.read()) - sc_bigint<32>(tmp_1740_cast_fu_14952_p1.read()));
}

void ShuffleNetV2::thread_tmp_683_fu_14974_p2() {
    tmp_683_fu_14974_p2 = (!w13_cast_cast_fu_14943_p1.read().is_01() || !tmp_1737_cast_reg_39561.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w13_cast_cast_fu_14943_p1.read()) + sc_bigint<9>(tmp_1737_cast_reg_39561.read()));
}

void ShuffleNetV2::thread_tmp_684_fu_14985_p2() {
    tmp_684_fu_14985_p2 = (!tmp_1823_fu_14979_p2.read().is_01() || !tmp_683_fu_14974_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_1823_fu_14979_p2.read()) - sc_biguint<9>(tmp_683_fu_14974_p2.read()));
}

void ShuffleNetV2::thread_tmp_685_fu_15018_p2() {
    tmp_685_fu_15018_p2 = (!tmp_684_reg_39579.read().is_01() || !h14_cast_cast_fu_15014_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_684_reg_39579.read()) + sc_biguint<9>(h14_cast_cast_fu_15014_p1.read()));
}

void ShuffleNetV2::thread_tmp_686_fu_15105_p3() {
    tmp_686_fu_15105_p3 = esl_concat<7,5>(sum9_fu_15099_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_687_fu_15117_p3() {
    tmp_687_fu_15117_p3 = esl_concat<7,3>(sum9_fu_15099_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_688_fu_15129_p2() {
    tmp_688_fu_15129_p2 = (!p_shl289_cast_fu_15113_p1.read().is_01() || !p_shl290_cast_fu_15125_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl289_cast_fu_15113_p1.read()) - sc_biguint<13>(p_shl290_cast_fu_15125_p1.read()));
}

void ShuffleNetV2::thread_tmp_689_fu_15217_p3() {
    tmp_689_fu_15217_p3 = esl_concat<5,4>(co19_reg_8921.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_690_fu_15229_p3() {
    tmp_690_fu_15229_p3 = esl_concat<5,1>(co19_reg_8921.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_691_fu_15241_p2() {
    tmp_691_fu_15241_p2 = (!p_shl292_cast_fu_15237_p1.read().is_01() || !p_shl291_cast_fu_15225_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl292_cast_fu_15237_p1.read()) + sc_biguint<10>(p_shl291_cast_fu_15225_p1.read()));
}

void ShuffleNetV2::thread_tmp_692_fu_15269_p3() {
    tmp_692_fu_15269_p3 = esl_concat<6,4>(tmp_s_fu_15263_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_693_fu_15281_p3() {
    tmp_693_fu_15281_p3 = esl_concat<6,1>(tmp_s_fu_15263_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_694_fu_15293_p2() {
    tmp_694_fu_15293_p2 = (!p_shl294_cast_fu_15289_p1.read().is_01() || !p_shl293_cast_fu_15277_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl294_cast_fu_15289_p1.read()) + sc_biguint<11>(p_shl293_cast_fu_15277_p1.read()));
}

void ShuffleNetV2::thread_tmp_695_fu_15442_p3() {
    tmp_695_fu_15442_p3 = esl_concat<7,5>(sum12_fu_15436_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_696_fu_15454_p3() {
    tmp_696_fu_15454_p3 = esl_concat<7,3>(sum12_fu_15436_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_697_fu_15466_p2() {
    tmp_697_fu_15466_p2 = (!p_shl299_cast_fu_15450_p1.read().is_01() || !p_shl300_cast_fu_15462_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl299_cast_fu_15450_p1.read()) - sc_biguint<13>(p_shl300_cast_fu_15462_p1.read()));
}

void ShuffleNetV2::thread_tmp_698_fu_15319_p2() {
    tmp_698_fu_15319_p2 = (!h_41_cast_cast_fu_15315_p1.read().is_01() || !tmp_691_reg_39791.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_41_cast_cast_fu_15315_p1.read()) + sc_biguint<10>(tmp_691_reg_39791.read()));
}

void ShuffleNetV2::thread_tmp_699_fu_15344_p2() {
    tmp_699_fu_15344_p2 = (!p_shl297_cast_fu_15324_p3.read().is_01() || !p_shl298_cast_fu_15340_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl297_cast_fu_15324_p3.read()) + sc_biguint<14>(p_shl298_cast_fu_15340_p1.read()));
}

void ShuffleNetV2::thread_tmp_700_fu_15350_p2() {
    tmp_700_fu_15350_p2 = (!h_41_cast_cast1_fu_15311_p1.read().is_01() || !tmp_694_reg_39804.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_41_cast_cast1_fu_15311_p1.read()) + sc_biguint<11>(tmp_694_reg_39804.read()));
}

void ShuffleNetV2::thread_tmp_701_fu_15375_p2() {
    tmp_701_fu_15375_p2 = (!p_shl295_cast_fu_15355_p3.read().is_01() || !p_shl296_cast_fu_15371_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl295_cast_fu_15355_p3.read()) + sc_biguint<15>(p_shl296_cast_fu_15371_p1.read()));
}

void ShuffleNetV2::thread_tmp_702_fu_15401_p2() {
    tmp_702_fu_15401_p2 = (!tmp_699_reg_39817.read().is_01() || !w_41_cast_cast_fu_15397_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_699_reg_39817.read()) + sc_biguint<14>(w_41_cast_cast_fu_15397_p1.read()));
}

void ShuffleNetV2::thread_tmp_703_fu_15406_p2() {
    tmp_703_fu_15406_p2 = (!tmp_701_reg_39822.read().is_01() || !w_41_cast_cast1_fu_15393_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_701_reg_39822.read()) + sc_biguint<15>(w_41_cast_cast1_fu_15393_p1.read()));
}

void ShuffleNetV2::thread_tmp_704_fu_15562_p3() {
    tmp_704_fu_15562_p3 = esl_concat<5,2>(co25_reg_8988.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_705_fu_15574_p2() {
    tmp_705_fu_15574_p2 = (!p_shl301_cast_fu_15570_p1.read().is_01() || !co25_cast1_cast_fu_15558_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl301_cast_fu_15570_p1.read()) - sc_biguint<8>(co25_cast1_cast_fu_15558_p1.read()));
}

void ShuffleNetV2::thread_tmp_706_fu_15606_p3() {
    tmp_706_fu_15606_p3 = esl_concat<7,2>(sum11_fu_15596_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_707_fu_15618_p2() {
    tmp_707_fu_15618_p2 = (!p_shl302_cast_fu_15614_p1.read().is_01() || !sum11_cast_cast_fu_15602_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl302_cast_fu_15614_p1.read()) - sc_biguint<10>(sum11_cast_cast_fu_15602_p1.read()));
}

void ShuffleNetV2::thread_tmp_708_fu_15643_p2() {
    tmp_708_fu_15643_p2 = (!w26_cast_cast_fu_15639_p1.read().is_01() || !tmp_707_reg_40019.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w26_cast_cast_fu_15639_p1.read()) + sc_biguint<10>(tmp_707_reg_40019.read()));
}

void ShuffleNetV2::thread_tmp_709_fu_15664_p2() {
    tmp_709_fu_15664_p2 = (!p_shl202_fu_15660_p1.read().is_01() || !tmp_1776_cast_fu_15648_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl202_fu_15660_p1.read()) - sc_bigint<32>(tmp_1776_cast_fu_15648_p1.read()));
}

void ShuffleNetV2::thread_tmp_710_fu_15670_p2() {
    tmp_710_fu_15670_p2 = (!w26_cast_cast1_fu_15635_p1.read().is_01() || !tmp_1773_cast_reg_40006.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w26_cast_cast1_fu_15635_p1.read()) + sc_bigint<9>(tmp_1773_cast_reg_40006.read()));
}

void ShuffleNetV2::thread_tmp_711_fu_15681_p2() {
    tmp_711_fu_15681_p2 = (!tmp_1885_fu_15675_p2.read().is_01() || !tmp_710_fu_15670_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_1885_fu_15675_p2.read()) - sc_biguint<9>(tmp_710_fu_15670_p2.read()));
}

void ShuffleNetV2::thread_tmp_712_fu_15714_p2() {
    tmp_712_fu_15714_p2 = (!tmp_711_reg_40030.read().is_01() || !h27_cast_cast_fu_15710_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_711_reg_40030.read()) + sc_biguint<9>(h27_cast_cast_fu_15710_p1.read()));
}

void ShuffleNetV2::thread_tmp_713_fu_15764_p4() {
    tmp_713_fu_15764_p4 = esl_concat<6,5>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_9032.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_714_fu_15774_p1() {
    tmp_714_fu_15774_p1 = esl_sext<12,11>(tmp_713_fu_15764_p4.read());
}

void ShuffleNetV2::thread_tmp_715_fu_15782_p4() {
    tmp_715_fu_15782_p4 = esl_concat<6,3>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_9032.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_716_fu_15792_p1() {
    tmp_716_fu_15792_p1 = esl_sext<10,9>(tmp_715_fu_15782_p4.read());
}

void ShuffleNetV2::thread_tmp_717_fu_15800_p2() {
    tmp_717_fu_15800_p2 = (!p_shl305_cast_fu_15778_p1.read().is_01() || !p_shl306_cast_fu_15796_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl305_cast_fu_15778_p1.read()) - sc_biguint<13>(p_shl306_cast_fu_15796_p1.read()));
}

void ShuffleNetV2::thread_tmp_718_fu_15904_p3() {
    tmp_718_fu_15904_p3 = esl_concat<5,4>(co32_reg_9066.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_719_fu_15916_p3() {
    tmp_719_fu_15916_p3 = esl_concat<5,1>(co32_reg_9066.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_720_fu_15928_p2() {
    tmp_720_fu_15928_p2 = (!p_shl308_cast_fu_15924_p1.read().is_01() || !p_shl307_cast_fu_15912_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl308_cast_fu_15924_p1.read()) + sc_biguint<10>(p_shl307_cast_fu_15912_p1.read()));
}

void ShuffleNetV2::thread_tmp_721_fu_16023_p3() {
    tmp_721_fu_16023_p3 = esl_concat<5,4>(co35_reg_9099.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_722_fu_16035_p3() {
    tmp_722_fu_16035_p3 = esl_concat<5,1>(co35_reg_9099.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_723_fu_16047_p2() {
    tmp_723_fu_16047_p2 = (!p_shl312_cast_fu_16043_p1.read().is_01() || !p_shl311_cast_fu_16031_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl312_cast_fu_16043_p1.read()) + sc_biguint<10>(p_shl311_cast_fu_16031_p1.read()));
}

void ShuffleNetV2::thread_tmp_724_fu_16075_p3() {
    tmp_724_fu_16075_p3 = esl_concat<6,4>(tmp_154_fu_16069_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_725_fu_16087_p3() {
    tmp_725_fu_16087_p3 = esl_concat<6,1>(tmp_154_fu_16069_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_726_fu_16099_p2() {
    tmp_726_fu_16099_p2 = (!p_shl314_cast_fu_16095_p1.read().is_01() || !p_shl313_cast_fu_16083_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl314_cast_fu_16095_p1.read()) + sc_biguint<11>(p_shl313_cast_fu_16083_p1.read()));
}

void ShuffleNetV2::thread_tmp_727_fu_15962_p2() {
    tmp_727_fu_15962_p2 = (!h_43_cast_cast_fu_15958_p1.read().is_01() || !tmp_720_reg_40236.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_43_cast_cast_fu_15958_p1.read()) + sc_biguint<10>(tmp_720_reg_40236.read()));
}

void ShuffleNetV2::thread_tmp_728_fu_15991_p2() {
    tmp_728_fu_15991_p2 = (!p_shl309_cast_fu_15975_p1.read().is_01() || !p_shl310_cast_fu_15987_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl309_cast_fu_15975_p1.read()) + sc_biguint<15>(p_shl310_cast_fu_15987_p1.read()));
}

void ShuffleNetV2::thread_tmp_729_fu_16248_p3() {
    tmp_729_fu_16248_p3 = esl_concat<8,5>(sum_fu_16242_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_730_fu_16260_p3() {
    tmp_730_fu_16260_p3 = esl_concat<8,3>(sum_fu_16242_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_731_fu_16272_p2() {
    tmp_731_fu_16272_p2 = (!p_shl319_cast_fu_16256_p1.read().is_01() || !p_shl320_cast_fu_16268_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl319_cast_fu_16256_p1.read()) - sc_biguint<14>(p_shl320_cast_fu_16268_p1.read()));
}

void ShuffleNetV2::thread_tmp_732_fu_16125_p2() {
    tmp_732_fu_16125_p2 = (!h_44_cast_cast_fu_16121_p1.read().is_01() || !tmp_723_reg_40280.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_44_cast_cast_fu_16121_p1.read()) + sc_biguint<10>(tmp_723_reg_40280.read()));
}

void ShuffleNetV2::thread_tmp_733_fu_16150_p2() {
    tmp_733_fu_16150_p2 = (!p_shl317_cast_fu_16130_p3.read().is_01() || !p_shl318_cast_fu_16146_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl317_cast_fu_16130_p3.read()) + sc_biguint<14>(p_shl318_cast_fu_16146_p1.read()));
}

void ShuffleNetV2::thread_tmp_734_fu_16156_p2() {
    tmp_734_fu_16156_p2 = (!h_44_cast_cast1_fu_16117_p1.read().is_01() || !tmp_726_reg_40293.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_44_cast_cast1_fu_16117_p1.read()) + sc_biguint<11>(tmp_726_reg_40293.read()));
}

void ShuffleNetV2::thread_tmp_735_fu_16181_p2() {
    tmp_735_fu_16181_p2 = (!p_shl315_cast_fu_16161_p3.read().is_01() || !p_shl316_cast_fu_16177_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl315_cast_fu_16161_p3.read()) + sc_biguint<15>(p_shl316_cast_fu_16177_p1.read()));
}

void ShuffleNetV2::thread_tmp_736_fu_16013_p2() {
    tmp_736_fu_16013_p2 = (!tmp_728_reg_40257.read().is_01() || !w_43_cast_cast_fu_16009_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_728_reg_40257.read()) + sc_biguint<15>(w_43_cast_cast_fu_16009_p1.read()));
}

void ShuffleNetV2::thread_tmp_737_fu_16207_p2() {
    tmp_737_fu_16207_p2 = (!tmp_733_reg_40306.read().is_01() || !w_44_cast_cast_fu_16203_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_733_reg_40306.read()) + sc_biguint<14>(w_44_cast_cast_fu_16203_p1.read()));
}

void ShuffleNetV2::thread_tmp_738_fu_16212_p2() {
    tmp_738_fu_16212_p2 = (!tmp_735_reg_40311.read().is_01() || !w_44_cast_cast1_fu_16199_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_735_reg_40311.read()) + sc_biguint<15>(w_44_cast_cast1_fu_16199_p1.read()));
}

void ShuffleNetV2::thread_tmp_739_fu_16368_p3() {
    tmp_739_fu_16368_p3 = esl_concat<5,2>(co41_reg_9166.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_740_fu_16380_p2() {
    tmp_740_fu_16380_p2 = (!p_shl321_cast_fu_16376_p1.read().is_01() || !co41_cast1_cast_fu_16364_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl321_cast_fu_16376_p1.read()) - sc_biguint<8>(co41_cast1_cast_fu_16364_p1.read()));
}

void ShuffleNetV2::thread_tmp_741_fu_16412_p3() {
    tmp_741_fu_16412_p3 = esl_concat<7,2>(sum13_fu_16402_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_742_fu_16424_p2() {
    tmp_742_fu_16424_p2 = (!p_shl322_cast_fu_16420_p1.read().is_01() || !sum13_cast_cast_fu_16408_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl322_cast_fu_16420_p1.read()) - sc_biguint<10>(sum13_cast_cast_fu_16408_p1.read()));
}

void ShuffleNetV2::thread_tmp_743_fu_16449_p2() {
    tmp_743_fu_16449_p2 = (!w42_cast_cast_fu_16445_p1.read().is_01() || !tmp_742_reg_40508.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w42_cast_cast_fu_16445_p1.read()) + sc_biguint<10>(tmp_742_reg_40508.read()));
}

void ShuffleNetV2::thread_tmp_744_fu_16470_p2() {
    tmp_744_fu_16470_p2 = (!p_shl208_fu_16466_p1.read().is_01() || !tmp_1822_cast_fu_16454_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl208_fu_16466_p1.read()) - sc_bigint<32>(tmp_1822_cast_fu_16454_p1.read()));
}

void ShuffleNetV2::thread_tmp_745_fu_16476_p2() {
    tmp_745_fu_16476_p2 = (!w42_cast_cast1_fu_16441_p1.read().is_01() || !tmp_1819_cast_reg_40495.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w42_cast_cast1_fu_16441_p1.read()) + sc_bigint<9>(tmp_1819_cast_reg_40495.read()));
}

void ShuffleNetV2::thread_tmp_746_fu_16487_p2() {
    tmp_746_fu_16487_p2 = (!tmp_1912_fu_16481_p2.read().is_01() || !tmp_745_fu_16476_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_1912_fu_16481_p2.read()) - sc_biguint<9>(tmp_745_fu_16476_p2.read()));
}

void ShuffleNetV2::thread_tmp_747_fu_16520_p2() {
    tmp_747_fu_16520_p2 = (!tmp_746_reg_40519.read().is_01() || !h43_cast_cast_fu_16516_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_746_reg_40519.read()) + sc_biguint<9>(h43_cast_cast_fu_16516_p1.read()));
}

void ShuffleNetV2::thread_tmp_748_fu_16580_p3() {
    tmp_748_fu_16580_p3 = esl_concat<8,5>(sum16_fu_16574_p2.read(), ap_const_lv5_0);
}

}

