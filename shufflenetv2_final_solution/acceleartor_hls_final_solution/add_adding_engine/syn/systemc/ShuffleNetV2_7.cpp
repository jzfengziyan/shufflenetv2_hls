#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_p_shl432_cast_fu_17850_p1() {
    p_shl432_cast_fu_17850_p1 = esl_zext<16,13>(tmp_1363_fu_17843_p3.read());
}

void ShuffleNetV2::thread_p_shl433_cast_fu_18035_p1() {
    p_shl433_cast_fu_18035_p1 = esl_zext<10,9>(tmp_1356_fu_18027_p3.read());
}

void ShuffleNetV2::thread_p_shl434_cast_fu_18047_p1() {
    p_shl434_cast_fu_18047_p1 = esl_zext<10,7>(tmp_1357_fu_18039_p3.read());
}

void ShuffleNetV2::thread_p_shl435_cast_fu_18086_p1() {
    p_shl435_cast_fu_18086_p1 = esl_zext<15,13>(tmp_1377_fu_18078_p3.read());
}

void ShuffleNetV2::thread_p_shl436_cast_fu_18098_p1() {
    p_shl436_cast_fu_18098_p1 = esl_zext<15,11>(tmp_1378_fu_18090_p3.read());
}

void ShuffleNetV2::thread_p_shl437_cast_fu_18194_p1() {
    p_shl437_cast_fu_18194_p1 = esl_zext<11,10>(tmp_1373_fu_18186_p3.read());
}

void ShuffleNetV2::thread_p_shl438_cast_fu_18206_p1() {
    p_shl438_cast_fu_18206_p1 = esl_zext<11,8>(tmp_1374_fu_18198_p3.read());
}

void ShuffleNetV2::thread_p_shl439_cast_fu_18158_p1() {
    p_shl439_cast_fu_18158_p1 = esl_zext<10,9>(tmp_1370_fu_18150_p3.read());
}

void ShuffleNetV2::thread_p_shl43_cast_fu_16064_p1() {
    p_shl43_cast_fu_16064_p1 = esl_zext<7,4>(p_shl43_fu_16056_p3.read());
}

