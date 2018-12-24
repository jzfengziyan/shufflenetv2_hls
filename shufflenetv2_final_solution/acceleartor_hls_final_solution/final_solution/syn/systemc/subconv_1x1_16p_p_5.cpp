#include "subconv_1x1_16p_p.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void subconv_1x1_16p_p::thread_tmp_395_fu_14336_p2() {
    tmp_395_fu_14336_p2 = (!p_shl12_cast_fu_14317_p1.read().is_01() || !p_shl13_cast_fu_14332_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl12_cast_fu_14317_p1.read()) + sc_biguint<11>(p_shl13_cast_fu_14332_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_396_fu_14285_p2() {
    tmp_396_fu_14285_p2 = (exitcond_mid_fu_14273_p2.read() | exitcond_flatten10_reg_19045.read());
}

void subconv_1x1_16p_p::thread_tmp_397_fu_14345_p2() {
    tmp_397_fu_14345_p2 = (!h5_cast_mid2_cast_fu_14342_p1.read().is_01() || !tmp_395_fu_14336_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h5_cast_mid2_cast_fu_14342_p1.read()) + sc_biguint<11>(tmp_395_fu_14336_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_398_fu_14363_p2() {
    tmp_398_fu_14363_p2 = (!tmp_1086_fu_14351_p2.read().is_01() || !tmp_1087_fu_14357_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1086_fu_14351_p2.read()) + sc_biguint<11>(tmp_1087_fu_14357_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_399_fu_14372_p2() {
    tmp_399_fu_14372_p2 = (!w6_cast_cast_fu_14369_p1.read().is_01() || !tmp_398_fu_14363_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w6_cast_cast_fu_14369_p1.read()) + sc_biguint<11>(tmp_398_fu_14363_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_400_fu_2590_p3() {
    tmp_400_fu_2590_p3 = esl_concat<6,4>(ci_reg_1817.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_401_fu_2602_p3() {
    tmp_401_fu_2602_p3 = esl_concat<6,1>(ci_reg_1817.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_402_fu_2614_p2() {
    tmp_402_fu_2614_p2 = (!p_shl8_cast_fu_2598_p1.read().is_01() || !p_shl9_cast_fu_2610_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl8_cast_fu_2598_p1.read()) + sc_biguint<11>(p_shl9_cast_fu_2610_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_403_fu_2620_p2() {
    tmp_403_fu_2620_p2 = (!h1_cast_cast_reg_14542.read().is_01() || !tmp_402_fu_2614_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h1_cast_cast_reg_14542.read()) + sc_biguint<11>(tmp_402_fu_2614_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_404_fu_2645_p2() {
    tmp_404_fu_2645_p2 = (!p_shl6_cast_fu_2625_p3.read().is_01() || !p_shl7_cast_fu_2641_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl6_cast_fu_2625_p3.read()) + sc_biguint<15>(p_shl7_cast_fu_2641_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_405_fu_2651_p2() {
    tmp_405_fu_2651_p2 = (!w2_cast_cast7_reg_14561.read().is_01() || !tmp_404_fu_2645_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w2_cast_cast7_reg_14561.read()) + sc_biguint<15>(tmp_404_fu_2645_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_406_fu_2661_p2() {
    tmp_406_fu_2661_p2 = (!ci_cast_cast_fu_2586_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(ci_cast_cast_fu_2586_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void subconv_1x1_16p_p::thread_tmp_s_fu_3289_p3() {
    tmp_s_fu_3289_p3 = esl_concat<8,6>(reg_2101.read(), ap_const_lv6_0);
}

void subconv_1x1_16p_p::thread_underflow_10_fu_6927_p2() {
    underflow_10_fu_6927_p2 = (tmp_1190_reg_16055.read() & tmp41_fu_6921_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_11_fu_7010_p2() {
    underflow_11_fu_7010_p2 = (tmp_1200_reg_16102.read() & tmp45_fu_7004_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_12_fu_7093_p2() {
    underflow_12_fu_7093_p2 = (tmp_1210_reg_16149.read() & tmp49_fu_7087_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_13_fu_7176_p2() {
    underflow_13_fu_7176_p2 = (tmp_1220_reg_16196.read() & tmp53_fu_7170_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_10_fu_12458_p2() {
    underflow_14_10_fu_12458_p2 = (tmp_1205_reg_17830.read() & tmp47_fu_12452_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_11_fu_12541_p2() {
    underflow_14_11_fu_12541_p2 = (tmp_1215_reg_17877.read() & tmp51_fu_12535_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_12_fu_12624_p2() {
    underflow_14_12_fu_12624_p2 = (tmp_1225_reg_17924.read() & tmp55_fu_12618_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_13_fu_12707_p2() {
    underflow_14_13_fu_12707_p2 = (tmp_1235_reg_17971.read() & tmp59_fu_12701_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_14_fu_12790_p2() {
    underflow_14_14_fu_12790_p2 = (tmp_1245_reg_18018.read() & tmp63_fu_12784_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_15_fu_12873_p2() {
    underflow_14_15_fu_12873_p2 = (tmp_1255_reg_18065.read() & tmp67_fu_12867_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_16_fu_12956_p2() {
    underflow_14_16_fu_12956_p2 = (tmp_1265_reg_18112.read() & tmp71_fu_12950_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_17_fu_13039_p2() {
    underflow_14_17_fu_13039_p2 = (tmp_1275_reg_18159.read() & tmp75_fu_13033_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_18_fu_13122_p2() {
    underflow_14_18_fu_13122_p2 = (tmp_1285_reg_18206.read() & tmp79_fu_13116_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_19_fu_13205_p2() {
    underflow_14_19_fu_13205_p2 = (tmp_1295_reg_18253.read() & tmp83_fu_13199_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_1_fu_11628_p2() {
    underflow_14_1_fu_11628_p2 = (tmp_1105_reg_17360.read() & tmp7_fu_11622_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_20_fu_13288_p2() {
    underflow_14_20_fu_13288_p2 = (tmp_1305_reg_18300.read() & tmp87_fu_13282_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_21_fu_13371_p2() {
    underflow_14_21_fu_13371_p2 = (tmp_1315_reg_18347.read() & tmp91_fu_13365_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_22_fu_13454_p2() {
    underflow_14_22_fu_13454_p2 = (tmp_1325_reg_18394.read() & tmp95_fu_13448_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_2_fu_11711_p2() {
    underflow_14_2_fu_11711_p2 = (tmp_1115_reg_17407.read() & tmp11_fu_11705_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_3_fu_11794_p2() {
    underflow_14_3_fu_11794_p2 = (tmp_1125_reg_17454.read() & tmp15_fu_11788_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_4_fu_11877_p2() {
    underflow_14_4_fu_11877_p2 = (tmp_1135_reg_17501.read() & tmp19_fu_11871_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_5_fu_11960_p2() {
    underflow_14_5_fu_11960_p2 = (tmp_1145_reg_17548.read() & tmp23_fu_11954_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_6_fu_12043_p2() {
    underflow_14_6_fu_12043_p2 = (tmp_1155_reg_17595.read() & tmp27_fu_12037_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_7_fu_12126_p2() {
    underflow_14_7_fu_12126_p2 = (tmp_1165_reg_17642.read() & tmp31_fu_12120_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_8_fu_12209_p2() {
    underflow_14_8_fu_12209_p2 = (tmp_1175_reg_17689.read() & tmp35_fu_12203_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_9_fu_12292_p2() {
    underflow_14_9_fu_12292_p2 = (tmp_1185_reg_17736.read() & tmp39_fu_12286_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_fu_11545_p2() {
    underflow_14_fu_11545_p2 = (tmp_1095_reg_17313.read() & tmp3_fu_11539_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_10_fu_13799_p2() {
    underflow_14_not_10_fu_13799_p2 = (tmp48_fu_13795_p2.read() | p_38_i_i_11_reg_18711.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_11_fu_13829_p2() {
    underflow_14_not_11_fu_13829_p2 = (tmp52_fu_13825_p2.read() | p_38_i_i_12_reg_18736.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_12_fu_13859_p2() {
    underflow_14_not_12_fu_13859_p2 = (tmp56_fu_13855_p2.read() | p_38_i_i_13_reg_18761.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_13_fu_13889_p2() {
    underflow_14_not_13_fu_13889_p2 = (tmp60_fu_13885_p2.read() | p_38_i_i_14_reg_18786.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_14_fu_13919_p2() {
    underflow_14_not_14_fu_13919_p2 = (tmp64_fu_13915_p2.read() | p_38_i_i_15_reg_18811.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_15_fu_13949_p2() {
    underflow_14_not_15_fu_13949_p2 = (tmp68_fu_13945_p2.read() | p_38_i_i_16_reg_18836.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_16_fu_13979_p2() {
    underflow_14_not_16_fu_13979_p2 = (tmp72_fu_13975_p2.read() | p_38_i_i_17_reg_18861.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_17_fu_14009_p2() {
    underflow_14_not_17_fu_14009_p2 = (tmp76_fu_14005_p2.read() | p_38_i_i_18_reg_18886.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_18_fu_14039_p2() {
    underflow_14_not_18_fu_14039_p2 = (tmp80_fu_14035_p2.read() | p_38_i_i_19_reg_18911.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_19_fu_14069_p2() {
    underflow_14_not_19_fu_14069_p2 = (tmp84_fu_14065_p2.read() | p_38_i_i_20_reg_18936.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_1_fu_13499_p2() {
    underflow_14_not_1_fu_13499_p2 = (tmp8_fu_13495_p2.read() | p_38_i_i_1_reg_18461.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_20_fu_14099_p2() {
    underflow_14_not_20_fu_14099_p2 = (tmp88_fu_14095_p2.read() | p_38_i_i_21_reg_18961.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_21_fu_14129_p2() {
    underflow_14_not_21_fu_14129_p2 = (tmp92_fu_14125_p2.read() | p_38_i_i_22_reg_18986.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_22_fu_14159_p2() {
    underflow_14_not_22_fu_14159_p2 = (tmp96_fu_14155_p2.read() | p_38_i_i_s_reg_19011.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_2_fu_13529_p2() {
    underflow_14_not_2_fu_13529_p2 = (tmp12_fu_13525_p2.read() | p_38_i_i_2_reg_18486.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_3_fu_13559_p2() {
    underflow_14_not_3_fu_13559_p2 = (tmp16_fu_13555_p2.read() | p_38_i_i_3_reg_18511.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_4_fu_13589_p2() {
    underflow_14_not_4_fu_13589_p2 = (tmp20_fu_13585_p2.read() | p_38_i_i_4_reg_18536.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_5_fu_13619_p2() {
    underflow_14_not_5_fu_13619_p2 = (tmp24_fu_13615_p2.read() | p_38_i_i_5_reg_18561.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_6_fu_13649_p2() {
    underflow_14_not_6_fu_13649_p2 = (tmp28_fu_13645_p2.read() | p_38_i_i_6_reg_18586.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_7_fu_13679_p2() {
    underflow_14_not_7_fu_13679_p2 = (tmp32_fu_13675_p2.read() | p_38_i_i_7_reg_18611.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_8_fu_13709_p2() {
    underflow_14_not_8_fu_13709_p2 = (tmp36_fu_13705_p2.read() | p_38_i_i_8_reg_18636.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_9_fu_13739_p2() {
    underflow_14_not_9_fu_13739_p2 = (tmp40_fu_13735_p2.read() | p_38_i_i_9_reg_18661.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_fu_13469_p2() {
    underflow_14_not_fu_13469_p2 = (tmp4_fu_13465_p2.read() | p_38_i_i_reg_18436.read());
}

void subconv_1x1_16p_p::thread_underflow_14_not_s_fu_13769_p2() {
    underflow_14_not_s_fu_13769_p2 = (tmp44_fu_13765_p2.read() | p_38_i_i_10_reg_18686.read());
}

void subconv_1x1_16p_p::thread_underflow_14_s_fu_12375_p2() {
    underflow_14_s_fu_12375_p2 = (tmp_1195_reg_17783.read() & tmp43_fu_12369_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_15_fu_7342_p2() {
    underflow_15_fu_7342_p2 = (tmp_1240_reg_16290.read() & tmp61_fu_7336_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_16_fu_7425_p2() {
    underflow_16_fu_7425_p2 = (tmp_1250_reg_16337.read() & tmp65_fu_7419_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_17_fu_7508_p2() {
    underflow_17_fu_7508_p2 = (tmp_1260_reg_16384.read() & tmp69_fu_7502_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_18_fu_7591_p2() {
    underflow_18_fu_7591_p2 = (tmp_1270_reg_16431.read() & tmp73_fu_7585_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_19_fu_7674_p2() {
    underflow_19_fu_7674_p2 = (tmp_1280_reg_16478.read() & tmp77_fu_7668_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_1_fu_6180_p2() {
    underflow_1_fu_6180_p2 = (tmp_1100_reg_15632.read() & tmp5_fu_6174_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_20_fu_7757_p2() {
    underflow_20_fu_7757_p2 = (tmp_1290_reg_16525.read() & tmp81_fu_7751_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_21_fu_7840_p2() {
    underflow_21_fu_7840_p2 = (tmp_1300_reg_16572.read() & tmp85_fu_7834_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_22_fu_7923_p2() {
    underflow_22_fu_7923_p2 = (tmp_1310_reg_16619.read() & tmp89_fu_7917_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_23_fu_8006_p2() {
    underflow_23_fu_8006_p2 = (tmp_1320_reg_16666.read() & tmp93_fu_8000_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_2_fu_6263_p2() {
    underflow_2_fu_6263_p2 = (tmp_1110_reg_15679.read() & tmp9_fu_6257_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_3_fu_6346_p2() {
    underflow_3_fu_6346_p2 = (tmp_1120_reg_15726.read() & tmp13_fu_6340_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_4_fu_6429_p2() {
    underflow_4_fu_6429_p2 = (tmp_1130_reg_15773.read() & tmp17_fu_6423_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_5_fu_6512_p2() {
    underflow_5_fu_6512_p2 = (tmp_1140_reg_15820.read() & tmp21_fu_6506_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_6_fu_6595_p2() {
    underflow_6_fu_6595_p2 = (tmp_1150_reg_15867.read() & tmp25_fu_6589_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_7_fu_6678_p2() {
    underflow_7_fu_6678_p2 = (tmp_1160_reg_15914.read() & tmp29_fu_6672_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_8_fu_6761_p2() {
    underflow_8_fu_6761_p2 = (tmp_1170_reg_15961.read() & tmp33_fu_6755_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_9_fu_6844_p2() {
    underflow_9_fu_6844_p2 = (tmp_1180_reg_16008.read() & tmp37_fu_6838_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_fu_6097_p2() {
    underflow_fu_6097_p2 = (tmp_1090_reg_15585.read() & tmp1_fu_6091_p2.read());
}

void subconv_1x1_16p_p::thread_underflow_not_10_fu_8321_p2() {
    underflow_not_10_fu_8321_p2 = (tmp42_fu_8317_p2.read() | p_38_i_i7_s_reg_16958.read());
}

void subconv_1x1_16p_p::thread_underflow_not_11_fu_8351_p2() {
    underflow_not_11_fu_8351_p2 = (tmp46_fu_8347_p2.read() | p_38_i_i7_10_reg_16983.read());
}

void subconv_1x1_16p_p::thread_underflow_not_12_fu_8381_p2() {
    underflow_not_12_fu_8381_p2 = (tmp50_fu_8377_p2.read() | p_38_i_i7_11_reg_17008.read());
}

void subconv_1x1_16p_p::thread_underflow_not_13_fu_8411_p2() {
    underflow_not_13_fu_8411_p2 = (tmp54_fu_8407_p2.read() | p_38_i_i7_12_reg_17033.read());
}

void subconv_1x1_16p_p::thread_underflow_not_14_fu_8441_p2() {
    underflow_not_14_fu_8441_p2 = (tmp58_fu_8437_p2.read() | p_38_i_i7_13_reg_17058.read());
}

void subconv_1x1_16p_p::thread_underflow_not_15_fu_8471_p2() {
    underflow_not_15_fu_8471_p2 = (tmp62_fu_8467_p2.read() | p_38_i_i7_14_reg_17083.read());
}

void subconv_1x1_16p_p::thread_underflow_not_16_fu_8501_p2() {
    underflow_not_16_fu_8501_p2 = (tmp66_fu_8497_p2.read() | p_38_i_i7_15_reg_17108.read());
}

void subconv_1x1_16p_p::thread_underflow_not_17_fu_8531_p2() {
    underflow_not_17_fu_8531_p2 = (tmp70_fu_8527_p2.read() | p_38_i_i7_16_reg_17133.read());
}

void subconv_1x1_16p_p::thread_underflow_not_18_fu_8561_p2() {
    underflow_not_18_fu_8561_p2 = (tmp74_fu_8557_p2.read() | p_38_i_i7_17_reg_17158.read());
}

void subconv_1x1_16p_p::thread_underflow_not_19_fu_8591_p2() {
    underflow_not_19_fu_8591_p2 = (tmp78_fu_8587_p2.read() | p_38_i_i7_18_reg_17183.read());
}

void subconv_1x1_16p_p::thread_underflow_not_1_fu_8051_p2() {
    underflow_not_1_fu_8051_p2 = (tmp6_fu_8047_p2.read() | p_38_i_i7_1_reg_16733.read());
}

void subconv_1x1_16p_p::thread_underflow_not_20_fu_8621_p2() {
    underflow_not_20_fu_8621_p2 = (tmp82_fu_8617_p2.read() | p_38_i_i7_19_reg_17208.read());
}

void subconv_1x1_16p_p::thread_underflow_not_21_fu_8651_p2() {
    underflow_not_21_fu_8651_p2 = (tmp86_fu_8647_p2.read() | p_38_i_i7_20_reg_17233.read());
}

void subconv_1x1_16p_p::thread_underflow_not_22_fu_8681_p2() {
    underflow_not_22_fu_8681_p2 = (tmp90_fu_8677_p2.read() | p_38_i_i7_21_reg_17258.read());
}

void subconv_1x1_16p_p::thread_underflow_not_2_fu_8081_p2() {
    underflow_not_2_fu_8081_p2 = (tmp10_fu_8077_p2.read() | p_38_i_i7_2_reg_16758.read());
}

void subconv_1x1_16p_p::thread_underflow_not_3_fu_8111_p2() {
    underflow_not_3_fu_8111_p2 = (tmp14_fu_8107_p2.read() | p_38_i_i7_3_reg_16783.read());
}

void subconv_1x1_16p_p::thread_underflow_not_4_fu_8141_p2() {
    underflow_not_4_fu_8141_p2 = (tmp18_fu_8137_p2.read() | p_38_i_i7_4_reg_16808.read());
}

void subconv_1x1_16p_p::thread_underflow_not_5_fu_8171_p2() {
    underflow_not_5_fu_8171_p2 = (tmp22_fu_8167_p2.read() | p_38_i_i7_5_reg_16833.read());
}

void subconv_1x1_16p_p::thread_underflow_not_6_fu_8201_p2() {
    underflow_not_6_fu_8201_p2 = (tmp26_fu_8197_p2.read() | p_38_i_i7_6_reg_16858.read());
}

void subconv_1x1_16p_p::thread_underflow_not_7_fu_8231_p2() {
    underflow_not_7_fu_8231_p2 = (tmp30_fu_8227_p2.read() | p_38_i_i7_7_reg_16883.read());
}

void subconv_1x1_16p_p::thread_underflow_not_8_fu_8261_p2() {
    underflow_not_8_fu_8261_p2 = (tmp34_fu_8257_p2.read() | p_38_i_i7_8_reg_16908.read());
}

void subconv_1x1_16p_p::thread_underflow_not_9_fu_8291_p2() {
    underflow_not_9_fu_8291_p2 = (tmp38_fu_8287_p2.read() | p_38_i_i7_9_reg_16933.read());
}

void subconv_1x1_16p_p::thread_underflow_not_fu_8021_p2() {
    underflow_not_fu_8021_p2 = (tmp2_fu_8017_p2.read() | p_38_i_i7_reg_16708.read());
}

void subconv_1x1_16p_p::thread_underflow_not_s_fu_8711_p2() {
    underflow_not_s_fu_8711_p2 = (tmp94_fu_8707_p2.read() | p_38_i_i7_22_reg_17283.read());
}

void subconv_1x1_16p_p::thread_underflow_s_fu_7259_p2() {
    underflow_s_fu_7259_p2 = (tmp_1230_reg_16243.read() & tmp57_fu_7253_p2.read());
}

void subconv_1x1_16p_p::thread_w2_cast_cast7_fu_2472_p1() {
    w2_cast_cast7_fu_2472_p1 = esl_zext<15,5>(w2_reg_1805.read());
}

void subconv_1x1_16p_p::thread_w2_cast_cast_fu_2476_p1() {
    w2_cast_cast_fu_2476_p1 = esl_zext<10,5>(w2_reg_1805.read());
}

void subconv_1x1_16p_p::thread_w6_cast_cast_fu_14369_p1() {
    w6_cast_cast_fu_14369_p1 = esl_zext<11,5>(w6_mid2_reg_19070.read());
}

void subconv_1x1_16p_p::thread_w6_mid2_fu_14290_p3() {
    w6_mid2_fu_14290_p3 = (!tmp_396_fu_14285_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_396_fu_14285_p2.read()[0].to_bool())? ap_const_lv5_1: w6_phi_fu_1877_p4.read());
}

void subconv_1x1_16p_p::thread_w6_phi_fu_1877_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_19036.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        w6_phi_fu_1877_p4 = w_22_fu_14378_p2.read();
    } else {
        w6_phi_fu_1877_p4 = w6_reg_1873.read();
    }
}

void subconv_1x1_16p_p::thread_w_20_fu_2299_p2() {
    w_20_fu_2299_p2 = (!w_mid2_reg_14506.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w_mid2_reg_14506.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_w_21_fu_2707_p2() {
    w_21_fu_2707_p2 = (!w2_reg_1805.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w2_reg_1805.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_w_22_fu_14378_p2() {
    w_22_fu_14378_p2 = (!w6_mid2_reg_19070.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w6_mid2_reg_19070.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_w_cast_cast_fu_2390_p1() {
    w_cast_cast_fu_2390_p1 = esl_zext<11,5>(ap_reg_pp0_iter8_w_mid2_reg_14506.read());
}

void subconv_1x1_16p_p::thread_w_mid2_fu_2283_p3() {
    w_mid2_fu_2283_p3 = (!tmp_383_fu_2278_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_383_fu_2278_p2.read()[0].to_bool())? ap_const_lv5_1: w_phi_fu_1785_p4.read());
}

void subconv_1x1_16p_p::thread_w_phi_fu_1785_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_14476.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        w_phi_fu_1785_p4 = w_20_fu_2299_p2.read();
    } else {
        w_phi_fu_1785_p4 = w_reg_1781.read();
    }
}

void subconv_1x1_16p_p::thread_weight_0_V_address0() {
    weight_0_V_address0 = weight_0_V_addr_reg_14819.read();
}

void subconv_1x1_16p_p::thread_weight_0_V_address1() {
    weight_0_V_address1 = weight_0_V_addr_6_reg_14824.read();
}

void subconv_1x1_16p_p::thread_weight_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_0_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_0_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_0_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_10_V_address0() {
    weight_10_V_address0 = weight_10_V_addr_reg_14919.read();
}

void subconv_1x1_16p_p::thread_weight_10_V_address1() {
    weight_10_V_address1 = weight_10_V_addr_6_reg_14924.read();
}

void subconv_1x1_16p_p::thread_weight_10_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_10_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_10_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_10_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_11_V_address0() {
    weight_11_V_address0 = weight_11_V_addr_reg_14929.read();
}

void subconv_1x1_16p_p::thread_weight_11_V_address1() {
    weight_11_V_address1 = weight_11_V_addr_6_reg_14934.read();
}

void subconv_1x1_16p_p::thread_weight_11_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_11_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_11_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_11_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_12_V_address0() {
    weight_12_V_address0 = weight_12_V_addr_reg_14939.read();
}

void subconv_1x1_16p_p::thread_weight_12_V_address1() {
    weight_12_V_address1 = weight_12_V_addr_2_reg_14944.read();
}

void subconv_1x1_16p_p::thread_weight_12_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_12_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_12_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_12_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_13_V_address0() {
    weight_13_V_address0 = weight_13_V_addr_reg_14949.read();
}

void subconv_1x1_16p_p::thread_weight_13_V_address1() {
    weight_13_V_address1 = weight_13_V_addr_2_reg_14954.read();
}

void subconv_1x1_16p_p::thread_weight_13_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_13_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_13_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_13_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_14_V_address0() {
    weight_14_V_address0 = weight_14_V_addr_reg_14959.read();
}

void subconv_1x1_16p_p::thread_weight_14_V_address1() {
    weight_14_V_address1 = weight_14_V_addr_2_reg_14964.read();
}

void subconv_1x1_16p_p::thread_weight_14_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_14_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_14_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_14_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_15_V_address0() {
    weight_15_V_address0 = weight_15_V_addr_reg_14969.read();
}

void subconv_1x1_16p_p::thread_weight_15_V_address1() {
    weight_15_V_address1 = weight_15_V_addr_2_reg_14974.read();
}

void subconv_1x1_16p_p::thread_weight_15_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_15_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_15_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_15_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_16_V_address0() {
    weight_16_V_address0 = weight_16_V_addr_reg_14979.read();
}

void subconv_1x1_16p_p::thread_weight_16_V_address1() {
    weight_16_V_address1 = weight_16_V_addr_2_reg_14984.read();
}

void subconv_1x1_16p_p::thread_weight_16_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_16_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_16_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_16_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_17_V_address0() {
    weight_17_V_address0 = weight_17_V_addr_reg_14989.read();
}

void subconv_1x1_16p_p::thread_weight_17_V_address1() {
    weight_17_V_address1 = weight_17_V_addr_2_reg_14994.read();
}

void subconv_1x1_16p_p::thread_weight_17_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_17_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_17_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_17_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_18_V_address0() {
    weight_18_V_address0 = weight_18_V_addr_reg_14999.read();
}

void subconv_1x1_16p_p::thread_weight_18_V_address1() {
    weight_18_V_address1 = weight_18_V_addr_2_reg_15004.read();
}

void subconv_1x1_16p_p::thread_weight_18_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_18_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_18_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_18_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_19_V_address0() {
    weight_19_V_address0 = weight_19_V_addr_reg_15009.read();
}

void subconv_1x1_16p_p::thread_weight_19_V_address1() {
    weight_19_V_address1 = weight_19_V_addr_2_reg_15014.read();
}

void subconv_1x1_16p_p::thread_weight_19_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_19_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_19_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_19_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_1_V_address0() {
    weight_1_V_address0 = weight_1_V_addr_reg_14829.read();
}

void subconv_1x1_16p_p::thread_weight_1_V_address1() {
    weight_1_V_address1 = weight_1_V_addr_6_reg_14834.read();
}

void subconv_1x1_16p_p::thread_weight_1_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_1_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_1_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_1_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_20_V_address0() {
    weight_20_V_address0 = weight_20_V_addr_reg_15019.read();
}

void subconv_1x1_16p_p::thread_weight_20_V_address1() {
    weight_20_V_address1 = weight_20_V_addr_2_reg_15024.read();
}

void subconv_1x1_16p_p::thread_weight_20_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_20_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_20_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_20_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_21_V_address0() {
    weight_21_V_address0 = weight_21_V_addr_reg_15029.read();
}

void subconv_1x1_16p_p::thread_weight_21_V_address1() {
    weight_21_V_address1 = weight_21_V_addr_2_reg_15034.read();
}

void subconv_1x1_16p_p::thread_weight_21_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_21_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_21_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_21_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_22_V_address0() {
    weight_22_V_address0 = weight_22_V_addr_reg_15039.read();
}

void subconv_1x1_16p_p::thread_weight_22_V_address1() {
    weight_22_V_address1 = weight_22_V_addr_2_reg_15044.read();
}

void subconv_1x1_16p_p::thread_weight_22_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_22_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_22_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_22_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_23_V_address0() {
    weight_23_V_address0 = weight_23_V_addr_reg_15049.read();
}

void subconv_1x1_16p_p::thread_weight_23_V_address1() {
    weight_23_V_address1 = weight_23_V_addr_2_reg_15054.read();
}

void subconv_1x1_16p_p::thread_weight_23_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_23_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_23_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_23_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_2_V_address0() {
    weight_2_V_address0 = weight_2_V_addr_reg_14839.read();
}

void subconv_1x1_16p_p::thread_weight_2_V_address1() {
    weight_2_V_address1 = weight_2_V_addr_6_reg_14844.read();
}

void subconv_1x1_16p_p::thread_weight_2_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_2_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_2_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_2_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_3_V_address0() {
    weight_3_V_address0 = weight_3_V_addr_reg_14849.read();
}

void subconv_1x1_16p_p::thread_weight_3_V_address1() {
    weight_3_V_address1 = weight_3_V_addr_6_reg_14854.read();
}

void subconv_1x1_16p_p::thread_weight_3_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_3_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_3_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_3_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_4_V_address0() {
    weight_4_V_address0 = weight_4_V_addr_reg_14859.read();
}

void subconv_1x1_16p_p::thread_weight_4_V_address1() {
    weight_4_V_address1 = weight_4_V_addr_6_reg_14864.read();
}

void subconv_1x1_16p_p::thread_weight_4_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_4_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_4_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_4_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_5_V_address0() {
    weight_5_V_address0 = weight_5_V_addr_reg_14869.read();
}

void subconv_1x1_16p_p::thread_weight_5_V_address1() {
    weight_5_V_address1 = weight_5_V_addr_6_reg_14874.read();
}

void subconv_1x1_16p_p::thread_weight_5_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_5_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_5_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_5_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_6_V_address0() {
    weight_6_V_address0 = weight_6_V_addr_reg_14879.read();
}

void subconv_1x1_16p_p::thread_weight_6_V_address1() {
    weight_6_V_address1 = weight_6_V_addr_6_reg_14884.read();
}

void subconv_1x1_16p_p::thread_weight_6_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_6_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_6_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_6_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_7_V_address0() {
    weight_7_V_address0 = weight_7_V_addr_reg_14889.read();
}

void subconv_1x1_16p_p::thread_weight_7_V_address1() {
    weight_7_V_address1 = weight_7_V_addr_6_reg_14894.read();
}

void subconv_1x1_16p_p::thread_weight_7_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_7_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_7_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_7_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_8_V_address0() {
    weight_8_V_address0 = weight_8_V_addr_reg_14899.read();
}

void subconv_1x1_16p_p::thread_weight_8_V_address1() {
    weight_8_V_address1 = weight_8_V_addr_6_reg_14904.read();
}

void subconv_1x1_16p_p::thread_weight_8_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_8_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_8_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_8_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_9_V_address0() {
    weight_9_V_address0 = weight_9_V_addr_reg_14909.read();
}

void subconv_1x1_16p_p::thread_weight_9_V_address1() {
    weight_9_V_address1 = weight_9_V_addr_6_reg_14914.read();
}

void subconv_1x1_16p_p::thread_weight_9_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_9_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_9_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_9_V_ce1 = ap_const_logic_0;
    }
}

}

