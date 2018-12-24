#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_1311_fu_17053_p3() {
    tmp_1311_fu_17053_p3 = esl_concat<10,5>(tmp_514_reg_37331.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1312_fu_17064_p3() {
    tmp_1312_fu_17064_p3 = esl_concat<10,3>(tmp_514_reg_37331.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1313_fu_17075_p2() {
    tmp_1313_fu_17075_p2 = (!p_shl423_cast_fu_17060_p1.read().is_01() || !p_shl424_cast_fu_17071_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl423_cast_fu_17060_p1.read()) - sc_biguint<16>(p_shl424_cast_fu_17071_p1.read()));
}

void ShuffleNetV2::thread_tmp_1314_fu_17085_p2() {
    tmp_1314_fu_17085_p2 = (!tmp_504_cast_reg_37318.read().is_01() || !tmp_1501_cast_fu_17081_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_504_cast_reg_37318.read()) + sc_bigint<17>(tmp_1501_cast_fu_17081_p1.read()));
}

void ShuffleNetV2::thread_tmp_1315_fu_17022_p3() {
    tmp_1315_fu_17022_p3 = esl_concat<4,6>(tmp_515_fu_17012_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1316_fu_17030_p3() {
    tmp_1316_fu_17030_p3 = esl_concat<4,4>(tmp_515_fu_17012_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1317_fu_17042_p2() {
    tmp_1317_fu_17042_p2 = (!tmp_1315_fu_17022_p3.read().is_01() || !p_shl422_cast_fu_17038_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1315_fu_17022_p3.read()) - sc_bigint<10>(p_shl422_cast_fu_17038_p1.read()));
}

void ShuffleNetV2::thread_tmp_1318_fu_17048_p2() {
    tmp_1318_fu_17048_p2 = (!tmp_503_cast_reg_37313.read().is_01() || !tmp_1317_fu_17042_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_503_cast_reg_37313.read()) + sc_biguint<10>(tmp_1317_fu_17042_p2.read()));
}

void ShuffleNetV2::thread_tmp_1319_fu_17621_p1() {
    tmp_1319_fu_17621_p1 = co82_reg_5796.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1320_cast_fu_13281_p1() {
    tmp_1320_cast_fu_13281_p1 = esl_sext<16,15>(tmp_1165_fu_13275_p2.read());
}

void ShuffleNetV2::thread_tmp_1320_fu_17521_p1() {
    tmp_1320_fu_17521_p1 = k22_reg_5785.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1321_cast_fu_13290_p1() {
    tmp_1321_cast_fu_13290_p1 = esl_sext<33,16>(tmp_1166_fu_13285_p2.read());
}

void ShuffleNetV2::thread_tmp_1321_fu_17304_p1() {
    tmp_1321_fu_17304_p1 = i70_reg_5763.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1322_fu_17365_p3() {
    tmp_1322_fu_17365_p3 = esl_concat<7,2>(tmp_528_reg_37496.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1323_fu_17372_p1() {
    tmp_1323_fu_17372_p1 = esl_sext<34,9>(tmp_1322_fu_17365_p3.read());
}

void ShuffleNetV2::thread_tmp_1324_fu_17380_p2() {
    tmp_1324_fu_17380_p2 = (!p_shl428_cast_fu_17376_p1.read().is_01() || !tmp_529_cast_fu_17361_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl428_cast_fu_17376_p1.read()) - sc_biguint<35>(tmp_529_cast_fu_17361_p1.read()));
}

void ShuffleNetV2::thread_tmp_1325_fu_17390_p2() {
    tmp_1325_fu_17390_p2 = (!tmp_1517_cast_fu_17386_p1.read().is_01() || !tmp_516_cast1_reg_37465.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1517_cast_fu_17386_p1.read()) + sc_biguint<36>(tmp_516_cast1_reg_37465.read()));
}

void ShuffleNetV2::thread_tmp_1326_fu_17395_p1() {
    tmp_1326_fu_17395_p1 = tmp_1325_fu_17390_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1327_cast_fu_13309_p1() {
    tmp_1327_cast_fu_13309_p1 = esl_sext<64,10>(tmp_1170_reg_35975.read());
}

void ShuffleNetV2::thread_tmp_1327_fu_17399_p1() {
    tmp_1327_fu_17399_p1 = tmp_1325_fu_17390_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1328_fu_17439_p2() {
    tmp_1328_fu_17439_p2 = (!p_shl427_cast_fu_17432_p3.read().is_01() || !tmp_1326_reg_37508.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl427_cast_fu_17432_p3.read()) - sc_biguint<10>(tmp_1326_reg_37508.read()));
}

void ShuffleNetV2::thread_tmp_1329_fu_17444_p2() {
    tmp_1329_fu_17444_p2 = (!tmp_1328_fu_17439_p2.read().is_01() || !tmp_523_cast1_reg_37483.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1328_fu_17439_p2.read()) + sc_biguint<10>(tmp_523_cast1_reg_37483.read()));
}

void ShuffleNetV2::thread_tmp_1330_fu_17406_p3() {
    tmp_1330_fu_17406_p3 = esl_concat<9,2>(tmp_530_reg_37502.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1331_fu_17417_p2() {
    tmp_1331_fu_17417_p2 = (!p_shl426_cast_fu_17413_p1.read().is_01() || !tmp_531_cast_fu_17403_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl426_cast_fu_17413_p1.read()) - sc_biguint<12>(tmp_531_cast_fu_17403_p1.read()));
}

void ShuffleNetV2::thread_tmp_1332_fu_17427_p2() {
    tmp_1332_fu_17427_p2 = (!tmp_1523_cast_fu_17423_p1.read().is_01() || !tmp_516_cast_reg_37460.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1523_cast_fu_17423_p1.read()) + sc_biguint<13>(tmp_516_cast_reg_37460.read()));
}

void ShuffleNetV2::thread_tmp_1333_fu_17452_p3() {
    tmp_1333_fu_17452_p3 = esl_concat<13,2>(tmp_1332_reg_37518.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1334_fu_17463_p2() {
    tmp_1334_fu_17463_p2 = (!p_shl231_fu_17459_p1.read().is_01() || !tmp_1524_cast_fu_17449_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl231_fu_17459_p1.read()) - sc_bigint<64>(tmp_1524_cast_fu_17449_p1.read()));
}

void ShuffleNetV2::thread_tmp_1335_fu_17469_p2() {
    tmp_1335_fu_17469_p2 = (!tmp_1334_fu_17463_p2.read().is_01() || !tmp_523_reg_37478.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1334_fu_17463_p2.read()) + sc_biguint<64>(tmp_523_reg_37478.read()));
}

void ShuffleNetV2::thread_tmp_1336_cast_fu_13586_p1() {
    tmp_1336_cast_fu_13586_p1 = esl_sext<36,35>(tmp_1176_fu_13580_p2.read());
}

void ShuffleNetV2::thread_tmp_1336_fu_18049_p3() {
    tmp_1336_fu_18049_p3 = esl_concat<6,3>(co84_reg_5851.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1337_fu_18061_p3() {
    tmp_1337_fu_18061_p3 = esl_concat<6,1>(co84_reg_5851.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1338_fu_18073_p2() {
    tmp_1338_fu_18073_p2 = (!p_shl434_cast_fu_18069_p1.read().is_01() || !p_shl433_cast_fu_18057_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl434_cast_fu_18069_p1.read()) + sc_biguint<10>(p_shl433_cast_fu_18057_p1.read()));
}

void ShuffleNetV2::thread_tmp_1339_fu_17953_p1() {
    tmp_1339_fu_17953_p1 = k24_reg_5840.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1340_cast_fu_13685_p1() {
    tmp_1340_cast_fu_13685_p1 = esl_zext<64,10>(tmp_1181_reg_36158.read());
}

void ShuffleNetV2::thread_tmp_1340_fu_17720_p1() {
    tmp_1340_fu_17720_p1 = i72_reg_5818.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1341_fu_17754_p1() {
    tmp_1341_fu_17754_p1 = tmp_537_fu_17748_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1342_cast_fu_13623_p1() {
    tmp_1342_cast_fu_13623_p1 = esl_sext<12,11>(tmp_1183_fu_13617_p2.read());
}

void ShuffleNetV2::thread_tmp_1342_fu_17854_p3() {
    tmp_1342_fu_17854_p3 = esl_concat<10,5>(tmp_540_reg_37631.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1343_cast_fu_13649_p1() {
    tmp_1343_cast_fu_13649_p1 = esl_sext<64,12>(tmp_1184_reg_36152.read());
}

void ShuffleNetV2::thread_tmp_1343_fu_17865_p3() {
    tmp_1343_fu_17865_p3 = esl_concat<10,3>(tmp_540_reg_37631.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1344_fu_17876_p2() {
    tmp_1344_fu_17876_p2 = (!p_shl431_cast_fu_17861_p1.read().is_01() || !p_shl432_cast_fu_17872_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl431_cast_fu_17861_p1.read()) - sc_biguint<16>(p_shl432_cast_fu_17872_p1.read()));
}

void ShuffleNetV2::thread_tmp_1345_fu_17886_p2() {
    tmp_1345_fu_17886_p2 = (!tmp_526_cast_reg_37618.read().is_01() || !tmp_1539_cast_fu_17882_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_526_cast_reg_37618.read()) + sc_bigint<17>(tmp_1539_cast_fu_17882_p1.read()));
}

void ShuffleNetV2::thread_tmp_1346_fu_17823_p3() {
    tmp_1346_fu_17823_p3 = esl_concat<4,6>(tmp_541_fu_17813_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1347_fu_17831_p3() {
    tmp_1347_fu_17831_p3 = esl_concat<4,4>(tmp_541_fu_17813_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1348_fu_17843_p2() {
    tmp_1348_fu_17843_p2 = (!tmp_1346_fu_17823_p3.read().is_01() || !p_shl430_cast_fu_17839_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1346_fu_17823_p3.read()) - sc_bigint<10>(p_shl430_cast_fu_17839_p1.read()));
}

void ShuffleNetV2::thread_tmp_1349_fu_17849_p2() {
    tmp_1349_fu_17849_p2 = (!tmp_525_cast_reg_37613.read().is_01() || !tmp_1348_fu_17843_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_525_cast_reg_37613.read()) + sc_biguint<10>(tmp_1348_fu_17843_p2.read()));
}

void ShuffleNetV2::thread_tmp_1350_fu_18172_p3() {
    tmp_1350_fu_18172_p3 = esl_concat<6,3>(co86_reg_5884.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1351_fu_18184_p3() {
    tmp_1351_fu_18184_p3 = esl_concat<6,1>(co86_reg_5884.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1352_fu_18196_p2() {
    tmp_1352_fu_18196_p2 = (!p_shl440_cast_fu_18192_p1.read().is_01() || !p_shl439_cast_fu_18180_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl440_cast_fu_18192_p1.read()) + sc_biguint<10>(p_shl439_cast_fu_18180_p1.read()));
}

void ShuffleNetV2::thread_tmp_1353_fu_18208_p3() {
    tmp_1353_fu_18208_p3 = esl_concat<7,3>(tmp_542_fu_18202_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1354_fu_18220_p3() {
    tmp_1354_fu_18220_p3 = esl_concat<7,1>(tmp_542_fu_18202_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1355_cast_fu_14082_p1() {
    tmp_1355_cast_fu_14082_p1 = esl_sext<16,15>(tmp_1193_fu_14076_p2.read());
}

void ShuffleNetV2::thread_tmp_1355_fu_18232_p2() {
    tmp_1355_fu_18232_p2 = (!p_shl438_cast_fu_18228_p1.read().is_01() || !p_shl437_cast_fu_18216_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl438_cast_fu_18228_p1.read()) + sc_biguint<11>(p_shl437_cast_fu_18216_p1.read()));
}

void ShuffleNetV2::thread_tmp_1356_cast_fu_14091_p1() {
    tmp_1356_cast_fu_14091_p1 = esl_sext<33,16>(tmp_1194_fu_14086_p2.read());
}

void ShuffleNetV2::thread_tmp_1356_fu_18095_p2() {
    tmp_1356_fu_18095_p2 = (!tmp_543_cast_fu_18091_p1.read().is_01() || !tmp_1338_reg_37742.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_543_cast_fu_18091_p1.read()) + sc_biguint<10>(tmp_1338_reg_37742.read()));
}

void ShuffleNetV2::thread_tmp_1357_fu_18100_p3() {
    tmp_1357_fu_18100_p3 = esl_concat<10,3>(tmp_1356_fu_18095_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1358_fu_18112_p3() {
    tmp_1358_fu_18112_p3 = esl_concat<10,1>(tmp_1356_fu_18095_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1359_fu_18124_p2() {
    tmp_1359_fu_18124_p2 = (!p_shl435_cast_fu_18108_p1.read().is_01() || !p_shl436_cast_fu_18120_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl435_cast_fu_18108_p1.read()) + sc_biguint<15>(p_shl436_cast_fu_18120_p1.read()));
}

void ShuffleNetV2::thread_tmp_1360_fu_18383_p1() {
    tmp_1360_fu_18383_p1 = co88_reg_5917.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1361_fu_18258_p2() {
    tmp_1361_fu_18258_p2 = (!tmp_545_cast_fu_18254_p1.read().is_01() || !tmp_1352_reg_37786.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_545_cast_fu_18254_p1.read()) + sc_biguint<10>(tmp_1352_reg_37786.read()));
}

void ShuffleNetV2::thread_tmp_1362_cast_fu_14110_p1() {
    tmp_1362_cast_fu_14110_p1 = esl_sext<64,10>(tmp_1198_reg_36275.read());
}

void ShuffleNetV2::thread_tmp_1362_fu_18263_p3() {
    tmp_1362_fu_18263_p3 = esl_concat<10,3>(tmp_1361_fu_18258_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1363_fu_18275_p3() {
    tmp_1363_fu_18275_p3 = esl_concat<10,1>(tmp_1361_fu_18258_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1364_fu_18287_p2() {
    tmp_1364_fu_18287_p2 = (!p_shl443_cast_fu_18271_p1.read().is_01() || !p_shl444_cast_fu_18283_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl443_cast_fu_18271_p1.read()) + sc_biguint<14>(p_shl444_cast_fu_18283_p1.read()));
}

void ShuffleNetV2::thread_tmp_1365_fu_18293_p2() {
    tmp_1365_fu_18293_p2 = (!tmp_545_cast1_fu_18250_p1.read().is_01() || !tmp_1355_reg_37791.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_545_cast1_fu_18250_p1.read()) + sc_biguint<11>(tmp_1355_reg_37791.read()));
}

void ShuffleNetV2::thread_tmp_1366_fu_18298_p3() {
    tmp_1366_fu_18298_p3 = esl_concat<11,3>(tmp_1365_fu_18293_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1367_fu_18310_p3() {
    tmp_1367_fu_18310_p3 = esl_concat<11,1>(tmp_1365_fu_18293_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1368_fu_18322_p2() {
    tmp_1368_fu_18322_p2 = (!p_shl441_cast_fu_18306_p1.read().is_01() || !p_shl442_cast_fu_18318_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl441_cast_fu_18306_p1.read()) + sc_biguint<15>(p_shl442_cast_fu_18318_p1.read()));
}

void ShuffleNetV2::thread_tmp_1369_fu_18146_p2() {
    tmp_1369_fu_18146_p2 = (!tmp_1359_reg_37755.read().is_01() || !tmp_546_cast_fu_18142_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1359_reg_37755.read()) + sc_biguint<15>(tmp_546_cast_fu_18142_p1.read()));
}

void ShuffleNetV2::thread_tmp_1370_fu_18348_p2() {
    tmp_1370_fu_18348_p2 = (!tmp_1364_reg_37804.read().is_01() || !tmp_550_cast_fu_18344_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1364_reg_37804.read()) + sc_biguint<14>(tmp_550_cast_fu_18344_p1.read()));
}

void ShuffleNetV2::thread_tmp_1371_cast_fu_14391_p1() {
    tmp_1371_cast_fu_14391_p1 = esl_sext<36,35>(tmp_1204_fu_14385_p2.read());
}

void ShuffleNetV2::thread_tmp_1371_fu_18353_p2() {
    tmp_1371_fu_18353_p2 = (!tmp_1368_reg_37809.read().is_01() || !tmp_550_cast1_fu_18340_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1368_reg_37809.read()) + sc_biguint<15>(tmp_550_cast1_fu_18340_p1.read()));
}

void ShuffleNetV2::thread_tmp_1372_fu_18723_p1() {
    tmp_1372_fu_18723_p1 = k26_reg_5961.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1373_fu_18482_p1() {
    tmp_1373_fu_18482_p1 = i76_reg_5939.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1374_fu_18516_p1() {
    tmp_1374_fu_18516_p1 = tmp_556_fu_18510_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1375_cast_fu_14486_p1() {
    tmp_1375_cast_fu_14486_p1 = esl_zext<64,10>(tmp_1209_reg_36458.read());
}

void ShuffleNetV2::thread_tmp_1375_fu_18616_p3() {
    tmp_1375_fu_18616_p3 = esl_concat<9,5>(tmp_559_reg_37886.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1376_fu_18623_p1() {
    tmp_1376_fu_18623_p1 = esl_sext<15,14>(tmp_1375_fu_18616_p3.read());
}

void ShuffleNetV2::thread_tmp_1377_fu_18631_p3() {
    tmp_1377_fu_18631_p3 = esl_concat<9,3>(tmp_559_reg_37886.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1378_cast_fu_14450_p1() {
    tmp_1378_cast_fu_14450_p1 = esl_sext<64,11>(tmp_1212_reg_36452.read());
}

void ShuffleNetV2::thread_tmp_1378_fu_18638_p1() {
    tmp_1378_fu_18638_p1 = esl_sext<13,12>(tmp_1377_fu_18631_p3.read());
}

void ShuffleNetV2::thread_tmp_1379_fu_18646_p2() {
    tmp_1379_fu_18646_p2 = (!p_shl447_cast_fu_18627_p1.read().is_01() || !p_shl448_cast_fu_18642_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl447_cast_fu_18627_p1.read()) - sc_biguint<16>(p_shl448_cast_fu_18642_p1.read()));
}

void ShuffleNetV2::thread_tmp_1380_fu_18656_p2() {
    tmp_1380_fu_18656_p2 = (!tmp_549_cast_reg_37873.read().is_01() || !tmp_1580_cast_fu_18652_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_549_cast_reg_37873.read()) + sc_bigint<17>(tmp_1580_cast_fu_18652_p1.read()));
}

void ShuffleNetV2::thread_tmp_1381_fu_18585_p3() {
    tmp_1381_fu_18585_p3 = esl_concat<4,6>(tmp_560_fu_18575_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1382_fu_18593_p3() {
    tmp_1382_fu_18593_p3 = esl_concat<4,4>(tmp_560_fu_18575_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1383_fu_18605_p2() {
    tmp_1383_fu_18605_p2 = (!tmp_1381_fu_18585_p3.read().is_01() || !p_shl446_cast_fu_18601_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1381_fu_18585_p3.read()) - sc_bigint<10>(p_shl446_cast_fu_18601_p1.read()));
}

void ShuffleNetV2::thread_tmp_1384_fu_18611_p2() {
    tmp_1384_fu_18611_p2 = (!tmp_548_cast_reg_37868.read().is_01() || !tmp_1383_fu_18605_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_548_cast_reg_37868.read()) + sc_biguint<10>(tmp_1383_fu_18605_p2.read()));
}

void ShuffleNetV2::thread_tmp_1385_fu_19192_p1() {
    tmp_1385_fu_19192_p1 = co92_reg_6038.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1386_fu_19092_p1() {
    tmp_1386_fu_19092_p1 = k28_reg_6027.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1387_fu_18879_p1() {
    tmp_1387_fu_18879_p1 = i81_reg_6005.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1388_fu_18940_p3() {
    tmp_1388_fu_18940_p3 = esl_concat<7,2>(tmp_573_reg_38051.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1389_fu_18947_p1() {
    tmp_1389_fu_18947_p1 = esl_sext<34,9>(tmp_1388_fu_18940_p3.read());
}

void ShuffleNetV2::thread_tmp_1390_fu_18955_p2() {
    tmp_1390_fu_18955_p2 = (!p_shl452_cast_fu_18951_p1.read().is_01() || !tmp_574_cast_fu_18936_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl452_cast_fu_18951_p1.read()) - sc_biguint<35>(tmp_574_cast_fu_18936_p1.read()));
}

void ShuffleNetV2::thread_tmp_1391_fu_18965_p2() {
    tmp_1391_fu_18965_p2 = (!tmp_1596_cast_fu_18961_p1.read().is_01() || !tmp_561_cast_reg_38020.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1596_cast_fu_18961_p1.read()) + sc_biguint<36>(tmp_561_cast_reg_38020.read()));
}

void ShuffleNetV2::thread_tmp_1392_fu_18970_p1() {
    tmp_1392_fu_18970_p1 = tmp_1391_fu_18965_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1393_fu_18974_p1() {
    tmp_1393_fu_18974_p1 = tmp_1391_fu_18965_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1394_fu_19010_p2() {
    tmp_1394_fu_19010_p2 = (!p_shl451_cast_fu_19003_p3.read().is_01() || !tmp_1392_reg_38063.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl451_cast_fu_19003_p3.read()) - sc_biguint<10>(tmp_1392_reg_38063.read()));
}

void ShuffleNetV2::thread_tmp_1395_fu_19015_p2() {
    tmp_1395_fu_19015_p2 = (!tmp_1394_fu_19010_p2.read().is_01() || !tmp_568_cast1_reg_38038.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1394_fu_19010_p2.read()) + sc_biguint<10>(tmp_568_cast1_reg_38038.read()));
}

void ShuffleNetV2::thread_tmp_1396_cast_fu_14883_p1() {
    tmp_1396_cast_fu_14883_p1 = esl_sext<17,16>(tmp_1227_fu_14877_p2.read());
}

void ShuffleNetV2::thread_tmp_1396_fu_18981_p3() {
    tmp_1396_fu_18981_p3 = esl_concat<9,2>(tmp_575_reg_38057.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1397_cast_fu_14892_p1() {
    tmp_1397_cast_fu_14892_p1 = esl_sext<33,17>(tmp_1228_fu_14887_p2.read());
}

void ShuffleNetV2::thread_tmp_1397_fu_18992_p2() {
    tmp_1397_fu_18992_p2 = (!p_shl450_cast_fu_18988_p1.read().is_01() || !tmp_576_cast_fu_18978_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl450_cast_fu_18988_p1.read()) - sc_biguint<12>(tmp_576_cast_fu_18978_p1.read()));
}

void ShuffleNetV2::thread_tmp_1398_fu_18998_p2() {
    tmp_1398_fu_18998_p2 = (!tmp_1397_fu_18992_p2.read().is_01() || !tmp_561_cast1_reg_38015.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1397_fu_18992_p2.read()) + sc_biguint<12>(tmp_561_cast1_reg_38015.read()));
}

void ShuffleNetV2::thread_tmp_1399_fu_19023_p3() {
    tmp_1399_fu_19023_p3 = esl_concat<12,2>(tmp_1398_reg_38073.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1400_fu_19034_p2() {
    tmp_1400_fu_19034_p2 = (!p_shl237_fu_19030_p1.read().is_01() || !tmp_1603_cast_fu_19020_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl237_fu_19030_p1.read()) - sc_bigint<64>(tmp_1603_cast_fu_19020_p1.read()));
}

void ShuffleNetV2::thread_tmp_1401_fu_19040_p2() {
    tmp_1401_fu_19040_p2 = (!tmp_1400_fu_19034_p2.read().is_01() || !tmp_568_reg_38033.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1400_fu_19034_p2.read()) + sc_biguint<64>(tmp_568_reg_38033.read()));
}

void ShuffleNetV2::thread_tmp_1402_fu_19620_p3() {
    tmp_1402_fu_19620_p3 = esl_concat<6,3>(co94_reg_6093.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1403_cast_fu_14911_p1() {
    tmp_1403_cast_fu_14911_p1 = esl_sext<64,10>(tmp_1232_reg_36575.read());
}

void ShuffleNetV2::thread_tmp_1403_fu_19632_p3() {
    tmp_1403_fu_19632_p3 = esl_concat<6,1>(co94_reg_6093.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1404_fu_19644_p2() {
    tmp_1404_fu_19644_p2 = (!p_shl458_cast_fu_19640_p1.read().is_01() || !p_shl457_cast_fu_19628_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl458_cast_fu_19640_p1.read()) + sc_biguint<10>(p_shl457_cast_fu_19628_p1.read()));
}

void ShuffleNetV2::thread_tmp_1405_fu_19524_p1() {
    tmp_1405_fu_19524_p1 = k30_reg_6082.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1406_fu_19291_p1() {
    tmp_1406_fu_19291_p1 = i83_reg_6060.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1407_fu_19325_p1() {
    tmp_1407_fu_19325_p1 = tmp_582_fu_19319_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1408_fu_19425_p3() {
    tmp_1408_fu_19425_p3 = esl_concat<11,5>(tmp_585_reg_38186.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1409_fu_19436_p3() {
    tmp_1409_fu_19436_p3 = esl_concat<11,3>(tmp_585_reg_38186.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1410_fu_19447_p2() {
    tmp_1410_fu_19447_p2 = (!p_shl455_cast_fu_19432_p1.read().is_01() || !p_shl456_cast_fu_19443_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl455_cast_fu_19432_p1.read()) - sc_biguint<17>(p_shl456_cast_fu_19443_p1.read()));
}

void ShuffleNetV2::thread_tmp_1411_fu_19457_p2() {
    tmp_1411_fu_19457_p2 = (!tmp_571_cast_reg_38173.read().is_01() || !tmp_1618_cast_fu_19453_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_571_cast_reg_38173.read()) + sc_bigint<18>(tmp_1618_cast_fu_19453_p1.read()));
}

void ShuffleNetV2::thread_tmp_1412_fu_19394_p3() {
    tmp_1412_fu_19394_p3 = esl_concat<4,6>(tmp_586_fu_19384_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1413_fu_19402_p3() {
    tmp_1413_fu_19402_p3 = esl_concat<4,4>(tmp_586_fu_19384_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1414_cast_fu_15241_p1() {
    tmp_1414_cast_fu_15241_p1 = esl_zext<64,14>(tmp_1242_reg_36712.read());
}

void ShuffleNetV2::thread_tmp_1414_fu_19414_p2() {
    tmp_1414_fu_19414_p2 = (!tmp_1412_fu_19394_p3.read().is_01() || !p_shl454_cast_fu_19410_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1412_fu_19394_p3.read()) - sc_bigint<10>(p_shl454_cast_fu_19410_p1.read()));
}

void ShuffleNetV2::thread_tmp_1415_cast_fu_15236_p1() {
    tmp_1415_cast_fu_15236_p1 = esl_zext<64,15>(tmp_1243_fu_15231_p2.read());
}

void ShuffleNetV2::thread_tmp_1415_fu_19420_p2() {
    tmp_1415_fu_19420_p2 = (!tmp_570_cast_reg_38168.read().is_01() || !tmp_1414_fu_19414_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_570_cast_reg_38168.read()) + sc_biguint<10>(tmp_1414_fu_19414_p2.read()));
}

void ShuffleNetV2::thread_tmp_1416_fu_19743_p3() {
    tmp_1416_fu_19743_p3 = esl_concat<6,3>(co96_reg_6126.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1417_fu_19755_p3() {
    tmp_1417_fu_19755_p3 = esl_concat<6,1>(co96_reg_6126.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1418_fu_19767_p2() {
    tmp_1418_fu_19767_p2 = (!p_shl464_cast_fu_19763_p1.read().is_01() || !p_shl463_cast_fu_19751_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl464_cast_fu_19763_p1.read()) + sc_biguint<10>(p_shl463_cast_fu_19751_p1.read()));
}

void ShuffleNetV2::thread_tmp_1419_fu_19779_p3() {
    tmp_1419_fu_19779_p3 = esl_concat<7,3>(tmp_587_fu_19773_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1420_fu_19791_p3() {
    tmp_1420_fu_19791_p3 = esl_concat<7,1>(tmp_587_fu_19773_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1421_fu_19803_p2() {
    tmp_1421_fu_19803_p2 = (!p_shl462_cast_fu_19799_p1.read().is_01() || !p_shl461_cast_fu_19787_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl462_cast_fu_19799_p1.read()) + sc_biguint<11>(p_shl461_cast_fu_19787_p1.read()));
}

void ShuffleNetV2::thread_tmp_1422_fu_19666_p2() {
    tmp_1422_fu_19666_p2 = (!tmp_588_cast_fu_19662_p1.read().is_01() || !tmp_1404_reg_38297.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_588_cast_fu_19662_p1.read()) + sc_biguint<10>(tmp_1404_reg_38297.read()));
}

void ShuffleNetV2::thread_tmp_1423_fu_19671_p3() {
    tmp_1423_fu_19671_p3 = esl_concat<10,3>(tmp_1422_fu_19666_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1424_cast_fu_15522_p1() {
    tmp_1424_cast_fu_15522_p1 = esl_sext<17,16>(tmp_1249_fu_15516_p2.read());
}

void ShuffleNetV2::thread_tmp_1424_fu_19683_p3() {
    tmp_1424_fu_19683_p3 = esl_concat<10,1>(tmp_1422_fu_19666_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1425_cast_fu_15531_p1() {
    tmp_1425_cast_fu_15531_p1 = esl_sext<33,17>(tmp_1250_fu_15526_p2.read());
}

void ShuffleNetV2::thread_tmp_1425_fu_19695_p2() {
    tmp_1425_fu_19695_p2 = (!p_shl459_cast_fu_19679_p1.read().is_01() || !p_shl460_cast_fu_19691_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl459_cast_fu_19679_p1.read()) + sc_biguint<15>(p_shl460_cast_fu_19691_p1.read()));
}

void ShuffleNetV2::thread_tmp_1426_fu_19954_p1() {
    tmp_1426_fu_19954_p1 = co98_reg_6159.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1427_fu_19829_p2() {
    tmp_1427_fu_19829_p2 = (!tmp_590_cast_fu_19825_p1.read().is_01() || !tmp_1421_reg_38346.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_590_cast_fu_19825_p1.read()) + sc_biguint<11>(tmp_1421_reg_38346.read()));
}

void ShuffleNetV2::thread_tmp_1428_fu_19834_p3() {
    tmp_1428_fu_19834_p3 = esl_concat<11,3>(tmp_1427_fu_19829_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1429_fu_19846_p3() {
    tmp_1429_fu_19846_p3 = esl_concat<11,1>(tmp_1427_fu_19829_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1430_fu_19858_p2() {
    tmp_1430_fu_19858_p2 = (!p_shl467_cast_fu_19842_p1.read().is_01() || !p_shl468_cast_fu_19854_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl467_cast_fu_19842_p1.read()) + sc_biguint<15>(p_shl468_cast_fu_19854_p1.read()));
}

void ShuffleNetV2::thread_tmp_1431_cast_fu_15550_p1() {
    tmp_1431_cast_fu_15550_p1 = esl_sext<64,10>(tmp_1254_reg_36786.read());
}

void ShuffleNetV2::thread_tmp_1431_fu_19864_p2() {
    tmp_1431_fu_19864_p2 = (!tmp_590_cast1_fu_19821_p1.read().is_01() || !tmp_1418_reg_38341.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_590_cast1_fu_19821_p1.read()) + sc_biguint<10>(tmp_1418_reg_38341.read()));
}

void ShuffleNetV2::thread_tmp_1432_fu_19869_p3() {
    tmp_1432_fu_19869_p3 = esl_concat<10,3>(tmp_1431_fu_19864_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1433_fu_19881_p3() {
    tmp_1433_fu_19881_p3 = esl_concat<10,1>(tmp_1431_fu_19864_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1434_fu_19893_p2() {
    tmp_1434_fu_19893_p2 = (!p_shl465_cast_fu_19877_p1.read().is_01() || !p_shl466_cast_fu_19889_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl465_cast_fu_19877_p1.read()) + sc_biguint<14>(p_shl466_cast_fu_19889_p1.read()));
}

void ShuffleNetV2::thread_tmp_1435_fu_19717_p2() {
    tmp_1435_fu_19717_p2 = (!tmp_1425_reg_38310.read().is_01() || !tmp_591_cast_fu_19713_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1425_reg_38310.read()) + sc_biguint<15>(tmp_591_cast_fu_19713_p1.read()));
}

void ShuffleNetV2::thread_tmp_1436_fu_19919_p2() {
    tmp_1436_fu_19919_p2 = (!tmp_1430_reg_38359.read().is_01() || !tmp_595_cast_fu_19915_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1430_reg_38359.read()) + sc_biguint<15>(tmp_595_cast_fu_19915_p1.read()));
}

void ShuffleNetV2::thread_tmp_1437_fu_19929_p2() {
    tmp_1437_fu_19929_p2 = (!tmp_1434_reg_38364.read().is_01() || !tmp_595_cast1_fu_19911_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1434_reg_38364.read()) + sc_biguint<14>(tmp_595_cast1_fu_19911_p1.read()));
}

void ShuffleNetV2::thread_tmp_1438_fu_20286_p1() {
    tmp_1438_fu_20286_p1 = k32_reg_6203.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1439_fu_20053_p1() {
    tmp_1439_fu_20053_p1 = i87_reg_6181.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1440_cast_fu_15831_p1() {
    tmp_1440_cast_fu_15831_p1 = esl_sext<36,35>(tmp_1260_fu_15825_p2.read());
}

void ShuffleNetV2::thread_tmp_1440_fu_20087_p1() {
    tmp_1440_fu_20087_p1 = tmp_601_fu_20081_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1441_fu_20187_p3() {
    tmp_1441_fu_20187_p3 = esl_concat<11,5>(tmp_604_reg_38441.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1442_fu_20198_p3() {
    tmp_1442_fu_20198_p3 = esl_concat<11,3>(tmp_604_reg_38441.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1443_fu_20209_p2() {
    tmp_1443_fu_20209_p2 = (!p_shl471_cast_fu_20194_p1.read().is_01() || !p_shl472_cast_fu_20205_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl471_cast_fu_20194_p1.read()) - sc_biguint<17>(p_shl472_cast_fu_20205_p1.read()));
}

void ShuffleNetV2::thread_tmp_1444_cast_fu_15930_p1() {
    tmp_1444_cast_fu_15930_p1 = esl_zext<64,10>(tmp_1265_reg_36969.read());
}

void ShuffleNetV2::thread_tmp_1444_fu_20219_p2() {
    tmp_1444_fu_20219_p2 = (!tmp_594_cast_reg_38428.read().is_01() || !tmp_1657_cast_fu_20215_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_594_cast_reg_38428.read()) + sc_bigint<18>(tmp_1657_cast_fu_20215_p1.read()));
}

void ShuffleNetV2::thread_tmp_1445_fu_20156_p3() {
    tmp_1445_fu_20156_p3 = esl_concat<4,6>(tmp_605_fu_20146_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1446_cast_fu_15868_p1() {
    tmp_1446_cast_fu_15868_p1 = esl_sext<13,12>(tmp_1267_fu_15862_p2.read());
}

void ShuffleNetV2::thread_tmp_1446_fu_20164_p3() {
    tmp_1446_fu_20164_p3 = esl_concat<4,4>(tmp_605_fu_20146_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1447_cast_fu_15894_p1() {
    tmp_1447_cast_fu_15894_p1 = esl_sext<64,13>(tmp_1268_reg_36963.read());
}

void ShuffleNetV2::thread_tmp_1447_fu_20176_p2() {
    tmp_1447_fu_20176_p2 = (!tmp_1445_fu_20156_p3.read().is_01() || !p_shl470_cast_fu_20172_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1445_fu_20156_p3.read()) - sc_bigint<10>(p_shl470_cast_fu_20172_p1.read()));
}

void ShuffleNetV2::thread_tmp_1448_fu_20182_p2() {
    tmp_1448_fu_20182_p2 = (!tmp_593_cast1_reg_38423.read().is_01() || !tmp_1447_fu_20176_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_593_cast1_reg_38423.read()) + sc_biguint<10>(tmp_1447_fu_20176_p2.read()));
}

void ShuffleNetV2::thread_tmp_1449_fu_20747_p1() {
    tmp_1449_fu_20747_p1 = co102_reg_6280.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1450_fu_20651_p1() {
    tmp_1450_fu_20651_p1 = k34_reg_6269.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1451_fu_20438_p1() {
    tmp_1451_fu_20438_p1 = i92_reg_6247.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1452_fu_20499_p3() {
    tmp_1452_fu_20499_p3 = esl_concat<7,2>(tmp_618_reg_38606.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1453_fu_20506_p1() {
    tmp_1453_fu_20506_p1 = esl_sext<34,9>(tmp_1452_fu_20499_p3.read());
}

void ShuffleNetV2::thread_tmp_1454_fu_20514_p2() {
    tmp_1454_fu_20514_p2 = (!p_shl476_cast_fu_20510_p1.read().is_01() || !tmp_619_cast_fu_20495_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl476_cast_fu_20510_p1.read()) - sc_biguint<35>(tmp_619_cast_fu_20495_p1.read()));
}

void ShuffleNetV2::thread_tmp_1455_fu_20524_p2() {
    tmp_1455_fu_20524_p2 = (!tmp_1673_cast_fu_20520_p1.read().is_01() || !tmp_606_cast_reg_38575.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1673_cast_fu_20520_p1.read()) + sc_biguint<36>(tmp_606_cast_reg_38575.read()));
}

void ShuffleNetV2::thread_tmp_1456_fu_20529_p1() {
    tmp_1456_fu_20529_p1 = tmp_1455_fu_20524_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1457_fu_20533_p1() {
    tmp_1457_fu_20533_p1 = tmp_1455_fu_20524_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1458_fu_20569_p2() {
    tmp_1458_fu_20569_p2 = (!p_shl475_cast_fu_20562_p3.read().is_01() || !tmp_1456_reg_38618.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl475_cast_fu_20562_p3.read()) - sc_biguint<10>(tmp_1456_reg_38618.read()));
}

void ShuffleNetV2::thread_tmp_1459_fu_20574_p2() {
    tmp_1459_fu_20574_p2 = (!tmp_1458_fu_20569_p2.read().is_01() || !tmp_613_cast1_reg_38593.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1458_fu_20569_p2.read()) + sc_biguint<10>(tmp_613_cast1_reg_38593.read()));
}

void ShuffleNetV2::thread_tmp_1460_fu_20540_p3() {
    tmp_1460_fu_20540_p3 = esl_concat<9,2>(tmp_620_reg_38612.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1461_fu_20551_p2() {
    tmp_1461_fu_20551_p2 = (!p_shl474_cast_fu_20547_p1.read().is_01() || !tmp_621_cast_fu_20537_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl474_cast_fu_20547_p1.read()) - sc_biguint<12>(tmp_621_cast_fu_20537_p1.read()));
}

void ShuffleNetV2::thread_tmp_1462_cast_fu_16323_p1() {
    tmp_1462_cast_fu_16323_p1 = esl_sext<17,16>(tmp_1280_fu_16317_p2.read());
}

void ShuffleNetV2::thread_tmp_1462_fu_20557_p2() {
    tmp_1462_fu_20557_p2 = (!tmp_1461_fu_20551_p2.read().is_01() || !tmp_606_cast1_reg_38570.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1461_fu_20551_p2.read()) + sc_biguint<12>(tmp_606_cast1_reg_38570.read()));
}

void ShuffleNetV2::thread_tmp_1463_cast_fu_16332_p1() {
    tmp_1463_cast_fu_16332_p1 = esl_sext<33,17>(tmp_1281_fu_16327_p2.read());
}

void ShuffleNetV2::thread_tmp_1463_fu_20582_p3() {
    tmp_1463_fu_20582_p3 = esl_concat<12,2>(tmp_1462_reg_38628.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1464_fu_20593_p2() {
    tmp_1464_fu_20593_p2 = (!p_shl240_fu_20589_p1.read().is_01() || !tmp_1680_cast_fu_20579_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl240_fu_20589_p1.read()) - sc_bigint<64>(tmp_1680_cast_fu_20579_p1.read()));
}

void ShuffleNetV2::thread_tmp_1465_fu_20599_p2() {
    tmp_1465_fu_20599_p2 = (!tmp_1464_fu_20593_p2.read().is_01() || !tmp_613_reg_38588.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1464_fu_20593_p2.read()) + sc_biguint<64>(tmp_613_reg_38588.read()));
}

void ShuffleNetV2::thread_tmp_1466_fu_21171_p3() {
    tmp_1466_fu_21171_p3 = esl_concat<6,3>(co104_reg_6335.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1467_fu_21183_p3() {
    tmp_1467_fu_21183_p3 = esl_concat<6,1>(co104_reg_6335.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1468_fu_21195_p2() {
    tmp_1468_fu_21195_p2 = (!p_shl482_cast_fu_21191_p1.read().is_01() || !p_shl481_cast_fu_21179_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl482_cast_fu_21191_p1.read()) + sc_biguint<10>(p_shl481_cast_fu_21179_p1.read()));
}

void ShuffleNetV2::thread_tmp_1469_cast_fu_16351_p1() {
    tmp_1469_cast_fu_16351_p1 = esl_sext<64,10>(tmp_1285_reg_37086.read());
}

void ShuffleNetV2::thread_tmp_1469_fu_21079_p1() {
    tmp_1469_fu_21079_p1 = k36_reg_6324.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1470_fu_20846_p1() {
    tmp_1470_fu_20846_p1 = i94_reg_6302.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1471_fu_20880_p1() {
    tmp_1471_fu_20880_p1 = tmp_627_fu_20874_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1472_fu_20980_p3() {
    tmp_1472_fu_20980_p3 = esl_concat<11,5>(tmp_630_reg_38741.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1473_fu_20991_p3() {
    tmp_1473_fu_20991_p3 = esl_concat<11,3>(tmp_630_reg_38741.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1474_fu_21002_p2() {
    tmp_1474_fu_21002_p2 = (!p_shl479_cast_fu_20987_p1.read().is_01() || !p_shl480_cast_fu_20998_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl479_cast_fu_20987_p1.read()) - sc_biguint<17>(p_shl480_cast_fu_20998_p1.read()));
}

void ShuffleNetV2::thread_tmp_1475_fu_21012_p2() {
    tmp_1475_fu_21012_p2 = (!tmp_616_cast_reg_38728.read().is_01() || !tmp_1695_cast_fu_21008_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_616_cast_reg_38728.read()) + sc_bigint<18>(tmp_1695_cast_fu_21008_p1.read()));
}

void ShuffleNetV2::thread_tmp_1476_fu_20949_p3() {
    tmp_1476_fu_20949_p3 = esl_concat<4,6>(tmp_631_fu_20939_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1477_fu_20957_p3() {
    tmp_1477_fu_20957_p3 = esl_concat<4,4>(tmp_631_fu_20939_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1478_fu_20969_p2() {
    tmp_1478_fu_20969_p2 = (!tmp_1476_fu_20949_p3.read().is_01() || !p_shl478_cast_fu_20965_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1476_fu_20949_p3.read()) - sc_bigint<10>(p_shl478_cast_fu_20965_p1.read()));
}

void ShuffleNetV2::thread_tmp_1479_fu_20975_p2() {
    tmp_1479_fu_20975_p2 = (!tmp_615_cast_reg_38723.read().is_01() || !tmp_1478_fu_20969_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_615_cast_reg_38723.read()) + sc_biguint<10>(tmp_1478_fu_20969_p2.read()));
}

void ShuffleNetV2::thread_tmp_1480_fu_21294_p3() {
    tmp_1480_fu_21294_p3 = esl_concat<6,3>(co106_reg_6368.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1481_fu_21306_p3() {
    tmp_1481_fu_21306_p3 = esl_concat<6,1>(co106_reg_6368.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1482_fu_21318_p2() {
    tmp_1482_fu_21318_p2 = (!p_shl488_cast_fu_21314_p1.read().is_01() || !p_shl487_cast_fu_21302_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl488_cast_fu_21314_p1.read()) + sc_biguint<10>(p_shl487_cast_fu_21302_p1.read()));
}

void ShuffleNetV2::thread_tmp_1483_fu_21330_p3() {
    tmp_1483_fu_21330_p3 = esl_concat<7,3>(tmp_632_fu_21324_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1484_fu_21342_p3() {
    tmp_1484_fu_21342_p3 = esl_concat<7,1>(tmp_632_fu_21324_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1485_fu_21354_p2() {
    tmp_1485_fu_21354_p2 = (!p_shl486_cast_fu_21350_p1.read().is_01() || !p_shl485_cast_fu_21338_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl486_cast_fu_21350_p1.read()) + sc_biguint<11>(p_shl485_cast_fu_21338_p1.read()));
}

void ShuffleNetV2::thread_tmp_1486_fu_21217_p2() {
    tmp_1486_fu_21217_p2 = (!tmp_633_cast_fu_21213_p1.read().is_01() || !tmp_1468_reg_38852.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_633_cast_fu_21213_p1.read()) + sc_biguint<10>(tmp_1468_reg_38852.read()));
}

void ShuffleNetV2::thread_tmp_1487_fu_21222_p3() {
    tmp_1487_fu_21222_p3 = esl_concat<10,3>(tmp_1486_fu_21217_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1488_fu_21234_p3() {
    tmp_1488_fu_21234_p3 = esl_concat<10,1>(tmp_1486_fu_21217_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1489_fu_21246_p2() {
    tmp_1489_fu_21246_p2 = (!p_shl483_cast_fu_21230_p1.read().is_01() || !p_shl484_cast_fu_21242_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl483_cast_fu_21230_p1.read()) + sc_biguint<15>(p_shl484_cast_fu_21242_p1.read()));
}

void ShuffleNetV2::thread_tmp_1490_cast_fu_16588_p1() {
    tmp_1490_cast_fu_16588_p1 = esl_zext<64,15>(tmp_1305_fu_16583_p2.read());
}

void ShuffleNetV2::thread_tmp_1490_fu_21505_p1() {
    tmp_1490_fu_21505_p1 = co108_reg_6401.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1491_cast_fu_16800_p1() {
    tmp_1491_cast_fu_16800_p1 = esl_zext<64,14>(tmp_1306_reg_37267.read());
}

void ShuffleNetV2::thread_tmp_1491_fu_21380_p2() {
    tmp_1491_fu_21380_p2 = (!tmp_635_cast_fu_21376_p1.read().is_01() || !tmp_1482_reg_38896.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_635_cast_fu_21376_p1.read()) + sc_biguint<10>(tmp_1482_reg_38896.read()));
}

void ShuffleNetV2::thread_tmp_1492_cast_fu_16795_p1() {
    tmp_1492_cast_fu_16795_p1 = esl_zext<64,15>(tmp_1307_fu_16790_p2.read());
}

void ShuffleNetV2::thread_tmp_1492_fu_21385_p3() {
    tmp_1492_fu_21385_p3 = esl_concat<10,3>(tmp_1491_fu_21380_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1493_fu_21397_p3() {
    tmp_1493_fu_21397_p3 = esl_concat<10,1>(tmp_1491_fu_21380_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1494_fu_21409_p2() {
    tmp_1494_fu_21409_p2 = (!p_shl491_cast_fu_21393_p1.read().is_01() || !p_shl492_cast_fu_21405_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl491_cast_fu_21393_p1.read()) + sc_biguint<14>(p_shl492_cast_fu_21405_p1.read()));
}

void ShuffleNetV2::thread_tmp_1495_fu_21415_p2() {
    tmp_1495_fu_21415_p2 = (!tmp_635_cast1_fu_21372_p1.read().is_01() || !tmp_1485_reg_38901.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_635_cast1_fu_21372_p1.read()) + sc_biguint<11>(tmp_1485_reg_38901.read()));
}

void ShuffleNetV2::thread_tmp_1496_fu_21420_p3() {
    tmp_1496_fu_21420_p3 = esl_concat<11,3>(tmp_1495_fu_21415_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1497_fu_21432_p3() {
    tmp_1497_fu_21432_p3 = esl_concat<11,1>(tmp_1495_fu_21415_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1498_fu_21444_p2() {
    tmp_1498_fu_21444_p2 = (!p_shl489_cast_fu_21428_p1.read().is_01() || !p_shl490_cast_fu_21440_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl489_cast_fu_21428_p1.read()) + sc_biguint<15>(p_shl490_cast_fu_21440_p1.read()));
}

void ShuffleNetV2::thread_tmp_1499_fu_21268_p2() {
    tmp_1499_fu_21268_p2 = (!tmp_1489_reg_38865.read().is_01() || !tmp_636_cast_fu_21264_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1489_reg_38865.read()) + sc_biguint<15>(tmp_636_cast_fu_21264_p1.read()));
}

void ShuffleNetV2::thread_tmp_1500_fu_21470_p2() {
    tmp_1500_fu_21470_p2 = (!tmp_1494_reg_38914.read().is_01() || !tmp_640_cast_fu_21466_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1494_reg_38914.read()) + sc_biguint<14>(tmp_640_cast_fu_21466_p1.read()));
}

void ShuffleNetV2::thread_tmp_1501_cast_fu_17081_p1() {
    tmp_1501_cast_fu_17081_p1 = esl_sext<17,16>(tmp_1313_fu_17075_p2.read());
}

void ShuffleNetV2::thread_tmp_1501_fu_21475_p2() {
    tmp_1501_fu_21475_p2 = (!tmp_1498_reg_38919.read().is_01() || !tmp_640_cast1_fu_21462_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1498_reg_38919.read()) + sc_biguint<15>(tmp_640_cast1_fu_21462_p1.read()));
}

void ShuffleNetV2::thread_tmp_1502_cast_fu_17090_p1() {
    tmp_1502_cast_fu_17090_p1 = esl_sext<33,17>(tmp_1314_fu_17085_p2.read());
}

void ShuffleNetV2::thread_tmp_1502_fu_21837_p1() {
    tmp_1502_fu_21837_p1 = k38_reg_6445.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1503_fu_21604_p1() {
    tmp_1503_fu_21604_p1 = i98_reg_6423.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1504_fu_21638_p1() {
    tmp_1504_fu_21638_p1 = tmp_646_fu_21632_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1505_fu_21738_p3() {
    tmp_1505_fu_21738_p3 = esl_concat<11,5>(tmp_649_reg_38996.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1506_fu_21749_p3() {
    tmp_1506_fu_21749_p3 = esl_concat<11,3>(tmp_649_reg_38996.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1507_fu_21760_p2() {
    tmp_1507_fu_21760_p2 = (!p_shl495_cast_fu_21745_p1.read().is_01() || !p_shl496_cast_fu_21756_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl495_cast_fu_21745_p1.read()) - sc_biguint<17>(p_shl496_cast_fu_21756_p1.read()));
}

void ShuffleNetV2::thread_tmp_1508_cast_fu_17109_p1() {
    tmp_1508_cast_fu_17109_p1 = esl_sext<64,10>(tmp_1318_reg_37341.read());
}

void ShuffleNetV2::thread_tmp_1508_fu_21770_p2() {
    tmp_1508_fu_21770_p2 = (!tmp_639_cast_reg_38983.read().is_01() || !tmp_1734_cast_fu_21766_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_639_cast_reg_38983.read()) + sc_bigint<18>(tmp_1734_cast_fu_21766_p1.read()));
}

void ShuffleNetV2::thread_tmp_1509_fu_21707_p3() {
    tmp_1509_fu_21707_p3 = esl_concat<4,6>(tmp_650_fu_21697_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1510_fu_21715_p3() {
    tmp_1510_fu_21715_p3 = esl_concat<4,4>(tmp_650_fu_21697_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1511_fu_21727_p2() {
    tmp_1511_fu_21727_p2 = (!tmp_1509_fu_21707_p3.read().is_01() || !p_shl494_cast_fu_21723_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1509_fu_21707_p3.read()) - sc_bigint<10>(p_shl494_cast_fu_21723_p1.read()));
}

void ShuffleNetV2::thread_tmp_1512_fu_21733_p2() {
    tmp_1512_fu_21733_p2 = (!tmp_638_cast_reg_38978.read().is_01() || !tmp_1511_fu_21727_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_638_cast_reg_38978.read()) + sc_biguint<10>(tmp_1511_fu_21727_p2.read()));
}

void ShuffleNetV2::thread_tmp_1513_fu_22306_p1() {
    tmp_1513_fu_22306_p1 = co112_reg_6522.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1514_fu_22210_p1() {
    tmp_1514_fu_22210_p1 = k40_reg_6511.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1515_fu_21989_p1() {
    tmp_1515_fu_21989_p1 = i103_reg_6489.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1516_fu_22050_p3() {
    tmp_1516_fu_22050_p3 = esl_concat<7,2>(tmp_663_reg_39161.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1517_cast_fu_17386_p1() {
    tmp_1517_cast_fu_17386_p1 = esl_sext<36,35>(tmp_1324_fu_17380_p2.read());
}

void ShuffleNetV2::thread_tmp_1517_fu_22057_p1() {
    tmp_1517_fu_22057_p1 = esl_sext<34,9>(tmp_1516_fu_22050_p3.read());
}

void ShuffleNetV2::thread_tmp_1518_fu_22065_p2() {
    tmp_1518_fu_22065_p2 = (!p_shl500_cast_fu_22061_p1.read().is_01() || !tmp_664_cast_fu_22046_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl500_cast_fu_22061_p1.read()) - sc_biguint<35>(tmp_664_cast_fu_22046_p1.read()));
}

void ShuffleNetV2::thread_tmp_1519_fu_22075_p2() {
    tmp_1519_fu_22075_p2 = (!tmp_1750_cast_fu_22071_p1.read().is_01() || !tmp_651_cast2_reg_39130.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1750_cast_fu_22071_p1.read()) + sc_biguint<36>(tmp_651_cast2_reg_39130.read()));
}

void ShuffleNetV2::thread_tmp_1520_fu_22080_p1() {
    tmp_1520_fu_22080_p1 = tmp_1519_fu_22075_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1521_cast_fu_17485_p1() {
    tmp_1521_cast_fu_17485_p1 = esl_zext<64,10>(tmp_1329_reg_37524.read());
}

void ShuffleNetV2::thread_tmp_1521_fu_22084_p1() {
    tmp_1521_fu_22084_p1 = tmp_1519_fu_22075_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1522_fu_22128_p2() {
    tmp_1522_fu_22128_p2 = (!p_shl499_cast_fu_22121_p3.read().is_01() || !tmp_1520_reg_39173.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl499_cast_fu_22121_p3.read()) - sc_biguint<10>(tmp_1520_reg_39173.read()));
}

void ShuffleNetV2::thread_tmp_1523_cast_fu_17423_p1() {
    tmp_1523_cast_fu_17423_p1 = esl_sext<13,12>(tmp_1331_fu_17417_p2.read());
}

void ShuffleNetV2::thread_tmp_1523_fu_22133_p2() {
    tmp_1523_fu_22133_p2 = (!tmp_1522_fu_22128_p2.read().is_01() || !tmp_658_cast_reg_39148.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1522_fu_22128_p2.read()) + sc_biguint<10>(tmp_658_cast_reg_39148.read()));
}

void ShuffleNetV2::thread_tmp_1524_cast_fu_17449_p1() {
    tmp_1524_cast_fu_17449_p1 = esl_sext<64,13>(tmp_1332_reg_37518.read());
}

void ShuffleNetV2::thread_tmp_1524_fu_22095_p3() {
    tmp_1524_fu_22095_p3 = esl_concat<8,2>(tmp_665_reg_39167.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1525_fu_22102_p1() {
    tmp_1525_fu_22102_p1 = esl_sext<11,10>(tmp_1524_fu_22095_p3.read());
}

void ShuffleNetV2::thread_tmp_1526_fu_22110_p2() {
    tmp_1526_fu_22110_p2 = (!p_shl498_cast_fu_22106_p1.read().is_01() || !tmp_666_cast_fu_22091_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl498_cast_fu_22106_p1.read()) - sc_biguint<12>(tmp_666_cast_fu_22091_p1.read()));
}

void ShuffleNetV2::thread_tmp_1527_fu_22116_p2() {
    tmp_1527_fu_22116_p2 = (!tmp_1526_fu_22110_p2.read().is_01() || !tmp_651_cast1_reg_39125.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1526_fu_22110_p2.read()) + sc_biguint<12>(tmp_651_cast1_reg_39125.read()));
}

void ShuffleNetV2::thread_tmp_1528_fu_22141_p3() {
    tmp_1528_fu_22141_p3 = esl_concat<12,2>(tmp_1527_reg_39183.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1529_fu_22152_p2() {
    tmp_1529_fu_22152_p2 = (!p_shl244_fu_22148_p1.read().is_01() || !tmp_1758_cast_fu_22138_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl244_fu_22148_p1.read()) - sc_bigint<64>(tmp_1758_cast_fu_22138_p1.read()));
}

void ShuffleNetV2::thread_tmp_1530_fu_22158_p2() {
    tmp_1530_fu_22158_p2 = (!tmp_1529_fu_22152_p2.read().is_01() || !tmp_658_reg_39143.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1529_fu_22152_p2.read()) + sc_biguint<64>(tmp_658_reg_39143.read()));
}

void ShuffleNetV2::thread_tmp_1531_fu_22730_p3() {
    tmp_1531_fu_22730_p3 = esl_concat<6,3>(co114_reg_6577.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1532_fu_22742_p3() {
    tmp_1532_fu_22742_p3 = esl_concat<6,1>(co114_reg_6577.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1533_fu_22754_p2() {
    tmp_1533_fu_22754_p2 = (!p_shl506_cast_fu_22750_p1.read().is_01() || !p_shl505_cast_fu_22738_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl506_cast_fu_22750_p1.read()) + sc_biguint<10>(p_shl505_cast_fu_22738_p1.read()));
}

void ShuffleNetV2::thread_tmp_1534_fu_22638_p1() {
    tmp_1534_fu_22638_p1 = k42_reg_6566.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1535_fu_22405_p1() {
    tmp_1535_fu_22405_p1 = i105_reg_6544.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1536_fu_22439_p1() {
    tmp_1536_fu_22439_p1 = tmp_672_fu_22433_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1537_fu_22539_p3() {
    tmp_1537_fu_22539_p3 = esl_concat<11,5>(tmp_675_reg_39296.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1538_fu_22550_p3() {
    tmp_1538_fu_22550_p3 = esl_concat<11,3>(tmp_675_reg_39296.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1539_cast_fu_17882_p1() {
    tmp_1539_cast_fu_17882_p1 = esl_sext<17,16>(tmp_1344_fu_17876_p2.read());
}

void ShuffleNetV2::thread_tmp_1539_fu_22561_p2() {
    tmp_1539_fu_22561_p2 = (!p_shl503_cast_fu_22546_p1.read().is_01() || !p_shl504_cast_fu_22557_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl503_cast_fu_22546_p1.read()) - sc_biguint<17>(p_shl504_cast_fu_22557_p1.read()));
}

void ShuffleNetV2::thread_tmp_1540_cast_fu_17891_p1() {
    tmp_1540_cast_fu_17891_p1 = esl_sext<33,17>(tmp_1345_fu_17886_p2.read());
}

void ShuffleNetV2::thread_tmp_1540_fu_22571_p2() {
    tmp_1540_fu_22571_p2 = (!tmp_661_cast_reg_39283.read().is_01() || !tmp_1773_cast_fu_22567_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_661_cast_reg_39283.read()) + sc_bigint<18>(tmp_1773_cast_fu_22567_p1.read()));
}

void ShuffleNetV2::thread_tmp_1541_fu_22508_p3() {
    tmp_1541_fu_22508_p3 = esl_concat<4,6>(tmp_676_fu_22498_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1542_fu_22516_p3() {
    tmp_1542_fu_22516_p3 = esl_concat<4,4>(tmp_676_fu_22498_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1543_fu_22528_p2() {
    tmp_1543_fu_22528_p2 = (!tmp_1541_fu_22508_p3.read().is_01() || !p_shl502_cast_fu_22524_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1541_fu_22508_p3.read()) - sc_bigint<10>(p_shl502_cast_fu_22524_p1.read()));
}

void ShuffleNetV2::thread_tmp_1544_fu_22534_p2() {
    tmp_1544_fu_22534_p2 = (!tmp_660_cast_reg_39278.read().is_01() || !tmp_1543_fu_22528_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_660_cast_reg_39278.read()) + sc_biguint<10>(tmp_1543_fu_22528_p2.read()));
}

void ShuffleNetV2::thread_tmp_1545_fu_22853_p3() {
    tmp_1545_fu_22853_p3 = esl_concat<6,3>(co116_reg_6610.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1546_cast_fu_17910_p1() {
    tmp_1546_cast_fu_17910_p1 = esl_sext<64,10>(tmp_1349_reg_37641.read());
}

void ShuffleNetV2::thread_tmp_1546_fu_22865_p3() {
    tmp_1546_fu_22865_p3 = esl_concat<6,1>(co116_reg_6610.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1547_fu_22877_p2() {
    tmp_1547_fu_22877_p2 = (!p_shl512_cast_fu_22873_p1.read().is_01() || !p_shl511_cast_fu_22861_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl512_cast_fu_22873_p1.read()) + sc_biguint<10>(p_shl511_cast_fu_22861_p1.read()));
}

void ShuffleNetV2::thread_tmp_1548_fu_22889_p3() {
    tmp_1548_fu_22889_p3 = esl_concat<7,3>(tmp_677_fu_22883_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1549_fu_22901_p3() {
    tmp_1549_fu_22901_p3 = esl_concat<7,1>(tmp_677_fu_22883_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1550_fu_22913_p2() {
    tmp_1550_fu_22913_p2 = (!p_shl510_cast_fu_22909_p1.read().is_01() || !p_shl509_cast_fu_22897_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl510_cast_fu_22909_p1.read()) + sc_biguint<11>(p_shl509_cast_fu_22897_p1.read()));
}

void ShuffleNetV2::thread_tmp_1551_fu_22776_p2() {
    tmp_1551_fu_22776_p2 = (!tmp_678_cast_fu_22772_p1.read().is_01() || !tmp_1533_reg_39407.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_678_cast_fu_22772_p1.read()) + sc_biguint<10>(tmp_1533_reg_39407.read()));
}

void ShuffleNetV2::thread_tmp_1552_fu_22781_p3() {
    tmp_1552_fu_22781_p3 = esl_concat<10,3>(tmp_1551_fu_22776_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1553_fu_22793_p3() {
    tmp_1553_fu_22793_p3 = esl_concat<10,1>(tmp_1551_fu_22776_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1554_fu_22805_p2() {
    tmp_1554_fu_22805_p2 = (!p_shl507_cast_fu_22789_p1.read().is_01() || !p_shl508_cast_fu_22801_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl507_cast_fu_22789_p1.read()) + sc_biguint<15>(p_shl508_cast_fu_22801_p1.read()));
}

void ShuffleNetV2::thread_tmp_1555_fu_23064_p1() {
    tmp_1555_fu_23064_p1 = co118_reg_6643.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1556_fu_22939_p2() {
    tmp_1556_fu_22939_p2 = (!tmp_680_cast_fu_22935_p1.read().is_01() || !tmp_1550_reg_39456.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_680_cast_fu_22935_p1.read()) + sc_biguint<11>(tmp_1550_reg_39456.read()));
}

void ShuffleNetV2::thread_tmp_1557_fu_22944_p3() {
    tmp_1557_fu_22944_p3 = esl_concat<11,3>(tmp_1556_fu_22939_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1558_fu_22956_p3() {
    tmp_1558_fu_22956_p3 = esl_concat<11,1>(tmp_1556_fu_22939_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1559_fu_22968_p2() {
    tmp_1559_fu_22968_p2 = (!p_shl515_cast_fu_22952_p1.read().is_01() || !p_shl516_cast_fu_22964_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl515_cast_fu_22952_p1.read()) + sc_biguint<15>(p_shl516_cast_fu_22964_p1.read()));
}

void ShuffleNetV2::thread_tmp_1560_fu_22974_p2() {
    tmp_1560_fu_22974_p2 = (!tmp_680_cast1_fu_22931_p1.read().is_01() || !tmp_1547_reg_39451.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_680_cast1_fu_22931_p1.read()) + sc_biguint<10>(tmp_1547_reg_39451.read()));
}

void ShuffleNetV2::thread_tmp_1561_fu_22979_p3() {
    tmp_1561_fu_22979_p3 = esl_concat<10,3>(tmp_1560_fu_22974_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1562_fu_22991_p3() {
    tmp_1562_fu_22991_p3 = esl_concat<10,1>(tmp_1560_fu_22974_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1563_fu_23003_p2() {
    tmp_1563_fu_23003_p2 = (!p_shl513_cast_fu_22987_p1.read().is_01() || !p_shl514_cast_fu_22999_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl513_cast_fu_22987_p1.read()) + sc_biguint<14>(p_shl514_cast_fu_22999_p1.read()));
}

void ShuffleNetV2::thread_tmp_1564_fu_22827_p2() {
    tmp_1564_fu_22827_p2 = (!tmp_1554_reg_39420.read().is_01() || !tmp_681_cast1_fu_22823_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1554_reg_39420.read()) + sc_biguint<15>(tmp_681_cast1_fu_22823_p1.read()));
}

void ShuffleNetV2::thread_tmp_1565_fu_23029_p2() {
    tmp_1565_fu_23029_p2 = (!tmp_1559_reg_39469.read().is_01() || !tmp_685_cast2_fu_23025_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1559_reg_39469.read()) + sc_biguint<15>(tmp_685_cast2_fu_23025_p1.read()));
}

void ShuffleNetV2::thread_tmp_1566_fu_23039_p2() {
    tmp_1566_fu_23039_p2 = (!tmp_1563_reg_39474.read().is_01() || !tmp_685_cast1_fu_23021_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1563_reg_39474.read()) + sc_biguint<14>(tmp_685_cast1_fu_23021_p1.read()));
}

void ShuffleNetV2::thread_tmp_1567_cast_fu_18151_p1() {
    tmp_1567_cast_fu_18151_p1 = esl_zext<64,15>(tmp_1369_fu_18146_p2.read());
}

void ShuffleNetV2::thread_tmp_1567_fu_23396_p1() {
    tmp_1567_fu_23396_p1 = k44_reg_6687.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1568_cast_fu_18363_p1() {
    tmp_1568_cast_fu_18363_p1 = esl_zext<64,14>(tmp_1370_reg_37822.read());
}

void ShuffleNetV2::thread_tmp_1568_fu_23163_p1() {
    tmp_1568_fu_23163_p1 = i109_reg_6665.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1569_cast_fu_18358_p1() {
    tmp_1569_cast_fu_18358_p1 = esl_zext<64,15>(tmp_1371_fu_18353_p2.read());
}

void ShuffleNetV2::thread_tmp_1569_fu_23197_p1() {
    tmp_1569_fu_23197_p1 = tmp_691_fu_23191_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1570_fu_23297_p3() {
    tmp_1570_fu_23297_p3 = esl_concat<11,5>(tmp_694_reg_39551.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1571_fu_23308_p3() {
    tmp_1571_fu_23308_p3 = esl_concat<11,3>(tmp_694_reg_39551.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1572_fu_23319_p2() {
    tmp_1572_fu_23319_p2 = (!p_shl519_cast_fu_23304_p1.read().is_01() || !p_shl520_cast_fu_23315_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl519_cast_fu_23304_p1.read()) - sc_biguint<17>(p_shl520_cast_fu_23315_p1.read()));
}

void ShuffleNetV2::thread_tmp_1573_fu_23329_p2() {
    tmp_1573_fu_23329_p2 = (!tmp_684_cast1_reg_39538.read().is_01() || !tmp_1812_cast_fu_23325_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_684_cast1_reg_39538.read()) + sc_bigint<18>(tmp_1812_cast_fu_23325_p1.read()));
}

void ShuffleNetV2::thread_tmp_1574_fu_23266_p3() {
    tmp_1574_fu_23266_p3 = esl_concat<4,6>(tmp_695_fu_23256_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1575_fu_23274_p3() {
    tmp_1575_fu_23274_p3 = esl_concat<4,4>(tmp_695_fu_23256_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1576_fu_23286_p2() {
    tmp_1576_fu_23286_p2 = (!tmp_1574_fu_23266_p3.read().is_01() || !p_shl518_cast_fu_23282_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1574_fu_23266_p3.read()) - sc_bigint<10>(p_shl518_cast_fu_23282_p1.read()));
}

void ShuffleNetV2::thread_tmp_1577_fu_23292_p2() {
    tmp_1577_fu_23292_p2 = (!tmp_683_cast_reg_39533.read().is_01() || !tmp_1576_fu_23286_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_683_cast_reg_39533.read()) + sc_biguint<10>(tmp_1576_fu_23286_p2.read()));
}

void ShuffleNetV2::thread_tmp_1578_fu_23869_p1() {
    tmp_1578_fu_23869_p1 = co122_reg_6764.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1579_fu_23773_p1() {
    tmp_1579_fu_23773_p1 = k46_reg_6753.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1580_cast_fu_18652_p1() {
    tmp_1580_cast_fu_18652_p1 = esl_sext<17,16>(tmp_1379_fu_18646_p2.read());
}

void ShuffleNetV2::thread_tmp_1580_fu_23548_p1() {
    tmp_1580_fu_23548_p1 = i114_reg_6731.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1581_cast_fu_18661_p1() {
    tmp_1581_cast_fu_18661_p1 = esl_sext<33,17>(tmp_1380_fu_18656_p2.read());
}

void ShuffleNetV2::thread_tmp_1581_fu_23609_p3() {
    tmp_1581_fu_23609_p3 = esl_concat<7,2>(tmp_708_reg_39716.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1582_fu_23616_p1() {
    tmp_1582_fu_23616_p1 = esl_sext<34,9>(tmp_1581_fu_23609_p3.read());
}

void ShuffleNetV2::thread_tmp_1583_fu_23624_p2() {
    tmp_1583_fu_23624_p2 = (!p_shl524_cast_fu_23620_p1.read().is_01() || !tmp_709_cast1_fu_23605_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl524_cast_fu_23620_p1.read()) - sc_biguint<35>(tmp_709_cast1_fu_23605_p1.read()));
}

void ShuffleNetV2::thread_tmp_1584_fu_23634_p2() {
    tmp_1584_fu_23634_p2 = (!tmp_1828_cast_fu_23630_p1.read().is_01() || !tmp_696_cast_reg_39685.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1828_cast_fu_23630_p1.read()) + sc_biguint<36>(tmp_696_cast_reg_39685.read()));
}

void ShuffleNetV2::thread_tmp_1585_fu_23639_p1() {
    tmp_1585_fu_23639_p1 = tmp_1584_fu_23634_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1586_fu_23643_p1() {
    tmp_1586_fu_23643_p1 = tmp_1584_fu_23634_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1587_cast_fu_18680_p1() {
    tmp_1587_cast_fu_18680_p1 = esl_sext<64,10>(tmp_1384_reg_37896.read());
}

void ShuffleNetV2::thread_tmp_1587_fu_23691_p2() {
    tmp_1587_fu_23691_p2 = (!p_shl523_cast_fu_23684_p3.read().is_01() || !tmp_1585_reg_39728.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl523_cast_fu_23684_p3.read()) - sc_biguint<10>(tmp_1585_reg_39728.read()));
}

void ShuffleNetV2::thread_tmp_1588_fu_23696_p2() {
    tmp_1588_fu_23696_p2 = (!tmp_1587_fu_23691_p2.read().is_01() || !tmp_703_cast_reg_39703.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1587_fu_23691_p2.read()) + sc_biguint<10>(tmp_703_cast_reg_39703.read()));
}

void ShuffleNetV2::thread_tmp_1589_fu_23654_p3() {
    tmp_1589_fu_23654_p3 = esl_concat<8,2>(tmp_710_reg_39722.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1590_fu_23661_p1() {
    tmp_1590_fu_23661_p1 = esl_sext<11,10>(tmp_1589_fu_23654_p3.read());
}

void ShuffleNetV2::thread_tmp_1591_fu_23669_p2() {
    tmp_1591_fu_23669_p2 = (!p_shl522_cast_fu_23665_p1.read().is_01() || !tmp_711_cast1_fu_23650_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl522_cast_fu_23665_p1.read()) - sc_biguint<12>(tmp_711_cast1_fu_23650_p1.read()));
}

void ShuffleNetV2::thread_tmp_1592_fu_23679_p2() {
    tmp_1592_fu_23679_p2 = (!tmp_1835_cast_fu_23675_p1.read().is_01() || !tmp_696_cast1_reg_39680.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1835_cast_fu_23675_p1.read()) + sc_biguint<13>(tmp_696_cast1_reg_39680.read()));
}

void ShuffleNetV2::thread_tmp_1593_fu_23704_p3() {
    tmp_1593_fu_23704_p3 = esl_concat<13,2>(tmp_1592_reg_39738.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1594_fu_23715_p2() {
    tmp_1594_fu_23715_p2 = (!p_shl249_fu_23711_p1.read().is_01() || !tmp_1836_cast_fu_23701_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl249_fu_23711_p1.read()) - sc_bigint<64>(tmp_1836_cast_fu_23701_p1.read()));
}

void ShuffleNetV2::thread_tmp_1595_fu_23721_p2() {
    tmp_1595_fu_23721_p2 = (!tmp_1594_fu_23715_p2.read().is_01() || !tmp_703_reg_39698.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1594_fu_23715_p2.read()) + sc_biguint<64>(tmp_703_reg_39698.read()));
}

void ShuffleNetV2::thread_tmp_1596_cast_fu_18961_p1() {
    tmp_1596_cast_fu_18961_p1 = esl_sext<36,35>(tmp_1390_fu_18955_p2.read());
}

void ShuffleNetV2::thread_tmp_1596_fu_24293_p3() {
    tmp_1596_fu_24293_p3 = esl_concat<6,3>(co124_reg_6819.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1597_fu_24305_p3() {
    tmp_1597_fu_24305_p3 = esl_concat<6,1>(co124_reg_6819.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1598_fu_24317_p2() {
    tmp_1598_fu_24317_p2 = (!p_shl530_cast_fu_24313_p1.read().is_01() || !p_shl529_cast_fu_24301_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl530_cast_fu_24313_p1.read()) + sc_biguint<10>(p_shl529_cast_fu_24301_p1.read()));
}

void ShuffleNetV2::thread_tmp_1599_fu_24201_p1() {
    tmp_1599_fu_24201_p1 = k48_reg_6808.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1600_cast_fu_19056_p1() {
    tmp_1600_cast_fu_19056_p1 = esl_zext<64,10>(tmp_1395_reg_38079.read());
}

void ShuffleNetV2::thread_tmp_1600_fu_23968_p1() {
    tmp_1600_fu_23968_p1 = i116_reg_6786.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1601_fu_24002_p1() {
    tmp_1601_fu_24002_p1 = tmp_717_fu_23996_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1602_fu_24102_p3() {
    tmp_1602_fu_24102_p3 = esl_concat<11,5>(tmp_722_reg_39851.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1603_cast_fu_19020_p1() {
    tmp_1603_cast_fu_19020_p1 = esl_sext<64,12>(tmp_1398_reg_38073.read());
}

void ShuffleNetV2::thread_tmp_1603_fu_24113_p3() {
    tmp_1603_fu_24113_p3 = esl_concat<11,3>(tmp_722_reg_39851.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1604_fu_24124_p2() {
    tmp_1604_fu_24124_p2 = (!p_shl527_cast_fu_24109_p1.read().is_01() || !p_shl528_cast_fu_24120_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl527_cast_fu_24109_p1.read()) - sc_biguint<17>(p_shl528_cast_fu_24120_p1.read()));
}

void ShuffleNetV2::thread_tmp_1605_fu_24134_p2() {
    tmp_1605_fu_24134_p2 = (!tmp_706_cast_reg_39838.read().is_01() || !tmp_1851_cast_fu_24130_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_706_cast_reg_39838.read()) + sc_bigint<18>(tmp_1851_cast_fu_24130_p1.read()));
}

void ShuffleNetV2::thread_tmp_1606_fu_24071_p3() {
    tmp_1606_fu_24071_p3 = esl_concat<4,6>(tmp_724_fu_24061_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1607_fu_24079_p3() {
    tmp_1607_fu_24079_p3 = esl_concat<4,4>(tmp_724_fu_24061_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1608_fu_24091_p2() {
    tmp_1608_fu_24091_p2 = (!tmp_1606_fu_24071_p3.read().is_01() || !p_shl526_cast_fu_24087_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1606_fu_24071_p3.read()) - sc_bigint<10>(p_shl526_cast_fu_24087_p1.read()));
}

void ShuffleNetV2::thread_tmp_1609_fu_24097_p2() {
    tmp_1609_fu_24097_p2 = (!tmp_705_cast_reg_39833.read().is_01() || !tmp_1608_fu_24091_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_705_cast_reg_39833.read()) + sc_biguint<10>(tmp_1608_fu_24091_p2.read()));
}

void ShuffleNetV2::thread_tmp_1610_fu_24416_p3() {
    tmp_1610_fu_24416_p3 = esl_concat<6,3>(co126_reg_6852.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1611_fu_24428_p3() {
    tmp_1611_fu_24428_p3 = esl_concat<6,1>(co126_reg_6852.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1612_fu_24440_p2() {
    tmp_1612_fu_24440_p2 = (!p_shl536_cast_fu_24436_p1.read().is_01() || !p_shl535_cast_fu_24424_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl536_cast_fu_24436_p1.read()) + sc_biguint<10>(p_shl535_cast_fu_24424_p1.read()));
}

void ShuffleNetV2::thread_tmp_1613_fu_24452_p3() {
    tmp_1613_fu_24452_p3 = esl_concat<7,3>(tmp_725_fu_24446_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1614_fu_24464_p3() {
    tmp_1614_fu_24464_p3 = esl_concat<7,1>(tmp_725_fu_24446_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1615_fu_24476_p2() {
    tmp_1615_fu_24476_p2 = (!p_shl534_cast_fu_24472_p1.read().is_01() || !p_shl533_cast_fu_24460_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl534_cast_fu_24472_p1.read()) + sc_biguint<11>(p_shl533_cast_fu_24460_p1.read()));
}

void ShuffleNetV2::thread_tmp_1616_fu_24339_p2() {
    tmp_1616_fu_24339_p2 = (!tmp_726_cast_fu_24335_p1.read().is_01() || !tmp_1598_reg_39962.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_726_cast_fu_24335_p1.read()) + sc_biguint<10>(tmp_1598_reg_39962.read()));
}

void ShuffleNetV2::thread_tmp_1617_fu_24344_p3() {
    tmp_1617_fu_24344_p3 = esl_concat<10,3>(tmp_1616_fu_24339_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1618_cast_fu_19453_p1() {
    tmp_1618_cast_fu_19453_p1 = esl_sext<18,17>(tmp_1410_fu_19447_p2.read());
}

void ShuffleNetV2::thread_tmp_1618_fu_24356_p3() {
    tmp_1618_fu_24356_p3 = esl_concat<10,1>(tmp_1616_fu_24339_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1619_cast_fu_19462_p1() {
    tmp_1619_cast_fu_19462_p1 = esl_sext<33,18>(tmp_1411_fu_19457_p2.read());
}

void ShuffleNetV2::thread_tmp_1619_fu_24368_p2() {
    tmp_1619_fu_24368_p2 = (!p_shl531_cast_fu_24352_p1.read().is_01() || !p_shl532_cast_fu_24364_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl531_cast_fu_24352_p1.read()) + sc_biguint<15>(p_shl532_cast_fu_24364_p1.read()));
}

void ShuffleNetV2::thread_tmp_1620_fu_24627_p1() {
    tmp_1620_fu_24627_p1 = co128_reg_6885.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1621_fu_24502_p2() {
    tmp_1621_fu_24502_p2 = (!tmp_728_cast_fu_24498_p1.read().is_01() || !tmp_1612_reg_40006.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_728_cast_fu_24498_p1.read()) + sc_biguint<10>(tmp_1612_reg_40006.read()));
}

void ShuffleNetV2::thread_tmp_1622_fu_24507_p3() {
    tmp_1622_fu_24507_p3 = esl_concat<10,3>(tmp_1621_fu_24502_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1623_fu_24519_p3() {
    tmp_1623_fu_24519_p3 = esl_concat<10,1>(tmp_1621_fu_24502_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1624_fu_24531_p2() {
    tmp_1624_fu_24531_p2 = (!p_shl539_cast_fu_24515_p1.read().is_01() || !p_shl540_cast_fu_24527_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl539_cast_fu_24515_p1.read()) + sc_biguint<14>(p_shl540_cast_fu_24527_p1.read()));
}

void ShuffleNetV2::thread_tmp_1625_cast_fu_19481_p1() {
    tmp_1625_cast_fu_19481_p1 = esl_sext<64,10>(tmp_1415_reg_38196.read());
}

void ShuffleNetV2::thread_tmp_1625_fu_24537_p2() {
    tmp_1625_fu_24537_p2 = (!tmp_728_cast1_fu_24494_p1.read().is_01() || !tmp_1615_reg_40011.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_728_cast1_fu_24494_p1.read()) + sc_biguint<11>(tmp_1615_reg_40011.read()));
}

void ShuffleNetV2::thread_tmp_1626_fu_24542_p3() {
    tmp_1626_fu_24542_p3 = esl_concat<11,3>(tmp_1625_fu_24537_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1627_fu_24554_p3() {
    tmp_1627_fu_24554_p3 = esl_concat<11,1>(tmp_1625_fu_24537_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1628_fu_24566_p2() {
    tmp_1628_fu_24566_p2 = (!p_shl537_cast_fu_24550_p1.read().is_01() || !p_shl538_cast_fu_24562_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl537_cast_fu_24550_p1.read()) + sc_biguint<15>(p_shl538_cast_fu_24562_p1.read()));
}

void ShuffleNetV2::thread_tmp_1629_fu_24390_p2() {
    tmp_1629_fu_24390_p2 = (!tmp_1619_reg_39975.read().is_01() || !tmp_729_cast1_fu_24386_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1619_reg_39975.read()) + sc_biguint<15>(tmp_729_cast1_fu_24386_p1.read()));
}

void ShuffleNetV2::thread_tmp_1630_fu_24592_p2() {
    tmp_1630_fu_24592_p2 = (!tmp_1624_reg_40024.read().is_01() || !tmp_733_cast_fu_24588_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1624_reg_40024.read()) + sc_biguint<14>(tmp_733_cast_fu_24588_p1.read()));
}

void ShuffleNetV2::thread_tmp_1631_fu_24597_p2() {
    tmp_1631_fu_24597_p2 = (!tmp_1628_reg_40029.read().is_01() || !tmp_733_cast1_fu_24584_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1628_reg_40029.read()) + sc_biguint<15>(tmp_733_cast1_fu_24584_p1.read()));
}

void ShuffleNetV2::thread_tmp_1632_fu_24967_p1() {
    tmp_1632_fu_24967_p1 = k50_reg_6929.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1633_fu_24726_p1() {
    tmp_1633_fu_24726_p1 = i120_reg_6907.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1634_fu_24760_p1() {
    tmp_1634_fu_24760_p1 = tmp_739_fu_24754_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1635_fu_24860_p3() {
    tmp_1635_fu_24860_p3 = esl_concat<10,5>(tmp_743_reg_40106.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1636_fu_24867_p1() {
    tmp_1636_fu_24867_p1 = esl_sext<16,15>(tmp_1635_fu_24860_p3.read());
}

void ShuffleNetV2::thread_tmp_1637_fu_24875_p3() {
    tmp_1637_fu_24875_p3 = esl_concat<10,3>(tmp_743_reg_40106.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1638_fu_24882_p1() {
    tmp_1638_fu_24882_p1 = esl_sext<14,13>(tmp_1637_fu_24875_p3.read());
}

void ShuffleNetV2::thread_tmp_1639_fu_24890_p2() {
    tmp_1639_fu_24890_p2 = (!p_shl543_cast_fu_24871_p1.read().is_01() || !p_shl544_cast_fu_24886_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl543_cast_fu_24871_p1.read()) - sc_biguint<17>(p_shl544_cast_fu_24886_p1.read()));
}

void ShuffleNetV2::thread_tmp_1640_fu_24900_p2() {
    tmp_1640_fu_24900_p2 = (!tmp_732_cast_reg_40093.read().is_01() || !tmp_1892_cast_fu_24896_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_732_cast_reg_40093.read()) + sc_bigint<18>(tmp_1892_cast_fu_24896_p1.read()));
}

void ShuffleNetV2::thread_tmp_1641_fu_24829_p3() {
    tmp_1641_fu_24829_p3 = esl_concat<4,6>(tmp_744_fu_24819_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1642_fu_24837_p3() {
    tmp_1642_fu_24837_p3 = esl_concat<4,4>(tmp_744_fu_24819_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1643_fu_24849_p2() {
    tmp_1643_fu_24849_p2 = (!tmp_1641_fu_24829_p3.read().is_01() || !p_shl542_cast_fu_24845_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1641_fu_24829_p3.read()) - sc_bigint<10>(p_shl542_cast_fu_24845_p1.read()));
}

void ShuffleNetV2::thread_tmp_1644_fu_24855_p2() {
    tmp_1644_fu_24855_p2 = (!tmp_731_cast_reg_40088.read().is_01() || !tmp_1643_fu_24849_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_731_cast_reg_40088.read()) + sc_biguint<10>(tmp_1643_fu_24849_p2.read()));
}

void ShuffleNetV2::thread_tmp_1645_fu_25432_p1() {
    tmp_1645_fu_25432_p1 = co132_reg_7006.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1646_cast_fu_19722_p1() {
    tmp_1646_cast_fu_19722_p1 = esl_zext<64,15>(tmp_1435_fu_19717_p2.read());
}

void ShuffleNetV2::thread_tmp_1646_fu_25336_p1() {
    tmp_1646_fu_25336_p1 = k52_reg_6995.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1647_cast_fu_19924_p1() {
    tmp_1647_cast_fu_19924_p1 = esl_zext<64,15>(tmp_1436_fu_19919_p2.read());
}

void ShuffleNetV2::thread_tmp_1647_fu_25119_p1() {
    tmp_1647_fu_25119_p1 = i125_reg_6973.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1648_cast_fu_19934_p1() {
    tmp_1648_cast_fu_19934_p1 = esl_zext<64,14>(tmp_1437_reg_38382.read());
}

void ShuffleNetV2::thread_tmp_1648_fu_25180_p3() {
    tmp_1648_fu_25180_p3 = esl_concat<7,2>(tmp_762_reg_40271.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1649_fu_25187_p1() {
    tmp_1649_fu_25187_p1 = esl_sext<34,9>(tmp_1648_fu_25180_p3.read());
}

void ShuffleNetV2::thread_tmp_1650_fu_25195_p2() {
    tmp_1650_fu_25195_p2 = (!p_shl548_cast_fu_25191_p1.read().is_01() || !tmp_763_cast_fu_25176_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl548_cast_fu_25191_p1.read()) - sc_biguint<35>(tmp_763_cast_fu_25176_p1.read()));
}

void ShuffleNetV2::thread_tmp_1651_fu_25205_p2() {
    tmp_1651_fu_25205_p2 = (!tmp_1908_cast_fu_25201_p1.read().is_01() || !tmp_745_cast_reg_40240.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1908_cast_fu_25201_p1.read()) + sc_biguint<36>(tmp_745_cast_reg_40240.read()));
}

void ShuffleNetV2::thread_tmp_1652_fu_25210_p1() {
    tmp_1652_fu_25210_p1 = tmp_1651_fu_25205_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1653_fu_25214_p1() {
    tmp_1653_fu_25214_p1 = tmp_1651_fu_25205_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1654_fu_25254_p2() {
    tmp_1654_fu_25254_p2 = (!p_shl547_cast_fu_25247_p3.read().is_01() || !tmp_1652_reg_40283.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl547_cast_fu_25247_p3.read()) - sc_biguint<10>(tmp_1652_reg_40283.read()));
}

void ShuffleNetV2::thread_tmp_1655_fu_25259_p2() {
    tmp_1655_fu_25259_p2 = (!tmp_1654_fu_25254_p2.read().is_01() || !tmp_757_cast_reg_40258.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1654_fu_25254_p2.read()) + sc_biguint<10>(tmp_757_cast_reg_40258.read()));
}

void ShuffleNetV2::thread_tmp_1656_fu_25221_p3() {
    tmp_1656_fu_25221_p3 = esl_concat<10,2>(tmp_764_reg_40277.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1657_cast_fu_20215_p1() {
    tmp_1657_cast_fu_20215_p1 = esl_sext<18,17>(tmp_1443_fu_20209_p2.read());
}

void ShuffleNetV2::thread_tmp_1657_fu_25232_p2() {
    tmp_1657_fu_25232_p2 = (!p_shl546_cast_fu_25228_p1.read().is_01() || !tmp_765_cast_fu_25218_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl546_cast_fu_25228_p1.read()) - sc_biguint<13>(tmp_765_cast_fu_25218_p1.read()));
}

void ShuffleNetV2::thread_tmp_1658_cast_fu_20224_p1() {
    tmp_1658_cast_fu_20224_p1 = esl_sext<33,18>(tmp_1444_fu_20219_p2.read());
}

void ShuffleNetV2::thread_tmp_1658_fu_25242_p2() {
    tmp_1658_fu_25242_p2 = (!tmp_1914_cast_fu_25238_p1.read().is_01() || !tmp_745_cast1_reg_40235.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_1914_cast_fu_25238_p1.read()) + sc_biguint<14>(tmp_745_cast1_reg_40235.read()));
}

void ShuffleNetV2::thread_tmp_1659_fu_25267_p3() {
    tmp_1659_fu_25267_p3 = esl_concat<14,2>(tmp_1658_reg_40293.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1660_fu_25278_p2() {
    tmp_1660_fu_25278_p2 = (!p_shl255_fu_25274_p1.read().is_01() || !tmp_1915_cast_fu_25264_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl255_fu_25274_p1.read()) - sc_bigint<64>(tmp_1915_cast_fu_25264_p1.read()));
}

void ShuffleNetV2::thread_tmp_1661_fu_25284_p2() {
    tmp_1661_fu_25284_p2 = (!tmp_1660_fu_25278_p2.read().is_01() || !tmp_757_reg_40253.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1660_fu_25278_p2.read()) + sc_biguint<64>(tmp_757_reg_40253.read()));
}

void ShuffleNetV2::thread_tmp_1662_fu_25868_p3() {
    tmp_1662_fu_25868_p3 = esl_concat<6,3>(co134_reg_7061.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1663_fu_25880_p3() {
    tmp_1663_fu_25880_p3 = esl_concat<6,1>(co134_reg_7061.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1664_cast_fu_20243_p1() {
    tmp_1664_cast_fu_20243_p1 = esl_sext<64,10>(tmp_1448_reg_38451.read());
}

void ShuffleNetV2::thread_tmp_1664_fu_25892_p2() {
    tmp_1664_fu_25892_p2 = (!p_shl554_cast_fu_25888_p1.read().is_01() || !p_shl553_cast_fu_25876_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl554_cast_fu_25888_p1.read()) + sc_biguint<10>(p_shl553_cast_fu_25876_p1.read()));
}

void ShuffleNetV2::thread_tmp_1665_fu_25772_p1() {
    tmp_1665_fu_25772_p1 = k54_reg_7050.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1666_fu_25531_p1() {
    tmp_1666_fu_25531_p1 = i127_reg_7028.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1667_fu_25565_p1() {
    tmp_1667_fu_25565_p1 = tmp_771_fu_25559_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1668_fu_25665_p3() {
    tmp_1668_fu_25665_p3 = esl_concat<10,5>(tmp_776_reg_40406.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1669_fu_25672_p1() {
    tmp_1669_fu_25672_p1 = esl_sext<16,15>(tmp_1668_fu_25665_p3.read());
}

void ShuffleNetV2::thread_tmp_1670_fu_25680_p3() {
    tmp_1670_fu_25680_p3 = esl_concat<10,3>(tmp_776_reg_40406.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1671_fu_25687_p1() {
    tmp_1671_fu_25687_p1 = esl_sext<14,13>(tmp_1670_fu_25680_p3.read());
}

void ShuffleNetV2::thread_tmp_1672_fu_25695_p2() {
    tmp_1672_fu_25695_p2 = (!p_shl551_cast_fu_25676_p1.read().is_01() || !p_shl552_cast_fu_25691_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl551_cast_fu_25676_p1.read()) - sc_biguint<17>(p_shl552_cast_fu_25691_p1.read()));
}

void ShuffleNetV2::thread_tmp_1673_cast_fu_20520_p1() {
    tmp_1673_cast_fu_20520_p1 = esl_sext<36,35>(tmp_1454_fu_20514_p2.read());
}

void ShuffleNetV2::thread_tmp_1673_fu_25705_p2() {
    tmp_1673_fu_25705_p2 = (!tmp_760_cast1_reg_40393.read().is_01() || !tmp_1932_cast_fu_25701_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_760_cast1_reg_40393.read()) + sc_bigint<18>(tmp_1932_cast_fu_25701_p1.read()));
}

void ShuffleNetV2::thread_tmp_1674_fu_25634_p3() {
    tmp_1674_fu_25634_p3 = esl_concat<4,6>(tmp_778_fu_25624_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1675_fu_25642_p3() {
    tmp_1675_fu_25642_p3 = esl_concat<4,4>(tmp_778_fu_25624_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1676_fu_25654_p2() {
    tmp_1676_fu_25654_p2 = (!tmp_1674_fu_25634_p3.read().is_01() || !p_shl550_cast_fu_25650_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1674_fu_25634_p3.read()) - sc_bigint<10>(p_shl550_cast_fu_25650_p1.read()));
}

void ShuffleNetV2::thread_tmp_1677_cast_fu_20615_p1() {
    tmp_1677_cast_fu_20615_p1 = esl_zext<64,10>(tmp_1459_reg_38634.read());
}

void ShuffleNetV2::thread_tmp_1677_fu_25660_p2() {
    tmp_1677_fu_25660_p2 = (!tmp_759_cast1_reg_40388.read().is_01() || !tmp_1676_fu_25654_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_759_cast1_reg_40388.read()) + sc_biguint<10>(tmp_1676_fu_25654_p2.read()));
}

void ShuffleNetV2::thread_tmp_1678_fu_25991_p3() {
    tmp_1678_fu_25991_p3 = esl_concat<6,3>(co136_reg_7094.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1679_fu_26003_p3() {
    tmp_1679_fu_26003_p3 = esl_concat<6,1>(co136_reg_7094.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1680_cast_fu_20579_p1() {
    tmp_1680_cast_fu_20579_p1 = esl_sext<64,12>(tmp_1462_reg_38628.read());
}

void ShuffleNetV2::thread_tmp_1680_fu_26015_p2() {
    tmp_1680_fu_26015_p2 = (!p_shl560_cast_fu_26011_p1.read().is_01() || !p_shl559_cast_fu_25999_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl560_cast_fu_26011_p1.read()) + sc_biguint<10>(p_shl559_cast_fu_25999_p1.read()));
}

void ShuffleNetV2::thread_tmp_1681_fu_26027_p3() {
    tmp_1681_fu_26027_p3 = esl_concat<7,3>(tmp_779_fu_26021_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1682_fu_26039_p3() {
    tmp_1682_fu_26039_p3 = esl_concat<7,1>(tmp_779_fu_26021_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1683_fu_26051_p2() {
    tmp_1683_fu_26051_p2 = (!p_shl558_cast_fu_26047_p1.read().is_01() || !p_shl557_cast_fu_26035_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl558_cast_fu_26047_p1.read()) + sc_biguint<11>(p_shl557_cast_fu_26035_p1.read()));
}

void ShuffleNetV2::thread_tmp_1684_fu_25914_p2() {
    tmp_1684_fu_25914_p2 = (!tmp_780_cast_fu_25910_p1.read().is_01() || !tmp_1664_reg_40517.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_780_cast_fu_25910_p1.read()) + sc_biguint<10>(tmp_1664_reg_40517.read()));
}

void ShuffleNetV2::thread_tmp_1685_fu_25919_p3() {
    tmp_1685_fu_25919_p3 = esl_concat<10,3>(tmp_1684_fu_25914_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1686_fu_25931_p3() {
    tmp_1686_fu_25931_p3 = esl_concat<10,1>(tmp_1684_fu_25914_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1687_fu_25943_p2() {
    tmp_1687_fu_25943_p2 = (!p_shl555_cast_fu_25927_p1.read().is_01() || !p_shl556_cast_fu_25939_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl555_cast_fu_25927_p1.read()) + sc_biguint<15>(p_shl556_cast_fu_25939_p1.read()));
}

void ShuffleNetV2::thread_tmp_1688_fu_26202_p1() {
    tmp_1688_fu_26202_p1 = co138_reg_7127.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1689_fu_26077_p2() {
    tmp_1689_fu_26077_p2 = (!tmp_782_cast2_fu_26073_p1.read().is_01() || !tmp_1680_reg_40561.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_782_cast2_fu_26073_p1.read()) + sc_biguint<10>(tmp_1680_reg_40561.read()));
}

void ShuffleNetV2::thread_tmp_1690_fu_26082_p3() {
    tmp_1690_fu_26082_p3 = esl_concat<10,3>(tmp_1689_fu_26077_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1691_fu_26094_p3() {
    tmp_1691_fu_26094_p3 = esl_concat<10,1>(tmp_1689_fu_26077_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1692_fu_26106_p2() {
    tmp_1692_fu_26106_p2 = (!p_shl563_cast_fu_26090_p1.read().is_01() || !p_shl564_cast_fu_26102_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl563_cast_fu_26090_p1.read()) + sc_biguint<14>(p_shl564_cast_fu_26102_p1.read()));
}

void ShuffleNetV2::thread_tmp_1693_fu_26112_p2() {
    tmp_1693_fu_26112_p2 = (!tmp_782_cast1_fu_26069_p1.read().is_01() || !tmp_1683_reg_40566.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_782_cast1_fu_26069_p1.read()) + sc_biguint<11>(tmp_1683_reg_40566.read()));
}

void ShuffleNetV2::thread_tmp_1694_fu_26117_p3() {
    tmp_1694_fu_26117_p3 = esl_concat<11,3>(tmp_1693_fu_26112_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1695_cast_fu_21008_p1() {
    tmp_1695_cast_fu_21008_p1 = esl_sext<18,17>(tmp_1474_fu_21002_p2.read());
}

void ShuffleNetV2::thread_tmp_1695_fu_26129_p3() {
    tmp_1695_fu_26129_p3 = esl_concat<11,1>(tmp_1693_fu_26112_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1696_cast_fu_21017_p1() {
    tmp_1696_cast_fu_21017_p1 = esl_sext<33,18>(tmp_1475_fu_21012_p2.read());
}

void ShuffleNetV2::thread_tmp_1696_fu_26141_p2() {
    tmp_1696_fu_26141_p2 = (!p_shl561_cast_fu_26125_p1.read().is_01() || !p_shl562_cast_fu_26137_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl561_cast_fu_26125_p1.read()) + sc_biguint<15>(p_shl562_cast_fu_26137_p1.read()));
}

void ShuffleNetV2::thread_tmp_1697_fu_25965_p2() {
    tmp_1697_fu_25965_p2 = (!tmp_1687_reg_40530.read().is_01() || !tmp_783_cast_fu_25961_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1687_reg_40530.read()) + sc_biguint<15>(tmp_783_cast_fu_25961_p1.read()));
}

void ShuffleNetV2::thread_tmp_1698_fu_26167_p2() {
    tmp_1698_fu_26167_p2 = (!tmp_1692_reg_40579.read().is_01() || !tmp_787_cast2_fu_26163_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1692_reg_40579.read()) + sc_biguint<14>(tmp_787_cast2_fu_26163_p1.read()));
}

void ShuffleNetV2::thread_tmp_1699_fu_26172_p2() {
    tmp_1699_fu_26172_p2 = (!tmp_1696_reg_40584.read().is_01() || !tmp_787_cast1_fu_26159_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1696_reg_40584.read()) + sc_biguint<15>(tmp_787_cast1_fu_26159_p1.read()));
}

void ShuffleNetV2::thread_tmp_1700_fu_26542_p1() {
    tmp_1700_fu_26542_p1 = k56_reg_7171.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1701_fu_26301_p1() {
    tmp_1701_fu_26301_p1 = i131_reg_7149.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1702_cast_fu_21036_p1() {
    tmp_1702_cast_fu_21036_p1 = esl_sext<64,10>(tmp_1479_reg_38751.read());
}

void ShuffleNetV2::thread_tmp_1702_fu_26335_p1() {
    tmp_1702_fu_26335_p1 = tmp_793_fu_26329_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1703_fu_26435_p3() {
    tmp_1703_fu_26435_p3 = esl_concat<9,5>(tmp_797_reg_40661.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1704_fu_26442_p1() {
    tmp_1704_fu_26442_p1 = esl_sext<16,14>(tmp_1703_fu_26435_p3.read());
}

void ShuffleNetV2::thread_tmp_1705_fu_26450_p3() {
    tmp_1705_fu_26450_p3 = esl_concat<9,3>(tmp_797_reg_40661.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1706_fu_26457_p1() {
    tmp_1706_fu_26457_p1 = esl_sext<14,12>(tmp_1705_fu_26450_p3.read());
}

void ShuffleNetV2::thread_tmp_1707_fu_26465_p2() {
    tmp_1707_fu_26465_p2 = (!p_shl567_cast_fu_26446_p1.read().is_01() || !p_shl568_cast_fu_26461_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl567_cast_fu_26446_p1.read()) - sc_biguint<17>(p_shl568_cast_fu_26461_p1.read()));
}

void ShuffleNetV2::thread_tmp_1708_fu_26475_p2() {
    tmp_1708_fu_26475_p2 = (!tmp_786_cast_reg_40648.read().is_01() || !tmp_1973_cast_fu_26471_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_786_cast_reg_40648.read()) + sc_bigint<18>(tmp_1973_cast_fu_26471_p1.read()));
}

void ShuffleNetV2::thread_tmp_1709_fu_26404_p3() {
    tmp_1709_fu_26404_p3 = esl_concat<4,6>(tmp_798_fu_26394_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1710_fu_26412_p3() {
    tmp_1710_fu_26412_p3 = esl_concat<4,4>(tmp_798_fu_26394_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1711_fu_26424_p2() {
    tmp_1711_fu_26424_p2 = (!tmp_1709_fu_26404_p3.read().is_01() || !p_shl566_cast_fu_26420_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1709_fu_26404_p3.read()) - sc_bigint<10>(p_shl566_cast_fu_26420_p1.read()));
}

void ShuffleNetV2::thread_tmp_1712_fu_26430_p2() {
    tmp_1712_fu_26430_p2 = (!tmp_785_cast_reg_40643.read().is_01() || !tmp_1711_fu_26424_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_785_cast_reg_40643.read()) + sc_biguint<10>(tmp_1711_fu_26424_p2.read()));
}

void ShuffleNetV2::thread_tmp_1713_fu_27011_p1() {
    tmp_1713_fu_27011_p1 = co142_reg_7248.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1714_fu_26911_p1() {
    tmp_1714_fu_26911_p1 = k58_reg_7237.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1715_fu_26698_p1() {
    tmp_1715_fu_26698_p1 = i136_reg_7215.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1716_fu_26759_p3() {
    tmp_1716_fu_26759_p3 = esl_concat<7,2>(tmp_816_reg_40826.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1717_fu_26766_p1() {
    tmp_1717_fu_26766_p1 = esl_sext<34,9>(tmp_1716_fu_26759_p3.read());
}

void ShuffleNetV2::thread_tmp_1718_fu_26774_p2() {
    tmp_1718_fu_26774_p2 = (!p_shl572_cast_fu_26770_p1.read().is_01() || !tmp_817_cast1_fu_26755_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl572_cast_fu_26770_p1.read()) - sc_biguint<35>(tmp_817_cast1_fu_26755_p1.read()));
}

void ShuffleNetV2::thread_tmp_1719_fu_26784_p2() {
    tmp_1719_fu_26784_p2 = (!tmp_1989_cast_fu_26780_p1.read().is_01() || !tmp_799_cast_reg_40795.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1989_cast_fu_26780_p1.read()) + sc_biguint<36>(tmp_799_cast_reg_40795.read()));
}

void ShuffleNetV2::thread_tmp_1720_fu_26789_p1() {
    tmp_1720_fu_26789_p1 = tmp_1719_fu_26784_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1721_fu_26793_p1() {
    tmp_1721_fu_26793_p1 = tmp_1719_fu_26784_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1722_fu_26829_p2() {
    tmp_1722_fu_26829_p2 = (!p_shl571_cast_fu_26822_p3.read().is_01() || !tmp_1720_reg_40838.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl571_cast_fu_26822_p3.read()) - sc_biguint<10>(tmp_1720_reg_40838.read()));
}

void ShuffleNetV2::thread_tmp_1723_cast_fu_21273_p1() {
    tmp_1723_cast_fu_21273_p1 = esl_zext<64,15>(tmp_1499_fu_21268_p2.read());
}

void ShuffleNetV2::thread_tmp_1723_fu_26834_p2() {
    tmp_1723_fu_26834_p2 = (!tmp_1722_fu_26829_p2.read().is_01() || !tmp_811_cast_reg_40813.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1722_fu_26829_p2.read()) + sc_biguint<10>(tmp_811_cast_reg_40813.read()));
}

void ShuffleNetV2::thread_tmp_1724_cast_fu_21485_p1() {
    tmp_1724_cast_fu_21485_p1 = esl_zext<64,14>(tmp_1500_reg_38932.read());
}

void ShuffleNetV2::thread_tmp_1724_fu_26800_p3() {
    tmp_1724_fu_26800_p3 = esl_concat<10,2>(tmp_818_reg_40832.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1725_cast_fu_21480_p1() {
    tmp_1725_cast_fu_21480_p1 = esl_zext<64,15>(tmp_1501_fu_21475_p2.read());
}

void ShuffleNetV2::thread_tmp_1725_fu_26811_p2() {
    tmp_1725_fu_26811_p2 = (!p_shl570_cast_fu_26807_p1.read().is_01() || !tmp_819_cast_fu_26797_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl570_cast_fu_26807_p1.read()) - sc_biguint<13>(tmp_819_cast_fu_26797_p1.read()));
}

void ShuffleNetV2::thread_tmp_1726_fu_26817_p2() {
    tmp_1726_fu_26817_p2 = (!tmp_1725_fu_26811_p2.read().is_01() || !tmp_799_cast1_reg_40790.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1725_fu_26811_p2.read()) + sc_biguint<13>(tmp_799_cast1_reg_40790.read()));
}

void ShuffleNetV2::thread_tmp_1727_fu_26842_p3() {
    tmp_1727_fu_26842_p3 = esl_concat<13,2>(tmp_1726_reg_40848.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1728_fu_26853_p2() {
    tmp_1728_fu_26853_p2 = (!p_shl258_fu_26849_p1.read().is_01() || !tmp_1996_cast_fu_26839_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl258_fu_26849_p1.read()) - sc_bigint<64>(tmp_1996_cast_fu_26839_p1.read()));
}

void ShuffleNetV2::thread_tmp_1729_fu_26859_p2() {
    tmp_1729_fu_26859_p2 = (!tmp_1728_fu_26853_p2.read().is_01() || !tmp_811_reg_40808.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1728_fu_26853_p2.read()) + sc_biguint<64>(tmp_811_reg_40808.read()));
}

void ShuffleNetV2::thread_tmp_1730_fu_27447_p3() {
    tmp_1730_fu_27447_p3 = esl_concat<6,3>(co144_reg_7303.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1731_fu_27459_p3() {
    tmp_1731_fu_27459_p3 = esl_concat<6,1>(co144_reg_7303.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1732_fu_27471_p2() {
    tmp_1732_fu_27471_p2 = (!p_shl578_cast_fu_27467_p1.read().is_01() || !p_shl577_cast_fu_27455_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl578_cast_fu_27467_p1.read()) + sc_biguint<10>(p_shl577_cast_fu_27455_p1.read()));
}

void ShuffleNetV2::thread_tmp_1733_fu_27351_p1() {
    tmp_1733_fu_27351_p1 = k60_reg_7292.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1734_cast_fu_21766_p1() {
    tmp_1734_cast_fu_21766_p1 = esl_sext<18,17>(tmp_1507_fu_21760_p2.read());
}

void ShuffleNetV2::thread_tmp_1734_fu_27110_p1() {
    tmp_1734_fu_27110_p1 = i138_reg_7270.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1735_cast_fu_21775_p1() {
    tmp_1735_cast_fu_21775_p1 = esl_sext<33,18>(tmp_1508_fu_21770_p2.read());
}

void ShuffleNetV2::thread_tmp_1735_fu_27144_p1() {
    tmp_1735_fu_27144_p1 = tmp_825_fu_27138_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1736_fu_27252_p3() {
    tmp_1736_fu_27252_p3 = esl_concat<12,5>(tmp_830_reg_40961.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1737_fu_27263_p3() {
    tmp_1737_fu_27263_p3 = esl_concat<12,3>(tmp_830_reg_40961.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1738_fu_27274_p2() {
    tmp_1738_fu_27274_p2 = (!p_shl575_cast_fu_27259_p1.read().is_01() || !p_shl576_cast_fu_27270_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl575_cast_fu_27259_p1.read()) - sc_biguint<18>(p_shl576_cast_fu_27270_p1.read()));
}

void ShuffleNetV2::thread_tmp_1739_fu_27284_p2() {
    tmp_1739_fu_27284_p2 = (!tmp_814_cast_reg_40948.read().is_01() || !tmp_2011_cast_fu_27280_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_814_cast_reg_40948.read()) + sc_bigint<19>(tmp_2011_cast_fu_27280_p1.read()));
}

void ShuffleNetV2::thread_tmp_1740_fu_27221_p3() {
    tmp_1740_fu_27221_p3 = esl_concat<4,6>(tmp_832_fu_27211_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1741_cast_fu_21794_p1() {
    tmp_1741_cast_fu_21794_p1 = esl_sext<64,10>(tmp_1512_reg_39006.read());
}

void ShuffleNetV2::thread_tmp_1741_fu_27229_p3() {
    tmp_1741_fu_27229_p3 = esl_concat<4,4>(tmp_832_fu_27211_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1742_fu_27241_p2() {
    tmp_1742_fu_27241_p2 = (!tmp_1740_fu_27221_p3.read().is_01() || !p_shl574_cast_fu_27237_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1740_fu_27221_p3.read()) - sc_bigint<10>(p_shl574_cast_fu_27237_p1.read()));
}

void ShuffleNetV2::thread_tmp_1743_fu_27247_p2() {
    tmp_1743_fu_27247_p2 = (!tmp_813_cast1_reg_40943.read().is_01() || !tmp_1742_fu_27241_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_813_cast1_reg_40943.read()) + sc_biguint<10>(tmp_1742_fu_27241_p2.read()));
}

void ShuffleNetV2::thread_tmp_1744_fu_27570_p1() {
    tmp_1744_fu_27570_p1 = co146_reg_7336.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1745_fu_27586_p2() {
    tmp_1745_fu_27586_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co146_reg_7336.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1746_fu_27493_p2() {
    tmp_1746_fu_27493_p2 = (!tmp_834_cast_fu_27489_p1.read().is_01() || !tmp_1732_reg_41072.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_834_cast_fu_27489_p1.read()) + sc_biguint<10>(tmp_1732_reg_41072.read()));
}

void ShuffleNetV2::thread_tmp_1747_fu_27498_p3() {
    tmp_1747_fu_27498_p3 = esl_concat<10,3>(tmp_1746_fu_27493_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1748_fu_27510_p3() {
    tmp_1748_fu_27510_p3 = esl_concat<10,1>(tmp_1746_fu_27493_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1749_fu_27522_p2() {
    tmp_1749_fu_27522_p2 = (!p_shl579_cast_fu_27506_p1.read().is_01() || !p_shl580_cast_fu_27518_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl579_cast_fu_27506_p1.read()) + sc_biguint<15>(p_shl580_cast_fu_27518_p1.read()));
}

void ShuffleNetV2::thread_tmp_1750_cast_fu_22071_p1() {
    tmp_1750_cast_fu_22071_p1 = esl_sext<36,35>(tmp_1518_fu_22065_p2.read());
}

void ShuffleNetV2::thread_tmp_1750_fu_27544_p2() {
    tmp_1750_fu_27544_p2 = (!tmp_1749_reg_41085.read().is_01() || !tmp_838_cast_fu_27540_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1749_reg_41085.read()) + sc_biguint<15>(tmp_838_cast_fu_27540_p1.read()));
}

void ShuffleNetV2::thread_tmp_1751_fu_27880_p1() {
    tmp_1751_fu_27880_p1 = k62_reg_7380.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1752_fu_27657_p1() {
    tmp_1752_fu_27657_p1 = i142_reg_7358.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1753_fu_27677_p2() {
    tmp_1753_fu_27677_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i142_reg_7358.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1754_cast_fu_22174_p1() {
    tmp_1754_cast_fu_22174_p1 = esl_zext<64,10>(tmp_1523_reg_39189.read());
}

void ShuffleNetV2::thread_tmp_1754_fu_27693_p1() {
    tmp_1754_fu_27693_p1 = tmp_844_fu_27687_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1755_fu_27781_p3() {
    tmp_1755_fu_27781_p3 = esl_concat<12,5>(tmp_847_reg_41162.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1756_fu_27792_p3() {
    tmp_1756_fu_27792_p3 = esl_concat<12,3>(tmp_847_reg_41162.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1757_fu_27803_p2() {
    tmp_1757_fu_27803_p2 = (!p_shl583_cast_fu_27788_p1.read().is_01() || !p_shl584_cast_fu_27799_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl583_cast_fu_27788_p1.read()) - sc_biguint<18>(p_shl584_cast_fu_27799_p1.read()));
}

void ShuffleNetV2::thread_tmp_1758_cast_fu_22138_p1() {
    tmp_1758_cast_fu_22138_p1 = esl_sext<64,12>(tmp_1527_reg_39183.read());
}

void ShuffleNetV2::thread_tmp_1758_fu_27813_p2() {
    tmp_1758_fu_27813_p2 = (!tmp_837_cast1_reg_41149.read().is_01() || !tmp_2033_cast_fu_27809_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_837_cast1_reg_41149.read()) + sc_bigint<19>(tmp_2033_cast_fu_27809_p1.read()));
}

void ShuffleNetV2::thread_tmp_1759_fu_27750_p3() {
    tmp_1759_fu_27750_p3 = esl_concat<5,7>(tmp_849_fu_27740_p4.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1760_fu_27758_p3() {
    tmp_1760_fu_27758_p3 = esl_concat<5,5>(tmp_849_fu_27740_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1761_fu_27770_p2() {
    tmp_1761_fu_27770_p2 = (!tmp_1759_fu_27750_p3.read().is_01() || !p_shl582_cast_fu_27766_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1759_fu_27750_p3.read()) - sc_bigint<12>(p_shl582_cast_fu_27766_p1.read()));
}

void ShuffleNetV2::thread_tmp_1762_fu_27776_p2() {
    tmp_1762_fu_27776_p2 = (!tmp_836_cast_reg_41144.read().is_01() || !tmp_1761_fu_27770_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_836_cast_reg_41144.read()) + sc_biguint<12>(tmp_1761_fu_27770_p2.read()));
}

void ShuffleNetV2::thread_tmp_1763_fu_28349_p1() {
    tmp_1763_fu_28349_p1 = co150_reg_7457.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1764_fu_28365_p2() {
    tmp_1764_fu_28365_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co150_reg_7457.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1765_fu_28249_p1() {
    tmp_1765_fu_28249_p1 = k64_reg_7446.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1766_fu_28036_p1() {
    tmp_1766_fu_28036_p1 = i147_reg_7424.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1767_fu_28097_p3() {
    tmp_1767_fu_28097_p3 = esl_concat<8,2>(tmp_867_reg_41327.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1768_fu_28104_p1() {
    tmp_1768_fu_28104_p1 = esl_sext<34,10>(tmp_1767_fu_28097_p3.read());
}

void ShuffleNetV2::thread_tmp_1769_fu_28112_p2() {
    tmp_1769_fu_28112_p2 = (!p_shl588_cast_fu_28108_p1.read().is_01() || !tmp_868_cast_fu_28093_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl588_cast_fu_28108_p1.read()) - sc_biguint<35>(tmp_868_cast_fu_28093_p1.read()));
}

void ShuffleNetV2::thread_tmp_1770_fu_28122_p2() {
    tmp_1770_fu_28122_p2 = (!tmp_2049_cast_fu_28118_p1.read().is_01() || !tmp_850_cast_reg_41296.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2049_cast_fu_28118_p1.read()) + sc_biguint<36>(tmp_850_cast_reg_41296.read()));
}

void ShuffleNetV2::thread_tmp_1771_fu_28127_p1() {
    tmp_1771_fu_28127_p1 = tmp_1770_fu_28122_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1772_fu_28131_p1() {
    tmp_1772_fu_28131_p1 = tmp_1770_fu_28122_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1773_cast_fu_22567_p1() {
    tmp_1773_cast_fu_22567_p1 = esl_sext<18,17>(tmp_1539_fu_22561_p2.read());
}

void ShuffleNetV2::thread_tmp_1773_fu_28167_p2() {
    tmp_1773_fu_28167_p2 = (!p_shl587_cast_fu_28160_p3.read().is_01() || !tmp_1771_reg_41339.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl587_cast_fu_28160_p3.read()) - sc_biguint<11>(tmp_1771_reg_41339.read()));
}

void ShuffleNetV2::thread_tmp_1774_cast_fu_22576_p1() {
    tmp_1774_cast_fu_22576_p1 = esl_sext<33,18>(tmp_1540_fu_22571_p2.read());
}

void ShuffleNetV2::thread_tmp_1774_fu_28172_p2() {
    tmp_1774_fu_28172_p2 = (!tmp_1773_fu_28167_p2.read().is_01() || !tmp_857_cast_reg_41314.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1773_fu_28167_p2.read()) + sc_biguint<11>(tmp_857_cast_reg_41314.read()));
}

void ShuffleNetV2::thread_tmp_1775_fu_28138_p3() {
    tmp_1775_fu_28138_p3 = esl_concat<10,2>(tmp_869_reg_41333.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1776_fu_28149_p2() {
    tmp_1776_fu_28149_p2 = (!p_shl586_cast_fu_28145_p1.read().is_01() || !tmp_870_cast_fu_28135_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl586_cast_fu_28145_p1.read()) - sc_biguint<13>(tmp_870_cast_fu_28135_p1.read()));
}

void ShuffleNetV2::thread_tmp_1777_fu_28155_p2() {
    tmp_1777_fu_28155_p2 = (!tmp_1776_fu_28149_p2.read().is_01() || !tmp_850_cast1_reg_41291.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1776_fu_28149_p2.read()) + sc_biguint<13>(tmp_850_cast1_reg_41291.read()));
}

void ShuffleNetV2::thread_tmp_1778_fu_28180_p3() {
    tmp_1778_fu_28180_p3 = esl_concat<13,2>(tmp_1777_reg_41349.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1779_fu_28191_p2() {
    tmp_1779_fu_28191_p2 = (!p_shl262_fu_28187_p1.read().is_01() || !tmp_2056_cast_fu_28177_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl262_fu_28187_p1.read()) - sc_bigint<64>(tmp_2056_cast_fu_28177_p1.read()));
}

void ShuffleNetV2::thread_tmp_1780_cast_fu_22595_p1() {
    tmp_1780_cast_fu_22595_p1 = esl_sext<64,10>(tmp_1544_reg_39306.read());
}

void ShuffleNetV2::thread_tmp_1780_fu_28197_p2() {
    tmp_1780_fu_28197_p2 = (!tmp_1779_fu_28191_p2.read().is_01() || !tmp_857_reg_41309.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1779_fu_28191_p2.read()) + sc_biguint<64>(tmp_857_reg_41309.read()));
}

void ShuffleNetV2::thread_tmp_1781_fu_28659_p1() {
    tmp_1781_fu_28659_p1 = k66_reg_7501.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1782_fu_28436_p1() {
    tmp_1782_fu_28436_p1 = i149_reg_7479.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1783_fu_28456_p2() {
    tmp_1783_fu_28456_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i149_reg_7479.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1784_fu_28472_p1() {
    tmp_1784_fu_28472_p1 = tmp_876_fu_28466_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1785_fu_28560_p3() {
    tmp_1785_fu_28560_p3 = esl_concat<12,5>(tmp_879_reg_41462.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1786_fu_28571_p3() {
    tmp_1786_fu_28571_p3 = esl_concat<12,3>(tmp_879_reg_41462.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1787_fu_28582_p2() {
    tmp_1787_fu_28582_p2 = (!p_shl591_cast_fu_28567_p1.read().is_01() || !p_shl592_cast_fu_28578_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl591_cast_fu_28567_p1.read()) - sc_biguint<18>(p_shl592_cast_fu_28578_p1.read()));
}

void ShuffleNetV2::thread_tmp_1788_fu_28592_p2() {
    tmp_1788_fu_28592_p2 = (!tmp_865_cast_reg_41449.read().is_01() || !tmp_2067_cast_fu_28588_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_865_cast_reg_41449.read()) + sc_bigint<19>(tmp_2067_cast_fu_28588_p1.read()));
}

void ShuffleNetV2::thread_tmp_1789_fu_28529_p3() {
    tmp_1789_fu_28529_p3 = esl_concat<5,7>(tmp_880_fu_28519_p4.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1790_fu_28537_p3() {
    tmp_1790_fu_28537_p3 = esl_concat<5,5>(tmp_880_fu_28519_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1791_fu_28549_p2() {
    tmp_1791_fu_28549_p2 = (!tmp_1789_fu_28529_p3.read().is_01() || !p_shl590_cast_fu_28545_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1789_fu_28529_p3.read()) - sc_bigint<12>(p_shl590_cast_fu_28545_p1.read()));
}

void ShuffleNetV2::thread_tmp_1792_fu_28555_p2() {
    tmp_1792_fu_28555_p2 = (!tmp_863_cast_reg_41444.read().is_01() || !tmp_1791_fu_28549_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_863_cast_reg_41444.read()) + sc_biguint<12>(tmp_1791_fu_28549_p2.read()));
}

void ShuffleNetV2::thread_tmp_1793_fu_29128_p1() {
    tmp_1793_fu_29128_p1 = co154_reg_7578.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1794_fu_29144_p2() {
    tmp_1794_fu_29144_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co154_reg_7578.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1795_fu_29032_p1() {
    tmp_1795_fu_29032_p1 = k68_reg_7567.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1796_fu_28819_p1() {
    tmp_1796_fu_28819_p1 = i154_reg_7545.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1797_fu_28880_p3() {
    tmp_1797_fu_28880_p3 = esl_concat<8,2>(tmp_896_reg_41627.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1798_fu_28887_p1() {
    tmp_1798_fu_28887_p1 = esl_sext<34,10>(tmp_1797_fu_28880_p3.read());
}

void ShuffleNetV2::thread_tmp_1799_fu_28895_p2() {
    tmp_1799_fu_28895_p2 = (!p_shl596_cast_fu_28891_p1.read().is_01() || !tmp_897_cast_fu_28876_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl596_cast_fu_28891_p1.read()) - sc_biguint<35>(tmp_897_cast_fu_28876_p1.read()));
}

void ShuffleNetV2::thread_tmp_1800_fu_28905_p2() {
    tmp_1800_fu_28905_p2 = (!tmp_2083_cast_fu_28901_p1.read().is_01() || !tmp_881_cast_reg_41596.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2083_cast_fu_28901_p1.read()) + sc_biguint<36>(tmp_881_cast_reg_41596.read()));
}

void ShuffleNetV2::thread_tmp_1801_cast_fu_22832_p1() {
    tmp_1801_cast_fu_22832_p1 = esl_zext<64,15>(tmp_1564_fu_22827_p2.read());
}

void ShuffleNetV2::thread_tmp_1801_fu_28910_p1() {
    tmp_1801_fu_28910_p1 = tmp_1800_fu_28905_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1802_cast_fu_23034_p1() {
    tmp_1802_cast_fu_23034_p1 = esl_zext<64,15>(tmp_1565_fu_23029_p2.read());
}

void ShuffleNetV2::thread_tmp_1802_fu_28914_p1() {
    tmp_1802_fu_28914_p1 = tmp_1800_fu_28905_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1803_cast_fu_23044_p1() {
    tmp_1803_cast_fu_23044_p1 = esl_zext<64,14>(tmp_1566_reg_39492.read());
}

void ShuffleNetV2::thread_tmp_1803_fu_28950_p2() {
    tmp_1803_fu_28950_p2 = (!p_shl595_cast_fu_28943_p3.read().is_01() || !tmp_1801_reg_41639.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl595_cast_fu_28943_p3.read()) - sc_biguint<11>(tmp_1801_reg_41639.read()));
}

void ShuffleNetV2::thread_tmp_1804_fu_28955_p2() {
    tmp_1804_fu_28955_p2 = (!tmp_1803_fu_28950_p2.read().is_01() || !tmp_891_cast_reg_41614.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1803_fu_28950_p2.read()) + sc_biguint<11>(tmp_891_cast_reg_41614.read()));
}

void ShuffleNetV2::thread_tmp_1805_fu_28921_p3() {
    tmp_1805_fu_28921_p3 = esl_concat<10,2>(tmp_898_reg_41633.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1806_fu_28932_p2() {
    tmp_1806_fu_28932_p2 = (!p_shl594_cast_fu_28928_p1.read().is_01() || !tmp_899_cast_fu_28918_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl594_cast_fu_28928_p1.read()) - sc_biguint<13>(tmp_899_cast_fu_28918_p1.read()));
}

void ShuffleNetV2::thread_tmp_1807_fu_28938_p2() {
    tmp_1807_fu_28938_p2 = (!tmp_1806_fu_28932_p2.read().is_01() || !tmp_881_cast1_reg_41591.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1806_fu_28932_p2.read()) + sc_biguint<13>(tmp_881_cast1_reg_41591.read()));
}

void ShuffleNetV2::thread_tmp_1808_fu_28963_p3() {
    tmp_1808_fu_28963_p3 = esl_concat<13,2>(tmp_1807_reg_41649.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1809_fu_28974_p2() {
    tmp_1809_fu_28974_p2 = (!p_shl267_fu_28970_p1.read().is_01() || !tmp_2090_cast_fu_28960_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl267_fu_28970_p1.read()) - sc_bigint<64>(tmp_2090_cast_fu_28960_p1.read()));
}

void ShuffleNetV2::thread_tmp_1810_fu_28980_p2() {
    tmp_1810_fu_28980_p2 = (!tmp_1809_fu_28974_p2.read().is_01() || !tmp_891_reg_41609.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1809_fu_28974_p2.read()) + sc_biguint<64>(tmp_891_reg_41609.read()));
}

void ShuffleNetV2::thread_tmp_1811_fu_29534_p3() {
    tmp_1811_fu_29534_p3 = esl_concat<7,3>(co156_reg_7633.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1812_cast_fu_23325_p1() {
    tmp_1812_cast_fu_23325_p1 = esl_sext<18,17>(tmp_1572_fu_23319_p2.read());
}

void ShuffleNetV2::thread_tmp_1812_fu_29546_p3() {
    tmp_1812_fu_29546_p3 = esl_concat<7,1>(co156_reg_7633.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1813_cast_fu_23334_p1() {
    tmp_1813_cast_fu_23334_p1 = esl_sext<33,18>(tmp_1573_fu_23329_p2.read());
}

void ShuffleNetV2::thread_tmp_1813_fu_29558_p2() {
    tmp_1813_fu_29558_p2 = (!p_shl603_cast_fu_29542_p1.read().is_01() || !p_shl604_cast_fu_29554_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl603_cast_fu_29542_p1.read()) - sc_biguint<11>(p_shl604_cast_fu_29554_p1.read()));
}

void ShuffleNetV2::thread_tmp_1814_fu_29574_p3() {
    tmp_1814_fu_29574_p3 = esl_concat<8,3>(tmp_900_fu_29568_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1815_fu_29586_p3() {
    tmp_1815_fu_29586_p3 = esl_concat<8,1>(tmp_900_fu_29568_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1816_fu_29598_p2() {
    tmp_1816_fu_29598_p2 = (!p_shl601_cast_fu_29582_p1.read().is_01() || !p_shl602_cast_fu_29594_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl601_cast_fu_29582_p1.read()) - sc_biguint<12>(p_shl602_cast_fu_29594_p1.read()));
}

void ShuffleNetV2::thread_tmp_1817_fu_29438_p1() {
    tmp_1817_fu_29438_p1 = k70_reg_7622.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1818_fu_29215_p1() {
    tmp_1818_fu_29215_p1 = i156_reg_7600.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1819_cast_fu_23353_p1() {
    tmp_1819_cast_fu_23353_p1 = esl_sext<64,10>(tmp_1577_reg_39561.read());
}

void ShuffleNetV2::thread_tmp_1819_fu_29235_p2() {
    tmp_1819_fu_29235_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i156_reg_7600.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1820_fu_29251_p1() {
    tmp_1820_fu_29251_p1 = tmp_907_fu_29245_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1821_fu_29339_p3() {
    tmp_1821_fu_29339_p3 = esl_concat<12,5>(tmp_910_reg_41762.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1822_fu_29350_p3() {
    tmp_1822_fu_29350_p3 = esl_concat<12,3>(tmp_910_reg_41762.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1823_fu_29361_p2() {
    tmp_1823_fu_29361_p2 = (!p_shl599_cast_fu_29346_p1.read().is_01() || !p_shl600_cast_fu_29357_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl599_cast_fu_29346_p1.read()) - sc_biguint<18>(p_shl600_cast_fu_29357_p1.read()));
}

void ShuffleNetV2::thread_tmp_1824_fu_29371_p2() {
    tmp_1824_fu_29371_p2 = (!tmp_894_cast1_reg_41749.read().is_01() || !tmp_2107_cast_fu_29367_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_894_cast1_reg_41749.read()) + sc_bigint<19>(tmp_2107_cast_fu_29367_p1.read()));
}

void ShuffleNetV2::thread_tmp_1825_fu_29308_p3() {
    tmp_1825_fu_29308_p3 = esl_concat<5,7>(tmp_911_fu_29298_p4.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1826_fu_29316_p3() {
    tmp_1826_fu_29316_p3 = esl_concat<5,5>(tmp_911_fu_29298_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1827_fu_29328_p2() {
    tmp_1827_fu_29328_p2 = (!tmp_1825_fu_29308_p3.read().is_01() || !p_shl598_cast_fu_29324_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1825_fu_29308_p3.read()) - sc_bigint<12>(p_shl598_cast_fu_29324_p1.read()));
}

void ShuffleNetV2::thread_tmp_1828_cast_fu_23630_p1() {
    tmp_1828_cast_fu_23630_p1 = esl_sext<36,35>(tmp_1583_fu_23624_p2.read());
}

void ShuffleNetV2::thread_tmp_1828_fu_29334_p2() {
    tmp_1828_fu_29334_p2 = (!tmp_893_cast_reg_41744.read().is_01() || !tmp_1827_fu_29328_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_893_cast_reg_41744.read()) + sc_biguint<12>(tmp_1827_fu_29328_p2.read()));
}

void ShuffleNetV2::thread_tmp_1829_fu_29745_p1() {
    tmp_1829_fu_29745_p1 = co158_reg_7666.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1830_fu_29761_p2() {
    tmp_1830_fu_29761_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co158_reg_7666.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1831_fu_29628_p2() {
    tmp_1831_fu_29628_p2 = (!tmp_916_cast_fu_29624_p1.read().is_01() || !tmp_2096_cast_reg_41873.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_916_cast_fu_29624_p1.read()) + sc_bigint<12>(tmp_2096_cast_reg_41873.read()));
}

void ShuffleNetV2::thread_tmp_1832_cast_fu_23737_p1() {
    tmp_1832_cast_fu_23737_p1 = esl_zext<64,10>(tmp_1588_reg_39744.read());
}

void ShuffleNetV2::thread_tmp_1832_fu_29633_p1() {
    tmp_1832_fu_29633_p1 = tmp_1831_fu_29628_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1833_fu_29653_p2() {
    tmp_1833_fu_29653_p2 = (!p_shl607_cast_fu_29637_p3.read().is_01() || !p_shl608_cast_fu_29645_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl607_cast_fu_29637_p3.read()) - sc_biguint<13>(p_shl608_cast_fu_29645_p3.read()));
}

void ShuffleNetV2::thread_tmp_1834_fu_29659_p2() {
    tmp_1834_fu_29659_p2 = (!tmp_916_cast1_fu_29620_p1.read().is_01() || !tmp_2099_cast_reg_41878.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_916_cast1_fu_29620_p1.read()) + sc_bigint<13>(tmp_2099_cast_reg_41878.read()));
}

void ShuffleNetV2::thread_tmp_1835_cast_fu_23675_p1() {
    tmp_1835_cast_fu_23675_p1 = esl_sext<13,12>(tmp_1591_fu_23669_p2.read());
}

void ShuffleNetV2::thread_tmp_1835_fu_29664_p1() {
    tmp_1835_fu_29664_p1 = tmp_1834_fu_29659_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1836_cast_fu_23701_p1() {
    tmp_1836_cast_fu_23701_p1 = esl_sext<64,13>(tmp_1592_reg_39738.read());
}

void ShuffleNetV2::thread_tmp_1836_fu_29684_p2() {
    tmp_1836_fu_29684_p2 = (!p_shl605_cast_fu_29668_p3.read().is_01() || !p_shl606_cast_fu_29676_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl605_cast_fu_29668_p3.read()) - sc_biguint<14>(p_shl606_cast_fu_29676_p3.read()));
}

void ShuffleNetV2::thread_tmp_1837_fu_29710_p2() {
    tmp_1837_fu_29710_p2 = (!tmp_1833_reg_41891.read().is_01() || !tmp_920_cast2_fu_29706_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1833_reg_41891.read()) + sc_biguint<13>(tmp_920_cast2_fu_29706_p1.read()));
}

void ShuffleNetV2::thread_tmp_1838_fu_29715_p2() {
    tmp_1838_fu_29715_p2 = (!tmp_1836_reg_41896.read().is_01() || !tmp_920_cast1_fu_29702_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1836_reg_41896.read()) + sc_biguint<14>(tmp_920_cast1_fu_29702_p1.read()));
}

void ShuffleNetV2::thread_tmp_1839_fu_30055_p1() {
    tmp_1839_fu_30055_p1 = k72_reg_7710.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1840_fu_29832_p1() {
    tmp_1840_fu_29832_p1 = i160_reg_7688.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1841_fu_29852_p2() {
    tmp_1841_fu_29852_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i160_reg_7688.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1842_fu_29868_p1() {
    tmp_1842_fu_29868_p1 = tmp_926_fu_29862_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1843_fu_29956_p3() {
    tmp_1843_fu_29956_p3 = esl_concat<12,5>(tmp_929_reg_41973.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1844_fu_29967_p3() {
    tmp_1844_fu_29967_p3 = esl_concat<12,3>(tmp_929_reg_41973.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1845_fu_29978_p2() {
    tmp_1845_fu_29978_p2 = (!p_shl611_cast_fu_29963_p1.read().is_01() || !p_shl612_cast_fu_29974_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl611_cast_fu_29963_p1.read()) - sc_biguint<18>(p_shl612_cast_fu_29974_p1.read()));
}

void ShuffleNetV2::thread_tmp_1846_fu_29988_p2() {
    tmp_1846_fu_29988_p2 = (!tmp_919_cast_reg_41960.read().is_01() || !tmp_2134_cast_fu_29984_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_919_cast_reg_41960.read()) + sc_bigint<19>(tmp_2134_cast_fu_29984_p1.read()));
}

void ShuffleNetV2::thread_tmp_1847_fu_29925_p3() {
    tmp_1847_fu_29925_p3 = esl_concat<5,7>(tmp_930_fu_29915_p4.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1848_fu_29933_p3() {
    tmp_1848_fu_29933_p3 = esl_concat<5,5>(tmp_930_fu_29915_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1849_fu_29945_p2() {
    tmp_1849_fu_29945_p2 = (!tmp_1847_fu_29925_p3.read().is_01() || !p_shl610_cast_fu_29941_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1847_fu_29925_p3.read()) - sc_bigint<12>(p_shl610_cast_fu_29941_p1.read()));
}

void ShuffleNetV2::thread_tmp_1850_fu_29951_p2() {
    tmp_1850_fu_29951_p2 = (!tmp_918_cast_reg_41955.read().is_01() || !tmp_1849_fu_29945_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_918_cast_reg_41955.read()) + sc_biguint<12>(tmp_1849_fu_29945_p2.read()));
}

void ShuffleNetV2::thread_tmp_1851_cast_fu_24130_p1() {
    tmp_1851_cast_fu_24130_p1 = esl_sext<18,17>(tmp_1604_fu_24124_p2.read());
}

void ShuffleNetV2::thread_tmp_1851_fu_30516_p1() {
    tmp_1851_fu_30516_p1 = co162_reg_7787.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1852_cast_fu_24139_p1() {
    tmp_1852_cast_fu_24139_p1 = esl_sext<33,18>(tmp_1605_fu_24134_p2.read());
}

void ShuffleNetV2::thread_tmp_1852_fu_30532_p2() {
    tmp_1852_fu_30532_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co162_reg_7787.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1853_fu_30420_p1() {
    tmp_1853_fu_30420_p1 = k74_reg_7776.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1854_fu_30207_p1() {
    tmp_1854_fu_30207_p1 = i165_reg_7754.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1855_fu_30268_p3() {
    tmp_1855_fu_30268_p3 = esl_concat<8,2>(tmp_946_reg_42138.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1856_fu_30275_p1() {
    tmp_1856_fu_30275_p1 = esl_sext<34,10>(tmp_1855_fu_30268_p3.read());
}

void ShuffleNetV2::thread_tmp_1857_fu_30283_p2() {
    tmp_1857_fu_30283_p2 = (!p_shl616_cast_fu_30279_p1.read().is_01() || !tmp_947_cast1_fu_30264_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl616_cast_fu_30279_p1.read()) - sc_biguint<35>(tmp_947_cast1_fu_30264_p1.read()));
}

void ShuffleNetV2::thread_tmp_1858_cast_fu_24158_p1() {
    tmp_1858_cast_fu_24158_p1 = esl_sext<64,10>(tmp_1609_reg_39861.read());
}

void ShuffleNetV2::thread_tmp_1858_fu_30293_p2() {
    tmp_1858_fu_30293_p2 = (!tmp_2150_cast_fu_30289_p1.read().is_01() || !tmp_933_cast_reg_42107.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2150_cast_fu_30289_p1.read()) + sc_biguint<36>(tmp_933_cast_reg_42107.read()));
}

void ShuffleNetV2::thread_tmp_1859_fu_30298_p1() {
    tmp_1859_fu_30298_p1 = tmp_1858_fu_30293_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1860_fu_30302_p1() {
    tmp_1860_fu_30302_p1 = tmp_1858_fu_30293_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1861_fu_30338_p2() {
    tmp_1861_fu_30338_p2 = (!p_shl615_cast_fu_30331_p3.read().is_01() || !tmp_1859_reg_42150.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl615_cast_fu_30331_p3.read()) - sc_biguint<11>(tmp_1859_reg_42150.read()));
}

void ShuffleNetV2::thread_tmp_1862_fu_30343_p2() {
    tmp_1862_fu_30343_p2 = (!tmp_1861_fu_30338_p2.read().is_01() || !tmp_941_cast1_reg_42125.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1861_fu_30338_p2.read()) + sc_biguint<11>(tmp_941_cast1_reg_42125.read()));
}

void ShuffleNetV2::thread_tmp_1863_fu_30309_p3() {
    tmp_1863_fu_30309_p3 = esl_concat<10,2>(tmp_948_reg_42144.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1864_fu_30320_p2() {
    tmp_1864_fu_30320_p2 = (!p_shl614_cast_fu_30316_p1.read().is_01() || !tmp_949_cast_fu_30306_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl614_cast_fu_30316_p1.read()) - sc_biguint<13>(tmp_949_cast_fu_30306_p1.read()));
}

void ShuffleNetV2::thread_tmp_1865_fu_30326_p2() {
    tmp_1865_fu_30326_p2 = (!tmp_1864_fu_30320_p2.read().is_01() || !tmp_933_cast1_reg_42102.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1864_fu_30320_p2.read()) + sc_biguint<13>(tmp_933_cast1_reg_42102.read()));
}

void ShuffleNetV2::thread_tmp_1866_fu_30351_p3() {
    tmp_1866_fu_30351_p3 = esl_concat<13,2>(tmp_1865_reg_42160.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1867_fu_30362_p2() {
    tmp_1867_fu_30362_p2 = (!p_shl273_fu_30358_p1.read().is_01() || !tmp_2157_cast_fu_30348_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl273_fu_30358_p1.read()) - sc_bigint<64>(tmp_2157_cast_fu_30348_p1.read()));
}

void ShuffleNetV2::thread_tmp_1868_fu_30368_p2() {
    tmp_1868_fu_30368_p2 = (!tmp_1867_fu_30362_p2.read().is_01() || !tmp_941_reg_42120.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1867_fu_30362_p2.read()) + sc_biguint<64>(tmp_941_reg_42120.read()));
}

void ShuffleNetV2::thread_tmp_1869_fu_30926_p3() {
    tmp_1869_fu_30926_p3 = esl_concat<7,3>(co164_reg_7842.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1870_fu_30938_p3() {
    tmp_1870_fu_30938_p3 = esl_concat<7,1>(co164_reg_7842.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1871_fu_30950_p2() {
    tmp_1871_fu_30950_p2 = (!p_shl621_cast_fu_30934_p1.read().is_01() || !p_shl622_cast_fu_30946_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl621_cast_fu_30934_p1.read()) - sc_biguint<11>(p_shl622_cast_fu_30946_p1.read()));
}

void ShuffleNetV2::thread_tmp_1872_fu_30834_p1() {
    tmp_1872_fu_30834_p1 = k76_reg_7831.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1873_fu_30603_p1() {
    tmp_1873_fu_30603_p1 = i167_reg_7809.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1874_fu_30623_p2() {
    tmp_1874_fu_30623_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i167_reg_7809.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1875_fu_30639_p1() {
    tmp_1875_fu_30639_p1 = tmp_955_fu_30633_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1876_fu_30727_p3() {
    tmp_1876_fu_30727_p3 = esl_concat<11,5>(tmp_958_reg_42273.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1877_fu_30734_p1() {
    tmp_1877_fu_30734_p1 = esl_sext<17,16>(tmp_1876_fu_30727_p3.read());
}

void ShuffleNetV2::thread_tmp_1878_fu_30742_p3() {
    tmp_1878_fu_30742_p3 = esl_concat<11,3>(tmp_958_reg_42273.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1879_cast_fu_24395_p1() {
    tmp_1879_cast_fu_24395_p1 = esl_zext<64,15>(tmp_1629_fu_24390_p2.read());
}

void ShuffleNetV2::thread_tmp_1879_fu_30749_p1() {
    tmp_1879_fu_30749_p1 = esl_sext<15,14>(tmp_1878_fu_30742_p3.read());
}

void ShuffleNetV2::thread_tmp_1880_cast_fu_24607_p1() {
    tmp_1880_cast_fu_24607_p1 = esl_zext<64,14>(tmp_1630_reg_40042.read());
}

void ShuffleNetV2::thread_tmp_1880_fu_30757_p2() {
    tmp_1880_fu_30757_p2 = (!p_shl619_cast_fu_30738_p1.read().is_01() || !p_shl620_cast_fu_30753_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl619_cast_fu_30738_p1.read()) - sc_biguint<18>(p_shl620_cast_fu_30753_p1.read()));
}

void ShuffleNetV2::thread_tmp_1881_cast_fu_24602_p1() {
    tmp_1881_cast_fu_24602_p1 = esl_zext<64,15>(tmp_1631_fu_24597_p2.read());
}

void ShuffleNetV2::thread_tmp_1881_fu_30767_p2() {
    tmp_1881_fu_30767_p2 = (!tmp_944_cast1_reg_42260.read().is_01() || !tmp_2173_cast_fu_30763_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_944_cast1_reg_42260.read()) + sc_bigint<19>(tmp_2173_cast_fu_30763_p1.read()));
}

void ShuffleNetV2::thread_tmp_1882_fu_30696_p3() {
    tmp_1882_fu_30696_p3 = esl_concat<5,7>(tmp_959_fu_30686_p4.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1883_fu_30704_p3() {
    tmp_1883_fu_30704_p3 = esl_concat<5,5>(tmp_959_fu_30686_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1884_fu_30716_p2() {
    tmp_1884_fu_30716_p2 = (!tmp_1882_fu_30696_p3.read().is_01() || !p_shl618_cast_fu_30712_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1882_fu_30696_p3.read()) - sc_bigint<12>(p_shl618_cast_fu_30712_p1.read()));
}

void ShuffleNetV2::thread_tmp_1885_fu_30722_p2() {
    tmp_1885_fu_30722_p2 = (!tmp_943_cast_reg_42255.read().is_01() || !tmp_1884_fu_30716_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_943_cast_reg_42255.read()) + sc_biguint<12>(tmp_1884_fu_30716_p2.read()));
}

void ShuffleNetV2::thread_tmp_1886_fu_31053_p3() {
    tmp_1886_fu_31053_p3 = esl_concat<7,3>(co166_reg_7875.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1887_fu_31065_p3() {
    tmp_1887_fu_31065_p3 = esl_concat<7,1>(co166_reg_7875.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1888_fu_31077_p2() {
    tmp_1888_fu_31077_p2 = (!p_shl627_cast_fu_31061_p1.read().is_01() || !p_shl628_cast_fu_31073_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl627_cast_fu_31061_p1.read()) - sc_biguint<11>(p_shl628_cast_fu_31073_p1.read()));
}

void ShuffleNetV2::thread_tmp_1889_fu_31093_p3() {
    tmp_1889_fu_31093_p3 = esl_concat<8,3>(tmp_962_fu_31087_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1890_fu_31105_p3() {
    tmp_1890_fu_31105_p3 = esl_concat<8,1>(tmp_962_fu_31087_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1891_fu_31117_p2() {
    tmp_1891_fu_31117_p2 = (!p_shl625_cast_fu_31101_p1.read().is_01() || !p_shl626_cast_fu_31113_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl625_cast_fu_31101_p1.read()) - sc_biguint<12>(p_shl626_cast_fu_31113_p1.read()));
}

void ShuffleNetV2::thread_tmp_1892_cast_fu_24896_p1() {
    tmp_1892_cast_fu_24896_p1 = esl_sext<18,17>(tmp_1639_fu_24890_p2.read());
}

void ShuffleNetV2::thread_tmp_1892_fu_30976_p2() {
    tmp_1892_fu_30976_p2 = (!tmp_2163_cast_reg_42384.read().is_01() || !tmp_964_cast_fu_30972_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_2163_cast_reg_42384.read()) + sc_biguint<12>(tmp_964_cast_fu_30972_p1.read()));
}

void ShuffleNetV2::thread_tmp_1893_cast_fu_24905_p1() {
    tmp_1893_cast_fu_24905_p1 = esl_sext<33,18>(tmp_1640_fu_24900_p2.read());
}

void ShuffleNetV2::thread_tmp_1893_fu_30981_p1() {
    tmp_1893_fu_30981_p1 = tmp_1892_fu_30976_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1894_fu_30993_p3() {
    tmp_1894_fu_30993_p3 = esl_concat<12,1>(tmp_1892_fu_30976_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1895_fu_31005_p2() {
    tmp_1895_fu_31005_p2 = (!p_shl623_cast_fu_30985_p3.read().is_01() || !p_shl624_cast_fu_31001_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl623_cast_fu_30985_p3.read()) - sc_bigint<14>(p_shl624_cast_fu_31001_p1.read()));
}

void ShuffleNetV2::thread_tmp_1896_fu_31264_p1() {
    tmp_1896_fu_31264_p1 = co168_reg_7908.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1897_fu_31280_p2() {
    tmp_1897_fu_31280_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co168_reg_7908.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1898_fu_31147_p2() {
    tmp_1898_fu_31147_p2 = (!tmp_966_cast_fu_31143_p1.read().is_01() || !tmp_2183_cast_reg_42428.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_966_cast_fu_31143_p1.read()) + sc_bigint<12>(tmp_2183_cast_reg_42428.read()));
}

void ShuffleNetV2::thread_tmp_1899_cast_fu_24924_p1() {
    tmp_1899_cast_fu_24924_p1 = esl_sext<64,10>(tmp_1644_reg_40116.read());
}

void ShuffleNetV2::thread_tmp_1899_fu_31152_p1() {
    tmp_1899_fu_31152_p1 = tmp_1898_fu_31147_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1900_fu_31172_p2() {
    tmp_1900_fu_31172_p2 = (!p_shl631_cast_fu_31156_p3.read().is_01() || !p_shl632_cast_fu_31164_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl631_cast_fu_31156_p3.read()) - sc_biguint<13>(p_shl632_cast_fu_31164_p3.read()));
}

void ShuffleNetV2::thread_tmp_1901_fu_31178_p2() {
    tmp_1901_fu_31178_p2 = (!tmp_966_cast1_fu_31139_p1.read().is_01() || !tmp_2186_cast_reg_42433.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_966_cast1_fu_31139_p1.read()) + sc_bigint<13>(tmp_2186_cast_reg_42433.read()));
}

void ShuffleNetV2::thread_tmp_1902_fu_31183_p1() {
    tmp_1902_fu_31183_p1 = tmp_1901_fu_31178_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1903_fu_31203_p2() {
    tmp_1903_fu_31203_p2 = (!p_shl629_cast_fu_31187_p3.read().is_01() || !p_shl630_cast_fu_31195_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl629_cast_fu_31187_p3.read()) - sc_biguint<14>(p_shl630_cast_fu_31195_p3.read()));
}

void ShuffleNetV2::thread_tmp_1904_fu_31027_p2() {
    tmp_1904_fu_31027_p2 = (!tmp_1895_reg_42397.read().is_01() || !tmp_967_cast1_fu_31023_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1895_reg_42397.read()) + sc_biguint<14>(tmp_967_cast1_fu_31023_p1.read()));
}

void ShuffleNetV2::thread_tmp_1905_fu_31229_p2() {
    tmp_1905_fu_31229_p2 = (!tmp_1900_reg_42446.read().is_01() || !tmp_971_cast_fu_31225_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1900_reg_42446.read()) + sc_biguint<13>(tmp_971_cast_fu_31225_p1.read()));
}

void ShuffleNetV2::thread_tmp_1906_fu_31234_p2() {
    tmp_1906_fu_31234_p2 = (!tmp_1903_reg_42451.read().is_01() || !tmp_971_cast1_fu_31221_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1903_reg_42451.read()) + sc_biguint<14>(tmp_971_cast1_fu_31221_p1.read()));
}

void ShuffleNetV2::thread_tmp_1907_fu_31574_p1() {
    tmp_1907_fu_31574_p1 = k78_reg_7952.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1908_cast_fu_25201_p1() {
    tmp_1908_cast_fu_25201_p1 = esl_sext<36,35>(tmp_1650_fu_25195_p2.read());
}

void ShuffleNetV2::thread_tmp_1908_fu_31351_p1() {
    tmp_1908_fu_31351_p1 = i171_reg_7930.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1909_fu_31371_p2() {
    tmp_1909_fu_31371_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i171_reg_7930.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1910_fu_31387_p1() {
    tmp_1910_fu_31387_p1 = tmp_977_fu_31381_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1911_fu_31475_p3() {
    tmp_1911_fu_31475_p3 = esl_concat<13,5>(tmp_981_reg_42528.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1912_cast_fu_25300_p1() {
    tmp_1912_cast_fu_25300_p1 = esl_zext<64,10>(tmp_1655_reg_40299.read());
}

void ShuffleNetV2::thread_tmp_1912_fu_31486_p3() {
    tmp_1912_fu_31486_p3 = esl_concat<13,3>(tmp_981_reg_42528.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1913_fu_31497_p2() {
    tmp_1913_fu_31497_p2 = (!p_shl635_cast_fu_31482_p1.read().is_01() || !p_shl636_cast_fu_31493_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl635_cast_fu_31482_p1.read()) - sc_biguint<19>(p_shl636_cast_fu_31493_p1.read()));
}

void ShuffleNetV2::thread_tmp_1914_cast_fu_25238_p1() {
    tmp_1914_cast_fu_25238_p1 = esl_sext<14,13>(tmp_1657_fu_25232_p2.read());
}

void ShuffleNetV2::thread_tmp_1914_fu_31507_p2() {
    tmp_1914_fu_31507_p2 = (!tmp_970_cast1_reg_42515.read().is_01() || !tmp_2211_cast_fu_31503_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_970_cast1_reg_42515.read()) + sc_bigint<20>(tmp_2211_cast_fu_31503_p1.read()));
}

void ShuffleNetV2::thread_tmp_1915_cast_fu_25264_p1() {
    tmp_1915_cast_fu_25264_p1 = esl_sext<64,14>(tmp_1658_reg_40293.read());
}

void ShuffleNetV2::thread_tmp_1915_fu_31444_p3() {
    tmp_1915_fu_31444_p3 = esl_concat<5,7>(tmp_983_fu_31434_p4.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1916_fu_31452_p3() {
    tmp_1916_fu_31452_p3 = esl_concat<5,5>(tmp_983_fu_31434_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1917_fu_31464_p2() {
    tmp_1917_fu_31464_p2 = (!tmp_1915_fu_31444_p3.read().is_01() || !p_shl634_cast_fu_31460_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1915_fu_31444_p3.read()) - sc_bigint<12>(p_shl634_cast_fu_31460_p1.read()));
}

void ShuffleNetV2::thread_tmp_1918_fu_31470_p2() {
    tmp_1918_fu_31470_p2 = (!tmp_969_cast_reg_42510.read().is_01() || !tmp_1917_fu_31464_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_969_cast_reg_42510.read()) + sc_biguint<12>(tmp_1917_fu_31464_p2.read()));
}

void ShuffleNetV2::thread_tmp_1919_fu_32047_p1() {
    tmp_1919_fu_32047_p1 = co172_reg_8029.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1920_fu_32063_p2() {
    tmp_1920_fu_32063_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co172_reg_8029.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1921_fu_31951_p1() {
    tmp_1921_fu_31951_p1 = k80_reg_8018.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1922_fu_31726_p1() {
    tmp_1922_fu_31726_p1 = i176_reg_7996.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1923_fu_31787_p3() {
    tmp_1923_fu_31787_p3 = esl_concat<8,2>(tmp_999_reg_42693.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1924_fu_31794_p1() {
    tmp_1924_fu_31794_p1 = esl_sext<34,10>(tmp_1923_fu_31787_p3.read());
}

void ShuffleNetV2::thread_tmp_1925_fu_31802_p2() {
    tmp_1925_fu_31802_p2 = (!p_shl640_cast_fu_31798_p1.read().is_01() || !tmp_1000_cast_fu_31783_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl640_cast_fu_31798_p1.read()) - sc_biguint<35>(tmp_1000_cast_fu_31783_p1.read()));
}

void ShuffleNetV2::thread_tmp_1926_fu_31812_p2() {
    tmp_1926_fu_31812_p2 = (!tmp_2227_cast_fu_31808_p1.read().is_01() || !tmp_984_cast_reg_42662.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2227_cast_fu_31808_p1.read()) + sc_biguint<36>(tmp_984_cast_reg_42662.read()));
}

void ShuffleNetV2::thread_tmp_1927_fu_31817_p1() {
    tmp_1927_fu_31817_p1 = tmp_1926_fu_31812_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1928_fu_31821_p1() {
    tmp_1928_fu_31821_p1 = tmp_1926_fu_31812_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1929_fu_31869_p2() {
    tmp_1929_fu_31869_p2 = (!p_shl639_cast_fu_31862_p3.read().is_01() || !tmp_1927_reg_42705.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl639_cast_fu_31862_p3.read()) - sc_biguint<11>(tmp_1927_reg_42705.read()));
}

void ShuffleNetV2::thread_tmp_1930_fu_31874_p2() {
    tmp_1930_fu_31874_p2 = (!tmp_1929_fu_31869_p2.read().is_01() || !tmp_991_cast_reg_42680.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1929_fu_31869_p2.read()) + sc_biguint<11>(tmp_991_cast_reg_42680.read()));
}

void ShuffleNetV2::thread_tmp_1931_fu_31832_p3() {
    tmp_1931_fu_31832_p3 = esl_concat<9,2>(tmp_1001_reg_42699.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1932_cast_fu_25701_p1() {
    tmp_1932_cast_fu_25701_p1 = esl_sext<18,17>(tmp_1672_fu_25695_p2.read());
}

void ShuffleNetV2::thread_tmp_1932_fu_31839_p1() {
    tmp_1932_fu_31839_p1 = esl_sext<12,11>(tmp_1931_fu_31832_p3.read());
}

void ShuffleNetV2::thread_tmp_1933_cast_fu_25710_p1() {
    tmp_1933_cast_fu_25710_p1 = esl_sext<33,18>(tmp_1673_fu_25705_p2.read());
}

void ShuffleNetV2::thread_tmp_1933_fu_31847_p2() {
    tmp_1933_fu_31847_p2 = (!p_shl638_cast_fu_31843_p1.read().is_01() || !tmp_1002_cast_fu_31828_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl638_cast_fu_31843_p1.read()) - sc_biguint<13>(tmp_1002_cast_fu_31828_p1.read()));
}

void ShuffleNetV2::thread_tmp_1934_fu_31857_p2() {
    tmp_1934_fu_31857_p2 = (!tmp_2234_cast_fu_31853_p1.read().is_01() || !tmp_984_cast1_reg_42657.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_2234_cast_fu_31853_p1.read()) + sc_biguint<14>(tmp_984_cast1_reg_42657.read()));
}

void ShuffleNetV2::thread_tmp_1935_fu_31882_p3() {
    tmp_1935_fu_31882_p3 = esl_concat<14,2>(tmp_1934_reg_42715.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1936_fu_31893_p2() {
    tmp_1936_fu_31893_p2 = (!p_shl275_fu_31889_p1.read().is_01() || !tmp_2235_cast_fu_31879_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl275_fu_31889_p1.read()) - sc_bigint<64>(tmp_2235_cast_fu_31879_p1.read()));
}

void ShuffleNetV2::thread_tmp_1937_fu_31899_p2() {
    tmp_1937_fu_31899_p2 = (!tmp_1936_fu_31893_p2.read().is_01() || !tmp_991_reg_42675.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1936_fu_31893_p2.read()) + sc_biguint<64>(tmp_991_reg_42675.read()));
}

void ShuffleNetV2::thread_tmp_1938_fu_32449_p3() {
    tmp_1938_fu_32449_p3 = esl_concat<7,3>(co174_reg_8084.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1939_cast_fu_25729_p1() {
    tmp_1939_cast_fu_25729_p1 = esl_sext<64,10>(tmp_1677_reg_40416.read());
}

void ShuffleNetV2::thread_tmp_1939_fu_32461_p3() {
    tmp_1939_fu_32461_p3 = esl_concat<7,1>(co174_reg_8084.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1940_fu_32473_p2() {
    tmp_1940_fu_32473_p2 = (!p_shl645_cast_fu_32457_p1.read().is_01() || !p_shl646_cast_fu_32469_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl645_cast_fu_32457_p1.read()) - sc_biguint<11>(p_shl646_cast_fu_32469_p1.read()));
}

void ShuffleNetV2::thread_tmp_1941_fu_32357_p1() {
    tmp_1941_fu_32357_p1 = k82_reg_8073.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1942_fu_32134_p1() {
    tmp_1942_fu_32134_p1 = i178_reg_8051.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1943_fu_32154_p2() {
    tmp_1943_fu_32154_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i178_reg_8051.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1944_fu_32170_p1() {
    tmp_1944_fu_32170_p1 = tmp_1008_fu_32164_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1945_fu_32258_p3() {
    tmp_1945_fu_32258_p3 = esl_concat<13,5>(tmp_1013_reg_42828.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1946_fu_32269_p3() {
    tmp_1946_fu_32269_p3 = esl_concat<13,3>(tmp_1013_reg_42828.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1947_fu_32280_p2() {
    tmp_1947_fu_32280_p2 = (!p_shl643_cast_fu_32265_p1.read().is_01() || !p_shl644_cast_fu_32276_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl643_cast_fu_32265_p1.read()) - sc_biguint<19>(p_shl644_cast_fu_32276_p1.read()));
}

void ShuffleNetV2::thread_tmp_1948_fu_32290_p2() {
    tmp_1948_fu_32290_p2 = (!tmp_997_cast1_reg_42815.read().is_01() || !tmp_2249_cast_fu_32286_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_997_cast1_reg_42815.read()) + sc_bigint<20>(tmp_2249_cast_fu_32286_p1.read()));
}

void ShuffleNetV2::thread_tmp_1949_fu_32227_p3() {
    tmp_1949_fu_32227_p3 = esl_concat<5,7>(tmp_1015_fu_32217_p4.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1950_fu_32235_p3() {
    tmp_1950_fu_32235_p3 = esl_concat<5,5>(tmp_1015_fu_32217_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1951_fu_32247_p2() {
    tmp_1951_fu_32247_p2 = (!tmp_1949_fu_32227_p3.read().is_01() || !p_shl642_cast_fu_32243_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1949_fu_32227_p3.read()) - sc_bigint<12>(p_shl642_cast_fu_32243_p1.read()));
}

void ShuffleNetV2::thread_tmp_1952_fu_32253_p2() {
    tmp_1952_fu_32253_p2 = (!tmp_996_cast_reg_42810.read().is_01() || !tmp_1951_fu_32247_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_996_cast_reg_42810.read()) + sc_biguint<12>(tmp_1951_fu_32247_p2.read()));
}

void ShuffleNetV2::thread_tmp_1953_fu_32576_p3() {
    tmp_1953_fu_32576_p3 = esl_concat<7,3>(co176_reg_8117.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1954_fu_32588_p3() {
    tmp_1954_fu_32588_p3 = esl_concat<7,1>(co176_reg_8117.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1955_fu_32600_p2() {
    tmp_1955_fu_32600_p2 = (!p_shl651_cast_fu_32584_p1.read().is_01() || !p_shl652_cast_fu_32596_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl651_cast_fu_32584_p1.read()) - sc_biguint<11>(p_shl652_cast_fu_32596_p1.read()));
}

void ShuffleNetV2::thread_tmp_1956_fu_32616_p3() {
    tmp_1956_fu_32616_p3 = esl_concat<8,3>(tmp_1016_fu_32610_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1957_fu_32628_p3() {
    tmp_1957_fu_32628_p3 = esl_concat<8,1>(tmp_1016_fu_32610_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1958_fu_32640_p2() {
    tmp_1958_fu_32640_p2 = (!p_shl649_cast_fu_32624_p1.read().is_01() || !p_shl650_cast_fu_32636_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl649_cast_fu_32624_p1.read()) - sc_biguint<12>(p_shl650_cast_fu_32636_p1.read()));
}

void ShuffleNetV2::thread_tmp_1959_fu_32499_p2() {
    tmp_1959_fu_32499_p2 = (!tmp_2241_cast_reg_42939.read().is_01() || !tmp_1017_cast_fu_32495_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_2241_cast_reg_42939.read()) + sc_biguint<12>(tmp_1017_cast_fu_32495_p1.read()));
}

void ShuffleNetV2::thread_tmp_1960_cast_fu_25970_p1() {
    tmp_1960_cast_fu_25970_p1 = esl_zext<64,15>(tmp_1697_fu_25965_p2.read());
}

void ShuffleNetV2::thread_tmp_1960_fu_32504_p1() {
    tmp_1960_fu_32504_p1 = tmp_1959_fu_32499_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1961_cast_fu_26182_p1() {
    tmp_1961_cast_fu_26182_p1 = esl_zext<64,14>(tmp_1698_reg_40597.read());
}

void ShuffleNetV2::thread_tmp_1961_fu_32516_p3() {
    tmp_1961_fu_32516_p3 = esl_concat<12,1>(tmp_1959_fu_32499_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1962_cast_fu_26177_p1() {
    tmp_1962_cast_fu_26177_p1 = esl_zext<64,15>(tmp_1699_fu_26172_p2.read());
}

void ShuffleNetV2::thread_tmp_1962_fu_32528_p2() {
    tmp_1962_fu_32528_p2 = (!p_shl647_cast_fu_32508_p3.read().is_01() || !p_shl648_cast_fu_32524_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl647_cast_fu_32508_p3.read()) - sc_bigint<14>(p_shl648_cast_fu_32524_p1.read()));
}

void ShuffleNetV2::thread_tmp_1963_fu_32787_p1() {
    tmp_1963_fu_32787_p1 = co178_reg_8150.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1964_fu_32803_p2() {
    tmp_1964_fu_32803_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co178_reg_8150.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1965_fu_32670_p2() {
    tmp_1965_fu_32670_p2 = (!tmp_1019_cast2_fu_32666_p1.read().is_01() || !tmp_2262_cast_reg_42988.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1019_cast2_fu_32666_p1.read()) + sc_bigint<13>(tmp_2262_cast_reg_42988.read()));
}

void ShuffleNetV2::thread_tmp_1966_fu_32675_p1() {
    tmp_1966_fu_32675_p1 = tmp_1965_fu_32670_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1967_fu_32695_p2() {
    tmp_1967_fu_32695_p2 = (!p_shl655_cast_fu_32679_p3.read().is_01() || !p_shl656_cast_fu_32687_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl655_cast_fu_32679_p3.read()) - sc_biguint<14>(p_shl656_cast_fu_32687_p3.read()));
}

void ShuffleNetV2::thread_tmp_1968_fu_32701_p2() {
    tmp_1968_fu_32701_p2 = (!tmp_1019_cast1_fu_32662_p1.read().is_01() || !tmp_2259_cast_reg_42983.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1019_cast1_fu_32662_p1.read()) + sc_bigint<12>(tmp_2259_cast_reg_42983.read()));
}

void ShuffleNetV2::thread_tmp_1969_fu_32706_p1() {
    tmp_1969_fu_32706_p1 = tmp_1968_fu_32701_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1970_fu_32726_p2() {
    tmp_1970_fu_32726_p2 = (!p_shl653_cast_fu_32710_p3.read().is_01() || !p_shl654_cast_fu_32718_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl653_cast_fu_32710_p3.read()) - sc_biguint<13>(p_shl654_cast_fu_32718_p3.read()));
}

void ShuffleNetV2::thread_tmp_1971_fu_32550_p2() {
    tmp_1971_fu_32550_p2 = (!tmp_1962_reg_42952.read().is_01() || !tmp_1020_cast_fu_32546_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1962_reg_42952.read()) + sc_biguint<14>(tmp_1020_cast_fu_32546_p1.read()));
}

void ShuffleNetV2::thread_tmp_1972_fu_32752_p2() {
    tmp_1972_fu_32752_p2 = (!tmp_1967_reg_43001.read().is_01() || !tmp_1024_cast_fu_32748_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1967_reg_43001.read()) + sc_biguint<14>(tmp_1024_cast_fu_32748_p1.read()));
}

void ShuffleNetV2::thread_tmp_1973_cast_fu_26471_p1() {
    tmp_1973_cast_fu_26471_p1 = esl_sext<18,17>(tmp_1707_fu_26465_p2.read());
}

void ShuffleNetV2::thread_tmp_1973_fu_32762_p2() {
    tmp_1973_fu_32762_p2 = (!tmp_1970_reg_43006.read().is_01() || !tmp_1024_cast1_fu_32744_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1970_reg_43006.read()) + sc_biguint<13>(tmp_1024_cast1_fu_32744_p1.read()));
}

void ShuffleNetV2::thread_tmp_1974_cast_fu_26480_p1() {
    tmp_1974_cast_fu_26480_p1 = esl_sext<33,18>(tmp_1708_fu_26475_p2.read());
}

void ShuffleNetV2::thread_tmp_1974_fu_33097_p1() {
    tmp_1974_fu_33097_p1 = k84_reg_8194.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1975_fu_32874_p1() {
    tmp_1975_fu_32874_p1 = i182_reg_8172.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1976_fu_32894_p2() {
    tmp_1976_fu_32894_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i182_reg_8172.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1977_fu_32910_p1() {
    tmp_1977_fu_32910_p1 = tmp_1030_fu_32904_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1978_fu_32998_p3() {
    tmp_1978_fu_32998_p3 = esl_concat<13,5>(tmp_1034_reg_43083.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1979_fu_33009_p3() {
    tmp_1979_fu_33009_p3 = esl_concat<13,3>(tmp_1034_reg_43083.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1980_cast_fu_26499_p1() {
    tmp_1980_cast_fu_26499_p1 = esl_sext<64,10>(tmp_1712_reg_40671.read());
}

void ShuffleNetV2::thread_tmp_1980_fu_33020_p2() {
    tmp_1980_fu_33020_p2 = (!p_shl659_cast_fu_33005_p1.read().is_01() || !p_shl660_cast_fu_33016_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl659_cast_fu_33005_p1.read()) - sc_biguint<19>(p_shl660_cast_fu_33016_p1.read()));
}

void ShuffleNetV2::thread_tmp_1981_fu_33030_p2() {
    tmp_1981_fu_33030_p2 = (!tmp_1023_cast_reg_43070.read().is_01() || !tmp_2287_cast_fu_33026_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_1023_cast_reg_43070.read()) + sc_bigint<20>(tmp_2287_cast_fu_33026_p1.read()));
}

void ShuffleNetV2::thread_tmp_1982_fu_32967_p3() {
    tmp_1982_fu_32967_p3 = esl_concat<5,7>(tmp_1035_fu_32957_p4.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1983_fu_32975_p3() {
    tmp_1983_fu_32975_p3 = esl_concat<5,5>(tmp_1035_fu_32957_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1984_fu_32987_p2() {
    tmp_1984_fu_32987_p2 = (!tmp_1982_fu_32967_p3.read().is_01() || !p_shl658_cast_fu_32983_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_1982_fu_32967_p3.read()) - sc_bigint<12>(p_shl658_cast_fu_32983_p1.read()));
}

void ShuffleNetV2::thread_tmp_1985_fu_32993_p2() {
    tmp_1985_fu_32993_p2 = (!tmp_1022_cast_reg_43065.read().is_01() || !tmp_1984_fu_32987_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1022_cast_reg_43065.read()) + sc_biguint<12>(tmp_1984_fu_32987_p2.read()));
}

void ShuffleNetV2::thread_tmp_1986_fu_33562_p1() {
    tmp_1986_fu_33562_p1 = co182_reg_8271.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1987_fu_33578_p2() {
    tmp_1987_fu_33578_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co182_reg_8271.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1988_fu_33466_p1() {
    tmp_1988_fu_33466_p1 = k86_reg_8260.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1989_cast_fu_26780_p1() {
    tmp_1989_cast_fu_26780_p1 = esl_sext<36,35>(tmp_1718_fu_26774_p2.read());
}

void ShuffleNetV2::thread_tmp_1989_fu_33249_p1() {
    tmp_1989_fu_33249_p1 = i187_reg_8238.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1990_fu_33310_p3() {
    tmp_1990_fu_33310_p3 = esl_concat<8,2>(tmp_1053_reg_43248.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1991_fu_33317_p1() {
    tmp_1991_fu_33317_p1 = esl_sext<34,10>(tmp_1990_fu_33310_p3.read());
}

void ShuffleNetV2::thread_tmp_1992_fu_33325_p2() {
    tmp_1992_fu_33325_p2 = (!p_shl664_cast_fu_33321_p1.read().is_01() || !tmp_1054_cast_fu_33306_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl664_cast_fu_33321_p1.read()) - sc_biguint<35>(tmp_1054_cast_fu_33306_p1.read()));
}

void ShuffleNetV2::thread_tmp_1993_cast_fu_26875_p1() {
    tmp_1993_cast_fu_26875_p1 = esl_zext<64,10>(tmp_1723_reg_40854.read());
}

void ShuffleNetV2::thread_tmp_1993_fu_33335_p2() {
    tmp_1993_fu_33335_p2 = (!tmp_2303_cast_fu_33331_p1.read().is_01() || !tmp_1036_cast_reg_43217.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_2303_cast_fu_33331_p1.read()) + sc_biguint<36>(tmp_1036_cast_reg_43217.read()));
}

void ShuffleNetV2::thread_tmp_1994_fu_33340_p1() {
    tmp_1994_fu_33340_p1 = tmp_1993_fu_33335_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1995_fu_33344_p1() {
    tmp_1995_fu_33344_p1 = tmp_1993_fu_33335_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_1996_cast_fu_26839_p1() {
    tmp_1996_cast_fu_26839_p1 = esl_sext<64,13>(tmp_1726_reg_40848.read());
}

void ShuffleNetV2::thread_tmp_1996_fu_33384_p2() {
    tmp_1996_fu_33384_p2 = (!p_shl663_cast_fu_33377_p3.read().is_01() || !tmp_1994_reg_43260.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl663_cast_fu_33377_p3.read()) - sc_biguint<11>(tmp_1994_reg_43260.read()));
}

void ShuffleNetV2::thread_tmp_1997_fu_33389_p2() {
    tmp_1997_fu_33389_p2 = (!tmp_1996_fu_33384_p2.read().is_01() || !tmp_1048_cast1_reg_43235.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1996_fu_33384_p2.read()) + sc_biguint<11>(tmp_1048_cast1_reg_43235.read()));
}

void ShuffleNetV2::thread_tmp_1998_fu_33351_p3() {
    tmp_1998_fu_33351_p3 = esl_concat<11,2>(tmp_1055_reg_43254.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1999_fu_33362_p2() {
    tmp_1999_fu_33362_p2 = (!p_shl662_cast_fu_33358_p1.read().is_01() || !tmp_1056_cast1_fu_33348_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl662_cast_fu_33358_p1.read()) - sc_biguint<14>(tmp_1056_cast1_fu_33348_p1.read()));
}

void ShuffleNetV2::thread_tmp_2000_fu_33372_p2() {
    tmp_2000_fu_33372_p2 = (!tmp_2309_cast_fu_33368_p1.read().is_01() || !tmp_1036_cast1_reg_43212.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_2309_cast_fu_33368_p1.read()) + sc_biguint<15>(tmp_1036_cast1_reg_43212.read()));
}

void ShuffleNetV2::thread_tmp_2001_fu_33397_p3() {
    tmp_2001_fu_33397_p3 = esl_concat<15,2>(tmp_2000_reg_43270.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2002_fu_33408_p2() {
    tmp_2002_fu_33408_p2 = (!p_shl276_fu_33404_p1.read().is_01() || !tmp_2310_cast_fu_33394_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl276_fu_33404_p1.read()) - sc_bigint<64>(tmp_2310_cast_fu_33394_p1.read()));
}

void ShuffleNetV2::thread_tmp_2003_fu_33414_p2() {
    tmp_2003_fu_33414_p2 = (!tmp_2002_fu_33408_p2.read().is_01() || !tmp_1048_reg_43230.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_2002_fu_33408_p2.read()) + sc_biguint<64>(tmp_1048_reg_43230.read()));
}

void ShuffleNetV2::thread_tmp_2004_fu_33964_p3() {
    tmp_2004_fu_33964_p3 = esl_concat<7,3>(co184_reg_8326.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2005_fu_33976_p3() {
    tmp_2005_fu_33976_p3 = esl_concat<7,1>(co184_reg_8326.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2006_fu_33988_p2() {
    tmp_2006_fu_33988_p2 = (!p_shl669_cast_fu_33972_p1.read().is_01() || !p_shl670_cast_fu_33984_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl669_cast_fu_33972_p1.read()) - sc_biguint<11>(p_shl670_cast_fu_33984_p1.read()));
}

void ShuffleNetV2::thread_tmp_2007_fu_33872_p1() {
    tmp_2007_fu_33872_p1 = k88_reg_8315.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_2008_fu_33649_p1() {
    tmp_2008_fu_33649_p1 = i189_reg_8293.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_2009_fu_33669_p2() {
    tmp_2009_fu_33669_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i189_reg_8293.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_2010_fu_33685_p1() {
    tmp_2010_fu_33685_p1 = tmp_1062_fu_33679_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_2011_cast_fu_27280_p1() {
    tmp_2011_cast_fu_27280_p1 = esl_sext<19,18>(tmp_1738_fu_27274_p2.read());
}

void ShuffleNetV2::thread_tmp_2011_fu_33773_p3() {
    tmp_2011_fu_33773_p3 = esl_concat<13,5>(tmp_1067_reg_43383.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_2012_cast_fu_27289_p1() {
    tmp_2012_cast_fu_27289_p1 = esl_sext<33,19>(tmp_1739_fu_27284_p2.read());
}

void ShuffleNetV2::thread_tmp_2012_fu_33784_p3() {
    tmp_2012_fu_33784_p3 = esl_concat<13,3>(tmp_1067_reg_43383.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2013_fu_33795_p2() {
    tmp_2013_fu_33795_p2 = (!p_shl667_cast_fu_33780_p1.read().is_01() || !p_shl668_cast_fu_33791_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl667_cast_fu_33780_p1.read()) - sc_biguint<19>(p_shl668_cast_fu_33791_p1.read()));
}

void ShuffleNetV2::thread_tmp_2014_fu_33805_p2() {
    tmp_2014_fu_33805_p2 = (!tmp_1051_cast1_reg_43370.read().is_01() || !tmp_2324_cast_fu_33801_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_1051_cast1_reg_43370.read()) + sc_bigint<20>(tmp_2324_cast_fu_33801_p1.read()));
}

void ShuffleNetV2::thread_tmp_2015_fu_33742_p3() {
    tmp_2015_fu_33742_p3 = esl_concat<5,7>(tmp_1069_fu_33732_p4.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_2016_fu_33750_p3() {
    tmp_2016_fu_33750_p3 = esl_concat<5,5>(tmp_1069_fu_33732_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_2017_fu_33762_p2() {
    tmp_2017_fu_33762_p2 = (!tmp_2015_fu_33742_p3.read().is_01() || !p_shl666_cast_fu_33758_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_2015_fu_33742_p3.read()) - sc_bigint<12>(p_shl666_cast_fu_33758_p1.read()));
}

void ShuffleNetV2::thread_tmp_2018_cast_fu_27308_p1() {
    tmp_2018_cast_fu_27308_p1 = esl_sext<64,10>(tmp_1743_reg_40971.read());
}

void ShuffleNetV2::thread_tmp_2018_fu_33768_p2() {
    tmp_2018_fu_33768_p2 = (!tmp_1050_cast_reg_43365.read().is_01() || !tmp_2017_fu_33762_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1050_cast_reg_43365.read()) + sc_biguint<12>(tmp_2017_fu_33762_p2.read()));
}

void ShuffleNetV2::thread_tmp_2019_fu_34087_p3() {
    tmp_2019_fu_34087_p3 = esl_concat<8,2>(ci82_reg_8359.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2020_fu_34099_p3() {
    tmp_2020_fu_34099_p3 = esl_concat<8,3>(ci82_reg_8359.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_2021_fu_34111_p3() {
    tmp_2021_fu_34111_p3 = esl_concat<8,1>(ci82_reg_8359.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2022_fu_34123_p2() {
    tmp_2022_fu_34123_p2 = (!p_shl673_cast_fu_34107_p1.read().is_01() || !p_shl674_cast_fu_34119_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl673_cast_fu_34107_p1.read()) - sc_biguint<12>(p_shl674_cast_fu_34119_p1.read()));
}

void ShuffleNetV2::thread_tmp_2023_fu_34014_p2() {
    tmp_2023_fu_34014_p2 = (!tmp_2316_cast_reg_43494.read().is_01() || !tmp_1070_cast_fu_34010_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_2316_cast_reg_43494.read()) + sc_biguint<12>(tmp_1070_cast_fu_34010_p1.read()));
}

void ShuffleNetV2::thread_tmp_2024_fu_34019_p1() {
    tmp_2024_fu_34019_p1 = tmp_2023_fu_34014_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2025_cast_fu_27549_p1() {
    tmp_2025_cast_fu_27549_p1 = esl_zext<64,15>(tmp_1750_fu_27544_p2.read());
}

void ShuffleNetV2::thread_tmp_2025_fu_34031_p3() {
    tmp_2025_fu_34031_p3 = esl_concat<12,1>(tmp_2023_fu_34014_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_2026_fu_34043_p2() {
    tmp_2026_fu_34043_p2 = (!p_shl671_cast_fu_34023_p3.read().is_01() || !p_shl672_cast_fu_34039_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl671_cast_fu_34023_p3.read()) - sc_bigint<14>(p_shl672_cast_fu_34039_p1.read()));
}

void ShuffleNetV2::thread_tmp_2027_fu_34149_p2() {
    tmp_2027_fu_34149_p2 = (!tmp_1071_cast_fu_34145_p1.read().is_01() || !tmp_2333_cast_reg_43538.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1071_cast_fu_34145_p1.read()) + sc_biguint<11>(tmp_2333_cast_reg_43538.read()));
}

void ShuffleNetV2::thread_tmp_2028_fu_34166_p2() {
    tmp_2028_fu_34166_p2 = (!tmp_1072_cast_fu_34162_p1.read().is_01() || !tmp_2336_cast_reg_43543.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1072_cast_fu_34162_p1.read()) + sc_bigint<13>(tmp_2336_cast_reg_43543.read()));
}

void ShuffleNetV2::thread_tmp_2029_fu_34171_p1() {
    tmp_2029_fu_34171_p1 = tmp_2028_fu_34166_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_2030_fu_34191_p2() {
    tmp_2030_fu_34191_p2 = (!p_shl675_cast_fu_34175_p3.read().is_01() || !p_shl676_cast_fu_34183_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl675_cast_fu_34175_p3.read()) - sc_biguint<14>(p_shl676_cast_fu_34183_p3.read()));
}

void ShuffleNetV2::thread_tmp_2031_fu_34065_p2() {
    tmp_2031_fu_34065_p2 = (!tmp_2026_reg_43507.read().is_01() || !tmp_1073_cast1_fu_34061_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_2026_reg_43507.read()) + sc_biguint<14>(tmp_1073_cast1_fu_34061_p1.read()));
}

void ShuffleNetV2::thread_tmp_2032_fu_34213_p2() {
    tmp_2032_fu_34213_p2 = (!tmp_2343_cast_reg_43556.read().is_01() || !tmp_1074_cast1_fu_34209_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_2343_cast_reg_43556.read()) + sc_biguint<13>(tmp_1074_cast1_fu_34209_p1.read()));
}

void ShuffleNetV2::thread_tmp_2033_cast_fu_27809_p1() {
    tmp_2033_cast_fu_27809_p1 = esl_sext<19,18>(tmp_1757_fu_27803_p2.read());
}

void ShuffleNetV2::thread_tmp_2033_fu_34222_p2() {
    tmp_2033_fu_34222_p2 = (!tmp_2030_reg_43561.read().is_01() || !tmp_1075_cast_fu_34218_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_2030_reg_43561.read()) + sc_biguint<14>(tmp_1075_cast_fu_34218_p1.read()));
}

void ShuffleNetV2::thread_tmp_2034_cast_fu_27818_p1() {
    tmp_2034_cast_fu_27818_p1 = esl_sext<33,19>(tmp_1758_fu_27813_p2.read());
}

void ShuffleNetV2::thread_tmp_2040_cast_fu_27837_p1() {
    tmp_2040_cast_fu_27837_p1 = esl_sext<64,12>(tmp_1762_reg_41172.read());
}

void ShuffleNetV2::thread_tmp_2049_cast_fu_28118_p1() {
    tmp_2049_cast_fu_28118_p1 = esl_sext<36,35>(tmp_1769_fu_28112_p2.read());
}

void ShuffleNetV2::thread_tmp_2053_cast_fu_28213_p1() {
    tmp_2053_cast_fu_28213_p1 = esl_zext<64,11>(tmp_1774_reg_41355.read());
}

void ShuffleNetV2::thread_tmp_2056_cast_fu_28177_p1() {
    tmp_2056_cast_fu_28177_p1 = esl_sext<64,13>(tmp_1777_reg_41349.read());
}

void ShuffleNetV2::thread_tmp_2067_cast_fu_28588_p1() {
    tmp_2067_cast_fu_28588_p1 = esl_sext<19,18>(tmp_1787_fu_28582_p2.read());
}

void ShuffleNetV2::thread_tmp_2068_cast_fu_28597_p1() {
    tmp_2068_cast_fu_28597_p1 = esl_sext<33,19>(tmp_1788_fu_28592_p2.read());
}

void ShuffleNetV2::thread_tmp_2074_cast_fu_28616_p1() {
    tmp_2074_cast_fu_28616_p1 = esl_sext<64,12>(tmp_1792_reg_41472.read());
}

void ShuffleNetV2::thread_tmp_2083_cast_fu_28901_p1() {
    tmp_2083_cast_fu_28901_p1 = esl_sext<36,35>(tmp_1799_fu_28895_p2.read());
}

void ShuffleNetV2::thread_tmp_2087_cast_fu_28996_p1() {
    tmp_2087_cast_fu_28996_p1 = esl_zext<64,11>(tmp_1804_reg_41655.read());
}

void ShuffleNetV2::thread_tmp_2090_cast_fu_28960_p1() {
    tmp_2090_cast_fu_28960_p1 = esl_sext<64,13>(tmp_1807_reg_41649.read());
}

void ShuffleNetV2::thread_tmp_2096_cast_fu_29564_p1() {
    tmp_2096_cast_fu_29564_p1 = esl_sext<12,11>(tmp_1813_fu_29558_p2.read());
}

void ShuffleNetV2::thread_tmp_2099_cast_fu_29604_p1() {
    tmp_2099_cast_fu_29604_p1 = esl_sext<13,12>(tmp_1816_fu_29598_p2.read());
}

void ShuffleNetV2::thread_tmp_2107_cast_fu_29367_p1() {
    tmp_2107_cast_fu_29367_p1 = esl_sext<19,18>(tmp_1823_fu_29361_p2.read());
}

void ShuffleNetV2::thread_tmp_2108_cast_fu_29376_p1() {
    tmp_2108_cast_fu_29376_p1 = esl_sext<33,19>(tmp_1824_fu_29371_p2.read());
}

void ShuffleNetV2::thread_tmp_2114_cast_fu_29395_p1() {
    tmp_2114_cast_fu_29395_p1 = esl_sext<64,12>(tmp_1828_reg_41772.read());
}

void ShuffleNetV2::thread_tmp_2125_cast_fu_29725_p1() {
    tmp_2125_cast_fu_29725_p1 = esl_zext<64,13>(tmp_1837_reg_41909.read());
}

void ShuffleNetV2::thread_tmp_2126_cast_fu_29720_p1() {
    tmp_2126_cast_fu_29720_p1 = esl_zext<64,14>(tmp_1838_fu_29715_p2.read());
}

void ShuffleNetV2::thread_tmp_2134_cast_fu_29984_p1() {
    tmp_2134_cast_fu_29984_p1 = esl_sext<19,18>(tmp_1845_fu_29978_p2.read());
}

void ShuffleNetV2::thread_tmp_2135_cast_fu_29993_p1() {
    tmp_2135_cast_fu_29993_p1 = esl_sext<33,19>(tmp_1846_fu_29988_p2.read());
}

void ShuffleNetV2::thread_tmp_2141_cast_fu_30012_p1() {
    tmp_2141_cast_fu_30012_p1 = esl_sext<64,12>(tmp_1850_reg_41983.read());
}

void ShuffleNetV2::thread_tmp_2150_cast_fu_30289_p1() {
    tmp_2150_cast_fu_30289_p1 = esl_sext<36,35>(tmp_1857_fu_30283_p2.read());
}

void ShuffleNetV2::thread_tmp_2154_cast_fu_30384_p1() {
    tmp_2154_cast_fu_30384_p1 = esl_zext<64,11>(tmp_1862_reg_42166.read());
}

void ShuffleNetV2::thread_tmp_2157_cast_fu_30348_p1() {
    tmp_2157_cast_fu_30348_p1 = esl_sext<64,13>(tmp_1865_reg_42160.read());
}

void ShuffleNetV2::thread_tmp_2163_cast_fu_30956_p1() {
    tmp_2163_cast_fu_30956_p1 = esl_sext<12,11>(tmp_1871_fu_30950_p2.read());
}

void ShuffleNetV2::thread_tmp_2173_cast_fu_30763_p1() {
    tmp_2173_cast_fu_30763_p1 = esl_sext<19,18>(tmp_1880_fu_30757_p2.read());
}

void ShuffleNetV2::thread_tmp_2174_cast_fu_30772_p1() {
    tmp_2174_cast_fu_30772_p1 = esl_sext<33,19>(tmp_1881_fu_30767_p2.read());
}

void ShuffleNetV2::thread_tmp_2180_cast_fu_30791_p1() {
    tmp_2180_cast_fu_30791_p1 = esl_sext<64,12>(tmp_1885_reg_42283.read());
}

void ShuffleNetV2::thread_tmp_2183_cast_fu_31083_p1() {
    tmp_2183_cast_fu_31083_p1 = esl_sext<12,11>(tmp_1888_fu_31077_p2.read());
}

void ShuffleNetV2::thread_tmp_2186_cast_fu_31123_p1() {
    tmp_2186_cast_fu_31123_p1 = esl_sext<13,12>(tmp_1891_fu_31117_p2.read());
}

void ShuffleNetV2::thread_tmp_2201_cast_fu_31032_p1() {
    tmp_2201_cast_fu_31032_p1 = esl_zext<64,14>(tmp_1904_fu_31027_p2.read());
}

void ShuffleNetV2::thread_tmp_2202_cast_fu_31244_p1() {
    tmp_2202_cast_fu_31244_p1 = esl_zext<64,13>(tmp_1905_reg_42464.read());
}

void ShuffleNetV2::thread_tmp_2203_cast_fu_31239_p1() {
    tmp_2203_cast_fu_31239_p1 = esl_zext<64,14>(tmp_1906_fu_31234_p2.read());
}

void ShuffleNetV2::thread_tmp_2211_cast_fu_31503_p1() {
    tmp_2211_cast_fu_31503_p1 = esl_sext<20,19>(tmp_1913_fu_31497_p2.read());
}

void ShuffleNetV2::thread_tmp_2212_cast_fu_31512_p1() {
    tmp_2212_cast_fu_31512_p1 = esl_sext<33,20>(tmp_1914_fu_31507_p2.read());
}

void ShuffleNetV2::thread_tmp_2218_cast_fu_31531_p1() {
    tmp_2218_cast_fu_31531_p1 = esl_sext<64,12>(tmp_1918_reg_42538.read());
}

void ShuffleNetV2::thread_tmp_2227_cast_fu_31808_p1() {
    tmp_2227_cast_fu_31808_p1 = esl_sext<36,35>(tmp_1925_fu_31802_p2.read());
}

void ShuffleNetV2::thread_tmp_2231_cast_fu_31915_p1() {
    tmp_2231_cast_fu_31915_p1 = esl_zext<64,11>(tmp_1930_reg_42721.read());
}

void ShuffleNetV2::thread_tmp_2234_cast_fu_31853_p1() {
    tmp_2234_cast_fu_31853_p1 = esl_sext<14,13>(tmp_1933_fu_31847_p2.read());
}

void ShuffleNetV2::thread_tmp_2235_cast_fu_31879_p1() {
    tmp_2235_cast_fu_31879_p1 = esl_sext<64,14>(tmp_1934_reg_42715.read());
}

void ShuffleNetV2::thread_tmp_2241_cast_fu_32479_p1() {
    tmp_2241_cast_fu_32479_p1 = esl_sext<12,11>(tmp_1940_fu_32473_p2.read());
}

void ShuffleNetV2::thread_tmp_2249_cast_fu_32286_p1() {
    tmp_2249_cast_fu_32286_p1 = esl_sext<20,19>(tmp_1947_fu_32280_p2.read());
}

void ShuffleNetV2::thread_tmp_2250_cast_fu_32295_p1() {
    tmp_2250_cast_fu_32295_p1 = esl_sext<33,20>(tmp_1948_fu_32290_p2.read());
}

void ShuffleNetV2::thread_tmp_2256_cast_fu_32314_p1() {
    tmp_2256_cast_fu_32314_p1 = esl_sext<64,12>(tmp_1952_reg_42838.read());
}

void ShuffleNetV2::thread_tmp_2259_cast_fu_32606_p1() {
    tmp_2259_cast_fu_32606_p1 = esl_sext<12,11>(tmp_1955_fu_32600_p2.read());
}

void ShuffleNetV2::thread_tmp_2262_cast_fu_32646_p1() {
    tmp_2262_cast_fu_32646_p1 = esl_sext<13,12>(tmp_1958_fu_32640_p2.read());
}

void ShuffleNetV2::thread_tmp_2277_cast_fu_32555_p1() {
    tmp_2277_cast_fu_32555_p1 = esl_zext<64,14>(tmp_1971_fu_32550_p2.read());
}

void ShuffleNetV2::thread_tmp_2278_cast_fu_32757_p1() {
    tmp_2278_cast_fu_32757_p1 = esl_zext<64,14>(tmp_1972_fu_32752_p2.read());
}

void ShuffleNetV2::thread_tmp_2279_cast_fu_32767_p1() {
    tmp_2279_cast_fu_32767_p1 = esl_zext<64,13>(tmp_1973_reg_43024.read());
}

void ShuffleNetV2::thread_tmp_2287_cast_fu_33026_p1() {
    tmp_2287_cast_fu_33026_p1 = esl_sext<20,19>(tmp_1980_fu_33020_p2.read());
}

void ShuffleNetV2::thread_tmp_2288_cast_fu_33035_p1() {
    tmp_2288_cast_fu_33035_p1 = esl_sext<33,20>(tmp_1981_fu_33030_p2.read());
}

void ShuffleNetV2::thread_tmp_2294_cast_fu_33054_p1() {
    tmp_2294_cast_fu_33054_p1 = esl_sext<64,12>(tmp_1985_reg_43093.read());
}

void ShuffleNetV2::thread_tmp_2303_cast_fu_33331_p1() {
    tmp_2303_cast_fu_33331_p1 = esl_sext<36,35>(tmp_1992_fu_33325_p2.read());
}

void ShuffleNetV2::thread_tmp_2307_cast_fu_33430_p1() {
    tmp_2307_cast_fu_33430_p1 = esl_zext<64,11>(tmp_1997_reg_43276.read());
}

void ShuffleNetV2::thread_tmp_2309_cast_fu_33368_p1() {
    tmp_2309_cast_fu_33368_p1 = esl_sext<15,14>(tmp_1999_fu_33362_p2.read());
}

void ShuffleNetV2::thread_tmp_2310_cast_fu_33394_p1() {
    tmp_2310_cast_fu_33394_p1 = esl_sext<64,15>(tmp_2000_reg_43270.read());
}

void ShuffleNetV2::thread_tmp_2316_cast_fu_33994_p1() {
    tmp_2316_cast_fu_33994_p1 = esl_sext<12,11>(tmp_2006_fu_33988_p2.read());
}

void ShuffleNetV2::thread_tmp_2324_cast_fu_33801_p1() {
    tmp_2324_cast_fu_33801_p1 = esl_sext<20,19>(tmp_2013_fu_33795_p2.read());
}

void ShuffleNetV2::thread_tmp_2325_cast_fu_33810_p1() {
    tmp_2325_cast_fu_33810_p1 = esl_sext<33,20>(tmp_2014_fu_33805_p2.read());
}

void ShuffleNetV2::thread_tmp_2331_cast_fu_33829_p1() {
    tmp_2331_cast_fu_33829_p1 = esl_sext<64,12>(tmp_2018_reg_43393.read());
}

void ShuffleNetV2::thread_tmp_2333_cast_fu_34095_p1() {
    tmp_2333_cast_fu_34095_p1 = esl_zext<11,10>(tmp_2019_fu_34087_p3.read());
}

void ShuffleNetV2::thread_tmp_2336_cast_fu_34129_p1() {
    tmp_2336_cast_fu_34129_p1 = esl_sext<13,12>(tmp_2022_fu_34123_p2.read());
}

void ShuffleNetV2::thread_tmp_2343_cast_fu_34154_p3() {
    tmp_2343_cast_fu_34154_p3 = esl_concat<11,2>(tmp_2027_fu_34149_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2348_cast_fu_34070_p1() {
    tmp_2348_cast_fu_34070_p1 = esl_zext<64,14>(tmp_2031_fu_34065_p2.read());
}

void ShuffleNetV2::thread_tmp_2349_cast_fu_34232_p1() {
    tmp_2349_cast_fu_34232_p1 = esl_zext<64,13>(tmp_2032_reg_43574.read());
}

void ShuffleNetV2::thread_tmp_2350_cast_fu_34227_p1() {
    tmp_2350_cast_fu_34227_p1 = esl_zext<64,14>(tmp_2033_fu_34222_p2.read());
}

void ShuffleNetV2::thread_tmp_286_fu_9278_p1() {
    tmp_286_fu_9278_p1 = esl_zext<64,4>(i2_reg_4320.read());
}

void ShuffleNetV2::thread_tmp_289_cast_fu_9337_p1() {
    tmp_289_cast_fu_9337_p1 = esl_zext<8,6>(w_37_fu_9331_p2.read());
}

void ShuffleNetV2::thread_tmp_290_cast_fu_9346_p1() {
    tmp_290_cast_fu_9346_p1 = esl_zext<8,6>(w_reg_4343.read());
}

void ShuffleNetV2::thread_tmp_291_fu_9592_p1() {
    tmp_291_fu_9592_p1 = esl_zext<64,5>(i4_reg_4388.read());
}

void ShuffleNetV2::thread_tmp_294_cast_fu_9559_p1() {
    tmp_294_cast_fu_9559_p1 = esl_zext<8,5>(ci3_reg_4377.read());
}

void ShuffleNetV2::thread_tmp_295_cast_fu_9414_p1() {
    tmp_295_cast_fu_9414_p1 = esl_zext<13,6>(h_32_fu_9408_p2.read());
}

void ShuffleNetV2::thread_tmp_297_cast_fu_9609_p1() {
    tmp_297_cast_fu_9609_p1 = esl_zext<8,5>(co5_reg_4400.read());
}

void ShuffleNetV2::thread_tmp_298_fu_9737_p1() {
    tmp_298_fu_9737_p1 = esl_zext<64,5>(i8_reg_4433.read());
}

void ShuffleNetV2::thread_tmp_301_cast_fu_9662_p1() {
    tmp_301_cast_fu_9662_p1 = esl_zext<9,2>(w6_reg_4411.read());
}

void ShuffleNetV2::thread_tmp_302_fu_9758_p2() {
    tmp_302_fu_9758_p2 = (!ap_const_lv6_18.is_01() || !co9_cast_fu_9742_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_18) + sc_biguint<6>(co9_cast_fu_9742_p1.read()));
}

void ShuffleNetV2::thread_tmp_303_fu_9716_p1() {
    tmp_303_fu_9716_p1 = esl_zext<64,2>(h7_reg_4422.read());
}

void ShuffleNetV2::thread_tmp_304_fu_9917_p1() {
    tmp_304_fu_9917_p1 = esl_zext<64,5>(i11_reg_4468.read());
}

void ShuffleNetV2::thread_tmp_307_cast_fu_9884_p1() {
    tmp_307_cast_fu_9884_p1 = esl_zext<8,5>(ci10_reg_4457.read());
}

void ShuffleNetV2::thread_tmp_308_cast_fu_9938_p1() {
    tmp_308_cast_fu_9938_p1 = esl_zext<8,5>(co12_reg_4480.read());
}

void ShuffleNetV2::thread_tmp_309_fu_9964_p2() {
    tmp_309_fu_9964_p2 = (!co12_cast_fu_9922_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co12_cast_fu_9922_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_310_cast_fu_9970_p1() {
    tmp_310_cast_fu_9970_p1 = esl_zext<9,6>(tmp_309_fu_9964_p2.read());
}

void ShuffleNetV2::thread_tmp_311_fu_10129_p1() {
    tmp_311_fu_10129_p1 = esl_zext<64,5>(tmp_740_reg_4513.read());
}

void ShuffleNetV2::thread_tmp_314_cast_fu_10004_p1() {
    tmp_314_cast_fu_10004_p1 = esl_zext<9,2>(w13_reg_4491.read());
}

void ShuffleNetV2::thread_tmp_315_fu_10150_p2() {
    tmp_315_fu_10150_p2 = (!ap_const_lv7_30.is_01() || !co16_cast_fu_10134_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_30) + sc_biguint<7>(co16_cast_fu_10134_p1.read()));
}

void ShuffleNetV2::thread_tmp_316_cast_fu_10073_p1() {
    tmp_316_cast_fu_10073_p1 = esl_zext<9,2>(h14_reg_4502.read());
}

void ShuffleNetV2::thread_tmp_317_fu_10309_p1() {
    tmp_317_fu_10309_p1 = esl_zext<64,5>(i16_reg_4548.read());
}

void ShuffleNetV2::thread_tmp_320_cast_fu_10276_p1() {
    tmp_320_cast_fu_10276_p1 = esl_zext<8,5>(ci13_reg_4537.read());
}

void ShuffleNetV2::thread_tmp_321_fu_10360_p2() {
    tmp_321_fu_10360_p2 = (!co19_cast_fu_10314_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co19_cast_fu_10314_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_322_fu_10533_p2() {
    tmp_322_fu_10533_p2 = (!ap_const_lv7_48.is_01() || !co22_cast_fu_10517_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_48) + sc_biguint<7>(co22_cast_fu_10517_p1.read()));
}

void ShuffleNetV2::thread_tmp_323_cast1_fu_10408_p1() {
    tmp_323_cast1_fu_10408_p1 = esl_zext<10,5>(h_35_fu_10402_p2.read());
}

void ShuffleNetV2::thread_tmp_323_cast_fu_10412_p1() {
    tmp_323_cast_fu_10412_p1 = esl_zext<11,5>(h_35_fu_10402_p2.read());
}

void ShuffleNetV2::thread_tmp_324_fu_10692_p1() {
    tmp_324_fu_10692_p1 = esl_zext<64,5>(i18_reg_4616.read());
}

void ShuffleNetV2::thread_tmp_327_cast_fu_10659_p1() {
    tmp_327_cast_fu_10659_p1 = esl_zext<8,5>(ci15_reg_4605.read());
}

void ShuffleNetV2::thread_tmp_328_cast1_fu_10490_p1() {
    tmp_328_cast1_fu_10490_p1 = esl_zext<14,5>(w_40_fu_10484_p2.read());
}

void ShuffleNetV2::thread_tmp_328_cast_fu_10494_p1() {
    tmp_328_cast_fu_10494_p1 = esl_zext<15,5>(w_40_fu_10484_p2.read());
}

void ShuffleNetV2::thread_tmp_329_cast_fu_10713_p1() {
    tmp_329_cast_fu_10713_p1 = esl_zext<8,5>(co25_reg_4628.read());
}

void ShuffleNetV2::thread_tmp_330_fu_10739_p2() {
    tmp_330_fu_10739_p2 = (!co25_cast_fu_10697_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co25_cast_fu_10697_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_331_cast_fu_10745_p1() {
    tmp_331_cast_fu_10745_p1 = esl_zext<10,7>(tmp_330_fu_10739_p2.read());
}

void ShuffleNetV2::thread_tmp_332_fu_10892_p1() {
    tmp_332_fu_10892_p1 = esl_zext<64,5>(i20_reg_4661.read());
}

void ShuffleNetV2::thread_tmp_335_cast1_fu_10794_p1() {
    tmp_335_cast1_fu_10794_p1 = esl_zext<9,2>(w26_reg_4639.read());
}

void ShuffleNetV2::thread_tmp_335_cast_fu_10798_p1() {
    tmp_335_cast_fu_10798_p1 = esl_zext<10,2>(w26_reg_4639.read());
}

void ShuffleNetV2::thread_tmp_336_cast_fu_10867_p1() {
    tmp_336_cast_fu_10867_p1 = esl_zext<9,2>(h27_reg_4650.read());
}

void ShuffleNetV2::thread_tmp_337_fu_11090_p1() {
    tmp_337_fu_11090_p1 = esl_zext<64,5>(tmp_933_reg_4696.read());
}

void ShuffleNetV2::thread_tmp_340_cast_fu_11026_p1() {
    tmp_340_cast_fu_11026_p1 = esl_zext<8,5>(ci17_reg_4685.read());
}

void ShuffleNetV2::thread_tmp_341_fu_11260_p2() {
    tmp_341_fu_11260_p2 = (!co35_cast_fu_11214_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co35_cast_fu_11214_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_342_cast_fu_11149_p1() {
    tmp_342_cast_fu_11149_p1 = esl_zext<10,5>(h_37_fu_11143_p2.read());
}

void ShuffleNetV2::thread_tmp_343_fu_11433_p2() {
    tmp_343_fu_11433_p2 = (!ap_const_lv8_78.is_01() || !co38_cast_fu_11417_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_78) + sc_biguint<8>(co38_cast_fu_11417_p1.read()));
}

void ShuffleNetV2::thread_tmp_344_cast1_fu_11308_p1() {
    tmp_344_cast1_fu_11308_p1 = esl_zext<10,5>(h_38_fu_11302_p2.read());
}

void ShuffleNetV2::thread_tmp_344_cast_fu_11312_p1() {
    tmp_344_cast_fu_11312_p1 = esl_zext<11,5>(h_38_fu_11302_p2.read());
}

void ShuffleNetV2::thread_tmp_345_cast_fu_11200_p1() {
    tmp_345_cast_fu_11200_p1 = esl_zext<15,5>(w_42_fu_11194_p2.read());
}

void ShuffleNetV2::thread_tmp_346_fu_11592_p1() {
    tmp_346_fu_11592_p1 = esl_zext<64,5>(i23_reg_4797.read());
}

void ShuffleNetV2::thread_tmp_349_cast_fu_11559_p1() {
    tmp_349_cast_fu_11559_p1 = esl_zext<8,5>(ci19_reg_4786.read());
}

void ShuffleNetV2::thread_tmp_350_cast1_fu_11390_p1() {
    tmp_350_cast1_fu_11390_p1 = esl_zext<14,5>(w_43_fu_11384_p2.read());
}

void ShuffleNetV2::thread_tmp_350_cast_fu_11394_p1() {
    tmp_350_cast_fu_11394_p1 = esl_zext<15,5>(w_43_fu_11384_p2.read());
}

void ShuffleNetV2::thread_tmp_351_cast_fu_11613_p1() {
    tmp_351_cast_fu_11613_p1 = esl_zext<8,5>(co41_reg_4809.read());
}

void ShuffleNetV2::thread_tmp_352_fu_11639_p2() {
    tmp_352_fu_11639_p2 = (!co41_cast_fu_11597_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co41_cast_fu_11597_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp_353_cast_fu_11645_p1() {
    tmp_353_cast_fu_11645_p1 = esl_zext<10,7>(tmp_352_fu_11639_p2.read());
}

void ShuffleNetV2::thread_tmp_354_fu_11792_p1() {
    tmp_354_fu_11792_p1 = esl_zext<64,5>(i25_reg_4842.read());
}

void ShuffleNetV2::thread_tmp_357_cast1_fu_11694_p1() {
    tmp_357_cast1_fu_11694_p1 = esl_zext<9,2>(w42_reg_4820.read());
}

void ShuffleNetV2::thread_tmp_357_cast_fu_11698_p1() {
    tmp_357_cast_fu_11698_p1 = esl_zext<10,2>(w42_reg_4820.read());
}

void ShuffleNetV2::thread_tmp_358_fu_11813_p2() {
    tmp_358_fu_11813_p2 = (!ap_const_lv8_90.is_01() || !co43_cast_fu_11797_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_90) + sc_biguint<8>(co43_cast_fu_11797_p1.read()));
}

void ShuffleNetV2::thread_tmp_359_cast_fu_11767_p1() {
    tmp_359_cast_fu_11767_p1 = esl_zext<9,2>(h39_reg_4831.read());
}

void ShuffleNetV2::thread_tmp_360_fu_11972_p1() {
    tmp_360_fu_11972_p1 = esl_zext<64,5>(i27_reg_4877.read());
}

void ShuffleNetV2::thread_tmp_363_cast_fu_11939_p1() {
    tmp_363_cast_fu_11939_p1 = esl_zext<8,5>(ci21_reg_4866.read());
}

void ShuffleNetV2::thread_tmp_364_fu_12142_p2() {
    tmp_364_fu_12142_p2 = (!co46_cast_fu_12096_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co46_cast_fu_12096_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_365_cast_fu_12031_p1() {
    tmp_365_cast_fu_12031_p1 = esl_zext<10,5>(h_42_fu_12025_p2.read());
}

void ShuffleNetV2::thread_tmp_366_fu_12315_p2() {
    tmp_366_fu_12315_p2 = (!ap_const_lv8_A8.is_01() || !co48_cast_fu_12299_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_biguint<8>(co48_cast_fu_12299_p1.read()));
}

void ShuffleNetV2::thread_tmp_367_cast1_fu_12190_p1() {
    tmp_367_cast1_fu_12190_p1 = esl_zext<10,5>(h_44_fu_12184_p2.read());
}

void ShuffleNetV2::thread_tmp_367_cast_fu_12194_p1() {
    tmp_367_cast_fu_12194_p1 = esl_zext<11,5>(h_44_fu_12184_p2.read());
}

void ShuffleNetV2::thread_tmp_368_cast_fu_12082_p1() {
    tmp_368_cast_fu_12082_p1 = esl_zext<15,5>(w_46_fu_12076_p2.read());
}

void ShuffleNetV2::thread_tmp_369_fu_12486_p1() {
    tmp_369_fu_12486_p1 = esl_zext<64,5>(tmp_1113_reg_4978.read());
}

void ShuffleNetV2::thread_tmp_372_cast_fu_12426_p1() {
    tmp_372_cast_fu_12426_p1 = esl_zext<8,5>(ci23_reg_4967.read());
}

void ShuffleNetV2::thread_tmp_373_cast1_fu_12272_p1() {
    tmp_373_cast1_fu_12272_p1 = esl_zext<14,5>(w_48_fu_12266_p2.read());
}

void ShuffleNetV2::thread_tmp_373_cast_fu_12276_p1() {
    tmp_373_cast_fu_12276_p1 = esl_zext<15,5>(w_48_fu_12266_p2.read());
}

void ShuffleNetV2::thread_tmp_374_cast_fu_12503_p1() {
    tmp_374_cast_fu_12503_p1 = esl_zext<8,5>(co51_reg_4990.read());
}

void ShuffleNetV2::thread_tmp_375_fu_12529_p3() {
    tmp_375_fu_12529_p3 = esl_concat<1,5>(ap_const_lv1_1, co51_reg_4990.read());
}

void ShuffleNetV2::thread_tmp_376_cast_fu_12541_p1() {
    tmp_376_cast_fu_12541_p1 = esl_zext<10,7>(tmp_404_cast_fu_12537_p1.read());
}

void ShuffleNetV2::thread_tmp_377_fu_12698_p1() {
    tmp_377_fu_12698_p1 = esl_zext<64,5>(i30_reg_5023.read());
}

void ShuffleNetV2::thread_tmp_380_cast1_fu_12600_p1() {
    tmp_380_cast1_fu_12600_p1 = esl_zext<9,2>(w49_reg_5001.read());
}

void ShuffleNetV2::thread_tmp_380_cast_fu_12604_p1() {
    tmp_380_cast_fu_12604_p1 = esl_zext<11,2>(w49_reg_5001.read());
}

void ShuffleNetV2::thread_tmp_381_cast_fu_12673_p1() {
    tmp_381_cast_fu_12673_p1 = esl_zext<9,2>(h45_reg_5012.read());
}

void ShuffleNetV2::thread_tmp_382_fu_12880_p1() {
    tmp_382_fu_12880_p1 = esl_zext<64,5>(i32_reg_5058.read());
}

void ShuffleNetV2::thread_tmp_385_cast_fu_12847_p1() {
    tmp_385_cast_fu_12847_p1 = esl_zext<8,5>(ci25_reg_5047.read());
}

void ShuffleNetV2::thread_tmp_386_fu_13048_p2() {
    tmp_386_fu_13048_p2 = (!p_shl_cast_fu_13032_p1.read().is_01() || !p_shl1_cast_fu_13044_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl_cast_fu_13032_p1.read()) - sc_biguint<7>(p_shl1_cast_fu_13044_p1.read()));
}

void ShuffleNetV2::thread_tmp_387_cast_fu_12939_p1() {
    tmp_387_cast_fu_12939_p1 = esl_zext<10,5>(h_48_fu_12933_p2.read());
}

void ShuffleNetV2::thread_tmp_388_fu_13094_p2() {
    tmp_388_fu_13094_p2 = (!tmp_386_reg_35924.read().is_01() || !ci27_cast_fu_13078_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_386_reg_35924.read()) + sc_biguint<7>(ci27_cast_fu_13078_p1.read()));
}

void ShuffleNetV2::thread_tmp_389_cast_fu_13099_p1() {
    tmp_389_cast_fu_13099_p1 = esl_sext<10,7>(tmp_388_fu_13094_p2.read());
}

void ShuffleNetV2::thread_tmp_390_cast_fu_13103_p1() {
    tmp_390_cast_fu_13103_p1 = esl_zext<16,5>(ci27_reg_5114.read());
}

void ShuffleNetV2::thread_tmp_391_cast_fu_12990_p1() {
    tmp_391_cast_fu_12990_p1 = esl_zext<15,5>(w_52_fu_12984_p2.read());
}

void ShuffleNetV2::thread_tmp_392_fu_13380_p2() {
    tmp_392_fu_13380_p2 = (!p_shl2_cast_fu_13364_p1.read().is_01() || !p_shl3_cast_fu_13376_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl2_cast_fu_13364_p1.read()) - sc_biguint<7>(p_shl3_cast_fu_13376_p1.read()));
}

void ShuffleNetV2::thread_tmp_393_fu_13390_p2() {
    tmp_393_fu_13390_p2 = (!i37_cast1_reg_36031.read().is_01() || !tmp_392_fu_13380_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(i37_cast1_reg_36031.read()) + sc_biguint<7>(tmp_392_fu_13380_p2.read()));
}

void ShuffleNetV2::thread_tmp_394_fu_13427_p1() {
    tmp_394_fu_13427_p1 = esl_zext<64,32>(tmp_424_cast_fu_13424_p1.read());
}

void ShuffleNetV2::thread_tmp_395_fu_13401_p2() {
    tmp_395_fu_13401_p2 = (!tmp2_fu_13395_p2.read().is_01() || !i37_cast_reg_36026.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp2_fu_13395_p2.read()) + sc_biguint<9>(i37_cast_reg_36026.read()));
}

void ShuffleNetV2::thread_tmp_396_cast_fu_13406_p1() {
    tmp_396_cast_fu_13406_p1 = esl_zext<33,9>(tmp_395_reg_36057.read());
}

void ShuffleNetV2::thread_tmp_397_fu_13147_p2() {
    tmp_397_fu_13147_p2 = (!p_shl4_cast_fu_13131_p1.read().is_01() || !p_shl5_cast_fu_13143_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl4_cast_fu_13131_p1.read()) - sc_biguint<7>(p_shl5_cast_fu_13143_p1.read()));
}

void ShuffleNetV2::thread_tmp_398_fu_13157_p2() {
    tmp_398_fu_13157_p2 = (!tmp_397_fu_13147_p2.read().is_01() || !tmp_421_cast_reg_35929.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_397_fu_13147_p2.read()) + sc_biguint<7>(tmp_421_cast_reg_35929.read()));
}

void ShuffleNetV2::thread_tmp_399_fu_13186_p2() {
    tmp_399_fu_13186_p2 = (!p_shl6_cast_fu_13170_p1.read().is_01() || !p_shl7_cast_fu_13182_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl6_cast_fu_13170_p1.read()) - sc_biguint<8>(p_shl7_cast_fu_13182_p1.read()));
}

void ShuffleNetV2::thread_tmp_400_fu_13202_p2() {
    tmp_400_fu_13202_p2 = (!tmp1_fu_13196_p2.read().is_01() || !co56_cast_reg_35911.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp1_fu_13196_p2.read()) + sc_biguint<9>(co56_cast_reg_35911.read()));
}

void ShuffleNetV2::thread_tmp_401_fu_13212_p4() {
    tmp_401_fu_13212_p4 = tmp_398_fu_13157_p2.read().range(6, 3);
}

}

