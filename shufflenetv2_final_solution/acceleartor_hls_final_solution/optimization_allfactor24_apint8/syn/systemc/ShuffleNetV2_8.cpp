#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_p_shl468_cast_fu_27111_p1() {
    p_shl468_cast_fu_27111_p1 = esl_zext<11,8>(tmp_1158_fu_27103_p3.read());
}

void ShuffleNetV2::thread_p_shl469_cast_fu_26991_p1() {
    p_shl469_cast_fu_26991_p1 = esl_zext<15,13>(tmp_1161_fu_26983_p3.read());
}

void ShuffleNetV2::thread_p_shl46_cast_fu_22211_p1() {
    p_shl46_cast_fu_22211_p1 = esl_zext<7,6>(p_shl46_fu_22203_p3.read());
}

void ShuffleNetV2::thread_p_shl46_fu_22203_p3() {
    p_shl46_fu_22203_p3 = esl_concat<1,5>(tmp_949_fu_22199_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl470_cast_fu_27003_p1() {
    p_shl470_cast_fu_27003_p1 = esl_zext<15,11>(tmp_1162_fu_26995_p3.read());
}

void ShuffleNetV2::thread_p_shl471_cast_fu_27154_p1() {
    p_shl471_cast_fu_27154_p1 = esl_zext<15,14>(tmp_1167_fu_27146_p3.read());
}

void ShuffleNetV2::thread_p_shl472_cast_fu_27166_p1() {
    p_shl472_cast_fu_27166_p1 = esl_zext<15,12>(tmp_1168_fu_27158_p3.read());
}

void ShuffleNetV2::thread_p_shl473_cast_fu_27189_p1() {
    p_shl473_cast_fu_27189_p1 = esl_zext<14,13>(tmp_1171_fu_27181_p3.read());
}

void ShuffleNetV2::thread_p_shl474_cast_fu_27201_p1() {
    p_shl474_cast_fu_27201_p1 = esl_zext<14,11>(tmp_1172_fu_27193_p3.read());
}

void ShuffleNetV2::thread_p_shl475_cast_fu_27459_p1() {
    p_shl475_cast_fu_27459_p1 = esl_zext<17,16>(tmp_1179_fu_27452_p3.read());
}

void ShuffleNetV2::thread_p_shl476_cast_fu_27470_p1() {
    p_shl476_cast_fu_27470_p1 = esl_zext<17,14>(tmp_1180_fu_27463_p3.read());
}

void ShuffleNetV2::thread_p_shl477_cast_fu_27526_p3() {
    p_shl477_cast_fu_27526_p3 = esl_concat<2,6>(tmp_1184_reg_45458.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl478_cast_fu_27533_p3() {
    p_shl478_cast_fu_27533_p3 = esl_concat<4,4>(tmp_1185_reg_45463.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl479_cast_fu_27813_p1() {
    p_shl479_cast_fu_27813_p1 = esl_sext<10,9>(tmp_1192_fu_27805_p3.read());
}

void ShuffleNetV2::thread_p_shl47_cast_fu_22223_p1() {
    p_shl47_cast_fu_22223_p1 = esl_zext<7,4>(p_shl47_fu_22215_p3.read());
}

void ShuffleNetV2::thread_p_shl47_fu_22215_p3() {
    p_shl47_fu_22215_p3 = esl_concat<1,3>(tmp_949_fu_22199_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl481_cast_fu_27872_p1() {
    p_shl481_cast_fu_27872_p1 = esl_zext<12,11>(tmp_1199_fu_27868_p1.read());
}

void ShuffleNetV2::thread_p_shl483_cast_fu_28475_p1() {
    p_shl483_cast_fu_28475_p1 = esl_zext<10,9>(tmp_1205_fu_28467_p3.read());
}

void ShuffleNetV2::thread_p_shl484_cast_fu_28487_p1() {
    p_shl484_cast_fu_28487_p1 = esl_zext<10,7>(tmp_1206_fu_28479_p3.read());
}

void ShuffleNetV2::thread_p_shl485_cast_fu_28240_p1() {
    p_shl485_cast_fu_28240_p1 = esl_zext<17,16>(tmp_1210_fu_28233_p3.read());
}

void ShuffleNetV2::thread_p_shl486_cast_fu_28251_p1() {
    p_shl486_cast_fu_28251_p1 = esl_zext<17,14>(tmp_1211_fu_28244_p3.read());
}

void ShuffleNetV2::thread_p_shl487_cast_fu_28307_p3() {
    p_shl487_cast_fu_28307_p3 = esl_concat<2,6>(tmp_1215_reg_45718.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl488_cast_fu_28314_p3() {
    p_shl488_cast_fu_28314_p3 = esl_concat<4,4>(tmp_1216_reg_45723.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl489_cast_fu_28594_p1() {
    p_shl489_cast_fu_28594_p1 = esl_zext<10,9>(tmp_1219_fu_28586_p3.read());
}

void ShuffleNetV2::thread_p_shl48_cast_fu_21952_p1() {
    p_shl48_cast_fu_21952_p1 = esl_zext<7,6>(p_shl48_fu_21944_p3.read());
}

void ShuffleNetV2::thread_p_shl48_fu_21944_p3() {
    p_shl48_fu_21944_p3 = esl_concat<2,4>(tmp_950_fu_21940_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl490_cast_fu_28606_p1() {
    p_shl490_cast_fu_28606_p1 = esl_zext<10,7>(tmp_1220_fu_28598_p3.read());
}

void ShuffleNetV2::thread_p_shl491_cast_fu_28646_p1() {
    p_shl491_cast_fu_28646_p1 = esl_zext<11,10>(tmp_1222_fu_28638_p3.read());
}

void ShuffleNetV2::thread_p_shl492_cast_fu_28658_p1() {
    p_shl492_cast_fu_28658_p1 = esl_zext<11,8>(tmp_1223_fu_28650_p3.read());
}

void ShuffleNetV2::thread_p_shl493_cast_fu_28538_p1() {
    p_shl493_cast_fu_28538_p1 = esl_zext<15,13>(tmp_1226_fu_28530_p3.read());
}

void ShuffleNetV2::thread_p_shl494_cast_fu_28550_p1() {
    p_shl494_cast_fu_28550_p1 = esl_zext<15,11>(tmp_1227_fu_28542_p3.read());
}

void ShuffleNetV2::thread_p_shl495_cast_fu_28701_p1() {
    p_shl495_cast_fu_28701_p1 = esl_zext<15,14>(tmp_1232_fu_28693_p3.read());
}

void ShuffleNetV2::thread_p_shl496_cast_fu_28713_p1() {
    p_shl496_cast_fu_28713_p1 = esl_zext<15,12>(tmp_1233_fu_28705_p3.read());
}

void ShuffleNetV2::thread_p_shl497_cast_fu_28736_p1() {
    p_shl497_cast_fu_28736_p1 = esl_zext<14,13>(tmp_1236_fu_28728_p3.read());
}

void ShuffleNetV2::thread_p_shl498_cast_fu_28748_p1() {
    p_shl498_cast_fu_28748_p1 = esl_zext<14,11>(tmp_1237_fu_28740_p3.read());
}

void ShuffleNetV2::thread_p_shl499_cast_fu_29006_p1() {
    p_shl499_cast_fu_29006_p1 = esl_zext<17,16>(tmp_1244_fu_28999_p3.read());
}

void ShuffleNetV2::thread_p_shl49_cast_fu_21964_p1() {
    p_shl49_cast_fu_21964_p1 = esl_zext<7,4>(p_shl49_fu_21956_p3.read());
}

void ShuffleNetV2::thread_p_shl49_fu_21956_p3() {
    p_shl49_fu_21956_p3 = esl_concat<2,2>(tmp_950_fu_21940_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl4_cast_fu_18962_p1() {
    p_shl4_cast_fu_18962_p1 = esl_zext<7,6>(p_shl4_fu_18954_p3.read());
}

void ShuffleNetV2::thread_p_shl4_fu_18954_p3() {
    p_shl4_fu_18954_p3 = esl_concat<2,4>(tmp_837_fu_18950_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl500_cast_fu_29017_p1() {
    p_shl500_cast_fu_29017_p1 = esl_zext<17,14>(tmp_1245_fu_29010_p3.read());
}

void ShuffleNetV2::thread_p_shl501_cast_fu_29073_p3() {
    p_shl501_cast_fu_29073_p3 = esl_concat<2,6>(tmp_1249_reg_45943.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl502_cast_fu_29080_p3() {
    p_shl502_cast_fu_29080_p3 = esl_concat<4,4>(tmp_1250_reg_45948.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl503_cast_fu_29360_p1() {
    p_shl503_cast_fu_29360_p1 = esl_sext<10,9>(tmp_1257_fu_29352_p3.read());
}

void ShuffleNetV2::thread_p_shl505_cast_fu_29419_p1() {
    p_shl505_cast_fu_29419_p1 = esl_zext<12,11>(tmp_1264_fu_29415_p1.read());
}

void ShuffleNetV2::thread_p_shl507_cast_fu_30026_p1() {
    p_shl507_cast_fu_30026_p1 = esl_zext<10,9>(tmp_1270_fu_30018_p3.read());
}

void ShuffleNetV2::thread_p_shl508_cast_fu_30038_p1() {
    p_shl508_cast_fu_30038_p1 = esl_zext<10,7>(tmp_1271_fu_30030_p3.read());
}

void ShuffleNetV2::thread_p_shl509_cast_fu_29791_p1() {
    p_shl509_cast_fu_29791_p1 = esl_zext<17,16>(tmp_1275_fu_29784_p3.read());
}

void ShuffleNetV2::thread_p_shl50_cast_fu_21991_p1() {
    p_shl50_cast_fu_21991_p1 = esl_zext<8,7>(p_shl50_fu_21983_p3.read());
}

void ShuffleNetV2::thread_p_shl50_fu_21983_p3() {
    p_shl50_fu_21983_p3 = esl_concat<2,5>(tmp_950_fu_21940_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl510_cast_fu_29802_p1() {
    p_shl510_cast_fu_29802_p1 = esl_zext<17,14>(tmp_1276_fu_29795_p3.read());
}

void ShuffleNetV2::thread_p_shl511_cast_fu_29858_p3() {
    p_shl511_cast_fu_29858_p3 = esl_concat<2,6>(tmp_1280_reg_46203.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl512_cast_fu_29865_p3() {
    p_shl512_cast_fu_29865_p3 = esl_concat<4,4>(tmp_1281_reg_46208.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl513_cast_fu_30145_p1() {
    p_shl513_cast_fu_30145_p1 = esl_zext<10,9>(tmp_1284_fu_30137_p3.read());
}

void ShuffleNetV2::thread_p_shl514_cast_fu_30157_p1() {
    p_shl514_cast_fu_30157_p1 = esl_zext<10,7>(tmp_1285_fu_30149_p3.read());
}

void ShuffleNetV2::thread_p_shl515_cast_fu_30197_p1() {
    p_shl515_cast_fu_30197_p1 = esl_zext<11,10>(tmp_1287_fu_30189_p3.read());
}

void ShuffleNetV2::thread_p_shl516_cast_fu_30209_p1() {
    p_shl516_cast_fu_30209_p1 = esl_zext<11,8>(tmp_1288_fu_30201_p3.read());
}

void ShuffleNetV2::thread_p_shl517_cast_fu_30089_p1() {
    p_shl517_cast_fu_30089_p1 = esl_zext<15,13>(tmp_1291_fu_30081_p3.read());
}

void ShuffleNetV2::thread_p_shl518_cast_fu_30101_p1() {
    p_shl518_cast_fu_30101_p1 = esl_zext<15,11>(tmp_1292_fu_30093_p3.read());
}

void ShuffleNetV2::thread_p_shl519_cast_fu_30252_p1() {
    p_shl519_cast_fu_30252_p1 = esl_zext<15,14>(tmp_1297_fu_30244_p3.read());
}

void ShuffleNetV2::thread_p_shl51_cast_fu_22003_p1() {
    p_shl51_cast_fu_22003_p1 = esl_zext<8,5>(p_shl51_fu_21995_p3.read());
}

void ShuffleNetV2::thread_p_shl51_fu_21995_p3() {
    p_shl51_fu_21995_p3 = esl_concat<2,3>(tmp_950_fu_21940_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl520_cast_fu_30264_p1() {
    p_shl520_cast_fu_30264_p1 = esl_zext<15,12>(tmp_1298_fu_30256_p3.read());
}

void ShuffleNetV2::thread_p_shl521_cast_fu_30287_p1() {
    p_shl521_cast_fu_30287_p1 = esl_zext<14,13>(tmp_1301_fu_30279_p3.read());
}

void ShuffleNetV2::thread_p_shl522_cast_fu_30299_p1() {
    p_shl522_cast_fu_30299_p1 = esl_zext<14,11>(tmp_1302_fu_30291_p3.read());
}

void ShuffleNetV2::thread_p_shl523_cast_fu_30561_p1() {
    p_shl523_cast_fu_30561_p1 = esl_zext<17,16>(tmp_1310_fu_30557_p1.read());
}

void ShuffleNetV2::thread_p_shl524_cast_fu_30576_p1() {
    p_shl524_cast_fu_30576_p1 = esl_zext<17,14>(tmp_1312_fu_30572_p1.read());
}

void ShuffleNetV2::thread_p_shl525_cast_fu_30632_p3() {
    p_shl525_cast_fu_30632_p3 = esl_concat<2,6>(tmp_1316_reg_46428.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl526_cast_fu_30639_p3() {
    p_shl526_cast_fu_30639_p3 = esl_concat<4,4>(tmp_1317_reg_46433.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl527_cast_fu_30919_p1() {
    p_shl527_cast_fu_30919_p1 = esl_sext<10,9>(tmp_1324_fu_30911_p3.read());
}

void ShuffleNetV2::thread_p_shl529_cast_fu_30970_p1() {
    p_shl529_cast_fu_30970_p1 = esl_zext<13,12>(tmp_1330_fu_30963_p3.read());
}

void ShuffleNetV2::thread_p_shl52_cast_fu_22629_p1() {
    p_shl52_cast_fu_22629_p1 = esl_zext<7,6>(p_shl52_fu_22621_p3.read());
}

void ShuffleNetV2::thread_p_shl52_fu_22621_p3() {
    p_shl52_fu_22621_p3 = esl_concat<1,5>(tmp_970_fu_22617_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl531_cast_fu_31589_p1() {
    p_shl531_cast_fu_31589_p1 = esl_zext<10,9>(tmp_1336_fu_31581_p3.read());
}

void ShuffleNetV2::thread_p_shl532_cast_fu_31601_p1() {
    p_shl532_cast_fu_31601_p1 = esl_zext<10,7>(tmp_1337_fu_31593_p3.read());
}

void ShuffleNetV2::thread_p_shl533_cast_fu_31346_p1() {
    p_shl533_cast_fu_31346_p1 = esl_zext<17,16>(tmp_1342_fu_31342_p1.read());
}

void ShuffleNetV2::thread_p_shl534_cast_fu_31361_p1() {
    p_shl534_cast_fu_31361_p1 = esl_zext<17,14>(tmp_1344_fu_31357_p1.read());
}

void ShuffleNetV2::thread_p_shl535_cast_fu_31417_p3() {
    p_shl535_cast_fu_31417_p3 = esl_concat<2,6>(tmp_1348_reg_46688.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl536_cast_fu_31424_p3() {
    p_shl536_cast_fu_31424_p3 = esl_concat<4,4>(tmp_1349_reg_46693.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl537_cast_fu_31708_p1() {
    p_shl537_cast_fu_31708_p1 = esl_zext<10,9>(tmp_1352_fu_31700_p3.read());
}

void ShuffleNetV2::thread_p_shl538_cast_fu_31720_p1() {
    p_shl538_cast_fu_31720_p1 = esl_zext<10,7>(tmp_1353_fu_31712_p3.read());
}

void ShuffleNetV2::thread_p_shl539_cast_fu_31760_p1() {
    p_shl539_cast_fu_31760_p1 = esl_zext<11,10>(tmp_1355_fu_31752_p3.read());
}

void ShuffleNetV2::thread_p_shl53_cast_fu_22641_p1() {
    p_shl53_cast_fu_22641_p1 = esl_zext<7,4>(p_shl53_fu_22633_p3.read());
}

void ShuffleNetV2::thread_p_shl53_fu_22633_p3() {
    p_shl53_fu_22633_p3 = esl_concat<1,3>(tmp_970_fu_22617_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl540_cast_fu_31772_p1() {
    p_shl540_cast_fu_31772_p1 = esl_zext<11,8>(tmp_1356_fu_31764_p3.read());
}

void ShuffleNetV2::thread_p_shl541_cast_fu_31652_p1() {
    p_shl541_cast_fu_31652_p1 = esl_zext<15,13>(tmp_1359_fu_31644_p3.read());
}

void ShuffleNetV2::thread_p_shl542_cast_fu_31664_p1() {
    p_shl542_cast_fu_31664_p1 = esl_zext<15,11>(tmp_1360_fu_31656_p3.read());
}

void ShuffleNetV2::thread_p_shl543_cast_fu_31815_p1() {
    p_shl543_cast_fu_31815_p1 = esl_zext<15,14>(tmp_1365_fu_31807_p3.read());
}

void ShuffleNetV2::thread_p_shl544_cast_fu_31827_p1() {
    p_shl544_cast_fu_31827_p1 = esl_zext<15,12>(tmp_1366_fu_31819_p3.read());
}

void ShuffleNetV2::thread_p_shl545_cast_fu_31850_p1() {
    p_shl545_cast_fu_31850_p1 = esl_zext<14,13>(tmp_1369_fu_31842_p3.read());
}

void ShuffleNetV2::thread_p_shl546_cast_fu_31862_p1() {
    p_shl546_cast_fu_31862_p1 = esl_zext<14,11>(tmp_1370_fu_31854_p3.read());
}

void ShuffleNetV2::thread_p_shl547_cast_fu_32124_p1() {
    p_shl547_cast_fu_32124_p1 = esl_zext<17,16>(tmp_1378_fu_32120_p1.read());
}

void ShuffleNetV2::thread_p_shl548_cast_fu_32139_p1() {
    p_shl548_cast_fu_32139_p1 = esl_zext<17,14>(tmp_1380_fu_32135_p1.read());
}

void ShuffleNetV2::thread_p_shl549_cast_fu_32195_p3() {
    p_shl549_cast_fu_32195_p3 = esl_concat<2,6>(tmp_1384_reg_46913.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl54_cast_fu_22977_p1() {
    p_shl54_cast_fu_22977_p1 = esl_zext<7,6>(p_shl54_fu_22969_p3.read());
}

void ShuffleNetV2::thread_p_shl54_fu_22969_p3() {
    p_shl54_fu_22969_p3 = esl_concat<1,5>(tmp_983_fu_22965_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl550_cast_fu_32202_p3() {
    p_shl550_cast_fu_32202_p3 = esl_concat<4,4>(tmp_1385_reg_46918.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl551_cast_fu_32486_p1() {
    p_shl551_cast_fu_32486_p1 = esl_sext<10,9>(tmp_1392_fu_32478_p3.read());
}

void ShuffleNetV2::thread_p_shl553_cast_fu_32537_p1() {
    p_shl553_cast_fu_32537_p1 = esl_zext<13,12>(tmp_1398_fu_32530_p3.read());
}

void ShuffleNetV2::thread_p_shl555_cast_fu_33156_p1() {
    p_shl555_cast_fu_33156_p1 = esl_zext<10,9>(tmp_1404_fu_33148_p3.read());
}

void ShuffleNetV2::thread_p_shl556_cast_fu_33168_p1() {
    p_shl556_cast_fu_33168_p1 = esl_zext<10,7>(tmp_1405_fu_33160_p3.read());
}

void ShuffleNetV2::thread_p_shl557_cast_fu_32917_p1() {
    p_shl557_cast_fu_32917_p1 = esl_zext<18,17>(tmp_1409_fu_32910_p3.read());
}

void ShuffleNetV2::thread_p_shl558_cast_fu_32928_p1() {
    p_shl558_cast_fu_32928_p1 = esl_zext<18,15>(tmp_1410_fu_32921_p3.read());
}

void ShuffleNetV2::thread_p_shl559_cast_fu_32984_p3() {
    p_shl559_cast_fu_32984_p3 = esl_concat<2,6>(tmp_1414_reg_47173.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl55_cast_fu_22989_p1() {
    p_shl55_cast_fu_22989_p1 = esl_zext<7,4>(p_shl55_fu_22981_p3.read());
}

void ShuffleNetV2::thread_p_shl55_fu_22981_p3() {
    p_shl55_fu_22981_p3 = esl_concat<1,3>(tmp_983_fu_22965_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl560_cast_fu_32991_p3() {
    p_shl560_cast_fu_32991_p3 = esl_concat<4,4>(tmp_1415_reg_47178.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl561_cast_fu_33219_p1() {
    p_shl561_cast_fu_33219_p1 = esl_zext<15,13>(tmp_1422_fu_33211_p3.read());
}

void ShuffleNetV2::thread_p_shl562_cast_fu_33231_p1() {
    p_shl562_cast_fu_33231_p1 = esl_zext<15,11>(tmp_1423_fu_33223_p3.read());
}

void ShuffleNetV2::thread_p_shl563_cast_fu_33464_p1() {
    p_shl563_cast_fu_33464_p1 = esl_zext<18,17>(tmp_1429_fu_33457_p3.read());
}

void ShuffleNetV2::thread_p_shl564_cast_fu_33475_p1() {
    p_shl564_cast_fu_33475_p1 = esl_zext<18,15>(tmp_1430_fu_33468_p3.read());
}

void ShuffleNetV2::thread_p_shl565_cast_fu_33531_p3() {
    p_shl565_cast_fu_33531_p3 = esl_concat<3,7>(tmp_1434_reg_47344.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl566_cast_fu_33538_p3() {
    p_shl566_cast_fu_33538_p3 = esl_concat<5,5>(tmp_1435_reg_47349.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl567_cast_fu_33822_p1() {
    p_shl567_cast_fu_33822_p1 = esl_sext<11,10>(tmp_1443_fu_33814_p3.read());
}

void ShuffleNetV2::thread_p_shl569_cast_fu_33873_p1() {
    p_shl569_cast_fu_33873_p1 = esl_zext<13,12>(tmp_1449_fu_33866_p3.read());
}

void ShuffleNetV2::thread_p_shl56_cast_fu_22718_p1() {
    p_shl56_cast_fu_22718_p1 = esl_zext<7,6>(p_shl56_fu_22710_p3.read());
}

void ShuffleNetV2::thread_p_shl56_fu_22710_p3() {
    p_shl56_fu_22710_p3 = esl_concat<2,4>(tmp_984_fu_22706_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl571_cast_fu_34233_p1() {
    p_shl571_cast_fu_34233_p1 = esl_zext<18,17>(tmp_1458_fu_34226_p3.read());
}

void ShuffleNetV2::thread_p_shl572_cast_fu_34244_p1() {
    p_shl572_cast_fu_34244_p1 = esl_zext<18,15>(tmp_1459_fu_34237_p3.read());
}

void ShuffleNetV2::thread_p_shl573_cast_fu_34300_p3() {
    p_shl573_cast_fu_34300_p3 = esl_concat<3,7>(tmp_1463_reg_47604.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl574_cast_fu_34307_p3() {
    p_shl574_cast_fu_34307_p3 = esl_concat<5,5>(tmp_1464_reg_47609.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl575_cast_fu_34595_p1() {
    p_shl575_cast_fu_34595_p1 = esl_sext<11,10>(tmp_1472_fu_34587_p3.read());
}

void ShuffleNetV2::thread_p_shl577_cast_fu_34646_p1() {
    p_shl577_cast_fu_34646_p1 = esl_zext<13,12>(tmp_1478_fu_34639_p3.read());
}

void ShuffleNetV2::thread_p_shl579_cast_fu_35237_p1() {
    p_shl579_cast_fu_35237_p1 = esl_zext<11,10>(tmp_1484_fu_35229_p3.read());
}

void ShuffleNetV2::thread_p_shl57_cast_fu_22730_p1() {
    p_shl57_cast_fu_22730_p1 = esl_zext<7,4>(p_shl57_fu_22722_p3.read());
}

void ShuffleNetV2::thread_p_shl57_fu_22722_p3() {
    p_shl57_fu_22722_p3 = esl_concat<2,2>(tmp_984_fu_22706_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl580_cast_fu_35249_p1() {
    p_shl580_cast_fu_35249_p1 = esl_zext<11,8>(tmp_1485_fu_35241_p3.read());
}

void ShuffleNetV2::thread_p_shl581_cast_fu_35293_p1() {
    p_shl581_cast_fu_35293_p1 = esl_zext<12,11>(tmp_1487_fu_35285_p3.read());
}

void ShuffleNetV2::thread_p_shl582_cast_fu_35305_p1() {
    p_shl582_cast_fu_35305_p1 = esl_zext<12,9>(tmp_1488_fu_35297_p3.read());
}

void ShuffleNetV2::thread_p_shl583_cast_fu_35002_p1() {
    p_shl583_cast_fu_35002_p1 = esl_zext<18,17>(tmp_1493_fu_34995_p3.read());
}

void ShuffleNetV2::thread_p_shl584_cast_fu_35013_p1() {
    p_shl584_cast_fu_35013_p1 = esl_zext<18,15>(tmp_1494_fu_35006_p3.read());
}

void ShuffleNetV2::thread_p_shl585_cast_fu_35069_p3() {
    p_shl585_cast_fu_35069_p3 = esl_concat<3,7>(tmp_1498_reg_47864.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl586_cast_fu_35076_p3() {
    p_shl586_cast_fu_35076_p3 = esl_concat<5,5>(tmp_1499_reg_47869.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl587_cast_fu_35348_p3() {
    p_shl587_cast_fu_35348_p3 = esl_concat<11,3>(tmp_1506_fu_35344_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl588_cast_fu_35356_p3() {
    p_shl588_cast_fu_35356_p3 = esl_concat<13,1>(tmp_1505_fu_35339_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl589_cast_fu_35379_p3() {
    p_shl589_cast_fu_35379_p3 = esl_concat<10,3>(tmp_1509_fu_35375_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl58_cast_fu_22757_p1() {
    p_shl58_cast_fu_22757_p1 = esl_zext<8,7>(p_shl58_fu_22749_p3.read());
}

void ShuffleNetV2::thread_p_shl58_fu_22749_p3() {
    p_shl58_fu_22749_p3 = esl_concat<2,5>(tmp_984_fu_22706_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl590_cast_fu_35387_p3() {
    p_shl590_cast_fu_35387_p3 = esl_concat<12,1>(tmp_1508_fu_35370_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl591_cast_fu_35637_p1() {
    p_shl591_cast_fu_35637_p1 = esl_zext<18,17>(tmp_1516_fu_35630_p3.read());
}

void ShuffleNetV2::thread_p_shl592_cast_fu_35648_p1() {
    p_shl592_cast_fu_35648_p1 = esl_zext<18,15>(tmp_1517_fu_35641_p3.read());
}

void ShuffleNetV2::thread_p_shl593_cast_fu_35704_p3() {
    p_shl593_cast_fu_35704_p3 = esl_concat<3,7>(tmp_1521_reg_48045.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl594_cast_fu_35711_p3() {
    p_shl594_cast_fu_35711_p3 = esl_concat<5,5>(tmp_1522_reg_48050.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl595_cast_fu_35991_p1() {
    p_shl595_cast_fu_35991_p1 = esl_sext<11,10>(tmp_1530_fu_35983_p3.read());
}

void ShuffleNetV2::thread_p_shl597_cast_fu_36042_p1() {
    p_shl597_cast_fu_36042_p1 = esl_zext<13,12>(tmp_1536_fu_36035_p3.read());
}

void ShuffleNetV2::thread_p_shl599_cast_fu_36641_p1() {
    p_shl599_cast_fu_36641_p1 = esl_zext<11,10>(tmp_1542_fu_36633_p3.read());
}

void ShuffleNetV2::thread_p_shl59_cast_fu_22769_p1() {
    p_shl59_cast_fu_22769_p1 = esl_zext<8,5>(p_shl59_fu_22761_p3.read());
}

void ShuffleNetV2::thread_p_shl59_fu_22761_p3() {
    p_shl59_fu_22761_p3 = esl_concat<2,3>(tmp_984_fu_22706_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl5_cast_fu_18974_p1() {
    p_shl5_cast_fu_18974_p1 = esl_zext<7,4>(p_shl5_fu_18966_p3.read());
}

void ShuffleNetV2::thread_p_shl5_fu_18966_p3() {
    p_shl5_fu_18966_p3 = esl_concat<2,2>(tmp_837_fu_18950_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl600_cast_fu_36653_p1() {
    p_shl600_cast_fu_36653_p1 = esl_zext<11,8>(tmp_1543_fu_36645_p3.read());
}

void ShuffleNetV2::thread_p_shl601_cast_fu_36402_p1() {
    p_shl601_cast_fu_36402_p1 = esl_zext<18,17>(tmp_1549_fu_36398_p1.read());
}

void ShuffleNetV2::thread_p_shl602_cast_fu_36417_p1() {
    p_shl602_cast_fu_36417_p1 = esl_zext<18,15>(tmp_1551_fu_36413_p1.read());
}

void ShuffleNetV2::thread_p_shl603_cast_fu_36473_p3() {
    p_shl603_cast_fu_36473_p3 = esl_concat<3,7>(tmp_1555_reg_48305.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl604_cast_fu_36480_p3() {
    p_shl604_cast_fu_36480_p3 = esl_concat<5,5>(tmp_1556_reg_48310.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl605_cast_fu_36764_p1() {
    p_shl605_cast_fu_36764_p1 = esl_zext<11,10>(tmp_1559_fu_36756_p3.read());
}

void ShuffleNetV2::thread_p_shl606_cast_fu_36776_p1() {
    p_shl606_cast_fu_36776_p1 = esl_zext<11,8>(tmp_1560_fu_36768_p3.read());
}

void ShuffleNetV2::thread_p_shl607_cast_fu_36820_p1() {
    p_shl607_cast_fu_36820_p1 = esl_zext<12,11>(tmp_1562_fu_36812_p3.read());
}

void ShuffleNetV2::thread_p_shl608_cast_fu_36832_p1() {
    p_shl608_cast_fu_36832_p1 = esl_zext<12,9>(tmp_1563_fu_36824_p3.read());
}

void ShuffleNetV2::thread_p_shl609_cast_fu_36704_p3() {
    p_shl609_cast_fu_36704_p3 = esl_concat<11,3>(tmp_1566_fu_36700_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl60_cast_fu_23318_p1() {
    p_shl60_cast_fu_23318_p1 = esl_zext<7,6>(p_shl60_fu_23310_p3.read());
}

void ShuffleNetV2::thread_p_shl60_fu_23310_p3() {
    p_shl60_fu_23310_p3 = esl_concat<1,5>(tmp_996_fu_23306_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl610_cast_fu_36720_p1() {
    p_shl610_cast_fu_36720_p1 = esl_sext<14,13>(tmp_1567_fu_36712_p3.read());
}

void ShuffleNetV2::thread_p_shl611_cast_fu_36875_p3() {
    p_shl611_cast_fu_36875_p3 = esl_concat<11,3>(tmp_1573_fu_36871_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl612_cast_fu_36883_p3() {
    p_shl612_cast_fu_36883_p3 = esl_concat<13,1>(tmp_1572_fu_36866_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl613_cast_fu_36906_p3() {
    p_shl613_cast_fu_36906_p3 = esl_concat<10,3>(tmp_1576_fu_36902_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl614_cast_fu_36914_p3() {
    p_shl614_cast_fu_36914_p3 = esl_concat<12,1>(tmp_1575_fu_36897_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl615_cast_fu_37164_p1() {
    p_shl615_cast_fu_37164_p1 = esl_zext<19,18>(tmp_1584_fu_37157_p3.read());
}

void ShuffleNetV2::thread_p_shl616_cast_fu_37175_p1() {
    p_shl616_cast_fu_37175_p1 = esl_zext<19,16>(tmp_1585_fu_37168_p3.read());
}

void ShuffleNetV2::thread_p_shl617_cast_fu_37231_p3() {
    p_shl617_cast_fu_37231_p3 = esl_concat<3,7>(tmp_1589_reg_48530.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl618_cast_fu_37238_p3() {
    p_shl618_cast_fu_37238_p3 = esl_concat<5,5>(tmp_1590_reg_48535.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl619_cast_fu_37518_p1() {
    p_shl619_cast_fu_37518_p1 = esl_sext<11,10>(tmp_1598_fu_37510_p3.read());
}

void ShuffleNetV2::thread_p_shl61_cast_fu_23330_p1() {
    p_shl61_cast_fu_23330_p1 = esl_zext<7,4>(p_shl61_fu_23322_p3.read());
}

void ShuffleNetV2::thread_p_shl61_fu_23322_p3() {
    p_shl61_fu_23322_p3 = esl_concat<1,3>(tmp_996_fu_23306_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl621_cast_fu_37577_p1() {
    p_shl621_cast_fu_37577_p1 = esl_zext<13,12>(tmp_1605_fu_37573_p1.read());
}

void ShuffleNetV2::thread_p_shl623_cast_fu_38172_p1() {
    p_shl623_cast_fu_38172_p1 = esl_zext<11,10>(tmp_1611_fu_38164_p3.read());
}

void ShuffleNetV2::thread_p_shl624_cast_fu_38184_p1() {
    p_shl624_cast_fu_38184_p1 = esl_zext<11,8>(tmp_1612_fu_38176_p3.read());
}

void ShuffleNetV2::thread_p_shl625_cast_fu_37937_p1() {
    p_shl625_cast_fu_37937_p1 = esl_zext<19,18>(tmp_1617_fu_37930_p3.read());
}

void ShuffleNetV2::thread_p_shl626_cast_fu_37948_p1() {
    p_shl626_cast_fu_37948_p1 = esl_zext<19,16>(tmp_1618_fu_37941_p3.read());
}

void ShuffleNetV2::thread_p_shl627_cast_fu_38004_p3() {
    p_shl627_cast_fu_38004_p3 = esl_concat<3,7>(tmp_1622_reg_48790.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl628_cast_fu_38011_p3() {
    p_shl628_cast_fu_38011_p3 = esl_concat<5,5>(tmp_1623_reg_48795.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl629_cast_fu_38295_p1() {
    p_shl629_cast_fu_38295_p1 = esl_zext<11,10>(tmp_1626_fu_38287_p3.read());
}

void ShuffleNetV2::thread_p_shl62_cast_fu_23410_p1() {
    p_shl62_cast_fu_23410_p1 = esl_zext<7,6>(p_shl62_fu_23402_p3.read());
}

void ShuffleNetV2::thread_p_shl62_fu_23402_p3() {
    p_shl62_fu_23402_p3 = esl_concat<1,5>(tmp_994_fu_23398_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl630_cast_fu_38307_p1() {
    p_shl630_cast_fu_38307_p1 = esl_zext<11,8>(tmp_1627_fu_38299_p3.read());
}

void ShuffleNetV2::thread_p_shl631_cast_fu_38351_p1() {
    p_shl631_cast_fu_38351_p1 = esl_zext<12,11>(tmp_1629_fu_38343_p3.read());
}

void ShuffleNetV2::thread_p_shl632_cast_fu_38363_p1() {
    p_shl632_cast_fu_38363_p1 = esl_zext<12,9>(tmp_1630_fu_38355_p3.read());
}

void ShuffleNetV2::thread_p_shl633_cast_fu_38235_p3() {
    p_shl633_cast_fu_38235_p3 = esl_concat<11,3>(tmp_1633_fu_38231_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl634_cast_fu_38251_p1() {
    p_shl634_cast_fu_38251_p1 = esl_sext<14,13>(tmp_1634_fu_38243_p3.read());
}

void ShuffleNetV2::thread_p_shl635_cast_fu_38406_p3() {
    p_shl635_cast_fu_38406_p3 = esl_concat<11,3>(tmp_1640_fu_38402_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl636_cast_fu_38414_p3() {
    p_shl636_cast_fu_38414_p3 = esl_concat<13,1>(tmp_1639_fu_38397_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl637_cast_fu_38437_p3() {
    p_shl637_cast_fu_38437_p3 = esl_concat<10,3>(tmp_1643_fu_38433_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl638_cast_fu_38445_p3() {
    p_shl638_cast_fu_38445_p3 = esl_concat<12,1>(tmp_1642_fu_38428_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl639_cast_fu_38695_p1() {
    p_shl639_cast_fu_38695_p1 = esl_zext<19,18>(tmp_1651_fu_38688_p3.read());
}

void ShuffleNetV2::thread_p_shl63_cast_fu_23422_p1() {
    p_shl63_cast_fu_23422_p1 = esl_zext<7,4>(p_shl63_fu_23414_p3.read());
}

void ShuffleNetV2::thread_p_shl63_fu_23414_p3() {
    p_shl63_fu_23414_p3 = esl_concat<1,3>(tmp_994_fu_23398_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl640_cast_fu_38706_p1() {
    p_shl640_cast_fu_38706_p1 = esl_zext<19,16>(tmp_1652_fu_38699_p3.read());
}

void ShuffleNetV2::thread_p_shl641_cast_fu_38762_p3() {
    p_shl641_cast_fu_38762_p3 = esl_concat<3,7>(tmp_1656_reg_49015.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl642_cast_fu_38769_p3() {
    p_shl642_cast_fu_38769_p3 = esl_concat<5,5>(tmp_1657_reg_49020.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl643_cast_fu_39049_p1() {
    p_shl643_cast_fu_39049_p1 = esl_sext<11,10>(tmp_1665_fu_39041_p3.read());
}

void ShuffleNetV2::thread_p_shl645_cast_fu_39100_p1() {
    p_shl645_cast_fu_39100_p1 = esl_zext<14,13>(tmp_1671_fu_39093_p3.read());
}

void ShuffleNetV2::thread_p_shl647_cast_fu_39695_p1() {
    p_shl647_cast_fu_39695_p1 = esl_zext<11,10>(tmp_1677_fu_39687_p3.read());
}

void ShuffleNetV2::thread_p_shl648_cast_fu_39707_p1() {
    p_shl648_cast_fu_39707_p1 = esl_zext<11,8>(tmp_1678_fu_39699_p3.read());
}

void ShuffleNetV2::thread_p_shl649_cast_fu_39460_p1() {
    p_shl649_cast_fu_39460_p1 = esl_zext<19,18>(tmp_1683_fu_39453_p3.read());
}

void ShuffleNetV2::thread_p_shl64_cast_fu_23121_p1() {
    p_shl64_cast_fu_23121_p1 = esl_zext<7,6>(p_shl64_fu_23113_p3.read());
}

void ShuffleNetV2::thread_p_shl64_fu_23113_p3() {
    p_shl64_fu_23113_p3 = esl_concat<1,5>(tmp_997_fu_23109_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl650_cast_fu_39471_p1() {
    p_shl650_cast_fu_39471_p1 = esl_zext<19,16>(tmp_1684_fu_39464_p3.read());
}

void ShuffleNetV2::thread_p_shl651_cast_fu_39527_p3() {
    p_shl651_cast_fu_39527_p3 = esl_concat<3,7>(tmp_1688_reg_49275.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl652_cast_fu_39534_p3() {
    p_shl652_cast_fu_39534_p3 = esl_concat<5,5>(tmp_1689_reg_49280.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl653_cast_fu_39818_p1() {
    p_shl653_cast_fu_39818_p1 = esl_zext<12,11>(tmp_1692_fu_39810_p3.read());
}

void ShuffleNetV2::thread_p_shl654_cast_fu_39830_p1() {
    p_shl654_cast_fu_39830_p1 = esl_zext<12,9>(tmp_1693_fu_39822_p3.read());
}

void ShuffleNetV2::thread_p_shl655_cast_fu_39758_p3() {
    p_shl655_cast_fu_39758_p3 = esl_concat<11,3>(tmp_1697_fu_39754_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl656_cast_fu_39774_p1() {
    p_shl656_cast_fu_39774_p1 = esl_sext<14,13>(tmp_1698_fu_39766_p3.read());
}

void ShuffleNetV2::thread_p_shl657_cast_fu_39910_p3() {
    p_shl657_cast_fu_39910_p3 = esl_concat<11,3>(tmp_1704_fu_39906_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl658_cast_fu_39918_p3() {
    p_shl658_cast_fu_39918_p3 = esl_concat<13,1>(tmp_1703_fu_39901_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl65_cast_fu_23133_p1() {
    p_shl65_cast_fu_23133_p1 = esl_zext<7,4>(p_shl65_fu_23125_p3.read());
}

void ShuffleNetV2::thread_p_shl65_fu_23125_p3() {
    p_shl65_fu_23125_p3 = esl_concat<1,3>(tmp_997_fu_23109_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl66_cast_fu_23758_p1() {
    p_shl66_cast_fu_23758_p1 = esl_zext<7,6>(p_shl66_fu_23750_p3.read());
}

void ShuffleNetV2::thread_p_shl66_fu_23750_p3() {
    p_shl66_fu_23750_p3 = esl_concat<1,5>(tmp_1013_fu_23746_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl67_cast_fu_23770_p1() {
    p_shl67_cast_fu_23770_p1 = esl_zext<7,4>(p_shl67_fu_23762_p3.read());
}

void ShuffleNetV2::thread_p_shl67_fu_23762_p3() {
    p_shl67_fu_23762_p3 = esl_concat<1,3>(tmp_1013_fu_23746_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl68_cast_fu_23499_p1() {
    p_shl68_cast_fu_23499_p1 = esl_zext<7,6>(p_shl68_fu_23491_p3.read());
}

void ShuffleNetV2::thread_p_shl68_fu_23491_p3() {
    p_shl68_fu_23491_p3 = esl_concat<2,4>(tmp_1014_fu_23487_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl69_cast_fu_23511_p1() {
    p_shl69_cast_fu_23511_p1 = esl_zext<7,4>(p_shl69_fu_23503_p3.read());
}

void ShuffleNetV2::thread_p_shl69_fu_23503_p3() {
    p_shl69_fu_23503_p3 = esl_concat<2,2>(tmp_1014_fu_23487_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl6_cast_fu_19001_p1() {
    p_shl6_cast_fu_19001_p1 = esl_zext<8,7>(p_shl6_fu_18993_p3.read());
}

void ShuffleNetV2::thread_p_shl6_fu_18993_p3() {
    p_shl6_fu_18993_p3 = esl_concat<2,5>(tmp_837_fu_18950_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl70_cast_fu_23538_p1() {
    p_shl70_cast_fu_23538_p1 = esl_zext<8,7>(p_shl70_fu_23530_p3.read());
}

void ShuffleNetV2::thread_p_shl70_fu_23530_p3() {
    p_shl70_fu_23530_p3 = esl_concat<2,5>(tmp_1014_fu_23487_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl71_cast_fu_23550_p1() {
    p_shl71_cast_fu_23550_p1 = esl_zext<8,5>(p_shl71_fu_23542_p3.read());
}

void ShuffleNetV2::thread_p_shl71_fu_23542_p3() {
    p_shl71_fu_23542_p3 = esl_concat<2,3>(tmp_1014_fu_23487_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl72_cast_fu_24180_p1() {
    p_shl72_cast_fu_24180_p1 = esl_zext<7,6>(p_shl72_fu_24172_p3.read());
}

void ShuffleNetV2::thread_p_shl72_fu_24172_p3() {
    p_shl72_fu_24172_p3 = esl_concat<1,5>(tmp_1034_fu_24168_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl73_cast_fu_24192_p1() {
    p_shl73_cast_fu_24192_p1 = esl_zext<7,4>(p_shl73_fu_24184_p3.read());
}

void ShuffleNetV2::thread_p_shl73_fu_24184_p3() {
    p_shl73_fu_24184_p3 = esl_concat<1,3>(tmp_1034_fu_24168_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl74_cast_fu_24536_p1() {
    p_shl74_cast_fu_24536_p1 = esl_zext<7,6>(p_shl74_fu_24528_p3.read());
}

void ShuffleNetV2::thread_p_shl74_fu_24528_p3() {
    p_shl74_fu_24528_p3 = esl_concat<1,5>(tmp_1047_fu_24524_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl75_cast_fu_24548_p1() {
    p_shl75_cast_fu_24548_p1 = esl_zext<7,4>(p_shl75_fu_24540_p3.read());
}

void ShuffleNetV2::thread_p_shl75_fu_24540_p3() {
    p_shl75_fu_24540_p3 = esl_concat<1,3>(tmp_1047_fu_24524_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl76_cast_fu_24269_p1() {
    p_shl76_cast_fu_24269_p1 = esl_zext<7,6>(p_shl76_fu_24261_p3.read());
}

void ShuffleNetV2::thread_p_shl76_fu_24261_p3() {
    p_shl76_fu_24261_p3 = esl_concat<2,4>(tmp_1048_fu_24257_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl77_cast_fu_24281_p1() {
    p_shl77_cast_fu_24281_p1 = esl_zext<7,4>(p_shl77_fu_24273_p3.read());
}

void ShuffleNetV2::thread_p_shl77_fu_24273_p3() {
    p_shl77_fu_24273_p3 = esl_concat<2,2>(tmp_1048_fu_24257_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl78_cast_fu_24308_p1() {
    p_shl78_cast_fu_24308_p1 = esl_zext<8,7>(p_shl78_fu_24300_p3.read());
}

void ShuffleNetV2::thread_p_shl78_fu_24300_p3() {
    p_shl78_fu_24300_p3 = esl_concat<2,5>(tmp_1048_fu_24257_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl79_cast_fu_24320_p1() {
    p_shl79_cast_fu_24320_p1 = esl_zext<8,5>(p_shl79_fu_24312_p3.read());
}

void ShuffleNetV2::thread_p_shl79_fu_24312_p3() {
    p_shl79_fu_24312_p3 = esl_concat<2,3>(tmp_1048_fu_24257_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl7_cast_fu_19013_p1() {
    p_shl7_cast_fu_19013_p1 = esl_zext<8,5>(p_shl7_fu_19005_p3.read());
}

void ShuffleNetV2::thread_p_shl7_fu_19005_p3() {
    p_shl7_fu_19005_p3 = esl_concat<2,3>(tmp_837_fu_18950_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl80_cast_fu_24877_p1() {
    p_shl80_cast_fu_24877_p1 = esl_zext<7,6>(p_shl80_fu_24869_p3.read());
}

void ShuffleNetV2::thread_p_shl80_fu_24869_p3() {
    p_shl80_fu_24869_p3 = esl_concat<1,5>(tmp_1062_fu_24865_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl81_cast_fu_24889_p1() {
    p_shl81_cast_fu_24889_p1 = esl_zext<7,4>(p_shl81_fu_24881_p3.read());
}

void ShuffleNetV2::thread_p_shl81_fu_24881_p3() {
    p_shl81_fu_24881_p3 = esl_concat<1,3>(tmp_1062_fu_24865_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl82_cast_fu_24969_p1() {
    p_shl82_cast_fu_24969_p1 = esl_zext<7,6>(p_shl82_fu_24961_p3.read());
}

void ShuffleNetV2::thread_p_shl82_fu_24961_p3() {
    p_shl82_fu_24961_p3 = esl_concat<1,5>(tmp_1060_fu_24957_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl83_cast_fu_24981_p1() {
    p_shl83_cast_fu_24981_p1 = esl_zext<7,4>(p_shl83_fu_24973_p3.read());
}

void ShuffleNetV2::thread_p_shl83_fu_24973_p3() {
    p_shl83_fu_24973_p3 = esl_concat<1,3>(tmp_1060_fu_24957_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl84_cast_fu_24684_p1() {
    p_shl84_cast_fu_24684_p1 = esl_zext<7,6>(p_shl84_fu_24676_p3.read());
}

void ShuffleNetV2::thread_p_shl84_fu_24676_p3() {
    p_shl84_fu_24676_p3 = esl_concat<1,5>(tmp_1063_fu_24672_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl85_cast_fu_24696_p1() {
    p_shl85_cast_fu_24696_p1 = esl_zext<7,4>(p_shl85_fu_24688_p3.read());
}

void ShuffleNetV2::thread_p_shl85_fu_24688_p3() {
    p_shl85_fu_24688_p3 = esl_concat<1,3>(tmp_1063_fu_24672_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl86_cast_fu_25317_p1() {
    p_shl86_cast_fu_25317_p1 = esl_zext<7,6>(p_shl86_fu_25309_p3.read());
}

void ShuffleNetV2::thread_p_shl86_fu_25309_p3() {
    p_shl86_fu_25309_p3 = esl_concat<1,5>(tmp_1079_fu_25305_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl87_cast_fu_25329_p1() {
    p_shl87_cast_fu_25329_p1 = esl_zext<7,4>(p_shl87_fu_25321_p3.read());
}

void ShuffleNetV2::thread_p_shl87_fu_25321_p3() {
    p_shl87_fu_25321_p3 = esl_concat<1,3>(tmp_1079_fu_25305_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl88_cast_fu_25058_p1() {
    p_shl88_cast_fu_25058_p1 = esl_zext<7,6>(p_shl88_fu_25050_p3.read());
}

void ShuffleNetV2::thread_p_shl88_fu_25050_p3() {
    p_shl88_fu_25050_p3 = esl_concat<2,4>(tmp_1080_fu_25046_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl89_cast_fu_25070_p1() {
    p_shl89_cast_fu_25070_p1 = esl_zext<7,4>(p_shl89_fu_25062_p3.read());
}

void ShuffleNetV2::thread_p_shl89_fu_25062_p3() {
    p_shl89_fu_25062_p3 = esl_concat<2,2>(tmp_1080_fu_25046_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl8_cast_fu_19562_p1() {
    p_shl8_cast_fu_19562_p1 = esl_zext<7,6>(p_shl8_fu_19554_p3.read());
}

void ShuffleNetV2::thread_p_shl8_fu_19554_p3() {
    p_shl8_fu_19554_p3 = esl_concat<1,5>(tmp_849_fu_19550_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl90_cast_fu_25097_p1() {
    p_shl90_cast_fu_25097_p1 = esl_zext<8,7>(p_shl90_fu_25089_p3.read());
}

void ShuffleNetV2::thread_p_shl90_fu_25089_p3() {
    p_shl90_fu_25089_p3 = esl_concat<2,5>(tmp_1080_fu_25046_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl91_cast_fu_25109_p1() {
    p_shl91_cast_fu_25109_p1 = esl_zext<8,5>(p_shl91_fu_25101_p3.read());
}

void ShuffleNetV2::thread_p_shl91_fu_25101_p3() {
    p_shl91_fu_25101_p3 = esl_concat<2,3>(tmp_1080_fu_25046_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl92_cast_fu_25739_p1() {
    p_shl92_cast_fu_25739_p1 = esl_zext<7,6>(p_shl92_fu_25731_p3.read());
}

void ShuffleNetV2::thread_p_shl92_fu_25731_p3() {
    p_shl92_fu_25731_p3 = esl_concat<1,5>(tmp_1100_fu_25727_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl93_cast_fu_25751_p1() {
    p_shl93_cast_fu_25751_p1 = esl_zext<7,4>(p_shl93_fu_25743_p3.read());
}

void ShuffleNetV2::thread_p_shl93_fu_25743_p3() {
    p_shl93_fu_25743_p3 = esl_concat<1,3>(tmp_1100_fu_25727_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl94_cast_fu_26087_p1() {
    p_shl94_cast_fu_26087_p1 = esl_zext<7,6>(p_shl94_fu_26079_p3.read());
}

void ShuffleNetV2::thread_p_shl94_fu_26079_p3() {
    p_shl94_fu_26079_p3 = esl_concat<1,5>(tmp_1113_fu_26075_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl95_cast_fu_26099_p1() {
    p_shl95_cast_fu_26099_p1 = esl_zext<7,4>(p_shl95_fu_26091_p3.read());
}

void ShuffleNetV2::thread_p_shl95_fu_26091_p3() {
    p_shl95_fu_26091_p3 = esl_concat<1,3>(tmp_1113_fu_26075_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl96_cast_fu_25828_p1() {
    p_shl96_cast_fu_25828_p1 = esl_zext<7,6>(p_shl96_fu_25820_p3.read());
}

void ShuffleNetV2::thread_p_shl96_fu_25820_p3() {
    p_shl96_fu_25820_p3 = esl_concat<2,4>(tmp_1114_fu_25816_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl97_cast_fu_25840_p1() {
    p_shl97_cast_fu_25840_p1 = esl_zext<7,4>(p_shl97_fu_25832_p3.read());
}

void ShuffleNetV2::thread_p_shl97_fu_25832_p3() {
    p_shl97_fu_25832_p3 = esl_concat<2,2>(tmp_1114_fu_25816_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl98_cast_fu_25867_p1() {
    p_shl98_cast_fu_25867_p1 = esl_zext<8,7>(p_shl98_fu_25859_p3.read());
}

void ShuffleNetV2::thread_p_shl98_fu_25859_p3() {
    p_shl98_fu_25859_p3 = esl_concat<2,5>(tmp_1114_fu_25816_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl99_cast_fu_25879_p1() {
    p_shl99_cast_fu_25879_p1 = esl_zext<8,5>(p_shl99_fu_25871_p3.read());
}

void ShuffleNetV2::thread_p_shl99_fu_25871_p3() {
    p_shl99_fu_25871_p3 = esl_concat<2,3>(tmp_1114_fu_25816_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl9_cast_fu_19574_p1() {
    p_shl9_cast_fu_19574_p1 = esl_zext<7,4>(p_shl9_fu_19566_p3.read());
}

void ShuffleNetV2::thread_p_shl9_fu_19566_p3() {
    p_shl9_fu_19566_p3 = esl_concat<1,3>(tmp_849_fu_19550_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl_cast_fu_18873_p1() {
    p_shl_cast_fu_18873_p1 = esl_zext<7,6>(p_shl_fu_18865_p3.read());
}

void ShuffleNetV2::thread_p_shl_fu_18865_p3() {
    p_shl_fu_18865_p3 = esl_concat<1,5>(tmp_829_fu_18861_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_10_fu_26727_p2() {
    shuffle_conv_1x1_V8_10_fu_26727_p2 = (!tmp_1352_cast_fu_26723_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1352_cast_fu_26723_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_11_fu_27493_p2() {
    shuffle_conv_1x1_V8_11_fu_27493_p2 = (!tmp_1391_cast_fu_27489_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1391_cast_fu_27489_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_12_fu_28274_p2() {
    shuffle_conv_1x1_V8_12_fu_28274_p2 = (!tmp_1429_cast_fu_28270_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1429_cast_fu_28270_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_13_fu_29040_p2() {
    shuffle_conv_1x1_V8_13_fu_29040_p2 = (!tmp_1468_cast_fu_29036_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1468_cast_fu_29036_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_14_fu_29825_p2() {
    shuffle_conv_1x1_V8_14_fu_29825_p2 = (!tmp_1506_cast_fu_29821_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1506_cast_fu_29821_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_15_fu_30599_p2() {
    shuffle_conv_1x1_V8_15_fu_30599_p2 = (!tmp_1547_cast_fu_30595_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1547_cast_fu_30595_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_16_fu_31384_p2() {
    shuffle_conv_1x1_V8_16_fu_31384_p2 = (!tmp_1586_cast_fu_31380_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1586_cast_fu_31380_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_17_fu_32162_p2() {
    shuffle_conv_1x1_V8_17_fu_32162_p2 = (!tmp_1627_cast_fu_32158_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1627_cast_fu_32158_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_18_fu_32951_p2() {
    shuffle_conv_1x1_V8_18_fu_32951_p2 = (!tmp_1664_cast_fu_32947_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1664_cast_fu_32947_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_19_fu_33498_p2() {
    shuffle_conv_1x1_V8_19_fu_33498_p2 = (!tmp_1686_cast_fu_33494_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1686_cast_fu_33494_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_1_fu_20650_p2() {
    shuffle_conv_1x1_V8_1_fu_20650_p2 = (!tmp_1057_cast_fu_20646_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1057_cast_fu_20646_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_20_fu_34267_p2() {
    shuffle_conv_1x1_V8_20_fu_34267_p2 = (!tmp_1719_cast_fu_34263_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1719_cast_fu_34263_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_21_fu_35036_p2() {
    shuffle_conv_1x1_V8_21_fu_35036_p2 = (!tmp_1758_cast_fu_35032_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1758_cast_fu_35032_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_22_fu_35671_p2() {
    shuffle_conv_1x1_V8_22_fu_35671_p2 = (!tmp_1785_cast_fu_35667_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1785_cast_fu_35667_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_23_fu_36440_p2() {
    shuffle_conv_1x1_V8_23_fu_36440_p2 = (!tmp_1823_cast_fu_36436_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1823_cast_fu_36436_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_24_fu_37198_p2() {
    shuffle_conv_1x1_V8_24_fu_37198_p2 = (!tmp_1861_cast_fu_37194_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1861_cast_fu_37194_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_25_fu_37971_p2() {
    shuffle_conv_1x1_V8_25_fu_37971_p2 = (!tmp_1898_cast_fu_37967_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1898_cast_fu_37967_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_26_fu_38729_p2() {
    shuffle_conv_1x1_V8_26_fu_38729_p2 = (!tmp_1936_cast_fu_38725_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1936_cast_fu_38725_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_27_fu_39494_p2() {
    shuffle_conv_1x1_V8_27_fu_39494_p2 = (!tmp_1972_cast_fu_39490_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1972_cast_fu_39490_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_2_fu_21297_p2() {
    shuffle_conv_1x1_V8_2_fu_21297_p2 = (!tmp_1085_cast_fu_21293_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1085_cast_fu_21293_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_3_fu_22078_p2() {
    shuffle_conv_1x1_V8_3_fu_22078_p2 = (!tmp_1122_cast_fu_22074_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1122_cast_fu_22074_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_4_fu_22844_p2() {
    shuffle_conv_1x1_V8_4_fu_22844_p2 = (!tmp_1161_cast_fu_22840_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1161_cast_fu_22840_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_5_fu_23625_p2() {
    shuffle_conv_1x1_V8_5_fu_23625_p2 = (!tmp_1198_cast_fu_23621_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1198_cast_fu_23621_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_6_fu_24403_p2() {
    shuffle_conv_1x1_V8_6_fu_24403_p2 = (!tmp_1239_cast_fu_24399_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1239_cast_fu_24399_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_7_fu_25184_p2() {
    shuffle_conv_1x1_V8_7_fu_25184_p2 = (!tmp_1276_cast_fu_25180_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1276_cast_fu_25180_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_8_fu_25954_p2() {
    shuffle_conv_1x1_V8_8_fu_25954_p2 = (!tmp_1315_cast_fu_25950_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1315_cast_fu_25950_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_9_fu_19088_p2() {
    shuffle_conv_1x1_V8_9_fu_19088_p2 = (!tmp_983_cast_fu_19084_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_983_cast_fu_19084_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_s_fu_19869_p2() {
    shuffle_conv_1x1_V8_s_fu_19869_p2 = (!tmp_1017_cast_fu_19865_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1017_cast_fu_19865_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_10_fu_33913_p2() {
    shuffle_conv_3x3_V6_10_fu_33913_p2 = (!tmp_1454_fu_33908_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1454_fu_33908_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_11_fu_34686_p2() {
    shuffle_conv_3x3_V6_11_fu_34686_p2 = (!tmp_1483_fu_34681_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1483_fu_34681_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_12_fu_36082_p2() {
    shuffle_conv_3x3_V6_12_fu_36082_p2 = (!tmp_1541_fu_36077_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1541_fu_36077_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_13_fu_37621_p2() {
    shuffle_conv_3x3_V6_13_fu_37621_p2 = (!tmp_1610_fu_37616_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1610_fu_37616_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_14_fu_39144_p2() {
    shuffle_conv_3x3_V6_14_fu_39144_p2 = (!tmp_1676_fu_39139_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1676_fu_39139_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_1_fu_27912_p2() {
    shuffle_conv_3x3_V6_1_fu_27912_p2 = (!tmp_1204_fu_27907_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1204_fu_27907_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_2_fu_29463_p2() {
    shuffle_conv_3x3_V6_2_fu_29463_p2 = (!tmp_1269_fu_29458_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1269_fu_29458_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_3_fu_31014_p2() {
    shuffle_conv_3x3_V6_3_fu_31014_p2 = (!tmp_1335_fu_31009_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1335_fu_31009_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_4_fu_32577_p2() {
    shuffle_conv_3x3_V6_4_fu_32577_p2 = (!tmp_1403_fu_32572_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1403_fu_32572_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_5_fu_19503_p2() {
    shuffle_conv_3x3_V6_5_fu_19503_p2 = (!tmp_862_fu_19498_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_862_fu_19498_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_6_fu_20284_p2() {
    shuffle_conv_3x3_V6_6_fu_20284_p2 = (!tmp_889_fu_20279_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_889_fu_20279_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_7_fu_21716_p2() {
    shuffle_conv_3x3_V6_7_fu_21716_p2 = (!tmp_945_fu_21711_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_945_fu_21711_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_8_fu_23259_p2() {
    shuffle_conv_3x3_V6_8_fu_23259_p2 = (!tmp_1009_fu_23254_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1009_fu_23254_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_9_fu_24818_p2() {
    shuffle_conv_3x3_V6_9_fu_24818_p2 = (!tmp_1075_fu_24813_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1075_fu_24813_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_s_fu_26365_p2() {
    shuffle_conv_3x3_V6_s_fu_26365_p2 = (!tmp_1139_fu_26360_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1139_fu_26360_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40515.read()));
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1719.read())) {
        shuffleunit2_2_outpu_address0 = shuffleunit2_2_outpu_reg_49415.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        shuffleunit2_2_outpu_address0 = grp_conv_last_fu_14455_input_V_address0.read();
    } else {
        shuffleunit2_2_outpu_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1719.read())) {
        shuffleunit2_2_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        shuffleunit2_2_outpu_ce0 = grp_conv_last_fu_14455_input_V_ce0.read();
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

void ShuffleNetV2::thread_sum101_cast_fu_36183_p1() {
    sum101_cast_fu_36183_p1 = esl_zext<32,12>(sum83_reg_48227.read());
}

void ShuffleNetV2::thread_sum102_cast_fu_36615_p1() {
    sum102_cast_fu_36615_p1 = esl_zext<32,12>(sum84_reg_48354.read());
}

void ShuffleNetV2::thread_sum104_cast_fu_37373_p1() {
    sum104_cast_fu_37373_p1 = esl_zext<32,12>(sum86_reg_48579.read());
}

void ShuffleNetV2::thread_sum106_cast_fu_37722_p1() {
    sum106_cast_fu_37722_p1 = esl_zext<32,12>(sum88_reg_48712.read());
}

void ShuffleNetV2::thread_sum107_cast_fu_38146_p1() {
    sum107_cast_fu_38146_p1 = esl_zext<32,12>(sum89_reg_48839.read());
}

void ShuffleNetV2::thread_sum109_cast_fu_38904_p1() {
    sum109_cast_fu_38904_p1 = esl_zext<32,12>(sum91_reg_49064.read());
}

void ShuffleNetV2::thread_sum10_fu_19258_p2() {
    sum10_fu_19258_p2 = (!i37_cast_reg_42835.read().is_01() || !tmp2_fu_19252_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i37_cast_reg_42835.read()) + sc_biguint<9>(tmp2_fu_19252_p2.read()));
}

void ShuffleNetV2::thread_sum111_cast_fu_39245_p1() {
    sum111_cast_fu_39245_p1 = esl_zext<32,12>(sum93_reg_49197.read());
}

void ShuffleNetV2::thread_sum112_cast_fu_39669_p1() {
    sum112_cast_fu_39669_p1 = esl_zext<32,12>(sum94_reg_49324.read());
}

void ShuffleNetV2::thread_sum11_cast_cast_fu_16822_p1() {
    sum11_cast_cast_fu_16822_p1 = esl_zext<10,7>(sum1_fu_16816_p2.read());
}

void ShuffleNetV2::thread_sum11_fu_19033_p2() {
    sum11_fu_19033_p2 = (!tmp1_fu_19027_p2.read().is_01() || !co57_cast_reg_42750.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp1_fu_19027_p2.read()) + sc_biguint<9>(co57_cast_reg_42750.read()));
}

void ShuffleNetV2::thread_sum12_fu_19599_p2() {
    sum12_fu_19599_p2 = (!i39_cast609_cast_reg_42968.read().is_01() || !tmp4_fu_19593_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i39_cast609_cast_reg_42968.read()) + sc_biguint<8>(tmp4_fu_19593_p2.read()));
}

void ShuffleNetV2::thread_sum13_cast_cast_fu_17628_p1() {
    sum13_cast_cast_fu_17628_p1 = esl_zext<10,7>(sum3_fu_17622_p2.read());
}

void ShuffleNetV2::thread_sum13_fu_19429_p2() {
    sum13_fu_19429_p2 = (!tmp3_fu_19423_p2.read().is_01() || !co60_cast_reg_42877.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp3_fu_19423_p2.read()) + sc_biguint<8>(co60_cast_reg_42877.read()));
}

void ShuffleNetV2::thread_sum14_fu_20039_p2() {
    sum14_fu_20039_p2 = (!i43_cast596_cast_reg_43095.read().is_01() || !tmp6_fu_20033_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i43_cast596_cast_reg_43095.read()) + sc_biguint<8>(tmp6_fu_20033_p2.read()));
}

void ShuffleNetV2::thread_sum15_cast1_fu_18426_p1() {
    sum15_cast1_fu_18426_p1 = esl_sext<7,6>(sum8_fu_18418_p3.read());
}

void ShuffleNetV2::thread_sum15_cast_cast_fu_18430_p1() {
    sum15_cast_cast_fu_18430_p1 = esl_zext<10,7>(sum15_cast1_fu_18426_p1.read());
}

void ShuffleNetV2::thread_sum15_fu_19814_p2() {
    sum15_fu_19814_p2 = (!tmp5_fu_19808_p2.read().is_01() || !co62_cast_reg_43010.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp5_fu_19808_p2.read()) + sc_biguint<9>(co62_cast_reg_43010.read()));
}

void ShuffleNetV2::thread_sum16_fu_20380_p2() {
    sum16_fu_20380_p2 = (!i47_cast_reg_43228.read().is_01() || !tmp8_fu_20374_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i47_cast_reg_43228.read()) + sc_biguint<10>(tmp8_fu_20374_p2.read()));
}

void ShuffleNetV2::thread_sum17_cast_cast_fu_19449_p1() {
    sum17_cast_cast_fu_19449_p1 = esl_zext<11,8>(sum13_reg_42945.read());
}

void ShuffleNetV2::thread_sum17_fu_20214_p2() {
    sum17_fu_20214_p2 = (!tmp7_fu_20208_p2.read().is_01() || !co64_cast_reg_43137.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp7_fu_20208_p2.read()) + sc_biguint<8>(co64_cast_reg_43137.read()));
}

void ShuffleNetV2::thread_sum18_fu_20820_p2() {
    sum18_fu_20820_p2 = (!i51_cast_reg_43355.read().is_01() || !tmp10_fu_20814_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i51_cast_reg_43355.read()) + sc_biguint<10>(tmp10_fu_20814_p2.read()));
}

void ShuffleNetV2::thread_sum19_cast_cast_fu_20234_p1() {
    sum19_cast_cast_fu_20234_p1 = esl_zext<11,8>(sum17_reg_43205.read());
}

void ShuffleNetV2::thread_sum19_fu_20595_p2() {
    sum19_fu_20595_p2 = (!tmp9_cast_fu_20591_p1.read().is_01() || !co66_cast_reg_43270.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp9_cast_fu_20591_p1.read()) + sc_biguint<10>(co66_cast_reg_43270.read()));
}

void ShuffleNetV2::thread_sum1_fu_16816_p2() {
    sum1_fu_16816_p2 = (!co25_cast_fu_16774_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co25_cast_fu_16774_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_sum20_fu_21467_p2() {
    sum20_fu_21467_p2 = (!i56_cast_reg_43536.read().is_01() || !tmp12_fu_21461_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i56_cast_reg_43536.read()) + sc_biguint<10>(tmp12_fu_21461_p2.read()));
}

void ShuffleNetV2::thread_sum21_cast_cast_fu_21662_p1() {
    sum21_cast_cast_fu_21662_p1 = esl_zext<12,9>(sum21_reg_43646.read());
}

void ShuffleNetV2::thread_sum21_fu_21642_p2() {
    sum21_fu_21642_p2 = (!tmp13_cast_fu_21638_p1.read().is_01() || !co72_cast_reg_43578.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp13_cast_fu_21638_p1.read()) + sc_biguint<9>(co72_cast_reg_43578.read()));
}

void ShuffleNetV2::thread_sum22_fu_21242_p2() {
    sum22_fu_21242_p2 = (!tmp11_fu_21236_p2.read().is_01() || !co69_cast_reg_43451.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp11_fu_21236_p2.read()) + sc_biguint<10>(co69_cast_reg_43451.read()));
}

void ShuffleNetV2::thread_sum23_cast_cast_fu_23205_p1() {
    sum23_cast_cast_fu_23205_p1 = esl_zext<12,9>(sum23_reg_44131.read());
}

void ShuffleNetV2::thread_sum23_fu_23185_p2() {
    sum23_fu_23185_p2 = (!tmp19_fu_23179_p2.read().is_01() || !co82_cast_reg_44063.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp19_fu_23179_p2.read()) + sc_biguint<9>(co82_cast_reg_44063.read()));
}

void ShuffleNetV2::thread_sum24_fu_21812_p2() {
    sum24_fu_21812_p2 = (!i59_cast_reg_43669.read().is_01() || !tmp14_fu_21806_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i59_cast_reg_43669.read()) + sc_biguint<10>(tmp14_fu_21806_p2.read()));
}

void ShuffleNetV2::thread_sum25_cast_cast_fu_24768_p1() {
    sum25_cast_cast_fu_24768_p1 = esl_zext<12,9>(sum25_reg_44616.read());
}

void ShuffleNetV2::thread_sum25_fu_24748_p2() {
    sum25_fu_24748_p2 = (!tmp25_fu_24742_p2.read().is_01() || !co92_cast_reg_44548.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp25_fu_24742_p2.read()) + sc_biguint<9>(co92_cast_reg_44548.read()));
}

void ShuffleNetV2::thread_sum26_fu_22248_p2() {
    sum26_fu_22248_p2 = (!i63_cast_reg_43796.read().is_01() || !tmp16_fu_22242_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i63_cast_reg_43796.read()) + sc_biguint<10>(tmp16_fu_22242_p2.read()));
}

void ShuffleNetV2::thread_sum27_cast_cast_fu_26315_p1() {
    sum27_cast_cast_fu_26315_p1 = esl_zext<12,9>(sum27_reg_45101.read());
}

void ShuffleNetV2::thread_sum27_fu_26295_p2() {
    sum27_fu_26295_p2 = (!tmp31_fu_26289_p2.read().is_01() || !co102_cast_reg_45033.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp31_fu_26289_p2.read()) + sc_biguint<9>(co102_cast_reg_45033.read()));
}

void ShuffleNetV2::thread_sum28_fu_22023_p2() {
    sum28_fu_22023_p2 = (!tmp15_fu_22017_p2.read().is_01() || !co74_cast_reg_43711.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp15_fu_22017_p2.read()) + sc_biguint<10>(co74_cast_reg_43711.read()));
}

void ShuffleNetV2::thread_sum29_cast1_fu_27854_p1() {
    sum29_cast1_fu_27854_p1 = esl_sext<9,8>(sum29_reg_45586.read());
}

void ShuffleNetV2::thread_sum29_cast_cast_fu_27857_p1() {
    sum29_cast_cast_fu_27857_p1 = esl_zext<12,9>(sum29_cast1_fu_27854_p1.read());
}

void ShuffleNetV2::thread_sum29_fu_27834_p2() {
    sum29_fu_27834_p2 = (!co112_cast403_cast_reg_45518.read().is_01() || !tmp37_fu_27828_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co112_cast403_cast_reg_45518.read()) + sc_biguint<8>(tmp37_fu_27828_p2.read()));
}

void ShuffleNetV2::thread_sum2_fu_17462_p2() {
    sum2_fu_17462_p2 = (!co38_cast_fu_17446_p1.read().is_01() || !ap_const_lv8_78.is_01())? sc_lv<8>(): (sc_biguint<8>(co38_cast_fu_17446_p1.read()) + sc_biguint<8>(ap_const_lv8_78));
}

void ShuffleNetV2::thread_sum30_fu_23014_p2() {
    sum30_fu_23014_p2 = (!i68_cast_reg_44021.read().is_01() || !tmp18_fu_23008_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i68_cast_reg_44021.read()) + sc_biguint<10>(tmp18_fu_23008_p2.read()));
}

void ShuffleNetV2::thread_sum31_cast1_fu_29401_p1() {
    sum31_cast1_fu_29401_p1 = esl_sext<9,8>(sum31_reg_46071.read());
}

void ShuffleNetV2::thread_sum31_cast_cast_fu_29404_p1() {
    sum31_cast_cast_fu_29404_p1 = esl_zext<12,9>(sum31_cast1_fu_29401_p1.read());
}

void ShuffleNetV2::thread_sum31_fu_29381_p2() {
    sum31_fu_29381_p2 = (!co122_cast365_cast_reg_46003.read().is_01() || !tmp43_fu_29375_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co122_cast365_cast_reg_46003.read()) + sc_biguint<8>(tmp43_fu_29375_p2.read()));
}

void ShuffleNetV2::thread_sum32_fu_22789_p2() {
    sum32_fu_22789_p2 = (!tmp17_fu_22783_p2.read().is_01() || !co79_cast_reg_43936.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp17_fu_22783_p2.read()) + sc_biguint<10>(co79_cast_reg_43936.read()));
}

void ShuffleNetV2::thread_sum33_cast_cast_fu_30960_p1() {
    sum33_cast_cast_fu_30960_p1 = esl_zext<13,10>(sum33_reg_46556.read());
}

void ShuffleNetV2::thread_sum33_fu_30940_p2() {
    sum33_fu_30940_p2 = (!tmp49_fu_30934_p2.read().is_01() || !co132_cast_reg_46488.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp49_fu_30934_p2.read()) + sc_biguint<10>(co132_cast_reg_46488.read()));
}

void ShuffleNetV2::thread_sum34_fu_23355_p2() {
    sum34_fu_23355_p2 = (!i71_cast511_cast_reg_44154.read().is_01() || !tmp20_fu_23349_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i71_cast511_cast_reg_44154.read()) + sc_biguint<9>(tmp20_fu_23349_p2.read()));
}

void ShuffleNetV2::thread_sum35_cast_cast_fu_32527_p1() {
    sum35_cast_cast_fu_32527_p1 = esl_zext<13,10>(sum35_reg_47041.read());
}

void ShuffleNetV2::thread_sum35_fu_32507_p2() {
    sum35_fu_32507_p2 = (!tmp55_fu_32501_p2.read().is_01() || !co142_cast_reg_46973.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp55_fu_32501_p2.read()) + sc_biguint<10>(co142_cast_reg_46973.read()));
}

void ShuffleNetV2::thread_sum36_fu_23795_p2() {
    sum36_fu_23795_p2 = (!i75_cast498_cast_reg_44281.read().is_01() || !tmp22_fu_23789_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i75_cast498_cast_reg_44281.read()) + sc_biguint<9>(tmp22_fu_23789_p2.read()));
}

void ShuffleNetV2::thread_sum37_cast_cast_fu_33863_p1() {
    sum37_cast_cast_fu_33863_p1 = esl_zext<13,10>(sum37_reg_47472.read());
}

void ShuffleNetV2::thread_sum37_fu_33843_p2() {
    sum37_fu_33843_p2 = (!tmp61_fu_33837_p2.read().is_01() || !co150_cast_reg_47404.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp61_fu_33837_p2.read()) + sc_biguint<10>(co150_cast_reg_47404.read()));
}

void ShuffleNetV2::thread_sum38_fu_23570_p2() {
    sum38_fu_23570_p2 = (!tmp21_fu_23564_p2.read().is_01() || !co84_cast_reg_44196.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp21_fu_23564_p2.read()) + sc_biguint<10>(co84_cast_reg_44196.read()));
}

void ShuffleNetV2::thread_sum39_cast_cast_fu_34636_p1() {
    sum39_cast_cast_fu_34636_p1 = esl_zext<13,10>(sum39_reg_47732.read());
}

void ShuffleNetV2::thread_sum39_fu_34616_p2() {
    sum39_fu_34616_p2 = (!tmp65_fu_34610_p2.read().is_01() || !co154_cast_reg_47664.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp65_fu_34610_p2.read()) + sc_biguint<10>(co154_cast_reg_47664.read()));
}

void ShuffleNetV2::thread_sum3_fu_17622_p2() {
    sum3_fu_17622_p2 = (!co41_cast_fu_17580_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co41_cast_fu_17580_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_sum40_cast_fu_19263_p1() {
    sum40_cast_fu_19263_p1 = esl_zext<32,9>(sum10_reg_42866.read());
}

void ShuffleNetV2::thread_sum40_fu_24573_p2() {
    sum40_fu_24573_p2 = (!i80_cast483_cast_reg_44506.read().is_01() || !tmp24_fu_24567_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i80_cast483_cast_reg_44506.read()) + sc_biguint<9>(tmp24_fu_24567_p2.read()));
}

void ShuffleNetV2::thread_sum41_cast_cast_fu_36032_p1() {
    sum41_cast_cast_fu_36032_p1 = esl_zext<13,10>(sum41_reg_48173.read());
}

void ShuffleNetV2::thread_sum41_fu_36012_p2() {
    sum41_fu_36012_p2 = (!tmp71_fu_36006_p2.read().is_01() || !co162_cast_reg_48105.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp71_fu_36006_p2.read()) + sc_biguint<10>(co162_cast_reg_48105.read()));
}

void ShuffleNetV2::thread_sum42_fu_24340_p2() {
    sum42_fu_24340_p2 = (!co89_cast492_cast_reg_44421.read().is_01() || !tmp23_fu_24334_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co89_cast492_cast_reg_44421.read()) + sc_biguint<9>(tmp23_fu_24334_p2.read()));
}

void ShuffleNetV2::thread_sum43_cast1_fu_37559_p1() {
    sum43_cast1_fu_37559_p1 = esl_sext<10,9>(sum43_reg_48658.read());
}

void ShuffleNetV2::thread_sum43_cast_cast_fu_37562_p1() {
    sum43_cast_cast_fu_37562_p1 = esl_zext<13,10>(sum43_cast1_fu_37559_p1.read());
}

void ShuffleNetV2::thread_sum43_fu_37539_p2() {
    sum43_fu_37539_p2 = (!co172_cast154_cast_reg_48590.read().is_01() || !tmp77_fu_37533_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co172_cast154_cast_reg_48590.read()) + sc_biguint<9>(tmp77_fu_37533_p2.read()));
}

void ShuffleNetV2::thread_sum44_cast1_fu_19604_p1() {
    sum44_cast1_fu_19604_p1 = esl_sext<9,8>(sum12_reg_42999.read());
}

void ShuffleNetV2::thread_sum44_cast_fu_19607_p1() {
    sum44_cast_fu_19607_p1 = esl_zext<32,9>(sum44_cast1_fu_19604_p1.read());
}

void ShuffleNetV2::thread_sum44_fu_24914_p2() {
    sum44_fu_24914_p2 = (!i83_cast473_cast_reg_44639.read().is_01() || !tmp26_fu_24908_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i83_cast473_cast_reg_44639.read()) + sc_biguint<8>(tmp26_fu_24908_p2.read()));
}

void ShuffleNetV2::thread_sum45_cast_cast_fu_39090_p1() {
    sum45_cast_cast_fu_39090_p1 = esl_zext<14,11>(sum45_reg_49143.read());
}

void ShuffleNetV2::thread_sum45_fu_39070_p2() {
    sum45_fu_39070_p2 = (!tmp83_fu_39064_p2.read().is_01() || !co182_cast_reg_49075.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp83_fu_39064_p2.read()) + sc_biguint<11>(co182_cast_reg_49075.read()));
}

void ShuffleNetV2::thread_sum46_cast1_fu_20044_p1() {
    sum46_cast1_fu_20044_p1 = esl_sext<9,8>(sum14_reg_43126.read());
}

void ShuffleNetV2::thread_sum46_cast_fu_20047_p1() {
    sum46_cast_fu_20047_p1 = esl_zext<32,9>(sum46_cast1_fu_20044_p1.read());
}

void ShuffleNetV2::thread_sum46_fu_25358_p2() {
    sum46_fu_25358_p2 = (!i87_cast_reg_44766.read().is_01() || !tmp28_cast_fu_25354_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i87_cast_reg_44766.read()) + sc_biguint<11>(tmp28_cast_fu_25354_p1.read()));
}

void ShuffleNetV2::thread_sum47_fu_25129_p2() {
    sum47_fu_25129_p2 = (!tmp27_fu_25123_p2.read().is_01() || !co94_cast_reg_44681.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp27_fu_25123_p2.read()) + sc_biguint<11>(co94_cast_reg_44681.read()));
}

void ShuffleNetV2::thread_sum48_cast_fu_20385_p1() {
    sum48_cast_fu_20385_p1 = esl_zext<32,10>(sum16_reg_43259.read());
}

void ShuffleNetV2::thread_sum48_fu_26124_p2() {
    sum48_fu_26124_p2 = (!i92_cast_reg_44991.read().is_01() || !tmp30_fu_26118_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i92_cast_reg_44991.read()) + sc_biguint<11>(tmp30_fu_26118_p2.read()));
}

void ShuffleNetV2::thread_sum49_cast_fu_20825_p1() {
    sum49_cast_fu_20825_p1 = esl_zext<32,10>(sum18_reg_43386.read());
}

void ShuffleNetV2::thread_sum49_fu_25899_p2() {
    sum49_fu_25899_p2 = (!tmp29_fu_25893_p2.read().is_01() || !co99_cast_reg_44906.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp29_fu_25893_p2.read()) + sc_biguint<11>(co99_cast_reg_44906.read()));
}

void ShuffleNetV2::thread_sum4_fu_17794_p2() {
    sum4_fu_17794_p2 = (!co44_cast_fu_17778_p1.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<8>(): (sc_biguint<8>(co44_cast_fu_17778_p1.read()) + sc_bigint<8>(ap_const_lv8_90));
}

void ShuffleNetV2::thread_sum50_fu_26461_p2() {
    sum50_fu_26461_p2 = (!i95_cast_reg_45124.read().is_01() || !tmp32_fu_26455_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i95_cast_reg_45124.read()) + sc_biguint<11>(tmp32_fu_26455_p2.read()));
}

void ShuffleNetV2::thread_sum51_cast_fu_21472_p1() {
    sum51_cast_fu_21472_p1 = esl_zext<32,10>(sum20_reg_43567.read());
}

void ShuffleNetV2::thread_sum51_fu_26897_p2() {
    sum51_fu_26897_p2 = (!i99_cast_reg_45251.read().is_01() || !tmp34_fu_26891_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i99_cast_reg_45251.read()) + sc_biguint<11>(tmp34_fu_26891_p2.read()));
}

void ShuffleNetV2::thread_sum52_fu_26672_p2() {
    sum52_fu_26672_p2 = (!tmp33_fu_26666_p2.read().is_01() || !co104_cast_reg_45166.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp33_fu_26666_p2.read()) + sc_biguint<11>(co104_cast_reg_45166.read()));
}

void ShuffleNetV2::thread_sum53_cast_fu_21817_p1() {
    sum53_cast_fu_21817_p1 = esl_zext<32,10>(sum24_reg_43700.read());
}

void ShuffleNetV2::thread_sum53_fu_27663_p2() {
    sum53_fu_27663_p2 = (!i104_cast_reg_45476.read().is_01() || !tmp36_fu_27657_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i104_cast_reg_45476.read()) + sc_biguint<11>(tmp36_fu_27657_p2.read()));
}

void ShuffleNetV2::thread_sum54_cast_fu_22253_p1() {
    sum54_cast_fu_22253_p1 = esl_zext<32,10>(sum26_reg_43827.read());
}

void ShuffleNetV2::thread_sum54_fu_27438_p2() {
    sum54_fu_27438_p2 = (!tmp35_fu_27432_p2.read().is_01() || !co109_cast_reg_45391.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp35_fu_27432_p2.read()) + sc_biguint<11>(co109_cast_reg_45391.read()));
}

void ShuffleNetV2::thread_sum55_fu_28008_p2() {
    sum55_fu_28008_p2 = (!i107_cast_reg_45609.read().is_01() || !tmp38_fu_28002_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i107_cast_reg_45609.read()) + sc_biguint<11>(tmp38_fu_28002_p2.read()));
}

void ShuffleNetV2::thread_sum56_cast_fu_23019_p1() {
    sum56_cast_fu_23019_p1 = esl_zext<32,10>(sum30_reg_44052.read());
}

void ShuffleNetV2::thread_sum56_fu_28444_p2() {
    sum56_fu_28444_p2 = (!i111_cast_reg_45736.read().is_01() || !tmp40_fu_28438_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i111_cast_reg_45736.read()) + sc_biguint<11>(tmp40_fu_28438_p2.read()));
}

void ShuffleNetV2::thread_sum57_fu_28219_p2() {
    sum57_fu_28219_p2 = (!tmp39_fu_28213_p2.read().is_01() || !co114_cast_reg_45651.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp39_fu_28213_p2.read()) + sc_biguint<11>(co114_cast_reg_45651.read()));
}

void ShuffleNetV2::thread_sum58_cast1_fu_23360_p1() {
    sum58_cast1_fu_23360_p1 = esl_sext<10,9>(sum34_reg_44185.read());
}

void ShuffleNetV2::thread_sum58_cast_fu_23363_p1() {
    sum58_cast_fu_23363_p1 = esl_zext<32,10>(sum58_cast1_fu_23360_p1.read());
}

void ShuffleNetV2::thread_sum58_fu_29210_p2() {
    sum58_fu_29210_p2 = (!i116_cast_reg_45961.read().is_01() || !tmp42_fu_29204_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i116_cast_reg_45961.read()) + sc_biguint<11>(tmp42_fu_29204_p2.read()));
}

void ShuffleNetV2::thread_sum59_cast1_fu_23800_p1() {
    sum59_cast1_fu_23800_p1 = esl_sext<10,9>(sum36_reg_44312.read());
}

void ShuffleNetV2::thread_sum59_cast_fu_23803_p1() {
    sum59_cast_fu_23803_p1 = esl_zext<32,10>(sum59_cast1_fu_23800_p1.read());
}

void ShuffleNetV2::thread_sum59_fu_28985_p2() {
    sum59_fu_28985_p2 = (!tmp41_fu_28979_p2.read().is_01() || !co119_cast_reg_45876.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp41_fu_28979_p2.read()) + sc_biguint<11>(co119_cast_reg_45876.read()));
}

void ShuffleNetV2::thread_sum5_cast_cast_fu_16141_p1() {
    sum5_cast_cast_fu_16141_p1 = esl_zext<9,6>(sum5_fu_16135_p2.read());
}

void ShuffleNetV2::thread_sum5_fu_16135_p2() {
    sum5_fu_16135_p2 = (!co12_cast_fu_16119_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co12_cast_fu_16119_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_sum60_fu_29559_p2() {
    sum60_fu_29559_p2 = (!i119_cast_reg_46094.read().is_01() || !tmp44_fu_29553_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i119_cast_reg_46094.read()) + sc_biguint<11>(tmp44_fu_29553_p2.read()));
}

void ShuffleNetV2::thread_sum61_cast1_fu_24578_p1() {
    sum61_cast1_fu_24578_p1 = esl_sext<10,9>(sum40_reg_44537.read());
}

void ShuffleNetV2::thread_sum61_cast_fu_24581_p1() {
    sum61_cast_fu_24581_p1 = esl_zext<32,10>(sum61_cast1_fu_24578_p1.read());
}

void ShuffleNetV2::thread_sum61_fu_29995_p2() {
    sum61_fu_29995_p2 = (!i123_cast_reg_46221.read().is_01() || !tmp46_fu_29989_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i123_cast_reg_46221.read()) + sc_biguint<11>(tmp46_fu_29989_p2.read()));
}

void ShuffleNetV2::thread_sum62_fu_29770_p2() {
    sum62_fu_29770_p2 = (!tmp45_fu_29764_p2.read().is_01() || !co124_cast_reg_46136.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp45_fu_29764_p2.read()) + sc_biguint<11>(co124_cast_reg_46136.read()));
}

void ShuffleNetV2::thread_sum63_cast1_fu_24919_p1() {
    sum63_cast1_fu_24919_p1 = esl_sext<10,8>(sum44_reg_44670.read());
}

void ShuffleNetV2::thread_sum63_cast_fu_24922_p1() {
    sum63_cast_fu_24922_p1 = esl_zext<32,10>(sum63_cast1_fu_24919_p1.read());
}

void ShuffleNetV2::thread_sum63_fu_30769_p2() {
    sum63_fu_30769_p2 = (!i128_cast_reg_46446.read().is_01() || !tmp48_fu_30763_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i128_cast_reg_46446.read()) + sc_biguint<11>(tmp48_fu_30763_p2.read()));
}

void ShuffleNetV2::thread_sum64_cast_fu_25363_p1() {
    sum64_cast_fu_25363_p1 = esl_zext<32,11>(sum46_reg_44797.read());
}

void ShuffleNetV2::thread_sum64_fu_30536_p2() {
    sum64_fu_30536_p2 = (!co129_cast340_cast_reg_46361.read().is_01() || !tmp47_fu_30530_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co129_cast340_cast_reg_46361.read()) + sc_biguint<10>(tmp47_fu_30530_p2.read()));
}

void ShuffleNetV2::thread_sum65_fu_31110_p2() {
    sum65_fu_31110_p2 = (!i131_cast_reg_46579.read().is_01() || !tmp50_fu_31104_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i131_cast_reg_46579.read()) + sc_biguint<11>(tmp50_fu_31104_p2.read()));
}

void ShuffleNetV2::thread_sum66_cast_fu_26129_p1() {
    sum66_cast_fu_26129_p1 = esl_zext<32,11>(sum48_reg_45022.read());
}

void ShuffleNetV2::thread_sum66_fu_31554_p2() {
    sum66_fu_31554_p2 = (!i135_cast308_cast_reg_46706.read().is_01() || !tmp52_fu_31548_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i135_cast308_cast_reg_46706.read()) + sc_biguint<10>(tmp52_fu_31548_p2.read()));
}

void ShuffleNetV2::thread_sum67_fu_31321_p2() {
    sum67_fu_31321_p2 = (!co134_cast317_cast_reg_46621.read().is_01() || !tmp51_fu_31315_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co134_cast317_cast_reg_46621.read()) + sc_biguint<10>(tmp51_fu_31315_p2.read()));
}

void ShuffleNetV2::thread_sum68_cast_fu_26466_p1() {
    sum68_cast_fu_26466_p1 = esl_zext<32,11>(sum50_reg_45155.read());
}

void ShuffleNetV2::thread_sum68_fu_32332_p2() {
    sum68_fu_32332_p2 = (!i140_cast293_cast_reg_46931.read().is_01() || !tmp54_fu_32326_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i140_cast293_cast_reg_46931.read()) + sc_biguint<10>(tmp54_fu_32326_p2.read()));
}

void ShuffleNetV2::thread_sum69_cast_fu_26902_p1() {
    sum69_cast_fu_26902_p1 = esl_zext<32,11>(sum51_reg_45282.read());
}

void ShuffleNetV2::thread_sum69_fu_32099_p2() {
    sum69_fu_32099_p2 = (!co139_cast302_cast_reg_46846.read().is_01() || !tmp53_fu_32093_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co139_cast302_cast_reg_46846.read()) + sc_biguint<9>(tmp53_fu_32093_p2.read()));
}

void ShuffleNetV2::thread_sum6_fu_15975_p2() {
    sum6_fu_15975_p2 = (!co9_cast_fu_15959_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co9_cast_fu_15959_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_sum70_fu_32673_p2() {
    sum70_fu_32673_p2 = (!i143_cast283_cast_reg_47064.read().is_01() || !tmp56_fu_32667_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i143_cast283_cast_reg_47064.read()) + sc_biguint<10>(tmp56_fu_32667_p2.read()));
}

void ShuffleNetV2::thread_sum71_cast_fu_27668_p1() {
    sum71_cast_fu_27668_p1 = esl_zext<32,11>(sum53_reg_45507.read());
}

void ShuffleNetV2::thread_sum71_fu_33121_p2() {
    sum71_fu_33121_p2 = (!i147_cast270_cast_reg_47191.read().is_01() || !tmp58_fu_33115_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i147_cast270_cast_reg_47191.read()) + sc_biguint<10>(tmp58_fu_33115_p2.read()));
}

void ShuffleNetV2::thread_sum72_fu_32896_p2() {
    sum72_fu_32896_p2 = (!tmp57_cast_fu_32892_p1.read().is_01() || !co144_cast_reg_47106.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp57_cast_fu_32892_p1.read()) + sc_biguint<12>(co144_cast_reg_47106.read()));
}

void ShuffleNetV2::thread_sum73_cast_fu_28013_p1() {
    sum73_cast_fu_28013_p1 = esl_zext<32,11>(sum55_reg_45640.read());
}

void ShuffleNetV2::thread_sum73_fu_33668_p2() {
    sum73_fu_33668_p2 = (!i152_cast256_cast_reg_47362.read().is_01() || !tmp60_fu_33662_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i152_cast256_cast_reg_47362.read()) + sc_biguint<10>(tmp60_fu_33662_p2.read()));
}

void ShuffleNetV2::thread_sum74_cast_fu_28449_p1() {
    sum74_cast_fu_28449_p1 = esl_zext<32,11>(sum56_reg_45767.read());
}

void ShuffleNetV2::thread_sum74_fu_33443_p2() {
    sum74_fu_33443_p2 = (!tmp59_fu_33437_p2.read().is_01() || !co147_cast_reg_47277.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp59_fu_33437_p2.read()) + sc_biguint<12>(co147_cast_reg_47277.read()));
}

void ShuffleNetV2::thread_sum75_fu_34009_p2() {
    sum75_fu_34009_p2 = (!i155_cast246_cast_reg_47495.read().is_01() || !tmp62_fu_34003_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i155_cast246_cast_reg_47495.read()) + sc_biguint<9>(tmp62_fu_34003_p2.read()));
}

void ShuffleNetV2::thread_sum76_cast_fu_29215_p1() {
    sum76_cast_fu_29215_p1 = esl_zext<32,11>(sum58_reg_45992.read());
}

void ShuffleNetV2::thread_sum76_fu_34445_p2() {
    sum76_fu_34445_p2 = (!i159_cast_reg_47622.read().is_01() || !tmp64_cast_fu_34441_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i159_cast_reg_47622.read()) + sc_biguint<12>(tmp64_cast_fu_34441_p1.read()));
}

void ShuffleNetV2::thread_sum77_fu_34212_p2() {
    sum77_fu_34212_p2 = (!tmp63_fu_34206_p2.read().is_01() || !co152_cast_reg_47537.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp63_fu_34206_p2.read()) + sc_biguint<12>(co152_cast_reg_47537.read()));
}

void ShuffleNetV2::thread_sum78_cast_fu_29564_p1() {
    sum78_cast_fu_29564_p1 = esl_zext<32,11>(sum60_reg_46125.read());
}

void ShuffleNetV2::thread_sum78_fu_34782_p2() {
    sum78_fu_34782_p2 = (!i163_cast_reg_47755.read().is_01() || !tmp66_fu_34776_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i163_cast_reg_47755.read()) + sc_biguint<12>(tmp66_fu_34776_p2.read()));
}

void ShuffleNetV2::thread_sum79_cast_fu_30000_p1() {
    sum79_cast_fu_30000_p1 = esl_zext<32,11>(sum61_reg_46252.read());
}

void ShuffleNetV2::thread_sum79_fu_35206_p2() {
    sum79_fu_35206_p2 = (!i167_cast_reg_47882.read().is_01() || !tmp68_fu_35200_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i167_cast_reg_47882.read()) + sc_biguint<12>(tmp68_fu_35200_p2.read()));
}

void ShuffleNetV2::thread_sum7_fu_18250_p2() {
    sum7_fu_18250_p2 = (!co49_cast_fu_18234_p1.read().is_01() || !ap_const_lv8_A8.is_01())? sc_lv<8>(): (sc_biguint<8>(co49_cast_fu_18234_p1.read()) + sc_bigint<8>(ap_const_lv8_A8));
}

void ShuffleNetV2::thread_sum80_fu_34981_p2() {
    sum80_fu_34981_p2 = (!tmp67_fu_34975_p2.read().is_01() || !co156_cast_reg_47797.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp67_fu_34975_p2.read()) + sc_biguint<12>(co156_cast_reg_47797.read()));
}

void ShuffleNetV2::thread_sum81_cast_fu_30774_p1() {
    sum81_cast_fu_30774_p1 = esl_zext<32,11>(sum63_reg_46477.read());
}

void ShuffleNetV2::thread_sum81_fu_35841_p2() {
    sum81_fu_35841_p2 = (!i172_cast_reg_48063.read().is_01() || !tmp70_fu_35835_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i172_cast_reg_48063.read()) + sc_biguint<12>(tmp70_fu_35835_p2.read()));
}

void ShuffleNetV2::thread_sum82_fu_35616_p2() {
    sum82_fu_35616_p2 = (!tmp69_fu_35610_p2.read().is_01() || !co159_cast_reg_47978.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp69_fu_35610_p2.read()) + sc_biguint<12>(co159_cast_reg_47978.read()));
}

void ShuffleNetV2::thread_sum83_cast_fu_31115_p1() {
    sum83_cast_fu_31115_p1 = esl_zext<32,11>(sum65_reg_46610.read());
}

void ShuffleNetV2::thread_sum83_fu_36178_p2() {
    sum83_fu_36178_p2 = (!i175_cast_reg_48196.read().is_01() || !tmp72_fu_36172_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i175_cast_reg_48196.read()) + sc_biguint<12>(tmp72_fu_36172_p2.read()));
}

void ShuffleNetV2::thread_sum84_cast1_fu_31559_p1() {
    sum84_cast1_fu_31559_p1 = esl_sext<11,10>(sum66_reg_46737.read());
}

void ShuffleNetV2::thread_sum84_cast_fu_31562_p1() {
    sum84_cast_fu_31562_p1 = esl_zext<32,11>(sum84_cast1_fu_31559_p1.read());
}

void ShuffleNetV2::thread_sum84_fu_36610_p2() {
    sum84_fu_36610_p2 = (!i179_cast_reg_48323.read().is_01() || !tmp74_fu_36604_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i179_cast_reg_48323.read()) + sc_biguint<12>(tmp74_fu_36604_p2.read()));
}

void ShuffleNetV2::thread_sum85_fu_36377_p2() {
    sum85_fu_36377_p2 = (!co164_cast182_cast_reg_48238.read().is_01() || !tmp73_fu_36371_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(co164_cast182_cast_reg_48238.read()) + sc_biguint<11>(tmp73_fu_36371_p2.read()));
}

void ShuffleNetV2::thread_sum86_cast1_fu_32337_p1() {
    sum86_cast1_fu_32337_p1 = esl_sext<11,10>(sum68_reg_46962.read());
}

void ShuffleNetV2::thread_sum86_cast_fu_32340_p1() {
    sum86_cast_fu_32340_p1 = esl_zext<32,11>(sum86_cast1_fu_32337_p1.read());
}

void ShuffleNetV2::thread_sum86_fu_37368_p2() {
    sum86_fu_37368_p2 = (!i184_cast_reg_48548.read().is_01() || !tmp76_fu_37362_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i184_cast_reg_48548.read()) + sc_biguint<12>(tmp76_fu_37362_p2.read()));
}

void ShuffleNetV2::thread_sum87_fu_37143_p2() {
    sum87_fu_37143_p2 = (!tmp75_fu_37137_p2.read().is_01() || !co169_cast_reg_48463.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp75_fu_37137_p2.read()) + sc_biguint<13>(co169_cast_reg_48463.read()));
}

void ShuffleNetV2::thread_sum88_cast1_fu_32678_p1() {
    sum88_cast1_fu_32678_p1 = esl_sext<11,10>(sum70_reg_47095.read());
}

void ShuffleNetV2::thread_sum88_cast_fu_32681_p1() {
    sum88_cast_fu_32681_p1 = esl_zext<32,11>(sum88_cast1_fu_32678_p1.read());
}

void ShuffleNetV2::thread_sum88_fu_37717_p2() {
    sum88_fu_37717_p2 = (!i187_cast_reg_48681.read().is_01() || !tmp78_fu_37711_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i187_cast_reg_48681.read()) + sc_biguint<12>(tmp78_fu_37711_p2.read()));
}

void ShuffleNetV2::thread_sum89_cast1_fu_33126_p1() {
    sum89_cast1_fu_33126_p1 = esl_sext<11,10>(sum71_reg_47222.read());
}

void ShuffleNetV2::thread_sum89_cast_fu_33129_p1() {
    sum89_cast_fu_33129_p1 = esl_zext<32,11>(sum89_cast1_fu_33126_p1.read());
}

void ShuffleNetV2::thread_sum89_fu_38141_p2() {
    sum89_fu_38141_p2 = (!i191_cast_reg_48808.read().is_01() || !tmp80_fu_38135_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i191_cast_reg_48808.read()) + sc_biguint<12>(tmp80_fu_38135_p2.read()));
}

void ShuffleNetV2::thread_sum8_fu_18418_p3() {
    sum8_fu_18418_p3 = esl_concat<1,5>(ap_const_lv1_1, co52_reg_10374.read());
}

void ShuffleNetV2::thread_sum90_fu_37916_p2() {
    sum90_fu_37916_p2 = (!tmp79_fu_37910_p2.read().is_01() || !co174_cast_reg_48723.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp79_fu_37910_p2.read()) + sc_biguint<13>(co174_cast_reg_48723.read()));
}

void ShuffleNetV2::thread_sum91_cast1_fu_33673_p1() {
    sum91_cast1_fu_33673_p1 = esl_sext<11,10>(sum73_reg_47393.read());
}

void ShuffleNetV2::thread_sum91_cast_fu_33676_p1() {
    sum91_cast_fu_33676_p1 = esl_zext<32,11>(sum91_cast1_fu_33673_p1.read());
}

void ShuffleNetV2::thread_sum91_fu_38899_p2() {
    sum91_fu_38899_p2 = (!i196_cast_reg_49033.read().is_01() || !tmp82_fu_38893_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i196_cast_reg_49033.read()) + sc_biguint<12>(tmp82_fu_38893_p2.read()));
}

void ShuffleNetV2::thread_sum92_fu_38674_p2() {
    sum92_fu_38674_p2 = (!tmp81_fu_38668_p2.read().is_01() || !co179_cast_reg_48948.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp81_fu_38668_p2.read()) + sc_biguint<13>(co179_cast_reg_48948.read()));
}

void ShuffleNetV2::thread_sum93_cast1_fu_34014_p1() {
    sum93_cast1_fu_34014_p1 = esl_sext<11,9>(sum75_reg_47526.read());
}

void ShuffleNetV2::thread_sum93_cast_fu_34017_p1() {
    sum93_cast_fu_34017_p1 = esl_zext<32,11>(sum93_cast1_fu_34014_p1.read());
}

void ShuffleNetV2::thread_sum93_fu_39240_p2() {
    sum93_fu_39240_p2 = (!i199_cast_reg_49166.read().is_01() || !tmp84_fu_39234_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i199_cast_reg_49166.read()) + sc_biguint<12>(tmp84_fu_39234_p2.read()));
}

void ShuffleNetV2::thread_sum94_cast_fu_34450_p1() {
    sum94_cast_fu_34450_p1 = esl_zext<32,12>(sum76_reg_47653.read());
}

void ShuffleNetV2::thread_sum94_fu_39664_p2() {
    sum94_fu_39664_p2 = (!i203_cast_reg_49293.read().is_01() || !tmp86_fu_39658_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i203_cast_reg_49293.read()) + sc_biguint<12>(tmp86_fu_39658_p2.read()));
}

void ShuffleNetV2::thread_sum95_fu_39439_p2() {
    sum95_fu_39439_p2 = (!tmp85_fu_39433_p2.read().is_01() || !co184_cast_reg_49208.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp85_fu_39433_p2.read()) + sc_biguint<13>(co184_cast_reg_49208.read()));
}

void ShuffleNetV2::thread_sum96_cast_fu_34787_p1() {
    sum96_cast_fu_34787_p1 = esl_zext<32,12>(sum78_reg_47786.read());
}

void ShuffleNetV2::thread_sum97_cast_fu_35211_p1() {
    sum97_cast_fu_35211_p1 = esl_zext<32,12>(sum79_reg_47913.read());
}

void ShuffleNetV2::thread_sum99_cast_fu_35846_p1() {
    sum99_cast_fu_35846_p1 = esl_zext<32,12>(sum81_reg_48094.read());
}

void ShuffleNetV2::thread_sum9_fu_16319_p2() {
    sum9_fu_16319_p2 = (!co16_cast_fu_16303_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co16_cast_fu_16303_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_sum_V_fu_40117_p2() {
    sum_V_fu_40117_p2 = (!tmp_308_fu_40096_p10.read().is_01() || !p_05_1_i_reg_13808.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_308_fu_40096_p10.read()) + sc_biguint<8>(p_05_1_i_reg_13808.read()));
}

void ShuffleNetV2::thread_sum_fu_16656_p2() {
    sum_fu_16656_p2 = (!co22_cast_fu_16640_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co22_cast_fu_16640_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp10_fu_20814_p2() {
    tmp10_fu_20814_p2 = (!ap_const_lv10_228.is_01() || !tmp_71_cast_fu_20805_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_71_cast_fu_20805_p1.read()));
}

void ShuffleNetV2::thread_tmp11_fu_21236_p2() {
    tmp11_fu_21236_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_90_cast_fu_21232_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_90_cast_fu_21232_p1.read()));
}

void ShuffleNetV2::thread_tmp12_fu_21461_p2() {
    tmp12_fu_21461_p2 = (!ap_const_lv10_258.is_01() || !tmp_84_cast_fu_21452_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_84_cast_fu_21452_p1.read()));
}

void ShuffleNetV2::thread_tmp13_cast1_fu_21634_p1() {
    tmp13_cast1_fu_21634_p1 = esl_sext<8,7>(tmp13_fu_21628_p2.read());
}

void ShuffleNetV2::thread_tmp13_cast_fu_21638_p1() {
    tmp13_cast_fu_21638_p1 = esl_zext<9,8>(tmp13_cast1_fu_21634_p1.read());
}

void ShuffleNetV2::thread_tmp13_fu_21628_p2() {
    tmp13_fu_21628_p2 = (!ap_const_lv7_58.is_01() || !tmp_82_fu_21590_p2.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_82_fu_21590_p2.read()));
}

void ShuffleNetV2::thread_tmp14_fu_21806_p2() {
    tmp14_fu_21806_p2 = (!ap_const_lv10_288.is_01() || !tmp_92_cast_fu_21797_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_288) + sc_bigint<10>(tmp_92_cast_fu_21797_p1.read()));
}

void ShuffleNetV2::thread_tmp15_fu_22017_p2() {
    tmp15_fu_22017_p2 = (!ap_const_lv10_258.is_01() || !tmp_108_cast_fu_22013_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_108_cast_fu_22013_p1.read()));
}

void ShuffleNetV2::thread_tmp16_fu_22242_p2() {
    tmp16_fu_22242_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_102_cast_fu_22233_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_102_cast_fu_22233_p1.read()));
}

void ShuffleNetV2::thread_tmp17_fu_22783_p2() {
    tmp17_fu_22783_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_121_cast_fu_22779_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_121_cast_fu_22779_p1.read()));
}

void ShuffleNetV2::thread_tmp18_fu_23008_p2() {
    tmp18_fu_23008_p2 = (!ap_const_lv10_2E8.is_01() || !tmp_115_cast_fu_22999_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2E8) + sc_bigint<10>(tmp_115_cast_fu_22999_p1.read()));
}

void ShuffleNetV2::thread_tmp19_fu_23179_p2() {
    tmp19_fu_23179_p2 = (!ap_const_lv9_108.is_01() || !tmp_130_cast_fu_23143_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_108) + sc_bigint<9>(tmp_130_cast_fu_23143_p1.read()));
}

void ShuffleNetV2::thread_tmp1_fu_19027_p2() {
    tmp1_fu_19027_p2 = (!ap_const_lv9_D8.is_01() || !tmp_41_cast_fu_19023_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_D8) + sc_bigint<9>(tmp_41_cast_fu_19023_p1.read()));
}

void ShuffleNetV2::thread_tmp20_fu_23349_p2() {
    tmp20_fu_23349_p2 = (!ap_const_lv9_118.is_01() || !tmp_123_cast_cast_fu_23340_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_118) + sc_bigint<9>(tmp_123_cast_cast_fu_23340_p1.read()));
}

void ShuffleNetV2::thread_tmp21_fu_23564_p2() {
    tmp21_fu_23564_p2 = (!ap_const_lv10_318.is_01() || !tmp_139_cast_fu_23560_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_139_cast_fu_23560_p1.read()));
}

void ShuffleNetV2::thread_tmp22_fu_23789_p2() {
    tmp22_fu_23789_p2 = (!ap_const_lv9_148.is_01() || !tmp_133_cast_cast_fu_23780_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_148) + sc_bigint<9>(tmp_133_cast_cast_fu_23780_p1.read()));
}

void ShuffleNetV2::thread_tmp23_fu_24334_p2() {
    tmp23_fu_24334_p2 = (!ap_const_lv9_178.is_01() || !tmp_152_cast_cast_fu_24330_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_152_cast_cast_fu_24330_p1.read()));
}

void ShuffleNetV2::thread_tmp24_fu_24567_p2() {
    tmp24_fu_24567_p2 = (!ap_const_lv9_178.is_01() || !tmp_146_cast_cast_fu_24558_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_146_cast_cast_fu_24558_p1.read()));
}

void ShuffleNetV2::thread_tmp25_fu_24742_p2() {
    tmp25_fu_24742_p2 = (!ap_const_lv9_138.is_01() || !tmp_161_cast_fu_24706_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_161_cast_fu_24706_p1.read()));
}

void ShuffleNetV2::thread_tmp26_fu_24908_p2() {
    tmp26_fu_24908_p2 = (!ap_const_lv8_A8.is_01() || !tmp_154_cast_cast_fu_24899_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_154_cast_cast_fu_24899_p1.read()));
}

void ShuffleNetV2::thread_tmp27_fu_25123_p2() {
    tmp27_fu_25123_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_170_cast_fu_25119_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_170_cast_fu_25119_p1.read()));
}

void ShuffleNetV2::thread_tmp28_cast1_fu_25350_p1() {
    tmp28_cast1_fu_25350_p1 = esl_sext<10,7>(tmp28_fu_25344_p2.read());
}

void ShuffleNetV2::thread_tmp28_cast_fu_25354_p1() {
    tmp28_cast_fu_25354_p1 = esl_zext<11,10>(tmp28_cast1_fu_25350_p1.read());
}

void ShuffleNetV2::thread_tmp28_fu_25344_p2() {
    tmp28_fu_25344_p2 = (!ap_const_lv7_58.is_01() || !tmp_122_fu_25333_p2.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_122_fu_25333_p2.read()));
}

void ShuffleNetV2::thread_tmp29_fu_25893_p2() {
    tmp29_fu_25893_p2 = (!ap_const_lv11_438.is_01() || !tmp_183_cast_fu_25889_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_183_cast_fu_25889_p1.read()));
}

void ShuffleNetV2::thread_tmp2_fu_19252_p2() {
    tmp2_fu_19252_p2 = (!ap_const_lv9_168.is_01() || !tmp_35_cast_fu_19243_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_35_cast_fu_19243_p1.read()));
}

void ShuffleNetV2::thread_tmp30_fu_26118_p2() {
    tmp30_fu_26118_p2 = (!ap_const_lv11_408.is_01() || !tmp_177_cast_fu_26109_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_408) + sc_bigint<11>(tmp_177_cast_fu_26109_p1.read()));
}

void ShuffleNetV2::thread_tmp31_fu_26289_p2() {
    tmp31_fu_26289_p2 = (!ap_const_lv9_168.is_01() || !tmp_192_cast_fu_26253_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_192_cast_fu_26253_p1.read()));
}

void ShuffleNetV2::thread_tmp32_fu_26455_p2() {
    tmp32_fu_26455_p2 = (!ap_const_lv11_438.is_01() || !tmp_185_cast_fu_26446_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_185_cast_fu_26446_p1.read()));
}

void ShuffleNetV2::thread_tmp33_fu_26666_p2() {
    tmp33_fu_26666_p2 = (!ap_const_lv11_498.is_01() || !tmp_201_cast_fu_26662_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_201_cast_fu_26662_p1.read()));
}

void ShuffleNetV2::thread_tmp34_fu_26891_p2() {
    tmp34_fu_26891_p2 = (!ap_const_lv11_468.is_01() || !tmp_195_cast_fu_26882_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_468) + sc_bigint<11>(tmp_195_cast_fu_26882_p1.read()));
}

void ShuffleNetV2::thread_tmp35_fu_27432_p2() {
    tmp35_fu_27432_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_214_cast_fu_27428_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_214_cast_fu_27428_p1.read()));
}

void ShuffleNetV2::thread_tmp36_fu_27657_p2() {
    tmp36_fu_27657_p2 = (!ap_const_lv11_498.is_01() || !tmp_208_cast_fu_27648_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_208_cast_fu_27648_p1.read()));
}

void ShuffleNetV2::thread_tmp37_fu_27828_p2() {
    tmp37_fu_27828_p2 = (!ap_const_lv8_98.is_01() || !tmp_223_cast_cast_fu_27792_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_223_cast_cast_fu_27792_p1.read()));
}

void ShuffleNetV2::thread_tmp38_fu_28002_p2() {
    tmp38_fu_28002_p2 = (!ap_const_lv11_4C8.is_01() || !tmp_216_cast_fu_27993_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4C8) + sc_bigint<11>(tmp_216_cast_fu_27993_p1.read()));
}

void ShuffleNetV2::thread_tmp39_fu_28213_p2() {
    tmp39_fu_28213_p2 = (!ap_const_lv11_558.is_01() || !tmp_232_cast_fu_28209_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_232_cast_fu_28209_p1.read()));
}

void ShuffleNetV2::thread_tmp3_fu_19423_p2() {
    tmp3_fu_19423_p2 = (!ap_const_lv8_78.is_01() || !tmp_49_cast_fu_19387_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_78) + sc_bigint<8>(tmp_49_cast_fu_19387_p1.read()));
}

void ShuffleNetV2::thread_tmp40_fu_28438_p2() {
    tmp40_fu_28438_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_226_cast_fu_28429_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_226_cast_fu_28429_p1.read()));
}

void ShuffleNetV2::thread_tmp41_fu_28979_p2() {
    tmp41_fu_28979_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_245_cast_fu_28975_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_245_cast_fu_28975_p1.read()));
}

void ShuffleNetV2::thread_tmp42_fu_29204_p2() {
    tmp42_fu_29204_p2 = (!ap_const_lv11_528.is_01() || !tmp_239_cast_fu_29195_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_528) + sc_bigint<11>(tmp_239_cast_fu_29195_p1.read()));
}

void ShuffleNetV2::thread_tmp43_fu_29375_p2() {
    tmp43_fu_29375_p2 = (!ap_const_lv8_C8.is_01() || !tmp_254_cast_cast_fu_29339_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_254_cast_cast_fu_29339_p1.read()));
}

void ShuffleNetV2::thread_tmp44_fu_29553_p2() {
    tmp44_fu_29553_p2 = (!ap_const_lv11_558.is_01() || !tmp_247_cast_fu_29544_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_247_cast_fu_29544_p1.read()));
}

void ShuffleNetV2::thread_tmp45_fu_29764_p2() {
    tmp45_fu_29764_p2 = (!ap_const_lv11_618.is_01() || !tmp_263_cast_fu_29760_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_618) + sc_bigint<11>(tmp_263_cast_fu_29760_p1.read()));
}

void ShuffleNetV2::thread_tmp46_fu_29989_p2() {
    tmp46_fu_29989_p2 = (!ap_const_lv11_588.is_01() || !tmp_257_cast_fu_29980_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_588) + sc_bigint<11>(tmp_257_cast_fu_29980_p1.read()));
}

void ShuffleNetV2::thread_tmp47_fu_30530_p2() {
    tmp47_fu_30530_p2 = (!ap_const_lv10_278.is_01() || !tmp_276_cast_cast_fu_30526_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_276_cast_cast_fu_30526_p1.read()));
}

void ShuffleNetV2::thread_tmp48_fu_30763_p2() {
    tmp48_fu_30763_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_270_cast_fu_30754_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_270_cast_fu_30754_p1.read()));
}

void ShuffleNetV2::thread_tmp49_fu_30934_p2() {
    tmp49_fu_30934_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_285_cast_fu_30898_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_285_cast_fu_30898_p1.read()));
}

void ShuffleNetV2::thread_tmp4_fu_19593_p2() {
    tmp4_fu_19593_p2 = (!ap_const_lv8_98.is_01() || !tmp_43_cast_cast_fu_19584_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_43_cast_cast_fu_19584_p1.read()));
}

void ShuffleNetV2::thread_tmp50_fu_31104_p2() {
    tmp50_fu_31104_p2 = (!ap_const_lv11_5E8.is_01() || !tmp_278_cast_fu_31095_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5E8) + sc_bigint<11>(tmp_278_cast_fu_31095_p1.read()));
}

void ShuffleNetV2::thread_tmp51_fu_31315_p2() {
    tmp51_fu_31315_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_294_cast_cast_fu_31311_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_294_cast_cast_fu_31311_p1.read()));
}

void ShuffleNetV2::thread_tmp52_fu_31548_p2() {
    tmp52_fu_31548_p2 = (!ap_const_lv10_218.is_01() || !tmp_288_cast_cast_fu_31539_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_218) + sc_bigint<10>(tmp_288_cast_cast_fu_31539_p1.read()));
}

void ShuffleNetV2::thread_tmp53_fu_32093_p2() {
    tmp53_fu_32093_p2 = (!ap_const_lv9_138.is_01() || !tmp_307_cast_cast_fu_32089_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_307_cast_cast_fu_32089_p1.read()));
}

void ShuffleNetV2::thread_tmp54_fu_32326_p2() {
    tmp54_fu_32326_p2 = (!ap_const_lv10_248.is_01() || !tmp_301_cast_cast_fu_32317_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_248) + sc_bigint<10>(tmp_301_cast_cast_fu_32317_p1.read()));
}

void ShuffleNetV2::thread_tmp55_fu_32501_p2() {
    tmp55_fu_32501_p2 = (!ap_const_lv10_228.is_01() || !tmp_316_cast_fu_32465_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_316_cast_fu_32465_p1.read()));
}

void ShuffleNetV2::thread_tmp56_fu_32667_p2() {
    tmp56_fu_32667_p2 = (!ap_const_lv10_278.is_01() || !tmp_309_cast_cast_fu_32658_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_309_cast_cast_fu_32658_p1.read()));
}

void ShuffleNetV2::thread_tmp57_cast1_fu_32888_p1() {
    tmp57_cast1_fu_32888_p1 = esl_sext<11,9>(tmp57_fu_32882_p2.read());
}

void ShuffleNetV2::thread_tmp57_cast_fu_32892_p1() {
    tmp57_cast_fu_32892_p1 = esl_zext<12,11>(tmp57_cast1_fu_32888_p1.read());
}

void ShuffleNetV2::thread_tmp57_fu_32882_p2() {
    tmp57_fu_32882_p2 = (!ap_const_lv9_198.is_01() || !tmp_325_cast_cast_fu_32878_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_325_cast_cast_fu_32878_p1.read()));
}

void ShuffleNetV2::thread_tmp58_fu_33115_p2() {
    tmp58_fu_33115_p2 = (!ap_const_lv10_2A8.is_01() || !tmp_319_cast_cast_fu_33106_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2A8) + sc_bigint<10>(tmp_319_cast_cast_fu_33106_p1.read()));
}

void ShuffleNetV2::thread_tmp59_fu_33437_p2() {
    tmp59_fu_33437_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_337_cast_fu_33433_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_337_cast_fu_33433_p1.read()));
}

void ShuffleNetV2::thread_tmp5_fu_19808_p2() {
    tmp5_fu_19808_p2 = (!ap_const_lv9_138.is_01() || !tmp_58_cast_fu_19804_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_58_cast_fu_19804_p1.read()));
}

void ShuffleNetV2::thread_tmp60_fu_33662_p2() {
    tmp60_fu_33662_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_331_cast_cast_fu_33653_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_331_cast_cast_fu_33653_p1.read()));
}

void ShuffleNetV2::thread_tmp61_fu_33837_p2() {
    tmp61_fu_33837_p2 = (!ap_const_lv10_258.is_01() || !tmp_346_cast_fu_33801_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_346_cast_fu_33801_p1.read()));
}

void ShuffleNetV2::thread_tmp62_fu_34003_p2() {
    tmp62_fu_34003_p2 = (!ap_const_lv9_138.is_01() || !tmp_339_cast_cast_fu_33994_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_339_cast_cast_fu_33994_p1.read()));
}

void ShuffleNetV2::thread_tmp63_fu_34206_p2() {
    tmp63_fu_34206_p2 = (!ap_const_lv12_978.is_01() || !tmp_355_cast_fu_34202_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_355_cast_fu_34202_p1.read()));
}

void ShuffleNetV2::thread_tmp64_cast1_fu_34437_p1() {
    tmp64_cast1_fu_34437_p1 = esl_sext<11,9>(tmp64_fu_34431_p2.read());
}

void ShuffleNetV2::thread_tmp64_cast_fu_34441_p1() {
    tmp64_cast_fu_34441_p1 = esl_zext<12,11>(tmp64_cast1_fu_34437_p1.read());
}

void ShuffleNetV2::thread_tmp64_fu_34431_p2() {
    tmp64_fu_34431_p2 = (!ap_const_lv9_198.is_01() || !tmp_349_cast_cast_fu_34422_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_349_cast_cast_fu_34422_p1.read()));
}

void ShuffleNetV2::thread_tmp65_fu_34610_p2() {
    tmp65_fu_34610_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_364_cast_fu_34574_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_364_cast_fu_34574_p1.read()));
}

void ShuffleNetV2::thread_tmp66_fu_34776_p2() {
    tmp66_fu_34776_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_357_cast_fu_34767_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_357_cast_fu_34767_p1.read()));
}

void ShuffleNetV2::thread_tmp67_fu_34975_p2() {
    tmp67_fu_34975_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_378_cast_fu_34971_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_378_cast_fu_34971_p1.read()));
}

void ShuffleNetV2::thread_tmp68_fu_35200_p2() {
    tmp68_fu_35200_p2 = (!ap_const_lv12_858.is_01() || !tmp_367_cast_fu_35191_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_858) + sc_bigint<12>(tmp_367_cast_fu_35191_p1.read()));
}

void ShuffleNetV2::thread_tmp69_fu_35610_p2() {
    tmp69_fu_35610_p2 = (!ap_const_lv12_C78.is_01() || !tmp_386_cast_fu_35606_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C78) + sc_bigint<12>(tmp_386_cast_fu_35606_p1.read()));
}

void ShuffleNetV2::thread_tmp6_fu_20033_p2() {
    tmp6_fu_20033_p2 = (!ap_const_lv8_C8.is_01() || !tmp_52_cast_cast_fu_20024_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_52_cast_cast_fu_20024_p1.read()));
}

void ShuffleNetV2::thread_tmp70_fu_35835_p2() {
    tmp70_fu_35835_p2 = (!ap_const_lv12_8B8.is_01() || !tmp_380_cast_fu_35826_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_8B8) + sc_bigint<12>(tmp_380_cast_fu_35826_p1.read()));
}

void ShuffleNetV2::thread_tmp71_fu_36006_p2() {
    tmp71_fu_36006_p2 = (!ap_const_lv10_318.is_01() || !tmp_395_cast_fu_35970_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_395_cast_fu_35970_p1.read()));
}

void ShuffleNetV2::thread_tmp72_fu_36172_p2() {
    tmp72_fu_36172_p2 = (!ap_const_lv12_918.is_01() || !tmp_388_cast_fu_36163_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_918) + sc_bigint<12>(tmp_388_cast_fu_36163_p1.read()));
}

void ShuffleNetV2::thread_tmp73_fu_36371_p2() {
    tmp73_fu_36371_p2 = (!ap_const_lv11_5F8.is_01() || !tmp_404_cast_cast_fu_36367_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5F8) + sc_bigint<11>(tmp_404_cast_cast_fu_36367_p1.read()));
}

void ShuffleNetV2::thread_tmp74_fu_36604_p2() {
    tmp74_fu_36604_p2 = (!ap_const_lv12_978.is_01() || !tmp_398_cast_fu_36595_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_398_cast_fu_36595_p1.read()));
}

void ShuffleNetV2::thread_tmp75_fu_37137_p2() {
    tmp75_fu_37137_p2 = (!ap_const_lv13_F78.is_01() || !tmp_417_cast_fu_37133_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_F78) + sc_bigint<13>(tmp_417_cast_fu_37133_p1.read()));
}

void ShuffleNetV2::thread_tmp76_fu_37362_p2() {
    tmp76_fu_37362_p2 = (!ap_const_lv12_9D8.is_01() || !tmp_411_cast_fu_37353_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_9D8) + sc_bigint<12>(tmp_411_cast_fu_37353_p1.read()));
}

void ShuffleNetV2::thread_tmp77_fu_37533_p2() {
    tmp77_fu_37533_p2 = (!ap_const_lv9_178.is_01() || !tmp_426_cast_cast_fu_37497_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_426_cast_cast_fu_37497_p1.read()));
}

void ShuffleNetV2::thread_tmp78_fu_37711_p2() {
    tmp78_fu_37711_p2 = (!ap_const_lv12_A38.is_01() || !tmp_419_cast_fu_37702_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A38) + sc_bigint<12>(tmp_419_cast_fu_37702_p1.read()));
}

void ShuffleNetV2::thread_tmp79_fu_37910_p2() {
    tmp79_fu_37910_p2 = (!ap_const_lv13_10F8.is_01() || !tmp_435_cast_fu_37906_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_10F8) + sc_bigint<13>(tmp_435_cast_fu_37906_p1.read()));
}

void ShuffleNetV2::thread_tmp7_fu_20208_p2() {
    tmp7_fu_20208_p2 = (!ap_const_lv8_A8.is_01() || !tmp_68_cast_fu_20172_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_68_cast_fu_20172_p1.read()));
}

void ShuffleNetV2::thread_tmp80_fu_38135_p2() {
    tmp80_fu_38135_p2 = (!ap_const_lv12_A98.is_01() || !tmp_429_cast_fu_38126_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A98) + sc_bigint<12>(tmp_429_cast_fu_38126_p1.read()));
}

void ShuffleNetV2::thread_tmp81_fu_38668_p2() {
    tmp81_fu_38668_p2 = (!ap_const_lv13_1278.is_01() || !tmp_448_cast_fu_38664_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1278) + sc_bigint<13>(tmp_448_cast_fu_38664_p1.read()));
}

void ShuffleNetV2::thread_tmp82_fu_38893_p2() {
    tmp82_fu_38893_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_442_cast_fu_38884_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_442_cast_fu_38884_p1.read()));
}

void ShuffleNetV2::thread_tmp83_fu_39064_p2() {
    tmp83_fu_39064_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_457_cast_fu_39028_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_457_cast_fu_39028_p1.read()));
}

void ShuffleNetV2::thread_tmp84_fu_39234_p2() {
    tmp84_fu_39234_p2 = (!ap_const_lv12_B58.is_01() || !tmp_450_cast_fu_39225_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_B58) + sc_bigint<12>(tmp_450_cast_fu_39225_p1.read()));
}

void ShuffleNetV2::thread_tmp85_fu_39433_p2() {
    tmp85_fu_39433_p2 = (!ap_const_lv13_13F8.is_01() || !tmp_466_cast_fu_39429_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_13F8) + sc_bigint<13>(tmp_466_cast_fu_39429_p1.read()));
}

void ShuffleNetV2::thread_tmp86_fu_39658_p2() {
    tmp86_fu_39658_p2 = (!ap_const_lv12_BB8.is_01() || !tmp_460_cast_fu_39649_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_BB8) + sc_bigint<12>(tmp_460_cast_fu_39649_p1.read()));
}

void ShuffleNetV2::thread_tmp8_fu_20374_p2() {
    tmp8_fu_20374_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_60_cast_fu_20365_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_60_cast_fu_20365_p1.read()));
}

void ShuffleNetV2::thread_tmp9_cast_fu_20591_p1() {
    tmp9_cast_fu_20591_p1 = esl_zext<10,9>(tmp9_fu_20585_p2.read());
}

void ShuffleNetV2::thread_tmp9_fu_20585_p2() {
    tmp9_fu_20585_p2 = (!ap_const_lv9_198.is_01() || !tmp_82_cast_fu_20581_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_82_cast_fu_20581_p1.read()));
}

void ShuffleNetV2::thread_tmp_1000_fu_23174_p2() {
    tmp_1000_fu_23174_p2 = (!w71_cast_cast_reg_44086.read().is_01() || !tmp_999_fu_23168_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w71_cast_cast_reg_44086.read()) + sc_biguint<10>(tmp_999_fu_23168_p2.read()));
}

void ShuffleNetV2::thread_tmp_1001_cast_fu_19514_p1() {
    tmp_1001_cast_fu_19514_p1 = esl_zext<32,10>(tmp_856_reg_42951.read());
}

void ShuffleNetV2::thread_tmp_1001_fu_23190_p2() {
    tmp_1001_fu_23190_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1000_reg_44125.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1002_fu_23195_p2() {
    tmp_1002_fu_23195_p2 = (!tmp_1001_fu_23190_p2.read().is_01() || !tmp_1000_reg_44125.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1001_fu_23190_p2.read()) - sc_biguint<10>(tmp_1000_reg_44125.read()));
}

void ShuffleNetV2::thread_tmp_1003_cast_fu_19469_p1() {
    tmp_1003_cast_fu_19469_p1 = esl_sext<12,11>(tmp_858_fu_19463_p2.read());
}

void ShuffleNetV2::thread_tmp_1003_fu_23200_p2() {
    tmp_1003_fu_23200_p2 = (!h70_cast_cast_reg_44104.read().is_01() || !tmp_1002_fu_23195_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h70_cast_cast_reg_44104.read()) + sc_biguint<10>(tmp_1002_fu_23195_p2.read()));
}

void ShuffleNetV2::thread_tmp_1004_cast_fu_19478_p1() {
    tmp_1004_cast_fu_19478_p1 = esl_sext<32,12>(tmp_859_reg_42956.read());
}

void ShuffleNetV2::thread_tmp_1004_fu_23208_p3() {
    tmp_1004_fu_23208_p3 = esl_concat<9,2>(sum23_reg_44131.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1005_fu_23219_p2() {
    tmp_1005_fu_23219_p2 = (!p_shl409_cast_fu_23215_p1.read().is_01() || !sum23_cast_cast_fu_23205_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl409_cast_fu_23215_p1.read()) - sc_biguint<12>(sum23_cast_cast_fu_23205_p1.read()));
}

void ShuffleNetV2::thread_tmp_1006_fu_23229_p2() {
    tmp_1006_fu_23229_p2 = (!w71_cast_cast1_reg_44081.read().is_01() || !tmp_1181_cast_fu_23225_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w71_cast_cast1_reg_44081.read()) + sc_bigint<13>(tmp_1181_cast_fu_23225_p1.read()));
}

void ShuffleNetV2::thread_tmp_1007_fu_23237_p3() {
    tmp_1007_fu_23237_p3 = esl_concat<13,2>(tmp_1006_reg_44142.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1008_fu_23248_p2() {
    tmp_1008_fu_23248_p2 = (!p_shl231_fu_23244_p1.read().is_01() || !tmp_1182_cast_fu_23234_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl231_fu_23244_p1.read()) - sc_bigint<32>(tmp_1182_cast_fu_23234_p1.read()));
}

void ShuffleNetV2::thread_tmp_1009_fu_23254_p2() {
    tmp_1009_fu_23254_p2 = (!h70_cast_reg_44099.read().is_01() || !tmp_1008_fu_23248_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h70_cast_reg_44099.read()) + sc_biguint<32>(tmp_1008_fu_23248_p2.read()));
}

void ShuffleNetV2::thread_tmp_100_cast_cast_fu_21601_p1() {
    tmp_100_cast_cast_fu_21601_p1 = esl_sext<10,7>(tmp_83_fu_21596_p2.read());
}

void ShuffleNetV2::thread_tmp_100_fu_23466_p2() {
    tmp_100_fu_23466_p2 = (!tmp_97_reg_44209.read().is_01() || !ci46_cast_fu_23446_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_97_reg_44209.read()) + sc_biguint<7>(ci46_cast_fu_23446_p1.read()));
}

void ShuffleNetV2::thread_tmp_1010_fu_23822_p3() {
    tmp_1010_fu_23822_p3 = esl_concat<6,3>(co85_reg_11233.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1011_fu_23834_p3() {
    tmp_1011_fu_23834_p3 = esl_concat<6,1>(co85_reg_11233.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1012_fu_23846_p2() {
    tmp_1012_fu_23846_p2 = (!p_shl412_cast_fu_23842_p1.read().is_01() || !p_shl411_cast_fu_23830_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl412_cast_fu_23842_p1.read()) + sc_biguint<10>(p_shl411_cast_fu_23830_p1.read()));
}

void ShuffleNetV2::thread_tmp_1013_fu_23746_p1() {
    tmp_1013_fu_23746_p1 = k24_reg_11222.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1014_fu_23487_p1() {
    tmp_1014_fu_23487_p1 = i72_reg_11200.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1015_fu_23584_p3() {
    tmp_1015_fu_23584_p3 = esl_concat<10,5>(sum38_reg_44251.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1016_cast_fu_19856_p1() {
    tmp_1016_cast_fu_19856_p1 = esl_sext<16,15>(tmp_867_fu_19850_p2.read());
}

void ShuffleNetV2::thread_tmp_1016_fu_23595_p3() {
    tmp_1016_fu_23595_p3 = esl_concat<10,3>(sum38_reg_44251.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1017_cast_fu_19865_p1() {
    tmp_1017_cast_fu_19865_p1 = esl_sext<32,16>(tmp_868_fu_19860_p2.read());
}

void ShuffleNetV2::thread_tmp_1017_fu_23606_p2() {
    tmp_1017_fu_23606_p2 = (!p_shl413_cast_fu_23591_p1.read().is_01() || !p_shl414_cast_fu_23602_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl413_cast_fu_23591_p1.read()) - sc_biguint<16>(p_shl414_cast_fu_23602_p1.read()));
}

void ShuffleNetV2::thread_tmp_1018_fu_23616_p2() {
    tmp_1018_fu_23616_p2 = (!ci46_cast1_cast_reg_44219.read().is_01() || !tmp_1197_cast_fu_23612_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci46_cast1_cast_reg_44219.read()) + sc_bigint<17>(tmp_1197_cast_fu_23612_p1.read()));
}

void ShuffleNetV2::thread_tmp_1019_fu_23683_p1() {
    tmp_1019_fu_23683_p1 = grp_fu_23575_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_101_fu_23137_p2() {
    tmp_101_fu_23137_p2 = (!p_shl64_cast_fu_23121_p1.read().is_01() || !p_shl65_cast_fu_23133_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl64_cast_fu_23121_p1.read()) - sc_biguint<7>(p_shl65_cast_fu_23133_p1.read()));
}

void ShuffleNetV2::thread_tmp_1022_fu_23672_p2() {
    tmp_1022_fu_23672_p2 = (!p_shl415_cast_fu_23658_p3.read().is_01() || !p_shl416_cast_fu_23665_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl415_cast_fu_23658_p3.read()) - sc_biguint<8>(p_shl416_cast_fu_23665_p3.read()));
}

void ShuffleNetV2::thread_tmp_1023_cast_fu_19931_p1() {
    tmp_1023_cast_fu_19931_p1 = esl_sext<32,8>(tmp_873_reg_43087.read());
}

void ShuffleNetV2::thread_tmp_1023_fu_23678_p2() {
    tmp_1023_fu_23678_p2 = (!tmp_136_cast_cast_reg_44232.read().is_01() || !tmp_1022_fu_23672_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_136_cast_cast_reg_44232.read()) + sc_biguint<8>(tmp_1022_fu_23672_p2.read()));
}

void ShuffleNetV2::thread_tmp_1024_fu_23941_p3() {
    tmp_1024_fu_23941_p3 = esl_concat<6,3>(co87_reg_11266.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1025_fu_23953_p3() {
    tmp_1025_fu_23953_p3 = esl_concat<6,1>(co87_reg_11266.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1026_fu_23965_p2() {
    tmp_1026_fu_23965_p2 = (!p_shl418_cast_fu_23961_p1.read().is_01() || !p_shl417_cast_fu_23949_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl418_cast_fu_23961_p1.read()) + sc_biguint<10>(p_shl417_cast_fu_23949_p1.read()));
}

void ShuffleNetV2::thread_tmp_1027_fu_23993_p3() {
    tmp_1027_fu_23993_p3 = esl_concat<7,3>(tmp_108_fu_23987_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1028_fu_24005_p3() {
    tmp_1028_fu_24005_p3 = esl_concat<7,1>(tmp_108_fu_23987_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1029_fu_24017_p2() {
    tmp_1029_fu_24017_p2 = (!p_shl420_cast_fu_24013_p1.read().is_01() || !p_shl419_cast_fu_24001_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl420_cast_fu_24013_p1.read()) + sc_biguint<11>(p_shl419_cast_fu_24001_p1.read()));
}

void ShuffleNetV2::thread_tmp_102_cast_fu_22233_p1() {
    tmp_102_cast_fu_22233_p1 = esl_sext<10,7>(tmp_84_fu_22227_p2.read());
}

void ShuffleNetV2::thread_tmp_102_fu_23147_p2() {
    tmp_102_fu_23147_p2 = (!co82_cast1_reg_44068.read().is_01() || !tmp_101_fu_23137_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co82_cast1_reg_44068.read()) + sc_biguint<7>(tmp_101_fu_23137_p2.read()));
}

void ShuffleNetV2::thread_tmp_1030_fu_23880_p2() {
    tmp_1030_fu_23880_p2 = (!h_73_cast_cast_fu_23876_p1.read().is_01() || !tmp_1012_reg_44323.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_73_cast_cast_fu_23876_p1.read()) + sc_biguint<10>(tmp_1012_reg_44323.read()));
}

void ShuffleNetV2::thread_tmp_1031_fu_23885_p3() {
    tmp_1031_fu_23885_p3 = esl_concat<10,3>(tmp_1030_fu_23880_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1032_fu_23897_p3() {
    tmp_1032_fu_23897_p3 = esl_concat<10,1>(tmp_1030_fu_23880_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1033_fu_23909_p2() {
    tmp_1033_fu_23909_p2 = (!p_shl421_cast_fu_23893_p1.read().is_01() || !p_shl422_cast_fu_23905_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl421_cast_fu_23893_p1.read()) + sc_biguint<15>(p_shl422_cast_fu_23905_p1.read()));
}

void ShuffleNetV2::thread_tmp_1034_fu_24168_p1() {
    tmp_1034_fu_24168_p1 = co89_reg_11299.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1035_cast_fu_20295_p1() {
    tmp_1035_cast_fu_20295_p1 = esl_zext<32,10>(tmp_883_reg_43211.read());
}

void ShuffleNetV2::thread_tmp_1035_fu_24202_p4() {
    tmp_1035_fu_24202_p4 = co89_reg_11299.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_1036_fu_24043_p2() {
    tmp_1036_fu_24043_p2 = (!h_75_cast_cast_fu_24039_p1.read().is_01() || !tmp_1029_reg_44380.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_75_cast_cast_fu_24039_p1.read()) + sc_biguint<11>(tmp_1029_reg_44380.read()));
}

void ShuffleNetV2::thread_tmp_1037_fu_24048_p3() {
    tmp_1037_fu_24048_p3 = esl_concat<11,3>(tmp_1036_fu_24043_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1038_cast_fu_20259_p1() {
    tmp_1038_cast_fu_20259_p1 = esl_sext<32,11>(tmp_886_reg_43216.read());
}

void ShuffleNetV2::thread_tmp_1038_fu_24060_p3() {
    tmp_1038_fu_24060_p3 = esl_concat<11,1>(tmp_1036_fu_24043_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1039_fu_24072_p2() {
    tmp_1039_fu_24072_p2 = (!p_shl423_cast_fu_24056_p1.read().is_01() || !p_shl424_cast_fu_24068_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl423_cast_fu_24056_p1.read()) + sc_biguint<15>(p_shl424_cast_fu_24068_p1.read()));
}

void ShuffleNetV2::thread_tmp_103_cast_fu_22267_p1() {
    tmp_103_cast_fu_22267_p1 = esl_sext<32,7>(tmp_85_reg_43822.read());
}

void ShuffleNetV2::thread_tmp_103_fu_23774_p2() {
    tmp_103_fu_23774_p2 = (!p_shl66_cast_fu_23758_p1.read().is_01() || !p_shl67_cast_fu_23770_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl66_cast_fu_23758_p1.read()) - sc_biguint<7>(p_shl67_cast_fu_23770_p1.read()));
}

void ShuffleNetV2::thread_tmp_1040_fu_24078_p2() {
    tmp_1040_fu_24078_p2 = (!h_75_cast_cast1_fu_24035_p1.read().is_01() || !tmp_1026_reg_44367.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_75_cast_cast1_fu_24035_p1.read()) + sc_biguint<10>(tmp_1026_reg_44367.read()));
}

void ShuffleNetV2::thread_tmp_1041_fu_24083_p3() {
    tmp_1041_fu_24083_p3 = esl_concat<10,3>(tmp_1040_fu_24078_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1042_fu_24095_p3() {
    tmp_1042_fu_24095_p3 = esl_concat<10,1>(tmp_1040_fu_24078_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1043_fu_24107_p2() {
    tmp_1043_fu_24107_p2 = (!p_shl425_cast_fu_24091_p1.read().is_01() || !p_shl426_cast_fu_24103_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl425_cast_fu_24091_p1.read()) + sc_biguint<14>(p_shl426_cast_fu_24103_p1.read()));
}

void ShuffleNetV2::thread_tmp_1044_fu_23931_p2() {
    tmp_1044_fu_23931_p2 = (!tmp_1033_reg_44344.read().is_01() || !w_74_cast_cast_fu_23927_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1033_reg_44344.read()) + sc_biguint<15>(w_74_cast_cast_fu_23927_p1.read()));
}

void ShuffleNetV2::thread_tmp_1045_fu_24133_p2() {
    tmp_1045_fu_24133_p2 = (!tmp_1039_reg_44393.read().is_01() || !w_76_cast_cast_fu_24129_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1039_reg_44393.read()) + sc_biguint<15>(w_76_cast_cast_fu_24129_p1.read()));
}

void ShuffleNetV2::thread_tmp_1046_fu_24143_p2() {
    tmp_1046_fu_24143_p2 = (!tmp_1043_reg_44398.read().is_01() || !w_76_cast_cast1_fu_24125_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1043_reg_44398.read()) + sc_biguint<14>(w_76_cast_cast1_fu_24125_p1.read()));
}

void ShuffleNetV2::thread_tmp_1047_fu_24524_p1() {
    tmp_1047_fu_24524_p1 = k26_reg_11343.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1048_fu_24257_p1() {
    tmp_1048_fu_24257_p1 = i76_reg_11321.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1049_fu_24354_p3() {
    tmp_1049_fu_24354_p3 = esl_concat<9,5>(sum42_reg_44476.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_104_fu_23784_p2() {
    tmp_104_fu_23784_p2 = (!tmp_103_fu_23774_p2.read().is_01() || !i75_cast_reg_44286.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_103_fu_23774_p2.read()) + sc_biguint<7>(i75_cast_reg_44286.read()));
}

void ShuffleNetV2::thread_tmp_1050_fu_24361_p1() {
    tmp_1050_fu_24361_p1 = esl_sext<15,14>(tmp_1049_fu_24354_p3.read());
}

void ShuffleNetV2::thread_tmp_1051_fu_24369_p3() {
    tmp_1051_fu_24369_p3 = esl_concat<9,3>(sum42_reg_44476.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1052_fu_24376_p1() {
    tmp_1052_fu_24376_p1 = esl_sext<13,12>(tmp_1051_fu_24369_p3.read());
}

void ShuffleNetV2::thread_tmp_1053_fu_24384_p2() {
    tmp_1053_fu_24384_p2 = (!p_shl427_cast_fu_24365_p1.read().is_01() || !p_shl428_cast_fu_24380_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl427_cast_fu_24365_p1.read()) - sc_biguint<16>(p_shl428_cast_fu_24380_p1.read()));
}

void ShuffleNetV2::thread_tmp_1054_fu_24394_p2() {
    tmp_1054_fu_24394_p2 = (!tmp_1238_cast_fu_24390_p1.read().is_01() || !ci48_cast1_cast_reg_44444.read().is_01())? sc_lv<17>(): (sc_bigint<17>(tmp_1238_cast_fu_24390_p1.read()) + sc_biguint<17>(ci48_cast1_cast_reg_44444.read()));
}

void ShuffleNetV2::thread_tmp_1055_fu_24461_p1() {
    tmp_1055_fu_24461_p1 = grp_fu_24345_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_1056_cast_fu_20637_p1() {
    tmp_1056_cast_fu_20637_p1 = esl_sext<17,16>(tmp_900_fu_20631_p2.read());
}

void ShuffleNetV2::thread_tmp_1057_cast_fu_20646_p1() {
    tmp_1057_cast_fu_20646_p1 = esl_sext<32,17>(tmp_901_fu_20641_p2.read());
}

void ShuffleNetV2::thread_tmp_1058_fu_24450_p2() {
    tmp_1058_fu_24450_p2 = (!p_shl429_cast_fu_24436_p3.read().is_01() || !p_shl430_cast_fu_24443_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl429_cast_fu_24436_p3.read()) - sc_biguint<8>(p_shl430_cast_fu_24443_p3.read()));
}

void ShuffleNetV2::thread_tmp_1059_fu_24456_p2() {
    tmp_1059_fu_24456_p2 = (!tmp_1058_fu_24450_p2.read().is_01() || !tmp_149_cast_cast_reg_44457.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1058_fu_24450_p2.read()) + sc_bigint<8>(tmp_149_cast_cast_reg_44457.read()));
}

void ShuffleNetV2::thread_tmp_105_cast_cast_fu_21924_p1() {
    tmp_105_cast_cast_fu_21924_p1 = esl_sext<8,7>(tmp_81_fu_21919_p2.read());
}

void ShuffleNetV2::thread_tmp_105_fu_23515_p2() {
    tmp_105_fu_23515_p2 = (!p_shl68_cast_fu_23499_p1.read().is_01() || !p_shl69_cast_fu_23511_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl68_cast_fu_23499_p1.read()) - sc_biguint<7>(p_shl69_cast_fu_23511_p1.read()));
}

void ShuffleNetV2::thread_tmp_1060_fu_24957_p1() {
    tmp_1060_fu_24957_p1 = co93_reg_11420.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1061_fu_24991_p4() {
    tmp_1061_fu_24991_p4 = co93_reg_11420.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_1062_fu_24865_p1() {
    tmp_1062_fu_24865_p1 = k28_reg_11409.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1063_cast_fu_20712_p1() {
    tmp_1063_cast_fu_20712_p1 = esl_sext<32,8>(tmp_906_reg_43347.read());
}

void ShuffleNetV2::thread_tmp_1063_fu_24672_p1() {
    tmp_1063_fu_24672_p1 = i81_reg_11387.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1064_fu_24719_p3() {
    tmp_1064_fu_24719_p3 = esl_concat<7,2>(tmp_121_fu_24710_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1065_fu_24731_p2() {
    tmp_1065_fu_24731_p2 = (!p_shl431_cast_fu_24727_p1.read().is_01() || !tmp_162_cast_cast_fu_24715_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl431_cast_fu_24727_p1.read()) - sc_bigint<10>(tmp_162_cast_cast_fu_24715_p1.read()));
}

void ShuffleNetV2::thread_tmp_1066_fu_24737_p2() {
    tmp_1066_fu_24737_p2 = (!w77_cast_cast_reg_44571.read().is_01() || !tmp_1065_fu_24731_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w77_cast_cast_reg_44571.read()) + sc_biguint<10>(tmp_1065_fu_24731_p2.read()));
}

void ShuffleNetV2::thread_tmp_1067_fu_24753_p2() {
    tmp_1067_fu_24753_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1066_reg_44610.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1068_fu_24758_p2() {
    tmp_1068_fu_24758_p2 = (!tmp_1067_fu_24753_p2.read().is_01() || !tmp_1066_reg_44610.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1067_fu_24753_p2.read()) - sc_biguint<10>(tmp_1066_reg_44610.read()));
}

void ShuffleNetV2::thread_tmp_1069_fu_24763_p2() {
    tmp_1069_fu_24763_p2 = (!h76_cast_cast_reg_44589.read().is_01() || !tmp_1068_fu_24758_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h76_cast_cast_reg_44589.read()) + sc_biguint<10>(tmp_1068_fu_24758_p2.read()));
}

void ShuffleNetV2::thread_tmp_106_cast_cast_fu_21974_p1() {
    tmp_106_cast_cast_fu_21974_p1 = esl_sext<9,7>(tmp_86_fu_21968_p2.read());
}

void ShuffleNetV2::thread_tmp_106_cast_fu_23581_p1() {
    tmp_106_cast_fu_23581_p1 = esl_sext<10,9>(tmp_106_reg_44245.read());
}

void ShuffleNetV2::thread_tmp_106_fu_23525_p2() {
    tmp_106_fu_23525_p2 = (!tmp_137_cast_cast_fu_23521_p1.read().is_01() || !tmp_129_cast_cast_reg_44214.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_137_cast_cast_fu_23521_p1.read()) + sc_biguint<9>(tmp_129_cast_cast_reg_44214.read()));
}

void ShuffleNetV2::thread_tmp_1070_fu_24771_p3() {
    tmp_1070_fu_24771_p3 = esl_concat<9,2>(sum25_reg_44616.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1071_fu_24782_p2() {
    tmp_1071_fu_24782_p2 = (!p_shl433_cast_fu_24778_p1.read().is_01() || !sum25_cast_cast_fu_24768_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl433_cast_fu_24778_p1.read()) - sc_biguint<12>(sum25_cast_cast_fu_24768_p1.read()));
}

void ShuffleNetV2::thread_tmp_1072_fu_24788_p2() {
    tmp_1072_fu_24788_p2 = (!w77_cast_cast1_reg_44566.read().is_01() || !tmp_1071_fu_24782_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(w77_cast_cast1_reg_44566.read()) + sc_biguint<12>(tmp_1071_fu_24782_p2.read()));
}

void ShuffleNetV2::thread_tmp_1073_fu_24796_p3() {
    tmp_1073_fu_24796_p3 = esl_concat<12,2>(tmp_1072_reg_44627.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1074_cast_fu_21040_p1() {
    tmp_1074_cast_fu_21040_p1 = esl_zext<32,15>(tmp_917_fu_21035_p2.read());
}

void ShuffleNetV2::thread_tmp_1074_fu_24807_p2() {
    tmp_1074_fu_24807_p2 = (!p_shl237_fu_24803_p1.read().is_01() || !tmp_1260_cast_fu_24793_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl237_fu_24803_p1.read()) - sc_bigint<32>(tmp_1260_cast_fu_24793_p1.read()));
}

void ShuffleNetV2::thread_tmp_1075_cast_fu_21050_p1() {
    tmp_1075_cast_fu_21050_p1 = esl_zext<32,14>(tmp_918_reg_43446.read());
}

void ShuffleNetV2::thread_tmp_1075_fu_24813_p2() {
    tmp_1075_fu_24813_p2 = (!h76_cast_reg_44584.read().is_01() || !tmp_1074_fu_24807_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h76_cast_reg_44584.read()) + sc_biguint<32>(tmp_1074_fu_24807_p2.read()));
}

void ShuffleNetV2::thread_tmp_1076_fu_25381_p3() {
    tmp_1076_fu_25381_p3 = esl_concat<6,3>(co95_reg_11475.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1077_fu_25393_p3() {
    tmp_1077_fu_25393_p3 = esl_concat<6,1>(co95_reg_11475.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1078_fu_25405_p2() {
    tmp_1078_fu_25405_p2 = (!p_shl436_cast_fu_25401_p1.read().is_01() || !p_shl435_cast_fu_25389_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl436_cast_fu_25401_p1.read()) + sc_biguint<10>(p_shl435_cast_fu_25389_p1.read()));
}

void ShuffleNetV2::thread_tmp_1079_fu_25305_p1() {
    tmp_1079_fu_25305_p1 = k30_reg_11464.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_107_fu_23554_p2() {
    tmp_107_fu_23554_p2 = (!p_shl70_cast_fu_23538_p1.read().is_01() || !p_shl71_cast_fu_23550_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl70_cast_fu_23538_p1.read()) - sc_biguint<8>(p_shl71_cast_fu_23550_p1.read()));
}

void ShuffleNetV2::thread_tmp_1080_fu_25046_p1() {
    tmp_1080_fu_25046_p1 = i83_reg_11442.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1081_fu_25143_p3() {
    tmp_1081_fu_25143_p3 = esl_concat<11,5>(sum47_reg_44736.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1082_fu_25154_p3() {
    tmp_1082_fu_25154_p3 = esl_concat<11,3>(sum47_reg_44736.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1083_fu_25165_p2() {
    tmp_1083_fu_25165_p2 = (!p_shl437_cast_fu_25150_p1.read().is_01() || !p_shl438_cast_fu_25161_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl437_cast_fu_25150_p1.read()) - sc_biguint<17>(p_shl438_cast_fu_25161_p1.read()));
}

void ShuffleNetV2::thread_tmp_1084_cast_fu_21284_p1() {
    tmp_1084_cast_fu_21284_p1 = esl_sext<17,16>(tmp_923_fu_21278_p2.read());
}

void ShuffleNetV2::thread_tmp_1084_fu_25175_p2() {
    tmp_1084_fu_25175_p2 = (!ci50_cast1_cast_reg_44704.read().is_01() || !tmp_1275_cast_fu_25171_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci50_cast1_cast_reg_44704.read()) + sc_bigint<18>(tmp_1275_cast_fu_25171_p1.read()));
}

void ShuffleNetV2::thread_tmp_1085_cast_fu_21293_p1() {
    tmp_1085_cast_fu_21293_p1 = esl_sext<32,17>(tmp_924_fu_21288_p2.read());
}

void ShuffleNetV2::thread_tmp_1085_fu_25242_p1() {
    tmp_1085_fu_25242_p1 = grp_fu_25134_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_1088_fu_25231_p2() {
    tmp_1088_fu_25231_p2 = (!p_shl439_cast_fu_25217_p3.read().is_01() || !p_shl440_cast_fu_25224_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl439_cast_fu_25217_p3.read()) - sc_biguint<8>(p_shl440_cast_fu_25224_p3.read()));
}

void ShuffleNetV2::thread_tmp_1089_fu_25237_p2() {
    tmp_1089_fu_25237_p2 = (!tmp_167_cast_cast_reg_44717.read().is_01() || !tmp_1088_fu_25231_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_167_cast_cast_reg_44717.read()) + sc_biguint<8>(tmp_1088_fu_25231_p2.read()));
}

void ShuffleNetV2::thread_tmp_108_cast_fu_22013_p1() {
    tmp_108_cast_fu_22013_p1 = esl_sext<10,8>(tmp_88_fu_22007_p2.read());
}

void ShuffleNetV2::thread_tmp_108_fu_23987_p2() {
    tmp_108_fu_23987_p2 = (!co87_cast_fu_23971_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co87_cast_fu_23971_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_1090_fu_25500_p3() {
    tmp_1090_fu_25500_p3 = esl_concat<6,3>(co97_reg_11508.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1091_cast_fu_21359_p1() {
    tmp_1091_cast_fu_21359_p1 = esl_sext<32,8>(tmp_929_reg_43528.read());
}

void ShuffleNetV2::thread_tmp_1091_fu_25512_p3() {
    tmp_1091_fu_25512_p3 = esl_concat<6,1>(co97_reg_11508.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1092_fu_25524_p2() {
    tmp_1092_fu_25524_p2 = (!p_shl442_cast_fu_25520_p1.read().is_01() || !p_shl441_cast_fu_25508_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl442_cast_fu_25520_p1.read()) + sc_biguint<10>(p_shl441_cast_fu_25508_p1.read()));
}

void ShuffleNetV2::thread_tmp_1093_fu_25552_p3() {
    tmp_1093_fu_25552_p3 = esl_concat<7,3>(tmp_127_fu_25546_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1094_fu_25564_p3() {
    tmp_1094_fu_25564_p3 = esl_concat<7,1>(tmp_127_fu_25546_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1095_fu_25576_p2() {
    tmp_1095_fu_25576_p2 = (!p_shl444_cast_fu_25572_p1.read().is_01() || !p_shl443_cast_fu_25560_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl444_cast_fu_25572_p1.read()) + sc_biguint<11>(p_shl443_cast_fu_25560_p1.read()));
}

void ShuffleNetV2::thread_tmp_1096_fu_25439_p2() {
    tmp_1096_fu_25439_p2 = (!h_79_cast_cast_fu_25435_p1.read().is_01() || !tmp_1078_reg_44808.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_79_cast_cast_fu_25435_p1.read()) + sc_biguint<10>(tmp_1078_reg_44808.read()));
}

void ShuffleNetV2::thread_tmp_1097_fu_25444_p3() {
    tmp_1097_fu_25444_p3 = esl_concat<10,3>(tmp_1096_fu_25439_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1098_fu_25456_p3() {
    tmp_1098_fu_25456_p3 = esl_concat<10,1>(tmp_1096_fu_25439_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1099_fu_25468_p2() {
    tmp_1099_fu_25468_p2 = (!p_shl445_cast_fu_25452_p1.read().is_01() || !p_shl446_cast_fu_25464_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl445_cast_fu_25452_p1.read()) + sc_biguint<15>(p_shl446_cast_fu_25464_p1.read()));
}

void ShuffleNetV2::thread_tmp_109_fu_24196_p2() {
    tmp_109_fu_24196_p2 = (!p_shl72_cast_fu_24180_p1.read().is_01() || !p_shl73_cast_fu_24192_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl72_cast_fu_24180_p1.read()) - sc_biguint<7>(p_shl73_cast_fu_24192_p1.read()));
}

void ShuffleNetV2::thread_tmp_1100_fu_25727_p1() {
    tmp_1100_fu_25727_p1 = co99_reg_11541.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1101_fu_25761_p4() {
    tmp_1101_fu_25761_p4 = co99_reg_11541.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_1102_fu_25602_p2() {
    tmp_1102_fu_25602_p2 = (!h_81_cast_cast_fu_25598_p1.read().is_01() || !tmp_1095_reg_44865.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_81_cast_cast_fu_25598_p1.read()) + sc_biguint<11>(tmp_1095_reg_44865.read()));
}

void ShuffleNetV2::thread_tmp_1103_cast_fu_21727_p1() {
    tmp_1103_cast_fu_21727_p1 = esl_zext<32,10>(tmp_939_reg_43652.read());
}

void ShuffleNetV2::thread_tmp_1103_fu_25607_p3() {
    tmp_1103_fu_25607_p3 = esl_concat<11,3>(tmp_1102_fu_25602_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1104_fu_25619_p3() {
    tmp_1104_fu_25619_p3 = esl_concat<11,1>(tmp_1102_fu_25602_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1105_cast_fu_21682_p1() {
    tmp_1105_cast_fu_21682_p1 = esl_sext<13,12>(tmp_941_fu_21676_p2.read());
}

void ShuffleNetV2::thread_tmp_1105_fu_25631_p2() {
    tmp_1105_fu_25631_p2 = (!p_shl447_cast_fu_25615_p1.read().is_01() || !p_shl448_cast_fu_25627_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl447_cast_fu_25615_p1.read()) + sc_biguint<15>(p_shl448_cast_fu_25627_p1.read()));
}

void ShuffleNetV2::thread_tmp_1106_cast_fu_21691_p1() {
    tmp_1106_cast_fu_21691_p1 = esl_sext<32,13>(tmp_942_reg_43657.read());
}

void ShuffleNetV2::thread_tmp_1106_fu_25637_p2() {
    tmp_1106_fu_25637_p2 = (!h_81_cast_cast1_fu_25594_p1.read().is_01() || !tmp_1092_reg_44852.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_81_cast_cast1_fu_25594_p1.read()) + sc_biguint<10>(tmp_1092_reg_44852.read()));
}

void ShuffleNetV2::thread_tmp_1107_fu_25642_p3() {
    tmp_1107_fu_25642_p3 = esl_concat<10,3>(tmp_1106_fu_25637_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1108_fu_25654_p3() {
    tmp_1108_fu_25654_p3 = esl_concat<10,1>(tmp_1106_fu_25637_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1109_fu_25666_p2() {
    tmp_1109_fu_25666_p2 = (!p_shl449_cast_fu_25650_p1.read().is_01() || !p_shl450_cast_fu_25662_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl449_cast_fu_25650_p1.read()) + sc_biguint<14>(p_shl450_cast_fu_25662_p1.read()));
}

void ShuffleNetV2::thread_tmp_110_fu_24236_p2() {
    tmp_110_fu_24236_p2 = (!tmp_109_reg_44434.read().is_01() || !ci48_cast_fu_24216_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_109_reg_44434.read()) + sc_biguint<7>(ci48_cast_fu_24216_p1.read()));
}

void ShuffleNetV2::thread_tmp_1110_fu_25490_p2() {
    tmp_1110_fu_25490_p2 = (!tmp_1099_reg_44829.read().is_01() || !w_80_cast_cast_fu_25486_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1099_reg_44829.read()) + sc_biguint<15>(w_80_cast_cast_fu_25486_p1.read()));
}

void ShuffleNetV2::thread_tmp_1111_fu_25692_p2() {
    tmp_1111_fu_25692_p2 = (!tmp_1105_reg_44878.read().is_01() || !w_82_cast_cast_fu_25688_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1105_reg_44878.read()) + sc_biguint<15>(w_82_cast_cast_fu_25688_p1.read()));
}

void ShuffleNetV2::thread_tmp_1112_fu_25702_p2() {
    tmp_1112_fu_25702_p2 = (!tmp_1109_reg_44883.read().is_01() || !w_82_cast_cast1_fu_25684_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1109_reg_44883.read()) + sc_biguint<14>(w_82_cast_cast1_fu_25684_p1.read()));
}

void ShuffleNetV2::thread_tmp_1113_fu_26075_p1() {
    tmp_1113_fu_26075_p1 = k32_reg_11585.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1114_fu_25816_p1() {
    tmp_1114_fu_25816_p1 = i87_reg_11563.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1115_fu_25913_p3() {
    tmp_1115_fu_25913_p3 = esl_concat<11,5>(sum49_reg_44961.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1116_fu_25924_p3() {
    tmp_1116_fu_25924_p3 = esl_concat<11,3>(sum49_reg_44961.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1117_fu_25935_p2() {
    tmp_1117_fu_25935_p2 = (!p_shl451_cast_fu_25920_p1.read().is_01() || !p_shl452_cast_fu_25931_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl451_cast_fu_25920_p1.read()) - sc_biguint<17>(p_shl452_cast_fu_25931_p1.read()));
}

void ShuffleNetV2::thread_tmp_1118_fu_25945_p2() {
    tmp_1118_fu_25945_p2 = (!ci52_cast1_cast_reg_44929.read().is_01() || !tmp_1314_cast_fu_25941_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci52_cast1_cast_reg_44929.read()) + sc_bigint<18>(tmp_1314_cast_fu_25941_p1.read()));
}

void ShuffleNetV2::thread_tmp_1119_fu_26012_p1() {
    tmp_1119_fu_26012_p1 = grp_fu_25904_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_111_fu_24552_p2() {
    tmp_111_fu_24552_p2 = (!p_shl74_cast_fu_24536_p1.read().is_01() || !p_shl75_cast_fu_24548_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl74_cast_fu_24536_p1.read()) - sc_biguint<7>(p_shl75_cast_fu_24548_p1.read()));
}

void ShuffleNetV2::thread_tmp_1121_cast_fu_22065_p1() {
    tmp_1121_cast_fu_22065_p1 = esl_sext<17,16>(tmp_953_fu_22059_p2.read());
}

void ShuffleNetV2::thread_tmp_1122_cast_fu_22074_p1() {
    tmp_1122_cast_fu_22074_p1 = esl_sext<32,17>(tmp_954_fu_22069_p2.read());
}

void ShuffleNetV2::thread_tmp_1122_fu_26001_p2() {
    tmp_1122_fu_26001_p2 = (!p_shl453_cast_fu_25987_p3.read().is_01() || !p_shl454_cast_fu_25994_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl453_cast_fu_25987_p3.read()) - sc_biguint<8>(p_shl454_cast_fu_25994_p3.read()));
}

void ShuffleNetV2::thread_tmp_1123_fu_26007_p2() {
    tmp_1123_fu_26007_p2 = (!tmp_180_cast_cast_reg_44942.read().is_01() || !tmp_1122_fu_26001_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_180_cast_cast_reg_44942.read()) + sc_biguint<8>(tmp_1122_fu_26001_p2.read()));
}

void ShuffleNetV2::thread_tmp_1124_fu_26500_p1() {
    tmp_1124_fu_26500_p1 = co103_reg_11662.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1125_fu_26534_p4() {
    tmp_1125_fu_26534_p4 = co103_reg_11662.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_1126_fu_26412_p1() {
    tmp_1126_fu_26412_p1 = k34_reg_11651.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1127_fu_26219_p1() {
    tmp_1127_fu_26219_p1 = i92_reg_11629.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1128_cast_fu_22140_p1() {
    tmp_1128_cast_fu_22140_p1 = esl_sext<32,8>(tmp_959_reg_43788.read());
}

void ShuffleNetV2::thread_tmp_1128_fu_26266_p3() {
    tmp_1128_fu_26266_p3 = esl_concat<7,2>(tmp_140_fu_26257_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1129_fu_26278_p2() {
    tmp_1129_fu_26278_p2 = (!p_shl455_cast_fu_26274_p1.read().is_01() || !tmp_193_cast_cast_fu_26262_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl455_cast_fu_26274_p1.read()) - sc_bigint<10>(tmp_193_cast_cast_fu_26262_p1.read()));
}

void ShuffleNetV2::thread_tmp_112_fu_24562_p2() {
    tmp_112_fu_24562_p2 = (!tmp_111_fu_24552_p2.read().is_01() || !i80_cast_reg_44511.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_111_fu_24552_p2.read()) + sc_biguint<7>(i80_cast_reg_44511.read()));
}

void ShuffleNetV2::thread_tmp_1130_fu_26284_p2() {
    tmp_1130_fu_26284_p2 = (!w83_cast_cast_reg_45056.read().is_01() || !tmp_1129_fu_26278_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w83_cast_cast_reg_45056.read()) + sc_biguint<10>(tmp_1129_fu_26278_p2.read()));
}

void ShuffleNetV2::thread_tmp_1131_fu_26300_p2() {
    tmp_1131_fu_26300_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1130_reg_45095.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1132_fu_26305_p2() {
    tmp_1132_fu_26305_p2 = (!tmp_1131_fu_26300_p2.read().is_01() || !tmp_1130_reg_45095.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1131_fu_26300_p2.read()) - sc_biguint<10>(tmp_1130_reg_45095.read()));
}

void ShuffleNetV2::thread_tmp_1133_fu_26310_p2() {
    tmp_1133_fu_26310_p2 = (!h82_cast_cast_reg_45074.read().is_01() || !tmp_1132_fu_26305_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h82_cast_cast_reg_45074.read()) + sc_biguint<10>(tmp_1132_fu_26305_p2.read()));
}

void ShuffleNetV2::thread_tmp_1134_fu_26318_p3() {
    tmp_1134_fu_26318_p3 = esl_concat<9,2>(sum27_reg_45101.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1135_fu_26329_p2() {
    tmp_1135_fu_26329_p2 = (!p_shl457_cast_fu_26325_p1.read().is_01() || !sum27_cast_cast_fu_26315_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl457_cast_fu_26325_p1.read()) - sc_biguint<12>(sum27_cast_cast_fu_26315_p1.read()));
}

void ShuffleNetV2::thread_tmp_1136_fu_26335_p2() {
    tmp_1136_fu_26335_p2 = (!w83_cast_cast1_reg_45051.read().is_01() || !tmp_1135_fu_26329_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(w83_cast_cast1_reg_45051.read()) + sc_biguint<12>(tmp_1135_fu_26329_p2.read()));
}

void ShuffleNetV2::thread_tmp_1137_fu_26343_p3() {
    tmp_1137_fu_26343_p3 = esl_concat<12,2>(tmp_1136_reg_45112.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1138_fu_26354_p2() {
    tmp_1138_fu_26354_p2 = (!p_shl240_fu_26350_p1.read().is_01() || !tmp_1336_cast_fu_26340_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl240_fu_26350_p1.read()) - sc_bigint<32>(tmp_1336_cast_fu_26340_p1.read()));
}

void ShuffleNetV2::thread_tmp_1139_fu_26360_p2() {
    tmp_1139_fu_26360_p2 = (!h82_cast_reg_45069.read().is_01() || !tmp_1138_fu_26354_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h82_cast_reg_45069.read()) + sc_biguint<32>(tmp_1138_fu_26354_p2.read()));
}

void ShuffleNetV2::thread_tmp_113_fu_24285_p2() {
    tmp_113_fu_24285_p2 = (!p_shl76_cast_fu_24269_p1.read().is_01() || !p_shl77_cast_fu_24281_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl76_cast_fu_24269_p1.read()) - sc_biguint<7>(p_shl77_cast_fu_24281_p1.read()));
}

void ShuffleNetV2::thread_tmp_1140_fu_26920_p3() {
    tmp_1140_fu_26920_p3 = esl_concat<6,3>(co105_reg_11717.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1141_fu_26932_p3() {
    tmp_1141_fu_26932_p3 = esl_concat<6,1>(co105_reg_11717.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1142_fu_26944_p2() {
    tmp_1142_fu_26944_p2 = (!p_shl460_cast_fu_26940_p1.read().is_01() || !p_shl459_cast_fu_26928_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl460_cast_fu_26940_p1.read()) + sc_biguint<10>(p_shl459_cast_fu_26928_p1.read()));
}

void ShuffleNetV2::thread_tmp_1143_fu_26848_p1() {
    tmp_1143_fu_26848_p1 = k36_reg_11706.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1144_fu_26589_p1() {
    tmp_1144_fu_26589_p1 = i94_reg_11684.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1145_fu_26686_p3() {
    tmp_1145_fu_26686_p3 = esl_concat<11,5>(sum52_reg_45221.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1146_fu_26697_p3() {
    tmp_1146_fu_26697_p3 = esl_concat<11,3>(sum52_reg_45221.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1147_fu_26708_p2() {
    tmp_1147_fu_26708_p2 = (!p_shl461_cast_fu_26693_p1.read().is_01() || !p_shl462_cast_fu_26704_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl461_cast_fu_26693_p1.read()) - sc_biguint<17>(p_shl462_cast_fu_26704_p1.read()));
}

void ShuffleNetV2::thread_tmp_1148_fu_26718_p2() {
    tmp_1148_fu_26718_p2 = (!ci54_cast1_cast_reg_45189.read().is_01() || !tmp_1351_cast_fu_26714_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci54_cast1_cast_reg_45189.read()) + sc_bigint<18>(tmp_1351_cast_fu_26714_p1.read()));
}

void ShuffleNetV2::thread_tmp_1149_cast_fu_22385_p1() {
    tmp_1149_cast_fu_22385_p1 = esl_zext<32,15>(tmp_980_fu_22380_p2.read());
}

void ShuffleNetV2::thread_tmp_1149_fu_26785_p1() {
    tmp_1149_fu_26785_p1 = grp_fu_26677_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_114_cast_cast_fu_22661_p1() {
    tmp_114_cast_cast_fu_22661_p1 = esl_zext<9,4>(tmp_971_fu_22651_p4.read());
}

void ShuffleNetV2::thread_tmp_114_cast_fu_24351_p1() {
    tmp_114_cast_fu_24351_p1 = esl_sext<10,9>(tmp_114_reg_44470.read());
}

void ShuffleNetV2::thread_tmp_114_fu_24295_p2() {
    tmp_114_fu_24295_p2 = (!tmp_145_cast_cast_reg_44439.read().is_01() || !tmp_150_cast_cast_fu_24291_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_145_cast_cast_reg_44439.read()) + sc_bigint<9>(tmp_150_cast_cast_fu_24291_p1.read()));
}

void ShuffleNetV2::thread_tmp_1150_cast_fu_22587_p1() {
    tmp_1150_cast_fu_22587_p1 = esl_zext<32,15>(tmp_981_fu_22582_p2.read());
}

void ShuffleNetV2::thread_tmp_1151_cast_fu_22597_p1() {
    tmp_1151_cast_fu_22597_p1 = esl_zext<32,14>(tmp_982_reg_43931.read());
}

void ShuffleNetV2::thread_tmp_1152_fu_26774_p2() {
    tmp_1152_fu_26774_p2 = (!p_shl463_cast_fu_26760_p3.read().is_01() || !p_shl464_cast_fu_26767_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl463_cast_fu_26760_p3.read()) - sc_biguint<8>(p_shl464_cast_fu_26767_p3.read()));
}

void ShuffleNetV2::thread_tmp_1153_fu_26780_p2() {
    tmp_1153_fu_26780_p2 = (!tmp_198_cast_cast_reg_45202.read().is_01() || !tmp_1152_fu_26774_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_198_cast_cast_reg_45202.read()) + sc_biguint<8>(tmp_1152_fu_26774_p2.read()));
}

void ShuffleNetV2::thread_tmp_1154_fu_27039_p3() {
    tmp_1154_fu_27039_p3 = esl_concat<6,3>(co107_reg_11750.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1155_fu_27051_p3() {
    tmp_1155_fu_27051_p3 = esl_concat<6,1>(co107_reg_11750.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1156_fu_27063_p2() {
    tmp_1156_fu_27063_p2 = (!p_shl466_cast_fu_27059_p1.read().is_01() || !p_shl465_cast_fu_27047_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl466_cast_fu_27059_p1.read()) + sc_biguint<10>(p_shl465_cast_fu_27047_p1.read()));
}

void ShuffleNetV2::thread_tmp_1157_fu_27091_p3() {
    tmp_1157_fu_27091_p3 = esl_concat<7,3>(tmp_146_fu_27085_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1158_fu_27103_p3() {
    tmp_1158_fu_27103_p3 = esl_concat<7,1>(tmp_146_fu_27085_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1159_fu_27115_p2() {
    tmp_1159_fu_27115_p2 = (!p_shl468_cast_fu_27111_p1.read().is_01() || !p_shl467_cast_fu_27099_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl468_cast_fu_27111_p1.read()) + sc_biguint<11>(p_shl467_cast_fu_27099_p1.read()));
}

void ShuffleNetV2::thread_tmp_115_cast_fu_22999_p1() {
    tmp_115_cast_fu_22999_p1 = esl_sext<10,7>(tmp_92_fu_22993_p2.read());
}

void ShuffleNetV2::thread_tmp_115_fu_24324_p2() {
    tmp_115_fu_24324_p2 = (!p_shl78_cast_fu_24308_p1.read().is_01() || !p_shl79_cast_fu_24320_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl78_cast_fu_24308_p1.read()) - sc_biguint<8>(p_shl79_cast_fu_24320_p1.read()));
}

void ShuffleNetV2::thread_tmp_1160_cast_fu_22831_p1() {
    tmp_1160_cast_fu_22831_p1 = esl_sext<17,16>(tmp_987_fu_22825_p2.read());
}

void ShuffleNetV2::thread_tmp_1160_fu_26978_p2() {
    tmp_1160_fu_26978_p2 = (!h_85_cast_cast_fu_26974_p1.read().is_01() || !tmp_1142_reg_45293.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_85_cast_cast_fu_26974_p1.read()) + sc_biguint<10>(tmp_1142_reg_45293.read()));
}

void ShuffleNetV2::thread_tmp_1161_cast_fu_22840_p1() {
    tmp_1161_cast_fu_22840_p1 = esl_sext<32,17>(tmp_988_fu_22835_p2.read());
}

void ShuffleNetV2::thread_tmp_1161_fu_26983_p3() {
    tmp_1161_fu_26983_p3 = esl_concat<10,3>(tmp_1160_fu_26978_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1162_fu_26995_p3() {
    tmp_1162_fu_26995_p3 = esl_concat<10,1>(tmp_1160_fu_26978_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1163_fu_27007_p2() {
    tmp_1163_fu_27007_p2 = (!p_shl469_cast_fu_26991_p1.read().is_01() || !p_shl470_cast_fu_27003_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl469_cast_fu_26991_p1.read()) + sc_biguint<15>(p_shl470_cast_fu_27003_p1.read()));
}

void ShuffleNetV2::thread_tmp_1164_fu_27266_p1() {
    tmp_1164_fu_27266_p1 = co109_reg_11783.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1165_fu_27300_p4() {
    tmp_1165_fu_27300_p4 = co109_reg_11783.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_1166_fu_27141_p2() {
    tmp_1166_fu_27141_p2 = (!h_87_cast_cast_fu_27137_p1.read().is_01() || !tmp_1159_reg_45350.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_87_cast_cast_fu_27137_p1.read()) + sc_biguint<11>(tmp_1159_reg_45350.read()));
}

void ShuffleNetV2::thread_tmp_1167_cast_fu_22906_p1() {
    tmp_1167_cast_fu_22906_p1 = esl_sext<32,8>(tmp_993_reg_44013.read());
}

void ShuffleNetV2::thread_tmp_1167_fu_27146_p3() {
    tmp_1167_fu_27146_p3 = esl_concat<11,3>(tmp_1166_fu_27141_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1168_fu_27158_p3() {
    tmp_1168_fu_27158_p3 = esl_concat<11,1>(tmp_1166_fu_27141_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1169_fu_27170_p2() {
    tmp_1169_fu_27170_p2 = (!p_shl471_cast_fu_27154_p1.read().is_01() || !p_shl472_cast_fu_27166_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl471_cast_fu_27154_p1.read()) + sc_biguint<15>(p_shl472_cast_fu_27166_p1.read()));
}

void ShuffleNetV2::thread_tmp_116_cast_fu_23033_p1() {
    tmp_116_cast_fu_23033_p1 = esl_sext<32,7>(tmp_93_reg_44047.read());
}

void ShuffleNetV2::thread_tmp_116_fu_24985_p2() {
    tmp_116_fu_24985_p2 = (!p_shl82_cast_fu_24969_p1.read().is_01() || !p_shl83_cast_fu_24981_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl82_cast_fu_24969_p1.read()) - sc_biguint<7>(p_shl83_cast_fu_24981_p1.read()));
}

void ShuffleNetV2::thread_tmp_1170_fu_27176_p2() {
    tmp_1170_fu_27176_p2 = (!h_87_cast_cast1_fu_27133_p1.read().is_01() || !tmp_1156_reg_45337.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_87_cast_cast1_fu_27133_p1.read()) + sc_biguint<10>(tmp_1156_reg_45337.read()));
}

void ShuffleNetV2::thread_tmp_1171_fu_27181_p3() {
    tmp_1171_fu_27181_p3 = esl_concat<10,3>(tmp_1170_fu_27176_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1172_fu_27193_p3() {
    tmp_1172_fu_27193_p3 = esl_concat<10,1>(tmp_1170_fu_27176_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1173_fu_27205_p2() {
    tmp_1173_fu_27205_p2 = (!p_shl473_cast_fu_27189_p1.read().is_01() || !p_shl474_cast_fu_27201_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl473_cast_fu_27189_p1.read()) + sc_biguint<14>(p_shl474_cast_fu_27201_p1.read()));
}

void ShuffleNetV2::thread_tmp_1174_fu_27029_p2() {
    tmp_1174_fu_27029_p2 = (!tmp_1163_reg_45314.read().is_01() || !w_86_cast_cast_fu_27025_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1163_reg_45314.read()) + sc_biguint<15>(w_86_cast_cast_fu_27025_p1.read()));
}

void ShuffleNetV2::thread_tmp_1175_fu_27231_p2() {
    tmp_1175_fu_27231_p2 = (!tmp_1169_reg_45363.read().is_01() || !w_88_cast_cast_fu_27227_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1169_reg_45363.read()) + sc_biguint<15>(w_88_cast_cast_fu_27227_p1.read()));
}

void ShuffleNetV2::thread_tmp_1176_fu_27241_p2() {
    tmp_1176_fu_27241_p2 = (!tmp_1173_reg_45368.read().is_01() || !w_88_cast_cast1_fu_27223_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1173_reg_45368.read()) + sc_biguint<14>(w_88_cast_cast1_fu_27223_p1.read()));
}

void ShuffleNetV2::thread_tmp_1177_fu_27614_p1() {
    tmp_1177_fu_27614_p1 = k38_reg_11827.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1178_fu_27355_p1() {
    tmp_1178_fu_27355_p1 = i98_reg_11805.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1179_cast_fu_23270_p1() {
    tmp_1179_cast_fu_23270_p1 = esl_zext<32,10>(tmp_1003_reg_44137.read());
}

void ShuffleNetV2::thread_tmp_1179_fu_27452_p3() {
    tmp_1179_fu_27452_p3 = esl_concat<11,5>(sum54_reg_45446.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_117_fu_24893_p2() {
    tmp_117_fu_24893_p2 = (!p_shl80_cast_fu_24877_p1.read().is_01() || !p_shl81_cast_fu_24889_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl80_cast_fu_24877_p1.read()) - sc_biguint<7>(p_shl81_cast_fu_24889_p1.read()));
}

void ShuffleNetV2::thread_tmp_1180_fu_27463_p3() {
    tmp_1180_fu_27463_p3 = esl_concat<11,3>(sum54_reg_45446.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1181_cast_fu_23225_p1() {
    tmp_1181_cast_fu_23225_p1 = esl_sext<13,12>(tmp_1005_fu_23219_p2.read());
}

void ShuffleNetV2::thread_tmp_1181_fu_27474_p2() {
    tmp_1181_fu_27474_p2 = (!p_shl475_cast_fu_27459_p1.read().is_01() || !p_shl476_cast_fu_27470_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl475_cast_fu_27459_p1.read()) - sc_biguint<17>(p_shl476_cast_fu_27470_p1.read()));
}

void ShuffleNetV2::thread_tmp_1182_cast_fu_23234_p1() {
    tmp_1182_cast_fu_23234_p1 = esl_sext<32,13>(tmp_1006_reg_44142.read());
}

void ShuffleNetV2::thread_tmp_1182_fu_27484_p2() {
    tmp_1182_fu_27484_p2 = (!ci56_cast1_cast_reg_45414.read().is_01() || !tmp_1390_cast_fu_27480_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci56_cast1_cast_reg_45414.read()) + sc_bigint<18>(tmp_1390_cast_fu_27480_p1.read()));
}

void ShuffleNetV2::thread_tmp_1183_fu_27551_p1() {
    tmp_1183_fu_27551_p1 = grp_fu_27443_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_1186_fu_27540_p2() {
    tmp_1186_fu_27540_p2 = (!p_shl477_cast_fu_27526_p3.read().is_01() || !p_shl478_cast_fu_27533_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl477_cast_fu_27526_p3.read()) - sc_biguint<8>(p_shl478_cast_fu_27533_p3.read()));
}

void ShuffleNetV2::thread_tmp_1187_fu_27546_p2() {
    tmp_1187_fu_27546_p2 = (!tmp_211_cast_cast_reg_45427.read().is_01() || !tmp_1186_fu_27540_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_211_cast_cast_reg_45427.read()) + sc_biguint<8>(tmp_1186_fu_27540_p2.read()));
}

void ShuffleNetV2::thread_tmp_1188_fu_28047_p1() {
    tmp_1188_fu_28047_p1 = co113_reg_11904.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1189_fu_28081_p4() {
    tmp_1189_fu_28081_p4 = co113_reg_11904.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_118_cast_cast_fu_22690_p1() {
    tmp_118_cast_cast_fu_22690_p1 = esl_sext<8,7>(tmp_91_fu_22685_p2.read());
}

void ShuffleNetV2::thread_tmp_118_fu_24903_p2() {
    tmp_118_fu_24903_p2 = (!tmp_117_fu_24893_p2.read().is_01() || !i83_cast_reg_44644.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_117_fu_24893_p2.read()) + sc_biguint<7>(i83_cast_reg_44644.read()));
}

void ShuffleNetV2::thread_tmp_1190_fu_27959_p1() {
    tmp_1190_fu_27959_p1 = k40_reg_11893.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1191_fu_27758_p1() {
    tmp_1191_fu_27758_p1 = i103_reg_11871.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1192_fu_27805_p3() {
    tmp_1192_fu_27805_p3 = esl_concat<7,2>(tmp_159_fu_27796_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1193_fu_27817_p2() {
    tmp_1193_fu_27817_p2 = (!p_shl479_cast_fu_27813_p1.read().is_01() || !tmp_224_cast_cast_fu_27801_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl479_cast_fu_27813_p1.read()) - sc_bigint<10>(tmp_224_cast_cast_fu_27801_p1.read()));
}

void ShuffleNetV2::thread_tmp_1194_fu_27823_p2() {
    tmp_1194_fu_27823_p2 = (!tmp_1193_fu_27817_p2.read().is_01() || !w89_cast_cast_reg_45541.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1193_fu_27817_p2.read()) + sc_biguint<10>(w89_cast_cast_reg_45541.read()));
}

void ShuffleNetV2::thread_tmp_1195_fu_27839_p2() {
    tmp_1195_fu_27839_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1194_reg_45580.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1196_fu_27844_p2() {
    tmp_1196_fu_27844_p2 = (!tmp_1195_fu_27839_p2.read().is_01() || !tmp_1194_reg_45580.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1195_fu_27839_p2.read()) - sc_biguint<10>(tmp_1194_reg_45580.read()));
}

void ShuffleNetV2::thread_tmp_1197_cast_fu_23612_p1() {
    tmp_1197_cast_fu_23612_p1 = esl_sext<17,16>(tmp_1017_fu_23606_p2.read());
}

void ShuffleNetV2::thread_tmp_1197_fu_27849_p2() {
    tmp_1197_fu_27849_p2 = (!tmp_1196_fu_27844_p2.read().is_01() || !h88_cast_cast_reg_45559.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1196_fu_27844_p2.read()) + sc_biguint<10>(h88_cast_cast_reg_45559.read()));
}

void ShuffleNetV2::thread_tmp_1198_cast_fu_23621_p1() {
    tmp_1198_cast_fu_23621_p1 = esl_sext<32,17>(tmp_1018_fu_23616_p2.read());
}

void ShuffleNetV2::thread_tmp_1198_fu_27861_p3() {
    tmp_1198_fu_27861_p3 = esl_concat<8,2>(sum29_reg_45586.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1199_fu_27868_p1() {
    tmp_1199_fu_27868_p1 = esl_sext<11,10>(tmp_1198_fu_27861_p3.read());
}

void ShuffleNetV2::thread_tmp_119_cast_cast_fu_22740_p1() {
    tmp_119_cast_cast_fu_22740_p1 = esl_sext<9,7>(tmp_94_fu_22734_p2.read());
}

void ShuffleNetV2::thread_tmp_119_fu_25025_p2() {
    tmp_119_fu_25025_p2 = (!tmp_116_reg_44694.read().is_01() || !ci50_cast_fu_25005_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_116_reg_44694.read()) + sc_biguint<7>(ci50_cast_fu_25005_p1.read()));
}

void ShuffleNetV2::thread_tmp_1200_fu_27876_p2() {
    tmp_1200_fu_27876_p2 = (!p_shl481_cast_fu_27872_p1.read().is_01() || !sum29_cast_cast_fu_27857_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl481_cast_fu_27872_p1.read()) - sc_biguint<12>(sum29_cast_cast_fu_27857_p1.read()));
}

void ShuffleNetV2::thread_tmp_1201_fu_27882_p2() {
    tmp_1201_fu_27882_p2 = (!tmp_1200_fu_27876_p2.read().is_01() || !w89_cast_cast1_reg_45536.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1200_fu_27876_p2.read()) + sc_biguint<12>(w89_cast_cast1_reg_45536.read()));
}

void ShuffleNetV2::thread_tmp_1202_fu_27890_p3() {
    tmp_1202_fu_27890_p3 = esl_concat<12,2>(tmp_1201_reg_45597.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1203_fu_27901_p2() {
    tmp_1203_fu_27901_p2 = (!p_shl244_fu_27897_p1.read().is_01() || !tmp_1413_cast_fu_27887_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl244_fu_27897_p1.read()) - sc_bigint<32>(tmp_1413_cast_fu_27887_p1.read()));
}

void ShuffleNetV2::thread_tmp_1204_cast_fu_23687_p1() {
    tmp_1204_cast_fu_23687_p1 = esl_sext<32,8>(tmp_1023_reg_44273.read());
}

void ShuffleNetV2::thread_tmp_1204_fu_27907_p2() {
    tmp_1204_fu_27907_p2 = (!tmp_1203_fu_27901_p2.read().is_01() || !h88_cast_reg_45554.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1203_fu_27901_p2.read()) + sc_biguint<32>(h88_cast_reg_45554.read()));
}

void ShuffleNetV2::thread_tmp_1205_fu_28467_p3() {
    tmp_1205_fu_28467_p3 = esl_concat<6,3>(co115_reg_11959.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1206_fu_28479_p3() {
    tmp_1206_fu_28479_p3 = esl_concat<6,1>(co115_reg_11959.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1207_fu_28491_p2() {
    tmp_1207_fu_28491_p2 = (!p_shl484_cast_fu_28487_p1.read().is_01() || !p_shl483_cast_fu_28475_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl484_cast_fu_28487_p1.read()) + sc_biguint<10>(p_shl483_cast_fu_28475_p1.read()));
}

void ShuffleNetV2::thread_tmp_1208_fu_28395_p1() {
    tmp_1208_fu_28395_p1 = k42_reg_11948.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1209_fu_28136_p1() {
    tmp_1209_fu_28136_p1 = i105_reg_11926.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_120_fu_24700_p2() {
    tmp_120_fu_24700_p2 = (!p_shl84_cast_fu_24684_p1.read().is_01() || !p_shl85_cast_fu_24696_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl84_cast_fu_24684_p1.read()) - sc_biguint<7>(p_shl85_cast_fu_24696_p1.read()));
}

void ShuffleNetV2::thread_tmp_1210_fu_28233_p3() {
    tmp_1210_fu_28233_p3 = esl_concat<11,5>(sum57_reg_45706.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1211_fu_28244_p3() {
    tmp_1211_fu_28244_p3 = esl_concat<11,3>(sum57_reg_45706.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1212_fu_28255_p2() {
    tmp_1212_fu_28255_p2 = (!p_shl485_cast_fu_28240_p1.read().is_01() || !p_shl486_cast_fu_28251_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl485_cast_fu_28240_p1.read()) - sc_biguint<17>(p_shl486_cast_fu_28251_p1.read()));
}

void ShuffleNetV2::thread_tmp_1213_fu_28265_p2() {
    tmp_1213_fu_28265_p2 = (!ci58_cast1_cast_reg_45674.read().is_01() || !tmp_1428_cast_fu_28261_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci58_cast1_cast_reg_45674.read()) + sc_bigint<18>(tmp_1428_cast_fu_28261_p1.read()));
}

void ShuffleNetV2::thread_tmp_1214_fu_28332_p1() {
    tmp_1214_fu_28332_p1 = grp_fu_28224_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_1217_fu_28321_p2() {
    tmp_1217_fu_28321_p2 = (!p_shl487_cast_fu_28307_p3.read().is_01() || !p_shl488_cast_fu_28314_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl487_cast_fu_28307_p3.read()) - sc_biguint<8>(p_shl488_cast_fu_28314_p3.read()));
}

void ShuffleNetV2::thread_tmp_1218_fu_28327_p2() {
    tmp_1218_fu_28327_p2 = (!tmp_229_cast_cast_reg_45687.read().is_01() || !tmp_1217_fu_28321_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_229_cast_cast_reg_45687.read()) + sc_biguint<8>(tmp_1217_fu_28321_p2.read()));
}

void ShuffleNetV2::thread_tmp_1219_fu_28586_p3() {
    tmp_1219_fu_28586_p3 = esl_concat<6,3>(co117_reg_11992.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_121_cast_fu_22779_p1() {
    tmp_121_cast_fu_22779_p1 = esl_sext<10,8>(tmp_96_fu_22773_p2.read());
}

void ShuffleNetV2::thread_tmp_121_fu_24710_p2() {
    tmp_121_fu_24710_p2 = (!co92_cast1_reg_44553.read().is_01() || !tmp_120_fu_24700_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co92_cast1_reg_44553.read()) + sc_biguint<7>(tmp_120_fu_24700_p2.read()));
}

void ShuffleNetV2::thread_tmp_1220_fu_28598_p3() {
    tmp_1220_fu_28598_p3 = esl_concat<6,1>(co117_reg_11992.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1221_fu_28610_p2() {
    tmp_1221_fu_28610_p2 = (!p_shl490_cast_fu_28606_p1.read().is_01() || !p_shl489_cast_fu_28594_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl490_cast_fu_28606_p1.read()) + sc_biguint<10>(p_shl489_cast_fu_28594_p1.read()));
}

void ShuffleNetV2::thread_tmp_1222_fu_28638_p3() {
    tmp_1222_fu_28638_p3 = esl_concat<7,3>(tmp_165_fu_28632_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1223_fu_28650_p3() {
    tmp_1223_fu_28650_p3 = esl_concat<7,1>(tmp_165_fu_28632_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1224_fu_28662_p2() {
    tmp_1224_fu_28662_p2 = (!p_shl492_cast_fu_28658_p1.read().is_01() || !p_shl491_cast_fu_28646_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl492_cast_fu_28658_p1.read()) + sc_biguint<11>(p_shl491_cast_fu_28646_p1.read()));
}

void ShuffleNetV2::thread_tmp_1225_cast_fu_23936_p1() {
    tmp_1225_cast_fu_23936_p1 = esl_zext<32,15>(tmp_1044_fu_23931_p2.read());
}

void ShuffleNetV2::thread_tmp_1225_fu_28525_p2() {
    tmp_1225_fu_28525_p2 = (!h_91_cast_cast_fu_28521_p1.read().is_01() || !tmp_1207_reg_45778.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_91_cast_cast_fu_28521_p1.read()) + sc_biguint<10>(tmp_1207_reg_45778.read()));
}

void ShuffleNetV2::thread_tmp_1226_cast_fu_24138_p1() {
    tmp_1226_cast_fu_24138_p1 = esl_zext<32,15>(tmp_1045_fu_24133_p2.read());
}

void ShuffleNetV2::thread_tmp_1226_fu_28530_p3() {
    tmp_1226_fu_28530_p3 = esl_concat<10,3>(tmp_1225_fu_28525_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1227_cast_fu_24148_p1() {
    tmp_1227_cast_fu_24148_p1 = esl_zext<32,14>(tmp_1046_reg_44416.read());
}

void ShuffleNetV2::thread_tmp_1227_fu_28542_p3() {
    tmp_1227_fu_28542_p3 = esl_concat<10,1>(tmp_1225_fu_28525_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1228_fu_28554_p2() {
    tmp_1228_fu_28554_p2 = (!p_shl493_cast_fu_28538_p1.read().is_01() || !p_shl494_cast_fu_28550_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl493_cast_fu_28538_p1.read()) + sc_biguint<15>(p_shl494_cast_fu_28550_p1.read()));
}

void ShuffleNetV2::thread_tmp_1229_fu_28813_p1() {
    tmp_1229_fu_28813_p1 = co119_reg_12025.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_122_fu_25333_p2() {
    tmp_122_fu_25333_p2 = (!p_shl86_cast_fu_25317_p1.read().is_01() || !p_shl87_cast_fu_25329_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl86_cast_fu_25317_p1.read()) - sc_biguint<7>(p_shl87_cast_fu_25329_p1.read()));
}

void ShuffleNetV2::thread_tmp_1230_fu_28847_p4() {
    tmp_1230_fu_28847_p4 = co119_reg_12025.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_1231_fu_28688_p2() {
    tmp_1231_fu_28688_p2 = (!h_93_cast_cast_fu_28684_p1.read().is_01() || !tmp_1224_reg_45835.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_93_cast_cast_fu_28684_p1.read()) + sc_biguint<11>(tmp_1224_reg_45835.read()));
}

void ShuffleNetV2::thread_tmp_1232_fu_28693_p3() {
    tmp_1232_fu_28693_p3 = esl_concat<11,3>(tmp_1231_fu_28688_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1233_fu_28705_p3() {
    tmp_1233_fu_28705_p3 = esl_concat<11,1>(tmp_1231_fu_28688_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1234_fu_28717_p2() {
    tmp_1234_fu_28717_p2 = (!p_shl495_cast_fu_28701_p1.read().is_01() || !p_shl496_cast_fu_28713_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl495_cast_fu_28701_p1.read()) + sc_biguint<15>(p_shl496_cast_fu_28713_p1.read()));
}

void ShuffleNetV2::thread_tmp_1235_fu_28723_p2() {
    tmp_1235_fu_28723_p2 = (!h_93_cast_cast1_fu_28680_p1.read().is_01() || !tmp_1221_reg_45822.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_93_cast_cast1_fu_28680_p1.read()) + sc_biguint<10>(tmp_1221_reg_45822.read()));
}

void ShuffleNetV2::thread_tmp_1236_fu_28728_p3() {
    tmp_1236_fu_28728_p3 = esl_concat<10,3>(tmp_1235_fu_28723_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1237_fu_28740_p3() {
    tmp_1237_fu_28740_p3 = esl_concat<10,1>(tmp_1235_fu_28723_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1238_cast_fu_24390_p1() {
    tmp_1238_cast_fu_24390_p1 = esl_sext<17,16>(tmp_1053_fu_24384_p2.read());
}

void ShuffleNetV2::thread_tmp_1238_fu_28752_p2() {
    tmp_1238_fu_28752_p2 = (!p_shl497_cast_fu_28736_p1.read().is_01() || !p_shl498_cast_fu_28748_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl497_cast_fu_28736_p1.read()) + sc_biguint<14>(p_shl498_cast_fu_28748_p1.read()));
}

void ShuffleNetV2::thread_tmp_1239_cast_fu_24399_p1() {
    tmp_1239_cast_fu_24399_p1 = esl_sext<32,17>(tmp_1054_fu_24394_p2.read());
}

void ShuffleNetV2::thread_tmp_1239_fu_28576_p2() {
    tmp_1239_fu_28576_p2 = (!tmp_1228_reg_45799.read().is_01() || !w_92_cast_cast_fu_28572_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1228_reg_45799.read()) + sc_biguint<15>(w_92_cast_cast_fu_28572_p1.read()));
}

void ShuffleNetV2::thread_tmp_123_cast_cast_fu_23340_p1() {
    tmp_123_cast_cast_fu_23340_p1 = esl_sext<9,7>(tmp_98_fu_23334_p2.read());
}

void ShuffleNetV2::thread_tmp_123_fu_25339_p2() {
    tmp_123_fu_25339_p2 = (!tmp_122_fu_25333_p2.read().is_01() || !i87_cast1_reg_44771.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_122_fu_25333_p2.read()) + sc_biguint<7>(i87_cast1_reg_44771.read()));
}

void ShuffleNetV2::thread_tmp_1240_fu_28778_p2() {
    tmp_1240_fu_28778_p2 = (!tmp_1234_reg_45848.read().is_01() || !w_94_cast_cast_fu_28774_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1234_reg_45848.read()) + sc_biguint<15>(w_94_cast_cast_fu_28774_p1.read()));
}

void ShuffleNetV2::thread_tmp_1241_fu_28788_p2() {
    tmp_1241_fu_28788_p2 = (!tmp_1238_reg_45853.read().is_01() || !w_94_cast_cast1_fu_28770_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1238_reg_45853.read()) + sc_biguint<14>(w_94_cast_cast1_fu_28770_p1.read()));
}

void ShuffleNetV2::thread_tmp_1242_fu_29161_p1() {
    tmp_1242_fu_29161_p1 = k44_reg_12069.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1243_fu_28902_p1() {
    tmp_1243_fu_28902_p1 = i109_reg_12047.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1244_fu_28999_p3() {
    tmp_1244_fu_28999_p3 = esl_concat<11,5>(sum59_reg_45931.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1245_cast_fu_24465_p1() {
    tmp_1245_cast_fu_24465_p1 = esl_sext<32,8>(tmp_1059_reg_44498.read());
}

void ShuffleNetV2::thread_tmp_1245_fu_29010_p3() {
    tmp_1245_fu_29010_p3 = esl_concat<11,3>(sum59_reg_45931.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1246_fu_29021_p2() {
    tmp_1246_fu_29021_p2 = (!p_shl499_cast_fu_29006_p1.read().is_01() || !p_shl500_cast_fu_29017_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl499_cast_fu_29006_p1.read()) - sc_biguint<17>(p_shl500_cast_fu_29017_p1.read()));
}

void ShuffleNetV2::thread_tmp_1247_fu_29031_p2() {
    tmp_1247_fu_29031_p2 = (!ci60_cast1_cast_reg_45899.read().is_01() || !tmp_1467_cast_fu_29027_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci60_cast1_cast_reg_45899.read()) + sc_bigint<18>(tmp_1467_cast_fu_29027_p1.read()));
}

void ShuffleNetV2::thread_tmp_1248_fu_29098_p1() {
    tmp_1248_fu_29098_p1 = grp_fu_28990_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_124_cast_fu_23378_p1() {
    tmp_124_cast_fu_23378_p1 = esl_sext<32,7>(tmp_99_reg_44180.read());
}

void ShuffleNetV2::thread_tmp_124_fu_25074_p2() {
    tmp_124_fu_25074_p2 = (!p_shl88_cast_fu_25058_p1.read().is_01() || !p_shl89_cast_fu_25070_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl88_cast_fu_25058_p1.read()) - sc_biguint<7>(p_shl89_cast_fu_25070_p1.read()));
}

void ShuffleNetV2::thread_tmp_1251_fu_29087_p2() {
    tmp_1251_fu_29087_p2 = (!p_shl501_cast_fu_29073_p3.read().is_01() || !p_shl502_cast_fu_29080_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl501_cast_fu_29073_p3.read()) - sc_biguint<8>(p_shl502_cast_fu_29080_p3.read()));
}

void ShuffleNetV2::thread_tmp_1252_fu_29093_p2() {
    tmp_1252_fu_29093_p2 = (!tmp_242_cast_cast_reg_45912.read().is_01() || !tmp_1251_fu_29087_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_242_cast_cast_reg_45912.read()) + sc_biguint<8>(tmp_1251_fu_29087_p2.read()));
}

void ShuffleNetV2::thread_tmp_1253_fu_29598_p1() {
    tmp_1253_fu_29598_p1 = co123_reg_12146.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1254_fu_29632_p4() {
    tmp_1254_fu_29632_p4 = co123_reg_12146.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_1255_fu_29510_p1() {
    tmp_1255_fu_29510_p1 = k46_reg_12135.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1256_fu_29305_p1() {
    tmp_1256_fu_29305_p1 = i114_reg_12113.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1257_cast_fu_24829_p1() {
    tmp_1257_cast_fu_24829_p1 = esl_zext<32,10>(tmp_1069_reg_44622.read());
}

void ShuffleNetV2::thread_tmp_1257_fu_29352_p3() {
    tmp_1257_fu_29352_p3 = esl_concat<7,2>(tmp_178_fu_29343_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1258_fu_29364_p2() {
    tmp_1258_fu_29364_p2 = (!p_shl503_cast_fu_29360_p1.read().is_01() || !tmp_255_cast_cast_fu_29348_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl503_cast_fu_29360_p1.read()) - sc_bigint<10>(tmp_255_cast_cast_fu_29348_p1.read()));
}

void ShuffleNetV2::thread_tmp_1259_fu_29370_p2() {
    tmp_1259_fu_29370_p2 = (!tmp_1258_fu_29364_p2.read().is_01() || !w95_cast_cast_reg_46026.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1258_fu_29364_p2.read()) + sc_biguint<10>(w95_cast_cast_reg_46026.read()));
}

void ShuffleNetV2::thread_tmp_125_cast_fu_25140_p1() {
    tmp_125_cast_fu_25140_p1 = esl_sext<10,9>(tmp_125_reg_44730.read());
}

void ShuffleNetV2::thread_tmp_125_fu_25084_p2() {
    tmp_125_fu_25084_p2 = (!tmp_168_cast_cast_fu_25080_p1.read().is_01() || !tmp_160_cast_cast_reg_44699.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_168_cast_cast_fu_25080_p1.read()) + sc_biguint<9>(tmp_160_cast_cast_reg_44699.read()));
}

void ShuffleNetV2::thread_tmp_1260_cast_fu_24793_p1() {
    tmp_1260_cast_fu_24793_p1 = esl_sext<32,12>(tmp_1072_reg_44627.read());
}

void ShuffleNetV2::thread_tmp_1260_fu_29386_p2() {
    tmp_1260_fu_29386_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1259_reg_46065.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1261_fu_29391_p2() {
    tmp_1261_fu_29391_p2 = (!tmp_1260_fu_29386_p2.read().is_01() || !tmp_1259_reg_46065.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1260_fu_29386_p2.read()) - sc_biguint<10>(tmp_1259_reg_46065.read()));
}

void ShuffleNetV2::thread_tmp_1262_fu_29396_p2() {
    tmp_1262_fu_29396_p2 = (!tmp_1261_fu_29391_p2.read().is_01() || !h94_cast_cast_reg_46044.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1261_fu_29391_p2.read()) + sc_biguint<10>(h94_cast_cast_reg_46044.read()));
}

void ShuffleNetV2::thread_tmp_1263_fu_29408_p3() {
    tmp_1263_fu_29408_p3 = esl_concat<8,2>(sum31_reg_46071.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1264_fu_29415_p1() {
    tmp_1264_fu_29415_p1 = esl_sext<11,10>(tmp_1263_fu_29408_p3.read());
}

void ShuffleNetV2::thread_tmp_1265_fu_29423_p2() {
    tmp_1265_fu_29423_p2 = (!p_shl505_cast_fu_29419_p1.read().is_01() || !sum31_cast_cast_fu_29404_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl505_cast_fu_29419_p1.read()) - sc_biguint<12>(sum31_cast_cast_fu_29404_p1.read()));
}

void ShuffleNetV2::thread_tmp_1266_fu_29433_p2() {
    tmp_1266_fu_29433_p2 = (!tmp_1489_cast_fu_29429_p1.read().is_01() || !w95_cast_cast1_reg_46021.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1489_cast_fu_29429_p1.read()) + sc_biguint<13>(w95_cast_cast1_reg_46021.read()));
}

void ShuffleNetV2::thread_tmp_1267_fu_29441_p3() {
    tmp_1267_fu_29441_p3 = esl_concat<13,2>(tmp_1266_reg_46082.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1268_fu_29452_p2() {
    tmp_1268_fu_29452_p2 = (!p_shl249_fu_29448_p1.read().is_01() || !tmp_1490_cast_fu_29438_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl249_fu_29448_p1.read()) - sc_bigint<32>(tmp_1490_cast_fu_29438_p1.read()));
}

void ShuffleNetV2::thread_tmp_1269_fu_29458_p2() {
    tmp_1269_fu_29458_p2 = (!tmp_1268_fu_29452_p2.read().is_01() || !h94_cast_reg_46039.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1268_fu_29452_p2.read()) + sc_biguint<32>(h94_cast_reg_46039.read()));
}

void ShuffleNetV2::thread_tmp_126_fu_25113_p2() {
    tmp_126_fu_25113_p2 = (!p_shl90_cast_fu_25097_p1.read().is_01() || !p_shl91_cast_fu_25109_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl90_cast_fu_25097_p1.read()) - sc_biguint<8>(p_shl91_cast_fu_25109_p1.read()));
}

void ShuffleNetV2::thread_tmp_1270_fu_30018_p3() {
    tmp_1270_fu_30018_p3 = esl_concat<6,3>(co125_reg_12201.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1271_fu_30030_p3() {
    tmp_1271_fu_30030_p3 = esl_concat<6,1>(co125_reg_12201.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1272_fu_30042_p2() {
    tmp_1272_fu_30042_p2 = (!p_shl508_cast_fu_30038_p1.read().is_01() || !p_shl507_cast_fu_30026_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl508_cast_fu_30038_p1.read()) + sc_biguint<10>(p_shl507_cast_fu_30026_p1.read()));
}

void ShuffleNetV2::thread_tmp_1273_fu_29946_p1() {
    tmp_1273_fu_29946_p1 = k48_reg_12190.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1274_fu_29687_p1() {
    tmp_1274_fu_29687_p1 = i116_reg_12168.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1275_cast_fu_25171_p1() {
    tmp_1275_cast_fu_25171_p1 = esl_sext<18,17>(tmp_1083_fu_25165_p2.read());
}

void ShuffleNetV2::thread_tmp_1275_fu_29784_p3() {
    tmp_1275_fu_29784_p3 = esl_concat<11,5>(sum62_reg_46191.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1276_cast_fu_25180_p1() {
    tmp_1276_cast_fu_25180_p1 = esl_sext<32,18>(tmp_1084_fu_25175_p2.read());
}

void ShuffleNetV2::thread_tmp_1276_fu_29795_p3() {
    tmp_1276_fu_29795_p3 = esl_concat<11,3>(sum62_reg_46191.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1277_fu_29806_p2() {
    tmp_1277_fu_29806_p2 = (!p_shl509_cast_fu_29791_p1.read().is_01() || !p_shl510_cast_fu_29802_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl509_cast_fu_29791_p1.read()) - sc_biguint<17>(p_shl510_cast_fu_29802_p1.read()));
}

void ShuffleNetV2::thread_tmp_1278_fu_29816_p2() {
    tmp_1278_fu_29816_p2 = (!ci62_cast1_cast_reg_46159.read().is_01() || !tmp_1505_cast_fu_29812_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci62_cast1_cast_reg_46159.read()) + sc_bigint<18>(tmp_1505_cast_fu_29812_p1.read()));
}

void ShuffleNetV2::thread_tmp_1279_fu_29883_p1() {
    tmp_1279_fu_29883_p1 = grp_fu_29775_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_127_fu_25546_p2() {
    tmp_127_fu_25546_p2 = (!co97_cast_fu_25530_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co97_cast_fu_25530_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_1282_cast_fu_25246_p1() {
    tmp_1282_cast_fu_25246_p1 = esl_sext<32,8>(tmp_1089_reg_44758.read());
}

void ShuffleNetV2::thread_tmp_1282_fu_29872_p2() {
    tmp_1282_fu_29872_p2 = (!p_shl511_cast_fu_29858_p3.read().is_01() || !p_shl512_cast_fu_29865_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl511_cast_fu_29858_p3.read()) - sc_biguint<8>(p_shl512_cast_fu_29865_p3.read()));
}

void ShuffleNetV2::thread_tmp_1283_fu_29878_p2() {
    tmp_1283_fu_29878_p2 = (!tmp_260_cast_cast_reg_46172.read().is_01() || !tmp_1282_fu_29872_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_260_cast_cast_reg_46172.read()) + sc_biguint<8>(tmp_1282_fu_29872_p2.read()));
}

void ShuffleNetV2::thread_tmp_1284_fu_30137_p3() {
    tmp_1284_fu_30137_p3 = esl_concat<6,3>(co127_reg_12234.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1285_fu_30149_p3() {
    tmp_1285_fu_30149_p3 = esl_concat<6,1>(co127_reg_12234.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1286_fu_30161_p2() {
    tmp_1286_fu_30161_p2 = (!p_shl514_cast_fu_30157_p1.read().is_01() || !p_shl513_cast_fu_30145_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl514_cast_fu_30157_p1.read()) + sc_biguint<10>(p_shl513_cast_fu_30145_p1.read()));
}

void ShuffleNetV2::thread_tmp_1287_fu_30189_p3() {
    tmp_1287_fu_30189_p3 = esl_concat<7,3>(tmp_184_fu_30183_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1288_fu_30201_p3() {
    tmp_1288_fu_30201_p3 = esl_concat<7,1>(tmp_184_fu_30183_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1289_fu_30213_p2() {
    tmp_1289_fu_30213_p2 = (!p_shl516_cast_fu_30209_p1.read().is_01() || !p_shl515_cast_fu_30197_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl516_cast_fu_30209_p1.read()) + sc_biguint<11>(p_shl515_cast_fu_30197_p1.read()));
}

void ShuffleNetV2::thread_tmp_128_fu_25755_p2() {
    tmp_128_fu_25755_p2 = (!p_shl92_cast_fu_25739_p1.read().is_01() || !p_shl93_cast_fu_25751_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl92_cast_fu_25739_p1.read()) - sc_biguint<7>(p_shl93_cast_fu_25751_p1.read()));
}

void ShuffleNetV2::thread_tmp_1290_fu_30076_p2() {
    tmp_1290_fu_30076_p2 = (!h_97_cast_cast_fu_30072_p1.read().is_01() || !tmp_1272_reg_46263.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_97_cast_cast_fu_30072_p1.read()) + sc_biguint<10>(tmp_1272_reg_46263.read()));
}

void ShuffleNetV2::thread_tmp_1291_fu_30081_p3() {
    tmp_1291_fu_30081_p3 = esl_concat<10,3>(tmp_1290_fu_30076_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1292_fu_30093_p3() {
    tmp_1292_fu_30093_p3 = esl_concat<10,1>(tmp_1290_fu_30076_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1293_fu_30105_p2() {
    tmp_1293_fu_30105_p2 = (!p_shl517_cast_fu_30089_p1.read().is_01() || !p_shl518_cast_fu_30101_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl517_cast_fu_30089_p1.read()) + sc_biguint<15>(p_shl518_cast_fu_30101_p1.read()));
}

void ShuffleNetV2::thread_tmp_1294_fu_30364_p1() {
    tmp_1294_fu_30364_p1 = co129_reg_12267.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1295_fu_30398_p4() {
    tmp_1295_fu_30398_p4 = co129_reg_12267.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_1296_fu_30239_p2() {
    tmp_1296_fu_30239_p2 = (!h_99_cast_cast_fu_30235_p1.read().is_01() || !tmp_1289_reg_46320.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_99_cast_cast_fu_30235_p1.read()) + sc_biguint<11>(tmp_1289_reg_46320.read()));
}

void ShuffleNetV2::thread_tmp_1297_fu_30244_p3() {
    tmp_1297_fu_30244_p3 = esl_concat<11,3>(tmp_1296_fu_30239_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1298_fu_30256_p3() {
    tmp_1298_fu_30256_p3 = esl_concat<11,1>(tmp_1296_fu_30239_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1299_fu_30268_p2() {
    tmp_1299_fu_30268_p2 = (!p_shl519_cast_fu_30252_p1.read().is_01() || !p_shl520_cast_fu_30264_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl519_cast_fu_30252_p1.read()) + sc_biguint<15>(p_shl520_cast_fu_30264_p1.read()));
}

void ShuffleNetV2::thread_tmp_129_cast_cast_fu_23442_p1() {
    tmp_129_cast_cast_fu_23442_p1 = esl_zext<9,4>(tmp_995_fu_23432_p4.read());
}

void ShuffleNetV2::thread_tmp_129_fu_25795_p2() {
    tmp_129_fu_25795_p2 = (!tmp_128_reg_44919.read().is_01() || !ci52_cast_fu_25775_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_128_reg_44919.read()) + sc_biguint<7>(ci52_cast_fu_25775_p1.read()));
}

void ShuffleNetV2::thread_tmp_1300_fu_30274_p2() {
    tmp_1300_fu_30274_p2 = (!h_99_cast_cast1_fu_30231_p1.read().is_01() || !tmp_1286_reg_46307.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_99_cast_cast1_fu_30231_p1.read()) + sc_biguint<10>(tmp_1286_reg_46307.read()));
}

void ShuffleNetV2::thread_tmp_1301_fu_30279_p3() {
    tmp_1301_fu_30279_p3 = esl_concat<10,3>(tmp_1300_fu_30274_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1302_fu_30291_p3() {
    tmp_1302_fu_30291_p3 = esl_concat<10,1>(tmp_1300_fu_30274_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1303_cast_fu_25495_p1() {
    tmp_1303_cast_fu_25495_p1 = esl_zext<32,15>(tmp_1110_fu_25490_p2.read());
}

void ShuffleNetV2::thread_tmp_1303_fu_30303_p2() {
    tmp_1303_fu_30303_p2 = (!p_shl521_cast_fu_30287_p1.read().is_01() || !p_shl522_cast_fu_30299_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl521_cast_fu_30287_p1.read()) + sc_biguint<14>(p_shl522_cast_fu_30299_p1.read()));
}

void ShuffleNetV2::thread_tmp_1304_cast_fu_25697_p1() {
    tmp_1304_cast_fu_25697_p1 = esl_zext<32,15>(tmp_1111_fu_25692_p2.read());
}

void ShuffleNetV2::thread_tmp_1304_fu_30127_p2() {
    tmp_1304_fu_30127_p2 = (!tmp_1293_reg_46284.read().is_01() || !w_98_cast_cast_fu_30123_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1293_reg_46284.read()) + sc_biguint<15>(w_98_cast_cast_fu_30123_p1.read()));
}

void ShuffleNetV2::thread_tmp_1305_cast_fu_25707_p1() {
    tmp_1305_cast_fu_25707_p1 = esl_zext<32,14>(tmp_1112_reg_44901.read());
}

void ShuffleNetV2::thread_tmp_1305_fu_30329_p2() {
    tmp_1305_fu_30329_p2 = (!tmp_1299_reg_46333.read().is_01() || !w_100_cast_cast_fu_30325_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1299_reg_46333.read()) + sc_biguint<15>(w_100_cast_cast_fu_30325_p1.read()));
}

void ShuffleNetV2::thread_tmp_1306_fu_30339_p2() {
    tmp_1306_fu_30339_p2 = (!tmp_1303_reg_46338.read().is_01() || !w_100_cast_cast1_fu_30321_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1303_reg_46338.read()) + sc_biguint<14>(w_100_cast_cast1_fu_30321_p1.read()));
}

void ShuffleNetV2::thread_tmp_1307_fu_30720_p1() {
    tmp_1307_fu_30720_p1 = k50_reg_12311.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1308_fu_30453_p1() {
    tmp_1308_fu_30453_p1 = i120_reg_12289.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1309_fu_30550_p3() {
    tmp_1309_fu_30550_p3 = esl_concat<10,5>(sum64_reg_46416.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_130_cast_fu_23143_p1() {
    tmp_130_cast_fu_23143_p1 = esl_sext<9,7>(tmp_101_fu_23137_p2.read());
}

}

