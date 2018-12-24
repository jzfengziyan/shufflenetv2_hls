#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_p_shl553_cast_fu_31317_p1() {
    p_shl553_cast_fu_31317_p1 = esl_zext<13,12>(tmp_1144_fu_31310_p3.read());
}

void ShuffleNetV2::thread_p_shl555_cast_fu_31936_p1() {
    p_shl555_cast_fu_31936_p1 = esl_zext<10,9>(tmp_1149_fu_31928_p3.read());
}

void ShuffleNetV2::thread_p_shl556_cast_fu_31948_p1() {
    p_shl556_cast_fu_31948_p1 = esl_zext<10,7>(tmp_1150_fu_31940_p3.read());
}

void ShuffleNetV2::thread_p_shl557_cast_fu_31697_p1() {
    p_shl557_cast_fu_31697_p1 = esl_zext<18,17>(tmp_1152_fu_31690_p3.read());
}

void ShuffleNetV2::thread_p_shl558_cast_fu_31708_p1() {
    p_shl558_cast_fu_31708_p1 = esl_zext<18,15>(tmp_1153_fu_31701_p3.read());
}

void ShuffleNetV2::thread_p_shl559_cast_fu_31764_p3() {
    p_shl559_cast_fu_31764_p3 = esl_concat<2,6>(tmp_2256_reg_45681.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl55_cast_fu_21769_p1() {
    p_shl55_cast_fu_21769_p1 = esl_zext<7,4>(p_shl55_fu_21761_p3.read());
}

void ShuffleNetV2::thread_p_shl55_fu_21761_p3() {
    p_shl55_fu_21761_p3 = esl_concat<1,3>(tmp_2085_fu_21745_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl560_cast_fu_31771_p3() {
    p_shl560_cast_fu_31771_p3 = esl_concat<4,4>(tmp_2257_reg_45686.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl561_cast_fu_31999_p1() {
    p_shl561_cast_fu_31999_p1 = esl_zext<15,13>(tmp_2261_fu_31991_p3.read());
}

void ShuffleNetV2::thread_p_shl562_cast_fu_32011_p1() {
    p_shl562_cast_fu_32011_p1 = esl_zext<15,11>(tmp_2262_fu_32003_p3.read());
}

void ShuffleNetV2::thread_p_shl563_cast_fu_32244_p1() {
    p_shl563_cast_fu_32244_p1 = esl_zext<18,17>(tmp_1161_fu_32237_p3.read());
}

void ShuffleNetV2::thread_p_shl564_cast_fu_32255_p1() {
    p_shl564_cast_fu_32255_p1 = esl_zext<18,15>(tmp_1162_fu_32248_p3.read());
}

void ShuffleNetV2::thread_p_shl565_cast_fu_32311_p3() {
    p_shl565_cast_fu_32311_p3 = esl_concat<4,7>(tmp_2267_reg_45852.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl566_cast_fu_32318_p3() {
    p_shl566_cast_fu_32318_p3 = esl_concat<6,5>(tmp_2268_reg_45857.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl567_cast_fu_32590_p1() {
    p_shl567_cast_fu_32590_p1 = esl_sext<11,10>(tmp_1167_fu_32582_p3.read());
}

void ShuffleNetV2::thread_p_shl569_cast_fu_32641_p1() {
    p_shl569_cast_fu_32641_p1 = esl_zext<13,12>(tmp_1172_fu_32634_p3.read());
}

void ShuffleNetV2::thread_p_shl56_cast_fu_21498_p1() {
    p_shl56_cast_fu_21498_p1 = esl_zext<7,6>(p_shl56_fu_21490_p3.read());
}

void ShuffleNetV2::thread_p_shl56_fu_21490_p3() {
    p_shl56_fu_21490_p3 = esl_concat<2,4>(tmp_2086_fu_21486_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl571_cast_fu_33001_p1() {
    p_shl571_cast_fu_33001_p1 = esl_zext<18,17>(tmp_1177_fu_32994_p3.read());
}

void ShuffleNetV2::thread_p_shl572_cast_fu_33012_p1() {
    p_shl572_cast_fu_33012_p1 = esl_zext<18,15>(tmp_1178_fu_33005_p3.read());
}

void ShuffleNetV2::thread_p_shl573_cast_fu_33068_p3() {
    p_shl573_cast_fu_33068_p3 = esl_concat<4,7>(tmp_2280_reg_46112.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl574_cast_fu_33075_p3() {
    p_shl574_cast_fu_33075_p3 = esl_concat<6,5>(tmp_2281_reg_46117.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl575_cast_fu_33351_p1() {
    p_shl575_cast_fu_33351_p1 = esl_sext<11,10>(tmp_1183_fu_33343_p3.read());
}

void ShuffleNetV2::thread_p_shl577_cast_fu_33402_p1() {
    p_shl577_cast_fu_33402_p1 = esl_zext<13,12>(tmp_1188_fu_33395_p3.read());
}

void ShuffleNetV2::thread_p_shl579_cast_fu_33981_p1() {
    p_shl579_cast_fu_33981_p1 = esl_zext<11,10>(tmp_1193_fu_33973_p3.read());
}

void ShuffleNetV2::thread_p_shl57_cast_fu_21510_p1() {
    p_shl57_cast_fu_21510_p1 = esl_zext<7,4>(p_shl57_fu_21502_p3.read());
}

void ShuffleNetV2::thread_p_shl57_fu_21502_p3() {
    p_shl57_fu_21502_p3 = esl_concat<2,2>(tmp_2086_fu_21486_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl580_cast_fu_33993_p1() {
    p_shl580_cast_fu_33993_p1 = esl_zext<11,8>(tmp_1194_fu_33985_p3.read());
}

void ShuffleNetV2::thread_p_shl581_cast_fu_34037_p1() {
    p_shl581_cast_fu_34037_p1 = esl_zext<12,11>(tmp_1196_fu_34029_p3.read());
}

void ShuffleNetV2::thread_p_shl582_cast_fu_34049_p1() {
    p_shl582_cast_fu_34049_p1 = esl_zext<12,9>(tmp_1197_fu_34041_p3.read());
}

void ShuffleNetV2::thread_p_shl583_cast_fu_33758_p1() {
    p_shl583_cast_fu_33758_p1 = esl_zext<18,17>(tmp_1199_fu_33751_p3.read());
}

void ShuffleNetV2::thread_p_shl584_cast_fu_33769_p1() {
    p_shl584_cast_fu_33769_p1 = esl_zext<18,15>(tmp_1200_fu_33762_p3.read());
}

void ShuffleNetV2::thread_p_shl585_cast_fu_33825_p3() {
    p_shl585_cast_fu_33825_p3 = esl_concat<4,7>(tmp_2293_reg_46372.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl586_cast_fu_33832_p3() {
    p_shl586_cast_fu_33832_p3 = esl_concat<6,5>(tmp_2294_reg_46377.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl587_cast_fu_34092_p3() {
    p_shl587_cast_fu_34092_p3 = esl_concat<10,3>(tmp_2298_fu_34088_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl588_cast_fu_34100_p3() {
    p_shl588_cast_fu_34100_p3 = esl_concat<12,1>(tmp_1205_fu_34083_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl589_cast_fu_34123_p3() {
    p_shl589_cast_fu_34123_p3 = esl_concat<11,3>(tmp_2299_fu_34119_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl58_cast_fu_21537_p1() {
    p_shl58_cast_fu_21537_p1 = esl_zext<8,7>(p_shl58_fu_21529_p3.read());
}

void ShuffleNetV2::thread_p_shl58_fu_21529_p3() {
    p_shl58_fu_21529_p3 = esl_concat<2,5>(tmp_2086_fu_21486_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl590_cast_fu_34131_p3() {
    p_shl590_cast_fu_34131_p3 = esl_concat<13,1>(tmp_1207_fu_34114_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl591_cast_fu_34381_p1() {
    p_shl591_cast_fu_34381_p1 = esl_zext<18,17>(tmp_1211_fu_34374_p3.read());
}

void ShuffleNetV2::thread_p_shl592_cast_fu_34392_p1() {
    p_shl592_cast_fu_34392_p1 = esl_zext<18,15>(tmp_1212_fu_34385_p3.read());
}

void ShuffleNetV2::thread_p_shl593_cast_fu_34448_p3() {
    p_shl593_cast_fu_34448_p3 = esl_concat<4,7>(tmp_2304_reg_46553.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl594_cast_fu_34455_p3() {
    p_shl594_cast_fu_34455_p3 = esl_concat<6,5>(tmp_2305_reg_46558.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl595_cast_fu_34723_p1() {
    p_shl595_cast_fu_34723_p1 = esl_sext<11,10>(tmp_1217_fu_34715_p3.read());
}

void ShuffleNetV2::thread_p_shl597_cast_fu_34774_p1() {
    p_shl597_cast_fu_34774_p1 = esl_zext<13,12>(tmp_1222_fu_34767_p3.read());
}

void ShuffleNetV2::thread_p_shl599_cast_fu_35361_p1() {
    p_shl599_cast_fu_35361_p1 = esl_zext<11,10>(tmp_1227_fu_35353_p3.read());
}

void ShuffleNetV2::thread_p_shl59_cast_fu_21549_p1() {
    p_shl59_cast_fu_21549_p1 = esl_zext<8,5>(p_shl59_fu_21541_p3.read());
}

void ShuffleNetV2::thread_p_shl59_fu_21541_p3() {
    p_shl59_fu_21541_p3 = esl_concat<2,3>(tmp_2086_fu_21486_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl5_cast_fu_17754_p1() {
    p_shl5_cast_fu_17754_p1 = esl_zext<7,4>(p_shl5_fu_17746_p3.read());
}

void ShuffleNetV2::thread_p_shl5_fu_17746_p3() {
    p_shl5_fu_17746_p3 = esl_concat<2,2>(tmp_1975_fu_17730_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl600_cast_fu_35373_p1() {
    p_shl600_cast_fu_35373_p1 = esl_zext<11,8>(tmp_1228_fu_35365_p3.read());
}

void ShuffleNetV2::thread_p_shl601_cast_fu_35134_p1() {
    p_shl601_cast_fu_35134_p1 = esl_zext<18,17>(tmp_1231_fu_35130_p1.read());
}

void ShuffleNetV2::thread_p_shl602_cast_fu_35149_p1() {
    p_shl602_cast_fu_35149_p1 = esl_zext<18,15>(tmp_1233_fu_35145_p1.read());
}

void ShuffleNetV2::thread_p_shl603_cast_fu_35205_p3() {
    p_shl603_cast_fu_35205_p3 = esl_concat<4,7>(tmp_2317_reg_46813.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl604_cast_fu_35212_p3() {
    p_shl604_cast_fu_35212_p3 = esl_concat<6,5>(tmp_2318_reg_46818.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl605_cast_fu_35484_p1() {
    p_shl605_cast_fu_35484_p1 = esl_zext<11,10>(tmp_1238_fu_35476_p3.read());
}

void ShuffleNetV2::thread_p_shl606_cast_fu_35496_p1() {
    p_shl606_cast_fu_35496_p1 = esl_zext<11,8>(tmp_1239_fu_35488_p3.read());
}

void ShuffleNetV2::thread_p_shl607_cast_fu_35540_p1() {
    p_shl607_cast_fu_35540_p1 = esl_zext<12,11>(tmp_1241_fu_35532_p3.read());
}

void ShuffleNetV2::thread_p_shl608_cast_fu_35552_p1() {
    p_shl608_cast_fu_35552_p1 = esl_zext<12,9>(tmp_1242_fu_35544_p3.read());
}

void ShuffleNetV2::thread_p_shl609_cast_fu_35424_p3() {
    p_shl609_cast_fu_35424_p3 = esl_concat<11,3>(tmp_2319_fu_35420_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl60_cast_fu_22098_p1() {
    p_shl60_cast_fu_22098_p1 = esl_zext<7,6>(p_shl60_fu_22090_p3.read());
}

void ShuffleNetV2::thread_p_shl60_fu_22090_p3() {
    p_shl60_fu_22090_p3 = esl_concat<1,5>(tmp_2100_fu_22086_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl610_cast_fu_35440_p1() {
    p_shl610_cast_fu_35440_p1 = esl_sext<14,13>(tmp_2320_fu_35432_p3.read());
}

void ShuffleNetV2::thread_p_shl611_cast_fu_35595_p3() {
    p_shl611_cast_fu_35595_p3 = esl_concat<10,3>(tmp_2324_fu_35591_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl612_cast_fu_35603_p3() {
    p_shl612_cast_fu_35603_p3 = esl_concat<12,1>(tmp_1246_fu_35586_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl613_cast_fu_35626_p3() {
    p_shl613_cast_fu_35626_p3 = esl_concat<11,3>(tmp_2325_fu_35622_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl614_cast_fu_35634_p3() {
    p_shl614_cast_fu_35634_p3 = esl_concat<13,1>(tmp_1248_fu_35617_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl615_cast_fu_35884_p1() {
    p_shl615_cast_fu_35884_p1 = esl_zext<19,18>(tmp_1253_fu_35877_p3.read());
}

void ShuffleNetV2::thread_p_shl616_cast_fu_35895_p1() {
    p_shl616_cast_fu_35895_p1 = esl_zext<19,16>(tmp_1254_fu_35888_p3.read());
}

void ShuffleNetV2::thread_p_shl617_cast_fu_35951_p3() {
    p_shl617_cast_fu_35951_p3 = esl_concat<4,7>(tmp_2330_reg_47038.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl618_cast_fu_35958_p3() {
    p_shl618_cast_fu_35958_p3 = esl_concat<6,5>(tmp_2331_reg_47043.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl619_cast_fu_36226_p1() {
    p_shl619_cast_fu_36226_p1 = esl_sext<11,10>(tmp_1259_fu_36218_p3.read());
}

void ShuffleNetV2::thread_p_shl61_cast_fu_22110_p1() {
    p_shl61_cast_fu_22110_p1 = esl_zext<7,4>(p_shl61_fu_22102_p3.read());
}

void ShuffleNetV2::thread_p_shl61_fu_22102_p3() {
    p_shl61_fu_22102_p3 = esl_concat<1,3>(tmp_2100_fu_22086_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl621_cast_fu_36285_p1() {
    p_shl621_cast_fu_36285_p1 = esl_zext<13,12>(tmp_1265_fu_36281_p1.read());
}

void ShuffleNetV2::thread_p_shl623_cast_fu_36868_p1() {
    p_shl623_cast_fu_36868_p1 = esl_zext<11,10>(tmp_1270_fu_36860_p3.read());
}

void ShuffleNetV2::thread_p_shl624_cast_fu_36880_p1() {
    p_shl624_cast_fu_36880_p1 = esl_zext<11,8>(tmp_1271_fu_36872_p3.read());
}

void ShuffleNetV2::thread_p_shl625_cast_fu_36645_p1() {
    p_shl625_cast_fu_36645_p1 = esl_zext<19,18>(tmp_1273_fu_36638_p3.read());
}

void ShuffleNetV2::thread_p_shl626_cast_fu_36656_p1() {
    p_shl626_cast_fu_36656_p1 = esl_zext<19,16>(tmp_1274_fu_36649_p3.read());
}

void ShuffleNetV2::thread_p_shl627_cast_fu_36712_p3() {
    p_shl627_cast_fu_36712_p3 = esl_concat<4,7>(tmp_2343_reg_47298.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl628_cast_fu_36719_p3() {
    p_shl628_cast_fu_36719_p3 = esl_concat<6,5>(tmp_2344_reg_47303.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl629_cast_fu_36991_p1() {
    p_shl629_cast_fu_36991_p1 = esl_zext<11,10>(tmp_1279_fu_36983_p3.read());
}

void ShuffleNetV2::thread_p_shl62_cast_fu_22190_p1() {
    p_shl62_cast_fu_22190_p1 = esl_zext<7,6>(p_shl62_fu_22182_p3.read());
}

void ShuffleNetV2::thread_p_shl62_fu_22182_p3() {
    p_shl62_fu_22182_p3 = esl_concat<1,5>(tmp_2090_fu_22178_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl630_cast_fu_37003_p1() {
    p_shl630_cast_fu_37003_p1 = esl_zext<11,8>(tmp_1280_fu_36995_p3.read());
}

void ShuffleNetV2::thread_p_shl631_cast_fu_37047_p1() {
    p_shl631_cast_fu_37047_p1 = esl_zext<12,11>(tmp_1282_fu_37039_p3.read());
}

void ShuffleNetV2::thread_p_shl632_cast_fu_37059_p1() {
    p_shl632_cast_fu_37059_p1 = esl_zext<12,9>(tmp_1283_fu_37051_p3.read());
}

void ShuffleNetV2::thread_p_shl633_cast_fu_36931_p3() {
    p_shl633_cast_fu_36931_p3 = esl_concat<11,3>(tmp_2345_fu_36927_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl634_cast_fu_36947_p1() {
    p_shl634_cast_fu_36947_p1 = esl_sext<14,13>(tmp_2346_fu_36939_p3.read());
}

void ShuffleNetV2::thread_p_shl635_cast_fu_37102_p3() {
    p_shl635_cast_fu_37102_p3 = esl_concat<10,3>(tmp_2350_fu_37098_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl636_cast_fu_37110_p3() {
    p_shl636_cast_fu_37110_p3 = esl_concat<12,1>(tmp_1287_fu_37093_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl637_cast_fu_37133_p3() {
    p_shl637_cast_fu_37133_p3 = esl_concat<11,3>(tmp_2351_fu_37129_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl638_cast_fu_37141_p3() {
    p_shl638_cast_fu_37141_p3 = esl_concat<13,1>(tmp_1289_fu_37124_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl639_cast_fu_37391_p1() {
    p_shl639_cast_fu_37391_p1 = esl_zext<19,18>(tmp_1294_fu_37384_p3.read());
}

void ShuffleNetV2::thread_p_shl63_cast_fu_22202_p1() {
    p_shl63_cast_fu_22202_p1 = esl_zext<7,4>(p_shl63_fu_22194_p3.read());
}

void ShuffleNetV2::thread_p_shl63_fu_22194_p3() {
    p_shl63_fu_22194_p3 = esl_concat<1,3>(tmp_2090_fu_22178_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl640_cast_fu_37402_p1() {
    p_shl640_cast_fu_37402_p1 = esl_zext<19,16>(tmp_1295_fu_37395_p3.read());
}

void ShuffleNetV2::thread_p_shl641_cast_fu_37458_p3() {
    p_shl641_cast_fu_37458_p3 = esl_concat<4,7>(tmp_2356_reg_47523.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl642_cast_fu_37465_p3() {
    p_shl642_cast_fu_37465_p3 = esl_concat<6,5>(tmp_2357_reg_47528.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl643_cast_fu_37733_p1() {
    p_shl643_cast_fu_37733_p1 = esl_sext<11,10>(tmp_1300_fu_37725_p3.read());
}

void ShuffleNetV2::thread_p_shl645_cast_fu_37784_p1() {
    p_shl645_cast_fu_37784_p1 = esl_zext<14,13>(tmp_1305_fu_37777_p3.read());
}

void ShuffleNetV2::thread_p_shl647_cast_fu_38367_p1() {
    p_shl647_cast_fu_38367_p1 = esl_zext<11,10>(tmp_1310_fu_38359_p3.read());
}

void ShuffleNetV2::thread_p_shl648_cast_fu_38379_p1() {
    p_shl648_cast_fu_38379_p1 = esl_zext<11,8>(tmp_1311_fu_38371_p3.read());
}

void ShuffleNetV2::thread_p_shl649_cast_fu_38144_p1() {
    p_shl649_cast_fu_38144_p1 = esl_zext<19,18>(tmp_1313_fu_38137_p3.read());
}

void ShuffleNetV2::thread_p_shl64_cast_fu_21901_p1() {
    p_shl64_cast_fu_21901_p1 = esl_zext<7,6>(p_shl64_fu_21893_p3.read());
}

void ShuffleNetV2::thread_p_shl64_fu_21893_p3() {
    p_shl64_fu_21893_p3 = esl_concat<1,5>(tmp_2106_fu_21889_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl650_cast_fu_38155_p1() {
    p_shl650_cast_fu_38155_p1 = esl_zext<19,16>(tmp_1314_fu_38148_p3.read());
}

void ShuffleNetV2::thread_p_shl651_cast_fu_38211_p3() {
    p_shl651_cast_fu_38211_p3 = esl_concat<4,7>(tmp_2369_reg_47783.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl652_cast_fu_38218_p3() {
    p_shl652_cast_fu_38218_p3 = esl_concat<6,5>(tmp_2370_reg_47788.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl653_cast_fu_38502_p1() {
    p_shl653_cast_fu_38502_p1 = esl_zext<12,11>(tmp_1320_fu_38494_p3.read());
}

void ShuffleNetV2::thread_p_shl654_cast_fu_38514_p1() {
    p_shl654_cast_fu_38514_p1 = esl_zext<12,9>(tmp_1321_fu_38506_p3.read());
}

void ShuffleNetV2::thread_p_shl655_cast_fu_38430_p3() {
    p_shl655_cast_fu_38430_p3 = esl_concat<11,3>(tmp_2371_fu_38426_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl656_cast_fu_38446_p1() {
    p_shl656_cast_fu_38446_p1 = esl_sext<14,13>(tmp_2372_fu_38438_p3.read());
}

void ShuffleNetV2::thread_p_shl657_cast_fu_38582_p3() {
    p_shl657_cast_fu_38582_p3 = esl_concat<11,3>(tmp_2373_fu_38578_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl658_cast_fu_38590_p3() {
    p_shl658_cast_fu_38590_p3 = esl_concat<13,1>(tmp_1326_fu_38573_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl65_cast_fu_21913_p1() {
    p_shl65_cast_fu_21913_p1 = esl_zext<7,4>(p_shl65_fu_21905_p3.read());
}

void ShuffleNetV2::thread_p_shl65_fu_21905_p3() {
    p_shl65_fu_21905_p3 = esl_concat<1,3>(tmp_2106_fu_21889_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl66_cast_fu_22538_p1() {
    p_shl66_cast_fu_22538_p1 = esl_zext<7,6>(p_shl66_fu_22530_p3.read());
}

void ShuffleNetV2::thread_p_shl66_fu_22530_p3() {
    p_shl66_fu_22530_p3 = esl_concat<1,5>(tmp_2109_fu_22526_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl67_cast_fu_22550_p1() {
    p_shl67_cast_fu_22550_p1 = esl_zext<7,4>(p_shl67_fu_22542_p3.read());
}

void ShuffleNetV2::thread_p_shl67_fu_22542_p3() {
    p_shl67_fu_22542_p3 = esl_concat<1,3>(tmp_2109_fu_22526_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl68_cast_fu_22279_p1() {
    p_shl68_cast_fu_22279_p1 = esl_zext<7,6>(p_shl68_fu_22271_p3.read());
}

void ShuffleNetV2::thread_p_shl68_fu_22271_p3() {
    p_shl68_fu_22271_p3 = esl_concat<2,4>(tmp_2110_fu_22267_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl69_cast_fu_22291_p1() {
    p_shl69_cast_fu_22291_p1 = esl_zext<7,4>(p_shl69_fu_22283_p3.read());
}

void ShuffleNetV2::thread_p_shl69_fu_22283_p3() {
    p_shl69_fu_22283_p3 = esl_concat<2,2>(tmp_2110_fu_22267_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl6_cast_fu_17781_p1() {
    p_shl6_cast_fu_17781_p1 = esl_zext<8,7>(p_shl6_fu_17773_p3.read());
}

void ShuffleNetV2::thread_p_shl6_fu_17773_p3() {
    p_shl6_fu_17773_p3 = esl_concat<2,5>(tmp_1975_fu_17730_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl70_cast_fu_22318_p1() {
    p_shl70_cast_fu_22318_p1 = esl_zext<8,7>(p_shl70_fu_22310_p3.read());
}

void ShuffleNetV2::thread_p_shl70_fu_22310_p3() {
    p_shl70_fu_22310_p3 = esl_concat<2,5>(tmp_2110_fu_22267_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl71_cast_fu_22330_p1() {
    p_shl71_cast_fu_22330_p1 = esl_zext<8,5>(p_shl71_fu_22322_p3.read());
}

void ShuffleNetV2::thread_p_shl71_fu_22322_p3() {
    p_shl71_fu_22322_p3 = esl_concat<2,3>(tmp_2110_fu_22267_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl72_cast_fu_22960_p1() {
    p_shl72_cast_fu_22960_p1 = esl_zext<7,6>(p_shl72_fu_22952_p3.read());
}

void ShuffleNetV2::thread_p_shl72_fu_22952_p3() {
    p_shl72_fu_22952_p3 = esl_concat<1,5>(tmp_2116_fu_22948_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl73_cast_fu_22972_p1() {
    p_shl73_cast_fu_22972_p1 = esl_zext<7,4>(p_shl73_fu_22964_p3.read());
}

void ShuffleNetV2::thread_p_shl73_fu_22964_p3() {
    p_shl73_fu_22964_p3 = esl_concat<1,3>(tmp_2116_fu_22948_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl74_cast_fu_23316_p1() {
    p_shl74_cast_fu_23316_p1 = esl_zext<7,6>(p_shl74_fu_23308_p3.read());
}

void ShuffleNetV2::thread_p_shl74_fu_23308_p3() {
    p_shl74_fu_23308_p3 = esl_concat<1,5>(tmp_2122_fu_23304_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl75_cast_fu_23328_p1() {
    p_shl75_cast_fu_23328_p1 = esl_zext<7,4>(p_shl75_fu_23320_p3.read());
}

void ShuffleNetV2::thread_p_shl75_fu_23320_p3() {
    p_shl75_fu_23320_p3 = esl_concat<1,3>(tmp_2122_fu_23304_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl76_cast_fu_23049_p1() {
    p_shl76_cast_fu_23049_p1 = esl_zext<7,6>(p_shl76_fu_23041_p3.read());
}

void ShuffleNetV2::thread_p_shl76_fu_23041_p3() {
    p_shl76_fu_23041_p3 = esl_concat<2,4>(tmp_2123_fu_23037_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl77_cast_fu_23061_p1() {
    p_shl77_cast_fu_23061_p1 = esl_zext<7,4>(p_shl77_fu_23053_p3.read());
}

void ShuffleNetV2::thread_p_shl77_fu_23053_p3() {
    p_shl77_fu_23053_p3 = esl_concat<2,2>(tmp_2123_fu_23037_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl78_cast_fu_23088_p1() {
    p_shl78_cast_fu_23088_p1 = esl_zext<8,7>(p_shl78_fu_23080_p3.read());
}

void ShuffleNetV2::thread_p_shl78_fu_23080_p3() {
    p_shl78_fu_23080_p3 = esl_concat<2,5>(tmp_2123_fu_23037_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl79_cast_fu_23100_p1() {
    p_shl79_cast_fu_23100_p1 = esl_zext<8,5>(p_shl79_fu_23092_p3.read());
}

void ShuffleNetV2::thread_p_shl79_fu_23092_p3() {
    p_shl79_fu_23092_p3 = esl_concat<2,3>(tmp_2123_fu_23037_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl7_cast_fu_17793_p1() {
    p_shl7_cast_fu_17793_p1 = esl_zext<8,5>(p_shl7_fu_17785_p3.read());
}

void ShuffleNetV2::thread_p_shl7_fu_17785_p3() {
    p_shl7_fu_17785_p3 = esl_concat<2,3>(tmp_1975_fu_17730_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl80_cast_fu_23657_p1() {
    p_shl80_cast_fu_23657_p1 = esl_zext<7,6>(p_shl80_fu_23649_p3.read());
}

void ShuffleNetV2::thread_p_shl80_fu_23649_p3() {
    p_shl80_fu_23649_p3 = esl_concat<1,5>(tmp_2129_fu_23645_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl81_cast_fu_23669_p1() {
    p_shl81_cast_fu_23669_p1 = esl_zext<7,4>(p_shl81_fu_23661_p3.read());
}

void ShuffleNetV2::thread_p_shl81_fu_23661_p3() {
    p_shl81_fu_23661_p3 = esl_concat<1,3>(tmp_2129_fu_23645_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl82_cast_fu_23749_p1() {
    p_shl82_cast_fu_23749_p1 = esl_zext<7,6>(p_shl82_fu_23741_p3.read());
}

void ShuffleNetV2::thread_p_shl82_fu_23741_p3() {
    p_shl82_fu_23741_p3 = esl_concat<1,5>(tmp_2127_fu_23737_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl83_cast_fu_23761_p1() {
    p_shl83_cast_fu_23761_p1 = esl_zext<7,4>(p_shl83_fu_23753_p3.read());
}

void ShuffleNetV2::thread_p_shl83_fu_23753_p3() {
    p_shl83_fu_23753_p3 = esl_concat<1,3>(tmp_2127_fu_23737_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl84_cast_fu_23464_p1() {
    p_shl84_cast_fu_23464_p1 = esl_zext<7,6>(p_shl84_fu_23456_p3.read());
}

void ShuffleNetV2::thread_p_shl84_fu_23456_p3() {
    p_shl84_fu_23456_p3 = esl_concat<1,5>(tmp_2130_fu_23452_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl85_cast_fu_23476_p1() {
    p_shl85_cast_fu_23476_p1 = esl_zext<7,4>(p_shl85_fu_23468_p3.read());
}

void ShuffleNetV2::thread_p_shl85_fu_23468_p3() {
    p_shl85_fu_23468_p3 = esl_concat<1,3>(tmp_2130_fu_23452_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl86_cast_fu_24097_p1() {
    p_shl86_cast_fu_24097_p1 = esl_zext<7,6>(p_shl86_fu_24089_p3.read());
}

void ShuffleNetV2::thread_p_shl86_fu_24089_p3() {
    p_shl86_fu_24089_p3 = esl_concat<1,5>(tmp_2133_fu_24085_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl87_cast_fu_24109_p1() {
    p_shl87_cast_fu_24109_p1 = esl_zext<7,4>(p_shl87_fu_24101_p3.read());
}

void ShuffleNetV2::thread_p_shl87_fu_24101_p3() {
    p_shl87_fu_24101_p3 = esl_concat<1,3>(tmp_2133_fu_24085_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl88_cast_fu_23838_p1() {
    p_shl88_cast_fu_23838_p1 = esl_zext<7,6>(p_shl88_fu_23830_p3.read());
}

void ShuffleNetV2::thread_p_shl88_fu_23830_p3() {
    p_shl88_fu_23830_p3 = esl_concat<2,4>(tmp_2134_fu_23826_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl89_cast_fu_23850_p1() {
    p_shl89_cast_fu_23850_p1 = esl_zext<7,4>(p_shl89_fu_23842_p3.read());
}

void ShuffleNetV2::thread_p_shl89_fu_23842_p3() {
    p_shl89_fu_23842_p3 = esl_concat<2,2>(tmp_2134_fu_23826_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl8_cast_fu_18342_p1() {
    p_shl8_cast_fu_18342_p1 = esl_zext<7,6>(p_shl8_fu_18334_p3.read());
}

void ShuffleNetV2::thread_p_shl8_fu_18334_p3() {
    p_shl8_fu_18334_p3 = esl_concat<1,5>(tmp_1984_fu_18330_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl90_cast_fu_23877_p1() {
    p_shl90_cast_fu_23877_p1 = esl_zext<8,7>(p_shl90_fu_23869_p3.read());
}

void ShuffleNetV2::thread_p_shl90_fu_23869_p3() {
    p_shl90_fu_23869_p3 = esl_concat<2,5>(tmp_2134_fu_23826_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl91_cast_fu_23889_p1() {
    p_shl91_cast_fu_23889_p1 = esl_zext<8,5>(p_shl91_fu_23881_p3.read());
}

void ShuffleNetV2::thread_p_shl91_fu_23881_p3() {
    p_shl91_fu_23881_p3 = esl_concat<2,3>(tmp_2134_fu_23826_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl92_cast_fu_24519_p1() {
    p_shl92_cast_fu_24519_p1 = esl_zext<7,6>(p_shl92_fu_24511_p3.read());
}

void ShuffleNetV2::thread_p_shl92_fu_24511_p3() {
    p_shl92_fu_24511_p3 = esl_concat<1,5>(tmp_2140_fu_24507_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl93_cast_fu_24531_p1() {
    p_shl93_cast_fu_24531_p1 = esl_zext<7,4>(p_shl93_fu_24523_p3.read());
}

void ShuffleNetV2::thread_p_shl93_fu_24523_p3() {
    p_shl93_fu_24523_p3 = esl_concat<1,3>(tmp_2140_fu_24507_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl94_cast_fu_24867_p1() {
    p_shl94_cast_fu_24867_p1 = esl_zext<7,6>(p_shl94_fu_24859_p3.read());
}

void ShuffleNetV2::thread_p_shl94_fu_24859_p3() {
    p_shl94_fu_24859_p3 = esl_concat<1,5>(tmp_2146_fu_24855_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl95_cast_fu_24879_p1() {
    p_shl95_cast_fu_24879_p1 = esl_zext<7,4>(p_shl95_fu_24871_p3.read());
}

void ShuffleNetV2::thread_p_shl95_fu_24871_p3() {
    p_shl95_fu_24871_p3 = esl_concat<1,3>(tmp_2146_fu_24855_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl96_cast_fu_24608_p1() {
    p_shl96_cast_fu_24608_p1 = esl_zext<7,6>(p_shl96_fu_24600_p3.read());
}

void ShuffleNetV2::thread_p_shl96_fu_24600_p3() {
    p_shl96_fu_24600_p3 = esl_concat<2,4>(tmp_2147_fu_24596_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl97_cast_fu_24620_p1() {
    p_shl97_cast_fu_24620_p1 = esl_zext<7,4>(p_shl97_fu_24612_p3.read());
}

void ShuffleNetV2::thread_p_shl97_fu_24612_p3() {
    p_shl97_fu_24612_p3 = esl_concat<2,2>(tmp_2147_fu_24596_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl98_cast_fu_24647_p1() {
    p_shl98_cast_fu_24647_p1 = esl_zext<8,7>(p_shl98_fu_24639_p3.read());
}

void ShuffleNetV2::thread_p_shl98_fu_24639_p3() {
    p_shl98_fu_24639_p3 = esl_concat<2,5>(tmp_2147_fu_24596_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl99_cast_fu_24659_p1() {
    p_shl99_cast_fu_24659_p1 = esl_zext<8,5>(p_shl99_fu_24651_p3.read());
}

void ShuffleNetV2::thread_p_shl99_fu_24651_p3() {
    p_shl99_fu_24651_p3 = esl_concat<2,3>(tmp_2147_fu_24596_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl9_cast_fu_18354_p1() {
    p_shl9_cast_fu_18354_p1 = esl_zext<7,4>(p_shl9_fu_18346_p3.read());
}

void ShuffleNetV2::thread_p_shl9_fu_18346_p3() {
    p_shl9_fu_18346_p3 = esl_concat<1,3>(tmp_1984_fu_18330_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl_cast_fu_17653_p1() {
    p_shl_cast_fu_17653_p1 = esl_zext<7,6>(p_shl_fu_17645_p3.read());
}

void ShuffleNetV2::thread_p_shl_fu_17645_p3() {
    p_shl_fu_17645_p3 = esl_concat<1,5>(tmp_1966_fu_17641_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_10_fu_25507_p2() {
    shuffle_conv_1x1_V8_10_fu_25507_p2 = (!tmp_2269_cast_fu_25503_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2269_cast_fu_25503_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_11_fu_26273_p2() {
    shuffle_conv_1x1_V8_11_fu_26273_p2 = (!tmp_2308_cast_fu_26269_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2308_cast_fu_26269_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_12_fu_27054_p2() {
    shuffle_conv_1x1_V8_12_fu_27054_p2 = (!tmp_2346_cast_fu_27050_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2346_cast_fu_27050_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_13_fu_27820_p2() {
    shuffle_conv_1x1_V8_13_fu_27820_p2 = (!tmp_2385_cast_fu_27816_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2385_cast_fu_27816_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_14_fu_28605_p2() {
    shuffle_conv_1x1_V8_14_fu_28605_p2 = (!tmp_2423_cast_fu_28601_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2423_cast_fu_28601_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_15_fu_29379_p2() {
    shuffle_conv_1x1_V8_15_fu_29379_p2 = (!tmp_2464_cast_fu_29375_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2464_cast_fu_29375_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_16_fu_30164_p2() {
    shuffle_conv_1x1_V8_16_fu_30164_p2 = (!tmp_2503_cast_fu_30160_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2503_cast_fu_30160_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_17_fu_30942_p2() {
    shuffle_conv_1x1_V8_17_fu_30942_p2 = (!tmp_2544_cast_fu_30938_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2544_cast_fu_30938_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_18_fu_31731_p2() {
    shuffle_conv_1x1_V8_18_fu_31731_p2 = (!tmp_2581_cast_fu_31727_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2581_cast_fu_31727_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_19_fu_32278_p2() {
    shuffle_conv_1x1_V8_19_fu_32278_p2 = (!tmp_2603_cast_fu_32274_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2603_cast_fu_32274_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_1_fu_19430_p2() {
    shuffle_conv_1x1_V8_1_fu_19430_p2 = (!tmp_1974_cast_fu_19426_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1974_cast_fu_19426_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_20_fu_33035_p2() {
    shuffle_conv_1x1_V8_20_fu_33035_p2 = (!tmp_2636_cast_fu_33031_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2636_cast_fu_33031_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_21_fu_33792_p2() {
    shuffle_conv_1x1_V8_21_fu_33792_p2 = (!tmp_2675_cast_fu_33788_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2675_cast_fu_33788_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_22_fu_34415_p2() {
    shuffle_conv_1x1_V8_22_fu_34415_p2 = (!tmp_2702_cast_fu_34411_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2702_cast_fu_34411_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_23_fu_35172_p2() {
    shuffle_conv_1x1_V8_23_fu_35172_p2 = (!tmp_2740_cast_fu_35168_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2740_cast_fu_35168_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_24_fu_35918_p2() {
    shuffle_conv_1x1_V8_24_fu_35918_p2 = (!tmp_2778_cast_fu_35914_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2778_cast_fu_35914_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_25_fu_36679_p2() {
    shuffle_conv_1x1_V8_25_fu_36679_p2 = (!tmp_2815_cast_fu_36675_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2815_cast_fu_36675_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_26_fu_37425_p2() {
    shuffle_conv_1x1_V8_26_fu_37425_p2 = (!tmp_2853_cast_fu_37421_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2853_cast_fu_37421_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_27_fu_38178_p2() {
    shuffle_conv_1x1_V8_27_fu_38178_p2 = (!tmp_2889_cast_fu_38174_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2889_cast_fu_38174_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_2_fu_20077_p2() {
    shuffle_conv_1x1_V8_2_fu_20077_p2 = (!tmp_2002_cast_fu_20073_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2002_cast_fu_20073_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_3_fu_20858_p2() {
    shuffle_conv_1x1_V8_3_fu_20858_p2 = (!tmp_2039_cast_fu_20854_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2039_cast_fu_20854_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_4_fu_21624_p2() {
    shuffle_conv_1x1_V8_4_fu_21624_p2 = (!tmp_2078_cast_fu_21620_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2078_cast_fu_21620_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_5_fu_22405_p2() {
    shuffle_conv_1x1_V8_5_fu_22405_p2 = (!tmp_2115_cast_fu_22401_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2115_cast_fu_22401_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_6_fu_23183_p2() {
    shuffle_conv_1x1_V8_6_fu_23183_p2 = (!tmp_2156_cast_fu_23179_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2156_cast_fu_23179_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_7_fu_23964_p2() {
    shuffle_conv_1x1_V8_7_fu_23964_p2 = (!tmp_2193_cast_fu_23960_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2193_cast_fu_23960_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_8_fu_24734_p2() {
    shuffle_conv_1x1_V8_8_fu_24734_p2 = (!tmp_2232_cast_fu_24730_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_2232_cast_fu_24730_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_9_fu_17868_p2() {
    shuffle_conv_1x1_V8_9_fu_17868_p2 = (!tmp_1900_cast_fu_17864_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1900_cast_fu_17864_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_s_fu_18649_p2() {
    shuffle_conv_1x1_V8_s_fu_18649_p2 = (!tmp_1934_cast_fu_18645_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1934_cast_fu_18645_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_10_fu_32681_p2() {
    shuffle_conv_3x3_V6_10_fu_32681_p2 = (!tmp_1176_fu_32676_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1176_fu_32676_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_11_fu_33442_p2() {
    shuffle_conv_3x3_V6_11_fu_33442_p2 = (!tmp_1192_fu_33437_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1192_fu_33437_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_12_fu_34814_p2() {
    shuffle_conv_3x3_V6_12_fu_34814_p2 = (!tmp_1226_fu_34809_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1226_fu_34809_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_13_fu_36329_p2() {
    shuffle_conv_3x3_V6_13_fu_36329_p2 = (!tmp_1269_fu_36324_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1269_fu_36324_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_14_fu_37828_p2() {
    shuffle_conv_3x3_V6_14_fu_37828_p2 = (!tmp_1309_fu_37823_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1309_fu_37823_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_1_fu_26692_p2() {
    shuffle_conv_3x3_V6_1_fu_26692_p2 = (!tmp_1021_fu_26687_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1021_fu_26687_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_2_fu_28243_p2() {
    shuffle_conv_3x3_V6_2_fu_28243_p2 = (!tmp_1062_fu_28238_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1062_fu_28238_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_3_fu_29794_p2() {
    shuffle_conv_3x3_V6_3_fu_29794_p2 = (!tmp_1104_fu_29789_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1104_fu_29789_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_4_fu_31357_p2() {
    shuffle_conv_3x3_V6_4_fu_31357_p2 = (!tmp_1148_fu_31352_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1148_fu_31352_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_5_fu_18283_p2() {
    shuffle_conv_3x3_V6_5_fu_18283_p2 = (!tmp_808_fu_18278_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_808_fu_18278_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_6_fu_19064_p2() {
    shuffle_conv_3x3_V6_6_fu_19064_p2 = (!tmp_824_fu_19059_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_824_fu_19059_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_7_fu_20496_p2() {
    shuffle_conv_3x3_V6_7_fu_20496_p2 = (!tmp_858_fu_20491_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_858_fu_20491_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_8_fu_22039_p2() {
    shuffle_conv_3x3_V6_8_fu_22039_p2 = (!tmp_898_fu_22034_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_898_fu_22034_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_9_fu_23598_p2() {
    shuffle_conv_3x3_V6_9_fu_23598_p2 = (!tmp_940_fu_23593_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_940_fu_23593_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_s_fu_25145_p2() {
    shuffle_conv_3x3_V6_s_fu_25145_p2 = (!tmp_980_fu_25140_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_980_fu_25140_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1719.read())) {
        shuffleunit2_2_outpu_address0 = shuffleunit2_2_outpu_reg_47923.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        shuffleunit2_2_outpu_address0 = grp_conv_last_fu_13329_input_V_address0.read();
    } else {
        shuffleunit2_2_outpu_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1719.read())) {
        shuffleunit2_2_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        shuffleunit2_2_outpu_ce0 = grp_conv_last_fu_13329_input_V_ce0.read();
    } else {
        shuffleunit2_2_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1719.read())) {
        shuffleunit2_2_outpu_we0 = ap_const_logic_1;
    } else {
        shuffleunit2_2_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_sum100_fu_37583_p2() {
    sum100_fu_37583_p2 = (!i194_cast_reg_47541.read().is_01() || !tmp82_fu_37577_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i194_cast_reg_47541.read()) + sc_biguint<12>(tmp82_fu_37577_p2.read()));
}

void ShuffleNetV2::thread_sum101_cast_fu_34915_p1() {
    sum101_cast_fu_34915_p1 = esl_zext<32,12>(sum92_reg_46735.read());
}

void ShuffleNetV2::thread_sum101_fu_37370_p2() {
    sum101_fu_37370_p2 = (!tmp81_fu_37364_p2.read().is_01() || !co178_cast_reg_47456.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp81_fu_37364_p2.read()) + sc_biguint<13>(co178_cast_reg_47456.read()));
}

void ShuffleNetV2::thread_sum102_cast_fu_35335_p1() {
    sum102_cast_fu_35335_p1 = esl_zext<32,12>(sum93_reg_46862.read());
}

void ShuffleNetV2::thread_sum102_fu_37924_p2() {
    sum102_fu_37924_p2 = (!i197_cast_reg_47674.read().is_01() || !tmp84_fu_37918_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i197_cast_reg_47674.read()) + sc_biguint<12>(tmp84_fu_37918_p2.read()));
}

void ShuffleNetV2::thread_sum103_fu_38336_p2() {
    sum103_fu_38336_p2 = (!i201_cast_reg_47801.read().is_01() || !tmp86_fu_38330_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i201_cast_reg_47801.read()) + sc_biguint<12>(tmp86_fu_38330_p2.read()));
}

void ShuffleNetV2::thread_sum104_cast_fu_36081_p1() {
    sum104_cast_fu_36081_p1 = esl_zext<32,12>(sum95_reg_47087.read());
}

void ShuffleNetV2::thread_sum104_fu_38123_p2() {
    sum104_fu_38123_p2 = (!tmp85_fu_38117_p2.read().is_01() || !co183_cast_reg_47716.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp85_fu_38117_p2.read()) + sc_biguint<13>(co183_cast_reg_47716.read()));
}

void ShuffleNetV2::thread_sum106_cast_fu_36430_p1() {
    sum106_cast_fu_36430_p1 = esl_zext<32,12>(sum97_reg_47220.read());
}

void ShuffleNetV2::thread_sum107_cast_fu_36842_p1() {
    sum107_cast_fu_36842_p1 = esl_zext<32,12>(sum98_reg_47347.read());
}

void ShuffleNetV2::thread_sum109_cast_fu_37588_p1() {
    sum109_cast_fu_37588_p1 = esl_zext<32,12>(sum100_reg_47572.read());
}

void ShuffleNetV2::thread_sum111_cast_fu_37929_p1() {
    sum111_cast_fu_37929_p1 = esl_zext<32,12>(sum102_reg_47705.read());
}

void ShuffleNetV2::thread_sum112_cast_fu_38341_p1() {
    sum112_cast_fu_38341_p1 = esl_zext<32,12>(sum103_reg_47832.read());
}

void ShuffleNetV2::thread_sum11_cast_cast_fu_15602_p1() {
    sum11_cast_cast_fu_15602_p1 = esl_zext<10,7>(sum11_fu_15596_p2.read());
}

void ShuffleNetV2::thread_sum11_fu_15596_p2() {
    sum11_fu_15596_p2 = (!co25_cast_fu_15554_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co25_cast_fu_15554_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_sum12_fu_15436_p2() {
    sum12_fu_15436_p2 = (!co22_cast_fu_15420_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co22_cast_fu_15420_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_sum13_cast_cast_fu_16408_p1() {
    sum13_cast_cast_fu_16408_p1 = esl_zext<10,7>(sum13_fu_16402_p2.read());
}

void ShuffleNetV2::thread_sum13_fu_16402_p2() {
    sum13_fu_16402_p2 = (!co41_cast_fu_16360_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co41_cast_fu_16360_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_sum15_cast1_fu_17206_p1() {
    sum15_cast1_fu_17206_p1 = esl_sext<7,6>(sum20_fu_17198_p3.read());
}

void ShuffleNetV2::thread_sum15_cast_cast_fu_17210_p1() {
    sum15_cast_cast_fu_17210_p1 = esl_zext<10,7>(sum15_cast1_fu_17206_p1.read());
}

void ShuffleNetV2::thread_sum16_fu_16574_p2() {
    sum16_fu_16574_p2 = (!co43_cast_fu_16558_p1.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<8>(): (sc_biguint<8>(co43_cast_fu_16558_p1.read()) + sc_bigint<8>(ap_const_lv8_90));
}

void ShuffleNetV2::thread_sum17_cast_cast_fu_18229_p1() {
    sum17_cast_cast_fu_18229_p1 = esl_zext<11,8>(sum17_reg_41453.read());
}

void ShuffleNetV2::thread_sum17_fu_18209_p2() {
    sum17_fu_18209_p2 = (!tmp3_fu_18203_p2.read().is_01() || !co58_cast_reg_41385.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp3_fu_18203_p2.read()) + sc_biguint<8>(co58_cast_reg_41385.read()));
}

void ShuffleNetV2::thread_sum18_fu_17030_p2() {
    sum18_fu_17030_p2 = (!co48_cast_fu_17014_p1.read().is_01() || !ap_const_lv8_A8.is_01())? sc_lv<8>(): (sc_biguint<8>(co48_cast_fu_17014_p1.read()) + sc_bigint<8>(ap_const_lv8_A8));
}

void ShuffleNetV2::thread_sum19_cast_cast_fu_19014_p1() {
    sum19_cast_cast_fu_19014_p1 = esl_zext<11,8>(sum19_reg_41713.read());
}

void ShuffleNetV2::thread_sum19_fu_18994_p2() {
    sum19_fu_18994_p2 = (!tmp7_fu_18988_p2.read().is_01() || !co62_cast_reg_41645.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp7_fu_18988_p2.read()) + sc_biguint<8>(co62_cast_reg_41645.read()));
}

void ShuffleNetV2::thread_sum20_fu_17198_p3() {
    sum20_fu_17198_p3 = esl_concat<1,5>(ap_const_lv1_1, co51_reg_9344.read());
}

void ShuffleNetV2::thread_sum21_cast_cast_fu_20442_p1() {
    sum21_cast_cast_fu_20442_p1 = esl_zext<12,9>(sum21_reg_42154.read());
}

void ShuffleNetV2::thread_sum21_fu_20422_p2() {
    sum21_fu_20422_p2 = (!tmp13_cast_fu_20418_p1.read().is_01() || !co70_cast_reg_42086.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp13_cast_fu_20418_p1.read()) + sc_biguint<9>(co70_cast_reg_42086.read()));
}

void ShuffleNetV2::thread_sum22_fu_18038_p2() {
    sum22_fu_18038_p2 = (!i35_cast_reg_41343.read().is_01() || !tmp2_fu_18032_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i35_cast_reg_41343.read()) + sc_biguint<9>(tmp2_fu_18032_p2.read()));
}

void ShuffleNetV2::thread_sum23_cast_cast_fu_21985_p1() {
    sum23_cast_cast_fu_21985_p1 = esl_zext<12,9>(sum23_reg_42639.read());
}

void ShuffleNetV2::thread_sum23_fu_21965_p2() {
    sum23_fu_21965_p2 = (!tmp19_fu_21959_p2.read().is_01() || !co80_cast_reg_42571.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp19_fu_21959_p2.read()) + sc_biguint<9>(co80_cast_reg_42571.read()));
}

void ShuffleNetV2::thread_sum24_fu_17813_p2() {
    sum24_fu_17813_p2 = (!tmp1_fu_17807_p2.read().is_01() || !co56_cast_reg_41258.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp1_fu_17807_p2.read()) + sc_biguint<9>(co56_cast_reg_41258.read()));
}

void ShuffleNetV2::thread_sum25_cast_cast_fu_23548_p1() {
    sum25_cast_cast_fu_23548_p1 = esl_zext<12,9>(sum25_reg_43124.read());
}

void ShuffleNetV2::thread_sum25_fu_23528_p2() {
    sum25_fu_23528_p2 = (!tmp25_fu_23522_p2.read().is_01() || !co90_cast_reg_43056.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp25_fu_23522_p2.read()) + sc_biguint<9>(co90_cast_reg_43056.read()));
}

void ShuffleNetV2::thread_sum26_fu_18379_p2() {
    sum26_fu_18379_p2 = (!i37_cast606_cast_reg_41476.read().is_01() || !tmp4_fu_18373_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i37_cast606_cast_reg_41476.read()) + sc_biguint<8>(tmp4_fu_18373_p2.read()));
}

void ShuffleNetV2::thread_sum27_cast_cast_fu_25095_p1() {
    sum27_cast_cast_fu_25095_p1 = esl_zext<12,9>(sum27_reg_43609.read());
}

void ShuffleNetV2::thread_sum27_fu_25075_p2() {
    sum27_fu_25075_p2 = (!tmp31_fu_25069_p2.read().is_01() || !co100_cast_reg_43541.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp31_fu_25069_p2.read()) + sc_biguint<9>(co100_cast_reg_43541.read()));
}

void ShuffleNetV2::thread_sum28_fu_18819_p2() {
    sum28_fu_18819_p2 = (!i41_cast593_cast_reg_41603.read().is_01() || !tmp6_fu_18813_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i41_cast593_cast_reg_41603.read()) + sc_biguint<8>(tmp6_fu_18813_p2.read()));
}

void ShuffleNetV2::thread_sum29_cast1_fu_26634_p1() {
    sum29_cast1_fu_26634_p1 = esl_sext<9,8>(sum29_reg_44094.read());
}

void ShuffleNetV2::thread_sum29_cast_cast_fu_26637_p1() {
    sum29_cast_cast_fu_26637_p1 = esl_zext<12,9>(sum29_cast1_fu_26634_p1.read());
}

void ShuffleNetV2::thread_sum29_fu_26614_p2() {
    sum29_fu_26614_p2 = (!co110_cast400_cast_reg_44026.read().is_01() || !tmp37_fu_26608_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co110_cast400_cast_reg_44026.read()) + sc_biguint<8>(tmp37_fu_26608_p2.read()));
}

void ShuffleNetV2::thread_sum30_fu_18594_p2() {
    sum30_fu_18594_p2 = (!tmp5_fu_18588_p2.read().is_01() || !co61_cast_reg_41518.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp5_fu_18588_p2.read()) + sc_biguint<9>(co61_cast_reg_41518.read()));
}

void ShuffleNetV2::thread_sum31_cast1_fu_28181_p1() {
    sum31_cast1_fu_28181_p1 = esl_sext<9,8>(sum31_reg_44579.read());
}

void ShuffleNetV2::thread_sum31_cast_cast_fu_28184_p1() {
    sum31_cast_cast_fu_28184_p1 = esl_zext<12,9>(sum31_cast1_fu_28181_p1.read());
}

void ShuffleNetV2::thread_sum31_fu_28161_p2() {
    sum31_fu_28161_p2 = (!co120_cast362_cast_reg_44511.read().is_01() || !tmp43_fu_28155_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co120_cast362_cast_reg_44511.read()) + sc_biguint<8>(tmp43_fu_28155_p2.read()));
}

void ShuffleNetV2::thread_sum32_fu_19160_p2() {
    sum32_fu_19160_p2 = (!i45_cast_reg_41736.read().is_01() || !tmp8_fu_19154_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i45_cast_reg_41736.read()) + sc_biguint<10>(tmp8_fu_19154_p2.read()));
}

void ShuffleNetV2::thread_sum33_cast_cast_fu_29740_p1() {
    sum33_cast_cast_fu_29740_p1 = esl_zext<13,10>(sum33_reg_45064.read());
}

void ShuffleNetV2::thread_sum33_fu_29720_p2() {
    sum33_fu_29720_p2 = (!tmp49_fu_29714_p2.read().is_01() || !co130_cast_reg_44996.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp49_fu_29714_p2.read()) + sc_biguint<10>(co130_cast_reg_44996.read()));
}

void ShuffleNetV2::thread_sum34_fu_19600_p2() {
    sum34_fu_19600_p2 = (!i49_cast_reg_41863.read().is_01() || !tmp10_fu_19594_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i49_cast_reg_41863.read()) + sc_biguint<10>(tmp10_fu_19594_p2.read()));
}

void ShuffleNetV2::thread_sum35_cast_cast_fu_31307_p1() {
    sum35_cast_cast_fu_31307_p1 = esl_zext<13,10>(sum35_reg_45549.read());
}

void ShuffleNetV2::thread_sum35_fu_31287_p2() {
    sum35_fu_31287_p2 = (!tmp55_fu_31281_p2.read().is_01() || !co140_cast_reg_45481.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp55_fu_31281_p2.read()) + sc_biguint<10>(co140_cast_reg_45481.read()));
}

void ShuffleNetV2::thread_sum36_fu_19375_p2() {
    sum36_fu_19375_p2 = (!tmp9_cast_fu_19371_p1.read().is_01() || !co65_cast_reg_41778.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp9_cast_fu_19371_p1.read()) + sc_biguint<10>(co65_cast_reg_41778.read()));
}

void ShuffleNetV2::thread_sum37_cast_cast_fu_32631_p1() {
    sum37_cast_cast_fu_32631_p1 = esl_zext<13,10>(sum37_reg_45980.read());
}

void ShuffleNetV2::thread_sum37_fu_32611_p2() {
    sum37_fu_32611_p2 = (!tmp61_fu_32605_p2.read().is_01() || !co148_cast_reg_45912.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp61_fu_32605_p2.read()) + sc_biguint<10>(co148_cast_reg_45912.read()));
}

void ShuffleNetV2::thread_sum38_fu_20247_p2() {
    sum38_fu_20247_p2 = (!i54_cast_reg_42044.read().is_01() || !tmp12_fu_20241_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i54_cast_reg_42044.read()) + sc_biguint<10>(tmp12_fu_20241_p2.read()));
}

void ShuffleNetV2::thread_sum39_cast_cast_fu_33392_p1() {
    sum39_cast_cast_fu_33392_p1 = esl_zext<13,10>(sum39_reg_46240.read());
}

void ShuffleNetV2::thread_sum39_fu_33372_p2() {
    sum39_fu_33372_p2 = (!tmp65_fu_33366_p2.read().is_01() || !co152_cast_reg_46172.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp65_fu_33366_p2.read()) + sc_biguint<10>(co152_cast_reg_46172.read()));
}

void ShuffleNetV2::thread_sum40_cast_fu_18043_p1() {
    sum40_cast_fu_18043_p1 = esl_zext<32,9>(sum22_reg_41374.read());
}

void ShuffleNetV2::thread_sum40_fu_20022_p2() {
    sum40_fu_20022_p2 = (!tmp11_fu_20016_p2.read().is_01() || !co68_cast_reg_41959.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp11_fu_20016_p2.read()) + sc_biguint<10>(co68_cast_reg_41959.read()));
}

void ShuffleNetV2::thread_sum41_cast_cast_fu_34764_p1() {
    sum41_cast_cast_fu_34764_p1 = esl_zext<13,10>(sum41_reg_46681.read());
}

void ShuffleNetV2::thread_sum41_fu_34744_p2() {
    sum41_fu_34744_p2 = (!tmp71_fu_34738_p2.read().is_01() || !co160_cast_reg_46613.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp71_fu_34738_p2.read()) + sc_biguint<10>(co160_cast_reg_46613.read()));
}

void ShuffleNetV2::thread_sum42_fu_20592_p2() {
    sum42_fu_20592_p2 = (!i57_cast_reg_42177.read().is_01() || !tmp14_fu_20586_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i57_cast_reg_42177.read()) + sc_biguint<10>(tmp14_fu_20586_p2.read()));
}

void ShuffleNetV2::thread_sum43_cast1_fu_36267_p1() {
    sum43_cast1_fu_36267_p1 = esl_sext<10,9>(sum43_reg_47166.read());
}

void ShuffleNetV2::thread_sum43_cast_cast_fu_36270_p1() {
    sum43_cast_cast_fu_36270_p1 = esl_zext<13,10>(sum43_cast1_fu_36267_p1.read());
}

void ShuffleNetV2::thread_sum43_fu_36247_p2() {
    sum43_fu_36247_p2 = (!co170_cast151_cast_reg_47098.read().is_01() || !tmp77_fu_36241_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co170_cast151_cast_reg_47098.read()) + sc_biguint<9>(tmp77_fu_36241_p2.read()));
}

void ShuffleNetV2::thread_sum44_cast1_fu_18384_p1() {
    sum44_cast1_fu_18384_p1 = esl_sext<9,8>(sum26_reg_41507.read());
}

void ShuffleNetV2::thread_sum44_cast_fu_18387_p1() {
    sum44_cast_fu_18387_p1 = esl_zext<32,9>(sum44_cast1_fu_18384_p1.read());
}

void ShuffleNetV2::thread_sum44_fu_21028_p2() {
    sum44_fu_21028_p2 = (!i61_cast_reg_42304.read().is_01() || !tmp16_fu_21022_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i61_cast_reg_42304.read()) + sc_biguint<10>(tmp16_fu_21022_p2.read()));
}

void ShuffleNetV2::thread_sum45_cast_cast_fu_37774_p1() {
    sum45_cast_cast_fu_37774_p1 = esl_zext<14,11>(sum45_reg_47651.read());
}

void ShuffleNetV2::thread_sum45_fu_37754_p2() {
    sum45_fu_37754_p2 = (!tmp83_fu_37748_p2.read().is_01() || !co180_cast_reg_47583.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp83_fu_37748_p2.read()) + sc_biguint<11>(co180_cast_reg_47583.read()));
}

void ShuffleNetV2::thread_sum46_cast1_fu_18824_p1() {
    sum46_cast1_fu_18824_p1 = esl_sext<9,8>(sum28_reg_41634.read());
}

void ShuffleNetV2::thread_sum46_cast_fu_18827_p1() {
    sum46_cast_fu_18827_p1 = esl_zext<32,9>(sum46_cast1_fu_18824_p1.read());
}

void ShuffleNetV2::thread_sum46_fu_20803_p2() {
    sum46_fu_20803_p2 = (!tmp15_fu_20797_p2.read().is_01() || !co73_cast_reg_42219.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp15_fu_20797_p2.read()) + sc_biguint<10>(co73_cast_reg_42219.read()));
}

void ShuffleNetV2::thread_sum47_fu_21794_p2() {
    sum47_fu_21794_p2 = (!i66_cast_reg_42529.read().is_01() || !tmp18_fu_21788_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i66_cast_reg_42529.read()) + sc_biguint<10>(tmp18_fu_21788_p2.read()));
}

void ShuffleNetV2::thread_sum48_cast_fu_19165_p1() {
    sum48_cast_fu_19165_p1 = esl_zext<32,10>(sum32_reg_41767.read());
}

void ShuffleNetV2::thread_sum48_fu_21569_p2() {
    sum48_fu_21569_p2 = (!tmp17_fu_21563_p2.read().is_01() || !co78_cast_reg_42444.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp17_fu_21563_p2.read()) + sc_biguint<10>(co78_cast_reg_42444.read()));
}

void ShuffleNetV2::thread_sum49_cast_fu_19605_p1() {
    sum49_cast_fu_19605_p1 = esl_zext<32,10>(sum34_reg_41894.read());
}

void ShuffleNetV2::thread_sum49_fu_22135_p2() {
    sum49_fu_22135_p2 = (!i69_cast508_cast_reg_42662.read().is_01() || !tmp20_fu_22129_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i69_cast508_cast_reg_42662.read()) + sc_biguint<9>(tmp20_fu_22129_p2.read()));
}

void ShuffleNetV2::thread_sum50_fu_22575_p2() {
    sum50_fu_22575_p2 = (!i73_cast495_cast_reg_42789.read().is_01() || !tmp22_fu_22569_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i73_cast495_cast_reg_42789.read()) + sc_biguint<9>(tmp22_fu_22569_p2.read()));
}

void ShuffleNetV2::thread_sum51_cast_fu_20252_p1() {
    sum51_cast_fu_20252_p1 = esl_zext<32,10>(sum38_reg_42075.read());
}

void ShuffleNetV2::thread_sum51_fu_22350_p2() {
    sum51_fu_22350_p2 = (!tmp21_fu_22344_p2.read().is_01() || !co83_cast_reg_42704.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp21_fu_22344_p2.read()) + sc_biguint<10>(co83_cast_reg_42704.read()));
}

void ShuffleNetV2::thread_sum52_fu_23353_p2() {
    sum52_fu_23353_p2 = (!i78_cast480_cast_reg_43014.read().is_01() || !tmp24_fu_23347_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i78_cast480_cast_reg_43014.read()) + sc_biguint<9>(tmp24_fu_23347_p2.read()));
}

void ShuffleNetV2::thread_sum53_cast_fu_20597_p1() {
    sum53_cast_fu_20597_p1 = esl_zext<32,10>(sum42_reg_42208.read());
}

void ShuffleNetV2::thread_sum53_fu_23120_p2() {
    sum53_fu_23120_p2 = (!co88_cast489_cast_reg_42929.read().is_01() || !tmp23_fu_23114_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co88_cast489_cast_reg_42929.read()) + sc_biguint<9>(tmp23_fu_23114_p2.read()));
}

void ShuffleNetV2::thread_sum54_cast_fu_21033_p1() {
    sum54_cast_fu_21033_p1 = esl_zext<32,10>(sum44_reg_42335.read());
}

void ShuffleNetV2::thread_sum54_fu_23694_p2() {
    sum54_fu_23694_p2 = (!i81_cast470_cast_reg_43147.read().is_01() || !tmp26_fu_23688_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i81_cast470_cast_reg_43147.read()) + sc_biguint<8>(tmp26_fu_23688_p2.read()));
}

void ShuffleNetV2::thread_sum55_fu_24138_p2() {
    sum55_fu_24138_p2 = (!i85_cast_reg_43274.read().is_01() || !tmp28_cast_fu_24134_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i85_cast_reg_43274.read()) + sc_biguint<11>(tmp28_cast_fu_24134_p1.read()));
}

void ShuffleNetV2::thread_sum56_cast_fu_21799_p1() {
    sum56_cast_fu_21799_p1 = esl_zext<32,10>(sum47_reg_42560.read());
}

void ShuffleNetV2::thread_sum56_fu_23909_p2() {
    sum56_fu_23909_p2 = (!tmp27_fu_23903_p2.read().is_01() || !co93_cast_reg_43189.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp27_fu_23903_p2.read()) + sc_biguint<11>(co93_cast_reg_43189.read()));
}

void ShuffleNetV2::thread_sum57_fu_24904_p2() {
    sum57_fu_24904_p2 = (!i90_cast_reg_43499.read().is_01() || !tmp30_fu_24898_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i90_cast_reg_43499.read()) + sc_biguint<11>(tmp30_fu_24898_p2.read()));
}

void ShuffleNetV2::thread_sum58_cast1_fu_22140_p1() {
    sum58_cast1_fu_22140_p1 = esl_sext<10,9>(sum49_reg_42693.read());
}

void ShuffleNetV2::thread_sum58_cast_fu_22143_p1() {
    sum58_cast_fu_22143_p1 = esl_zext<32,10>(sum58_cast1_fu_22140_p1.read());
}

void ShuffleNetV2::thread_sum58_fu_24679_p2() {
    sum58_fu_24679_p2 = (!tmp29_fu_24673_p2.read().is_01() || !co98_cast_reg_43414.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp29_fu_24673_p2.read()) + sc_biguint<11>(co98_cast_reg_43414.read()));
}

void ShuffleNetV2::thread_sum59_cast1_fu_22580_p1() {
    sum59_cast1_fu_22580_p1 = esl_sext<10,9>(sum50_reg_42820.read());
}

void ShuffleNetV2::thread_sum59_cast_fu_22583_p1() {
    sum59_cast_fu_22583_p1 = esl_zext<32,10>(sum59_cast1_fu_22580_p1.read());
}

void ShuffleNetV2::thread_sum59_fu_25241_p2() {
    sum59_fu_25241_p2 = (!i93_cast_reg_43632.read().is_01() || !tmp32_fu_25235_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i93_cast_reg_43632.read()) + sc_biguint<11>(tmp32_fu_25235_p2.read()));
}

void ShuffleNetV2::thread_sum5_cast_cast_fu_14921_p1() {
    sum5_cast_cast_fu_14921_p1 = esl_zext<9,6>(sum5_fu_14915_p2.read());
}

void ShuffleNetV2::thread_sum5_fu_14915_p2() {
    sum5_fu_14915_p2 = (!co12_cast_fu_14899_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co12_cast_fu_14899_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_sum60_fu_25677_p2() {
    sum60_fu_25677_p2 = (!i97_cast_reg_43759.read().is_01() || !tmp34_fu_25671_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i97_cast_reg_43759.read()) + sc_biguint<11>(tmp34_fu_25671_p2.read()));
}

void ShuffleNetV2::thread_sum61_cast1_fu_23358_p1() {
    sum61_cast1_fu_23358_p1 = esl_sext<10,9>(sum52_reg_43045.read());
}

void ShuffleNetV2::thread_sum61_cast_fu_23361_p1() {
    sum61_cast_fu_23361_p1 = esl_zext<32,10>(sum61_cast1_fu_23358_p1.read());
}

void ShuffleNetV2::thread_sum61_fu_25452_p2() {
    sum61_fu_25452_p2 = (!tmp33_fu_25446_p2.read().is_01() || !co103_cast_reg_43674.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp33_fu_25446_p2.read()) + sc_biguint<11>(co103_cast_reg_43674.read()));
}

void ShuffleNetV2::thread_sum62_fu_26443_p2() {
    sum62_fu_26443_p2 = (!i102_cast_reg_43984.read().is_01() || !tmp36_fu_26437_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i102_cast_reg_43984.read()) + sc_biguint<11>(tmp36_fu_26437_p2.read()));
}

void ShuffleNetV2::thread_sum63_cast1_fu_23699_p1() {
    sum63_cast1_fu_23699_p1 = esl_sext<10,8>(sum54_reg_43178.read());
}

void ShuffleNetV2::thread_sum63_cast_fu_23702_p1() {
    sum63_cast_fu_23702_p1 = esl_zext<32,10>(sum63_cast1_fu_23699_p1.read());
}

void ShuffleNetV2::thread_sum63_fu_26218_p2() {
    sum63_fu_26218_p2 = (!tmp35_fu_26212_p2.read().is_01() || !co108_cast_reg_43899.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp35_fu_26212_p2.read()) + sc_biguint<11>(co108_cast_reg_43899.read()));
}

void ShuffleNetV2::thread_sum64_cast_fu_24143_p1() {
    sum64_cast_fu_24143_p1 = esl_zext<32,11>(sum55_reg_43305.read());
}

void ShuffleNetV2::thread_sum64_fu_26788_p2() {
    sum64_fu_26788_p2 = (!i105_cast_reg_44117.read().is_01() || !tmp38_fu_26782_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i105_cast_reg_44117.read()) + sc_biguint<11>(tmp38_fu_26782_p2.read()));
}

void ShuffleNetV2::thread_sum65_fu_27224_p2() {
    sum65_fu_27224_p2 = (!i109_cast_reg_44244.read().is_01() || !tmp40_fu_27218_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i109_cast_reg_44244.read()) + sc_biguint<11>(tmp40_fu_27218_p2.read()));
}

void ShuffleNetV2::thread_sum66_cast_fu_24909_p1() {
    sum66_cast_fu_24909_p1 = esl_zext<32,11>(sum57_reg_43530.read());
}

void ShuffleNetV2::thread_sum66_fu_26999_p2() {
    sum66_fu_26999_p2 = (!tmp39_fu_26993_p2.read().is_01() || !co113_cast_reg_44159.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp39_fu_26993_p2.read()) + sc_biguint<11>(co113_cast_reg_44159.read()));
}

void ShuffleNetV2::thread_sum67_fu_27990_p2() {
    sum67_fu_27990_p2 = (!i114_cast_reg_44469.read().is_01() || !tmp42_fu_27984_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i114_cast_reg_44469.read()) + sc_biguint<11>(tmp42_fu_27984_p2.read()));
}

void ShuffleNetV2::thread_sum68_cast_fu_25246_p1() {
    sum68_cast_fu_25246_p1 = esl_zext<32,11>(sum59_reg_43663.read());
}

void ShuffleNetV2::thread_sum68_fu_27765_p2() {
    sum68_fu_27765_p2 = (!tmp41_fu_27759_p2.read().is_01() || !co118_cast_reg_44384.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp41_fu_27759_p2.read()) + sc_biguint<11>(co118_cast_reg_44384.read()));
}

void ShuffleNetV2::thread_sum69_cast_fu_25682_p1() {
    sum69_cast_fu_25682_p1 = esl_zext<32,11>(sum60_reg_43790.read());
}

void ShuffleNetV2::thread_sum69_fu_28339_p2() {
    sum69_fu_28339_p2 = (!i117_cast_reg_44602.read().is_01() || !tmp44_fu_28333_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i117_cast_reg_44602.read()) + sc_biguint<11>(tmp44_fu_28333_p2.read()));
}

void ShuffleNetV2::thread_sum6_fu_14755_p2() {
    sum6_fu_14755_p2 = (!co9_cast_fu_14739_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co9_cast_fu_14739_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_sum70_fu_28775_p2() {
    sum70_fu_28775_p2 = (!i121_cast_reg_44729.read().is_01() || !tmp46_fu_28769_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i121_cast_reg_44729.read()) + sc_biguint<11>(tmp46_fu_28769_p2.read()));
}

void ShuffleNetV2::thread_sum71_cast_fu_26448_p1() {
    sum71_cast_fu_26448_p1 = esl_zext<32,11>(sum62_reg_44015.read());
}

void ShuffleNetV2::thread_sum71_fu_28550_p2() {
    sum71_fu_28550_p2 = (!tmp45_fu_28544_p2.read().is_01() || !co123_cast_reg_44644.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp45_fu_28544_p2.read()) + sc_biguint<11>(co123_cast_reg_44644.read()));
}

void ShuffleNetV2::thread_sum72_fu_29549_p2() {
    sum72_fu_29549_p2 = (!i126_cast_reg_44954.read().is_01() || !tmp48_fu_29543_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i126_cast_reg_44954.read()) + sc_biguint<11>(tmp48_fu_29543_p2.read()));
}

void ShuffleNetV2::thread_sum73_cast_fu_26793_p1() {
    sum73_cast_fu_26793_p1 = esl_zext<32,11>(sum64_reg_44148.read());
}

void ShuffleNetV2::thread_sum73_fu_29316_p2() {
    sum73_fu_29316_p2 = (!co128_cast337_cast_reg_44869.read().is_01() || !tmp47_fu_29310_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co128_cast337_cast_reg_44869.read()) + sc_biguint<10>(tmp47_fu_29310_p2.read()));
}

void ShuffleNetV2::thread_sum74_cast_fu_27229_p1() {
    sum74_cast_fu_27229_p1 = esl_zext<32,11>(sum65_reg_44275.read());
}

void ShuffleNetV2::thread_sum74_fu_29890_p2() {
    sum74_fu_29890_p2 = (!i129_cast_reg_45087.read().is_01() || !tmp50_fu_29884_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i129_cast_reg_45087.read()) + sc_biguint<11>(tmp50_fu_29884_p2.read()));
}

void ShuffleNetV2::thread_sum75_fu_30334_p2() {
    sum75_fu_30334_p2 = (!i133_cast305_cast_reg_45214.read().is_01() || !tmp52_fu_30328_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i133_cast305_cast_reg_45214.read()) + sc_biguint<10>(tmp52_fu_30328_p2.read()));
}

void ShuffleNetV2::thread_sum76_cast_fu_27995_p1() {
    sum76_cast_fu_27995_p1 = esl_zext<32,11>(sum67_reg_44500.read());
}

void ShuffleNetV2::thread_sum76_fu_30101_p2() {
    sum76_fu_30101_p2 = (!co133_cast314_cast_reg_45129.read().is_01() || !tmp51_fu_30095_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co133_cast314_cast_reg_45129.read()) + sc_biguint<10>(tmp51_fu_30095_p2.read()));
}

void ShuffleNetV2::thread_sum77_fu_31112_p2() {
    sum77_fu_31112_p2 = (!i138_cast290_cast_reg_45439.read().is_01() || !tmp54_fu_31106_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i138_cast290_cast_reg_45439.read()) + sc_biguint<10>(tmp54_fu_31106_p2.read()));
}

void ShuffleNetV2::thread_sum78_cast_fu_28344_p1() {
    sum78_cast_fu_28344_p1 = esl_zext<32,11>(sum69_reg_44633.read());
}

void ShuffleNetV2::thread_sum78_fu_30879_p2() {
    sum78_fu_30879_p2 = (!co138_cast299_cast_reg_45354.read().is_01() || !tmp53_fu_30873_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co138_cast299_cast_reg_45354.read()) + sc_biguint<9>(tmp53_fu_30873_p2.read()));
}

void ShuffleNetV2::thread_sum79_cast_fu_28780_p1() {
    sum79_cast_fu_28780_p1 = esl_zext<32,11>(sum70_reg_44760.read());
}

void ShuffleNetV2::thread_sum79_fu_31453_p2() {
    sum79_fu_31453_p2 = (!i141_cast280_cast_reg_45572.read().is_01() || !tmp56_fu_31447_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i141_cast280_cast_reg_45572.read()) + sc_biguint<10>(tmp56_fu_31447_p2.read()));
}

void ShuffleNetV2::thread_sum80_fu_31901_p2() {
    sum80_fu_31901_p2 = (!i145_cast267_cast_reg_45699.read().is_01() || !tmp58_fu_31895_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i145_cast267_cast_reg_45699.read()) + sc_biguint<10>(tmp58_fu_31895_p2.read()));
}

void ShuffleNetV2::thread_sum81_cast_fu_29554_p1() {
    sum81_cast_fu_29554_p1 = esl_zext<32,11>(sum72_reg_44985.read());
}

void ShuffleNetV2::thread_sum81_fu_31676_p2() {
    sum81_fu_31676_p2 = (!tmp57_cast_fu_31672_p1.read().is_01() || !co143_cast_reg_45614.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp57_cast_fu_31672_p1.read()) + sc_biguint<12>(co143_cast_reg_45614.read()));
}

void ShuffleNetV2::thread_sum82_fu_32436_p2() {
    sum82_fu_32436_p2 = (!i150_cast253_cast_reg_45870.read().is_01() || !tmp60_fu_32430_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i150_cast253_cast_reg_45870.read()) + sc_biguint<10>(tmp60_fu_32430_p2.read()));
}

void ShuffleNetV2::thread_sum83_cast_fu_29895_p1() {
    sum83_cast_fu_29895_p1 = esl_zext<32,11>(sum74_reg_45118.read());
}

void ShuffleNetV2::thread_sum83_fu_32223_p2() {
    sum83_fu_32223_p2 = (!tmp59_fu_32217_p2.read().is_01() || !co146_cast_reg_45785.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp59_fu_32217_p2.read()) + sc_biguint<12>(co146_cast_reg_45785.read()));
}

void ShuffleNetV2::thread_sum84_cast1_fu_30339_p1() {
    sum84_cast1_fu_30339_p1 = esl_sext<11,10>(sum75_reg_45245.read());
}

void ShuffleNetV2::thread_sum84_cast_fu_30342_p1() {
    sum84_cast_fu_30342_p1 = esl_zext<32,11>(sum84_cast1_fu_30339_p1.read());
}

void ShuffleNetV2::thread_sum84_fu_32777_p2() {
    sum84_fu_32777_p2 = (!i153_cast243_cast_reg_46003.read().is_01() || !tmp62_fu_32771_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i153_cast243_cast_reg_46003.read()) + sc_biguint<9>(tmp62_fu_32771_p2.read()));
}

void ShuffleNetV2::thread_sum85_fu_33201_p2() {
    sum85_fu_33201_p2 = (!i157_cast_reg_46130.read().is_01() || !tmp64_cast_fu_33197_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i157_cast_reg_46130.read()) + sc_biguint<12>(tmp64_cast_fu_33197_p1.read()));
}

void ShuffleNetV2::thread_sum86_cast1_fu_31117_p1() {
    sum86_cast1_fu_31117_p1 = esl_sext<11,10>(sum77_reg_45470.read());
}

void ShuffleNetV2::thread_sum86_cast_fu_31120_p1() {
    sum86_cast_fu_31120_p1 = esl_zext<32,11>(sum86_cast1_fu_31117_p1.read());
}

void ShuffleNetV2::thread_sum86_fu_32980_p2() {
    sum86_fu_32980_p2 = (!tmp63_fu_32974_p2.read().is_01() || !co151_cast_reg_46045.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp63_fu_32974_p2.read()) + sc_biguint<12>(co151_cast_reg_46045.read()));
}

void ShuffleNetV2::thread_sum87_fu_33538_p2() {
    sum87_fu_33538_p2 = (!i161_cast_reg_46263.read().is_01() || !tmp66_fu_33532_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i161_cast_reg_46263.read()) + sc_biguint<12>(tmp66_fu_33532_p2.read()));
}

void ShuffleNetV2::thread_sum88_cast1_fu_31458_p1() {
    sum88_cast1_fu_31458_p1 = esl_sext<11,10>(sum79_reg_45603.read());
}

void ShuffleNetV2::thread_sum88_cast_fu_31461_p1() {
    sum88_cast_fu_31461_p1 = esl_zext<32,11>(sum88_cast1_fu_31458_p1.read());
}

void ShuffleNetV2::thread_sum88_fu_33950_p2() {
    sum88_fu_33950_p2 = (!i165_cast_reg_46390.read().is_01() || !tmp68_fu_33944_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i165_cast_reg_46390.read()) + sc_biguint<12>(tmp68_fu_33944_p2.read()));
}

void ShuffleNetV2::thread_sum89_cast1_fu_31906_p1() {
    sum89_cast1_fu_31906_p1 = esl_sext<11,10>(sum80_reg_45730.read());
}

void ShuffleNetV2::thread_sum89_cast_fu_31909_p1() {
    sum89_cast_fu_31909_p1 = esl_zext<32,11>(sum89_cast1_fu_31906_p1.read());
}

void ShuffleNetV2::thread_sum89_fu_33737_p2() {
    sum89_fu_33737_p2 = (!tmp67_fu_33731_p2.read().is_01() || !co155_cast_reg_46305.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp67_fu_33731_p2.read()) + sc_biguint<12>(co155_cast_reg_46305.read()));
}

void ShuffleNetV2::thread_sum90_fu_34573_p2() {
    sum90_fu_34573_p2 = (!i170_cast_reg_46571.read().is_01() || !tmp70_fu_34567_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i170_cast_reg_46571.read()) + sc_biguint<12>(tmp70_fu_34567_p2.read()));
}

void ShuffleNetV2::thread_sum91_cast1_fu_32441_p1() {
    sum91_cast1_fu_32441_p1 = esl_sext<11,10>(sum82_reg_45901.read());
}

void ShuffleNetV2::thread_sum91_cast_fu_32444_p1() {
    sum91_cast_fu_32444_p1 = esl_zext<32,11>(sum91_cast1_fu_32441_p1.read());
}

void ShuffleNetV2::thread_sum91_fu_34360_p2() {
    sum91_fu_34360_p2 = (!tmp69_fu_34354_p2.read().is_01() || !co158_cast_reg_46486.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp69_fu_34354_p2.read()) + sc_biguint<12>(co158_cast_reg_46486.read()));
}

void ShuffleNetV2::thread_sum92_fu_34910_p2() {
    sum92_fu_34910_p2 = (!i173_cast_reg_46704.read().is_01() || !tmp72_fu_34904_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i173_cast_reg_46704.read()) + sc_biguint<12>(tmp72_fu_34904_p2.read()));
}

void ShuffleNetV2::thread_sum93_cast1_fu_32782_p1() {
    sum93_cast1_fu_32782_p1 = esl_sext<11,9>(sum84_reg_46034.read());
}

void ShuffleNetV2::thread_sum93_cast_fu_32785_p1() {
    sum93_cast_fu_32785_p1 = esl_zext<32,11>(sum93_cast1_fu_32782_p1.read());
}

void ShuffleNetV2::thread_sum93_fu_35330_p2() {
    sum93_fu_35330_p2 = (!i177_cast_reg_46831.read().is_01() || !tmp74_fu_35324_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i177_cast_reg_46831.read()) + sc_biguint<12>(tmp74_fu_35324_p2.read()));
}

void ShuffleNetV2::thread_sum94_cast_fu_33206_p1() {
    sum94_cast_fu_33206_p1 = esl_zext<32,12>(sum85_reg_46161.read());
}

void ShuffleNetV2::thread_sum94_fu_35109_p2() {
    sum94_fu_35109_p2 = (!co163_cast179_cast_reg_46746.read().is_01() || !tmp73_fu_35103_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(co163_cast179_cast_reg_46746.read()) + sc_biguint<11>(tmp73_fu_35103_p2.read()));
}

void ShuffleNetV2::thread_sum95_fu_36076_p2() {
    sum95_fu_36076_p2 = (!i182_cast_reg_47056.read().is_01() || !tmp76_fu_36070_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i182_cast_reg_47056.read()) + sc_biguint<12>(tmp76_fu_36070_p2.read()));
}

void ShuffleNetV2::thread_sum96_cast_fu_33543_p1() {
    sum96_cast_fu_33543_p1 = esl_zext<32,12>(sum87_reg_46294.read());
}

void ShuffleNetV2::thread_sum96_fu_35863_p2() {
    sum96_fu_35863_p2 = (!tmp75_fu_35857_p2.read().is_01() || !co168_cast_reg_46971.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp75_fu_35857_p2.read()) + sc_biguint<13>(co168_cast_reg_46971.read()));
}

void ShuffleNetV2::thread_sum97_cast_fu_33955_p1() {
    sum97_cast_fu_33955_p1 = esl_zext<32,12>(sum88_reg_46421.read());
}

void ShuffleNetV2::thread_sum97_fu_36425_p2() {
    sum97_fu_36425_p2 = (!i185_cast_reg_47189.read().is_01() || !tmp78_fu_36419_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i185_cast_reg_47189.read()) + sc_biguint<12>(tmp78_fu_36419_p2.read()));
}

void ShuffleNetV2::thread_sum98_fu_36837_p2() {
    sum98_fu_36837_p2 = (!i189_cast_reg_47316.read().is_01() || !tmp80_fu_36831_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i189_cast_reg_47316.read()) + sc_biguint<12>(tmp80_fu_36831_p2.read()));
}

void ShuffleNetV2::thread_sum99_cast_fu_34578_p1() {
    sum99_cast_fu_34578_p1 = esl_zext<32,12>(sum90_reg_46602.read());
}

void ShuffleNetV2::thread_sum99_fu_36624_p2() {
    sum99_fu_36624_p2 = (!tmp79_fu_36618_p2.read().is_01() || !co173_cast_reg_47231.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp79_fu_36618_p2.read()) + sc_biguint<13>(co173_cast_reg_47231.read()));
}

void ShuffleNetV2::thread_sum9_fu_15099_p2() {
    sum9_fu_15099_p2 = (!co16_cast_fu_15083_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co16_cast_fu_15083_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_sum_fu_16242_p2() {
    sum_fu_16242_p2 = (!co38_cast_fu_16226_p1.read().is_01() || !ap_const_lv8_78.is_01())? sc_lv<8>(): (sc_biguint<8>(co38_cast_fu_16226_p1.read()) + sc_biguint<8>(ap_const_lv8_78));
}

void ShuffleNetV2::thread_tmp10_fu_19594_p2() {
    tmp10_fu_19594_p2 = (!ap_const_lv10_228.is_01() || !tmp_193_cast_fu_19585_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_193_cast_fu_19585_p1.read()));
}

void ShuffleNetV2::thread_tmp11_fu_20016_p2() {
    tmp11_fu_20016_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_211_cast_fu_20012_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_211_cast_fu_20012_p1.read()));
}

void ShuffleNetV2::thread_tmp12_fu_20241_p2() {
    tmp12_fu_20241_p2 = (!ap_const_lv10_258.is_01() || !tmp_205_cast_fu_20232_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_205_cast_fu_20232_p1.read()));
}

void ShuffleNetV2::thread_tmp13_cast1_fu_20414_p1() {
    tmp13_cast1_fu_20414_p1 = esl_sext<8,7>(tmp13_fu_20408_p2.read());
}

void ShuffleNetV2::thread_tmp13_cast_fu_20418_p1() {
    tmp13_cast_fu_20418_p1 = esl_zext<9,8>(tmp13_cast1_fu_20414_p1.read());
}

void ShuffleNetV2::thread_tmp13_fu_20408_p2() {
    tmp13_fu_20408_p2 = (!ap_const_lv7_58.is_01() || !tmp_209_fu_20370_p2.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_209_fu_20370_p2.read()));
}

void ShuffleNetV2::thread_tmp14_fu_20586_p2() {
    tmp14_fu_20586_p2 = (!ap_const_lv10_288.is_01() || !tmp_213_cast_fu_20577_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_288) + sc_bigint<10>(tmp_213_cast_fu_20577_p1.read()));
}

void ShuffleNetV2::thread_tmp15_fu_20797_p2() {
    tmp15_fu_20797_p2 = (!ap_const_lv10_258.is_01() || !tmp_228_cast_fu_20793_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_228_cast_fu_20793_p1.read()));
}

void ShuffleNetV2::thread_tmp16_fu_21022_p2() {
    tmp16_fu_21022_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_222_cast_fu_21013_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_222_cast_fu_21013_p1.read()));
}

void ShuffleNetV2::thread_tmp17_fu_21563_p2() {
    tmp17_fu_21563_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_240_cast_fu_21559_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_240_cast_fu_21559_p1.read()));
}

void ShuffleNetV2::thread_tmp18_fu_21788_p2() {
    tmp18_fu_21788_p2 = (!ap_const_lv10_2E8.is_01() || !tmp_234_cast_fu_21779_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2E8) + sc_bigint<10>(tmp_234_cast_fu_21779_p1.read()));
}

void ShuffleNetV2::thread_tmp19_fu_21959_p2() {
    tmp19_fu_21959_p2 = (!ap_const_lv9_108.is_01() || !tmp_248_cast_fu_21923_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_108) + sc_bigint<9>(tmp_248_cast_fu_21923_p1.read()));
}

void ShuffleNetV2::thread_tmp1_fu_17807_p2() {
    tmp1_fu_17807_p2 = (!ap_const_lv9_D8.is_01() || !tmp_165_cast_fu_17803_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_D8) + sc_bigint<9>(tmp_165_cast_fu_17803_p1.read()));
}

void ShuffleNetV2::thread_tmp20_fu_22129_p2() {
    tmp20_fu_22129_p2 = (!ap_const_lv9_118.is_01() || !tmp_242_cast_cast_fu_22120_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_118) + sc_bigint<9>(tmp_242_cast_cast_fu_22120_p1.read()));
}

void ShuffleNetV2::thread_tmp21_fu_22344_p2() {
    tmp21_fu_22344_p2 = (!ap_const_lv10_318.is_01() || !tmp_257_cast_fu_22340_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_257_cast_fu_22340_p1.read()));
}

void ShuffleNetV2::thread_tmp22_fu_22569_p2() {
    tmp22_fu_22569_p2 = (!ap_const_lv9_148.is_01() || !tmp_251_cast_cast_fu_22560_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_148) + sc_bigint<9>(tmp_251_cast_cast_fu_22560_p1.read()));
}

void ShuffleNetV2::thread_tmp23_fu_23114_p2() {
    tmp23_fu_23114_p2 = (!ap_const_lv9_178.is_01() || !tmp_269_cast_cast_fu_23110_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_269_cast_cast_fu_23110_p1.read()));
}

void ShuffleNetV2::thread_tmp24_fu_23347_p2() {
    tmp24_fu_23347_p2 = (!ap_const_lv9_178.is_01() || !tmp_263_cast_cast_fu_23338_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_263_cast_cast_fu_23338_p1.read()));
}

void ShuffleNetV2::thread_tmp25_fu_23522_p2() {
    tmp25_fu_23522_p2 = (!ap_const_lv9_138.is_01() || !tmp_277_cast_fu_23486_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_277_cast_fu_23486_p1.read()));
}

void ShuffleNetV2::thread_tmp26_fu_23688_p2() {
    tmp26_fu_23688_p2 = (!ap_const_lv8_A8.is_01() || !tmp_271_cast_cast_fu_23679_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_271_cast_cast_fu_23679_p1.read()));
}

void ShuffleNetV2::thread_tmp27_fu_23903_p2() {
    tmp27_fu_23903_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_286_cast_fu_23899_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_286_cast_fu_23899_p1.read()));
}

void ShuffleNetV2::thread_tmp28_cast1_fu_24130_p1() {
    tmp28_cast1_fu_24130_p1 = esl_sext<10,7>(tmp28_fu_24124_p2.read());
}

void ShuffleNetV2::thread_tmp28_cast_fu_24134_p1() {
    tmp28_cast_fu_24134_p1 = esl_zext<11,10>(tmp28_cast1_fu_24130_p1.read());
}

void ShuffleNetV2::thread_tmp28_fu_24124_p2() {
    tmp28_fu_24124_p2 = (!ap_const_lv7_58.is_01() || !tmp_249_fu_24113_p2.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_249_fu_24113_p2.read()));
}

void ShuffleNetV2::thread_tmp29_fu_24673_p2() {
    tmp29_fu_24673_p2 = (!ap_const_lv11_438.is_01() || !tmp_298_cast_fu_24669_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_298_cast_fu_24669_p1.read()));
}

void ShuffleNetV2::thread_tmp2_fu_18032_p2() {
    tmp2_fu_18032_p2 = (!ap_const_lv9_168.is_01() || !tmp_159_cast_fu_18023_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_159_cast_fu_18023_p1.read()));
}

void ShuffleNetV2::thread_tmp30_fu_24898_p2() {
    tmp30_fu_24898_p2 = (!ap_const_lv11_408.is_01() || !tmp_292_cast_fu_24889_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_408) + sc_bigint<11>(tmp_292_cast_fu_24889_p1.read()));
}

void ShuffleNetV2::thread_tmp31_fu_25069_p2() {
    tmp31_fu_25069_p2 = (!ap_const_lv9_168.is_01() || !tmp_306_cast_fu_25033_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_306_cast_fu_25033_p1.read()));
}

void ShuffleNetV2::thread_tmp32_fu_25235_p2() {
    tmp32_fu_25235_p2 = (!ap_const_lv11_438.is_01() || !tmp_300_cast_fu_25226_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_300_cast_fu_25226_p1.read()));
}

void ShuffleNetV2::thread_tmp33_fu_25446_p2() {
    tmp33_fu_25446_p2 = (!ap_const_lv11_498.is_01() || !tmp_315_cast_fu_25442_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_315_cast_fu_25442_p1.read()));
}

void ShuffleNetV2::thread_tmp34_fu_25671_p2() {
    tmp34_fu_25671_p2 = (!ap_const_lv11_468.is_01() || !tmp_309_cast_fu_25662_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_468) + sc_bigint<11>(tmp_309_cast_fu_25662_p1.read()));
}

void ShuffleNetV2::thread_tmp35_fu_26212_p2() {
    tmp35_fu_26212_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_327_cast_fu_26208_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_327_cast_fu_26208_p1.read()));
}

void ShuffleNetV2::thread_tmp36_fu_26437_p2() {
    tmp36_fu_26437_p2 = (!ap_const_lv11_498.is_01() || !tmp_321_cast_fu_26428_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_321_cast_fu_26428_p1.read()));
}

void ShuffleNetV2::thread_tmp37_fu_26608_p2() {
    tmp37_fu_26608_p2 = (!ap_const_lv8_98.is_01() || !tmp_335_cast_cast_fu_26572_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_335_cast_cast_fu_26572_p1.read()));
}

void ShuffleNetV2::thread_tmp38_fu_26782_p2() {
    tmp38_fu_26782_p2 = (!ap_const_lv11_4C8.is_01() || !tmp_329_cast_fu_26773_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4C8) + sc_bigint<11>(tmp_329_cast_fu_26773_p1.read()));
}

void ShuffleNetV2::thread_tmp39_fu_26993_p2() {
    tmp39_fu_26993_p2 = (!ap_const_lv11_558.is_01() || !tmp_344_cast_fu_26989_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_344_cast_fu_26989_p1.read()));
}

void ShuffleNetV2::thread_tmp3_fu_18203_p2() {
    tmp3_fu_18203_p2 = (!ap_const_lv8_78.is_01() || !tmp_173_cast_fu_18167_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_78) + sc_bigint<8>(tmp_173_cast_fu_18167_p1.read()));
}

void ShuffleNetV2::thread_tmp40_fu_27218_p2() {
    tmp40_fu_27218_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_338_cast_fu_27209_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_338_cast_fu_27209_p1.read()));
}

void ShuffleNetV2::thread_tmp41_fu_27759_p2() {
    tmp41_fu_27759_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_356_cast_fu_27755_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_356_cast_fu_27755_p1.read()));
}

void ShuffleNetV2::thread_tmp42_fu_27984_p2() {
    tmp42_fu_27984_p2 = (!ap_const_lv11_528.is_01() || !tmp_350_cast_fu_27975_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_528) + sc_bigint<11>(tmp_350_cast_fu_27975_p1.read()));
}

void ShuffleNetV2::thread_tmp43_fu_28155_p2() {
    tmp43_fu_28155_p2 = (!ap_const_lv8_C8.is_01() || !tmp_364_cast_cast_fu_28119_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_364_cast_cast_fu_28119_p1.read()));
}

void ShuffleNetV2::thread_tmp44_fu_28333_p2() {
    tmp44_fu_28333_p2 = (!ap_const_lv11_558.is_01() || !tmp_358_cast_fu_28324_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_358_cast_fu_28324_p1.read()));
}

void ShuffleNetV2::thread_tmp45_fu_28544_p2() {
    tmp45_fu_28544_p2 = (!ap_const_lv11_618.is_01() || !tmp_373_cast_fu_28540_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_618) + sc_bigint<11>(tmp_373_cast_fu_28540_p1.read()));
}

void ShuffleNetV2::thread_tmp46_fu_28769_p2() {
    tmp46_fu_28769_p2 = (!ap_const_lv11_588.is_01() || !tmp_367_cast_fu_28760_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_588) + sc_bigint<11>(tmp_367_cast_fu_28760_p1.read()));
}

void ShuffleNetV2::thread_tmp47_fu_29310_p2() {
    tmp47_fu_29310_p2 = (!ap_const_lv10_278.is_01() || !tmp_385_cast_cast_fu_29306_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_385_cast_cast_fu_29306_p1.read()));
}

void ShuffleNetV2::thread_tmp48_fu_29543_p2() {
    tmp48_fu_29543_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_379_cast_fu_29534_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_379_cast_fu_29534_p1.read()));
}

void ShuffleNetV2::thread_tmp49_fu_29714_p2() {
    tmp49_fu_29714_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_393_cast_fu_29678_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_393_cast_fu_29678_p1.read()));
}

void ShuffleNetV2::thread_tmp4_fu_18373_p2() {
    tmp4_fu_18373_p2 = (!ap_const_lv8_98.is_01() || !tmp_167_cast_cast_fu_18364_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_167_cast_cast_fu_18364_p1.read()));
}

void ShuffleNetV2::thread_tmp50_fu_29884_p2() {
    tmp50_fu_29884_p2 = (!ap_const_lv11_5E8.is_01() || !tmp_387_cast_fu_29875_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5E8) + sc_bigint<11>(tmp_387_cast_fu_29875_p1.read()));
}

void ShuffleNetV2::thread_tmp51_fu_30095_p2() {
    tmp51_fu_30095_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_402_cast_cast_fu_30091_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_402_cast_cast_fu_30091_p1.read()));
}

void ShuffleNetV2::thread_tmp52_fu_30328_p2() {
    tmp52_fu_30328_p2 = (!ap_const_lv10_218.is_01() || !tmp_396_cast_cast_fu_30319_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_218) + sc_bigint<10>(tmp_396_cast_cast_fu_30319_p1.read()));
}

void ShuffleNetV2::thread_tmp53_fu_30873_p2() {
    tmp53_fu_30873_p2 = (!ap_const_lv9_138.is_01() || !tmp_414_cast_cast_fu_30869_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_414_cast_cast_fu_30869_p1.read()));
}

void ShuffleNetV2::thread_tmp54_fu_31106_p2() {
    tmp54_fu_31106_p2 = (!ap_const_lv10_248.is_01() || !tmp_408_cast_cast_fu_31097_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_248) + sc_bigint<10>(tmp_408_cast_cast_fu_31097_p1.read()));
}

void ShuffleNetV2::thread_tmp55_fu_31281_p2() {
    tmp55_fu_31281_p2 = (!ap_const_lv10_228.is_01() || !tmp_422_cast_fu_31245_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_422_cast_fu_31245_p1.read()));
}

void ShuffleNetV2::thread_tmp56_fu_31447_p2() {
    tmp56_fu_31447_p2 = (!ap_const_lv10_278.is_01() || !tmp_416_cast_cast_fu_31438_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_416_cast_cast_fu_31438_p1.read()));
}

void ShuffleNetV2::thread_tmp57_cast1_fu_31668_p1() {
    tmp57_cast1_fu_31668_p1 = esl_sext<11,9>(tmp57_fu_31662_p2.read());
}

void ShuffleNetV2::thread_tmp57_cast_fu_31672_p1() {
    tmp57_cast_fu_31672_p1 = esl_zext<12,11>(tmp57_cast1_fu_31668_p1.read());
}

void ShuffleNetV2::thread_tmp57_fu_31662_p2() {
    tmp57_fu_31662_p2 = (!ap_const_lv9_198.is_01() || !tmp_431_cast_cast_fu_31658_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_431_cast_cast_fu_31658_p1.read()));
}

void ShuffleNetV2::thread_tmp58_fu_31895_p2() {
    tmp58_fu_31895_p2 = (!ap_const_lv10_2A8.is_01() || !tmp_425_cast_cast_fu_31886_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2A8) + sc_bigint<10>(tmp_425_cast_cast_fu_31886_p1.read()));
}

void ShuffleNetV2::thread_tmp59_fu_32217_p2() {
    tmp59_fu_32217_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_442_cast_fu_32213_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_442_cast_fu_32213_p1.read()));
}

void ShuffleNetV2::thread_tmp5_fu_18588_p2() {
    tmp5_fu_18588_p2 = (!ap_const_lv9_138.is_01() || !tmp_182_cast_fu_18584_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_182_cast_fu_18584_p1.read()));
}

void ShuffleNetV2::thread_tmp60_fu_32430_p2() {
    tmp60_fu_32430_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_436_cast_cast_fu_32421_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_436_cast_cast_fu_32421_p1.read()));
}

void ShuffleNetV2::thread_tmp61_fu_32605_p2() {
    tmp61_fu_32605_p2 = (!ap_const_lv10_258.is_01() || !tmp_450_cast_fu_32569_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_450_cast_fu_32569_p1.read()));
}

void ShuffleNetV2::thread_tmp62_fu_32771_p2() {
    tmp62_fu_32771_p2 = (!ap_const_lv9_138.is_01() || !tmp_444_cast_cast_fu_32762_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_444_cast_cast_fu_32762_p1.read()));
}

void ShuffleNetV2::thread_tmp63_fu_32974_p2() {
    tmp63_fu_32974_p2 = (!ap_const_lv12_978.is_01() || !tmp_459_cast_fu_32970_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_459_cast_fu_32970_p1.read()));
}

void ShuffleNetV2::thread_tmp64_cast1_fu_33193_p1() {
    tmp64_cast1_fu_33193_p1 = esl_sext<11,9>(tmp64_fu_33187_p2.read());
}

void ShuffleNetV2::thread_tmp64_cast_fu_33197_p1() {
    tmp64_cast_fu_33197_p1 = esl_zext<12,11>(tmp64_cast1_fu_33193_p1.read());
}

void ShuffleNetV2::thread_tmp64_fu_33187_p2() {
    tmp64_fu_33187_p2 = (!ap_const_lv9_198.is_01() || !tmp_453_cast_cast_fu_33178_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_453_cast_cast_fu_33178_p1.read()));
}

void ShuffleNetV2::thread_tmp65_fu_33366_p2() {
    tmp65_fu_33366_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_467_cast_fu_33330_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_467_cast_fu_33330_p1.read()));
}

void ShuffleNetV2::thread_tmp66_fu_33532_p2() {
    tmp66_fu_33532_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_461_cast_fu_33523_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_461_cast_fu_33523_p1.read()));
}

void ShuffleNetV2::thread_tmp67_fu_33731_p2() {
    tmp67_fu_33731_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_480_cast_fu_33727_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_480_cast_fu_33727_p1.read()));
}

void ShuffleNetV2::thread_tmp68_fu_33944_p2() {
    tmp68_fu_33944_p2 = (!ap_const_lv12_858.is_01() || !tmp_470_cast_fu_33935_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_858) + sc_bigint<12>(tmp_470_cast_fu_33935_p1.read()));
}

void ShuffleNetV2::thread_tmp69_fu_34354_p2() {
    tmp69_fu_34354_p2 = (!ap_const_lv12_C78.is_01() || !tmp_488_cast_fu_34350_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C78) + sc_bigint<12>(tmp_488_cast_fu_34350_p1.read()));
}

void ShuffleNetV2::thread_tmp6_fu_18813_p2() {
    tmp6_fu_18813_p2 = (!ap_const_lv8_C8.is_01() || !tmp_176_cast_cast_fu_18804_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_176_cast_cast_fu_18804_p1.read()));
}

void ShuffleNetV2::thread_tmp70_fu_34567_p2() {
    tmp70_fu_34567_p2 = (!ap_const_lv12_8B8.is_01() || !tmp_482_cast_fu_34558_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_8B8) + sc_bigint<12>(tmp_482_cast_fu_34558_p1.read()));
}

void ShuffleNetV2::thread_tmp71_fu_34738_p2() {
    tmp71_fu_34738_p2 = (!ap_const_lv10_318.is_01() || !tmp_496_cast_fu_34702_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_496_cast_fu_34702_p1.read()));
}

void ShuffleNetV2::thread_tmp72_fu_34904_p2() {
    tmp72_fu_34904_p2 = (!ap_const_lv12_918.is_01() || !tmp_490_cast_fu_34895_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_918) + sc_bigint<12>(tmp_490_cast_fu_34895_p1.read()));
}

void ShuffleNetV2::thread_tmp73_fu_35103_p2() {
    tmp73_fu_35103_p2 = (!ap_const_lv11_5F8.is_01() || !tmp_505_cast_cast_fu_35099_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5F8) + sc_bigint<11>(tmp_505_cast_cast_fu_35099_p1.read()));
}

void ShuffleNetV2::thread_tmp74_fu_35324_p2() {
    tmp74_fu_35324_p2 = (!ap_const_lv12_978.is_01() || !tmp_499_cast_fu_35315_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_499_cast_fu_35315_p1.read()));
}

void ShuffleNetV2::thread_tmp75_fu_35857_p2() {
    tmp75_fu_35857_p2 = (!ap_const_lv13_F78.is_01() || !tmp_517_cast_fu_35853_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_F78) + sc_bigint<13>(tmp_517_cast_fu_35853_p1.read()));
}

void ShuffleNetV2::thread_tmp76_fu_36070_p2() {
    tmp76_fu_36070_p2 = (!ap_const_lv12_9D8.is_01() || !tmp_511_cast_fu_36061_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_9D8) + sc_bigint<12>(tmp_511_cast_fu_36061_p1.read()));
}

void ShuffleNetV2::thread_tmp77_fu_36241_p2() {
    tmp77_fu_36241_p2 = (!ap_const_lv9_178.is_01() || !tmp_525_cast_cast_fu_36205_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_525_cast_cast_fu_36205_p1.read()));
}

void ShuffleNetV2::thread_tmp78_fu_36419_p2() {
    tmp78_fu_36419_p2 = (!ap_const_lv12_A38.is_01() || !tmp_519_cast_fu_36410_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A38) + sc_bigint<12>(tmp_519_cast_fu_36410_p1.read()));
}

void ShuffleNetV2::thread_tmp79_fu_36618_p2() {
    tmp79_fu_36618_p2 = (!ap_const_lv13_10F8.is_01() || !tmp_534_cast_fu_36614_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_10F8) + sc_bigint<13>(tmp_534_cast_fu_36614_p1.read()));
}

void ShuffleNetV2::thread_tmp7_fu_18988_p2() {
    tmp7_fu_18988_p2 = (!ap_const_lv8_A8.is_01() || !tmp_190_cast_fu_18952_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_190_cast_fu_18952_p1.read()));
}

void ShuffleNetV2::thread_tmp80_fu_36831_p2() {
    tmp80_fu_36831_p2 = (!ap_const_lv12_A98.is_01() || !tmp_528_cast_fu_36822_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A98) + sc_bigint<12>(tmp_528_cast_fu_36822_p1.read()));
}

void ShuffleNetV2::thread_tmp81_fu_37364_p2() {
    tmp81_fu_37364_p2 = (!ap_const_lv13_1278.is_01() || !tmp_546_cast_fu_37360_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1278) + sc_bigint<13>(tmp_546_cast_fu_37360_p1.read()));
}

void ShuffleNetV2::thread_tmp82_fu_37577_p2() {
    tmp82_fu_37577_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_540_cast_fu_37568_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_540_cast_fu_37568_p1.read()));
}

void ShuffleNetV2::thread_tmp83_fu_37748_p2() {
    tmp83_fu_37748_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_554_cast_fu_37712_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_554_cast_fu_37712_p1.read()));
}

void ShuffleNetV2::thread_tmp84_fu_37918_p2() {
    tmp84_fu_37918_p2 = (!ap_const_lv12_B58.is_01() || !tmp_548_cast_fu_37909_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_B58) + sc_bigint<12>(tmp_548_cast_fu_37909_p1.read()));
}

void ShuffleNetV2::thread_tmp85_fu_38117_p2() {
    tmp85_fu_38117_p2 = (!ap_const_lv13_13F8.is_01() || !tmp_563_cast_fu_38113_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_13F8) + sc_bigint<13>(tmp_563_cast_fu_38113_p1.read()));
}

void ShuffleNetV2::thread_tmp86_fu_38330_p2() {
    tmp86_fu_38330_p2 = (!ap_const_lv12_BB8.is_01() || !tmp_557_cast_fu_38321_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_BB8) + sc_bigint<12>(tmp_557_cast_fu_38321_p1.read()));
}

void ShuffleNetV2::thread_tmp8_fu_19154_p2() {
    tmp8_fu_19154_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_184_cast_fu_19145_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_184_cast_fu_19145_p1.read()));
}

void ShuffleNetV2::thread_tmp9_cast_fu_19371_p1() {
    tmp9_cast_fu_19371_p1 = esl_zext<10,9>(tmp9_fu_19365_p2.read());
}

void ShuffleNetV2::thread_tmp9_fu_19365_p2() {
    tmp9_fu_19365_p2 = (!ap_const_lv9_198.is_01() || !tmp_203_cast_fu_19361_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_203_cast_fu_19361_p1.read()));
}

void ShuffleNetV2::thread_tmp_1000_fu_25956_p2() {
    tmp_1000_fu_25956_p2 = (!h_83_cast_cast1_fu_25913_p1.read().is_01() || !tmp_995_reg_43858.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_83_cast_cast1_fu_25913_p1.read()) + sc_biguint<11>(tmp_995_reg_43858.read()));
}

void ShuffleNetV2::thread_tmp_1001_fu_25985_p2() {
    tmp_1001_fu_25985_p2 = (!p_shl473_cast_fu_25969_p1.read().is_01() || !p_shl474_cast_fu_25981_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl473_cast_fu_25969_p1.read()) + sc_biguint<15>(p_shl474_cast_fu_25981_p1.read()));
}

void ShuffleNetV2::thread_tmp_1002_fu_25809_p2() {
    tmp_1002_fu_25809_p2 = (!tmp_997_reg_43822.read().is_01() || !w_81_cast_cast_fu_25805_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_997_reg_43822.read()) + sc_biguint<15>(w_81_cast_cast_fu_25805_p1.read()));
}

void ShuffleNetV2::thread_tmp_1003_fu_26011_p2() {
    tmp_1003_fu_26011_p2 = (!tmp_999_reg_43871.read().is_01() || !w_83_cast_cast_fu_26007_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_999_reg_43871.read()) + sc_biguint<14>(w_83_cast_cast_fu_26007_p1.read()));
}

void ShuffleNetV2::thread_tmp_1004_fu_26016_p2() {
    tmp_1004_fu_26016_p2 = (!tmp_1001_reg_43876.read().is_01() || !w_83_cast_cast1_fu_26003_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1001_reg_43876.read()) + sc_biguint<15>(w_83_cast_cast1_fu_26003_p1.read()));
}

void ShuffleNetV2::thread_tmp_1005_fu_26232_p3() {
    tmp_1005_fu_26232_p3 = esl_concat<11,5>(sum63_reg_43954.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1006_fu_26243_p3() {
    tmp_1006_fu_26243_p3 = esl_concat<11,3>(sum63_reg_43954.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1007_fu_26254_p2() {
    tmp_1007_fu_26254_p2 = (!p_shl475_cast_fu_26239_p1.read().is_01() || !p_shl476_cast_fu_26250_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl475_cast_fu_26239_p1.read()) - sc_biguint<17>(p_shl476_cast_fu_26250_p1.read()));
}

void ShuffleNetV2::thread_tmp_1008_fu_26264_p2() {
    tmp_1008_fu_26264_p2 = (!ci50_cast1_cast_reg_43922.read().is_01() || !tmp_2307_cast_fu_26260_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci50_cast1_cast_reg_43922.read()) + sc_bigint<18>(tmp_2307_cast_fu_26260_p1.read()));
}

void ShuffleNetV2::thread_tmp_1009_fu_26320_p2() {
    tmp_1009_fu_26320_p2 = (!p_shl477_cast_fu_26306_p3.read().is_01() || !p_shl478_cast_fu_26313_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl477_cast_fu_26306_p3.read()) - sc_biguint<8>(p_shl478_cast_fu_26313_p3.read()));
}

void ShuffleNetV2::thread_tmp_1010_fu_26326_p2() {
    tmp_1010_fu_26326_p2 = (!tmp_324_cast_cast_reg_43935.read().is_01() || !tmp_1009_fu_26320_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_324_cast_cast_reg_43935.read()) + sc_biguint<8>(tmp_1009_fu_26320_p2.read()));
}

void ShuffleNetV2::thread_tmp_1011_fu_26585_p3() {
    tmp_1011_fu_26585_p3 = esl_concat<7,2>(tmp_286_fu_26576_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1012_fu_26597_p2() {
    tmp_1012_fu_26597_p2 = (!p_shl479_cast_fu_26593_p1.read().is_01() || !tmp_336_cast_cast_fu_26581_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl479_cast_fu_26593_p1.read()) - sc_bigint<10>(tmp_336_cast_cast_fu_26581_p1.read()));
}

void ShuffleNetV2::thread_tmp_1013_fu_26603_p2() {
    tmp_1013_fu_26603_p2 = (!tmp_1012_fu_26597_p2.read().is_01() || !w84_cast_cast_reg_44049.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1012_fu_26597_p2.read()) + sc_biguint<10>(w84_cast_cast_reg_44049.read()));
}

void ShuffleNetV2::thread_tmp_1014_fu_26624_p2() {
    tmp_1014_fu_26624_p2 = (!tmp_2179_fu_26619_p2.read().is_01() || !tmp_1013_reg_44088.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2179_fu_26619_p2.read()) - sc_biguint<10>(tmp_1013_reg_44088.read()));
}

void ShuffleNetV2::thread_tmp_1015_fu_26629_p2() {
    tmp_1015_fu_26629_p2 = (!tmp_1014_fu_26624_p2.read().is_01() || !h84_cast_cast_reg_44067.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1014_fu_26624_p2.read()) + sc_biguint<10>(h84_cast_cast_reg_44067.read()));
}

void ShuffleNetV2::thread_tmp_1016_fu_26641_p3() {
    tmp_1016_fu_26641_p3 = esl_concat<8,2>(sum29_reg_44094.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1017_fu_26648_p1() {
    tmp_1017_fu_26648_p1 = esl_sext<11,10>(tmp_1016_fu_26641_p3.read());
}

void ShuffleNetV2::thread_tmp_1018_fu_26656_p2() {
    tmp_1018_fu_26656_p2 = (!p_shl481_cast_fu_26652_p1.read().is_01() || !sum29_cast_cast_fu_26637_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl481_cast_fu_26652_p1.read()) - sc_biguint<12>(sum29_cast_cast_fu_26637_p1.read()));
}

void ShuffleNetV2::thread_tmp_1019_fu_26662_p2() {
    tmp_1019_fu_26662_p2 = (!tmp_1018_fu_26656_p2.read().is_01() || !w84_cast_cast1_reg_44044.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1018_fu_26656_p2.read()) + sc_biguint<12>(w84_cast_cast1_reg_44044.read()));
}

void ShuffleNetV2::thread_tmp_1020_fu_26681_p2() {
    tmp_1020_fu_26681_p2 = (!p_shl244_fu_26677_p1.read().is_01() || !tmp_2330_cast_fu_26667_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl244_fu_26677_p1.read()) - sc_bigint<32>(tmp_2330_cast_fu_26667_p1.read()));
}

void ShuffleNetV2::thread_tmp_1021_fu_26687_p2() {
    tmp_1021_fu_26687_p2 = (!tmp_1020_fu_26681_p2.read().is_01() || !h84_cast_reg_44062.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1020_fu_26681_p2.read()) + sc_biguint<32>(h84_cast_reg_44062.read()));
}

void ShuffleNetV2::thread_tmp_1022_fu_27247_p3() {
    tmp_1022_fu_27247_p3 = esl_concat<6,3>(co113_reg_10929.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1023_fu_27259_p3() {
    tmp_1023_fu_27259_p3 = esl_concat<6,1>(co113_reg_10929.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1024_fu_27271_p2() {
    tmp_1024_fu_27271_p2 = (!p_shl484_cast_fu_27267_p1.read().is_01() || !p_shl483_cast_fu_27255_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl484_cast_fu_27267_p1.read()) + sc_biguint<10>(p_shl483_cast_fu_27255_p1.read()));
}

void ShuffleNetV2::thread_tmp_1025_fu_27013_p3() {
    tmp_1025_fu_27013_p3 = esl_concat<11,5>(sum66_reg_44214.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1026_fu_27024_p3() {
    tmp_1026_fu_27024_p3 = esl_concat<11,3>(sum66_reg_44214.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1027_fu_27035_p2() {
    tmp_1027_fu_27035_p2 = (!p_shl485_cast_fu_27020_p1.read().is_01() || !p_shl486_cast_fu_27031_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl485_cast_fu_27020_p1.read()) - sc_biguint<17>(p_shl486_cast_fu_27031_p1.read()));
}

void ShuffleNetV2::thread_tmp_1028_fu_27045_p2() {
    tmp_1028_fu_27045_p2 = (!ci52_cast1_cast_reg_44182.read().is_01() || !tmp_2345_cast_fu_27041_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci52_cast1_cast_reg_44182.read()) + sc_bigint<18>(tmp_2345_cast_fu_27041_p1.read()));
}

void ShuffleNetV2::thread_tmp_1029_fu_27101_p2() {
    tmp_1029_fu_27101_p2 = (!p_shl487_cast_fu_27087_p3.read().is_01() || !p_shl488_cast_fu_27094_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl487_cast_fu_27087_p3.read()) - sc_biguint<8>(p_shl488_cast_fu_27094_p3.read()));
}

void ShuffleNetV2::thread_tmp_1030_fu_27107_p2() {
    tmp_1030_fu_27107_p2 = (!tmp_341_cast_cast_reg_44195.read().is_01() || !tmp_1029_fu_27101_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_341_cast_cast_reg_44195.read()) + sc_biguint<8>(tmp_1029_fu_27101_p2.read()));
}

void ShuffleNetV2::thread_tmp_1031_fu_27366_p3() {
    tmp_1031_fu_27366_p3 = esl_concat<6,3>(co115_reg_10962.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1032_fu_27378_p3() {
    tmp_1032_fu_27378_p3 = esl_concat<6,1>(co115_reg_10962.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1033_fu_27390_p2() {
    tmp_1033_fu_27390_p2 = (!p_shl490_cast_fu_27386_p1.read().is_01() || !p_shl489_cast_fu_27374_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl490_cast_fu_27386_p1.read()) + sc_biguint<10>(p_shl489_cast_fu_27374_p1.read()));
}

void ShuffleNetV2::thread_tmp_1034_fu_27418_p3() {
    tmp_1034_fu_27418_p3 = esl_concat<7,3>(tmp_292_fu_27412_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1035_fu_27430_p3() {
    tmp_1035_fu_27430_p3 = esl_concat<7,1>(tmp_292_fu_27412_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1036_fu_27442_p2() {
    tmp_1036_fu_27442_p2 = (!p_shl492_cast_fu_27438_p1.read().is_01() || !p_shl491_cast_fu_27426_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl492_cast_fu_27438_p1.read()) + sc_biguint<11>(p_shl491_cast_fu_27426_p1.read()));
}

void ShuffleNetV2::thread_tmp_1037_fu_27305_p2() {
    tmp_1037_fu_27305_p2 = (!h_87_cast_cast_fu_27301_p1.read().is_01() || !tmp_1024_reg_44286.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_87_cast_cast_fu_27301_p1.read()) + sc_biguint<10>(tmp_1024_reg_44286.read()));
}

void ShuffleNetV2::thread_tmp_1038_fu_27334_p2() {
    tmp_1038_fu_27334_p2 = (!p_shl493_cast_fu_27318_p1.read().is_01() || !p_shl494_cast_fu_27330_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl493_cast_fu_27318_p1.read()) + sc_biguint<15>(p_shl494_cast_fu_27330_p1.read()));
}

void ShuffleNetV2::thread_tmp_1039_fu_27468_p2() {
    tmp_1039_fu_27468_p2 = (!h_89_cast_cast_fu_27464_p1.read().is_01() || !tmp_1033_reg_44330.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_89_cast_cast_fu_27464_p1.read()) + sc_biguint<10>(tmp_1033_reg_44330.read()));
}

void ShuffleNetV2::thread_tmp_1040_fu_27497_p2() {
    tmp_1040_fu_27497_p2 = (!p_shl495_cast_fu_27481_p1.read().is_01() || !p_shl496_cast_fu_27493_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl495_cast_fu_27481_p1.read()) + sc_biguint<14>(p_shl496_cast_fu_27493_p1.read()));
}

void ShuffleNetV2::thread_tmp_1041_fu_27503_p2() {
    tmp_1041_fu_27503_p2 = (!h_89_cast_cast1_fu_27460_p1.read().is_01() || !tmp_1036_reg_44343.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_89_cast_cast1_fu_27460_p1.read()) + sc_biguint<11>(tmp_1036_reg_44343.read()));
}

void ShuffleNetV2::thread_tmp_1042_fu_27532_p2() {
    tmp_1042_fu_27532_p2 = (!p_shl497_cast_fu_27516_p1.read().is_01() || !p_shl498_cast_fu_27528_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl497_cast_fu_27516_p1.read()) + sc_biguint<15>(p_shl498_cast_fu_27528_p1.read()));
}

void ShuffleNetV2::thread_tmp_1043_fu_27356_p2() {
    tmp_1043_fu_27356_p2 = (!tmp_1038_reg_44307.read().is_01() || !w_87_cast_cast_fu_27352_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1038_reg_44307.read()) + sc_biguint<15>(w_87_cast_cast_fu_27352_p1.read()));
}

void ShuffleNetV2::thread_tmp_1044_fu_27558_p2() {
    tmp_1044_fu_27558_p2 = (!tmp_1040_reg_44356.read().is_01() || !w_89_cast_cast_fu_27554_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1040_reg_44356.read()) + sc_biguint<14>(w_89_cast_cast_fu_27554_p1.read()));
}

void ShuffleNetV2::thread_tmp_1045_fu_27563_p2() {
    tmp_1045_fu_27563_p2 = (!tmp_1042_reg_44361.read().is_01() || !w_89_cast_cast1_fu_27550_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1042_reg_44361.read()) + sc_biguint<15>(w_89_cast_cast1_fu_27550_p1.read()));
}

void ShuffleNetV2::thread_tmp_1046_fu_27779_p3() {
    tmp_1046_fu_27779_p3 = esl_concat<11,5>(sum68_reg_44439.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1047_fu_27790_p3() {
    tmp_1047_fu_27790_p3 = esl_concat<11,3>(sum68_reg_44439.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1048_fu_27801_p2() {
    tmp_1048_fu_27801_p2 = (!p_shl499_cast_fu_27786_p1.read().is_01() || !p_shl500_cast_fu_27797_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl499_cast_fu_27786_p1.read()) - sc_biguint<17>(p_shl500_cast_fu_27797_p1.read()));
}

void ShuffleNetV2::thread_tmp_1049_fu_27811_p2() {
    tmp_1049_fu_27811_p2 = (!ci54_cast1_cast_reg_44407.read().is_01() || !tmp_2384_cast_fu_27807_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci54_cast1_cast_reg_44407.read()) + sc_bigint<18>(tmp_2384_cast_fu_27807_p1.read()));
}

void ShuffleNetV2::thread_tmp_1050_fu_27867_p2() {
    tmp_1050_fu_27867_p2 = (!p_shl501_cast_fu_27853_p3.read().is_01() || !p_shl502_cast_fu_27860_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl501_cast_fu_27853_p3.read()) - sc_biguint<8>(p_shl502_cast_fu_27860_p3.read()));
}

void ShuffleNetV2::thread_tmp_1051_fu_27873_p2() {
    tmp_1051_fu_27873_p2 = (!tmp_353_cast_cast_reg_44420.read().is_01() || !tmp_1050_fu_27867_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_353_cast_cast_reg_44420.read()) + sc_biguint<8>(tmp_1050_fu_27867_p2.read()));
}

void ShuffleNetV2::thread_tmp_1052_fu_28132_p3() {
    tmp_1052_fu_28132_p3 = esl_concat<7,2>(tmp_305_fu_28123_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1053_fu_28144_p2() {
    tmp_1053_fu_28144_p2 = (!p_shl503_cast_fu_28140_p1.read().is_01() || !tmp_365_cast_cast_fu_28128_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl503_cast_fu_28140_p1.read()) - sc_bigint<10>(tmp_365_cast_cast_fu_28128_p1.read()));
}

void ShuffleNetV2::thread_tmp_1054_fu_28150_p2() {
    tmp_1054_fu_28150_p2 = (!tmp_1053_fu_28144_p2.read().is_01() || !w90_cast_cast_reg_44534.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1053_fu_28144_p2.read()) + sc_biguint<10>(w90_cast_cast_reg_44534.read()));
}

void ShuffleNetV2::thread_tmp_1055_fu_28171_p2() {
    tmp_1055_fu_28171_p2 = (!tmp_2203_fu_28166_p2.read().is_01() || !tmp_1054_reg_44573.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2203_fu_28166_p2.read()) - sc_biguint<10>(tmp_1054_reg_44573.read()));
}

void ShuffleNetV2::thread_tmp_1056_fu_28176_p2() {
    tmp_1056_fu_28176_p2 = (!tmp_1055_fu_28171_p2.read().is_01() || !h90_cast_cast_reg_44552.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1055_fu_28171_p2.read()) + sc_biguint<10>(h90_cast_cast_reg_44552.read()));
}

void ShuffleNetV2::thread_tmp_1057_fu_28188_p3() {
    tmp_1057_fu_28188_p3 = esl_concat<8,2>(sum31_reg_44579.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1058_fu_28195_p1() {
    tmp_1058_fu_28195_p1 = esl_sext<11,10>(tmp_1057_fu_28188_p3.read());
}

void ShuffleNetV2::thread_tmp_1059_fu_28203_p2() {
    tmp_1059_fu_28203_p2 = (!p_shl505_cast_fu_28199_p1.read().is_01() || !sum31_cast_cast_fu_28184_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl505_cast_fu_28199_p1.read()) - sc_biguint<12>(sum31_cast_cast_fu_28184_p1.read()));
}

void ShuffleNetV2::thread_tmp_1060_fu_28213_p2() {
    tmp_1060_fu_28213_p2 = (!tmp_2406_cast_fu_28209_p1.read().is_01() || !w90_cast_cast1_reg_44529.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_2406_cast_fu_28209_p1.read()) + sc_biguint<13>(w90_cast_cast1_reg_44529.read()));
}

void ShuffleNetV2::thread_tmp_1061_fu_28232_p2() {
    tmp_1061_fu_28232_p2 = (!p_shl249_fu_28228_p1.read().is_01() || !tmp_2407_cast_fu_28218_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl249_fu_28228_p1.read()) - sc_bigint<32>(tmp_2407_cast_fu_28218_p1.read()));
}

void ShuffleNetV2::thread_tmp_1062_fu_28238_p2() {
    tmp_1062_fu_28238_p2 = (!tmp_1061_fu_28232_p2.read().is_01() || !h90_cast_reg_44547.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1061_fu_28232_p2.read()) + sc_biguint<32>(h90_cast_reg_44547.read()));
}

void ShuffleNetV2::thread_tmp_1063_fu_28798_p3() {
    tmp_1063_fu_28798_p3 = esl_concat<6,3>(co123_reg_11171.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1064_fu_28810_p3() {
    tmp_1064_fu_28810_p3 = esl_concat<6,1>(co123_reg_11171.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1065_fu_28822_p2() {
    tmp_1065_fu_28822_p2 = (!p_shl508_cast_fu_28818_p1.read().is_01() || !p_shl507_cast_fu_28806_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl508_cast_fu_28818_p1.read()) + sc_biguint<10>(p_shl507_cast_fu_28806_p1.read()));
}

void ShuffleNetV2::thread_tmp_1066_fu_28564_p3() {
    tmp_1066_fu_28564_p3 = esl_concat<11,5>(sum71_reg_44699.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1067_fu_28575_p3() {
    tmp_1067_fu_28575_p3 = esl_concat<11,3>(sum71_reg_44699.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1068_fu_28586_p2() {
    tmp_1068_fu_28586_p2 = (!p_shl509_cast_fu_28571_p1.read().is_01() || !p_shl510_cast_fu_28582_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl509_cast_fu_28571_p1.read()) - sc_biguint<17>(p_shl510_cast_fu_28582_p1.read()));
}

void ShuffleNetV2::thread_tmp_1069_fu_28596_p2() {
    tmp_1069_fu_28596_p2 = (!ci56_cast1_cast_reg_44667.read().is_01() || !tmp_2422_cast_fu_28592_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci56_cast1_cast_reg_44667.read()) + sc_bigint<18>(tmp_2422_cast_fu_28592_p1.read()));
}

void ShuffleNetV2::thread_tmp_1070_fu_28652_p2() {
    tmp_1070_fu_28652_p2 = (!p_shl511_cast_fu_28638_p3.read().is_01() || !p_shl512_cast_fu_28645_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl511_cast_fu_28638_p3.read()) - sc_biguint<8>(p_shl512_cast_fu_28645_p3.read()));
}

void ShuffleNetV2::thread_tmp_1071_fu_28658_p2() {
    tmp_1071_fu_28658_p2 = (!tmp_370_cast_cast_reg_44680.read().is_01() || !tmp_1070_fu_28652_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_370_cast_cast_reg_44680.read()) + sc_biguint<8>(tmp_1070_fu_28652_p2.read()));
}

void ShuffleNetV2::thread_tmp_1072_fu_28917_p3() {
    tmp_1072_fu_28917_p3 = esl_concat<6,3>(co125_reg_11204.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1073_fu_28929_p3() {
    tmp_1073_fu_28929_p3 = esl_concat<6,1>(co125_reg_11204.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1074_fu_28941_p2() {
    tmp_1074_fu_28941_p2 = (!p_shl514_cast_fu_28937_p1.read().is_01() || !p_shl513_cast_fu_28925_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl514_cast_fu_28937_p1.read()) + sc_biguint<10>(p_shl513_cast_fu_28925_p1.read()));
}

void ShuffleNetV2::thread_tmp_1075_fu_28969_p3() {
    tmp_1075_fu_28969_p3 = esl_concat<7,3>(tmp_311_fu_28963_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1076_fu_28981_p3() {
    tmp_1076_fu_28981_p3 = esl_concat<7,1>(tmp_311_fu_28963_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1077_fu_28993_p2() {
    tmp_1077_fu_28993_p2 = (!p_shl516_cast_fu_28989_p1.read().is_01() || !p_shl515_cast_fu_28977_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl516_cast_fu_28989_p1.read()) + sc_biguint<11>(p_shl515_cast_fu_28977_p1.read()));
}

void ShuffleNetV2::thread_tmp_1078_fu_28856_p2() {
    tmp_1078_fu_28856_p2 = (!h_93_cast_cast_fu_28852_p1.read().is_01() || !tmp_1065_reg_44771.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_93_cast_cast_fu_28852_p1.read()) + sc_biguint<10>(tmp_1065_reg_44771.read()));
}

void ShuffleNetV2::thread_tmp_1079_fu_28885_p2() {
    tmp_1079_fu_28885_p2 = (!p_shl517_cast_fu_28869_p1.read().is_01() || !p_shl518_cast_fu_28881_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl517_cast_fu_28869_p1.read()) + sc_biguint<15>(p_shl518_cast_fu_28881_p1.read()));
}

void ShuffleNetV2::thread_tmp_1080_fu_29019_p2() {
    tmp_1080_fu_29019_p2 = (!h_95_cast_cast_fu_29015_p1.read().is_01() || !tmp_1074_reg_44815.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_95_cast_cast_fu_29015_p1.read()) + sc_biguint<10>(tmp_1074_reg_44815.read()));
}

void ShuffleNetV2::thread_tmp_1081_fu_29048_p2() {
    tmp_1081_fu_29048_p2 = (!p_shl519_cast_fu_29032_p1.read().is_01() || !p_shl520_cast_fu_29044_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl519_cast_fu_29032_p1.read()) + sc_biguint<14>(p_shl520_cast_fu_29044_p1.read()));
}

void ShuffleNetV2::thread_tmp_1082_fu_29054_p2() {
    tmp_1082_fu_29054_p2 = (!h_95_cast_cast1_fu_29011_p1.read().is_01() || !tmp_1077_reg_44828.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_95_cast_cast1_fu_29011_p1.read()) + sc_biguint<11>(tmp_1077_reg_44828.read()));
}

void ShuffleNetV2::thread_tmp_1083_fu_29083_p2() {
    tmp_1083_fu_29083_p2 = (!p_shl521_cast_fu_29067_p1.read().is_01() || !p_shl522_cast_fu_29079_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl521_cast_fu_29067_p1.read()) + sc_biguint<15>(p_shl522_cast_fu_29079_p1.read()));
}

void ShuffleNetV2::thread_tmp_1084_fu_28907_p2() {
    tmp_1084_fu_28907_p2 = (!tmp_1079_reg_44792.read().is_01() || !w_93_cast_cast_fu_28903_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1079_reg_44792.read()) + sc_biguint<15>(w_93_cast_cast_fu_28903_p1.read()));
}

void ShuffleNetV2::thread_tmp_1085_fu_29109_p2() {
    tmp_1085_fu_29109_p2 = (!tmp_1081_reg_44841.read().is_01() || !w_95_cast_cast_fu_29105_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1081_reg_44841.read()) + sc_biguint<14>(w_95_cast_cast_fu_29105_p1.read()));
}

void ShuffleNetV2::thread_tmp_1086_fu_29114_p2() {
    tmp_1086_fu_29114_p2 = (!tmp_1083_reg_44846.read().is_01() || !w_95_cast_cast1_fu_29101_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1083_reg_44846.read()) + sc_biguint<15>(w_95_cast_cast1_fu_29101_p1.read()));
}

void ShuffleNetV2::thread_tmp_1087_fu_29330_p3() {
    tmp_1087_fu_29330_p3 = esl_concat<10,5>(sum73_reg_44924.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1088_fu_29337_p1() {
    tmp_1088_fu_29337_p1 = esl_sext<16,15>(tmp_1087_fu_29330_p3.read());
}

void ShuffleNetV2::thread_tmp_1089_fu_29345_p3() {
    tmp_1089_fu_29345_p3 = esl_concat<10,3>(sum73_reg_44924.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1090_fu_29352_p1() {
    tmp_1090_fu_29352_p1 = esl_sext<14,13>(tmp_1089_fu_29345_p3.read());
}

void ShuffleNetV2::thread_tmp_1091_fu_29360_p2() {
    tmp_1091_fu_29360_p2 = (!p_shl523_cast_fu_29341_p1.read().is_01() || !p_shl524_cast_fu_29356_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl523_cast_fu_29341_p1.read()) - sc_biguint<17>(p_shl524_cast_fu_29356_p1.read()));
}

void ShuffleNetV2::thread_tmp_1092_fu_29370_p2() {
    tmp_1092_fu_29370_p2 = (!tmp_2463_cast_fu_29366_p1.read().is_01() || !ci58_cast1_cast_reg_44892.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp_2463_cast_fu_29366_p1.read()) + sc_biguint<18>(ci58_cast1_cast_reg_44892.read()));
}

void ShuffleNetV2::thread_tmp_1093_fu_29426_p2() {
    tmp_1093_fu_29426_p2 = (!p_shl525_cast_fu_29412_p3.read().is_01() || !p_shl526_cast_fu_29419_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl525_cast_fu_29412_p3.read()) - sc_biguint<8>(p_shl526_cast_fu_29419_p3.read()));
}

void ShuffleNetV2::thread_tmp_1094_fu_29432_p2() {
    tmp_1094_fu_29432_p2 = (!tmp_1093_fu_29426_p2.read().is_01() || !tmp_382_cast_cast_reg_44905.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1093_fu_29426_p2.read()) + sc_bigint<8>(tmp_382_cast_cast_reg_44905.read()));
}

void ShuffleNetV2::thread_tmp_1095_fu_29691_p3() {
    tmp_1095_fu_29691_p3 = esl_concat<7,2>(tmp_324_fu_29682_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1096_fu_29703_p2() {
    tmp_1096_fu_29703_p2 = (!p_shl527_cast_fu_29699_p1.read().is_01() || !tmp_394_cast_cast_fu_29687_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl527_cast_fu_29699_p1.read()) - sc_bigint<10>(tmp_394_cast_cast_fu_29687_p1.read()));
}

void ShuffleNetV2::thread_tmp_1097_fu_29709_p2() {
    tmp_1097_fu_29709_p2 = (!w96_cast_cast_reg_45019.read().is_01() || !tmp_1096_fu_29703_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w96_cast_cast_reg_45019.read()) + sc_biguint<10>(tmp_1096_fu_29703_p2.read()));
}

void ShuffleNetV2::thread_tmp_1098_fu_29730_p2() {
    tmp_1098_fu_29730_p2 = (!tmp_2227_fu_29725_p2.read().is_01() || !tmp_1097_reg_45058.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2227_fu_29725_p2.read()) - sc_biguint<10>(tmp_1097_reg_45058.read()));
}

void ShuffleNetV2::thread_tmp_1099_fu_29735_p2() {
    tmp_1099_fu_29735_p2 = (!h96_cast_cast_reg_45037.read().is_01() || !tmp_1098_fu_29730_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h96_cast_cast_reg_45037.read()) + sc_biguint<10>(tmp_1098_fu_29730_p2.read()));
}

void ShuffleNetV2::thread_tmp_1100_fu_29743_p3() {
    tmp_1100_fu_29743_p3 = esl_concat<10,2>(sum33_reg_45064.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1101_fu_29754_p2() {
    tmp_1101_fu_29754_p2 = (!p_shl529_cast_fu_29750_p1.read().is_01() || !sum33_cast_cast_fu_29740_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl529_cast_fu_29750_p1.read()) - sc_biguint<13>(sum33_cast_cast_fu_29740_p1.read()));
}

void ShuffleNetV2::thread_tmp_1102_fu_29764_p2() {
    tmp_1102_fu_29764_p2 = (!w96_cast_cast1_reg_45014.read().is_01() || !tmp_2484_cast_fu_29760_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(w96_cast_cast1_reg_45014.read()) + sc_bigint<14>(tmp_2484_cast_fu_29760_p1.read()));
}

void ShuffleNetV2::thread_tmp_1103_fu_29783_p2() {
    tmp_1103_fu_29783_p2 = (!p_shl255_fu_29779_p1.read().is_01() || !tmp_2485_cast_fu_29769_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl255_fu_29779_p1.read()) - sc_bigint<32>(tmp_2485_cast_fu_29769_p1.read()));
}

void ShuffleNetV2::thread_tmp_1104_fu_29789_p2() {
    tmp_1104_fu_29789_p2 = (!h96_cast_reg_45032.read().is_01() || !tmp_1103_fu_29783_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h96_cast_reg_45032.read()) + sc_biguint<32>(tmp_1103_fu_29783_p2.read()));
}

void ShuffleNetV2::thread_tmp_1105_fu_30361_p3() {
    tmp_1105_fu_30361_p3 = esl_concat<6,3>(co133_reg_11413.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1106_fu_30373_p3() {
    tmp_1106_fu_30373_p3 = esl_concat<6,1>(co133_reg_11413.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1107_fu_30385_p2() {
    tmp_1107_fu_30385_p2 = (!p_shl532_cast_fu_30381_p1.read().is_01() || !p_shl531_cast_fu_30369_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl532_cast_fu_30381_p1.read()) + sc_biguint<10>(p_shl531_cast_fu_30369_p1.read()));
}

void ShuffleNetV2::thread_tmp_1108_fu_30115_p3() {
    tmp_1108_fu_30115_p3 = esl_concat<10,5>(sum76_reg_45184.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1109_fu_30122_p1() {
    tmp_1109_fu_30122_p1 = esl_sext<16,15>(tmp_1108_fu_30115_p3.read());
}

void ShuffleNetV2::thread_tmp_1110_fu_30130_p3() {
    tmp_1110_fu_30130_p3 = esl_concat<10,3>(sum76_reg_45184.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1111_fu_30137_p1() {
    tmp_1111_fu_30137_p1 = esl_sext<14,13>(tmp_1110_fu_30130_p3.read());
}

void ShuffleNetV2::thread_tmp_1112_fu_30145_p2() {
    tmp_1112_fu_30145_p2 = (!p_shl533_cast_fu_30126_p1.read().is_01() || !p_shl534_cast_fu_30141_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl533_cast_fu_30126_p1.read()) - sc_biguint<17>(p_shl534_cast_fu_30141_p1.read()));
}

void ShuffleNetV2::thread_tmp_1113_fu_30155_p2() {
    tmp_1113_fu_30155_p2 = (!tmp_2502_cast_fu_30151_p1.read().is_01() || !ci60_cast1_cast_reg_45152.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp_2502_cast_fu_30151_p1.read()) + sc_biguint<18>(ci60_cast1_cast_reg_45152.read()));
}

void ShuffleNetV2::thread_tmp_1114_fu_30211_p2() {
    tmp_1114_fu_30211_p2 = (!p_shl535_cast_fu_30197_p3.read().is_01() || !p_shl536_cast_fu_30204_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl535_cast_fu_30197_p3.read()) - sc_biguint<8>(p_shl536_cast_fu_30204_p3.read()));
}

void ShuffleNetV2::thread_tmp_1115_fu_30217_p2() {
    tmp_1115_fu_30217_p2 = (!tmp_1114_fu_30211_p2.read().is_01() || !tmp_399_cast_cast_reg_45165.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1114_fu_30211_p2.read()) + sc_bigint<8>(tmp_399_cast_cast_reg_45165.read()));
}

void ShuffleNetV2::thread_tmp_1116_fu_30480_p3() {
    tmp_1116_fu_30480_p3 = esl_concat<6,3>(co135_reg_11446.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1117_fu_30492_p3() {
    tmp_1117_fu_30492_p3 = esl_concat<6,1>(co135_reg_11446.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1118_fu_30504_p2() {
    tmp_1118_fu_30504_p2 = (!p_shl538_cast_fu_30500_p1.read().is_01() || !p_shl537_cast_fu_30488_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl538_cast_fu_30500_p1.read()) + sc_biguint<10>(p_shl537_cast_fu_30488_p1.read()));
}

void ShuffleNetV2::thread_tmp_1119_fu_30532_p3() {
    tmp_1119_fu_30532_p3 = esl_concat<7,3>(tmp_330_fu_30526_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1120_fu_30544_p3() {
    tmp_1120_fu_30544_p3 = esl_concat<7,1>(tmp_330_fu_30526_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1121_fu_30556_p2() {
    tmp_1121_fu_30556_p2 = (!p_shl540_cast_fu_30552_p1.read().is_01() || !p_shl539_cast_fu_30540_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl540_cast_fu_30552_p1.read()) + sc_biguint<11>(p_shl539_cast_fu_30540_p1.read()));
}

void ShuffleNetV2::thread_tmp_1122_fu_30419_p2() {
    tmp_1122_fu_30419_p2 = (!h_99_cast_cast_fu_30415_p1.read().is_01() || !tmp_1107_reg_45256.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_99_cast_cast_fu_30415_p1.read()) + sc_biguint<10>(tmp_1107_reg_45256.read()));
}

void ShuffleNetV2::thread_tmp_1123_fu_30448_p2() {
    tmp_1123_fu_30448_p2 = (!p_shl541_cast_fu_30432_p1.read().is_01() || !p_shl542_cast_fu_30444_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl541_cast_fu_30432_p1.read()) + sc_biguint<15>(p_shl542_cast_fu_30444_p1.read()));
}

void ShuffleNetV2::thread_tmp_1124_fu_30582_p2() {
    tmp_1124_fu_30582_p2 = (!h_101_cast_cast_fu_30578_p1.read().is_01() || !tmp_1118_reg_45300.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_101_cast_cast_fu_30578_p1.read()) + sc_biguint<10>(tmp_1118_reg_45300.read()));
}

void ShuffleNetV2::thread_tmp_1125_fu_30611_p2() {
    tmp_1125_fu_30611_p2 = (!p_shl543_cast_fu_30595_p1.read().is_01() || !p_shl544_cast_fu_30607_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl543_cast_fu_30595_p1.read()) + sc_biguint<14>(p_shl544_cast_fu_30607_p1.read()));
}

void ShuffleNetV2::thread_tmp_1126_fu_30617_p2() {
    tmp_1126_fu_30617_p2 = (!h_101_cast_cast1_fu_30574_p1.read().is_01() || !tmp_1121_reg_45313.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_101_cast_cast1_fu_30574_p1.read()) + sc_biguint<11>(tmp_1121_reg_45313.read()));
}

void ShuffleNetV2::thread_tmp_1127_fu_30646_p2() {
    tmp_1127_fu_30646_p2 = (!p_shl545_cast_fu_30630_p1.read().is_01() || !p_shl546_cast_fu_30642_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl545_cast_fu_30630_p1.read()) + sc_biguint<15>(p_shl546_cast_fu_30642_p1.read()));
}

void ShuffleNetV2::thread_tmp_1128_fu_30470_p2() {
    tmp_1128_fu_30470_p2 = (!tmp_1123_reg_45277.read().is_01() || !w_99_cast_cast_fu_30466_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1123_reg_45277.read()) + sc_biguint<15>(w_99_cast_cast_fu_30466_p1.read()));
}

void ShuffleNetV2::thread_tmp_1129_fu_30672_p2() {
    tmp_1129_fu_30672_p2 = (!tmp_1125_reg_45326.read().is_01() || !w_101_cast_cast_fu_30668_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1125_reg_45326.read()) + sc_biguint<14>(w_101_cast_cast_fu_30668_p1.read()));
}

void ShuffleNetV2::thread_tmp_1130_fu_30677_p2() {
    tmp_1130_fu_30677_p2 = (!tmp_1127_reg_45331.read().is_01() || !w_101_cast_cast1_fu_30664_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1127_reg_45331.read()) + sc_biguint<15>(w_101_cast_cast1_fu_30664_p1.read()));
}

void ShuffleNetV2::thread_tmp_1131_fu_30893_p3() {
    tmp_1131_fu_30893_p3 = esl_concat<9,5>(sum78_reg_45409.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1132_fu_30900_p1() {
    tmp_1132_fu_30900_p1 = esl_sext<16,14>(tmp_1131_fu_30893_p3.read());
}

void ShuffleNetV2::thread_tmp_1133_fu_30908_p3() {
    tmp_1133_fu_30908_p3 = esl_concat<9,3>(sum78_reg_45409.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1134_fu_30915_p1() {
    tmp_1134_fu_30915_p1 = esl_sext<14,12>(tmp_1133_fu_30908_p3.read());
}

void ShuffleNetV2::thread_tmp_1135_fu_30923_p2() {
    tmp_1135_fu_30923_p2 = (!p_shl547_cast_fu_30904_p1.read().is_01() || !p_shl548_cast_fu_30919_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl547_cast_fu_30904_p1.read()) - sc_biguint<17>(p_shl548_cast_fu_30919_p1.read()));
}

void ShuffleNetV2::thread_tmp_1136_fu_30933_p2() {
    tmp_1136_fu_30933_p2 = (!tmp_2543_cast_fu_30929_p1.read().is_01() || !ci62_cast1_cast_reg_45377.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp_2543_cast_fu_30929_p1.read()) + sc_biguint<18>(ci62_cast1_cast_reg_45377.read()));
}

void ShuffleNetV2::thread_tmp_1137_fu_30989_p2() {
    tmp_1137_fu_30989_p2 = (!p_shl549_cast_fu_30975_p3.read().is_01() || !p_shl550_cast_fu_30982_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl549_cast_fu_30975_p3.read()) - sc_biguint<8>(p_shl550_cast_fu_30982_p3.read()));
}

void ShuffleNetV2::thread_tmp_1138_fu_30995_p2() {
    tmp_1138_fu_30995_p2 = (!tmp_1137_fu_30989_p2.read().is_01() || !tmp_411_cast_cast_reg_45390.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1137_fu_30989_p2.read()) + sc_bigint<8>(tmp_411_cast_cast_reg_45390.read()));
}

void ShuffleNetV2::thread_tmp_1139_fu_31258_p3() {
    tmp_1139_fu_31258_p3 = esl_concat<7,2>(tmp_343_fu_31249_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1140_fu_31270_p2() {
    tmp_1140_fu_31270_p2 = (!p_shl551_cast_fu_31266_p1.read().is_01() || !tmp_423_cast_cast_fu_31254_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl551_cast_fu_31266_p1.read()) - sc_bigint<10>(tmp_423_cast_cast_fu_31254_p1.read()));
}

void ShuffleNetV2::thread_tmp_1141_fu_31276_p2() {
    tmp_1141_fu_31276_p2 = (!w102_cast_cast_reg_45504.read().is_01() || !tmp_1140_fu_31270_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w102_cast_cast_reg_45504.read()) + sc_biguint<10>(tmp_1140_fu_31270_p2.read()));
}

void ShuffleNetV2::thread_tmp_1142_fu_31297_p2() {
    tmp_1142_fu_31297_p2 = (!tmp_2251_fu_31292_p2.read().is_01() || !tmp_1141_reg_45543.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2251_fu_31292_p2.read()) - sc_biguint<10>(tmp_1141_reg_45543.read()));
}

void ShuffleNetV2::thread_tmp_1143_fu_31302_p2() {
    tmp_1143_fu_31302_p2 = (!h102_cast_cast_reg_45522.read().is_01() || !tmp_1142_fu_31297_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h102_cast_cast_reg_45522.read()) + sc_biguint<10>(tmp_1142_fu_31297_p2.read()));
}

void ShuffleNetV2::thread_tmp_1144_fu_31310_p3() {
    tmp_1144_fu_31310_p3 = esl_concat<10,2>(sum35_reg_45549.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1145_fu_31321_p2() {
    tmp_1145_fu_31321_p2 = (!p_shl553_cast_fu_31317_p1.read().is_01() || !sum35_cast_cast_fu_31307_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl553_cast_fu_31317_p1.read()) - sc_biguint<13>(sum35_cast_cast_fu_31307_p1.read()));
}

void ShuffleNetV2::thread_tmp_1146_fu_31327_p2() {
    tmp_1146_fu_31327_p2 = (!w102_cast_cast1_reg_45499.read().is_01() || !tmp_1145_fu_31321_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w102_cast_cast1_reg_45499.read()) + sc_biguint<13>(tmp_1145_fu_31321_p2.read()));
}

void ShuffleNetV2::thread_tmp_1147_fu_31346_p2() {
    tmp_1147_fu_31346_p2 = (!p_shl258_fu_31342_p1.read().is_01() || !tmp_2565_cast_fu_31332_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl258_fu_31342_p1.read()) - sc_bigint<32>(tmp_2565_cast_fu_31332_p1.read()));
}

void ShuffleNetV2::thread_tmp_1148_fu_31352_p2() {
    tmp_1148_fu_31352_p2 = (!h102_cast_reg_45517.read().is_01() || !tmp_1147_fu_31346_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h102_cast_reg_45517.read()) + sc_biguint<32>(tmp_1147_fu_31346_p2.read()));
}

void ShuffleNetV2::thread_tmp_1149_fu_31928_p3() {
    tmp_1149_fu_31928_p3 = esl_concat<6,3>(co143_reg_11655.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1150_fu_31940_p3() {
    tmp_1150_fu_31940_p3 = esl_concat<6,1>(co143_reg_11655.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1151_fu_31952_p2() {
    tmp_1151_fu_31952_p2 = (!p_shl556_cast_fu_31948_p1.read().is_01() || !p_shl555_cast_fu_31936_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl556_cast_fu_31948_p1.read()) + sc_biguint<10>(p_shl555_cast_fu_31936_p1.read()));
}

void ShuffleNetV2::thread_tmp_1152_fu_31690_p3() {
    tmp_1152_fu_31690_p3 = esl_concat<12,5>(sum81_reg_45669.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1153_fu_31701_p3() {
    tmp_1153_fu_31701_p3 = esl_concat<12,3>(sum81_reg_45669.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1154_fu_31712_p2() {
    tmp_1154_fu_31712_p2 = (!p_shl557_cast_fu_31697_p1.read().is_01() || !p_shl558_cast_fu_31708_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl557_cast_fu_31697_p1.read()) - sc_biguint<18>(p_shl558_cast_fu_31708_p1.read()));
}

void ShuffleNetV2::thread_tmp_1155_fu_31722_p2() {
    tmp_1155_fu_31722_p2 = (!ci64_cast1_cast_reg_45637.read().is_01() || !tmp_2580_cast_fu_31718_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci64_cast1_cast_reg_45637.read()) + sc_bigint<19>(tmp_2580_cast_fu_31718_p1.read()));
}

void ShuffleNetV2::thread_tmp_1156_fu_31778_p2() {
    tmp_1156_fu_31778_p2 = (!p_shl559_cast_fu_31764_p3.read().is_01() || !p_shl560_cast_fu_31771_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl559_cast_fu_31764_p3.read()) - sc_biguint<8>(p_shl560_cast_fu_31771_p3.read()));
}

void ShuffleNetV2::thread_tmp_1157_fu_31784_p2() {
    tmp_1157_fu_31784_p2 = (!tmp_428_cast_cast_reg_45650.read().is_01() || !tmp_1156_fu_31778_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_428_cast_cast_reg_45650.read()) + sc_biguint<8>(tmp_1156_fu_31778_p2.read()));
}

void ShuffleNetV2::thread_tmp_1158_fu_31986_p2() {
    tmp_1158_fu_31986_p2 = (!h_105_cast_cast_fu_31982_p1.read().is_01() || !tmp_1151_reg_45741.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_105_cast_cast_fu_31982_p1.read()) + sc_biguint<10>(tmp_1151_reg_45741.read()));
}

void ShuffleNetV2::thread_tmp_1159_fu_32015_p2() {
    tmp_1159_fu_32015_p2 = (!p_shl561_cast_fu_31999_p1.read().is_01() || !p_shl562_cast_fu_32011_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl561_cast_fu_31999_p1.read()) + sc_biguint<15>(p_shl562_cast_fu_32011_p1.read()));
}

void ShuffleNetV2::thread_tmp_1160_fu_32037_p2() {
    tmp_1160_fu_32037_p2 = (!tmp_1159_reg_45762.read().is_01() || !w_105_cast_cast_fu_32033_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1159_reg_45762.read()) + sc_biguint<15>(w_105_cast_cast_fu_32033_p1.read()));
}

void ShuffleNetV2::thread_tmp_1161_fu_32237_p3() {
    tmp_1161_fu_32237_p3 = esl_concat<12,5>(sum83_reg_45840.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1162_fu_32248_p3() {
    tmp_1162_fu_32248_p3 = esl_concat<12,3>(sum83_reg_45840.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1163_fu_32259_p2() {
    tmp_1163_fu_32259_p2 = (!p_shl563_cast_fu_32244_p1.read().is_01() || !p_shl564_cast_fu_32255_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl563_cast_fu_32244_p1.read()) - sc_biguint<18>(p_shl564_cast_fu_32255_p1.read()));
}

void ShuffleNetV2::thread_tmp_1164_fu_32269_p2() {
    tmp_1164_fu_32269_p2 = (!ci66_cast1_cast_reg_45808.read().is_01() || !tmp_2602_cast_fu_32265_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci66_cast1_cast_reg_45808.read()) + sc_bigint<19>(tmp_2602_cast_fu_32265_p1.read()));
}

void ShuffleNetV2::thread_tmp_1165_fu_32325_p2() {
    tmp_1165_fu_32325_p2 = (!p_shl565_cast_fu_32311_p3.read().is_01() || !p_shl566_cast_fu_32318_p3.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl565_cast_fu_32311_p3.read()) - sc_biguint<11>(p_shl566_cast_fu_32318_p3.read()));
}

void ShuffleNetV2::thread_tmp_1166_fu_32331_p2() {
    tmp_1166_fu_32331_p2 = (!tmp_439_cast_cast_reg_45821.read().is_01() || !tmp_1165_fu_32325_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_439_cast_cast_reg_45821.read()) + sc_biguint<11>(tmp_1165_fu_32325_p2.read()));
}

void ShuffleNetV2::thread_tmp_1167_fu_32582_p3() {
    tmp_1167_fu_32582_p3 = esl_concat<8,2>(tmp_361_fu_32573_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1168_fu_32594_p2() {
    tmp_1168_fu_32594_p2 = (!p_shl567_cast_fu_32590_p1.read().is_01() || !tmp_451_cast_cast_fu_32578_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl567_cast_fu_32590_p1.read()) - sc_bigint<11>(tmp_451_cast_cast_fu_32578_p1.read()));
}

void ShuffleNetV2::thread_tmp_1169_fu_32600_p2() {
    tmp_1169_fu_32600_p2 = (!w106_cast_cast_reg_45935.read().is_01() || !tmp_1168_fu_32594_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w106_cast_cast_reg_45935.read()) + sc_biguint<11>(tmp_1168_fu_32594_p2.read()));
}

void ShuffleNetV2::thread_tmp_1170_fu_32621_p2() {
    tmp_1170_fu_32621_p2 = (!tmp_2274_fu_32616_p2.read().is_01() || !tmp_1169_reg_45974.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_2274_fu_32616_p2.read()) - sc_biguint<11>(tmp_1169_reg_45974.read()));
}

void ShuffleNetV2::thread_tmp_1171_fu_32626_p2() {
    tmp_1171_fu_32626_p2 = (!h106_cast_cast_reg_45953.read().is_01() || !tmp_1170_fu_32621_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h106_cast_cast_reg_45953.read()) + sc_biguint<11>(tmp_1170_fu_32621_p2.read()));
}

void ShuffleNetV2::thread_tmp_1172_fu_32634_p3() {
    tmp_1172_fu_32634_p3 = esl_concat<10,2>(sum37_reg_45980.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1173_fu_32645_p2() {
    tmp_1173_fu_32645_p2 = (!p_shl569_cast_fu_32641_p1.read().is_01() || !sum37_cast_cast_fu_32631_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl569_cast_fu_32641_p1.read()) - sc_biguint<13>(sum37_cast_cast_fu_32631_p1.read()));
}

void ShuffleNetV2::thread_tmp_1174_fu_32651_p2() {
    tmp_1174_fu_32651_p2 = (!w106_cast_cast1_reg_45930.read().is_01() || !tmp_1173_fu_32645_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w106_cast_cast1_reg_45930.read()) + sc_biguint<13>(tmp_1173_fu_32645_p2.read()));
}

void ShuffleNetV2::thread_tmp_1175_fu_32670_p2() {
    tmp_1175_fu_32670_p2 = (!p_shl262_fu_32666_p1.read().is_01() || !tmp_2624_cast_fu_32656_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl262_fu_32666_p1.read()) - sc_bigint<32>(tmp_2624_cast_fu_32656_p1.read()));
}

void ShuffleNetV2::thread_tmp_1176_fu_32676_p2() {
    tmp_1176_fu_32676_p2 = (!h106_cast_reg_45948.read().is_01() || !tmp_1175_fu_32670_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h106_cast_reg_45948.read()) + sc_biguint<32>(tmp_1175_fu_32670_p2.read()));
}

void ShuffleNetV2::thread_tmp_1177_fu_32994_p3() {
    tmp_1177_fu_32994_p3 = esl_concat<12,5>(sum86_reg_46100.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1178_fu_33005_p3() {
    tmp_1178_fu_33005_p3 = esl_concat<12,3>(sum86_reg_46100.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1179_fu_33016_p2() {
    tmp_1179_fu_33016_p2 = (!p_shl571_cast_fu_33001_p1.read().is_01() || !p_shl572_cast_fu_33012_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl571_cast_fu_33001_p1.read()) - sc_biguint<18>(p_shl572_cast_fu_33012_p1.read()));
}

void ShuffleNetV2::thread_tmp_1180_fu_33026_p2() {
    tmp_1180_fu_33026_p2 = (!ci68_cast1_cast_reg_46068.read().is_01() || !tmp_2635_cast_fu_33022_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci68_cast1_cast_reg_46068.read()) + sc_bigint<19>(tmp_2635_cast_fu_33022_p1.read()));
}

void ShuffleNetV2::thread_tmp_1181_fu_33082_p2() {
    tmp_1181_fu_33082_p2 = (!p_shl573_cast_fu_33068_p3.read().is_01() || !p_shl574_cast_fu_33075_p3.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl573_cast_fu_33068_p3.read()) - sc_biguint<11>(p_shl574_cast_fu_33075_p3.read()));
}

void ShuffleNetV2::thread_tmp_1182_fu_33088_p2() {
    tmp_1182_fu_33088_p2 = (!tmp_456_cast_cast_reg_46081.read().is_01() || !tmp_1181_fu_33082_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_456_cast_cast_reg_46081.read()) + sc_biguint<11>(tmp_1181_fu_33082_p2.read()));
}

void ShuffleNetV2::thread_tmp_1183_fu_33343_p3() {
    tmp_1183_fu_33343_p3 = esl_concat<8,2>(tmp_372_fu_33334_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1184_fu_33355_p2() {
    tmp_1184_fu_33355_p2 = (!p_shl575_cast_fu_33351_p1.read().is_01() || !tmp_468_cast_cast_fu_33339_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl575_cast_fu_33351_p1.read()) - sc_bigint<11>(tmp_468_cast_cast_fu_33339_p1.read()));
}

void ShuffleNetV2::thread_tmp_1185_fu_33361_p2() {
    tmp_1185_fu_33361_p2 = (!w108_cast_cast_reg_46195.read().is_01() || !tmp_1184_fu_33355_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w108_cast_cast_reg_46195.read()) + sc_biguint<11>(tmp_1184_fu_33355_p2.read()));
}

void ShuffleNetV2::thread_tmp_1186_fu_33382_p2() {
    tmp_1186_fu_33382_p2 = (!tmp_2287_fu_33377_p2.read().is_01() || !tmp_1185_reg_46234.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_2287_fu_33377_p2.read()) - sc_biguint<11>(tmp_1185_reg_46234.read()));
}

void ShuffleNetV2::thread_tmp_1187_fu_33387_p2() {
    tmp_1187_fu_33387_p2 = (!h108_cast_cast_reg_46213.read().is_01() || !tmp_1186_fu_33382_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h108_cast_cast_reg_46213.read()) + sc_biguint<11>(tmp_1186_fu_33382_p2.read()));
}

void ShuffleNetV2::thread_tmp_1188_fu_33395_p3() {
    tmp_1188_fu_33395_p3 = esl_concat<10,2>(sum39_reg_46240.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1189_fu_33406_p2() {
    tmp_1189_fu_33406_p2 = (!p_shl577_cast_fu_33402_p1.read().is_01() || !sum39_cast_cast_fu_33392_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl577_cast_fu_33402_p1.read()) - sc_biguint<13>(sum39_cast_cast_fu_33392_p1.read()));
}

void ShuffleNetV2::thread_tmp_1190_fu_33412_p2() {
    tmp_1190_fu_33412_p2 = (!w108_cast_cast1_reg_46190.read().is_01() || !tmp_1189_fu_33406_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w108_cast_cast1_reg_46190.read()) + sc_biguint<13>(tmp_1189_fu_33406_p2.read()));
}

void ShuffleNetV2::thread_tmp_1191_fu_33431_p2() {
    tmp_1191_fu_33431_p2 = (!p_shl267_fu_33427_p1.read().is_01() || !tmp_2657_cast_fu_33417_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl267_fu_33427_p1.read()) - sc_bigint<32>(tmp_2657_cast_fu_33417_p1.read()));
}

void ShuffleNetV2::thread_tmp_1192_fu_33437_p2() {
    tmp_1192_fu_33437_p2 = (!h108_cast_reg_46208.read().is_01() || !tmp_1191_fu_33431_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h108_cast_reg_46208.read()) + sc_biguint<32>(tmp_1191_fu_33431_p2.read()));
}

void ShuffleNetV2::thread_tmp_1193_fu_33973_p3() {
    tmp_1193_fu_33973_p3 = esl_concat<7,3>(co155_reg_11985.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1194_fu_33985_p3() {
    tmp_1194_fu_33985_p3 = esl_concat<7,1>(co155_reg_11985.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1195_fu_33997_p2() {
    tmp_1195_fu_33997_p2 = (!p_shl579_cast_fu_33981_p1.read().is_01() || !p_shl580_cast_fu_33993_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl579_cast_fu_33981_p1.read()) - sc_biguint<11>(p_shl580_cast_fu_33993_p1.read()));
}

void ShuffleNetV2::thread_tmp_1196_fu_34029_p3() {
    tmp_1196_fu_34029_p3 = esl_concat<8,3>(tmp_373_fu_34023_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1197_fu_34041_p3() {
    tmp_1197_fu_34041_p3 = esl_concat<8,1>(tmp_373_fu_34023_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1198_fu_34053_p2() {
    tmp_1198_fu_34053_p2 = (!p_shl581_cast_fu_34037_p1.read().is_01() || !p_shl582_cast_fu_34049_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl581_cast_fu_34037_p1.read()) - sc_biguint<12>(p_shl582_cast_fu_34049_p1.read()));
}

void ShuffleNetV2::thread_tmp_1199_fu_33751_p3() {
    tmp_1199_fu_33751_p3 = esl_concat<12,5>(sum89_reg_46360.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1200_fu_33762_p3() {
    tmp_1200_fu_33762_p3 = esl_concat<12,3>(sum89_reg_46360.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1201_fu_33773_p2() {
    tmp_1201_fu_33773_p2 = (!p_shl583_cast_fu_33758_p1.read().is_01() || !p_shl584_cast_fu_33769_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl583_cast_fu_33758_p1.read()) - sc_biguint<18>(p_shl584_cast_fu_33769_p1.read()));
}

void ShuffleNetV2::thread_tmp_1202_fu_33783_p2() {
    tmp_1202_fu_33783_p2 = (!ci70_cast1_cast_reg_46328.read().is_01() || !tmp_2674_cast_fu_33779_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci70_cast1_cast_reg_46328.read()) + sc_bigint<19>(tmp_2674_cast_fu_33779_p1.read()));
}

void ShuffleNetV2::thread_tmp_1203_fu_33839_p2() {
    tmp_1203_fu_33839_p2 = (!p_shl585_cast_fu_33825_p3.read().is_01() || !p_shl586_cast_fu_33832_p3.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl585_cast_fu_33825_p3.read()) - sc_biguint<11>(p_shl586_cast_fu_33832_p3.read()));
}

void ShuffleNetV2::thread_tmp_1204_fu_33845_p2() {
    tmp_1204_fu_33845_p2 = (!tmp_473_cast_cast_reg_46341.read().is_01() || !tmp_1203_fu_33839_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_473_cast_cast_reg_46341.read()) + sc_biguint<11>(tmp_1203_fu_33839_p2.read()));
}

void ShuffleNetV2::thread_tmp_1205_fu_34083_p2() {
    tmp_1205_fu_34083_p2 = (!h_111_cast_cast_fu_34079_p1.read().is_01() || !tmp_2663_cast_reg_46432.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h_111_cast_cast_fu_34079_p1.read()) + sc_bigint<12>(tmp_2663_cast_reg_46432.read()));
}

void ShuffleNetV2::thread_tmp_1206_fu_34108_p2() {
    tmp_1206_fu_34108_p2 = (!p_shl587_cast_fu_34092_p3.read().is_01() || !p_shl588_cast_fu_34100_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl587_cast_fu_34092_p3.read()) - sc_biguint<13>(p_shl588_cast_fu_34100_p3.read()));
}

void ShuffleNetV2::thread_tmp_1207_fu_34114_p2() {
    tmp_1207_fu_34114_p2 = (!h_111_cast_cast1_fu_34075_p1.read().is_01() || !tmp_2666_cast_reg_46445.read().is_01())? sc_lv<13>(): (sc_biguint<13>(h_111_cast_cast1_fu_34075_p1.read()) + sc_bigint<13>(tmp_2666_cast_reg_46445.read()));
}

void ShuffleNetV2::thread_tmp_1208_fu_34139_p2() {
    tmp_1208_fu_34139_p2 = (!p_shl589_cast_fu_34123_p3.read().is_01() || !p_shl590_cast_fu_34131_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl589_cast_fu_34123_p3.read()) - sc_biguint<14>(p_shl590_cast_fu_34131_p3.read()));
}

void ShuffleNetV2::thread_tmp_1209_fu_34165_p2() {
    tmp_1209_fu_34165_p2 = (!tmp_1206_reg_46458.read().is_01() || !w_111_cast_cast_fu_34161_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1206_reg_46458.read()) + sc_biguint<13>(w_111_cast_cast_fu_34161_p1.read()));
}

void ShuffleNetV2::thread_tmp_1210_fu_34170_p2() {
    tmp_1210_fu_34170_p2 = (!tmp_1208_reg_46463.read().is_01() || !w_111_cast_cast1_fu_34157_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1208_reg_46463.read()) + sc_biguint<14>(w_111_cast_cast1_fu_34157_p1.read()));
}

void ShuffleNetV2::thread_tmp_1211_fu_34374_p3() {
    tmp_1211_fu_34374_p3 = esl_concat<12,5>(sum91_reg_46541.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1212_fu_34385_p3() {
    tmp_1212_fu_34385_p3 = esl_concat<12,3>(sum91_reg_46541.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1213_fu_34396_p2() {
    tmp_1213_fu_34396_p2 = (!p_shl591_cast_fu_34381_p1.read().is_01() || !p_shl592_cast_fu_34392_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl591_cast_fu_34381_p1.read()) - sc_biguint<18>(p_shl592_cast_fu_34392_p1.read()));
}

void ShuffleNetV2::thread_tmp_1214_fu_34406_p2() {
    tmp_1214_fu_34406_p2 = (!ci72_cast1_cast_reg_46509.read().is_01() || !tmp_2701_cast_fu_34402_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci72_cast1_cast_reg_46509.read()) + sc_bigint<19>(tmp_2701_cast_fu_34402_p1.read()));
}

void ShuffleNetV2::thread_tmp_1215_fu_34462_p2() {
    tmp_1215_fu_34462_p2 = (!p_shl593_cast_fu_34448_p3.read().is_01() || !p_shl594_cast_fu_34455_p3.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl593_cast_fu_34448_p3.read()) - sc_biguint<11>(p_shl594_cast_fu_34455_p3.read()));
}

void ShuffleNetV2::thread_tmp_1216_fu_34468_p2() {
    tmp_1216_fu_34468_p2 = (!tmp_485_cast_cast_reg_46522.read().is_01() || !tmp_1215_fu_34462_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_485_cast_cast_reg_46522.read()) + sc_biguint<11>(tmp_1215_fu_34462_p2.read()));
}

void ShuffleNetV2::thread_tmp_1217_fu_34715_p3() {
    tmp_1217_fu_34715_p3 = esl_concat<8,2>(tmp_391_fu_34706_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1218_fu_34727_p2() {
    tmp_1218_fu_34727_p2 = (!p_shl595_cast_fu_34723_p1.read().is_01() || !tmp_497_cast_cast_fu_34711_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl595_cast_fu_34723_p1.read()) - sc_bigint<11>(tmp_497_cast_cast_fu_34711_p1.read()));
}

void ShuffleNetV2::thread_tmp_1219_fu_34733_p2() {
    tmp_1219_fu_34733_p2 = (!w112_cast_cast_reg_46636.read().is_01() || !tmp_1218_fu_34727_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w112_cast_cast_reg_46636.read()) + sc_biguint<11>(tmp_1218_fu_34727_p2.read()));
}

void ShuffleNetV2::thread_tmp_1220_fu_34754_p2() {
    tmp_1220_fu_34754_p2 = (!tmp_2311_fu_34749_p2.read().is_01() || !tmp_1219_reg_46675.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_2311_fu_34749_p2.read()) - sc_biguint<11>(tmp_1219_reg_46675.read()));
}

void ShuffleNetV2::thread_tmp_1221_fu_34759_p2() {
    tmp_1221_fu_34759_p2 = (!h112_cast_cast_reg_46654.read().is_01() || !tmp_1220_fu_34754_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h112_cast_cast_reg_46654.read()) + sc_biguint<11>(tmp_1220_fu_34754_p2.read()));
}

void ShuffleNetV2::thread_tmp_1222_fu_34767_p3() {
    tmp_1222_fu_34767_p3 = esl_concat<10,2>(sum41_reg_46681.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1223_fu_34778_p2() {
    tmp_1223_fu_34778_p2 = (!p_shl597_cast_fu_34774_p1.read().is_01() || !sum41_cast_cast_fu_34764_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl597_cast_fu_34774_p1.read()) - sc_biguint<13>(sum41_cast_cast_fu_34764_p1.read()));
}

void ShuffleNetV2::thread_tmp_1224_fu_34784_p2() {
    tmp_1224_fu_34784_p2 = (!w112_cast_cast1_reg_46631.read().is_01() || !tmp_1223_fu_34778_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w112_cast_cast1_reg_46631.read()) + sc_biguint<13>(tmp_1223_fu_34778_p2.read()));
}

void ShuffleNetV2::thread_tmp_1225_fu_34803_p2() {
    tmp_1225_fu_34803_p2 = (!p_shl273_fu_34799_p1.read().is_01() || !tmp_2723_cast_fu_34789_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl273_fu_34799_p1.read()) - sc_bigint<32>(tmp_2723_cast_fu_34789_p1.read()));
}

void ShuffleNetV2::thread_tmp_1226_fu_34809_p2() {
    tmp_1226_fu_34809_p2 = (!h112_cast_reg_46649.read().is_01() || !tmp_1225_fu_34803_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h112_cast_reg_46649.read()) + sc_biguint<32>(tmp_1225_fu_34803_p2.read()));
}

void ShuffleNetV2::thread_tmp_1227_fu_35353_p3() {
    tmp_1227_fu_35353_p3 = esl_concat<7,3>(co163_reg_12194.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1228_fu_35365_p3() {
    tmp_1228_fu_35365_p3 = esl_concat<7,1>(co163_reg_12194.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1229_fu_35377_p2() {
    tmp_1229_fu_35377_p2 = (!p_shl599_cast_fu_35361_p1.read().is_01() || !p_shl600_cast_fu_35373_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl599_cast_fu_35361_p1.read()) - sc_biguint<11>(p_shl600_cast_fu_35373_p1.read()));
}

void ShuffleNetV2::thread_tmp_1230_fu_35123_p3() {
    tmp_1230_fu_35123_p3 = esl_concat<11,5>(sum94_reg_46801.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1231_fu_35130_p1() {
    tmp_1231_fu_35130_p1 = esl_sext<17,16>(tmp_1230_fu_35123_p3.read());
}

void ShuffleNetV2::thread_tmp_1232_fu_35138_p3() {
    tmp_1232_fu_35138_p3 = esl_concat<11,3>(sum94_reg_46801.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1233_fu_35145_p1() {
    tmp_1233_fu_35145_p1 = esl_sext<15,14>(tmp_1232_fu_35138_p3.read());
}

void ShuffleNetV2::thread_tmp_1234_fu_35153_p2() {
    tmp_1234_fu_35153_p2 = (!p_shl601_cast_fu_35134_p1.read().is_01() || !p_shl602_cast_fu_35149_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl601_cast_fu_35134_p1.read()) - sc_biguint<18>(p_shl602_cast_fu_35149_p1.read()));
}

void ShuffleNetV2::thread_tmp_1235_fu_35163_p2() {
    tmp_1235_fu_35163_p2 = (!tmp_2739_cast_fu_35159_p1.read().is_01() || !ci74_cast1_cast_reg_46769.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp_2739_cast_fu_35159_p1.read()) + sc_biguint<19>(ci74_cast1_cast_reg_46769.read()));
}

void ShuffleNetV2::thread_tmp_1236_fu_35219_p2() {
    tmp_1236_fu_35219_p2 = (!p_shl603_cast_fu_35205_p3.read().is_01() || !p_shl604_cast_fu_35212_p3.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl603_cast_fu_35205_p3.read()) - sc_biguint<11>(p_shl604_cast_fu_35212_p3.read()));
}

void ShuffleNetV2::thread_tmp_1237_fu_35225_p2() {
    tmp_1237_fu_35225_p2 = (!tmp_1236_fu_35219_p2.read().is_01() || !tmp_502_cast_cast_reg_46782.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1236_fu_35219_p2.read()) + sc_bigint<11>(tmp_502_cast_cast_reg_46782.read()));
}

void ShuffleNetV2::thread_tmp_1238_fu_35476_p3() {
    tmp_1238_fu_35476_p3 = esl_concat<7,3>(co165_reg_12227.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1239_fu_35488_p3() {
    tmp_1239_fu_35488_p3 = esl_concat<7,1>(co165_reg_12227.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1240_fu_35500_p2() {
    tmp_1240_fu_35500_p2 = (!p_shl605_cast_fu_35484_p1.read().is_01() || !p_shl606_cast_fu_35496_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl605_cast_fu_35484_p1.read()) - sc_biguint<11>(p_shl606_cast_fu_35496_p1.read()));
}

void ShuffleNetV2::thread_tmp_1241_fu_35532_p3() {
    tmp_1241_fu_35532_p3 = esl_concat<8,3>(tmp_397_fu_35526_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1242_fu_35544_p3() {
    tmp_1242_fu_35544_p3 = esl_concat<8,1>(tmp_397_fu_35526_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1243_fu_35556_p2() {
    tmp_1243_fu_35556_p2 = (!p_shl607_cast_fu_35540_p1.read().is_01() || !p_shl608_cast_fu_35552_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl607_cast_fu_35540_p1.read()) - sc_biguint<12>(p_shl608_cast_fu_35552_p1.read()));
}

void ShuffleNetV2::thread_tmp_1244_fu_35415_p2() {
    tmp_1244_fu_35415_p2 = (!tmp_2729_cast_reg_46873.read().is_01() || !h_115_cast_cast_fu_35411_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_2729_cast_reg_46873.read()) + sc_biguint<12>(h_115_cast_cast_fu_35411_p1.read()));
}

void ShuffleNetV2::thread_tmp_1245_fu_35444_p2() {
    tmp_1245_fu_35444_p2 = (!p_shl609_cast_fu_35424_p3.read().is_01() || !p_shl610_cast_fu_35440_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl609_cast_fu_35424_p3.read()) - sc_bigint<14>(p_shl610_cast_fu_35440_p1.read()));
}

void ShuffleNetV2::thread_tmp_1246_fu_35586_p2() {
    tmp_1246_fu_35586_p2 = (!h_117_cast_cast_fu_35582_p1.read().is_01() || !tmp_2749_cast_reg_46917.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h_117_cast_cast_fu_35582_p1.read()) + sc_bigint<12>(tmp_2749_cast_reg_46917.read()));
}

void ShuffleNetV2::thread_tmp_1247_fu_35611_p2() {
    tmp_1247_fu_35611_p2 = (!p_shl611_cast_fu_35595_p3.read().is_01() || !p_shl612_cast_fu_35603_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl611_cast_fu_35595_p3.read()) - sc_biguint<13>(p_shl612_cast_fu_35603_p3.read()));
}

void ShuffleNetV2::thread_tmp_1248_fu_35617_p2() {
    tmp_1248_fu_35617_p2 = (!h_117_cast_cast1_fu_35578_p1.read().is_01() || !tmp_2752_cast_reg_46930.read().is_01())? sc_lv<13>(): (sc_biguint<13>(h_117_cast_cast1_fu_35578_p1.read()) + sc_bigint<13>(tmp_2752_cast_reg_46930.read()));
}

void ShuffleNetV2::thread_tmp_1249_fu_35642_p2() {
    tmp_1249_fu_35642_p2 = (!p_shl613_cast_fu_35626_p3.read().is_01() || !p_shl614_cast_fu_35634_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl613_cast_fu_35626_p3.read()) - sc_biguint<14>(p_shl614_cast_fu_35634_p3.read()));
}

void ShuffleNetV2::thread_tmp_1250_fu_35466_p2() {
    tmp_1250_fu_35466_p2 = (!tmp_1245_reg_46894.read().is_01() || !w_115_cast_cast_fu_35462_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1245_reg_46894.read()) + sc_biguint<14>(w_115_cast_cast_fu_35462_p1.read()));
}

void ShuffleNetV2::thread_tmp_1251_fu_35668_p2() {
    tmp_1251_fu_35668_p2 = (!tmp_1247_reg_46943.read().is_01() || !w_117_cast_cast_fu_35664_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1247_reg_46943.read()) + sc_biguint<13>(w_117_cast_cast_fu_35664_p1.read()));
}

void ShuffleNetV2::thread_tmp_1252_fu_35673_p2() {
    tmp_1252_fu_35673_p2 = (!tmp_1249_reg_46948.read().is_01() || !w_117_cast_cast1_fu_35660_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1249_reg_46948.read()) + sc_biguint<14>(w_117_cast_cast1_fu_35660_p1.read()));
}

void ShuffleNetV2::thread_tmp_1253_fu_35877_p3() {
    tmp_1253_fu_35877_p3 = esl_concat<13,5>(sum96_reg_47026.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1254_fu_35888_p3() {
    tmp_1254_fu_35888_p3 = esl_concat<13,3>(sum96_reg_47026.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1255_fu_35899_p2() {
    tmp_1255_fu_35899_p2 = (!p_shl615_cast_fu_35884_p1.read().is_01() || !p_shl616_cast_fu_35895_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl615_cast_fu_35884_p1.read()) - sc_biguint<19>(p_shl616_cast_fu_35895_p1.read()));
}

void ShuffleNetV2::thread_tmp_1256_fu_35909_p2() {
    tmp_1256_fu_35909_p2 = (!ci76_cast1_cast_reg_46994.read().is_01() || !tmp_2777_cast_fu_35905_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci76_cast1_cast_reg_46994.read()) + sc_bigint<20>(tmp_2777_cast_fu_35905_p1.read()));
}

void ShuffleNetV2::thread_tmp_1257_fu_35965_p2() {
    tmp_1257_fu_35965_p2 = (!p_shl617_cast_fu_35951_p3.read().is_01() || !p_shl618_cast_fu_35958_p3.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl617_cast_fu_35951_p3.read()) - sc_biguint<11>(p_shl618_cast_fu_35958_p3.read()));
}

void ShuffleNetV2::thread_tmp_1258_fu_35971_p2() {
    tmp_1258_fu_35971_p2 = (!tmp_514_cast_cast_reg_47007.read().is_01() || !tmp_1257_fu_35965_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_514_cast_cast_reg_47007.read()) + sc_biguint<11>(tmp_1257_fu_35965_p2.read()));
}

void ShuffleNetV2::thread_tmp_1259_fu_36218_p3() {
    tmp_1259_fu_36218_p3 = esl_concat<8,2>(tmp_410_fu_36209_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1260_fu_36230_p2() {
    tmp_1260_fu_36230_p2 = (!p_shl619_cast_fu_36226_p1.read().is_01() || !tmp_526_cast_cast_fu_36214_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl619_cast_fu_36226_p1.read()) - sc_bigint<11>(tmp_526_cast_cast_fu_36214_p1.read()));
}

void ShuffleNetV2::thread_tmp_1261_fu_36236_p2() {
    tmp_1261_fu_36236_p2 = (!tmp_1260_fu_36230_p2.read().is_01() || !w118_cast_cast_reg_47121.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1260_fu_36230_p2.read()) + sc_biguint<11>(w118_cast_cast_reg_47121.read()));
}

void ShuffleNetV2::thread_tmp_1262_fu_36257_p2() {
    tmp_1262_fu_36257_p2 = (!tmp_2337_fu_36252_p2.read().is_01() || !tmp_1261_reg_47160.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_2337_fu_36252_p2.read()) - sc_biguint<11>(tmp_1261_reg_47160.read()));
}

void ShuffleNetV2::thread_tmp_1263_fu_36262_p2() {
    tmp_1263_fu_36262_p2 = (!tmp_1262_fu_36257_p2.read().is_01() || !h118_cast_cast_reg_47139.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1262_fu_36257_p2.read()) + sc_biguint<11>(h118_cast_cast_reg_47139.read()));
}

void ShuffleNetV2::thread_tmp_1264_fu_36274_p3() {
    tmp_1264_fu_36274_p3 = esl_concat<9,2>(sum43_reg_47166.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1265_fu_36281_p1() {
    tmp_1265_fu_36281_p1 = esl_sext<12,11>(tmp_1264_fu_36274_p3.read());
}

void ShuffleNetV2::thread_tmp_1266_fu_36289_p2() {
    tmp_1266_fu_36289_p2 = (!p_shl621_cast_fu_36285_p1.read().is_01() || !sum43_cast_cast_fu_36270_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl621_cast_fu_36285_p1.read()) - sc_biguint<13>(sum43_cast_cast_fu_36270_p1.read()));
}

void ShuffleNetV2::thread_tmp_1267_fu_36299_p2() {
    tmp_1267_fu_36299_p2 = (!tmp_2799_cast_fu_36295_p1.read().is_01() || !w118_cast_cast1_reg_47116.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_2799_cast_fu_36295_p1.read()) + sc_biguint<14>(w118_cast_cast1_reg_47116.read()));
}

void ShuffleNetV2::thread_tmp_1268_fu_36318_p2() {
    tmp_1268_fu_36318_p2 = (!p_shl275_fu_36314_p1.read().is_01() || !tmp_2800_cast_fu_36304_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl275_fu_36314_p1.read()) - sc_bigint<32>(tmp_2800_cast_fu_36304_p1.read()));
}

void ShuffleNetV2::thread_tmp_1269_fu_36324_p2() {
    tmp_1269_fu_36324_p2 = (!tmp_1268_fu_36318_p2.read().is_01() || !h118_cast_reg_47134.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1268_fu_36318_p2.read()) + sc_biguint<32>(h118_cast_reg_47134.read()));
}

void ShuffleNetV2::thread_tmp_1270_fu_36860_p3() {
    tmp_1270_fu_36860_p3 = esl_concat<7,3>(co173_reg_12436.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1271_fu_36872_p3() {
    tmp_1271_fu_36872_p3 = esl_concat<7,1>(co173_reg_12436.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1272_fu_36884_p2() {
    tmp_1272_fu_36884_p2 = (!p_shl623_cast_fu_36868_p1.read().is_01() || !p_shl624_cast_fu_36880_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl623_cast_fu_36868_p1.read()) - sc_biguint<11>(p_shl624_cast_fu_36880_p1.read()));
}

void ShuffleNetV2::thread_tmp_1273_fu_36638_p3() {
    tmp_1273_fu_36638_p3 = esl_concat<13,5>(sum99_reg_47286.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1274_fu_36649_p3() {
    tmp_1274_fu_36649_p3 = esl_concat<13,3>(sum99_reg_47286.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1275_fu_36660_p2() {
    tmp_1275_fu_36660_p2 = (!p_shl625_cast_fu_36645_p1.read().is_01() || !p_shl626_cast_fu_36656_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl625_cast_fu_36645_p1.read()) - sc_biguint<19>(p_shl626_cast_fu_36656_p1.read()));
}

void ShuffleNetV2::thread_tmp_1276_fu_36670_p2() {
    tmp_1276_fu_36670_p2 = (!ci78_cast1_cast_reg_47254.read().is_01() || !tmp_2814_cast_fu_36666_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci78_cast1_cast_reg_47254.read()) + sc_bigint<20>(tmp_2814_cast_fu_36666_p1.read()));
}

void ShuffleNetV2::thread_tmp_1277_fu_36726_p2() {
    tmp_1277_fu_36726_p2 = (!p_shl627_cast_fu_36712_p3.read().is_01() || !p_shl628_cast_fu_36719_p3.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl627_cast_fu_36712_p3.read()) - sc_biguint<11>(p_shl628_cast_fu_36719_p3.read()));
}

void ShuffleNetV2::thread_tmp_1278_fu_36732_p2() {
    tmp_1278_fu_36732_p2 = (!tmp_531_cast_cast_reg_47267.read().is_01() || !tmp_1277_fu_36726_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_531_cast_cast_reg_47267.read()) + sc_biguint<11>(tmp_1277_fu_36726_p2.read()));
}

void ShuffleNetV2::thread_tmp_1279_fu_36983_p3() {
    tmp_1279_fu_36983_p3 = esl_concat<7,3>(co175_reg_12469.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1280_fu_36995_p3() {
    tmp_1280_fu_36995_p3 = esl_concat<7,1>(co175_reg_12469.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1281_fu_37007_p2() {
    tmp_1281_fu_37007_p2 = (!p_shl629_cast_fu_36991_p1.read().is_01() || !p_shl630_cast_fu_37003_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl629_cast_fu_36991_p1.read()) - sc_biguint<11>(p_shl630_cast_fu_37003_p1.read()));
}

void ShuffleNetV2::thread_tmp_1282_fu_37039_p3() {
    tmp_1282_fu_37039_p3 = esl_concat<8,3>(tmp_416_fu_37033_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1283_fu_37051_p3() {
    tmp_1283_fu_37051_p3 = esl_concat<8,1>(tmp_416_fu_37033_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1284_fu_37063_p2() {
    tmp_1284_fu_37063_p2 = (!p_shl631_cast_fu_37047_p1.read().is_01() || !p_shl632_cast_fu_37059_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl631_cast_fu_37047_p1.read()) - sc_biguint<12>(p_shl632_cast_fu_37059_p1.read()));
}

void ShuffleNetV2::thread_tmp_1285_fu_36922_p2() {
    tmp_1285_fu_36922_p2 = (!tmp_2806_cast_reg_47358.read().is_01() || !h_121_cast_cast_fu_36918_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_2806_cast_reg_47358.read()) + sc_biguint<12>(h_121_cast_cast_fu_36918_p1.read()));
}

void ShuffleNetV2::thread_tmp_1286_fu_36951_p2() {
    tmp_1286_fu_36951_p2 = (!p_shl633_cast_fu_36931_p3.read().is_01() || !p_shl634_cast_fu_36947_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl633_cast_fu_36931_p3.read()) - sc_bigint<14>(p_shl634_cast_fu_36947_p1.read()));
}

void ShuffleNetV2::thread_tmp_1287_fu_37093_p2() {
    tmp_1287_fu_37093_p2 = (!h_123_cast_cast_fu_37089_p1.read().is_01() || !tmp_2824_cast_reg_47402.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h_123_cast_cast_fu_37089_p1.read()) + sc_bigint<12>(tmp_2824_cast_reg_47402.read()));
}

void ShuffleNetV2::thread_tmp_1288_fu_37118_p2() {
    tmp_1288_fu_37118_p2 = (!p_shl635_cast_fu_37102_p3.read().is_01() || !p_shl636_cast_fu_37110_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl635_cast_fu_37102_p3.read()) - sc_biguint<13>(p_shl636_cast_fu_37110_p3.read()));
}

void ShuffleNetV2::thread_tmp_1289_fu_37124_p2() {
    tmp_1289_fu_37124_p2 = (!h_123_cast_cast1_fu_37085_p1.read().is_01() || !tmp_2827_cast_reg_47415.read().is_01())? sc_lv<13>(): (sc_biguint<13>(h_123_cast_cast1_fu_37085_p1.read()) + sc_bigint<13>(tmp_2827_cast_reg_47415.read()));
}

void ShuffleNetV2::thread_tmp_1290_fu_37149_p2() {
    tmp_1290_fu_37149_p2 = (!p_shl637_cast_fu_37133_p3.read().is_01() || !p_shl638_cast_fu_37141_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl637_cast_fu_37133_p3.read()) - sc_biguint<14>(p_shl638_cast_fu_37141_p3.read()));
}

void ShuffleNetV2::thread_tmp_1291_fu_36973_p2() {
    tmp_1291_fu_36973_p2 = (!tmp_1286_reg_47379.read().is_01() || !w_121_cast_cast_fu_36969_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1286_reg_47379.read()) + sc_biguint<14>(w_121_cast_cast_fu_36969_p1.read()));
}

void ShuffleNetV2::thread_tmp_1292_fu_37175_p2() {
    tmp_1292_fu_37175_p2 = (!tmp_1288_reg_47428.read().is_01() || !w_123_cast_cast_fu_37171_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1288_reg_47428.read()) + sc_biguint<13>(w_123_cast_cast_fu_37171_p1.read()));
}

void ShuffleNetV2::thread_tmp_1293_fu_37180_p2() {
    tmp_1293_fu_37180_p2 = (!tmp_1290_reg_47433.read().is_01() || !w_123_cast_cast1_fu_37167_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1290_reg_47433.read()) + sc_biguint<14>(w_123_cast_cast1_fu_37167_p1.read()));
}

void ShuffleNetV2::thread_tmp_1294_fu_37384_p3() {
    tmp_1294_fu_37384_p3 = esl_concat<13,5>(sum101_reg_47511.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1295_fu_37395_p3() {
    tmp_1295_fu_37395_p3 = esl_concat<13,3>(sum101_reg_47511.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1296_fu_37406_p2() {
    tmp_1296_fu_37406_p2 = (!p_shl639_cast_fu_37391_p1.read().is_01() || !p_shl640_cast_fu_37402_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl639_cast_fu_37391_p1.read()) - sc_biguint<19>(p_shl640_cast_fu_37402_p1.read()));
}

void ShuffleNetV2::thread_tmp_1297_fu_37416_p2() {
    tmp_1297_fu_37416_p2 = (!ci80_cast1_cast_reg_47479.read().is_01() || !tmp_2852_cast_fu_37412_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci80_cast1_cast_reg_47479.read()) + sc_bigint<20>(tmp_2852_cast_fu_37412_p1.read()));
}

void ShuffleNetV2::thread_tmp_1298_fu_37472_p2() {
    tmp_1298_fu_37472_p2 = (!p_shl641_cast_fu_37458_p3.read().is_01() || !p_shl642_cast_fu_37465_p3.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl641_cast_fu_37458_p3.read()) - sc_biguint<11>(p_shl642_cast_fu_37465_p3.read()));
}

void ShuffleNetV2::thread_tmp_1299_fu_37478_p2() {
    tmp_1299_fu_37478_p2 = (!tmp_543_cast_cast_reg_47492.read().is_01() || !tmp_1298_fu_37472_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_543_cast_cast_reg_47492.read()) + sc_biguint<11>(tmp_1298_fu_37472_p2.read()));
}

void ShuffleNetV2::thread_tmp_1300_fu_37725_p3() {
    tmp_1300_fu_37725_p3 = esl_concat<8,2>(tmp_429_fu_37716_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1301_fu_37737_p2() {
    tmp_1301_fu_37737_p2 = (!p_shl643_cast_fu_37733_p1.read().is_01() || !tmp_555_cast_cast_fu_37721_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl643_cast_fu_37733_p1.read()) - sc_bigint<11>(tmp_555_cast_cast_fu_37721_p1.read()));
}

void ShuffleNetV2::thread_tmp_1302_fu_37743_p2() {
    tmp_1302_fu_37743_p2 = (!w124_cast_cast_reg_47606.read().is_01() || !tmp_1301_fu_37737_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w124_cast_cast_reg_47606.read()) + sc_biguint<11>(tmp_1301_fu_37737_p2.read()));
}

void ShuffleNetV2::thread_tmp_1303_fu_37764_p2() {
    tmp_1303_fu_37764_p2 = (!tmp_2363_fu_37759_p2.read().is_01() || !tmp_1302_reg_47645.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_2363_fu_37759_p2.read()) - sc_biguint<11>(tmp_1302_reg_47645.read()));
}

void ShuffleNetV2::thread_tmp_1304_fu_37769_p2() {
    tmp_1304_fu_37769_p2 = (!h124_cast_cast_reg_47624.read().is_01() || !tmp_1303_fu_37764_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h124_cast_cast_reg_47624.read()) + sc_biguint<11>(tmp_1303_fu_37764_p2.read()));
}

void ShuffleNetV2::thread_tmp_1305_fu_37777_p3() {
    tmp_1305_fu_37777_p3 = esl_concat<11,2>(sum45_reg_47651.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1306_fu_37788_p2() {
    tmp_1306_fu_37788_p2 = (!p_shl645_cast_fu_37784_p1.read().is_01() || !sum45_cast_cast_fu_37774_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl645_cast_fu_37784_p1.read()) - sc_biguint<14>(sum45_cast_cast_fu_37774_p1.read()));
}

void ShuffleNetV2::thread_tmp_1307_fu_37798_p2() {
    tmp_1307_fu_37798_p2 = (!w124_cast_cast1_reg_47601.read().is_01() || !tmp_2873_cast_fu_37794_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w124_cast_cast1_reg_47601.read()) + sc_bigint<15>(tmp_2873_cast_fu_37794_p1.read()));
}

void ShuffleNetV2::thread_tmp_1308_fu_37817_p2() {
    tmp_1308_fu_37817_p2 = (!p_shl276_fu_37813_p1.read().is_01() || !tmp_2874_cast_fu_37803_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl276_fu_37813_p1.read()) - sc_bigint<32>(tmp_2874_cast_fu_37803_p1.read()));
}

void ShuffleNetV2::thread_tmp_1309_fu_37823_p2() {
    tmp_1309_fu_37823_p2 = (!h124_cast_reg_47619.read().is_01() || !tmp_1308_fu_37817_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h124_cast_reg_47619.read()) + sc_biguint<32>(tmp_1308_fu_37817_p2.read()));
}

void ShuffleNetV2::thread_tmp_1310_fu_38359_p3() {
    tmp_1310_fu_38359_p3 = esl_concat<7,3>(co183_reg_12678.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1311_fu_38371_p3() {
    tmp_1311_fu_38371_p3 = esl_concat<7,1>(co183_reg_12678.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1312_fu_38383_p2() {
    tmp_1312_fu_38383_p2 = (!p_shl647_cast_fu_38367_p1.read().is_01() || !p_shl648_cast_fu_38379_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl647_cast_fu_38367_p1.read()) - sc_biguint<11>(p_shl648_cast_fu_38379_p1.read()));
}

void ShuffleNetV2::thread_tmp_1313_fu_38137_p3() {
    tmp_1313_fu_38137_p3 = esl_concat<13,5>(sum104_reg_47771.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1314_fu_38148_p3() {
    tmp_1314_fu_38148_p3 = esl_concat<13,3>(sum104_reg_47771.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1315_fu_38159_p2() {
    tmp_1315_fu_38159_p2 = (!p_shl649_cast_fu_38144_p1.read().is_01() || !p_shl650_cast_fu_38155_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl649_cast_fu_38144_p1.read()) - sc_biguint<19>(p_shl650_cast_fu_38155_p1.read()));
}

void ShuffleNetV2::thread_tmp_1316_fu_38169_p2() {
    tmp_1316_fu_38169_p2 = (!ci82_cast1_cast_reg_47739.read().is_01() || !tmp_2888_cast_fu_38165_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci82_cast1_cast_reg_47739.read()) + sc_bigint<20>(tmp_2888_cast_fu_38165_p1.read()));
}

void ShuffleNetV2::thread_tmp_1317_fu_38225_p2() {
    tmp_1317_fu_38225_p2 = (!p_shl651_cast_fu_38211_p3.read().is_01() || !p_shl652_cast_fu_38218_p3.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl651_cast_fu_38211_p3.read()) - sc_biguint<11>(p_shl652_cast_fu_38218_p3.read()));
}

void ShuffleNetV2::thread_tmp_1318_fu_38231_p2() {
    tmp_1318_fu_38231_p2 = (!tmp_560_cast_cast_reg_47752.read().is_01() || !tmp_1317_fu_38225_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_560_cast_cast_reg_47752.read()) + sc_biguint<11>(tmp_1317_fu_38225_p2.read()));
}

void ShuffleNetV2::thread_tmp_1319_fu_38482_p3() {
    tmp_1319_fu_38482_p3 = esl_concat<8,2>(ci83_reg_12711.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1320_fu_38494_p3() {
    tmp_1320_fu_38494_p3 = esl_concat<8,3>(ci83_reg_12711.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1321_fu_38506_p3() {
    tmp_1321_fu_38506_p3 = esl_concat<8,1>(ci83_reg_12711.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1322_fu_38518_p2() {
    tmp_1322_fu_38518_p2 = (!p_shl653_cast_fu_38502_p1.read().is_01() || !p_shl654_cast_fu_38514_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl653_cast_fu_38502_p1.read()) - sc_biguint<12>(p_shl654_cast_fu_38514_p1.read()));
}

void ShuffleNetV2::thread_tmp_1323_fu_38421_p2() {
    tmp_1323_fu_38421_p2 = (!tmp_2880_cast_reg_47843.read().is_01() || !h_127_cast_cast_fu_38417_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_2880_cast_reg_47843.read()) + sc_biguint<12>(h_127_cast_cast_fu_38417_p1.read()));
}

void ShuffleNetV2::thread_tmp_1324_fu_38450_p2() {
    tmp_1324_fu_38450_p2 = (!p_shl655_cast_fu_38430_p3.read().is_01() || !p_shl656_cast_fu_38446_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl655_cast_fu_38430_p3.read()) - sc_bigint<14>(p_shl656_cast_fu_38446_p1.read()));
}

void ShuffleNetV2::thread_tmp_1325_fu_38544_p2() {
    tmp_1325_fu_38544_p2 = (!w126_cast_cast_fu_38540_p1.read().is_01() || !tmp_2897_cast_reg_47887.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w126_cast_cast_fu_38540_p1.read()) + sc_biguint<11>(tmp_2897_cast_reg_47887.read()));
}

void ShuffleNetV2::thread_tmp_1326_fu_38573_p2() {
    tmp_1326_fu_38573_p2 = (!w_128_cast_cast_fu_38569_p1.read().is_01() || !tmp_2900_cast_reg_47892.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w_128_cast_cast_fu_38569_p1.read()) + sc_bigint<13>(tmp_2900_cast_reg_47892.read()));
}

void ShuffleNetV2::thread_tmp_1327_fu_38598_p2() {
    tmp_1327_fu_38598_p2 = (!p_shl657_cast_fu_38582_p3.read().is_01() || !p_shl658_cast_fu_38590_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl657_cast_fu_38582_p3.read()) - sc_biguint<14>(p_shl658_cast_fu_38590_p3.read()));
}

void ShuffleNetV2::thread_tmp_1328_fu_38472_p2() {
    tmp_1328_fu_38472_p2 = (!tmp_1324_reg_47864.read().is_01() || !w_129_cast_cast_fu_38468_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1324_reg_47864.read()) + sc_biguint<14>(w_129_cast_cast_fu_38468_p1.read()));
}

void ShuffleNetV2::thread_tmp_1329_fu_38608_p2() {
    tmp_1329_fu_38608_p2 = (!tmp_2907_cast_reg_47905.read().is_01() || !h128_cast_cast_fu_38604_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_2907_cast_reg_47905.read()) + sc_biguint<13>(h128_cast_cast_fu_38604_p1.read()));
}

void ShuffleNetV2::thread_tmp_1330_fu_38634_p2() {
    tmp_1330_fu_38634_p2 = (!tmp_1327_reg_47918.read().is_01() || !h_129_cast_cast_fu_38630_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1327_reg_47918.read()) + sc_biguint<14>(h_129_cast_cast_fu_38630_p1.read()));
}

void ShuffleNetV2::thread_tmp_154_fu_16069_p2() {
    tmp_154_fu_16069_p2 = (!co35_cast_fu_16053_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co35_cast_fu_16053_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_155_fu_16857_p2() {
    tmp_155_fu_16857_p2 = (!co46_cast_fu_16841_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co46_cast_fu_16841_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_157_fu_17669_p2() {
    tmp_157_fu_17669_p2 = (!p_shl_cast_fu_17653_p1.read().is_01() || !p_shl1_cast_fu_17665_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl_cast_fu_17653_p1.read()) - sc_biguint<7>(p_shl1_cast_fu_17665_p1.read()));
}

void ShuffleNetV2::thread_tmp_158_cast_cast_fu_17685_p1() {
    tmp_158_cast_cast_fu_17685_p1 = esl_zext<9,4>(tmp_1967_fu_17675_p4.read());
}

void ShuffleNetV2::thread_tmp_159_cast_fu_18023_p1() {
    tmp_159_cast_fu_18023_p1 = esl_sext<9,7>(tmp_159_fu_18017_p2.read());
}

void ShuffleNetV2::thread_tmp_159_fu_18017_p2() {
    tmp_159_fu_18017_p2 = (!p_shl2_cast_fu_18001_p1.read().is_01() || !p_shl3_cast_fu_18013_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl2_cast_fu_18001_p1.read()) - sc_biguint<7>(p_shl3_cast_fu_18013_p1.read()));
}

void ShuffleNetV2::thread_tmp_160_cast_fu_18057_p1() {
    tmp_160_cast_fu_18057_p1 = esl_sext<32,7>(tmp_160_reg_41369.read());
}

void ShuffleNetV2::thread_tmp_160_fu_18027_p2() {
    tmp_160_fu_18027_p2 = (!tmp_159_fu_18017_p2.read().is_01() || !i35_cast1_reg_41348.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_159_fu_18017_p2.read()) + sc_biguint<7>(i35_cast1_reg_41348.read()));
}

void ShuffleNetV2::thread_tmp_162_cast_cast_fu_17714_p1() {
    tmp_162_cast_cast_fu_17714_p1 = esl_sext<8,7>(tmp_162_fu_17709_p2.read());
}

void ShuffleNetV2::thread_tmp_162_fu_17709_p2() {
    tmp_162_fu_17709_p2 = (!tmp_157_reg_41271.read().is_01() || !ci28_cast_fu_17689_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_157_reg_41271.read()) + sc_biguint<7>(ci28_cast_fu_17689_p1.read()));
}

void ShuffleNetV2::thread_tmp_163_cast_cast_fu_17764_p1() {
    tmp_163_cast_cast_fu_17764_p1 = esl_sext<9,7>(tmp_163_fu_17758_p2.read());
}

void ShuffleNetV2::thread_tmp_163_fu_17758_p2() {
    tmp_163_fu_17758_p2 = (!p_shl4_cast_fu_17742_p1.read().is_01() || !p_shl5_cast_fu_17754_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl4_cast_fu_17742_p1.read()) - sc_biguint<7>(p_shl5_cast_fu_17754_p1.read()));
}

void ShuffleNetV2::thread_tmp_164_cast_fu_17824_p1() {
    tmp_164_cast_fu_17824_p1 = esl_sext<10,9>(tmp_164_reg_41307.read());
}

void ShuffleNetV2::thread_tmp_164_fu_17768_p2() {
    tmp_164_fu_17768_p2 = (!tmp_163_cast_cast_fu_17764_p1.read().is_01() || !tmp_158_cast_cast_reg_41276.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_163_cast_cast_fu_17764_p1.read()) + sc_biguint<9>(tmp_158_cast_cast_reg_41276.read()));
}

void ShuffleNetV2::thread_tmp_165_cast_fu_17803_p1() {
    tmp_165_cast_fu_17803_p1 = esl_sext<9,8>(tmp_165_fu_17797_p2.read());
}

void ShuffleNetV2::thread_tmp_165_fu_17797_p2() {
    tmp_165_fu_17797_p2 = (!p_shl6_cast_fu_17781_p1.read().is_01() || !p_shl7_cast_fu_17793_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl6_cast_fu_17781_p1.read()) - sc_biguint<8>(p_shl7_cast_fu_17793_p1.read()));
}

void ShuffleNetV2::thread_tmp_167_cast_cast_fu_18364_p1() {
    tmp_167_cast_cast_fu_18364_p1 = esl_sext<8,7>(tmp_167_fu_18358_p2.read());
}

void ShuffleNetV2::thread_tmp_167_fu_18358_p2() {
    tmp_167_fu_18358_p2 = (!p_shl8_cast_fu_18342_p1.read().is_01() || !p_shl9_cast_fu_18354_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_cast_fu_18342_p1.read()) - sc_biguint<7>(p_shl9_cast_fu_18354_p1.read()));
}

void ShuffleNetV2::thread_tmp_168_cast_fu_18402_p1() {
    tmp_168_cast_fu_18402_p1 = esl_sext<32,7>(tmp_168_reg_41502.read());
}

void ShuffleNetV2::thread_tmp_168_fu_18368_p2() {
    tmp_168_fu_18368_p2 = (!tmp_167_fu_18358_p2.read().is_01() || !i37_cast_reg_41481.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_fu_18358_p2.read()) + sc_biguint<7>(i37_cast_reg_41481.read()));
}

void ShuffleNetV2::thread_tmp_1709_cast_fu_14338_p1() {
    tmp_1709_cast_fu_14338_p1 = esl_zext<8,7>(tmp_fu_14330_p3.read());
}

void ShuffleNetV2::thread_tmp_171_fu_18450_p2() {
    tmp_171_fu_18450_p2 = (!p_shl10_cast_fu_18434_p1.read().is_01() || !p_shl11_cast_fu_18446_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_cast_fu_18434_p1.read()) - sc_biguint<7>(p_shl11_cast_fu_18446_p1.read()));
}

void ShuffleNetV2::thread_tmp_1725_cast_fu_14470_p1() {
    tmp_1725_cast_fu_14470_p1 = esl_zext<32,13>(tmp_668_reg_39165.read());
}

void ShuffleNetV2::thread_tmp_1727_cast_fu_14620_p1() {
    tmp_1727_cast_fu_14620_p1 = esl_sext<9,8>(tmp_670_fu_14614_p2.read());
}

void ShuffleNetV2::thread_tmp_1728_cast_fu_14656_p1() {
    tmp_1728_cast_fu_14656_p1 = esl_sext<32,9>(tmp_671_fu_14651_p2.read());
}

void ShuffleNetV2::thread_tmp_172_cast_cast_fu_18466_p1() {
    tmp_172_cast_cast_fu_18466_p1 = esl_zext<9,4>(tmp_1982_fu_18456_p4.read());
}

void ShuffleNetV2::thread_tmp_1737_cast_fu_14895_p1() {
    tmp_1737_cast_fu_14895_p1 = esl_sext<9,8>(tmp_678_fu_14889_p2.read());
}

void ShuffleNetV2::thread_tmp_173_cast_fu_18167_p1() {
    tmp_173_cast_fu_18167_p1 = esl_sext<8,7>(tmp_173_fu_18161_p2.read());
}

void ShuffleNetV2::thread_tmp_173_fu_18161_p2() {
    tmp_173_fu_18161_p2 = (!p_shl12_cast_fu_18145_p1.read().is_01() || !p_shl13_cast_fu_18157_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl12_cast_fu_18145_p1.read()) - sc_biguint<7>(p_shl13_cast_fu_18157_p1.read()));
}

void ShuffleNetV2::thread_tmp_1740_cast_fu_14952_p1() {
    tmp_1740_cast_fu_14952_p1 = esl_sext<32,9>(tmp_681_fu_14947_p2.read());
}

void ShuffleNetV2::thread_tmp_1747_cast_fu_15023_p1() {
    tmp_1747_cast_fu_15023_p1 = esl_zext<32,9>(tmp_685_fu_15018_p2.read());
}

void ShuffleNetV2::thread_tmp_174_cast_cast_fu_18176_p1() {
    tmp_174_cast_cast_fu_18176_p1 = esl_sext<10,7>(tmp_174_fu_18171_p2.read());
}

void ShuffleNetV2::thread_tmp_174_fu_18171_p2() {
    tmp_174_fu_18171_p2 = (!co58_cast1_reg_41390.read().is_01() || !tmp_173_fu_18161_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co58_cast1_reg_41390.read()) + sc_biguint<7>(tmp_173_fu_18161_p2.read()));
}

void ShuffleNetV2::thread_tmp_1762_fu_14276_p2() {
    tmp_1762_fu_14276_p2 = (!bias_V_read_reg_38873.read().is_01() || !ap_const_lv32_C18.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_38873.read()) + sc_biguint<32>(ap_const_lv32_C18));
}

void ShuffleNetV2::thread_tmp_1763_fu_14303_p2() {
    tmp_1763_fu_14303_p2 = (!bias_V_read_reg_38873.read().is_01() || !ap_const_lv32_E18.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_38873.read()) + sc_biguint<32>(ap_const_lv32_E18));
}

void ShuffleNetV2::thread_tmp_1766_fu_14381_p3() {
    tmp_1766_fu_14381_p3 = esl_concat<8,5>(tmp_664_fu_14376_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1767_fu_14531_p2() {
    tmp_1767_fu_14531_p2 = (!bias_V_read_reg_38873.read().is_01() || !ap_const_lv32_18.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_38873.read()) + sc_biguint<32>(ap_const_lv32_18));
}

void ShuffleNetV2::thread_tmp_1769_fu_14516_p1() {
    tmp_1769_fu_14516_p1 = esl_sext<32,11>(tmp_663_fu_14498_p2.read());
}

void ShuffleNetV2::thread_tmp_176_cast_cast_fu_18804_p1() {
    tmp_176_cast_cast_fu_18804_p1 = esl_sext<8,7>(tmp_176_fu_18798_p2.read());
}

void ShuffleNetV2::thread_tmp_176_fu_18798_p2() {
    tmp_176_fu_18798_p2 = (!p_shl14_cast_fu_18782_p1.read().is_01() || !p_shl15_cast_fu_18794_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl14_cast_fu_18782_p1.read()) - sc_biguint<7>(p_shl15_cast_fu_18794_p1.read()));
}

void ShuffleNetV2::thread_tmp_1770_cast_fu_15416_p1() {
    tmp_1770_cast_fu_15416_p1 = esl_zext<32,14>(tmp_702_reg_39835.read());
}

void ShuffleNetV2::thread_tmp_1771_cast_fu_15411_p1() {
    tmp_1771_cast_fu_15411_p1 = esl_zext<32,15>(tmp_703_fu_15406_p2.read());
}

void ShuffleNetV2::thread_tmp_1773_cast_fu_15580_p1() {
    tmp_1773_cast_fu_15580_p1 = esl_sext<9,8>(tmp_705_fu_15574_p2.read());
}

void ShuffleNetV2::thread_tmp_1776_cast_fu_15648_p1() {
    tmp_1776_cast_fu_15648_p1 = esl_sext<32,10>(tmp_708_fu_15643_p2.read());
}

void ShuffleNetV2::thread_tmp_1777_fu_14520_p2() {
    tmp_1777_fu_14520_p2 = (!tmp_1769_fu_14516_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_38982.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1769_fu_14516_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()));
}

void ShuffleNetV2::thread_tmp_177_cast_fu_18842_p1() {
    tmp_177_cast_fu_18842_p1 = esl_sext<32,7>(tmp_177_reg_41629.read());
}

void ShuffleNetV2::thread_tmp_177_fu_18808_p2() {
    tmp_177_fu_18808_p2 = (!tmp_176_fu_18798_p2.read().is_01() || !i41_cast_reg_41608.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_176_fu_18798_p2.read()) + sc_biguint<7>(i41_cast_reg_41608.read()));
}

void ShuffleNetV2::thread_tmp_1780_fu_14432_p3() {
    tmp_1780_fu_14432_p3 = esl_concat<8,1>(tmp_666_reg_39140.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1782_fu_14414_p2() {
    tmp_1782_fu_14414_p2 = (!tmp_665_fu_14389_p1.read().is_01() || !image_V_read_reg_39052.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_665_fu_14389_p1.read()) + sc_biguint<32>(image_V_read_reg_39052.read()));
}

void ShuffleNetV2::thread_tmp_1783_cast_fu_15719_p1() {
    tmp_1783_cast_fu_15719_p1 = esl_zext<32,9>(tmp_712_fu_15714_p2.read());
}

void ShuffleNetV2::thread_tmp_1789_fu_14636_p2() {
    tmp_1789_fu_14636_p2 = (!bias_V_read_reg_38873.read().is_01() || !ap_const_lv32_30.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_38873.read()) + sc_biguint<32>(ap_const_lv32_30));
}

void ShuffleNetV2::thread_tmp_179_cast_cast_fu_18495_p1() {
    tmp_179_cast_cast_fu_18495_p1 = esl_sext<8,7>(tmp_179_fu_18490_p2.read());
}

void ShuffleNetV2::thread_tmp_179_fu_18490_p2() {
    tmp_179_fu_18490_p2 = (!tmp_171_reg_41531.read().is_01() || !ci30_cast_fu_18470_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_171_reg_41531.read()) + sc_biguint<7>(ci30_cast_fu_18470_p1.read()));
}

void ShuffleNetV2::thread_tmp_1800_fu_14660_p3() {
    tmp_1800_fu_14660_p3 = esl_concat<9,2>(tmp_671_fu_14651_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1801_fu_14690_p2() {
    tmp_1801_fu_14690_p2 = (!tmp_672_fu_14672_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_672_fu_14672_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_tmp_1807_fu_14806_p2() {
    tmp_1807_fu_14806_p2 = (!bias_V_read_reg_38873.read().is_01() || !ap_const_lv32_48.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_38873.read()) + sc_biguint<32>(ap_const_lv32_48));
}

void ShuffleNetV2::thread_tmp_1808_fu_14791_p1() {
    tmp_1808_fu_14791_p1 = esl_sext<32,12>(tmp_676_fu_14785_p2.read());
}

void ShuffleNetV2::thread_tmp_180_cast_cast_fu_18545_p1() {
    tmp_180_cast_cast_fu_18545_p1 = esl_sext<9,7>(tmp_180_fu_18539_p2.read());
}

void ShuffleNetV2::thread_tmp_180_fu_18539_p2() {
    tmp_180_fu_18539_p2 = (!p_shl16_cast_fu_18523_p1.read().is_01() || !p_shl17_cast_fu_18535_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl16_cast_fu_18523_p1.read()) - sc_biguint<7>(p_shl17_cast_fu_18535_p1.read()));
}

void ShuffleNetV2::thread_tmp_1811_fu_14795_p2() {
    tmp_1811_fu_14795_p2 = (!shuffle_conv_1x1_V_r_reg_38982.read().is_01() || !tmp_1808_fu_14791_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()) + sc_bigint<32>(tmp_1808_fu_14791_p1.read()));
}

void ShuffleNetV2::thread_tmp_1814_cast_fu_16018_p1() {
    tmp_1814_cast_fu_16018_p1 = esl_zext<32,15>(tmp_736_fu_16013_p2.read());
}

void ShuffleNetV2::thread_tmp_1815_fu_14956_p3() {
    tmp_1815_fu_14956_p3 = esl_concat<9,2>(tmp_681_fu_14947_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1816_cast_fu_16222_p1() {
    tmp_1816_cast_fu_16222_p1 = esl_zext<32,14>(tmp_737_reg_40324.read());
}

void ShuffleNetV2::thread_tmp_1817_cast_fu_16217_p1() {
    tmp_1817_cast_fu_16217_p1 = esl_zext<32,15>(tmp_738_fu_16212_p2.read());
}

void ShuffleNetV2::thread_tmp_1819_cast_fu_16386_p1() {
    tmp_1819_cast_fu_16386_p1 = esl_sext<9,8>(tmp_740_fu_16380_p2.read());
}

void ShuffleNetV2::thread_tmp_181_cast_fu_18605_p1() {
    tmp_181_cast_fu_18605_p1 = esl_sext<10,9>(tmp_181_reg_41567.read());
}

void ShuffleNetV2::thread_tmp_181_fu_18549_p2() {
    tmp_181_fu_18549_p2 = (!tmp_180_cast_cast_fu_18545_p1.read().is_01() || !tmp_172_cast_cast_reg_41536.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_180_cast_cast_fu_18545_p1.read()) + sc_biguint<9>(tmp_172_cast_cast_reg_41536.read()));
}

void ShuffleNetV2::thread_tmp_1822_cast_fu_16454_p1() {
    tmp_1822_cast_fu_16454_p1 = esl_sext<32,10>(tmp_743_fu_16449_p2.read());
}

void ShuffleNetV2::thread_tmp_1823_fu_14979_p2() {
    tmp_1823_fu_14979_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_683_fu_14974_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1826_fu_15056_p3() {
    tmp_1826_fu_15056_p3 = esl_concat<1,5>(ap_const_lv1_1, tmp_1812_reg_8876.read());
}

void ShuffleNetV2::thread_tmp_1828_fu_15064_p1() {
    tmp_1828_fu_15064_p1 = esl_sext<7,6>(tmp_1826_fu_15056_p3.read());
}

void ShuffleNetV2::thread_tmp_1829_cast_fu_16525_p1() {
    tmp_1829_cast_fu_16525_p1 = esl_zext<32,9>(tmp_747_fu_16520_p2.read());
}

void ShuffleNetV2::thread_tmp_182_cast_fu_18584_p1() {
    tmp_182_cast_fu_18584_p1 = esl_sext<9,8>(tmp_182_fu_18578_p2.read());
}

void ShuffleNetV2::thread_tmp_182_fu_18578_p2() {
    tmp_182_fu_18578_p2 = (!p_shl18_cast_fu_18562_p1.read().is_01() || !p_shl19_cast_fu_18574_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl18_cast_fu_18562_p1.read()) - sc_biguint<8>(p_shl19_cast_fu_18574_p1.read()));
}

void ShuffleNetV2::thread_tmp_1833_fu_15068_p1() {
    tmp_1833_fu_15068_p1 = esl_zext<32,7>(tmp_1828_fu_15064_p1.read());
}

void ShuffleNetV2::thread_tmp_1844_fu_15072_p2() {
    tmp_1844_fu_15072_p2 = (!tmp_1833_fu_15068_p1.read().is_01() || !bias_V_read_reg_38873.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1833_fu_15068_p1.read()) + sc_biguint<32>(bias_V_read_reg_38873.read()));
}

void ShuffleNetV2::thread_tmp_1845_fu_15003_p2() {
    tmp_1845_fu_15003_p2 = (!tmp_682_fu_14968_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_682_fu_14968_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_tmp_184_cast_fu_19145_p1() {
    tmp_184_cast_fu_19145_p1 = esl_sext<10,7>(tmp_184_fu_19139_p2.read());
}

void ShuffleNetV2::thread_tmp_184_fu_19139_p2() {
    tmp_184_fu_19139_p2 = (!p_shl20_cast_fu_19123_p1.read().is_01() || !p_shl21_cast_fu_19135_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl20_cast_fu_19123_p1.read()) - sc_biguint<7>(p_shl21_cast_fu_19135_p1.read()));
}

void ShuffleNetV2::thread_tmp_1851_fu_15150_p2() {
    tmp_1851_fu_15150_p2 = (!bias_V_read_reg_38873.read().is_01() || !ap_const_lv32_78.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_38873.read()) + sc_biguint<32>(ap_const_lv32_78));
}

void ShuffleNetV2::thread_tmp_1852_fu_15135_p1() {
    tmp_1852_fu_15135_p1 = esl_sext<32,13>(tmp_688_fu_15129_p2.read());
}

void ShuffleNetV2::thread_tmp_1855_fu_15139_p2() {
    tmp_1855_fu_15139_p2 = (!shuffle_conv_1x1_V_r_reg_38982.read().is_01() || !tmp_1852_fu_15135_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()) + sc_bigint<32>(tmp_1852_fu_15135_p1.read()));
}

void ShuffleNetV2::thread_tmp_1856_fu_15487_p2() {
    tmp_1856_fu_15487_p2 = (!bias_V_read_reg_38873.read().is_01() || !ap_const_lv32_90.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_38873.read()) + sc_biguint<32>(ap_const_lv32_90));
}

void ShuffleNetV2::thread_tmp_1858_cast_fu_16806_p1() {
    tmp_1858_cast_fu_16806_p1 = esl_zext<32,15>(tmp_769_fu_16801_p2.read());
}

void ShuffleNetV2::thread_tmp_1859_fu_15472_p1() {
    tmp_1859_fu_15472_p1 = esl_sext<32,13>(tmp_697_fu_15466_p2.read());
}

void ShuffleNetV2::thread_tmp_185_cast_fu_19179_p1() {
    tmp_185_cast_fu_19179_p1 = esl_sext<32,7>(tmp_185_reg_41762.read());
}

void ShuffleNetV2::thread_tmp_185_fu_19149_p2() {
    tmp_185_fu_19149_p2 = (!tmp_184_fu_19139_p2.read().is_01() || !i45_cast1_reg_41741.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_184_fu_19139_p2.read()) + sc_biguint<7>(i45_cast1_reg_41741.read()));
}

void ShuffleNetV2::thread_tmp_1860_cast_fu_17010_p1() {
    tmp_1860_cast_fu_17010_p1 = esl_zext<32,14>(tmp_770_reg_40813.read());
}

void ShuffleNetV2::thread_tmp_1861_cast_fu_17005_p1() {
    tmp_1861_cast_fu_17005_p1 = esl_zext<32,15>(tmp_771_fu_17000_p2.read());
}

void ShuffleNetV2::thread_tmp_1863_cast_fu_17182_p1() {
    tmp_1863_cast_fu_17182_p1 = esl_sext<9,8>(tmp_773_fu_17176_p2.read());
}

void ShuffleNetV2::thread_tmp_1866_cast_fu_17238_p1() {
    tmp_1866_cast_fu_17238_p1 = esl_sext<11,10>(tmp_776_fu_17232_p2.read());
}

void ShuffleNetV2::thread_tmp_1867_cast_fu_17266_p1() {
    tmp_1867_cast_fu_17266_p1 = esl_sext<32,11>(tmp_777_fu_17261_p2.read());
}

void ShuffleNetV2::thread_tmp_1868_fu_15476_p2() {
    tmp_1868_fu_15476_p2 = (!shuffle_conv_1x1_V_r_reg_38982.read().is_01() || !tmp_1859_fu_15472_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()) + sc_bigint<32>(tmp_1859_fu_15472_p1.read()));
}

void ShuffleNetV2::thread_tmp_1871_fu_15332_p3() {
    tmp_1871_fu_15332_p3 = esl_concat<10,1>(tmp_698_fu_15319_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1873_fu_15363_p3() {
    tmp_1873_fu_15363_p3 = esl_concat<11,1>(tmp_700_fu_15350_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1874_cast_fu_17337_p1() {
    tmp_1874_cast_fu_17337_p1 = esl_zext<32,9>(tmp_781_fu_17332_p2.read());
}

void ShuffleNetV2::thread_tmp_1880_fu_15624_p2() {
    tmp_1880_fu_15624_p2 = (!bias_V_read_reg_38873.read().is_01() || !ap_const_lv32_A8.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_38873.read()) + sc_biguint<32>(ap_const_lv32_A8));
}

void ShuffleNetV2::thread_tmp_1884_fu_15652_p3() {
    tmp_1884_fu_15652_p3 = esl_concat<10,2>(tmp_708_fu_15643_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1885_fu_15675_p2() {
    tmp_1885_fu_15675_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_710_fu_15670_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1887_fu_15699_p2() {
    tmp_1887_fu_15699_p2 = (!tmp_709_fu_15664_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_709_fu_15664_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_tmp_1888_fu_15806_p1() {
    tmp_1888_fu_15806_p1 = esl_sext<32,13>(tmp_717_fu_15800_p2.read());
}

void ShuffleNetV2::thread_tmp_188_fu_19227_p2() {
    tmp_188_fu_19227_p2 = (!p_shl22_cast_fu_19211_p1.read().is_01() || !p_shl23_cast_fu_19223_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl22_cast_fu_19211_p1.read()) - sc_biguint<7>(p_shl23_cast_fu_19223_p1.read()));
}

void ShuffleNetV2::thread_tmp_1890_cast_fu_17620_p1() {
    tmp_1890_cast_fu_17620_p1 = esl_zext<32,15>(tmp_792_fu_17615_p2.read());
}

void ShuffleNetV2::thread_tmp_1891_fu_15810_p2() {
    tmp_1891_fu_15810_p2 = (!shuffle_conv_1x1_V_r_reg_38982.read().is_01() || !tmp_1888_fu_15806_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()) + sc_bigint<32>(tmp_1888_fu_15806_p1.read()));
}

void ShuffleNetV2::thread_tmp_1893_fu_15877_p3() {
    tmp_1893_fu_15877_p3 = esl_concat<2,5>(ap_const_lv2_2, tmp_1892_reg_9055.read());
}

void ShuffleNetV2::thread_tmp_1894_fu_15885_p1() {
    tmp_1894_fu_15885_p1 = esl_sext<8,7>(tmp_1893_fu_15877_p3.read());
}

void ShuffleNetV2::thread_tmp_1895_fu_15889_p1() {
    tmp_1895_fu_15889_p1 = esl_zext<32,8>(tmp_1894_fu_15885_p1.read());
}

void ShuffleNetV2::thread_tmp_1896_fu_15893_p2() {
    tmp_1896_fu_15893_p2 = (!tmp_1895_fu_15889_p1.read().is_01() || !bias_V_read_reg_38873.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1895_fu_15889_p1.read()) + sc_biguint<32>(bias_V_read_reg_38873.read()));
}

void ShuffleNetV2::thread_tmp_1899_cast_fu_17855_p1() {
    tmp_1899_cast_fu_17855_p1 = esl_sext<16,15>(tmp_795_fu_17849_p2.read());
}

void ShuffleNetV2::thread_tmp_189_cast_cast_fu_19243_p1() {
    tmp_189_cast_cast_fu_19243_p1 = esl_zext<9,4>(tmp_2003_fu_19233_p4.read());
}

void ShuffleNetV2::thread_tmp_189_fu_19267_p2() {
    tmp_189_fu_19267_p2 = (!tmp_188_reg_41791.read().is_01() || !ci32_cast_fu_19247_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_188_reg_41791.read()) + sc_biguint<7>(ci32_cast_fu_19247_p1.read()));
}

void ShuffleNetV2::thread_tmp_1900_cast_fu_17864_p1() {
    tmp_1900_cast_fu_17864_p1 = esl_sext<32,16>(tmp_796_fu_17859_p2.read());
}

void ShuffleNetV2::thread_tmp_1901_fu_15967_p3() {
    tmp_1901_fu_15967_p3 = esl_concat<10,4>(tmp_727_fu_15962_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1902_fu_15979_p3() {
    tmp_1902_fu_15979_p3 = esl_concat<10,1>(tmp_727_fu_15962_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1903_fu_16293_p2() {
    tmp_1903_fu_16293_p2 = (!bias_V_read_reg_38873.read().is_01() || !ap_const_lv32_D8.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_38873.read()) + sc_biguint<32>(ap_const_lv32_D8));
}

void ShuffleNetV2::thread_tmp_1904_fu_16278_p1() {
    tmp_1904_fu_16278_p1 = esl_sext<32,14>(tmp_731_fu_16272_p2.read());
}

void ShuffleNetV2::thread_tmp_1906_cast_fu_17930_p1() {
    tmp_1906_cast_fu_17930_p1 = esl_sext<32,8>(tmp_798_reg_41335.read());
}

void ShuffleNetV2::thread_tmp_1907_fu_16282_p2() {
    tmp_1907_fu_16282_p2 = (!shuffle_conv_1x1_V_r_reg_38982.read().is_01() || !tmp_1904_fu_16278_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()) + sc_bigint<32>(tmp_1904_fu_16278_p1.read()));
}

void ShuffleNetV2::thread_tmp_1908_fu_16138_p3() {
    tmp_1908_fu_16138_p3 = esl_concat<10,1>(tmp_732_fu_16125_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1909_fu_16169_p3() {
    tmp_1909_fu_16169_p3 = esl_concat<11,1>(tmp_734_fu_16156_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_190_cast_fu_18952_p1() {
    tmp_190_cast_fu_18952_p1 = esl_sext<8,7>(tmp_190_fu_18946_p2.read());
}

void ShuffleNetV2::thread_tmp_190_fu_18946_p2() {
    tmp_190_fu_18946_p2 = (!p_shl24_cast_fu_18930_p1.read().is_01() || !p_shl25_cast_fu_18942_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl24_cast_fu_18930_p1.read()) - sc_biguint<7>(p_shl25_cast_fu_18942_p1.read()));
}

void ShuffleNetV2::thread_tmp_1910_fu_16430_p2() {
    tmp_1910_fu_16430_p2 = (!bias_V_read_reg_38873.read().is_01() || !ap_const_lv32_F0.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_38873.read()) + sc_biguint<32>(ap_const_lv32_F0));
}

void ShuffleNetV2::thread_tmp_1911_fu_16458_p3() {
    tmp_1911_fu_16458_p3 = esl_concat<10,2>(tmp_743_fu_16449_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1912_fu_16481_p2() {
    tmp_1912_fu_16481_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_745_fu_16476_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1916_fu_16505_p2() {
    tmp_1916_fu_16505_p2 = (!tmp_744_fu_16470_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_744_fu_16470_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_tmp_1918_cast_fu_18294_p1() {
    tmp_1918_cast_fu_18294_p1 = esl_zext<32,10>(tmp_803_reg_41459.read());
}

void ShuffleNetV2::thread_tmp_191_cast_cast_fu_18961_p1() {
    tmp_191_cast_cast_fu_18961_p1 = esl_sext<10,7>(tmp_191_fu_18956_p2.read());
}

void ShuffleNetV2::thread_tmp_191_fu_18956_p2() {
    tmp_191_fu_18956_p2 = (!co62_cast1_reg_41650.read().is_01() || !tmp_190_fu_18946_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co62_cast1_reg_41650.read()) + sc_biguint<7>(tmp_190_fu_18946_p2.read()));
}

void ShuffleNetV2::thread_tmp_1920_cast_fu_18249_p1() {
    tmp_1920_cast_fu_18249_p1 = esl_sext<12,11>(tmp_805_fu_18243_p2.read());
}

void ShuffleNetV2::thread_tmp_1921_cast_fu_18258_p1() {
    tmp_1921_cast_fu_18258_p1 = esl_sext<32,12>(tmp_806_reg_41464.read());
}

void ShuffleNetV2::thread_tmp_1922_fu_16625_p2() {
    tmp_1922_fu_16625_p2 = (!bias_V_read_reg_38873.read().is_01() || !ap_const_lv32_108.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_38873.read()) + sc_biguint<32>(ap_const_lv32_108));
}

void ShuffleNetV2::thread_tmp_1925_fu_16610_p1() {
    tmp_1925_fu_16610_p1 = esl_sext<32,14>(tmp_750_fu_16604_p2.read());
}

void ShuffleNetV2::thread_tmp_1926_fu_16614_p2() {
    tmp_1926_fu_16614_p2 = (!shuffle_conv_1x1_V_r_reg_38982.read().is_01() || !tmp_1925_fu_16610_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()) + sc_bigint<32>(tmp_1925_fu_16610_p1.read()));
}

void ShuffleNetV2::thread_tmp_1927_fu_16755_p3() {
    tmp_1927_fu_16755_p3 = esl_concat<10,4>(tmp_760_fu_16750_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1928_fu_16767_p3() {
    tmp_1928_fu_16767_p3 = esl_concat<10,1>(tmp_760_fu_16750_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1929_fu_17066_p1() {
    tmp_1929_fu_17066_p1 = esl_sext<32,14>(tmp_764_fu_17060_p2.read());
}

void ShuffleNetV2::thread_tmp_192_fu_19669_p2() {
    tmp_192_fu_19669_p2 = (!co66_cast_fu_19653_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co66_cast_fu_19653_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_1930_fu_17070_p2() {
    tmp_1930_fu_17070_p2 = (!shuffle_conv_1x1_V_r_reg_38982.read().is_01() || !tmp_1929_fu_17066_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_38982.read()) + sc_bigint<32>(tmp_1929_fu_17066_p1.read()));
}

void ShuffleNetV2::thread_tmp_1933_cast_fu_18636_p1() {
    tmp_1933_cast_fu_18636_p1 = esl_sext<16,15>(tmp_811_fu_18630_p2.read());
}

void ShuffleNetV2::thread_tmp_1934_cast_fu_18645_p1() {
    tmp_1934_cast_fu_18645_p1 = esl_sext<32,16>(tmp_812_fu_18640_p2.read());
}

void ShuffleNetV2::thread_tmp_1935_fu_16926_p3() {
    tmp_1935_fu_16926_p3 = esl_concat<10,1>(tmp_765_fu_16913_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1936_fu_16957_p3() {
    tmp_1936_fu_16957_p3 = esl_concat<11,1>(tmp_767_fu_16944_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1938_fu_17137_p3() {
    tmp_1938_fu_17137_p3 = esl_concat<4,5>(ap_const_lv4_9, tmp_1937_reg_9333.read());
}

void ShuffleNetV2::thread_tmp_193_cast_fu_19585_p1() {
    tmp_193_cast_fu_19585_p1 = esl_sext<10,7>(tmp_193_fu_19579_p2.read());
}

void ShuffleNetV2::thread_tmp_193_fu_19579_p2() {
    tmp_193_fu_19579_p2 = (!p_shl26_cast_fu_19563_p1.read().is_01() || !p_shl27_cast_fu_19575_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl26_cast_fu_19563_p1.read()) - sc_biguint<7>(p_shl27_cast_fu_19575_p1.read()));
}

void ShuffleNetV2::thread_tmp_1940_cast_fu_18711_p1() {
    tmp_1940_cast_fu_18711_p1 = esl_sext<32,8>(tmp_814_reg_41595.read());
}

void ShuffleNetV2::thread_tmp_1941_fu_17145_p1() {
    tmp_1941_fu_17145_p1 = esl_zext<32,9>(tmp_1938_fu_17137_p3.read());
}

void ShuffleNetV2::thread_tmp_1942_fu_17149_p2() {
    tmp_1942_fu_17149_p2 = (!tmp_1941_fu_17145_p1.read().is_01() || !bias_V_read_reg_38873.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1941_fu_17145_p1.read()) + sc_biguint<32>(bias_V_read_reg_38873.read()));
}

void ShuffleNetV2::thread_tmp_1943_fu_17242_p2() {
    tmp_1943_fu_17242_p2 = (!bias_V_read_reg_38873.read().is_01() || !ap_const_lv32_138.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_38873.read()) + sc_biguint<32>(ap_const_lv32_138));
}

void ShuffleNetV2::thread_tmp_1944_fu_17270_p3() {
    tmp_1944_fu_17270_p3 = esl_concat<11,2>(tmp_777_fu_17261_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1945_fu_17293_p2() {
    tmp_1945_fu_17293_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_779_fu_17288_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1946_fu_17317_p2() {
    tmp_1946_fu_17317_p2 = (!tmp_778_fu_17282_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_39023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_778_fu_17282_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_39023.read()));
}

void ShuffleNetV2::thread_tmp_194_cast_fu_19619_p1() {
    tmp_194_cast_fu_19619_p1 = esl_sext<32,7>(tmp_194_reg_41889.read());
}

void ShuffleNetV2::thread_tmp_194_fu_19589_p2() {
    tmp_194_fu_19589_p2 = (!tmp_193_fu_19579_p2.read().is_01() || !i49_cast1_reg_41868.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_193_fu_19579_p2.read()) + sc_biguint<7>(i49_cast1_reg_41868.read()));
}

void ShuffleNetV2::thread_tmp_1950_fu_17439_p2() {
    tmp_1950_fu_17439_p2 = (!bias_V_read_reg_38873.read().is_01() || !ap_const_lv32_150.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_38873.read()) + sc_biguint<32>(ap_const_lv32_150));
}

void ShuffleNetV2::thread_tmp_1952_cast_fu_19075_p1() {
    tmp_1952_cast_fu_19075_p1 = esl_zext<32,10>(tmp_819_reg_41719.read());
}

}

