#include "subconv_1x1_32_p.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void subconv_1x1_32_p::thread_tmp_271_6_fu_3922_p1() {
    tmp_271_6_fu_3922_p1 = esl_zext<8,1>(tmp_1020_reg_8794.read());
}

void subconv_1x1_32_p::thread_tmp_271_7_fu_4148_p1() {
    tmp_271_7_fu_4148_p1 = esl_zext<8,1>(tmp_1030_reg_8824.read());
}

void subconv_1x1_32_p::thread_tmp_271_8_fu_4374_p1() {
    tmp_271_8_fu_4374_p1 = esl_zext<8,1>(tmp_1040_reg_8854.read());
}

void subconv_1x1_32_p::thread_tmp_271_9_fu_4600_p1() {
    tmp_271_9_fu_4600_p1 = esl_zext<8,1>(tmp_1050_reg_8884.read());
}

void subconv_1x1_32_p::thread_tmp_271_s_fu_4826_p1() {
    tmp_271_s_fu_4826_p1 = esl_zext<8,1>(tmp_1060_reg_8914.read());
}

void subconv_1x1_32_p::thread_tmp_275_10_fu_5077_p2() {
    tmp_275_10_fu_5077_p2 = (tmp_1072_fu_5069_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_275_1_fu_2817_p2() {
    tmp_275_1_fu_2817_p2 = (tmp_972_fu_2809_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_275_2_fu_3043_p2() {
    tmp_275_2_fu_3043_p2 = (tmp_982_fu_3035_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_275_3_fu_3269_p2() {
    tmp_275_3_fu_3269_p2 = (tmp_992_fu_3261_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_275_4_fu_3495_p2() {
    tmp_275_4_fu_3495_p2 = (tmp_1002_fu_3487_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_275_5_fu_3721_p2() {
    tmp_275_5_fu_3721_p2 = (tmp_1012_fu_3713_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_275_6_fu_3947_p2() {
    tmp_275_6_fu_3947_p2 = (tmp_1022_fu_3939_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_275_7_fu_4173_p2() {
    tmp_275_7_fu_4173_p2 = (tmp_1032_fu_4165_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_275_8_fu_4399_p2() {
    tmp_275_8_fu_4399_p2 = (tmp_1042_fu_4391_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_275_9_fu_4625_p2() {
    tmp_275_9_fu_4625_p2 = (tmp_1052_fu_4617_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_275_s_fu_4851_p2() {
    tmp_275_s_fu_4851_p2 = (tmp_1062_fu_4843_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_278_10_fu_7078_p2() {
    tmp_278_10_fu_7078_p2 = (tmp_1073_fu_7066_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_278_1_fu_5418_p2() {
    tmp_278_1_fu_5418_p2 = (tmp_973_fu_5406_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_278_2_fu_5584_p2() {
    tmp_278_2_fu_5584_p2 = (tmp_983_fu_5572_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_278_3_fu_5750_p2() {
    tmp_278_3_fu_5750_p2 = (tmp_993_fu_5738_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_278_4_fu_5916_p2() {
    tmp_278_4_fu_5916_p2 = (tmp_1003_fu_5904_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_278_5_fu_6082_p2() {
    tmp_278_5_fu_6082_p2 = (tmp_1013_fu_6070_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_278_6_fu_6248_p2() {
    tmp_278_6_fu_6248_p2 = (tmp_1023_fu_6236_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_278_7_fu_6414_p2() {
    tmp_278_7_fu_6414_p2 = (tmp_1033_fu_6402_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_278_8_fu_6580_p2() {
    tmp_278_8_fu_6580_p2 = (tmp_1043_fu_6568_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_278_9_fu_6746_p2() {
    tmp_278_9_fu_6746_p2 = (tmp_1053_fu_6734_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_278_s_fu_6912_p2() {
    tmp_278_s_fu_6912_p2 = (tmp_1063_fu_6900_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_280_10_fu_7110_p2() {
    tmp_280_10_fu_7110_p2 = (tmp_1069_reg_9998.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_280_1_fu_5450_p2() {
    tmp_280_1_fu_5450_p2 = (tmp_969_reg_9058.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_280_2_fu_5616_p2() {
    tmp_280_2_fu_5616_p2 = (tmp_979_reg_9152.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_280_3_fu_5782_p2() {
    tmp_280_3_fu_5782_p2 = (tmp_989_reg_9246.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_280_4_fu_5948_p2() {
    tmp_280_4_fu_5948_p2 = (tmp_999_reg_9340.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_280_5_fu_6114_p2() {
    tmp_280_5_fu_6114_p2 = (tmp_1009_reg_9434.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_280_6_fu_6280_p2() {
    tmp_280_6_fu_6280_p2 = (tmp_1019_reg_9528.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_280_7_fu_6446_p2() {
    tmp_280_7_fu_6446_p2 = (tmp_1029_reg_9622.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_280_8_fu_6612_p2() {
    tmp_280_8_fu_6612_p2 = (tmp_1039_reg_9716.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_280_9_fu_6778_p2() {
    tmp_280_9_fu_6778_p2 = (tmp_1049_reg_9810.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_280_s_fu_6944_p2() {
    tmp_280_s_fu_6944_p2 = (tmp_1059_reg_9904.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_282_10_cast_fu_5134_p1() {
    tmp_282_10_cast_fu_5134_p1 = esl_sext<17,14>(tmp_282_10_fu_5127_p3.read());
}

void subconv_1x1_32_p::thread_tmp_282_10_fu_5127_p3() {
    tmp_282_10_fu_5127_p3 = esl_concat<8,6>(ShuffleConvs_0_Downs_142_reg_8949.read(), ap_const_lv6_0);
}

void subconv_1x1_32_p::thread_tmp_282_1_cast_fu_2874_p1() {
    tmp_282_1_cast_fu_2874_p1 = esl_sext<17,14>(tmp_282_1_fu_2867_p3.read());
}

void subconv_1x1_32_p::thread_tmp_282_1_fu_2867_p3() {
    tmp_282_1_fu_2867_p3 = esl_concat<8,6>(ShuffleConvs_0_Downs_122_reg_8649.read(), ap_const_lv6_0);
}

void subconv_1x1_32_p::thread_tmp_282_2_cast_fu_3100_p1() {
    tmp_282_2_cast_fu_3100_p1 = esl_sext<17,14>(tmp_282_2_fu_3093_p3.read());
}

void subconv_1x1_32_p::thread_tmp_282_2_fu_3093_p3() {
    tmp_282_2_fu_3093_p3 = esl_concat<8,6>(ShuffleConvs_0_Downs_124_reg_8679.read(), ap_const_lv6_0);
}

void subconv_1x1_32_p::thread_tmp_282_3_cast_fu_3326_p1() {
    tmp_282_3_cast_fu_3326_p1 = esl_sext<17,14>(tmp_282_3_fu_3319_p3.read());
}

void subconv_1x1_32_p::thread_tmp_282_3_fu_3319_p3() {
    tmp_282_3_fu_3319_p3 = esl_concat<8,6>(ShuffleConvs_0_Downs_126_reg_8709.read(), ap_const_lv6_0);
}

void subconv_1x1_32_p::thread_tmp_282_4_cast_fu_3552_p1() {
    tmp_282_4_cast_fu_3552_p1 = esl_sext<17,14>(tmp_282_4_fu_3545_p3.read());
}

void subconv_1x1_32_p::thread_tmp_282_4_fu_3545_p3() {
    tmp_282_4_fu_3545_p3 = esl_concat<8,6>(ShuffleConvs_0_Downs_128_reg_8739.read(), ap_const_lv6_0);
}

void subconv_1x1_32_p::thread_tmp_282_5_cast_fu_3778_p1() {
    tmp_282_5_cast_fu_3778_p1 = esl_sext<17,14>(tmp_282_5_fu_3771_p3.read());
}

void subconv_1x1_32_p::thread_tmp_282_5_fu_3771_p3() {
    tmp_282_5_fu_3771_p3 = esl_concat<8,6>(ShuffleConvs_0_Downs_130_reg_8769.read(), ap_const_lv6_0);
}

void subconv_1x1_32_p::thread_tmp_282_6_cast_fu_4004_p1() {
    tmp_282_6_cast_fu_4004_p1 = esl_sext<17,14>(tmp_282_6_fu_3997_p3.read());
}

void subconv_1x1_32_p::thread_tmp_282_6_fu_3997_p3() {
    tmp_282_6_fu_3997_p3 = esl_concat<8,6>(ShuffleConvs_0_Downs_132_reg_8799.read(), ap_const_lv6_0);
}

void subconv_1x1_32_p::thread_tmp_282_7_cast_fu_4230_p1() {
    tmp_282_7_cast_fu_4230_p1 = esl_sext<17,14>(tmp_282_7_fu_4223_p3.read());
}

void subconv_1x1_32_p::thread_tmp_282_7_fu_4223_p3() {
    tmp_282_7_fu_4223_p3 = esl_concat<8,6>(ShuffleConvs_0_Downs_134_reg_8829.read(), ap_const_lv6_0);
}

void subconv_1x1_32_p::thread_tmp_282_8_cast_fu_4456_p1() {
    tmp_282_8_cast_fu_4456_p1 = esl_sext<17,14>(tmp_282_8_fu_4449_p3.read());
}

void subconv_1x1_32_p::thread_tmp_282_8_fu_4449_p3() {
    tmp_282_8_fu_4449_p3 = esl_concat<8,6>(ShuffleConvs_0_Downs_136_reg_8859.read(), ap_const_lv6_0);
}

void subconv_1x1_32_p::thread_tmp_282_9_cast_fu_4682_p1() {
    tmp_282_9_cast_fu_4682_p1 = esl_sext<17,14>(tmp_282_9_fu_4675_p3.read());
}

void subconv_1x1_32_p::thread_tmp_282_9_fu_4675_p3() {
    tmp_282_9_fu_4675_p3 = esl_concat<8,6>(ShuffleConvs_0_Downs_138_reg_8889.read(), ap_const_lv6_0);
}

void subconv_1x1_32_p::thread_tmp_282_cast_fu_4908_p1() {
    tmp_282_cast_fu_4908_p1 = esl_sext<17,14>(tmp_282_s_fu_4901_p3.read());
}

void subconv_1x1_32_p::thread_tmp_282_s_fu_4901_p3() {
    tmp_282_s_fu_4901_p3 = esl_concat<8,6>(ShuffleConvs_0_Downs_140_reg_8919.read(), ap_const_lv6_0);
}

void subconv_1x1_32_p::thread_tmp_283_10_fu_5138_p1() {
    tmp_283_10_fu_5138_p1 = esl_sext<17,16>(rr_1_V_68_reg_8934.read());
}

void subconv_1x1_32_p::thread_tmp_283_1_fu_2878_p1() {
    tmp_283_1_fu_2878_p1 = esl_sext<17,16>(rr_1_V_58_reg_8634.read());
}

void subconv_1x1_32_p::thread_tmp_283_2_fu_3104_p1() {
    tmp_283_2_fu_3104_p1 = esl_sext<17,16>(rr_1_V_59_reg_8664.read());
}

void subconv_1x1_32_p::thread_tmp_283_3_fu_3330_p1() {
    tmp_283_3_fu_3330_p1 = esl_sext<17,16>(rr_1_V_60_reg_8694.read());
}

void subconv_1x1_32_p::thread_tmp_283_4_fu_3556_p1() {
    tmp_283_4_fu_3556_p1 = esl_sext<17,16>(rr_1_V_61_reg_8724.read());
}

void subconv_1x1_32_p::thread_tmp_283_5_fu_3782_p1() {
    tmp_283_5_fu_3782_p1 = esl_sext<17,16>(rr_1_V_62_reg_8754.read());
}

void subconv_1x1_32_p::thread_tmp_283_6_fu_4008_p1() {
    tmp_283_6_fu_4008_p1 = esl_sext<17,16>(rr_1_V_63_reg_8784.read());
}

void subconv_1x1_32_p::thread_tmp_283_7_fu_4234_p1() {
    tmp_283_7_fu_4234_p1 = esl_sext<17,16>(rr_1_V_64_reg_8814.read());
}

void subconv_1x1_32_p::thread_tmp_283_8_fu_4460_p1() {
    tmp_283_8_fu_4460_p1 = esl_sext<17,16>(rr_1_V_65_reg_8844.read());
}

void subconv_1x1_32_p::thread_tmp_283_9_fu_4686_p1() {
    tmp_283_9_fu_4686_p1 = esl_sext<17,16>(rr_1_V_66_reg_8874.read());
}

void subconv_1x1_32_p::thread_tmp_283_s_fu_4912_p1() {
    tmp_283_s_fu_4912_p1 = esl_sext<17,16>(rr_1_V_67_reg_8904.read());
}

void subconv_1x1_32_p::thread_tmp_286_10_fu_5165_p1() {
    tmp_286_10_fu_5165_p1 = esl_zext<8,1>(tmp_1075_reg_8954.read());
}

void subconv_1x1_32_p::thread_tmp_286_1_fu_2905_p1() {
    tmp_286_1_fu_2905_p1 = esl_zext<8,1>(tmp_975_reg_8654.read());
}

void subconv_1x1_32_p::thread_tmp_286_2_fu_3131_p1() {
    tmp_286_2_fu_3131_p1 = esl_zext<8,1>(tmp_985_reg_8684.read());
}

void subconv_1x1_32_p::thread_tmp_286_3_fu_3357_p1() {
    tmp_286_3_fu_3357_p1 = esl_zext<8,1>(tmp_995_reg_8714.read());
}

void subconv_1x1_32_p::thread_tmp_286_4_fu_3583_p1() {
    tmp_286_4_fu_3583_p1 = esl_zext<8,1>(tmp_1005_reg_8744.read());
}

void subconv_1x1_32_p::thread_tmp_286_5_fu_3809_p1() {
    tmp_286_5_fu_3809_p1 = esl_zext<8,1>(tmp_1015_reg_8774.read());
}

void subconv_1x1_32_p::thread_tmp_286_6_fu_4035_p1() {
    tmp_286_6_fu_4035_p1 = esl_zext<8,1>(tmp_1025_reg_8804.read());
}

void subconv_1x1_32_p::thread_tmp_286_7_fu_4261_p1() {
    tmp_286_7_fu_4261_p1 = esl_zext<8,1>(tmp_1035_reg_8834.read());
}

void subconv_1x1_32_p::thread_tmp_286_8_fu_4487_p1() {
    tmp_286_8_fu_4487_p1 = esl_zext<8,1>(tmp_1045_reg_8864.read());
}

void subconv_1x1_32_p::thread_tmp_286_9_fu_4713_p1() {
    tmp_286_9_fu_4713_p1 = esl_zext<8,1>(tmp_1055_reg_8894.read());
}

void subconv_1x1_32_p::thread_tmp_286_s_fu_4939_p1() {
    tmp_286_s_fu_4939_p1 = esl_zext<8,1>(tmp_1065_reg_8924.read());
}

void subconv_1x1_32_p::thread_tmp_290_10_fu_5190_p2() {
    tmp_290_10_fu_5190_p2 = (tmp_1077_fu_5182_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_290_1_fu_2930_p2() {
    tmp_290_1_fu_2930_p2 = (tmp_977_fu_2922_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_290_2_fu_3156_p2() {
    tmp_290_2_fu_3156_p2 = (tmp_987_fu_3148_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_290_3_fu_3382_p2() {
    tmp_290_3_fu_3382_p2 = (tmp_997_fu_3374_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_290_4_fu_3608_p2() {
    tmp_290_4_fu_3608_p2 = (tmp_1007_fu_3600_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_290_5_fu_3834_p2() {
    tmp_290_5_fu_3834_p2 = (tmp_1017_fu_3826_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_290_6_fu_4060_p2() {
    tmp_290_6_fu_4060_p2 = (tmp_1027_fu_4052_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_290_7_fu_4286_p2() {
    tmp_290_7_fu_4286_p2 = (tmp_1037_fu_4278_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_290_8_fu_4512_p2() {
    tmp_290_8_fu_4512_p2 = (tmp_1047_fu_4504_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_290_9_fu_4738_p2() {
    tmp_290_9_fu_4738_p2 = (tmp_1057_fu_4730_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_290_s_fu_4964_p2() {
    tmp_290_s_fu_4964_p2 = (tmp_1067_fu_4956_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_293_10_fu_7161_p2() {
    tmp_293_10_fu_7161_p2 = (tmp_1078_fu_7149_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_293_1_fu_5501_p2() {
    tmp_293_1_fu_5501_p2 = (tmp_978_fu_5489_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_293_2_fu_5667_p2() {
    tmp_293_2_fu_5667_p2 = (tmp_988_fu_5655_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_293_3_fu_5833_p2() {
    tmp_293_3_fu_5833_p2 = (tmp_998_fu_5821_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_293_4_fu_5999_p2() {
    tmp_293_4_fu_5999_p2 = (tmp_1008_fu_5987_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_293_5_fu_6165_p2() {
    tmp_293_5_fu_6165_p2 = (tmp_1018_fu_6153_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_293_6_fu_6331_p2() {
    tmp_293_6_fu_6331_p2 = (tmp_1028_fu_6319_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_293_7_fu_6497_p2() {
    tmp_293_7_fu_6497_p2 = (tmp_1038_fu_6485_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_293_8_fu_6663_p2() {
    tmp_293_8_fu_6663_p2 = (tmp_1048_fu_6651_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_293_9_fu_6829_p2() {
    tmp_293_9_fu_6829_p2 = (tmp_1058_fu_6817_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_293_s_fu_6995_p2() {
    tmp_293_s_fu_6995_p2 = (tmp_1068_fu_6983_p3.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_295_10_fu_7193_p2() {
    tmp_295_10_fu_7193_p2 = (tmp_1074_reg_10045.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_295_1_fu_5533_p2() {
    tmp_295_1_fu_5533_p2 = (tmp_974_reg_9105.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_295_2_fu_5699_p2() {
    tmp_295_2_fu_5699_p2 = (tmp_984_reg_9199.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_295_3_fu_5865_p2() {
    tmp_295_3_fu_5865_p2 = (tmp_994_reg_9293.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_295_4_fu_6031_p2() {
    tmp_295_4_fu_6031_p2 = (tmp_1004_reg_9387.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_295_5_fu_6197_p2() {
    tmp_295_5_fu_6197_p2 = (tmp_1014_reg_9481.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_295_6_fu_6363_p2() {
    tmp_295_6_fu_6363_p2 = (tmp_1024_reg_9575.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_295_7_fu_6529_p2() {
    tmp_295_7_fu_6529_p2 = (tmp_1034_reg_9669.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_295_8_fu_6695_p2() {
    tmp_295_8_fu_6695_p2 = (tmp_1044_reg_9763.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_295_9_fu_6861_p2() {
    tmp_295_9_fu_6861_p2 = (tmp_1054_reg_9857.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_295_s_fu_7027_p2() {
    tmp_295_s_fu_7027_p2 = (tmp_1064_reg_9951.read() ^ ap_const_lv1_1);
}

void subconv_1x1_32_p::thread_tmp_364_fu_1825_p2() {
    tmp_364_fu_1825_p2 = (exitcond26_mid_fu_1813_p2.read() | exitcond_flatten5_reg_8188.read());
}

void subconv_1x1_32_p::thread_tmp_365_fu_1868_p2() {
    tmp_365_fu_1868_p2 = (!p_shl_cast_fu_1853_p1.read().is_01() || !p_shl1_cast_fu_1864_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl_cast_fu_1853_p1.read()) + sc_biguint<12>(p_shl1_cast_fu_1864_p1.read()));
}

void subconv_1x1_32_p::thread_tmp_366_fu_1877_p2() {
    tmp_366_fu_1877_p2 = (!w_cast_cast_fu_1874_p1.read().is_01() || !tmp_365_fu_1868_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(w_cast_cast_fu_1874_p1.read()) + sc_biguint<12>(tmp_365_fu_1868_p2.read()));
}

void subconv_1x1_32_p::thread_tmp_367_fu_1920_p3() {
    tmp_367_fu_1920_p3 = esl_concat<6,5>(h1_reg_1532.read(), ap_const_lv5_0);
}

void subconv_1x1_32_p::thread_tmp_368_fu_1932_p3() {
    tmp_368_fu_1932_p3 = esl_concat<6,1>(h1_reg_1532.read(), ap_const_lv1_0);
}

void subconv_1x1_32_p::thread_tmp_369_fu_1944_p2() {
    tmp_369_fu_1944_p2 = (!p_shl3_cast_fu_1940_p1.read().is_01() || !p_shl2_cast_fu_1928_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl3_cast_fu_1940_p1.read()) + sc_biguint<12>(p_shl2_cast_fu_1928_p1.read()));
}

void subconv_1x1_32_p::thread_tmp_370_fu_1964_p2() {
    tmp_370_fu_1964_p2 = (!tmp_369_reg_8234.read().is_01() || !w2_cast_cast_fu_1960_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_369_reg_8234.read()) + sc_biguint<12>(w2_cast_cast_fu_1960_p1.read()));
}

void subconv_1x1_32_p::thread_tmp_371_fu_8027_p2() {
    tmp_371_fu_8027_p2 = (exitcond_mid_fu_8008_p2.read() | exitcond_flatten7_reg_10696.read());
}

void subconv_1x1_32_p::thread_tmp_372_fu_8070_p2() {
    tmp_372_fu_8070_p2 = (!p_shl8_cast_fu_8055_p1.read().is_01() || !p_shl9_cast_fu_8066_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl8_cast_fu_8055_p1.read()) + sc_biguint<12>(p_shl9_cast_fu_8066_p1.read()));
}

void subconv_1x1_32_p::thread_tmp_373_fu_8079_p2() {
    tmp_373_fu_8079_p2 = (!w6_cast_cast_fu_8076_p1.read().is_01() || !tmp_372_fu_8070_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(w6_cast_cast_fu_8076_p1.read()) + sc_biguint<12>(tmp_372_fu_8070_p2.read()));
}

void subconv_1x1_32_p::thread_tmp_374_fu_2156_p2() {
    tmp_374_fu_2156_p2 = (!ci_reg_1556.read().is_01() || !ap_const_lv5_C.is_01())? sc_lv<1>(): (sc_biguint<5>(ci_reg_1556.read()) < sc_biguint<5>(ap_const_lv5_C));
}

void subconv_1x1_32_p::thread_tmp_375_fu_2162_p2() {
    tmp_375_fu_2162_p2 = (!ap_const_lv5_14.is_01() || !ci_reg_1556.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_14) + sc_biguint<5>(ci_reg_1556.read()));
}

void subconv_1x1_32_p::thread_tmp_376_fu_2089_p2() {
    tmp_376_fu_2089_p2 = (!p_shl7_cast_fu_2085_p1.read().is_01() || !p_shl6_cast_fu_2073_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl7_cast_fu_2085_p1.read()) + sc_biguint<11>(p_shl6_cast_fu_2073_p1.read()));
}

void subconv_1x1_32_p::thread_tmp_377_fu_2095_p2() {
    tmp_377_fu_2095_p2 = (!tmp_376_fu_2089_p2.read().is_01() || !h1_cast_cast_reg_8229.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_376_fu_2089_p2.read()) + sc_biguint<11>(h1_cast_cast_reg_8229.read()));
}

void subconv_1x1_32_p::thread_tmp_378_fu_2124_p2() {
    tmp_378_fu_2124_p2 = (!p_shl5_cast_fu_2120_p1.read().is_01() || !p_shl4_cast_fu_2104_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl5_cast_fu_2120_p1.read()) + sc_biguint<13>(p_shl4_cast_fu_2104_p3.read()));
}

void subconv_1x1_32_p::thread_tmp_379_fu_2130_p2() {
    tmp_379_fu_2130_p2 = (!tmp_378_fu_2124_p2.read().is_01() || !w2_cast_cast6_reg_8243.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_378_fu_2124_p2.read()) + sc_biguint<13>(w2_cast_cast6_reg_8243.read()));
}

void subconv_1x1_32_p::thread_tmp_950_fu_1857_p3() {
    tmp_950_fu_1857_p3 = esl_concat<6,1>(h_cast_mid2_reg_8212.read(), ap_const_lv1_0);
}

void subconv_1x1_32_p::thread_tmp_951_fu_8048_p3() {
    tmp_951_fu_8048_p3 = esl_concat<6,5>(h5_cast_mid2_reg_10721.read(), ap_const_lv5_0);
}

void subconv_1x1_32_p::thread_tmp_952_fu_8059_p3() {
    tmp_952_fu_8059_p3 = esl_concat<6,1>(h5_cast_mid2_reg_10721.read(), ap_const_lv1_0);
}

void subconv_1x1_32_p::thread_tmp_953_fu_8171_p3() {
    tmp_953_fu_8171_p3 = tmp_101_fu_8118_p26.read().range(7, 7);
}

void subconv_1x1_32_p::thread_tmp_954_fu_2055_p4() {
    tmp_954_fu_2055_p4 = phi_mul_reg_1568.read().range(10, 9);
}

void subconv_1x1_32_p::thread_tmp_955_fu_2065_p3() {
    tmp_955_fu_2065_p3 = esl_concat<2,5>(tmp_954_fu_2055_p4.read(), ap_const_lv5_0);
}

void subconv_1x1_32_p::thread_tmp_956_fu_2077_p3() {
    tmp_956_fu_2077_p3 = esl_concat<2,1>(tmp_954_fu_2055_p4.read(), ap_const_lv1_0);
}

void subconv_1x1_32_p::thread_tmp_957_fu_2100_p1() {
    tmp_957_fu_2100_p1 = tmp_377_fu_2095_p2.read().range(8-1, 0);
}

void subconv_1x1_32_p::thread_tmp_958_fu_2112_p3() {
    tmp_958_fu_2112_p3 = esl_concat<11,1>(tmp_377_fu_2095_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_32_p::thread_tmp_961_fu_2569_p3() {
    tmp_961_fu_2569_p3 = p_Val2_s_fu_2542_p2.read().range(13, 13);
}

void subconv_1x1_32_p::thread_tmp_962_fu_2583_p3() {
    tmp_962_fu_2583_p3 = p_Val2_13_fu_2577_p2.read().range(7, 7);
}

void subconv_1x1_32_p::thread_tmp_963_fu_5240_p3() {
    tmp_963_fu_5240_p3 = p_Val2_s_reg_8959.read().range(14, 14);
}

void subconv_1x1_32_p::thread_tmp_966_fu_2682_p3() {
    tmp_966_fu_2682_p3 = p_Val2_14_fu_2655_p2.read().range(13, 13);
}

void subconv_1x1_32_p::thread_tmp_967_fu_2696_p3() {
    tmp_967_fu_2696_p3 = p_Val2_16_fu_2690_p2.read().range(7, 7);
}

void subconv_1x1_32_p::thread_tmp_968_fu_5323_p3() {
    tmp_968_fu_5323_p3 = p_Val2_14_reg_9006.read().range(14, 14);
}

void subconv_1x1_32_p::thread_tmp_971_fu_2795_p3() {
    tmp_971_fu_2795_p3 = p_Val2_87_1_fu_2768_p2.read().range(13, 13);
}

void subconv_1x1_32_p::thread_tmp_972_fu_2809_p3() {
    tmp_972_fu_2809_p3 = p_Val2_89_1_fu_2803_p2.read().range(7, 7);
}

void subconv_1x1_32_p::thread_tmp_973_fu_5406_p3() {
    tmp_973_fu_5406_p3 = p_Val2_87_1_reg_9053.read().range(14, 14);
}

void subconv_1x1_32_p::thread_tmp_976_fu_2908_p3() {
    tmp_976_fu_2908_p3 = p_Val2_92_1_fu_2881_p2.read().range(13, 13);
}

void subconv_1x1_32_p::thread_tmp_977_fu_2922_p3() {
    tmp_977_fu_2922_p3 = p_Val2_94_1_fu_2916_p2.read().range(7, 7);
}

void subconv_1x1_32_p::thread_tmp_978_fu_5489_p3() {
    tmp_978_fu_5489_p3 = p_Val2_92_1_reg_9100.read().range(14, 14);
}

void subconv_1x1_32_p::thread_tmp_981_fu_3021_p3() {
    tmp_981_fu_3021_p3 = p_Val2_87_2_fu_2994_p2.read().range(13, 13);
}

void subconv_1x1_32_p::thread_tmp_982_fu_3035_p3() {
    tmp_982_fu_3035_p3 = p_Val2_89_2_fu_3029_p2.read().range(7, 7);
}

void subconv_1x1_32_p::thread_tmp_983_fu_5572_p3() {
    tmp_983_fu_5572_p3 = p_Val2_87_2_reg_9147.read().range(14, 14);
}

void subconv_1x1_32_p::thread_tmp_986_fu_3134_p3() {
    tmp_986_fu_3134_p3 = p_Val2_92_2_fu_3107_p2.read().range(13, 13);
}

void subconv_1x1_32_p::thread_tmp_987_fu_3148_p3() {
    tmp_987_fu_3148_p3 = p_Val2_94_2_fu_3142_p2.read().range(7, 7);
}

void subconv_1x1_32_p::thread_tmp_988_fu_5655_p3() {
    tmp_988_fu_5655_p3 = p_Val2_92_2_reg_9194.read().range(14, 14);
}

void subconv_1x1_32_p::thread_tmp_991_fu_3247_p3() {
    tmp_991_fu_3247_p3 = p_Val2_87_3_fu_3220_p2.read().range(13, 13);
}

void subconv_1x1_32_p::thread_tmp_992_fu_3261_p3() {
    tmp_992_fu_3261_p3 = p_Val2_89_3_fu_3255_p2.read().range(7, 7);
}

void subconv_1x1_32_p::thread_tmp_993_fu_5738_p3() {
    tmp_993_fu_5738_p3 = p_Val2_87_3_reg_9241.read().range(14, 14);
}

void subconv_1x1_32_p::thread_tmp_996_fu_3360_p3() {
    tmp_996_fu_3360_p3 = p_Val2_92_3_fu_3333_p2.read().range(13, 13);
}

void subconv_1x1_32_p::thread_tmp_997_fu_3374_p3() {
    tmp_997_fu_3374_p3 = p_Val2_94_3_fu_3368_p2.read().range(7, 7);
}

void subconv_1x1_32_p::thread_tmp_998_fu_5821_p3() {
    tmp_998_fu_5821_p3 = p_Val2_92_3_reg_9288.read().range(14, 14);
}

void subconv_1x1_32_p::thread_tmp_fu_1846_p3() {
    tmp_fu_1846_p3 = esl_concat<6,5>(h_cast_mid2_reg_8212.read(), ap_const_lv5_0);
}

void subconv_1x1_32_p::thread_tmp_s_fu_2528_p3() {
    tmp_s_fu_2528_p3 = esl_concat<8,6>(ShuffleConvs_0_Downs_119_reg_8609.read(), ap_const_lv6_0);
}

void subconv_1x1_32_p::thread_underflow_10_fu_6972_p2() {
    underflow_10_fu_6972_p2 = (tmp_1059_reg_9904.read() & tmp41_fu_6966_p2.read());
}

void subconv_1x1_32_p::thread_underflow_11_fu_7138_p2() {
    underflow_11_fu_7138_p2 = (tmp_1069_reg_9998.read() & tmp45_fu_7132_p2.read());
}

void subconv_1x1_32_p::thread_underflow_13_10_fu_7221_p2() {
    underflow_13_10_fu_7221_p2 = (tmp_1074_reg_10045.read() & tmp47_fu_7215_p2.read());
}

void subconv_1x1_32_p::thread_underflow_13_1_fu_5561_p2() {
    underflow_13_1_fu_5561_p2 = (tmp_974_reg_9105.read() & tmp7_fu_5555_p2.read());
}

void subconv_1x1_32_p::thread_underflow_13_2_fu_5727_p2() {
    underflow_13_2_fu_5727_p2 = (tmp_984_reg_9199.read() & tmp11_fu_5721_p2.read());
}

void subconv_1x1_32_p::thread_underflow_13_3_fu_5893_p2() {
    underflow_13_3_fu_5893_p2 = (tmp_994_reg_9293.read() & tmp15_fu_5887_p2.read());
}

void subconv_1x1_32_p::thread_underflow_13_4_fu_6059_p2() {
    underflow_13_4_fu_6059_p2 = (tmp_1004_reg_9387.read() & tmp19_fu_6053_p2.read());
}

void subconv_1x1_32_p::thread_underflow_13_5_fu_6225_p2() {
    underflow_13_5_fu_6225_p2 = (tmp_1014_reg_9481.read() & tmp23_fu_6219_p2.read());
}

void subconv_1x1_32_p::thread_underflow_13_6_fu_6391_p2() {
    underflow_13_6_fu_6391_p2 = (tmp_1024_reg_9575.read() & tmp27_fu_6385_p2.read());
}

void subconv_1x1_32_p::thread_underflow_13_7_fu_6557_p2() {
    underflow_13_7_fu_6557_p2 = (tmp_1034_reg_9669.read() & tmp31_fu_6551_p2.read());
}

void subconv_1x1_32_p::thread_underflow_13_8_fu_6723_p2() {
    underflow_13_8_fu_6723_p2 = (tmp_1044_reg_9763.read() & tmp35_fu_6717_p2.read());
}

void subconv_1x1_32_p::thread_underflow_13_9_fu_6889_p2() {
    underflow_13_9_fu_6889_p2 = (tmp_1054_reg_9857.read() & tmp39_fu_6883_p2.read());
}

void subconv_1x1_32_p::thread_underflow_13_fu_5395_p2() {
    underflow_13_fu_5395_p2 = (tmp_964_reg_9011.read() & tmp3_fu_5389_p2.read());
}

void subconv_1x1_32_p::thread_underflow_13_not_10_fu_7926_p2() {
    underflow_13_not_10_fu_7926_p2 = (tmp48_fu_7922_p2.read() | p_38_i_i_11_reg_10662.read());
}

void subconv_1x1_32_p::thread_underflow_13_not_1_fu_7326_p2() {
    underflow_13_not_1_fu_7326_p2 = (tmp8_fu_7322_p2.read() | p_38_i_i_1_reg_10162.read());
}

void subconv_1x1_32_p::thread_underflow_13_not_2_fu_7386_p2() {
    underflow_13_not_2_fu_7386_p2 = (tmp12_fu_7382_p2.read() | p_38_i_i_2_reg_10212.read());
}

void subconv_1x1_32_p::thread_underflow_13_not_3_fu_7446_p2() {
    underflow_13_not_3_fu_7446_p2 = (tmp16_fu_7442_p2.read() | p_38_i_i_3_reg_10262.read());
}

void subconv_1x1_32_p::thread_underflow_13_not_4_fu_7506_p2() {
    underflow_13_not_4_fu_7506_p2 = (tmp20_fu_7502_p2.read() | p_38_i_i_4_reg_10312.read());
}

void subconv_1x1_32_p::thread_underflow_13_not_5_fu_7566_p2() {
    underflow_13_not_5_fu_7566_p2 = (tmp24_fu_7562_p2.read() | p_38_i_i_5_reg_10362.read());
}

void subconv_1x1_32_p::thread_underflow_13_not_6_fu_7626_p2() {
    underflow_13_not_6_fu_7626_p2 = (tmp28_fu_7622_p2.read() | p_38_i_i_6_reg_10412.read());
}

void subconv_1x1_32_p::thread_underflow_13_not_7_fu_7686_p2() {
    underflow_13_not_7_fu_7686_p2 = (tmp32_fu_7682_p2.read() | p_38_i_i_7_reg_10462.read());
}

void subconv_1x1_32_p::thread_underflow_13_not_8_fu_7746_p2() {
    underflow_13_not_8_fu_7746_p2 = (tmp36_fu_7742_p2.read() | p_38_i_i_8_reg_10512.read());
}

void subconv_1x1_32_p::thread_underflow_13_not_9_fu_7806_p2() {
    underflow_13_not_9_fu_7806_p2 = (tmp40_fu_7802_p2.read() | p_38_i_i_9_reg_10562.read());
}

void subconv_1x1_32_p::thread_underflow_13_not_fu_7266_p2() {
    underflow_13_not_fu_7266_p2 = (tmp4_fu_7262_p2.read() | p_38_i_i_reg_10112.read());
}

void subconv_1x1_32_p::thread_underflow_13_not_s_fu_7866_p2() {
    underflow_13_not_s_fu_7866_p2 = (tmp44_fu_7862_p2.read() | p_38_i_i_10_reg_10612.read());
}

void subconv_1x1_32_p::thread_underflow_13_s_fu_7055_p2() {
    underflow_13_s_fu_7055_p2 = (tmp_1064_reg_9951.read() & tmp43_fu_7049_p2.read());
}

void subconv_1x1_32_p::thread_underflow_1_fu_5478_p2() {
    underflow_1_fu_5478_p2 = (tmp_969_reg_9058.read() & tmp5_fu_5472_p2.read());
}

void subconv_1x1_32_p::thread_underflow_2_fu_5644_p2() {
    underflow_2_fu_5644_p2 = (tmp_979_reg_9152.read() & tmp9_fu_5638_p2.read());
}

void subconv_1x1_32_p::thread_underflow_3_fu_5810_p2() {
    underflow_3_fu_5810_p2 = (tmp_989_reg_9246.read() & tmp13_fu_5804_p2.read());
}

void subconv_1x1_32_p::thread_underflow_4_fu_5976_p2() {
    underflow_4_fu_5976_p2 = (tmp_999_reg_9340.read() & tmp17_fu_5970_p2.read());
}

void subconv_1x1_32_p::thread_underflow_5_fu_6142_p2() {
    underflow_5_fu_6142_p2 = (tmp_1009_reg_9434.read() & tmp21_fu_6136_p2.read());
}

void subconv_1x1_32_p::thread_underflow_6_fu_6308_p2() {
    underflow_6_fu_6308_p2 = (tmp_1019_reg_9528.read() & tmp25_fu_6302_p2.read());
}

void subconv_1x1_32_p::thread_underflow_7_fu_6474_p2() {
    underflow_7_fu_6474_p2 = (tmp_1029_reg_9622.read() & tmp29_fu_6468_p2.read());
}

void subconv_1x1_32_p::thread_underflow_8_fu_6640_p2() {
    underflow_8_fu_6640_p2 = (tmp_1039_reg_9716.read() & tmp33_fu_6634_p2.read());
}

void subconv_1x1_32_p::thread_underflow_9_fu_6806_p2() {
    underflow_9_fu_6806_p2 = (tmp_1049_reg_9810.read() & tmp37_fu_6800_p2.read());
}

void subconv_1x1_32_p::thread_underflow_fu_5312_p2() {
    underflow_fu_5312_p2 = (tmp_959_reg_8964.read() & tmp1_fu_5306_p2.read());
}

void subconv_1x1_32_p::thread_underflow_not_10_fu_7836_p2() {
    underflow_not_10_fu_7836_p2 = (tmp42_fu_7832_p2.read() | p_38_i_i6_s_reg_10587.read());
}

void subconv_1x1_32_p::thread_underflow_not_11_fu_7896_p2() {
    underflow_not_11_fu_7896_p2 = (tmp46_fu_7892_p2.read() | p_38_i_i6_10_reg_10637.read());
}

void subconv_1x1_32_p::thread_underflow_not_1_fu_7296_p2() {
    underflow_not_1_fu_7296_p2 = (tmp6_fu_7292_p2.read() | p_38_i_i6_1_reg_10137.read());
}

void subconv_1x1_32_p::thread_underflow_not_2_fu_7356_p2() {
    underflow_not_2_fu_7356_p2 = (tmp10_fu_7352_p2.read() | p_38_i_i6_2_reg_10187.read());
}

void subconv_1x1_32_p::thread_underflow_not_3_fu_7416_p2() {
    underflow_not_3_fu_7416_p2 = (tmp14_fu_7412_p2.read() | p_38_i_i6_3_reg_10237.read());
}

void subconv_1x1_32_p::thread_underflow_not_4_fu_7476_p2() {
    underflow_not_4_fu_7476_p2 = (tmp18_fu_7472_p2.read() | p_38_i_i6_4_reg_10287.read());
}

void subconv_1x1_32_p::thread_underflow_not_5_fu_7536_p2() {
    underflow_not_5_fu_7536_p2 = (tmp22_fu_7532_p2.read() | p_38_i_i6_5_reg_10337.read());
}

void subconv_1x1_32_p::thread_underflow_not_6_fu_7596_p2() {
    underflow_not_6_fu_7596_p2 = (tmp26_fu_7592_p2.read() | p_38_i_i6_6_reg_10387.read());
}

void subconv_1x1_32_p::thread_underflow_not_7_fu_7656_p2() {
    underflow_not_7_fu_7656_p2 = (tmp30_fu_7652_p2.read() | p_38_i_i6_7_reg_10437.read());
}

void subconv_1x1_32_p::thread_underflow_not_8_fu_7716_p2() {
    underflow_not_8_fu_7716_p2 = (tmp34_fu_7712_p2.read() | p_38_i_i6_8_reg_10487.read());
}

void subconv_1x1_32_p::thread_underflow_not_9_fu_7776_p2() {
    underflow_not_9_fu_7776_p2 = (tmp38_fu_7772_p2.read() | p_38_i_i6_9_reg_10537.read());
}

void subconv_1x1_32_p::thread_underflow_not_fu_7236_p2() {
    underflow_not_fu_7236_p2 = (tmp2_fu_7232_p2.read() | p_38_i_i6_reg_10087.read());
}

void subconv_1x1_32_p::thread_w2_cast_cast6_fu_1956_p1() {
    w2_cast_cast6_fu_1956_p1 = esl_zext<13,6>(w2_reg_1544.read());
}

void subconv_1x1_32_p::thread_w2_cast_cast_fu_1960_p1() {
    w2_cast_cast_fu_1960_p1 = esl_zext<12,6>(w2_reg_1544.read());
}

void subconv_1x1_32_p::thread_w6_cast_cast_fu_8076_p1() {
    w6_cast_cast_fu_8076_p1 = esl_zext<12,6>(w6_mid2_reg_10715.read());
}

void subconv_1x1_32_p::thread_w6_mid2_fu_8032_p3() {
    w6_mid2_fu_8032_p3 = (!tmp_371_fu_8027_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_371_fu_8027_p2.read()[0].to_bool())? ap_const_lv6_1: w6_phi_fu_1629_p4.read());
}

void subconv_1x1_32_p::thread_w6_phi_fu_1629_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten6_reg_10687.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        w6_phi_fu_1629_p4 = w_19_fu_8113_p2.read();
    } else {
        w6_phi_fu_1629_p4 = w6_reg_1625.read();
    }
}

void subconv_1x1_32_p::thread_w_17_fu_1911_p2() {
    w_17_fu_1911_p2 = (!w_mid2_reg_8206.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(w_mid2_reg_8206.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void subconv_1x1_32_p::thread_w_18_fu_2135_p2() {
    w_18_fu_2135_p2 = (!w2_reg_1544.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(w2_reg_1544.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void subconv_1x1_32_p::thread_w_19_fu_8113_p2() {
    w_19_fu_8113_p2 = (!w6_mid2_reg_10715.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(w6_mid2_reg_10715.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void subconv_1x1_32_p::thread_w_cast_cast_fu_1874_p1() {
    w_cast_cast_fu_1874_p1 = esl_zext<12,6>(w_mid2_reg_8206.read());
}

void subconv_1x1_32_p::thread_w_mid2_fu_1830_p3() {
    w_mid2_fu_1830_p3 = (!tmp_364_fu_1825_p2.read()[0].is_01())? sc_lv<6>(): ((tmp_364_fu_1825_p2.read()[0].to_bool())? ap_const_lv6_1: w_phi_fu_1524_p4.read());
}

void subconv_1x1_32_p::thread_w_phi_fu_1524_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_8179.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        w_phi_fu_1524_p4 = w_17_fu_1911_p2.read();
    } else {
        w_phi_fu_1524_p4 = w_reg_1520.read();
    }
}

void subconv_1x1_32_p::thread_weight_0_V_address0() {
    weight_0_V_address0 = weight_0_V_addr_reg_8376.read();
}

void subconv_1x1_32_p::thread_weight_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_0_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_10_V_address0() {
    weight_10_V_address0 = weight_10_V_addr_reg_8426.read();
}

void subconv_1x1_32_p::thread_weight_10_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_10_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_11_V_address0() {
    weight_11_V_address0 = weight_11_V_addr_reg_8431.read();
}

void subconv_1x1_32_p::thread_weight_11_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_11_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_12_V_address0() {
    weight_12_V_address0 = weight_12_V_addr_reg_8436.read();
}

void subconv_1x1_32_p::thread_weight_12_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_12_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_13_V_address0() {
    weight_13_V_address0 = weight_13_V_addr_reg_8441.read();
}

void subconv_1x1_32_p::thread_weight_13_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_13_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_14_V_address0() {
    weight_14_V_address0 = weight_14_V_addr_reg_8446.read();
}

void subconv_1x1_32_p::thread_weight_14_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_14_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_15_V_address0() {
    weight_15_V_address0 = weight_15_V_addr_reg_8451.read();
}

void subconv_1x1_32_p::thread_weight_15_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_15_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_16_V_address0() {
    weight_16_V_address0 = weight_16_V_addr_reg_8456.read();
}

void subconv_1x1_32_p::thread_weight_16_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_16_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_17_V_address0() {
    weight_17_V_address0 = weight_17_V_addr_reg_8461.read();
}

void subconv_1x1_32_p::thread_weight_17_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_17_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_18_V_address0() {
    weight_18_V_address0 = weight_18_V_addr_reg_8466.read();
}

void subconv_1x1_32_p::thread_weight_18_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_18_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_19_V_address0() {
    weight_19_V_address0 = weight_19_V_addr_reg_8471.read();
}

void subconv_1x1_32_p::thread_weight_19_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_19_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_1_V_address0() {
    weight_1_V_address0 = weight_1_V_addr_reg_8381.read();
}

void subconv_1x1_32_p::thread_weight_1_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_1_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_20_V_address0() {
    weight_20_V_address0 = weight_20_V_addr_reg_8476.read();
}

void subconv_1x1_32_p::thread_weight_20_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_20_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_21_V_address0() {
    weight_21_V_address0 = weight_21_V_addr_reg_8481.read();
}

void subconv_1x1_32_p::thread_weight_21_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_21_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_22_V_address0() {
    weight_22_V_address0 = weight_22_V_addr_reg_8486.read();
}

void subconv_1x1_32_p::thread_weight_22_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_22_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_23_V_address0() {
    weight_23_V_address0 = weight_23_V_addr_reg_8491.read();
}

void subconv_1x1_32_p::thread_weight_23_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_23_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_2_V_address0() {
    weight_2_V_address0 = weight_2_V_addr_reg_8386.read();
}

void subconv_1x1_32_p::thread_weight_2_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_2_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_3_V_address0() {
    weight_3_V_address0 = weight_3_V_addr_reg_8391.read();
}

void subconv_1x1_32_p::thread_weight_3_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_3_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_4_V_address0() {
    weight_4_V_address0 = weight_4_V_addr_reg_8396.read();
}

void subconv_1x1_32_p::thread_weight_4_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_4_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_5_V_address0() {
    weight_5_V_address0 = weight_5_V_addr_reg_8401.read();
}

void subconv_1x1_32_p::thread_weight_5_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_5_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_6_V_address0() {
    weight_6_V_address0 = weight_6_V_addr_reg_8406.read();
}

void subconv_1x1_32_p::thread_weight_6_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_6_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_7_V_address0() {
    weight_7_V_address0 = weight_7_V_addr_reg_8411.read();
}

void subconv_1x1_32_p::thread_weight_7_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_7_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_8_V_address0() {
    weight_8_V_address0 = weight_8_V_addr_reg_8416.read();
}

void subconv_1x1_32_p::thread_weight_8_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_8_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_32_p::thread_weight_9_V_address0() {
    weight_9_V_address0 = weight_9_V_addr_reg_8421.read();
}

void subconv_1x1_32_p::thread_weight_9_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_9_V_ce0 = ap_const_logic_0;
    }
}

}