void ShuffleNetV2::thread_p_shl43_fu_16056_p3() {
    p_shl43_fu_16056_p3 = esl_concat<1,3>(tmp_1275_fu_16040_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl440_cast_fu_18170_p1() {
    p_shl440_cast_fu_18170_p1 = esl_zext<10,7>(tmp_1371_fu_18162_p3.read());
}

void ShuffleNetV2::thread_p_shl441_cast_fu_18284_p1() {
    p_shl441_cast_fu_18284_p1 = esl_zext<14,13>(tmp_1386_fu_18276_p3.read());
}

void ShuffleNetV2::thread_p_shl442_cast_fu_18296_p1() {
    p_shl442_cast_fu_18296_p1 = esl_zext<14,11>(tmp_1387_fu_18288_p3.read());
}

void ShuffleNetV2::thread_p_shl443_cast_fu_18249_p1() {
    p_shl443_cast_fu_18249_p1 = esl_zext<15,14>(tmp_1382_fu_18241_p3.read());
}

void ShuffleNetV2::thread_p_shl444_cast_fu_18261_p1() {
    p_shl444_cast_fu_18261_p1 = esl_zext<15,12>(tmp_1383_fu_18253_p3.read());
}

void ShuffleNetV2::thread_p_shl446_cast_fu_18579_p1() {
    p_shl446_cast_fu_18579_p1 = esl_sext<10,8>(tmp_1402_fu_18571_p3.read());
}

void ShuffleNetV2::thread_p_shl447_cast_fu_18605_p1() {
    p_shl447_cast_fu_18605_p1 = esl_zext<16,15>(tmp_1396_fu_18601_p1.read());
}

void ShuffleNetV2::thread_p_shl448_cast_fu_18620_p1() {
    p_shl448_cast_fu_18620_p1 = esl_zext<16,13>(tmp_1398_fu_18616_p1.read());
}

void ShuffleNetV2::thread_p_shl44_cast_fu_16384_p1() {
    p_shl44_cast_fu_16384_p1 = esl_zext<7,6>(p_shl44_fu_16376_p3.read());
}

void ShuffleNetV2::thread_p_shl44_fu_16376_p3() {
    p_shl44_fu_16376_p3 = esl_concat<1,5>(tmp_1295_fu_16372_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl450_cast_fu_18966_p1() {
    p_shl450_cast_fu_18966_p1 = esl_zext<12,11>(tmp_1416_fu_18959_p3.read());
}

void ShuffleNetV2::thread_p_shl451_cast_fu_18981_p3() {
    p_shl451_cast_fu_18981_p3 = esl_concat<8,2>(tmp_1413_reg_38046.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl452_cast_fu_18929_p1() {
    p_shl452_cast_fu_18929_p1 = esl_zext<35,34>(tmp_1409_fu_18925_p1.read());
}

void ShuffleNetV2::thread_p_shl454_cast_fu_19388_p1() {
    p_shl454_cast_fu_19388_p1 = esl_sext<10,8>(tmp_1433_fu_19380_p3.read());
}

void ShuffleNetV2::thread_p_shl455_cast_fu_19410_p1() {
    p_shl455_cast_fu_19410_p1 = esl_zext<17,16>(tmp_1428_fu_19403_p3.read());
}

void ShuffleNetV2::thread_p_shl456_cast_fu_19421_p1() {
    p_shl456_cast_fu_19421_p1 = esl_zext<17,14>(tmp_1429_fu_19414_p3.read());
}

void ShuffleNetV2::thread_p_shl457_cast_fu_19606_p1() {
    p_shl457_cast_fu_19606_p1 = esl_zext<10,9>(tmp_1422_fu_19598_p3.read());
}

void ShuffleNetV2::thread_p_shl458_cast_fu_19618_p1() {
    p_shl458_cast_fu_19618_p1 = esl_zext<10,7>(tmp_1423_fu_19610_p3.read());
}

void ShuffleNetV2::thread_p_shl459_cast_fu_19657_p1() {
    p_shl459_cast_fu_19657_p1 = esl_zext<15,13>(tmp_1443_fu_19649_p3.read());
}

void ShuffleNetV2::thread_p_shl45_cast_fu_16396_p1() {
    p_shl45_cast_fu_16396_p1 = esl_zext<7,4>(p_shl45_fu_16388_p3.read());
}

void ShuffleNetV2::thread_p_shl45_fu_16388_p3() {
    p_shl45_fu_16388_p3 = esl_concat<1,3>(tmp_1295_fu_16372_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl460_cast_fu_19669_p1() {
    p_shl460_cast_fu_19669_p1 = esl_zext<15,11>(tmp_1444_fu_19661_p3.read());
}

void ShuffleNetV2::thread_p_shl461_cast_fu_19765_p1() {
    p_shl461_cast_fu_19765_p1 = esl_zext<11,10>(tmp_1439_fu_19757_p3.read());
}

void ShuffleNetV2::thread_p_shl462_cast_fu_19777_p1() {
    p_shl462_cast_fu_19777_p1 = esl_zext<11,8>(tmp_1440_fu_19769_p3.read());
}

void ShuffleNetV2::thread_p_shl463_cast_fu_19729_p1() {
    p_shl463_cast_fu_19729_p1 = esl_zext<10,9>(tmp_1436_fu_19721_p3.read());
}

void ShuffleNetV2::thread_p_shl464_cast_fu_19741_p1() {
    p_shl464_cast_fu_19741_p1 = esl_zext<10,7>(tmp_1437_fu_19733_p3.read());
}

void ShuffleNetV2::thread_p_shl465_cast_fu_19855_p1() {
    p_shl465_cast_fu_19855_p1 = esl_zext<14,13>(tmp_1452_fu_19847_p3.read());
}

void ShuffleNetV2::thread_p_shl466_cast_fu_19867_p1() {
    p_shl466_cast_fu_19867_p1 = esl_zext<14,11>(tmp_1453_fu_19859_p3.read());
}

void ShuffleNetV2::thread_p_shl467_cast_fu_19820_p1() {
    p_shl467_cast_fu_19820_p1 = esl_zext<15,14>(tmp_1448_fu_19812_p3.read());
}

void ShuffleNetV2::thread_p_shl468_cast_fu_19832_p1() {
    p_shl468_cast_fu_19832_p1 = esl_zext<15,12>(tmp_1449_fu_19824_p3.read());
}

void ShuffleNetV2::thread_p_shl46_cast_fu_15735_p1() {
    p_shl46_cast_fu_15735_p1 = esl_zext<7,6>(p_shl46_fu_15727_p3.read());
}

void ShuffleNetV2::thread_p_shl46_fu_15727_p3() {
    p_shl46_fu_15727_p3 = esl_concat<1,5>(tmp_1277_fu_15723_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl470_cast_fu_20150_p1() {
    p_shl470_cast_fu_20150_p1 = esl_sext<10,8>(tmp_1466_fu_20142_p3.read());
}

void ShuffleNetV2::thread_p_shl471_cast_fu_20172_p1() {
    p_shl471_cast_fu_20172_p1 = esl_zext<17,16>(tmp_1461_fu_20165_p3.read());
}

void ShuffleNetV2::thread_p_shl472_cast_fu_20183_p1() {
    p_shl472_cast_fu_20183_p1 = esl_zext<17,14>(tmp_1462_fu_20176_p3.read());
}

void ShuffleNetV2::thread_p_shl474_cast_fu_20525_p1() {
    p_shl474_cast_fu_20525_p1 = esl_zext<12,11>(tmp_1480_fu_20518_p3.read());
}

void ShuffleNetV2::thread_p_shl475_cast_fu_20540_p3() {
    p_shl475_cast_fu_20540_p3 = esl_concat<8,2>(tmp_1477_reg_38601.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl476_cast_fu_20488_p1() {
    p_shl476_cast_fu_20488_p1 = esl_zext<35,34>(tmp_1473_fu_20484_p1.read());
}

void ShuffleNetV2::thread_p_shl478_cast_fu_20943_p1() {
    p_shl478_cast_fu_20943_p1 = esl_sext<10,8>(tmp_1497_fu_20935_p3.read());
}

void ShuffleNetV2::thread_p_shl479_cast_fu_20965_p1() {
    p_shl479_cast_fu_20965_p1 = esl_zext<17,16>(tmp_1492_fu_20958_p3.read());
}

void ShuffleNetV2::thread_p_shl47_cast_fu_15747_p1() {
    p_shl47_cast_fu_15747_p1 = esl_zext<7,4>(p_shl47_fu_15739_p3.read());
}

void ShuffleNetV2::thread_p_shl47_fu_15739_p3() {
    p_shl47_fu_15739_p3 = esl_concat<1,3>(tmp_1277_fu_15723_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl480_cast_fu_20976_p1() {
    p_shl480_cast_fu_20976_p1 = esl_zext<17,14>(tmp_1493_fu_20969_p3.read());
}

void ShuffleNetV2::thread_p_shl481_cast_fu_21157_p1() {
    p_shl481_cast_fu_21157_p1 = esl_zext<10,9>(tmp_1486_fu_21149_p3.read());
}

void ShuffleNetV2::thread_p_shl482_cast_fu_21169_p1() {
    p_shl482_cast_fu_21169_p1 = esl_zext<10,7>(tmp_1487_fu_21161_p3.read());
}

void ShuffleNetV2::thread_p_shl483_cast_fu_21208_p1() {
    p_shl483_cast_fu_21208_p1 = esl_zext<15,13>(tmp_1507_fu_21200_p3.read());
}

void ShuffleNetV2::thread_p_shl484_cast_fu_21220_p1() {
    p_shl484_cast_fu_21220_p1 = esl_zext<15,11>(tmp_1508_fu_21212_p3.read());
}

void ShuffleNetV2::thread_p_shl485_cast_fu_21316_p1() {
    p_shl485_cast_fu_21316_p1 = esl_zext<11,10>(tmp_1503_fu_21308_p3.read());
}

void ShuffleNetV2::thread_p_shl486_cast_fu_21328_p1() {
    p_shl486_cast_fu_21328_p1 = esl_zext<11,8>(tmp_1504_fu_21320_p3.read());
}

void ShuffleNetV2::thread_p_shl487_cast_fu_21280_p1() {
    p_shl487_cast_fu_21280_p1 = esl_zext<10,9>(tmp_1500_fu_21272_p3.read());
}

void ShuffleNetV2::thread_p_shl488_cast_fu_21292_p1() {
    p_shl488_cast_fu_21292_p1 = esl_zext<10,7>(tmp_1501_fu_21284_p3.read());
}

void ShuffleNetV2::thread_p_shl489_cast_fu_21406_p1() {
    p_shl489_cast_fu_21406_p1 = esl_zext<14,13>(tmp_1516_fu_21398_p3.read());
}

void ShuffleNetV2::thread_p_shl48_cast_fu_16151_p1() {
    p_shl48_cast_fu_16151_p1 = esl_zext<7,6>(p_shl48_fu_16143_p3.read());
}

void ShuffleNetV2::thread_p_shl48_fu_16143_p3() {
    p_shl48_fu_16143_p3 = esl_concat<2,4>(tmp_1296_fu_16139_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl490_cast_fu_21418_p1() {
    p_shl490_cast_fu_21418_p1 = esl_zext<14,11>(tmp_1517_fu_21410_p3.read());
}

void ShuffleNetV2::thread_p_shl491_cast_fu_21371_p1() {
    p_shl491_cast_fu_21371_p1 = esl_zext<15,14>(tmp_1512_fu_21363_p3.read());
}

void ShuffleNetV2::thread_p_shl492_cast_fu_21383_p1() {
    p_shl492_cast_fu_21383_p1 = esl_zext<15,12>(tmp_1513_fu_21375_p3.read());
}

void ShuffleNetV2::thread_p_shl494_cast_fu_21701_p1() {
    p_shl494_cast_fu_21701_p1 = esl_sext<10,8>(tmp_1530_fu_21693_p3.read());
}

void ShuffleNetV2::thread_p_shl495_cast_fu_21723_p1() {
    p_shl495_cast_fu_21723_p1 = esl_zext<17,16>(tmp_1525_fu_21716_p3.read());
}

void ShuffleNetV2::thread_p_shl496_cast_fu_21734_p1() {
    p_shl496_cast_fu_21734_p1 = esl_zext<17,14>(tmp_1526_fu_21727_p3.read());
}

void ShuffleNetV2::thread_p_shl498_cast_fu_22084_p1() {
    p_shl498_cast_fu_22084_p1 = esl_zext<12,11>(tmp_1545_fu_22080_p1.read());
}

void ShuffleNetV2::thread_p_shl499_cast_fu_22099_p3() {
    p_shl499_cast_fu_22099_p3 = esl_concat<8,2>(tmp_1541_reg_39156.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl49_cast_fu_16163_p1() {
    p_shl49_cast_fu_16163_p1 = esl_zext<7,4>(p_shl49_fu_16155_p3.read());
}

void ShuffleNetV2::thread_p_shl49_fu_16155_p3() {
    p_shl49_fu_16155_p3 = esl_concat<2,2>(tmp_1296_fu_16139_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl4_cast_fu_13109_p1() {
    p_shl4_cast_fu_13109_p1 = esl_zext<7,6>(p_shl4_fu_13101_p3.read());
}

void ShuffleNetV2::thread_p_shl4_fu_13101_p3() {
    p_shl4_fu_13101_p3 = esl_concat<2,4>(tmp_1181_fu_13097_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl500_cast_fu_22039_p1() {
    p_shl500_cast_fu_22039_p1 = esl_zext<35,34>(tmp_1537_fu_22035_p1.read());
}

void ShuffleNetV2::thread_p_shl502_cast_fu_22502_p1() {
    p_shl502_cast_fu_22502_p1 = esl_sext<10,8>(tmp_1562_fu_22494_p3.read());
}

void ShuffleNetV2::thread_p_shl503_cast_fu_22524_p1() {
    p_shl503_cast_fu_22524_p1 = esl_zext<17,16>(tmp_1557_fu_22517_p3.read());
}

void ShuffleNetV2::thread_p_shl504_cast_fu_22535_p1() {
    p_shl504_cast_fu_22535_p1 = esl_zext<17,14>(tmp_1558_fu_22528_p3.read());
}

void ShuffleNetV2::thread_p_shl505_cast_fu_22716_p1() {
    p_shl505_cast_fu_22716_p1 = esl_zext<10,9>(tmp_1551_fu_22708_p3.read());
}

void ShuffleNetV2::thread_p_shl506_cast_fu_22728_p1() {
    p_shl506_cast_fu_22728_p1 = esl_zext<10,7>(tmp_1552_fu_22720_p3.read());
}

void ShuffleNetV2::thread_p_shl507_cast_fu_22767_p1() {
    p_shl507_cast_fu_22767_p1 = esl_zext<15,13>(tmp_1572_fu_22759_p3.read());
}

void ShuffleNetV2::thread_p_shl508_cast_fu_22779_p1() {
    p_shl508_cast_fu_22779_p1 = esl_zext<15,11>(tmp_1573_fu_22771_p3.read());
}

void ShuffleNetV2::thread_p_shl509_cast_fu_22875_p1() {
    p_shl509_cast_fu_22875_p1 = esl_zext<11,10>(tmp_1568_fu_22867_p3.read());
}

void ShuffleNetV2::thread_p_shl50_cast_fu_16190_p1() {
    p_shl50_cast_fu_16190_p1 = esl_zext<8,7>(p_shl50_fu_16182_p3.read());
}

void ShuffleNetV2::thread_p_shl50_fu_16182_p3() {
    p_shl50_fu_16182_p3 = esl_concat<2,5>(tmp_1296_fu_16139_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl510_cast_fu_22887_p1() {
    p_shl510_cast_fu_22887_p1 = esl_zext<11,8>(tmp_1569_fu_22879_p3.read());
}

void ShuffleNetV2::thread_p_shl511_cast_fu_22839_p1() {
    p_shl511_cast_fu_22839_p1 = esl_zext<10,9>(tmp_1565_fu_22831_p3.read());
}

void ShuffleNetV2::thread_p_shl512_cast_fu_22851_p1() {
    p_shl512_cast_fu_22851_p1 = esl_zext<10,7>(tmp_1566_fu_22843_p3.read());
}

void ShuffleNetV2::thread_p_shl513_cast_fu_22965_p1() {
    p_shl513_cast_fu_22965_p1 = esl_zext<15,14>(tmp_1581_fu_22957_p3.read());
}

void ShuffleNetV2::thread_p_shl514_cast_fu_22977_p1() {
    p_shl514_cast_fu_22977_p1 = esl_zext<15,12>(tmp_1582_fu_22969_p3.read());
}

void ShuffleNetV2::thread_p_shl515_cast_fu_22930_p1() {
    p_shl515_cast_fu_22930_p1 = esl_zext<14,13>(tmp_1577_fu_22922_p3.read());
}

void ShuffleNetV2::thread_p_shl516_cast_fu_22942_p1() {
    p_shl516_cast_fu_22942_p1 = esl_zext<14,11>(tmp_1578_fu_22934_p3.read());
}

void ShuffleNetV2::thread_p_shl518_cast_fu_23260_p1() {
    p_shl518_cast_fu_23260_p1 = esl_sext<10,8>(tmp_1595_fu_23252_p3.read());
}

void ShuffleNetV2::thread_p_shl519_cast_fu_23282_p1() {
    p_shl519_cast_fu_23282_p1 = esl_zext<17,16>(tmp_1590_fu_23275_p3.read());
}

void ShuffleNetV2::thread_p_shl51_cast_fu_16202_p1() {
    p_shl51_cast_fu_16202_p1 = esl_zext<8,5>(p_shl51_fu_16194_p3.read());
}

void ShuffleNetV2::thread_p_shl51_fu_16194_p3() {
    p_shl51_fu_16194_p3 = esl_concat<2,3>(tmp_1296_fu_16139_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl520_cast_fu_23293_p1() {
    p_shl520_cast_fu_23293_p1 = esl_zext<17,14>(tmp_1591_fu_23286_p3.read());
}

void ShuffleNetV2::thread_p_shl522_cast_fu_23643_p1() {
    p_shl522_cast_fu_23643_p1 = esl_zext<12,11>(tmp_1610_fu_23639_p1.read());
}

void ShuffleNetV2::thread_p_shl523_cast_fu_23662_p3() {
    p_shl523_cast_fu_23662_p3 = esl_concat<8,2>(tmp_1606_reg_39711.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl524_cast_fu_23598_p1() {
    p_shl524_cast_fu_23598_p1 = esl_zext<35,34>(tmp_1602_fu_23594_p1.read());
}

void ShuffleNetV2::thread_p_shl526_cast_fu_24065_p1() {
    p_shl526_cast_fu_24065_p1 = esl_sext<10,8>(tmp_1627_fu_24057_p3.read());
}

void ShuffleNetV2::thread_p_shl527_cast_fu_24087_p1() {
    p_shl527_cast_fu_24087_p1 = esl_zext<17,16>(tmp_1622_fu_24080_p3.read());
}

void ShuffleNetV2::thread_p_shl528_cast_fu_24098_p1() {
    p_shl528_cast_fu_24098_p1 = esl_zext<17,14>(tmp_1623_fu_24091_p3.read());
}

void ShuffleNetV2::thread_p_shl529_cast_fu_24279_p1() {
    p_shl529_cast_fu_24279_p1 = esl_zext<10,9>(tmp_1616_fu_24271_p3.read());
}

void ShuffleNetV2::thread_p_shl52_cast_fu_16810_p1() {
    p_shl52_cast_fu_16810_p1 = esl_zext<7,6>(p_shl52_fu_16802_p3.read());
}

void ShuffleNetV2::thread_p_shl52_fu_16802_p3() {
    p_shl52_fu_16802_p3 = esl_concat<1,5>(tmp_1316_fu_16798_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl530_cast_fu_24291_p1() {
    p_shl530_cast_fu_24291_p1 = esl_zext<10,7>(tmp_1617_fu_24283_p3.read());
}

void ShuffleNetV2::thread_p_shl531_cast_fu_24330_p1() {
    p_shl531_cast_fu_24330_p1 = esl_zext<15,13>(tmp_1637_fu_24322_p3.read());
}

void ShuffleNetV2::thread_p_shl532_cast_fu_24342_p1() {
    p_shl532_cast_fu_24342_p1 = esl_zext<15,11>(tmp_1638_fu_24334_p3.read());
}

void ShuffleNetV2::thread_p_shl533_cast_fu_24438_p1() {
    p_shl533_cast_fu_24438_p1 = esl_zext<11,10>(tmp_1633_fu_24430_p3.read());
}

void ShuffleNetV2::thread_p_shl534_cast_fu_24450_p1() {
    p_shl534_cast_fu_24450_p1 = esl_zext<11,8>(tmp_1634_fu_24442_p3.read());
}

void ShuffleNetV2::thread_p_shl535_cast_fu_24402_p1() {
    p_shl535_cast_fu_24402_p1 = esl_zext<10,9>(tmp_1630_fu_24394_p3.read());
}

void ShuffleNetV2::thread_p_shl536_cast_fu_24414_p1() {
    p_shl536_cast_fu_24414_p1 = esl_zext<10,7>(tmp_1631_fu_24406_p3.read());
}

void ShuffleNetV2::thread_p_shl537_cast_fu_24528_p1() {
    p_shl537_cast_fu_24528_p1 = esl_zext<15,14>(tmp_1646_fu_24520_p3.read());
}

void ShuffleNetV2::thread_p_shl538_cast_fu_24540_p1() {
    p_shl538_cast_fu_24540_p1 = esl_zext<15,12>(tmp_1647_fu_24532_p3.read());
}

void ShuffleNetV2::thread_p_shl539_cast_fu_24493_p1() {
    p_shl539_cast_fu_24493_p1 = esl_zext<14,13>(tmp_1642_fu_24485_p3.read());
}

void ShuffleNetV2::thread_p_shl53_cast_fu_16822_p1() {
    p_shl53_cast_fu_16822_p1 = esl_zext<7,4>(p_shl53_fu_16814_p3.read());
}

void ShuffleNetV2::thread_p_shl53_fu_16814_p3() {
    p_shl53_fu_16814_p3 = esl_concat<1,3>(tmp_1316_fu_16798_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl540_cast_fu_24505_p1() {
    p_shl540_cast_fu_24505_p1 = esl_zext<14,11>(tmp_1643_fu_24497_p3.read());
}

void ShuffleNetV2::thread_p_shl542_cast_fu_24823_p1() {
    p_shl542_cast_fu_24823_p1 = esl_sext<10,8>(tmp_1662_fu_24815_p3.read());
}

void ShuffleNetV2::thread_p_shl543_cast_fu_24849_p1() {
    p_shl543_cast_fu_24849_p1 = esl_zext<17,16>(tmp_1656_fu_24845_p1.read());
}

void ShuffleNetV2::thread_p_shl544_cast_fu_24864_p1() {
    p_shl544_cast_fu_24864_p1 = esl_zext<17,14>(tmp_1658_fu_24860_p1.read());
}

void ShuffleNetV2::thread_p_shl546_cast_fu_25206_p1() {
    p_shl546_cast_fu_25206_p1 = esl_zext<13,12>(tmp_1676_fu_25199_p3.read());
}

void ShuffleNetV2::thread_p_shl547_cast_fu_25225_p3() {
    p_shl547_cast_fu_25225_p3 = esl_concat<8,2>(tmp_1673_reg_40266.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl548_cast_fu_25169_p1() {
    p_shl548_cast_fu_25169_p1 = esl_zext<35,34>(tmp_1669_fu_25165_p1.read());
}

void ShuffleNetV2::thread_p_shl54_cast_fu_17142_p1() {
    p_shl54_cast_fu_17142_p1 = esl_zext<7,6>(p_shl54_fu_17134_p3.read());
}

void ShuffleNetV2::thread_p_shl54_fu_17134_p3() {
    p_shl54_fu_17134_p3 = esl_concat<1,5>(tmp_1328_fu_17130_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl550_cast_fu_25628_p1() {
    p_shl550_cast_fu_25628_p1 = esl_sext<10,8>(tmp_1695_fu_25620_p3.read());
}

void ShuffleNetV2::thread_p_shl551_cast_fu_25654_p1() {
    p_shl551_cast_fu_25654_p1 = esl_zext<17,16>(tmp_1689_fu_25650_p1.read());
}

void ShuffleNetV2::thread_p_shl552_cast_fu_25669_p1() {
    p_shl552_cast_fu_25669_p1 = esl_zext<17,14>(tmp_1691_fu_25665_p1.read());
}

void ShuffleNetV2::thread_p_shl553_cast_fu_25854_p1() {
    p_shl553_cast_fu_25854_p1 = esl_zext<10,9>(tmp_1682_fu_25846_p3.read());
}

void ShuffleNetV2::thread_p_shl554_cast_fu_25866_p1() {
    p_shl554_cast_fu_25866_p1 = esl_zext<10,7>(tmp_1683_fu_25858_p3.read());
}

void ShuffleNetV2::thread_p_shl555_cast_fu_25905_p1() {
    p_shl555_cast_fu_25905_p1 = esl_zext<15,13>(tmp_1705_fu_25897_p3.read());
}

void ShuffleNetV2::thread_p_shl556_cast_fu_25917_p1() {
    p_shl556_cast_fu_25917_p1 = esl_zext<15,11>(tmp_1706_fu_25909_p3.read());
}

void ShuffleNetV2::thread_p_shl557_cast_fu_26013_p1() {
    p_shl557_cast_fu_26013_p1 = esl_zext<11,10>(tmp_1701_fu_26005_p3.read());
}

void ShuffleNetV2::thread_p_shl558_cast_fu_26025_p1() {
    p_shl558_cast_fu_26025_p1 = esl_zext<11,8>(tmp_1702_fu_26017_p3.read());
}

void ShuffleNetV2::thread_p_shl559_cast_fu_25977_p1() {
    p_shl559_cast_fu_25977_p1 = esl_zext<10,9>(tmp_1698_fu_25969_p3.read());
}

void ShuffleNetV2::thread_p_shl55_cast_fu_17154_p1() {
    p_shl55_cast_fu_17154_p1 = esl_zext<7,4>(p_shl55_fu_17146_p3.read());
}

void ShuffleNetV2::thread_p_shl55_fu_17146_p3() {
    p_shl55_fu_17146_p3 = esl_concat<1,3>(tmp_1328_fu_17130_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl560_cast_fu_25989_p1() {
    p_shl560_cast_fu_25989_p1 = esl_zext<10,7>(tmp_1699_fu_25981_p3.read());
}

void ShuffleNetV2::thread_p_shl561_cast_fu_26103_p1() {
    p_shl561_cast_fu_26103_p1 = esl_zext<15,14>(tmp_1714_fu_26095_p3.read());
}

void ShuffleNetV2::thread_p_shl562_cast_fu_26115_p1() {
    p_shl562_cast_fu_26115_p1 = esl_zext<15,12>(tmp_1715_fu_26107_p3.read());
}

void ShuffleNetV2::thread_p_shl563_cast_fu_26068_p1() {
    p_shl563_cast_fu_26068_p1 = esl_zext<14,13>(tmp_1710_fu_26060_p3.read());
}

void ShuffleNetV2::thread_p_shl564_cast_fu_26080_p1() {
    p_shl564_cast_fu_26080_p1 = esl_zext<14,11>(tmp_1711_fu_26072_p3.read());
}

void ShuffleNetV2::thread_p_shl566_cast_fu_26398_p1() {
    p_shl566_cast_fu_26398_p1 = esl_sext<10,8>(tmp_1730_fu_26390_p3.read());
}

void ShuffleNetV2::thread_p_shl567_cast_fu_26424_p1() {
    p_shl567_cast_fu_26424_p1 = esl_zext<17,16>(tmp_1724_fu_26420_p1.read());
}

void ShuffleNetV2::thread_p_shl568_cast_fu_26439_p1() {
    p_shl568_cast_fu_26439_p1 = esl_zext<17,14>(tmp_1726_fu_26435_p1.read());
}

void ShuffleNetV2::thread_p_shl56_cast_fu_16909_p1() {
    p_shl56_cast_fu_16909_p1 = esl_zext<7,6>(p_shl56_fu_16901_p3.read());
}

void ShuffleNetV2::thread_p_shl56_fu_16901_p3() {
    p_shl56_fu_16901_p3 = esl_concat<2,4>(tmp_1329_fu_16897_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl570_cast_fu_26785_p1() {
    p_shl570_cast_fu_26785_p1 = esl_zext<13,12>(tmp_1744_fu_26778_p3.read());
}

void ShuffleNetV2::thread_p_shl571_cast_fu_26800_p3() {
    p_shl571_cast_fu_26800_p3 = esl_concat<8,2>(tmp_1741_reg_40821.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl572_cast_fu_26748_p1() {
    p_shl572_cast_fu_26748_p1 = esl_zext<35,34>(tmp_1737_fu_26744_p1.read());
}

void ShuffleNetV2::thread_p_shl574_cast_fu_27215_p1() {
    p_shl574_cast_fu_27215_p1 = esl_sext<10,8>(tmp_1761_fu_27207_p3.read());
}

void ShuffleNetV2::thread_p_shl575_cast_fu_27237_p1() {
    p_shl575_cast_fu_27237_p1 = esl_zext<18,17>(tmp_1756_fu_27230_p3.read());
}

void ShuffleNetV2::thread_p_shl576_cast_fu_27248_p1() {
    p_shl576_cast_fu_27248_p1 = esl_zext<18,15>(tmp_1757_fu_27241_p3.read());
}

void ShuffleNetV2::thread_p_shl577_cast_fu_27433_p1() {
    p_shl577_cast_fu_27433_p1 = esl_zext<10,9>(tmp_1750_fu_27425_p3.read());
}

void ShuffleNetV2::thread_p_shl578_cast_fu_27445_p1() {
    p_shl578_cast_fu_27445_p1 = esl_zext<10,7>(tmp_1751_fu_27437_p3.read());
}

void ShuffleNetV2::thread_p_shl579_cast_fu_27484_p1() {
    p_shl579_cast_fu_27484_p1 = esl_zext<15,13>(tmp_1767_fu_27476_p3.read());
}

void ShuffleNetV2::thread_p_shl57_cast_fu_16921_p1() {
    p_shl57_cast_fu_16921_p1 = esl_zext<7,4>(p_shl57_fu_16913_p3.read());
}

void ShuffleNetV2::thread_p_shl57_fu_16913_p3() {
    p_shl57_fu_16913_p3 = esl_concat<2,2>(tmp_1329_fu_16897_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl580_cast_fu_27496_p1() {
    p_shl580_cast_fu_27496_p1 = esl_zext<15,11>(tmp_1768_fu_27488_p3.read());
}

void ShuffleNetV2::thread_p_shl582_cast_fu_27744_p1() {
    p_shl582_cast_fu_27744_p1 = esl_sext<12,10>(tmp_1780_fu_27736_p3.read());
}

void ShuffleNetV2::thread_p_shl583_cast_fu_27766_p1() {
    p_shl583_cast_fu_27766_p1 = esl_zext<18,17>(tmp_1775_fu_27759_p3.read());
}

void ShuffleNetV2::thread_p_shl584_cast_fu_27777_p1() {
    p_shl584_cast_fu_27777_p1 = esl_zext<18,15>(tmp_1776_fu_27770_p3.read());
}

void ShuffleNetV2::thread_p_shl586_cast_fu_28123_p1() {
    p_shl586_cast_fu_28123_p1 = esl_zext<13,12>(tmp_1795_fu_28116_p3.read());
}

void ShuffleNetV2::thread_p_shl587_cast_fu_28138_p3() {
    p_shl587_cast_fu_28138_p3 = esl_concat<9,2>(tmp_1792_reg_41322.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl588_cast_fu_28086_p1() {
    p_shl588_cast_fu_28086_p1 = esl_zext<35,34>(tmp_1788_fu_28082_p1.read());
}

void ShuffleNetV2::thread_p_shl58_cast_fu_16948_p1() {
    p_shl58_cast_fu_16948_p1 = esl_zext<8,7>(p_shl58_fu_16940_p3.read());
}

void ShuffleNetV2::thread_p_shl58_fu_16940_p3() {
    p_shl58_fu_16940_p3 = esl_concat<2,5>(tmp_1329_fu_16897_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl590_cast_fu_28523_p1() {
    p_shl590_cast_fu_28523_p1 = esl_sext<12,10>(tmp_1810_fu_28515_p3.read());
}

void ShuffleNetV2::thread_p_shl591_cast_fu_28545_p1() {
    p_shl591_cast_fu_28545_p1 = esl_zext<18,17>(tmp_1805_fu_28538_p3.read());
}

void ShuffleNetV2::thread_p_shl592_cast_fu_28556_p1() {
    p_shl592_cast_fu_28556_p1 = esl_zext<18,15>(tmp_1806_fu_28549_p3.read());
}

void ShuffleNetV2::thread_p_shl594_cast_fu_28906_p1() {
    p_shl594_cast_fu_28906_p1 = esl_zext<13,12>(tmp_1825_fu_28899_p3.read());
}

void ShuffleNetV2::thread_p_shl595_cast_fu_28921_p3() {
    p_shl595_cast_fu_28921_p3 = esl_concat<9,2>(tmp_1822_reg_41622.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl596_cast_fu_28869_p1() {
    p_shl596_cast_fu_28869_p1 = esl_zext<35,34>(tmp_1818_fu_28865_p1.read());
}

void ShuffleNetV2::thread_p_shl598_cast_fu_29302_p1() {
    p_shl598_cast_fu_29302_p1 = esl_sext<12,10>(tmp_1846_fu_29294_p3.read());
}

void ShuffleNetV2::thread_p_shl599_cast_fu_29324_p1() {
    p_shl599_cast_fu_29324_p1 = esl_zext<18,17>(tmp_1841_fu_29317_p3.read());
}

void ShuffleNetV2::thread_p_shl59_cast_fu_16960_p1() {
    p_shl59_cast_fu_16960_p1 = esl_zext<8,5>(p_shl59_fu_16952_p3.read());
}

void ShuffleNetV2::thread_p_shl59_fu_16952_p3() {
    p_shl59_fu_16952_p3 = esl_concat<2,3>(tmp_1329_fu_16897_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl5_cast_fu_13121_p1() {
    p_shl5_cast_fu_13121_p1 = esl_zext<7,4>(p_shl5_fu_13113_p3.read());
}

void ShuffleNetV2::thread_p_shl5_fu_13113_p3() {
    p_shl5_fu_13113_p3 = esl_concat<2,2>(tmp_1181_fu_13097_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl600_cast_fu_29335_p1() {
    p_shl600_cast_fu_29335_p1 = esl_zext<18,15>(tmp_1842_fu_29328_p3.read());
}

void ShuffleNetV2::thread_p_shl601_cast_fu_29560_p1() {
    p_shl601_cast_fu_29560_p1 = esl_zext<12,11>(tmp_1834_fu_29552_p3.read());
}

void ShuffleNetV2::thread_p_shl602_cast_fu_29572_p1() {
    p_shl602_cast_fu_29572_p1 = esl_zext<12,9>(tmp_1835_fu_29564_p3.read());
}

void ShuffleNetV2::thread_p_shl603_cast_fu_29520_p1() {
    p_shl603_cast_fu_29520_p1 = esl_zext<11,10>(tmp_1831_fu_29512_p3.read());
}

void ShuffleNetV2::thread_p_shl604_cast_fu_29532_p1() {
    p_shl604_cast_fu_29532_p1 = esl_zext<11,8>(tmp_1832_fu_29524_p3.read());
}

void ShuffleNetV2::thread_p_shl605_cast_fu_29646_p3() {
    p_shl605_cast_fu_29646_p3 = esl_concat<10,3>(tmp_1855_fu_29642_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl606_cast_fu_29654_p3() {
    p_shl606_cast_fu_29654_p3 = esl_concat<12,1>(tmp_1854_fu_29637_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl607_cast_fu_29615_p3() {
    p_shl607_cast_fu_29615_p3 = esl_concat<11,3>(tmp_1852_fu_29611_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl608_cast_fu_29623_p3() {
    p_shl608_cast_fu_29623_p3 = esl_concat<13,1>(tmp_1851_fu_29606_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl60_cast_fu_17511_p1() {
    p_shl60_cast_fu_17511_p1 = esl_zext<7,6>(p_shl60_fu_17503_p3.read());
}

void ShuffleNetV2::thread_p_shl60_fu_17503_p3() {
    p_shl60_fu_17503_p3 = esl_concat<1,5>(tmp_1340_fu_17499_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl610_cast_fu_29919_p1() {
    p_shl610_cast_fu_29919_p1 = esl_sext<12,10>(tmp_1868_fu_29911_p3.read());
}

void ShuffleNetV2::thread_p_shl611_cast_fu_29941_p1() {
    p_shl611_cast_fu_29941_p1 = esl_zext<18,17>(tmp_1863_fu_29934_p3.read());
}

void ShuffleNetV2::thread_p_shl612_cast_fu_29952_p1() {
    p_shl612_cast_fu_29952_p1 = esl_zext<18,15>(tmp_1864_fu_29945_p3.read());
}

void ShuffleNetV2::thread_p_shl614_cast_fu_30294_p1() {
    p_shl614_cast_fu_30294_p1 = esl_zext<13,12>(tmp_1883_fu_30287_p3.read());
}

void ShuffleNetV2::thread_p_shl615_cast_fu_30309_p3() {
    p_shl615_cast_fu_30309_p3 = esl_concat<9,2>(tmp_1880_reg_42133.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl616_cast_fu_30257_p1() {
    p_shl616_cast_fu_30257_p1 = esl_zext<35,34>(tmp_1876_fu_30253_p1.read());
}

void ShuffleNetV2::thread_p_shl618_cast_fu_30690_p1() {
    p_shl618_cast_fu_30690_p1 = esl_sext<12,10>(tmp_1903_fu_30682_p3.read());
}

void ShuffleNetV2::thread_p_shl619_cast_fu_30716_p1() {
    p_shl619_cast_fu_30716_p1 = esl_zext<18,17>(tmp_1897_fu_30712_p1.read());
}

void ShuffleNetV2::thread_p_shl61_cast_fu_17523_p1() {
    p_shl61_cast_fu_17523_p1 = esl_zext<7,4>(p_shl61_fu_17515_p3.read());
}

void ShuffleNetV2::thread_p_shl61_fu_17515_p3() {
    p_shl61_fu_17515_p3 = esl_concat<1,3>(tmp_1340_fu_17499_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl620_cast_fu_30731_p1() {
    p_shl620_cast_fu_30731_p1 = esl_zext<18,15>(tmp_1899_fu_30727_p1.read());
}

void ShuffleNetV2::thread_p_shl621_cast_fu_30912_p1() {
    p_shl621_cast_fu_30912_p1 = esl_zext<11,10>(tmp_1889_fu_30904_p3.read());
}

void ShuffleNetV2::thread_p_shl622_cast_fu_30924_p1() {
    p_shl622_cast_fu_30924_p1 = esl_zext<11,8>(tmp_1890_fu_30916_p3.read());
}

void ShuffleNetV2::thread_p_shl623_cast_fu_30963_p3() {
    p_shl623_cast_fu_30963_p3 = esl_concat<11,3>(tmp_1913_fu_30959_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl624_cast_fu_30979_p1() {
    p_shl624_cast_fu_30979_p1 = esl_sext<14,13>(tmp_1914_fu_30971_p3.read());
}

void ShuffleNetV2::thread_p_shl625_cast_fu_31079_p1() {
    p_shl625_cast_fu_31079_p1 = esl_zext<12,11>(tmp_1909_fu_31071_p3.read());
}

void ShuffleNetV2::thread_p_shl626_cast_fu_31091_p1() {
    p_shl626_cast_fu_31091_p1 = esl_zext<12,9>(tmp_1910_fu_31083_p3.read());
}

void ShuffleNetV2::thread_p_shl627_cast_fu_31039_p1() {
    p_shl627_cast_fu_31039_p1 = esl_zext<11,10>(tmp_1906_fu_31031_p3.read());
}

void ShuffleNetV2::thread_p_shl628_cast_fu_31051_p1() {
    p_shl628_cast_fu_31051_p1 = esl_zext<11,8>(tmp_1907_fu_31043_p3.read());
}

void ShuffleNetV2::thread_p_shl629_cast_fu_31165_p3() {
    p_shl629_cast_fu_31165_p3 = esl_concat<11,3>(tmp_1922_fu_31161_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl62_cast_fu_17611_p1() {
    p_shl62_cast_fu_17611_p1 = esl_zext<7,6>(p_shl62_fu_17603_p3.read());
}

void ShuffleNetV2::thread_p_shl62_fu_17603_p3() {
    p_shl62_fu_17603_p3 = esl_concat<1,5>(tmp_1339_fu_17599_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl630_cast_fu_31173_p3() {
    p_shl630_cast_fu_31173_p3 = esl_concat<13,1>(tmp_1921_fu_31156_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl631_cast_fu_31134_p3() {
    p_shl631_cast_fu_31134_p3 = esl_concat<10,3>(tmp_1919_fu_31130_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl632_cast_fu_31142_p3() {
    p_shl632_cast_fu_31142_p3 = esl_concat<12,1>(tmp_1918_fu_31125_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl634_cast_fu_31438_p1() {
    p_shl634_cast_fu_31438_p1 = esl_sext<12,10>(tmp_1936_fu_31430_p3.read());
}

void ShuffleNetV2::thread_p_shl635_cast_fu_31460_p1() {
    p_shl635_cast_fu_31460_p1 = esl_zext<19,18>(tmp_1931_fu_31453_p3.read());
}

void ShuffleNetV2::thread_p_shl636_cast_fu_31471_p1() {
    p_shl636_cast_fu_31471_p1 = esl_zext<19,16>(tmp_1932_fu_31464_p3.read());
}

void ShuffleNetV2::thread_p_shl638_cast_fu_31821_p1() {
    p_shl638_cast_fu_31821_p1 = esl_zext<13,12>(tmp_1952_fu_31817_p1.read());
}

void ShuffleNetV2::thread_p_shl639_cast_fu_31840_p3() {
    p_shl639_cast_fu_31840_p3 = esl_concat<9,2>(tmp_1948_reg_42688.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl63_cast_fu_17623_p1() {
    p_shl63_cast_fu_17623_p1 = esl_zext<7,4>(p_shl63_fu_17615_p3.read());
}

void ShuffleNetV2::thread_p_shl63_fu_17615_p3() {
    p_shl63_fu_17615_p3 = esl_concat<1,3>(tmp_1339_fu_17599_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl640_cast_fu_31776_p1() {
    p_shl640_cast_fu_31776_p1 = esl_zext<35,34>(tmp_1944_fu_31772_p1.read());
}

void ShuffleNetV2::thread_p_shl642_cast_fu_32221_p1() {
    p_shl642_cast_fu_32221_p1 = esl_sext<12,10>(tmp_1970_fu_32213_p3.read());
}

void ShuffleNetV2::thread_p_shl643_cast_fu_32243_p1() {
    p_shl643_cast_fu_32243_p1 = esl_zext<19,18>(tmp_1965_fu_32236_p3.read());
}

void ShuffleNetV2::thread_p_shl644_cast_fu_32254_p1() {
    p_shl644_cast_fu_32254_p1 = esl_zext<19,16>(tmp_1966_fu_32247_p3.read());
}

void ShuffleNetV2::thread_p_shl645_cast_fu_32435_p1() {
    p_shl645_cast_fu_32435_p1 = esl_zext<11,10>(tmp_1958_fu_32427_p3.read());
}

void ShuffleNetV2::thread_p_shl646_cast_fu_32447_p1() {
    p_shl646_cast_fu_32447_p1 = esl_zext<11,8>(tmp_1959_fu_32439_p3.read());
}

void ShuffleNetV2::thread_p_shl647_cast_fu_32486_p3() {
    p_shl647_cast_fu_32486_p3 = esl_concat<11,3>(tmp_1980_fu_32482_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl648_cast_fu_32502_p1() {
    p_shl648_cast_fu_32502_p1 = esl_sext<14,13>(tmp_1981_fu_32494_p3.read());
}

void ShuffleNetV2::thread_p_shl649_cast_fu_32602_p1() {
    p_shl649_cast_fu_32602_p1 = esl_zext<12,11>(tmp_1976_fu_32594_p3.read());
}

void ShuffleNetV2::thread_p_shl64_cast_fu_17943_p1() {
    p_shl64_cast_fu_17943_p1 = esl_zext<7,6>(p_shl64_fu_17935_p3.read());
}

void ShuffleNetV2::thread_p_shl64_fu_17935_p3() {
    p_shl64_fu_17935_p3 = esl_concat<1,5>(tmp_1359_fu_17931_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl650_cast_fu_32614_p1() {
    p_shl650_cast_fu_32614_p1 = esl_zext<12,9>(tmp_1977_fu_32606_p3.read());
}

void ShuffleNetV2::thread_p_shl651_cast_fu_32562_p1() {
    p_shl651_cast_fu_32562_p1 = esl_zext<11,10>(tmp_1973_fu_32554_p3.read());
}

void ShuffleNetV2::thread_p_shl652_cast_fu_32574_p1() {
    p_shl652_cast_fu_32574_p1 = esl_zext<11,8>(tmp_1974_fu_32566_p3.read());
}

void ShuffleNetV2::thread_p_shl653_cast_fu_32688_p3() {
    p_shl653_cast_fu_32688_p3 = esl_concat<10,3>(tmp_1989_fu_32684_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl654_cast_fu_32696_p3() {
    p_shl654_cast_fu_32696_p3 = esl_concat<12,1>(tmp_1988_fu_32679_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl655_cast_fu_32657_p3() {
    p_shl655_cast_fu_32657_p3 = esl_concat<11,3>(tmp_1986_fu_32653_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl656_cast_fu_32665_p3() {
    p_shl656_cast_fu_32665_p3 = esl_concat<13,1>(tmp_1985_fu_32648_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl658_cast_fu_32961_p1() {
    p_shl658_cast_fu_32961_p1 = esl_sext<12,10>(tmp_2003_fu_32953_p3.read());
}

void ShuffleNetV2::thread_p_shl659_cast_fu_32983_p1() {
    p_shl659_cast_fu_32983_p1 = esl_zext<19,18>(tmp_1998_fu_32976_p3.read());
}

void ShuffleNetV2::thread_p_shl65_cast_fu_17955_p1() {
    p_shl65_cast_fu_17955_p1 = esl_zext<7,4>(p_shl65_fu_17947_p3.read());
}

void ShuffleNetV2::thread_p_shl65_fu_17947_p3() {
    p_shl65_fu_17947_p3 = esl_concat<1,3>(tmp_1359_fu_17931_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl660_cast_fu_32994_p1() {
    p_shl660_cast_fu_32994_p1 = esl_zext<19,16>(tmp_1999_fu_32987_p3.read());
}

void ShuffleNetV2::thread_p_shl662_cast_fu_33336_p1() {
    p_shl662_cast_fu_33336_p1 = esl_zext<14,13>(tmp_2018_fu_33329_p3.read());
}

void ShuffleNetV2::thread_p_shl663_cast_fu_33355_p3() {
    p_shl663_cast_fu_33355_p3 = esl_concat<9,2>(tmp_2015_reg_43243.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl664_cast_fu_33299_p1() {
    p_shl664_cast_fu_33299_p1 = esl_zext<35,34>(tmp_2011_fu_33295_p1.read());
}

void ShuffleNetV2::thread_p_shl666_cast_fu_33736_p1() {
    p_shl666_cast_fu_33736_p1 = esl_sext<12,10>(tmp_2036_fu_33728_p3.read());
}

void ShuffleNetV2::thread_p_shl667_cast_fu_33758_p1() {
    p_shl667_cast_fu_33758_p1 = esl_zext<19,18>(tmp_2031_fu_33751_p3.read());
}

void ShuffleNetV2::thread_p_shl668_cast_fu_33769_p1() {
    p_shl668_cast_fu_33769_p1 = esl_zext<19,16>(tmp_2032_fu_33762_p3.read());
}

void ShuffleNetV2::thread_p_shl669_cast_fu_33950_p1() {
    p_shl669_cast_fu_33950_p1 = esl_zext<11,10>(tmp_2024_fu_33942_p3.read());
}

void ShuffleNetV2::thread_p_shl66_cast_fu_17294_p1() {
    p_shl66_cast_fu_17294_p1 = esl_zext<7,6>(p_shl66_fu_17286_p3.read());
}

void ShuffleNetV2::thread_p_shl66_fu_17286_p3() {
    p_shl66_fu_17286_p3 = esl_concat<1,5>(tmp_1341_fu_17282_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl670_cast_fu_33962_p1() {
    p_shl670_cast_fu_33962_p1 = esl_zext<11,8>(tmp_2025_fu_33954_p3.read());
}

void ShuffleNetV2::thread_p_shl671_cast_fu_34001_p3() {
    p_shl671_cast_fu_34001_p3 = esl_concat<11,3>(tmp_2044_fu_33997_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl672_cast_fu_34017_p1() {
    p_shl672_cast_fu_34017_p1 = esl_sext<14,13>(tmp_2045_fu_34009_p3.read());
}

void ShuffleNetV2::thread_p_shl673_cast_fu_34085_p1() {
    p_shl673_cast_fu_34085_p1 = esl_zext<12,11>(tmp_2040_fu_34077_p3.read());
}

void ShuffleNetV2::thread_p_shl674_cast_fu_34097_p1() {
    p_shl674_cast_fu_34097_p1 = esl_zext<12,9>(tmp_2041_fu_34089_p3.read());
}

void ShuffleNetV2::thread_p_shl675_cast_fu_34153_p3() {
    p_shl675_cast_fu_34153_p3 = esl_concat<11,3>(tmp_2049_fu_34149_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl676_cast_fu_34161_p3() {
    p_shl676_cast_fu_34161_p3 = esl_concat<13,1>(tmp_2048_fu_34144_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl67_cast_fu_17306_p1() {
    p_shl67_cast_fu_17306_p1 = esl_zext<7,4>(p_shl67_fu_17298_p3.read());
}

void ShuffleNetV2::thread_p_shl67_fu_17298_p3() {
    p_shl67_fu_17298_p3 = esl_concat<1,3>(tmp_1341_fu_17282_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl68_cast_fu_17710_p1() {
    p_shl68_cast_fu_17710_p1 = esl_zext<7,6>(p_shl68_fu_17702_p3.read());
}

void ShuffleNetV2::thread_p_shl68_fu_17702_p3() {
    p_shl68_fu_17702_p3 = esl_concat<2,4>(tmp_1360_fu_17698_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl69_cast_fu_17722_p1() {
    p_shl69_cast_fu_17722_p1 = esl_zext<7,4>(p_shl69_fu_17714_p3.read());
}

void ShuffleNetV2::thread_p_shl69_fu_17714_p3() {
    p_shl69_fu_17714_p3 = esl_concat<2,2>(tmp_1360_fu_17698_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl6_cast_fu_13148_p1() {
    p_shl6_cast_fu_13148_p1 = esl_zext<8,7>(p_shl6_fu_13140_p3.read());
}

void ShuffleNetV2::thread_p_shl6_fu_13140_p3() {
    p_shl6_fu_13140_p3 = esl_concat<2,5>(tmp_1181_fu_13097_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl70_cast_fu_17749_p1() {
    p_shl70_cast_fu_17749_p1 = esl_zext<8,7>(p_shl70_fu_17741_p3.read());
}

void ShuffleNetV2::thread_p_shl70_fu_17741_p3() {
    p_shl70_fu_17741_p3 = esl_concat<2,5>(tmp_1360_fu_17698_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl71_cast_fu_17761_p1() {
    p_shl71_cast_fu_17761_p1 = esl_zext<8,5>(p_shl71_fu_17753_p3.read());
}

void ShuffleNetV2::thread_p_shl71_fu_17753_p3() {
    p_shl71_fu_17753_p3 = esl_concat<2,3>(tmp_1360_fu_17698_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl72_cast_fu_18373_p1() {
    p_shl72_cast_fu_18373_p1 = esl_zext<7,6>(p_shl72_fu_18365_p3.read());
}

void ShuffleNetV2::thread_p_shl72_fu_18365_p3() {
    p_shl72_fu_18365_p3 = esl_concat<1,5>(tmp_1380_fu_18361_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl73_cast_fu_18385_p1() {
    p_shl73_cast_fu_18385_p1 = esl_zext<7,4>(p_shl73_fu_18377_p3.read());
}

void ShuffleNetV2::thread_p_shl73_fu_18377_p3() {
    p_shl73_fu_18377_p3 = esl_concat<1,3>(tmp_1380_fu_18361_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl74_cast_fu_18713_p1() {
    p_shl74_cast_fu_18713_p1 = esl_zext<7,6>(p_shl74_fu_18705_p3.read());
}

void ShuffleNetV2::thread_p_shl74_fu_18705_p3() {
    p_shl74_fu_18705_p3 = esl_concat<1,5>(tmp_1392_fu_18701_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl75_cast_fu_18725_p1() {
    p_shl75_cast_fu_18725_p1 = esl_zext<7,4>(p_shl75_fu_18717_p3.read());
}

void ShuffleNetV2::thread_p_shl75_fu_18717_p3() {
    p_shl75_fu_18717_p3 = esl_concat<1,3>(tmp_1392_fu_18701_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl76_cast_fu_18472_p1() {
    p_shl76_cast_fu_18472_p1 = esl_zext<7,6>(p_shl76_fu_18464_p3.read());
}

void ShuffleNetV2::thread_p_shl76_fu_18464_p3() {
    p_shl76_fu_18464_p3 = esl_concat<2,4>(tmp_1393_fu_18460_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl77_cast_fu_18484_p1() {
    p_shl77_cast_fu_18484_p1 = esl_zext<7,4>(p_shl77_fu_18476_p3.read());
}

void ShuffleNetV2::thread_p_shl77_fu_18476_p3() {
    p_shl77_fu_18476_p3 = esl_concat<2,2>(tmp_1393_fu_18460_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl78_cast_fu_18511_p1() {
    p_shl78_cast_fu_18511_p1 = esl_zext<8,7>(p_shl78_fu_18503_p3.read());
}

void ShuffleNetV2::thread_p_shl78_fu_18503_p3() {
    p_shl78_fu_18503_p3 = esl_concat<2,5>(tmp_1393_fu_18460_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl79_cast_fu_18523_p1() {
    p_shl79_cast_fu_18523_p1 = esl_zext<8,5>(p_shl79_fu_18515_p3.read());
}

void ShuffleNetV2::thread_p_shl79_fu_18515_p3() {
    p_shl79_fu_18515_p3 = esl_concat<2,3>(tmp_1393_fu_18460_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl7_cast_fu_13160_p1() {
    p_shl7_cast_fu_13160_p1 = esl_zext<8,5>(p_shl7_fu_13152_p3.read());
}

void ShuffleNetV2::thread_p_shl7_fu_13152_p3() {
    p_shl7_fu_13152_p3 = esl_concat<2,3>(tmp_1181_fu_13097_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl80_cast_fu_19082_p1() {
    p_shl80_cast_fu_19082_p1 = esl_zext<7,6>(p_shl80_fu_19074_p3.read());
}

void ShuffleNetV2::thread_p_shl80_fu_19074_p3() {
    p_shl80_fu_19074_p3 = esl_concat<1,5>(tmp_1406_fu_19070_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl81_cast_fu_19094_p1() {
    p_shl81_cast_fu_19094_p1 = esl_zext<7,4>(p_shl81_fu_19086_p3.read());
}

void ShuffleNetV2::thread_p_shl81_fu_19086_p3() {
    p_shl81_fu_19086_p3 = esl_concat<1,3>(tmp_1406_fu_19070_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl82_cast_fu_19182_p1() {
    p_shl82_cast_fu_19182_p1 = esl_zext<7,6>(p_shl82_fu_19174_p3.read());
}

void ShuffleNetV2::thread_p_shl82_fu_19174_p3() {
    p_shl82_fu_19174_p3 = esl_concat<1,5>(tmp_1405_fu_19170_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl83_cast_fu_19194_p1() {
    p_shl83_cast_fu_19194_p1 = esl_zext<7,4>(p_shl83_fu_19186_p3.read());
}

void ShuffleNetV2::thread_p_shl83_fu_19186_p3() {
    p_shl83_fu_19186_p3 = esl_concat<1,3>(tmp_1405_fu_19170_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl84_cast_fu_19514_p1() {
    p_shl84_cast_fu_19514_p1 = esl_zext<7,6>(p_shl84_fu_19506_p3.read());
}

void ShuffleNetV2::thread_p_shl84_fu_19506_p3() {
    p_shl84_fu_19506_p3 = esl_concat<1,5>(tmp_1425_fu_19502_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl85_cast_fu_19526_p1() {
    p_shl85_cast_fu_19526_p1 = esl_zext<7,4>(p_shl85_fu_19518_p3.read());
}

void ShuffleNetV2::thread_p_shl85_fu_19518_p3() {
    p_shl85_fu_19518_p3 = esl_concat<1,3>(tmp_1425_fu_19502_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl86_cast_fu_18869_p1() {
    p_shl86_cast_fu_18869_p1 = esl_zext<7,6>(p_shl86_fu_18861_p3.read());
}

void ShuffleNetV2::thread_p_shl86_fu_18861_p3() {
    p_shl86_fu_18861_p3 = esl_concat<1,5>(tmp_1407_fu_18857_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl87_cast_fu_18881_p1() {
    p_shl87_cast_fu_18881_p1 = esl_zext<7,4>(p_shl87_fu_18873_p3.read());
}

void ShuffleNetV2::thread_p_shl87_fu_18873_p3() {
    p_shl87_fu_18873_p3 = esl_concat<1,3>(tmp_1407_fu_18857_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl88_cast_fu_19281_p1() {
    p_shl88_cast_fu_19281_p1 = esl_zext<7,6>(p_shl88_fu_19273_p3.read());
}

void ShuffleNetV2::thread_p_shl88_fu_19273_p3() {
    p_shl88_fu_19273_p3 = esl_concat<2,4>(tmp_1426_fu_19269_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl89_cast_fu_19293_p1() {
    p_shl89_cast_fu_19293_p1 = esl_zext<7,4>(p_shl89_fu_19285_p3.read());
}

void ShuffleNetV2::thread_p_shl89_fu_19285_p3() {
    p_shl89_fu_19285_p3 = esl_concat<2,2>(tmp_1426_fu_19269_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl8_cast_fu_13711_p1() {
    p_shl8_cast_fu_13711_p1 = esl_zext<7,6>(p_shl8_fu_13703_p3.read());
}

void ShuffleNetV2::thread_p_shl8_fu_13703_p3() {
    p_shl8_fu_13703_p3 = esl_concat<1,5>(tmp_1192_fu_13699_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl90_cast_fu_19320_p1() {
    p_shl90_cast_fu_19320_p1 = esl_zext<8,7>(p_shl90_fu_19312_p3.read());
}

void ShuffleNetV2::thread_p_shl90_fu_19312_p3() {
    p_shl90_fu_19312_p3 = esl_concat<2,5>(tmp_1426_fu_19269_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl91_cast_fu_19332_p1() {
    p_shl91_cast_fu_19332_p1 = esl_zext<8,5>(p_shl91_fu_19324_p3.read());
}

void ShuffleNetV2::thread_p_shl91_fu_19324_p3() {
    p_shl91_fu_19324_p3 = esl_concat<2,3>(tmp_1426_fu_19269_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl92_cast_fu_19944_p1() {
    p_shl92_cast_fu_19944_p1 = esl_zext<7,6>(p_shl92_fu_19936_p3.read());
}

void ShuffleNetV2::thread_p_shl92_fu_19936_p3() {
    p_shl92_fu_19936_p3 = esl_concat<1,5>(tmp_1446_fu_19932_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl93_cast_fu_19956_p1() {
    p_shl93_cast_fu_19956_p1 = esl_zext<7,4>(p_shl93_fu_19948_p3.read());
}

void ShuffleNetV2::thread_p_shl93_fu_19948_p3() {
    p_shl93_fu_19948_p3 = esl_concat<1,3>(tmp_1446_fu_19932_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl94_cast_fu_20276_p1() {
    p_shl94_cast_fu_20276_p1 = esl_zext<7,6>(p_shl94_fu_20268_p3.read());
}

void ShuffleNetV2::thread_p_shl94_fu_20268_p3() {
    p_shl94_fu_20268_p3 = esl_concat<1,5>(tmp_1458_fu_20264_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl95_cast_fu_20288_p1() {
    p_shl95_cast_fu_20288_p1 = esl_zext<7,4>(p_shl95_fu_20280_p3.read());
}

void ShuffleNetV2::thread_p_shl95_fu_20280_p3() {
    p_shl95_fu_20280_p3 = esl_concat<1,3>(tmp_1458_fu_20264_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl96_cast_fu_20043_p1() {
    p_shl96_cast_fu_20043_p1 = esl_zext<7,6>(p_shl96_fu_20035_p3.read());
}

void ShuffleNetV2::thread_p_shl96_fu_20035_p3() {
    p_shl96_fu_20035_p3 = esl_concat<2,4>(tmp_1459_fu_20031_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl97_cast_fu_20055_p1() {
    p_shl97_cast_fu_20055_p1 = esl_zext<7,4>(p_shl97_fu_20047_p3.read());
}

void ShuffleNetV2::thread_p_shl97_fu_20047_p3() {
    p_shl97_fu_20047_p3 = esl_concat<2,2>(tmp_1459_fu_20031_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl98_cast_fu_20082_p1() {
    p_shl98_cast_fu_20082_p1 = esl_zext<8,7>(p_shl98_fu_20074_p3.read());
}

void ShuffleNetV2::thread_p_shl98_fu_20074_p3() {
    p_shl98_fu_20074_p3 = esl_concat<2,5>(tmp_1459_fu_20031_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl99_cast_fu_20094_p1() {
    p_shl99_cast_fu_20094_p1 = esl_zext<8,5>(p_shl99_fu_20086_p3.read());
}

void ShuffleNetV2::thread_p_shl99_fu_20086_p3() {
    p_shl99_fu_20086_p3 = esl_concat<2,3>(tmp_1459_fu_20031_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl9_cast_fu_13723_p1() {
    p_shl9_cast_fu_13723_p1 = esl_zext<7,4>(p_shl9_fu_13715_p3.read());
}

void ShuffleNetV2::thread_p_shl9_fu_13715_p3() {
    p_shl9_fu_13715_p3 = esl_concat<1,3>(tmp_1192_fu_13699_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl_cast_fu_13010_p1() {
    p_shl_cast_fu_13010_p1 = esl_zext<7,6>(p_shl_fu_13002_p3.read());
}

void ShuffleNetV2::thread_p_shl_fu_13002_p3() {
    p_shl_fu_13002_p3 = esl_concat<1,5>(tmp_1174_fu_12998_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_10_fu_20999_p2() {
    shuffle_conv_1x1_V8_10_fu_20999_p2 = (!tmp_1713_cast_fu_20995_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1713_cast_fu_20995_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_11_fu_21757_p2() {
    shuffle_conv_1x1_V8_11_fu_21757_p2 = (!tmp_1752_cast_fu_21753_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1752_cast_fu_21753_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_12_fu_22558_p2() {
    shuffle_conv_1x1_V8_12_fu_22558_p2 = (!tmp_1791_cast_fu_22554_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1791_cast_fu_22554_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_13_fu_23316_p2() {
    shuffle_conv_1x1_V8_13_fu_23316_p2 = (!tmp_1830_cast_fu_23312_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1830_cast_fu_23312_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_14_fu_24121_p2() {
    shuffle_conv_1x1_V8_14_fu_24121_p2 = (!tmp_1869_cast_fu_24117_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1869_cast_fu_24117_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_15_fu_24887_p2() {
    shuffle_conv_1x1_V8_15_fu_24887_p2 = (!tmp_1910_cast_fu_24883_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1910_cast_fu_24883_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_16_fu_25692_p2() {
    shuffle_conv_1x1_V8_16_fu_25692_p2 = (!tmp_1950_cast_fu_25688_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1950_cast_fu_25688_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_17_fu_26462_p2() {
    shuffle_conv_1x1_V8_17_fu_26462_p2 = (!tmp_1991_cast_fu_26458_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1991_cast_fu_26458_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_18_fu_27271_p2() {
    shuffle_conv_1x1_V8_18_fu_27271_p2 = (!tmp_2029_cast_fu_27267_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2029_cast_fu_27267_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_19_fu_27800_p2() {
    shuffle_conv_1x1_V8_19_fu_27800_p2 = (!tmp_2051_cast_fu_27796_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2051_cast_fu_27796_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_1_fu_14874_p2() {
    shuffle_conv_1x1_V8_1_fu_14874_p2 = (!tmp_1414_cast_fu_14870_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1414_cast_fu_14870_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_20_fu_28579_p2() {
    shuffle_conv_1x1_V8_20_fu_28579_p2 = (!tmp_2085_cast_fu_28575_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2085_cast_fu_28575_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_21_fu_29358_p2() {
    shuffle_conv_1x1_V8_21_fu_29358_p2 = (!tmp_2125_cast_fu_29354_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2125_cast_fu_29354_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_22_fu_29975_p2() {
    shuffle_conv_1x1_V8_22_fu_29975_p2 = (!tmp_2152_cast_fu_29971_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2152_cast_fu_29971_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_23_fu_30754_p2() {
    shuffle_conv_1x1_V8_23_fu_30754_p2 = (!tmp_2191_cast_fu_30750_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2191_cast_fu_30750_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_24_fu_31494_p2() {
    shuffle_conv_1x1_V8_24_fu_31494_p2 = (!tmp_2229_cast_fu_31490_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2229_cast_fu_31490_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_25_fu_32277_p2() {
    shuffle_conv_1x1_V8_25_fu_32277_p2 = (!tmp_2267_cast_fu_32273_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2267_cast_fu_32273_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_26_fu_33017_p2() {
    shuffle_conv_1x1_V8_26_fu_33017_p2 = (!tmp_2305_cast_fu_33013_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2305_cast_fu_33013_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_27_fu_33792_p2() {
    shuffle_conv_1x1_V8_27_fu_33792_p2 = (!tmp_2342_cast_fu_33788_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2342_cast_fu_33788_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_28_fu_14073_p2() {
    shuffle_conv_1x1_V8_28_fu_14073_p2 = (!tmp_1373_cast_fu_14069_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1373_cast_fu_14069_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_29_fu_14078_p1() {
    shuffle_conv_1x1_V8_29_fu_14078_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_28_fu_14073_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_2_fu_15513_p2() {
    shuffle_conv_1x1_V8_2_fu_15513_p2 = (!tmp_1442_cast_fu_15509_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1442_cast_fu_15509_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_30_fu_14879_p1() {
    shuffle_conv_1x1_V8_30_fu_14879_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_1_fu_14874_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_31_fu_15518_p1() {
    shuffle_conv_1x1_V8_31_fu_15518_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_2_fu_15513_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_32_fu_16319_p1() {
    shuffle_conv_1x1_V8_32_fu_16319_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_3_fu_16314_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_33_fu_17077_p1() {
    shuffle_conv_1x1_V8_33_fu_17077_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_4_fu_17072_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_34_fu_17878_p1() {
    shuffle_conv_1x1_V8_34_fu_17878_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_5_fu_17873_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_35_fu_18648_p1() {
    shuffle_conv_1x1_V8_35_fu_18648_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_6_fu_18643_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_36_fu_19449_p1() {
    shuffle_conv_1x1_V8_36_fu_19449_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_7_fu_19444_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_37_fu_20211_p1() {
    shuffle_conv_1x1_V8_37_fu_20211_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_8_fu_20206_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_38_fu_21004_p1() {
    shuffle_conv_1x1_V8_38_fu_21004_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_10_fu_20999_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_39_fu_21762_p1() {
    shuffle_conv_1x1_V8_39_fu_21762_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_11_fu_21757_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_3_fu_16314_p2() {
    shuffle_conv_1x1_V8_3_fu_16314_p2 = (!tmp_1480_cast_fu_16310_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1480_cast_fu_16310_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_40_fu_22563_p1() {
    shuffle_conv_1x1_V8_40_fu_22563_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_12_fu_22558_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_41_fu_23321_p1() {
    shuffle_conv_1x1_V8_41_fu_23321_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_13_fu_23316_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_42_fu_24126_p1() {
    shuffle_conv_1x1_V8_42_fu_24126_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_14_fu_24121_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_43_fu_24892_p1() {
    shuffle_conv_1x1_V8_43_fu_24892_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_15_fu_24887_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_44_fu_25697_p1() {
    shuffle_conv_1x1_V8_44_fu_25697_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_16_fu_25692_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_45_fu_26467_p1() {
    shuffle_conv_1x1_V8_45_fu_26467_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_17_fu_26462_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_46_fu_27276_p1() {
    shuffle_conv_1x1_V8_46_fu_27276_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_18_fu_27271_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_47_fu_27805_p1() {
    shuffle_conv_1x1_V8_47_fu_27805_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_19_fu_27800_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_48_fu_28584_p1() {
    shuffle_conv_1x1_V8_48_fu_28584_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_20_fu_28579_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_49_fu_29363_p1() {
    shuffle_conv_1x1_V8_49_fu_29363_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_21_fu_29358_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_4_fu_17072_p2() {
    shuffle_conv_1x1_V8_4_fu_17072_p2 = (!tmp_1519_cast_fu_17068_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1519_cast_fu_17068_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_50_fu_29980_p1() {
    shuffle_conv_1x1_V8_50_fu_29980_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_22_fu_29975_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_51_fu_30759_p1() {
    shuffle_conv_1x1_V8_51_fu_30759_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_23_fu_30754_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_52_fu_31499_p1() {
    shuffle_conv_1x1_V8_52_fu_31499_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_24_fu_31494_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_53_fu_32282_p1() {
    shuffle_conv_1x1_V8_53_fu_32282_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_25_fu_32277_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_54_fu_33022_p1() {
    shuffle_conv_1x1_V8_54_fu_33022_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_26_fu_33017_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_55_fu_33797_p1() {
    shuffle_conv_1x1_V8_55_fu_33797_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_27_fu_33792_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_5_fu_17873_p2() {
    shuffle_conv_1x1_V8_5_fu_17873_p2 = (!tmp_1557_cast_fu_17869_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1557_cast_fu_17869_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_6_fu_18643_p2() {
    shuffle_conv_1x1_V8_6_fu_18643_p2 = (!tmp_1598_cast_fu_18639_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1598_cast_fu_18639_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_7_fu_19444_p2() {
    shuffle_conv_1x1_V8_7_fu_19444_p2 = (!tmp_1636_cast_fu_19440_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1636_cast_fu_19440_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_8_fu_20206_p2() {
    shuffle_conv_1x1_V8_8_fu_20206_p2 = (!tmp_1675_cast_fu_20202_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1675_cast_fu_20202_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_9_fu_13272_p2() {
    shuffle_conv_1x1_V8_9_fu_13272_p2 = (!tmp_1338_cast_fu_13268_p1.read().is_01() || !tmp_764_cast_reg_34324.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1338_cast_fu_13268_p1.read()) + sc_bigint<33>(tmp_764_cast_reg_34324.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_s_fu_13277_p1() {
    shuffle_conv_1x1_V8_s_fu_13277_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_9_fu_13272_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_10_fu_28180_p2() {
    shuffle_conv_3x3_V6_10_fu_28180_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_1800_fu_28175_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_1800_fu_28175_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_11_fu_28963_p2() {
    shuffle_conv_3x3_V6_11_fu_28963_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_1830_fu_28958_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_1830_fu_28958_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_12_fu_30351_p2() {
    shuffle_conv_3x3_V6_12_fu_30351_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_1888_fu_30346_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_1888_fu_30346_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_13_fu_31882_p2() {
    shuffle_conv_3x3_V6_13_fu_31882_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_1957_fu_31877_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_1957_fu_31877_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_14_fu_33397_p2() {
    shuffle_conv_3x3_V6_14_fu_33397_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_2023_fu_33392_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_2023_fu_33392_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_1_fu_22141_p2() {
    shuffle_conv_3x3_V6_1_fu_22141_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_1550_fu_22136_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_1550_fu_22136_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_2_fu_23704_p2() {
    shuffle_conv_3x3_V6_2_fu_23704_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_1615_fu_23699_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_1615_fu_23699_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_3_fu_25267_p2() {
    shuffle_conv_3x3_V6_3_fu_25267_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_1681_fu_25262_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_1681_fu_25262_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_4_fu_26842_p2() {
    shuffle_conv_3x3_V6_4_fu_26842_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_1749_fu_26837_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_1749_fu_26837_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_5_fu_13652_p2() {
    shuffle_conv_3x3_V6_5_fu_13652_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_1207_fu_13647_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_1207_fu_13647_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_6_fu_14453_p2() {
    shuffle_conv_3x3_V6_6_fu_14453_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_1235_fu_14448_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_1235_fu_14448_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_7_fu_15897_p2() {
    shuffle_conv_3x3_V6_7_fu_15897_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_1291_fu_15892_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_1291_fu_15892_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_8_fu_17452_p2() {
    shuffle_conv_3x3_V6_8_fu_17452_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_1355_fu_17447_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_1355_fu_17447_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_9_fu_19023_p2() {
    shuffle_conv_3x3_V6_9_fu_19023_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_1421_fu_19018_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_1421_fu_19018_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_s_fu_20582_p2() {
    shuffle_conv_3x3_V6_s_fu_20582_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_1485_fu_20577_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_1485_fu_20577_p2.read()));
}

void ShuffleNetV2::thread_shuffleunit0_0_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read())) {
        shuffleunit0_0_outpu_address0 =  (sc_lv<14>) (tmp_1291_cast_fu_12069_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read())) {
        shuffleunit0_0_outpu_address0 =  (sc_lv<14>) (tmp_1243_cast_fu_11386_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read())) {
        shuffleunit0_0_outpu_address0 = grp_shuffle_24_p_fu_8866_output_V_address0.read();
    } else {
        shuffleunit0_0_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit0_0_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()))) {
        shuffleunit0_0_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read())) {
        shuffleunit0_0_outpu_ce0 = grp_shuffle_24_p_fu_8866_output_V_ce0.read();
    } else {
        shuffleunit0_0_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_0_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read())) {
        shuffleunit0_0_outpu_we0 = grp_shuffle_24_p_fu_8866_output_V_we0.read();
    } else {
        shuffleunit0_0_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_1_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read())) {
        shuffleunit0_1_outpu_address0 =  (sc_lv<14>) (tmp_1328_cast_fu_12977_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read())) {
        shuffleunit0_1_outpu_address0 =  (sc_lv<14>) (tmp_1295_cast_fu_12268_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read())) {
        shuffleunit0_1_outpu_address0 = grp_shuffle_24_p_fu_8866_output_V_address0.read();
    } else {
        shuffleunit0_1_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit0_1_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read()))) {
        shuffleunit0_1_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read())) {
        shuffleunit0_1_outpu_ce0 = grp_shuffle_24_p_fu_8866_output_V_ce0.read();
    } else {
        shuffleunit0_1_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_1_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read())) {
        shuffleunit0_1_outpu_we0 = grp_shuffle_24_p_fu_8866_output_V_we0.read();
    } else {
        shuffleunit0_1_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_2_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read())) {
        shuffleunit0_2_outpu_address0 = grp_shuffle_24_p_fu_8866_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read())) {
        shuffleunit0_2_outpu_address0 = grp_subconv_3x3_16_strid_1_fu_8854_shuffleunit0_2_outpu_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        shuffleunit0_2_outpu_address0 = grp_subconv_1x1_16p_p_fu_8514_input_V_address0.read();
    } else {
        shuffleunit0_2_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit0_2_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read())) {
        shuffleunit0_2_outpu_ce0 = grp_shuffle_24_p_fu_8866_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read())) {
        shuffleunit0_2_outpu_ce0 = grp_subconv_3x3_16_strid_1_fu_8854_shuffleunit0_2_outpu_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        shuffleunit0_2_outpu_ce0 = grp_subconv_1x1_16p_p_fu_8514_input_V_ce0.read();
    } else {
        shuffleunit0_2_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_2_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read())) {
        shuffleunit0_2_outpu_we0 = grp_shuffle_24_p_fu_8866_output_V_we0.read();
    } else {
        shuffleunit0_2_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_0_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state689.read())) {
        shuffleunit1_0_outpu_address0 =  (sc_lv<14>) (tmp_1584_cast_fu_18129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state603.read())) {
        shuffleunit1_0_outpu_address0 =  (sc_lv<14>) (tmp_1508_cast_fu_16768_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state600.read())) {
        shuffleunit1_0_outpu_address0 = grp_shuffle_48_p_fu_8892_output_V_address0.read();
    } else {
        shuffleunit1_0_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_0_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state603.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state689.read()))) {
        shuffleunit1_0_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state600.read())) {
        shuffleunit1_0_outpu_ce0 = grp_shuffle_48_p_fu_8892_output_V_ce0.read();
    } else {
        shuffleunit1_0_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_0_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state600.read())) {
        shuffleunit1_0_outpu_we0 = grp_shuffle_48_p_fu_8892_output_V_we0.read();
    } else {
        shuffleunit1_0_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_1_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state780.read())) {
        shuffleunit1_1_outpu_address0 =  (sc_lv<14>) (tmp_1663_cast_fu_19700_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read())) {
        shuffleunit1_1_outpu_address0 =  (sc_lv<14>) (tmp_1585_cast_fu_18331_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state691.read())) {
        shuffleunit1_1_outpu_address0 = grp_shuffle_48_p_fu_8892_output_V_address0.read();
    } else {
        shuffleunit1_1_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_1_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state780.read()))) {
        shuffleunit1_1_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state691.read())) {
        shuffleunit1_1_outpu_ce0 = grp_shuffle_48_p_fu_8892_output_V_ce0.read();
    } else {
        shuffleunit1_1_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_1_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state691.read())) {
        shuffleunit1_1_outpu_we0 = grp_shuffle_48_p_fu_8892_output_V_we0.read();
    } else {
        shuffleunit1_1_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_2_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state871.read())) {
        shuffleunit1_2_outpu_address0 =  (sc_lv<14>) (tmp_1740_cast_fu_21251_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state785.read())) {
        shuffleunit1_2_outpu_address0 =  (sc_lv<14>) (tmp_1664_cast_fu_19902_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state782.read())) {
        shuffleunit1_2_outpu_address0 = grp_shuffle_48_p_fu_8892_output_V_address0.read();
    } else {
        shuffleunit1_2_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_2_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state785.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state871.read()))) {
        shuffleunit1_2_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state782.read())) {
        shuffleunit1_2_outpu_ce0 = grp_shuffle_48_p_fu_8892_output_V_ce0.read();
    } else {
        shuffleunit1_2_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_2_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state782.read())) {
        shuffleunit1_2_outpu_we0 = grp_shuffle_48_p_fu_8892_output_V_we0.read();
    } else {
        shuffleunit1_2_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_3_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state962.read())) {
        shuffleunit1_3_outpu_address0 =  (sc_lv<14>) (tmp_1818_cast_fu_22810_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        shuffleunit1_3_outpu_address0 =  (sc_lv<14>) (tmp_1741_cast_fu_21453_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state873.read())) {
        shuffleunit1_3_outpu_address0 = grp_shuffle_48_p_fu_8892_output_V_address0.read();
    } else {
        shuffleunit1_3_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_3_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state962.read()))) {
        shuffleunit1_3_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state873.read())) {
        shuffleunit1_3_outpu_ce0 = grp_shuffle_48_p_fu_8892_output_V_ce0.read();
    } else {
        shuffleunit1_3_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_3_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state873.read())) {
        shuffleunit1_3_outpu_we0 = grp_shuffle_48_p_fu_8892_output_V_we0.read();
    } else {
        shuffleunit1_3_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_4_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1053.read())) {
        shuffleunit1_4_outpu_address0 =  (sc_lv<14>) (tmp_1896_cast_fu_24373_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state967.read())) {
        shuffleunit1_4_outpu_address0 =  (sc_lv<14>) (tmp_1820_cast_fu_23017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state964.read())) {
        shuffleunit1_4_outpu_address0 = grp_shuffle_48_p_fu_8892_output_V_address0.read();
    } else {
        shuffleunit1_4_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_4_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state967.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1053.read()))) {
        shuffleunit1_4_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state964.read())) {
        shuffleunit1_4_outpu_ce0 = grp_shuffle_48_p_fu_8892_output_V_ce0.read();
    } else {
        shuffleunit1_4_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_4_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state964.read())) {
        shuffleunit1_4_outpu_we0 = grp_shuffle_48_p_fu_8892_output_V_we0.read();
    } else {
        shuffleunit1_4_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_5_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1144.read())) {
        shuffleunit1_5_outpu_address0 =  (sc_lv<14>) (tmp_1977_cast_fu_25948_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1058.read())) {
        shuffleunit1_5_outpu_address0 =  (sc_lv<14>) (tmp_1898_cast_fu_24580_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1055.read())) {
        shuffleunit1_5_outpu_address0 = grp_shuffle_48_p_fu_8892_output_V_address0.read();
    } else {
        shuffleunit1_5_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_5_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1058.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1144.read()))) {
        shuffleunit1_5_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1055.read())) {
        shuffleunit1_5_outpu_ce0 = grp_shuffle_48_p_fu_8892_output_V_ce0.read();
    } else {
        shuffleunit1_5_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_5_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1055.read())) {
        shuffleunit1_5_outpu_we0 = grp_shuffle_48_p_fu_8892_output_V_we0.read();
    } else {
        shuffleunit1_5_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_6_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1235.read())) {
        shuffleunit1_6_outpu_address0 =  (sc_lv<14>) (tmp_2042_cast_fu_27527_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1149.read())) {
        shuffleunit1_6_outpu_address0 =  (sc_lv<14>) (tmp_1979_cast_fu_26155_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1146.read())) {
        shuffleunit1_6_outpu_address0 = grp_shuffle_48_p_fu_8892_output_V_address0.read();
    } else {
        shuffleunit1_6_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_6_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1149.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1235.read()))) {
        shuffleunit1_6_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1146.read())) {
        shuffleunit1_6_outpu_ce0 = grp_shuffle_48_p_fu_8892_output_V_ce0.read();
    } else {
        shuffleunit1_6_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_6_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1146.read())) {
        shuffleunit1_6_outpu_we0 = grp_shuffle_48_p_fu_8892_output_V_we0.read();
    } else {
        shuffleunit1_6_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_7_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1237.read())) {
        shuffleunit1_7_outpu_address0 = grp_shuffle_48_p_fu_8892_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        shuffleunit1_7_outpu_address0 = grp_subconv_3x3_8_stride_1_fu_8842_shuffleunit1_7_outpu_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        shuffleunit1_7_outpu_address0 = grp_subconv_1x1_8p_p_fu_8554_input_V_address0.read();
    } else {
        shuffleunit1_7_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_7_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1237.read())) {
        shuffleunit1_7_outpu_ce0 = grp_shuffle_48_p_fu_8892_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        shuffleunit1_7_outpu_ce0 = grp_subconv_3x3_8_stride_1_fu_8842_shuffleunit1_7_outpu_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        shuffleunit1_7_outpu_ce0 = grp_subconv_1x1_8p_p_fu_8554_input_V_ce0.read();
    } else {
        shuffleunit1_7_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_7_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1237.read())) {
        shuffleunit1_7_outpu_we0 = grp_shuffle_48_p_fu_8892_output_V_we0.read();
    } else {
        shuffleunit1_7_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_0_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1558.read())) {
        shuffleunit2_0_outpu_address0 =  (sc_lv<13>) (tmp_2294_cast_fu_32533_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1472.read())) {
        shuffleunit2_0_outpu_address0 =  (sc_lv<13>) (tmp_2220_cast_fu_31217_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1469.read())) {
        shuffleunit2_0_outpu_address0 = grp_shuffle_96_p_fu_8923_output_V_address0.read();
    } else {
        shuffleunit2_0_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_0_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1472.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1558.read()))) {
        shuffleunit2_0_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1469.read())) {
        shuffleunit2_0_outpu_ce0 = grp_shuffle_96_p_fu_8923_output_V_ce0.read();
    } else {
        shuffleunit2_0_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_0_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1469.read())) {
        shuffleunit2_0_outpu_we0 = grp_shuffle_96_p_fu_8923_output_V_we0.read();
    } else {
        shuffleunit2_0_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_1_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1648.read())) {
        shuffleunit2_1_outpu_address0 =  (sc_lv<13>) (tmp_2365_cast_fu_34048_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1563.read())) {
        shuffleunit2_1_outpu_address0 =  (sc_lv<13>) (tmp_2295_cast_fu_32735_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1560.read())) {
        shuffleunit2_1_outpu_address0 = grp_shuffle_96_p_fu_8923_output_V_address0.read();
    } else {
        shuffleunit2_1_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_1_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1563.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1648.read()))) {
        shuffleunit2_1_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1560.read())) {
        shuffleunit2_1_outpu_ce0 = grp_shuffle_96_p_fu_8923_output_V_ce0.read();
    } else {
        shuffleunit2_1_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_1_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1560.read())) {
        shuffleunit2_1_outpu_we0 = grp_shuffle_96_p_fu_8923_output_V_we0.read();
    } else {
        shuffleunit2_1_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1654.read())) {
        shuffleunit2_2_outpu_1_address0 =  (sc_lv<12>) (tmp_2366_cast_fu_34210_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read())) {
        shuffleunit2_2_outpu_1_address0 = grp_conv_last_fu_8447_input_V_address0.read();
    } else {
        shuffleunit2_2_outpu_1_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1654.read())) {
        shuffleunit2_2_outpu_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read())) {
        shuffleunit2_2_outpu_1_ce0 = grp_conv_last_fu_8447_input_V_ce0.read();
    } else {
        shuffleunit2_2_outpu_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1654.read())) {
        shuffleunit2_2_outpu_1_we0 = ap_const_logic_1;
    } else {
        shuffleunit2_2_outpu_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read())) {
        shuffleunit2_2_outpu_address0 =  (sc_lv<13>) (tmp_2367_cast_fu_34205_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1650.read())) {
        shuffleunit2_2_outpu_address0 = grp_shuffle_96_p_fu_8923_output_V_address0.read();
    } else {
        shuffleunit2_2_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read())) {
        shuffleunit2_2_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1650.read())) {
        shuffleunit2_2_outpu_ce0 = grp_shuffle_96_p_fu_8923_output_V_ce0.read();
    } else {
        shuffleunit2_2_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1650.read())) {
        shuffleunit2_2_outpu_we0 = grp_shuffle_96_p_fu_8923_output_V_we0.read();
    } else {
        shuffleunit2_2_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_tmp10_fu_14975_p2() {
    tmp10_fu_14975_p2 = (!ap_const_lv10_228.is_01() || !tmp_492_cast_fu_14966_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_492_cast_fu_14966_p1.read()));
}

void ShuffleNetV2::thread_tmp11_fu_15415_p2() {
    tmp11_fu_15415_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_533_cast_fu_15411_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_533_cast_fu_15411_p1.read()));
}

void ShuffleNetV2::thread_tmp12_fu_15614_p2() {
    tmp12_fu_15614_p2 = (!ap_const_lv10_258.is_01() || !tmp_520_cast_fu_15605_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_520_cast_fu_15605_p1.read()));
}

void ShuffleNetV2::thread_tmp13_cast1_fu_15768_p1() {
    tmp13_cast1_fu_15768_p1 = esl_sext<8,7>(tmp13_fu_15762_p2.read());
}

void ShuffleNetV2::thread_tmp13_cast_fu_15772_p1() {
    tmp13_cast_fu_15772_p1 = esl_zext<9,8>(tmp13_cast1_fu_15768_p1.read());
}

void ShuffleNetV2::thread_tmp13_fu_15762_p2() {
    tmp13_fu_15762_p2 = (!ap_const_lv7_58.is_01() || !tmp_495_fu_15751_p2.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_495_fu_15751_p2.read()));
}

void ShuffleNetV2::thread_tmp14_fu_15987_p2() {
    tmp14_fu_15987_p2 = (!ap_const_lv10_288.is_01() || !tmp_537_cast_fu_15978_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_288) + sc_bigint<10>(tmp_537_cast_fu_15978_p1.read()));
}

void ShuffleNetV2::thread_tmp15_fu_16216_p2() {
    tmp15_fu_16216_p2 = (!ap_const_lv10_258.is_01() || !tmp_565_cast_fu_16212_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_565_cast_fu_16212_p1.read()));
}

void ShuffleNetV2::thread_tmp16_fu_16415_p2() {
    tmp16_fu_16415_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_547_cast_fu_16406_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_547_cast_fu_16406_p1.read()));
}

void ShuffleNetV2::thread_tmp17_fu_16974_p2() {
    tmp17_fu_16974_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_591_cast_fu_16970_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_591_cast_fu_16970_p1.read()));
}

void ShuffleNetV2::thread_tmp18_fu_17173_p2() {
    tmp18_fu_17173_p2 = (!ap_const_lv10_2E8.is_01() || !tmp_578_cast_fu_17164_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2E8) + sc_bigint<10>(tmp_578_cast_fu_17164_p1.read()));
}

void ShuffleNetV2::thread_tmp19_fu_17325_p2() {
    tmp19_fu_17325_p2 = (!ap_const_lv9_108.is_01() || !tmp_614_cast_fu_17316_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_108) + sc_bigint<9>(tmp_614_cast_fu_17316_p1.read()));
}

void ShuffleNetV2::thread_tmp1_fu_13174_p2() {
    tmp1_fu_13174_p2 = (!ap_const_lv9_D8.is_01() || !tmp_446_cast_fu_13170_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_D8) + sc_bigint<9>(tmp_446_cast_fu_13170_p1.read()));
}

void ShuffleNetV2::thread_tmp20_fu_17542_p2() {
    tmp20_fu_17542_p2 = (!ap_const_lv9_118.is_01() || !tmp_595_cast_cast_fu_17533_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_118) + sc_bigint<9>(tmp_595_cast_cast_fu_17533_p1.read()));
}

void ShuffleNetV2::thread_tmp21_fu_17775_p2() {
    tmp21_fu_17775_p2 = (!ap_const_lv10_318.is_01() || !tmp_623_cast_fu_17771_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_623_cast_fu_17771_p1.read()));
}

void ShuffleNetV2::thread_tmp22_fu_17974_p2() {
    tmp22_fu_17974_p2 = (!ap_const_lv9_148.is_01() || !tmp_605_cast_cast_fu_17965_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_148) + sc_bigint<9>(tmp_605_cast_cast_fu_17965_p1.read()));
}

void ShuffleNetV2::thread_tmp23_fu_18537_p2() {
    tmp23_fu_18537_p2 = (!ap_const_lv9_178.is_01() || !tmp_649_cast_cast_fu_18533_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_649_cast_cast_fu_18533_p1.read()));
}

void ShuffleNetV2::thread_tmp24_fu_18744_p2() {
    tmp24_fu_18744_p2 = (!ap_const_lv9_178.is_01() || !tmp_636_cast_cast_fu_18735_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_636_cast_cast_fu_18735_p1.read()));
}

void ShuffleNetV2::thread_tmp25_fu_18900_p2() {
    tmp25_fu_18900_p2 = (!ap_const_lv9_138.is_01() || !tmp_672_cast_fu_18891_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_672_cast_fu_18891_p1.read()));
}

void ShuffleNetV2::thread_tmp26_fu_19113_p2() {
    tmp26_fu_19113_p2 = (!ap_const_lv8_A8.is_01() || !tmp_653_cast_cast_fu_19104_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_653_cast_cast_fu_19104_p1.read()));
}

void ShuffleNetV2::thread_tmp27_fu_19346_p2() {
    tmp27_fu_19346_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_681_cast_fu_19342_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_681_cast_fu_19342_p1.read()));
}

void ShuffleNetV2::thread_tmp28_cast1_fu_19547_p1() {
    tmp28_cast1_fu_19547_p1 = esl_sext<10,7>(tmp28_fu_19541_p2.read());
}

void ShuffleNetV2::thread_tmp28_cast_fu_19551_p1() {
    tmp28_cast_fu_19551_p1 = esl_zext<11,10>(tmp28_cast1_fu_19547_p1.read());
}

void ShuffleNetV2::thread_tmp28_fu_19541_p2() {
    tmp28_fu_19541_p2 = (!ap_const_lv7_58.is_01() || !tmp_590_fu_19530_p2.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_590_fu_19530_p2.read()));
}

void ShuffleNetV2::thread_tmp29_fu_20108_p2() {
    tmp29_fu_20108_p2 = (!ap_const_lv11_438.is_01() || !tmp_707_cast_fu_20104_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_707_cast_fu_20104_p1.read()));
}

void ShuffleNetV2::thread_tmp2_fu_13373_p2() {
    tmp2_fu_13373_p2 = (!ap_const_lv9_168.is_01() || !tmp_433_cast_fu_13364_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_433_cast_fu_13364_p1.read()));
}

void ShuffleNetV2::thread_tmp30_fu_20307_p2() {
    tmp30_fu_20307_p2 = (!ap_const_lv11_408.is_01() || !tmp_694_cast_fu_20298_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_408) + sc_bigint<11>(tmp_694_cast_fu_20298_p1.read()));
}

void ShuffleNetV2::thread_tmp31_fu_20459_p2() {
    tmp31_fu_20459_p2 = (!ap_const_lv9_168.is_01() || !tmp_730_cast_fu_20450_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_730_cast_fu_20450_p1.read()));
}

void ShuffleNetV2::thread_tmp32_fu_20672_p2() {
    tmp32_fu_20672_p2 = (!ap_const_lv11_438.is_01() || !tmp_711_cast_fu_20663_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_711_cast_fu_20663_p1.read()));
}

void ShuffleNetV2::thread_tmp33_fu_20901_p2() {
    tmp33_fu_20901_p2 = (!ap_const_lv11_498.is_01() || !tmp_739_cast_fu_20897_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_739_cast_fu_20897_p1.read()));
}

void ShuffleNetV2::thread_tmp34_fu_21100_p2() {
    tmp34_fu_21100_p2 = (!ap_const_lv11_468.is_01() || !tmp_721_cast_fu_21091_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_468) + sc_bigint<11>(tmp_721_cast_fu_21091_p1.read()));
}

void ShuffleNetV2::thread_tmp35_fu_21659_p2() {
    tmp35_fu_21659_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_765_cast_fu_21655_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_765_cast_fu_21655_p1.read()));
}

void ShuffleNetV2::thread_tmp36_fu_21858_p2() {
    tmp36_fu_21858_p2 = (!ap_const_lv11_498.is_01() || !tmp_752_cast_fu_21849_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_752_cast_fu_21849_p1.read()));
}

void ShuffleNetV2::thread_tmp37_fu_22010_p2() {
    tmp37_fu_22010_p2 = (!ap_const_lv8_98.is_01() || !tmp_788_cast_cast_fu_22001_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_788_cast_cast_fu_22001_p1.read()));
}

void ShuffleNetV2::thread_tmp38_fu_22231_p2() {
    tmp38_fu_22231_p2 = (!ap_const_lv11_4C8.is_01() || !tmp_769_cast_fu_22222_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4C8) + sc_bigint<11>(tmp_769_cast_fu_22222_p1.read()));
}

void ShuffleNetV2::thread_tmp39_fu_22460_p2() {
    tmp39_fu_22460_p2 = (!ap_const_lv11_558.is_01() || !tmp_797_cast_fu_22456_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_797_cast_fu_22456_p1.read()));
}

void ShuffleNetV2::thread_tmp3_fu_13525_p2() {
    tmp3_fu_13525_p2 = (!ap_const_lv8_78.is_01() || !tmp_469_cast_fu_13516_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_78) + sc_bigint<8>(tmp_469_cast_fu_13516_p1.read()));
}

void ShuffleNetV2::thread_tmp40_fu_22659_p2() {
    tmp40_fu_22659_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_779_cast_fu_22650_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_779_cast_fu_22650_p1.read()));
}

void ShuffleNetV2::thread_tmp41_fu_23218_p2() {
    tmp41_fu_23218_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_823_cast_fu_23214_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_823_cast_fu_23214_p1.read()));
}

void ShuffleNetV2::thread_tmp42_fu_23417_p2() {
    tmp42_fu_23417_p2 = (!ap_const_lv11_528.is_01() || !tmp_810_cast_fu_23408_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_528) + sc_bigint<11>(tmp_810_cast_fu_23408_p1.read()));
}

void ShuffleNetV2::thread_tmp43_fu_23569_p2() {
    tmp43_fu_23569_p2 = (!ap_const_lv8_C8.is_01() || !tmp_846_cast_cast_fu_23560_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_846_cast_cast_fu_23560_p1.read()));
}

void ShuffleNetV2::thread_tmp44_fu_23794_p2() {
    tmp44_fu_23794_p2 = (!ap_const_lv11_558.is_01() || !tmp_827_cast_fu_23785_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_827_cast_fu_23785_p1.read()));
}

void ShuffleNetV2::thread_tmp45_fu_24023_p2() {
    tmp45_fu_24023_p2 = (!ap_const_lv11_618.is_01() || !tmp_855_cast_fu_24019_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_618) + sc_bigint<11>(tmp_855_cast_fu_24019_p1.read()));
}

void ShuffleNetV2::thread_tmp46_fu_24222_p2() {
    tmp46_fu_24222_p2 = (!ap_const_lv11_588.is_01() || !tmp_837_cast_fu_24213_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_588) + sc_bigint<11>(tmp_837_cast_fu_24213_p1.read()));
}

void ShuffleNetV2::thread_tmp47_fu_24781_p2() {
    tmp47_fu_24781_p2 = (!ap_const_lv10_278.is_01() || !tmp_881_cast_cast_fu_24777_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_881_cast_cast_fu_24777_p1.read()));
}

void ShuffleNetV2::thread_tmp48_fu_24988_p2() {
    tmp48_fu_24988_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_868_cast_fu_24979_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_868_cast_fu_24979_p1.read()));
}

void ShuffleNetV2::thread_tmp49_fu_25140_p2() {
    tmp49_fu_25140_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_904_cast_fu_25131_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_904_cast_fu_25131_p1.read()));
}

void ShuffleNetV2::thread_tmp4_fu_13742_p2() {
    tmp4_fu_13742_p2 = (!ap_const_lv8_98.is_01() || !tmp_450_cast_cast_fu_13733_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_450_cast_cast_fu_13733_p1.read()));
}

void ShuffleNetV2::thread_tmp50_fu_25357_p2() {
    tmp50_fu_25357_p2 = (!ap_const_lv11_5E8.is_01() || !tmp_885_cast_fu_25348_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5E8) + sc_bigint<11>(tmp_885_cast_fu_25348_p1.read()));
}

void ShuffleNetV2::thread_tmp51_fu_25586_p2() {
    tmp51_fu_25586_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_913_cast_cast_fu_25582_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_913_cast_cast_fu_25582_p1.read()));
}

void ShuffleNetV2::thread_tmp52_fu_25793_p2() {
    tmp52_fu_25793_p2 = (!ap_const_lv10_218.is_01() || !tmp_895_cast_cast_fu_25784_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_218) + sc_bigint<10>(tmp_895_cast_cast_fu_25784_p1.read()));
}

void ShuffleNetV2::thread_tmp53_fu_26356_p2() {
    tmp53_fu_26356_p2 = (!ap_const_lv9_138.is_01() || !tmp_939_cast_cast_fu_26352_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_939_cast_cast_fu_26352_p1.read()));
}

void ShuffleNetV2::thread_tmp54_fu_26563_p2() {
    tmp54_fu_26563_p2 = (!ap_const_lv10_248.is_01() || !tmp_926_cast_cast_fu_26554_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_248) + sc_bigint<10>(tmp_926_cast_cast_fu_26554_p1.read()));
}

void ShuffleNetV2::thread_tmp55_fu_26719_p2() {
    tmp55_fu_26719_p2 = (!ap_const_lv10_228.is_01() || !tmp_962_cast_fu_26710_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_962_cast_fu_26710_p1.read()));
}

void ShuffleNetV2::thread_tmp56_fu_26932_p2() {
    tmp56_fu_26932_p2 = (!ap_const_lv10_278.is_01() || !tmp_943_cast_cast_fu_26923_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_943_cast_cast_fu_26923_p1.read()));
}

void ShuffleNetV2::thread_tmp57_cast1_fu_27171_p1() {
    tmp57_cast1_fu_27171_p1 = esl_sext<11,9>(tmp57_fu_27165_p2.read());
}

void ShuffleNetV2::thread_tmp57_cast_fu_27175_p1() {
    tmp57_cast_fu_27175_p1 = esl_zext<12,11>(tmp57_cast1_fu_27171_p1.read());
}

void ShuffleNetV2::thread_tmp57_fu_27165_p2() {
    tmp57_fu_27165_p2 = (!ap_const_lv9_198.is_01() || !tmp_971_cast_cast_fu_27161_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_971_cast_cast_fu_27161_p1.read()));
}

void ShuffleNetV2::thread_tmp58_fu_27372_p2() {
    tmp58_fu_27372_p2 = (!ap_const_lv10_2A8.is_01() || !tmp_953_cast_cast_fu_27363_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2A8) + sc_bigint<10>(tmp_953_cast_cast_fu_27363_p1.read()));
}

void ShuffleNetV2::thread_tmp59_fu_27702_p2() {
    tmp59_fu_27702_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_992_cast_fu_27698_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_992_cast_fu_27698_p1.read()));
}

void ShuffleNetV2::thread_tmp5_fu_13975_p2() {
    tmp5_fu_13975_p2 = (!ap_const_lv9_138.is_01() || !tmp_478_cast_fu_13971_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_478_cast_fu_13971_p1.read()));
}

void ShuffleNetV2::thread_tmp60_fu_27901_p2() {
    tmp60_fu_27901_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_979_cast_cast_fu_27892_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_979_cast_cast_fu_27892_p1.read()));
}

void ShuffleNetV2::thread_tmp61_fu_28057_p2() {
    tmp61_fu_28057_p2 = (!ap_const_lv10_258.is_01() || !tmp_1015_cast_fu_28048_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_1015_cast_fu_28048_p1.read()));
}

void ShuffleNetV2::thread_tmp62_fu_28270_p2() {
    tmp62_fu_28270_p2 = (!ap_const_lv9_138.is_01() || !tmp_996_cast_cast_fu_28261_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_996_cast_cast_fu_28261_p1.read()));
}

void ShuffleNetV2::thread_tmp63_fu_28481_p2() {
    tmp63_fu_28481_p2 = (!ap_const_lv12_978.is_01() || !tmp_1024_cast_fu_28477_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_1024_cast_fu_28477_p1.read()));
}

void ShuffleNetV2::thread_tmp64_cast1_fu_28686_p1() {
    tmp64_cast1_fu_28686_p1 = esl_sext<11,9>(tmp64_fu_28680_p2.read());
}

void ShuffleNetV2::thread_tmp64_cast_fu_28690_p1() {
    tmp64_cast_fu_28690_p1 = esl_zext<12,11>(tmp64_cast1_fu_28686_p1.read());
}

void ShuffleNetV2::thread_tmp64_fu_28680_p2() {
    tmp64_fu_28680_p2 = (!ap_const_lv9_198.is_01() || !tmp_1006_cast_cast_fu_28671_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_1006_cast_cast_fu_28671_p1.read()));
}

void ShuffleNetV2::thread_tmp65_fu_28840_p2() {
    tmp65_fu_28840_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_1047_cast_fu_28831_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_1047_cast_fu_28831_p1.read()));
}

void ShuffleNetV2::thread_tmp66_fu_29053_p2() {
    tmp66_fu_29053_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_1028_cast_fu_29044_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_1028_cast_fu_29044_p1.read()));
}

void ShuffleNetV2::thread_tmp67_fu_29260_p2() {
    tmp67_fu_29260_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_1061_cast_fu_29256_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_1061_cast_fu_29256_p1.read()));
}

void ShuffleNetV2::thread_tmp68_fu_29459_p2() {
    tmp68_fu_29459_p2 = (!ap_const_lv12_858.is_01() || !tmp_1038_cast_fu_29450_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_858) + sc_bigint<12>(tmp_1038_cast_fu_29450_p1.read()));
}

void ShuffleNetV2::thread_tmp69_fu_29877_p2() {
    tmp69_fu_29877_p2 = (!ap_const_lv12_C78.is_01() || !tmp_1079_cast_fu_29873_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C78) + sc_bigint<12>(tmp_1079_cast_fu_29873_p1.read()));
}

void ShuffleNetV2::thread_tmp6_fu_14174_p2() {
    tmp6_fu_14174_p2 = (!ap_const_lv8_C8.is_01() || !tmp_460_cast_cast_fu_14165_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_460_cast_cast_fu_14165_p1.read()));
}

void ShuffleNetV2::thread_tmp70_fu_30076_p2() {
    tmp70_fu_30076_p2 = (!ap_const_lv12_8B8.is_01() || !tmp_1066_cast_fu_30067_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_8B8) + sc_bigint<12>(tmp_1066_cast_fu_30067_p1.read()));
}

void ShuffleNetV2::thread_tmp71_fu_30228_p2() {
    tmp71_fu_30228_p2 = (!ap_const_lv10_318.is_01() || !tmp_1102_cast_fu_30219_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_1102_cast_fu_30219_p1.read()));
}

void ShuffleNetV2::thread_tmp72_fu_30441_p2() {
    tmp72_fu_30441_p2 = (!ap_const_lv12_918.is_01() || !tmp_1083_cast_fu_30432_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_918) + sc_bigint<12>(tmp_1083_cast_fu_30432_p1.read()));
}

void ShuffleNetV2::thread_tmp73_fu_30648_p2() {
    tmp73_fu_30648_p2 = (!ap_const_lv11_5F8.is_01() || !tmp_1111_cast_cast_fu_30644_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5F8) + sc_bigint<11>(tmp_1111_cast_cast_fu_30644_p1.read()));
}

void ShuffleNetV2::thread_tmp74_fu_30855_p2() {
    tmp74_fu_30855_p2 = (!ap_const_lv12_978.is_01() || !tmp_1093_cast_fu_30846_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_1093_cast_fu_30846_p1.read()));
}

void ShuffleNetV2::thread_tmp75_fu_31396_p2() {
    tmp75_fu_31396_p2 = (!ap_const_lv13_F78.is_01() || !tmp_1137_cast_fu_31392_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_F78) + sc_bigint<13>(tmp_1137_cast_fu_31392_p1.read()));
}

void ShuffleNetV2::thread_tmp76_fu_31595_p2() {
    tmp76_fu_31595_p2 = (!ap_const_lv12_9D8.is_01() || !tmp_1124_cast_fu_31586_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_9D8) + sc_bigint<12>(tmp_1124_cast_fu_31586_p1.read()));
}

void ShuffleNetV2::thread_tmp77_fu_31747_p2() {
    tmp77_fu_31747_p2 = (!ap_const_lv9_178.is_01() || !tmp_1160_cast_cast_fu_31738_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_1160_cast_cast_fu_31738_p1.read()));
}

void ShuffleNetV2::thread_tmp78_fu_31972_p2() {
    tmp78_fu_31972_p2 = (!ap_const_lv12_A38.is_01() || !tmp_1141_cast_fu_31963_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A38) + sc_bigint<12>(tmp_1141_cast_fu_31963_p1.read()));
}

void ShuffleNetV2::thread_tmp79_fu_32179_p2() {
    tmp79_fu_32179_p2 = (!ap_const_lv13_10F8.is_01() || !tmp_1169_cast_fu_32175_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_10F8) + sc_bigint<13>(tmp_1169_cast_fu_32175_p1.read()));
}

void ShuffleNetV2::thread_tmp7_fu_14330_p2() {
    tmp7_fu_14330_p2 = (!ap_const_lv8_A8.is_01() || !tmp_501_cast_fu_14321_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_501_cast_fu_14321_p1.read()));
}

void ShuffleNetV2::thread_tmp80_fu_32378_p2() {
    tmp80_fu_32378_p2 = (!ap_const_lv12_A98.is_01() || !tmp_1151_cast_fu_32369_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A98) + sc_bigint<12>(tmp_1151_cast_fu_32369_p1.read()));
}

void ShuffleNetV2::thread_tmp81_fu_32919_p2() {
    tmp81_fu_32919_p2 = (!ap_const_lv13_1278.is_01() || !tmp_1195_cast_fu_32915_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1278) + sc_bigint<13>(tmp_1195_cast_fu_32915_p1.read()));
}

void ShuffleNetV2::thread_tmp82_fu_33118_p2() {
    tmp82_fu_33118_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_1182_cast_fu_33109_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_1182_cast_fu_33109_p1.read()));
}

void ShuffleNetV2::thread_tmp83_fu_33270_p2() {
    tmp83_fu_33270_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_1218_cast_fu_33261_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_1218_cast_fu_33261_p1.read()));
}

void ShuffleNetV2::thread_tmp84_fu_33487_p2() {
    tmp84_fu_33487_p2 = (!ap_const_lv12_B58.is_01() || !tmp_1199_cast_fu_33478_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_B58) + sc_bigint<12>(tmp_1199_cast_fu_33478_p1.read()));
}

void ShuffleNetV2::thread_tmp85_fu_33694_p2() {
    tmp85_fu_33694_p2 = (!ap_const_lv13_13F8.is_01() || !tmp_1227_cast_fu_33690_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_13F8) + sc_bigint<13>(tmp_1227_cast_fu_33690_p1.read()));
}

void ShuffleNetV2::thread_tmp86_fu_33893_p2() {
    tmp86_fu_33893_p2 = (!ap_const_lv12_BB8.is_01() || !tmp_1209_cast_fu_33884_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_BB8) + sc_bigint<12>(tmp_1209_cast_fu_33884_p1.read()));
}

void ShuffleNetV2::thread_tmp8_fu_14543_p2() {
    tmp8_fu_14543_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_482_cast_fu_14534_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_482_cast_fu_14534_p1.read()));
}

void ShuffleNetV2::thread_tmp9_cast_fu_14778_p1() {
    tmp9_cast_fu_14778_p1 = esl_zext<10,9>(tmp9_fu_14772_p2.read());
}

void ShuffleNetV2::thread_tmp9_fu_14772_p2() {
    tmp9_fu_14772_p2 = (!ap_const_lv9_198.is_01() || !tmp_515_cast_fu_14768_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_515_cast_fu_14768_p1.read()));
}

void ShuffleNetV2::thread_tmp_1000_cast1_fu_31688_p1() {
    tmp_1000_cast1_fu_31688_p1 = esl_zext<11,2>(h114_reg_7973.read());
}

void ShuffleNetV2::thread_tmp_1000_cast_fu_28281_p1() {
    tmp_1000_cast_fu_28281_p1 = esl_sext<11,9>(tmp_864_reg_41375.read());
}

void ShuffleNetV2::thread_tmp_1000_fu_31684_p1() {
    tmp_1000_fu_31684_p1 = esl_zext<64,2>(h114_reg_7973.read());
}

void ShuffleNetV2::thread_tmp_1001_fu_32087_p2() {
    tmp_1001_fu_32087_p2 = (!tmp_992_reg_42765.read().is_01() || !ci76_cast_fu_32071_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_992_reg_42765.read()) + sc_biguint<8>(ci76_cast_fu_32071_p1.read()));
}

void ShuffleNetV2::thread_tmp_1002_cast_fu_32092_p1() {
    tmp_1002_cast_fu_32092_p1 = esl_sext<12,8>(tmp_1001_fu_32087_p2.read());
}

void ShuffleNetV2::thread_tmp_1002_fu_11220_p3() {
    tmp_1002_fu_11220_p3 = esl_concat<5,1>(co35_reg_4729.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1003_cast_fu_32096_p1() {
    tmp_1003_cast_fu_32096_p1 = esl_zext<20,5>(ci76_reg_8028.read());
}

void ShuffleNetV2::thread_tmp_1003_fu_11232_p2() {
    tmp_1003_fu_11232_p2 = (!p_shl324_cast_fu_11228_p1.read().is_01() || !p_shl323_cast_fu_11216_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl324_cast_fu_11228_p1.read()) + sc_biguint<10>(p_shl323_cast_fu_11216_p1.read()));
}

void ShuffleNetV2::thread_tmp_1004_cast_fu_28369_p1() {
    tmp_1004_cast_fu_28369_p1 = esl_zext<8,3>(p_lshr_f20_cast_fu_28359_p4.read());
}

void ShuffleNetV2::thread_tmp_1004_fu_31732_p2() {
    tmp_1004_fu_31732_p2 = (!p_shl252_cast_fu_31716_p1.read().is_01() || !p_shl253_cast_fu_31728_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl252_cast_fu_31716_p1.read()) - sc_biguint<8>(p_shl253_cast_fu_31728_p1.read()));
}

void ShuffleNetV2::thread_tmp_1005_fu_11244_p3() {
    tmp_1005_fu_11244_p3 = esl_concat<6,4>(tmp_354_fu_11238_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1006_cast_cast_fu_28671_p1() {
    tmp_1006_cast_cast_fu_28671_p1 = esl_sext<9,8>(tmp_880_fu_28665_p2.read());
}

void ShuffleNetV2::thread_tmp_1006_cast_fu_9871_p1() {
    tmp_1006_cast_fu_9871_p1 = esl_sext<64,8>(tmp_764_fu_9866_p2.read());
}

void ShuffleNetV2::thread_tmp_1006_fu_11256_p3() {
    tmp_1006_fu_11256_p3 = esl_concat<6,1>(tmp_354_fu_11238_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1007_cast_fu_28717_p1() {
    tmp_1007_cast_fu_28717_p1 = esl_sext<32,8>(tmp_881_reg_41527.read());
}

void ShuffleNetV2::thread_tmp_1007_fu_31742_p2() {
    tmp_1007_fu_31742_p2 = (!tmp_1004_fu_31732_p2.read().is_01() || !co171_cast_reg_42614.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1004_fu_31732_p2.read()) + sc_biguint<8>(co171_cast_reg_42614.read()));
}

void ShuffleNetV2::thread_tmp_1008_fu_11268_p2() {
    tmp_1008_fu_11268_p2 = (!p_shl322_cast_fu_11264_p1.read().is_01() || !p_shl321_cast_fu_11252_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl322_cast_fu_11264_p1.read()) + sc_biguint<11>(p_shl321_cast_fu_11252_p1.read()));
}

void ShuffleNetV2::thread_tmp_1009_cast_fu_31761_p1() {
    tmp_1009_cast_fu_31761_p1 = esl_zext<35,32>(tmp_1161_cast_fu_31758_p1.read());
}

void ShuffleNetV2::thread_tmp_1009_fu_11131_p2() {
    tmp_1009_fu_11131_p2 = (!tmp_355_cast_fu_11127_p1.read().is_01() || !tmp_995_reg_35177.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_355_cast_fu_11127_p1.read()) + sc_biguint<10>(tmp_995_reg_35177.read()));
}

void ShuffleNetV2::thread_tmp_1010_fu_31753_p2() {
    tmp_1010_fu_31753_p2 = (!co171_cast151_cast_reg_42609.read().is_01() || !tmp77_fu_31747_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co171_cast151_cast_reg_42609.read()) + sc_biguint<9>(tmp77_fu_31747_p2.read()));
}

void ShuffleNetV2::thread_tmp_1011_cast_fu_31806_p1() {
    tmp_1011_cast_fu_31806_p1 = esl_zext<13,10>(tmp_1164_cast_fu_31803_p1.read());
}

void ShuffleNetV2::thread_tmp_1011_fu_11136_p3() {
    tmp_1011_fu_11136_p3 = esl_concat<10,4>(tmp_1009_fu_11131_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1012_fu_32363_p2() {
    tmp_1012_fu_32363_p2 = (!p_shl250_cast_fu_32347_p1.read().is_01() || !p_shl251_cast_fu_32359_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl250_cast_fu_32347_p1.read()) - sc_biguint<8>(p_shl251_cast_fu_32359_p1.read()));
}

void ShuffleNetV2::thread_tmp_1013_fu_32373_p2() {
    tmp_1013_fu_32373_p2 = (!i190_cast1_reg_42872.read().is_01() || !tmp_1012_fu_32363_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i190_cast1_reg_42872.read()) + sc_biguint<8>(tmp_1012_fu_32363_p2.read()));
}

void ShuffleNetV2::thread_tmp_1014_fu_32410_p1() {
    tmp_1014_fu_32410_p1 = esl_zext<64,32>(tmp_1152_cast_fu_32407_p1.read());
}

void ShuffleNetV2::thread_tmp_1015_cast_fu_28048_p1() {
    tmp_1015_cast_fu_28048_p1 = esl_sext<10,8>(tmp_870_fu_28042_p2.read());
}

void ShuffleNetV2::thread_tmp_1015_fu_32384_p2() {
    tmp_1015_fu_32384_p2 = (!tmp80_fu_32378_p2.read().is_01() || !i190_cast_reg_42867.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp80_fu_32378_p2.read()) + sc_biguint<12>(i190_cast_reg_42867.read()));
}

void ShuffleNetV2::thread_tmp_1016_cast1_fu_32389_p1() {
    tmp_1016_cast1_fu_32389_p1 = esl_zext<33,12>(tmp_1015_reg_42898.read());
}

void ShuffleNetV2::thread_tmp_1016_cast_fu_28068_p1() {
    tmp_1016_cast_fu_28068_p1 = esl_sext<32,8>(tmp_873_reg_41305.read());
}

void ShuffleNetV2::thread_tmp_1016_fu_11148_p3() {
    tmp_1016_fu_11148_p3 = esl_concat<10,1>(tmp_1009_fu_11131_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1017_fu_32142_p2() {
    tmp_1017_fu_32142_p2 = (!p_shl254_cast_fu_32128_p1.read().is_01() || !p_shl255_cast_fu_32138_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl254_cast_fu_32128_p1.read()) - sc_biguint<8>(p_shl255_cast_fu_32138_p1.read()));
}

void ShuffleNetV2::thread_tmp_1018_fu_32152_p2() {
    tmp_1018_fu_32152_p2 = (!tmp_1017_fu_32142_p2.read().is_01() || !tmp_1149_cast_reg_42775.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1017_fu_32142_p2.read()) + sc_biguint<8>(tmp_1149_cast_reg_42775.read()));
}

void ShuffleNetV2::thread_tmp_1019_fu_32169_p2() {
    tmp_1019_fu_32169_p2 = (!p_shl256_cast_fu_32165_p1.read().is_01() || !p_shl254_cast1_fu_32124_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl256_cast_fu_32165_p1.read()) - sc_biguint<10>(p_shl254_cast1_fu_32124_p1.read()));
}

void ShuffleNetV2::thread_tmp_1020_fu_32185_p2() {
    tmp_1020_fu_32185_p2 = (!tmp79_fu_32179_p2.read().is_01() || !co173_cast_reg_42752.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp79_fu_32179_p2.read()) + sc_biguint<13>(co173_cast_reg_42752.read()));
}

void ShuffleNetV2::thread_tmp_1021_fu_32195_p4() {
    tmp_1021_fu_32195_p4 = tmp_1018_fu_32152_p2.read().range(7, 3);
}

void ShuffleNetV2::thread_tmp_1022_fu_32588_p2() {
    tmp_1022_fu_32588_p2 = (!co176_cast_fu_32538_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co176_cast_fu_32538_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_1023_cast_fu_32473_p1() {
    tmp_1023_cast_fu_32473_p1 = esl_zext<12,3>(h_117_fu_32467_p2.read());
}

void ShuffleNetV2::thread_tmp_1023_fu_11160_p2() {
    tmp_1023_fu_11160_p2 = (!p_shl319_cast_fu_11144_p1.read().is_01() || !p_shl320_cast_fu_11156_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl319_cast_fu_11144_p1.read()) + sc_biguint<15>(p_shl320_cast_fu_11156_p1.read()));
}

void ShuffleNetV2::thread_tmp_1024_cast1_fu_9938_p1() {
    tmp_1024_cast1_fu_9938_p1 = esl_sext<9,8>(tmp_766_fu_9932_p2.read());
}

void ShuffleNetV2::thread_tmp_1024_cast_fu_28477_p1() {
    tmp_1024_cast_fu_28477_p1 = esl_sext<12,10>(tmp_887_fu_28471_p2.read());
}

void ShuffleNetV2::thread_tmp_1024_fu_11466_p2() {
    tmp_1024_fu_11466_p2 = (!tmp_763_cast_reg_34261.read().is_01() || !ap_const_lv33_D8.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_763_cast_reg_34261.read()) + sc_biguint<33>(ap_const_lv33_D8));
}

void ShuffleNetV2::thread_tmp_1025_fu_11471_p1() {
    tmp_1025_fu_11471_p1 = esl_sext<64,33>(tmp_1024_fu_11466_p2.read());
}

void ShuffleNetV2::thread_tmp_1026_fu_32791_p2() {
    tmp_1026_fu_32791_p2 = (!p_shl257_cast_fu_32777_p1.read().is_01() || !p_shl258_cast_fu_32787_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl257_cast_fu_32777_p1.read()) - sc_biguint<8>(p_shl258_cast_fu_32787_p1.read()));
}

void ShuffleNetV2::thread_tmp_1027_fu_11417_p3() {
    tmp_1027_fu_11417_p3 = esl_concat<8,5>(tmp_356_fu_11411_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1028_cast1_fu_32640_p1() {
    tmp_1028_cast1_fu_32640_p1 = esl_zext<12,3>(h_119_fu_32634_p2.read());
}

void ShuffleNetV2::thread_tmp_1028_cast2_fu_32644_p1() {
    tmp_1028_cast2_fu_32644_p1 = esl_zext<13,3>(h_119_fu_32634_p2.read());
}

void ShuffleNetV2::thread_tmp_1028_cast_fu_29044_p1() {
    tmp_1028_cast_fu_29044_p1 = esl_sext<12,8>(tmp_892_fu_29038_p2.read());
}

void ShuffleNetV2::thread_tmp_1028_fu_11429_p3() {
    tmp_1028_fu_11429_p3 = esl_concat<8,3>(tmp_356_fu_11411_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1029_cast1_fu_32524_p1() {
    tmp_1029_cast1_fu_32524_p1 = esl_zext<14,3>(w_120_fu_32518_p2.read());
}

void ShuffleNetV2::thread_tmp_1029_cast_fu_29082_p1() {
    tmp_1029_cast_fu_29082_p1 = esl_sext<32,8>(tmp_893_reg_41670.read());
}

void ShuffleNetV2::thread_tmp_1029_fu_11441_p2() {
    tmp_1029_fu_11441_p2 = (!p_shl331_cast_fu_11425_p1.read().is_01() || !p_shl332_cast_fu_11437_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl331_cast_fu_11425_p1.read()) - sc_biguint<14>(p_shl332_cast_fu_11437_p1.read()));
}

void ShuffleNetV2::thread_tmp_1030_fu_32827_p2() {
    tmp_1030_fu_32827_p2 = (!tmp_1026_reg_43020.read().is_01() || !ci78_cast_fu_32811_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1026_reg_43020.read()) + sc_biguint<8>(ci78_cast_fu_32811_p1.read()));
}

void ShuffleNetV2::thread_tmp_1031_cast_fu_32832_p1() {
    tmp_1031_cast_fu_32832_p1 = esl_sext<12,8>(tmp_1030_fu_32827_p2.read());
}

void ShuffleNetV2::thread_tmp_1031_fu_11481_p1() {
    tmp_1031_fu_11481_p1 = co38_reg_4762.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1032_cast_fu_32836_p1() {
    tmp_1032_cast_fu_32836_p1 = esl_zext<20,5>(ci78_reg_8149.read());
}

void ShuffleNetV2::thread_tmp_1032_fu_11495_p3() {
    tmp_1032_fu_11495_p3 = esl_concat<2,5>(newIndex8_fu_11485_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1033_cast1_fu_32722_p1() {
    tmp_1033_cast1_fu_32722_p1 = esl_zext<13,3>(w_122_fu_32716_p2.read());
}

void ShuffleNetV2::thread_tmp_1033_cast_fu_32726_p1() {
    tmp_1033_cast_fu_32726_p1 = esl_zext<14,3>(w_122_fu_32716_p2.read());
}

void ShuffleNetV2::thread_tmp_1033_fu_11507_p3() {
    tmp_1033_fu_11507_p3 = esl_concat<2,3>(newIndex8_fu_11485_p4.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1034_fu_33103_p2() {
    tmp_1034_fu_33103_p2 = (!p_shl259_cast_fu_33087_p1.read().is_01() || !p_shl260_cast_fu_33099_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl259_cast_fu_33087_p1.read()) - sc_biguint<8>(p_shl260_cast_fu_33099_p1.read()));
}

void ShuffleNetV2::thread_tmp_1035_fu_33113_p2() {
    tmp_1035_fu_33113_p2 = (!i196_cast1_reg_43127.read().is_01() || !tmp_1034_fu_33103_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i196_cast1_reg_43127.read()) + sc_biguint<8>(tmp_1034_fu_33103_p2.read()));
}

void ShuffleNetV2::thread_tmp_1036_cast_fu_29148_p1() {
    tmp_1036_cast_fu_29148_p1 = esl_zext<8,3>(p_lshr_f21_cast_fu_29138_p4.read());
}

void ShuffleNetV2::thread_tmp_1036_fu_33150_p1() {
    tmp_1036_fu_33150_p1 = esl_zext<64,32>(tmp_1183_cast_fu_33147_p1.read());
}

void ShuffleNetV2::thread_tmp_1037_fu_33124_p2() {
    tmp_1037_fu_33124_p2 = (!tmp82_fu_33118_p2.read().is_01() || !i196_cast_reg_43122.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp82_fu_33118_p2.read()) + sc_biguint<12>(i196_cast_reg_43122.read()));
}

void ShuffleNetV2::thread_tmp_1038_cast1_fu_33129_p1() {
    tmp_1038_cast1_fu_33129_p1 = esl_zext<33,12>(tmp_1037_reg_43153.read());
}

void ShuffleNetV2::thread_tmp_1038_cast_fu_29450_p1() {
    tmp_1038_cast_fu_29450_p1 = esl_sext<12,8>(tmp_910_fu_29444_p2.read());
}

void ShuffleNetV2::thread_tmp_1038_fu_11519_p2() {
    tmp_1038_fu_11519_p2 = (!p_shl329_cast_fu_11503_p1.read().is_01() || !p_shl330_cast_fu_11515_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl329_cast_fu_11503_p1.read()) - sc_biguint<8>(p_shl330_cast_fu_11515_p1.read()));
}

void ShuffleNetV2::thread_tmp_1039_cast_fu_29488_p1() {
    tmp_1039_cast_fu_29488_p1 = esl_sext<32,8>(tmp_911_reg_41827.read());
}

void ShuffleNetV2::thread_tmp_1039_fu_32882_p2() {
    tmp_1039_fu_32882_p2 = (!p_shl261_cast_fu_32868_p1.read().is_01() || !p_shl262_cast_fu_32878_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl261_cast_fu_32868_p1.read()) - sc_biguint<8>(p_shl262_cast_fu_32878_p1.read()));
}

void ShuffleNetV2::thread_tmp_1040_fu_32892_p2() {
    tmp_1040_fu_32892_p2 = (!tmp_1039_fu_32882_p2.read().is_01() || !tmp_1179_cast_reg_43030.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1039_fu_32882_p2.read()) + sc_biguint<8>(tmp_1179_cast_reg_43030.read()));
}

void ShuffleNetV2::thread_tmp_1041_fu_32909_p2() {
    tmp_1041_fu_32909_p2 = (!p_shl263_cast_fu_32905_p1.read().is_01() || !p_shl261_cast1_fu_32864_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl263_cast_fu_32905_p1.read()) - sc_biguint<10>(p_shl261_cast1_fu_32864_p1.read()));
}

void ShuffleNetV2::thread_tmp_1042_fu_32925_p2() {
    tmp_1042_fu_32925_p2 = (!tmp81_fu_32919_p2.read().is_01() || !co178_cast_reg_43007.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp81_fu_32919_p2.read()) + sc_biguint<13>(co178_cast_reg_43007.read()));
}

void ShuffleNetV2::thread_tmp_1043_fu_32935_p4() {
    tmp_1043_fu_32935_p4 = tmp_1040_fu_32892_p2.read().range(7, 3);
}

void ShuffleNetV2::thread_tmp_1044_cast_fu_9991_p1() {
    tmp_1044_cast_fu_9991_p1 = esl_sext<64,9>(tmp_788_fu_9986_p2.read());
}

void ShuffleNetV2::thread_tmp_1044_fu_11447_p1() {
    tmp_1044_fu_11447_p1 = esl_sext<33,14>(tmp_1029_fu_11441_p2.read());
}

void ShuffleNetV2::thread_tmp_1045_cast1_fu_33187_p1() {
    tmp_1045_cast1_fu_33187_p1 = esl_zext<15,2>(w123_reg_8204.read());
}

void ShuffleNetV2::thread_tmp_1045_cast_fu_33191_p1() {
    tmp_1045_cast_fu_33191_p1 = esl_zext<36,2>(w123_reg_8204.read());
}

void ShuffleNetV2::thread_tmp_1045_fu_11451_p2() {
    tmp_1045_fu_11451_p2 = (!tmp_764_cast_reg_34324.read().is_01() || !tmp_1044_fu_11447_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_764_cast_reg_34324.read()) + sc_bigint<33>(tmp_1044_fu_11447_p1.read()));
}

void ShuffleNetV2::thread_tmp_1046_fu_33566_p2() {
    tmp_1046_fu_33566_p2 = (!p_shl266_cast_fu_33552_p1.read().is_01() || !p_shl267_cast_fu_33562_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl266_cast_fu_33552_p1.read()) - sc_biguint<8>(p_shl267_cast_fu_33562_p1.read()));
}

void ShuffleNetV2::thread_tmp_1047_cast_fu_28831_p1() {
    tmp_1047_cast_fu_28831_p1 = esl_sext<10,8>(tmp_904_fu_28825_p2.read());
}

void ShuffleNetV2::thread_tmp_1047_fu_33472_p2() {
    tmp_1047_fu_33472_p2 = (!p_shl264_cast_fu_33456_p1.read().is_01() || !p_shl265_cast_fu_33468_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl264_cast_fu_33456_p1.read()) - sc_biguint<8>(p_shl265_cast_fu_33468_p1.read()));
}

void ShuffleNetV2::thread_tmp_1048_cast_fu_28851_p1() {
    tmp_1048_cast_fu_28851_p1 = esl_sext<32,8>(tmp_905_reg_41605.read());
}

void ShuffleNetV2::thread_tmp_1048_fu_33482_p2() {
    tmp_1048_fu_33482_p2 = (!i199_cast1_reg_43270.read().is_01() || !tmp_1047_fu_33472_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i199_cast1_reg_43270.read()) + sc_biguint<8>(tmp_1047_fu_33472_p2.read()));
}

void ShuffleNetV2::thread_tmp_1049_fu_33519_p1() {
    tmp_1049_fu_33519_p1 = esl_zext<64,32>(tmp_1200_cast_fu_33516_p1.read());
}

void ShuffleNetV2::thread_tmp_1050_fu_33493_p2() {
    tmp_1050_fu_33493_p2 = (!tmp84_fu_33487_p2.read().is_01() || !i199_cast_reg_43265.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp84_fu_33487_p2.read()) + sc_biguint<12>(i199_cast_reg_43265.read()));
}

void ShuffleNetV2::thread_tmp_1051_cast_fu_33498_p1() {
    tmp_1051_cast_fu_33498_p1 = esl_zext<33,12>(tmp_1050_reg_43296.read());
}

void ShuffleNetV2::thread_tmp_1051_fu_11456_p1() {
    tmp_1051_fu_11456_p1 = esl_sext<64,33>(tmp_1045_fu_11451_p2.read());
}

void ShuffleNetV2::thread_tmp_1052_cast_fu_33211_p1() {
    tmp_1052_cast_fu_33211_p1 = esl_zext<11,2>(h120_reg_8215.read());
}

void ShuffleNetV2::thread_tmp_1052_fu_33207_p1() {
    tmp_1052_fu_33207_p1 = esl_zext<64,2>(h120_reg_8215.read());
}

void ShuffleNetV2::thread_tmp_1053_fu_33602_p2() {
    tmp_1053_fu_33602_p2 = (!tmp_1046_reg_43320.read().is_01() || !ci80_cast_fu_33586_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1046_reg_43320.read()) + sc_biguint<8>(ci80_cast_fu_33586_p1.read()));
}

void ShuffleNetV2::thread_tmp_1054_fu_11294_p2() {
    tmp_1054_fu_11294_p2 = (!tmp_357_cast_fu_11290_p1.read().is_01() || !tmp_1003_reg_35221.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_357_cast_fu_11290_p1.read()) + sc_biguint<10>(tmp_1003_reg_35221.read()));
}

void ShuffleNetV2::thread_tmp_1055_fu_11307_p3() {
    tmp_1055_fu_11307_p3 = esl_concat<10,1>(tmp_1054_fu_11294_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1056_cast_fu_33607_p1() {
    tmp_1056_cast_fu_33607_p1 = esl_sext<12,8>(tmp_1053_fu_33602_p2.read());
}

void ShuffleNetV2::thread_tmp_1056_fu_11319_p2() {
    tmp_1056_fu_11319_p2 = (!p_shl327_cast_fu_11299_p3.read().is_01() || !p_shl328_cast_fu_11315_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl327_cast_fu_11299_p3.read()) + sc_biguint<14>(p_shl328_cast_fu_11315_p1.read()));
}

void ShuffleNetV2::thread_tmp_1057_fu_11325_p2() {
    tmp_1057_fu_11325_p2 = (!tmp_357_cast1_fu_11286_p1.read().is_01() || !tmp_1008_reg_35226.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_357_cast1_fu_11286_p1.read()) + sc_biguint<11>(tmp_1008_reg_35226.read()));
}

void ShuffleNetV2::thread_tmp_1058_cast_fu_29765_p1() {
    tmp_1058_cast_fu_29765_p1 = esl_zext<8,3>(p_lshr_f22_cast_fu_29755_p4.read());
}

void ShuffleNetV2::thread_tmp_1058_fu_11338_p3() {
    tmp_1058_fu_11338_p3 = esl_concat<11,1>(tmp_1057_fu_11325_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1059_cast_fu_33611_p1() {
    tmp_1059_cast_fu_33611_p1 = esl_zext<20,5>(ci80_reg_8270.read());
}

void ShuffleNetV2::thread_tmp_1059_fu_11350_p2() {
    tmp_1059_fu_11350_p2 = (!p_shl325_cast_fu_11330_p3.read().is_01() || !p_shl326_cast_fu_11346_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl325_cast_fu_11330_p3.read()) + sc_biguint<15>(p_shl326_cast_fu_11346_p1.read()));
}

void ShuffleNetV2::thread_tmp_1060_fu_11182_p2() {
    tmp_1060_fu_11182_p2 = (!tmp_1023_reg_35190.read().is_01() || !tmp_358_cast_fu_11178_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1023_reg_35190.read()) + sc_biguint<15>(tmp_358_cast_fu_11178_p1.read()));
}

void ShuffleNetV2::thread_tmp_1061_cast_fu_29256_p1() {
    tmp_1061_cast_fu_29256_p1 = esl_sext<12,10>(tmp_918_fu_29250_p2.read());
}

void ShuffleNetV2::thread_tmp_1061_fu_33255_p2() {
    tmp_1061_fu_33255_p2 = (!p_shl270_cast_fu_33239_p1.read().is_01() || !p_shl271_cast_fu_33251_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl270_cast_fu_33239_p1.read()) - sc_biguint<8>(p_shl271_cast_fu_33251_p1.read()));
}

void ShuffleNetV2::thread_tmp_1062_fu_33265_p2() {
    tmp_1062_fu_33265_p2 = (!tmp_1061_fu_33255_p2.read().is_01() || !co181_cast1_reg_43169.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1061_fu_33255_p2.read()) + sc_biguint<8>(co181_cast1_reg_43169.read()));
}

void ShuffleNetV2::thread_tmp_1063_cast_fu_33284_p1() {
    tmp_1063_cast_fu_33284_p1 = esl_zext<35,32>(tmp_1219_cast_fu_33281_p1.read());
}

void ShuffleNetV2::thread_tmp_1063_fu_11541_p2() {
    tmp_1063_fu_11541_p2 = (!tmp_1038_reg_35291.read().is_01() || !tmp_362_cast_fu_11537_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1038_reg_35291.read()) + sc_biguint<8>(tmp_362_cast_fu_11537_p1.read()));
}

void ShuffleNetV2::thread_tmp_1064_fu_33276_p2() {
    tmp_1064_fu_33276_p2 = (!co181_cast_reg_43164.read().is_01() || !tmp83_fu_33270_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(co181_cast_reg_43164.read()) + sc_biguint<11>(tmp83_fu_33270_p2.read()));
}

void ShuffleNetV2::thread_tmp_1065_cast_fu_33326_p1() {
    tmp_1065_cast_fu_33326_p1 = esl_zext<14,11>(tmp_1064_reg_43232.read());
}

void ShuffleNetV2::thread_tmp_1065_fu_11376_p2() {
    tmp_1065_fu_11376_p2 = (!tmp_1056_reg_35239.read().is_01() || !tmp_363_cast_fu_11372_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1056_reg_35239.read()) + sc_biguint<14>(tmp_363_cast_fu_11372_p1.read()));
}

void ShuffleNetV2::thread_tmp_1066_cast_fu_30067_p1() {
    tmp_1066_cast_fu_30067_p1 = esl_sext<12,8>(tmp_930_fu_30061_p2.read());
}

void ShuffleNetV2::thread_tmp_1066_fu_33878_p2() {
    tmp_1066_fu_33878_p2 = (!p_shl268_cast_fu_33862_p1.read().is_01() || !p_shl269_cast_fu_33874_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl268_cast_fu_33862_p1.read()) - sc_biguint<8>(p_shl269_cast_fu_33874_p1.read()));
}

void ShuffleNetV2::thread_tmp_1067_cast_fu_30105_p1() {
    tmp_1067_cast_fu_30105_p1 = esl_sext<32,8>(tmp_931_reg_42038.read());
}

void ShuffleNetV2::thread_tmp_1067_fu_33888_p2() {
    tmp_1067_fu_33888_p2 = (!i202_cast1_reg_43427.read().is_01() || !tmp_1066_fu_33878_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i202_cast1_reg_43427.read()) + sc_biguint<8>(tmp_1066_fu_33878_p2.read()));
}

void ShuffleNetV2::thread_tmp_1068_fu_33925_p1() {
    tmp_1068_fu_33925_p1 = esl_zext<64,32>(tmp_1210_cast_fu_33922_p1.read());
}

void ShuffleNetV2::thread_tmp_1069_fu_33899_p2() {
    tmp_1069_fu_33899_p2 = (!tmp86_fu_33893_p2.read().is_01() || !i202_cast_reg_43422.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp86_fu_33893_p2.read()) + sc_biguint<12>(i202_cast_reg_43422.read()));
}

void ShuffleNetV2::thread_tmp_1070_cast_fu_33904_p1() {
    tmp_1070_cast_fu_33904_p1 = esl_zext<33,12>(tmp_1069_reg_43453.read());
}

void ShuffleNetV2::thread_tmp_1070_fu_11381_p2() {
    tmp_1070_fu_11381_p2 = (!tmp_1059_reg_35244.read().is_01() || !tmp_363_cast1_fu_11368_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1059_reg_35244.read()) + sc_biguint<15>(tmp_363_cast1_fu_11368_p1.read()));
}

void ShuffleNetV2::thread_tmp_1071_fu_33657_p2() {
    tmp_1071_fu_33657_p2 = (!p_shl272_cast_fu_33643_p1.read().is_01() || !p_shl273_cast_fu_33653_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl272_cast_fu_33643_p1.read()) - sc_biguint<8>(p_shl273_cast_fu_33653_p1.read()));
}

void ShuffleNetV2::thread_tmp_1072_fu_33667_p2() {
    tmp_1072_fu_33667_p2 = (!tmp_1071_fu_33657_p2.read().is_01() || !tmp_1207_cast_reg_43330.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1071_fu_33657_p2.read()) + sc_biguint<8>(tmp_1207_cast_reg_43330.read()));
}

void ShuffleNetV2::thread_tmp_1073_fu_33684_p2() {
    tmp_1073_fu_33684_p2 = (!p_shl274_cast_fu_33680_p1.read().is_01() || !p_shl272_cast1_fu_33639_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl274_cast_fu_33680_p1.read()) - sc_biguint<10>(p_shl272_cast1_fu_33639_p1.read()));
}

void ShuffleNetV2::thread_tmp_1074_fu_33700_p2() {
    tmp_1074_fu_33700_p2 = (!tmp85_fu_33694_p2.read().is_01() || !co183_cast_reg_43307.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp85_fu_33694_p2.read()) + sc_biguint<13>(co183_cast_reg_43307.read()));
}

void ShuffleNetV2::thread_tmp_1075_fu_33710_p4() {
    tmp_1075_fu_33710_p4 = tmp_1072_fu_33667_p2.read().range(7, 3);
}

void ShuffleNetV2::thread_tmp_1076_cast_fu_33988_p1() {
    tmp_1076_cast_fu_33988_p1 = esl_zext<12,3>(h_123_fu_33982_p2.read());
}

void ShuffleNetV2::thread_tmp_1076_fu_11645_p2() {
    tmp_1076_fu_11645_p2 = (!tmp_763_cast_reg_34261.read().is_01() || !ap_const_lv33_F0.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_763_cast_reg_34261.read()) + sc_biguint<33>(ap_const_lv33_F0));
}

void ShuffleNetV2::thread_tmp_1077_cast_fu_34123_p1() {
    tmp_1077_cast_fu_34123_p1 = esl_zext<11,3>(w125_reg_8358.read());
}

void ShuffleNetV2::thread_tmp_1077_fu_11650_p1() {
    tmp_1077_fu_11650_p1 = esl_sext<64,33>(tmp_1076_fu_11645_p2.read());
}

void ShuffleNetV2::thread_tmp_1078_fu_11595_p3() {
    tmp_1078_fu_11595_p3 = esl_concat<5,2>(co41_reg_4797.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1079_cast_fu_29873_p1() {
    tmp_1079_cast_fu_29873_p1 = esl_sext<12,10>(tmp_937_fu_29867_p2.read());
}

void ShuffleNetV2::thread_tmp_1079_fu_11607_p2() {
    tmp_1079_fu_11607_p2 = (!p_shl334_cast_fu_11603_p1.read().is_01() || !tmp_364_cast_fu_11591_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl334_cast_fu_11603_p1.read()) - sc_biguint<8>(tmp_364_cast_fu_11591_p1.read()));
}

void ShuffleNetV2::thread_tmp_1080_cast_fu_34140_p1() {
    tmp_1080_cast_fu_34140_p1 = esl_zext<13,3>(w_127_fu_34117_p2.read());
}

void ShuffleNetV2::thread_tmp_1080_fu_11627_p3() {
    tmp_1080_fu_11627_p3 = esl_concat<7,2>(tmp_365_fu_11617_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1081_fu_11639_p2() {
    tmp_1081_fu_11639_p2 = (!p_shl333_cast_fu_11635_p1.read().is_01() || !tmp_366_cast_fu_11623_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl333_cast_fu_11635_p1.read()) - sc_biguint<10>(tmp_366_cast_fu_11623_p1.read()));
}

void ShuffleNetV2::thread_tmp_1082_cast_fu_34039_p1() {
    tmp_1082_cast_fu_34039_p1 = esl_zext<14,3>(w_1_fu_34033_p2.read());
}

void ShuffleNetV2::thread_tmp_1082_fu_11680_p2() {
    tmp_1082_fu_11680_p2 = (!tmp_370_cast_fu_11676_p1.read().is_01() || !tmp_1081_reg_35365.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_370_cast_fu_11676_p1.read()) + sc_biguint<10>(tmp_1081_reg_35365.read()));
}

void ShuffleNetV2::thread_tmp_1083_cast1_fu_34187_p1() {
    tmp_1083_cast1_fu_34187_p1 = esl_zext<13,3>(h124_reg_8369.read());
}

void ShuffleNetV2::thread_tmp_1083_cast_fu_30432_p1() {
    tmp_1083_cast_fu_30432_p1 = esl_sext<12,8>(tmp_942_fu_30426_p2.read());
}

void ShuffleNetV2::thread_tmp_1083_fu_11689_p3() {
    tmp_1083_fu_11689_p3 = esl_concat<10,2>(tmp_1082_fu_11680_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1084_cast1_fu_34196_p1() {
    tmp_1084_cast1_fu_34196_p1 = esl_zext<14,3>(h_125_fu_34181_p2.read());
}

void ShuffleNetV2::thread_tmp_1084_cast_fu_30470_p1() {
    tmp_1084_cast_fu_30470_p1 = esl_sext<32,8>(tmp_943_reg_42181.read());
}

void ShuffleNetV2::thread_tmp_1084_fu_11701_p2() {
    tmp_1084_fu_11701_p2 = (!p_shl208_fu_11697_p1.read().is_01() || !tmp_1248_cast_fu_11685_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl208_fu_11697_p1.read()) - sc_bigint<64>(tmp_1248_cast_fu_11685_p1.read()));
}

void ShuffleNetV2::thread_tmp_1085_fu_11707_p2() {
    tmp_1085_fu_11707_p2 = (!tmp_370_cast1_fu_11672_p1.read().is_01() || !tmp_1245_cast_reg_35360.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_370_cast1_fu_11672_p1.read()) + sc_bigint<9>(tmp_1245_cast_reg_35360.read()));
}

void ShuffleNetV2::thread_tmp_1086_fu_11723_p2() {
    tmp_1086_fu_11723_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_1085_reg_35384.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1087_fu_11728_p2() {
    tmp_1087_fu_11728_p2 = (!tmp_1086_fu_11723_p2.read().is_01() || !tmp_1085_reg_35384.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_1086_fu_11723_p2.read()) - sc_biguint<9>(tmp_1085_reg_35384.read()));
}

void ShuffleNetV2::thread_tmp_1088_fu_11712_p2() {
    tmp_1088_fu_11712_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_1084_fu_11701_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_1084_fu_11701_p2.read()));
}

void ShuffleNetV2::thread_tmp_1089_fu_11846_p2() {
    tmp_1089_fu_11846_p2 = (!tmp_763_cast_reg_34261.read().is_01() || !ap_const_lv33_108.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_763_cast_reg_34261.read()) + sc_biguint<33>(ap_const_lv33_108));
}

void ShuffleNetV2::thread_tmp_1090_fu_11851_p1() {
    tmp_1090_fu_11851_p1 = esl_sext<64,33>(tmp_1089_fu_11846_p2.read());
}

void ShuffleNetV2::thread_tmp_1091_cast_fu_30536_p1() {
    tmp_1091_cast_fu_30536_p1 = esl_zext<8,3>(p_lshr_f23_cast_fu_30526_p4.read());
}

void ShuffleNetV2::thread_tmp_1091_fu_11797_p3() {
    tmp_1091_fu_11797_p3 = esl_concat<8,5>(tmp_371_fu_11791_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1092_fu_11809_p3() {
    tmp_1092_fu_11809_p3 = esl_concat<8,3>(tmp_371_fu_11791_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1093_cast_fu_30846_p1() {
    tmp_1093_cast_fu_30846_p1 = esl_sext<12,8>(tmp_959_fu_30840_p2.read());
}

void ShuffleNetV2::thread_tmp_1093_fu_11821_p2() {
    tmp_1093_fu_11821_p2 = (!p_shl339_cast_fu_11805_p1.read().is_01() || !p_shl340_cast_fu_11817_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl339_cast_fu_11805_p1.read()) - sc_biguint<14>(p_shl340_cast_fu_11817_p1.read()));
}

void ShuffleNetV2::thread_tmp_1094_cast_fu_30884_p1() {
    tmp_1094_cast_fu_30884_p1 = esl_sext<32,8>(tmp_960_reg_42338.read());
}

void ShuffleNetV2::thread_tmp_1094_fu_11861_p1() {
    tmp_1094_fu_11861_p1 = co43_reg_4842.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1095_fu_11875_p3() {
    tmp_1095_fu_11875_p3 = esl_concat<2,5>(newIndex9_fu_11865_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1096_fu_11887_p3() {
    tmp_1096_fu_11887_p3 = esl_concat<2,3>(newIndex9_fu_11865_p4.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1097_fu_11899_p2() {
    tmp_1097_fu_11899_p2 = (!p_shl337_cast_fu_11883_p1.read().is_01() || !p_shl338_cast_fu_11895_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl337_cast_fu_11883_p1.read()) - sc_biguint<8>(p_shl338_cast_fu_11895_p1.read()));
}

void ShuffleNetV2::thread_tmp_1098_fu_11827_p1() {
    tmp_1098_fu_11827_p1 = esl_sext<33,14>(tmp_1093_fu_11821_p2.read());
}

void ShuffleNetV2::thread_tmp_1099_fu_11831_p2() {
    tmp_1099_fu_11831_p2 = (!tmp_764_cast_reg_34324.read().is_01() || !tmp_1098_fu_11827_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_764_cast_reg_34324.read()) + sc_bigint<33>(tmp_1098_fu_11827_p1.read()));
}

void ShuffleNetV2::thread_tmp_1100_fu_11836_p1() {
    tmp_1100_fu_11836_p1 = esl_sext<64,33>(tmp_1099_fu_11831_p2.read());
}

void ShuffleNetV2::thread_tmp_1101_fu_11749_p2() {
    tmp_1101_fu_11749_p2 = (!tmp_1087_reg_35396.read().is_01() || !tmp_372_cast_fu_11745_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_1087_reg_35396.read()) + sc_biguint<9>(tmp_372_cast_fu_11745_p1.read()));
}

void ShuffleNetV2::thread_tmp_1102_cast_fu_30219_p1() {
    tmp_1102_cast_fu_30219_p1 = esl_sext<10,8>(tmp_954_fu_30213_p2.read());
}

void ShuffleNetV2::thread_tmp_1102_fu_11921_p2() {
    tmp_1102_fu_11921_p2 = (!tmp_1097_reg_35446.read().is_01() || !tmp_376_cast_fu_11917_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1097_reg_35446.read()) + sc_biguint<8>(tmp_376_cast_fu_11917_p1.read()));
}

void ShuffleNetV2::thread_tmp_1103_cast_fu_30239_p1() {
    tmp_1103_cast_fu_30239_p1 = esl_sext<32,8>(tmp_955_reg_42116.read());
}

void ShuffleNetV2::thread_tmp_1103_fu_11967_p3() {
    tmp_1103_fu_11967_p3 = esl_concat<5,4>(co45_reg_4877.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1104_fu_11979_p3() {
    tmp_1104_fu_11979_p3 = esl_concat<5,1>(co45_reg_4877.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1105_fu_11991_p2() {
    tmp_1105_fu_11991_p2 = (!p_shl342_cast_fu_11987_p1.read().is_01() || !p_shl341_cast_fu_11975_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl342_cast_fu_11987_p1.read()) + sc_biguint<10>(p_shl341_cast_fu_11975_p1.read()));
}

void ShuffleNetV2::thread_tmp_1106_fu_12090_p3() {
    tmp_1106_fu_12090_p3 = esl_concat<5,4>(co46_reg_4910.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1107_fu_12102_p3() {
    tmp_1107_fu_12102_p3 = esl_concat<5,1>(co46_reg_4910.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1108_fu_12114_p2() {
    tmp_1108_fu_12114_p2 = (!p_shl348_cast_fu_12110_p1.read().is_01() || !p_shl347_cast_fu_12098_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl348_cast_fu_12110_p1.read()) + sc_biguint<10>(p_shl347_cast_fu_12098_p1.read()));
}

void ShuffleNetV2::thread_tmp_1109_fu_12126_p3() {
    tmp_1109_fu_12126_p3 = esl_concat<6,4>(tmp_377_fu_12120_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1110_fu_12138_p3() {
    tmp_1110_fu_12138_p3 = esl_concat<6,1>(tmp_377_fu_12120_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1111_cast_cast_fu_30644_p1() {
    tmp_1111_cast_cast_fu_30644_p1 = esl_sext<11,10>(tmp_966_fu_30638_p2.read());
}

void ShuffleNetV2::thread_tmp_1111_fu_12150_p2() {
    tmp_1111_fu_12150_p2 = (!p_shl346_cast_fu_12146_p1.read().is_01() || !p_shl345_cast_fu_12134_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl346_cast_fu_12146_p1.read()) + sc_biguint<11>(p_shl345_cast_fu_12134_p1.read()));
}

void ShuffleNetV2::thread_tmp_1112_cast_fu_10060_p1() {
    tmp_1112_cast_fu_10060_p1 = esl_zext<64,9>(tmp_828_reg_34771.read());
}

void ShuffleNetV2::thread_tmp_1112_fu_12013_p2() {
    tmp_1112_fu_12013_p2 = (!tmp_378_cast_fu_12009_p1.read().is_01() || !tmp_1105_reg_35515.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_378_cast_fu_12009_p1.read()) + sc_biguint<10>(tmp_1105_reg_35515.read()));
}

void ShuffleNetV2::thread_tmp_1113_fu_12018_p3() {
    tmp_1113_fu_12018_p3 = esl_concat<10,4>(tmp_1112_fu_12013_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1114_fu_12030_p3() {
    tmp_1114_fu_12030_p3 = esl_concat<10,1>(tmp_1112_fu_12013_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1115_fu_12042_p2() {
    tmp_1115_fu_12042_p2 = (!p_shl343_cast_fu_12026_p1.read().is_01() || !p_shl344_cast_fu_12038_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl343_cast_fu_12026_p1.read()) + sc_biguint<15>(p_shl344_cast_fu_12038_p1.read()));
}

void ShuffleNetV2::thread_tmp_1116_fu_12299_p3() {
    tmp_1116_fu_12299_p3 = esl_concat<8,5>(tmp_379_fu_12293_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1117_fu_12311_p3() {
    tmp_1117_fu_12311_p3 = esl_concat<8,3>(tmp_379_fu_12293_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1118_fu_12323_p2() {
    tmp_1118_fu_12323_p2 = (!p_shl355_cast_fu_12307_p1.read().is_01() || !p_shl356_cast_fu_12319_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl355_cast_fu_12307_p1.read()) - sc_biguint<14>(p_shl356_cast_fu_12319_p1.read()));
}

void ShuffleNetV2::thread_tmp_1119_fu_12348_p1() {
    tmp_1119_fu_12348_p1 = co48_reg_4943.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1120_fu_12362_p3() {
    tmp_1120_fu_12362_p3 = esl_concat<2,5>(newIndex1_fu_12352_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1121_cast_fu_31284_p1() {
    tmp_1121_cast_fu_31284_p1 = esl_zext<8,3>(p_lshr_f24_cast_fu_31274_p4.read());
}

void ShuffleNetV2::thread_tmp_1121_fu_12374_p3() {
    tmp_1121_fu_12374_p3 = esl_concat<2,3>(newIndex1_fu_12352_p4.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1122_fu_12386_p2() {
    tmp_1122_fu_12386_p2 = (!p_shl353_cast_fu_12370_p1.read().is_01() || !p_shl354_cast_fu_12382_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl353_cast_fu_12370_p1.read()) - sc_biguint<8>(p_shl354_cast_fu_12382_p1.read()));
}

void ShuffleNetV2::thread_tmp_1123_fu_12329_p1() {
    tmp_1123_fu_12329_p1 = esl_sext<33,14>(tmp_1118_fu_12323_p2.read());
}

void ShuffleNetV2::thread_tmp_1124_cast_fu_31586_p1() {
    tmp_1124_cast_fu_31586_p1 = esl_sext<12,8>(tmp_981_fu_31580_p2.read());
}

void ShuffleNetV2::thread_tmp_1124_fu_12333_p2() {
    tmp_1124_fu_12333_p2 = (!tmp_764_cast_reg_34324.read().is_01() || !tmp_1123_fu_12329_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_764_cast_reg_34324.read()) + sc_bigint<33>(tmp_1123_fu_12329_p1.read()));
}

void ShuffleNetV2::thread_tmp_1125_cast_fu_31624_p1() {
    tmp_1125_cast_fu_31624_p1 = esl_sext<32,8>(tmp_982_reg_42593.read());
}

void ShuffleNetV2::thread_tmp_1125_fu_12338_p1() {
    tmp_1125_fu_12338_p1 = esl_sext<64,33>(tmp_1124_fu_12333_p2.read());
}

void ShuffleNetV2::thread_tmp_1126_fu_12176_p2() {
    tmp_1126_fu_12176_p2 = (!tmp_380_cast1_fu_12172_p1.read().is_01() || !tmp_1108_reg_35559.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_380_cast1_fu_12172_p1.read()) + sc_biguint<10>(tmp_1108_reg_35559.read()));
}

void ShuffleNetV2::thread_tmp_1127_fu_12189_p3() {
    tmp_1127_fu_12189_p3 = esl_concat<10,1>(tmp_1126_fu_12176_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1128_fu_12201_p2() {
    tmp_1128_fu_12201_p2 = (!p_shl351_cast_fu_12181_p3.read().is_01() || !p_shl352_cast_fu_12197_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl351_cast_fu_12181_p3.read()) + sc_biguint<14>(p_shl352_cast_fu_12197_p1.read()));
}

void ShuffleNetV2::thread_tmp_1129_fu_12207_p2() {
    tmp_1129_fu_12207_p2 = (!tmp_380_cast_fu_12168_p1.read().is_01() || !tmp_1111_reg_35564.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_380_cast_fu_12168_p1.read()) + sc_biguint<11>(tmp_1111_reg_35564.read()));
}

void ShuffleNetV2::thread_tmp_1130_fu_12220_p3() {
    tmp_1130_fu_12220_p3 = esl_concat<11,1>(tmp_1129_fu_12207_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1131_fu_12232_p2() {
    tmp_1131_fu_12232_p2 = (!p_shl349_cast_fu_12212_p3.read().is_01() || !p_shl350_cast_fu_12228_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl349_cast_fu_12212_p3.read()) + sc_biguint<15>(p_shl350_cast_fu_12228_p1.read()));
}

void ShuffleNetV2::thread_tmp_1132_cast_fu_10263_p1() {
    tmp_1132_cast_fu_10263_p1 = esl_sext<64,8>(tmp_833_fu_10258_p2.read());
}

void ShuffleNetV2::thread_tmp_1132_fu_12064_p2() {
    tmp_1132_fu_12064_p2 = (!tmp_1115_reg_35528.read().is_01() || !tmp_381_cast_fu_12060_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1115_reg_35528.read()) + sc_biguint<15>(tmp_381_cast_fu_12060_p1.read()));
}

void ShuffleNetV2::thread_tmp_1134_fu_12437_p3() {
    tmp_1134_fu_12437_p3 = esl_concat<4,5>(ap_const_lv4_9, tmp_1133_reg_4966.read());
}

void ShuffleNetV2::thread_tmp_1135_fu_12445_p1() {
    tmp_1135_fu_12445_p1 = esl_zext<33,9>(tmp_1134_fu_12437_p3.read());
}

void ShuffleNetV2::thread_tmp_1136_fu_12449_p2() {
    tmp_1136_fu_12449_p2 = (!tmp_1135_fu_12445_p1.read().is_01() || !tmp_763_cast_reg_34261.read().is_01())? sc_lv<33>(): (sc_biguint<33>(tmp_1135_fu_12445_p1.read()) + sc_bigint<33>(tmp_763_cast_reg_34261.read()));
}

void ShuffleNetV2::thread_tmp_1137_cast_fu_31392_p1() {
    tmp_1137_cast_fu_31392_p1 = esl_sext<13,10>(tmp_988_fu_31386_p2.read());
}

void ShuffleNetV2::thread_tmp_1137_fu_12454_p1() {
    tmp_1137_fu_12454_p1 = esl_sext<64,33>(tmp_1136_fu_12449_p2.read());
}

void ShuffleNetV2::thread_tmp_1138_fu_12408_p2() {
    tmp_1138_fu_12408_p2 = (!tmp_1122_reg_35623.read().is_01() || !tmp_385_cast_fu_12404_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1122_reg_35623.read()) + sc_biguint<8>(tmp_385_cast_fu_12404_p1.read()));
}

void ShuffleNetV2::thread_tmp_1139_fu_12258_p2() {
    tmp_1139_fu_12258_p2 = (!tmp_1128_reg_35577.read().is_01() || !tmp_386_cast_fu_12254_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1128_reg_35577.read()) + sc_biguint<14>(tmp_386_cast_fu_12254_p1.read()));
}

void ShuffleNetV2::thread_tmp_1140_fu_12263_p2() {
    tmp_1140_fu_12263_p2 = (!tmp_1131_reg_35582.read().is_01() || !tmp_386_cast1_fu_12250_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1131_reg_35582.read()) + sc_biguint<15>(tmp_386_cast1_fu_12250_p1.read()));
}

void ShuffleNetV2::thread_tmp_1141_cast_fu_31963_p1() {
    tmp_1141_cast_fu_31963_p1 = esl_sext<12,8>(tmp_994_fu_31957_p2.read());
}

void ShuffleNetV2::thread_tmp_1141_fu_12551_p2() {
    tmp_1141_fu_12551_p2 = (!tmp_763_cast_reg_34261.read().is_01() || !ap_const_lv33_138.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_763_cast_reg_34261.read()) + sc_biguint<33>(ap_const_lv33_138));
}

void ShuffleNetV2::thread_tmp_1142_cast_fu_32001_p1() {
    tmp_1142_cast_fu_32001_p1 = esl_sext<32,8>(tmp_996_reg_42736.read());
}

void ShuffleNetV2::thread_tmp_1142_fu_12556_p1() {
    tmp_1142_fu_12556_p1 = esl_sext<64,33>(tmp_1141_fu_12551_p2.read());
}

void ShuffleNetV2::thread_tmp_1143_fu_12485_p3() {
    tmp_1143_fu_12485_p3 = esl_concat<5,2>(co51_reg_4978.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1144_fu_12497_p2() {
    tmp_1144_fu_12497_p2 = (!p_shl358_cast_fu_12493_p1.read().is_01() || !tmp_387_cast_fu_12481_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl358_cast_fu_12493_p1.read()) - sc_biguint<8>(tmp_387_cast_fu_12481_p1.read()));
}

void ShuffleNetV2::thread_tmp_1145_fu_12523_p4() {
    tmp_1145_fu_12523_p4 = esl_concat<6,2>(esl_concat<1,5>(ap_const_lv1_1, co51_reg_4978.read()), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1146_fu_12533_p1() {
    tmp_1146_fu_12533_p1 = esl_sext<9,8>(tmp_1145_fu_12523_p4.read());
}

void ShuffleNetV2::thread_tmp_1147_fu_12541_p2() {
    tmp_1147_fu_12541_p2 = (!p_shl357_cast_fu_12537_p1.read().is_01() || !tmp_389_cast_fu_12519_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl357_cast_fu_12537_p1.read()) - sc_biguint<10>(tmp_389_cast_fu_12519_p1.read()));
}

void ShuffleNetV2::thread_tmp_1148_fu_12586_p2() {
    tmp_1148_fu_12586_p2 = (!tmp_393_cast_fu_12582_p1.read().is_01() || !tmp_1300_cast_reg_35703.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_393_cast_fu_12582_p1.read()) + sc_bigint<11>(tmp_1300_cast_reg_35703.read()));
}

void ShuffleNetV2::thread_tmp_1149_cast_fu_32067_p1() {
    tmp_1149_cast_fu_32067_p1 = esl_zext<8,3>(p_lshr_f25_cast_fu_32057_p4.read());
}

void ShuffleNetV2::thread_tmp_1149_fu_12595_p3() {
    tmp_1149_fu_12595_p3 = esl_concat<11,2>(tmp_1148_fu_12586_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1150_fu_12607_p2() {
    tmp_1150_fu_12607_p2 = (!p_shl213_fu_12603_p1.read().is_01() || !tmp_1301_cast_fu_12591_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl213_fu_12603_p1.read()) - sc_bigint<64>(tmp_1301_cast_fu_12591_p1.read()));
}

void ShuffleNetV2::thread_tmp_1151_cast_fu_32369_p1() {
    tmp_1151_cast_fu_32369_p1 = esl_sext<12,8>(tmp_1012_fu_32363_p2.read());
}

void ShuffleNetV2::thread_tmp_1151_fu_12613_p2() {
    tmp_1151_fu_12613_p2 = (!tmp_393_cast1_fu_12578_p1.read().is_01() || !tmp_1297_cast_reg_35698.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_393_cast1_fu_12578_p1.read()) + sc_bigint<9>(tmp_1297_cast_reg_35698.read()));
}

void ShuffleNetV2::thread_tmp_1152_cast_fu_32407_p1() {
    tmp_1152_cast_fu_32407_p1 = esl_sext<32,8>(tmp_1013_reg_42893.read());
}

void ShuffleNetV2::thread_tmp_1152_fu_12629_p2() {
    tmp_1152_fu_12629_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_1151_reg_35722.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1153_fu_12634_p2() {
    tmp_1153_fu_12634_p2 = (!tmp_1152_fu_12629_p2.read().is_01() || !tmp_1151_reg_35722.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_1152_fu_12629_p2.read()) - sc_biguint<9>(tmp_1151_reg_35722.read()));
}

void ShuffleNetV2::thread_tmp_1154_fu_12618_p2() {
    tmp_1154_fu_12618_p2 = (!tmp_603_reg_34365.read().is_01() || !tmp_1150_fu_12607_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_603_reg_34365.read()) + sc_biguint<64>(tmp_1150_fu_12607_p2.read()));
}

void ShuffleNetV2::thread_tmp_1155_fu_12754_p2() {
    tmp_1155_fu_12754_p2 = (!tmp_763_cast_reg_34261.read().is_01() || !ap_const_lv33_150.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_763_cast_reg_34261.read()) + sc_biguint<33>(ap_const_lv33_150));
}

void ShuffleNetV2::thread_tmp_1156_fu_12759_p1() {
    tmp_1156_fu_12759_p1 = esl_sext<64,33>(tmp_1155_fu_12754_p2.read());
}

void ShuffleNetV2::thread_tmp_1157_fu_12693_p4() {
    tmp_1157_fu_12693_p4 = esl_concat<7,5>(esl_concat<2,5>(ap_const_lv2_2, co53_reg_5023.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1158_fu_12703_p1() {
    tmp_1158_fu_12703_p1 = esl_sext<13,12>(tmp_1157_fu_12693_p4.read());
}

void ShuffleNetV2::thread_tmp_1159_fu_12711_p4() {
    tmp_1159_fu_12711_p4 = esl_concat<7,3>(esl_concat<2,5>(ap_const_lv2_2, co53_reg_5023.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1160_cast_cast_fu_31738_p1() {
    tmp_1160_cast_cast_fu_31738_p1 = esl_sext<9,8>(tmp_1004_fu_31732_p2.read());
}

void ShuffleNetV2::thread_tmp_1160_fu_12721_p1() {
    tmp_1160_fu_12721_p1 = esl_sext<11,10>(tmp_1159_fu_12711_p4.read());
}

void ShuffleNetV2::thread_tmp_1161_cast_fu_31758_p1() {
    tmp_1161_cast_fu_31758_p1 = esl_sext<32,8>(tmp_1007_reg_42671.read());
}

void ShuffleNetV2::thread_tmp_1161_fu_12729_p2() {
    tmp_1161_fu_12729_p2 = (!p_shl363_cast_fu_12707_p1.read().is_01() || !p_shl364_cast_fu_12725_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl363_cast_fu_12707_p1.read()) - sc_biguint<14>(p_shl364_cast_fu_12725_p1.read()));
}

void ShuffleNetV2::thread_tmp_1162_fu_12769_p1() {
    tmp_1162_fu_12769_p1 = co53_reg_5023.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1163_fu_12783_p3() {
    tmp_1163_fu_12783_p3 = esl_concat<2,5>(newIndex2_fu_12773_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1164_cast_fu_31803_p1() {
    tmp_1164_cast_fu_31803_p1 = esl_sext<10,9>(tmp_1010_reg_42677.read());
}

void ShuffleNetV2::thread_tmp_1164_fu_12795_p3() {
    tmp_1164_fu_12795_p3 = esl_concat<2,3>(newIndex2_fu_12773_p4.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1165_fu_12807_p2() {
    tmp_1165_fu_12807_p2 = (!p_shl361_cast_fu_12791_p1.read().is_01() || !p_shl362_cast_fu_12803_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl361_cast_fu_12791_p1.read()) - sc_biguint<8>(p_shl362_cast_fu_12803_p1.read()));
}

void ShuffleNetV2::thread_tmp_1166_fu_12735_p1() {
    tmp_1166_fu_12735_p1 = esl_sext<33,14>(tmp_1161_fu_12729_p2.read());
}

void ShuffleNetV2::thread_tmp_1167_fu_12739_p2() {
    tmp_1167_fu_12739_p2 = (!tmp_764_cast_reg_34324.read().is_01() || !tmp_1166_fu_12735_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_764_cast_reg_34324.read()) + sc_bigint<33>(tmp_1166_fu_12735_p1.read()));
}

void ShuffleNetV2::thread_tmp_1168_fu_12744_p1() {
    tmp_1168_fu_12744_p1 = esl_sext<64,33>(tmp_1167_fu_12739_p2.read());
}

void ShuffleNetV2::thread_tmp_1169_cast_fu_32175_p1() {
    tmp_1169_cast_fu_32175_p1 = esl_sext<13,10>(tmp_1019_fu_32169_p2.read());
}

void ShuffleNetV2::thread_tmp_1169_fu_12655_p2() {
    tmp_1169_fu_12655_p2 = (!tmp_1153_reg_35734.read().is_01() || !tmp_394_cast_fu_12651_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_1153_reg_35734.read()) + sc_biguint<9>(tmp_394_cast_fu_12651_p1.read()));
}

void ShuffleNetV2::thread_tmp_1170_fu_12829_p2() {
    tmp_1170_fu_12829_p2 = (!tmp_1165_reg_35784.read().is_01() || !tmp_398_cast_fu_12825_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1165_reg_35784.read()) + sc_biguint<8>(tmp_398_cast_fu_12825_p1.read()));
}

void ShuffleNetV2::thread_tmp_1171_fu_12875_p3() {
    tmp_1171_fu_12875_p3 = esl_concat<5,4>(co55_reg_5058.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1172_fu_12887_p3() {
    tmp_1172_fu_12887_p3 = esl_concat<5,1>(co55_reg_5058.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1173_fu_12899_p2() {
    tmp_1173_fu_12899_p2 = (!p_shl366_cast_fu_12895_p1.read().is_01() || !p_shl365_cast_fu_12883_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl366_cast_fu_12895_p1.read()) + sc_biguint<10>(p_shl365_cast_fu_12883_p1.read()));
}

void ShuffleNetV2::thread_tmp_1174_fu_12998_p1() {
    tmp_1174_fu_12998_p1 = co56_reg_5091.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1175_fu_12921_p2() {
    tmp_1175_fu_12921_p2 = (!tmp_400_cast_fu_12917_p1.read().is_01() || !tmp_1173_reg_35853.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_400_cast_fu_12917_p1.read()) + sc_biguint<10>(tmp_1173_reg_35853.read()));
}

void ShuffleNetV2::thread_tmp_1176_fu_12926_p3() {
    tmp_1176_fu_12926_p3 = esl_concat<10,4>(tmp_1175_fu_12921_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1177_fu_12938_p3() {
    tmp_1177_fu_12938_p3 = esl_concat<10,1>(tmp_1175_fu_12921_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1178_fu_12950_p2() {
    tmp_1178_fu_12950_p2 = (!p_shl367_cast_fu_12934_p1.read().is_01() || !p_shl368_cast_fu_12946_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl367_cast_fu_12934_p1.read()) + sc_biguint<15>(p_shl368_cast_fu_12946_p1.read()));
}

void ShuffleNetV2::thread_tmp_1179_cast_fu_32807_p1() {
    tmp_1179_cast_fu_32807_p1 = esl_zext<8,3>(p_lshr_f26_cast_fu_32797_p4.read());
}

void ShuffleNetV2::thread_tmp_1179_fu_12972_p2() {
    tmp_1179_fu_12972_p2 = (!tmp_1178_reg_35866.read().is_01() || !tmp_404_cast_fu_12968_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1178_reg_35866.read()) + sc_biguint<15>(tmp_404_cast_fu_12968_p1.read()));
}

void ShuffleNetV2::thread_tmp_1180_fu_13330_p1() {
    tmp_1180_fu_13330_p1 = k_reg_5135.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1181_fu_13097_p1() {
    tmp_1181_fu_13097_p1 = i36_reg_5113.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1182_cast_fu_33109_p1() {
    tmp_1182_cast_fu_33109_p1 = esl_sext<12,8>(tmp_1034_fu_33103_p2.read());
}

void ShuffleNetV2::thread_tmp_1182_fu_13131_p1() {
    tmp_1182_fu_13131_p1 = tmp_410_fu_13125_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1183_cast_fu_33147_p1() {
    tmp_1183_cast_fu_33147_p1 = esl_sext<32,8>(tmp_1035_reg_43148.read());
}

void ShuffleNetV2::thread_tmp_1183_fu_13231_p3() {
    tmp_1183_fu_13231_p3 = esl_concat<9,5>(tmp_413_reg_35943.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1184_fu_13242_p3() {
    tmp_1184_fu_13242_p3 = esl_concat<9,3>(tmp_413_reg_35943.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1185_fu_13253_p2() {
    tmp_1185_fu_13253_p2 = (!p_shl371_cast_fu_13238_p1.read().is_01() || !p_shl372_cast_fu_13249_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl371_cast_fu_13238_p1.read()) - sc_biguint<15>(p_shl372_cast_fu_13249_p1.read()));
}

void ShuffleNetV2::thread_tmp_1186_fu_13263_p2() {
    tmp_1186_fu_13263_p2 = (!tmp_403_cast_reg_35930.read().is_01() || !tmp_1337_cast_fu_13259_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_403_cast_reg_35930.read()) + sc_bigint<16>(tmp_1337_cast_fu_13259_p1.read()));
}

void ShuffleNetV2::thread_tmp_1187_cast_fu_10646_p1() {
    tmp_1187_cast_fu_10646_p1 = esl_sext<64,8>(tmp_898_fu_10641_p2.read());
}

void ShuffleNetV2::thread_tmp_1187_fu_13200_p3() {
    tmp_1187_fu_13200_p3 = esl_concat<4,6>(tmp_414_fu_13190_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1188_cast_fu_10481_p1() {
    tmp_1188_cast_fu_10481_p1 = esl_zext<64,15>(tmp_899_fu_10476_p2.read());
}

void ShuffleNetV2::thread_tmp_1188_fu_13208_p3() {
    tmp_1188_fu_13208_p3 = esl_concat<4,4>(tmp_414_fu_13190_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1189_cast_fu_10491_p1() {
    tmp_1189_cast_fu_10491_p1 = esl_zext<64,14>(tmp_902_reg_34924.read());
}

void ShuffleNetV2::thread_tmp_1189_fu_13220_p2() {
    tmp_1189_fu_13220_p2 = (!tmp_1187_fu_13200_p3.read().is_01() || !p_shl370_cast_fu_13216_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1187_fu_13200_p3.read()) - sc_bigint<10>(p_shl370_cast_fu_13216_p1.read()));
}

void ShuffleNetV2::thread_tmp_1190_fu_13226_p2() {
    tmp_1190_fu_13226_p2 = (!tmp_402_cast_reg_35925.read().is_01() || !tmp_1189_fu_13220_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_402_cast_reg_35925.read()) + sc_biguint<10>(tmp_1189_fu_13220_p2.read()));
}

void ShuffleNetV2::thread_tmp_1191_cast_fu_10713_p1() {
    tmp_1191_cast_fu_10713_p1 = esl_sext<9,8>(tmp_914_fu_10707_p2.read());
}

void ShuffleNetV2::thread_tmp_1191_fu_13799_p1() {
    tmp_1191_fu_13799_p1 = co60_reg_5212.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1192_fu_13699_p1() {
    tmp_1192_fu_13699_p1 = k8_reg_5201.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1193_fu_13482_p1() {
    tmp_1193_fu_13482_p1 = i41_reg_5179.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1194_cast_fu_10785_p1() {
    tmp_1194_cast_fu_10785_p1 = esl_sext<64,10>(tmp_924_fu_10780_p2.read());
}

void ShuffleNetV2::thread_tmp_1194_fu_13543_p3() {
    tmp_1194_fu_13543_p3 = esl_concat<7,2>(tmp_427_reg_36108.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1195_cast_fu_32915_p1() {
    tmp_1195_cast_fu_32915_p1 = esl_sext<13,10>(tmp_1041_fu_32909_p2.read());
}

void ShuffleNetV2::thread_tmp_1195_fu_13550_p1() {
    tmp_1195_fu_13550_p1 = esl_sext<34,9>(tmp_1194_fu_13543_p3.read());
}

void ShuffleNetV2::thread_tmp_1196_fu_13558_p2() {
    tmp_1196_fu_13558_p2 = (!p_shl376_cast_fu_13554_p1.read().is_01() || !tmp_428_cast_fu_13539_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl376_cast_fu_13554_p1.read()) - sc_biguint<35>(tmp_428_cast_fu_13539_p1.read()));
}

void ShuffleNetV2::thread_tmp_1197_fu_13568_p2() {
    tmp_1197_fu_13568_p2 = (!tmp_1353_cast_fu_13564_p1.read().is_01() || !tmp_415_cast_reg_36077.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1353_cast_fu_13564_p1.read()) + sc_biguint<36>(tmp_415_cast_reg_36077.read()));
}

void ShuffleNetV2::thread_tmp_1198_fu_13573_p1() {
    tmp_1198_fu_13573_p1 = tmp_1197_fu_13568_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1199_cast_fu_33478_p1() {
    tmp_1199_cast_fu_33478_p1 = esl_sext<12,8>(tmp_1047_fu_33472_p2.read());
}

void ShuffleNetV2::thread_tmp_1199_fu_13577_p1() {
    tmp_1199_fu_13577_p1 = tmp_1197_fu_13568_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1200_cast_fu_33516_p1() {
    tmp_1200_cast_fu_33516_p1 = esl_sext<32,8>(tmp_1048_reg_43291.read());
}

void ShuffleNetV2::thread_tmp_1200_fu_13617_p2() {
    tmp_1200_fu_13617_p2 = (!p_shl375_cast_fu_13610_p3.read().is_01() || !tmp_1198_reg_36120.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl375_cast_fu_13610_p3.read()) - sc_biguint<10>(tmp_1198_reg_36120.read()));
}

void ShuffleNetV2::thread_tmp_1201_fu_13622_p2() {
    tmp_1201_fu_13622_p2 = (!tmp_1200_fu_13617_p2.read().is_01() || !tmp_422_cast_reg_36095.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1200_fu_13617_p2.read()) + sc_biguint<10>(tmp_422_cast_reg_36095.read()));
}

void ShuffleNetV2::thread_tmp_1202_fu_13584_p3() {
    tmp_1202_fu_13584_p3 = esl_concat<8,2>(tmp_429_reg_36114.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1203_fu_13595_p2() {
    tmp_1203_fu_13595_p2 = (!p_shl374_cast_fu_13591_p1.read().is_01() || !tmp_430_cast_fu_13581_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl374_cast_fu_13591_p1.read()) - sc_biguint<11>(tmp_430_cast_fu_13581_p1.read()));
}

void ShuffleNetV2::thread_tmp_1204_fu_13605_p2() {
    tmp_1204_fu_13605_p2 = (!tmp_1359_cast_fu_13601_p1.read().is_01() || !tmp_415_cast1_reg_36072.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1359_cast_fu_13601_p1.read()) + sc_biguint<12>(tmp_415_cast1_reg_36072.read()));
}

void ShuffleNetV2::thread_tmp_1205_fu_13630_p3() {
    tmp_1205_fu_13630_p3 = esl_concat<12,2>(tmp_1204_reg_36130.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1206_fu_13641_p2() {
    tmp_1206_fu_13641_p2 = (!p_shl219_fu_13637_p1.read().is_01() || !tmp_1360_cast_fu_13627_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl219_fu_13637_p1.read()) - sc_bigint<64>(tmp_1360_cast_fu_13627_p1.read()));
}

void ShuffleNetV2::thread_tmp_1207_cast_fu_33582_p1() {
    tmp_1207_cast_fu_33582_p1 = esl_zext<8,3>(p_lshr_f27_cast_fu_33572_p4.read());
}

void ShuffleNetV2::thread_tmp_1207_fu_13647_p2() {
    tmp_1207_fu_13647_p2 = (!tmp_1206_fu_13641_p2.read().is_01() || !tmp_422_reg_36090.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1206_fu_13641_p2.read()) + sc_biguint<64>(tmp_422_reg_36090.read()));
}

void ShuffleNetV2::thread_tmp_1208_fu_14131_p1() {
    tmp_1208_fu_14131_p1 = k9_reg_5256.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1209_cast1_fu_10854_p1() {
    tmp_1209_cast1_fu_10854_p1 = esl_zext<64,9>(tmp_973_reg_35071.read());
}

void ShuffleNetV2::thread_tmp_1209_cast_fu_33884_p1() {
    tmp_1209_cast_fu_33884_p1 = esl_sext<12,8>(tmp_1066_fu_33878_p2.read());
}

void ShuffleNetV2::thread_tmp_1209_fu_13898_p1() {
    tmp_1209_fu_13898_p1 = i43_reg_5234.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1210_cast_fu_33922_p1() {
    tmp_1210_cast_fu_33922_p1 = esl_sext<32,8>(tmp_1067_reg_43448.read());
}

void ShuffleNetV2::thread_tmp_1210_fu_13932_p1() {
    tmp_1210_fu_13932_p1 = tmp_436_fu_13926_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1211_cast_fu_11013_p1() {
    tmp_1211_cast_fu_11013_p1 = esl_sext<64,8>(tmp_985_fu_11008_p2.read());
}

void ShuffleNetV2::thread_tmp_1211_fu_14032_p3() {
    tmp_1211_fu_14032_p3 = esl_concat<9,5>(tmp_439_reg_36243.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1212_fu_14043_p3() {
    tmp_1212_fu_14043_p3 = esl_concat<9,3>(tmp_439_reg_36243.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1213_fu_14054_p2() {
    tmp_1213_fu_14054_p2 = (!p_shl379_cast_fu_14039_p1.read().is_01() || !p_shl380_cast_fu_14050_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl379_cast_fu_14039_p1.read()) - sc_biguint<15>(p_shl380_cast_fu_14050_p1.read()));
}

void ShuffleNetV2::thread_tmp_1214_fu_14064_p2() {
    tmp_1214_fu_14064_p2 = (!tmp_425_cast_reg_36230.read().is_01() || !tmp_1372_cast_fu_14060_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_425_cast_reg_36230.read()) + sc_bigint<16>(tmp_1372_cast_fu_14060_p1.read()));
}

void ShuffleNetV2::thread_tmp_1215_fu_14001_p3() {
    tmp_1215_fu_14001_p3 = esl_concat<4,6>(tmp_440_fu_13991_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1216_fu_14009_p3() {
    tmp_1216_fu_14009_p3 = esl_concat<4,4>(tmp_440_fu_13991_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1217_fu_14021_p2() {
    tmp_1217_fu_14021_p2 = (!tmp_1215_fu_14001_p3.read().is_01() || !p_shl378_cast_fu_14017_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1215_fu_14001_p3.read()) - sc_bigint<10>(p_shl378_cast_fu_14017_p1.read()));
}

void ShuffleNetV2::thread_tmp_1218_cast_fu_33261_p1() {
    tmp_1218_cast_fu_33261_p1 = esl_sext<11,8>(tmp_1061_fu_33255_p2.read());
}

void ShuffleNetV2::thread_tmp_1218_fu_14027_p2() {
    tmp_1218_fu_14027_p2 = (!tmp_424_cast_reg_36225.read().is_01() || !tmp_1217_fu_14021_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_424_cast_reg_36225.read()) + sc_biguint<10>(tmp_1217_fu_14021_p2.read()));
}

void ShuffleNetV2::thread_tmp_1219_cast_fu_33281_p1() {
    tmp_1219_cast_fu_33281_p1 = esl_sext<32,8>(tmp_1062_reg_43226.read());
}

void ShuffleNetV2::thread_tmp_1219_fu_14596_p1() {
    tmp_1219_fu_14596_p1 = co64_reg_5333.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1220_fu_14500_p1() {
    tmp_1220_fu_14500_p1 = k10_reg_5322.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1221_fu_14287_p1() {
    tmp_1221_fu_14287_p1 = i48_reg_5300.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1222_fu_14348_p3() {
    tmp_1222_fu_14348_p3 = esl_concat<7,2>(tmp_453_reg_36408.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1223_fu_14355_p1() {
    tmp_1223_fu_14355_p1 = esl_sext<34,9>(tmp_1222_fu_14348_p3.read());
}

void ShuffleNetV2::thread_tmp_1224_fu_14363_p2() {
    tmp_1224_fu_14363_p2 = (!p_shl384_cast_fu_14359_p1.read().is_01() || !tmp_454_cast1_fu_14344_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl384_cast_fu_14359_p1.read()) - sc_biguint<35>(tmp_454_cast1_fu_14344_p1.read()));
}

void ShuffleNetV2::thread_tmp_1225_fu_14373_p2() {
    tmp_1225_fu_14373_p2 = (!tmp_1388_cast_fu_14369_p1.read().is_01() || !tmp_441_cast_reg_36377.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1388_cast_fu_14369_p1.read()) + sc_biguint<36>(tmp_441_cast_reg_36377.read()));
}

void ShuffleNetV2::thread_tmp_1226_fu_14378_p1() {
    tmp_1226_fu_14378_p1 = tmp_1225_fu_14373_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1227_cast_fu_33690_p1() {
    tmp_1227_cast_fu_33690_p1 = esl_sext<13,10>(tmp_1073_fu_33684_p2.read());
}

void ShuffleNetV2::thread_tmp_1227_fu_14382_p1() {
    tmp_1227_fu_14382_p1 = tmp_1225_fu_14373_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1228_fu_14418_p2() {
    tmp_1228_fu_14418_p2 = (!p_shl383_cast_fu_14411_p3.read().is_01() || !tmp_1226_reg_36420.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl383_cast_fu_14411_p3.read()) - sc_biguint<10>(tmp_1226_reg_36420.read()));
}

void ShuffleNetV2::thread_tmp_1229_fu_14423_p2() {
    tmp_1229_fu_14423_p2 = (!tmp_1228_fu_14418_p2.read().is_01() || !tmp_448_cast_reg_36395.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1228_fu_14418_p2.read()) + sc_biguint<10>(tmp_448_cast_reg_36395.read()));
}

void ShuffleNetV2::thread_tmp_1230_fu_14389_p3() {
    tmp_1230_fu_14389_p3 = esl_concat<8,2>(tmp_455_reg_36414.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1231_fu_14400_p2() {
    tmp_1231_fu_14400_p2 = (!p_shl382_cast_fu_14396_p1.read().is_01() || !tmp_456_cast_fu_14386_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl382_cast_fu_14396_p1.read()) - sc_biguint<11>(tmp_456_cast_fu_14386_p1.read()));
}

void ShuffleNetV2::thread_tmp_1232_fu_14406_p2() {
    tmp_1232_fu_14406_p2 = (!tmp_1231_fu_14400_p2.read().is_01() || !tmp_441_cast1_reg_36372.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1231_fu_14400_p2.read()) + sc_biguint<11>(tmp_441_cast1_reg_36372.read()));
}

void ShuffleNetV2::thread_tmp_1233_fu_14431_p3() {
    tmp_1233_fu_14431_p3 = esl_concat<11,2>(tmp_1232_reg_36430.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1234_fu_14442_p2() {
    tmp_1234_fu_14442_p2 = (!p_shl221_fu_14438_p1.read().is_01() || !tmp_1395_cast_fu_14428_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl221_fu_14438_p1.read()) - sc_bigint<64>(tmp_1395_cast_fu_14428_p1.read()));
}

void ShuffleNetV2::thread_tmp_1235_fu_14448_p2() {
    tmp_1235_fu_14448_p2 = (!tmp_1234_fu_14442_p2.read().is_01() || !tmp_448_reg_36390.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1234_fu_14442_p2.read()) + sc_biguint<64>(tmp_448_reg_36390.read()));
}

void ShuffleNetV2::thread_tmp_1236_fu_15028_p3() {
    tmp_1236_fu_15028_p3 = esl_concat<6,3>(co66_reg_5388.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1237_fu_15040_p3() {
    tmp_1237_fu_15040_p3 = esl_concat<6,1>(co66_reg_5388.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1238_fu_15052_p2() {
    tmp_1238_fu_15052_p2 = (!p_shl392_cast_fu_15048_p1.read().is_01() || !p_shl391_cast_fu_15036_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl392_cast_fu_15048_p1.read()) + sc_biguint<10>(p_shl391_cast_fu_15036_p1.read()));
}

void ShuffleNetV2::thread_tmp_1239_cast_fu_11187_p1() {
    tmp_1239_cast_fu_11187_p1 = esl_zext<64,15>(tmp_1060_fu_11182_p2.read());
}

void ShuffleNetV2::thread_tmp_1239_fu_15064_p3() {
    tmp_1239_fu_15064_p3 = esl_concat<7,3>(tmp_457_fu_15058_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1240_fu_15076_p3() {
    tmp_1240_fu_15076_p3 = esl_concat<7,1>(tmp_457_fu_15058_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1241_cast_fu_11546_p1() {
    tmp_1241_cast_fu_11546_p1 = esl_sext<64,8>(tmp_1063_fu_11541_p2.read());
}

void ShuffleNetV2::thread_tmp_1241_fu_15088_p2() {
    tmp_1241_fu_15088_p2 = (!p_shl390_cast_fu_15084_p1.read().is_01() || !p_shl389_cast_fu_15072_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl390_cast_fu_15084_p1.read()) + sc_biguint<11>(p_shl389_cast_fu_15072_p1.read()));
}

void ShuffleNetV2::thread_tmp_1242_cast_fu_11391_p1() {
    tmp_1242_cast_fu_11391_p1 = esl_zext<64,14>(tmp_1065_reg_35257.read());
}

void ShuffleNetV2::thread_tmp_1242_fu_14932_p1() {
    tmp_1242_fu_14932_p1 = k12_reg_5377.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1243_cast_fu_11386_p1() {
    tmp_1243_cast_fu_11386_p1 = esl_zext<64,15>(tmp_1070_fu_11381_p2.read());
}

void ShuffleNetV2::thread_tmp_1243_fu_14695_p1() {
    tmp_1243_fu_14695_p1 = i50_reg_5355.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1244_fu_14729_p1() {
    tmp_1244_fu_14729_p1 = tmp_463_fu_14723_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1245_cast_fu_11613_p1() {
    tmp_1245_cast_fu_11613_p1 = esl_sext<9,8>(tmp_1079_fu_11607_p2.read());
}

void ShuffleNetV2::thread_tmp_1245_fu_14833_p3() {
    tmp_1245_fu_14833_p3 = esl_concat<10,5>(tmp_466_reg_36543.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1246_fu_14844_p3() {
    tmp_1246_fu_14844_p3 = esl_concat<10,3>(tmp_466_reg_36543.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1247_fu_14855_p2() {
    tmp_1247_fu_14855_p2 = (!p_shl387_cast_fu_14840_p1.read().is_01() || !p_shl388_cast_fu_14851_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl387_cast_fu_14840_p1.read()) - sc_biguint<16>(p_shl388_cast_fu_14851_p1.read()));
}

void ShuffleNetV2::thread_tmp_1248_cast_fu_11685_p1() {
    tmp_1248_cast_fu_11685_p1 = esl_sext<64,10>(tmp_1082_fu_11680_p2.read());
}

void ShuffleNetV2::thread_tmp_1248_fu_14865_p2() {
    tmp_1248_fu_14865_p2 = (!tmp_451_cast1_reg_36530.read().is_01() || !tmp_1413_cast_fu_14861_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_451_cast1_reg_36530.read()) + sc_bigint<17>(tmp_1413_cast_fu_14861_p1.read()));
}

void ShuffleNetV2::thread_tmp_1249_fu_14802_p3() {
    tmp_1249_fu_14802_p3 = esl_concat<4,6>(tmp_467_fu_14792_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1250_fu_14810_p3() {
    tmp_1250_fu_14810_p3 = esl_concat<4,4>(tmp_467_fu_14792_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1251_fu_14822_p2() {
    tmp_1251_fu_14822_p2 = (!tmp_1249_fu_14802_p3.read().is_01() || !p_shl386_cast_fu_14818_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1249_fu_14802_p3.read()) - sc_bigint<10>(p_shl386_cast_fu_14818_p1.read()));
}

void ShuffleNetV2::thread_tmp_1252_fu_14828_p2() {
    tmp_1252_fu_14828_p2 = (!tmp_450_cast_reg_36525.read().is_01() || !tmp_1251_fu_14822_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_450_cast_reg_36525.read()) + sc_biguint<10>(tmp_1251_fu_14822_p2.read()));
}

void ShuffleNetV2::thread_tmp_1253_fu_15239_p1() {
    tmp_1253_fu_15239_p1 = co68_reg_5421.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1254_fu_15114_p2() {
    tmp_1254_fu_15114_p2 = (!tmp_469_cast2_fu_15110_p1.read().is_01() || !tmp_1238_reg_36654.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_469_cast2_fu_15110_p1.read()) + sc_biguint<10>(tmp_1238_reg_36654.read()));
}

void ShuffleNetV2::thread_tmp_1255_fu_15119_p3() {
    tmp_1255_fu_15119_p3 = esl_concat<10,3>(tmp_1254_fu_15114_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1256_fu_15131_p3() {
    tmp_1256_fu_15131_p3 = esl_concat<10,1>(tmp_1254_fu_15114_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1257_fu_15143_p2() {
    tmp_1257_fu_15143_p2 = (!p_shl395_cast_fu_15127_p1.read().is_01() || !p_shl396_cast_fu_15139_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl395_cast_fu_15127_p1.read()) + sc_biguint<14>(p_shl396_cast_fu_15139_p1.read()));
}

void ShuffleNetV2::thread_tmp_1258_fu_15149_p2() {
    tmp_1258_fu_15149_p2 = (!tmp_469_cast1_fu_15106_p1.read().is_01() || !tmp_1241_reg_36659.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_469_cast1_fu_15106_p1.read()) + sc_biguint<11>(tmp_1241_reg_36659.read()));
}

void ShuffleNetV2::thread_tmp_1259_fu_15154_p3() {
    tmp_1259_fu_15154_p3 = esl_concat<11,3>(tmp_1258_fu_15149_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1260_fu_15166_p3() {
    tmp_1260_fu_15166_p3 = esl_concat<11,1>(tmp_1258_fu_15149_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1261_cast_fu_11754_p1() {
    tmp_1261_cast_fu_11754_p1 = esl_zext<64,9>(tmp_1101_reg_35409.read());
}

void ShuffleNetV2::thread_tmp_1261_fu_15178_p2() {
    tmp_1261_fu_15178_p2 = (!p_shl393_cast_fu_15162_p1.read().is_01() || !p_shl394_cast_fu_15174_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl393_cast_fu_15162_p1.read()) + sc_biguint<15>(p_shl394_cast_fu_15174_p1.read()));
}

void ShuffleNetV2::thread_tmp_1262_fu_15204_p2() {
    tmp_1262_fu_15204_p2 = (!tmp_1257_reg_36672.read().is_01() || !tmp_473_cast_fu_15200_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1257_reg_36672.read()) + sc_biguint<14>(tmp_473_cast_fu_15200_p1.read()));
}

void ShuffleNetV2::thread_tmp_1263_cast_fu_11926_p1() {
    tmp_1263_cast_fu_11926_p1 = esl_sext<64,8>(tmp_1102_fu_11921_p2.read());
}

void ShuffleNetV2::thread_tmp_1263_fu_15209_p2() {
    tmp_1263_fu_15209_p2 = (!tmp_1261_reg_36677.read().is_01() || !tmp_473_cast1_fu_15196_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1261_reg_36677.read()) + sc_biguint<15>(tmp_473_cast1_fu_15196_p1.read()));
}

void ShuffleNetV2::thread_tmp_1264_fu_15571_p1() {
    tmp_1264_fu_15571_p1 = k14_reg_5465.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1265_fu_15338_p1() {
    tmp_1265_fu_15338_p1 = i54_reg_5443.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1266_fu_15372_p1() {
    tmp_1266_fu_15372_p1 = tmp_479_fu_15366_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1267_fu_15472_p3() {
    tmp_1267_fu_15472_p3 = esl_concat<10,5>(tmp_482_reg_36754.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1268_fu_15483_p3() {
    tmp_1268_fu_15483_p3 = esl_concat<10,3>(tmp_482_reg_36754.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1269_fu_15494_p2() {
    tmp_1269_fu_15494_p2 = (!p_shl399_cast_fu_15479_p1.read().is_01() || !p_shl400_cast_fu_15490_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl399_cast_fu_15479_p1.read()) - sc_biguint<16>(p_shl400_cast_fu_15490_p1.read()));
}

void ShuffleNetV2::thread_tmp_1270_fu_15504_p2() {
    tmp_1270_fu_15504_p2 = (!tmp_472_cast_reg_36741.read().is_01() || !tmp_1441_cast_fu_15500_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_472_cast_reg_36741.read()) + sc_bigint<17>(tmp_1441_cast_fu_15500_p1.read()));
}

void ShuffleNetV2::thread_tmp_1271_fu_15441_p3() {
    tmp_1271_fu_15441_p3 = esl_concat<4,6>(tmp_483_fu_15431_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1272_fu_15449_p3() {
    tmp_1272_fu_15449_p3 = esl_concat<4,4>(tmp_483_fu_15431_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1273_fu_15461_p2() {
    tmp_1273_fu_15461_p2 = (!tmp_1271_fu_15441_p3.read().is_01() || !p_shl398_cast_fu_15457_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1271_fu_15441_p3.read()) - sc_bigint<10>(p_shl398_cast_fu_15457_p1.read()));
}

void ShuffleNetV2::thread_tmp_1274_fu_15467_p2() {
    tmp_1274_fu_15467_p2 = (!tmp_471_cast_reg_36736.read().is_01() || !tmp_1273_fu_15461_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_471_cast_reg_36736.read()) + sc_biguint<10>(tmp_1273_fu_15461_p2.read()));
}

void ShuffleNetV2::thread_tmp_1275_fu_16040_p1() {
    tmp_1275_fu_16040_p1 = co72_reg_5542.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1276_fu_15944_p1() {
    tmp_1276_fu_15944_p1 = k16_reg_5531.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1277_fu_15723_p1() {
    tmp_1277_fu_15723_p1 = i59_reg_5509.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1278_fu_15788_p3() {
    tmp_1278_fu_15788_p3 = esl_concat<7,2>(tmp_496_reg_36919.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1279_fu_15795_p1() {
    tmp_1279_fu_15795_p1 = esl_sext<34,9>(tmp_1278_fu_15788_p3.read());
}

void ShuffleNetV2::thread_tmp_1280_fu_15803_p2() {
    tmp_1280_fu_15803_p2 = (!p_shl404_cast_fu_15799_p1.read().is_01() || !tmp_497_cast_fu_15784_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl404_cast_fu_15799_p1.read()) - sc_biguint<35>(tmp_497_cast_fu_15784_p1.read()));
}

void ShuffleNetV2::thread_tmp_1281_fu_15813_p2() {
    tmp_1281_fu_15813_p2 = (!tmp_1457_cast_fu_15809_p1.read().is_01() || !tmp_484_cast_reg_36888.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1457_cast_fu_15809_p1.read()) + sc_biguint<36>(tmp_484_cast_reg_36888.read()));
}

void ShuffleNetV2::thread_tmp_1282_fu_15818_p1() {
    tmp_1282_fu_15818_p1 = tmp_1281_fu_15813_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1283_fu_15822_p1() {
    tmp_1283_fu_15822_p1 = tmp_1281_fu_15813_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1284_fu_15862_p2() {
    tmp_1284_fu_15862_p2 = (!p_shl403_cast_fu_15855_p3.read().is_01() || !tmp_1282_reg_36931.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl403_cast_fu_15855_p3.read()) - sc_biguint<10>(tmp_1282_reg_36931.read()));
}

void ShuffleNetV2::thread_tmp_1285_fu_15867_p2() {
    tmp_1285_fu_15867_p2 = (!tmp_1284_fu_15862_p2.read().is_01() || !tmp_491_cast_reg_36906.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1284_fu_15862_p2.read()) + sc_biguint<10>(tmp_491_cast_reg_36906.read()));
}

void ShuffleNetV2::thread_tmp_1286_fu_15829_p3() {
    tmp_1286_fu_15829_p3 = esl_concat<9,2>(tmp_498_reg_36925.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1287_fu_15840_p2() {
    tmp_1287_fu_15840_p2 = (!p_shl402_cast_fu_15836_p1.read().is_01() || !tmp_499_cast_fu_15826_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl402_cast_fu_15836_p1.read()) - sc_biguint<12>(tmp_499_cast_fu_15826_p1.read()));
}

void ShuffleNetV2::thread_tmp_1288_fu_15850_p2() {
    tmp_1288_fu_15850_p2 = (!tmp_1463_cast_fu_15846_p1.read().is_01() || !tmp_484_cast1_reg_36883.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1463_cast_fu_15846_p1.read()) + sc_biguint<13>(tmp_484_cast1_reg_36883.read()));
}

void ShuffleNetV2::thread_tmp_1289_fu_15875_p3() {
    tmp_1289_fu_15875_p3 = esl_concat<13,2>(tmp_1288_reg_36941.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1290_fu_15886_p2() {
    tmp_1290_fu_15886_p2 = (!p_shl226_fu_15882_p1.read().is_01() || !tmp_1464_cast_fu_15872_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl226_fu_15882_p1.read()) - sc_bigint<64>(tmp_1464_cast_fu_15872_p1.read()));
}

void ShuffleNetV2::thread_tmp_1291_cast_fu_12069_p1() {
    tmp_1291_cast_fu_12069_p1 = esl_zext<64,15>(tmp_1132_fu_12064_p2.read());
}

void ShuffleNetV2::thread_tmp_1291_fu_15892_p2() {
    tmp_1291_fu_15892_p2 = (!tmp_1290_fu_15886_p2.read().is_01() || !tmp_491_reg_36901.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1290_fu_15886_p2.read()) + sc_biguint<64>(tmp_491_reg_36901.read()));
}

void ShuffleNetV2::thread_tmp_1292_fu_16464_p3() {
    tmp_1292_fu_16464_p3 = esl_concat<6,3>(co74_reg_5597.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1293_cast_fu_12413_p1() {
    tmp_1293_cast_fu_12413_p1 = esl_sext<64,8>(tmp_1138_fu_12408_p2.read());
}

void ShuffleNetV2::thread_tmp_1293_fu_16476_p3() {
    tmp_1293_fu_16476_p3 = esl_concat<6,1>(co74_reg_5597.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1294_cast_fu_12273_p1() {
    tmp_1294_cast_fu_12273_p1 = esl_zext<64,14>(tmp_1139_reg_35595.read());
}

void ShuffleNetV2::thread_tmp_1294_fu_16488_p2() {
    tmp_1294_fu_16488_p2 = (!p_shl410_cast_fu_16484_p1.read().is_01() || !p_shl409_cast_fu_16472_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl410_cast_fu_16484_p1.read()) + sc_biguint<10>(p_shl409_cast_fu_16472_p1.read()));
}

void ShuffleNetV2::thread_tmp_1295_cast_fu_12268_p1() {
    tmp_1295_cast_fu_12268_p1 = esl_zext<64,15>(tmp_1140_fu_12263_p2.read());
}

void ShuffleNetV2::thread_tmp_1295_fu_16372_p1() {
    tmp_1295_fu_16372_p1 = k18_reg_5586.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1296_fu_16139_p1() {
    tmp_1296_fu_16139_p1 = i61_reg_5564.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1297_cast_fu_12503_p1() {
    tmp_1297_cast_fu_12503_p1 = esl_sext<9,8>(tmp_1144_fu_12497_p2.read());
}

void ShuffleNetV2::thread_tmp_1297_fu_16173_p1() {
    tmp_1297_fu_16173_p1 = tmp_505_fu_16167_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1298_fu_16273_p3() {
    tmp_1298_fu_16273_p3 = esl_concat<10,5>(tmp_508_reg_37054.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1299_fu_16284_p3() {
    tmp_1299_fu_16284_p3 = esl_concat<10,3>(tmp_508_reg_37054.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1300_cast_fu_12547_p1() {
    tmp_1300_cast_fu_12547_p1 = esl_sext<11,10>(tmp_1147_fu_12541_p2.read());
}

void ShuffleNetV2::thread_tmp_1300_fu_16295_p2() {
    tmp_1300_fu_16295_p2 = (!p_shl407_cast_fu_16280_p1.read().is_01() || !p_shl408_cast_fu_16291_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl407_cast_fu_16280_p1.read()) - sc_biguint<16>(p_shl408_cast_fu_16291_p1.read()));
}

void ShuffleNetV2::thread_tmp_1301_cast_fu_12591_p1() {
    tmp_1301_cast_fu_12591_p1 = esl_sext<64,11>(tmp_1148_fu_12586_p2.read());
}

void ShuffleNetV2::thread_tmp_1301_fu_16305_p2() {
    tmp_1301_fu_16305_p2 = (!tmp_494_cast_reg_37041.read().is_01() || !tmp_1479_cast_fu_16301_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_494_cast_reg_37041.read()) + sc_bigint<17>(tmp_1479_cast_fu_16301_p1.read()));
}

void ShuffleNetV2::thread_tmp_1302_fu_16242_p3() {
    tmp_1302_fu_16242_p3 = esl_concat<4,6>(tmp_509_fu_16232_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1303_fu_16250_p3() {
    tmp_1303_fu_16250_p3 = esl_concat<4,4>(tmp_509_fu_16232_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1304_fu_16262_p2() {
    tmp_1304_fu_16262_p2 = (!tmp_1302_fu_16242_p3.read().is_01() || !p_shl406_cast_fu_16258_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1302_fu_16242_p3.read()) - sc_bigint<10>(p_shl406_cast_fu_16258_p1.read()));
}

void ShuffleNetV2::thread_tmp_1305_fu_16268_p2() {
    tmp_1305_fu_16268_p2 = (!tmp_493_cast1_reg_37036.read().is_01() || !tmp_1304_fu_16262_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_493_cast1_reg_37036.read()) + sc_biguint<10>(tmp_1304_fu_16262_p2.read()));
}

void ShuffleNetV2::thread_tmp_1306_fu_16587_p3() {
    tmp_1306_fu_16587_p3 = esl_concat<6,3>(co76_reg_5630.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1307_fu_16599_p3() {
    tmp_1307_fu_16599_p3 = esl_concat<6,1>(co76_reg_5630.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1308_fu_16611_p2() {
    tmp_1308_fu_16611_p2 = (!p_shl416_cast_fu_16607_p1.read().is_01() || !p_shl415_cast_fu_16595_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl416_cast_fu_16607_p1.read()) + sc_biguint<10>(p_shl415_cast_fu_16595_p1.read()));
}

void ShuffleNetV2::thread_tmp_1309_fu_16623_p3() {
    tmp_1309_fu_16623_p3 = esl_concat<7,3>(tmp_510_fu_16617_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1310_fu_16635_p3() {
    tmp_1310_fu_16635_p3 = esl_concat<7,1>(tmp_510_fu_16617_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1311_fu_16647_p2() {
    tmp_1311_fu_16647_p2 = (!p_shl414_cast_fu_16643_p1.read().is_01() || !p_shl413_cast_fu_16631_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl414_cast_fu_16643_p1.read()) + sc_biguint<11>(p_shl413_cast_fu_16631_p1.read()));
}

void ShuffleNetV2::thread_tmp_1312_fu_16510_p2() {
    tmp_1312_fu_16510_p2 = (!tmp_511_cast_fu_16506_p1.read().is_01() || !tmp_1294_reg_37165.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_511_cast_fu_16506_p1.read()) + sc_biguint<10>(tmp_1294_reg_37165.read()));
}

void ShuffleNetV2::thread_tmp_1313_fu_16515_p3() {
    tmp_1313_fu_16515_p3 = esl_concat<10,3>(tmp_1312_fu_16510_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1314_fu_16527_p3() {
    tmp_1314_fu_16527_p3 = esl_concat<10,1>(tmp_1312_fu_16510_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1315_fu_16539_p2() {
    tmp_1315_fu_16539_p2 = (!p_shl411_cast_fu_16523_p1.read().is_01() || !p_shl412_cast_fu_16535_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl411_cast_fu_16523_p1.read()) + sc_biguint<15>(p_shl412_cast_fu_16535_p1.read()));
}

void ShuffleNetV2::thread_tmp_1316_cast_fu_12660_p1() {
    tmp_1316_cast_fu_12660_p1 = esl_zext<64,9>(tmp_1169_reg_35747.read());
}

void ShuffleNetV2::thread_tmp_1316_fu_16798_p1() {
    tmp_1316_fu_16798_p1 = co78_reg_5663.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1317_fu_16673_p2() {
    tmp_1317_fu_16673_p2 = (!tmp_513_cast_fu_16669_p1.read().is_01() || !tmp_1311_reg_37214.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_513_cast_fu_16669_p1.read()) + sc_biguint<11>(tmp_1311_reg_37214.read()));
}

void ShuffleNetV2::thread_tmp_1318_cast_fu_12834_p1() {
    tmp_1318_cast_fu_12834_p1 = esl_sext<64,8>(tmp_1170_fu_12829_p2.read());
}

void ShuffleNetV2::thread_tmp_1318_fu_16678_p3() {
    tmp_1318_fu_16678_p3 = esl_concat<11,3>(tmp_1317_fu_16673_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1319_fu_16690_p3() {
    tmp_1319_fu_16690_p3 = esl_concat<11,1>(tmp_1317_fu_16673_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1320_fu_16702_p2() {
    tmp_1320_fu_16702_p2 = (!p_shl419_cast_fu_16686_p1.read().is_01() || !p_shl420_cast_fu_16698_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl419_cast_fu_16686_p1.read()) + sc_biguint<15>(p_shl420_cast_fu_16698_p1.read()));
}

void ShuffleNetV2::thread_tmp_1321_fu_16708_p2() {
    tmp_1321_fu_16708_p2 = (!tmp_513_cast1_fu_16665_p1.read().is_01() || !tmp_1308_reg_37209.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_513_cast1_fu_16665_p1.read()) + sc_biguint<10>(tmp_1308_reg_37209.read()));
}

void ShuffleNetV2::thread_tmp_1322_fu_16713_p3() {
    tmp_1322_fu_16713_p3 = esl_concat<10,3>(tmp_1321_fu_16708_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1323_fu_16725_p3() {
    tmp_1323_fu_16725_p3 = esl_concat<10,1>(tmp_1321_fu_16708_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1324_fu_16737_p2() {
    tmp_1324_fu_16737_p2 = (!p_shl417_cast_fu_16721_p1.read().is_01() || !p_shl418_cast_fu_16733_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl417_cast_fu_16721_p1.read()) + sc_biguint<14>(p_shl418_cast_fu_16733_p1.read()));
}

void ShuffleNetV2::thread_tmp_1325_fu_16561_p2() {
    tmp_1325_fu_16561_p2 = (!tmp_1315_reg_37178.read().is_01() || !tmp_514_cast_fu_16557_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1315_reg_37178.read()) + sc_biguint<15>(tmp_514_cast_fu_16557_p1.read()));
}

void ShuffleNetV2::thread_tmp_1326_fu_16763_p2() {
    tmp_1326_fu_16763_p2 = (!tmp_1320_reg_37227.read().is_01() || !tmp_518_cast_fu_16759_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1320_reg_37227.read()) + sc_biguint<15>(tmp_518_cast_fu_16759_p1.read()));
}

void ShuffleNetV2::thread_tmp_1327_fu_16773_p2() {
    tmp_1327_fu_16773_p2 = (!tmp_1324_reg_37232.read().is_01() || !tmp_518_cast1_fu_16755_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1324_reg_37232.read()) + sc_biguint<14>(tmp_518_cast1_fu_16755_p1.read()));
}

void ShuffleNetV2::thread_tmp_1328_cast_fu_12977_p1() {
    tmp_1328_cast_fu_12977_p1 = esl_zext<64,15>(tmp_1179_fu_12972_p2.read());
}

void ShuffleNetV2::thread_tmp_1328_fu_17130_p1() {
    tmp_1328_fu_17130_p1 = k20_reg_5707.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1329_fu_16897_p1() {
    tmp_1329_fu_16897_p1 = i65_reg_5685.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1330_fu_16931_p1() {
    tmp_1330_fu_16931_p1 = tmp_524_fu_16925_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1331_fu_17031_p3() {
    tmp_1331_fu_17031_p3 = esl_concat<10,5>(tmp_527_reg_37309.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1332_fu_17042_p3() {
    tmp_1332_fu_17042_p3 = esl_concat<10,3>(tmp_527_reg_37309.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1333_fu_17053_p2() {
    tmp_1333_fu_17053_p2 = (!p_shl423_cast_fu_17038_p1.read().is_01() || !p_shl424_cast_fu_17049_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl423_cast_fu_17038_p1.read()) - sc_biguint<16>(p_shl424_cast_fu_17049_p1.read()));
}

void ShuffleNetV2::thread_tmp_1334_fu_17063_p2() {
    tmp_1334_fu_17063_p2 = (!tmp_517_cast_reg_37296.read().is_01() || !tmp_1518_cast_fu_17059_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_517_cast_reg_37296.read()) + sc_bigint<17>(tmp_1518_cast_fu_17059_p1.read()));
}

void ShuffleNetV2::thread_tmp_1335_fu_17000_p3() {
    tmp_1335_fu_17000_p3 = esl_concat<4,6>(tmp_528_fu_16990_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1336_fu_17008_p3() {
    tmp_1336_fu_17008_p3 = esl_concat<4,4>(tmp_528_fu_16990_p4.read(), ap_const_lv4_0);
}

}

