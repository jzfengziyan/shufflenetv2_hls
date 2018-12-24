#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_p_shl477_cast_fu_27367_p3() {
    p_shl477_cast_fu_27367_p3 = esl_concat<2,6>(tmp_2366_reg_45100.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl478_cast_fu_27374_p3() {
    p_shl478_cast_fu_27374_p3 = esl_concat<4,4>(tmp_2367_reg_45105.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl479_cast_fu_27654_p1() {
    p_shl479_cast_fu_27654_p1 = esl_sext<10,9>(tmp_1012_fu_27646_p3.read());
}

void ShuffleNetV2::thread_p_shl47_cast_fu_22064_p1() {
    p_shl47_cast_fu_22064_p1 = esl_zext<7,4>(p_shl47_fu_22056_p3.read());
}

void ShuffleNetV2::thread_p_shl47_fu_22056_p3() {
    p_shl47_fu_22056_p3 = esl_concat<1,3>(tmp_2278_fu_22040_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl481_cast_fu_27713_p1() {
    p_shl481_cast_fu_27713_p1 = esl_zext<12,11>(tmp_1018_fu_27709_p1.read());
}

void ShuffleNetV2::thread_p_shl483_cast_fu_28316_p1() {
    p_shl483_cast_fu_28316_p1 = esl_zext<10,9>(tmp_1023_fu_28308_p3.read());
}

void ShuffleNetV2::thread_p_shl484_cast_fu_28328_p1() {
    p_shl484_cast_fu_28328_p1 = esl_zext<10,7>(tmp_1024_fu_28320_p3.read());
}

void ShuffleNetV2::thread_p_shl485_cast_fu_28081_p1() {
    p_shl485_cast_fu_28081_p1 = esl_zext<17,16>(tmp_1026_fu_28074_p3.read());
}

void ShuffleNetV2::thread_p_shl486_cast_fu_28092_p1() {
    p_shl486_cast_fu_28092_p1 = esl_zext<17,14>(tmp_1027_fu_28085_p3.read());
}

void ShuffleNetV2::thread_p_shl487_cast_fu_28148_p3() {
    p_shl487_cast_fu_28148_p3 = esl_concat<2,6>(tmp_2377_reg_45360.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl488_cast_fu_28155_p3() {
    p_shl488_cast_fu_28155_p3 = esl_concat<4,4>(tmp_2378_reg_45365.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl489_cast_fu_28435_p1() {
    p_shl489_cast_fu_28435_p1 = esl_zext<10,9>(tmp_1032_fu_28427_p3.read());
}

void ShuffleNetV2::thread_p_shl48_cast_fu_21793_p1() {
    p_shl48_cast_fu_21793_p1 = esl_zext<7,6>(p_shl48_fu_21785_p3.read());
}

void ShuffleNetV2::thread_p_shl48_fu_21785_p3() {
    p_shl48_fu_21785_p3 = esl_concat<2,4>(tmp_2279_fu_21781_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl490_cast_fu_28447_p1() {
    p_shl490_cast_fu_28447_p1 = esl_zext<10,7>(tmp_1033_fu_28439_p3.read());
}

void ShuffleNetV2::thread_p_shl491_cast_fu_28487_p1() {
    p_shl491_cast_fu_28487_p1 = esl_zext<11,10>(tmp_1035_fu_28479_p3.read());
}

void ShuffleNetV2::thread_p_shl492_cast_fu_28499_p1() {
    p_shl492_cast_fu_28499_p1 = esl_zext<11,8>(tmp_1036_fu_28491_p3.read());
}

void ShuffleNetV2::thread_p_shl493_cast_fu_28379_p1() {
    p_shl493_cast_fu_28379_p1 = esl_zext<15,13>(tmp_2379_fu_28371_p3.read());
}

void ShuffleNetV2::thread_p_shl494_cast_fu_28391_p1() {
    p_shl494_cast_fu_28391_p1 = esl_zext<15,11>(tmp_2380_fu_28383_p3.read());
}

void ShuffleNetV2::thread_p_shl495_cast_fu_28542_p1() {
    p_shl495_cast_fu_28542_p1 = esl_zext<15,14>(tmp_2383_fu_28534_p3.read());
}

void ShuffleNetV2::thread_p_shl496_cast_fu_28554_p1() {
    p_shl496_cast_fu_28554_p1 = esl_zext<15,12>(tmp_2384_fu_28546_p3.read());
}

void ShuffleNetV2::thread_p_shl497_cast_fu_28577_p1() {
    p_shl497_cast_fu_28577_p1 = esl_zext<14,13>(tmp_2385_fu_28569_p3.read());
}

void ShuffleNetV2::thread_p_shl498_cast_fu_28589_p1() {
    p_shl498_cast_fu_28589_p1 = esl_zext<14,11>(tmp_2386_fu_28581_p3.read());
}

void ShuffleNetV2::thread_p_shl499_cast_fu_28847_p1() {
    p_shl499_cast_fu_28847_p1 = esl_zext<17,16>(tmp_1047_fu_28840_p3.read());
}

void ShuffleNetV2::thread_p_shl49_cast_fu_21805_p1() {
    p_shl49_cast_fu_21805_p1 = esl_zext<7,4>(p_shl49_fu_21797_p3.read());
}

void ShuffleNetV2::thread_p_shl49_fu_21797_p3() {
    p_shl49_fu_21797_p3 = esl_concat<2,2>(tmp_2279_fu_21781_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl4_cast_fu_18803_p1() {
    p_shl4_cast_fu_18803_p1 = esl_zext<7,6>(p_shl4_fu_18795_p3.read());
}

void ShuffleNetV2::thread_p_shl4_fu_18795_p3() {
    p_shl4_fu_18795_p3 = esl_concat<2,4>(tmp_2235_fu_18791_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl500_cast_fu_28858_p1() {
    p_shl500_cast_fu_28858_p1 = esl_zext<17,14>(tmp_1048_fu_28851_p3.read());
}

void ShuffleNetV2::thread_p_shl501_cast_fu_28914_p3() {
    p_shl501_cast_fu_28914_p3 = esl_concat<2,6>(tmp_2390_reg_45585.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl502_cast_fu_28921_p3() {
    p_shl502_cast_fu_28921_p3 = esl_concat<4,4>(tmp_2391_reg_45590.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl503_cast_fu_29201_p1() {
    p_shl503_cast_fu_29201_p1 = esl_sext<10,9>(tmp_1053_fu_29193_p3.read());
}

void ShuffleNetV2::thread_p_shl505_cast_fu_29260_p1() {
    p_shl505_cast_fu_29260_p1 = esl_zext<12,11>(tmp_1059_fu_29256_p1.read());
}

void ShuffleNetV2::thread_p_shl507_cast_fu_29867_p1() {
    p_shl507_cast_fu_29867_p1 = esl_zext<10,9>(tmp_1064_fu_29859_p3.read());
}

void ShuffleNetV2::thread_p_shl508_cast_fu_29879_p1() {
    p_shl508_cast_fu_29879_p1 = esl_zext<10,7>(tmp_1065_fu_29871_p3.read());
}

void ShuffleNetV2::thread_p_shl509_cast_fu_29632_p1() {
    p_shl509_cast_fu_29632_p1 = esl_zext<17,16>(tmp_1067_fu_29625_p3.read());
}

void ShuffleNetV2::thread_p_shl50_cast_fu_21832_p1() {
    p_shl50_cast_fu_21832_p1 = esl_zext<8,7>(p_shl50_fu_21824_p3.read());
}

void ShuffleNetV2::thread_p_shl50_fu_21824_p3() {
    p_shl50_fu_21824_p3 = esl_concat<2,5>(tmp_2279_fu_21781_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl510_cast_fu_29643_p1() {
    p_shl510_cast_fu_29643_p1 = esl_zext<17,14>(tmp_1068_fu_29636_p3.read());
}

void ShuffleNetV2::thread_p_shl511_cast_fu_29699_p3() {
    p_shl511_cast_fu_29699_p3 = esl_concat<2,6>(tmp_2401_reg_45845.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl512_cast_fu_29706_p3() {
    p_shl512_cast_fu_29706_p3 = esl_concat<4,4>(tmp_2402_reg_45850.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl513_cast_fu_29986_p1() {
    p_shl513_cast_fu_29986_p1 = esl_zext<10,9>(tmp_1073_fu_29978_p3.read());
}

void ShuffleNetV2::thread_p_shl514_cast_fu_29998_p1() {
    p_shl514_cast_fu_29998_p1 = esl_zext<10,7>(tmp_1074_fu_29990_p3.read());
}

void ShuffleNetV2::thread_p_shl515_cast_fu_30038_p1() {
    p_shl515_cast_fu_30038_p1 = esl_zext<11,10>(tmp_1076_fu_30030_p3.read());
}

void ShuffleNetV2::thread_p_shl516_cast_fu_30050_p1() {
    p_shl516_cast_fu_30050_p1 = esl_zext<11,8>(tmp_1077_fu_30042_p3.read());
}

void ShuffleNetV2::thread_p_shl517_cast_fu_29930_p1() {
    p_shl517_cast_fu_29930_p1 = esl_zext<15,13>(tmp_2403_fu_29922_p3.read());
}

void ShuffleNetV2::thread_p_shl518_cast_fu_29942_p1() {
    p_shl518_cast_fu_29942_p1 = esl_zext<15,11>(tmp_2404_fu_29934_p3.read());
}

void ShuffleNetV2::thread_p_shl519_cast_fu_30093_p1() {
    p_shl519_cast_fu_30093_p1 = esl_zext<15,14>(tmp_2407_fu_30085_p3.read());
}

void ShuffleNetV2::thread_p_shl51_cast_fu_21844_p1() {
    p_shl51_cast_fu_21844_p1 = esl_zext<8,5>(p_shl51_fu_21836_p3.read());
}

void ShuffleNetV2::thread_p_shl51_fu_21836_p3() {
    p_shl51_fu_21836_p3 = esl_concat<2,3>(tmp_2279_fu_21781_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl520_cast_fu_30105_p1() {
    p_shl520_cast_fu_30105_p1 = esl_zext<15,12>(tmp_2408_fu_30097_p3.read());
}

void ShuffleNetV2::thread_p_shl521_cast_fu_30128_p1() {
    p_shl521_cast_fu_30128_p1 = esl_zext<14,13>(tmp_2409_fu_30120_p3.read());
}

void ShuffleNetV2::thread_p_shl522_cast_fu_30140_p1() {
    p_shl522_cast_fu_30140_p1 = esl_zext<14,11>(tmp_2410_fu_30132_p3.read());
}

void ShuffleNetV2::thread_p_shl523_cast_fu_30402_p1() {
    p_shl523_cast_fu_30402_p1 = esl_zext<17,16>(tmp_1089_fu_30398_p1.read());
}

void ShuffleNetV2::thread_p_shl524_cast_fu_30417_p1() {
    p_shl524_cast_fu_30417_p1 = esl_zext<17,14>(tmp_1091_fu_30413_p1.read());
}

void ShuffleNetV2::thread_p_shl525_cast_fu_30473_p3() {
    p_shl525_cast_fu_30473_p3 = esl_concat<2,6>(tmp_2414_reg_46070.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl526_cast_fu_30480_p3() {
    p_shl526_cast_fu_30480_p3 = esl_concat<4,4>(tmp_2415_reg_46075.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl527_cast_fu_30760_p1() {
    p_shl527_cast_fu_30760_p1 = esl_sext<10,9>(tmp_1096_fu_30752_p3.read());
}

void ShuffleNetV2::thread_p_shl529_cast_fu_30811_p1() {
    p_shl529_cast_fu_30811_p1 = esl_zext<13,12>(tmp_1101_fu_30804_p3.read());
}

void ShuffleNetV2::thread_p_shl52_cast_fu_22470_p1() {
    p_shl52_cast_fu_22470_p1 = esl_zext<7,6>(p_shl52_fu_22462_p3.read());
}

void ShuffleNetV2::thread_p_shl52_fu_22462_p3() {
    p_shl52_fu_22462_p3 = esl_concat<1,5>(tmp_2285_fu_22458_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl531_cast_fu_31430_p1() {
    p_shl531_cast_fu_31430_p1 = esl_zext<10,9>(tmp_1106_fu_31422_p3.read());
}

void ShuffleNetV2::thread_p_shl532_cast_fu_31442_p1() {
    p_shl532_cast_fu_31442_p1 = esl_zext<10,7>(tmp_1107_fu_31434_p3.read());
}

void ShuffleNetV2::thread_p_shl533_cast_fu_31187_p1() {
    p_shl533_cast_fu_31187_p1 = esl_zext<17,16>(tmp_1110_fu_31183_p1.read());
}

void ShuffleNetV2::thread_p_shl534_cast_fu_31202_p1() {
    p_shl534_cast_fu_31202_p1 = esl_zext<17,14>(tmp_1112_fu_31198_p1.read());
}

void ShuffleNetV2::thread_p_shl535_cast_fu_31258_p3() {
    p_shl535_cast_fu_31258_p3 = esl_concat<2,6>(tmp_2425_reg_46330.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl536_cast_fu_31265_p3() {
    p_shl536_cast_fu_31265_p3 = esl_concat<4,4>(tmp_2426_reg_46335.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl537_cast_fu_31549_p1() {
    p_shl537_cast_fu_31549_p1 = esl_zext<10,9>(tmp_1117_fu_31541_p3.read());
}

void ShuffleNetV2::thread_p_shl538_cast_fu_31561_p1() {
    p_shl538_cast_fu_31561_p1 = esl_zext<10,7>(tmp_1118_fu_31553_p3.read());
}

void ShuffleNetV2::thread_p_shl539_cast_fu_31601_p1() {
    p_shl539_cast_fu_31601_p1 = esl_zext<11,10>(tmp_1120_fu_31593_p3.read());
}

void ShuffleNetV2::thread_p_shl53_cast_fu_22482_p1() {
    p_shl53_cast_fu_22482_p1 = esl_zext<7,4>(p_shl53_fu_22474_p3.read());
}

void ShuffleNetV2::thread_p_shl53_fu_22474_p3() {
    p_shl53_fu_22474_p3 = esl_concat<1,3>(tmp_2285_fu_22458_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl540_cast_fu_31613_p1() {
    p_shl540_cast_fu_31613_p1 = esl_zext<11,8>(tmp_1121_fu_31605_p3.read());
}

void ShuffleNetV2::thread_p_shl541_cast_fu_31493_p1() {
    p_shl541_cast_fu_31493_p1 = esl_zext<15,13>(tmp_2427_fu_31485_p3.read());
}

void ShuffleNetV2::thread_p_shl542_cast_fu_31505_p1() {
    p_shl542_cast_fu_31505_p1 = esl_zext<15,11>(tmp_2428_fu_31497_p3.read());
}

void ShuffleNetV2::thread_p_shl543_cast_fu_31656_p1() {
    p_shl543_cast_fu_31656_p1 = esl_zext<15,14>(tmp_2431_fu_31648_p3.read());
}

void ShuffleNetV2::thread_p_shl544_cast_fu_31668_p1() {
    p_shl544_cast_fu_31668_p1 = esl_zext<15,12>(tmp_2432_fu_31660_p3.read());
}

void ShuffleNetV2::thread_p_shl545_cast_fu_31691_p1() {
    p_shl545_cast_fu_31691_p1 = esl_zext<14,13>(tmp_2433_fu_31683_p3.read());
}

void ShuffleNetV2::thread_p_shl546_cast_fu_31703_p1() {
    p_shl546_cast_fu_31703_p1 = esl_zext<14,11>(tmp_2434_fu_31695_p3.read());
}

void ShuffleNetV2::thread_p_shl547_cast_fu_31965_p1() {
    p_shl547_cast_fu_31965_p1 = esl_zext<17,16>(tmp_1133_fu_31961_p1.read());
}

void ShuffleNetV2::thread_p_shl548_cast_fu_31980_p1() {
    p_shl548_cast_fu_31980_p1 = esl_zext<17,14>(tmp_1135_fu_31976_p1.read());
}

void ShuffleNetV2::thread_p_shl549_cast_fu_32036_p3() {
    p_shl549_cast_fu_32036_p3 = esl_concat<2,6>(tmp_2438_reg_46555.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl54_cast_fu_22818_p1() {
    p_shl54_cast_fu_22818_p1 = esl_zext<7,6>(p_shl54_fu_22810_p3.read());
}

void ShuffleNetV2::thread_p_shl54_fu_22810_p3() {
    p_shl54_fu_22810_p3 = esl_concat<1,5>(tmp_2291_fu_22806_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl550_cast_fu_32043_p3() {
    p_shl550_cast_fu_32043_p3 = esl_concat<4,4>(tmp_2439_reg_46560.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl551_cast_fu_32327_p1() {
    p_shl551_cast_fu_32327_p1 = esl_sext<10,9>(tmp_1140_fu_32319_p3.read());
}

void ShuffleNetV2::thread_p_shl553_cast_fu_32378_p1() {
    p_shl553_cast_fu_32378_p1 = esl_zext<13,12>(tmp_1145_fu_32371_p3.read());
}

void ShuffleNetV2::thread_p_shl555_cast_fu_32997_p1() {
    p_shl555_cast_fu_32997_p1 = esl_zext<10,9>(tmp_1150_fu_32989_p3.read());
}

void ShuffleNetV2::thread_p_shl556_cast_fu_33009_p1() {
    p_shl556_cast_fu_33009_p1 = esl_zext<10,7>(tmp_1151_fu_33001_p3.read());
}

void ShuffleNetV2::thread_p_shl557_cast_fu_32758_p1() {
    p_shl557_cast_fu_32758_p1 = esl_zext<18,17>(tmp_1153_fu_32751_p3.read());
}

void ShuffleNetV2::thread_p_shl558_cast_fu_32769_p1() {
    p_shl558_cast_fu_32769_p1 = esl_zext<18,15>(tmp_1154_fu_32762_p3.read());
}

void ShuffleNetV2::thread_p_shl559_cast_fu_32825_p3() {
    p_shl559_cast_fu_32825_p3 = esl_concat<2,6>(tmp_2449_reg_46815.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl55_cast_fu_22830_p1() {
    p_shl55_cast_fu_22830_p1 = esl_zext<7,4>(p_shl55_fu_22822_p3.read());
}

void ShuffleNetV2::thread_p_shl55_fu_22822_p3() {
    p_shl55_fu_22822_p3 = esl_concat<1,3>(tmp_2291_fu_22806_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl560_cast_fu_32832_p3() {
    p_shl560_cast_fu_32832_p3 = esl_concat<4,4>(tmp_2450_reg_46820.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl561_cast_fu_33060_p1() {
    p_shl561_cast_fu_33060_p1 = esl_zext<15,13>(tmp_2454_fu_33052_p3.read());
}

void ShuffleNetV2::thread_p_shl562_cast_fu_33072_p1() {
    p_shl562_cast_fu_33072_p1 = esl_zext<15,11>(tmp_2455_fu_33064_p3.read());
}

void ShuffleNetV2::thread_p_shl563_cast_fu_33305_p1() {
    p_shl563_cast_fu_33305_p1 = esl_zext<18,17>(tmp_1162_fu_33298_p3.read());
}

void ShuffleNetV2::thread_p_shl564_cast_fu_33316_p1() {
    p_shl564_cast_fu_33316_p1 = esl_zext<18,15>(tmp_1163_fu_33309_p3.read());
}

void ShuffleNetV2::thread_p_shl565_cast_fu_33372_p3() {
    p_shl565_cast_fu_33372_p3 = esl_concat<3,7>(tmp_2460_reg_46986.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl566_cast_fu_33379_p3() {
    p_shl566_cast_fu_33379_p3 = esl_concat<5,5>(tmp_2461_reg_46991.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl567_cast_fu_33663_p1() {
    p_shl567_cast_fu_33663_p1 = esl_sext<11,10>(tmp_1168_fu_33655_p3.read());
}

void ShuffleNetV2::thread_p_shl569_cast_fu_33714_p1() {
    p_shl569_cast_fu_33714_p1 = esl_zext<13,12>(tmp_1173_fu_33707_p3.read());
}

void ShuffleNetV2::thread_p_shl56_cast_fu_22559_p1() {
    p_shl56_cast_fu_22559_p1 = esl_zext<7,6>(p_shl56_fu_22551_p3.read());
}

void ShuffleNetV2::thread_p_shl56_fu_22551_p3() {
    p_shl56_fu_22551_p3 = esl_concat<2,4>(tmp_2292_fu_22547_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl571_cast_fu_34074_p1() {
    p_shl571_cast_fu_34074_p1 = esl_zext<18,17>(tmp_1178_fu_34067_p3.read());
}

void ShuffleNetV2::thread_p_shl572_cast_fu_34085_p1() {
    p_shl572_cast_fu_34085_p1 = esl_zext<18,15>(tmp_1179_fu_34078_p3.read());
}

void ShuffleNetV2::thread_p_shl573_cast_fu_34141_p3() {
    p_shl573_cast_fu_34141_p3 = esl_concat<3,7>(tmp_2473_reg_47246.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl574_cast_fu_34148_p3() {
    p_shl574_cast_fu_34148_p3 = esl_concat<5,5>(tmp_2474_reg_47251.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl575_cast_fu_34436_p1() {
    p_shl575_cast_fu_34436_p1 = esl_sext<11,10>(tmp_1184_fu_34428_p3.read());
}

void ShuffleNetV2::thread_p_shl577_cast_fu_34487_p1() {
    p_shl577_cast_fu_34487_p1 = esl_zext<13,12>(tmp_1189_fu_34480_p3.read());
}

void ShuffleNetV2::thread_p_shl579_cast_fu_35078_p1() {
    p_shl579_cast_fu_35078_p1 = esl_zext<11,10>(tmp_1194_fu_35070_p3.read());
}

void ShuffleNetV2::thread_p_shl57_cast_fu_22571_p1() {
    p_shl57_cast_fu_22571_p1 = esl_zext<7,4>(p_shl57_fu_22563_p3.read());
}

void ShuffleNetV2::thread_p_shl57_fu_22563_p3() {
    p_shl57_fu_22563_p3 = esl_concat<2,2>(tmp_2292_fu_22547_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl580_cast_fu_35090_p1() {
    p_shl580_cast_fu_35090_p1 = esl_zext<11,8>(tmp_1195_fu_35082_p3.read());
}

void ShuffleNetV2::thread_p_shl581_cast_fu_35134_p1() {
    p_shl581_cast_fu_35134_p1 = esl_zext<12,11>(tmp_1197_fu_35126_p3.read());
}

void ShuffleNetV2::thread_p_shl582_cast_fu_35146_p1() {
    p_shl582_cast_fu_35146_p1 = esl_zext<12,9>(tmp_1198_fu_35138_p3.read());
}

void ShuffleNetV2::thread_p_shl583_cast_fu_34843_p1() {
    p_shl583_cast_fu_34843_p1 = esl_zext<18,17>(tmp_1200_fu_34836_p3.read());
}

void ShuffleNetV2::thread_p_shl584_cast_fu_34854_p1() {
    p_shl584_cast_fu_34854_p1 = esl_zext<18,15>(tmp_1201_fu_34847_p3.read());
}

void ShuffleNetV2::thread_p_shl585_cast_fu_34910_p3() {
    p_shl585_cast_fu_34910_p3 = esl_concat<3,7>(tmp_2486_reg_47506.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl586_cast_fu_34917_p3() {
    p_shl586_cast_fu_34917_p3 = esl_concat<5,5>(tmp_2487_reg_47511.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl587_cast_fu_35189_p3() {
    p_shl587_cast_fu_35189_p3 = esl_concat<11,3>(tmp_2491_fu_35185_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl588_cast_fu_35197_p3() {
    p_shl588_cast_fu_35197_p3 = esl_concat<13,1>(tmp_1206_fu_35180_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl589_cast_fu_35220_p3() {
    p_shl589_cast_fu_35220_p3 = esl_concat<10,3>(tmp_2492_fu_35216_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl58_cast_fu_22598_p1() {
    p_shl58_cast_fu_22598_p1 = esl_zext<8,7>(p_shl58_fu_22590_p3.read());
}

void ShuffleNetV2::thread_p_shl58_fu_22590_p3() {
    p_shl58_fu_22590_p3 = esl_concat<2,5>(tmp_2292_fu_22547_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl590_cast_fu_35228_p3() {
    p_shl590_cast_fu_35228_p3 = esl_concat<12,1>(tmp_1208_fu_35211_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl591_cast_fu_35478_p1() {
    p_shl591_cast_fu_35478_p1 = esl_zext<18,17>(tmp_1212_fu_35471_p3.read());
}

void ShuffleNetV2::thread_p_shl592_cast_fu_35489_p1() {
    p_shl592_cast_fu_35489_p1 = esl_zext<18,15>(tmp_1213_fu_35482_p3.read());
}

void ShuffleNetV2::thread_p_shl593_cast_fu_35545_p3() {
    p_shl593_cast_fu_35545_p3 = esl_concat<3,7>(tmp_2497_reg_47687.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl594_cast_fu_35552_p3() {
    p_shl594_cast_fu_35552_p3 = esl_concat<5,5>(tmp_2498_reg_47692.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl595_cast_fu_35832_p1() {
    p_shl595_cast_fu_35832_p1 = esl_sext<11,10>(tmp_1218_fu_35824_p3.read());
}

void ShuffleNetV2::thread_p_shl597_cast_fu_35883_p1() {
    p_shl597_cast_fu_35883_p1 = esl_zext<13,12>(tmp_1223_fu_35876_p3.read());
}

void ShuffleNetV2::thread_p_shl599_cast_fu_36482_p1() {
    p_shl599_cast_fu_36482_p1 = esl_zext<11,10>(tmp_1228_fu_36474_p3.read());
}

void ShuffleNetV2::thread_p_shl59_cast_fu_22610_p1() {
    p_shl59_cast_fu_22610_p1 = esl_zext<8,5>(p_shl59_fu_22602_p3.read());
}

void ShuffleNetV2::thread_p_shl59_fu_22602_p3() {
    p_shl59_fu_22602_p3 = esl_concat<2,3>(tmp_2292_fu_22547_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl5_cast_fu_18815_p1() {
    p_shl5_cast_fu_18815_p1 = esl_zext<7,4>(p_shl5_fu_18807_p3.read());
}

void ShuffleNetV2::thread_p_shl5_fu_18807_p3() {
    p_shl5_fu_18807_p3 = esl_concat<2,2>(tmp_2235_fu_18791_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl600_cast_fu_36494_p1() {
    p_shl600_cast_fu_36494_p1 = esl_zext<11,8>(tmp_1229_fu_36486_p3.read());
}

void ShuffleNetV2::thread_p_shl601_cast_fu_36243_p1() {
    p_shl601_cast_fu_36243_p1 = esl_zext<18,17>(tmp_1232_fu_36239_p1.read());
}

void ShuffleNetV2::thread_p_shl602_cast_fu_36258_p1() {
    p_shl602_cast_fu_36258_p1 = esl_zext<18,15>(tmp_1234_fu_36254_p1.read());
}

void ShuffleNetV2::thread_p_shl603_cast_fu_36314_p3() {
    p_shl603_cast_fu_36314_p3 = esl_concat<3,7>(tmp_2510_reg_47947.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl604_cast_fu_36321_p3() {
    p_shl604_cast_fu_36321_p3 = esl_concat<5,5>(tmp_2511_reg_47952.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl605_cast_fu_36605_p1() {
    p_shl605_cast_fu_36605_p1 = esl_zext<11,10>(tmp_1239_fu_36597_p3.read());
}

void ShuffleNetV2::thread_p_shl606_cast_fu_36617_p1() {
    p_shl606_cast_fu_36617_p1 = esl_zext<11,8>(tmp_1240_fu_36609_p3.read());
}

void ShuffleNetV2::thread_p_shl607_cast_fu_36661_p1() {
    p_shl607_cast_fu_36661_p1 = esl_zext<12,11>(tmp_1242_fu_36653_p3.read());
}

void ShuffleNetV2::thread_p_shl608_cast_fu_36673_p1() {
    p_shl608_cast_fu_36673_p1 = esl_zext<12,9>(tmp_1243_fu_36665_p3.read());
}

void ShuffleNetV2::thread_p_shl609_cast_fu_36545_p3() {
    p_shl609_cast_fu_36545_p3 = esl_concat<11,3>(tmp_2512_fu_36541_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl60_cast_fu_23159_p1() {
    p_shl60_cast_fu_23159_p1 = esl_zext<7,6>(p_shl60_fu_23151_p3.read());
}

void ShuffleNetV2::thread_p_shl60_fu_23151_p3() {
    p_shl60_fu_23151_p3 = esl_concat<1,5>(tmp_2298_fu_23147_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl610_cast_fu_36561_p1() {
    p_shl610_cast_fu_36561_p1 = esl_sext<14,13>(tmp_2513_fu_36553_p3.read());
}

void ShuffleNetV2::thread_p_shl611_cast_fu_36716_p3() {
    p_shl611_cast_fu_36716_p3 = esl_concat<11,3>(tmp_2517_fu_36712_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl612_cast_fu_36724_p3() {
    p_shl612_cast_fu_36724_p3 = esl_concat<13,1>(tmp_1247_fu_36707_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl613_cast_fu_36747_p3() {
    p_shl613_cast_fu_36747_p3 = esl_concat<10,3>(tmp_2518_fu_36743_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl614_cast_fu_36755_p3() {
    p_shl614_cast_fu_36755_p3 = esl_concat<12,1>(tmp_1249_fu_36738_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl615_cast_fu_37005_p1() {
    p_shl615_cast_fu_37005_p1 = esl_zext<19,18>(tmp_1254_fu_36998_p3.read());
}

void ShuffleNetV2::thread_p_shl616_cast_fu_37016_p1() {
    p_shl616_cast_fu_37016_p1 = esl_zext<19,16>(tmp_1255_fu_37009_p3.read());
}

void ShuffleNetV2::thread_p_shl617_cast_fu_37072_p3() {
    p_shl617_cast_fu_37072_p3 = esl_concat<3,7>(tmp_2523_reg_48172.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl618_cast_fu_37079_p3() {
    p_shl618_cast_fu_37079_p3 = esl_concat<5,5>(tmp_2524_reg_48177.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl619_cast_fu_37359_p1() {
    p_shl619_cast_fu_37359_p1 = esl_sext<11,10>(tmp_1260_fu_37351_p3.read());
}

void ShuffleNetV2::thread_p_shl61_cast_fu_23171_p1() {
    p_shl61_cast_fu_23171_p1 = esl_zext<7,4>(p_shl61_fu_23163_p3.read());
}

void ShuffleNetV2::thread_p_shl61_fu_23163_p3() {
    p_shl61_fu_23163_p3 = esl_concat<1,3>(tmp_2298_fu_23147_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl621_cast_fu_37418_p1() {
    p_shl621_cast_fu_37418_p1 = esl_zext<13,12>(tmp_1266_fu_37414_p1.read());
}

void ShuffleNetV2::thread_p_shl623_cast_fu_38013_p1() {
    p_shl623_cast_fu_38013_p1 = esl_zext<11,10>(tmp_1271_fu_38005_p3.read());
}

void ShuffleNetV2::thread_p_shl624_cast_fu_38025_p1() {
    p_shl624_cast_fu_38025_p1 = esl_zext<11,8>(tmp_1272_fu_38017_p3.read());
}

void ShuffleNetV2::thread_p_shl625_cast_fu_37778_p1() {
    p_shl625_cast_fu_37778_p1 = esl_zext<19,18>(tmp_1274_fu_37771_p3.read());
}

void ShuffleNetV2::thread_p_shl626_cast_fu_37789_p1() {
    p_shl626_cast_fu_37789_p1 = esl_zext<19,16>(tmp_1275_fu_37782_p3.read());
}

void ShuffleNetV2::thread_p_shl627_cast_fu_37845_p3() {
    p_shl627_cast_fu_37845_p3 = esl_concat<3,7>(tmp_2536_reg_48432.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl628_cast_fu_37852_p3() {
    p_shl628_cast_fu_37852_p3 = esl_concat<5,5>(tmp_2537_reg_48437.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl629_cast_fu_38136_p1() {
    p_shl629_cast_fu_38136_p1 = esl_zext<11,10>(tmp_1280_fu_38128_p3.read());
}

void ShuffleNetV2::thread_p_shl62_cast_fu_23251_p1() {
    p_shl62_cast_fu_23251_p1 = esl_zext<7,6>(p_shl62_fu_23243_p3.read());
}

void ShuffleNetV2::thread_p_shl62_fu_23243_p3() {
    p_shl62_fu_23243_p3 = esl_concat<1,5>(tmp_2296_fu_23239_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl630_cast_fu_38148_p1() {
    p_shl630_cast_fu_38148_p1 = esl_zext<11,8>(tmp_1281_fu_38140_p3.read());
}

void ShuffleNetV2::thread_p_shl631_cast_fu_38192_p1() {
    p_shl631_cast_fu_38192_p1 = esl_zext<12,11>(tmp_1283_fu_38184_p3.read());
}

void ShuffleNetV2::thread_p_shl632_cast_fu_38204_p1() {
    p_shl632_cast_fu_38204_p1 = esl_zext<12,9>(tmp_1284_fu_38196_p3.read());
}

void ShuffleNetV2::thread_p_shl633_cast_fu_38076_p3() {
    p_shl633_cast_fu_38076_p3 = esl_concat<11,3>(tmp_2538_fu_38072_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl634_cast_fu_38092_p1() {
    p_shl634_cast_fu_38092_p1 = esl_sext<14,13>(tmp_2539_fu_38084_p3.read());
}

void ShuffleNetV2::thread_p_shl635_cast_fu_38247_p3() {
    p_shl635_cast_fu_38247_p3 = esl_concat<11,3>(tmp_2543_fu_38243_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl636_cast_fu_38255_p3() {
    p_shl636_cast_fu_38255_p3 = esl_concat<13,1>(tmp_1288_fu_38238_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl637_cast_fu_38278_p3() {
    p_shl637_cast_fu_38278_p3 = esl_concat<10,3>(tmp_2544_fu_38274_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl638_cast_fu_38286_p3() {
    p_shl638_cast_fu_38286_p3 = esl_concat<12,1>(tmp_1290_fu_38269_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl639_cast_fu_38536_p1() {
    p_shl639_cast_fu_38536_p1 = esl_zext<19,18>(tmp_1295_fu_38529_p3.read());
}

void ShuffleNetV2::thread_p_shl63_cast_fu_23263_p1() {
    p_shl63_cast_fu_23263_p1 = esl_zext<7,4>(p_shl63_fu_23255_p3.read());
}

void ShuffleNetV2::thread_p_shl63_fu_23255_p3() {
    p_shl63_fu_23255_p3 = esl_concat<1,3>(tmp_2296_fu_23239_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl640_cast_fu_38547_p1() {
    p_shl640_cast_fu_38547_p1 = esl_zext<19,16>(tmp_1296_fu_38540_p3.read());
}

void ShuffleNetV2::thread_p_shl641_cast_fu_38603_p3() {
    p_shl641_cast_fu_38603_p3 = esl_concat<3,7>(tmp_2549_reg_48657.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl642_cast_fu_38610_p3() {
    p_shl642_cast_fu_38610_p3 = esl_concat<5,5>(tmp_2550_reg_48662.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl643_cast_fu_38890_p1() {
    p_shl643_cast_fu_38890_p1 = esl_sext<11,10>(tmp_1301_fu_38882_p3.read());
}

void ShuffleNetV2::thread_p_shl645_cast_fu_38941_p1() {
    p_shl645_cast_fu_38941_p1 = esl_zext<14,13>(tmp_1306_fu_38934_p3.read());
}

void ShuffleNetV2::thread_p_shl647_cast_fu_39536_p1() {
    p_shl647_cast_fu_39536_p1 = esl_zext<11,10>(tmp_1311_fu_39528_p3.read());
}

void ShuffleNetV2::thread_p_shl648_cast_fu_39548_p1() {
    p_shl648_cast_fu_39548_p1 = esl_zext<11,8>(tmp_1312_fu_39540_p3.read());
}

void ShuffleNetV2::thread_p_shl649_cast_fu_39301_p1() {
    p_shl649_cast_fu_39301_p1 = esl_zext<19,18>(tmp_1314_fu_39294_p3.read());
}

void ShuffleNetV2::thread_p_shl64_cast_fu_22962_p1() {
    p_shl64_cast_fu_22962_p1 = esl_zext<7,6>(p_shl64_fu_22954_p3.read());
}

void ShuffleNetV2::thread_p_shl64_fu_22954_p3() {
    p_shl64_fu_22954_p3 = esl_concat<1,5>(tmp_2299_fu_22950_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl650_cast_fu_39312_p1() {
    p_shl650_cast_fu_39312_p1 = esl_zext<19,16>(tmp_1315_fu_39305_p3.read());
}

void ShuffleNetV2::thread_p_shl651_cast_fu_39368_p3() {
    p_shl651_cast_fu_39368_p3 = esl_concat<3,7>(tmp_2562_reg_48917.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl652_cast_fu_39375_p3() {
    p_shl652_cast_fu_39375_p3 = esl_concat<5,5>(tmp_2563_reg_48922.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl653_cast_fu_39659_p1() {
    p_shl653_cast_fu_39659_p1 = esl_zext<12,11>(tmp_1320_fu_39651_p3.read());
}

void ShuffleNetV2::thread_p_shl654_cast_fu_39671_p1() {
    p_shl654_cast_fu_39671_p1 = esl_zext<12,9>(tmp_1321_fu_39663_p3.read());
}

void ShuffleNetV2::thread_p_shl655_cast_fu_39599_p3() {
    p_shl655_cast_fu_39599_p3 = esl_concat<11,3>(tmp_2564_fu_39595_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl656_cast_fu_39615_p1() {
    p_shl656_cast_fu_39615_p1 = esl_sext<14,13>(tmp_2565_fu_39607_p3.read());
}

void ShuffleNetV2::thread_p_shl657_cast_fu_39751_p3() {
    p_shl657_cast_fu_39751_p3 = esl_concat<11,3>(tmp_2566_fu_39747_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl658_cast_fu_39759_p3() {
    p_shl658_cast_fu_39759_p3 = esl_concat<13,1>(tmp_1327_fu_39742_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl65_cast_fu_22974_p1() {
    p_shl65_cast_fu_22974_p1 = esl_zext<7,4>(p_shl65_fu_22966_p3.read());
}

void ShuffleNetV2::thread_p_shl65_fu_22966_p3() {
    p_shl65_fu_22966_p3 = esl_concat<1,3>(tmp_2299_fu_22950_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl66_cast_fu_23599_p1() {
    p_shl66_cast_fu_23599_p1 = esl_zext<7,6>(p_shl66_fu_23591_p3.read());
}

void ShuffleNetV2::thread_p_shl66_fu_23591_p3() {
    p_shl66_fu_23591_p3 = esl_concat<1,5>(tmp_2302_fu_23587_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl67_cast_fu_23611_p1() {
    p_shl67_cast_fu_23611_p1 = esl_zext<7,4>(p_shl67_fu_23603_p3.read());
}

void ShuffleNetV2::thread_p_shl67_fu_23603_p3() {
    p_shl67_fu_23603_p3 = esl_concat<1,3>(tmp_2302_fu_23587_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl68_cast_fu_23340_p1() {
    p_shl68_cast_fu_23340_p1 = esl_zext<7,6>(p_shl68_fu_23332_p3.read());
}

void ShuffleNetV2::thread_p_shl68_fu_23332_p3() {
    p_shl68_fu_23332_p3 = esl_concat<2,4>(tmp_2303_fu_23328_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl69_cast_fu_23352_p1() {
    p_shl69_cast_fu_23352_p1 = esl_zext<7,4>(p_shl69_fu_23344_p3.read());
}

void ShuffleNetV2::thread_p_shl69_fu_23344_p3() {
    p_shl69_fu_23344_p3 = esl_concat<2,2>(tmp_2303_fu_23328_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl6_cast_fu_18842_p1() {
    p_shl6_cast_fu_18842_p1 = esl_zext<8,7>(p_shl6_fu_18834_p3.read());
}

void ShuffleNetV2::thread_p_shl6_fu_18834_p3() {
    p_shl6_fu_18834_p3 = esl_concat<2,5>(tmp_2235_fu_18791_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl70_cast_fu_23379_p1() {
    p_shl70_cast_fu_23379_p1 = esl_zext<8,7>(p_shl70_fu_23371_p3.read());
}

void ShuffleNetV2::thread_p_shl70_fu_23371_p3() {
    p_shl70_fu_23371_p3 = esl_concat<2,5>(tmp_2303_fu_23328_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl71_cast_fu_23391_p1() {
    p_shl71_cast_fu_23391_p1 = esl_zext<8,5>(p_shl71_fu_23383_p3.read());
}

void ShuffleNetV2::thread_p_shl71_fu_23383_p3() {
    p_shl71_fu_23383_p3 = esl_concat<2,3>(tmp_2303_fu_23328_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl72_cast_fu_24021_p1() {
    p_shl72_cast_fu_24021_p1 = esl_zext<7,6>(p_shl72_fu_24013_p3.read());
}

void ShuffleNetV2::thread_p_shl72_fu_24013_p3() {
    p_shl72_fu_24013_p3 = esl_concat<1,5>(tmp_2309_fu_24009_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl73_cast_fu_24033_p1() {
    p_shl73_cast_fu_24033_p1 = esl_zext<7,4>(p_shl73_fu_24025_p3.read());
}

void ShuffleNetV2::thread_p_shl73_fu_24025_p3() {
    p_shl73_fu_24025_p3 = esl_concat<1,3>(tmp_2309_fu_24009_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl74_cast_fu_24377_p1() {
    p_shl74_cast_fu_24377_p1 = esl_zext<7,6>(p_shl74_fu_24369_p3.read());
}

void ShuffleNetV2::thread_p_shl74_fu_24369_p3() {
    p_shl74_fu_24369_p3 = esl_concat<1,5>(tmp_2315_fu_24365_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl75_cast_fu_24389_p1() {
    p_shl75_cast_fu_24389_p1 = esl_zext<7,4>(p_shl75_fu_24381_p3.read());
}

void ShuffleNetV2::thread_p_shl75_fu_24381_p3() {
    p_shl75_fu_24381_p3 = esl_concat<1,3>(tmp_2315_fu_24365_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl76_cast_fu_24110_p1() {
    p_shl76_cast_fu_24110_p1 = esl_zext<7,6>(p_shl76_fu_24102_p3.read());
}

void ShuffleNetV2::thread_p_shl76_fu_24102_p3() {
    p_shl76_fu_24102_p3 = esl_concat<2,4>(tmp_2316_fu_24098_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl77_cast_fu_24122_p1() {
    p_shl77_cast_fu_24122_p1 = esl_zext<7,4>(p_shl77_fu_24114_p3.read());
}

void ShuffleNetV2::thread_p_shl77_fu_24114_p3() {
    p_shl77_fu_24114_p3 = esl_concat<2,2>(tmp_2316_fu_24098_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl78_cast_fu_24149_p1() {
    p_shl78_cast_fu_24149_p1 = esl_zext<8,7>(p_shl78_fu_24141_p3.read());
}

void ShuffleNetV2::thread_p_shl78_fu_24141_p3() {
    p_shl78_fu_24141_p3 = esl_concat<2,5>(tmp_2316_fu_24098_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl79_cast_fu_24161_p1() {
    p_shl79_cast_fu_24161_p1 = esl_zext<8,5>(p_shl79_fu_24153_p3.read());
}

void ShuffleNetV2::thread_p_shl79_fu_24153_p3() {
    p_shl79_fu_24153_p3 = esl_concat<2,3>(tmp_2316_fu_24098_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl7_cast_fu_18854_p1() {
    p_shl7_cast_fu_18854_p1 = esl_zext<8,5>(p_shl7_fu_18846_p3.read());
}

void ShuffleNetV2::thread_p_shl7_fu_18846_p3() {
    p_shl7_fu_18846_p3 = esl_concat<2,3>(tmp_2235_fu_18791_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl80_cast_fu_24718_p1() {
    p_shl80_cast_fu_24718_p1 = esl_zext<7,6>(p_shl80_fu_24710_p3.read());
}

void ShuffleNetV2::thread_p_shl80_fu_24710_p3() {
    p_shl80_fu_24710_p3 = esl_concat<1,5>(tmp_2322_fu_24706_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl81_cast_fu_24730_p1() {
    p_shl81_cast_fu_24730_p1 = esl_zext<7,4>(p_shl81_fu_24722_p3.read());
}

void ShuffleNetV2::thread_p_shl81_fu_24722_p3() {
    p_shl81_fu_24722_p3 = esl_concat<1,3>(tmp_2322_fu_24706_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl82_cast_fu_24810_p1() {
    p_shl82_cast_fu_24810_p1 = esl_zext<7,6>(p_shl82_fu_24802_p3.read());
}

void ShuffleNetV2::thread_p_shl82_fu_24802_p3() {
    p_shl82_fu_24802_p3 = esl_concat<1,5>(tmp_2320_fu_24798_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl83_cast_fu_24822_p1() {
    p_shl83_cast_fu_24822_p1 = esl_zext<7,4>(p_shl83_fu_24814_p3.read());
}

void ShuffleNetV2::thread_p_shl83_fu_24814_p3() {
    p_shl83_fu_24814_p3 = esl_concat<1,3>(tmp_2320_fu_24798_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl84_cast_fu_24525_p1() {
    p_shl84_cast_fu_24525_p1 = esl_zext<7,6>(p_shl84_fu_24517_p3.read());
}

void ShuffleNetV2::thread_p_shl84_fu_24517_p3() {
    p_shl84_fu_24517_p3 = esl_concat<1,5>(tmp_2323_fu_24513_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl85_cast_fu_24537_p1() {
    p_shl85_cast_fu_24537_p1 = esl_zext<7,4>(p_shl85_fu_24529_p3.read());
}

void ShuffleNetV2::thread_p_shl85_fu_24529_p3() {
    p_shl85_fu_24529_p3 = esl_concat<1,3>(tmp_2323_fu_24513_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl86_cast_fu_25158_p1() {
    p_shl86_cast_fu_25158_p1 = esl_zext<7,6>(p_shl86_fu_25150_p3.read());
}

void ShuffleNetV2::thread_p_shl86_fu_25150_p3() {
    p_shl86_fu_25150_p3 = esl_concat<1,5>(tmp_2326_fu_25146_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl87_cast_fu_25170_p1() {
    p_shl87_cast_fu_25170_p1 = esl_zext<7,4>(p_shl87_fu_25162_p3.read());
}

void ShuffleNetV2::thread_p_shl87_fu_25162_p3() {
    p_shl87_fu_25162_p3 = esl_concat<1,3>(tmp_2326_fu_25146_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl88_cast_fu_24899_p1() {
    p_shl88_cast_fu_24899_p1 = esl_zext<7,6>(p_shl88_fu_24891_p3.read());
}

void ShuffleNetV2::thread_p_shl88_fu_24891_p3() {
    p_shl88_fu_24891_p3 = esl_concat<2,4>(tmp_2327_fu_24887_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl89_cast_fu_24911_p1() {
    p_shl89_cast_fu_24911_p1 = esl_zext<7,4>(p_shl89_fu_24903_p3.read());
}

void ShuffleNetV2::thread_p_shl89_fu_24903_p3() {
    p_shl89_fu_24903_p3 = esl_concat<2,2>(tmp_2327_fu_24887_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl8_cast_fu_19403_p1() {
    p_shl8_cast_fu_19403_p1 = esl_zext<7,6>(p_shl8_fu_19395_p3.read());
}

void ShuffleNetV2::thread_p_shl8_fu_19395_p3() {
    p_shl8_fu_19395_p3 = esl_concat<1,5>(tmp_2241_fu_19391_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl90_cast_fu_24938_p1() {
    p_shl90_cast_fu_24938_p1 = esl_zext<8,7>(p_shl90_fu_24930_p3.read());
}

void ShuffleNetV2::thread_p_shl90_fu_24930_p3() {
    p_shl90_fu_24930_p3 = esl_concat<2,5>(tmp_2327_fu_24887_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl91_cast_fu_24950_p1() {
    p_shl91_cast_fu_24950_p1 = esl_zext<8,5>(p_shl91_fu_24942_p3.read());
}

void ShuffleNetV2::thread_p_shl91_fu_24942_p3() {
    p_shl91_fu_24942_p3 = esl_concat<2,3>(tmp_2327_fu_24887_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl92_cast_fu_25580_p1() {
    p_shl92_cast_fu_25580_p1 = esl_zext<7,6>(p_shl92_fu_25572_p3.read());
}

void ShuffleNetV2::thread_p_shl92_fu_25572_p3() {
    p_shl92_fu_25572_p3 = esl_concat<1,5>(tmp_2333_fu_25568_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl93_cast_fu_25592_p1() {
    p_shl93_cast_fu_25592_p1 = esl_zext<7,4>(p_shl93_fu_25584_p3.read());
}

void ShuffleNetV2::thread_p_shl93_fu_25584_p3() {
    p_shl93_fu_25584_p3 = esl_concat<1,3>(tmp_2333_fu_25568_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl94_cast_fu_25928_p1() {
    p_shl94_cast_fu_25928_p1 = esl_zext<7,6>(p_shl94_fu_25920_p3.read());
}

void ShuffleNetV2::thread_p_shl94_fu_25920_p3() {
    p_shl94_fu_25920_p3 = esl_concat<1,5>(tmp_2339_fu_25916_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl95_cast_fu_25940_p1() {
    p_shl95_cast_fu_25940_p1 = esl_zext<7,4>(p_shl95_fu_25932_p3.read());
}

void ShuffleNetV2::thread_p_shl95_fu_25932_p3() {
    p_shl95_fu_25932_p3 = esl_concat<1,3>(tmp_2339_fu_25916_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl96_cast_fu_25669_p1() {
    p_shl96_cast_fu_25669_p1 = esl_zext<7,6>(p_shl96_fu_25661_p3.read());
}

void ShuffleNetV2::thread_p_shl96_fu_25661_p3() {
    p_shl96_fu_25661_p3 = esl_concat<2,4>(tmp_2340_fu_25657_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl97_cast_fu_25681_p1() {
    p_shl97_cast_fu_25681_p1 = esl_zext<7,4>(p_shl97_fu_25673_p3.read());
}

void ShuffleNetV2::thread_p_shl97_fu_25673_p3() {
    p_shl97_fu_25673_p3 = esl_concat<2,2>(tmp_2340_fu_25657_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl98_cast_fu_25708_p1() {
    p_shl98_cast_fu_25708_p1 = esl_zext<8,7>(p_shl98_fu_25700_p3.read());
}

void ShuffleNetV2::thread_p_shl98_fu_25700_p3() {
    p_shl98_fu_25700_p3 = esl_concat<2,5>(tmp_2340_fu_25657_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl99_cast_fu_25720_p1() {
    p_shl99_cast_fu_25720_p1 = esl_zext<8,5>(p_shl99_fu_25712_p3.read());
}

void ShuffleNetV2::thread_p_shl99_fu_25712_p3() {
    p_shl99_fu_25712_p3 = esl_concat<2,3>(tmp_2340_fu_25657_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl9_cast_fu_19415_p1() {
    p_shl9_cast_fu_19415_p1 = esl_zext<7,4>(p_shl9_fu_19407_p3.read());
}

void ShuffleNetV2::thread_p_shl9_fu_19407_p3() {
    p_shl9_fu_19407_p3 = esl_concat<1,3>(tmp_2241_fu_19391_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl_cast_fu_18714_p1() {
    p_shl_cast_fu_18714_p1 = esl_zext<7,6>(p_shl_fu_18706_p3.read());
}

void ShuffleNetV2::thread_p_shl_fu_18706_p3() {
    p_shl_fu_18706_p3 = esl_concat<1,5>(tmp_2230_fu_18702_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_10_fu_26568_p2() {
    shuffle_conv_1x1_V8_10_fu_26568_p2 = (!tmp_1365_cast_fu_26564_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1365_cast_fu_26564_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_11_fu_27334_p2() {
    shuffle_conv_1x1_V8_11_fu_27334_p2 = (!tmp_1404_cast_fu_27330_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1404_cast_fu_27330_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_12_fu_28115_p2() {
    shuffle_conv_1x1_V8_12_fu_28115_p2 = (!tmp_1442_cast_fu_28111_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1442_cast_fu_28111_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_13_fu_28881_p2() {
    shuffle_conv_1x1_V8_13_fu_28881_p2 = (!tmp_1481_cast_fu_28877_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1481_cast_fu_28877_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_14_fu_29666_p2() {
    shuffle_conv_1x1_V8_14_fu_29666_p2 = (!tmp_1519_cast_fu_29662_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1519_cast_fu_29662_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_15_fu_30440_p2() {
    shuffle_conv_1x1_V8_15_fu_30440_p2 = (!tmp_1560_cast_fu_30436_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1560_cast_fu_30436_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_16_fu_31225_p2() {
    shuffle_conv_1x1_V8_16_fu_31225_p2 = (!tmp_1599_cast_fu_31221_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1599_cast_fu_31221_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_17_fu_32003_p2() {
    shuffle_conv_1x1_V8_17_fu_32003_p2 = (!tmp_1640_cast_fu_31999_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1640_cast_fu_31999_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_18_fu_32792_p2() {
    shuffle_conv_1x1_V8_18_fu_32792_p2 = (!tmp_1677_cast_fu_32788_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1677_cast_fu_32788_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_19_fu_33339_p2() {
    shuffle_conv_1x1_V8_19_fu_33339_p2 = (!tmp_1699_cast_fu_33335_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1699_cast_fu_33335_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_1_fu_20491_p2() {
    shuffle_conv_1x1_V8_1_fu_20491_p2 = (!tmp_1070_cast_fu_20487_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1070_cast_fu_20487_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_20_fu_34108_p2() {
    shuffle_conv_1x1_V8_20_fu_34108_p2 = (!tmp_1732_cast_fu_34104_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1732_cast_fu_34104_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_21_fu_34877_p2() {
    shuffle_conv_1x1_V8_21_fu_34877_p2 = (!tmp_1771_cast_fu_34873_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1771_cast_fu_34873_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_22_fu_35512_p2() {
    shuffle_conv_1x1_V8_22_fu_35512_p2 = (!tmp_1798_cast_fu_35508_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1798_cast_fu_35508_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_23_fu_36281_p2() {
    shuffle_conv_1x1_V8_23_fu_36281_p2 = (!tmp_1836_cast_fu_36277_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1836_cast_fu_36277_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_24_fu_37039_p2() {
    shuffle_conv_1x1_V8_24_fu_37039_p2 = (!tmp_1874_cast_fu_37035_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1874_cast_fu_37035_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_25_fu_37812_p2() {
    shuffle_conv_1x1_V8_25_fu_37812_p2 = (!tmp_1911_cast_fu_37808_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1911_cast_fu_37808_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_26_fu_38570_p2() {
    shuffle_conv_1x1_V8_26_fu_38570_p2 = (!tmp_1949_cast_fu_38566_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1949_cast_fu_38566_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_27_fu_39335_p2() {
    shuffle_conv_1x1_V8_27_fu_39335_p2 = (!tmp_1985_cast_fu_39331_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1985_cast_fu_39331_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_2_fu_21138_p2() {
    shuffle_conv_1x1_V8_2_fu_21138_p2 = (!tmp_1098_cast_fu_21134_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1098_cast_fu_21134_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_3_fu_21919_p2() {
    shuffle_conv_1x1_V8_3_fu_21919_p2 = (!tmp_1135_cast_fu_21915_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1135_cast_fu_21915_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_4_fu_22685_p2() {
    shuffle_conv_1x1_V8_4_fu_22685_p2 = (!tmp_1174_cast_fu_22681_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1174_cast_fu_22681_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_5_fu_23466_p2() {
    shuffle_conv_1x1_V8_5_fu_23466_p2 = (!tmp_1211_cast_fu_23462_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1211_cast_fu_23462_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_6_fu_24244_p2() {
    shuffle_conv_1x1_V8_6_fu_24244_p2 = (!tmp_1252_cast_fu_24240_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1252_cast_fu_24240_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_7_fu_25025_p2() {
    shuffle_conv_1x1_V8_7_fu_25025_p2 = (!tmp_1289_cast_fu_25021_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1289_cast_fu_25021_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_8_fu_25795_p2() {
    shuffle_conv_1x1_V8_8_fu_25795_p2 = (!tmp_1328_cast_fu_25791_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1328_cast_fu_25791_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_9_fu_18929_p2() {
    shuffle_conv_1x1_V8_9_fu_18929_p2 = (!tmp_996_cast_fu_18925_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_996_cast_fu_18925_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_s_fu_19710_p2() {
    shuffle_conv_1x1_V8_s_fu_19710_p2 = (!tmp_1030_cast_fu_19706_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40116.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1030_cast_fu_19706_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40116.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_10_fu_33754_p2() {
    shuffle_conv_3x3_V6_10_fu_33754_p2 = (!tmp_1177_fu_33749_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1177_fu_33749_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_11_fu_34527_p2() {
    shuffle_conv_3x3_V6_11_fu_34527_p2 = (!tmp_1193_fu_34522_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1193_fu_34522_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_12_fu_35923_p2() {
    shuffle_conv_3x3_V6_12_fu_35923_p2 = (!tmp_1227_fu_35918_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1227_fu_35918_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_13_fu_37462_p2() {
    shuffle_conv_3x3_V6_13_fu_37462_p2 = (!tmp_1270_fu_37457_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1270_fu_37457_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_14_fu_38985_p2() {
    shuffle_conv_3x3_V6_14_fu_38985_p2 = (!tmp_1310_fu_38980_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1310_fu_38980_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_1_fu_27753_p2() {
    shuffle_conv_3x3_V6_1_fu_27753_p2 = (!tmp_1022_fu_27748_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1022_fu_27748_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_2_fu_29304_p2() {
    shuffle_conv_3x3_V6_2_fu_29304_p2 = (!tmp_1063_fu_29299_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1063_fu_29299_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_3_fu_30855_p2() {
    shuffle_conv_3x3_V6_3_fu_30855_p2 = (!tmp_1105_fu_30850_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1105_fu_30850_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_4_fu_32418_p2() {
    shuffle_conv_3x3_V6_4_fu_32418_p2 = (!tmp_1149_fu_32413_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1149_fu_32413_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_5_fu_19344_p2() {
    shuffle_conv_3x3_V6_5_fu_19344_p2 = (!tmp_809_fu_19339_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_809_fu_19339_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_6_fu_20125_p2() {
    shuffle_conv_3x3_V6_6_fu_20125_p2 = (!tmp_825_fu_20120_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_825_fu_20120_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_7_fu_21557_p2() {
    shuffle_conv_3x3_V6_7_fu_21557_p2 = (!tmp_859_fu_21552_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_859_fu_21552_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_8_fu_23100_p2() {
    shuffle_conv_3x3_V6_8_fu_23100_p2 = (!tmp_899_fu_23095_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_899_fu_23095_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_9_fu_24659_p2() {
    shuffle_conv_3x3_V6_9_fu_24659_p2 = (!tmp_941_fu_24654_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_941_fu_24654_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_s_fu_26206_p2() {
    shuffle_conv_3x3_V6_s_fu_26206_p2 = (!tmp_981_fu_26201_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40157.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_981_fu_26201_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40157.read()));
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1719.read())) {
        shuffleunit2_2_outpu_address0 = shuffleunit2_2_outpu_reg_49057.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        shuffleunit2_2_outpu_address0 = grp_conv_last_fu_14274_input_V_address0.read();
    } else {
        shuffleunit2_2_outpu_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1719.read())) {
        shuffleunit2_2_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        shuffleunit2_2_outpu_ce0 = grp_conv_last_fu_14274_input_V_ce0.read();
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

void ShuffleNetV2::thread_sum101_cast_fu_36024_p1() {
    sum101_cast_fu_36024_p1 = esl_zext<32,12>(sum83_reg_47869.read());
}

void ShuffleNetV2::thread_sum102_cast_fu_36456_p1() {
    sum102_cast_fu_36456_p1 = esl_zext<32,12>(sum84_reg_47996.read());
}

void ShuffleNetV2::thread_sum104_cast_fu_37214_p1() {
    sum104_cast_fu_37214_p1 = esl_zext<32,12>(sum86_reg_48221.read());
}

void ShuffleNetV2::thread_sum106_cast_fu_37563_p1() {
    sum106_cast_fu_37563_p1 = esl_zext<32,12>(sum88_reg_48354.read());
}

void ShuffleNetV2::thread_sum107_cast_fu_37987_p1() {
    sum107_cast_fu_37987_p1 = esl_zext<32,12>(sum89_reg_48481.read());
}

void ShuffleNetV2::thread_sum109_cast_fu_38745_p1() {
    sum109_cast_fu_38745_p1 = esl_zext<32,12>(sum91_reg_48706.read());
}

void ShuffleNetV2::thread_sum10_fu_19099_p2() {
    sum10_fu_19099_p2 = (!i37_cast_reg_42477.read().is_01() || !tmp2_fu_19093_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i37_cast_reg_42477.read()) + sc_biguint<9>(tmp2_fu_19093_p2.read()));
}

void ShuffleNetV2::thread_sum111_cast_fu_39086_p1() {
    sum111_cast_fu_39086_p1 = esl_zext<32,12>(sum93_reg_48839.read());
}

void ShuffleNetV2::thread_sum112_cast_fu_39510_p1() {
    sum112_cast_fu_39510_p1 = esl_zext<32,12>(sum94_reg_48966.read());
}

void ShuffleNetV2::thread_sum11_cast_cast_fu_16663_p1() {
    sum11_cast_cast_fu_16663_p1 = esl_zext<10,7>(sum1_fu_16657_p2.read());
}

void ShuffleNetV2::thread_sum11_fu_18874_p2() {
    sum11_fu_18874_p2 = (!tmp1_fu_18868_p2.read().is_01() || !co58_cast_reg_42392.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp1_fu_18868_p2.read()) + sc_biguint<9>(co58_cast_reg_42392.read()));
}

void ShuffleNetV2::thread_sum12_fu_19440_p2() {
    sum12_fu_19440_p2 = (!i39_cast606_cast_reg_42610.read().is_01() || !tmp4_fu_19434_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i39_cast606_cast_reg_42610.read()) + sc_biguint<8>(tmp4_fu_19434_p2.read()));
}

void ShuffleNetV2::thread_sum13_cast_cast_fu_17469_p1() {
    sum13_cast_cast_fu_17469_p1 = esl_zext<10,7>(sum3_fu_17463_p2.read());
}

void ShuffleNetV2::thread_sum13_fu_19270_p2() {
    sum13_fu_19270_p2 = (!tmp3_fu_19264_p2.read().is_01() || !co60_cast_reg_42519.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp3_fu_19264_p2.read()) + sc_biguint<8>(co60_cast_reg_42519.read()));
}

void ShuffleNetV2::thread_sum14_fu_19880_p2() {
    sum14_fu_19880_p2 = (!i43_cast593_cast_reg_42737.read().is_01() || !tmp6_fu_19874_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i43_cast593_cast_reg_42737.read()) + sc_biguint<8>(tmp6_fu_19874_p2.read()));
}

void ShuffleNetV2::thread_sum15_cast1_fu_18267_p1() {
    sum15_cast1_fu_18267_p1 = esl_sext<7,6>(sum8_fu_18259_p3.read());
}

void ShuffleNetV2::thread_sum15_cast_cast_fu_18271_p1() {
    sum15_cast_cast_fu_18271_p1 = esl_zext<10,7>(sum15_cast1_fu_18267_p1.read());
}

void ShuffleNetV2::thread_sum15_fu_19655_p2() {
    sum15_fu_19655_p2 = (!tmp5_fu_19649_p2.read().is_01() || !co63_cast_reg_42652.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp5_fu_19649_p2.read()) + sc_biguint<9>(co63_cast_reg_42652.read()));
}

void ShuffleNetV2::thread_sum16_fu_20221_p2() {
    sum16_fu_20221_p2 = (!i47_cast_reg_42870.read().is_01() || !tmp8_fu_20215_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i47_cast_reg_42870.read()) + sc_biguint<10>(tmp8_fu_20215_p2.read()));
}

void ShuffleNetV2::thread_sum17_cast_cast_fu_19290_p1() {
    sum17_cast_cast_fu_19290_p1 = esl_zext<11,8>(sum13_reg_42587.read());
}

void ShuffleNetV2::thread_sum17_fu_20055_p2() {
    sum17_fu_20055_p2 = (!tmp7_fu_20049_p2.read().is_01() || !co64_cast_reg_42779.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp7_fu_20049_p2.read()) + sc_biguint<8>(co64_cast_reg_42779.read()));
}

void ShuffleNetV2::thread_sum18_fu_20661_p2() {
    sum18_fu_20661_p2 = (!i51_cast_reg_42997.read().is_01() || !tmp10_fu_20655_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i51_cast_reg_42997.read()) + sc_biguint<10>(tmp10_fu_20655_p2.read()));
}

void ShuffleNetV2::thread_sum19_cast_cast_fu_20075_p1() {
    sum19_cast_cast_fu_20075_p1 = esl_zext<11,8>(sum17_reg_42847.read());
}

void ShuffleNetV2::thread_sum19_fu_20436_p2() {
    sum19_fu_20436_p2 = (!tmp9_cast_fu_20432_p1.read().is_01() || !co67_cast_reg_42912.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp9_cast_fu_20432_p1.read()) + sc_biguint<10>(co67_cast_reg_42912.read()));
}

void ShuffleNetV2::thread_sum1_fu_16657_p2() {
    sum1_fu_16657_p2 = (!co25_cast_fu_16615_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co25_cast_fu_16615_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_sum20_fu_21308_p2() {
    sum20_fu_21308_p2 = (!i56_cast_reg_43178.read().is_01() || !tmp12_fu_21302_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i56_cast_reg_43178.read()) + sc_biguint<10>(tmp12_fu_21302_p2.read()));
}

void ShuffleNetV2::thread_sum21_cast_cast_fu_21503_p1() {
    sum21_cast_cast_fu_21503_p1 = esl_zext<12,9>(sum21_reg_43288.read());
}

void ShuffleNetV2::thread_sum21_fu_21483_p2() {
    sum21_fu_21483_p2 = (!tmp13_cast_fu_21479_p1.read().is_01() || !co72_cast_reg_43220.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp13_cast_fu_21479_p1.read()) + sc_biguint<9>(co72_cast_reg_43220.read()));
}

void ShuffleNetV2::thread_sum22_fu_21083_p2() {
    sum22_fu_21083_p2 = (!tmp11_fu_21077_p2.read().is_01() || !co70_cast_reg_43093.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp11_fu_21077_p2.read()) + sc_biguint<10>(co70_cast_reg_43093.read()));
}

void ShuffleNetV2::thread_sum23_cast_cast_fu_23046_p1() {
    sum23_cast_cast_fu_23046_p1 = esl_zext<12,9>(sum23_reg_43773.read());
}

void ShuffleNetV2::thread_sum23_fu_23026_p2() {
    sum23_fu_23026_p2 = (!tmp19_fu_23020_p2.read().is_01() || !co82_cast_reg_43705.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp19_fu_23020_p2.read()) + sc_biguint<9>(co82_cast_reg_43705.read()));
}

void ShuffleNetV2::thread_sum24_fu_21653_p2() {
    sum24_fu_21653_p2 = (!i59_cast_reg_43311.read().is_01() || !tmp14_fu_21647_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i59_cast_reg_43311.read()) + sc_biguint<10>(tmp14_fu_21647_p2.read()));
}

void ShuffleNetV2::thread_sum25_cast_cast_fu_24609_p1() {
    sum25_cast_cast_fu_24609_p1 = esl_zext<12,9>(sum25_reg_44258.read());
}

void ShuffleNetV2::thread_sum25_fu_24589_p2() {
    sum25_fu_24589_p2 = (!tmp25_fu_24583_p2.read().is_01() || !co92_cast_reg_44190.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp25_fu_24583_p2.read()) + sc_biguint<9>(co92_cast_reg_44190.read()));
}

void ShuffleNetV2::thread_sum26_fu_22089_p2() {
    sum26_fu_22089_p2 = (!i63_cast_reg_43438.read().is_01() || !tmp16_fu_22083_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i63_cast_reg_43438.read()) + sc_biguint<10>(tmp16_fu_22083_p2.read()));
}

void ShuffleNetV2::thread_sum27_cast_cast_fu_26156_p1() {
    sum27_cast_cast_fu_26156_p1 = esl_zext<12,9>(sum27_reg_44743.read());
}

void ShuffleNetV2::thread_sum27_fu_26136_p2() {
    sum27_fu_26136_p2 = (!tmp31_fu_26130_p2.read().is_01() || !co102_cast_reg_44675.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp31_fu_26130_p2.read()) + sc_biguint<9>(co102_cast_reg_44675.read()));
}

void ShuffleNetV2::thread_sum28_fu_21864_p2() {
    sum28_fu_21864_p2 = (!tmp15_fu_21858_p2.read().is_01() || !co75_cast_reg_43353.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp15_fu_21858_p2.read()) + sc_biguint<10>(co75_cast_reg_43353.read()));
}

void ShuffleNetV2::thread_sum29_cast1_fu_27695_p1() {
    sum29_cast1_fu_27695_p1 = esl_sext<9,8>(sum29_reg_45228.read());
}

void ShuffleNetV2::thread_sum29_cast_cast_fu_27698_p1() {
    sum29_cast_cast_fu_27698_p1 = esl_zext<12,9>(sum29_cast1_fu_27695_p1.read());
}

void ShuffleNetV2::thread_sum29_fu_27675_p2() {
    sum29_fu_27675_p2 = (!co112_cast400_cast_reg_45160.read().is_01() || !tmp37_fu_27669_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co112_cast400_cast_reg_45160.read()) + sc_biguint<8>(tmp37_fu_27669_p2.read()));
}

void ShuffleNetV2::thread_sum2_fu_17303_p2() {
    sum2_fu_17303_p2 = (!co38_cast_fu_17287_p1.read().is_01() || !ap_const_lv8_78.is_01())? sc_lv<8>(): (sc_biguint<8>(co38_cast_fu_17287_p1.read()) + sc_biguint<8>(ap_const_lv8_78));
}

void ShuffleNetV2::thread_sum30_fu_22855_p2() {
    sum30_fu_22855_p2 = (!i68_cast_reg_43663.read().is_01() || !tmp18_fu_22849_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i68_cast_reg_43663.read()) + sc_biguint<10>(tmp18_fu_22849_p2.read()));
}

void ShuffleNetV2::thread_sum31_cast1_fu_29242_p1() {
    sum31_cast1_fu_29242_p1 = esl_sext<9,8>(sum31_reg_45713.read());
}

void ShuffleNetV2::thread_sum31_cast_cast_fu_29245_p1() {
    sum31_cast_cast_fu_29245_p1 = esl_zext<12,9>(sum31_cast1_fu_29242_p1.read());
}

void ShuffleNetV2::thread_sum31_fu_29222_p2() {
    sum31_fu_29222_p2 = (!co122_cast362_cast_reg_45645.read().is_01() || !tmp43_fu_29216_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co122_cast362_cast_reg_45645.read()) + sc_biguint<8>(tmp43_fu_29216_p2.read()));
}

void ShuffleNetV2::thread_sum32_fu_22630_p2() {
    sum32_fu_22630_p2 = (!tmp17_fu_22624_p2.read().is_01() || !co80_cast_reg_43578.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp17_fu_22624_p2.read()) + sc_biguint<10>(co80_cast_reg_43578.read()));
}

void ShuffleNetV2::thread_sum33_cast_cast_fu_30801_p1() {
    sum33_cast_cast_fu_30801_p1 = esl_zext<13,10>(sum33_reg_46198.read());
}

void ShuffleNetV2::thread_sum33_fu_30781_p2() {
    sum33_fu_30781_p2 = (!tmp49_fu_30775_p2.read().is_01() || !co132_cast_reg_46130.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp49_fu_30775_p2.read()) + sc_biguint<10>(co132_cast_reg_46130.read()));
}

void ShuffleNetV2::thread_sum34_fu_23196_p2() {
    sum34_fu_23196_p2 = (!i71_cast508_cast_reg_43796.read().is_01() || !tmp20_fu_23190_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i71_cast508_cast_reg_43796.read()) + sc_biguint<9>(tmp20_fu_23190_p2.read()));
}

void ShuffleNetV2::thread_sum35_cast_cast_fu_32368_p1() {
    sum35_cast_cast_fu_32368_p1 = esl_zext<13,10>(sum35_reg_46683.read());
}

void ShuffleNetV2::thread_sum35_fu_32348_p2() {
    sum35_fu_32348_p2 = (!tmp55_fu_32342_p2.read().is_01() || !co142_cast_reg_46615.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp55_fu_32342_p2.read()) + sc_biguint<10>(co142_cast_reg_46615.read()));
}

void ShuffleNetV2::thread_sum36_fu_23636_p2() {
    sum36_fu_23636_p2 = (!i75_cast495_cast_reg_43923.read().is_01() || !tmp22_fu_23630_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i75_cast495_cast_reg_43923.read()) + sc_biguint<9>(tmp22_fu_23630_p2.read()));
}

void ShuffleNetV2::thread_sum37_cast_cast_fu_33704_p1() {
    sum37_cast_cast_fu_33704_p1 = esl_zext<13,10>(sum37_reg_47114.read());
}

void ShuffleNetV2::thread_sum37_fu_33684_p2() {
    sum37_fu_33684_p2 = (!tmp61_fu_33678_p2.read().is_01() || !co150_cast_reg_47046.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp61_fu_33678_p2.read()) + sc_biguint<10>(co150_cast_reg_47046.read()));
}

void ShuffleNetV2::thread_sum38_fu_23411_p2() {
    sum38_fu_23411_p2 = (!tmp21_fu_23405_p2.read().is_01() || !co85_cast_reg_43838.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp21_fu_23405_p2.read()) + sc_biguint<10>(co85_cast_reg_43838.read()));
}

void ShuffleNetV2::thread_sum39_cast_cast_fu_34477_p1() {
    sum39_cast_cast_fu_34477_p1 = esl_zext<13,10>(sum39_reg_47374.read());
}

void ShuffleNetV2::thread_sum39_fu_34457_p2() {
    sum39_fu_34457_p2 = (!tmp65_fu_34451_p2.read().is_01() || !co154_cast_reg_47306.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp65_fu_34451_p2.read()) + sc_biguint<10>(co154_cast_reg_47306.read()));
}

void ShuffleNetV2::thread_sum3_fu_17463_p2() {
    sum3_fu_17463_p2 = (!co41_cast_fu_17421_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co41_cast_fu_17421_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_sum40_cast_fu_19104_p1() {
    sum40_cast_fu_19104_p1 = esl_zext<32,9>(sum10_reg_42508.read());
}

void ShuffleNetV2::thread_sum40_fu_24414_p2() {
    sum40_fu_24414_p2 = (!i80_cast480_cast_reg_44148.read().is_01() || !tmp24_fu_24408_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i80_cast480_cast_reg_44148.read()) + sc_biguint<9>(tmp24_fu_24408_p2.read()));
}

void ShuffleNetV2::thread_sum41_cast_cast_fu_35873_p1() {
    sum41_cast_cast_fu_35873_p1 = esl_zext<13,10>(sum41_reg_47815.read());
}

void ShuffleNetV2::thread_sum41_fu_35853_p2() {
    sum41_fu_35853_p2 = (!tmp71_fu_35847_p2.read().is_01() || !co162_cast_reg_47747.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp71_fu_35847_p2.read()) + sc_biguint<10>(co162_cast_reg_47747.read()));
}

void ShuffleNetV2::thread_sum42_fu_24181_p2() {
    sum42_fu_24181_p2 = (!co90_cast489_cast_reg_44063.read().is_01() || !tmp23_fu_24175_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co90_cast489_cast_reg_44063.read()) + sc_biguint<9>(tmp23_fu_24175_p2.read()));
}

void ShuffleNetV2::thread_sum43_cast1_fu_37400_p1() {
    sum43_cast1_fu_37400_p1 = esl_sext<10,9>(sum43_reg_48300.read());
}

void ShuffleNetV2::thread_sum43_cast_cast_fu_37403_p1() {
    sum43_cast_cast_fu_37403_p1 = esl_zext<13,10>(sum43_cast1_fu_37400_p1.read());
}

void ShuffleNetV2::thread_sum43_fu_37380_p2() {
    sum43_fu_37380_p2 = (!co172_cast151_cast_reg_48232.read().is_01() || !tmp77_fu_37374_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co172_cast151_cast_reg_48232.read()) + sc_biguint<9>(tmp77_fu_37374_p2.read()));
}

void ShuffleNetV2::thread_sum44_cast1_fu_19445_p1() {
    sum44_cast1_fu_19445_p1 = esl_sext<9,8>(sum12_reg_42641.read());
}

void ShuffleNetV2::thread_sum44_cast_fu_19448_p1() {
    sum44_cast_fu_19448_p1 = esl_zext<32,9>(sum44_cast1_fu_19445_p1.read());
}

void ShuffleNetV2::thread_sum44_fu_24755_p2() {
    sum44_fu_24755_p2 = (!i83_cast470_cast_reg_44281.read().is_01() || !tmp26_fu_24749_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i83_cast470_cast_reg_44281.read()) + sc_biguint<8>(tmp26_fu_24749_p2.read()));
}

void ShuffleNetV2::thread_sum45_cast_cast_fu_38931_p1() {
    sum45_cast_cast_fu_38931_p1 = esl_zext<14,11>(sum45_reg_48785.read());
}

void ShuffleNetV2::thread_sum45_fu_38911_p2() {
    sum45_fu_38911_p2 = (!tmp83_fu_38905_p2.read().is_01() || !co182_cast_reg_48717.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp83_fu_38905_p2.read()) + sc_biguint<11>(co182_cast_reg_48717.read()));
}

void ShuffleNetV2::thread_sum46_cast1_fu_19885_p1() {
    sum46_cast1_fu_19885_p1 = esl_sext<9,8>(sum14_reg_42768.read());
}

void ShuffleNetV2::thread_sum46_cast_fu_19888_p1() {
    sum46_cast_fu_19888_p1 = esl_zext<32,9>(sum46_cast1_fu_19885_p1.read());
}

void ShuffleNetV2::thread_sum46_fu_25199_p2() {
    sum46_fu_25199_p2 = (!i87_cast_reg_44408.read().is_01() || !tmp28_cast_fu_25195_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i87_cast_reg_44408.read()) + sc_biguint<11>(tmp28_cast_fu_25195_p1.read()));
}

void ShuffleNetV2::thread_sum47_fu_24970_p2() {
    sum47_fu_24970_p2 = (!tmp27_fu_24964_p2.read().is_01() || !co95_cast_reg_44323.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp27_fu_24964_p2.read()) + sc_biguint<11>(co95_cast_reg_44323.read()));
}

void ShuffleNetV2::thread_sum48_cast_fu_20226_p1() {
    sum48_cast_fu_20226_p1 = esl_zext<32,10>(sum16_reg_42901.read());
}

void ShuffleNetV2::thread_sum48_fu_25965_p2() {
    sum48_fu_25965_p2 = (!i92_cast_reg_44633.read().is_01() || !tmp30_fu_25959_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i92_cast_reg_44633.read()) + sc_biguint<11>(tmp30_fu_25959_p2.read()));
}

void ShuffleNetV2::thread_sum49_cast_fu_20666_p1() {
    sum49_cast_fu_20666_p1 = esl_zext<32,10>(sum18_reg_43028.read());
}

void ShuffleNetV2::thread_sum49_fu_25740_p2() {
    sum49_fu_25740_p2 = (!tmp29_fu_25734_p2.read().is_01() || !co100_cast_reg_44548.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp29_fu_25734_p2.read()) + sc_biguint<11>(co100_cast_reg_44548.read()));
}

void ShuffleNetV2::thread_sum4_fu_17635_p2() {
    sum4_fu_17635_p2 = (!co45_cast_fu_17619_p1.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<8>(): (sc_biguint<8>(co45_cast_fu_17619_p1.read()) + sc_bigint<8>(ap_const_lv8_90));
}

void ShuffleNetV2::thread_sum50_fu_26302_p2() {
    sum50_fu_26302_p2 = (!i95_cast_reg_44766.read().is_01() || !tmp32_fu_26296_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i95_cast_reg_44766.read()) + sc_biguint<11>(tmp32_fu_26296_p2.read()));
}

void ShuffleNetV2::thread_sum51_cast_fu_21313_p1() {
    sum51_cast_fu_21313_p1 = esl_zext<32,10>(sum20_reg_43209.read());
}

void ShuffleNetV2::thread_sum51_fu_26738_p2() {
    sum51_fu_26738_p2 = (!i99_cast_reg_44893.read().is_01() || !tmp34_fu_26732_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i99_cast_reg_44893.read()) + sc_biguint<11>(tmp34_fu_26732_p2.read()));
}

void ShuffleNetV2::thread_sum52_fu_26513_p2() {
    sum52_fu_26513_p2 = (!tmp33_fu_26507_p2.read().is_01() || !co105_cast_reg_44808.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp33_fu_26507_p2.read()) + sc_biguint<11>(co105_cast_reg_44808.read()));
}

void ShuffleNetV2::thread_sum53_cast_fu_21658_p1() {
    sum53_cast_fu_21658_p1 = esl_zext<32,10>(sum24_reg_43342.read());
}

void ShuffleNetV2::thread_sum53_fu_27504_p2() {
    sum53_fu_27504_p2 = (!i104_cast_reg_45118.read().is_01() || !tmp36_fu_27498_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i104_cast_reg_45118.read()) + sc_biguint<11>(tmp36_fu_27498_p2.read()));
}

void ShuffleNetV2::thread_sum54_cast_fu_22094_p1() {
    sum54_cast_fu_22094_p1 = esl_zext<32,10>(sum26_reg_43469.read());
}

void ShuffleNetV2::thread_sum54_fu_27279_p2() {
    sum54_fu_27279_p2 = (!tmp35_fu_27273_p2.read().is_01() || !co110_cast_reg_45033.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp35_fu_27273_p2.read()) + sc_biguint<11>(co110_cast_reg_45033.read()));
}

void ShuffleNetV2::thread_sum55_fu_27849_p2() {
    sum55_fu_27849_p2 = (!i107_cast_reg_45251.read().is_01() || !tmp38_fu_27843_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i107_cast_reg_45251.read()) + sc_biguint<11>(tmp38_fu_27843_p2.read()));
}

void ShuffleNetV2::thread_sum56_cast_fu_22860_p1() {
    sum56_cast_fu_22860_p1 = esl_zext<32,10>(sum30_reg_43694.read());
}

void ShuffleNetV2::thread_sum56_fu_28285_p2() {
    sum56_fu_28285_p2 = (!i111_cast_reg_45378.read().is_01() || !tmp40_fu_28279_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i111_cast_reg_45378.read()) + sc_biguint<11>(tmp40_fu_28279_p2.read()));
}

void ShuffleNetV2::thread_sum57_fu_28060_p2() {
    sum57_fu_28060_p2 = (!tmp39_fu_28054_p2.read().is_01() || !co115_cast_reg_45293.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp39_fu_28054_p2.read()) + sc_biguint<11>(co115_cast_reg_45293.read()));
}

void ShuffleNetV2::thread_sum58_cast1_fu_23201_p1() {
    sum58_cast1_fu_23201_p1 = esl_sext<10,9>(sum34_reg_43827.read());
}

void ShuffleNetV2::thread_sum58_cast_fu_23204_p1() {
    sum58_cast_fu_23204_p1 = esl_zext<32,10>(sum58_cast1_fu_23201_p1.read());
}

void ShuffleNetV2::thread_sum58_fu_29051_p2() {
    sum58_fu_29051_p2 = (!i116_cast_reg_45603.read().is_01() || !tmp42_fu_29045_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i116_cast_reg_45603.read()) + sc_biguint<11>(tmp42_fu_29045_p2.read()));
}

void ShuffleNetV2::thread_sum59_cast1_fu_23641_p1() {
    sum59_cast1_fu_23641_p1 = esl_sext<10,9>(sum36_reg_43954.read());
}

void ShuffleNetV2::thread_sum59_cast_fu_23644_p1() {
    sum59_cast_fu_23644_p1 = esl_zext<32,10>(sum59_cast1_fu_23641_p1.read());
}

void ShuffleNetV2::thread_sum59_fu_28826_p2() {
    sum59_fu_28826_p2 = (!tmp41_fu_28820_p2.read().is_01() || !co120_cast_reg_45518.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp41_fu_28820_p2.read()) + sc_biguint<11>(co120_cast_reg_45518.read()));
}

void ShuffleNetV2::thread_sum5_cast_cast_fu_15982_p1() {
    sum5_cast_cast_fu_15982_p1 = esl_zext<9,6>(sum5_fu_15976_p2.read());
}

void ShuffleNetV2::thread_sum5_fu_15976_p2() {
    sum5_fu_15976_p2 = (!co12_cast_fu_15960_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co12_cast_fu_15960_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_sum60_fu_29400_p2() {
    sum60_fu_29400_p2 = (!i119_cast_reg_45736.read().is_01() || !tmp44_fu_29394_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i119_cast_reg_45736.read()) + sc_biguint<11>(tmp44_fu_29394_p2.read()));
}

void ShuffleNetV2::thread_sum61_cast1_fu_24419_p1() {
    sum61_cast1_fu_24419_p1 = esl_sext<10,9>(sum40_reg_44179.read());
}

void ShuffleNetV2::thread_sum61_cast_fu_24422_p1() {
    sum61_cast_fu_24422_p1 = esl_zext<32,10>(sum61_cast1_fu_24419_p1.read());
}

void ShuffleNetV2::thread_sum61_fu_29836_p2() {
    sum61_fu_29836_p2 = (!i123_cast_reg_45863.read().is_01() || !tmp46_fu_29830_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i123_cast_reg_45863.read()) + sc_biguint<11>(tmp46_fu_29830_p2.read()));
}

void ShuffleNetV2::thread_sum62_fu_29611_p2() {
    sum62_fu_29611_p2 = (!tmp45_fu_29605_p2.read().is_01() || !co125_cast_reg_45778.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp45_fu_29605_p2.read()) + sc_biguint<11>(co125_cast_reg_45778.read()));
}

void ShuffleNetV2::thread_sum63_cast1_fu_24760_p1() {
    sum63_cast1_fu_24760_p1 = esl_sext<10,8>(sum44_reg_44312.read());
}

void ShuffleNetV2::thread_sum63_cast_fu_24763_p1() {
    sum63_cast_fu_24763_p1 = esl_zext<32,10>(sum63_cast1_fu_24760_p1.read());
}

void ShuffleNetV2::thread_sum63_fu_30610_p2() {
    sum63_fu_30610_p2 = (!i128_cast_reg_46088.read().is_01() || !tmp48_fu_30604_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i128_cast_reg_46088.read()) + sc_biguint<11>(tmp48_fu_30604_p2.read()));
}

void ShuffleNetV2::thread_sum64_cast_fu_25204_p1() {
    sum64_cast_fu_25204_p1 = esl_zext<32,11>(sum46_reg_44439.read());
}

void ShuffleNetV2::thread_sum64_fu_30377_p2() {
    sum64_fu_30377_p2 = (!co130_cast337_cast_reg_46003.read().is_01() || !tmp47_fu_30371_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co130_cast337_cast_reg_46003.read()) + sc_biguint<10>(tmp47_fu_30371_p2.read()));
}

void ShuffleNetV2::thread_sum65_fu_30951_p2() {
    sum65_fu_30951_p2 = (!i131_cast_reg_46221.read().is_01() || !tmp50_fu_30945_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i131_cast_reg_46221.read()) + sc_biguint<11>(tmp50_fu_30945_p2.read()));
}

void ShuffleNetV2::thread_sum66_cast_fu_25970_p1() {
    sum66_cast_fu_25970_p1 = esl_zext<32,11>(sum48_reg_44664.read());
}

void ShuffleNetV2::thread_sum66_fu_31395_p2() {
    sum66_fu_31395_p2 = (!i135_cast305_cast_reg_46348.read().is_01() || !tmp52_fu_31389_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i135_cast305_cast_reg_46348.read()) + sc_biguint<10>(tmp52_fu_31389_p2.read()));
}

void ShuffleNetV2::thread_sum67_fu_31162_p2() {
    sum67_fu_31162_p2 = (!co135_cast314_cast_reg_46263.read().is_01() || !tmp51_fu_31156_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co135_cast314_cast_reg_46263.read()) + sc_biguint<10>(tmp51_fu_31156_p2.read()));
}

void ShuffleNetV2::thread_sum68_cast_fu_26307_p1() {
    sum68_cast_fu_26307_p1 = esl_zext<32,11>(sum50_reg_44797.read());
}

void ShuffleNetV2::thread_sum68_fu_32173_p2() {
    sum68_fu_32173_p2 = (!i140_cast290_cast_reg_46573.read().is_01() || !tmp54_fu_32167_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i140_cast290_cast_reg_46573.read()) + sc_biguint<10>(tmp54_fu_32167_p2.read()));
}

void ShuffleNetV2::thread_sum69_cast_fu_26743_p1() {
    sum69_cast_fu_26743_p1 = esl_zext<32,11>(sum51_reg_44924.read());
}

void ShuffleNetV2::thread_sum69_fu_31940_p2() {
    sum69_fu_31940_p2 = (!co140_cast299_cast_reg_46488.read().is_01() || !tmp53_fu_31934_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co140_cast299_cast_reg_46488.read()) + sc_biguint<9>(tmp53_fu_31934_p2.read()));
}

void ShuffleNetV2::thread_sum6_fu_15816_p2() {
    sum6_fu_15816_p2 = (!co9_cast_fu_15800_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co9_cast_fu_15800_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_sum70_fu_32514_p2() {
    sum70_fu_32514_p2 = (!i143_cast280_cast_reg_46706.read().is_01() || !tmp56_fu_32508_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i143_cast280_cast_reg_46706.read()) + sc_biguint<10>(tmp56_fu_32508_p2.read()));
}

void ShuffleNetV2::thread_sum71_cast_fu_27509_p1() {
    sum71_cast_fu_27509_p1 = esl_zext<32,11>(sum53_reg_45149.read());
}

void ShuffleNetV2::thread_sum71_fu_32962_p2() {
    sum71_fu_32962_p2 = (!i147_cast267_cast_reg_46833.read().is_01() || !tmp58_fu_32956_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i147_cast267_cast_reg_46833.read()) + sc_biguint<10>(tmp58_fu_32956_p2.read()));
}

void ShuffleNetV2::thread_sum72_fu_32737_p2() {
    sum72_fu_32737_p2 = (!tmp57_cast_fu_32733_p1.read().is_01() || !co145_cast_reg_46748.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp57_cast_fu_32733_p1.read()) + sc_biguint<12>(co145_cast_reg_46748.read()));
}

void ShuffleNetV2::thread_sum73_cast_fu_27854_p1() {
    sum73_cast_fu_27854_p1 = esl_zext<32,11>(sum55_reg_45282.read());
}

void ShuffleNetV2::thread_sum73_fu_33509_p2() {
    sum73_fu_33509_p2 = (!i152_cast253_cast_reg_47004.read().is_01() || !tmp60_fu_33503_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i152_cast253_cast_reg_47004.read()) + sc_biguint<10>(tmp60_fu_33503_p2.read()));
}

void ShuffleNetV2::thread_sum74_cast_fu_28290_p1() {
    sum74_cast_fu_28290_p1 = esl_zext<32,11>(sum56_reg_45409.read());
}

void ShuffleNetV2::thread_sum74_fu_33284_p2() {
    sum74_fu_33284_p2 = (!tmp59_fu_33278_p2.read().is_01() || !co148_cast_reg_46919.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp59_fu_33278_p2.read()) + sc_biguint<12>(co148_cast_reg_46919.read()));
}

void ShuffleNetV2::thread_sum75_fu_33850_p2() {
    sum75_fu_33850_p2 = (!i155_cast243_cast_reg_47137.read().is_01() || !tmp62_fu_33844_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i155_cast243_cast_reg_47137.read()) + sc_biguint<9>(tmp62_fu_33844_p2.read()));
}

void ShuffleNetV2::thread_sum76_cast_fu_29056_p1() {
    sum76_cast_fu_29056_p1 = esl_zext<32,11>(sum58_reg_45634.read());
}

void ShuffleNetV2::thread_sum76_fu_34286_p2() {
    sum76_fu_34286_p2 = (!i159_cast_reg_47264.read().is_01() || !tmp64_cast_fu_34282_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i159_cast_reg_47264.read()) + sc_biguint<12>(tmp64_cast_fu_34282_p1.read()));
}

void ShuffleNetV2::thread_sum77_fu_34053_p2() {
    sum77_fu_34053_p2 = (!tmp63_fu_34047_p2.read().is_01() || !co153_cast_reg_47179.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp63_fu_34047_p2.read()) + sc_biguint<12>(co153_cast_reg_47179.read()));
}

void ShuffleNetV2::thread_sum78_cast_fu_29405_p1() {
    sum78_cast_fu_29405_p1 = esl_zext<32,11>(sum60_reg_45767.read());
}

void ShuffleNetV2::thread_sum78_fu_34623_p2() {
    sum78_fu_34623_p2 = (!i163_cast_reg_47397.read().is_01() || !tmp66_fu_34617_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i163_cast_reg_47397.read()) + sc_biguint<12>(tmp66_fu_34617_p2.read()));
}

void ShuffleNetV2::thread_sum79_cast_fu_29841_p1() {
    sum79_cast_fu_29841_p1 = esl_zext<32,11>(sum61_reg_45894.read());
}

void ShuffleNetV2::thread_sum79_fu_35047_p2() {
    sum79_fu_35047_p2 = (!i167_cast_reg_47524.read().is_01() || !tmp68_fu_35041_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i167_cast_reg_47524.read()) + sc_biguint<12>(tmp68_fu_35041_p2.read()));
}

void ShuffleNetV2::thread_sum7_fu_18091_p2() {
    sum7_fu_18091_p2 = (!co50_cast_fu_18075_p1.read().is_01() || !ap_const_lv8_A8.is_01())? sc_lv<8>(): (sc_biguint<8>(co50_cast_fu_18075_p1.read()) + sc_bigint<8>(ap_const_lv8_A8));
}

void ShuffleNetV2::thread_sum80_fu_34822_p2() {
    sum80_fu_34822_p2 = (!tmp67_fu_34816_p2.read().is_01() || !co157_cast_reg_47439.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp67_fu_34816_p2.read()) + sc_biguint<12>(co157_cast_reg_47439.read()));
}

void ShuffleNetV2::thread_sum81_cast_fu_30615_p1() {
    sum81_cast_fu_30615_p1 = esl_zext<32,11>(sum63_reg_46119.read());
}

void ShuffleNetV2::thread_sum81_fu_35682_p2() {
    sum81_fu_35682_p2 = (!i172_cast_reg_47705.read().is_01() || !tmp70_fu_35676_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i172_cast_reg_47705.read()) + sc_biguint<12>(tmp70_fu_35676_p2.read()));
}

void ShuffleNetV2::thread_sum82_fu_35457_p2() {
    sum82_fu_35457_p2 = (!tmp69_fu_35451_p2.read().is_01() || !co160_cast_reg_47620.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp69_fu_35451_p2.read()) + sc_biguint<12>(co160_cast_reg_47620.read()));
}

void ShuffleNetV2::thread_sum83_cast_fu_30956_p1() {
    sum83_cast_fu_30956_p1 = esl_zext<32,11>(sum65_reg_46252.read());
}

void ShuffleNetV2::thread_sum83_fu_36019_p2() {
    sum83_fu_36019_p2 = (!i175_cast_reg_47838.read().is_01() || !tmp72_fu_36013_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i175_cast_reg_47838.read()) + sc_biguint<12>(tmp72_fu_36013_p2.read()));
}

void ShuffleNetV2::thread_sum84_cast1_fu_31400_p1() {
    sum84_cast1_fu_31400_p1 = esl_sext<11,10>(sum66_reg_46379.read());
}

void ShuffleNetV2::thread_sum84_cast_fu_31403_p1() {
    sum84_cast_fu_31403_p1 = esl_zext<32,11>(sum84_cast1_fu_31400_p1.read());
}

void ShuffleNetV2::thread_sum84_fu_36451_p2() {
    sum84_fu_36451_p2 = (!i179_cast_reg_47965.read().is_01() || !tmp74_fu_36445_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i179_cast_reg_47965.read()) + sc_biguint<12>(tmp74_fu_36445_p2.read()));
}

void ShuffleNetV2::thread_sum85_fu_36218_p2() {
    sum85_fu_36218_p2 = (!co165_cast179_cast_reg_47880.read().is_01() || !tmp73_fu_36212_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(co165_cast179_cast_reg_47880.read()) + sc_biguint<11>(tmp73_fu_36212_p2.read()));
}

void ShuffleNetV2::thread_sum86_cast1_fu_32178_p1() {
    sum86_cast1_fu_32178_p1 = esl_sext<11,10>(sum68_reg_46604.read());
}

void ShuffleNetV2::thread_sum86_cast_fu_32181_p1() {
    sum86_cast_fu_32181_p1 = esl_zext<32,11>(sum86_cast1_fu_32178_p1.read());
}

void ShuffleNetV2::thread_sum86_fu_37209_p2() {
    sum86_fu_37209_p2 = (!i184_cast_reg_48190.read().is_01() || !tmp76_fu_37203_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i184_cast_reg_48190.read()) + sc_biguint<12>(tmp76_fu_37203_p2.read()));
}

void ShuffleNetV2::thread_sum87_fu_36984_p2() {
    sum87_fu_36984_p2 = (!tmp75_fu_36978_p2.read().is_01() || !co170_cast_reg_48105.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp75_fu_36978_p2.read()) + sc_biguint<13>(co170_cast_reg_48105.read()));
}

void ShuffleNetV2::thread_sum88_cast1_fu_32519_p1() {
    sum88_cast1_fu_32519_p1 = esl_sext<11,10>(sum70_reg_46737.read());
}

void ShuffleNetV2::thread_sum88_cast_fu_32522_p1() {
    sum88_cast_fu_32522_p1 = esl_zext<32,11>(sum88_cast1_fu_32519_p1.read());
}

void ShuffleNetV2::thread_sum88_fu_37558_p2() {
    sum88_fu_37558_p2 = (!i187_cast_reg_48323.read().is_01() || !tmp78_fu_37552_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i187_cast_reg_48323.read()) + sc_biguint<12>(tmp78_fu_37552_p2.read()));
}

void ShuffleNetV2::thread_sum89_cast1_fu_32967_p1() {
    sum89_cast1_fu_32967_p1 = esl_sext<11,10>(sum71_reg_46864.read());
}

void ShuffleNetV2::thread_sum89_cast_fu_32970_p1() {
    sum89_cast_fu_32970_p1 = esl_zext<32,11>(sum89_cast1_fu_32967_p1.read());
}

void ShuffleNetV2::thread_sum89_fu_37982_p2() {
    sum89_fu_37982_p2 = (!i191_cast_reg_48450.read().is_01() || !tmp80_fu_37976_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i191_cast_reg_48450.read()) + sc_biguint<12>(tmp80_fu_37976_p2.read()));
}

void ShuffleNetV2::thread_sum8_fu_18259_p3() {
    sum8_fu_18259_p3 = esl_concat<1,5>(ap_const_lv1_1, co53_reg_10250.read());
}

void ShuffleNetV2::thread_sum90_fu_37757_p2() {
    sum90_fu_37757_p2 = (!tmp79_fu_37751_p2.read().is_01() || !co175_cast_reg_48365.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp79_fu_37751_p2.read()) + sc_biguint<13>(co175_cast_reg_48365.read()));
}

void ShuffleNetV2::thread_sum91_cast1_fu_33514_p1() {
    sum91_cast1_fu_33514_p1 = esl_sext<11,10>(sum73_reg_47035.read());
}

void ShuffleNetV2::thread_sum91_cast_fu_33517_p1() {
    sum91_cast_fu_33517_p1 = esl_zext<32,11>(sum91_cast1_fu_33514_p1.read());
}

void ShuffleNetV2::thread_sum91_fu_38740_p2() {
    sum91_fu_38740_p2 = (!i196_cast_reg_48675.read().is_01() || !tmp82_fu_38734_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i196_cast_reg_48675.read()) + sc_biguint<12>(tmp82_fu_38734_p2.read()));
}

void ShuffleNetV2::thread_sum92_fu_38515_p2() {
    sum92_fu_38515_p2 = (!tmp81_fu_38509_p2.read().is_01() || !co180_cast_reg_48590.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp81_fu_38509_p2.read()) + sc_biguint<13>(co180_cast_reg_48590.read()));
}

void ShuffleNetV2::thread_sum93_cast1_fu_33855_p1() {
    sum93_cast1_fu_33855_p1 = esl_sext<11,9>(sum75_reg_47168.read());
}

void ShuffleNetV2::thread_sum93_cast_fu_33858_p1() {
    sum93_cast_fu_33858_p1 = esl_zext<32,11>(sum93_cast1_fu_33855_p1.read());
}

void ShuffleNetV2::thread_sum93_fu_39081_p2() {
    sum93_fu_39081_p2 = (!i199_cast_reg_48808.read().is_01() || !tmp84_fu_39075_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i199_cast_reg_48808.read()) + sc_biguint<12>(tmp84_fu_39075_p2.read()));
}

void ShuffleNetV2::thread_sum94_cast_fu_34291_p1() {
    sum94_cast_fu_34291_p1 = esl_zext<32,12>(sum76_reg_47295.read());
}

void ShuffleNetV2::thread_sum94_fu_39505_p2() {
    sum94_fu_39505_p2 = (!i203_cast_reg_48935.read().is_01() || !tmp86_fu_39499_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i203_cast_reg_48935.read()) + sc_biguint<12>(tmp86_fu_39499_p2.read()));
}

void ShuffleNetV2::thread_sum95_fu_39280_p2() {
    sum95_fu_39280_p2 = (!tmp85_fu_39274_p2.read().is_01() || !co185_cast_reg_48850.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp85_fu_39274_p2.read()) + sc_biguint<13>(co185_cast_reg_48850.read()));
}

void ShuffleNetV2::thread_sum96_cast_fu_34628_p1() {
    sum96_cast_fu_34628_p1 = esl_zext<32,12>(sum78_reg_47428.read());
}

void ShuffleNetV2::thread_sum97_cast_fu_35052_p1() {
    sum97_cast_fu_35052_p1 = esl_zext<32,12>(sum79_reg_47555.read());
}

void ShuffleNetV2::thread_sum99_cast_fu_35687_p1() {
    sum99_cast_fu_35687_p1 = esl_zext<32,12>(sum81_reg_47736.read());
}

void ShuffleNetV2::thread_sum9_fu_16160_p2() {
    sum9_fu_16160_p2 = (!co16_cast_fu_16144_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co16_cast_fu_16144_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_sum_fu_16497_p2() {
    sum_fu_16497_p2 = (!co22_cast_fu_16481_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co22_cast_fu_16481_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp10_fu_20655_p2() {
    tmp10_fu_20655_p2 = (!ap_const_lv10_228.is_01() || !tmp_204_cast_fu_20646_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_204_cast_fu_20646_p1.read()));
}

void ShuffleNetV2::thread_tmp11_fu_21077_p2() {
    tmp11_fu_21077_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_222_cast_fu_21073_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_222_cast_fu_21073_p1.read()));
}

void ShuffleNetV2::thread_tmp12_fu_21302_p2() {
    tmp12_fu_21302_p2 = (!ap_const_lv10_258.is_01() || !tmp_216_cast_fu_21293_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_216_cast_fu_21293_p1.read()));
}

void ShuffleNetV2::thread_tmp13_cast1_fu_21475_p1() {
    tmp13_cast1_fu_21475_p1 = esl_sext<8,7>(tmp13_fu_21469_p2.read());
}

void ShuffleNetV2::thread_tmp13_cast_fu_21479_p1() {
    tmp13_cast_fu_21479_p1 = esl_zext<9,8>(tmp13_cast1_fu_21475_p1.read());
}

void ShuffleNetV2::thread_tmp13_fu_21469_p2() {
    tmp13_fu_21469_p2 = (!ap_const_lv7_58.is_01() || !tmp_230_fu_21431_p2.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_230_fu_21431_p2.read()));
}

void ShuffleNetV2::thread_tmp14_fu_21647_p2() {
    tmp14_fu_21647_p2 = (!ap_const_lv10_288.is_01() || !tmp_224_cast_fu_21638_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_288) + sc_bigint<10>(tmp_224_cast_fu_21638_p1.read()));
}

void ShuffleNetV2::thread_tmp15_fu_21858_p2() {
    tmp15_fu_21858_p2 = (!ap_const_lv10_258.is_01() || !tmp_239_cast_fu_21854_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_239_cast_fu_21854_p1.read()));
}

void ShuffleNetV2::thread_tmp16_fu_22083_p2() {
    tmp16_fu_22083_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_233_cast_fu_22074_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_233_cast_fu_22074_p1.read()));
}

void ShuffleNetV2::thread_tmp17_fu_22624_p2() {
    tmp17_fu_22624_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_251_cast_fu_22620_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_251_cast_fu_22620_p1.read()));
}

void ShuffleNetV2::thread_tmp18_fu_22849_p2() {
    tmp18_fu_22849_p2 = (!ap_const_lv10_2E8.is_01() || !tmp_245_cast_fu_22840_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2E8) + sc_bigint<10>(tmp_245_cast_fu_22840_p1.read()));
}

void ShuffleNetV2::thread_tmp19_fu_23020_p2() {
    tmp19_fu_23020_p2 = (!ap_const_lv9_108.is_01() || !tmp_259_cast_fu_22984_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_108) + sc_bigint<9>(tmp_259_cast_fu_22984_p1.read()));
}

void ShuffleNetV2::thread_tmp1_fu_18868_p2() {
    tmp1_fu_18868_p2 = (!ap_const_lv9_D8.is_01() || !tmp_176_cast_fu_18864_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_D8) + sc_bigint<9>(tmp_176_cast_fu_18864_p1.read()));
}

void ShuffleNetV2::thread_tmp20_fu_23190_p2() {
    tmp20_fu_23190_p2 = (!ap_const_lv9_118.is_01() || !tmp_253_cast_cast_fu_23181_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_118) + sc_bigint<9>(tmp_253_cast_cast_fu_23181_p1.read()));
}

void ShuffleNetV2::thread_tmp21_fu_23405_p2() {
    tmp21_fu_23405_p2 = (!ap_const_lv10_318.is_01() || !tmp_268_cast_fu_23401_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_268_cast_fu_23401_p1.read()));
}

void ShuffleNetV2::thread_tmp22_fu_23630_p2() {
    tmp22_fu_23630_p2 = (!ap_const_lv9_148.is_01() || !tmp_262_cast_cast_fu_23621_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_148) + sc_bigint<9>(tmp_262_cast_cast_fu_23621_p1.read()));
}

void ShuffleNetV2::thread_tmp23_fu_24175_p2() {
    tmp23_fu_24175_p2 = (!ap_const_lv9_178.is_01() || !tmp_280_cast_cast_fu_24171_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_280_cast_cast_fu_24171_p1.read()));
}

void ShuffleNetV2::thread_tmp24_fu_24408_p2() {
    tmp24_fu_24408_p2 = (!ap_const_lv9_178.is_01() || !tmp_274_cast_cast_fu_24399_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_274_cast_cast_fu_24399_p1.read()));
}

void ShuffleNetV2::thread_tmp25_fu_24583_p2() {
    tmp25_fu_24583_p2 = (!ap_const_lv9_138.is_01() || !tmp_288_cast_fu_24547_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_288_cast_fu_24547_p1.read()));
}

void ShuffleNetV2::thread_tmp26_fu_24749_p2() {
    tmp26_fu_24749_p2 = (!ap_const_lv8_A8.is_01() || !tmp_282_cast_cast_fu_24740_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_282_cast_cast_fu_24740_p1.read()));
}

void ShuffleNetV2::thread_tmp27_fu_24964_p2() {
    tmp27_fu_24964_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_297_cast_fu_24960_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_297_cast_fu_24960_p1.read()));
}

void ShuffleNetV2::thread_tmp28_cast1_fu_25191_p1() {
    tmp28_cast1_fu_25191_p1 = esl_sext<10,7>(tmp28_fu_25185_p2.read());
}

void ShuffleNetV2::thread_tmp28_cast_fu_25195_p1() {
    tmp28_cast_fu_25195_p1 = esl_zext<11,10>(tmp28_cast1_fu_25191_p1.read());
}

void ShuffleNetV2::thread_tmp28_fu_25185_p2() {
    tmp28_fu_25185_p2 = (!ap_const_lv7_58.is_01() || !tmp_278_fu_25174_p2.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_278_fu_25174_p2.read()));
}

void ShuffleNetV2::thread_tmp29_fu_25734_p2() {
    tmp29_fu_25734_p2 = (!ap_const_lv11_438.is_01() || !tmp_309_cast_fu_25730_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_309_cast_fu_25730_p1.read()));
}

void ShuffleNetV2::thread_tmp2_fu_19093_p2() {
    tmp2_fu_19093_p2 = (!ap_const_lv9_168.is_01() || !tmp_170_cast_fu_19084_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_170_cast_fu_19084_p1.read()));
}

void ShuffleNetV2::thread_tmp30_fu_25959_p2() {
    tmp30_fu_25959_p2 = (!ap_const_lv11_408.is_01() || !tmp_303_cast_fu_25950_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_408) + sc_bigint<11>(tmp_303_cast_fu_25950_p1.read()));
}

void ShuffleNetV2::thread_tmp31_fu_26130_p2() {
    tmp31_fu_26130_p2 = (!ap_const_lv9_168.is_01() || !tmp_317_cast_fu_26094_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_317_cast_fu_26094_p1.read()));
}

void ShuffleNetV2::thread_tmp32_fu_26296_p2() {
    tmp32_fu_26296_p2 = (!ap_const_lv11_438.is_01() || !tmp_311_cast_fu_26287_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_311_cast_fu_26287_p1.read()));
}

void ShuffleNetV2::thread_tmp33_fu_26507_p2() {
    tmp33_fu_26507_p2 = (!ap_const_lv11_498.is_01() || !tmp_326_cast_fu_26503_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_326_cast_fu_26503_p1.read()));
}

void ShuffleNetV2::thread_tmp34_fu_26732_p2() {
    tmp34_fu_26732_p2 = (!ap_const_lv11_468.is_01() || !tmp_320_cast_fu_26723_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_468) + sc_bigint<11>(tmp_320_cast_fu_26723_p1.read()));
}

void ShuffleNetV2::thread_tmp35_fu_27273_p2() {
    tmp35_fu_27273_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_338_cast_fu_27269_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_338_cast_fu_27269_p1.read()));
}

void ShuffleNetV2::thread_tmp36_fu_27498_p2() {
    tmp36_fu_27498_p2 = (!ap_const_lv11_498.is_01() || !tmp_332_cast_fu_27489_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_332_cast_fu_27489_p1.read()));
}

void ShuffleNetV2::thread_tmp37_fu_27669_p2() {
    tmp37_fu_27669_p2 = (!ap_const_lv8_98.is_01() || !tmp_346_cast_cast_fu_27633_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_346_cast_cast_fu_27633_p1.read()));
}

void ShuffleNetV2::thread_tmp38_fu_27843_p2() {
    tmp38_fu_27843_p2 = (!ap_const_lv11_4C8.is_01() || !tmp_340_cast_fu_27834_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4C8) + sc_bigint<11>(tmp_340_cast_fu_27834_p1.read()));
}

void ShuffleNetV2::thread_tmp39_fu_28054_p2() {
    tmp39_fu_28054_p2 = (!ap_const_lv11_558.is_01() || !tmp_355_cast_fu_28050_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_355_cast_fu_28050_p1.read()));
}

void ShuffleNetV2::thread_tmp3_fu_19264_p2() {
    tmp3_fu_19264_p2 = (!ap_const_lv8_78.is_01() || !tmp_184_cast_fu_19228_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_78) + sc_bigint<8>(tmp_184_cast_fu_19228_p1.read()));
}

void ShuffleNetV2::thread_tmp40_fu_28279_p2() {
    tmp40_fu_28279_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_349_cast_fu_28270_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_349_cast_fu_28270_p1.read()));
}

void ShuffleNetV2::thread_tmp41_fu_28820_p2() {
    tmp41_fu_28820_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_367_cast_fu_28816_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_367_cast_fu_28816_p1.read()));
}

void ShuffleNetV2::thread_tmp42_fu_29045_p2() {
    tmp42_fu_29045_p2 = (!ap_const_lv11_528.is_01() || !tmp_361_cast_fu_29036_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_528) + sc_bigint<11>(tmp_361_cast_fu_29036_p1.read()));
}

void ShuffleNetV2::thread_tmp43_fu_29216_p2() {
    tmp43_fu_29216_p2 = (!ap_const_lv8_C8.is_01() || !tmp_375_cast_cast_fu_29180_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_375_cast_cast_fu_29180_p1.read()));
}

void ShuffleNetV2::thread_tmp44_fu_29394_p2() {
    tmp44_fu_29394_p2 = (!ap_const_lv11_558.is_01() || !tmp_369_cast_fu_29385_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_369_cast_fu_29385_p1.read()));
}

void ShuffleNetV2::thread_tmp45_fu_29605_p2() {
    tmp45_fu_29605_p2 = (!ap_const_lv11_618.is_01() || !tmp_384_cast_fu_29601_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_618) + sc_bigint<11>(tmp_384_cast_fu_29601_p1.read()));
}

void ShuffleNetV2::thread_tmp46_fu_29830_p2() {
    tmp46_fu_29830_p2 = (!ap_const_lv11_588.is_01() || !tmp_378_cast_fu_29821_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_588) + sc_bigint<11>(tmp_378_cast_fu_29821_p1.read()));
}

void ShuffleNetV2::thread_tmp47_fu_30371_p2() {
    tmp47_fu_30371_p2 = (!ap_const_lv10_278.is_01() || !tmp_396_cast_cast_fu_30367_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_396_cast_cast_fu_30367_p1.read()));
}

void ShuffleNetV2::thread_tmp48_fu_30604_p2() {
    tmp48_fu_30604_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_390_cast_fu_30595_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_390_cast_fu_30595_p1.read()));
}

void ShuffleNetV2::thread_tmp49_fu_30775_p2() {
    tmp49_fu_30775_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_404_cast_fu_30739_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_404_cast_fu_30739_p1.read()));
}

void ShuffleNetV2::thread_tmp4_fu_19434_p2() {
    tmp4_fu_19434_p2 = (!ap_const_lv8_98.is_01() || !tmp_178_cast_cast_fu_19425_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_178_cast_cast_fu_19425_p1.read()));
}

void ShuffleNetV2::thread_tmp50_fu_30945_p2() {
    tmp50_fu_30945_p2 = (!ap_const_lv11_5E8.is_01() || !tmp_398_cast_fu_30936_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5E8) + sc_bigint<11>(tmp_398_cast_fu_30936_p1.read()));
}

void ShuffleNetV2::thread_tmp51_fu_31156_p2() {
    tmp51_fu_31156_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_413_cast_cast_fu_31152_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_413_cast_cast_fu_31152_p1.read()));
}

void ShuffleNetV2::thread_tmp52_fu_31389_p2() {
    tmp52_fu_31389_p2 = (!ap_const_lv10_218.is_01() || !tmp_407_cast_cast_fu_31380_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_218) + sc_bigint<10>(tmp_407_cast_cast_fu_31380_p1.read()));
}

void ShuffleNetV2::thread_tmp53_fu_31934_p2() {
    tmp53_fu_31934_p2 = (!ap_const_lv9_138.is_01() || !tmp_425_cast_cast_fu_31930_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_425_cast_cast_fu_31930_p1.read()));
}

void ShuffleNetV2::thread_tmp54_fu_32167_p2() {
    tmp54_fu_32167_p2 = (!ap_const_lv10_248.is_01() || !tmp_419_cast_cast_fu_32158_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_248) + sc_bigint<10>(tmp_419_cast_cast_fu_32158_p1.read()));
}

void ShuffleNetV2::thread_tmp55_fu_32342_p2() {
    tmp55_fu_32342_p2 = (!ap_const_lv10_228.is_01() || !tmp_433_cast_fu_32306_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_433_cast_fu_32306_p1.read()));
}

void ShuffleNetV2::thread_tmp56_fu_32508_p2() {
    tmp56_fu_32508_p2 = (!ap_const_lv10_278.is_01() || !tmp_427_cast_cast_fu_32499_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_427_cast_cast_fu_32499_p1.read()));
}

void ShuffleNetV2::thread_tmp57_cast1_fu_32729_p1() {
    tmp57_cast1_fu_32729_p1 = esl_sext<11,9>(tmp57_fu_32723_p2.read());
}

void ShuffleNetV2::thread_tmp57_cast_fu_32733_p1() {
    tmp57_cast_fu_32733_p1 = esl_zext<12,11>(tmp57_cast1_fu_32729_p1.read());
}

void ShuffleNetV2::thread_tmp57_fu_32723_p2() {
    tmp57_fu_32723_p2 = (!ap_const_lv9_198.is_01() || !tmp_442_cast_cast_fu_32719_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_442_cast_cast_fu_32719_p1.read()));
}

void ShuffleNetV2::thread_tmp58_fu_32956_p2() {
    tmp58_fu_32956_p2 = (!ap_const_lv10_2A8.is_01() || !tmp_436_cast_cast_fu_32947_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2A8) + sc_bigint<10>(tmp_436_cast_cast_fu_32947_p1.read()));
}

void ShuffleNetV2::thread_tmp59_fu_33278_p2() {
    tmp59_fu_33278_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_453_cast_fu_33274_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_453_cast_fu_33274_p1.read()));
}

void ShuffleNetV2::thread_tmp5_fu_19649_p2() {
    tmp5_fu_19649_p2 = (!ap_const_lv9_138.is_01() || !tmp_193_cast_fu_19645_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_193_cast_fu_19645_p1.read()));
}

void ShuffleNetV2::thread_tmp60_fu_33503_p2() {
    tmp60_fu_33503_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_447_cast_cast_fu_33494_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_447_cast_cast_fu_33494_p1.read()));
}

void ShuffleNetV2::thread_tmp61_fu_33678_p2() {
    tmp61_fu_33678_p2 = (!ap_const_lv10_258.is_01() || !tmp_461_cast_fu_33642_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_461_cast_fu_33642_p1.read()));
}

void ShuffleNetV2::thread_tmp62_fu_33844_p2() {
    tmp62_fu_33844_p2 = (!ap_const_lv9_138.is_01() || !tmp_455_cast_cast_fu_33835_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_455_cast_cast_fu_33835_p1.read()));
}

void ShuffleNetV2::thread_tmp63_fu_34047_p2() {
    tmp63_fu_34047_p2 = (!ap_const_lv12_978.is_01() || !tmp_470_cast_fu_34043_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_470_cast_fu_34043_p1.read()));
}

void ShuffleNetV2::thread_tmp64_cast1_fu_34278_p1() {
    tmp64_cast1_fu_34278_p1 = esl_sext<11,9>(tmp64_fu_34272_p2.read());
}

void ShuffleNetV2::thread_tmp64_cast_fu_34282_p1() {
    tmp64_cast_fu_34282_p1 = esl_zext<12,11>(tmp64_cast1_fu_34278_p1.read());
}

void ShuffleNetV2::thread_tmp64_fu_34272_p2() {
    tmp64_fu_34272_p2 = (!ap_const_lv9_198.is_01() || !tmp_464_cast_cast_fu_34263_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_464_cast_cast_fu_34263_p1.read()));
}

void ShuffleNetV2::thread_tmp65_fu_34451_p2() {
    tmp65_fu_34451_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_478_cast_fu_34415_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_478_cast_fu_34415_p1.read()));
}

void ShuffleNetV2::thread_tmp66_fu_34617_p2() {
    tmp66_fu_34617_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_472_cast_fu_34608_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_472_cast_fu_34608_p1.read()));
}

void ShuffleNetV2::thread_tmp67_fu_34816_p2() {
    tmp67_fu_34816_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_491_cast_fu_34812_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_491_cast_fu_34812_p1.read()));
}

void ShuffleNetV2::thread_tmp68_fu_35041_p2() {
    tmp68_fu_35041_p2 = (!ap_const_lv12_858.is_01() || !tmp_481_cast_fu_35032_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_858) + sc_bigint<12>(tmp_481_cast_fu_35032_p1.read()));
}

void ShuffleNetV2::thread_tmp69_fu_35451_p2() {
    tmp69_fu_35451_p2 = (!ap_const_lv12_C78.is_01() || !tmp_499_cast_fu_35447_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C78) + sc_bigint<12>(tmp_499_cast_fu_35447_p1.read()));
}

void ShuffleNetV2::thread_tmp6_fu_19874_p2() {
    tmp6_fu_19874_p2 = (!ap_const_lv8_C8.is_01() || !tmp_187_cast_cast_fu_19865_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_187_cast_cast_fu_19865_p1.read()));
}

void ShuffleNetV2::thread_tmp70_fu_35676_p2() {
    tmp70_fu_35676_p2 = (!ap_const_lv12_8B8.is_01() || !tmp_493_cast_fu_35667_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_8B8) + sc_bigint<12>(tmp_493_cast_fu_35667_p1.read()));
}

void ShuffleNetV2::thread_tmp71_fu_35847_p2() {
    tmp71_fu_35847_p2 = (!ap_const_lv10_318.is_01() || !tmp_507_cast_fu_35811_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_507_cast_fu_35811_p1.read()));
}

void ShuffleNetV2::thread_tmp72_fu_36013_p2() {
    tmp72_fu_36013_p2 = (!ap_const_lv12_918.is_01() || !tmp_501_cast_fu_36004_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_918) + sc_bigint<12>(tmp_501_cast_fu_36004_p1.read()));
}

void ShuffleNetV2::thread_tmp73_fu_36212_p2() {
    tmp73_fu_36212_p2 = (!ap_const_lv11_5F8.is_01() || !tmp_516_cast_cast_fu_36208_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5F8) + sc_bigint<11>(tmp_516_cast_cast_fu_36208_p1.read()));
}

void ShuffleNetV2::thread_tmp74_fu_36445_p2() {
    tmp74_fu_36445_p2 = (!ap_const_lv12_978.is_01() || !tmp_510_cast_fu_36436_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_510_cast_fu_36436_p1.read()));
}

void ShuffleNetV2::thread_tmp75_fu_36978_p2() {
    tmp75_fu_36978_p2 = (!ap_const_lv13_F78.is_01() || !tmp_528_cast_fu_36974_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_F78) + sc_bigint<13>(tmp_528_cast_fu_36974_p1.read()));
}

void ShuffleNetV2::thread_tmp76_fu_37203_p2() {
    tmp76_fu_37203_p2 = (!ap_const_lv12_9D8.is_01() || !tmp_522_cast_fu_37194_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_9D8) + sc_bigint<12>(tmp_522_cast_fu_37194_p1.read()));
}

void ShuffleNetV2::thread_tmp77_fu_37374_p2() {
    tmp77_fu_37374_p2 = (!ap_const_lv9_178.is_01() || !tmp_536_cast_cast_fu_37338_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_536_cast_cast_fu_37338_p1.read()));
}

void ShuffleNetV2::thread_tmp78_fu_37552_p2() {
    tmp78_fu_37552_p2 = (!ap_const_lv12_A38.is_01() || !tmp_530_cast_fu_37543_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A38) + sc_bigint<12>(tmp_530_cast_fu_37543_p1.read()));
}

void ShuffleNetV2::thread_tmp79_fu_37751_p2() {
    tmp79_fu_37751_p2 = (!ap_const_lv13_10F8.is_01() || !tmp_545_cast_fu_37747_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_10F8) + sc_bigint<13>(tmp_545_cast_fu_37747_p1.read()));
}

void ShuffleNetV2::thread_tmp7_fu_20049_p2() {
    tmp7_fu_20049_p2 = (!ap_const_lv8_A8.is_01() || !tmp_201_cast_fu_20013_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_201_cast_fu_20013_p1.read()));
}

void ShuffleNetV2::thread_tmp80_fu_37976_p2() {
    tmp80_fu_37976_p2 = (!ap_const_lv12_A98.is_01() || !tmp_539_cast_fu_37967_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A98) + sc_bigint<12>(tmp_539_cast_fu_37967_p1.read()));
}

void ShuffleNetV2::thread_tmp81_fu_38509_p2() {
    tmp81_fu_38509_p2 = (!ap_const_lv13_1278.is_01() || !tmp_557_cast_fu_38505_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1278) + sc_bigint<13>(tmp_557_cast_fu_38505_p1.read()));
}

void ShuffleNetV2::thread_tmp82_fu_38734_p2() {
    tmp82_fu_38734_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_551_cast_fu_38725_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_551_cast_fu_38725_p1.read()));
}

void ShuffleNetV2::thread_tmp83_fu_38905_p2() {
    tmp83_fu_38905_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_565_cast_fu_38869_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_565_cast_fu_38869_p1.read()));
}

void ShuffleNetV2::thread_tmp84_fu_39075_p2() {
    tmp84_fu_39075_p2 = (!ap_const_lv12_B58.is_01() || !tmp_559_cast_fu_39066_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_B58) + sc_bigint<12>(tmp_559_cast_fu_39066_p1.read()));
}

void ShuffleNetV2::thread_tmp85_fu_39274_p2() {
    tmp85_fu_39274_p2 = (!ap_const_lv13_13F8.is_01() || !tmp_574_cast_fu_39270_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_13F8) + sc_bigint<13>(tmp_574_cast_fu_39270_p1.read()));
}

void ShuffleNetV2::thread_tmp86_fu_39499_p2() {
    tmp86_fu_39499_p2 = (!ap_const_lv12_BB8.is_01() || !tmp_568_cast_fu_39490_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_BB8) + sc_bigint<12>(tmp_568_cast_fu_39490_p1.read()));
}

void ShuffleNetV2::thread_tmp8_fu_20215_p2() {
    tmp8_fu_20215_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_195_cast_fu_20206_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_195_cast_fu_20206_p1.read()));
}

void ShuffleNetV2::thread_tmp9_cast_fu_20432_p1() {
    tmp9_cast_fu_20432_p1 = esl_zext<10,9>(tmp9_fu_20426_p2.read());
}

void ShuffleNetV2::thread_tmp9_fu_20426_p2() {
    tmp9_fu_20426_p2 = (!ap_const_lv9_198.is_01() || !tmp_214_cast_fu_20422_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_214_cast_fu_20422_p1.read()));
}

void ShuffleNetV2::thread_tmp_1000_fu_27011_p2() {
    tmp_1000_fu_27011_p2 = (!p_shl471_cast_fu_26995_p1.read().is_01() || !p_shl472_cast_fu_27007_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl471_cast_fu_26995_p1.read()) + sc_biguint<15>(p_shl472_cast_fu_27007_p1.read()));
}

void ShuffleNetV2::thread_tmp_1001_fu_27017_p2() {
    tmp_1001_fu_27017_p2 = (!h_87_cast_cast1_fu_26974_p1.read().is_01() || !tmp_993_reg_44979.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_87_cast_cast1_fu_26974_p1.read()) + sc_biguint<10>(tmp_993_reg_44979.read()));
}

void ShuffleNetV2::thread_tmp_1002_cast_fu_18991_p1() {
    tmp_1002_cast_fu_18991_p1 = esl_sext<32,8>(tmp_799_reg_42469.read());
}

void ShuffleNetV2::thread_tmp_1002_fu_27046_p2() {
    tmp_1002_fu_27046_p2 = (!p_shl473_cast_fu_27030_p1.read().is_01() || !p_shl474_cast_fu_27042_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl473_cast_fu_27030_p1.read()) + sc_biguint<14>(p_shl474_cast_fu_27042_p1.read()));
}

void ShuffleNetV2::thread_tmp_1003_fu_26870_p2() {
    tmp_1003_fu_26870_p2 = (!tmp_998_reg_44956.read().is_01() || !w_86_cast_cast_fu_26866_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_998_reg_44956.read()) + sc_biguint<15>(w_86_cast_cast_fu_26866_p1.read()));
}

void ShuffleNetV2::thread_tmp_1004_fu_27072_p2() {
    tmp_1004_fu_27072_p2 = (!tmp_1000_reg_45005.read().is_01() || !w_88_cast_cast_fu_27068_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1000_reg_45005.read()) + sc_biguint<15>(w_88_cast_cast_fu_27068_p1.read()));
}

void ShuffleNetV2::thread_tmp_1005_fu_27082_p2() {
    tmp_1005_fu_27082_p2 = (!tmp_1002_reg_45010.read().is_01() || !w_88_cast_cast1_fu_27064_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1002_reg_45010.read()) + sc_biguint<14>(w_88_cast_cast1_fu_27064_p1.read()));
}

void ShuffleNetV2::thread_tmp_1006_fu_27293_p3() {
    tmp_1006_fu_27293_p3 = esl_concat<11,5>(sum54_reg_45088.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1007_fu_27304_p3() {
    tmp_1007_fu_27304_p3 = esl_concat<11,3>(sum54_reg_45088.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1008_fu_27315_p2() {
    tmp_1008_fu_27315_p2 = (!p_shl475_cast_fu_27300_p1.read().is_01() || !p_shl476_cast_fu_27311_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl475_cast_fu_27300_p1.read()) - sc_biguint<17>(p_shl476_cast_fu_27311_p1.read()));
}

void ShuffleNetV2::thread_tmp_1009_fu_27325_p2() {
    tmp_1009_fu_27325_p2 = (!ci56_cast1_cast_reg_45056.read().is_01() || !tmp_1403_cast_fu_27321_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci56_cast1_cast_reg_45056.read()) + sc_bigint<18>(tmp_1403_cast_fu_27321_p1.read()));
}

void ShuffleNetV2::thread_tmp_1010_fu_27381_p2() {
    tmp_1010_fu_27381_p2 = (!p_shl477_cast_fu_27367_p3.read().is_01() || !p_shl478_cast_fu_27374_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl477_cast_fu_27367_p3.read()) - sc_biguint<8>(p_shl478_cast_fu_27374_p3.read()));
}

void ShuffleNetV2::thread_tmp_1011_fu_27387_p2() {
    tmp_1011_fu_27387_p2 = (!tmp_335_cast_cast_reg_45069.read().is_01() || !tmp_1010_fu_27381_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_335_cast_cast_reg_45069.read()) + sc_biguint<8>(tmp_1010_fu_27381_p2.read()));
}

void ShuffleNetV2::thread_tmp_1012_fu_27646_p3() {
    tmp_1012_fu_27646_p3 = esl_concat<7,2>(tmp_315_fu_27637_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1013_fu_27658_p2() {
    tmp_1013_fu_27658_p2 = (!p_shl479_cast_fu_27654_p1.read().is_01() || !tmp_347_cast_cast_fu_27642_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl479_cast_fu_27654_p1.read()) - sc_bigint<10>(tmp_347_cast_cast_fu_27642_p1.read()));
}

void ShuffleNetV2::thread_tmp_1014_cast_fu_19355_p1() {
    tmp_1014_cast_fu_19355_p1 = esl_zext<32,10>(tmp_804_reg_42593.read());
}

void ShuffleNetV2::thread_tmp_1014_fu_27664_p2() {
    tmp_1014_fu_27664_p2 = (!tmp_1013_fu_27658_p2.read().is_01() || !w89_cast_cast_reg_45183.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1013_fu_27658_p2.read()) + sc_biguint<10>(w89_cast_cast_reg_45183.read()));
}

void ShuffleNetV2::thread_tmp_1015_fu_27685_p2() {
    tmp_1015_fu_27685_p2 = (!tmp_2372_fu_27680_p2.read().is_01() || !tmp_1014_reg_45222.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2372_fu_27680_p2.read()) - sc_biguint<10>(tmp_1014_reg_45222.read()));
}

void ShuffleNetV2::thread_tmp_1016_cast_fu_19310_p1() {
    tmp_1016_cast_fu_19310_p1 = esl_sext<12,11>(tmp_806_fu_19304_p2.read());
}

void ShuffleNetV2::thread_tmp_1016_fu_27690_p2() {
    tmp_1016_fu_27690_p2 = (!tmp_1015_fu_27685_p2.read().is_01() || !h88_cast_cast_reg_45201.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1015_fu_27685_p2.read()) + sc_biguint<10>(h88_cast_cast_reg_45201.read()));
}

void ShuffleNetV2::thread_tmp_1017_cast_fu_19319_p1() {
    tmp_1017_cast_fu_19319_p1 = esl_sext<32,12>(tmp_807_reg_42598.read());
}

void ShuffleNetV2::thread_tmp_1017_fu_27702_p3() {
    tmp_1017_fu_27702_p3 = esl_concat<8,2>(sum29_reg_45228.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1018_fu_27709_p1() {
    tmp_1018_fu_27709_p1 = esl_sext<11,10>(tmp_1017_fu_27702_p3.read());
}

void ShuffleNetV2::thread_tmp_1019_fu_27717_p2() {
    tmp_1019_fu_27717_p2 = (!p_shl481_cast_fu_27713_p1.read().is_01() || !sum29_cast_cast_fu_27698_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl481_cast_fu_27713_p1.read()) - sc_biguint<12>(sum29_cast_cast_fu_27698_p1.read()));
}

void ShuffleNetV2::thread_tmp_1020_fu_27723_p2() {
    tmp_1020_fu_27723_p2 = (!tmp_1019_fu_27717_p2.read().is_01() || !w89_cast_cast1_reg_45178.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1019_fu_27717_p2.read()) + sc_biguint<12>(w89_cast_cast1_reg_45178.read()));
}

void ShuffleNetV2::thread_tmp_1021_fu_27742_p2() {
    tmp_1021_fu_27742_p2 = (!p_shl244_fu_27738_p1.read().is_01() || !tmp_1426_cast_fu_27728_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl244_fu_27738_p1.read()) - sc_bigint<32>(tmp_1426_cast_fu_27728_p1.read()));
}

void ShuffleNetV2::thread_tmp_1022_fu_27748_p2() {
    tmp_1022_fu_27748_p2 = (!tmp_1021_fu_27742_p2.read().is_01() || !h88_cast_reg_45196.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1021_fu_27742_p2.read()) + sc_biguint<32>(h88_cast_reg_45196.read()));
}

void ShuffleNetV2::thread_tmp_1023_fu_28308_p3() {
    tmp_1023_fu_28308_p3 = esl_concat<6,3>(co115_reg_11835.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1024_fu_28320_p3() {
    tmp_1024_fu_28320_p3 = esl_concat<6,1>(co115_reg_11835.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1025_fu_28332_p2() {
    tmp_1025_fu_28332_p2 = (!p_shl484_cast_fu_28328_p1.read().is_01() || !p_shl483_cast_fu_28316_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl484_cast_fu_28328_p1.read()) + sc_biguint<10>(p_shl483_cast_fu_28316_p1.read()));
}

void ShuffleNetV2::thread_tmp_1026_fu_28074_p3() {
    tmp_1026_fu_28074_p3 = esl_concat<11,5>(sum57_reg_45348.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1027_fu_28085_p3() {
    tmp_1027_fu_28085_p3 = esl_concat<11,3>(sum57_reg_45348.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1028_fu_28096_p2() {
    tmp_1028_fu_28096_p2 = (!p_shl485_cast_fu_28081_p1.read().is_01() || !p_shl486_cast_fu_28092_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl485_cast_fu_28081_p1.read()) - sc_biguint<17>(p_shl486_cast_fu_28092_p1.read()));
}

void ShuffleNetV2::thread_tmp_1029_cast_fu_19697_p1() {
    tmp_1029_cast_fu_19697_p1 = esl_sext<16,15>(tmp_812_fu_19691_p2.read());
}

void ShuffleNetV2::thread_tmp_1029_fu_28106_p2() {
    tmp_1029_fu_28106_p2 = (!ci58_cast1_cast_reg_45316.read().is_01() || !tmp_1441_cast_fu_28102_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci58_cast1_cast_reg_45316.read()) + sc_bigint<18>(tmp_1441_cast_fu_28102_p1.read()));
}

void ShuffleNetV2::thread_tmp_1030_cast_fu_19706_p1() {
    tmp_1030_cast_fu_19706_p1 = esl_sext<32,16>(tmp_813_fu_19701_p2.read());
}

void ShuffleNetV2::thread_tmp_1030_fu_28162_p2() {
    tmp_1030_fu_28162_p2 = (!p_shl487_cast_fu_28148_p3.read().is_01() || !p_shl488_cast_fu_28155_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl487_cast_fu_28148_p3.read()) - sc_biguint<8>(p_shl488_cast_fu_28155_p3.read()));
}

void ShuffleNetV2::thread_tmp_1031_fu_28168_p2() {
    tmp_1031_fu_28168_p2 = (!tmp_352_cast_cast_reg_45329.read().is_01() || !tmp_1030_fu_28162_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_352_cast_cast_reg_45329.read()) + sc_biguint<8>(tmp_1030_fu_28162_p2.read()));
}

void ShuffleNetV2::thread_tmp_1032_fu_28427_p3() {
    tmp_1032_fu_28427_p3 = esl_concat<6,3>(co117_reg_11868.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1033_fu_28439_p3() {
    tmp_1033_fu_28439_p3 = esl_concat<6,1>(co117_reg_11868.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1034_fu_28451_p2() {
    tmp_1034_fu_28451_p2 = (!p_shl490_cast_fu_28447_p1.read().is_01() || !p_shl489_cast_fu_28435_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl490_cast_fu_28447_p1.read()) + sc_biguint<10>(p_shl489_cast_fu_28435_p1.read()));
}

void ShuffleNetV2::thread_tmp_1035_fu_28479_p3() {
    tmp_1035_fu_28479_p3 = esl_concat<7,3>(tmp_321_fu_28473_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1036_cast_fu_19772_p1() {
    tmp_1036_cast_fu_19772_p1 = esl_sext<32,8>(tmp_815_reg_42729.read());
}

void ShuffleNetV2::thread_tmp_1036_fu_28491_p3() {
    tmp_1036_fu_28491_p3 = esl_concat<7,1>(tmp_321_fu_28473_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1037_fu_28503_p2() {
    tmp_1037_fu_28503_p2 = (!p_shl492_cast_fu_28499_p1.read().is_01() || !p_shl491_cast_fu_28487_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl492_cast_fu_28499_p1.read()) + sc_biguint<11>(p_shl491_cast_fu_28487_p1.read()));
}

void ShuffleNetV2::thread_tmp_1038_fu_28366_p2() {
    tmp_1038_fu_28366_p2 = (!h_91_cast_cast_fu_28362_p1.read().is_01() || !tmp_1025_reg_45420.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_91_cast_cast_fu_28362_p1.read()) + sc_biguint<10>(tmp_1025_reg_45420.read()));
}

void ShuffleNetV2::thread_tmp_1039_fu_28395_p2() {
    tmp_1039_fu_28395_p2 = (!p_shl493_cast_fu_28379_p1.read().is_01() || !p_shl494_cast_fu_28391_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl493_cast_fu_28379_p1.read()) + sc_biguint<15>(p_shl494_cast_fu_28391_p1.read()));
}

void ShuffleNetV2::thread_tmp_1040_fu_28529_p2() {
    tmp_1040_fu_28529_p2 = (!h_93_cast_cast_fu_28525_p1.read().is_01() || !tmp_1037_reg_45477.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_93_cast_cast_fu_28525_p1.read()) + sc_biguint<11>(tmp_1037_reg_45477.read()));
}

void ShuffleNetV2::thread_tmp_1041_fu_28558_p2() {
    tmp_1041_fu_28558_p2 = (!p_shl495_cast_fu_28542_p1.read().is_01() || !p_shl496_cast_fu_28554_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl495_cast_fu_28542_p1.read()) + sc_biguint<15>(p_shl496_cast_fu_28554_p1.read()));
}

void ShuffleNetV2::thread_tmp_1042_fu_28564_p2() {
    tmp_1042_fu_28564_p2 = (!h_93_cast_cast1_fu_28521_p1.read().is_01() || !tmp_1034_reg_45464.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_93_cast_cast1_fu_28521_p1.read()) + sc_biguint<10>(tmp_1034_reg_45464.read()));
}

void ShuffleNetV2::thread_tmp_1043_fu_28593_p2() {
    tmp_1043_fu_28593_p2 = (!p_shl497_cast_fu_28577_p1.read().is_01() || !p_shl498_cast_fu_28589_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl497_cast_fu_28577_p1.read()) + sc_biguint<14>(p_shl498_cast_fu_28589_p1.read()));
}

void ShuffleNetV2::thread_tmp_1044_fu_28417_p2() {
    tmp_1044_fu_28417_p2 = (!tmp_1039_reg_45441.read().is_01() || !w_92_cast_cast_fu_28413_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1039_reg_45441.read()) + sc_biguint<15>(w_92_cast_cast_fu_28413_p1.read()));
}

void ShuffleNetV2::thread_tmp_1045_fu_28619_p2() {
    tmp_1045_fu_28619_p2 = (!tmp_1041_reg_45490.read().is_01() || !w_94_cast_cast_fu_28615_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1041_reg_45490.read()) + sc_biguint<15>(w_94_cast_cast_fu_28615_p1.read()));
}

void ShuffleNetV2::thread_tmp_1046_fu_28629_p2() {
    tmp_1046_fu_28629_p2 = (!tmp_1043_reg_45495.read().is_01() || !w_94_cast_cast1_fu_28611_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1043_reg_45495.read()) + sc_biguint<14>(w_94_cast_cast1_fu_28611_p1.read()));
}

void ShuffleNetV2::thread_tmp_1047_fu_28840_p3() {
    tmp_1047_fu_28840_p3 = esl_concat<11,5>(sum59_reg_45573.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1048_cast_fu_20136_p1() {
    tmp_1048_cast_fu_20136_p1 = esl_zext<32,10>(tmp_820_reg_42853.read());
}

void ShuffleNetV2::thread_tmp_1048_fu_28851_p3() {
    tmp_1048_fu_28851_p3 = esl_concat<11,3>(sum59_reg_45573.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1049_fu_28862_p2() {
    tmp_1049_fu_28862_p2 = (!p_shl499_cast_fu_28847_p1.read().is_01() || !p_shl500_cast_fu_28858_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl499_cast_fu_28847_p1.read()) - sc_biguint<17>(p_shl500_cast_fu_28858_p1.read()));
}

void ShuffleNetV2::thread_tmp_1050_fu_28872_p2() {
    tmp_1050_fu_28872_p2 = (!ci60_cast1_cast_reg_45541.read().is_01() || !tmp_1480_cast_fu_28868_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci60_cast1_cast_reg_45541.read()) + sc_bigint<18>(tmp_1480_cast_fu_28868_p1.read()));
}

void ShuffleNetV2::thread_tmp_1051_cast_fu_20100_p1() {
    tmp_1051_cast_fu_20100_p1 = esl_sext<32,11>(tmp_823_reg_42858.read());
}

void ShuffleNetV2::thread_tmp_1051_fu_28928_p2() {
    tmp_1051_fu_28928_p2 = (!p_shl501_cast_fu_28914_p3.read().is_01() || !p_shl502_cast_fu_28921_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl501_cast_fu_28914_p3.read()) - sc_biguint<8>(p_shl502_cast_fu_28921_p3.read()));
}

void ShuffleNetV2::thread_tmp_1052_fu_28934_p2() {
    tmp_1052_fu_28934_p2 = (!tmp_364_cast_cast_reg_45554.read().is_01() || !tmp_1051_fu_28928_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_364_cast_cast_reg_45554.read()) + sc_biguint<8>(tmp_1051_fu_28928_p2.read()));
}

void ShuffleNetV2::thread_tmp_1053_fu_29193_p3() {
    tmp_1053_fu_29193_p3 = esl_concat<7,2>(tmp_334_fu_29184_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1054_fu_29205_p2() {
    tmp_1054_fu_29205_p2 = (!p_shl503_cast_fu_29201_p1.read().is_01() || !tmp_376_cast_cast_fu_29189_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl503_cast_fu_29201_p1.read()) - sc_bigint<10>(tmp_376_cast_cast_fu_29189_p1.read()));
}

void ShuffleNetV2::thread_tmp_1055_fu_29211_p2() {
    tmp_1055_fu_29211_p2 = (!tmp_1054_fu_29205_p2.read().is_01() || !w95_cast_cast_reg_45668.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1054_fu_29205_p2.read()) + sc_biguint<10>(w95_cast_cast_reg_45668.read()));
}

void ShuffleNetV2::thread_tmp_1056_fu_29232_p2() {
    tmp_1056_fu_29232_p2 = (!tmp_2396_fu_29227_p2.read().is_01() || !tmp_1055_reg_45707.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2396_fu_29227_p2.read()) - sc_biguint<10>(tmp_1055_reg_45707.read()));
}

void ShuffleNetV2::thread_tmp_1057_fu_29237_p2() {
    tmp_1057_fu_29237_p2 = (!tmp_1056_fu_29232_p2.read().is_01() || !h94_cast_cast_reg_45686.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1056_fu_29232_p2.read()) + sc_biguint<10>(h94_cast_cast_reg_45686.read()));
}

void ShuffleNetV2::thread_tmp_1058_fu_29249_p3() {
    tmp_1058_fu_29249_p3 = esl_concat<8,2>(sum31_reg_45713.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1059_fu_29256_p1() {
    tmp_1059_fu_29256_p1 = esl_sext<11,10>(tmp_1058_fu_29249_p3.read());
}

void ShuffleNetV2::thread_tmp_1060_fu_29264_p2() {
    tmp_1060_fu_29264_p2 = (!p_shl505_cast_fu_29260_p1.read().is_01() || !sum31_cast_cast_fu_29245_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl505_cast_fu_29260_p1.read()) - sc_biguint<12>(sum31_cast_cast_fu_29245_p1.read()));
}

void ShuffleNetV2::thread_tmp_1061_fu_29274_p2() {
    tmp_1061_fu_29274_p2 = (!tmp_1502_cast_fu_29270_p1.read().is_01() || !w95_cast_cast1_reg_45663.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1502_cast_fu_29270_p1.read()) + sc_biguint<13>(w95_cast_cast1_reg_45663.read()));
}

void ShuffleNetV2::thread_tmp_1062_fu_29293_p2() {
    tmp_1062_fu_29293_p2 = (!p_shl249_fu_29289_p1.read().is_01() || !tmp_1503_cast_fu_29279_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl249_fu_29289_p1.read()) - sc_bigint<32>(tmp_1503_cast_fu_29279_p1.read()));
}

void ShuffleNetV2::thread_tmp_1063_fu_29299_p2() {
    tmp_1063_fu_29299_p2 = (!tmp_1062_fu_29293_p2.read().is_01() || !h94_cast_reg_45681.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1062_fu_29293_p2.read()) + sc_biguint<32>(h94_cast_reg_45681.read()));
}

void ShuffleNetV2::thread_tmp_1064_fu_29859_p3() {
    tmp_1064_fu_29859_p3 = esl_concat<6,3>(co125_reg_12077.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1065_fu_29871_p3() {
    tmp_1065_fu_29871_p3 = esl_concat<6,1>(co125_reg_12077.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1066_fu_29883_p2() {
    tmp_1066_fu_29883_p2 = (!p_shl508_cast_fu_29879_p1.read().is_01() || !p_shl507_cast_fu_29867_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl508_cast_fu_29879_p1.read()) + sc_biguint<10>(p_shl507_cast_fu_29867_p1.read()));
}

void ShuffleNetV2::thread_tmp_1067_fu_29625_p3() {
    tmp_1067_fu_29625_p3 = esl_concat<11,5>(sum62_reg_45833.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1068_fu_29636_p3() {
    tmp_1068_fu_29636_p3 = esl_concat<11,3>(sum62_reg_45833.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1069_cast_fu_20478_p1() {
    tmp_1069_cast_fu_20478_p1 = esl_sext<17,16>(tmp_834_fu_20472_p2.read());
}

void ShuffleNetV2::thread_tmp_1069_fu_29647_p2() {
    tmp_1069_fu_29647_p2 = (!p_shl509_cast_fu_29632_p1.read().is_01() || !p_shl510_cast_fu_29643_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl509_cast_fu_29632_p1.read()) - sc_biguint<17>(p_shl510_cast_fu_29643_p1.read()));
}

void ShuffleNetV2::thread_tmp_1070_cast_fu_20487_p1() {
    tmp_1070_cast_fu_20487_p1 = esl_sext<32,17>(tmp_835_fu_20482_p2.read());
}

void ShuffleNetV2::thread_tmp_1070_fu_29657_p2() {
    tmp_1070_fu_29657_p2 = (!ci62_cast1_cast_reg_45801.read().is_01() || !tmp_1518_cast_fu_29653_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci62_cast1_cast_reg_45801.read()) + sc_bigint<18>(tmp_1518_cast_fu_29653_p1.read()));
}

void ShuffleNetV2::thread_tmp_1071_fu_29713_p2() {
    tmp_1071_fu_29713_p2 = (!p_shl511_cast_fu_29699_p3.read().is_01() || !p_shl512_cast_fu_29706_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl511_cast_fu_29699_p3.read()) - sc_biguint<8>(p_shl512_cast_fu_29706_p3.read()));
}

void ShuffleNetV2::thread_tmp_1072_fu_29719_p2() {
    tmp_1072_fu_29719_p2 = (!tmp_381_cast_cast_reg_45814.read().is_01() || !tmp_1071_fu_29713_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_381_cast_cast_reg_45814.read()) + sc_biguint<8>(tmp_1071_fu_29713_p2.read()));
}

void ShuffleNetV2::thread_tmp_1073_fu_29978_p3() {
    tmp_1073_fu_29978_p3 = esl_concat<6,3>(co127_reg_12110.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1074_fu_29990_p3() {
    tmp_1074_fu_29990_p3 = esl_concat<6,1>(co127_reg_12110.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1075_fu_30002_p2() {
    tmp_1075_fu_30002_p2 = (!p_shl514_cast_fu_29998_p1.read().is_01() || !p_shl513_cast_fu_29986_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl514_cast_fu_29998_p1.read()) + sc_biguint<10>(p_shl513_cast_fu_29986_p1.read()));
}

void ShuffleNetV2::thread_tmp_1076_cast_fu_20553_p1() {
    tmp_1076_cast_fu_20553_p1 = esl_sext<32,8>(tmp_837_reg_42989.read());
}

void ShuffleNetV2::thread_tmp_1076_fu_30030_p3() {
    tmp_1076_fu_30030_p3 = esl_concat<7,3>(tmp_340_fu_30024_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1077_fu_30042_p3() {
    tmp_1077_fu_30042_p3 = esl_concat<7,1>(tmp_340_fu_30024_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1078_fu_30054_p2() {
    tmp_1078_fu_30054_p2 = (!p_shl516_cast_fu_30050_p1.read().is_01() || !p_shl515_cast_fu_30038_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl516_cast_fu_30050_p1.read()) + sc_biguint<11>(p_shl515_cast_fu_30038_p1.read()));
}

void ShuffleNetV2::thread_tmp_1079_fu_29917_p2() {
    tmp_1079_fu_29917_p2 = (!h_97_cast_cast_fu_29913_p1.read().is_01() || !tmp_1066_reg_45905.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_97_cast_cast_fu_29913_p1.read()) + sc_biguint<10>(tmp_1066_reg_45905.read()));
}

void ShuffleNetV2::thread_tmp_1080_fu_29946_p2() {
    tmp_1080_fu_29946_p2 = (!p_shl517_cast_fu_29930_p1.read().is_01() || !p_shl518_cast_fu_29942_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl517_cast_fu_29930_p1.read()) + sc_biguint<15>(p_shl518_cast_fu_29942_p1.read()));
}

void ShuffleNetV2::thread_tmp_1081_fu_30080_p2() {
    tmp_1081_fu_30080_p2 = (!h_99_cast_cast_fu_30076_p1.read().is_01() || !tmp_1078_reg_45962.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_99_cast_cast_fu_30076_p1.read()) + sc_biguint<11>(tmp_1078_reg_45962.read()));
}

void ShuffleNetV2::thread_tmp_1082_fu_30109_p2() {
    tmp_1082_fu_30109_p2 = (!p_shl519_cast_fu_30093_p1.read().is_01() || !p_shl520_cast_fu_30105_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl519_cast_fu_30093_p1.read()) + sc_biguint<15>(p_shl520_cast_fu_30105_p1.read()));
}

void ShuffleNetV2::thread_tmp_1083_fu_30115_p2() {
    tmp_1083_fu_30115_p2 = (!h_99_cast_cast1_fu_30072_p1.read().is_01() || !tmp_1075_reg_45949.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_99_cast_cast1_fu_30072_p1.read()) + sc_biguint<10>(tmp_1075_reg_45949.read()));
}

void ShuffleNetV2::thread_tmp_1084_fu_30144_p2() {
    tmp_1084_fu_30144_p2 = (!p_shl521_cast_fu_30128_p1.read().is_01() || !p_shl522_cast_fu_30140_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl521_cast_fu_30128_p1.read()) + sc_biguint<14>(p_shl522_cast_fu_30140_p1.read()));
}

void ShuffleNetV2::thread_tmp_1085_fu_29968_p2() {
    tmp_1085_fu_29968_p2 = (!tmp_1080_reg_45926.read().is_01() || !w_98_cast_cast_fu_29964_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1080_reg_45926.read()) + sc_biguint<15>(w_98_cast_cast_fu_29964_p1.read()));
}

void ShuffleNetV2::thread_tmp_1086_fu_30170_p2() {
    tmp_1086_fu_30170_p2 = (!tmp_1082_reg_45975.read().is_01() || !w_100_cast_cast_fu_30166_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1082_reg_45975.read()) + sc_biguint<15>(w_100_cast_cast_fu_30166_p1.read()));
}

void ShuffleNetV2::thread_tmp_1087_cast_fu_20881_p1() {
    tmp_1087_cast_fu_20881_p1 = esl_zext<32,15>(tmp_842_fu_20876_p2.read());
}

void ShuffleNetV2::thread_tmp_1087_fu_30180_p2() {
    tmp_1087_fu_30180_p2 = (!tmp_1084_reg_45980.read().is_01() || !w_100_cast_cast1_fu_30162_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1084_reg_45980.read()) + sc_biguint<14>(w_100_cast_cast1_fu_30162_p1.read()));
}

void ShuffleNetV2::thread_tmp_1088_cast_fu_20891_p1() {
    tmp_1088_cast_fu_20891_p1 = esl_zext<32,14>(tmp_843_reg_43088.read());
}

void ShuffleNetV2::thread_tmp_1088_fu_30391_p3() {
    tmp_1088_fu_30391_p3 = esl_concat<10,5>(sum64_reg_46058.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1089_fu_30398_p1() {
    tmp_1089_fu_30398_p1 = esl_sext<16,15>(tmp_1088_fu_30391_p3.read());
}

void ShuffleNetV2::thread_tmp_1090_fu_30406_p3() {
    tmp_1090_fu_30406_p3 = esl_concat<10,3>(sum64_reg_46058.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1091_fu_30413_p1() {
    tmp_1091_fu_30413_p1 = esl_sext<14,13>(tmp_1090_fu_30406_p3.read());
}

void ShuffleNetV2::thread_tmp_1092_fu_30421_p2() {
    tmp_1092_fu_30421_p2 = (!p_shl523_cast_fu_30402_p1.read().is_01() || !p_shl524_cast_fu_30417_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl523_cast_fu_30402_p1.read()) - sc_biguint<17>(p_shl524_cast_fu_30417_p1.read()));
}

void ShuffleNetV2::thread_tmp_1093_fu_30431_p2() {
    tmp_1093_fu_30431_p2 = (!tmp_1559_cast_fu_30427_p1.read().is_01() || !ci64_cast1_cast_reg_46026.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp_1559_cast_fu_30427_p1.read()) + sc_biguint<18>(ci64_cast1_cast_reg_46026.read()));
}

void ShuffleNetV2::thread_tmp_1094_fu_30487_p2() {
    tmp_1094_fu_30487_p2 = (!p_shl525_cast_fu_30473_p3.read().is_01() || !p_shl526_cast_fu_30480_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl525_cast_fu_30473_p3.read()) - sc_biguint<8>(p_shl526_cast_fu_30480_p3.read()));
}

void ShuffleNetV2::thread_tmp_1095_fu_30493_p2() {
    tmp_1095_fu_30493_p2 = (!tmp_1094_fu_30487_p2.read().is_01() || !tmp_393_cast_cast_reg_46039.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1094_fu_30487_p2.read()) + sc_bigint<8>(tmp_393_cast_cast_reg_46039.read()));
}

void ShuffleNetV2::thread_tmp_1096_fu_30752_p3() {
    tmp_1096_fu_30752_p3 = esl_concat<7,2>(tmp_353_fu_30743_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1097_cast_fu_21125_p1() {
    tmp_1097_cast_fu_21125_p1 = esl_sext<17,16>(tmp_846_fu_21119_p2.read());
}

void ShuffleNetV2::thread_tmp_1097_fu_30764_p2() {
    tmp_1097_fu_30764_p2 = (!p_shl527_cast_fu_30760_p1.read().is_01() || !tmp_405_cast_cast_fu_30748_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl527_cast_fu_30760_p1.read()) - sc_bigint<10>(tmp_405_cast_cast_fu_30748_p1.read()));
}

void ShuffleNetV2::thread_tmp_1098_cast_fu_21134_p1() {
    tmp_1098_cast_fu_21134_p1 = esl_sext<32,17>(tmp_847_fu_21129_p2.read());
}

void ShuffleNetV2::thread_tmp_1098_fu_30770_p2() {
    tmp_1098_fu_30770_p2 = (!w101_cast_cast_reg_46153.read().is_01() || !tmp_1097_fu_30764_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w101_cast_cast_reg_46153.read()) + sc_biguint<10>(tmp_1097_fu_30764_p2.read()));
}

void ShuffleNetV2::thread_tmp_1099_fu_30791_p2() {
    tmp_1099_fu_30791_p2 = (!tmp_2420_fu_30786_p2.read().is_01() || !tmp_1098_reg_46192.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2420_fu_30786_p2.read()) - sc_biguint<10>(tmp_1098_reg_46192.read()));
}

void ShuffleNetV2::thread_tmp_1100_fu_30796_p2() {
    tmp_1100_fu_30796_p2 = (!h100_cast_cast_reg_46171.read().is_01() || !tmp_1099_fu_30791_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h100_cast_cast_reg_46171.read()) + sc_biguint<10>(tmp_1099_fu_30791_p2.read()));
}

void ShuffleNetV2::thread_tmp_1101_fu_30804_p3() {
    tmp_1101_fu_30804_p3 = esl_concat<10,2>(sum33_reg_46198.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1102_fu_30815_p2() {
    tmp_1102_fu_30815_p2 = (!p_shl529_cast_fu_30811_p1.read().is_01() || !sum33_cast_cast_fu_30801_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl529_cast_fu_30811_p1.read()) - sc_biguint<13>(sum33_cast_cast_fu_30801_p1.read()));
}

void ShuffleNetV2::thread_tmp_1103_fu_30825_p2() {
    tmp_1103_fu_30825_p2 = (!w101_cast_cast1_reg_46148.read().is_01() || !tmp_1580_cast_fu_30821_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(w101_cast_cast1_reg_46148.read()) + sc_bigint<14>(tmp_1580_cast_fu_30821_p1.read()));
}

void ShuffleNetV2::thread_tmp_1104_cast_fu_21200_p1() {
    tmp_1104_cast_fu_21200_p1 = esl_sext<32,8>(tmp_849_reg_43170.read());
}

void ShuffleNetV2::thread_tmp_1104_fu_30844_p2() {
    tmp_1104_fu_30844_p2 = (!p_shl255_fu_30840_p1.read().is_01() || !tmp_1581_cast_fu_30830_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl255_fu_30840_p1.read()) - sc_bigint<32>(tmp_1581_cast_fu_30830_p1.read()));
}

void ShuffleNetV2::thread_tmp_1105_fu_30850_p2() {
    tmp_1105_fu_30850_p2 = (!h100_cast_reg_46166.read().is_01() || !tmp_1104_fu_30844_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h100_cast_reg_46166.read()) + sc_biguint<32>(tmp_1104_fu_30844_p2.read()));
}

void ShuffleNetV2::thread_tmp_1106_fu_31422_p3() {
    tmp_1106_fu_31422_p3 = esl_concat<6,3>(co135_reg_12319.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1107_fu_31434_p3() {
    tmp_1107_fu_31434_p3 = esl_concat<6,1>(co135_reg_12319.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1108_fu_31446_p2() {
    tmp_1108_fu_31446_p2 = (!p_shl532_cast_fu_31442_p1.read().is_01() || !p_shl531_cast_fu_31430_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl532_cast_fu_31442_p1.read()) + sc_biguint<10>(p_shl531_cast_fu_31430_p1.read()));
}

void ShuffleNetV2::thread_tmp_1109_fu_31176_p3() {
    tmp_1109_fu_31176_p3 = esl_concat<10,5>(sum67_reg_46318.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1110_fu_31183_p1() {
    tmp_1110_fu_31183_p1 = esl_sext<16,15>(tmp_1109_fu_31176_p3.read());
}

void ShuffleNetV2::thread_tmp_1111_fu_31191_p3() {
    tmp_1111_fu_31191_p3 = esl_concat<10,3>(sum67_reg_46318.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1112_fu_31198_p1() {
    tmp_1112_fu_31198_p1 = esl_sext<14,13>(tmp_1111_fu_31191_p3.read());
}

void ShuffleNetV2::thread_tmp_1113_fu_31206_p2() {
    tmp_1113_fu_31206_p2 = (!p_shl533_cast_fu_31187_p1.read().is_01() || !p_shl534_cast_fu_31202_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl533_cast_fu_31187_p1.read()) - sc_biguint<17>(p_shl534_cast_fu_31202_p1.read()));
}

void ShuffleNetV2::thread_tmp_1114_fu_31216_p2() {
    tmp_1114_fu_31216_p2 = (!tmp_1598_cast_fu_31212_p1.read().is_01() || !ci66_cast1_cast_reg_46286.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp_1598_cast_fu_31212_p1.read()) + sc_biguint<18>(ci66_cast1_cast_reg_46286.read()));
}

void ShuffleNetV2::thread_tmp_1115_fu_31272_p2() {
    tmp_1115_fu_31272_p2 = (!p_shl535_cast_fu_31258_p3.read().is_01() || !p_shl536_cast_fu_31265_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl535_cast_fu_31258_p3.read()) - sc_biguint<8>(p_shl536_cast_fu_31265_p3.read()));
}

void ShuffleNetV2::thread_tmp_1116_cast_fu_21568_p1() {
    tmp_1116_cast_fu_21568_p1 = esl_zext<32,10>(tmp_854_reg_43294.read());
}

void ShuffleNetV2::thread_tmp_1116_fu_31278_p2() {
    tmp_1116_fu_31278_p2 = (!tmp_1115_fu_31272_p2.read().is_01() || !tmp_410_cast_cast_reg_46299.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1115_fu_31272_p2.read()) + sc_bigint<8>(tmp_410_cast_cast_reg_46299.read()));
}

void ShuffleNetV2::thread_tmp_1117_fu_31541_p3() {
    tmp_1117_fu_31541_p3 = esl_concat<6,3>(co137_reg_12352.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1118_cast_fu_21523_p1() {
    tmp_1118_cast_fu_21523_p1 = esl_sext<13,12>(tmp_856_fu_21517_p2.read());
}

void ShuffleNetV2::thread_tmp_1118_fu_31553_p3() {
    tmp_1118_fu_31553_p3 = esl_concat<6,1>(co137_reg_12352.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1119_cast_fu_21532_p1() {
    tmp_1119_cast_fu_21532_p1 = esl_sext<32,13>(tmp_857_reg_43299.read());
}

void ShuffleNetV2::thread_tmp_1119_fu_31565_p2() {
    tmp_1119_fu_31565_p2 = (!p_shl538_cast_fu_31561_p1.read().is_01() || !p_shl537_cast_fu_31549_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl538_cast_fu_31561_p1.read()) + sc_biguint<10>(p_shl537_cast_fu_31549_p1.read()));
}

void ShuffleNetV2::thread_tmp_1120_fu_31593_p3() {
    tmp_1120_fu_31593_p3 = esl_concat<7,3>(tmp_359_fu_31587_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1121_fu_31605_p3() {
    tmp_1121_fu_31605_p3 = esl_concat<7,1>(tmp_359_fu_31587_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1122_fu_31617_p2() {
    tmp_1122_fu_31617_p2 = (!p_shl540_cast_fu_31613_p1.read().is_01() || !p_shl539_cast_fu_31601_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl540_cast_fu_31613_p1.read()) + sc_biguint<11>(p_shl539_cast_fu_31601_p1.read()));
}

void ShuffleNetV2::thread_tmp_1123_fu_31480_p2() {
    tmp_1123_fu_31480_p2 = (!h_103_cast_cast_fu_31476_p1.read().is_01() || !tmp_1108_reg_46390.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_103_cast_cast_fu_31476_p1.read()) + sc_biguint<10>(tmp_1108_reg_46390.read()));
}

void ShuffleNetV2::thread_tmp_1124_fu_31509_p2() {
    tmp_1124_fu_31509_p2 = (!p_shl541_cast_fu_31493_p1.read().is_01() || !p_shl542_cast_fu_31505_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl541_cast_fu_31493_p1.read()) + sc_biguint<15>(p_shl542_cast_fu_31505_p1.read()));
}

void ShuffleNetV2::thread_tmp_1125_fu_31643_p2() {
    tmp_1125_fu_31643_p2 = (!h_105_cast_cast_fu_31639_p1.read().is_01() || !tmp_1122_reg_46447.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_105_cast_cast_fu_31639_p1.read()) + sc_biguint<11>(tmp_1122_reg_46447.read()));
}

void ShuffleNetV2::thread_tmp_1126_fu_31672_p2() {
    tmp_1126_fu_31672_p2 = (!p_shl543_cast_fu_31656_p1.read().is_01() || !p_shl544_cast_fu_31668_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl543_cast_fu_31656_p1.read()) + sc_biguint<15>(p_shl544_cast_fu_31668_p1.read()));
}

void ShuffleNetV2::thread_tmp_1127_fu_31678_p2() {
    tmp_1127_fu_31678_p2 = (!h_105_cast_cast1_fu_31635_p1.read().is_01() || !tmp_1119_reg_46434.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_105_cast_cast1_fu_31635_p1.read()) + sc_biguint<10>(tmp_1119_reg_46434.read()));
}

void ShuffleNetV2::thread_tmp_1128_fu_31707_p2() {
    tmp_1128_fu_31707_p2 = (!p_shl545_cast_fu_31691_p1.read().is_01() || !p_shl546_cast_fu_31703_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl545_cast_fu_31691_p1.read()) + sc_biguint<14>(p_shl546_cast_fu_31703_p1.read()));
}

void ShuffleNetV2::thread_tmp_1129_fu_31531_p2() {
    tmp_1129_fu_31531_p2 = (!tmp_1124_reg_46411.read().is_01() || !w_104_cast_cast_fu_31527_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1124_reg_46411.read()) + sc_biguint<15>(w_104_cast_cast_fu_31527_p1.read()));
}

void ShuffleNetV2::thread_tmp_1130_fu_31733_p2() {
    tmp_1130_fu_31733_p2 = (!tmp_1126_reg_46460.read().is_01() || !w_106_cast_cast_fu_31729_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1126_reg_46460.read()) + sc_biguint<15>(w_106_cast_cast_fu_31729_p1.read()));
}

void ShuffleNetV2::thread_tmp_1131_fu_31743_p2() {
    tmp_1131_fu_31743_p2 = (!tmp_1128_reg_46465.read().is_01() || !w_106_cast_cast1_fu_31725_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1128_reg_46465.read()) + sc_biguint<14>(w_106_cast_cast1_fu_31725_p1.read()));
}

void ShuffleNetV2::thread_tmp_1132_fu_31954_p3() {
    tmp_1132_fu_31954_p3 = esl_concat<9,5>(sum69_reg_46543.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1133_fu_31961_p1() {
    tmp_1133_fu_31961_p1 = esl_sext<16,14>(tmp_1132_fu_31954_p3.read());
}

void ShuffleNetV2::thread_tmp_1134_cast_fu_21906_p1() {
    tmp_1134_cast_fu_21906_p1 = esl_sext<17,16>(tmp_865_fu_21900_p2.read());
}

void ShuffleNetV2::thread_tmp_1134_fu_31969_p3() {
    tmp_1134_fu_31969_p3 = esl_concat<9,3>(sum69_reg_46543.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1135_cast_fu_21915_p1() {
    tmp_1135_cast_fu_21915_p1 = esl_sext<32,17>(tmp_866_fu_21910_p2.read());
}

void ShuffleNetV2::thread_tmp_1135_fu_31976_p1() {
    tmp_1135_fu_31976_p1 = esl_sext<14,12>(tmp_1134_fu_31969_p3.read());
}

void ShuffleNetV2::thread_tmp_1136_fu_31984_p2() {
    tmp_1136_fu_31984_p2 = (!p_shl547_cast_fu_31965_p1.read().is_01() || !p_shl548_cast_fu_31980_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl547_cast_fu_31965_p1.read()) - sc_biguint<17>(p_shl548_cast_fu_31980_p1.read()));
}

void ShuffleNetV2::thread_tmp_1137_fu_31994_p2() {
    tmp_1137_fu_31994_p2 = (!tmp_1639_cast_fu_31990_p1.read().is_01() || !ci68_cast1_cast_reg_46511.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp_1639_cast_fu_31990_p1.read()) + sc_biguint<18>(ci68_cast1_cast_reg_46511.read()));
}

void ShuffleNetV2::thread_tmp_1138_fu_32050_p2() {
    tmp_1138_fu_32050_p2 = (!p_shl549_cast_fu_32036_p3.read().is_01() || !p_shl550_cast_fu_32043_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl549_cast_fu_32036_p3.read()) - sc_biguint<8>(p_shl550_cast_fu_32043_p3.read()));
}

void ShuffleNetV2::thread_tmp_1139_fu_32056_p2() {
    tmp_1139_fu_32056_p2 = (!tmp_1138_fu_32050_p2.read().is_01() || !tmp_422_cast_cast_reg_46524.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1138_fu_32050_p2.read()) + sc_bigint<8>(tmp_422_cast_cast_reg_46524.read()));
}

void ShuffleNetV2::thread_tmp_1140_fu_32319_p3() {
    tmp_1140_fu_32319_p3 = esl_concat<7,2>(tmp_372_fu_32310_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1141_cast_fu_21981_p1() {
    tmp_1141_cast_fu_21981_p1 = esl_sext<32,8>(tmp_868_reg_43430.read());
}

void ShuffleNetV2::thread_tmp_1141_fu_32331_p2() {
    tmp_1141_fu_32331_p2 = (!p_shl551_cast_fu_32327_p1.read().is_01() || !tmp_434_cast_cast_fu_32315_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl551_cast_fu_32327_p1.read()) - sc_bigint<10>(tmp_434_cast_cast_fu_32315_p1.read()));
}

void ShuffleNetV2::thread_tmp_1142_fu_32337_p2() {
    tmp_1142_fu_32337_p2 = (!w107_cast_cast_reg_46638.read().is_01() || !tmp_1141_fu_32331_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w107_cast_cast_reg_46638.read()) + sc_biguint<10>(tmp_1141_fu_32331_p2.read()));
}

void ShuffleNetV2::thread_tmp_1143_fu_32358_p2() {
    tmp_1143_fu_32358_p2 = (!tmp_2444_fu_32353_p2.read().is_01() || !tmp_1142_reg_46677.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2444_fu_32353_p2.read()) - sc_biguint<10>(tmp_1142_reg_46677.read()));
}

void ShuffleNetV2::thread_tmp_1144_fu_32363_p2() {
    tmp_1144_fu_32363_p2 = (!h106_cast_cast_reg_46656.read().is_01() || !tmp_1143_fu_32358_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h106_cast_cast_reg_46656.read()) + sc_biguint<10>(tmp_1143_fu_32358_p2.read()));
}

void ShuffleNetV2::thread_tmp_1145_fu_32371_p3() {
    tmp_1145_fu_32371_p3 = esl_concat<10,2>(sum35_reg_46683.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1146_fu_32382_p2() {
    tmp_1146_fu_32382_p2 = (!p_shl553_cast_fu_32378_p1.read().is_01() || !sum35_cast_cast_fu_32368_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl553_cast_fu_32378_p1.read()) - sc_biguint<13>(sum35_cast_cast_fu_32368_p1.read()));
}

void ShuffleNetV2::thread_tmp_1147_fu_32388_p2() {
    tmp_1147_fu_32388_p2 = (!w107_cast_cast1_reg_46633.read().is_01() || !tmp_1146_fu_32382_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w107_cast_cast1_reg_46633.read()) + sc_biguint<13>(tmp_1146_fu_32382_p2.read()));
}

void ShuffleNetV2::thread_tmp_1148_fu_32407_p2() {
    tmp_1148_fu_32407_p2 = (!p_shl258_fu_32403_p1.read().is_01() || !tmp_1661_cast_fu_32393_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl258_fu_32403_p1.read()) - sc_bigint<32>(tmp_1661_cast_fu_32393_p1.read()));
}

void ShuffleNetV2::thread_tmp_1149_fu_32413_p2() {
    tmp_1149_fu_32413_p2 = (!h106_cast_reg_46651.read().is_01() || !tmp_1148_fu_32407_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h106_cast_reg_46651.read()) + sc_biguint<32>(tmp_1148_fu_32407_p2.read()));
}

void ShuffleNetV2::thread_tmp_1150_fu_32989_p3() {
    tmp_1150_fu_32989_p3 = esl_concat<6,3>(co145_reg_12561.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1151_fu_33001_p3() {
    tmp_1151_fu_33001_p3 = esl_concat<6,1>(co145_reg_12561.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1152_fu_33013_p2() {
    tmp_1152_fu_33013_p2 = (!p_shl556_cast_fu_33009_p1.read().is_01() || !p_shl555_cast_fu_32997_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl556_cast_fu_33009_p1.read()) + sc_biguint<10>(p_shl555_cast_fu_32997_p1.read()));
}

void ShuffleNetV2::thread_tmp_1153_fu_32751_p3() {
    tmp_1153_fu_32751_p3 = esl_concat<12,5>(sum72_reg_46803.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1154_fu_32762_p3() {
    tmp_1154_fu_32762_p3 = esl_concat<12,3>(sum72_reg_46803.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1155_fu_32773_p2() {
    tmp_1155_fu_32773_p2 = (!p_shl557_cast_fu_32758_p1.read().is_01() || !p_shl558_cast_fu_32769_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl557_cast_fu_32758_p1.read()) - sc_biguint<18>(p_shl558_cast_fu_32769_p1.read()));
}

void ShuffleNetV2::thread_tmp_1156_fu_32783_p2() {
    tmp_1156_fu_32783_p2 = (!ci70_cast1_cast_reg_46771.read().is_01() || !tmp_1676_cast_fu_32779_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci70_cast1_cast_reg_46771.read()) + sc_bigint<19>(tmp_1676_cast_fu_32779_p1.read()));
}

void ShuffleNetV2::thread_tmp_1157_fu_32839_p2() {
    tmp_1157_fu_32839_p2 = (!p_shl559_cast_fu_32825_p3.read().is_01() || !p_shl560_cast_fu_32832_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl559_cast_fu_32825_p3.read()) - sc_biguint<8>(p_shl560_cast_fu_32832_p3.read()));
}

void ShuffleNetV2::thread_tmp_1158_fu_32845_p2() {
    tmp_1158_fu_32845_p2 = (!tmp_439_cast_cast_reg_46784.read().is_01() || !tmp_1157_fu_32839_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_439_cast_cast_reg_46784.read()) + sc_biguint<8>(tmp_1157_fu_32839_p2.read()));
}

void ShuffleNetV2::thread_tmp_1159_fu_33047_p2() {
    tmp_1159_fu_33047_p2 = (!h_109_cast_cast_fu_33043_p1.read().is_01() || !tmp_1152_reg_46875.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_109_cast_cast_fu_33043_p1.read()) + sc_biguint<10>(tmp_1152_reg_46875.read()));
}

void ShuffleNetV2::thread_tmp_1160_fu_33076_p2() {
    tmp_1160_fu_33076_p2 = (!p_shl561_cast_fu_33060_p1.read().is_01() || !p_shl562_cast_fu_33072_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl561_cast_fu_33060_p1.read()) + sc_biguint<15>(p_shl562_cast_fu_33072_p1.read()));
}

void ShuffleNetV2::thread_tmp_1161_fu_33098_p2() {
    tmp_1161_fu_33098_p2 = (!tmp_1160_reg_46896.read().is_01() || !w_110_cast_cast_fu_33094_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1160_reg_46896.read()) + sc_biguint<15>(w_110_cast_cast_fu_33094_p1.read()));
}

void ShuffleNetV2::thread_tmp_1162_cast_fu_22226_p1() {
    tmp_1162_cast_fu_22226_p1 = esl_zext<32,15>(tmp_881_fu_22221_p2.read());
}

void ShuffleNetV2::thread_tmp_1162_fu_33298_p3() {
    tmp_1162_fu_33298_p3 = esl_concat<12,5>(sum74_reg_46974.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1163_cast_fu_22428_p1() {
    tmp_1163_cast_fu_22428_p1 = esl_zext<32,15>(tmp_882_fu_22423_p2.read());
}

void ShuffleNetV2::thread_tmp_1163_fu_33309_p3() {
    tmp_1163_fu_33309_p3 = esl_concat<12,3>(sum74_reg_46974.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1164_cast_fu_22438_p1() {
    tmp_1164_cast_fu_22438_p1 = esl_zext<32,14>(tmp_883_reg_43573.read());
}

void ShuffleNetV2::thread_tmp_1164_fu_33320_p2() {
    tmp_1164_fu_33320_p2 = (!p_shl563_cast_fu_33305_p1.read().is_01() || !p_shl564_cast_fu_33316_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl563_cast_fu_33305_p1.read()) - sc_biguint<18>(p_shl564_cast_fu_33316_p1.read()));
}

void ShuffleNetV2::thread_tmp_1165_fu_33330_p2() {
    tmp_1165_fu_33330_p2 = (!ci72_cast1_cast_reg_46942.read().is_01() || !tmp_1698_cast_fu_33326_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci72_cast1_cast_reg_46942.read()) + sc_bigint<19>(tmp_1698_cast_fu_33326_p1.read()));
}

void ShuffleNetV2::thread_tmp_1166_fu_33386_p2() {
    tmp_1166_fu_33386_p2 = (!p_shl565_cast_fu_33372_p3.read().is_01() || !p_shl566_cast_fu_33379_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl565_cast_fu_33372_p3.read()) - sc_biguint<10>(p_shl566_cast_fu_33379_p3.read()));
}

void ShuffleNetV2::thread_tmp_1167_fu_33392_p2() {
    tmp_1167_fu_33392_p2 = (!tmp_450_cast_cast_reg_46955.read().is_01() || !tmp_1166_fu_33386_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_450_cast_cast_reg_46955.read()) + sc_biguint<10>(tmp_1166_fu_33386_p2.read()));
}

void ShuffleNetV2::thread_tmp_1168_fu_33655_p3() {
    tmp_1168_fu_33655_p3 = esl_concat<8,2>(tmp_390_fu_33646_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1169_fu_33667_p2() {
    tmp_1169_fu_33667_p2 = (!p_shl567_cast_fu_33663_p1.read().is_01() || !tmp_462_cast_cast_fu_33651_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl567_cast_fu_33663_p1.read()) - sc_bigint<11>(tmp_462_cast_cast_fu_33651_p1.read()));
}

void ShuffleNetV2::thread_tmp_1170_fu_33673_p2() {
    tmp_1170_fu_33673_p2 = (!w111_cast_cast_reg_47069.read().is_01() || !tmp_1169_fu_33667_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w111_cast_cast_reg_47069.read()) + sc_biguint<11>(tmp_1169_fu_33667_p2.read()));
}

void ShuffleNetV2::thread_tmp_1171_fu_33694_p2() {
    tmp_1171_fu_33694_p2 = (!tmp_2467_fu_33689_p2.read().is_01() || !tmp_1170_reg_47108.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_2467_fu_33689_p2.read()) - sc_biguint<11>(tmp_1170_reg_47108.read()));
}

void ShuffleNetV2::thread_tmp_1172_fu_33699_p2() {
    tmp_1172_fu_33699_p2 = (!h110_cast_cast_reg_47087.read().is_01() || !tmp_1171_fu_33694_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h110_cast_cast_reg_47087.read()) + sc_biguint<11>(tmp_1171_fu_33694_p2.read()));
}

void ShuffleNetV2::thread_tmp_1173_cast_fu_22672_p1() {
    tmp_1173_cast_fu_22672_p1 = esl_sext<17,16>(tmp_886_fu_22666_p2.read());
}

void ShuffleNetV2::thread_tmp_1173_fu_33707_p3() {
    tmp_1173_fu_33707_p3 = esl_concat<10,2>(sum37_reg_47114.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1174_cast_fu_22681_p1() {
    tmp_1174_cast_fu_22681_p1 = esl_sext<32,17>(tmp_887_fu_22676_p2.read());
}

void ShuffleNetV2::thread_tmp_1174_fu_33718_p2() {
    tmp_1174_fu_33718_p2 = (!p_shl569_cast_fu_33714_p1.read().is_01() || !sum37_cast_cast_fu_33704_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl569_cast_fu_33714_p1.read()) - sc_biguint<13>(sum37_cast_cast_fu_33704_p1.read()));
}

void ShuffleNetV2::thread_tmp_1175_fu_33724_p2() {
    tmp_1175_fu_33724_p2 = (!w111_cast_cast1_reg_47064.read().is_01() || !tmp_1174_fu_33718_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w111_cast_cast1_reg_47064.read()) + sc_biguint<13>(tmp_1174_fu_33718_p2.read()));
}

void ShuffleNetV2::thread_tmp_1176_fu_33743_p2() {
    tmp_1176_fu_33743_p2 = (!p_shl262_fu_33739_p1.read().is_01() || !tmp_1720_cast_fu_33729_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl262_fu_33739_p1.read()) - sc_bigint<32>(tmp_1720_cast_fu_33729_p1.read()));
}

void ShuffleNetV2::thread_tmp_1177_fu_33749_p2() {
    tmp_1177_fu_33749_p2 = (!h110_cast_reg_47082.read().is_01() || !tmp_1176_fu_33743_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h110_cast_reg_47082.read()) + sc_biguint<32>(tmp_1176_fu_33743_p2.read()));
}

void ShuffleNetV2::thread_tmp_1178_fu_34067_p3() {
    tmp_1178_fu_34067_p3 = esl_concat<12,5>(sum77_reg_47234.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1179_fu_34078_p3() {
    tmp_1179_fu_34078_p3 = esl_concat<12,3>(sum77_reg_47234.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1180_cast_fu_22747_p1() {
    tmp_1180_cast_fu_22747_p1 = esl_sext<32,8>(tmp_889_reg_43655.read());
}

void ShuffleNetV2::thread_tmp_1180_fu_34089_p2() {
    tmp_1180_fu_34089_p2 = (!p_shl571_cast_fu_34074_p1.read().is_01() || !p_shl572_cast_fu_34085_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl571_cast_fu_34074_p1.read()) - sc_biguint<18>(p_shl572_cast_fu_34085_p1.read()));
}

void ShuffleNetV2::thread_tmp_1181_fu_34099_p2() {
    tmp_1181_fu_34099_p2 = (!ci74_cast1_cast_reg_47202.read().is_01() || !tmp_1731_cast_fu_34095_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci74_cast1_cast_reg_47202.read()) + sc_bigint<19>(tmp_1731_cast_fu_34095_p1.read()));
}

void ShuffleNetV2::thread_tmp_1182_fu_34155_p2() {
    tmp_1182_fu_34155_p2 = (!p_shl573_cast_fu_34141_p3.read().is_01() || !p_shl574_cast_fu_34148_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl573_cast_fu_34141_p3.read()) - sc_biguint<10>(p_shl574_cast_fu_34148_p3.read()));
}

void ShuffleNetV2::thread_tmp_1183_fu_34161_p2() {
    tmp_1183_fu_34161_p2 = (!tmp_467_cast_cast_reg_47215.read().is_01() || !tmp_1182_fu_34155_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_467_cast_cast_reg_47215.read()) + sc_biguint<10>(tmp_1182_fu_34155_p2.read()));
}

void ShuffleNetV2::thread_tmp_1184_fu_34428_p3() {
    tmp_1184_fu_34428_p3 = esl_concat<8,2>(tmp_401_fu_34419_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1185_fu_34440_p2() {
    tmp_1185_fu_34440_p2 = (!p_shl575_cast_fu_34436_p1.read().is_01() || !tmp_479_cast_cast_fu_34424_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl575_cast_fu_34436_p1.read()) - sc_bigint<11>(tmp_479_cast_cast_fu_34424_p1.read()));
}

void ShuffleNetV2::thread_tmp_1186_fu_34446_p2() {
    tmp_1186_fu_34446_p2 = (!w113_cast_cast_reg_47329.read().is_01() || !tmp_1185_fu_34440_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w113_cast_cast_reg_47329.read()) + sc_biguint<11>(tmp_1185_fu_34440_p2.read()));
}

void ShuffleNetV2::thread_tmp_1187_fu_34467_p2() {
    tmp_1187_fu_34467_p2 = (!tmp_2480_fu_34462_p2.read().is_01() || !tmp_1186_reg_47368.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_2480_fu_34462_p2.read()) - sc_biguint<11>(tmp_1186_reg_47368.read()));
}

void ShuffleNetV2::thread_tmp_1188_fu_34472_p2() {
    tmp_1188_fu_34472_p2 = (!h112_cast_cast_reg_47347.read().is_01() || !tmp_1187_fu_34467_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h112_cast_cast_reg_47347.read()) + sc_biguint<11>(tmp_1187_fu_34467_p2.read()));
}

void ShuffleNetV2::thread_tmp_1189_fu_34480_p3() {
    tmp_1189_fu_34480_p3 = esl_concat<10,2>(sum39_reg_47374.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1190_fu_34491_p2() {
    tmp_1190_fu_34491_p2 = (!p_shl577_cast_fu_34487_p1.read().is_01() || !sum39_cast_cast_fu_34477_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl577_cast_fu_34487_p1.read()) - sc_biguint<13>(sum39_cast_cast_fu_34477_p1.read()));
}

void ShuffleNetV2::thread_tmp_1191_fu_34497_p2() {
    tmp_1191_fu_34497_p2 = (!w113_cast_cast1_reg_47324.read().is_01() || !tmp_1190_fu_34491_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w113_cast_cast1_reg_47324.read()) + sc_biguint<13>(tmp_1190_fu_34491_p2.read()));
}

void ShuffleNetV2::thread_tmp_1192_cast_fu_23111_p1() {
    tmp_1192_cast_fu_23111_p1 = esl_zext<32,10>(tmp_894_reg_43779.read());
}

void ShuffleNetV2::thread_tmp_1192_fu_34516_p2() {
    tmp_1192_fu_34516_p2 = (!p_shl267_fu_34512_p1.read().is_01() || !tmp_1753_cast_fu_34502_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl267_fu_34512_p1.read()) - sc_bigint<32>(tmp_1753_cast_fu_34502_p1.read()));
}

void ShuffleNetV2::thread_tmp_1193_fu_34522_p2() {
    tmp_1193_fu_34522_p2 = (!h112_cast_reg_47342.read().is_01() || !tmp_1192_fu_34516_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h112_cast_reg_47342.read()) + sc_biguint<32>(tmp_1192_fu_34516_p2.read()));
}

void ShuffleNetV2::thread_tmp_1194_cast_fu_23066_p1() {
    tmp_1194_cast_fu_23066_p1 = esl_sext<13,12>(tmp_896_fu_23060_p2.read());
}

void ShuffleNetV2::thread_tmp_1194_fu_35070_p3() {
    tmp_1194_fu_35070_p3 = esl_concat<7,3>(co157_reg_12891.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1195_cast_fu_23075_p1() {
    tmp_1195_cast_fu_23075_p1 = esl_sext<32,13>(tmp_897_reg_43784.read());
}

void ShuffleNetV2::thread_tmp_1195_fu_35082_p3() {
    tmp_1195_fu_35082_p3 = esl_concat<7,1>(co157_reg_12891.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1196_fu_35094_p2() {
    tmp_1196_fu_35094_p2 = (!p_shl579_cast_fu_35078_p1.read().is_01() || !p_shl580_cast_fu_35090_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl579_cast_fu_35078_p1.read()) - sc_biguint<11>(p_shl580_cast_fu_35090_p1.read()));
}

void ShuffleNetV2::thread_tmp_1197_fu_35126_p3() {
    tmp_1197_fu_35126_p3 = esl_concat<8,3>(tmp_402_fu_35120_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1198_fu_35138_p3() {
    tmp_1198_fu_35138_p3 = esl_concat<8,1>(tmp_402_fu_35120_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1199_fu_35150_p2() {
    tmp_1199_fu_35150_p2 = (!p_shl581_cast_fu_35134_p1.read().is_01() || !p_shl582_cast_fu_35146_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl581_cast_fu_35134_p1.read()) - sc_biguint<12>(p_shl582_cast_fu_35146_p1.read()));
}

void ShuffleNetV2::thread_tmp_1200_fu_34836_p3() {
    tmp_1200_fu_34836_p3 = esl_concat<12,5>(sum80_reg_47494.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1201_fu_34847_p3() {
    tmp_1201_fu_34847_p3 = esl_concat<12,3>(sum80_reg_47494.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1202_fu_34858_p2() {
    tmp_1202_fu_34858_p2 = (!p_shl583_cast_fu_34843_p1.read().is_01() || !p_shl584_cast_fu_34854_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl583_cast_fu_34843_p1.read()) - sc_biguint<18>(p_shl584_cast_fu_34854_p1.read()));
}

void ShuffleNetV2::thread_tmp_1203_fu_34868_p2() {
    tmp_1203_fu_34868_p2 = (!ci76_cast1_cast_reg_47462.read().is_01() || !tmp_1770_cast_fu_34864_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci76_cast1_cast_reg_47462.read()) + sc_bigint<19>(tmp_1770_cast_fu_34864_p1.read()));
}

void ShuffleNetV2::thread_tmp_1204_fu_34924_p2() {
    tmp_1204_fu_34924_p2 = (!p_shl585_cast_fu_34910_p3.read().is_01() || !p_shl586_cast_fu_34917_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl585_cast_fu_34910_p3.read()) - sc_biguint<10>(p_shl586_cast_fu_34917_p3.read()));
}

void ShuffleNetV2::thread_tmp_1205_fu_34930_p2() {
    tmp_1205_fu_34930_p2 = (!tmp_484_cast_cast_reg_47475.read().is_01() || !tmp_1204_fu_34924_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_484_cast_cast_reg_47475.read()) + sc_biguint<10>(tmp_1204_fu_34924_p2.read()));
}

void ShuffleNetV2::thread_tmp_1206_fu_35180_p2() {
    tmp_1206_fu_35180_p2 = (!h_115_cast_cast_fu_35176_p1.read().is_01() || !tmp_1762_cast_reg_47579.read().is_01())? sc_lv<13>(): (sc_biguint<13>(h_115_cast_cast_fu_35176_p1.read()) + sc_bigint<13>(tmp_1762_cast_reg_47579.read()));
}

void ShuffleNetV2::thread_tmp_1207_fu_35205_p2() {
    tmp_1207_fu_35205_p2 = (!p_shl587_cast_fu_35189_p3.read().is_01() || !p_shl588_cast_fu_35197_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl587_cast_fu_35189_p3.read()) - sc_biguint<14>(p_shl588_cast_fu_35197_p3.read()));
}

void ShuffleNetV2::thread_tmp_1208_fu_35211_p2() {
    tmp_1208_fu_35211_p2 = (!h_115_cast_cast1_fu_35172_p1.read().is_01() || !tmp_1759_cast_reg_47566.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h_115_cast_cast1_fu_35172_p1.read()) + sc_bigint<12>(tmp_1759_cast_reg_47566.read()));
}

void ShuffleNetV2::thread_tmp_1209_fu_35236_p2() {
    tmp_1209_fu_35236_p2 = (!p_shl589_cast_fu_35220_p3.read().is_01() || !p_shl590_cast_fu_35228_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl589_cast_fu_35220_p3.read()) - sc_biguint<13>(p_shl590_cast_fu_35228_p3.read()));
}

void ShuffleNetV2::thread_tmp_1210_cast_fu_23453_p1() {
    tmp_1210_cast_fu_23453_p1 = esl_sext<17,16>(tmp_905_fu_23447_p2.read());
}

void ShuffleNetV2::thread_tmp_1210_fu_35262_p2() {
    tmp_1210_fu_35262_p2 = (!tmp_1207_reg_47592.read().is_01() || !w_116_cast_cast_fu_35258_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1207_reg_47592.read()) + sc_biguint<14>(w_116_cast_cast_fu_35258_p1.read()));
}

void ShuffleNetV2::thread_tmp_1211_cast_fu_23462_p1() {
    tmp_1211_cast_fu_23462_p1 = esl_sext<32,17>(tmp_906_fu_23457_p2.read());
}

void ShuffleNetV2::thread_tmp_1211_fu_35272_p2() {
    tmp_1211_fu_35272_p2 = (!tmp_1209_reg_47597.read().is_01() || !w_116_cast_cast1_fu_35254_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1209_reg_47597.read()) + sc_biguint<13>(w_116_cast_cast1_fu_35254_p1.read()));
}

void ShuffleNetV2::thread_tmp_1212_fu_35471_p3() {
    tmp_1212_fu_35471_p3 = esl_concat<12,5>(sum82_reg_47675.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1213_fu_35482_p3() {
    tmp_1213_fu_35482_p3 = esl_concat<12,3>(sum82_reg_47675.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1214_fu_35493_p2() {
    tmp_1214_fu_35493_p2 = (!p_shl591_cast_fu_35478_p1.read().is_01() || !p_shl592_cast_fu_35489_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl591_cast_fu_35478_p1.read()) - sc_biguint<18>(p_shl592_cast_fu_35489_p1.read()));
}

void ShuffleNetV2::thread_tmp_1215_fu_35503_p2() {
    tmp_1215_fu_35503_p2 = (!ci78_cast1_cast_reg_47643.read().is_01() || !tmp_1797_cast_fu_35499_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci78_cast1_cast_reg_47643.read()) + sc_bigint<19>(tmp_1797_cast_fu_35499_p1.read()));
}

void ShuffleNetV2::thread_tmp_1216_fu_35559_p2() {
    tmp_1216_fu_35559_p2 = (!p_shl593_cast_fu_35545_p3.read().is_01() || !p_shl594_cast_fu_35552_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl593_cast_fu_35545_p3.read()) - sc_biguint<10>(p_shl594_cast_fu_35552_p3.read()));
}

void ShuffleNetV2::thread_tmp_1217_cast_fu_23528_p1() {
    tmp_1217_cast_fu_23528_p1 = esl_sext<32,8>(tmp_908_reg_43915.read());
}

void ShuffleNetV2::thread_tmp_1217_fu_35565_p2() {
    tmp_1217_fu_35565_p2 = (!tmp_496_cast_cast_reg_47656.read().is_01() || !tmp_1216_fu_35559_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_496_cast_cast_reg_47656.read()) + sc_biguint<10>(tmp_1216_fu_35559_p2.read()));
}

void ShuffleNetV2::thread_tmp_1218_fu_35824_p3() {
    tmp_1218_fu_35824_p3 = esl_concat<8,2>(tmp_420_fu_35815_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1219_fu_35836_p2() {
    tmp_1219_fu_35836_p2 = (!p_shl595_cast_fu_35832_p1.read().is_01() || !tmp_508_cast_cast_fu_35820_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl595_cast_fu_35832_p1.read()) - sc_bigint<11>(tmp_508_cast_cast_fu_35820_p1.read()));
}

void ShuffleNetV2::thread_tmp_1220_fu_35842_p2() {
    tmp_1220_fu_35842_p2 = (!w117_cast_cast_reg_47770.read().is_01() || !tmp_1219_fu_35836_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w117_cast_cast_reg_47770.read()) + sc_biguint<11>(tmp_1219_fu_35836_p2.read()));
}

void ShuffleNetV2::thread_tmp_1221_fu_35863_p2() {
    tmp_1221_fu_35863_p2 = (!tmp_2504_fu_35858_p2.read().is_01() || !tmp_1220_reg_47809.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_2504_fu_35858_p2.read()) - sc_biguint<11>(tmp_1220_reg_47809.read()));
}

void ShuffleNetV2::thread_tmp_1222_fu_35868_p2() {
    tmp_1222_fu_35868_p2 = (!h116_cast_cast_reg_47788.read().is_01() || !tmp_1221_fu_35863_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h116_cast_cast_reg_47788.read()) + sc_biguint<11>(tmp_1221_fu_35863_p2.read()));
}

void ShuffleNetV2::thread_tmp_1223_fu_35876_p3() {
    tmp_1223_fu_35876_p3 = esl_concat<10,2>(sum41_reg_47815.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1224_fu_35887_p2() {
    tmp_1224_fu_35887_p2 = (!p_shl597_cast_fu_35883_p1.read().is_01() || !sum41_cast_cast_fu_35873_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl597_cast_fu_35883_p1.read()) - sc_biguint<13>(sum41_cast_cast_fu_35873_p1.read()));
}

void ShuffleNetV2::thread_tmp_1225_fu_35893_p2() {
    tmp_1225_fu_35893_p2 = (!w117_cast_cast1_reg_47765.read().is_01() || !tmp_1224_fu_35887_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w117_cast_cast1_reg_47765.read()) + sc_biguint<13>(tmp_1224_fu_35887_p2.read()));
}

void ShuffleNetV2::thread_tmp_1226_fu_35912_p2() {
    tmp_1226_fu_35912_p2 = (!p_shl273_fu_35908_p1.read().is_01() || !tmp_1819_cast_fu_35898_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl273_fu_35908_p1.read()) - sc_bigint<32>(tmp_1819_cast_fu_35898_p1.read()));
}

void ShuffleNetV2::thread_tmp_1227_fu_35918_p2() {
    tmp_1227_fu_35918_p2 = (!h116_cast_reg_47783.read().is_01() || !tmp_1226_fu_35912_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h116_cast_reg_47783.read()) + sc_biguint<32>(tmp_1226_fu_35912_p2.read()));
}

void ShuffleNetV2::thread_tmp_1228_fu_36474_p3() {
    tmp_1228_fu_36474_p3 = esl_concat<7,3>(co165_reg_13100.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1229_fu_36486_p3() {
    tmp_1229_fu_36486_p3 = esl_concat<7,1>(co165_reg_13100.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1230_fu_36498_p2() {
    tmp_1230_fu_36498_p2 = (!p_shl599_cast_fu_36482_p1.read().is_01() || !p_shl600_cast_fu_36494_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl599_cast_fu_36482_p1.read()) - sc_biguint<11>(p_shl600_cast_fu_36494_p1.read()));
}

void ShuffleNetV2::thread_tmp_1231_fu_36232_p3() {
    tmp_1231_fu_36232_p3 = esl_concat<11,5>(sum85_reg_47935.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1232_fu_36239_p1() {
    tmp_1232_fu_36239_p1 = esl_sext<17,16>(tmp_1231_fu_36232_p3.read());
}

void ShuffleNetV2::thread_tmp_1233_fu_36247_p3() {
    tmp_1233_fu_36247_p3 = esl_concat<11,3>(sum85_reg_47935.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1234_fu_36254_p1() {
    tmp_1234_fu_36254_p1 = esl_sext<15,14>(tmp_1233_fu_36247_p3.read());
}

void ShuffleNetV2::thread_tmp_1235_fu_36262_p2() {
    tmp_1235_fu_36262_p2 = (!p_shl601_cast_fu_36243_p1.read().is_01() || !p_shl602_cast_fu_36258_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl601_cast_fu_36243_p1.read()) - sc_biguint<18>(p_shl602_cast_fu_36258_p1.read()));
}

void ShuffleNetV2::thread_tmp_1236_fu_36272_p2() {
    tmp_1236_fu_36272_p2 = (!tmp_1835_cast_fu_36268_p1.read().is_01() || !ci80_cast1_cast_reg_47903.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp_1835_cast_fu_36268_p1.read()) + sc_biguint<19>(ci80_cast1_cast_reg_47903.read()));
}

void ShuffleNetV2::thread_tmp_1237_fu_36328_p2() {
    tmp_1237_fu_36328_p2 = (!p_shl603_cast_fu_36314_p3.read().is_01() || !p_shl604_cast_fu_36321_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl603_cast_fu_36314_p3.read()) - sc_biguint<10>(p_shl604_cast_fu_36321_p3.read()));
}

void ShuffleNetV2::thread_tmp_1238_cast_fu_23777_p1() {
    tmp_1238_cast_fu_23777_p1 = esl_zext<32,15>(tmp_921_fu_23772_p2.read());
}

void ShuffleNetV2::thread_tmp_1238_fu_36334_p2() {
    tmp_1238_fu_36334_p2 = (!tmp_1237_fu_36328_p2.read().is_01() || !tmp_513_cast_cast_reg_47916.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1237_fu_36328_p2.read()) + sc_bigint<10>(tmp_513_cast_cast_reg_47916.read()));
}

void ShuffleNetV2::thread_tmp_1239_cast_fu_23979_p1() {
    tmp_1239_cast_fu_23979_p1 = esl_zext<32,15>(tmp_922_fu_23974_p2.read());
}

void ShuffleNetV2::thread_tmp_1239_fu_36597_p3() {
    tmp_1239_fu_36597_p3 = esl_concat<7,3>(co167_reg_13133.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1240_cast_fu_23989_p1() {
    tmp_1240_cast_fu_23989_p1 = esl_zext<32,14>(tmp_923_reg_44058.read());
}

void ShuffleNetV2::thread_tmp_1240_fu_36609_p3() {
    tmp_1240_fu_36609_p3 = esl_concat<7,1>(co167_reg_13133.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1241_fu_36621_p2() {
    tmp_1241_fu_36621_p2 = (!p_shl605_cast_fu_36605_p1.read().is_01() || !p_shl606_cast_fu_36617_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl605_cast_fu_36605_p1.read()) - sc_biguint<11>(p_shl606_cast_fu_36617_p1.read()));
}

void ShuffleNetV2::thread_tmp_1242_fu_36653_p3() {
    tmp_1242_fu_36653_p3 = esl_concat<8,3>(tmp_426_fu_36647_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1243_fu_36665_p3() {
    tmp_1243_fu_36665_p3 = esl_concat<8,1>(tmp_426_fu_36647_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1244_fu_36677_p2() {
    tmp_1244_fu_36677_p2 = (!p_shl607_cast_fu_36661_p1.read().is_01() || !p_shl608_cast_fu_36673_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl607_cast_fu_36661_p1.read()) - sc_biguint<12>(p_shl608_cast_fu_36673_p1.read()));
}

void ShuffleNetV2::thread_tmp_1245_fu_36536_p2() {
    tmp_1245_fu_36536_p2 = (!tmp_1825_cast_reg_48007.read().is_01() || !h_119_cast_cast_fu_36532_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1825_cast_reg_48007.read()) + sc_biguint<12>(h_119_cast_cast_fu_36532_p1.read()));
}

void ShuffleNetV2::thread_tmp_1246_fu_36565_p2() {
    tmp_1246_fu_36565_p2 = (!p_shl609_cast_fu_36545_p3.read().is_01() || !p_shl610_cast_fu_36561_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl609_cast_fu_36545_p3.read()) - sc_bigint<14>(p_shl610_cast_fu_36561_p1.read()));
}

void ShuffleNetV2::thread_tmp_1247_fu_36707_p2() {
    tmp_1247_fu_36707_p2 = (!h_121_cast_cast_fu_36703_p1.read().is_01() || !tmp_1848_cast_reg_48064.read().is_01())? sc_lv<13>(): (sc_biguint<13>(h_121_cast_cast_fu_36703_p1.read()) + sc_bigint<13>(tmp_1848_cast_reg_48064.read()));
}

void ShuffleNetV2::thread_tmp_1248_fu_36732_p2() {
    tmp_1248_fu_36732_p2 = (!p_shl611_cast_fu_36716_p3.read().is_01() || !p_shl612_cast_fu_36724_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl611_cast_fu_36716_p3.read()) - sc_biguint<14>(p_shl612_cast_fu_36724_p3.read()));
}

void ShuffleNetV2::thread_tmp_1249_fu_36738_p2() {
    tmp_1249_fu_36738_p2 = (!h_121_cast_cast1_fu_36699_p1.read().is_01() || !tmp_1845_cast_reg_48051.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h_121_cast_cast1_fu_36699_p1.read()) + sc_bigint<12>(tmp_1845_cast_reg_48051.read()));
}

void ShuffleNetV2::thread_tmp_1250_fu_36763_p2() {
    tmp_1250_fu_36763_p2 = (!p_shl613_cast_fu_36747_p3.read().is_01() || !p_shl614_cast_fu_36755_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl613_cast_fu_36747_p3.read()) - sc_biguint<13>(p_shl614_cast_fu_36755_p3.read()));
}

void ShuffleNetV2::thread_tmp_1251_cast_fu_24231_p1() {
    tmp_1251_cast_fu_24231_p1 = esl_sext<17,16>(tmp_928_fu_24225_p2.read());
}

void ShuffleNetV2::thread_tmp_1251_fu_36587_p2() {
    tmp_1251_fu_36587_p2 = (!tmp_1246_reg_48028.read().is_01() || !w_120_cast_cast_fu_36583_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1246_reg_48028.read()) + sc_biguint<14>(w_120_cast_cast_fu_36583_p1.read()));
}

void ShuffleNetV2::thread_tmp_1252_cast_fu_24240_p1() {
    tmp_1252_cast_fu_24240_p1 = esl_sext<32,17>(tmp_929_fu_24235_p2.read());
}

void ShuffleNetV2::thread_tmp_1252_fu_36789_p2() {
    tmp_1252_fu_36789_p2 = (!tmp_1248_reg_48077.read().is_01() || !w_122_cast_cast_fu_36785_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1248_reg_48077.read()) + sc_biguint<14>(w_122_cast_cast_fu_36785_p1.read()));
}

void ShuffleNetV2::thread_tmp_1253_fu_36799_p2() {
    tmp_1253_fu_36799_p2 = (!tmp_1250_reg_48082.read().is_01() || !w_122_cast_cast1_fu_36781_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1250_reg_48082.read()) + sc_biguint<13>(w_122_cast_cast1_fu_36781_p1.read()));
}

void ShuffleNetV2::thread_tmp_1254_fu_36998_p3() {
    tmp_1254_fu_36998_p3 = esl_concat<13,5>(sum87_reg_48160.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1255_fu_37009_p3() {
    tmp_1255_fu_37009_p3 = esl_concat<13,3>(sum87_reg_48160.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1256_fu_37020_p2() {
    tmp_1256_fu_37020_p2 = (!p_shl615_cast_fu_37005_p1.read().is_01() || !p_shl616_cast_fu_37016_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl615_cast_fu_37005_p1.read()) - sc_biguint<19>(p_shl616_cast_fu_37016_p1.read()));
}

void ShuffleNetV2::thread_tmp_1257_fu_37030_p2() {
    tmp_1257_fu_37030_p2 = (!ci82_cast1_cast_reg_48128.read().is_01() || !tmp_1873_cast_fu_37026_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci82_cast1_cast_reg_48128.read()) + sc_bigint<20>(tmp_1873_cast_fu_37026_p1.read()));
}

void ShuffleNetV2::thread_tmp_1258_cast_fu_24306_p1() {
    tmp_1258_cast_fu_24306_p1 = esl_sext<32,8>(tmp_931_reg_44140.read());
}

void ShuffleNetV2::thread_tmp_1258_fu_37086_p2() {
    tmp_1258_fu_37086_p2 = (!p_shl617_cast_fu_37072_p3.read().is_01() || !p_shl618_cast_fu_37079_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl617_cast_fu_37072_p3.read()) - sc_biguint<10>(p_shl618_cast_fu_37079_p3.read()));
}

void ShuffleNetV2::thread_tmp_1259_fu_37092_p2() {
    tmp_1259_fu_37092_p2 = (!tmp_525_cast_cast_reg_48141.read().is_01() || !tmp_1258_fu_37086_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_525_cast_cast_reg_48141.read()) + sc_biguint<10>(tmp_1258_fu_37086_p2.read()));
}

void ShuffleNetV2::thread_tmp_1260_fu_37351_p3() {
    tmp_1260_fu_37351_p3 = esl_concat<8,2>(tmp_439_fu_37342_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1261_fu_37363_p2() {
    tmp_1261_fu_37363_p2 = (!p_shl619_cast_fu_37359_p1.read().is_01() || !tmp_537_cast_cast_fu_37347_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl619_cast_fu_37359_p1.read()) - sc_bigint<11>(tmp_537_cast_cast_fu_37347_p1.read()));
}

void ShuffleNetV2::thread_tmp_1262_fu_37369_p2() {
    tmp_1262_fu_37369_p2 = (!tmp_1261_fu_37363_p2.read().is_01() || !w123_cast_cast_reg_48255.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1261_fu_37363_p2.read()) + sc_biguint<11>(w123_cast_cast_reg_48255.read()));
}

void ShuffleNetV2::thread_tmp_1263_fu_37390_p2() {
    tmp_1263_fu_37390_p2 = (!tmp_2530_fu_37385_p2.read().is_01() || !tmp_1262_reg_48294.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_2530_fu_37385_p2.read()) - sc_biguint<11>(tmp_1262_reg_48294.read()));
}

void ShuffleNetV2::thread_tmp_1264_fu_37395_p2() {
    tmp_1264_fu_37395_p2 = (!tmp_1263_fu_37390_p2.read().is_01() || !h122_cast_cast_reg_48273.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1263_fu_37390_p2.read()) + sc_biguint<11>(h122_cast_cast_reg_48273.read()));
}

void ShuffleNetV2::thread_tmp_1265_fu_37407_p3() {
    tmp_1265_fu_37407_p3 = esl_concat<9,2>(sum43_reg_48300.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1266_fu_37414_p1() {
    tmp_1266_fu_37414_p1 = esl_sext<12,11>(tmp_1265_fu_37407_p3.read());
}

void ShuffleNetV2::thread_tmp_1267_fu_37422_p2() {
    tmp_1267_fu_37422_p2 = (!p_shl621_cast_fu_37418_p1.read().is_01() || !sum43_cast_cast_fu_37403_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl621_cast_fu_37418_p1.read()) - sc_biguint<13>(sum43_cast_cast_fu_37403_p1.read()));
}

void ShuffleNetV2::thread_tmp_1268_fu_37432_p2() {
    tmp_1268_fu_37432_p2 = (!tmp_1895_cast_fu_37428_p1.read().is_01() || !w123_cast_cast1_reg_48250.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_1895_cast_fu_37428_p1.read()) + sc_biguint<14>(w123_cast_cast1_reg_48250.read()));
}

void ShuffleNetV2::thread_tmp_1269_fu_37451_p2() {
    tmp_1269_fu_37451_p2 = (!p_shl275_fu_37447_p1.read().is_01() || !tmp_1896_cast_fu_37437_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl275_fu_37447_p1.read()) - sc_bigint<32>(tmp_1896_cast_fu_37437_p1.read()));
}

void ShuffleNetV2::thread_tmp_1270_cast_fu_24670_p1() {
    tmp_1270_cast_fu_24670_p1 = esl_zext<32,10>(tmp_936_reg_44264.read());
}

void ShuffleNetV2::thread_tmp_1270_fu_37457_p2() {
    tmp_1270_fu_37457_p2 = (!tmp_1269_fu_37451_p2.read().is_01() || !h122_cast_reg_48268.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1269_fu_37451_p2.read()) + sc_biguint<32>(h122_cast_reg_48268.read()));
}

void ShuffleNetV2::thread_tmp_1271_fu_38005_p3() {
    tmp_1271_fu_38005_p3 = esl_concat<7,3>(co175_reg_13342.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1272_fu_38017_p3() {
    tmp_1272_fu_38017_p3 = esl_concat<7,1>(co175_reg_13342.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1273_cast_fu_24634_p1() {
    tmp_1273_cast_fu_24634_p1 = esl_sext<32,12>(tmp_939_reg_44269.read());
}

void ShuffleNetV2::thread_tmp_1273_fu_38029_p2() {
    tmp_1273_fu_38029_p2 = (!p_shl623_cast_fu_38013_p1.read().is_01() || !p_shl624_cast_fu_38025_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl623_cast_fu_38013_p1.read()) - sc_biguint<11>(p_shl624_cast_fu_38025_p1.read()));
}

void ShuffleNetV2::thread_tmp_1274_fu_37771_p3() {
    tmp_1274_fu_37771_p3 = esl_concat<13,5>(sum90_reg_48420.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1275_fu_37782_p3() {
    tmp_1275_fu_37782_p3 = esl_concat<13,3>(sum90_reg_48420.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1276_fu_37793_p2() {
    tmp_1276_fu_37793_p2 = (!p_shl625_cast_fu_37778_p1.read().is_01() || !p_shl626_cast_fu_37789_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl625_cast_fu_37778_p1.read()) - sc_biguint<19>(p_shl626_cast_fu_37789_p1.read()));
}

void ShuffleNetV2::thread_tmp_1277_fu_37803_p2() {
    tmp_1277_fu_37803_p2 = (!ci84_cast1_cast_reg_48388.read().is_01() || !tmp_1910_cast_fu_37799_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci84_cast1_cast_reg_48388.read()) + sc_bigint<20>(tmp_1910_cast_fu_37799_p1.read()));
}

void ShuffleNetV2::thread_tmp_1278_fu_37859_p2() {
    tmp_1278_fu_37859_p2 = (!p_shl627_cast_fu_37845_p3.read().is_01() || !p_shl628_cast_fu_37852_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl627_cast_fu_37845_p3.read()) - sc_biguint<10>(p_shl628_cast_fu_37852_p3.read()));
}

void ShuffleNetV2::thread_tmp_1279_fu_37865_p2() {
    tmp_1279_fu_37865_p2 = (!tmp_542_cast_cast_reg_48401.read().is_01() || !tmp_1278_fu_37859_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_542_cast_cast_reg_48401.read()) + sc_biguint<10>(tmp_1278_fu_37859_p2.read()));
}

void ShuffleNetV2::thread_tmp_1280_fu_38128_p3() {
    tmp_1280_fu_38128_p3 = esl_concat<7,3>(co177_reg_13375.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1281_fu_38140_p3() {
    tmp_1281_fu_38140_p3 = esl_concat<7,1>(co177_reg_13375.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1282_fu_38152_p2() {
    tmp_1282_fu_38152_p2 = (!p_shl629_cast_fu_38136_p1.read().is_01() || !p_shl630_cast_fu_38148_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl629_cast_fu_38136_p1.read()) - sc_biguint<11>(p_shl630_cast_fu_38148_p1.read()));
}

void ShuffleNetV2::thread_tmp_1283_fu_38184_p3() {
    tmp_1283_fu_38184_p3 = esl_concat<8,3>(tmp_445_fu_38178_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1284_fu_38196_p3() {
    tmp_1284_fu_38196_p3 = esl_concat<8,1>(tmp_445_fu_38178_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1285_fu_38208_p2() {
    tmp_1285_fu_38208_p2 = (!p_shl631_cast_fu_38192_p1.read().is_01() || !p_shl632_cast_fu_38204_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl631_cast_fu_38192_p1.read()) - sc_biguint<12>(p_shl632_cast_fu_38204_p1.read()));
}

void ShuffleNetV2::thread_tmp_1286_fu_38067_p2() {
    tmp_1286_fu_38067_p2 = (!tmp_1902_cast_reg_48492.read().is_01() || !h_125_cast_cast_fu_38063_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1902_cast_reg_48492.read()) + sc_biguint<12>(h_125_cast_cast_fu_38063_p1.read()));
}

void ShuffleNetV2::thread_tmp_1287_fu_38096_p2() {
    tmp_1287_fu_38096_p2 = (!p_shl633_cast_fu_38076_p3.read().is_01() || !p_shl634_cast_fu_38092_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl633_cast_fu_38076_p3.read()) - sc_bigint<14>(p_shl634_cast_fu_38092_p1.read()));
}

void ShuffleNetV2::thread_tmp_1288_cast_fu_25012_p1() {
    tmp_1288_cast_fu_25012_p1 = esl_sext<18,17>(tmp_947_fu_25006_p2.read());
}

void ShuffleNetV2::thread_tmp_1288_fu_38238_p2() {
    tmp_1288_fu_38238_p2 = (!h_127_cast_cast_fu_38234_p1.read().is_01() || !tmp_1923_cast_reg_48549.read().is_01())? sc_lv<13>(): (sc_biguint<13>(h_127_cast_cast_fu_38234_p1.read()) + sc_bigint<13>(tmp_1923_cast_reg_48549.read()));
}

void ShuffleNetV2::thread_tmp_1289_cast_fu_25021_p1() {
    tmp_1289_cast_fu_25021_p1 = esl_sext<32,18>(tmp_948_fu_25016_p2.read());
}

void ShuffleNetV2::thread_tmp_1289_fu_38263_p2() {
    tmp_1289_fu_38263_p2 = (!p_shl635_cast_fu_38247_p3.read().is_01() || !p_shl636_cast_fu_38255_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl635_cast_fu_38247_p3.read()) - sc_biguint<14>(p_shl636_cast_fu_38255_p3.read()));
}

void ShuffleNetV2::thread_tmp_1290_fu_38269_p2() {
    tmp_1290_fu_38269_p2 = (!h_127_cast_cast1_fu_38230_p1.read().is_01() || !tmp_1920_cast_reg_48536.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h_127_cast_cast1_fu_38230_p1.read()) + sc_bigint<12>(tmp_1920_cast_reg_48536.read()));
}

void ShuffleNetV2::thread_tmp_1291_fu_38294_p2() {
    tmp_1291_fu_38294_p2 = (!p_shl637_cast_fu_38278_p3.read().is_01() || !p_shl638_cast_fu_38286_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl637_cast_fu_38278_p3.read()) - sc_biguint<13>(p_shl638_cast_fu_38286_p3.read()));
}

void ShuffleNetV2::thread_tmp_1292_fu_38118_p2() {
    tmp_1292_fu_38118_p2 = (!tmp_1287_reg_48513.read().is_01() || !w_126_cast_cast_fu_38114_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1287_reg_48513.read()) + sc_biguint<14>(w_126_cast_cast_fu_38114_p1.read()));
}

void ShuffleNetV2::thread_tmp_1293_fu_38320_p2() {
    tmp_1293_fu_38320_p2 = (!tmp_1289_reg_48562.read().is_01() || !w_128_cast_cast_fu_38316_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1289_reg_48562.read()) + sc_biguint<14>(w_128_cast_cast_fu_38316_p1.read()));
}

void ShuffleNetV2::thread_tmp_1294_fu_38330_p2() {
    tmp_1294_fu_38330_p2 = (!tmp_1291_reg_48567.read().is_01() || !w_128_cast_cast1_fu_38312_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1291_reg_48567.read()) + sc_biguint<13>(w_128_cast_cast1_fu_38312_p1.read()));
}

void ShuffleNetV2::thread_tmp_1295_cast_fu_25087_p1() {
    tmp_1295_cast_fu_25087_p1 = esl_sext<32,8>(tmp_950_reg_44400.read());
}

void ShuffleNetV2::thread_tmp_1295_fu_38529_p3() {
    tmp_1295_fu_38529_p3 = esl_concat<13,5>(sum92_reg_48645.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1296_fu_38540_p3() {
    tmp_1296_fu_38540_p3 = esl_concat<13,3>(sum92_reg_48645.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1297_fu_38551_p2() {
    tmp_1297_fu_38551_p2 = (!p_shl639_cast_fu_38536_p1.read().is_01() || !p_shl640_cast_fu_38547_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl639_cast_fu_38536_p1.read()) - sc_biguint<19>(p_shl640_cast_fu_38547_p1.read()));
}

void ShuffleNetV2::thread_tmp_1298_fu_38561_p2() {
    tmp_1298_fu_38561_p2 = (!ci86_cast1_cast_reg_48613.read().is_01() || !tmp_1948_cast_fu_38557_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci86_cast1_cast_reg_48613.read()) + sc_bigint<20>(tmp_1948_cast_fu_38557_p1.read()));
}

void ShuffleNetV2::thread_tmp_1299_fu_38617_p2() {
    tmp_1299_fu_38617_p2 = (!p_shl641_cast_fu_38603_p3.read().is_01() || !p_shl642_cast_fu_38610_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl641_cast_fu_38603_p3.read()) - sc_biguint<10>(p_shl642_cast_fu_38610_p3.read()));
}

void ShuffleNetV2::thread_tmp_1300_fu_38623_p2() {
    tmp_1300_fu_38623_p2 = (!tmp_554_cast_cast_reg_48626.read().is_01() || !tmp_1299_fu_38617_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_554_cast_cast_reg_48626.read()) + sc_biguint<10>(tmp_1299_fu_38617_p2.read()));
}

void ShuffleNetV2::thread_tmp_1301_fu_38882_p3() {
    tmp_1301_fu_38882_p3 = esl_concat<8,2>(tmp_458_fu_38873_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1302_fu_38894_p2() {
    tmp_1302_fu_38894_p2 = (!p_shl643_cast_fu_38890_p1.read().is_01() || !tmp_566_cast_cast_fu_38878_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl643_cast_fu_38890_p1.read()) - sc_bigint<11>(tmp_566_cast_cast_fu_38878_p1.read()));
}

void ShuffleNetV2::thread_tmp_1303_fu_38900_p2() {
    tmp_1303_fu_38900_p2 = (!w129_cast_cast_reg_48740.read().is_01() || !tmp_1302_fu_38894_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w129_cast_cast_reg_48740.read()) + sc_biguint<11>(tmp_1302_fu_38894_p2.read()));
}

void ShuffleNetV2::thread_tmp_1304_fu_38921_p2() {
    tmp_1304_fu_38921_p2 = (!tmp_2556_fu_38916_p2.read().is_01() || !tmp_1303_reg_48779.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_2556_fu_38916_p2.read()) - sc_biguint<11>(tmp_1303_reg_48779.read()));
}

void ShuffleNetV2::thread_tmp_1305_fu_38926_p2() {
    tmp_1305_fu_38926_p2 = (!h128_cast_cast_reg_48758.read().is_01() || !tmp_1304_fu_38921_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h128_cast_cast_reg_48758.read()) + sc_biguint<11>(tmp_1304_fu_38921_p2.read()));
}

void ShuffleNetV2::thread_tmp_1306_fu_38934_p3() {
    tmp_1306_fu_38934_p3 = esl_concat<11,2>(sum45_reg_48785.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1307_fu_38945_p2() {
    tmp_1307_fu_38945_p2 = (!p_shl645_cast_fu_38941_p1.read().is_01() || !sum45_cast_cast_fu_38931_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl645_cast_fu_38941_p1.read()) - sc_biguint<14>(sum45_cast_cast_fu_38931_p1.read()));
}

void ShuffleNetV2::thread_tmp_1308_fu_38955_p2() {
    tmp_1308_fu_38955_p2 = (!w129_cast_cast1_reg_48735.read().is_01() || !tmp_1969_cast_fu_38951_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w129_cast_cast1_reg_48735.read()) + sc_bigint<15>(tmp_1969_cast_fu_38951_p1.read()));
}

void ShuffleNetV2::thread_tmp_1309_fu_38974_p2() {
    tmp_1309_fu_38974_p2 = (!p_shl276_fu_38970_p1.read().is_01() || !tmp_1970_cast_fu_38960_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl276_fu_38970_p1.read()) - sc_bigint<32>(tmp_1970_cast_fu_38960_p1.read()));
}

void ShuffleNetV2::thread_tmp_1310_fu_38980_p2() {
    tmp_1310_fu_38980_p2 = (!h128_cast_reg_48753.read().is_01() || !tmp_1309_fu_38974_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h128_cast_reg_48753.read()) + sc_biguint<32>(tmp_1309_fu_38974_p2.read()));
}

void ShuffleNetV2::thread_tmp_1311_fu_39528_p3() {
    tmp_1311_fu_39528_p3 = esl_concat<7,3>(co185_reg_13584.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1312_fu_39540_p3() {
    tmp_1312_fu_39540_p3 = esl_concat<7,1>(co185_reg_13584.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1313_fu_39552_p2() {
    tmp_1313_fu_39552_p2 = (!p_shl647_cast_fu_39536_p1.read().is_01() || !p_shl648_cast_fu_39548_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl647_cast_fu_39536_p1.read()) - sc_biguint<11>(p_shl648_cast_fu_39548_p1.read()));
}

void ShuffleNetV2::thread_tmp_1314_fu_39294_p3() {
    tmp_1314_fu_39294_p3 = esl_concat<13,5>(sum95_reg_48905.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1315_fu_39305_p3() {
    tmp_1315_fu_39305_p3 = esl_concat<13,3>(sum95_reg_48905.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1316_cast_fu_25336_p1() {
    tmp_1316_cast_fu_25336_p1 = esl_zext<32,15>(tmp_963_fu_25331_p2.read());
}

void ShuffleNetV2::thread_tmp_1316_fu_39316_p2() {
    tmp_1316_fu_39316_p2 = (!p_shl649_cast_fu_39301_p1.read().is_01() || !p_shl650_cast_fu_39312_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl649_cast_fu_39301_p1.read()) - sc_biguint<19>(p_shl650_cast_fu_39312_p1.read()));
}

void ShuffleNetV2::thread_tmp_1317_cast_fu_25538_p1() {
    tmp_1317_cast_fu_25538_p1 = esl_zext<32,15>(tmp_964_fu_25533_p2.read());
}

void ShuffleNetV2::thread_tmp_1317_fu_39326_p2() {
    tmp_1317_fu_39326_p2 = (!ci88_cast1_cast_reg_48873.read().is_01() || !tmp_1984_cast_fu_39322_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci88_cast1_cast_reg_48873.read()) + sc_bigint<20>(tmp_1984_cast_fu_39322_p1.read()));
}

void ShuffleNetV2::thread_tmp_1318_cast_fu_25548_p1() {
    tmp_1318_cast_fu_25548_p1 = esl_zext<32,14>(tmp_965_reg_44543.read());
}

void ShuffleNetV2::thread_tmp_1318_fu_39382_p2() {
    tmp_1318_fu_39382_p2 = (!p_shl651_cast_fu_39368_p3.read().is_01() || !p_shl652_cast_fu_39375_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl651_cast_fu_39368_p3.read()) - sc_biguint<10>(p_shl652_cast_fu_39375_p3.read()));
}

void ShuffleNetV2::thread_tmp_1319_fu_39388_p2() {
    tmp_1319_fu_39388_p2 = (!tmp_571_cast_cast_reg_48886.read().is_01() || !tmp_1318_fu_39382_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_571_cast_cast_reg_48886.read()) + sc_biguint<10>(tmp_1318_fu_39382_p2.read()));
}

void ShuffleNetV2::thread_tmp_1320_fu_39651_p3() {
    tmp_1320_fu_39651_p3 = esl_concat<8,3>(ci89_reg_13617.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1321_fu_39663_p3() {
    tmp_1321_fu_39663_p3 = esl_concat<8,1>(ci89_reg_13617.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1322_fu_39675_p2() {
    tmp_1322_fu_39675_p2 = (!p_shl653_cast_fu_39659_p1.read().is_01() || !p_shl654_cast_fu_39671_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl653_cast_fu_39659_p1.read()) - sc_biguint<12>(p_shl654_cast_fu_39671_p1.read()));
}

void ShuffleNetV2::thread_tmp_1323_fu_39685_p3() {
    tmp_1323_fu_39685_p3 = esl_concat<8,2>(ci89_reg_13617.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1324_fu_39590_p2() {
    tmp_1324_fu_39590_p2 = (!tmp_1976_cast_reg_48977.read().is_01() || !h_131_cast_cast_fu_39586_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1976_cast_reg_48977.read()) + sc_biguint<12>(h_131_cast_cast_fu_39586_p1.read()));
}

void ShuffleNetV2::thread_tmp_1325_fu_39619_p2() {
    tmp_1325_fu_39619_p2 = (!p_shl655_cast_fu_39599_p3.read().is_01() || !p_shl656_cast_fu_39615_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl655_cast_fu_39599_p3.read()) - sc_bigint<14>(p_shl656_cast_fu_39615_p1.read()));
}

void ShuffleNetV2::thread_tmp_1326_fu_39713_p2() {
    tmp_1326_fu_39713_p2 = (!w131_cast_cast_fu_39709_p1.read().is_01() || !tmp_1996_cast_reg_49026.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w131_cast_cast_fu_39709_p1.read()) + sc_biguint<11>(tmp_1996_cast_reg_49026.read()));
}

void ShuffleNetV2::thread_tmp_1327_cast_fu_25782_p1() {
    tmp_1327_cast_fu_25782_p1 = esl_sext<18,17>(tmp_968_fu_25776_p2.read());
}

void ShuffleNetV2::thread_tmp_1327_fu_39742_p2() {
    tmp_1327_fu_39742_p2 = (!w_133_cast_cast_fu_39738_p1.read().is_01() || !tmp_1994_cast_reg_49021.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w_133_cast_cast_fu_39738_p1.read()) + sc_bigint<13>(tmp_1994_cast_reg_49021.read()));
}

void ShuffleNetV2::thread_tmp_1328_cast_fu_25791_p1() {
    tmp_1328_cast_fu_25791_p1 = esl_sext<32,18>(tmp_969_fu_25786_p2.read());
}

void ShuffleNetV2::thread_tmp_1328_fu_39767_p2() {
    tmp_1328_fu_39767_p2 = (!p_shl657_cast_fu_39751_p3.read().is_01() || !p_shl658_cast_fu_39759_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl657_cast_fu_39751_p3.read()) - sc_biguint<14>(p_shl658_cast_fu_39759_p3.read()));
}

void ShuffleNetV2::thread_tmp_1329_fu_39641_p2() {
    tmp_1329_fu_39641_p2 = (!tmp_1325_reg_48998.read().is_01() || !w_134_cast_cast_fu_39637_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1325_reg_48998.read()) + sc_biguint<14>(w_134_cast_cast_fu_39637_p1.read()));
}

void ShuffleNetV2::thread_tmp_1330_fu_39777_p2() {
    tmp_1330_fu_39777_p2 = (!tmp_2003_cast_reg_49039.read().is_01() || !h132_cast_cast_fu_39773_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_2003_cast_reg_49039.read()) + sc_biguint<13>(h132_cast_cast_fu_39773_p1.read()));
}

void ShuffleNetV2::thread_tmp_1331_fu_39803_p2() {
    tmp_1331_fu_39803_p2 = (!tmp_1328_reg_49052.read().is_01() || !h_133_cast_cast_fu_39799_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1328_reg_49052.read()) + sc_biguint<14>(h_133_cast_cast_fu_39799_p1.read()));
}

void ShuffleNetV2::thread_tmp_1334_cast_fu_25857_p1() {
    tmp_1334_cast_fu_25857_p1 = esl_sext<32,8>(tmp_971_reg_44625.read());
}

void ShuffleNetV2::thread_tmp_1346_cast_fu_26217_p1() {
    tmp_1346_cast_fu_26217_p1 = esl_zext<32,10>(tmp_976_reg_44749.read());
}

void ShuffleNetV2::thread_tmp_1349_cast_fu_26181_p1() {
    tmp_1349_cast_fu_26181_p1 = esl_sext<32,12>(tmp_979_reg_44754.read());
}

void ShuffleNetV2::thread_tmp_1364_cast_fu_26555_p1() {
    tmp_1364_cast_fu_26555_p1 = esl_sext<18,17>(tmp_987_fu_26549_p2.read());
}

void ShuffleNetV2::thread_tmp_1365_cast_fu_26564_p1() {
    tmp_1365_cast_fu_26564_p1 = esl_sext<32,18>(tmp_988_fu_26559_p2.read());
}

void ShuffleNetV2::thread_tmp_1371_cast_fu_26630_p1() {
    tmp_1371_cast_fu_26630_p1 = esl_sext<32,8>(tmp_990_reg_44885.read());
}

void ShuffleNetV2::thread_tmp_1392_cast_fu_26875_p1() {
    tmp_1392_cast_fu_26875_p1 = esl_zext<32,15>(tmp_1003_fu_26870_p2.read());
}

void ShuffleNetV2::thread_tmp_1393_cast_fu_27077_p1() {
    tmp_1393_cast_fu_27077_p1 = esl_zext<32,15>(tmp_1004_fu_27072_p2.read());
}

void ShuffleNetV2::thread_tmp_1394_cast_fu_27087_p1() {
    tmp_1394_cast_fu_27087_p1 = esl_zext<32,14>(tmp_1005_reg_45028.read());
}

void ShuffleNetV2::thread_tmp_1403_cast_fu_27321_p1() {
    tmp_1403_cast_fu_27321_p1 = esl_sext<18,17>(tmp_1008_fu_27315_p2.read());
}

void ShuffleNetV2::thread_tmp_1404_cast_fu_27330_p1() {
    tmp_1404_cast_fu_27330_p1 = esl_sext<32,18>(tmp_1009_fu_27325_p2.read());
}

void ShuffleNetV2::thread_tmp_1410_cast_fu_27396_p1() {
    tmp_1410_cast_fu_27396_p1 = esl_sext<32,8>(tmp_1011_reg_45110.read());
}

void ShuffleNetV2::thread_tmp_1422_cast_fu_27764_p1() {
    tmp_1422_cast_fu_27764_p1 = esl_zext<32,10>(tmp_1016_reg_45234.read());
}

void ShuffleNetV2::thread_tmp_1426_cast_fu_27728_p1() {
    tmp_1426_cast_fu_27728_p1 = esl_sext<32,12>(tmp_1020_reg_45239.read());
}

void ShuffleNetV2::thread_tmp_1441_cast_fu_28102_p1() {
    tmp_1441_cast_fu_28102_p1 = esl_sext<18,17>(tmp_1028_fu_28096_p2.read());
}

void ShuffleNetV2::thread_tmp_1442_cast_fu_28111_p1() {
    tmp_1442_cast_fu_28111_p1 = esl_sext<32,18>(tmp_1029_fu_28106_p2.read());
}

void ShuffleNetV2::thread_tmp_1448_cast_fu_28177_p1() {
    tmp_1448_cast_fu_28177_p1 = esl_sext<32,8>(tmp_1031_reg_45370.read());
}

void ShuffleNetV2::thread_tmp_1469_cast_fu_28422_p1() {
    tmp_1469_cast_fu_28422_p1 = esl_zext<32,15>(tmp_1044_fu_28417_p2.read());
}

}

