#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_1337_cast_fu_13259_p1() {
    tmp_1337_cast_fu_13259_p1 = esl_sext<16,15>(tmp_1185_fu_13253_p2.read());
}

void ShuffleNetV2::thread_tmp_1337_fu_17020_p2() {
    tmp_1337_fu_17020_p2 = (!tmp_1335_fu_17000_p3.read().is_01() || !p_shl422_cast_fu_17016_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1335_fu_17000_p3.read()) - sc_bigint<10>(p_shl422_cast_fu_17016_p1.read()));
}

void ShuffleNetV2::thread_tmp_1338_cast_fu_13268_p1() {
    tmp_1338_cast_fu_13268_p1 = esl_sext<33,16>(tmp_1186_fu_13263_p2.read());
}

void ShuffleNetV2::thread_tmp_1338_fu_17026_p2() {
    tmp_1338_fu_17026_p2 = (!tmp_516_cast_reg_37291.read().is_01() || !tmp_1337_fu_17020_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_516_cast_reg_37291.read()) + sc_biguint<10>(tmp_1337_fu_17020_p2.read()));
}

void ShuffleNetV2::thread_tmp_1339_fu_17599_p1() {
    tmp_1339_fu_17599_p1 = co82_reg_5784.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1340_fu_17499_p1() {
    tmp_1340_fu_17499_p1 = k22_reg_5773.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1341_fu_17282_p1() {
    tmp_1341_fu_17282_p1 = i70_reg_5751.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1342_fu_17343_p3() {
    tmp_1342_fu_17343_p3 = esl_concat<7,2>(tmp_541_reg_37474.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1343_fu_17350_p1() {
    tmp_1343_fu_17350_p1 = esl_sext<34,9>(tmp_1342_fu_17343_p3.read());
}

void ShuffleNetV2::thread_tmp_1344_cast_fu_13287_p1() {
    tmp_1344_cast_fu_13287_p1 = esl_sext<64,10>(tmp_1190_reg_35953.read());
}

void ShuffleNetV2::thread_tmp_1344_fu_17358_p2() {
    tmp_1344_fu_17358_p2 = (!p_shl428_cast_fu_17354_p1.read().is_01() || !tmp_542_cast_fu_17339_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl428_cast_fu_17354_p1.read()) - sc_biguint<35>(tmp_542_cast_fu_17339_p1.read()));
}

void ShuffleNetV2::thread_tmp_1345_fu_17368_p2() {
    tmp_1345_fu_17368_p2 = (!tmp_1534_cast_fu_17364_p1.read().is_01() || !tmp_529_cast_reg_37443.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1534_cast_fu_17364_p1.read()) + sc_biguint<36>(tmp_529_cast_reg_37443.read()));
}

void ShuffleNetV2::thread_tmp_1346_fu_17373_p1() {
    tmp_1346_fu_17373_p1 = tmp_1345_fu_17368_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1347_fu_17377_p1() {
    tmp_1347_fu_17377_p1 = tmp_1345_fu_17368_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1348_fu_17417_p2() {
    tmp_1348_fu_17417_p2 = (!p_shl427_cast_fu_17410_p3.read().is_01() || !tmp_1346_reg_37486.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl427_cast_fu_17410_p3.read()) - sc_biguint<10>(tmp_1346_reg_37486.read()));
}

void ShuffleNetV2::thread_tmp_1349_fu_17422_p2() {
    tmp_1349_fu_17422_p2 = (!tmp_1348_fu_17417_p2.read().is_01() || !tmp_536_cast_reg_37461.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1348_fu_17417_p2.read()) + sc_biguint<10>(tmp_536_cast_reg_37461.read()));
}

void ShuffleNetV2::thread_tmp_1350_fu_17384_p3() {
    tmp_1350_fu_17384_p3 = esl_concat<9,2>(tmp_543_reg_37480.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1351_fu_17395_p2() {
    tmp_1351_fu_17395_p2 = (!p_shl426_cast_fu_17391_p1.read().is_01() || !tmp_544_cast_fu_17381_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl426_cast_fu_17391_p1.read()) - sc_biguint<12>(tmp_544_cast_fu_17381_p1.read()));
}

void ShuffleNetV2::thread_tmp_1352_fu_17405_p2() {
    tmp_1352_fu_17405_p2 = (!tmp_1540_cast_fu_17401_p1.read().is_01() || !tmp_529_cast1_reg_37438.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1540_cast_fu_17401_p1.read()) + sc_biguint<13>(tmp_529_cast1_reg_37438.read()));
}

void ShuffleNetV2::thread_tmp_1353_cast_fu_13564_p1() {
    tmp_1353_cast_fu_13564_p1 = esl_sext<36,35>(tmp_1196_fu_13558_p2.read());
}

void ShuffleNetV2::thread_tmp_1353_fu_17430_p3() {
    tmp_1353_fu_17430_p3 = esl_concat<13,2>(tmp_1352_reg_37496.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1354_fu_17441_p2() {
    tmp_1354_fu_17441_p2 = (!p_shl231_fu_17437_p1.read().is_01() || !tmp_1541_cast_fu_17427_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl231_fu_17437_p1.read()) - sc_bigint<64>(tmp_1541_cast_fu_17427_p1.read()));
}

void ShuffleNetV2::thread_tmp_1355_fu_17447_p2() {
    tmp_1355_fu_17447_p2 = (!tmp_1354_fu_17441_p2.read().is_01() || !tmp_536_reg_37456.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1354_fu_17441_p2.read()) + sc_biguint<64>(tmp_536_reg_37456.read()));
}

void ShuffleNetV2::thread_tmp_1356_fu_18027_p3() {
    tmp_1356_fu_18027_p3 = esl_concat<6,3>(co84_reg_5839.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1357_cast_fu_13663_p1() {
    tmp_1357_cast_fu_13663_p1 = esl_zext<64,10>(tmp_1201_reg_36136.read());
}

void ShuffleNetV2::thread_tmp_1357_fu_18039_p3() {
    tmp_1357_fu_18039_p3 = esl_concat<6,1>(co84_reg_5839.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1358_fu_18051_p2() {
    tmp_1358_fu_18051_p2 = (!p_shl434_cast_fu_18047_p1.read().is_01() || !p_shl433_cast_fu_18035_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl434_cast_fu_18047_p1.read()) + sc_biguint<10>(p_shl433_cast_fu_18035_p1.read()));
}

void ShuffleNetV2::thread_tmp_1359_cast_fu_13601_p1() {
    tmp_1359_cast_fu_13601_p1 = esl_sext<12,11>(tmp_1203_fu_13595_p2.read());
}

void ShuffleNetV2::thread_tmp_1359_fu_17931_p1() {
    tmp_1359_fu_17931_p1 = k24_reg_5828.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1360_cast_fu_13627_p1() {
    tmp_1360_cast_fu_13627_p1 = esl_sext<64,12>(tmp_1204_reg_36130.read());
}

void ShuffleNetV2::thread_tmp_1360_fu_17698_p1() {
    tmp_1360_fu_17698_p1 = i72_reg_5806.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1361_fu_17732_p1() {
    tmp_1361_fu_17732_p1 = tmp_550_fu_17726_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1362_fu_17832_p3() {
    tmp_1362_fu_17832_p3 = esl_concat<10,5>(tmp_553_reg_37609.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1363_fu_17843_p3() {
    tmp_1363_fu_17843_p3 = esl_concat<10,3>(tmp_553_reg_37609.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1364_fu_17854_p2() {
    tmp_1364_fu_17854_p2 = (!p_shl431_cast_fu_17839_p1.read().is_01() || !p_shl432_cast_fu_17850_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl431_cast_fu_17839_p1.read()) - sc_biguint<16>(p_shl432_cast_fu_17850_p1.read()));
}

void ShuffleNetV2::thread_tmp_1365_fu_17864_p2() {
    tmp_1365_fu_17864_p2 = (!tmp_539_cast_reg_37596.read().is_01() || !tmp_1556_cast_fu_17860_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_539_cast_reg_37596.read()) + sc_bigint<17>(tmp_1556_cast_fu_17860_p1.read()));
}

void ShuffleNetV2::thread_tmp_1366_fu_17801_p3() {
    tmp_1366_fu_17801_p3 = esl_concat<4,6>(tmp_554_fu_17791_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1367_fu_17809_p3() {
    tmp_1367_fu_17809_p3 = esl_concat<4,4>(tmp_554_fu_17791_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1368_fu_17821_p2() {
    tmp_1368_fu_17821_p2 = (!tmp_1366_fu_17801_p3.read().is_01() || !p_shl430_cast_fu_17817_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1366_fu_17801_p3.read()) - sc_bigint<10>(p_shl430_cast_fu_17817_p1.read()));
}

void ShuffleNetV2::thread_tmp_1369_fu_17827_p2() {
    tmp_1369_fu_17827_p2 = (!tmp_538_cast1_reg_37591.read().is_01() || !tmp_1368_fu_17821_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_538_cast1_reg_37591.read()) + sc_biguint<10>(tmp_1368_fu_17821_p2.read()));
}

void ShuffleNetV2::thread_tmp_1370_fu_18150_p3() {
    tmp_1370_fu_18150_p3 = esl_concat<6,3>(co86_reg_5872.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1371_fu_18162_p3() {
    tmp_1371_fu_18162_p3 = esl_concat<6,1>(co86_reg_5872.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1372_cast_fu_14060_p1() {
    tmp_1372_cast_fu_14060_p1 = esl_sext<16,15>(tmp_1213_fu_14054_p2.read());
}

void ShuffleNetV2::thread_tmp_1372_fu_18174_p2() {
    tmp_1372_fu_18174_p2 = (!p_shl440_cast_fu_18170_p1.read().is_01() || !p_shl439_cast_fu_18158_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl440_cast_fu_18170_p1.read()) + sc_biguint<10>(p_shl439_cast_fu_18158_p1.read()));
}

void ShuffleNetV2::thread_tmp_1373_cast_fu_14069_p1() {
    tmp_1373_cast_fu_14069_p1 = esl_sext<33,16>(tmp_1214_fu_14064_p2.read());
}

void ShuffleNetV2::thread_tmp_1373_fu_18186_p3() {
    tmp_1373_fu_18186_p3 = esl_concat<7,3>(tmp_555_fu_18180_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1374_fu_18198_p3() {
    tmp_1374_fu_18198_p3 = esl_concat<7,1>(tmp_555_fu_18180_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1375_fu_18210_p2() {
    tmp_1375_fu_18210_p2 = (!p_shl438_cast_fu_18206_p1.read().is_01() || !p_shl437_cast_fu_18194_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl438_cast_fu_18206_p1.read()) + sc_biguint<11>(p_shl437_cast_fu_18194_p1.read()));
}

void ShuffleNetV2::thread_tmp_1376_fu_18073_p2() {
    tmp_1376_fu_18073_p2 = (!tmp_556_cast_fu_18069_p1.read().is_01() || !tmp_1358_reg_37720.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_556_cast_fu_18069_p1.read()) + sc_biguint<10>(tmp_1358_reg_37720.read()));
}

void ShuffleNetV2::thread_tmp_1377_fu_18078_p3() {
    tmp_1377_fu_18078_p3 = esl_concat<10,3>(tmp_1376_fu_18073_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1378_fu_18090_p3() {
    tmp_1378_fu_18090_p3 = esl_concat<10,1>(tmp_1376_fu_18073_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1379_cast_fu_14088_p1() {
    tmp_1379_cast_fu_14088_p1 = esl_sext<64,10>(tmp_1218_reg_36253.read());
}

void ShuffleNetV2::thread_tmp_1379_fu_18102_p2() {
    tmp_1379_fu_18102_p2 = (!p_shl435_cast_fu_18086_p1.read().is_01() || !p_shl436_cast_fu_18098_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl435_cast_fu_18086_p1.read()) + sc_biguint<15>(p_shl436_cast_fu_18098_p1.read()));
}

void ShuffleNetV2::thread_tmp_1380_fu_18361_p1() {
    tmp_1380_fu_18361_p1 = co88_reg_5905.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1381_fu_18236_p2() {
    tmp_1381_fu_18236_p2 = (!tmp_558_cast_fu_18232_p1.read().is_01() || !tmp_1375_reg_37769.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_558_cast_fu_18232_p1.read()) + sc_biguint<11>(tmp_1375_reg_37769.read()));
}

void ShuffleNetV2::thread_tmp_1382_fu_18241_p3() {
    tmp_1382_fu_18241_p3 = esl_concat<11,3>(tmp_1381_fu_18236_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1383_fu_18253_p3() {
    tmp_1383_fu_18253_p3 = esl_concat<11,1>(tmp_1381_fu_18236_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1384_fu_18265_p2() {
    tmp_1384_fu_18265_p2 = (!p_shl443_cast_fu_18249_p1.read().is_01() || !p_shl444_cast_fu_18261_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl443_cast_fu_18249_p1.read()) + sc_biguint<15>(p_shl444_cast_fu_18261_p1.read()));
}

void ShuffleNetV2::thread_tmp_1385_fu_18271_p2() {
    tmp_1385_fu_18271_p2 = (!tmp_558_cast1_fu_18228_p1.read().is_01() || !tmp_1372_reg_37764.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_558_cast1_fu_18228_p1.read()) + sc_biguint<10>(tmp_1372_reg_37764.read()));
}

void ShuffleNetV2::thread_tmp_1386_fu_18276_p3() {
    tmp_1386_fu_18276_p3 = esl_concat<10,3>(tmp_1385_fu_18271_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1387_fu_18288_p3() {
    tmp_1387_fu_18288_p3 = esl_concat<10,1>(tmp_1385_fu_18271_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1388_cast_fu_14369_p1() {
    tmp_1388_cast_fu_14369_p1 = esl_sext<36,35>(tmp_1224_fu_14363_p2.read());
}

void ShuffleNetV2::thread_tmp_1388_fu_18300_p2() {
    tmp_1388_fu_18300_p2 = (!p_shl441_cast_fu_18284_p1.read().is_01() || !p_shl442_cast_fu_18296_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl441_cast_fu_18284_p1.read()) + sc_biguint<14>(p_shl442_cast_fu_18296_p1.read()));
}

void ShuffleNetV2::thread_tmp_1389_fu_18124_p2() {
    tmp_1389_fu_18124_p2 = (!tmp_1379_reg_37733.read().is_01() || !tmp_559_cast_fu_18120_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1379_reg_37733.read()) + sc_biguint<15>(tmp_559_cast_fu_18120_p1.read()));
}

void ShuffleNetV2::thread_tmp_1390_fu_18326_p2() {
    tmp_1390_fu_18326_p2 = (!tmp_1384_reg_37782.read().is_01() || !tmp_563_cast_fu_18322_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1384_reg_37782.read()) + sc_biguint<15>(tmp_563_cast_fu_18322_p1.read()));
}

void ShuffleNetV2::thread_tmp_1391_fu_18336_p2() {
    tmp_1391_fu_18336_p2 = (!tmp_1388_reg_37787.read().is_01() || !tmp_563_cast1_fu_18318_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1388_reg_37787.read()) + sc_biguint<14>(tmp_563_cast1_fu_18318_p1.read()));
}

void ShuffleNetV2::thread_tmp_1392_cast_fu_14464_p1() {
    tmp_1392_cast_fu_14464_p1 = esl_zext<64,10>(tmp_1229_reg_36436.read());
}

void ShuffleNetV2::thread_tmp_1392_fu_18701_p1() {
    tmp_1392_fu_18701_p1 = k26_reg_5949.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1393_fu_18460_p1() {
    tmp_1393_fu_18460_p1 = i76_reg_5927.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1394_fu_18494_p1() {
    tmp_1394_fu_18494_p1 = tmp_569_fu_18488_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1395_cast_fu_14428_p1() {
    tmp_1395_cast_fu_14428_p1 = esl_sext<64,11>(tmp_1232_reg_36430.read());
}

void ShuffleNetV2::thread_tmp_1395_fu_18594_p3() {
    tmp_1395_fu_18594_p3 = esl_concat<9,5>(tmp_572_reg_37864.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1396_fu_18601_p1() {
    tmp_1396_fu_18601_p1 = esl_sext<15,14>(tmp_1395_fu_18594_p3.read());
}

void ShuffleNetV2::thread_tmp_1397_fu_18609_p3() {
    tmp_1397_fu_18609_p3 = esl_concat<9,3>(tmp_572_reg_37864.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1398_fu_18616_p1() {
    tmp_1398_fu_18616_p1 = esl_sext<13,12>(tmp_1397_fu_18609_p3.read());
}

void ShuffleNetV2::thread_tmp_1399_fu_18624_p2() {
    tmp_1399_fu_18624_p2 = (!p_shl447_cast_fu_18605_p1.read().is_01() || !p_shl448_cast_fu_18620_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl447_cast_fu_18605_p1.read()) - sc_biguint<16>(p_shl448_cast_fu_18620_p1.read()));
}

void ShuffleNetV2::thread_tmp_1400_fu_18634_p2() {
    tmp_1400_fu_18634_p2 = (!tmp_562_cast_reg_37851.read().is_01() || !tmp_1597_cast_fu_18630_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_562_cast_reg_37851.read()) + sc_bigint<17>(tmp_1597_cast_fu_18630_p1.read()));
}

void ShuffleNetV2::thread_tmp_1401_fu_18563_p3() {
    tmp_1401_fu_18563_p3 = esl_concat<4,6>(tmp_573_fu_18553_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1402_fu_18571_p3() {
    tmp_1402_fu_18571_p3 = esl_concat<4,4>(tmp_573_fu_18553_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1403_fu_18583_p2() {
    tmp_1403_fu_18583_p2 = (!tmp_1401_fu_18563_p3.read().is_01() || !p_shl446_cast_fu_18579_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1401_fu_18563_p3.read()) - sc_bigint<10>(p_shl446_cast_fu_18579_p1.read()));
}

void ShuffleNetV2::thread_tmp_1404_fu_18589_p2() {
    tmp_1404_fu_18589_p2 = (!tmp_561_cast_reg_37846.read().is_01() || !tmp_1403_fu_18583_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_561_cast_reg_37846.read()) + sc_biguint<10>(tmp_1403_fu_18583_p2.read()));
}

void ShuffleNetV2::thread_tmp_1405_fu_19170_p1() {
    tmp_1405_fu_19170_p1 = co92_reg_6026.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1406_fu_19070_p1() {
    tmp_1406_fu_19070_p1 = k28_reg_6015.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1407_fu_18857_p1() {
    tmp_1407_fu_18857_p1 = i81_reg_5993.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1408_fu_18918_p3() {
    tmp_1408_fu_18918_p3 = esl_concat<7,2>(tmp_586_reg_38029.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1409_fu_18925_p1() {
    tmp_1409_fu_18925_p1 = esl_sext<34,9>(tmp_1408_fu_18918_p3.read());
}

void ShuffleNetV2::thread_tmp_1410_fu_18933_p2() {
    tmp_1410_fu_18933_p2 = (!p_shl452_cast_fu_18929_p1.read().is_01() || !tmp_587_cast_fu_18914_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl452_cast_fu_18929_p1.read()) - sc_biguint<35>(tmp_587_cast_fu_18914_p1.read()));
}

void ShuffleNetV2::thread_tmp_1411_fu_18943_p2() {
    tmp_1411_fu_18943_p2 = (!tmp_1613_cast_fu_18939_p1.read().is_01() || !tmp_574_cast_reg_37998.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1613_cast_fu_18939_p1.read()) + sc_biguint<36>(tmp_574_cast_reg_37998.read()));
}

void ShuffleNetV2::thread_tmp_1412_fu_18948_p1() {
    tmp_1412_fu_18948_p1 = tmp_1411_fu_18943_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1413_cast_fu_14861_p1() {
    tmp_1413_cast_fu_14861_p1 = esl_sext<17,16>(tmp_1247_fu_14855_p2.read());
}

void ShuffleNetV2::thread_tmp_1413_fu_18952_p1() {
    tmp_1413_fu_18952_p1 = tmp_1411_fu_18943_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1414_cast_fu_14870_p1() {
    tmp_1414_cast_fu_14870_p1 = esl_sext<33,17>(tmp_1248_fu_14865_p2.read());
}

void ShuffleNetV2::thread_tmp_1414_fu_18988_p2() {
    tmp_1414_fu_18988_p2 = (!p_shl451_cast_fu_18981_p3.read().is_01() || !tmp_1412_reg_38041.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl451_cast_fu_18981_p3.read()) - sc_biguint<10>(tmp_1412_reg_38041.read()));
}

void ShuffleNetV2::thread_tmp_1415_fu_18993_p2() {
    tmp_1415_fu_18993_p2 = (!tmp_1414_fu_18988_p2.read().is_01() || !tmp_581_cast_reg_38016.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1414_fu_18988_p2.read()) + sc_biguint<10>(tmp_581_cast_reg_38016.read()));
}

void ShuffleNetV2::thread_tmp_1416_fu_18959_p3() {
    tmp_1416_fu_18959_p3 = esl_concat<9,2>(tmp_588_reg_38035.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1417_fu_18970_p2() {
    tmp_1417_fu_18970_p2 = (!p_shl450_cast_fu_18966_p1.read().is_01() || !tmp_589_cast_fu_18956_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl450_cast_fu_18966_p1.read()) - sc_biguint<12>(tmp_589_cast_fu_18956_p1.read()));
}

void ShuffleNetV2::thread_tmp_1418_fu_18976_p2() {
    tmp_1418_fu_18976_p2 = (!tmp_1417_fu_18970_p2.read().is_01() || !tmp_574_cast1_reg_37993.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1417_fu_18970_p2.read()) + sc_biguint<12>(tmp_574_cast1_reg_37993.read()));
}

void ShuffleNetV2::thread_tmp_1419_fu_19001_p3() {
    tmp_1419_fu_19001_p3 = esl_concat<12,2>(tmp_1418_reg_38051.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1420_cast_fu_14889_p1() {
    tmp_1420_cast_fu_14889_p1 = esl_sext<64,10>(tmp_1252_reg_36553.read());
}

void ShuffleNetV2::thread_tmp_1420_fu_19012_p2() {
    tmp_1420_fu_19012_p2 = (!p_shl237_fu_19008_p1.read().is_01() || !tmp_1620_cast_fu_18998_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl237_fu_19008_p1.read()) - sc_bigint<64>(tmp_1620_cast_fu_18998_p1.read()));
}

void ShuffleNetV2::thread_tmp_1421_fu_19018_p2() {
    tmp_1421_fu_19018_p2 = (!tmp_1420_fu_19012_p2.read().is_01() || !tmp_581_reg_38011.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1420_fu_19012_p2.read()) + sc_biguint<64>(tmp_581_reg_38011.read()));
}

void ShuffleNetV2::thread_tmp_1422_fu_19598_p3() {
    tmp_1422_fu_19598_p3 = esl_concat<6,3>(co94_reg_6081.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1423_fu_19610_p3() {
    tmp_1423_fu_19610_p3 = esl_concat<6,1>(co94_reg_6081.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1424_fu_19622_p2() {
    tmp_1424_fu_19622_p2 = (!p_shl458_cast_fu_19618_p1.read().is_01() || !p_shl457_cast_fu_19606_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl458_cast_fu_19618_p1.read()) + sc_biguint<10>(p_shl457_cast_fu_19606_p1.read()));
}

void ShuffleNetV2::thread_tmp_1425_fu_19502_p1() {
    tmp_1425_fu_19502_p1 = k30_reg_6070.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1426_fu_19269_p1() {
    tmp_1426_fu_19269_p1 = i83_reg_6048.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1427_fu_19303_p1() {
    tmp_1427_fu_19303_p1 = tmp_595_fu_19297_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1428_fu_19403_p3() {
    tmp_1428_fu_19403_p3 = esl_concat<11,5>(tmp_598_reg_38164.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1429_fu_19414_p3() {
    tmp_1429_fu_19414_p3 = esl_concat<11,3>(tmp_598_reg_38164.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1430_fu_19425_p2() {
    tmp_1430_fu_19425_p2 = (!p_shl455_cast_fu_19410_p1.read().is_01() || !p_shl456_cast_fu_19421_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl455_cast_fu_19410_p1.read()) - sc_biguint<17>(p_shl456_cast_fu_19421_p1.read()));
}

void ShuffleNetV2::thread_tmp_1431_cast_fu_15219_p1() {
    tmp_1431_cast_fu_15219_p1 = esl_zext<64,14>(tmp_1262_reg_36690.read());
}

void ShuffleNetV2::thread_tmp_1431_fu_19435_p2() {
    tmp_1431_fu_19435_p2 = (!tmp_584_cast_reg_38151.read().is_01() || !tmp_1635_cast_fu_19431_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_584_cast_reg_38151.read()) + sc_bigint<18>(tmp_1635_cast_fu_19431_p1.read()));
}

void ShuffleNetV2::thread_tmp_1432_cast_fu_15214_p1() {
    tmp_1432_cast_fu_15214_p1 = esl_zext<64,15>(tmp_1263_fu_15209_p2.read());
}

void ShuffleNetV2::thread_tmp_1432_fu_19372_p3() {
    tmp_1432_fu_19372_p3 = esl_concat<4,6>(tmp_599_fu_19362_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1433_fu_19380_p3() {
    tmp_1433_fu_19380_p3 = esl_concat<4,4>(tmp_599_fu_19362_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1434_fu_19392_p2() {
    tmp_1434_fu_19392_p2 = (!tmp_1432_fu_19372_p3.read().is_01() || !p_shl454_cast_fu_19388_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1432_fu_19372_p3.read()) - sc_bigint<10>(p_shl454_cast_fu_19388_p1.read()));
}

void ShuffleNetV2::thread_tmp_1435_fu_19398_p2() {
    tmp_1435_fu_19398_p2 = (!tmp_583_cast_reg_38146.read().is_01() || !tmp_1434_fu_19392_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_583_cast_reg_38146.read()) + sc_biguint<10>(tmp_1434_fu_19392_p2.read()));
}

void ShuffleNetV2::thread_tmp_1436_fu_19721_p3() {
    tmp_1436_fu_19721_p3 = esl_concat<6,3>(co96_reg_6114.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1437_fu_19733_p3() {
    tmp_1437_fu_19733_p3 = esl_concat<6,1>(co96_reg_6114.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1438_fu_19745_p2() {
    tmp_1438_fu_19745_p2 = (!p_shl464_cast_fu_19741_p1.read().is_01() || !p_shl463_cast_fu_19729_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl464_cast_fu_19741_p1.read()) + sc_biguint<10>(p_shl463_cast_fu_19729_p1.read()));
}

void ShuffleNetV2::thread_tmp_1439_fu_19757_p3() {
    tmp_1439_fu_19757_p3 = esl_concat<7,3>(tmp_600_fu_19751_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1440_fu_19769_p3() {
    tmp_1440_fu_19769_p3 = esl_concat<7,1>(tmp_600_fu_19751_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1441_cast_fu_15500_p1() {
    tmp_1441_cast_fu_15500_p1 = esl_sext<17,16>(tmp_1269_fu_15494_p2.read());
}

void ShuffleNetV2::thread_tmp_1441_fu_19781_p2() {
    tmp_1441_fu_19781_p2 = (!p_shl462_cast_fu_19777_p1.read().is_01() || !p_shl461_cast_fu_19765_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl462_cast_fu_19777_p1.read()) + sc_biguint<11>(p_shl461_cast_fu_19765_p1.read()));
}

void ShuffleNetV2::thread_tmp_1442_cast_fu_15509_p1() {
    tmp_1442_cast_fu_15509_p1 = esl_sext<33,17>(tmp_1270_fu_15504_p2.read());
}

void ShuffleNetV2::thread_tmp_1442_fu_19644_p2() {
    tmp_1442_fu_19644_p2 = (!tmp_601_cast_fu_19640_p1.read().is_01() || !tmp_1424_reg_38275.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_601_cast_fu_19640_p1.read()) + sc_biguint<10>(tmp_1424_reg_38275.read()));
}

void ShuffleNetV2::thread_tmp_1443_fu_19649_p3() {
    tmp_1443_fu_19649_p3 = esl_concat<10,3>(tmp_1442_fu_19644_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1444_fu_19661_p3() {
    tmp_1444_fu_19661_p3 = esl_concat<10,1>(tmp_1442_fu_19644_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1445_fu_19673_p2() {
    tmp_1445_fu_19673_p2 = (!p_shl459_cast_fu_19657_p1.read().is_01() || !p_shl460_cast_fu_19669_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl459_cast_fu_19657_p1.read()) + sc_biguint<15>(p_shl460_cast_fu_19669_p1.read()));
}

void ShuffleNetV2::thread_tmp_1446_fu_19932_p1() {
    tmp_1446_fu_19932_p1 = co98_reg_6147.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1447_fu_19807_p2() {
    tmp_1447_fu_19807_p2 = (!tmp_603_cast2_fu_19803_p1.read().is_01() || !tmp_1441_reg_38324.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_603_cast2_fu_19803_p1.read()) + sc_biguint<11>(tmp_1441_reg_38324.read()));
}

void ShuffleNetV2::thread_tmp_1448_cast_fu_15528_p1() {
    tmp_1448_cast_fu_15528_p1 = esl_sext<64,10>(tmp_1274_reg_36764.read());
}

void ShuffleNetV2::thread_tmp_1448_fu_19812_p3() {
    tmp_1448_fu_19812_p3 = esl_concat<11,3>(tmp_1447_fu_19807_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1449_fu_19824_p3() {
    tmp_1449_fu_19824_p3 = esl_concat<11,1>(tmp_1447_fu_19807_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1450_fu_19836_p2() {
    tmp_1450_fu_19836_p2 = (!p_shl467_cast_fu_19820_p1.read().is_01() || !p_shl468_cast_fu_19832_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl467_cast_fu_19820_p1.read()) + sc_biguint<15>(p_shl468_cast_fu_19832_p1.read()));
}

void ShuffleNetV2::thread_tmp_1451_fu_19842_p2() {
    tmp_1451_fu_19842_p2 = (!tmp_603_cast1_fu_19799_p1.read().is_01() || !tmp_1438_reg_38319.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_603_cast1_fu_19799_p1.read()) + sc_biguint<10>(tmp_1438_reg_38319.read()));
}

void ShuffleNetV2::thread_tmp_1452_fu_19847_p3() {
    tmp_1452_fu_19847_p3 = esl_concat<10,3>(tmp_1451_fu_19842_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1453_fu_19859_p3() {
    tmp_1453_fu_19859_p3 = esl_concat<10,1>(tmp_1451_fu_19842_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1454_fu_19871_p2() {
    tmp_1454_fu_19871_p2 = (!p_shl465_cast_fu_19855_p1.read().is_01() || !p_shl466_cast_fu_19867_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl465_cast_fu_19855_p1.read()) + sc_biguint<14>(p_shl466_cast_fu_19867_p1.read()));
}

void ShuffleNetV2::thread_tmp_1455_fu_19695_p2() {
    tmp_1455_fu_19695_p2 = (!tmp_1445_reg_38288.read().is_01() || !tmp_604_cast_fu_19691_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1445_reg_38288.read()) + sc_biguint<15>(tmp_604_cast_fu_19691_p1.read()));
}

void ShuffleNetV2::thread_tmp_1456_fu_19897_p2() {
    tmp_1456_fu_19897_p2 = (!tmp_1450_reg_38337.read().is_01() || !tmp_608_cast_fu_19893_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1450_reg_38337.read()) + sc_biguint<15>(tmp_608_cast_fu_19893_p1.read()));
}

void ShuffleNetV2::thread_tmp_1457_cast_fu_15809_p1() {
    tmp_1457_cast_fu_15809_p1 = esl_sext<36,35>(tmp_1280_fu_15803_p2.read());
}

void ShuffleNetV2::thread_tmp_1457_fu_19907_p2() {
    tmp_1457_fu_19907_p2 = (!tmp_1454_reg_38342.read().is_01() || !tmp_608_cast1_fu_19889_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1454_reg_38342.read()) + sc_biguint<14>(tmp_608_cast1_fu_19889_p1.read()));
}

void ShuffleNetV2::thread_tmp_1458_fu_20264_p1() {
    tmp_1458_fu_20264_p1 = k32_reg_6191.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1459_fu_20031_p1() {
    tmp_1459_fu_20031_p1 = i87_reg_6169.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1460_fu_20065_p1() {
    tmp_1460_fu_20065_p1 = tmp_614_fu_20059_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1461_cast_fu_15908_p1() {
    tmp_1461_cast_fu_15908_p1 = esl_zext<64,10>(tmp_1285_reg_36947.read());
}

void ShuffleNetV2::thread_tmp_1461_fu_20165_p3() {
    tmp_1461_fu_20165_p3 = esl_concat<11,5>(tmp_617_reg_38419.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1462_fu_20176_p3() {
    tmp_1462_fu_20176_p3 = esl_concat<11,3>(tmp_617_reg_38419.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1463_cast_fu_15846_p1() {
    tmp_1463_cast_fu_15846_p1 = esl_sext<13,12>(tmp_1287_fu_15840_p2.read());
}

void ShuffleNetV2::thread_tmp_1463_fu_20187_p2() {
    tmp_1463_fu_20187_p2 = (!p_shl471_cast_fu_20172_p1.read().is_01() || !p_shl472_cast_fu_20183_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl471_cast_fu_20172_p1.read()) - sc_biguint<17>(p_shl472_cast_fu_20183_p1.read()));
}

void ShuffleNetV2::thread_tmp_1464_cast_fu_15872_p1() {
    tmp_1464_cast_fu_15872_p1 = esl_sext<64,13>(tmp_1288_reg_36941.read());
}

void ShuffleNetV2::thread_tmp_1464_fu_20197_p2() {
    tmp_1464_fu_20197_p2 = (!tmp_607_cast_reg_38406.read().is_01() || !tmp_1674_cast_fu_20193_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_607_cast_reg_38406.read()) + sc_bigint<18>(tmp_1674_cast_fu_20193_p1.read()));
}

void ShuffleNetV2::thread_tmp_1465_fu_20134_p3() {
    tmp_1465_fu_20134_p3 = esl_concat<4,6>(tmp_618_fu_20124_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1466_fu_20142_p3() {
    tmp_1466_fu_20142_p3 = esl_concat<4,4>(tmp_618_fu_20124_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1467_fu_20154_p2() {
    tmp_1467_fu_20154_p2 = (!tmp_1465_fu_20134_p3.read().is_01() || !p_shl470_cast_fu_20150_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1465_fu_20134_p3.read()) - sc_bigint<10>(p_shl470_cast_fu_20150_p1.read()));
}

void ShuffleNetV2::thread_tmp_1468_fu_20160_p2() {
    tmp_1468_fu_20160_p2 = (!tmp_606_cast1_reg_38401.read().is_01() || !tmp_1467_fu_20154_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_606_cast1_reg_38401.read()) + sc_biguint<10>(tmp_1467_fu_20154_p2.read()));
}

void ShuffleNetV2::thread_tmp_1469_fu_20725_p1() {
    tmp_1469_fu_20725_p1 = co102_reg_6268.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1470_fu_20629_p1() {
    tmp_1470_fu_20629_p1 = k34_reg_6257.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1471_fu_20416_p1() {
    tmp_1471_fu_20416_p1 = i92_reg_6235.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1472_fu_20477_p3() {
    tmp_1472_fu_20477_p3 = esl_concat<7,2>(tmp_631_reg_38584.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1473_fu_20484_p1() {
    tmp_1473_fu_20484_p1 = esl_sext<34,9>(tmp_1472_fu_20477_p3.read());
}

void ShuffleNetV2::thread_tmp_1474_fu_20492_p2() {
    tmp_1474_fu_20492_p2 = (!p_shl476_cast_fu_20488_p1.read().is_01() || !tmp_632_cast_fu_20473_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl476_cast_fu_20488_p1.read()) - sc_biguint<35>(tmp_632_cast_fu_20473_p1.read()));
}

void ShuffleNetV2::thread_tmp_1475_fu_20502_p2() {
    tmp_1475_fu_20502_p2 = (!tmp_1690_cast_fu_20498_p1.read().is_01() || !tmp_619_cast_reg_38553.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1690_cast_fu_20498_p1.read()) + sc_biguint<36>(tmp_619_cast_reg_38553.read()));
}

void ShuffleNetV2::thread_tmp_1476_fu_20507_p1() {
    tmp_1476_fu_20507_p1 = tmp_1475_fu_20502_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1477_fu_20511_p1() {
    tmp_1477_fu_20511_p1 = tmp_1475_fu_20502_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1478_fu_20547_p2() {
    tmp_1478_fu_20547_p2 = (!p_shl475_cast_fu_20540_p3.read().is_01() || !tmp_1476_reg_38596.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl475_cast_fu_20540_p3.read()) - sc_biguint<10>(tmp_1476_reg_38596.read()));
}

void ShuffleNetV2::thread_tmp_1479_cast_fu_16301_p1() {
    tmp_1479_cast_fu_16301_p1 = esl_sext<17,16>(tmp_1300_fu_16295_p2.read());
}

void ShuffleNetV2::thread_tmp_1479_fu_20552_p2() {
    tmp_1479_fu_20552_p2 = (!tmp_1478_fu_20547_p2.read().is_01() || !tmp_626_cast_reg_38571.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1478_fu_20547_p2.read()) + sc_biguint<10>(tmp_626_cast_reg_38571.read()));
}

void ShuffleNetV2::thread_tmp_1480_cast_fu_16310_p1() {
    tmp_1480_cast_fu_16310_p1 = esl_sext<33,17>(tmp_1301_fu_16305_p2.read());
}

void ShuffleNetV2::thread_tmp_1480_fu_20518_p3() {
    tmp_1480_fu_20518_p3 = esl_concat<9,2>(tmp_633_reg_38590.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1481_fu_20529_p2() {
    tmp_1481_fu_20529_p2 = (!p_shl474_cast_fu_20525_p1.read().is_01() || !tmp_634_cast_fu_20515_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl474_cast_fu_20525_p1.read()) - sc_biguint<12>(tmp_634_cast_fu_20515_p1.read()));
}

void ShuffleNetV2::thread_tmp_1482_fu_20535_p2() {
    tmp_1482_fu_20535_p2 = (!tmp_1481_fu_20529_p2.read().is_01() || !tmp_619_cast1_reg_38548.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1481_fu_20529_p2.read()) + sc_biguint<12>(tmp_619_cast1_reg_38548.read()));
}

void ShuffleNetV2::thread_tmp_1483_fu_20560_p3() {
    tmp_1483_fu_20560_p3 = esl_concat<12,2>(tmp_1482_reg_38606.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1484_fu_20571_p2() {
    tmp_1484_fu_20571_p2 = (!p_shl240_fu_20567_p1.read().is_01() || !tmp_1697_cast_fu_20557_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl240_fu_20567_p1.read()) - sc_bigint<64>(tmp_1697_cast_fu_20557_p1.read()));
}

void ShuffleNetV2::thread_tmp_1485_fu_20577_p2() {
    tmp_1485_fu_20577_p2 = (!tmp_1484_fu_20571_p2.read().is_01() || !tmp_626_reg_38566.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1484_fu_20571_p2.read()) + sc_biguint<64>(tmp_626_reg_38566.read()));
}

void ShuffleNetV2::thread_tmp_1486_cast_fu_16329_p1() {
    tmp_1486_cast_fu_16329_p1 = esl_sext<64,10>(tmp_1305_reg_37064.read());
}

void ShuffleNetV2::thread_tmp_1486_fu_21149_p3() {
    tmp_1486_fu_21149_p3 = esl_concat<6,3>(co104_reg_6323.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1487_fu_21161_p3() {
    tmp_1487_fu_21161_p3 = esl_concat<6,1>(co104_reg_6323.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1488_fu_21173_p2() {
    tmp_1488_fu_21173_p2 = (!p_shl482_cast_fu_21169_p1.read().is_01() || !p_shl481_cast_fu_21157_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl482_cast_fu_21169_p1.read()) + sc_biguint<10>(p_shl481_cast_fu_21157_p1.read()));
}

void ShuffleNetV2::thread_tmp_1489_fu_21057_p1() {
    tmp_1489_fu_21057_p1 = k36_reg_6312.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1490_fu_20824_p1() {
    tmp_1490_fu_20824_p1 = i94_reg_6290.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1491_fu_20858_p1() {
    tmp_1491_fu_20858_p1 = tmp_640_fu_20852_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1492_fu_20958_p3() {
    tmp_1492_fu_20958_p3 = esl_concat<11,5>(tmp_643_reg_38719.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1493_fu_20969_p3() {
    tmp_1493_fu_20969_p3 = esl_concat<11,3>(tmp_643_reg_38719.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1494_fu_20980_p2() {
    tmp_1494_fu_20980_p2 = (!p_shl479_cast_fu_20965_p1.read().is_01() || !p_shl480_cast_fu_20976_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl479_cast_fu_20965_p1.read()) - sc_biguint<17>(p_shl480_cast_fu_20976_p1.read()));
}

void ShuffleNetV2::thread_tmp_1495_fu_20990_p2() {
    tmp_1495_fu_20990_p2 = (!tmp_629_cast_reg_38706.read().is_01() || !tmp_1712_cast_fu_20986_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_629_cast_reg_38706.read()) + sc_bigint<18>(tmp_1712_cast_fu_20986_p1.read()));
}

void ShuffleNetV2::thread_tmp_1496_fu_20927_p3() {
    tmp_1496_fu_20927_p3 = esl_concat<4,6>(tmp_644_fu_20917_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1497_fu_20935_p3() {
    tmp_1497_fu_20935_p3 = esl_concat<4,4>(tmp_644_fu_20917_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1498_fu_20947_p2() {
    tmp_1498_fu_20947_p2 = (!tmp_1496_fu_20927_p3.read().is_01() || !p_shl478_cast_fu_20943_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1496_fu_20927_p3.read()) - sc_bigint<10>(p_shl478_cast_fu_20943_p1.read()));
}

void ShuffleNetV2::thread_tmp_1499_fu_20953_p2() {
    tmp_1499_fu_20953_p2 = (!tmp_628_cast_reg_38701.read().is_01() || !tmp_1498_fu_20947_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_628_cast_reg_38701.read()) + sc_biguint<10>(tmp_1498_fu_20947_p2.read()));
}

void ShuffleNetV2::thread_tmp_1500_fu_21272_p3() {
    tmp_1500_fu_21272_p3 = esl_concat<6,3>(co106_reg_6356.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1501_fu_21284_p3() {
    tmp_1501_fu_21284_p3 = esl_concat<6,1>(co106_reg_6356.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1502_fu_21296_p2() {
    tmp_1502_fu_21296_p2 = (!p_shl488_cast_fu_21292_p1.read().is_01() || !p_shl487_cast_fu_21280_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl488_cast_fu_21292_p1.read()) + sc_biguint<10>(p_shl487_cast_fu_21280_p1.read()));
}

void ShuffleNetV2::thread_tmp_1503_fu_21308_p3() {
    tmp_1503_fu_21308_p3 = esl_concat<7,3>(tmp_645_fu_21302_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1504_fu_21320_p3() {
    tmp_1504_fu_21320_p3 = esl_concat<7,1>(tmp_645_fu_21302_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1505_fu_21332_p2() {
    tmp_1505_fu_21332_p2 = (!p_shl486_cast_fu_21328_p1.read().is_01() || !p_shl485_cast_fu_21316_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl486_cast_fu_21328_p1.read()) + sc_biguint<11>(p_shl485_cast_fu_21316_p1.read()));
}

void ShuffleNetV2::thread_tmp_1506_fu_21195_p2() {
    tmp_1506_fu_21195_p2 = (!tmp_646_cast_fu_21191_p1.read().is_01() || !tmp_1488_reg_38830.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_646_cast_fu_21191_p1.read()) + sc_biguint<10>(tmp_1488_reg_38830.read()));
}

void ShuffleNetV2::thread_tmp_1507_cast_fu_16566_p1() {
    tmp_1507_cast_fu_16566_p1 = esl_zext<64,15>(tmp_1325_fu_16561_p2.read());
}

void ShuffleNetV2::thread_tmp_1507_fu_21200_p3() {
    tmp_1507_fu_21200_p3 = esl_concat<10,3>(tmp_1506_fu_21195_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1508_cast_fu_16768_p1() {
    tmp_1508_cast_fu_16768_p1 = esl_zext<64,15>(tmp_1326_fu_16763_p2.read());
}

void ShuffleNetV2::thread_tmp_1508_fu_21212_p3() {
    tmp_1508_fu_21212_p3 = esl_concat<10,1>(tmp_1506_fu_21195_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1509_cast_fu_16778_p1() {
    tmp_1509_cast_fu_16778_p1 = esl_zext<64,14>(tmp_1327_reg_37250.read());
}

void ShuffleNetV2::thread_tmp_1509_fu_21224_p2() {
    tmp_1509_fu_21224_p2 = (!p_shl483_cast_fu_21208_p1.read().is_01() || !p_shl484_cast_fu_21220_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl483_cast_fu_21208_p1.read()) + sc_biguint<15>(p_shl484_cast_fu_21220_p1.read()));
}

void ShuffleNetV2::thread_tmp_1510_fu_21483_p1() {
    tmp_1510_fu_21483_p1 = co108_reg_6389.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1511_fu_21358_p2() {
    tmp_1511_fu_21358_p2 = (!tmp_648_cast_fu_21354_p1.read().is_01() || !tmp_1505_reg_38879.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_648_cast_fu_21354_p1.read()) + sc_biguint<11>(tmp_1505_reg_38879.read()));
}

void ShuffleNetV2::thread_tmp_1512_fu_21363_p3() {
    tmp_1512_fu_21363_p3 = esl_concat<11,3>(tmp_1511_fu_21358_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1513_fu_21375_p3() {
    tmp_1513_fu_21375_p3 = esl_concat<11,1>(tmp_1511_fu_21358_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1514_fu_21387_p2() {
    tmp_1514_fu_21387_p2 = (!p_shl491_cast_fu_21371_p1.read().is_01() || !p_shl492_cast_fu_21383_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl491_cast_fu_21371_p1.read()) + sc_biguint<15>(p_shl492_cast_fu_21383_p1.read()));
}

void ShuffleNetV2::thread_tmp_1515_fu_21393_p2() {
    tmp_1515_fu_21393_p2 = (!tmp_648_cast1_fu_21350_p1.read().is_01() || !tmp_1502_reg_38874.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_648_cast1_fu_21350_p1.read()) + sc_biguint<10>(tmp_1502_reg_38874.read()));
}

void ShuffleNetV2::thread_tmp_1516_fu_21398_p3() {
    tmp_1516_fu_21398_p3 = esl_concat<10,3>(tmp_1515_fu_21393_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1517_fu_21410_p3() {
    tmp_1517_fu_21410_p3 = esl_concat<10,1>(tmp_1515_fu_21393_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1518_cast_fu_17059_p1() {
    tmp_1518_cast_fu_17059_p1 = esl_sext<17,16>(tmp_1333_fu_17053_p2.read());
}

void ShuffleNetV2::thread_tmp_1518_fu_21422_p2() {
    tmp_1518_fu_21422_p2 = (!p_shl489_cast_fu_21406_p1.read().is_01() || !p_shl490_cast_fu_21418_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl489_cast_fu_21406_p1.read()) + sc_biguint<14>(p_shl490_cast_fu_21418_p1.read()));
}

void ShuffleNetV2::thread_tmp_1519_cast_fu_17068_p1() {
    tmp_1519_cast_fu_17068_p1 = esl_sext<33,17>(tmp_1334_fu_17063_p2.read());
}

void ShuffleNetV2::thread_tmp_1519_fu_21246_p2() {
    tmp_1519_fu_21246_p2 = (!tmp_1509_reg_38843.read().is_01() || !tmp_649_cast_fu_21242_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1509_reg_38843.read()) + sc_biguint<15>(tmp_649_cast_fu_21242_p1.read()));
}

void ShuffleNetV2::thread_tmp_1520_fu_21448_p2() {
    tmp_1520_fu_21448_p2 = (!tmp_1514_reg_38892.read().is_01() || !tmp_653_cast_fu_21444_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1514_reg_38892.read()) + sc_biguint<15>(tmp_653_cast_fu_21444_p1.read()));
}

void ShuffleNetV2::thread_tmp_1521_fu_21458_p2() {
    tmp_1521_fu_21458_p2 = (!tmp_1518_reg_38897.read().is_01() || !tmp_653_cast1_fu_21440_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1518_reg_38897.read()) + sc_biguint<14>(tmp_653_cast1_fu_21440_p1.read()));
}

void ShuffleNetV2::thread_tmp_1522_fu_21815_p1() {
    tmp_1522_fu_21815_p1 = k38_reg_6433.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1523_fu_21582_p1() {
    tmp_1523_fu_21582_p1 = i98_reg_6411.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1524_fu_21616_p1() {
    tmp_1524_fu_21616_p1 = tmp_659_fu_21610_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1525_cast_fu_17087_p1() {
    tmp_1525_cast_fu_17087_p1 = esl_sext<64,10>(tmp_1338_reg_37319.read());
}

void ShuffleNetV2::thread_tmp_1525_fu_21716_p3() {
    tmp_1525_fu_21716_p3 = esl_concat<11,5>(tmp_662_reg_38974.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1526_fu_21727_p3() {
    tmp_1526_fu_21727_p3 = esl_concat<11,3>(tmp_662_reg_38974.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1527_fu_21738_p2() {
    tmp_1527_fu_21738_p2 = (!p_shl495_cast_fu_21723_p1.read().is_01() || !p_shl496_cast_fu_21734_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl495_cast_fu_21723_p1.read()) - sc_biguint<17>(p_shl496_cast_fu_21734_p1.read()));
}

void ShuffleNetV2::thread_tmp_1528_fu_21748_p2() {
    tmp_1528_fu_21748_p2 = (!tmp_652_cast_reg_38961.read().is_01() || !tmp_1751_cast_fu_21744_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_652_cast_reg_38961.read()) + sc_bigint<18>(tmp_1751_cast_fu_21744_p1.read()));
}

void ShuffleNetV2::thread_tmp_1529_fu_21685_p3() {
    tmp_1529_fu_21685_p3 = esl_concat<4,6>(tmp_663_fu_21675_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1530_fu_21693_p3() {
    tmp_1530_fu_21693_p3 = esl_concat<4,4>(tmp_663_fu_21675_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1531_fu_21705_p2() {
    tmp_1531_fu_21705_p2 = (!tmp_1529_fu_21685_p3.read().is_01() || !p_shl494_cast_fu_21701_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1529_fu_21685_p3.read()) - sc_bigint<10>(p_shl494_cast_fu_21701_p1.read()));
}

void ShuffleNetV2::thread_tmp_1532_fu_21711_p2() {
    tmp_1532_fu_21711_p2 = (!tmp_651_cast_reg_38956.read().is_01() || !tmp_1531_fu_21705_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_651_cast_reg_38956.read()) + sc_biguint<10>(tmp_1531_fu_21705_p2.read()));
}

void ShuffleNetV2::thread_tmp_1533_fu_22284_p1() {
    tmp_1533_fu_22284_p1 = co112_reg_6510.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1534_cast_fu_17364_p1() {
    tmp_1534_cast_fu_17364_p1 = esl_sext<36,35>(tmp_1344_fu_17358_p2.read());
}

void ShuffleNetV2::thread_tmp_1534_fu_22188_p1() {
    tmp_1534_fu_22188_p1 = k40_reg_6499.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1535_fu_21967_p1() {
    tmp_1535_fu_21967_p1 = i103_reg_6477.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1536_fu_22028_p3() {
    tmp_1536_fu_22028_p3 = esl_concat<7,2>(tmp_676_reg_39139.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1537_fu_22035_p1() {
    tmp_1537_fu_22035_p1 = esl_sext<34,9>(tmp_1536_fu_22028_p3.read());
}

void ShuffleNetV2::thread_tmp_1538_cast_fu_17463_p1() {
    tmp_1538_cast_fu_17463_p1 = esl_zext<64,10>(tmp_1349_reg_37502.read());
}

void ShuffleNetV2::thread_tmp_1538_fu_22043_p2() {
    tmp_1538_fu_22043_p2 = (!p_shl500_cast_fu_22039_p1.read().is_01() || !tmp_677_cast_fu_22024_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl500_cast_fu_22039_p1.read()) - sc_biguint<35>(tmp_677_cast_fu_22024_p1.read()));
}

void ShuffleNetV2::thread_tmp_1539_fu_22053_p2() {
    tmp_1539_fu_22053_p2 = (!tmp_1767_cast_fu_22049_p1.read().is_01() || !tmp_664_cast2_reg_39108.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1767_cast_fu_22049_p1.read()) + sc_biguint<36>(tmp_664_cast2_reg_39108.read()));
}

void ShuffleNetV2::thread_tmp_1540_cast_fu_17401_p1() {
    tmp_1540_cast_fu_17401_p1 = esl_sext<13,12>(tmp_1351_fu_17395_p2.read());
}

void ShuffleNetV2::thread_tmp_1540_fu_22058_p1() {
    tmp_1540_fu_22058_p1 = tmp_1539_fu_22053_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1541_cast_fu_17427_p1() {
    tmp_1541_cast_fu_17427_p1 = esl_sext<64,13>(tmp_1352_reg_37496.read());
}

void ShuffleNetV2::thread_tmp_1541_fu_22062_p1() {
    tmp_1541_fu_22062_p1 = tmp_1539_fu_22053_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1542_fu_22106_p2() {
    tmp_1542_fu_22106_p2 = (!p_shl499_cast_fu_22099_p3.read().is_01() || !tmp_1540_reg_39151.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl499_cast_fu_22099_p3.read()) - sc_biguint<10>(tmp_1540_reg_39151.read()));
}

void ShuffleNetV2::thread_tmp_1543_fu_22111_p2() {
    tmp_1543_fu_22111_p2 = (!tmp_1542_fu_22106_p2.read().is_01() || !tmp_671_cast_reg_39126.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1542_fu_22106_p2.read()) + sc_biguint<10>(tmp_671_cast_reg_39126.read()));
}

void ShuffleNetV2::thread_tmp_1544_fu_22073_p3() {
    tmp_1544_fu_22073_p3 = esl_concat<8,2>(tmp_678_reg_39145.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1545_fu_22080_p1() {
    tmp_1545_fu_22080_p1 = esl_sext<11,10>(tmp_1544_fu_22073_p3.read());
}

void ShuffleNetV2::thread_tmp_1546_fu_22088_p2() {
    tmp_1546_fu_22088_p2 = (!p_shl498_cast_fu_22084_p1.read().is_01() || !tmp_679_cast_fu_22069_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl498_cast_fu_22084_p1.read()) - sc_biguint<12>(tmp_679_cast_fu_22069_p1.read()));
}

void ShuffleNetV2::thread_tmp_1547_fu_22094_p2() {
    tmp_1547_fu_22094_p2 = (!tmp_1546_fu_22088_p2.read().is_01() || !tmp_664_cast1_reg_39103.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1546_fu_22088_p2.read()) + sc_biguint<12>(tmp_664_cast1_reg_39103.read()));
}

void ShuffleNetV2::thread_tmp_1548_fu_22119_p3() {
    tmp_1548_fu_22119_p3 = esl_concat<12,2>(tmp_1547_reg_39161.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1549_fu_22130_p2() {
    tmp_1549_fu_22130_p2 = (!p_shl244_fu_22126_p1.read().is_01() || !tmp_1775_cast_fu_22116_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl244_fu_22126_p1.read()) - sc_bigint<64>(tmp_1775_cast_fu_22116_p1.read()));
}

void ShuffleNetV2::thread_tmp_1550_fu_22136_p2() {
    tmp_1550_fu_22136_p2 = (!tmp_1549_fu_22130_p2.read().is_01() || !tmp_671_reg_39121.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1549_fu_22130_p2.read()) + sc_biguint<64>(tmp_671_reg_39121.read()));
}

void ShuffleNetV2::thread_tmp_1551_fu_22708_p3() {
    tmp_1551_fu_22708_p3 = esl_concat<6,3>(co114_reg_6565.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1552_fu_22720_p3() {
    tmp_1552_fu_22720_p3 = esl_concat<6,1>(co114_reg_6565.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1553_fu_22732_p2() {
    tmp_1553_fu_22732_p2 = (!p_shl506_cast_fu_22728_p1.read().is_01() || !p_shl505_cast_fu_22716_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl506_cast_fu_22728_p1.read()) + sc_biguint<10>(p_shl505_cast_fu_22716_p1.read()));
}

void ShuffleNetV2::thread_tmp_1554_fu_22616_p1() {
    tmp_1554_fu_22616_p1 = k42_reg_6554.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1555_fu_22383_p1() {
    tmp_1555_fu_22383_p1 = i105_reg_6532.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1556_cast_fu_17860_p1() {
    tmp_1556_cast_fu_17860_p1 = esl_sext<17,16>(tmp_1364_fu_17854_p2.read());
}

void ShuffleNetV2::thread_tmp_1556_fu_22417_p1() {
    tmp_1556_fu_22417_p1 = tmp_685_fu_22411_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1557_cast_fu_17869_p1() {
    tmp_1557_cast_fu_17869_p1 = esl_sext<33,17>(tmp_1365_fu_17864_p2.read());
}

void ShuffleNetV2::thread_tmp_1557_fu_22517_p3() {
    tmp_1557_fu_22517_p3 = esl_concat<11,5>(tmp_688_reg_39274.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1558_fu_22528_p3() {
    tmp_1558_fu_22528_p3 = esl_concat<11,3>(tmp_688_reg_39274.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1559_fu_22539_p2() {
    tmp_1559_fu_22539_p2 = (!p_shl503_cast_fu_22524_p1.read().is_01() || !p_shl504_cast_fu_22535_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl503_cast_fu_22524_p1.read()) - sc_biguint<17>(p_shl504_cast_fu_22535_p1.read()));
}

void ShuffleNetV2::thread_tmp_1560_fu_22549_p2() {
    tmp_1560_fu_22549_p2 = (!tmp_674_cast_reg_39261.read().is_01() || !tmp_1790_cast_fu_22545_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_674_cast_reg_39261.read()) + sc_bigint<18>(tmp_1790_cast_fu_22545_p1.read()));
}

void ShuffleNetV2::thread_tmp_1561_fu_22486_p3() {
    tmp_1561_fu_22486_p3 = esl_concat<4,6>(tmp_689_fu_22476_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1562_fu_22494_p3() {
    tmp_1562_fu_22494_p3 = esl_concat<4,4>(tmp_689_fu_22476_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1563_cast_fu_17888_p1() {
    tmp_1563_cast_fu_17888_p1 = esl_sext<64,10>(tmp_1369_reg_37619.read());
}

void ShuffleNetV2::thread_tmp_1563_fu_22506_p2() {
    tmp_1563_fu_22506_p2 = (!tmp_1561_fu_22486_p3.read().is_01() || !p_shl502_cast_fu_22502_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1561_fu_22486_p3.read()) - sc_bigint<10>(p_shl502_cast_fu_22502_p1.read()));
}

void ShuffleNetV2::thread_tmp_1564_fu_22512_p2() {
    tmp_1564_fu_22512_p2 = (!tmp_673_cast1_reg_39256.read().is_01() || !tmp_1563_fu_22506_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_673_cast1_reg_39256.read()) + sc_biguint<10>(tmp_1563_fu_22506_p2.read()));
}

void ShuffleNetV2::thread_tmp_1565_fu_22831_p3() {
    tmp_1565_fu_22831_p3 = esl_concat<6,3>(co116_reg_6598.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1566_fu_22843_p3() {
    tmp_1566_fu_22843_p3 = esl_concat<6,1>(co116_reg_6598.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1567_fu_22855_p2() {
    tmp_1567_fu_22855_p2 = (!p_shl512_cast_fu_22851_p1.read().is_01() || !p_shl511_cast_fu_22839_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl512_cast_fu_22851_p1.read()) + sc_biguint<10>(p_shl511_cast_fu_22839_p1.read()));
}

void ShuffleNetV2::thread_tmp_1568_fu_22867_p3() {
    tmp_1568_fu_22867_p3 = esl_concat<7,3>(tmp_690_fu_22861_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1569_fu_22879_p3() {
    tmp_1569_fu_22879_p3 = esl_concat<7,1>(tmp_690_fu_22861_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1570_fu_22891_p2() {
    tmp_1570_fu_22891_p2 = (!p_shl510_cast_fu_22887_p1.read().is_01() || !p_shl509_cast_fu_22875_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl510_cast_fu_22887_p1.read()) + sc_biguint<11>(p_shl509_cast_fu_22875_p1.read()));
}

void ShuffleNetV2::thread_tmp_1571_fu_22754_p2() {
    tmp_1571_fu_22754_p2 = (!tmp_691_cast1_fu_22750_p1.read().is_01() || !tmp_1553_reg_39385.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_691_cast1_fu_22750_p1.read()) + sc_biguint<10>(tmp_1553_reg_39385.read()));
}

void ShuffleNetV2::thread_tmp_1572_fu_22759_p3() {
    tmp_1572_fu_22759_p3 = esl_concat<10,3>(tmp_1571_fu_22754_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1573_fu_22771_p3() {
    tmp_1573_fu_22771_p3 = esl_concat<10,1>(tmp_1571_fu_22754_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1574_fu_22783_p2() {
    tmp_1574_fu_22783_p2 = (!p_shl507_cast_fu_22767_p1.read().is_01() || !p_shl508_cast_fu_22779_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl507_cast_fu_22767_p1.read()) + sc_biguint<15>(p_shl508_cast_fu_22779_p1.read()));
}

void ShuffleNetV2::thread_tmp_1575_fu_23042_p1() {
    tmp_1575_fu_23042_p1 = co118_reg_6631.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1576_fu_22917_p2() {
    tmp_1576_fu_22917_p2 = (!tmp_693_cast_fu_22913_p1.read().is_01() || !tmp_1567_reg_39429.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_693_cast_fu_22913_p1.read()) + sc_biguint<10>(tmp_1567_reg_39429.read()));
}

void ShuffleNetV2::thread_tmp_1577_fu_22922_p3() {
    tmp_1577_fu_22922_p3 = esl_concat<10,3>(tmp_1576_fu_22917_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1578_fu_22934_p3() {
    tmp_1578_fu_22934_p3 = esl_concat<10,1>(tmp_1576_fu_22917_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1579_fu_22946_p2() {
    tmp_1579_fu_22946_p2 = (!p_shl515_cast_fu_22930_p1.read().is_01() || !p_shl516_cast_fu_22942_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl515_cast_fu_22930_p1.read()) + sc_biguint<14>(p_shl516_cast_fu_22942_p1.read()));
}

void ShuffleNetV2::thread_tmp_1580_fu_22952_p2() {
    tmp_1580_fu_22952_p2 = (!tmp_693_cast1_fu_22909_p1.read().is_01() || !tmp_1570_reg_39434.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_693_cast1_fu_22909_p1.read()) + sc_biguint<11>(tmp_1570_reg_39434.read()));
}

void ShuffleNetV2::thread_tmp_1581_fu_22957_p3() {
    tmp_1581_fu_22957_p3 = esl_concat<11,3>(tmp_1580_fu_22952_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1582_fu_22969_p3() {
    tmp_1582_fu_22969_p3 = esl_concat<11,1>(tmp_1580_fu_22952_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1583_fu_22981_p2() {
    tmp_1583_fu_22981_p2 = (!p_shl513_cast_fu_22965_p1.read().is_01() || !p_shl514_cast_fu_22977_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl513_cast_fu_22965_p1.read()) + sc_biguint<15>(p_shl514_cast_fu_22977_p1.read()));
}

void ShuffleNetV2::thread_tmp_1584_cast_fu_18129_p1() {
    tmp_1584_cast_fu_18129_p1 = esl_zext<64,15>(tmp_1389_fu_18124_p2.read());
}

void ShuffleNetV2::thread_tmp_1584_fu_22805_p2() {
    tmp_1584_fu_22805_p2 = (!tmp_1574_reg_39398.read().is_01() || !tmp_694_cast1_fu_22801_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1574_reg_39398.read()) + sc_biguint<15>(tmp_694_cast1_fu_22801_p1.read()));
}

void ShuffleNetV2::thread_tmp_1585_cast_fu_18331_p1() {
    tmp_1585_cast_fu_18331_p1 = esl_zext<64,15>(tmp_1390_fu_18326_p2.read());
}

void ShuffleNetV2::thread_tmp_1585_fu_23007_p2() {
    tmp_1585_fu_23007_p2 = (!tmp_1579_reg_39447.read().is_01() || !tmp_698_cast_fu_23003_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1579_reg_39447.read()) + sc_biguint<14>(tmp_698_cast_fu_23003_p1.read()));
}

void ShuffleNetV2::thread_tmp_1586_cast_fu_18341_p1() {
    tmp_1586_cast_fu_18341_p1 = esl_zext<64,14>(tmp_1391_reg_37805.read());
}

void ShuffleNetV2::thread_tmp_1586_fu_23012_p2() {
    tmp_1586_fu_23012_p2 = (!tmp_1583_reg_39452.read().is_01() || !tmp_698_cast1_fu_22999_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1583_reg_39452.read()) + sc_biguint<15>(tmp_698_cast1_fu_22999_p1.read()));
}

void ShuffleNetV2::thread_tmp_1587_fu_23374_p1() {
    tmp_1587_fu_23374_p1 = k44_reg_6675.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1588_fu_23141_p1() {
    tmp_1588_fu_23141_p1 = i109_reg_6653.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1589_fu_23175_p1() {
    tmp_1589_fu_23175_p1 = tmp_704_fu_23169_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1590_fu_23275_p3() {
    tmp_1590_fu_23275_p3 = esl_concat<11,5>(tmp_707_reg_39529.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1591_fu_23286_p3() {
    tmp_1591_fu_23286_p3 = esl_concat<11,3>(tmp_707_reg_39529.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1592_fu_23297_p2() {
    tmp_1592_fu_23297_p2 = (!p_shl519_cast_fu_23282_p1.read().is_01() || !p_shl520_cast_fu_23293_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl519_cast_fu_23282_p1.read()) - sc_biguint<17>(p_shl520_cast_fu_23293_p1.read()));
}

void ShuffleNetV2::thread_tmp_1593_fu_23307_p2() {
    tmp_1593_fu_23307_p2 = (!tmp_697_cast_reg_39516.read().is_01() || !tmp_1829_cast_fu_23303_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_697_cast_reg_39516.read()) + sc_bigint<18>(tmp_1829_cast_fu_23303_p1.read()));
}

void ShuffleNetV2::thread_tmp_1594_fu_23244_p3() {
    tmp_1594_fu_23244_p3 = esl_concat<4,6>(tmp_708_fu_23234_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1595_fu_23252_p3() {
    tmp_1595_fu_23252_p3 = esl_concat<4,4>(tmp_708_fu_23234_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1596_fu_23264_p2() {
    tmp_1596_fu_23264_p2 = (!tmp_1594_fu_23244_p3.read().is_01() || !p_shl518_cast_fu_23260_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1594_fu_23244_p3.read()) - sc_bigint<10>(p_shl518_cast_fu_23260_p1.read()));
}

void ShuffleNetV2::thread_tmp_1597_cast_fu_18630_p1() {
    tmp_1597_cast_fu_18630_p1 = esl_sext<17,16>(tmp_1399_fu_18624_p2.read());
}

void ShuffleNetV2::thread_tmp_1597_fu_23270_p2() {
    tmp_1597_fu_23270_p2 = (!tmp_696_cast_reg_39511.read().is_01() || !tmp_1596_fu_23264_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_696_cast_reg_39511.read()) + sc_biguint<10>(tmp_1596_fu_23264_p2.read()));
}

void ShuffleNetV2::thread_tmp_1598_cast_fu_18639_p1() {
    tmp_1598_cast_fu_18639_p1 = esl_sext<33,17>(tmp_1400_fu_18634_p2.read());
}

void ShuffleNetV2::thread_tmp_1598_fu_23847_p1() {
    tmp_1598_fu_23847_p1 = co122_reg_6752.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1599_fu_23751_p1() {
    tmp_1599_fu_23751_p1 = k46_reg_6741.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1600_fu_23526_p1() {
    tmp_1600_fu_23526_p1 = i114_reg_6719.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1601_fu_23587_p3() {
    tmp_1601_fu_23587_p3 = esl_concat<7,2>(tmp_721_reg_39694.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1602_fu_23594_p1() {
    tmp_1602_fu_23594_p1 = esl_sext<34,9>(tmp_1601_fu_23587_p3.read());
}

void ShuffleNetV2::thread_tmp_1603_fu_23602_p2() {
    tmp_1603_fu_23602_p2 = (!p_shl524_cast_fu_23598_p1.read().is_01() || !tmp_722_cast1_fu_23583_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl524_cast_fu_23598_p1.read()) - sc_biguint<35>(tmp_722_cast1_fu_23583_p1.read()));
}

void ShuffleNetV2::thread_tmp_1604_cast_fu_18658_p1() {
    tmp_1604_cast_fu_18658_p1 = esl_sext<64,10>(tmp_1404_reg_37874.read());
}

void ShuffleNetV2::thread_tmp_1604_fu_23612_p2() {
    tmp_1604_fu_23612_p2 = (!tmp_1845_cast_fu_23608_p1.read().is_01() || !tmp_709_cast_reg_39663.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1845_cast_fu_23608_p1.read()) + sc_biguint<36>(tmp_709_cast_reg_39663.read()));
}

void ShuffleNetV2::thread_tmp_1605_fu_23617_p1() {
    tmp_1605_fu_23617_p1 = tmp_1604_fu_23612_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1606_fu_23621_p1() {
    tmp_1606_fu_23621_p1 = tmp_1604_fu_23612_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1607_fu_23669_p2() {
    tmp_1607_fu_23669_p2 = (!p_shl523_cast_fu_23662_p3.read().is_01() || !tmp_1605_reg_39706.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl523_cast_fu_23662_p3.read()) - sc_biguint<10>(tmp_1605_reg_39706.read()));
}

void ShuffleNetV2::thread_tmp_1608_fu_23674_p2() {
    tmp_1608_fu_23674_p2 = (!tmp_1607_fu_23669_p2.read().is_01() || !tmp_716_cast_reg_39681.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1607_fu_23669_p2.read()) + sc_biguint<10>(tmp_716_cast_reg_39681.read()));
}

void ShuffleNetV2::thread_tmp_1609_fu_23632_p3() {
    tmp_1609_fu_23632_p3 = esl_concat<8,2>(tmp_723_reg_39700.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1610_fu_23639_p1() {
    tmp_1610_fu_23639_p1 = esl_sext<11,10>(tmp_1609_fu_23632_p3.read());
}

void ShuffleNetV2::thread_tmp_1611_fu_23647_p2() {
    tmp_1611_fu_23647_p2 = (!p_shl522_cast_fu_23643_p1.read().is_01() || !tmp_724_cast_fu_23628_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl522_cast_fu_23643_p1.read()) - sc_biguint<12>(tmp_724_cast_fu_23628_p1.read()));
}

void ShuffleNetV2::thread_tmp_1612_fu_23657_p2() {
    tmp_1612_fu_23657_p2 = (!tmp_1852_cast_fu_23653_p1.read().is_01() || !tmp_709_cast1_reg_39658.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1852_cast_fu_23653_p1.read()) + sc_biguint<13>(tmp_709_cast1_reg_39658.read()));
}

void ShuffleNetV2::thread_tmp_1613_cast_fu_18939_p1() {
    tmp_1613_cast_fu_18939_p1 = esl_sext<36,35>(tmp_1410_fu_18933_p2.read());
}

void ShuffleNetV2::thread_tmp_1613_fu_23682_p3() {
    tmp_1613_fu_23682_p3 = esl_concat<13,2>(tmp_1612_reg_39716.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1614_fu_23693_p2() {
    tmp_1614_fu_23693_p2 = (!p_shl249_fu_23689_p1.read().is_01() || !tmp_1853_cast_fu_23679_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl249_fu_23689_p1.read()) - sc_bigint<64>(tmp_1853_cast_fu_23679_p1.read()));
}

void ShuffleNetV2::thread_tmp_1615_fu_23699_p2() {
    tmp_1615_fu_23699_p2 = (!tmp_1614_fu_23693_p2.read().is_01() || !tmp_716_reg_39676.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1614_fu_23693_p2.read()) + sc_biguint<64>(tmp_716_reg_39676.read()));
}

void ShuffleNetV2::thread_tmp_1616_fu_24271_p3() {
    tmp_1616_fu_24271_p3 = esl_concat<6,3>(co124_reg_6807.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1617_cast_fu_19034_p1() {
    tmp_1617_cast_fu_19034_p1 = esl_zext<64,10>(tmp_1415_reg_38057.read());
}

void ShuffleNetV2::thread_tmp_1617_fu_24283_p3() {
    tmp_1617_fu_24283_p3 = esl_concat<6,1>(co124_reg_6807.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1618_fu_24295_p2() {
    tmp_1618_fu_24295_p2 = (!p_shl530_cast_fu_24291_p1.read().is_01() || !p_shl529_cast_fu_24279_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl530_cast_fu_24291_p1.read()) + sc_biguint<10>(p_shl529_cast_fu_24279_p1.read()));
}

void ShuffleNetV2::thread_tmp_1619_fu_24179_p1() {
    tmp_1619_fu_24179_p1 = k48_reg_6796.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1620_cast_fu_18998_p1() {
    tmp_1620_cast_fu_18998_p1 = esl_sext<64,12>(tmp_1418_reg_38051.read());
}

void ShuffleNetV2::thread_tmp_1620_fu_23946_p1() {
    tmp_1620_fu_23946_p1 = i116_reg_6774.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1621_fu_23980_p1() {
    tmp_1621_fu_23980_p1 = tmp_730_fu_23974_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1622_fu_24080_p3() {
    tmp_1622_fu_24080_p3 = esl_concat<11,5>(tmp_733_reg_39829.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1623_fu_24091_p3() {
    tmp_1623_fu_24091_p3 = esl_concat<11,3>(tmp_733_reg_39829.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1624_fu_24102_p2() {
    tmp_1624_fu_24102_p2 = (!p_shl527_cast_fu_24087_p1.read().is_01() || !p_shl528_cast_fu_24098_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl527_cast_fu_24087_p1.read()) - sc_biguint<17>(p_shl528_cast_fu_24098_p1.read()));
}

void ShuffleNetV2::thread_tmp_1625_fu_24112_p2() {
    tmp_1625_fu_24112_p2 = (!tmp_719_cast1_reg_39816.read().is_01() || !tmp_1868_cast_fu_24108_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_719_cast1_reg_39816.read()) + sc_bigint<18>(tmp_1868_cast_fu_24108_p1.read()));
}

void ShuffleNetV2::thread_tmp_1626_fu_24049_p3() {
    tmp_1626_fu_24049_p3 = esl_concat<4,6>(tmp_734_fu_24039_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1627_fu_24057_p3() {
    tmp_1627_fu_24057_p3 = esl_concat<4,4>(tmp_734_fu_24039_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1628_fu_24069_p2() {
    tmp_1628_fu_24069_p2 = (!tmp_1626_fu_24049_p3.read().is_01() || !p_shl526_cast_fu_24065_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1626_fu_24049_p3.read()) - sc_bigint<10>(p_shl526_cast_fu_24065_p1.read()));
}

void ShuffleNetV2::thread_tmp_1629_fu_24075_p2() {
    tmp_1629_fu_24075_p2 = (!tmp_718_cast_reg_39811.read().is_01() || !tmp_1628_fu_24069_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_718_cast_reg_39811.read()) + sc_biguint<10>(tmp_1628_fu_24069_p2.read()));
}

void ShuffleNetV2::thread_tmp_1630_fu_24394_p3() {
    tmp_1630_fu_24394_p3 = esl_concat<6,3>(co126_reg_6840.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1631_fu_24406_p3() {
    tmp_1631_fu_24406_p3 = esl_concat<6,1>(co126_reg_6840.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1632_fu_24418_p2() {
    tmp_1632_fu_24418_p2 = (!p_shl536_cast_fu_24414_p1.read().is_01() || !p_shl535_cast_fu_24402_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl536_cast_fu_24414_p1.read()) + sc_biguint<10>(p_shl535_cast_fu_24402_p1.read()));
}

void ShuffleNetV2::thread_tmp_1633_fu_24430_p3() {
    tmp_1633_fu_24430_p3 = esl_concat<7,3>(tmp_735_fu_24424_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1634_fu_24442_p3() {
    tmp_1634_fu_24442_p3 = esl_concat<7,1>(tmp_735_fu_24424_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1635_cast_fu_19431_p1() {
    tmp_1635_cast_fu_19431_p1 = esl_sext<18,17>(tmp_1430_fu_19425_p2.read());
}

void ShuffleNetV2::thread_tmp_1635_fu_24454_p2() {
    tmp_1635_fu_24454_p2 = (!p_shl534_cast_fu_24450_p1.read().is_01() || !p_shl533_cast_fu_24438_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl534_cast_fu_24450_p1.read()) + sc_biguint<11>(p_shl533_cast_fu_24438_p1.read()));
}

void ShuffleNetV2::thread_tmp_1636_cast_fu_19440_p1() {
    tmp_1636_cast_fu_19440_p1 = esl_sext<33,18>(tmp_1431_fu_19435_p2.read());
}

void ShuffleNetV2::thread_tmp_1636_fu_24317_p2() {
    tmp_1636_fu_24317_p2 = (!tmp_736_cast_fu_24313_p1.read().is_01() || !tmp_1618_reg_39940.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_736_cast_fu_24313_p1.read()) + sc_biguint<10>(tmp_1618_reg_39940.read()));
}

void ShuffleNetV2::thread_tmp_1637_fu_24322_p3() {
    tmp_1637_fu_24322_p3 = esl_concat<10,3>(tmp_1636_fu_24317_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1638_fu_24334_p3() {
    tmp_1638_fu_24334_p3 = esl_concat<10,1>(tmp_1636_fu_24317_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1639_fu_24346_p2() {
    tmp_1639_fu_24346_p2 = (!p_shl531_cast_fu_24330_p1.read().is_01() || !p_shl532_cast_fu_24342_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl531_cast_fu_24330_p1.read()) + sc_biguint<15>(p_shl532_cast_fu_24342_p1.read()));
}

void ShuffleNetV2::thread_tmp_1640_fu_24605_p1() {
    tmp_1640_fu_24605_p1 = co128_reg_6873.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1641_fu_24480_p2() {
    tmp_1641_fu_24480_p2 = (!tmp_738_cast_fu_24476_p1.read().is_01() || !tmp_1632_reg_39984.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_738_cast_fu_24476_p1.read()) + sc_biguint<10>(tmp_1632_reg_39984.read()));
}

void ShuffleNetV2::thread_tmp_1642_cast_fu_19459_p1() {
    tmp_1642_cast_fu_19459_p1 = esl_sext<64,10>(tmp_1435_reg_38174.read());
}

void ShuffleNetV2::thread_tmp_1642_fu_24485_p3() {
    tmp_1642_fu_24485_p3 = esl_concat<10,3>(tmp_1641_fu_24480_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1643_fu_24497_p3() {
    tmp_1643_fu_24497_p3 = esl_concat<10,1>(tmp_1641_fu_24480_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1644_fu_24509_p2() {
    tmp_1644_fu_24509_p2 = (!p_shl539_cast_fu_24493_p1.read().is_01() || !p_shl540_cast_fu_24505_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl539_cast_fu_24493_p1.read()) + sc_biguint<14>(p_shl540_cast_fu_24505_p1.read()));
}

void ShuffleNetV2::thread_tmp_1645_fu_24515_p2() {
    tmp_1645_fu_24515_p2 = (!tmp_738_cast1_fu_24472_p1.read().is_01() || !tmp_1635_reg_39989.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_738_cast1_fu_24472_p1.read()) + sc_biguint<11>(tmp_1635_reg_39989.read()));
}

void ShuffleNetV2::thread_tmp_1646_fu_24520_p3() {
    tmp_1646_fu_24520_p3 = esl_concat<11,3>(tmp_1645_fu_24515_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1647_fu_24532_p3() {
    tmp_1647_fu_24532_p3 = esl_concat<11,1>(tmp_1645_fu_24515_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1648_fu_24544_p2() {
    tmp_1648_fu_24544_p2 = (!p_shl537_cast_fu_24528_p1.read().is_01() || !p_shl538_cast_fu_24540_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl537_cast_fu_24528_p1.read()) + sc_biguint<15>(p_shl538_cast_fu_24540_p1.read()));
}

void ShuffleNetV2::thread_tmp_1649_fu_24368_p2() {
    tmp_1649_fu_24368_p2 = (!tmp_1639_reg_39953.read().is_01() || !tmp_739_cast1_fu_24364_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1639_reg_39953.read()) + sc_biguint<15>(tmp_739_cast1_fu_24364_p1.read()));
}

void ShuffleNetV2::thread_tmp_1650_fu_24570_p2() {
    tmp_1650_fu_24570_p2 = (!tmp_1644_reg_40002.read().is_01() || !tmp_743_cast_fu_24566_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1644_reg_40002.read()) + sc_biguint<14>(tmp_743_cast_fu_24566_p1.read()));
}

void ShuffleNetV2::thread_tmp_1651_fu_24575_p2() {
    tmp_1651_fu_24575_p2 = (!tmp_1648_reg_40007.read().is_01() || !tmp_743_cast1_fu_24562_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1648_reg_40007.read()) + sc_biguint<15>(tmp_743_cast1_fu_24562_p1.read()));
}

void ShuffleNetV2::thread_tmp_1652_fu_24945_p1() {
    tmp_1652_fu_24945_p1 = k50_reg_6917.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1653_fu_24704_p1() {
    tmp_1653_fu_24704_p1 = i120_reg_6895.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1654_fu_24738_p1() {
    tmp_1654_fu_24738_p1 = tmp_749_fu_24732_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1655_fu_24838_p3() {
    tmp_1655_fu_24838_p3 = esl_concat<10,5>(tmp_752_reg_40084.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1656_fu_24845_p1() {
    tmp_1656_fu_24845_p1 = esl_sext<16,15>(tmp_1655_fu_24838_p3.read());
}

void ShuffleNetV2::thread_tmp_1657_fu_24853_p3() {
    tmp_1657_fu_24853_p3 = esl_concat<10,3>(tmp_752_reg_40084.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1658_fu_24860_p1() {
    tmp_1658_fu_24860_p1 = esl_sext<14,13>(tmp_1657_fu_24853_p3.read());
}

void ShuffleNetV2::thread_tmp_1659_fu_24868_p2() {
    tmp_1659_fu_24868_p2 = (!p_shl543_cast_fu_24849_p1.read().is_01() || !p_shl544_cast_fu_24864_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl543_cast_fu_24849_p1.read()) - sc_biguint<17>(p_shl544_cast_fu_24864_p1.read()));
}

void ShuffleNetV2::thread_tmp_1660_fu_24878_p2() {
    tmp_1660_fu_24878_p2 = (!tmp_742_cast_reg_40071.read().is_01() || !tmp_1909_cast_fu_24874_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_742_cast_reg_40071.read()) + sc_bigint<18>(tmp_1909_cast_fu_24874_p1.read()));
}

void ShuffleNetV2::thread_tmp_1661_fu_24807_p3() {
    tmp_1661_fu_24807_p3 = esl_concat<4,6>(tmp_753_fu_24797_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1662_fu_24815_p3() {
    tmp_1662_fu_24815_p3 = esl_concat<4,4>(tmp_753_fu_24797_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1663_cast_fu_19700_p1() {
    tmp_1663_cast_fu_19700_p1 = esl_zext<64,15>(tmp_1455_fu_19695_p2.read());
}

void ShuffleNetV2::thread_tmp_1663_fu_24827_p2() {
    tmp_1663_fu_24827_p2 = (!tmp_1661_fu_24807_p3.read().is_01() || !p_shl542_cast_fu_24823_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1661_fu_24807_p3.read()) - sc_bigint<10>(p_shl542_cast_fu_24823_p1.read()));
}

void ShuffleNetV2::thread_tmp_1664_cast_fu_19902_p1() {
    tmp_1664_cast_fu_19902_p1 = esl_zext<64,15>(tmp_1456_fu_19897_p2.read());
}

void ShuffleNetV2::thread_tmp_1664_fu_24833_p2() {
    tmp_1664_fu_24833_p2 = (!tmp_741_cast_reg_40066.read().is_01() || !tmp_1663_fu_24827_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_741_cast_reg_40066.read()) + sc_biguint<10>(tmp_1663_fu_24827_p2.read()));
}

void ShuffleNetV2::thread_tmp_1665_cast_fu_19912_p1() {
    tmp_1665_cast_fu_19912_p1 = esl_zext<64,14>(tmp_1457_reg_38360.read());
}

void ShuffleNetV2::thread_tmp_1665_fu_25410_p1() {
    tmp_1665_fu_25410_p1 = co132_reg_6994.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1666_fu_25314_p1() {
    tmp_1666_fu_25314_p1 = k52_reg_6983.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1667_fu_25097_p1() {
    tmp_1667_fu_25097_p1 = i125_reg_6961.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1668_fu_25158_p3() {
    tmp_1668_fu_25158_p3 = esl_concat<7,2>(tmp_771_reg_40249.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1669_fu_25165_p1() {
    tmp_1669_fu_25165_p1 = esl_sext<34,9>(tmp_1668_fu_25158_p3.read());
}

void ShuffleNetV2::thread_tmp_1670_fu_25173_p2() {
    tmp_1670_fu_25173_p2 = (!p_shl548_cast_fu_25169_p1.read().is_01() || !tmp_772_cast_fu_25154_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl548_cast_fu_25169_p1.read()) - sc_biguint<35>(tmp_772_cast_fu_25154_p1.read()));
}

void ShuffleNetV2::thread_tmp_1671_fu_25183_p2() {
    tmp_1671_fu_25183_p2 = (!tmp_1925_cast_fu_25179_p1.read().is_01() || !tmp_754_cast_reg_40218.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1925_cast_fu_25179_p1.read()) + sc_biguint<36>(tmp_754_cast_reg_40218.read()));
}

void ShuffleNetV2::thread_tmp_1672_fu_25188_p1() {
    tmp_1672_fu_25188_p1 = tmp_1671_fu_25183_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1673_fu_25192_p1() {
    tmp_1673_fu_25192_p1 = tmp_1671_fu_25183_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1674_cast_fu_20193_p1() {
    tmp_1674_cast_fu_20193_p1 = esl_sext<18,17>(tmp_1463_fu_20187_p2.read());
}

void ShuffleNetV2::thread_tmp_1674_fu_25232_p2() {
    tmp_1674_fu_25232_p2 = (!p_shl547_cast_fu_25225_p3.read().is_01() || !tmp_1672_reg_40261.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl547_cast_fu_25225_p3.read()) - sc_biguint<10>(tmp_1672_reg_40261.read()));
}

void ShuffleNetV2::thread_tmp_1675_cast_fu_20202_p1() {
    tmp_1675_cast_fu_20202_p1 = esl_sext<33,18>(tmp_1464_fu_20197_p2.read());
}

void ShuffleNetV2::thread_tmp_1675_fu_25237_p2() {
    tmp_1675_fu_25237_p2 = (!tmp_1674_fu_25232_p2.read().is_01() || !tmp_761_cast_reg_40236.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1674_fu_25232_p2.read()) + sc_biguint<10>(tmp_761_cast_reg_40236.read()));
}

void ShuffleNetV2::thread_tmp_1676_fu_25199_p3() {
    tmp_1676_fu_25199_p3 = esl_concat<10,2>(tmp_773_reg_40255.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1677_fu_25210_p2() {
    tmp_1677_fu_25210_p2 = (!p_shl546_cast_fu_25206_p1.read().is_01() || !tmp_774_cast_fu_25196_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl546_cast_fu_25206_p1.read()) - sc_biguint<13>(tmp_774_cast_fu_25196_p1.read()));
}

void ShuffleNetV2::thread_tmp_1678_fu_25220_p2() {
    tmp_1678_fu_25220_p2 = (!tmp_1931_cast_fu_25216_p1.read().is_01() || !tmp_754_cast1_reg_40213.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_1931_cast_fu_25216_p1.read()) + sc_biguint<14>(tmp_754_cast1_reg_40213.read()));
}

void ShuffleNetV2::thread_tmp_1679_fu_25245_p3() {
    tmp_1679_fu_25245_p3 = esl_concat<14,2>(tmp_1678_reg_40271.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1680_fu_25256_p2() {
    tmp_1680_fu_25256_p2 = (!p_shl255_fu_25252_p1.read().is_01() || !tmp_1932_cast_fu_25242_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl255_fu_25252_p1.read()) - sc_bigint<64>(tmp_1932_cast_fu_25242_p1.read()));
}

void ShuffleNetV2::thread_tmp_1681_cast_fu_20221_p1() {
    tmp_1681_cast_fu_20221_p1 = esl_sext<64,10>(tmp_1468_reg_38429.read());
}

void ShuffleNetV2::thread_tmp_1681_fu_25262_p2() {
    tmp_1681_fu_25262_p2 = (!tmp_1680_fu_25256_p2.read().is_01() || !tmp_761_reg_40231.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1680_fu_25256_p2.read()) + sc_biguint<64>(tmp_761_reg_40231.read()));
}

void ShuffleNetV2::thread_tmp_1682_fu_25846_p3() {
    tmp_1682_fu_25846_p3 = esl_concat<6,3>(co134_reg_7049.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1683_fu_25858_p3() {
    tmp_1683_fu_25858_p3 = esl_concat<6,1>(co134_reg_7049.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1684_fu_25870_p2() {
    tmp_1684_fu_25870_p2 = (!p_shl554_cast_fu_25866_p1.read().is_01() || !p_shl553_cast_fu_25854_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl554_cast_fu_25866_p1.read()) + sc_biguint<10>(p_shl553_cast_fu_25854_p1.read()));
}

void ShuffleNetV2::thread_tmp_1685_fu_25750_p1() {
    tmp_1685_fu_25750_p1 = k54_reg_7038.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1686_fu_25509_p1() {
    tmp_1686_fu_25509_p1 = i127_reg_7016.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1687_fu_25543_p1() {
    tmp_1687_fu_25543_p1 = tmp_780_fu_25537_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1688_fu_25643_p3() {
    tmp_1688_fu_25643_p3 = esl_concat<10,5>(tmp_783_reg_40384.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1689_fu_25650_p1() {
    tmp_1689_fu_25650_p1 = esl_sext<16,15>(tmp_1688_fu_25643_p3.read());
}

void ShuffleNetV2::thread_tmp_1690_cast_fu_20498_p1() {
    tmp_1690_cast_fu_20498_p1 = esl_sext<36,35>(tmp_1474_fu_20492_p2.read());
}

void ShuffleNetV2::thread_tmp_1690_fu_25658_p3() {
    tmp_1690_fu_25658_p3 = esl_concat<10,3>(tmp_783_reg_40384.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1691_fu_25665_p1() {
    tmp_1691_fu_25665_p1 = esl_sext<14,13>(tmp_1690_fu_25658_p3.read());
}

void ShuffleNetV2::thread_tmp_1692_fu_25673_p2() {
    tmp_1692_fu_25673_p2 = (!p_shl551_cast_fu_25654_p1.read().is_01() || !p_shl552_cast_fu_25669_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl551_cast_fu_25654_p1.read()) - sc_biguint<17>(p_shl552_cast_fu_25669_p1.read()));
}

void ShuffleNetV2::thread_tmp_1693_fu_25683_p2() {
    tmp_1693_fu_25683_p2 = (!tmp_768_cast_reg_40371.read().is_01() || !tmp_1949_cast_fu_25679_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_768_cast_reg_40371.read()) + sc_bigint<18>(tmp_1949_cast_fu_25679_p1.read()));
}

void ShuffleNetV2::thread_tmp_1694_cast_fu_20593_p1() {
    tmp_1694_cast_fu_20593_p1 = esl_zext<64,10>(tmp_1479_reg_38612.read());
}

void ShuffleNetV2::thread_tmp_1694_fu_25612_p3() {
    tmp_1694_fu_25612_p3 = esl_concat<4,6>(tmp_784_fu_25602_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1695_fu_25620_p3() {
    tmp_1695_fu_25620_p3 = esl_concat<4,4>(tmp_784_fu_25602_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1696_fu_25632_p2() {
    tmp_1696_fu_25632_p2 = (!tmp_1694_fu_25612_p3.read().is_01() || !p_shl550_cast_fu_25628_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1694_fu_25612_p3.read()) - sc_bigint<10>(p_shl550_cast_fu_25628_p1.read()));
}

void ShuffleNetV2::thread_tmp_1697_cast_fu_20557_p1() {
    tmp_1697_cast_fu_20557_p1 = esl_sext<64,12>(tmp_1482_reg_38606.read());
}

void ShuffleNetV2::thread_tmp_1697_fu_25638_p2() {
    tmp_1697_fu_25638_p2 = (!tmp_765_cast1_reg_40366.read().is_01() || !tmp_1696_fu_25632_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_765_cast1_reg_40366.read()) + sc_biguint<10>(tmp_1696_fu_25632_p2.read()));
}

void ShuffleNetV2::thread_tmp_1698_fu_25969_p3() {
    tmp_1698_fu_25969_p3 = esl_concat<6,3>(co136_reg_7082.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1699_fu_25981_p3() {
    tmp_1699_fu_25981_p3 = esl_concat<6,1>(co136_reg_7082.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1700_fu_25993_p2() {
    tmp_1700_fu_25993_p2 = (!p_shl560_cast_fu_25989_p1.read().is_01() || !p_shl559_cast_fu_25977_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl560_cast_fu_25989_p1.read()) + sc_biguint<10>(p_shl559_cast_fu_25977_p1.read()));
}

void ShuffleNetV2::thread_tmp_1701_fu_26005_p3() {
    tmp_1701_fu_26005_p3 = esl_concat<7,3>(tmp_785_fu_25999_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1702_fu_26017_p3() {
    tmp_1702_fu_26017_p3 = esl_concat<7,1>(tmp_785_fu_25999_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1703_fu_26029_p2() {
    tmp_1703_fu_26029_p2 = (!p_shl558_cast_fu_26025_p1.read().is_01() || !p_shl557_cast_fu_26013_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl558_cast_fu_26025_p1.read()) + sc_biguint<11>(p_shl557_cast_fu_26013_p1.read()));
}

void ShuffleNetV2::thread_tmp_1704_fu_25892_p2() {
    tmp_1704_fu_25892_p2 = (!tmp_786_cast_fu_25888_p1.read().is_01() || !tmp_1684_reg_40495.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_786_cast_fu_25888_p1.read()) + sc_biguint<10>(tmp_1684_reg_40495.read()));
}

void ShuffleNetV2::thread_tmp_1705_fu_25897_p3() {
    tmp_1705_fu_25897_p3 = esl_concat<10,3>(tmp_1704_fu_25892_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1706_fu_25909_p3() {
    tmp_1706_fu_25909_p3 = esl_concat<10,1>(tmp_1704_fu_25892_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1707_fu_25921_p2() {
    tmp_1707_fu_25921_p2 = (!p_shl555_cast_fu_25905_p1.read().is_01() || !p_shl556_cast_fu_25917_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl555_cast_fu_25905_p1.read()) + sc_biguint<15>(p_shl556_cast_fu_25917_p1.read()));
}

void ShuffleNetV2::thread_tmp_1708_fu_26180_p1() {
    tmp_1708_fu_26180_p1 = co138_reg_7115.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1709_fu_26055_p2() {
    tmp_1709_fu_26055_p2 = (!tmp_791_cast_fu_26051_p1.read().is_01() || !tmp_1700_reg_40539.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_791_cast_fu_26051_p1.read()) + sc_biguint<10>(tmp_1700_reg_40539.read()));
}

void ShuffleNetV2::thread_tmp_1710_fu_26060_p3() {
    tmp_1710_fu_26060_p3 = esl_concat<10,3>(tmp_1709_fu_26055_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1711_fu_26072_p3() {
    tmp_1711_fu_26072_p3 = esl_concat<10,1>(tmp_1709_fu_26055_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1712_cast_fu_20986_p1() {
    tmp_1712_cast_fu_20986_p1 = esl_sext<18,17>(tmp_1494_fu_20980_p2.read());
}

void ShuffleNetV2::thread_tmp_1712_fu_26084_p2() {
    tmp_1712_fu_26084_p2 = (!p_shl563_cast_fu_26068_p1.read().is_01() || !p_shl564_cast_fu_26080_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl563_cast_fu_26068_p1.read()) + sc_biguint<14>(p_shl564_cast_fu_26080_p1.read()));
}

void ShuffleNetV2::thread_tmp_1713_cast_fu_20995_p1() {
    tmp_1713_cast_fu_20995_p1 = esl_sext<33,18>(tmp_1495_fu_20990_p2.read());
}

void ShuffleNetV2::thread_tmp_1713_fu_26090_p2() {
    tmp_1713_fu_26090_p2 = (!tmp_791_cast1_fu_26047_p1.read().is_01() || !tmp_1703_reg_40544.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_791_cast1_fu_26047_p1.read()) + sc_biguint<11>(tmp_1703_reg_40544.read()));
}

void ShuffleNetV2::thread_tmp_1714_fu_26095_p3() {
    tmp_1714_fu_26095_p3 = esl_concat<11,3>(tmp_1713_fu_26090_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1715_fu_26107_p3() {
    tmp_1715_fu_26107_p3 = esl_concat<11,1>(tmp_1713_fu_26090_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1716_fu_26119_p2() {
    tmp_1716_fu_26119_p2 = (!p_shl561_cast_fu_26103_p1.read().is_01() || !p_shl562_cast_fu_26115_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl561_cast_fu_26103_p1.read()) + sc_biguint<15>(p_shl562_cast_fu_26115_p1.read()));
}

void ShuffleNetV2::thread_tmp_1717_fu_25943_p2() {
    tmp_1717_fu_25943_p2 = (!tmp_1707_reg_40508.read().is_01() || !tmp_792_cast1_fu_25939_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1707_reg_40508.read()) + sc_biguint<15>(tmp_792_cast1_fu_25939_p1.read()));
}

void ShuffleNetV2::thread_tmp_1718_fu_26145_p2() {
    tmp_1718_fu_26145_p2 = (!tmp_1712_reg_40557.read().is_01() || !tmp_796_cast_fu_26141_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1712_reg_40557.read()) + sc_biguint<14>(tmp_796_cast_fu_26141_p1.read()));
}

void ShuffleNetV2::thread_tmp_1719_cast_fu_21014_p1() {
    tmp_1719_cast_fu_21014_p1 = esl_sext<64,10>(tmp_1499_reg_38729.read());
}

void ShuffleNetV2::thread_tmp_1719_fu_26150_p2() {
    tmp_1719_fu_26150_p2 = (!tmp_1716_reg_40562.read().is_01() || !tmp_796_cast1_fu_26137_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1716_reg_40562.read()) + sc_biguint<15>(tmp_796_cast1_fu_26137_p1.read()));
}

void ShuffleNetV2::thread_tmp_1720_fu_26520_p1() {
    tmp_1720_fu_26520_p1 = k56_reg_7159.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1721_fu_26279_p1() {
    tmp_1721_fu_26279_p1 = i131_reg_7137.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1722_fu_26313_p1() {
    tmp_1722_fu_26313_p1 = tmp_802_fu_26307_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1723_fu_26413_p3() {
    tmp_1723_fu_26413_p3 = esl_concat<9,5>(tmp_805_reg_40639.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1724_fu_26420_p1() {
    tmp_1724_fu_26420_p1 = esl_sext<16,14>(tmp_1723_fu_26413_p3.read());
}

void ShuffleNetV2::thread_tmp_1725_fu_26428_p3() {
    tmp_1725_fu_26428_p3 = esl_concat<9,3>(tmp_805_reg_40639.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1726_fu_26435_p1() {
    tmp_1726_fu_26435_p1 = esl_sext<14,12>(tmp_1725_fu_26428_p3.read());
}

void ShuffleNetV2::thread_tmp_1727_fu_26443_p2() {
    tmp_1727_fu_26443_p2 = (!p_shl567_cast_fu_26424_p1.read().is_01() || !p_shl568_cast_fu_26439_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl567_cast_fu_26424_p1.read()) - sc_biguint<17>(p_shl568_cast_fu_26439_p1.read()));
}

void ShuffleNetV2::thread_tmp_1728_fu_26453_p2() {
    tmp_1728_fu_26453_p2 = (!tmp_795_cast_reg_40626.read().is_01() || !tmp_1990_cast_fu_26449_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_795_cast_reg_40626.read()) + sc_bigint<18>(tmp_1990_cast_fu_26449_p1.read()));
}

void ShuffleNetV2::thread_tmp_1729_fu_26382_p3() {
    tmp_1729_fu_26382_p3 = esl_concat<4,6>(tmp_806_fu_26372_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1730_fu_26390_p3() {
    tmp_1730_fu_26390_p3 = esl_concat<4,4>(tmp_806_fu_26372_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1731_fu_26402_p2() {
    tmp_1731_fu_26402_p2 = (!tmp_1729_fu_26382_p3.read().is_01() || !p_shl566_cast_fu_26398_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1729_fu_26382_p3.read()) - sc_bigint<10>(p_shl566_cast_fu_26398_p1.read()));
}

void ShuffleNetV2::thread_tmp_1732_fu_26408_p2() {
    tmp_1732_fu_26408_p2 = (!tmp_794_cast_reg_40621.read().is_01() || !tmp_1731_fu_26402_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_794_cast_reg_40621.read()) + sc_biguint<10>(tmp_1731_fu_26402_p2.read()));
}

void ShuffleNetV2::thread_tmp_1733_fu_26989_p1() {
    tmp_1733_fu_26989_p1 = co142_reg_7236.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1734_fu_26889_p1() {
    tmp_1734_fu_26889_p1 = k58_reg_7225.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1735_fu_26676_p1() {
    tmp_1735_fu_26676_p1 = i136_reg_7203.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1736_fu_26737_p3() {
    tmp_1736_fu_26737_p3 = esl_concat<7,2>(tmp_825_reg_40804.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1737_fu_26744_p1() {
    tmp_1737_fu_26744_p1 = esl_sext<34,9>(tmp_1736_fu_26737_p3.read());
}

void ShuffleNetV2::thread_tmp_1738_fu_26752_p2() {
    tmp_1738_fu_26752_p2 = (!p_shl572_cast_fu_26748_p1.read().is_01() || !tmp_826_cast_fu_26733_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl572_cast_fu_26748_p1.read()) - sc_biguint<35>(tmp_826_cast_fu_26733_p1.read()));
}

void ShuffleNetV2::thread_tmp_1739_fu_26762_p2() {
    tmp_1739_fu_26762_p2 = (!tmp_2006_cast_fu_26758_p1.read().is_01() || !tmp_808_cast_reg_40773.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2006_cast_fu_26758_p1.read()) + sc_biguint<36>(tmp_808_cast_reg_40773.read()));
}

void ShuffleNetV2::thread_tmp_1740_cast_fu_21251_p1() {
    tmp_1740_cast_fu_21251_p1 = esl_zext<64,15>(tmp_1519_fu_21246_p2.read());
}

void ShuffleNetV2::thread_tmp_1740_fu_26767_p1() {
    tmp_1740_fu_26767_p1 = tmp_1739_fu_26762_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1741_cast_fu_21453_p1() {
    tmp_1741_cast_fu_21453_p1 = esl_zext<64,15>(tmp_1520_fu_21448_p2.read());
}

void ShuffleNetV2::thread_tmp_1741_fu_26771_p1() {
    tmp_1741_fu_26771_p1 = tmp_1739_fu_26762_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1742_cast_fu_21463_p1() {
    tmp_1742_cast_fu_21463_p1 = esl_zext<64,14>(tmp_1521_reg_38915.read());
}

void ShuffleNetV2::thread_tmp_1742_fu_26807_p2() {
    tmp_1742_fu_26807_p2 = (!p_shl571_cast_fu_26800_p3.read().is_01() || !tmp_1740_reg_40816.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl571_cast_fu_26800_p3.read()) - sc_biguint<10>(tmp_1740_reg_40816.read()));
}

void ShuffleNetV2::thread_tmp_1743_fu_26812_p2() {
    tmp_1743_fu_26812_p2 = (!tmp_1742_fu_26807_p2.read().is_01() || !tmp_815_cast_reg_40791.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1742_fu_26807_p2.read()) + sc_biguint<10>(tmp_815_cast_reg_40791.read()));
}

void ShuffleNetV2::thread_tmp_1744_fu_26778_p3() {
    tmp_1744_fu_26778_p3 = esl_concat<10,2>(tmp_827_reg_40810.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1745_fu_26789_p2() {
    tmp_1745_fu_26789_p2 = (!p_shl570_cast_fu_26785_p1.read().is_01() || !tmp_828_cast1_fu_26775_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl570_cast_fu_26785_p1.read()) - sc_biguint<13>(tmp_828_cast1_fu_26775_p1.read()));
}

void ShuffleNetV2::thread_tmp_1746_fu_26795_p2() {
    tmp_1746_fu_26795_p2 = (!tmp_1745_fu_26789_p2.read().is_01() || !tmp_808_cast1_reg_40768.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1745_fu_26789_p2.read()) + sc_biguint<13>(tmp_808_cast1_reg_40768.read()));
}

void ShuffleNetV2::thread_tmp_1747_fu_26820_p3() {
    tmp_1747_fu_26820_p3 = esl_concat<13,2>(tmp_1746_reg_40826.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1748_fu_26831_p2() {
    tmp_1748_fu_26831_p2 = (!p_shl258_fu_26827_p1.read().is_01() || !tmp_2013_cast_fu_26817_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl258_fu_26827_p1.read()) - sc_bigint<64>(tmp_2013_cast_fu_26817_p1.read()));
}

void ShuffleNetV2::thread_tmp_1749_fu_26837_p2() {
    tmp_1749_fu_26837_p2 = (!tmp_1748_fu_26831_p2.read().is_01() || !tmp_815_reg_40786.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1748_fu_26831_p2.read()) + sc_biguint<64>(tmp_815_reg_40786.read()));
}

void ShuffleNetV2::thread_tmp_1750_fu_27425_p3() {
    tmp_1750_fu_27425_p3 = esl_concat<6,3>(co144_reg_7291.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1751_cast_fu_21744_p1() {
    tmp_1751_cast_fu_21744_p1 = esl_sext<18,17>(tmp_1527_fu_21738_p2.read());
}

void ShuffleNetV2::thread_tmp_1751_fu_27437_p3() {
    tmp_1751_fu_27437_p3 = esl_concat<6,1>(co144_reg_7291.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1752_cast_fu_21753_p1() {
    tmp_1752_cast_fu_21753_p1 = esl_sext<33,18>(tmp_1528_fu_21748_p2.read());
}

void ShuffleNetV2::thread_tmp_1752_fu_27449_p2() {
    tmp_1752_fu_27449_p2 = (!p_shl578_cast_fu_27445_p1.read().is_01() || !p_shl577_cast_fu_27433_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl578_cast_fu_27445_p1.read()) + sc_biguint<10>(p_shl577_cast_fu_27433_p1.read()));
}

void ShuffleNetV2::thread_tmp_1753_fu_27329_p1() {
    tmp_1753_fu_27329_p1 = k60_reg_7280.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1754_fu_27088_p1() {
    tmp_1754_fu_27088_p1 = i138_reg_7258.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1755_fu_27122_p1() {
    tmp_1755_fu_27122_p1 = tmp_834_fu_27116_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1756_fu_27230_p3() {
    tmp_1756_fu_27230_p3 = esl_concat<12,5>(tmp_837_reg_40939.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1757_fu_27241_p3() {
    tmp_1757_fu_27241_p3 = esl_concat<12,3>(tmp_837_reg_40939.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1758_cast_fu_21772_p1() {
    tmp_1758_cast_fu_21772_p1 = esl_sext<64,10>(tmp_1532_reg_38984.read());
}

void ShuffleNetV2::thread_tmp_1758_fu_27252_p2() {
    tmp_1758_fu_27252_p2 = (!p_shl575_cast_fu_27237_p1.read().is_01() || !p_shl576_cast_fu_27248_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl575_cast_fu_27237_p1.read()) - sc_biguint<18>(p_shl576_cast_fu_27248_p1.read()));
}

void ShuffleNetV2::thread_tmp_1759_fu_27262_p2() {
    tmp_1759_fu_27262_p2 = (!tmp_822_cast_reg_40926.read().is_01() || !tmp_2028_cast_fu_27258_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_822_cast_reg_40926.read()) + sc_bigint<19>(tmp_2028_cast_fu_27258_p1.read()));
}

void ShuffleNetV2::thread_tmp_1760_fu_27199_p3() {
    tmp_1760_fu_27199_p3 = esl_concat<4,6>(tmp_838_fu_27189_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1761_fu_27207_p3() {
    tmp_1761_fu_27207_p3 = esl_concat<4,4>(tmp_838_fu_27189_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1762_fu_27219_p2() {
    tmp_1762_fu_27219_p2 = (!tmp_1760_fu_27199_p3.read().is_01() || !p_shl574_cast_fu_27215_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1760_fu_27199_p3.read()) - sc_bigint<10>(p_shl574_cast_fu_27215_p1.read()));
}

void ShuffleNetV2::thread_tmp_1763_fu_27225_p2() {
    tmp_1763_fu_27225_p2 = (!tmp_819_cast_reg_40921.read().is_01() || !tmp_1762_fu_27219_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_819_cast_reg_40921.read()) + sc_biguint<10>(tmp_1762_fu_27219_p2.read()));
}

void ShuffleNetV2::thread_tmp_1764_fu_27548_p1() {
    tmp_1764_fu_27548_p1 = co146_reg_7324.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1765_fu_27564_p2() {
    tmp_1765_fu_27564_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co146_reg_7324.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1766_fu_27471_p2() {
    tmp_1766_fu_27471_p2 = (!tmp_840_cast_fu_27467_p1.read().is_01() || !tmp_1752_reg_41050.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_840_cast_fu_27467_p1.read()) + sc_biguint<10>(tmp_1752_reg_41050.read()));
}

void ShuffleNetV2::thread_tmp_1767_cast_fu_22049_p1() {
    tmp_1767_cast_fu_22049_p1 = esl_sext<36,35>(tmp_1538_fu_22043_p2.read());
}

void ShuffleNetV2::thread_tmp_1767_fu_27476_p3() {
    tmp_1767_fu_27476_p3 = esl_concat<10,3>(tmp_1766_fu_27471_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1768_fu_27488_p3() {
    tmp_1768_fu_27488_p3 = esl_concat<10,1>(tmp_1766_fu_27471_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1769_fu_27500_p2() {
    tmp_1769_fu_27500_p2 = (!p_shl579_cast_fu_27484_p1.read().is_01() || !p_shl580_cast_fu_27496_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl579_cast_fu_27484_p1.read()) + sc_biguint<15>(p_shl580_cast_fu_27496_p1.read()));
}

void ShuffleNetV2::thread_tmp_1770_fu_27522_p2() {
    tmp_1770_fu_27522_p2 = (!tmp_1769_reg_41063.read().is_01() || !tmp_847_cast1_fu_27518_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1769_reg_41063.read()) + sc_biguint<15>(tmp_847_cast1_fu_27518_p1.read()));
}

void ShuffleNetV2::thread_tmp_1771_cast_fu_22152_p1() {
    tmp_1771_cast_fu_22152_p1 = esl_zext<64,10>(tmp_1543_reg_39167.read());
}

void ShuffleNetV2::thread_tmp_1771_fu_27858_p1() {
    tmp_1771_fu_27858_p1 = k62_reg_7368.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1772_fu_27635_p1() {
    tmp_1772_fu_27635_p1 = i142_reg_7346.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1773_fu_27655_p2() {
    tmp_1773_fu_27655_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i142_reg_7346.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1774_fu_27671_p1() {
    tmp_1774_fu_27671_p1 = tmp_853_fu_27665_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1775_cast_fu_22116_p1() {
    tmp_1775_cast_fu_22116_p1 = esl_sext<64,12>(tmp_1547_reg_39161.read());
}

void ShuffleNetV2::thread_tmp_1775_fu_27759_p3() {
    tmp_1775_fu_27759_p3 = esl_concat<12,5>(tmp_856_reg_41140.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1776_fu_27770_p3() {
    tmp_1776_fu_27770_p3 = esl_concat<12,3>(tmp_856_reg_41140.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1777_fu_27781_p2() {
    tmp_1777_fu_27781_p2 = (!p_shl583_cast_fu_27766_p1.read().is_01() || !p_shl584_cast_fu_27777_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl583_cast_fu_27766_p1.read()) - sc_biguint<18>(p_shl584_cast_fu_27777_p1.read()));
}

void ShuffleNetV2::thread_tmp_1778_fu_27791_p2() {
    tmp_1778_fu_27791_p2 = (!tmp_846_cast_reg_41127.read().is_01() || !tmp_2050_cast_fu_27787_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_846_cast_reg_41127.read()) + sc_bigint<19>(tmp_2050_cast_fu_27787_p1.read()));
}

void ShuffleNetV2::thread_tmp_1779_fu_27728_p3() {
    tmp_1779_fu_27728_p3 = esl_concat<5,7>(tmp_857_fu_27718_p4.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1780_fu_27736_p3() {
    tmp_1780_fu_27736_p3 = esl_concat<5,5>(tmp_857_fu_27718_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1781_fu_27748_p2() {
    tmp_1781_fu_27748_p2 = (!tmp_1779_fu_27728_p3.read().is_01() || !p_shl582_cast_fu_27744_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1779_fu_27728_p3.read()) - sc_bigint<12>(p_shl582_cast_fu_27744_p1.read()));
}

void ShuffleNetV2::thread_tmp_1782_fu_27754_p2() {
    tmp_1782_fu_27754_p2 = (!tmp_845_cast_reg_41122.read().is_01() || !tmp_1781_fu_27748_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_845_cast_reg_41122.read()) + sc_biguint<12>(tmp_1781_fu_27748_p2.read()));
}

void ShuffleNetV2::thread_tmp_1783_fu_28327_p1() {
    tmp_1783_fu_28327_p1 = co150_reg_7445.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1784_fu_28343_p2() {
    tmp_1784_fu_28343_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co150_reg_7445.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1785_fu_28227_p1() {
    tmp_1785_fu_28227_p1 = k64_reg_7434.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1786_fu_28014_p1() {
    tmp_1786_fu_28014_p1 = i147_reg_7412.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1787_fu_28075_p3() {
    tmp_1787_fu_28075_p3 = esl_concat<8,2>(tmp_873_reg_41305.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1788_fu_28082_p1() {
    tmp_1788_fu_28082_p1 = esl_sext<34,10>(tmp_1787_fu_28075_p3.read());
}

void ShuffleNetV2::thread_tmp_1789_fu_28090_p2() {
    tmp_1789_fu_28090_p2 = (!p_shl588_cast_fu_28086_p1.read().is_01() || !tmp_876_cast_fu_28071_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl588_cast_fu_28086_p1.read()) - sc_biguint<35>(tmp_876_cast_fu_28071_p1.read()));
}

void ShuffleNetV2::thread_tmp_1790_cast_fu_22545_p1() {
    tmp_1790_cast_fu_22545_p1 = esl_sext<18,17>(tmp_1559_fu_22539_p2.read());
}

void ShuffleNetV2::thread_tmp_1790_fu_28100_p2() {
    tmp_1790_fu_28100_p2 = (!tmp_2066_cast_fu_28096_p1.read().is_01() || !tmp_858_cast_reg_41274.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2066_cast_fu_28096_p1.read()) + sc_biguint<36>(tmp_858_cast_reg_41274.read()));
}

void ShuffleNetV2::thread_tmp_1791_cast_fu_22554_p1() {
    tmp_1791_cast_fu_22554_p1 = esl_sext<33,18>(tmp_1560_fu_22549_p2.read());
}

void ShuffleNetV2::thread_tmp_1791_fu_28105_p1() {
    tmp_1791_fu_28105_p1 = tmp_1790_fu_28100_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1792_fu_28109_p1() {
    tmp_1792_fu_28109_p1 = tmp_1790_fu_28100_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1793_fu_28145_p2() {
    tmp_1793_fu_28145_p2 = (!p_shl587_cast_fu_28138_p3.read().is_01() || !tmp_1791_reg_41317.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl587_cast_fu_28138_p3.read()) - sc_biguint<11>(tmp_1791_reg_41317.read()));
}

void ShuffleNetV2::thread_tmp_1794_fu_28150_p2() {
    tmp_1794_fu_28150_p2 = (!tmp_1793_fu_28145_p2.read().is_01() || !tmp_866_cast_reg_41292.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1793_fu_28145_p2.read()) + sc_biguint<11>(tmp_866_cast_reg_41292.read()));
}

void ShuffleNetV2::thread_tmp_1795_fu_28116_p3() {
    tmp_1795_fu_28116_p3 = esl_concat<10,2>(tmp_878_reg_41311.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1796_fu_28127_p2() {
    tmp_1796_fu_28127_p2 = (!p_shl586_cast_fu_28123_p1.read().is_01() || !tmp_879_cast_fu_28113_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl586_cast_fu_28123_p1.read()) - sc_biguint<13>(tmp_879_cast_fu_28113_p1.read()));
}

void ShuffleNetV2::thread_tmp_1797_cast_fu_22573_p1() {
    tmp_1797_cast_fu_22573_p1 = esl_sext<64,10>(tmp_1564_reg_39284.read());
}

void ShuffleNetV2::thread_tmp_1797_fu_28133_p2() {
    tmp_1797_fu_28133_p2 = (!tmp_1796_fu_28127_p2.read().is_01() || !tmp_858_cast1_reg_41269.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1796_fu_28127_p2.read()) + sc_biguint<13>(tmp_858_cast1_reg_41269.read()));
}

void ShuffleNetV2::thread_tmp_1798_fu_28158_p3() {
    tmp_1798_fu_28158_p3 = esl_concat<13,2>(tmp_1797_reg_41327.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1799_fu_28169_p2() {
    tmp_1799_fu_28169_p2 = (!p_shl262_fu_28165_p1.read().is_01() || !tmp_2073_cast_fu_28155_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl262_fu_28165_p1.read()) - sc_bigint<64>(tmp_2073_cast_fu_28155_p1.read()));
}

void ShuffleNetV2::thread_tmp_1800_fu_28175_p2() {
    tmp_1800_fu_28175_p2 = (!tmp_1799_fu_28169_p2.read().is_01() || !tmp_866_reg_41287.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1799_fu_28169_p2.read()) + sc_biguint<64>(tmp_866_reg_41287.read()));
}

void ShuffleNetV2::thread_tmp_1801_fu_28637_p1() {
    tmp_1801_fu_28637_p1 = k66_reg_7489.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1802_fu_28414_p1() {
    tmp_1802_fu_28414_p1 = i149_reg_7467.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1803_fu_28434_p2() {
    tmp_1803_fu_28434_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i149_reg_7467.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1804_fu_28450_p1() {
    tmp_1804_fu_28450_p1 = tmp_885_fu_28444_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1805_fu_28538_p3() {
    tmp_1805_fu_28538_p3 = esl_concat<12,5>(tmp_888_reg_41440.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1806_fu_28549_p3() {
    tmp_1806_fu_28549_p3 = esl_concat<12,3>(tmp_888_reg_41440.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1807_fu_28560_p2() {
    tmp_1807_fu_28560_p2 = (!p_shl591_cast_fu_28545_p1.read().is_01() || !p_shl592_cast_fu_28556_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl591_cast_fu_28545_p1.read()) - sc_biguint<18>(p_shl592_cast_fu_28556_p1.read()));
}

void ShuffleNetV2::thread_tmp_1808_fu_28570_p2() {
    tmp_1808_fu_28570_p2 = (!tmp_869_cast1_reg_41427.read().is_01() || !tmp_2084_cast_fu_28566_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_869_cast1_reg_41427.read()) + sc_bigint<19>(tmp_2084_cast_fu_28566_p1.read()));
}

void ShuffleNetV2::thread_tmp_1809_fu_28507_p3() {
    tmp_1809_fu_28507_p3 = esl_concat<5,7>(tmp_889_fu_28497_p4.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1810_fu_28515_p3() {
    tmp_1810_fu_28515_p3 = esl_concat<5,5>(tmp_889_fu_28497_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1811_fu_28527_p2() {
    tmp_1811_fu_28527_p2 = (!tmp_1809_fu_28507_p3.read().is_01() || !p_shl590_cast_fu_28523_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1809_fu_28507_p3.read()) - sc_bigint<12>(p_shl590_cast_fu_28523_p1.read()));
}

void ShuffleNetV2::thread_tmp_1812_fu_28533_p2() {
    tmp_1812_fu_28533_p2 = (!tmp_868_cast1_reg_41422.read().is_01() || !tmp_1811_fu_28527_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_868_cast1_reg_41422.read()) + sc_biguint<12>(tmp_1811_fu_28527_p2.read()));
}

void ShuffleNetV2::thread_tmp_1813_fu_29106_p1() {
    tmp_1813_fu_29106_p1 = co154_reg_7566.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1814_fu_29122_p2() {
    tmp_1814_fu_29122_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co154_reg_7566.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1815_fu_29010_p1() {
    tmp_1815_fu_29010_p1 = k68_reg_7555.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1816_fu_28797_p1() {
    tmp_1816_fu_28797_p1 = i154_reg_7533.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1817_fu_28858_p3() {
    tmp_1817_fu_28858_p3 = esl_concat<8,2>(tmp_905_reg_41605.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1818_cast_fu_22810_p1() {
    tmp_1818_cast_fu_22810_p1 = esl_zext<64,15>(tmp_1584_fu_22805_p2.read());
}

void ShuffleNetV2::thread_tmp_1818_fu_28865_p1() {
    tmp_1818_fu_28865_p1 = esl_sext<34,10>(tmp_1817_fu_28858_p3.read());
}

void ShuffleNetV2::thread_tmp_1819_cast_fu_23022_p1() {
    tmp_1819_cast_fu_23022_p1 = esl_zext<64,14>(tmp_1585_reg_39465.read());
}

void ShuffleNetV2::thread_tmp_1819_fu_28873_p2() {
    tmp_1819_fu_28873_p2 = (!p_shl596_cast_fu_28869_p1.read().is_01() || !tmp_906_cast_fu_28854_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl596_cast_fu_28869_p1.read()) - sc_biguint<35>(tmp_906_cast_fu_28854_p1.read()));
}

void ShuffleNetV2::thread_tmp_1820_cast_fu_23017_p1() {
    tmp_1820_cast_fu_23017_p1 = esl_zext<64,15>(tmp_1586_fu_23012_p2.read());
}

void ShuffleNetV2::thread_tmp_1820_fu_28883_p2() {
    tmp_1820_fu_28883_p2 = (!tmp_2100_cast_fu_28879_p1.read().is_01() || !tmp_890_cast_reg_41574.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2100_cast_fu_28879_p1.read()) + sc_biguint<36>(tmp_890_cast_reg_41574.read()));
}

void ShuffleNetV2::thread_tmp_1821_fu_28888_p1() {
    tmp_1821_fu_28888_p1 = tmp_1820_fu_28883_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1822_fu_28892_p1() {
    tmp_1822_fu_28892_p1 = tmp_1820_fu_28883_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1823_fu_28928_p2() {
    tmp_1823_fu_28928_p2 = (!p_shl595_cast_fu_28921_p3.read().is_01() || !tmp_1821_reg_41617.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl595_cast_fu_28921_p3.read()) - sc_biguint<11>(tmp_1821_reg_41617.read()));
}

void ShuffleNetV2::thread_tmp_1824_fu_28933_p2() {
    tmp_1824_fu_28933_p2 = (!tmp_1823_fu_28928_p2.read().is_01() || !tmp_900_cast_reg_41592.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1823_fu_28928_p2.read()) + sc_biguint<11>(tmp_900_cast_reg_41592.read()));
}

void ShuffleNetV2::thread_tmp_1825_fu_28899_p3() {
    tmp_1825_fu_28899_p3 = esl_concat<10,2>(tmp_907_reg_41611.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1826_fu_28910_p2() {
    tmp_1826_fu_28910_p2 = (!p_shl594_cast_fu_28906_p1.read().is_01() || !tmp_908_cast_fu_28896_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl594_cast_fu_28906_p1.read()) - sc_biguint<13>(tmp_908_cast_fu_28896_p1.read()));
}

void ShuffleNetV2::thread_tmp_1827_fu_28916_p2() {
    tmp_1827_fu_28916_p2 = (!tmp_1826_fu_28910_p2.read().is_01() || !tmp_890_cast1_reg_41569.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1826_fu_28910_p2.read()) + sc_biguint<13>(tmp_890_cast1_reg_41569.read()));
}

void ShuffleNetV2::thread_tmp_1828_fu_28941_p3() {
    tmp_1828_fu_28941_p3 = esl_concat<13,2>(tmp_1827_reg_41627.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1829_cast_fu_23303_p1() {
    tmp_1829_cast_fu_23303_p1 = esl_sext<18,17>(tmp_1592_fu_23297_p2.read());
}

void ShuffleNetV2::thread_tmp_1829_fu_28952_p2() {
    tmp_1829_fu_28952_p2 = (!p_shl267_fu_28948_p1.read().is_01() || !tmp_2107_cast_fu_28938_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl267_fu_28948_p1.read()) - sc_bigint<64>(tmp_2107_cast_fu_28938_p1.read()));
}

void ShuffleNetV2::thread_tmp_1830_cast_fu_23312_p1() {
    tmp_1830_cast_fu_23312_p1 = esl_sext<33,18>(tmp_1593_fu_23307_p2.read());
}

void ShuffleNetV2::thread_tmp_1830_fu_28958_p2() {
    tmp_1830_fu_28958_p2 = (!tmp_1829_fu_28952_p2.read().is_01() || !tmp_900_reg_41587.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1829_fu_28952_p2.read()) + sc_biguint<64>(tmp_900_reg_41587.read()));
}

void ShuffleNetV2::thread_tmp_1831_fu_29512_p3() {
    tmp_1831_fu_29512_p3 = esl_concat<7,3>(co156_reg_7621.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1832_fu_29524_p3() {
    tmp_1832_fu_29524_p3 = esl_concat<7,1>(co156_reg_7621.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1833_fu_29536_p2() {
    tmp_1833_fu_29536_p2 = (!p_shl603_cast_fu_29520_p1.read().is_01() || !p_shl604_cast_fu_29532_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl603_cast_fu_29520_p1.read()) - sc_biguint<11>(p_shl604_cast_fu_29532_p1.read()));
}

void ShuffleNetV2::thread_tmp_1834_fu_29552_p3() {
    tmp_1834_fu_29552_p3 = esl_concat<8,3>(tmp_909_fu_29546_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1835_fu_29564_p3() {
    tmp_1835_fu_29564_p3 = esl_concat<8,1>(tmp_909_fu_29546_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1836_cast_fu_23331_p1() {
    tmp_1836_cast_fu_23331_p1 = esl_sext<64,10>(tmp_1597_reg_39539.read());
}

void ShuffleNetV2::thread_tmp_1836_fu_29576_p2() {
    tmp_1836_fu_29576_p2 = (!p_shl601_cast_fu_29560_p1.read().is_01() || !p_shl602_cast_fu_29572_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl601_cast_fu_29560_p1.read()) - sc_biguint<12>(p_shl602_cast_fu_29572_p1.read()));
}

void ShuffleNetV2::thread_tmp_1837_fu_29416_p1() {
    tmp_1837_fu_29416_p1 = k70_reg_7610.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1838_fu_29193_p1() {
    tmp_1838_fu_29193_p1 = i156_reg_7588.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1839_fu_29213_p2() {
    tmp_1839_fu_29213_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i156_reg_7588.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1840_fu_29229_p1() {
    tmp_1840_fu_29229_p1 = tmp_916_fu_29223_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1841_fu_29317_p3() {
    tmp_1841_fu_29317_p3 = esl_concat<12,5>(tmp_919_reg_41740.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1842_fu_29328_p3() {
    tmp_1842_fu_29328_p3 = esl_concat<12,3>(tmp_919_reg_41740.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1843_fu_29339_p2() {
    tmp_1843_fu_29339_p2 = (!p_shl599_cast_fu_29324_p1.read().is_01() || !p_shl600_cast_fu_29335_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl599_cast_fu_29324_p1.read()) - sc_biguint<18>(p_shl600_cast_fu_29335_p1.read()));
}

void ShuffleNetV2::thread_tmp_1844_fu_29349_p2() {
    tmp_1844_fu_29349_p2 = (!tmp_903_cast_reg_41727.read().is_01() || !tmp_2124_cast_fu_29345_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_903_cast_reg_41727.read()) + sc_bigint<19>(tmp_2124_cast_fu_29345_p1.read()));
}

void ShuffleNetV2::thread_tmp_1845_cast_fu_23608_p1() {
    tmp_1845_cast_fu_23608_p1 = esl_sext<36,35>(tmp_1603_fu_23602_p2.read());
}

void ShuffleNetV2::thread_tmp_1845_fu_29286_p3() {
    tmp_1845_fu_29286_p3 = esl_concat<5,7>(tmp_920_fu_29276_p4.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1846_fu_29294_p3() {
    tmp_1846_fu_29294_p3 = esl_concat<5,5>(tmp_920_fu_29276_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1847_fu_29306_p2() {
    tmp_1847_fu_29306_p2 = (!tmp_1845_fu_29286_p3.read().is_01() || !p_shl598_cast_fu_29302_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1845_fu_29286_p3.read()) - sc_bigint<12>(p_shl598_cast_fu_29302_p1.read()));
}

void ShuffleNetV2::thread_tmp_1848_fu_29312_p2() {
    tmp_1848_fu_29312_p2 = (!tmp_902_cast_reg_41722.read().is_01() || !tmp_1847_fu_29306_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_902_cast_reg_41722.read()) + sc_biguint<12>(tmp_1847_fu_29306_p2.read()));
}

void ShuffleNetV2::thread_tmp_1849_cast_fu_23715_p1() {
    tmp_1849_cast_fu_23715_p1 = esl_zext<64,10>(tmp_1608_reg_39722.read());
}

void ShuffleNetV2::thread_tmp_1849_fu_29723_p1() {
    tmp_1849_fu_29723_p1 = co158_reg_7654.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1850_fu_29739_p2() {
    tmp_1850_fu_29739_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co158_reg_7654.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1851_fu_29606_p2() {
    tmp_1851_fu_29606_p2 = (!tmp_922_cast_fu_29602_p1.read().is_01() || !tmp_2116_cast_reg_41856.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_922_cast_fu_29602_p1.read()) + sc_bigint<13>(tmp_2116_cast_reg_41856.read()));
}

void ShuffleNetV2::thread_tmp_1852_cast_fu_23653_p1() {
    tmp_1852_cast_fu_23653_p1 = esl_sext<13,12>(tmp_1611_fu_23647_p2.read());
}

void ShuffleNetV2::thread_tmp_1852_fu_29611_p1() {
    tmp_1852_fu_29611_p1 = tmp_1851_fu_29606_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1853_cast_fu_23679_p1() {
    tmp_1853_cast_fu_23679_p1 = esl_sext<64,13>(tmp_1612_reg_39716.read());
}

void ShuffleNetV2::thread_tmp_1853_fu_29631_p2() {
    tmp_1853_fu_29631_p2 = (!p_shl607_cast_fu_29615_p3.read().is_01() || !p_shl608_cast_fu_29623_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl607_cast_fu_29615_p3.read()) - sc_biguint<14>(p_shl608_cast_fu_29623_p3.read()));
}

void ShuffleNetV2::thread_tmp_1854_fu_29637_p2() {
    tmp_1854_fu_29637_p2 = (!tmp_922_cast1_fu_29598_p1.read().is_01() || !tmp_2113_cast_reg_41851.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_922_cast1_fu_29598_p1.read()) + sc_bigint<12>(tmp_2113_cast_reg_41851.read()));
}

void ShuffleNetV2::thread_tmp_1855_fu_29642_p1() {
    tmp_1855_fu_29642_p1 = tmp_1854_fu_29637_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1856_fu_29662_p2() {
    tmp_1856_fu_29662_p2 = (!p_shl605_cast_fu_29646_p3.read().is_01() || !p_shl606_cast_fu_29654_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl605_cast_fu_29646_p3.read()) - sc_biguint<13>(p_shl606_cast_fu_29654_p3.read()));
}

void ShuffleNetV2::thread_tmp_1857_fu_29688_p2() {
    tmp_1857_fu_29688_p2 = (!tmp_1853_reg_41869.read().is_01() || !tmp_929_cast_fu_29684_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1853_reg_41869.read()) + sc_biguint<14>(tmp_929_cast_fu_29684_p1.read()));
}

void ShuffleNetV2::thread_tmp_1858_fu_29698_p2() {
    tmp_1858_fu_29698_p2 = (!tmp_1856_reg_41874.read().is_01() || !tmp_929_cast1_fu_29680_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1856_reg_41874.read()) + sc_biguint<13>(tmp_929_cast1_fu_29680_p1.read()));
}

void ShuffleNetV2::thread_tmp_1859_fu_30033_p1() {
    tmp_1859_fu_30033_p1 = k72_reg_7698.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1860_fu_29810_p1() {
    tmp_1860_fu_29810_p1 = i160_reg_7676.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1861_fu_29830_p2() {
    tmp_1861_fu_29830_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i160_reg_7676.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1862_fu_29846_p1() {
    tmp_1862_fu_29846_p1 = tmp_935_fu_29840_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1863_fu_29934_p3() {
    tmp_1863_fu_29934_p3 = esl_concat<12,5>(tmp_938_reg_41951.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1864_fu_29945_p3() {
    tmp_1864_fu_29945_p3 = esl_concat<12,3>(tmp_938_reg_41951.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1865_fu_29956_p2() {
    tmp_1865_fu_29956_p2 = (!p_shl611_cast_fu_29941_p1.read().is_01() || !p_shl612_cast_fu_29952_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl611_cast_fu_29941_p1.read()) - sc_biguint<18>(p_shl612_cast_fu_29952_p1.read()));
}

void ShuffleNetV2::thread_tmp_1866_fu_29966_p2() {
    tmp_1866_fu_29966_p2 = (!tmp_927_cast1_reg_41938.read().is_01() || !tmp_2151_cast_fu_29962_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_927_cast1_reg_41938.read()) + sc_bigint<19>(tmp_2151_cast_fu_29962_p1.read()));
}

void ShuffleNetV2::thread_tmp_1867_fu_29903_p3() {
    tmp_1867_fu_29903_p3 = esl_concat<5,7>(tmp_939_fu_29893_p4.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1868_cast_fu_24108_p1() {
    tmp_1868_cast_fu_24108_p1 = esl_sext<18,17>(tmp_1624_fu_24102_p2.read());
}

void ShuffleNetV2::thread_tmp_1868_fu_29911_p3() {
    tmp_1868_fu_29911_p3 = esl_concat<5,5>(tmp_939_fu_29893_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1869_cast_fu_24117_p1() {
    tmp_1869_cast_fu_24117_p1 = esl_sext<33,18>(tmp_1625_fu_24112_p2.read());
}

void ShuffleNetV2::thread_tmp_1869_fu_29923_p2() {
    tmp_1869_fu_29923_p2 = (!tmp_1867_fu_29903_p3.read().is_01() || !p_shl610_cast_fu_29919_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1867_fu_29903_p3.read()) - sc_bigint<12>(p_shl610_cast_fu_29919_p1.read()));
}

void ShuffleNetV2::thread_tmp_1870_fu_29929_p2() {
    tmp_1870_fu_29929_p2 = (!tmp_924_cast_reg_41933.read().is_01() || !tmp_1869_fu_29923_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_924_cast_reg_41933.read()) + sc_biguint<12>(tmp_1869_fu_29923_p2.read()));
}

void ShuffleNetV2::thread_tmp_1871_fu_30494_p1() {
    tmp_1871_fu_30494_p1 = co162_reg_7775.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1872_fu_30510_p2() {
    tmp_1872_fu_30510_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co162_reg_7775.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1873_fu_30398_p1() {
    tmp_1873_fu_30398_p1 = k74_reg_7764.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1874_fu_30185_p1() {
    tmp_1874_fu_30185_p1 = i165_reg_7742.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1875_cast_fu_24136_p1() {
    tmp_1875_cast_fu_24136_p1 = esl_sext<64,10>(tmp_1629_reg_39839.read());
}

void ShuffleNetV2::thread_tmp_1875_fu_30246_p3() {
    tmp_1875_fu_30246_p3 = esl_concat<8,2>(tmp_955_reg_42116.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1876_fu_30253_p1() {
    tmp_1876_fu_30253_p1 = esl_sext<34,10>(tmp_1875_fu_30246_p3.read());
}

void ShuffleNetV2::thread_tmp_1877_fu_30261_p2() {
    tmp_1877_fu_30261_p2 = (!p_shl616_cast_fu_30257_p1.read().is_01() || !tmp_956_cast_fu_30242_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl616_cast_fu_30257_p1.read()) - sc_biguint<35>(tmp_956_cast_fu_30242_p1.read()));
}

void ShuffleNetV2::thread_tmp_1878_fu_30271_p2() {
    tmp_1878_fu_30271_p2 = (!tmp_2167_cast_fu_30267_p1.read().is_01() || !tmp_940_cast_reg_42085.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2167_cast_fu_30267_p1.read()) + sc_biguint<36>(tmp_940_cast_reg_42085.read()));
}

void ShuffleNetV2::thread_tmp_1879_fu_30276_p1() {
    tmp_1879_fu_30276_p1 = tmp_1878_fu_30271_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1880_fu_30280_p1() {
    tmp_1880_fu_30280_p1 = tmp_1878_fu_30271_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1881_fu_30316_p2() {
    tmp_1881_fu_30316_p2 = (!p_shl615_cast_fu_30309_p3.read().is_01() || !tmp_1879_reg_42128.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl615_cast_fu_30309_p3.read()) - sc_biguint<11>(tmp_1879_reg_42128.read()));
}

void ShuffleNetV2::thread_tmp_1882_fu_30321_p2() {
    tmp_1882_fu_30321_p2 = (!tmp_1881_fu_30316_p2.read().is_01() || !tmp_950_cast_reg_42103.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1881_fu_30316_p2.read()) + sc_biguint<11>(tmp_950_cast_reg_42103.read()));
}

void ShuffleNetV2::thread_tmp_1883_fu_30287_p3() {
    tmp_1883_fu_30287_p3 = esl_concat<10,2>(tmp_957_reg_42122.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1884_fu_30298_p2() {
    tmp_1884_fu_30298_p2 = (!p_shl614_cast_fu_30294_p1.read().is_01() || !tmp_958_cast_fu_30284_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl614_cast_fu_30294_p1.read()) - sc_biguint<13>(tmp_958_cast_fu_30284_p1.read()));
}

void ShuffleNetV2::thread_tmp_1885_fu_30304_p2() {
    tmp_1885_fu_30304_p2 = (!tmp_1884_fu_30298_p2.read().is_01() || !tmp_940_cast1_reg_42080.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1884_fu_30298_p2.read()) + sc_biguint<13>(tmp_940_cast1_reg_42080.read()));
}

void ShuffleNetV2::thread_tmp_1886_fu_30329_p3() {
    tmp_1886_fu_30329_p3 = esl_concat<13,2>(tmp_1885_reg_42138.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1887_fu_30340_p2() {
    tmp_1887_fu_30340_p2 = (!p_shl273_fu_30336_p1.read().is_01() || !tmp_2174_cast_fu_30326_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl273_fu_30336_p1.read()) - sc_bigint<64>(tmp_2174_cast_fu_30326_p1.read()));
}

void ShuffleNetV2::thread_tmp_1888_fu_30346_p2() {
    tmp_1888_fu_30346_p2 = (!tmp_1887_fu_30340_p2.read().is_01() || !tmp_950_reg_42098.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1887_fu_30340_p2.read()) + sc_biguint<64>(tmp_950_reg_42098.read()));
}

void ShuffleNetV2::thread_tmp_1889_fu_30904_p3() {
    tmp_1889_fu_30904_p3 = esl_concat<7,3>(co164_reg_7830.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1890_fu_30916_p3() {
    tmp_1890_fu_30916_p3 = esl_concat<7,1>(co164_reg_7830.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1891_fu_30928_p2() {
    tmp_1891_fu_30928_p2 = (!p_shl621_cast_fu_30912_p1.read().is_01() || !p_shl622_cast_fu_30924_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl621_cast_fu_30912_p1.read()) - sc_biguint<11>(p_shl622_cast_fu_30924_p1.read()));
}

void ShuffleNetV2::thread_tmp_1892_fu_30812_p1() {
    tmp_1892_fu_30812_p1 = k76_reg_7819.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1893_fu_30581_p1() {
    tmp_1893_fu_30581_p1 = i167_reg_7797.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1894_fu_30601_p2() {
    tmp_1894_fu_30601_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i167_reg_7797.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1895_fu_30617_p1() {
    tmp_1895_fu_30617_p1 = tmp_964_fu_30611_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1896_cast_fu_24373_p1() {
    tmp_1896_cast_fu_24373_p1 = esl_zext<64,15>(tmp_1649_fu_24368_p2.read());
}

void ShuffleNetV2::thread_tmp_1896_fu_30705_p3() {
    tmp_1896_fu_30705_p3 = esl_concat<11,5>(tmp_967_reg_42251.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1897_cast_fu_24585_p1() {
    tmp_1897_cast_fu_24585_p1 = esl_zext<64,14>(tmp_1650_reg_40020.read());
}

void ShuffleNetV2::thread_tmp_1897_fu_30712_p1() {
    tmp_1897_fu_30712_p1 = esl_sext<17,16>(tmp_1896_fu_30705_p3.read());
}

void ShuffleNetV2::thread_tmp_1898_cast_fu_24580_p1() {
    tmp_1898_cast_fu_24580_p1 = esl_zext<64,15>(tmp_1651_fu_24575_p2.read());
}

void ShuffleNetV2::thread_tmp_1898_fu_30720_p3() {
    tmp_1898_fu_30720_p3 = esl_concat<11,3>(tmp_967_reg_42251.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1899_fu_30727_p1() {
    tmp_1899_fu_30727_p1 = esl_sext<15,14>(tmp_1898_fu_30720_p3.read());
}

void ShuffleNetV2::thread_tmp_1900_fu_30735_p2() {
    tmp_1900_fu_30735_p2 = (!p_shl619_cast_fu_30716_p1.read().is_01() || !p_shl620_cast_fu_30731_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl619_cast_fu_30716_p1.read()) - sc_biguint<18>(p_shl620_cast_fu_30731_p1.read()));
}

void ShuffleNetV2::thread_tmp_1901_fu_30745_p2() {
    tmp_1901_fu_30745_p2 = (!tmp_953_cast_reg_42238.read().is_01() || !tmp_2190_cast_fu_30741_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_953_cast_reg_42238.read()) + sc_bigint<19>(tmp_2190_cast_fu_30741_p1.read()));
}

void ShuffleNetV2::thread_tmp_1902_fu_30674_p3() {
    tmp_1902_fu_30674_p3 = esl_concat<5,7>(tmp_968_fu_30664_p4.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1903_fu_30682_p3() {
    tmp_1903_fu_30682_p3 = esl_concat<5,5>(tmp_968_fu_30664_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1904_fu_30694_p2() {
    tmp_1904_fu_30694_p2 = (!tmp_1902_fu_30674_p3.read().is_01() || !p_shl618_cast_fu_30690_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1902_fu_30674_p3.read()) - sc_bigint<12>(p_shl618_cast_fu_30690_p1.read()));
}

void ShuffleNetV2::thread_tmp_1905_fu_30700_p2() {
    tmp_1905_fu_30700_p2 = (!tmp_952_cast_reg_42233.read().is_01() || !tmp_1904_fu_30694_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_952_cast_reg_42233.read()) + sc_biguint<12>(tmp_1904_fu_30694_p2.read()));
}

void ShuffleNetV2::thread_tmp_1906_fu_31031_p3() {
    tmp_1906_fu_31031_p3 = esl_concat<7,3>(co166_reg_7863.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1907_fu_31043_p3() {
    tmp_1907_fu_31043_p3 = esl_concat<7,1>(co166_reg_7863.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1908_fu_31055_p2() {
    tmp_1908_fu_31055_p2 = (!p_shl627_cast_fu_31039_p1.read().is_01() || !p_shl628_cast_fu_31051_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl627_cast_fu_31039_p1.read()) - sc_biguint<11>(p_shl628_cast_fu_31051_p1.read()));
}

void ShuffleNetV2::thread_tmp_1909_cast_fu_24874_p1() {
    tmp_1909_cast_fu_24874_p1 = esl_sext<18,17>(tmp_1659_fu_24868_p2.read());
}

void ShuffleNetV2::thread_tmp_1909_fu_31071_p3() {
    tmp_1909_fu_31071_p3 = esl_concat<8,3>(tmp_969_fu_31065_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1910_cast_fu_24883_p1() {
    tmp_1910_cast_fu_24883_p1 = esl_sext<33,18>(tmp_1660_fu_24878_p2.read());
}

void ShuffleNetV2::thread_tmp_1910_fu_31083_p3() {
    tmp_1910_fu_31083_p3 = esl_concat<8,1>(tmp_969_fu_31065_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1911_fu_31095_p2() {
    tmp_1911_fu_31095_p2 = (!p_shl625_cast_fu_31079_p1.read().is_01() || !p_shl626_cast_fu_31091_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl625_cast_fu_31079_p1.read()) - sc_biguint<12>(p_shl626_cast_fu_31091_p1.read()));
}

void ShuffleNetV2::thread_tmp_1912_fu_30954_p2() {
    tmp_1912_fu_30954_p2 = (!tmp_2180_cast_reg_42362.read().is_01() || !tmp_970_cast_fu_30950_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_2180_cast_reg_42362.read()) + sc_biguint<12>(tmp_970_cast_fu_30950_p1.read()));
}

void ShuffleNetV2::thread_tmp_1913_fu_30959_p1() {
    tmp_1913_fu_30959_p1 = tmp_1912_fu_30954_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1914_fu_30971_p3() {
    tmp_1914_fu_30971_p3 = esl_concat<12,1>(tmp_1912_fu_30954_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1915_fu_30983_p2() {
    tmp_1915_fu_30983_p2 = (!p_shl623_cast_fu_30963_p3.read().is_01() || !p_shl624_cast_fu_30979_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl623_cast_fu_30963_p3.read()) - sc_bigint<14>(p_shl624_cast_fu_30979_p1.read()));
}

void ShuffleNetV2::thread_tmp_1916_cast_fu_24902_p1() {
    tmp_1916_cast_fu_24902_p1 = esl_sext<64,10>(tmp_1664_reg_40094.read());
}

void ShuffleNetV2::thread_tmp_1916_fu_31242_p1() {
    tmp_1916_fu_31242_p1 = co168_reg_7896.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1917_fu_31258_p2() {
    tmp_1917_fu_31258_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co168_reg_7896.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1918_fu_31125_p2() {
    tmp_1918_fu_31125_p2 = (!tmp_972_cast_fu_31121_p1.read().is_01() || !tmp_2200_cast_reg_42406.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_972_cast_fu_31121_p1.read()) + sc_bigint<12>(tmp_2200_cast_reg_42406.read()));
}

void ShuffleNetV2::thread_tmp_1919_fu_31130_p1() {
    tmp_1919_fu_31130_p1 = tmp_1918_fu_31125_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1920_fu_31150_p2() {
    tmp_1920_fu_31150_p2 = (!p_shl631_cast_fu_31134_p3.read().is_01() || !p_shl632_cast_fu_31142_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl631_cast_fu_31134_p3.read()) - sc_biguint<13>(p_shl632_cast_fu_31142_p3.read()));
}

void ShuffleNetV2::thread_tmp_1921_fu_31156_p2() {
    tmp_1921_fu_31156_p2 = (!tmp_972_cast1_fu_31117_p1.read().is_01() || !tmp_2203_cast_reg_42411.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_972_cast1_fu_31117_p1.read()) + sc_bigint<13>(tmp_2203_cast_reg_42411.read()));
}

void ShuffleNetV2::thread_tmp_1922_fu_31161_p1() {
    tmp_1922_fu_31161_p1 = tmp_1921_fu_31156_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1923_fu_31181_p2() {
    tmp_1923_fu_31181_p2 = (!p_shl629_cast_fu_31165_p3.read().is_01() || !p_shl630_cast_fu_31173_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl629_cast_fu_31165_p3.read()) - sc_biguint<14>(p_shl630_cast_fu_31173_p3.read()));
}

void ShuffleNetV2::thread_tmp_1924_fu_31005_p2() {
    tmp_1924_fu_31005_p2 = (!tmp_1915_reg_42375.read().is_01() || !tmp_975_cast_fu_31001_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1915_reg_42375.read()) + sc_biguint<14>(tmp_975_cast_fu_31001_p1.read()));
}

void ShuffleNetV2::thread_tmp_1925_cast_fu_25179_p1() {
    tmp_1925_cast_fu_25179_p1 = esl_sext<36,35>(tmp_1670_fu_25173_p2.read());
}

void ShuffleNetV2::thread_tmp_1925_fu_31207_p2() {
    tmp_1925_fu_31207_p2 = (!tmp_1920_reg_42424.read().is_01() || !tmp_980_cast2_fu_31203_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1920_reg_42424.read()) + sc_biguint<13>(tmp_980_cast2_fu_31203_p1.read()));
}

void ShuffleNetV2::thread_tmp_1926_fu_31212_p2() {
    tmp_1926_fu_31212_p2 = (!tmp_1923_reg_42429.read().is_01() || !tmp_980_cast1_fu_31199_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1923_reg_42429.read()) + sc_biguint<14>(tmp_980_cast1_fu_31199_p1.read()));
}

void ShuffleNetV2::thread_tmp_1927_fu_31552_p1() {
    tmp_1927_fu_31552_p1 = k78_reg_7940.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1928_fu_31329_p1() {
    tmp_1928_fu_31329_p1 = i171_reg_7918.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1929_cast_fu_25278_p1() {
    tmp_1929_cast_fu_25278_p1 = esl_zext<64,10>(tmp_1675_reg_40277.read());
}

void ShuffleNetV2::thread_tmp_1929_fu_31349_p2() {
    tmp_1929_fu_31349_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i171_reg_7918.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1930_fu_31365_p1() {
    tmp_1930_fu_31365_p1 = tmp_986_fu_31359_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1931_cast_fu_25216_p1() {
    tmp_1931_cast_fu_25216_p1 = esl_sext<14,13>(tmp_1677_fu_25210_p2.read());
}

void ShuffleNetV2::thread_tmp_1931_fu_31453_p3() {
    tmp_1931_fu_31453_p3 = esl_concat<13,5>(tmp_989_reg_42506.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1932_cast_fu_25242_p1() {
    tmp_1932_cast_fu_25242_p1 = esl_sext<64,14>(tmp_1678_reg_40271.read());
}

void ShuffleNetV2::thread_tmp_1932_fu_31464_p3() {
    tmp_1932_fu_31464_p3 = esl_concat<13,3>(tmp_989_reg_42506.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1933_fu_31475_p2() {
    tmp_1933_fu_31475_p2 = (!p_shl635_cast_fu_31460_p1.read().is_01() || !p_shl636_cast_fu_31471_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl635_cast_fu_31460_p1.read()) - sc_biguint<19>(p_shl636_cast_fu_31471_p1.read()));
}

void ShuffleNetV2::thread_tmp_1934_fu_31485_p2() {
    tmp_1934_fu_31485_p2 = (!tmp_979_cast_reg_42493.read().is_01() || !tmp_2228_cast_fu_31481_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_979_cast_reg_42493.read()) + sc_bigint<20>(tmp_2228_cast_fu_31481_p1.read()));
}

void ShuffleNetV2::thread_tmp_1935_fu_31422_p3() {
    tmp_1935_fu_31422_p3 = esl_concat<5,7>(tmp_990_fu_31412_p4.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1936_fu_31430_p3() {
    tmp_1936_fu_31430_p3 = esl_concat<5,5>(tmp_990_fu_31412_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1937_fu_31442_p2() {
    tmp_1937_fu_31442_p2 = (!tmp_1935_fu_31422_p3.read().is_01() || !p_shl634_cast_fu_31438_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1935_fu_31422_p3.read()) - sc_bigint<12>(p_shl634_cast_fu_31438_p1.read()));
}

void ShuffleNetV2::thread_tmp_1938_fu_31448_p2() {
    tmp_1938_fu_31448_p2 = (!tmp_978_cast_reg_42488.read().is_01() || !tmp_1937_fu_31442_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_978_cast_reg_42488.read()) + sc_biguint<12>(tmp_1937_fu_31442_p2.read()));
}

void ShuffleNetV2::thread_tmp_1939_fu_32025_p1() {
    tmp_1939_fu_32025_p1 = co172_reg_8017.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1940_fu_32041_p2() {
    tmp_1940_fu_32041_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co172_reg_8017.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1941_fu_31929_p1() {
    tmp_1941_fu_31929_p1 = k80_reg_8006.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1942_fu_31704_p1() {
    tmp_1942_fu_31704_p1 = i176_reg_7984.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1943_fu_31765_p3() {
    tmp_1943_fu_31765_p3 = esl_concat<8,2>(tmp_1007_reg_42671.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1944_fu_31772_p1() {
    tmp_1944_fu_31772_p1 = esl_sext<34,10>(tmp_1943_fu_31765_p3.read());
}

void ShuffleNetV2::thread_tmp_1945_fu_31780_p2() {
    tmp_1945_fu_31780_p2 = (!p_shl640_cast_fu_31776_p1.read().is_01() || !tmp_1009_cast_fu_31761_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl640_cast_fu_31776_p1.read()) - sc_biguint<35>(tmp_1009_cast_fu_31761_p1.read()));
}

void ShuffleNetV2::thread_tmp_1946_fu_31790_p2() {
    tmp_1946_fu_31790_p2 = (!tmp_2244_cast_fu_31786_p1.read().is_01() || !tmp_991_cast_reg_42640.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2244_cast_fu_31786_p1.read()) + sc_biguint<36>(tmp_991_cast_reg_42640.read()));
}

void ShuffleNetV2::thread_tmp_1947_fu_31795_p1() {
    tmp_1947_fu_31795_p1 = tmp_1946_fu_31790_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1948_fu_31799_p1() {
    tmp_1948_fu_31799_p1 = tmp_1946_fu_31790_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1949_cast_fu_25679_p1() {
    tmp_1949_cast_fu_25679_p1 = esl_sext<18,17>(tmp_1692_fu_25673_p2.read());
}

void ShuffleNetV2::thread_tmp_1949_fu_31847_p2() {
    tmp_1949_fu_31847_p2 = (!p_shl639_cast_fu_31840_p3.read().is_01() || !tmp_1947_reg_42683.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl639_cast_fu_31840_p3.read()) - sc_biguint<11>(tmp_1947_reg_42683.read()));
}

void ShuffleNetV2::thread_tmp_1950_cast_fu_25688_p1() {
    tmp_1950_cast_fu_25688_p1 = esl_sext<33,18>(tmp_1693_fu_25683_p2.read());
}

void ShuffleNetV2::thread_tmp_1950_fu_31852_p2() {
    tmp_1950_fu_31852_p2 = (!tmp_1949_fu_31847_p2.read().is_01() || !tmp_1000_cast1_reg_42658.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1949_fu_31847_p2.read()) + sc_biguint<11>(tmp_1000_cast1_reg_42658.read()));
}

void ShuffleNetV2::thread_tmp_1951_fu_31810_p3() {
    tmp_1951_fu_31810_p3 = esl_concat<9,2>(tmp_1010_reg_42677.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1952_fu_31817_p1() {
    tmp_1952_fu_31817_p1 = esl_sext<12,11>(tmp_1951_fu_31810_p3.read());
}

void ShuffleNetV2::thread_tmp_1953_fu_31825_p2() {
    tmp_1953_fu_31825_p2 = (!p_shl638_cast_fu_31821_p1.read().is_01() || !tmp_1011_cast_fu_31806_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl638_cast_fu_31821_p1.read()) - sc_biguint<13>(tmp_1011_cast_fu_31806_p1.read()));
}

void ShuffleNetV2::thread_tmp_1954_fu_31835_p2() {
    tmp_1954_fu_31835_p2 = (!tmp_2251_cast_fu_31831_p1.read().is_01() || !tmp_991_cast1_reg_42635.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_2251_cast_fu_31831_p1.read()) + sc_biguint<14>(tmp_991_cast1_reg_42635.read()));
}

void ShuffleNetV2::thread_tmp_1955_fu_31860_p3() {
    tmp_1955_fu_31860_p3 = esl_concat<14,2>(tmp_1954_reg_42693.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1956_cast_fu_25707_p1() {
    tmp_1956_cast_fu_25707_p1 = esl_sext<64,10>(tmp_1697_reg_40394.read());
}

void ShuffleNetV2::thread_tmp_1956_fu_31871_p2() {
    tmp_1956_fu_31871_p2 = (!p_shl275_fu_31867_p1.read().is_01() || !tmp_2252_cast_fu_31857_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl275_fu_31867_p1.read()) - sc_bigint<64>(tmp_2252_cast_fu_31857_p1.read()));
}

void ShuffleNetV2::thread_tmp_1957_fu_31877_p2() {
    tmp_1957_fu_31877_p2 = (!tmp_1956_fu_31871_p2.read().is_01() || !tmp_1000_reg_42653.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1956_fu_31871_p2.read()) + sc_biguint<64>(tmp_1000_reg_42653.read()));
}

void ShuffleNetV2::thread_tmp_1958_fu_32427_p3() {
    tmp_1958_fu_32427_p3 = esl_concat<7,3>(co174_reg_8072.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1959_fu_32439_p3() {
    tmp_1959_fu_32439_p3 = esl_concat<7,1>(co174_reg_8072.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1960_fu_32451_p2() {
    tmp_1960_fu_32451_p2 = (!p_shl645_cast_fu_32435_p1.read().is_01() || !p_shl646_cast_fu_32447_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl645_cast_fu_32435_p1.read()) - sc_biguint<11>(p_shl646_cast_fu_32447_p1.read()));
}

void ShuffleNetV2::thread_tmp_1961_fu_32335_p1() {
    tmp_1961_fu_32335_p1 = k82_reg_8061.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1962_fu_32112_p1() {
    tmp_1962_fu_32112_p1 = i178_reg_8039.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1963_fu_32132_p2() {
    tmp_1963_fu_32132_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i178_reg_8039.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1964_fu_32148_p1() {
    tmp_1964_fu_32148_p1 = tmp_1017_fu_32142_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1965_fu_32236_p3() {
    tmp_1965_fu_32236_p3 = esl_concat<13,5>(tmp_1020_reg_42806.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1966_fu_32247_p3() {
    tmp_1966_fu_32247_p3 = esl_concat<13,3>(tmp_1020_reg_42806.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1967_fu_32258_p2() {
    tmp_1967_fu_32258_p2 = (!p_shl643_cast_fu_32243_p1.read().is_01() || !p_shl644_cast_fu_32254_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl643_cast_fu_32243_p1.read()) - sc_biguint<19>(p_shl644_cast_fu_32254_p1.read()));
}

void ShuffleNetV2::thread_tmp_1968_fu_32268_p2() {
    tmp_1968_fu_32268_p2 = (!tmp_1003_cast_reg_42793.read().is_01() || !tmp_2266_cast_fu_32264_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_1003_cast_reg_42793.read()) + sc_bigint<20>(tmp_2266_cast_fu_32264_p1.read()));
}

void ShuffleNetV2::thread_tmp_1969_fu_32205_p3() {
    tmp_1969_fu_32205_p3 = esl_concat<5,7>(tmp_1021_fu_32195_p4.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1970_fu_32213_p3() {
    tmp_1970_fu_32213_p3 = esl_concat<5,5>(tmp_1021_fu_32195_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1971_fu_32225_p2() {
    tmp_1971_fu_32225_p2 = (!tmp_1969_fu_32205_p3.read().is_01() || !p_shl642_cast_fu_32221_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1969_fu_32205_p3.read()) - sc_bigint<12>(p_shl642_cast_fu_32221_p1.read()));
}

void ShuffleNetV2::thread_tmp_1972_fu_32231_p2() {
    tmp_1972_fu_32231_p2 = (!tmp_1002_cast_reg_42788.read().is_01() || !tmp_1971_fu_32225_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1002_cast_reg_42788.read()) + sc_biguint<12>(tmp_1971_fu_32225_p2.read()));
}

void ShuffleNetV2::thread_tmp_1973_fu_32554_p3() {
    tmp_1973_fu_32554_p3 = esl_concat<7,3>(co176_reg_8105.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1974_fu_32566_p3() {
    tmp_1974_fu_32566_p3 = esl_concat<7,1>(co176_reg_8105.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1975_fu_32578_p2() {
    tmp_1975_fu_32578_p2 = (!p_shl651_cast_fu_32562_p1.read().is_01() || !p_shl652_cast_fu_32574_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl651_cast_fu_32562_p1.read()) - sc_biguint<11>(p_shl652_cast_fu_32574_p1.read()));
}

void ShuffleNetV2::thread_tmp_1976_fu_32594_p3() {
    tmp_1976_fu_32594_p3 = esl_concat<8,3>(tmp_1022_fu_32588_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1977_cast_fu_25948_p1() {
    tmp_1977_cast_fu_25948_p1 = esl_zext<64,15>(tmp_1717_fu_25943_p2.read());
}

void ShuffleNetV2::thread_tmp_1977_fu_32606_p3() {
    tmp_1977_fu_32606_p3 = esl_concat<8,1>(tmp_1022_fu_32588_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1978_cast_fu_26160_p1() {
    tmp_1978_cast_fu_26160_p1 = esl_zext<64,14>(tmp_1718_reg_40575.read());
}

void ShuffleNetV2::thread_tmp_1978_fu_32618_p2() {
    tmp_1978_fu_32618_p2 = (!p_shl649_cast_fu_32602_p1.read().is_01() || !p_shl650_cast_fu_32614_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl649_cast_fu_32602_p1.read()) - sc_biguint<12>(p_shl650_cast_fu_32614_p1.read()));
}

void ShuffleNetV2::thread_tmp_1979_cast_fu_26155_p1() {
    tmp_1979_cast_fu_26155_p1 = esl_zext<64,15>(tmp_1719_fu_26150_p2.read());
}

void ShuffleNetV2::thread_tmp_1979_fu_32477_p2() {
    tmp_1979_fu_32477_p2 = (!tmp_2258_cast_reg_42917.read().is_01() || !tmp_1023_cast_fu_32473_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_2258_cast_reg_42917.read()) + sc_biguint<12>(tmp_1023_cast_fu_32473_p1.read()));
}

void ShuffleNetV2::thread_tmp_1980_fu_32482_p1() {
    tmp_1980_fu_32482_p1 = tmp_1979_fu_32477_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1981_fu_32494_p3() {
    tmp_1981_fu_32494_p3 = esl_concat<12,1>(tmp_1979_fu_32477_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1982_fu_32506_p2() {
    tmp_1982_fu_32506_p2 = (!p_shl647_cast_fu_32486_p3.read().is_01() || !p_shl648_cast_fu_32502_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl647_cast_fu_32486_p3.read()) - sc_bigint<14>(p_shl648_cast_fu_32502_p1.read()));
}

void ShuffleNetV2::thread_tmp_1983_fu_32765_p1() {
    tmp_1983_fu_32765_p1 = co178_reg_8138.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1984_fu_32781_p2() {
    tmp_1984_fu_32781_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co178_reg_8138.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1985_fu_32648_p2() {
    tmp_1985_fu_32648_p2 = (!tmp_1028_cast2_fu_32644_p1.read().is_01() || !tmp_2279_cast_reg_42966.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1028_cast2_fu_32644_p1.read()) + sc_bigint<13>(tmp_2279_cast_reg_42966.read()));
}

void ShuffleNetV2::thread_tmp_1986_fu_32653_p1() {
    tmp_1986_fu_32653_p1 = tmp_1985_fu_32648_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1987_fu_32673_p2() {
    tmp_1987_fu_32673_p2 = (!p_shl655_cast_fu_32657_p3.read().is_01() || !p_shl656_cast_fu_32665_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl655_cast_fu_32657_p3.read()) - sc_biguint<14>(p_shl656_cast_fu_32665_p3.read()));
}

void ShuffleNetV2::thread_tmp_1988_fu_32679_p2() {
    tmp_1988_fu_32679_p2 = (!tmp_1028_cast1_fu_32640_p1.read().is_01() || !tmp_2276_cast_reg_42961.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1028_cast1_fu_32640_p1.read()) + sc_bigint<12>(tmp_2276_cast_reg_42961.read()));
}

void ShuffleNetV2::thread_tmp_1989_fu_32684_p1() {
    tmp_1989_fu_32684_p1 = tmp_1988_fu_32679_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1990_cast_fu_26449_p1() {
    tmp_1990_cast_fu_26449_p1 = esl_sext<18,17>(tmp_1727_fu_26443_p2.read());
}

void ShuffleNetV2::thread_tmp_1990_fu_32704_p2() {
    tmp_1990_fu_32704_p2 = (!p_shl653_cast_fu_32688_p3.read().is_01() || !p_shl654_cast_fu_32696_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl653_cast_fu_32688_p3.read()) - sc_biguint<13>(p_shl654_cast_fu_32696_p3.read()));
}

void ShuffleNetV2::thread_tmp_1991_cast_fu_26458_p1() {
    tmp_1991_cast_fu_26458_p1 = esl_sext<33,18>(tmp_1728_fu_26453_p2.read());
}

void ShuffleNetV2::thread_tmp_1991_fu_32528_p2() {
    tmp_1991_fu_32528_p2 = (!tmp_1982_reg_42930.read().is_01() || !tmp_1029_cast1_fu_32524_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1982_reg_42930.read()) + sc_biguint<14>(tmp_1029_cast1_fu_32524_p1.read()));
}

void ShuffleNetV2::thread_tmp_1992_fu_32730_p2() {
    tmp_1992_fu_32730_p2 = (!tmp_1987_reg_42979.read().is_01() || !tmp_1033_cast_fu_32726_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1987_reg_42979.read()) + sc_biguint<14>(tmp_1033_cast_fu_32726_p1.read()));
}

void ShuffleNetV2::thread_tmp_1993_fu_32740_p2() {
    tmp_1993_fu_32740_p2 = (!tmp_1990_reg_42984.read().is_01() || !tmp_1033_cast1_fu_32722_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1990_reg_42984.read()) + sc_biguint<13>(tmp_1033_cast1_fu_32722_p1.read()));
}

void ShuffleNetV2::thread_tmp_1994_fu_33075_p1() {
    tmp_1994_fu_33075_p1 = k84_reg_8182.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1995_fu_32852_p1() {
    tmp_1995_fu_32852_p1 = i182_reg_8160.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1996_fu_32872_p2() {
    tmp_1996_fu_32872_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i182_reg_8160.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1997_cast_fu_26477_p1() {
    tmp_1997_cast_fu_26477_p1 = esl_sext<64,10>(tmp_1732_reg_40649.read());
}

void ShuffleNetV2::thread_tmp_1997_fu_32888_p1() {
    tmp_1997_fu_32888_p1 = tmp_1039_fu_32882_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1998_fu_32976_p3() {
    tmp_1998_fu_32976_p3 = esl_concat<13,5>(tmp_1042_reg_43061.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1999_fu_32987_p3() {
    tmp_1999_fu_32987_p3 = esl_concat<13,3>(tmp_1042_reg_43061.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2000_fu_32998_p2() {
    tmp_2000_fu_32998_p2 = (!p_shl659_cast_fu_32983_p1.read().is_01() || !p_shl660_cast_fu_32994_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl659_cast_fu_32983_p1.read()) - sc_biguint<19>(p_shl660_cast_fu_32994_p1.read()));
}

void ShuffleNetV2::thread_tmp_2001_fu_33008_p2() {
    tmp_2001_fu_33008_p2 = (!tmp_1032_cast_reg_43048.read().is_01() || !tmp_2304_cast_fu_33004_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_1032_cast_reg_43048.read()) + sc_bigint<20>(tmp_2304_cast_fu_33004_p1.read()));
}

void ShuffleNetV2::thread_tmp_2002_fu_32945_p3() {
    tmp_2002_fu_32945_p3 = esl_concat<5,7>(tmp_1043_fu_32935_p4.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_2003_fu_32953_p3() {
    tmp_2003_fu_32953_p3 = esl_concat<5,5>(tmp_1043_fu_32935_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_2004_fu_32965_p2() {
    tmp_2004_fu_32965_p2 = (!tmp_2002_fu_32945_p3.read().is_01() || !p_shl658_cast_fu_32961_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_2002_fu_32945_p3.read()) - sc_bigint<12>(p_shl658_cast_fu_32961_p1.read()));
}

void ShuffleNetV2::thread_tmp_2005_fu_32971_p2() {
    tmp_2005_fu_32971_p2 = (!tmp_1031_cast_reg_43043.read().is_01() || !tmp_2004_fu_32965_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1031_cast_reg_43043.read()) + sc_biguint<12>(tmp_2004_fu_32965_p2.read()));
}

void ShuffleNetV2::thread_tmp_2006_cast_fu_26758_p1() {
    tmp_2006_cast_fu_26758_p1 = esl_sext<36,35>(tmp_1738_fu_26752_p2.read());
}

void ShuffleNetV2::thread_tmp_2006_fu_33540_p1() {
    tmp_2006_fu_33540_p1 = co182_reg_8259.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2007_fu_33556_p2() {
    tmp_2007_fu_33556_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co182_reg_8259.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_2008_fu_33444_p1() {
    tmp_2008_fu_33444_p1 = k86_reg_8248.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2009_fu_33227_p1() {
    tmp_2009_fu_33227_p1 = i187_reg_8226.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2010_cast_fu_26853_p1() {
    tmp_2010_cast_fu_26853_p1 = esl_zext<64,10>(tmp_1743_reg_40832.read());
}

void ShuffleNetV2::thread_tmp_2010_fu_33288_p3() {
    tmp_2010_fu_33288_p3 = esl_concat<8,2>(tmp_1062_reg_43226.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2011_fu_33295_p1() {
    tmp_2011_fu_33295_p1 = esl_sext<34,10>(tmp_2010_fu_33288_p3.read());
}

void ShuffleNetV2::thread_tmp_2012_fu_33303_p2() {
    tmp_2012_fu_33303_p2 = (!p_shl664_cast_fu_33299_p1.read().is_01() || !tmp_1063_cast_fu_33284_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl664_cast_fu_33299_p1.read()) - sc_biguint<35>(tmp_1063_cast_fu_33284_p1.read()));
}

void ShuffleNetV2::thread_tmp_2013_cast_fu_26817_p1() {
    tmp_2013_cast_fu_26817_p1 = esl_sext<64,13>(tmp_1746_reg_40826.read());
}

void ShuffleNetV2::thread_tmp_2013_fu_33313_p2() {
    tmp_2013_fu_33313_p2 = (!tmp_2320_cast_fu_33309_p1.read().is_01() || !tmp_1045_cast_reg_43195.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2320_cast_fu_33309_p1.read()) + sc_biguint<36>(tmp_1045_cast_reg_43195.read()));
}

void ShuffleNetV2::thread_tmp_2014_fu_33318_p1() {
    tmp_2014_fu_33318_p1 = tmp_2013_fu_33313_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2015_fu_33322_p1() {
    tmp_2015_fu_33322_p1 = tmp_2013_fu_33313_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_2016_fu_33362_p2() {
    tmp_2016_fu_33362_p2 = (!p_shl663_cast_fu_33355_p3.read().is_01() || !tmp_2014_reg_43238.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl663_cast_fu_33355_p3.read()) - sc_biguint<11>(tmp_2014_reg_43238.read()));
}

void ShuffleNetV2::thread_tmp_2017_fu_33367_p2() {
    tmp_2017_fu_33367_p2 = (!tmp_2016_fu_33362_p2.read().is_01() || !tmp_1052_cast_reg_43213.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_2016_fu_33362_p2.read()) + sc_biguint<11>(tmp_1052_cast_reg_43213.read()));
}

void ShuffleNetV2::thread_tmp_2018_fu_33329_p3() {
    tmp_2018_fu_33329_p3 = esl_concat<11,2>(tmp_1064_reg_43232.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2019_fu_33340_p2() {
    tmp_2019_fu_33340_p2 = (!p_shl662_cast_fu_33336_p1.read().is_01() || !tmp_1065_cast_fu_33326_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl662_cast_fu_33336_p1.read()) - sc_biguint<14>(tmp_1065_cast_fu_33326_p1.read()));
}

void ShuffleNetV2::thread_tmp_2020_fu_33350_p2() {
    tmp_2020_fu_33350_p2 = (!tmp_2326_cast_fu_33346_p1.read().is_01() || !tmp_1045_cast1_reg_43190.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_2326_cast_fu_33346_p1.read()) + sc_biguint<15>(tmp_1045_cast1_reg_43190.read()));
}

void ShuffleNetV2::thread_tmp_2021_fu_33375_p3() {
    tmp_2021_fu_33375_p3 = esl_concat<15,2>(tmp_2020_reg_43248.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2022_fu_33386_p2() {
    tmp_2022_fu_33386_p2 = (!p_shl276_fu_33382_p1.read().is_01() || !tmp_2327_cast_fu_33372_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl276_fu_33382_p1.read()) - sc_bigint<64>(tmp_2327_cast_fu_33372_p1.read()));
}

void ShuffleNetV2::thread_tmp_2023_fu_33392_p2() {
    tmp_2023_fu_33392_p2 = (!tmp_2022_fu_33386_p2.read().is_01() || !tmp_1052_reg_43208.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_2022_fu_33386_p2.read()) + sc_biguint<64>(tmp_1052_reg_43208.read()));
}

void ShuffleNetV2::thread_tmp_2024_fu_33942_p3() {
    tmp_2024_fu_33942_p3 = esl_concat<7,3>(co184_reg_8314.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2025_fu_33954_p3() {
    tmp_2025_fu_33954_p3 = esl_concat<7,1>(co184_reg_8314.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2026_fu_33966_p2() {
    tmp_2026_fu_33966_p2 = (!p_shl669_cast_fu_33950_p1.read().is_01() || !p_shl670_cast_fu_33962_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl669_cast_fu_33950_p1.read()) - sc_biguint<11>(p_shl670_cast_fu_33962_p1.read()));
}

void ShuffleNetV2::thread_tmp_2027_fu_33850_p1() {
    tmp_2027_fu_33850_p1 = k88_reg_8303.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2028_cast_fu_27258_p1() {
    tmp_2028_cast_fu_27258_p1 = esl_sext<19,18>(tmp_1758_fu_27252_p2.read());
}

void ShuffleNetV2::thread_tmp_2028_fu_33627_p1() {
    tmp_2028_fu_33627_p1 = i189_reg_8281.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2029_cast_fu_27267_p1() {
    tmp_2029_cast_fu_27267_p1 = esl_sext<33,19>(tmp_1759_fu_27262_p2.read());
}

void ShuffleNetV2::thread_tmp_2029_fu_33647_p2() {
    tmp_2029_fu_33647_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i189_reg_8281.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2030_fu_33663_p1() {
    tmp_2030_fu_33663_p1 = tmp_1071_fu_33657_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_2031_fu_33751_p3() {
    tmp_2031_fu_33751_p3 = esl_concat<13,5>(tmp_1074_reg_43361.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_2032_fu_33762_p3() {
    tmp_2032_fu_33762_p3 = esl_concat<13,3>(tmp_1074_reg_43361.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2033_fu_33773_p2() {
    tmp_2033_fu_33773_p2 = (!p_shl667_cast_fu_33758_p1.read().is_01() || !p_shl668_cast_fu_33769_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl667_cast_fu_33758_p1.read()) - sc_biguint<19>(p_shl668_cast_fu_33769_p1.read()));
}

void ShuffleNetV2::thread_tmp_2034_fu_33783_p2() {
    tmp_2034_fu_33783_p2 = (!tmp_1059_cast_reg_43348.read().is_01() || !tmp_2341_cast_fu_33779_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_1059_cast_reg_43348.read()) + sc_bigint<20>(tmp_2341_cast_fu_33779_p1.read()));
}

void ShuffleNetV2::thread_tmp_2035_cast_fu_27286_p1() {
    tmp_2035_cast_fu_27286_p1 = esl_sext<64,10>(tmp_1763_reg_40949.read());
}

void ShuffleNetV2::thread_tmp_2035_fu_33720_p3() {
    tmp_2035_fu_33720_p3 = esl_concat<5,7>(tmp_1075_fu_33710_p4.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_2036_fu_33728_p3() {
    tmp_2036_fu_33728_p3 = esl_concat<5,5>(tmp_1075_fu_33710_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_2037_fu_33740_p2() {
    tmp_2037_fu_33740_p2 = (!tmp_2035_fu_33720_p3.read().is_01() || !p_shl666_cast_fu_33736_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_2035_fu_33720_p3.read()) - sc_bigint<12>(p_shl666_cast_fu_33736_p1.read()));
}

void ShuffleNetV2::thread_tmp_2038_fu_33746_p2() {
    tmp_2038_fu_33746_p2 = (!tmp_1056_cast_reg_43343.read().is_01() || !tmp_2037_fu_33740_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1056_cast_reg_43343.read()) + sc_biguint<12>(tmp_2037_fu_33740_p2.read()));
}

void ShuffleNetV2::thread_tmp_2039_fu_34065_p3() {
    tmp_2039_fu_34065_p3 = esl_concat<8,2>(ci81_reg_8347.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2040_fu_34077_p3() {
    tmp_2040_fu_34077_p3 = esl_concat<8,3>(ci81_reg_8347.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2041_fu_34089_p3() {
    tmp_2041_fu_34089_p3 = esl_concat<8,1>(ci81_reg_8347.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2042_cast_fu_27527_p1() {
    tmp_2042_cast_fu_27527_p1 = esl_zext<64,15>(tmp_1770_fu_27522_p2.read());
}

void ShuffleNetV2::thread_tmp_2042_fu_34101_p2() {
    tmp_2042_fu_34101_p2 = (!p_shl673_cast_fu_34085_p1.read().is_01() || !p_shl674_cast_fu_34097_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl673_cast_fu_34085_p1.read()) - sc_biguint<12>(p_shl674_cast_fu_34097_p1.read()));
}

void ShuffleNetV2::thread_tmp_2043_fu_33992_p2() {
    tmp_2043_fu_33992_p2 = (!tmp_2333_cast_reg_43472.read().is_01() || !tmp_1076_cast_fu_33988_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_2333_cast_reg_43472.read()) + sc_biguint<12>(tmp_1076_cast_fu_33988_p1.read()));
}

void ShuffleNetV2::thread_tmp_2044_fu_33997_p1() {
    tmp_2044_fu_33997_p1 = tmp_2043_fu_33992_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2045_fu_34009_p3() {
    tmp_2045_fu_34009_p3 = esl_concat<12,1>(tmp_2043_fu_33992_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2046_fu_34021_p2() {
    tmp_2046_fu_34021_p2 = (!p_shl671_cast_fu_34001_p3.read().is_01() || !p_shl672_cast_fu_34017_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl671_cast_fu_34001_p3.read()) - sc_bigint<14>(p_shl672_cast_fu_34017_p1.read()));
}

void ShuffleNetV2::thread_tmp_2047_fu_34127_p2() {
    tmp_2047_fu_34127_p2 = (!tmp_1077_cast_fu_34123_p1.read().is_01() || !tmp_2350_cast_reg_43516.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1077_cast_fu_34123_p1.read()) + sc_biguint<11>(tmp_2350_cast_reg_43516.read()));
}

void ShuffleNetV2::thread_tmp_2048_fu_34144_p2() {
    tmp_2048_fu_34144_p2 = (!tmp_1080_cast_fu_34140_p1.read().is_01() || !tmp_2353_cast_reg_43521.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1080_cast_fu_34140_p1.read()) + sc_bigint<13>(tmp_2353_cast_reg_43521.read()));
}

void ShuffleNetV2::thread_tmp_2049_fu_34149_p1() {
    tmp_2049_fu_34149_p1 = tmp_2048_fu_34144_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2050_cast_fu_27787_p1() {
    tmp_2050_cast_fu_27787_p1 = esl_sext<19,18>(tmp_1777_fu_27781_p2.read());
}

void ShuffleNetV2::thread_tmp_2050_fu_34169_p2() {
    tmp_2050_fu_34169_p2 = (!p_shl675_cast_fu_34153_p3.read().is_01() || !p_shl676_cast_fu_34161_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl675_cast_fu_34153_p3.read()) - sc_biguint<14>(p_shl676_cast_fu_34161_p3.read()));
}

void ShuffleNetV2::thread_tmp_2051_cast_fu_27796_p1() {
    tmp_2051_cast_fu_27796_p1 = esl_sext<33,19>(tmp_1778_fu_27791_p2.read());
}

void ShuffleNetV2::thread_tmp_2051_fu_34043_p2() {
    tmp_2051_fu_34043_p2 = (!tmp_2046_reg_43485.read().is_01() || !tmp_1082_cast_fu_34039_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_2046_reg_43485.read()) + sc_biguint<14>(tmp_1082_cast_fu_34039_p1.read()));
}

void ShuffleNetV2::thread_tmp_2052_fu_34191_p2() {
    tmp_2052_fu_34191_p2 = (!tmp_2360_cast_reg_43534.read().is_01() || !tmp_1083_cast1_fu_34187_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_2360_cast_reg_43534.read()) + sc_biguint<13>(tmp_1083_cast1_fu_34187_p1.read()));
}

void ShuffleNetV2::thread_tmp_2053_fu_34200_p2() {
    tmp_2053_fu_34200_p2 = (!tmp_2050_reg_43539.read().is_01() || !tmp_1084_cast1_fu_34196_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_2050_reg_43539.read()) + sc_biguint<14>(tmp_1084_cast1_fu_34196_p1.read()));
}

void ShuffleNetV2::thread_tmp_2057_cast_fu_27815_p1() {
    tmp_2057_cast_fu_27815_p1 = esl_sext<64,12>(tmp_1782_reg_41150.read());
}

void ShuffleNetV2::thread_tmp_2066_cast_fu_28096_p1() {
    tmp_2066_cast_fu_28096_p1 = esl_sext<36,35>(tmp_1789_fu_28090_p2.read());
}

void ShuffleNetV2::thread_tmp_2070_cast_fu_28191_p1() {
    tmp_2070_cast_fu_28191_p1 = esl_zext<64,11>(tmp_1794_reg_41333.read());
}

void ShuffleNetV2::thread_tmp_2073_cast_fu_28155_p1() {
    tmp_2073_cast_fu_28155_p1 = esl_sext<64,13>(tmp_1797_reg_41327.read());
}

void ShuffleNetV2::thread_tmp_2084_cast_fu_28566_p1() {
    tmp_2084_cast_fu_28566_p1 = esl_sext<19,18>(tmp_1807_fu_28560_p2.read());
}

void ShuffleNetV2::thread_tmp_2085_cast_fu_28575_p1() {
    tmp_2085_cast_fu_28575_p1 = esl_sext<33,19>(tmp_1808_fu_28570_p2.read());
}

void ShuffleNetV2::thread_tmp_2091_cast_fu_28594_p1() {
    tmp_2091_cast_fu_28594_p1 = esl_sext<64,12>(tmp_1812_reg_41450.read());
}

void ShuffleNetV2::thread_tmp_2100_cast_fu_28879_p1() {
    tmp_2100_cast_fu_28879_p1 = esl_sext<36,35>(tmp_1819_fu_28873_p2.read());
}

void ShuffleNetV2::thread_tmp_2104_cast_fu_28974_p1() {
    tmp_2104_cast_fu_28974_p1 = esl_zext<64,11>(tmp_1824_reg_41633.read());
}

void ShuffleNetV2::thread_tmp_2107_cast_fu_28938_p1() {
    tmp_2107_cast_fu_28938_p1 = esl_sext<64,13>(tmp_1827_reg_41627.read());
}

void ShuffleNetV2::thread_tmp_2113_cast_fu_29542_p1() {
    tmp_2113_cast_fu_29542_p1 = esl_sext<12,11>(tmp_1833_fu_29536_p2.read());
}

void ShuffleNetV2::thread_tmp_2116_cast_fu_29582_p1() {
    tmp_2116_cast_fu_29582_p1 = esl_sext<13,12>(tmp_1836_fu_29576_p2.read());
}

void ShuffleNetV2::thread_tmp_2124_cast_fu_29345_p1() {
    tmp_2124_cast_fu_29345_p1 = esl_sext<19,18>(tmp_1843_fu_29339_p2.read());
}

void ShuffleNetV2::thread_tmp_2125_cast_fu_29354_p1() {
    tmp_2125_cast_fu_29354_p1 = esl_sext<33,19>(tmp_1844_fu_29349_p2.read());
}

void ShuffleNetV2::thread_tmp_2131_cast_fu_29373_p1() {
    tmp_2131_cast_fu_29373_p1 = esl_sext<64,12>(tmp_1848_reg_41750.read());
}

void ShuffleNetV2::thread_tmp_2142_cast_fu_29693_p1() {
    tmp_2142_cast_fu_29693_p1 = esl_zext<64,14>(tmp_1857_fu_29688_p2.read());
}

void ShuffleNetV2::thread_tmp_2143_cast_fu_29703_p1() {
    tmp_2143_cast_fu_29703_p1 = esl_zext<64,13>(tmp_1858_reg_41892.read());
}

void ShuffleNetV2::thread_tmp_2151_cast_fu_29962_p1() {
    tmp_2151_cast_fu_29962_p1 = esl_sext<19,18>(tmp_1865_fu_29956_p2.read());
}

void ShuffleNetV2::thread_tmp_2152_cast_fu_29971_p1() {
    tmp_2152_cast_fu_29971_p1 = esl_sext<33,19>(tmp_1866_fu_29966_p2.read());
}

void ShuffleNetV2::thread_tmp_2158_cast_fu_29990_p1() {
    tmp_2158_cast_fu_29990_p1 = esl_sext<64,12>(tmp_1870_reg_41961.read());
}

void ShuffleNetV2::thread_tmp_2167_cast_fu_30267_p1() {
    tmp_2167_cast_fu_30267_p1 = esl_sext<36,35>(tmp_1877_fu_30261_p2.read());
}

void ShuffleNetV2::thread_tmp_2171_cast_fu_30362_p1() {
    tmp_2171_cast_fu_30362_p1 = esl_zext<64,11>(tmp_1882_reg_42144.read());
}

void ShuffleNetV2::thread_tmp_2174_cast_fu_30326_p1() {
    tmp_2174_cast_fu_30326_p1 = esl_sext<64,13>(tmp_1885_reg_42138.read());
}

void ShuffleNetV2::thread_tmp_2180_cast_fu_30934_p1() {
    tmp_2180_cast_fu_30934_p1 = esl_sext<12,11>(tmp_1891_fu_30928_p2.read());
}

void ShuffleNetV2::thread_tmp_2190_cast_fu_30741_p1() {
    tmp_2190_cast_fu_30741_p1 = esl_sext<19,18>(tmp_1900_fu_30735_p2.read());
}

void ShuffleNetV2::thread_tmp_2191_cast_fu_30750_p1() {
    tmp_2191_cast_fu_30750_p1 = esl_sext<33,19>(tmp_1901_fu_30745_p2.read());
}

void ShuffleNetV2::thread_tmp_2197_cast_fu_30769_p1() {
    tmp_2197_cast_fu_30769_p1 = esl_sext<64,12>(tmp_1905_reg_42261.read());
}

void ShuffleNetV2::thread_tmp_2200_cast_fu_31061_p1() {
    tmp_2200_cast_fu_31061_p1 = esl_sext<12,11>(tmp_1908_fu_31055_p2.read());
}

void ShuffleNetV2::thread_tmp_2203_cast_fu_31101_p1() {
    tmp_2203_cast_fu_31101_p1 = esl_sext<13,12>(tmp_1911_fu_31095_p2.read());
}

void ShuffleNetV2::thread_tmp_2218_cast_fu_31010_p1() {
    tmp_2218_cast_fu_31010_p1 = esl_zext<64,14>(tmp_1924_fu_31005_p2.read());
}

void ShuffleNetV2::thread_tmp_2219_cast_fu_31222_p1() {
    tmp_2219_cast_fu_31222_p1 = esl_zext<64,13>(tmp_1925_reg_42442.read());
}

void ShuffleNetV2::thread_tmp_2220_cast_fu_31217_p1() {
    tmp_2220_cast_fu_31217_p1 = esl_zext<64,14>(tmp_1926_fu_31212_p2.read());
}

void ShuffleNetV2::thread_tmp_2228_cast_fu_31481_p1() {
    tmp_2228_cast_fu_31481_p1 = esl_sext<20,19>(tmp_1933_fu_31475_p2.read());
}

void ShuffleNetV2::thread_tmp_2229_cast_fu_31490_p1() {
    tmp_2229_cast_fu_31490_p1 = esl_sext<33,20>(tmp_1934_fu_31485_p2.read());
}

void ShuffleNetV2::thread_tmp_2235_cast_fu_31509_p1() {
    tmp_2235_cast_fu_31509_p1 = esl_sext<64,12>(tmp_1938_reg_42516.read());
}

void ShuffleNetV2::thread_tmp_2244_cast_fu_31786_p1() {
    tmp_2244_cast_fu_31786_p1 = esl_sext<36,35>(tmp_1945_fu_31780_p2.read());
}

void ShuffleNetV2::thread_tmp_2248_cast_fu_31893_p1() {
    tmp_2248_cast_fu_31893_p1 = esl_zext<64,11>(tmp_1950_reg_42699.read());
}

void ShuffleNetV2::thread_tmp_2251_cast_fu_31831_p1() {
    tmp_2251_cast_fu_31831_p1 = esl_sext<14,13>(tmp_1953_fu_31825_p2.read());
}

void ShuffleNetV2::thread_tmp_2252_cast_fu_31857_p1() {
    tmp_2252_cast_fu_31857_p1 = esl_sext<64,14>(tmp_1954_reg_42693.read());
}

void ShuffleNetV2::thread_tmp_2258_cast_fu_32457_p1() {
    tmp_2258_cast_fu_32457_p1 = esl_sext<12,11>(tmp_1960_fu_32451_p2.read());
}

void ShuffleNetV2::thread_tmp_2266_cast_fu_32264_p1() {
    tmp_2266_cast_fu_32264_p1 = esl_sext<20,19>(tmp_1967_fu_32258_p2.read());
}

void ShuffleNetV2::thread_tmp_2267_cast_fu_32273_p1() {
    tmp_2267_cast_fu_32273_p1 = esl_sext<33,20>(tmp_1968_fu_32268_p2.read());
}

void ShuffleNetV2::thread_tmp_2273_cast_fu_32292_p1() {
    tmp_2273_cast_fu_32292_p1 = esl_sext<64,12>(tmp_1972_reg_42816.read());
}

void ShuffleNetV2::thread_tmp_2276_cast_fu_32584_p1() {
    tmp_2276_cast_fu_32584_p1 = esl_sext<12,11>(tmp_1975_fu_32578_p2.read());
}

void ShuffleNetV2::thread_tmp_2279_cast_fu_32624_p1() {
    tmp_2279_cast_fu_32624_p1 = esl_sext<13,12>(tmp_1978_fu_32618_p2.read());
}

void ShuffleNetV2::thread_tmp_2294_cast_fu_32533_p1() {
    tmp_2294_cast_fu_32533_p1 = esl_zext<64,14>(tmp_1991_fu_32528_p2.read());
}

void ShuffleNetV2::thread_tmp_2295_cast_fu_32735_p1() {
    tmp_2295_cast_fu_32735_p1 = esl_zext<64,14>(tmp_1992_fu_32730_p2.read());
}

void ShuffleNetV2::thread_tmp_2296_cast_fu_32745_p1() {
    tmp_2296_cast_fu_32745_p1 = esl_zext<64,13>(tmp_1993_reg_43002.read());
}

void ShuffleNetV2::thread_tmp_2304_cast_fu_33004_p1() {
    tmp_2304_cast_fu_33004_p1 = esl_sext<20,19>(tmp_2000_fu_32998_p2.read());
}

void ShuffleNetV2::thread_tmp_2305_cast_fu_33013_p1() {
    tmp_2305_cast_fu_33013_p1 = esl_sext<33,20>(tmp_2001_fu_33008_p2.read());
}

void ShuffleNetV2::thread_tmp_2311_cast_fu_33032_p1() {
    tmp_2311_cast_fu_33032_p1 = esl_sext<64,12>(tmp_2005_reg_43071.read());
}

void ShuffleNetV2::thread_tmp_2320_cast_fu_33309_p1() {
    tmp_2320_cast_fu_33309_p1 = esl_sext<36,35>(tmp_2012_fu_33303_p2.read());
}

void ShuffleNetV2::thread_tmp_2324_cast_fu_33408_p1() {
    tmp_2324_cast_fu_33408_p1 = esl_zext<64,11>(tmp_2017_reg_43254.read());
}

void ShuffleNetV2::thread_tmp_2326_cast_fu_33346_p1() {
    tmp_2326_cast_fu_33346_p1 = esl_sext<15,14>(tmp_2019_fu_33340_p2.read());
}

void ShuffleNetV2::thread_tmp_2327_cast_fu_33372_p1() {
    tmp_2327_cast_fu_33372_p1 = esl_sext<64,15>(tmp_2020_reg_43248.read());
}

void ShuffleNetV2::thread_tmp_2333_cast_fu_33972_p1() {
    tmp_2333_cast_fu_33972_p1 = esl_sext<12,11>(tmp_2026_fu_33966_p2.read());
}

void ShuffleNetV2::thread_tmp_2341_cast_fu_33779_p1() {
    tmp_2341_cast_fu_33779_p1 = esl_sext<20,19>(tmp_2033_fu_33773_p2.read());
}

void ShuffleNetV2::thread_tmp_2342_cast_fu_33788_p1() {
    tmp_2342_cast_fu_33788_p1 = esl_sext<33,20>(tmp_2034_fu_33783_p2.read());
}

void ShuffleNetV2::thread_tmp_2348_cast_fu_33807_p1() {
    tmp_2348_cast_fu_33807_p1 = esl_sext<64,12>(tmp_2038_reg_43371.read());
}

void ShuffleNetV2::thread_tmp_2350_cast_fu_34073_p1() {
    tmp_2350_cast_fu_34073_p1 = esl_zext<11,10>(tmp_2039_fu_34065_p3.read());
}

void ShuffleNetV2::thread_tmp_2353_cast_fu_34107_p1() {
    tmp_2353_cast_fu_34107_p1 = esl_sext<13,12>(tmp_2042_fu_34101_p2.read());
}

void ShuffleNetV2::thread_tmp_2360_cast_fu_34132_p3() {
    tmp_2360_cast_fu_34132_p3 = esl_concat<11,2>(tmp_2047_fu_34127_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2365_cast_fu_34048_p1() {
    tmp_2365_cast_fu_34048_p1 = esl_zext<64,14>(tmp_2051_fu_34043_p2.read());
}

void ShuffleNetV2::thread_tmp_2366_cast_fu_34210_p1() {
    tmp_2366_cast_fu_34210_p1 = esl_zext<64,13>(tmp_2052_reg_43552.read());
}

void ShuffleNetV2::thread_tmp_2367_cast_fu_34205_p1() {
    tmp_2367_cast_fu_34205_p1 = esl_zext<64,14>(tmp_2053_fu_34200_p2.read());
}

void ShuffleNetV2::thread_tmp_299_fu_9256_p1() {
    tmp_299_fu_9256_p1 = esl_zext<64,4>(i2_reg_4308.read());
}

void ShuffleNetV2::thread_tmp_302_cast_fu_9315_p1() {
    tmp_302_cast_fu_9315_p1 = esl_zext<8,6>(w_37_fu_9309_p2.read());
}

void ShuffleNetV2::thread_tmp_303_cast_fu_9324_p1() {
    tmp_303_cast_fu_9324_p1 = esl_zext<8,6>(w_reg_4331.read());
}

void ShuffleNetV2::thread_tmp_304_fu_9570_p1() {
    tmp_304_fu_9570_p1 = esl_zext<64,5>(i4_reg_4376.read());
}

void ShuffleNetV2::thread_tmp_307_cast_fu_9537_p1() {
    tmp_307_cast_fu_9537_p1 = esl_zext<8,5>(ci3_reg_4365.read());
}

void ShuffleNetV2::thread_tmp_308_cast_fu_9392_p1() {
    tmp_308_cast_fu_9392_p1 = esl_zext<13,6>(h_33_fu_9386_p2.read());
}

void ShuffleNetV2::thread_tmp_310_cast_fu_9587_p1() {
    tmp_310_cast_fu_9587_p1 = esl_zext<8,5>(co5_reg_4388.read());
}

void ShuffleNetV2::thread_tmp_311_fu_9715_p1() {
    tmp_311_fu_9715_p1 = esl_zext<64,5>(i8_reg_4421.read());
}

void ShuffleNetV2::thread_tmp_314_cast_fu_9640_p1() {
    tmp_314_cast_fu_9640_p1 = esl_zext<9,2>(w6_reg_4399.read());
}

void ShuffleNetV2::thread_tmp_315_fu_9736_p2() {
    tmp_315_fu_9736_p2 = (!ap_const_lv6_18.is_01() || !co9_cast_fu_9720_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_18) + sc_biguint<6>(co9_cast_fu_9720_p1.read()));
}

void ShuffleNetV2::thread_tmp_316_fu_9694_p1() {
    tmp_316_fu_9694_p1 = esl_zext<64,2>(h7_reg_4410.read());
}

void ShuffleNetV2::thread_tmp_317_fu_9895_p1() {
    tmp_317_fu_9895_p1 = esl_zext<64,5>(i11_reg_4456.read());
}

void ShuffleNetV2::thread_tmp_320_cast_fu_9862_p1() {
    tmp_320_cast_fu_9862_p1 = esl_zext<8,5>(ci10_reg_4445.read());
}

void ShuffleNetV2::thread_tmp_321_cast_fu_9916_p1() {
    tmp_321_cast_fu_9916_p1 = esl_zext<8,5>(co12_reg_4468.read());
}

void ShuffleNetV2::thread_tmp_322_fu_9942_p2() {
    tmp_322_fu_9942_p2 = (!co12_cast_fu_9900_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co12_cast_fu_9900_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_323_cast_fu_9948_p1() {
    tmp_323_cast_fu_9948_p1 = esl_zext<9,6>(tmp_322_fu_9942_p2.read());
}

void ShuffleNetV2::thread_tmp_324_fu_10107_p1() {
    tmp_324_fu_10107_p1 = esl_zext<64,5>(tmp_769_reg_4501.read());
}

void ShuffleNetV2::thread_tmp_327_cast_fu_9982_p1() {
    tmp_327_cast_fu_9982_p1 = esl_zext<9,2>(w13_reg_4479.read());
}

void ShuffleNetV2::thread_tmp_328_fu_10128_p2() {
    tmp_328_fu_10128_p2 = (!ap_const_lv7_30.is_01() || !co16_cast_fu_10112_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_30) + sc_biguint<7>(co16_cast_fu_10112_p1.read()));
}

void ShuffleNetV2::thread_tmp_329_cast_fu_10051_p1() {
    tmp_329_cast_fu_10051_p1 = esl_zext<9,2>(h14_reg_4490.read());
}

void ShuffleNetV2::thread_tmp_330_fu_10287_p1() {
    tmp_330_fu_10287_p1 = esl_zext<64,5>(i16_reg_4536.read());
}

void ShuffleNetV2::thread_tmp_333_cast_fu_10254_p1() {
    tmp_333_cast_fu_10254_p1 = esl_zext<8,5>(ci12_reg_4525.read());
}

void ShuffleNetV2::thread_tmp_334_fu_10338_p2() {
    tmp_334_fu_10338_p2 = (!co19_cast_fu_10292_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co19_cast_fu_10292_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_335_fu_10511_p2() {
    tmp_335_fu_10511_p2 = (!ap_const_lv7_48.is_01() || !co22_cast_fu_10495_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_48) + sc_biguint<7>(co22_cast_fu_10495_p1.read()));
}

void ShuffleNetV2::thread_tmp_336_cast1_fu_10386_p1() {
    tmp_336_cast1_fu_10386_p1 = esl_zext<10,5>(h_36_fu_10380_p2.read());
}

void ShuffleNetV2::thread_tmp_336_cast_fu_10390_p1() {
    tmp_336_cast_fu_10390_p1 = esl_zext<11,5>(h_36_fu_10380_p2.read());
}

void ShuffleNetV2::thread_tmp_337_fu_10670_p1() {
    tmp_337_fu_10670_p1 = esl_zext<64,5>(i18_reg_4604.read());
}

void ShuffleNetV2::thread_tmp_340_cast_fu_10637_p1() {
    tmp_340_cast_fu_10637_p1 = esl_zext<8,5>(ci14_reg_4593.read());
}

void ShuffleNetV2::thread_tmp_341_cast1_fu_10468_p1() {
    tmp_341_cast1_fu_10468_p1 = esl_zext<14,5>(w_40_fu_10462_p2.read());
}

void ShuffleNetV2::thread_tmp_341_cast_fu_10472_p1() {
    tmp_341_cast_fu_10472_p1 = esl_zext<15,5>(w_40_fu_10462_p2.read());
}

void ShuffleNetV2::thread_tmp_342_cast_fu_10691_p1() {
    tmp_342_cast_fu_10691_p1 = esl_zext<8,5>(co25_reg_4616.read());
}

void ShuffleNetV2::thread_tmp_343_fu_10717_p2() {
    tmp_343_fu_10717_p2 = (!co25_cast_fu_10675_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co25_cast_fu_10675_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_344_cast_fu_10723_p1() {
    tmp_344_cast_fu_10723_p1 = esl_zext<10,7>(tmp_343_fu_10717_p2.read());
}

void ShuffleNetV2::thread_tmp_345_fu_10870_p1() {
    tmp_345_fu_10870_p1 = esl_zext<64,5>(i20_reg_4649.read());
}

void ShuffleNetV2::thread_tmp_348_cast1_fu_10772_p1() {
    tmp_348_cast1_fu_10772_p1 = esl_zext<9,2>(w26_reg_4627.read());
}

void ShuffleNetV2::thread_tmp_348_cast_fu_10776_p1() {
    tmp_348_cast_fu_10776_p1 = esl_zext<10,2>(w26_reg_4627.read());
}

void ShuffleNetV2::thread_tmp_349_cast_fu_10845_p1() {
    tmp_349_cast_fu_10845_p1 = esl_zext<9,2>(h27_reg_4638.read());
}

void ShuffleNetV2::thread_tmp_350_fu_11068_p1() {
    tmp_350_fu_11068_p1 = esl_zext<64,5>(tmp_974_reg_4684.read());
}

void ShuffleNetV2::thread_tmp_353_cast_fu_11004_p1() {
    tmp_353_cast_fu_11004_p1 = esl_zext<8,5>(ci16_reg_4673.read());
}

void ShuffleNetV2::thread_tmp_354_fu_11238_p2() {
    tmp_354_fu_11238_p2 = (!co35_cast_fu_11192_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co35_cast_fu_11192_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_355_cast_fu_11127_p1() {
    tmp_355_cast_fu_11127_p1 = esl_zext<10,5>(h_38_fu_11121_p2.read());
}

void ShuffleNetV2::thread_tmp_356_fu_11411_p2() {
    tmp_356_fu_11411_p2 = (!ap_const_lv8_78.is_01() || !co38_cast_fu_11395_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_78) + sc_biguint<8>(co38_cast_fu_11395_p1.read()));
}

void ShuffleNetV2::thread_tmp_357_cast1_fu_11286_p1() {
    tmp_357_cast1_fu_11286_p1 = esl_zext<11,5>(h_39_fu_11280_p2.read());
}

void ShuffleNetV2::thread_tmp_357_cast_fu_11290_p1() {
    tmp_357_cast_fu_11290_p1 = esl_zext<10,5>(h_39_fu_11280_p2.read());
}

void ShuffleNetV2::thread_tmp_358_cast_fu_11178_p1() {
    tmp_358_cast_fu_11178_p1 = esl_zext<15,5>(w_42_fu_11172_p2.read());
}

void ShuffleNetV2::thread_tmp_359_fu_11570_p1() {
    tmp_359_fu_11570_p1 = esl_zext<64,5>(i23_reg_4785.read());
}

void ShuffleNetV2::thread_tmp_362_cast_fu_11537_p1() {
    tmp_362_cast_fu_11537_p1 = esl_zext<8,5>(ci18_reg_4774.read());
}

void ShuffleNetV2::thread_tmp_363_cast1_fu_11368_p1() {
    tmp_363_cast1_fu_11368_p1 = esl_zext<15,5>(w_43_fu_11362_p2.read());
}

void ShuffleNetV2::thread_tmp_363_cast_fu_11372_p1() {
    tmp_363_cast_fu_11372_p1 = esl_zext<14,5>(w_43_fu_11362_p2.read());
}

void ShuffleNetV2::thread_tmp_364_cast_fu_11591_p1() {
    tmp_364_cast_fu_11591_p1 = esl_zext<8,5>(co41_reg_4797.read());
}

void ShuffleNetV2::thread_tmp_365_fu_11617_p2() {
    tmp_365_fu_11617_p2 = (!co41_cast_fu_11575_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co41_cast_fu_11575_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp_366_cast_fu_11623_p1() {
    tmp_366_cast_fu_11623_p1 = esl_zext<10,7>(tmp_365_fu_11617_p2.read());
}

void ShuffleNetV2::thread_tmp_367_fu_11770_p1() {
    tmp_367_fu_11770_p1 = esl_zext<64,5>(i25_reg_4830.read());
}

void ShuffleNetV2::thread_tmp_370_cast1_fu_11672_p1() {
    tmp_370_cast1_fu_11672_p1 = esl_zext<9,2>(w42_reg_4808.read());
}

void ShuffleNetV2::thread_tmp_370_cast_fu_11676_p1() {
    tmp_370_cast_fu_11676_p1 = esl_zext<10,2>(w42_reg_4808.read());
}

void ShuffleNetV2::thread_tmp_371_fu_11791_p2() {
    tmp_371_fu_11791_p2 = (!ap_const_lv8_90.is_01() || !co43_cast_fu_11775_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_90) + sc_biguint<8>(co43_cast_fu_11775_p1.read()));
}

void ShuffleNetV2::thread_tmp_372_cast_fu_11745_p1() {
    tmp_372_cast_fu_11745_p1 = esl_zext<9,2>(h40_reg_4819.read());
}

void ShuffleNetV2::thread_tmp_373_fu_11950_p1() {
    tmp_373_fu_11950_p1 = esl_zext<64,5>(i27_reg_4865.read());
}

void ShuffleNetV2::thread_tmp_376_cast_fu_11917_p1() {
    tmp_376_cast_fu_11917_p1 = esl_zext<8,5>(ci20_reg_4854.read());
}

void ShuffleNetV2::thread_tmp_377_fu_12120_p2() {
    tmp_377_fu_12120_p2 = (!co46_cast_fu_12074_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co46_cast_fu_12074_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_378_cast_fu_12009_p1() {
    tmp_378_cast_fu_12009_p1 = esl_zext<10,5>(h_43_fu_12003_p2.read());
}

void ShuffleNetV2::thread_tmp_379_fu_12293_p2() {
    tmp_379_fu_12293_p2 = (!ap_const_lv8_A8.is_01() || !co48_cast_fu_12277_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_biguint<8>(co48_cast_fu_12277_p1.read()));
}

void ShuffleNetV2::thread_tmp_380_cast1_fu_12172_p1() {
    tmp_380_cast1_fu_12172_p1 = esl_zext<10,5>(h_45_fu_12162_p2.read());
}

void ShuffleNetV2::thread_tmp_380_cast_fu_12168_p1() {
    tmp_380_cast_fu_12168_p1 = esl_zext<11,5>(h_45_fu_12162_p2.read());
}

void ShuffleNetV2::thread_tmp_381_cast_fu_12060_p1() {
    tmp_381_cast_fu_12060_p1 = esl_zext<15,5>(w_46_fu_12054_p2.read());
}

void ShuffleNetV2::thread_tmp_382_fu_12464_p1() {
    tmp_382_fu_12464_p1 = esl_zext<64,5>(tmp_1133_reg_4966.read());
}

void ShuffleNetV2::thread_tmp_385_cast_fu_12404_p1() {
    tmp_385_cast_fu_12404_p1 = esl_zext<8,5>(ci22_reg_4955.read());
}

void ShuffleNetV2::thread_tmp_386_cast1_fu_12250_p1() {
    tmp_386_cast1_fu_12250_p1 = esl_zext<15,5>(w_48_fu_12244_p2.read());
}

void ShuffleNetV2::thread_tmp_386_cast_fu_12254_p1() {
    tmp_386_cast_fu_12254_p1 = esl_zext<14,5>(w_48_fu_12244_p2.read());
}

void ShuffleNetV2::thread_tmp_387_cast_fu_12481_p1() {
    tmp_387_cast_fu_12481_p1 = esl_zext<8,5>(co51_reg_4978.read());
}

void ShuffleNetV2::thread_tmp_388_fu_12507_p3() {
    tmp_388_fu_12507_p3 = esl_concat<1,5>(ap_const_lv1_1, co51_reg_4978.read());
}

void ShuffleNetV2::thread_tmp_389_cast_fu_12519_p1() {
    tmp_389_cast_fu_12519_p1 = esl_zext<10,7>(tmp_414_cast_fu_12515_p1.read());
}

void ShuffleNetV2::thread_tmp_390_fu_12676_p1() {
    tmp_390_fu_12676_p1 = esl_zext<64,5>(i30_reg_5011.read());
}

void ShuffleNetV2::thread_tmp_393_cast1_fu_12578_p1() {
    tmp_393_cast1_fu_12578_p1 = esl_zext<9,2>(w49_reg_4989.read());
}

void ShuffleNetV2::thread_tmp_393_cast_fu_12582_p1() {
    tmp_393_cast_fu_12582_p1 = esl_zext<11,2>(w49_reg_4989.read());
}

void ShuffleNetV2::thread_tmp_394_cast_fu_12651_p1() {
    tmp_394_cast_fu_12651_p1 = esl_zext<9,2>(h46_reg_5000.read());
}

void ShuffleNetV2::thread_tmp_395_fu_12858_p1() {
    tmp_395_fu_12858_p1 = esl_zext<64,5>(i32_reg_5046.read());
}

void ShuffleNetV2::thread_tmp_398_cast_fu_12825_p1() {
    tmp_398_cast_fu_12825_p1 = esl_zext<8,5>(ci24_reg_5035.read());
}

void ShuffleNetV2::thread_tmp_399_fu_13026_p2() {
    tmp_399_fu_13026_p2 = (!p_shl_cast_fu_13010_p1.read().is_01() || !p_shl1_cast_fu_13022_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl_cast_fu_13010_p1.read()) - sc_biguint<7>(p_shl1_cast_fu_13022_p1.read()));
}

void ShuffleNetV2::thread_tmp_400_cast_fu_12917_p1() {
    tmp_400_cast_fu_12917_p1 = esl_zext<10,5>(h_49_fu_12911_p2.read());
}

void ShuffleNetV2::thread_tmp_401_fu_13072_p2() {
    tmp_401_fu_13072_p2 = (!tmp_399_reg_35902.read().is_01() || !ci26_cast_fu_13056_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_399_reg_35902.read()) + sc_biguint<7>(ci26_cast_fu_13056_p1.read()));
}

void ShuffleNetV2::thread_tmp_402_cast_fu_13077_p1() {
    tmp_402_cast_fu_13077_p1 = esl_sext<10,7>(tmp_401_fu_13072_p2.read());
}

void ShuffleNetV2::thread_tmp_403_cast_fu_13081_p1() {
    tmp_403_cast_fu_13081_p1 = esl_zext<16,5>(ci26_reg_5102.read());
}

void ShuffleNetV2::thread_tmp_404_cast_fu_12968_p1() {
    tmp_404_cast_fu_12968_p1 = esl_zext<15,5>(w_52_fu_12962_p2.read());
}

void ShuffleNetV2::thread_tmp_405_fu_13358_p2() {
    tmp_405_fu_13358_p2 = (!p_shl2_cast_fu_13342_p1.read().is_01() || !p_shl3_cast_fu_13354_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl2_cast_fu_13342_p1.read()) - sc_biguint<7>(p_shl3_cast_fu_13354_p1.read()));
}

void ShuffleNetV2::thread_tmp_406_fu_13368_p2() {
    tmp_406_fu_13368_p2 = (!i37_cast1_reg_36009.read().is_01() || !tmp_405_fu_13358_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i37_cast1_reg_36009.read()) + sc_biguint<7>(tmp_405_fu_13358_p2.read()));
}

void ShuffleNetV2::thread_tmp_407_fu_13405_p1() {
    tmp_407_fu_13405_p1 = esl_zext<64,32>(tmp_434_cast_fu_13402_p1.read());
}

void ShuffleNetV2::thread_tmp_408_fu_13379_p2() {
    tmp_408_fu_13379_p2 = (!tmp2_fu_13373_p2.read().is_01() || !i37_cast_reg_36004.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp2_fu_13373_p2.read()) + sc_biguint<9>(i37_cast_reg_36004.read()));
}

void ShuffleNetV2::thread_tmp_409_cast_fu_13384_p1() {
    tmp_409_cast_fu_13384_p1 = esl_zext<33,9>(tmp_408_reg_36035.read());
}

void ShuffleNetV2::thread_tmp_410_fu_13125_p2() {
    tmp_410_fu_13125_p2 = (!p_shl4_cast_fu_13109_p1.read().is_01() || !p_shl5_cast_fu_13121_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl4_cast_fu_13109_p1.read()) - sc_biguint<7>(p_shl5_cast_fu_13121_p1.read()));
}

void ShuffleNetV2::thread_tmp_411_fu_13135_p2() {
    tmp_411_fu_13135_p2 = (!tmp_410_fu_13125_p2.read().is_01() || !tmp_431_cast_reg_35907.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_410_fu_13125_p2.read()) + sc_biguint<7>(tmp_431_cast_reg_35907.read()));
}

void ShuffleNetV2::thread_tmp_412_fu_13164_p2() {
    tmp_412_fu_13164_p2 = (!p_shl6_cast_fu_13148_p1.read().is_01() || !p_shl7_cast_fu_13160_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl6_cast_fu_13148_p1.read()) - sc_biguint<8>(p_shl7_cast_fu_13160_p1.read()));
}

void ShuffleNetV2::thread_tmp_413_fu_13180_p2() {
    tmp_413_fu_13180_p2 = (!tmp1_fu_13174_p2.read().is_01() || !co56_cast_reg_35889.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp1_fu_13174_p2.read()) + sc_biguint<9>(co56_cast_reg_35889.read()));
}

void ShuffleNetV2::thread_tmp_414_cast_fu_12515_p1() {
    tmp_414_cast_fu_12515_p1 = esl_sext<7,6>(tmp_388_fu_12507_p3.read());
}

void ShuffleNetV2::thread_tmp_414_fu_13190_p4() {
    tmp_414_fu_13190_p4 = tmp_411_fu_13135_p2.read().range(6, 3);
}

void ShuffleNetV2::thread_tmp_415_cast1_fu_13442_p1() {
    tmp_415_cast1_fu_13442_p1 = esl_zext<12,2>(w53_reg_5157.read());
}

void ShuffleNetV2::thread_tmp_415_cast_fu_13446_p1() {
    tmp_415_cast_fu_13446_p1 = esl_zext<36,2>(w53_reg_5157.read());
}

void ShuffleNetV2::thread_tmp_416_fu_13827_p2() {
    tmp_416_fu_13827_p2 = (!p_shl10_cast_fu_13811_p1.read().is_01() || !p_shl11_cast_fu_13823_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_cast_fu_13811_p1.read()) - sc_biguint<7>(p_shl11_cast_fu_13823_p1.read()));
}

void ShuffleNetV2::thread_tmp_417_fu_13727_p2() {
    tmp_417_fu_13727_p2 = (!p_shl8_cast_fu_13711_p1.read().is_01() || !p_shl9_cast_fu_13723_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_cast_fu_13711_p1.read()) - sc_biguint<7>(p_shl9_cast_fu_13723_p1.read()));
}

void ShuffleNetV2::thread_tmp_418_fu_13737_p2() {
    tmp_418_fu_13737_p2 = (!i39_cast_reg_36152.read().is_01() || !tmp_417_fu_13727_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i39_cast_reg_36152.read()) + sc_biguint<7>(tmp_417_fu_13727_p2.read()));
}

}

