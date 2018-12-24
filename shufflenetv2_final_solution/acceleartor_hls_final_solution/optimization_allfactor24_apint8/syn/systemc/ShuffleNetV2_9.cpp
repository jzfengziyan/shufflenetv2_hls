#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_130_fu_26103_p2() {
    tmp_130_fu_26103_p2 = (!p_shl94_cast_fu_26087_p1.read().is_01() || !p_shl95_cast_fu_26099_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl94_cast_fu_26087_p1.read()) - sc_biguint<7>(p_shl95_cast_fu_26099_p1.read()));
}

void ShuffleNetV2::thread_tmp_1310_fu_30557_p1() {
    tmp_1310_fu_30557_p1 = esl_sext<16,15>(tmp_1309_fu_30550_p3.read());
}

void ShuffleNetV2::thread_tmp_1311_fu_30565_p3() {
    tmp_1311_fu_30565_p3 = esl_concat<10,3>(sum64_reg_46416.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1312_fu_30572_p1() {
    tmp_1312_fu_30572_p1 = esl_sext<14,13>(tmp_1311_fu_30565_p3.read());
}

void ShuffleNetV2::thread_tmp_1313_fu_30580_p2() {
    tmp_1313_fu_30580_p2 = (!p_shl523_cast_fu_30561_p1.read().is_01() || !p_shl524_cast_fu_30576_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl523_cast_fu_30561_p1.read()) - sc_biguint<17>(p_shl524_cast_fu_30576_p1.read()));
}

void ShuffleNetV2::thread_tmp_1314_cast_fu_25941_p1() {
    tmp_1314_cast_fu_25941_p1 = esl_sext<18,17>(tmp_1117_fu_25935_p2.read());
}

void ShuffleNetV2::thread_tmp_1314_fu_30590_p2() {
    tmp_1314_fu_30590_p2 = (!tmp_1546_cast_fu_30586_p1.read().is_01() || !ci64_cast1_cast_reg_46384.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp_1546_cast_fu_30586_p1.read()) + sc_biguint<18>(ci64_cast1_cast_reg_46384.read()));
}

void ShuffleNetV2::thread_tmp_1315_cast_fu_25950_p1() {
    tmp_1315_cast_fu_25950_p1 = esl_sext<32,18>(tmp_1118_fu_25945_p2.read());
}

void ShuffleNetV2::thread_tmp_1315_fu_30657_p1() {
    tmp_1315_fu_30657_p1 = grp_fu_30541_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_1318_fu_30646_p2() {
    tmp_1318_fu_30646_p2 = (!p_shl525_cast_fu_30632_p3.read().is_01() || !p_shl526_cast_fu_30639_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl525_cast_fu_30632_p3.read()) - sc_biguint<8>(p_shl526_cast_fu_30639_p3.read()));
}

void ShuffleNetV2::thread_tmp_1319_fu_30652_p2() {
    tmp_1319_fu_30652_p2 = (!tmp_1318_fu_30646_p2.read().is_01() || !tmp_273_cast_cast_reg_46397.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1318_fu_30646_p2.read()) + sc_bigint<8>(tmp_273_cast_cast_reg_46397.read()));
}

void ShuffleNetV2::thread_tmp_131_cast_cast_fu_23152_p1() {
    tmp_131_cast_cast_fu_23152_p1 = esl_sext<10,7>(tmp_102_fu_23147_p2.read());
}

void ShuffleNetV2::thread_tmp_131_fu_26113_p2() {
    tmp_131_fu_26113_p2 = (!tmp_130_fu_26103_p2.read().is_01() || !i92_cast1_reg_44996.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_130_fu_26103_p2.read()) + sc_biguint<7>(i92_cast1_reg_44996.read()));
}

void ShuffleNetV2::thread_tmp_1320_fu_31149_p1() {
    tmp_1320_fu_31149_p1 = co133_reg_12388.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1321_cast_fu_26016_p1() {
    tmp_1321_cast_fu_26016_p1 = esl_sext<32,8>(tmp_1123_reg_44983.read());
}

void ShuffleNetV2::thread_tmp_1321_fu_31183_p4() {
    tmp_1321_fu_31183_p4 = co133_reg_12388.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_1322_fu_31061_p1() {
    tmp_1322_fu_31061_p1 = k52_reg_12377.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1323_fu_30864_p1() {
    tmp_1323_fu_30864_p1 = i125_reg_12355.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1324_fu_30911_p3() {
    tmp_1324_fu_30911_p3 = esl_concat<7,2>(tmp_197_fu_30902_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1325_fu_30923_p2() {
    tmp_1325_fu_30923_p2 = (!p_shl527_cast_fu_30919_p1.read().is_01() || !tmp_286_cast_cast_fu_30907_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl527_cast_fu_30919_p1.read()) - sc_bigint<10>(tmp_286_cast_cast_fu_30907_p1.read()));
}

void ShuffleNetV2::thread_tmp_1326_fu_30929_p2() {
    tmp_1326_fu_30929_p2 = (!w101_cast_cast_reg_46511.read().is_01() || !tmp_1325_fu_30923_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w101_cast_cast_reg_46511.read()) + sc_biguint<10>(tmp_1325_fu_30923_p2.read()));
}

void ShuffleNetV2::thread_tmp_1327_fu_30945_p2() {
    tmp_1327_fu_30945_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1326_reg_46550.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1328_fu_30950_p2() {
    tmp_1328_fu_30950_p2 = (!tmp_1327_fu_30945_p2.read().is_01() || !tmp_1326_reg_46550.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1327_fu_30945_p2.read()) - sc_biguint<10>(tmp_1326_reg_46550.read()));
}

void ShuffleNetV2::thread_tmp_1329_fu_30955_p2() {
    tmp_1329_fu_30955_p2 = (!h100_cast_cast_reg_46529.read().is_01() || !tmp_1328_fu_30950_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h100_cast_cast_reg_46529.read()) + sc_biguint<10>(tmp_1328_fu_30950_p2.read()));
}

void ShuffleNetV2::thread_tmp_132_fu_25844_p2() {
    tmp_132_fu_25844_p2 = (!p_shl96_cast_fu_25828_p1.read().is_01() || !p_shl97_cast_fu_25840_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl96_cast_fu_25828_p1.read()) - sc_biguint<7>(p_shl97_cast_fu_25840_p1.read()));
}

void ShuffleNetV2::thread_tmp_1330_fu_30963_p3() {
    tmp_1330_fu_30963_p3 = esl_concat<10,2>(sum33_reg_46556.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1331_fu_30974_p2() {
    tmp_1331_fu_30974_p2 = (!p_shl529_cast_fu_30970_p1.read().is_01() || !sum33_cast_cast_fu_30960_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl529_cast_fu_30970_p1.read()) - sc_biguint<13>(sum33_cast_cast_fu_30960_p1.read()));
}

void ShuffleNetV2::thread_tmp_1332_fu_30984_p2() {
    tmp_1332_fu_30984_p2 = (!w101_cast_cast1_reg_46506.read().is_01() || !tmp_1567_cast_fu_30980_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(w101_cast_cast1_reg_46506.read()) + sc_bigint<14>(tmp_1567_cast_fu_30980_p1.read()));
}

void ShuffleNetV2::thread_tmp_1333_cast_fu_26376_p1() {
    tmp_1333_cast_fu_26376_p1 = esl_zext<32,10>(tmp_1133_reg_45107.read());
}

void ShuffleNetV2::thread_tmp_1333_fu_30992_p3() {
    tmp_1333_fu_30992_p3 = esl_concat<14,2>(tmp_1332_reg_46567.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1334_fu_31003_p2() {
    tmp_1334_fu_31003_p2 = (!p_shl255_fu_30999_p1.read().is_01() || !tmp_1568_cast_fu_30989_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl255_fu_30999_p1.read()) - sc_bigint<32>(tmp_1568_cast_fu_30989_p1.read()));
}

void ShuffleNetV2::thread_tmp_1335_fu_31009_p2() {
    tmp_1335_fu_31009_p2 = (!h100_cast_reg_46524.read().is_01() || !tmp_1334_fu_31003_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h100_cast_reg_46524.read()) + sc_biguint<32>(tmp_1334_fu_31003_p2.read()));
}

void ShuffleNetV2::thread_tmp_1336_cast_fu_26340_p1() {
    tmp_1336_cast_fu_26340_p1 = esl_sext<32,12>(tmp_1136_reg_45112.read());
}

void ShuffleNetV2::thread_tmp_1336_fu_31581_p3() {
    tmp_1336_fu_31581_p3 = esl_concat<6,3>(co135_reg_12443.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1337_fu_31593_p3() {
    tmp_1337_fu_31593_p3 = esl_concat<6,1>(co135_reg_12443.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1338_fu_31605_p2() {
    tmp_1338_fu_31605_p2 = (!p_shl532_cast_fu_31601_p1.read().is_01() || !p_shl531_cast_fu_31589_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl532_cast_fu_31601_p1.read()) + sc_biguint<10>(p_shl531_cast_fu_31589_p1.read()));
}

void ShuffleNetV2::thread_tmp_1339_fu_31505_p1() {
    tmp_1339_fu_31505_p1 = k54_reg_12432.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_133_cast_cast_fu_23780_p1() {
    tmp_133_cast_cast_fu_23780_p1 = esl_sext<9,7>(tmp_103_fu_23774_p2.read());
}

void ShuffleNetV2::thread_tmp_133_cast_fu_25910_p1() {
    tmp_133_cast_fu_25910_p1 = esl_sext<10,9>(tmp_133_reg_44955.read());
}

void ShuffleNetV2::thread_tmp_133_fu_25854_p2() {
    tmp_133_fu_25854_p2 = (!tmp_181_cast_cast_fu_25850_p1.read().is_01() || !tmp_176_cast_cast_reg_44924.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_181_cast_cast_fu_25850_p1.read()) + sc_biguint<9>(tmp_176_cast_cast_reg_44924.read()));
}

void ShuffleNetV2::thread_tmp_1340_fu_31238_p1() {
    tmp_1340_fu_31238_p1 = i127_reg_12410.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1341_fu_31335_p3() {
    tmp_1341_fu_31335_p3 = esl_concat<10,5>(sum67_reg_46676.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1342_fu_31342_p1() {
    tmp_1342_fu_31342_p1 = esl_sext<16,15>(tmp_1341_fu_31335_p3.read());
}

void ShuffleNetV2::thread_tmp_1343_fu_31350_p3() {
    tmp_1343_fu_31350_p3 = esl_concat<10,3>(sum67_reg_46676.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1344_fu_31357_p1() {
    tmp_1344_fu_31357_p1 = esl_sext<14,13>(tmp_1343_fu_31350_p3.read());
}

void ShuffleNetV2::thread_tmp_1345_fu_31365_p2() {
    tmp_1345_fu_31365_p2 = (!p_shl533_cast_fu_31346_p1.read().is_01() || !p_shl534_cast_fu_31361_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl533_cast_fu_31346_p1.read()) - sc_biguint<17>(p_shl534_cast_fu_31361_p1.read()));
}

void ShuffleNetV2::thread_tmp_1346_fu_31375_p2() {
    tmp_1346_fu_31375_p2 = (!tmp_1585_cast_fu_31371_p1.read().is_01() || !ci66_cast1_cast_reg_46644.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp_1585_cast_fu_31371_p1.read()) + sc_biguint<18>(ci66_cast1_cast_reg_46644.read()));
}

void ShuffleNetV2::thread_tmp_1347_fu_31442_p1() {
    tmp_1347_fu_31442_p1 = grp_fu_31326_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_134_cast_fu_23818_p1() {
    tmp_134_cast_fu_23818_p1 = esl_sext<32,7>(tmp_104_reg_44307.read());
}

void ShuffleNetV2::thread_tmp_134_fu_25883_p2() {
    tmp_134_fu_25883_p2 = (!p_shl98_cast_fu_25867_p1.read().is_01() || !p_shl99_cast_fu_25879_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl98_cast_fu_25867_p1.read()) - sc_biguint<8>(p_shl99_cast_fu_25879_p1.read()));
}

void ShuffleNetV2::thread_tmp_1350_fu_31431_p2() {
    tmp_1350_fu_31431_p2 = (!p_shl535_cast_fu_31417_p3.read().is_01() || !p_shl536_cast_fu_31424_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl535_cast_fu_31417_p3.read()) - sc_biguint<8>(p_shl536_cast_fu_31424_p3.read()));
}

void ShuffleNetV2::thread_tmp_1351_cast_fu_26714_p1() {
    tmp_1351_cast_fu_26714_p1 = esl_sext<18,17>(tmp_1147_fu_26708_p2.read());
}

void ShuffleNetV2::thread_tmp_1351_fu_31437_p2() {
    tmp_1351_fu_31437_p2 = (!tmp_1350_fu_31431_p2.read().is_01() || !tmp_291_cast_cast_reg_46657.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1350_fu_31431_p2.read()) + sc_bigint<8>(tmp_291_cast_cast_reg_46657.read()));
}

void ShuffleNetV2::thread_tmp_1352_cast_fu_26723_p1() {
    tmp_1352_cast_fu_26723_p1 = esl_sext<32,18>(tmp_1148_fu_26718_p2.read());
}

void ShuffleNetV2::thread_tmp_1352_fu_31700_p3() {
    tmp_1352_fu_31700_p3 = esl_concat<6,3>(co137_reg_12476.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1353_fu_31712_p3() {
    tmp_1353_fu_31712_p3 = esl_concat<6,1>(co137_reg_12476.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1354_fu_31724_p2() {
    tmp_1354_fu_31724_p2 = (!p_shl538_cast_fu_31720_p1.read().is_01() || !p_shl537_cast_fu_31708_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl538_cast_fu_31720_p1.read()) + sc_biguint<10>(p_shl537_cast_fu_31708_p1.read()));
}

void ShuffleNetV2::thread_tmp_1355_fu_31752_p3() {
    tmp_1355_fu_31752_p3 = esl_concat<7,3>(tmp_203_fu_31746_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1356_fu_31764_p3() {
    tmp_1356_fu_31764_p3 = esl_concat<7,1>(tmp_203_fu_31746_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1357_fu_31776_p2() {
    tmp_1357_fu_31776_p2 = (!p_shl540_cast_fu_31772_p1.read().is_01() || !p_shl539_cast_fu_31760_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl540_cast_fu_31772_p1.read()) + sc_biguint<11>(p_shl539_cast_fu_31760_p1.read()));
}

void ShuffleNetV2::thread_tmp_1358_cast_fu_26789_p1() {
    tmp_1358_cast_fu_26789_p1 = esl_sext<32,8>(tmp_1153_reg_45243.read());
}

void ShuffleNetV2::thread_tmp_1358_fu_31639_p2() {
    tmp_1358_fu_31639_p2 = (!h_103_cast_cast_fu_31635_p1.read().is_01() || !tmp_1338_reg_46748.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_103_cast_cast_fu_31635_p1.read()) + sc_biguint<10>(tmp_1338_reg_46748.read()));
}

void ShuffleNetV2::thread_tmp_1359_fu_31644_p3() {
    tmp_1359_fu_31644_p3 = esl_concat<10,3>(tmp_1358_fu_31639_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_135_fu_26528_p2() {
    tmp_135_fu_26528_p2 = (!p_shl102_cast_fu_26512_p1.read().is_01() || !p_shl103_cast_fu_26524_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl102_cast_fu_26512_p1.read()) - sc_biguint<7>(p_shl103_cast_fu_26524_p1.read()));
}

void ShuffleNetV2::thread_tmp_1360_fu_31656_p3() {
    tmp_1360_fu_31656_p3 = esl_concat<10,1>(tmp_1358_fu_31639_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1361_fu_31668_p2() {
    tmp_1361_fu_31668_p2 = (!p_shl541_cast_fu_31652_p1.read().is_01() || !p_shl542_cast_fu_31664_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl541_cast_fu_31652_p1.read()) + sc_biguint<15>(p_shl542_cast_fu_31664_p1.read()));
}

void ShuffleNetV2::thread_tmp_1362_fu_31927_p1() {
    tmp_1362_fu_31927_p1 = co139_reg_12509.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1363_fu_31961_p4() {
    tmp_1363_fu_31961_p4 = co139_reg_12509.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_1364_fu_31802_p2() {
    tmp_1364_fu_31802_p2 = (!h_105_cast_cast_fu_31798_p1.read().is_01() || !tmp_1357_reg_46805.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_105_cast_cast_fu_31798_p1.read()) + sc_biguint<11>(tmp_1357_reg_46805.read()));
}

void ShuffleNetV2::thread_tmp_1365_fu_31807_p3() {
    tmp_1365_fu_31807_p3 = esl_concat<11,3>(tmp_1364_fu_31802_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1366_fu_31819_p3() {
    tmp_1366_fu_31819_p3 = esl_concat<11,1>(tmp_1364_fu_31802_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1367_fu_31831_p2() {
    tmp_1367_fu_31831_p2 = (!p_shl543_cast_fu_31815_p1.read().is_01() || !p_shl544_cast_fu_31827_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl543_cast_fu_31815_p1.read()) + sc_biguint<15>(p_shl544_cast_fu_31827_p1.read()));
}

void ShuffleNetV2::thread_tmp_1368_fu_31837_p2() {
    tmp_1368_fu_31837_p2 = (!h_105_cast_cast1_fu_31794_p1.read().is_01() || !tmp_1354_reg_46792.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_105_cast_cast1_fu_31794_p1.read()) + sc_biguint<10>(tmp_1354_reg_46792.read()));
}

void ShuffleNetV2::thread_tmp_1369_fu_31842_p3() {
    tmp_1369_fu_31842_p3 = esl_concat<10,3>(tmp_1368_fu_31837_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_136_cast_cast_fu_23471_p1() {
    tmp_136_cast_cast_fu_23471_p1 = esl_sext<8,7>(tmp_100_fu_23466_p2.read());
}

void ShuffleNetV2::thread_tmp_136_fu_26440_p2() {
    tmp_136_fu_26440_p2 = (!p_shl100_cast_fu_26424_p1.read().is_01() || !p_shl101_cast_fu_26436_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl100_cast_fu_26424_p1.read()) - sc_biguint<7>(p_shl101_cast_fu_26436_p1.read()));
}

void ShuffleNetV2::thread_tmp_1370_fu_31854_p3() {
    tmp_1370_fu_31854_p3 = esl_concat<10,1>(tmp_1368_fu_31837_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1371_fu_31866_p2() {
    tmp_1371_fu_31866_p2 = (!p_shl545_cast_fu_31850_p1.read().is_01() || !p_shl546_cast_fu_31862_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl545_cast_fu_31850_p1.read()) + sc_biguint<14>(p_shl546_cast_fu_31862_p1.read()));
}

void ShuffleNetV2::thread_tmp_1372_fu_31690_p2() {
    tmp_1372_fu_31690_p2 = (!tmp_1361_reg_46769.read().is_01() || !w_104_cast_cast_fu_31686_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1361_reg_46769.read()) + sc_biguint<15>(w_104_cast_cast_fu_31686_p1.read()));
}

void ShuffleNetV2::thread_tmp_1373_fu_31892_p2() {
    tmp_1373_fu_31892_p2 = (!tmp_1367_reg_46818.read().is_01() || !w_106_cast_cast_fu_31888_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1367_reg_46818.read()) + sc_biguint<15>(w_106_cast_cast_fu_31888_p1.read()));
}

void ShuffleNetV2::thread_tmp_1374_fu_31902_p2() {
    tmp_1374_fu_31902_p2 = (!tmp_1371_reg_46823.read().is_01() || !w_106_cast_cast1_fu_31884_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1371_reg_46823.read()) + sc_biguint<14>(w_106_cast_cast1_fu_31884_p1.read()));
}

void ShuffleNetV2::thread_tmp_1375_fu_32283_p1() {
    tmp_1375_fu_32283_p1 = k56_reg_12553.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1376_fu_32016_p1() {
    tmp_1376_fu_32016_p1 = i131_reg_12531.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1377_fu_32113_p3() {
    tmp_1377_fu_32113_p3 = esl_concat<9,5>(sum69_reg_46901.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1378_fu_32120_p1() {
    tmp_1378_fu_32120_p1 = esl_sext<16,14>(tmp_1377_fu_32113_p3.read());
}

void ShuffleNetV2::thread_tmp_1379_cast_fu_27034_p1() {
    tmp_1379_cast_fu_27034_p1 = esl_zext<32,15>(tmp_1174_fu_27029_p2.read());
}

void ShuffleNetV2::thread_tmp_1379_fu_32128_p3() {
    tmp_1379_fu_32128_p3 = esl_concat<9,3>(sum69_reg_46901.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_137_cast_cast_fu_23521_p1() {
    tmp_137_cast_cast_fu_23521_p1 = esl_sext<9,7>(tmp_105_fu_23515_p2.read());
}

void ShuffleNetV2::thread_tmp_137_fu_26450_p2() {
    tmp_137_fu_26450_p2 = (!tmp_136_fu_26440_p2.read().is_01() || !i95_cast1_reg_45129.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_136_fu_26440_p2.read()) + sc_biguint<7>(i95_cast1_reg_45129.read()));
}

void ShuffleNetV2::thread_tmp_1380_cast_fu_27236_p1() {
    tmp_1380_cast_fu_27236_p1 = esl_zext<32,15>(tmp_1175_fu_27231_p2.read());
}

void ShuffleNetV2::thread_tmp_1380_fu_32135_p1() {
    tmp_1380_fu_32135_p1 = esl_sext<14,12>(tmp_1379_fu_32128_p3.read());
}

void ShuffleNetV2::thread_tmp_1381_cast_fu_27246_p1() {
    tmp_1381_cast_fu_27246_p1 = esl_zext<32,14>(tmp_1176_reg_45386.read());
}

void ShuffleNetV2::thread_tmp_1381_fu_32143_p2() {
    tmp_1381_fu_32143_p2 = (!p_shl547_cast_fu_32124_p1.read().is_01() || !p_shl548_cast_fu_32139_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl547_cast_fu_32124_p1.read()) - sc_biguint<17>(p_shl548_cast_fu_32139_p1.read()));
}

void ShuffleNetV2::thread_tmp_1382_fu_32153_p2() {
    tmp_1382_fu_32153_p2 = (!tmp_1626_cast_fu_32149_p1.read().is_01() || !ci68_cast1_cast_reg_46869.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp_1626_cast_fu_32149_p1.read()) + sc_biguint<18>(ci68_cast1_cast_reg_46869.read()));
}

void ShuffleNetV2::thread_tmp_1383_fu_32220_p1() {
    tmp_1383_fu_32220_p1 = grp_fu_32104_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_1386_fu_32209_p2() {
    tmp_1386_fu_32209_p2 = (!p_shl549_cast_fu_32195_p3.read().is_01() || !p_shl550_cast_fu_32202_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl549_cast_fu_32195_p3.read()) - sc_biguint<8>(p_shl550_cast_fu_32202_p3.read()));
}

void ShuffleNetV2::thread_tmp_1387_fu_32215_p2() {
    tmp_1387_fu_32215_p2 = (!tmp_1386_fu_32209_p2.read().is_01() || !tmp_304_cast_cast_reg_46882.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1386_fu_32209_p2.read()) + sc_bigint<8>(tmp_304_cast_cast_reg_46882.read()));
}

void ShuffleNetV2::thread_tmp_1388_fu_32716_p1() {
    tmp_1388_fu_32716_p1 = co143_reg_12630.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1389_fu_32750_p4() {
    tmp_1389_fu_32750_p4 = co143_reg_12630.read().range(4, 1);
}

void ShuffleNetV2::thread_tmp_138_fu_26568_p2() {
    tmp_138_fu_26568_p2 = (!tmp_135_reg_45179.read().is_01() || !ci54_cast_fu_26548_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_135_reg_45179.read()) + sc_biguint<7>(ci54_cast_fu_26548_p1.read()));
}

void ShuffleNetV2::thread_tmp_1390_cast_fu_27480_p1() {
    tmp_1390_cast_fu_27480_p1 = esl_sext<18,17>(tmp_1181_fu_27474_p2.read());
}

void ShuffleNetV2::thread_tmp_1390_fu_32624_p1() {
    tmp_1390_fu_32624_p1 = k58_reg_12619.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1391_cast_fu_27489_p1() {
    tmp_1391_cast_fu_27489_p1 = esl_sext<32,18>(tmp_1182_fu_27484_p2.read());
}

void ShuffleNetV2::thread_tmp_1391_fu_32431_p1() {
    tmp_1391_fu_32431_p1 = i136_reg_12597.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1392_fu_32478_p3() {
    tmp_1392_fu_32478_p3 = esl_concat<7,2>(tmp_216_fu_32469_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1393_fu_32490_p2() {
    tmp_1393_fu_32490_p2 = (!p_shl551_cast_fu_32486_p1.read().is_01() || !tmp_317_cast_cast_fu_32474_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl551_cast_fu_32486_p1.read()) - sc_bigint<10>(tmp_317_cast_cast_fu_32474_p1.read()));
}

void ShuffleNetV2::thread_tmp_1394_fu_32496_p2() {
    tmp_1394_fu_32496_p2 = (!w107_cast_cast_reg_46996.read().is_01() || !tmp_1393_fu_32490_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w107_cast_cast_reg_46996.read()) + sc_biguint<10>(tmp_1393_fu_32490_p2.read()));
}

void ShuffleNetV2::thread_tmp_1395_fu_32512_p2() {
    tmp_1395_fu_32512_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_1394_reg_47035.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1396_fu_32517_p2() {
    tmp_1396_fu_32517_p2 = (!tmp_1395_fu_32512_p2.read().is_01() || !tmp_1394_reg_47035.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1395_fu_32512_p2.read()) - sc_biguint<10>(tmp_1394_reg_47035.read()));
}

void ShuffleNetV2::thread_tmp_1397_cast_fu_27555_p1() {
    tmp_1397_cast_fu_27555_p1 = esl_sext<32,8>(tmp_1187_reg_45468.read());
}

void ShuffleNetV2::thread_tmp_1397_fu_32522_p2() {
    tmp_1397_fu_32522_p2 = (!h106_cast_cast_reg_47014.read().is_01() || !tmp_1396_fu_32517_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h106_cast_cast_reg_47014.read()) + sc_biguint<10>(tmp_1396_fu_32517_p2.read()));
}

void ShuffleNetV2::thread_tmp_1398_fu_32530_p3() {
    tmp_1398_fu_32530_p3 = esl_concat<10,2>(sum35_reg_47041.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1399_fu_32541_p2() {
    tmp_1399_fu_32541_p2 = (!p_shl553_cast_fu_32537_p1.read().is_01() || !sum35_cast_cast_fu_32527_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl553_cast_fu_32537_p1.read()) - sc_biguint<13>(sum35_cast_cast_fu_32527_p1.read()));
}

void ShuffleNetV2::thread_tmp_139_cast_fu_23560_p1() {
    tmp_139_cast_fu_23560_p1 = esl_sext<10,8>(tmp_107_fu_23554_p2.read());
}

void ShuffleNetV2::thread_tmp_139_fu_26247_p2() {
    tmp_139_fu_26247_p2 = (!p_shl104_cast_fu_26231_p1.read().is_01() || !p_shl105_cast_fu_26243_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl104_cast_fu_26231_p1.read()) - sc_biguint<7>(p_shl105_cast_fu_26243_p1.read()));
}

void ShuffleNetV2::thread_tmp_1400_fu_32547_p2() {
    tmp_1400_fu_32547_p2 = (!w107_cast_cast1_reg_46991.read().is_01() || !tmp_1399_fu_32541_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w107_cast_cast1_reg_46991.read()) + sc_biguint<13>(tmp_1399_fu_32541_p2.read()));
}

void ShuffleNetV2::thread_tmp_1401_fu_32555_p3() {
    tmp_1401_fu_32555_p3 = esl_concat<13,2>(tmp_1400_reg_47052.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1402_fu_32566_p2() {
    tmp_1402_fu_32566_p2 = (!p_shl258_fu_32562_p1.read().is_01() || !tmp_1648_cast_fu_32552_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl258_fu_32562_p1.read()) - sc_bigint<32>(tmp_1648_cast_fu_32552_p1.read()));
}

void ShuffleNetV2::thread_tmp_1403_fu_32572_p2() {
    tmp_1403_fu_32572_p2 = (!h106_cast_reg_47009.read().is_01() || !tmp_1402_fu_32566_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h106_cast_reg_47009.read()) + sc_biguint<32>(tmp_1402_fu_32566_p2.read()));
}

void ShuffleNetV2::thread_tmp_1404_fu_33148_p3() {
    tmp_1404_fu_33148_p3 = esl_concat<6,3>(co145_reg_12685.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1405_fu_33160_p3() {
    tmp_1405_fu_33160_p3 = esl_concat<6,1>(co145_reg_12685.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1406_fu_33172_p2() {
    tmp_1406_fu_33172_p2 = (!p_shl556_cast_fu_33168_p1.read().is_01() || !p_shl555_cast_fu_33156_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl556_cast_fu_33168_p1.read()) + sc_biguint<10>(p_shl555_cast_fu_33156_p1.read()));
}

void ShuffleNetV2::thread_tmp_1407_fu_33072_p1() {
    tmp_1407_fu_33072_p1 = k60_reg_12674.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1408_fu_32805_p1() {
    tmp_1408_fu_32805_p1 = i138_reg_12652.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1409_cast_fu_27923_p1() {
    tmp_1409_cast_fu_27923_p1 = esl_zext<32,10>(tmp_1197_reg_45592.read());
}

void ShuffleNetV2::thread_tmp_1409_fu_32910_p3() {
    tmp_1409_fu_32910_p3 = esl_concat<12,5>(sum72_reg_47161.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_140_fu_26257_p2() {
    tmp_140_fu_26257_p2 = (!co102_cast1_reg_45038.read().is_01() || !tmp_139_fu_26247_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co102_cast1_reg_45038.read()) + sc_biguint<7>(tmp_139_fu_26247_p2.read()));
}

void ShuffleNetV2::thread_tmp_1410_fu_32921_p3() {
    tmp_1410_fu_32921_p3 = esl_concat<12,3>(sum72_reg_47161.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1411_fu_32932_p2() {
    tmp_1411_fu_32932_p2 = (!p_shl557_cast_fu_32917_p1.read().is_01() || !p_shl558_cast_fu_32928_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl557_cast_fu_32917_p1.read()) - sc_biguint<18>(p_shl558_cast_fu_32928_p1.read()));
}

void ShuffleNetV2::thread_tmp_1412_fu_32942_p2() {
    tmp_1412_fu_32942_p2 = (!ci70_cast1_cast_reg_47129.read().is_01() || !tmp_1663_cast_fu_32938_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci70_cast1_cast_reg_47129.read()) + sc_bigint<19>(tmp_1663_cast_fu_32938_p1.read()));
}

void ShuffleNetV2::thread_tmp_1413_cast_fu_27887_p1() {
    tmp_1413_cast_fu_27887_p1 = esl_sext<32,12>(tmp_1201_reg_45597.read());
}

void ShuffleNetV2::thread_tmp_1413_fu_33009_p1() {
    tmp_1413_fu_33009_p1 = grp_fu_32901_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_1416_fu_32998_p2() {
    tmp_1416_fu_32998_p2 = (!p_shl559_cast_fu_32984_p3.read().is_01() || !p_shl560_cast_fu_32991_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl559_cast_fu_32984_p3.read()) - sc_biguint<8>(p_shl560_cast_fu_32991_p3.read()));
}

void ShuffleNetV2::thread_tmp_1417_fu_33004_p2() {
    tmp_1417_fu_33004_p2 = (!tmp_322_cast_cast_reg_47142.read().is_01() || !tmp_1416_fu_32998_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_322_cast_cast_reg_47142.read()) + sc_biguint<8>(tmp_1416_fu_32998_p2.read()));
}

void ShuffleNetV2::thread_tmp_1418_fu_33283_p1() {
    tmp_1418_fu_33283_p1 = co147_reg_12718.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1419_fu_33299_p2() {
    tmp_1419_fu_33299_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co147_reg_12718.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_141_fu_26876_p2() {
    tmp_141_fu_26876_p2 = (!p_shl106_cast_fu_26860_p1.read().is_01() || !p_shl107_cast_fu_26872_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl106_cast_fu_26860_p1.read()) - sc_biguint<7>(p_shl107_cast_fu_26872_p1.read()));
}

void ShuffleNetV2::thread_tmp_1420_fu_33315_p4() {
    tmp_1420_fu_33315_p4 = co147_reg_12718.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_1421_fu_33206_p2() {
    tmp_1421_fu_33206_p2 = (!h_109_cast_cast_fu_33202_p1.read().is_01() || !tmp_1406_reg_47233.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_109_cast_cast_fu_33202_p1.read()) + sc_biguint<10>(tmp_1406_reg_47233.read()));
}

void ShuffleNetV2::thread_tmp_1422_fu_33211_p3() {
    tmp_1422_fu_33211_p3 = esl_concat<10,3>(tmp_1421_fu_33206_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1423_fu_33223_p3() {
    tmp_1423_fu_33223_p3 = esl_concat<10,1>(tmp_1421_fu_33206_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1424_fu_33235_p2() {
    tmp_1424_fu_33235_p2 = (!p_shl561_cast_fu_33219_p1.read().is_01() || !p_shl562_cast_fu_33231_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl561_cast_fu_33219_p1.read()) + sc_biguint<15>(p_shl562_cast_fu_33231_p1.read()));
}

void ShuffleNetV2::thread_tmp_1425_fu_33257_p2() {
    tmp_1425_fu_33257_p2 = (!tmp_1424_reg_47254.read().is_01() || !w_110_cast_cast_fu_33253_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1424_reg_47254.read()) + sc_biguint<15>(w_110_cast_cast_fu_33253_p1.read()));
}

void ShuffleNetV2::thread_tmp_1426_fu_33619_p1() {
    tmp_1426_fu_33619_p1 = k62_reg_12762.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1427_fu_33370_p1() {
    tmp_1427_fu_33370_p1 = i142_reg_12740.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1428_cast_fu_28261_p1() {
    tmp_1428_cast_fu_28261_p1 = esl_sext<18,17>(tmp_1212_fu_28255_p2.read());
}

void ShuffleNetV2::thread_tmp_1428_fu_33390_p2() {
    tmp_1428_fu_33390_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i142_reg_12740.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1429_cast_fu_28270_p1() {
    tmp_1429_cast_fu_28270_p1 = esl_sext<32,18>(tmp_1213_fu_28265_p2.read());
}

void ShuffleNetV2::thread_tmp_1429_fu_33457_p3() {
    tmp_1429_fu_33457_p3 = esl_concat<12,5>(sum74_reg_47332.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_142_fu_26886_p2() {
    tmp_142_fu_26886_p2 = (!tmp_141_fu_26876_p2.read().is_01() || !i99_cast1_reg_45256.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_141_fu_26876_p2.read()) + sc_biguint<7>(i99_cast1_reg_45256.read()));
}

void ShuffleNetV2::thread_tmp_1430_fu_33468_p3() {
    tmp_1430_fu_33468_p3 = esl_concat<12,3>(sum74_reg_47332.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1431_fu_33479_p2() {
    tmp_1431_fu_33479_p2 = (!p_shl563_cast_fu_33464_p1.read().is_01() || !p_shl564_cast_fu_33475_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl563_cast_fu_33464_p1.read()) - sc_biguint<18>(p_shl564_cast_fu_33475_p1.read()));
}

void ShuffleNetV2::thread_tmp_1432_fu_33489_p2() {
    tmp_1432_fu_33489_p2 = (!ci72_cast1_cast_reg_47300.read().is_01() || !tmp_1685_cast_fu_33485_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci72_cast1_cast_reg_47300.read()) + sc_bigint<19>(tmp_1685_cast_fu_33485_p1.read()));
}

void ShuffleNetV2::thread_tmp_1433_fu_33556_p1() {
    tmp_1433_fu_33556_p1 = grp_fu_33448_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_1435_cast_fu_28336_p1() {
    tmp_1435_cast_fu_28336_p1 = esl_sext<32,8>(tmp_1218_reg_45728.read());
}

void ShuffleNetV2::thread_tmp_1436_fu_33545_p2() {
    tmp_1436_fu_33545_p2 = (!p_shl565_cast_fu_33531_p3.read().is_01() || !p_shl566_cast_fu_33538_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl565_cast_fu_33531_p3.read()) - sc_biguint<10>(p_shl566_cast_fu_33538_p3.read()));
}

void ShuffleNetV2::thread_tmp_1437_fu_33551_p2() {
    tmp_1437_fu_33551_p2 = (!tmp_334_cast_cast_reg_47313.read().is_01() || !tmp_1436_fu_33545_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_334_cast_cast_reg_47313.read()) + sc_biguint<10>(tmp_1436_fu_33545_p2.read()));
}

void ShuffleNetV2::thread_tmp_1438_fu_34052_p1() {
    tmp_1438_fu_34052_p1 = co151_reg_12839.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1439_fu_34068_p2() {
    tmp_1439_fu_34068_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co151_reg_12839.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_143_fu_26617_p2() {
    tmp_143_fu_26617_p2 = (!p_shl108_cast_fu_26601_p1.read().is_01() || !p_shl109_cast_fu_26613_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl108_cast_fu_26601_p1.read()) - sc_biguint<7>(p_shl109_cast_fu_26613_p1.read()));
}

void ShuffleNetV2::thread_tmp_1440_fu_34084_p4() {
    tmp_1440_fu_34084_p4 = co151_reg_12839.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_1441_fu_33960_p1() {
    tmp_1441_fu_33960_p1 = k64_reg_12828.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1442_fu_33767_p1() {
    tmp_1442_fu_33767_p1 = i147_reg_12806.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1443_fu_33814_p3() {
    tmp_1443_fu_33814_p3 = esl_concat<8,2>(tmp_234_fu_33805_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1444_fu_33826_p2() {
    tmp_1444_fu_33826_p2 = (!p_shl567_cast_fu_33822_p1.read().is_01() || !tmp_347_cast_cast_fu_33810_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl567_cast_fu_33822_p1.read()) - sc_bigint<11>(tmp_347_cast_cast_fu_33810_p1.read()));
}

void ShuffleNetV2::thread_tmp_1445_fu_33832_p2() {
    tmp_1445_fu_33832_p2 = (!w111_cast_cast_reg_47427.read().is_01() || !tmp_1444_fu_33826_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w111_cast_cast_reg_47427.read()) + sc_biguint<11>(tmp_1444_fu_33826_p2.read()));
}

void ShuffleNetV2::thread_tmp_1446_fu_33848_p2() {
    tmp_1446_fu_33848_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1445_reg_47466.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1447_fu_33853_p2() {
    tmp_1447_fu_33853_p2 = (!tmp_1446_fu_33848_p2.read().is_01() || !tmp_1445_reg_47466.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1446_fu_33848_p2.read()) - sc_biguint<11>(tmp_1445_reg_47466.read()));
}

void ShuffleNetV2::thread_tmp_1448_fu_33858_p2() {
    tmp_1448_fu_33858_p2 = (!h110_cast_cast_reg_47445.read().is_01() || !tmp_1447_fu_33853_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h110_cast_cast_reg_47445.read()) + sc_biguint<11>(tmp_1447_fu_33853_p2.read()));
}

void ShuffleNetV2::thread_tmp_1449_fu_33866_p3() {
    tmp_1449_fu_33866_p3 = esl_concat<10,2>(sum37_reg_47472.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_144_cast_fu_26683_p1() {
    tmp_144_cast_fu_26683_p1 = esl_sext<10,9>(tmp_144_reg_45215.read());
}

void ShuffleNetV2::thread_tmp_144_fu_26627_p2() {
    tmp_144_fu_26627_p2 = (!tmp_199_cast_cast_fu_26623_p1.read().is_01() || !tmp_191_cast_cast_reg_45184.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_199_cast_cast_fu_26623_p1.read()) + sc_biguint<9>(tmp_191_cast_cast_reg_45184.read()));
}

void ShuffleNetV2::thread_tmp_1450_fu_33877_p2() {
    tmp_1450_fu_33877_p2 = (!p_shl569_cast_fu_33873_p1.read().is_01() || !sum37_cast_cast_fu_33863_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl569_cast_fu_33873_p1.read()) - sc_biguint<13>(sum37_cast_cast_fu_33863_p1.read()));
}

void ShuffleNetV2::thread_tmp_1451_fu_33883_p2() {
    tmp_1451_fu_33883_p2 = (!w111_cast_cast1_reg_47422.read().is_01() || !tmp_1450_fu_33877_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w111_cast_cast1_reg_47422.read()) + sc_biguint<13>(tmp_1450_fu_33877_p2.read()));
}

void ShuffleNetV2::thread_tmp_1452_fu_33891_p3() {
    tmp_1452_fu_33891_p3 = esl_concat<13,2>(tmp_1451_reg_47483.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1453_fu_33902_p2() {
    tmp_1453_fu_33902_p2 = (!p_shl262_fu_33898_p1.read().is_01() || !tmp_1707_cast_fu_33888_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl262_fu_33898_p1.read()) - sc_bigint<32>(tmp_1707_cast_fu_33888_p1.read()));
}

void ShuffleNetV2::thread_tmp_1454_fu_33908_p2() {
    tmp_1454_fu_33908_p2 = (!h110_cast_reg_47440.read().is_01() || !tmp_1453_fu_33902_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h110_cast_reg_47440.read()) + sc_biguint<32>(tmp_1453_fu_33902_p2.read()));
}

void ShuffleNetV2::thread_tmp_1455_fu_34388_p1() {
    tmp_1455_fu_34388_p1 = k66_reg_12883.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1456_cast_fu_28581_p1() {
    tmp_1456_cast_fu_28581_p1 = esl_zext<32,15>(tmp_1239_fu_28576_p2.read());
}

void ShuffleNetV2::thread_tmp_1456_fu_34139_p1() {
    tmp_1456_fu_34139_p1 = i149_reg_12861.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1457_cast_fu_28783_p1() {
    tmp_1457_cast_fu_28783_p1 = esl_zext<32,15>(tmp_1240_fu_28778_p2.read());
}

void ShuffleNetV2::thread_tmp_1457_fu_34159_p2() {
    tmp_1457_fu_34159_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i149_reg_12861.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1458_cast_fu_28793_p1() {
    tmp_1458_cast_fu_28793_p1 = esl_zext<32,14>(tmp_1241_reg_45871.read());
}

void ShuffleNetV2::thread_tmp_1458_fu_34226_p3() {
    tmp_1458_fu_34226_p3 = esl_concat<12,5>(sum77_reg_47592.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1459_fu_34237_p3() {
    tmp_1459_fu_34237_p3 = esl_concat<12,3>(sum77_reg_47592.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_145_cast_cast_fu_24212_p1() {
    tmp_145_cast_cast_fu_24212_p1 = esl_zext<9,4>(tmp_1035_fu_24202_p4.read());
}

void ShuffleNetV2::thread_tmp_145_fu_26656_p2() {
    tmp_145_fu_26656_p2 = (!p_shl110_cast_fu_26640_p1.read().is_01() || !p_shl111_cast_fu_26652_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl110_cast_fu_26640_p1.read()) - sc_biguint<8>(p_shl111_cast_fu_26652_p1.read()));
}

void ShuffleNetV2::thread_tmp_1460_fu_34248_p2() {
    tmp_1460_fu_34248_p2 = (!p_shl571_cast_fu_34233_p1.read().is_01() || !p_shl572_cast_fu_34244_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl571_cast_fu_34233_p1.read()) - sc_biguint<18>(p_shl572_cast_fu_34244_p1.read()));
}

void ShuffleNetV2::thread_tmp_1461_fu_34258_p2() {
    tmp_1461_fu_34258_p2 = (!ci74_cast1_cast_reg_47560.read().is_01() || !tmp_1718_cast_fu_34254_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci74_cast1_cast_reg_47560.read()) + sc_bigint<19>(tmp_1718_cast_fu_34254_p1.read()));
}

void ShuffleNetV2::thread_tmp_1462_fu_34325_p1() {
    tmp_1462_fu_34325_p1 = grp_fu_34217_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_1465_fu_34314_p2() {
    tmp_1465_fu_34314_p2 = (!p_shl573_cast_fu_34300_p3.read().is_01() || !p_shl574_cast_fu_34307_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl573_cast_fu_34300_p3.read()) - sc_biguint<10>(p_shl574_cast_fu_34307_p3.read()));
}

void ShuffleNetV2::thread_tmp_1466_fu_34320_p2() {
    tmp_1466_fu_34320_p2 = (!tmp_352_cast_cast_reg_47573.read().is_01() || !tmp_1465_fu_34314_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_352_cast_cast_reg_47573.read()) + sc_biguint<10>(tmp_1465_fu_34314_p2.read()));
}

void ShuffleNetV2::thread_tmp_1467_cast_fu_29027_p1() {
    tmp_1467_cast_fu_29027_p1 = esl_sext<18,17>(tmp_1246_fu_29021_p2.read());
}

void ShuffleNetV2::thread_tmp_1467_fu_34821_p1() {
    tmp_1467_fu_34821_p1 = co155_reg_12960.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1468_cast_fu_29036_p1() {
    tmp_1468_cast_fu_29036_p1 = esl_sext<32,18>(tmp_1247_fu_29031_p2.read());
}

void ShuffleNetV2::thread_tmp_1468_fu_34837_p2() {
    tmp_1468_fu_34837_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co155_reg_12960.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1469_fu_34853_p4() {
    tmp_1469_fu_34853_p4 = co155_reg_12960.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_146_cast_cast_fu_24558_p1() {
    tmp_146_cast_cast_fu_24558_p1 = esl_sext<9,7>(tmp_111_fu_24552_p2.read());
}

void ShuffleNetV2::thread_tmp_146_fu_27085_p2() {
    tmp_146_fu_27085_p2 = (!co107_cast_fu_27069_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co107_cast_fu_27069_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_1470_fu_34733_p1() {
    tmp_1470_fu_34733_p1 = k68_reg_12949.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1471_fu_34540_p1() {
    tmp_1471_fu_34540_p1 = i154_reg_12927.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1472_fu_34587_p3() {
    tmp_1472_fu_34587_p3 = esl_concat<8,2>(tmp_245_fu_34578_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1473_fu_34599_p2() {
    tmp_1473_fu_34599_p2 = (!p_shl575_cast_fu_34595_p1.read().is_01() || !tmp_365_cast_cast_fu_34583_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl575_cast_fu_34595_p1.read()) - sc_bigint<11>(tmp_365_cast_cast_fu_34583_p1.read()));
}

void ShuffleNetV2::thread_tmp_1474_cast_fu_29102_p1() {
    tmp_1474_cast_fu_29102_p1 = esl_sext<32,8>(tmp_1252_reg_45953.read());
}

void ShuffleNetV2::thread_tmp_1474_fu_34605_p2() {
    tmp_1474_fu_34605_p2 = (!w113_cast_cast_reg_47687.read().is_01() || !tmp_1473_fu_34599_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w113_cast_cast_reg_47687.read()) + sc_biguint<11>(tmp_1473_fu_34599_p2.read()));
}

void ShuffleNetV2::thread_tmp_1475_fu_34621_p2() {
    tmp_1475_fu_34621_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1474_reg_47726.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1476_fu_34626_p2() {
    tmp_1476_fu_34626_p2 = (!tmp_1475_fu_34621_p2.read().is_01() || !tmp_1474_reg_47726.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1475_fu_34621_p2.read()) - sc_biguint<11>(tmp_1474_reg_47726.read()));
}

void ShuffleNetV2::thread_tmp_1477_fu_34631_p2() {
    tmp_1477_fu_34631_p2 = (!h112_cast_cast_reg_47705.read().is_01() || !tmp_1476_fu_34626_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h112_cast_cast_reg_47705.read()) + sc_biguint<11>(tmp_1476_fu_34626_p2.read()));
}

void ShuffleNetV2::thread_tmp_1478_fu_34639_p3() {
    tmp_1478_fu_34639_p3 = esl_concat<10,2>(sum39_reg_47732.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1479_fu_34650_p2() {
    tmp_1479_fu_34650_p2 = (!p_shl577_cast_fu_34646_p1.read().is_01() || !sum39_cast_cast_fu_34636_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl577_cast_fu_34646_p1.read()) - sc_biguint<13>(sum39_cast_cast_fu_34636_p1.read()));
}

void ShuffleNetV2::thread_tmp_147_cast_fu_24596_p1() {
    tmp_147_cast_fu_24596_p1 = esl_sext<32,7>(tmp_112_reg_44532.read());
}

void ShuffleNetV2::thread_tmp_147_fu_27294_p2() {
    tmp_147_fu_27294_p2 = (!p_shl112_cast_fu_27278_p1.read().is_01() || !p_shl113_cast_fu_27290_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl112_cast_fu_27278_p1.read()) - sc_biguint<7>(p_shl113_cast_fu_27290_p1.read()));
}

void ShuffleNetV2::thread_tmp_1480_fu_34656_p2() {
    tmp_1480_fu_34656_p2 = (!w113_cast_cast1_reg_47682.read().is_01() || !tmp_1479_fu_34650_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w113_cast_cast1_reg_47682.read()) + sc_biguint<13>(tmp_1479_fu_34650_p2.read()));
}

void ShuffleNetV2::thread_tmp_1481_fu_34664_p3() {
    tmp_1481_fu_34664_p3 = esl_concat<13,2>(tmp_1480_reg_47743.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1482_fu_34675_p2() {
    tmp_1482_fu_34675_p2 = (!p_shl267_fu_34671_p1.read().is_01() || !tmp_1740_cast_fu_34661_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl267_fu_34671_p1.read()) - sc_bigint<32>(tmp_1740_cast_fu_34661_p1.read()));
}

void ShuffleNetV2::thread_tmp_1483_fu_34681_p2() {
    tmp_1483_fu_34681_p2 = (!h112_cast_reg_47700.read().is_01() || !tmp_1482_fu_34675_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h112_cast_reg_47700.read()) + sc_biguint<32>(tmp_1482_fu_34675_p2.read()));
}

void ShuffleNetV2::thread_tmp_1484_fu_35229_p3() {
    tmp_1484_fu_35229_p3 = esl_concat<7,3>(co157_reg_13015.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1485_fu_35241_p3() {
    tmp_1485_fu_35241_p3 = esl_concat<7,1>(co157_reg_13015.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1486_cast_fu_29474_p1() {
    tmp_1486_cast_fu_29474_p1 = esl_zext<32,10>(tmp_1262_reg_46077.read());
}

void ShuffleNetV2::thread_tmp_1486_fu_35253_p2() {
    tmp_1486_fu_35253_p2 = (!p_shl579_cast_fu_35237_p1.read().is_01() || !p_shl580_cast_fu_35249_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl579_cast_fu_35237_p1.read()) - sc_biguint<11>(p_shl580_cast_fu_35249_p1.read()));
}

void ShuffleNetV2::thread_tmp_1487_fu_35285_p3() {
    tmp_1487_fu_35285_p3 = esl_concat<8,3>(tmp_246_fu_35279_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1488_fu_35297_p3() {
    tmp_1488_fu_35297_p3 = esl_concat<8,1>(tmp_246_fu_35279_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1489_cast_fu_29429_p1() {
    tmp_1489_cast_fu_29429_p1 = esl_sext<13,12>(tmp_1265_fu_29423_p2.read());
}

void ShuffleNetV2::thread_tmp_1489_fu_35309_p2() {
    tmp_1489_fu_35309_p2 = (!p_shl581_cast_fu_35293_p1.read().is_01() || !p_shl582_cast_fu_35305_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl581_cast_fu_35293_p1.read()) - sc_biguint<12>(p_shl582_cast_fu_35305_p1.read()));
}

void ShuffleNetV2::thread_tmp_148_fu_27334_p2() {
    tmp_148_fu_27334_p2 = (!tmp_147_reg_45404.read().is_01() || !ci56_cast_fu_27314_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_147_reg_45404.read()) + sc_biguint<7>(ci56_cast_fu_27314_p1.read()));
}

void ShuffleNetV2::thread_tmp_1490_cast_fu_29438_p1() {
    tmp_1490_cast_fu_29438_p1 = esl_sext<32,13>(tmp_1266_reg_46082.read());
}

void ShuffleNetV2::thread_tmp_1490_fu_35157_p1() {
    tmp_1490_fu_35157_p1 = k70_reg_13004.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1491_fu_34908_p1() {
    tmp_1491_fu_34908_p1 = i156_reg_12982.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1492_fu_34928_p2() {
    tmp_1492_fu_34928_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i156_reg_12982.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1493_fu_34995_p3() {
    tmp_1493_fu_34995_p3 = esl_concat<12,5>(sum80_reg_47852.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1494_fu_35006_p3() {
    tmp_1494_fu_35006_p3 = esl_concat<12,3>(sum80_reg_47852.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1495_fu_35017_p2() {
    tmp_1495_fu_35017_p2 = (!p_shl583_cast_fu_35002_p1.read().is_01() || !p_shl584_cast_fu_35013_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl583_cast_fu_35002_p1.read()) - sc_biguint<18>(p_shl584_cast_fu_35013_p1.read()));
}

void ShuffleNetV2::thread_tmp_1496_fu_35027_p2() {
    tmp_1496_fu_35027_p2 = (!ci76_cast1_cast_reg_47820.read().is_01() || !tmp_1757_cast_fu_35023_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci76_cast1_cast_reg_47820.read()) + sc_bigint<19>(tmp_1757_cast_fu_35023_p1.read()));
}

void ShuffleNetV2::thread_tmp_1497_fu_35094_p1() {
    tmp_1497_fu_35094_p1 = grp_fu_34986_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_149_cast_cast_fu_24241_p1() {
    tmp_149_cast_cast_fu_24241_p1 = esl_sext<8,7>(tmp_110_fu_24236_p2.read());
}

void ShuffleNetV2::thread_tmp_149_fu_27642_p2() {
    tmp_149_fu_27642_p2 = (!p_shl114_cast_fu_27626_p1.read().is_01() || !p_shl115_cast_fu_27638_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl114_cast_fu_27626_p1.read()) - sc_biguint<7>(p_shl115_cast_fu_27638_p1.read()));
}

void ShuffleNetV2::thread_tmp_1500_fu_35083_p2() {
    tmp_1500_fu_35083_p2 = (!p_shl585_cast_fu_35069_p3.read().is_01() || !p_shl586_cast_fu_35076_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl585_cast_fu_35069_p3.read()) - sc_biguint<10>(p_shl586_cast_fu_35076_p3.read()));
}

void ShuffleNetV2::thread_tmp_1501_fu_35089_p2() {
    tmp_1501_fu_35089_p2 = (!tmp_370_cast_cast_reg_47833.read().is_01() || !tmp_1500_fu_35083_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_370_cast_cast_reg_47833.read()) + sc_biguint<10>(tmp_1500_fu_35083_p2.read()));
}

void ShuffleNetV2::thread_tmp_1502_fu_35456_p1() {
    tmp_1502_fu_35456_p1 = co159_reg_13048.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1503_fu_35472_p2() {
    tmp_1503_fu_35472_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co159_reg_13048.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1504_fu_35488_p4() {
    tmp_1504_fu_35488_p4 = co159_reg_13048.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_1505_cast_fu_29812_p1() {
    tmp_1505_cast_fu_29812_p1 = esl_sext<18,17>(tmp_1277_fu_29806_p2.read());
}

void ShuffleNetV2::thread_tmp_1505_fu_35339_p2() {
    tmp_1505_fu_35339_p2 = (!h_115_cast_cast_fu_35335_p1.read().is_01() || !tmp_1749_cast_reg_47937.read().is_01())? sc_lv<13>(): (sc_biguint<13>(h_115_cast_cast_fu_35335_p1.read()) + sc_bigint<13>(tmp_1749_cast_reg_47937.read()));
}

void ShuffleNetV2::thread_tmp_1506_cast_fu_29821_p1() {
    tmp_1506_cast_fu_29821_p1 = esl_sext<32,18>(tmp_1278_fu_29816_p2.read());
}

void ShuffleNetV2::thread_tmp_1506_fu_35344_p1() {
    tmp_1506_fu_35344_p1 = tmp_1505_fu_35339_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1507_fu_35364_p2() {
    tmp_1507_fu_35364_p2 = (!p_shl587_cast_fu_35348_p3.read().is_01() || !p_shl588_cast_fu_35356_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl587_cast_fu_35348_p3.read()) - sc_biguint<14>(p_shl588_cast_fu_35356_p3.read()));
}

void ShuffleNetV2::thread_tmp_1508_fu_35370_p2() {
    tmp_1508_fu_35370_p2 = (!h_115_cast_cast1_fu_35331_p1.read().is_01() || !tmp_1746_cast_reg_47924.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h_115_cast_cast1_fu_35331_p1.read()) + sc_bigint<12>(tmp_1746_cast_reg_47924.read()));
}

void ShuffleNetV2::thread_tmp_1509_fu_35375_p1() {
    tmp_1509_fu_35375_p1 = tmp_1508_fu_35370_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_150_cast_cast_fu_24291_p1() {
    tmp_150_cast_cast_fu_24291_p1 = esl_sext<9,7>(tmp_113_fu_24285_p2.read());
}

void ShuffleNetV2::thread_tmp_150_fu_27652_p2() {
    tmp_150_fu_27652_p2 = (!tmp_149_fu_27642_p2.read().is_01() || !i104_cast1_reg_45481.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_149_fu_27642_p2.read()) + sc_biguint<7>(i104_cast1_reg_45481.read()));
}

void ShuffleNetV2::thread_tmp_1510_fu_35395_p2() {
    tmp_1510_fu_35395_p2 = (!p_shl589_cast_fu_35379_p3.read().is_01() || !p_shl590_cast_fu_35387_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl589_cast_fu_35379_p3.read()) - sc_biguint<13>(p_shl590_cast_fu_35387_p3.read()));
}

void ShuffleNetV2::thread_tmp_1511_fu_35421_p2() {
    tmp_1511_fu_35421_p2 = (!tmp_1507_reg_47950.read().is_01() || !w_116_cast_cast_fu_35417_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1507_reg_47950.read()) + sc_biguint<14>(w_116_cast_cast_fu_35417_p1.read()));
}

void ShuffleNetV2::thread_tmp_1512_cast_fu_29887_p1() {
    tmp_1512_cast_fu_29887_p1 = esl_sext<32,8>(tmp_1283_reg_46213.read());
}

void ShuffleNetV2::thread_tmp_1512_fu_35431_p2() {
    tmp_1512_fu_35431_p2 = (!tmp_1510_reg_47955.read().is_01() || !w_116_cast_cast1_fu_35413_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1510_reg_47955.read()) + sc_biguint<13>(w_116_cast_cast1_fu_35413_p1.read()));
}

void ShuffleNetV2::thread_tmp_1513_fu_35792_p1() {
    tmp_1513_fu_35792_p1 = k72_reg_13092.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1514_fu_35543_p1() {
    tmp_1514_fu_35543_p1 = i160_reg_13070.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1515_fu_35563_p2() {
    tmp_1515_fu_35563_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i160_reg_13070.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1516_fu_35630_p3() {
    tmp_1516_fu_35630_p3 = esl_concat<12,5>(sum82_reg_48033.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1517_fu_35641_p3() {
    tmp_1517_fu_35641_p3 = esl_concat<12,3>(sum82_reg_48033.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1518_fu_35652_p2() {
    tmp_1518_fu_35652_p2 = (!p_shl591_cast_fu_35637_p1.read().is_01() || !p_shl592_cast_fu_35648_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl591_cast_fu_35637_p1.read()) - sc_biguint<18>(p_shl592_cast_fu_35648_p1.read()));
}

void ShuffleNetV2::thread_tmp_1519_fu_35662_p2() {
    tmp_1519_fu_35662_p2 = (!ci78_cast1_cast_reg_48001.read().is_01() || !tmp_1784_cast_fu_35658_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci78_cast1_cast_reg_48001.read()) + sc_bigint<19>(tmp_1784_cast_fu_35658_p1.read()));
}

void ShuffleNetV2::thread_tmp_151_fu_27383_p2() {
    tmp_151_fu_27383_p2 = (!p_shl116_cast_fu_27367_p1.read().is_01() || !p_shl117_cast_fu_27379_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl116_cast_fu_27367_p1.read()) - sc_biguint<7>(p_shl117_cast_fu_27379_p1.read()));
}

void ShuffleNetV2::thread_tmp_1520_fu_35729_p1() {
    tmp_1520_fu_35729_p1 = grp_fu_35621_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_1523_fu_35718_p2() {
    tmp_1523_fu_35718_p2 = (!p_shl593_cast_fu_35704_p3.read().is_01() || !p_shl594_cast_fu_35711_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl593_cast_fu_35704_p3.read()) - sc_biguint<10>(p_shl594_cast_fu_35711_p3.read()));
}

void ShuffleNetV2::thread_tmp_1524_fu_35724_p2() {
    tmp_1524_fu_35724_p2 = (!tmp_383_cast_cast_reg_48014.read().is_01() || !tmp_1523_fu_35718_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_383_cast_cast_reg_48014.read()) + sc_biguint<10>(tmp_1523_fu_35718_p2.read()));
}

void ShuffleNetV2::thread_tmp_1525_fu_36217_p1() {
    tmp_1525_fu_36217_p1 = co163_reg_13169.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1526_fu_36233_p2() {
    tmp_1526_fu_36233_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co163_reg_13169.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1527_fu_36249_p4() {
    tmp_1527_fu_36249_p4 = co163_reg_13169.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_1528_fu_36129_p1() {
    tmp_1528_fu_36129_p1 = k74_reg_13158.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1529_fu_35936_p1() {
    tmp_1529_fu_35936_p1 = i165_reg_13136.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_152_cast_cast_fu_24330_p1() {
    tmp_152_cast_cast_fu_24330_p1 = esl_sext<9,8>(tmp_115_fu_24324_p2.read());
}

void ShuffleNetV2::thread_tmp_152_cast_fu_27449_p1() {
    tmp_152_cast_fu_27449_p1 = esl_sext<10,9>(tmp_152_reg_45440.read());
}

void ShuffleNetV2::thread_tmp_152_fu_27393_p2() {
    tmp_152_fu_27393_p2 = (!tmp_212_cast_cast_fu_27389_p1.read().is_01() || !tmp_207_cast_cast_reg_45409.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_212_cast_cast_fu_27389_p1.read()) + sc_biguint<9>(tmp_207_cast_cast_reg_45409.read()));
}

void ShuffleNetV2::thread_tmp_1530_fu_35983_p3() {
    tmp_1530_fu_35983_p3 = esl_concat<8,2>(tmp_264_fu_35974_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1531_fu_35995_p2() {
    tmp_1531_fu_35995_p2 = (!p_shl595_cast_fu_35991_p1.read().is_01() || !tmp_396_cast_cast_fu_35979_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl595_cast_fu_35991_p1.read()) - sc_bigint<11>(tmp_396_cast_cast_fu_35979_p1.read()));
}

void ShuffleNetV2::thread_tmp_1532_fu_36001_p2() {
    tmp_1532_fu_36001_p2 = (!w117_cast_cast_reg_48128.read().is_01() || !tmp_1531_fu_35995_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w117_cast_cast_reg_48128.read()) + sc_biguint<11>(tmp_1531_fu_35995_p2.read()));
}

void ShuffleNetV2::thread_tmp_1533_cast_fu_30132_p1() {
    tmp_1533_cast_fu_30132_p1 = esl_zext<32,15>(tmp_1304_fu_30127_p2.read());
}

void ShuffleNetV2::thread_tmp_1533_fu_36017_p2() {
    tmp_1533_fu_36017_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1532_reg_48167.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1534_cast_fu_30334_p1() {
    tmp_1534_cast_fu_30334_p1 = esl_zext<32,15>(tmp_1305_fu_30329_p2.read());
}

void ShuffleNetV2::thread_tmp_1534_fu_36022_p2() {
    tmp_1534_fu_36022_p2 = (!tmp_1533_fu_36017_p2.read().is_01() || !tmp_1532_reg_48167.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1533_fu_36017_p2.read()) - sc_biguint<11>(tmp_1532_reg_48167.read()));
}

void ShuffleNetV2::thread_tmp_1535_cast_fu_30344_p1() {
    tmp_1535_cast_fu_30344_p1 = esl_zext<32,14>(tmp_1306_reg_46356.read());
}

void ShuffleNetV2::thread_tmp_1535_fu_36027_p2() {
    tmp_1535_fu_36027_p2 = (!h116_cast_cast_reg_48146.read().is_01() || !tmp_1534_fu_36022_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h116_cast_cast_reg_48146.read()) + sc_biguint<11>(tmp_1534_fu_36022_p2.read()));
}

void ShuffleNetV2::thread_tmp_1536_fu_36035_p3() {
    tmp_1536_fu_36035_p3 = esl_concat<10,2>(sum41_reg_48173.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1537_fu_36046_p2() {
    tmp_1537_fu_36046_p2 = (!p_shl597_cast_fu_36042_p1.read().is_01() || !sum41_cast_cast_fu_36032_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl597_cast_fu_36042_p1.read()) - sc_biguint<13>(sum41_cast_cast_fu_36032_p1.read()));
}

void ShuffleNetV2::thread_tmp_1538_fu_36052_p2() {
    tmp_1538_fu_36052_p2 = (!w117_cast_cast1_reg_48123.read().is_01() || !tmp_1537_fu_36046_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w117_cast_cast1_reg_48123.read()) + sc_biguint<13>(tmp_1537_fu_36046_p2.read()));
}

void ShuffleNetV2::thread_tmp_1539_fu_36060_p3() {
    tmp_1539_fu_36060_p3 = esl_concat<13,2>(tmp_1538_reg_48184.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_153_fu_27422_p2() {
    tmp_153_fu_27422_p2 = (!p_shl118_cast_fu_27406_p1.read().is_01() || !p_shl119_cast_fu_27418_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl118_cast_fu_27406_p1.read()) - sc_biguint<8>(p_shl119_cast_fu_27418_p1.read()));
}

void ShuffleNetV2::thread_tmp_1540_fu_36071_p2() {
    tmp_1540_fu_36071_p2 = (!p_shl273_fu_36067_p1.read().is_01() || !tmp_1806_cast_fu_36057_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl273_fu_36067_p1.read()) - sc_bigint<32>(tmp_1806_cast_fu_36057_p1.read()));
}

void ShuffleNetV2::thread_tmp_1541_fu_36077_p2() {
    tmp_1541_fu_36077_p2 = (!h116_cast_reg_48141.read().is_01() || !tmp_1540_fu_36071_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h116_cast_reg_48141.read()) + sc_biguint<32>(tmp_1540_fu_36071_p2.read()));
}

void ShuffleNetV2::thread_tmp_1542_fu_36633_p3() {
    tmp_1542_fu_36633_p3 = esl_concat<7,3>(co165_reg_13224.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1543_fu_36645_p3() {
    tmp_1543_fu_36645_p3 = esl_concat<7,1>(co165_reg_13224.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1544_fu_36657_p2() {
    tmp_1544_fu_36657_p2 = (!p_shl599_cast_fu_36641_p1.read().is_01() || !p_shl600_cast_fu_36653_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl599_cast_fu_36641_p1.read()) - sc_biguint<11>(p_shl600_cast_fu_36653_p1.read()));
}

void ShuffleNetV2::thread_tmp_1545_fu_36561_p1() {
    tmp_1545_fu_36561_p1 = k76_reg_13213.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1546_cast_fu_30586_p1() {
    tmp_1546_cast_fu_30586_p1 = esl_sext<18,17>(tmp_1313_fu_30580_p2.read());
}

void ShuffleNetV2::thread_tmp_1546_fu_36304_p1() {
    tmp_1546_fu_36304_p1 = i167_reg_13191.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1547_cast_fu_30595_p1() {
    tmp_1547_cast_fu_30595_p1 = esl_sext<32,18>(tmp_1314_fu_30590_p2.read());
}

void ShuffleNetV2::thread_tmp_1547_fu_36324_p2() {
    tmp_1547_fu_36324_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i167_reg_13191.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1548_fu_36391_p3() {
    tmp_1548_fu_36391_p3 = esl_concat<11,5>(sum85_reg_48293.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1549_fu_36398_p1() {
    tmp_1549_fu_36398_p1 = esl_sext<17,16>(tmp_1548_fu_36391_p3.read());
}

void ShuffleNetV2::thread_tmp_154_cast_cast_fu_24899_p1() {
    tmp_154_cast_cast_fu_24899_p1 = esl_sext<8,7>(tmp_117_fu_24893_p2.read());
}

void ShuffleNetV2::thread_tmp_154_fu_28075_p2() {
    tmp_154_fu_28075_p2 = (!p_shl122_cast_fu_28059_p1.read().is_01() || !p_shl123_cast_fu_28071_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl122_cast_fu_28059_p1.read()) - sc_biguint<7>(p_shl123_cast_fu_28071_p1.read()));
}

void ShuffleNetV2::thread_tmp_1550_fu_36406_p3() {
    tmp_1550_fu_36406_p3 = esl_concat<11,3>(sum85_reg_48293.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1551_fu_36413_p1() {
    tmp_1551_fu_36413_p1 = esl_sext<15,14>(tmp_1550_fu_36406_p3.read());
}

void ShuffleNetV2::thread_tmp_1552_fu_36421_p2() {
    tmp_1552_fu_36421_p2 = (!p_shl601_cast_fu_36402_p1.read().is_01() || !p_shl602_cast_fu_36417_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl601_cast_fu_36402_p1.read()) - sc_biguint<18>(p_shl602_cast_fu_36417_p1.read()));
}

void ShuffleNetV2::thread_tmp_1553_cast_fu_30661_p1() {
    tmp_1553_cast_fu_30661_p1 = esl_sext<32,8>(tmp_1319_reg_46438.read());
}

void ShuffleNetV2::thread_tmp_1553_fu_36431_p2() {
    tmp_1553_fu_36431_p2 = (!tmp_1822_cast_fu_36427_p1.read().is_01() || !ci80_cast1_cast_reg_48261.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp_1822_cast_fu_36427_p1.read()) + sc_biguint<19>(ci80_cast1_cast_reg_48261.read()));
}

void ShuffleNetV2::thread_tmp_1554_fu_36498_p1() {
    tmp_1554_fu_36498_p1 = grp_fu_36382_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_1557_fu_36487_p2() {
    tmp_1557_fu_36487_p2 = (!p_shl603_cast_fu_36473_p3.read().is_01() || !p_shl604_cast_fu_36480_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl603_cast_fu_36473_p3.read()) - sc_biguint<10>(p_shl604_cast_fu_36480_p3.read()));
}

void ShuffleNetV2::thread_tmp_1558_fu_36493_p2() {
    tmp_1558_fu_36493_p2 = (!tmp_1557_fu_36487_p2.read().is_01() || !tmp_401_cast_cast_reg_48274.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1557_fu_36487_p2.read()) + sc_bigint<10>(tmp_401_cast_cast_reg_48274.read()));
}

void ShuffleNetV2::thread_tmp_1559_fu_36756_p3() {
    tmp_1559_fu_36756_p3 = esl_concat<7,3>(co167_reg_13257.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_155_cast_fu_24937_p1() {
    tmp_155_cast_fu_24937_p1 = esl_sext<32,7>(tmp_118_reg_44665.read());
}

void ShuffleNetV2::thread_tmp_155_fu_27987_p2() {
    tmp_155_fu_27987_p2 = (!p_shl120_cast_fu_27971_p1.read().is_01() || !p_shl121_cast_fu_27983_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl120_cast_fu_27971_p1.read()) - sc_biguint<7>(p_shl121_cast_fu_27983_p1.read()));
}

void ShuffleNetV2::thread_tmp_1560_fu_36768_p3() {
    tmp_1560_fu_36768_p3 = esl_concat<7,1>(co167_reg_13257.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1561_fu_36780_p2() {
    tmp_1561_fu_36780_p2 = (!p_shl605_cast_fu_36764_p1.read().is_01() || !p_shl606_cast_fu_36776_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl605_cast_fu_36764_p1.read()) - sc_biguint<11>(p_shl606_cast_fu_36776_p1.read()));
}

void ShuffleNetV2::thread_tmp_1562_fu_36812_p3() {
    tmp_1562_fu_36812_p3 = esl_concat<8,3>(tmp_270_fu_36806_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1563_fu_36824_p3() {
    tmp_1563_fu_36824_p3 = esl_concat<8,1>(tmp_270_fu_36806_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1564_fu_36836_p2() {
    tmp_1564_fu_36836_p2 = (!p_shl607_cast_fu_36820_p1.read().is_01() || !p_shl608_cast_fu_36832_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl607_cast_fu_36820_p1.read()) - sc_biguint<12>(p_shl608_cast_fu_36832_p1.read()));
}

void ShuffleNetV2::thread_tmp_1565_cast_fu_31025_p1() {
    tmp_1565_cast_fu_31025_p1 = esl_zext<32,10>(tmp_1329_reg_46562.read());
}

void ShuffleNetV2::thread_tmp_1565_fu_36695_p2() {
    tmp_1565_fu_36695_p2 = (!tmp_1812_cast_reg_48365.read().is_01() || !h_119_cast_cast_fu_36691_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1812_cast_reg_48365.read()) + sc_biguint<12>(h_119_cast_cast_fu_36691_p1.read()));
}

void ShuffleNetV2::thread_tmp_1566_fu_36700_p1() {
    tmp_1566_fu_36700_p1 = tmp_1565_fu_36695_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1567_cast_fu_30980_p1() {
    tmp_1567_cast_fu_30980_p1 = esl_sext<14,13>(tmp_1331_fu_30974_p2.read());
}

void ShuffleNetV2::thread_tmp_1567_fu_36712_p3() {
    tmp_1567_fu_36712_p3 = esl_concat<12,1>(tmp_1565_fu_36695_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1568_cast_fu_30989_p1() {
    tmp_1568_cast_fu_30989_p1 = esl_sext<32,14>(tmp_1332_reg_46567.read());
}

void ShuffleNetV2::thread_tmp_1568_fu_36724_p2() {
    tmp_1568_fu_36724_p2 = (!p_shl609_cast_fu_36704_p3.read().is_01() || !p_shl610_cast_fu_36720_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl609_cast_fu_36704_p3.read()) - sc_bigint<14>(p_shl610_cast_fu_36720_p1.read()));
}

void ShuffleNetV2::thread_tmp_1569_fu_36983_p1() {
    tmp_1569_fu_36983_p1 = co169_reg_13290.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_156_fu_27997_p2() {
    tmp_156_fu_27997_p2 = (!tmp_155_fu_27987_p2.read().is_01() || !i107_cast1_reg_45614.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_155_fu_27987_p2.read()) + sc_biguint<7>(i107_cast1_reg_45614.read()));
}

void ShuffleNetV2::thread_tmp_1570_fu_36999_p2() {
    tmp_1570_fu_36999_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co169_reg_13290.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1571_fu_37015_p4() {
    tmp_1571_fu_37015_p4 = co169_reg_13290.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_1572_fu_36866_p2() {
    tmp_1572_fu_36866_p2 = (!h_121_cast_cast_fu_36862_p1.read().is_01() || !tmp_1835_cast_reg_48422.read().is_01())? sc_lv<13>(): (sc_biguint<13>(h_121_cast_cast_fu_36862_p1.read()) + sc_bigint<13>(tmp_1835_cast_reg_48422.read()));
}

void ShuffleNetV2::thread_tmp_1573_fu_36871_p1() {
    tmp_1573_fu_36871_p1 = tmp_1572_fu_36866_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1574_fu_36891_p2() {
    tmp_1574_fu_36891_p2 = (!p_shl611_cast_fu_36875_p3.read().is_01() || !p_shl612_cast_fu_36883_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl611_cast_fu_36875_p3.read()) - sc_biguint<14>(p_shl612_cast_fu_36883_p3.read()));
}

void ShuffleNetV2::thread_tmp_1575_fu_36897_p2() {
    tmp_1575_fu_36897_p2 = (!h_121_cast_cast1_fu_36858_p1.read().is_01() || !tmp_1832_cast_reg_48409.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h_121_cast_cast1_fu_36858_p1.read()) + sc_bigint<12>(tmp_1832_cast_reg_48409.read()));
}

void ShuffleNetV2::thread_tmp_1576_fu_36902_p1() {
    tmp_1576_fu_36902_p1 = tmp_1575_fu_36897_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1577_fu_36922_p2() {
    tmp_1577_fu_36922_p2 = (!p_shl613_cast_fu_36906_p3.read().is_01() || !p_shl614_cast_fu_36914_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl613_cast_fu_36906_p3.read()) - sc_biguint<13>(p_shl614_cast_fu_36914_p3.read()));
}

void ShuffleNetV2::thread_tmp_1578_fu_36746_p2() {
    tmp_1578_fu_36746_p2 = (!tmp_1568_reg_48386.read().is_01() || !w_120_cast_cast_fu_36742_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1568_reg_48386.read()) + sc_biguint<14>(w_120_cast_cast_fu_36742_p1.read()));
}

void ShuffleNetV2::thread_tmp_1579_fu_36948_p2() {
    tmp_1579_fu_36948_p2 = (!tmp_1574_reg_48435.read().is_01() || !w_122_cast_cast_fu_36944_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1574_reg_48435.read()) + sc_biguint<14>(w_122_cast_cast_fu_36944_p1.read()));
}

void ShuffleNetV2::thread_tmp_157_fu_28115_p2() {
    tmp_157_fu_28115_p2 = (!tmp_154_reg_45664.read().is_01() || !ci58_cast_fu_28095_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_154_reg_45664.read()) + sc_biguint<7>(ci58_cast_fu_28095_p1.read()));
}

void ShuffleNetV2::thread_tmp_1580_fu_36958_p2() {
    tmp_1580_fu_36958_p2 = (!tmp_1577_reg_48440.read().is_01() || !w_122_cast_cast1_fu_36940_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1577_reg_48440.read()) + sc_biguint<13>(w_122_cast_cast1_fu_36940_p1.read()));
}

void ShuffleNetV2::thread_tmp_1581_fu_37319_p1() {
    tmp_1581_fu_37319_p1 = k78_reg_13334.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1582_fu_37070_p1() {
    tmp_1582_fu_37070_p1 = i171_reg_13312.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1583_fu_37090_p2() {
    tmp_1583_fu_37090_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i171_reg_13312.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1584_fu_37157_p3() {
    tmp_1584_fu_37157_p3 = esl_concat<13,5>(sum87_reg_48518.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1585_cast_fu_31371_p1() {
    tmp_1585_cast_fu_31371_p1 = esl_sext<18,17>(tmp_1345_fu_31365_p2.read());
}

void ShuffleNetV2::thread_tmp_1585_fu_37168_p3() {
    tmp_1585_fu_37168_p3 = esl_concat<13,3>(sum87_reg_48518.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1586_cast_fu_31380_p1() {
    tmp_1586_cast_fu_31380_p1 = esl_sext<32,18>(tmp_1346_fu_31375_p2.read());
}

void ShuffleNetV2::thread_tmp_1586_fu_37179_p2() {
    tmp_1586_fu_37179_p2 = (!p_shl615_cast_fu_37164_p1.read().is_01() || !p_shl616_cast_fu_37175_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl615_cast_fu_37164_p1.read()) - sc_biguint<19>(p_shl616_cast_fu_37175_p1.read()));
}

void ShuffleNetV2::thread_tmp_1587_fu_37189_p2() {
    tmp_1587_fu_37189_p2 = (!ci82_cast1_cast_reg_48486.read().is_01() || !tmp_1860_cast_fu_37185_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci82_cast1_cast_reg_48486.read()) + sc_bigint<20>(tmp_1860_cast_fu_37185_p1.read()));
}

void ShuffleNetV2::thread_tmp_1588_fu_37256_p1() {
    tmp_1588_fu_37256_p1 = grp_fu_37148_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_158_fu_27786_p2() {
    tmp_158_fu_27786_p2 = (!p_shl124_cast_fu_27770_p1.read().is_01() || !p_shl125_cast_fu_27782_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl124_cast_fu_27770_p1.read()) - sc_biguint<7>(p_shl125_cast_fu_27782_p1.read()));
}

void ShuffleNetV2::thread_tmp_1591_fu_37245_p2() {
    tmp_1591_fu_37245_p2 = (!p_shl617_cast_fu_37231_p3.read().is_01() || !p_shl618_cast_fu_37238_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl617_cast_fu_37231_p3.read()) - sc_biguint<10>(p_shl618_cast_fu_37238_p3.read()));
}

void ShuffleNetV2::thread_tmp_1592_cast_fu_31446_p1() {
    tmp_1592_cast_fu_31446_p1 = esl_sext<32,8>(tmp_1351_reg_46698.read());
}

void ShuffleNetV2::thread_tmp_1592_fu_37251_p2() {
    tmp_1592_fu_37251_p2 = (!tmp_414_cast_cast_reg_48499.read().is_01() || !tmp_1591_fu_37245_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_414_cast_cast_reg_48499.read()) + sc_biguint<10>(tmp_1591_fu_37245_p2.read()));
}

void ShuffleNetV2::thread_tmp_1593_fu_37756_p1() {
    tmp_1593_fu_37756_p1 = co173_reg_13411.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1594_fu_37772_p2() {
    tmp_1594_fu_37772_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co173_reg_13411.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1595_fu_37788_p4() {
    tmp_1595_fu_37788_p4 = co173_reg_13411.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_1596_fu_37668_p1() {
    tmp_1596_fu_37668_p1 = k80_reg_13400.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1597_fu_37463_p1() {
    tmp_1597_fu_37463_p1 = i176_reg_13378.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1598_fu_37510_p3() {
    tmp_1598_fu_37510_p3 = esl_concat<8,2>(tmp_283_fu_37501_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1599_fu_37522_p2() {
    tmp_1599_fu_37522_p2 = (!p_shl619_cast_fu_37518_p1.read().is_01() || !tmp_427_cast_cast_fu_37506_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl619_cast_fu_37518_p1.read()) - sc_bigint<11>(tmp_427_cast_cast_fu_37506_p1.read()));
}

void ShuffleNetV2::thread_tmp_159_fu_27796_p2() {
    tmp_159_fu_27796_p2 = (!tmp_158_fu_27786_p2.read().is_01() || !co112_cast_reg_45523.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_158_fu_27786_p2.read()) + sc_biguint<7>(co112_cast_reg_45523.read()));
}

void ShuffleNetV2::thread_tmp_1600_fu_37528_p2() {
    tmp_1600_fu_37528_p2 = (!tmp_1599_fu_37522_p2.read().is_01() || !w123_cast_cast_reg_48613.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1599_fu_37522_p2.read()) + sc_biguint<11>(w123_cast_cast_reg_48613.read()));
}

void ShuffleNetV2::thread_tmp_1601_fu_37544_p2() {
    tmp_1601_fu_37544_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1600_reg_48652.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1602_fu_37549_p2() {
    tmp_1602_fu_37549_p2 = (!tmp_1601_fu_37544_p2.read().is_01() || !tmp_1600_reg_48652.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1601_fu_37544_p2.read()) - sc_biguint<11>(tmp_1600_reg_48652.read()));
}

void ShuffleNetV2::thread_tmp_1603_fu_37554_p2() {
    tmp_1603_fu_37554_p2 = (!tmp_1602_fu_37549_p2.read().is_01() || !h122_cast_cast_reg_48631.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1602_fu_37549_p2.read()) + sc_biguint<11>(h122_cast_cast_reg_48631.read()));
}

void ShuffleNetV2::thread_tmp_1604_fu_37566_p3() {
    tmp_1604_fu_37566_p3 = esl_concat<9,2>(sum43_reg_48658.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1605_fu_37573_p1() {
    tmp_1605_fu_37573_p1 = esl_sext<12,11>(tmp_1604_fu_37566_p3.read());
}

void ShuffleNetV2::thread_tmp_1606_fu_37581_p2() {
    tmp_1606_fu_37581_p2 = (!p_shl621_cast_fu_37577_p1.read().is_01() || !sum43_cast_cast_fu_37562_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl621_cast_fu_37577_p1.read()) - sc_biguint<13>(sum43_cast_cast_fu_37562_p1.read()));
}

void ShuffleNetV2::thread_tmp_1607_fu_37591_p2() {
    tmp_1607_fu_37591_p2 = (!tmp_1882_cast_fu_37587_p1.read().is_01() || !w123_cast_cast1_reg_48608.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_1882_cast_fu_37587_p1.read()) + sc_biguint<14>(w123_cast_cast1_reg_48608.read()));
}

void ShuffleNetV2::thread_tmp_1608_fu_37599_p3() {
    tmp_1608_fu_37599_p3 = esl_concat<14,2>(tmp_1607_reg_48669.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1609_fu_37610_p2() {
    tmp_1609_fu_37610_p2 = (!p_shl275_fu_37606_p1.read().is_01() || !tmp_1883_cast_fu_37596_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl275_fu_37606_p1.read()) - sc_bigint<32>(tmp_1883_cast_fu_37596_p1.read()));
}

void ShuffleNetV2::thread_tmp_160_cast_cast_fu_25001_p1() {
    tmp_160_cast_cast_fu_25001_p1 = esl_zext<9,4>(tmp_1061_fu_24991_p4.read());
}

void ShuffleNetV2::thread_tmp_160_fu_28423_p2() {
    tmp_160_fu_28423_p2 = (!p_shl126_cast_fu_28407_p1.read().is_01() || !p_shl127_cast_fu_28419_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl126_cast_fu_28407_p1.read()) - sc_biguint<7>(p_shl127_cast_fu_28419_p1.read()));
}

void ShuffleNetV2::thread_tmp_1610_fu_37616_p2() {
    tmp_1610_fu_37616_p2 = (!tmp_1609_fu_37610_p2.read().is_01() || !h122_cast_reg_48626.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1609_fu_37610_p2.read()) + sc_biguint<32>(h122_cast_reg_48626.read()));
}

void ShuffleNetV2::thread_tmp_1611_fu_38164_p3() {
    tmp_1611_fu_38164_p3 = esl_concat<7,3>(co175_reg_13466.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1612_fu_38176_p3() {
    tmp_1612_fu_38176_p3 = esl_concat<7,1>(co175_reg_13466.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1613_cast_fu_31695_p1() {
    tmp_1613_cast_fu_31695_p1 = esl_zext<32,15>(tmp_1372_fu_31690_p2.read());
}

void ShuffleNetV2::thread_tmp_1613_fu_38188_p2() {
    tmp_1613_fu_38188_p2 = (!p_shl623_cast_fu_38172_p1.read().is_01() || !p_shl624_cast_fu_38184_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl623_cast_fu_38172_p1.read()) - sc_biguint<11>(p_shl624_cast_fu_38184_p1.read()));
}

void ShuffleNetV2::thread_tmp_1614_cast_fu_31897_p1() {
    tmp_1614_cast_fu_31897_p1 = esl_zext<32,15>(tmp_1373_fu_31892_p2.read());
}

void ShuffleNetV2::thread_tmp_1614_fu_38092_p1() {
    tmp_1614_fu_38092_p1 = k82_reg_13455.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1615_cast_fu_31907_p1() {
    tmp_1615_cast_fu_31907_p1 = esl_zext<32,14>(tmp_1374_reg_46841.read());
}

void ShuffleNetV2::thread_tmp_1615_fu_37843_p1() {
    tmp_1615_fu_37843_p1 = i178_reg_13433.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1616_fu_37863_p2() {
    tmp_1616_fu_37863_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i178_reg_13433.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1617_fu_37930_p3() {
    tmp_1617_fu_37930_p3 = esl_concat<13,5>(sum90_reg_48778.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1618_fu_37941_p3() {
    tmp_1618_fu_37941_p3 = esl_concat<13,3>(sum90_reg_48778.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1619_fu_37952_p2() {
    tmp_1619_fu_37952_p2 = (!p_shl625_cast_fu_37937_p1.read().is_01() || !p_shl626_cast_fu_37948_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl625_cast_fu_37937_p1.read()) - sc_biguint<19>(p_shl626_cast_fu_37948_p1.read()));
}

void ShuffleNetV2::thread_tmp_161_cast_fu_24706_p1() {
    tmp_161_cast_fu_24706_p1 = esl_sext<9,7>(tmp_120_fu_24700_p2.read());
}

void ShuffleNetV2::thread_tmp_161_fu_28433_p2() {
    tmp_161_fu_28433_p2 = (!tmp_160_fu_28423_p2.read().is_01() || !i111_cast1_reg_45741.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_160_fu_28423_p2.read()) + sc_biguint<7>(i111_cast1_reg_45741.read()));
}

void ShuffleNetV2::thread_tmp_1620_fu_37962_p2() {
    tmp_1620_fu_37962_p2 = (!ci84_cast1_cast_reg_48746.read().is_01() || !tmp_1897_cast_fu_37958_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci84_cast1_cast_reg_48746.read()) + sc_bigint<20>(tmp_1897_cast_fu_37958_p1.read()));
}

void ShuffleNetV2::thread_tmp_1621_fu_38029_p1() {
    tmp_1621_fu_38029_p1 = grp_fu_37921_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_1624_fu_38018_p2() {
    tmp_1624_fu_38018_p2 = (!p_shl627_cast_fu_38004_p3.read().is_01() || !p_shl628_cast_fu_38011_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl627_cast_fu_38004_p3.read()) - sc_biguint<10>(p_shl628_cast_fu_38011_p3.read()));
}

void ShuffleNetV2::thread_tmp_1625_fu_38024_p2() {
    tmp_1625_fu_38024_p2 = (!tmp_432_cast_cast_reg_48759.read().is_01() || !tmp_1624_fu_38018_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_432_cast_cast_reg_48759.read()) + sc_biguint<10>(tmp_1624_fu_38018_p2.read()));
}

void ShuffleNetV2::thread_tmp_1626_cast_fu_32149_p1() {
    tmp_1626_cast_fu_32149_p1 = esl_sext<18,17>(tmp_1381_fu_32143_p2.read());
}

void ShuffleNetV2::thread_tmp_1626_fu_38287_p3() {
    tmp_1626_fu_38287_p3 = esl_concat<7,3>(co177_reg_13499.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1627_cast_fu_32158_p1() {
    tmp_1627_cast_fu_32158_p1 = esl_sext<32,18>(tmp_1382_fu_32153_p2.read());
}

void ShuffleNetV2::thread_tmp_1627_fu_38299_p3() {
    tmp_1627_fu_38299_p3 = esl_concat<7,1>(co177_reg_13499.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1628_fu_38311_p2() {
    tmp_1628_fu_38311_p2 = (!p_shl629_cast_fu_38295_p1.read().is_01() || !p_shl630_cast_fu_38307_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl629_cast_fu_38295_p1.read()) - sc_biguint<11>(p_shl630_cast_fu_38307_p1.read()));
}

void ShuffleNetV2::thread_tmp_1629_fu_38343_p3() {
    tmp_1629_fu_38343_p3 = esl_concat<8,3>(tmp_289_fu_38337_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_162_cast_cast_fu_24715_p1() {
    tmp_162_cast_cast_fu_24715_p1 = esl_sext<10,7>(tmp_121_fu_24710_p2.read());
}

void ShuffleNetV2::thread_tmp_162_fu_28164_p2() {
    tmp_162_fu_28164_p2 = (!p_shl128_cast_fu_28148_p1.read().is_01() || !p_shl129_cast_fu_28160_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl128_cast_fu_28148_p1.read()) - sc_biguint<7>(p_shl129_cast_fu_28160_p1.read()));
}

void ShuffleNetV2::thread_tmp_1630_fu_38355_p3() {
    tmp_1630_fu_38355_p3 = esl_concat<8,1>(tmp_289_fu_38337_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1631_fu_38367_p2() {
    tmp_1631_fu_38367_p2 = (!p_shl631_cast_fu_38351_p1.read().is_01() || !p_shl632_cast_fu_38363_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl631_cast_fu_38351_p1.read()) - sc_biguint<12>(p_shl632_cast_fu_38363_p1.read()));
}

void ShuffleNetV2::thread_tmp_1632_fu_38226_p2() {
    tmp_1632_fu_38226_p2 = (!tmp_1889_cast_reg_48850.read().is_01() || !h_125_cast_cast_fu_38222_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1889_cast_reg_48850.read()) + sc_biguint<12>(h_125_cast_cast_fu_38222_p1.read()));
}

void ShuffleNetV2::thread_tmp_1633_cast_fu_32224_p1() {
    tmp_1633_cast_fu_32224_p1 = esl_sext<32,8>(tmp_1387_reg_46923.read());
}

void ShuffleNetV2::thread_tmp_1633_fu_38231_p1() {
    tmp_1633_fu_38231_p1 = tmp_1632_fu_38226_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1634_fu_38243_p3() {
    tmp_1634_fu_38243_p3 = esl_concat<12,1>(tmp_1632_fu_38226_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1635_fu_38255_p2() {
    tmp_1635_fu_38255_p2 = (!p_shl633_cast_fu_38235_p3.read().is_01() || !p_shl634_cast_fu_38251_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl633_cast_fu_38235_p3.read()) - sc_bigint<14>(p_shl634_cast_fu_38251_p1.read()));
}

void ShuffleNetV2::thread_tmp_1636_fu_38514_p1() {
    tmp_1636_fu_38514_p1 = co179_reg_13532.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1637_fu_38530_p2() {
    tmp_1637_fu_38530_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co179_reg_13532.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1638_fu_38546_p4() {
    tmp_1638_fu_38546_p4 = co179_reg_13532.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_1639_fu_38397_p2() {
    tmp_1639_fu_38397_p2 = (!h_127_cast_cast_fu_38393_p1.read().is_01() || !tmp_1910_cast_reg_48907.read().is_01())? sc_lv<13>(): (sc_biguint<13>(h_127_cast_cast_fu_38393_p1.read()) + sc_bigint<13>(tmp_1910_cast_reg_48907.read()));
}

void ShuffleNetV2::thread_tmp_163_cast_fu_28230_p1() {
    tmp_163_cast_fu_28230_p1 = esl_sext<10,9>(tmp_163_reg_45700.read());
}

void ShuffleNetV2::thread_tmp_163_fu_28174_p2() {
    tmp_163_fu_28174_p2 = (!tmp_230_cast_cast_fu_28170_p1.read().is_01() || !tmp_222_cast_cast_reg_45669.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_230_cast_cast_fu_28170_p1.read()) + sc_biguint<9>(tmp_222_cast_cast_reg_45669.read()));
}

void ShuffleNetV2::thread_tmp_1640_fu_38402_p1() {
    tmp_1640_fu_38402_p1 = tmp_1639_fu_38397_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1641_fu_38422_p2() {
    tmp_1641_fu_38422_p2 = (!p_shl635_cast_fu_38406_p3.read().is_01() || !p_shl636_cast_fu_38414_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl635_cast_fu_38406_p3.read()) - sc_biguint<14>(p_shl636_cast_fu_38414_p3.read()));
}

void ShuffleNetV2::thread_tmp_1642_fu_38428_p2() {
    tmp_1642_fu_38428_p2 = (!h_127_cast_cast1_fu_38389_p1.read().is_01() || !tmp_1907_cast_reg_48894.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h_127_cast_cast1_fu_38389_p1.read()) + sc_bigint<12>(tmp_1907_cast_reg_48894.read()));
}

void ShuffleNetV2::thread_tmp_1643_fu_38433_p1() {
    tmp_1643_fu_38433_p1 = tmp_1642_fu_38428_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1644_fu_38453_p2() {
    tmp_1644_fu_38453_p2 = (!p_shl637_cast_fu_38437_p3.read().is_01() || !p_shl638_cast_fu_38445_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl637_cast_fu_38437_p3.read()) - sc_biguint<13>(p_shl638_cast_fu_38445_p3.read()));
}

void ShuffleNetV2::thread_tmp_1645_cast_fu_32588_p1() {
    tmp_1645_cast_fu_32588_p1 = esl_zext<32,10>(tmp_1397_reg_47047.read());
}

void ShuffleNetV2::thread_tmp_1645_fu_38277_p2() {
    tmp_1645_fu_38277_p2 = (!tmp_1635_reg_48871.read().is_01() || !w_126_cast_cast_fu_38273_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1635_reg_48871.read()) + sc_biguint<14>(w_126_cast_cast_fu_38273_p1.read()));
}

void ShuffleNetV2::thread_tmp_1646_fu_38479_p2() {
    tmp_1646_fu_38479_p2 = (!tmp_1641_reg_48920.read().is_01() || !w_128_cast_cast_fu_38475_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1641_reg_48920.read()) + sc_biguint<14>(w_128_cast_cast_fu_38475_p1.read()));
}

void ShuffleNetV2::thread_tmp_1647_fu_38489_p2() {
    tmp_1647_fu_38489_p2 = (!tmp_1644_reg_48925.read().is_01() || !w_128_cast_cast1_fu_38471_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1644_reg_48925.read()) + sc_biguint<13>(w_128_cast_cast1_fu_38471_p1.read()));
}

void ShuffleNetV2::thread_tmp_1648_cast_fu_32552_p1() {
    tmp_1648_cast_fu_32552_p1 = esl_sext<32,13>(tmp_1400_reg_47052.read());
}

void ShuffleNetV2::thread_tmp_1648_fu_38850_p1() {
    tmp_1648_fu_38850_p1 = k84_reg_13576.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1649_fu_38601_p1() {
    tmp_1649_fu_38601_p1 = i182_reg_13554.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_164_fu_28203_p2() {
    tmp_164_fu_28203_p2 = (!p_shl130_cast_fu_28187_p1.read().is_01() || !p_shl131_cast_fu_28199_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl130_cast_fu_28187_p1.read()) - sc_biguint<8>(p_shl131_cast_fu_28199_p1.read()));
}

void ShuffleNetV2::thread_tmp_1650_fu_38621_p2() {
    tmp_1650_fu_38621_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i182_reg_13554.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1651_fu_38688_p3() {
    tmp_1651_fu_38688_p3 = esl_concat<13,5>(sum92_reg_49003.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1652_fu_38699_p3() {
    tmp_1652_fu_38699_p3 = esl_concat<13,3>(sum92_reg_49003.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1653_fu_38710_p2() {
    tmp_1653_fu_38710_p2 = (!p_shl639_cast_fu_38695_p1.read().is_01() || !p_shl640_cast_fu_38706_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl639_cast_fu_38695_p1.read()) - sc_biguint<19>(p_shl640_cast_fu_38706_p1.read()));
}

void ShuffleNetV2::thread_tmp_1654_fu_38720_p2() {
    tmp_1654_fu_38720_p2 = (!ci86_cast1_cast_reg_48971.read().is_01() || !tmp_1935_cast_fu_38716_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci86_cast1_cast_reg_48971.read()) + sc_bigint<20>(tmp_1935_cast_fu_38716_p1.read()));
}

void ShuffleNetV2::thread_tmp_1655_fu_38787_p1() {
    tmp_1655_fu_38787_p1 = grp_fu_38679_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_1658_fu_38776_p2() {
    tmp_1658_fu_38776_p2 = (!p_shl641_cast_fu_38762_p3.read().is_01() || !p_shl642_cast_fu_38769_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl641_cast_fu_38762_p3.read()) - sc_biguint<10>(p_shl642_cast_fu_38769_p3.read()));
}

void ShuffleNetV2::thread_tmp_1659_fu_38782_p2() {
    tmp_1659_fu_38782_p2 = (!tmp_445_cast_cast_reg_48984.read().is_01() || !tmp_1658_fu_38776_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_445_cast_cast_reg_48984.read()) + sc_biguint<10>(tmp_1658_fu_38776_p2.read()));
}

void ShuffleNetV2::thread_tmp_165_cast_fu_25377_p1() {
    tmp_165_cast_fu_25377_p1 = esl_sext<32,7>(tmp_123_reg_44792.read());
}

void ShuffleNetV2::thread_tmp_165_fu_28632_p2() {
    tmp_165_fu_28632_p2 = (!co117_cast_fu_28616_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co117_cast_fu_28616_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_1660_fu_39279_p1() {
    tmp_1660_fu_39279_p1 = co183_reg_13653.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1661_fu_39295_p2() {
    tmp_1661_fu_39295_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co183_reg_13653.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1662_fu_39311_p4() {
    tmp_1662_fu_39311_p4 = co183_reg_13653.read().range(4, 2);
}

void ShuffleNetV2::thread_tmp_1663_cast_fu_32938_p1() {
    tmp_1663_cast_fu_32938_p1 = esl_sext<19,18>(tmp_1411_fu_32932_p2.read());
}

void ShuffleNetV2::thread_tmp_1663_fu_39191_p1() {
    tmp_1663_fu_39191_p1 = k86_reg_13642.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1664_cast_fu_32947_p1() {
    tmp_1664_cast_fu_32947_p1 = esl_sext<32,19>(tmp_1412_fu_32942_p2.read());
}

void ShuffleNetV2::thread_tmp_1664_fu_38994_p1() {
    tmp_1664_fu_38994_p1 = i187_reg_13620.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1665_fu_39041_p3() {
    tmp_1665_fu_39041_p3 = esl_concat<8,2>(tmp_302_fu_39032_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1666_fu_39053_p2() {
    tmp_1666_fu_39053_p2 = (!p_shl643_cast_fu_39049_p1.read().is_01() || !tmp_458_cast_cast_fu_39037_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl643_cast_fu_39049_p1.read()) - sc_bigint<11>(tmp_458_cast_cast_fu_39037_p1.read()));
}

void ShuffleNetV2::thread_tmp_1667_fu_39059_p2() {
    tmp_1667_fu_39059_p2 = (!w129_cast_cast_reg_49098.read().is_01() || !tmp_1666_fu_39053_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w129_cast_cast_reg_49098.read()) + sc_biguint<11>(tmp_1666_fu_39053_p2.read()));
}

void ShuffleNetV2::thread_tmp_1668_fu_39075_p2() {
    tmp_1668_fu_39075_p2 = (!ap_const_lv11_2.is_01())? sc_lv<11>(): tmp_1667_reg_49137.read() << (unsigned short)ap_const_lv11_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1669_fu_39080_p2() {
    tmp_1669_fu_39080_p2 = (!tmp_1668_fu_39075_p2.read().is_01() || !tmp_1667_reg_49137.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1668_fu_39075_p2.read()) - sc_biguint<11>(tmp_1667_reg_49137.read()));
}

void ShuffleNetV2::thread_tmp_166_fu_28841_p2() {
    tmp_166_fu_28841_p2 = (!p_shl132_cast_fu_28825_p1.read().is_01() || !p_shl133_cast_fu_28837_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl132_cast_fu_28825_p1.read()) - sc_biguint<7>(p_shl133_cast_fu_28837_p1.read()));
}

void ShuffleNetV2::thread_tmp_1670_cast_fu_33013_p1() {
    tmp_1670_cast_fu_33013_p1 = esl_sext<32,8>(tmp_1417_reg_47183.read());
}

void ShuffleNetV2::thread_tmp_1670_fu_39085_p2() {
    tmp_1670_fu_39085_p2 = (!h128_cast_cast_reg_49116.read().is_01() || !tmp_1669_fu_39080_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h128_cast_cast_reg_49116.read()) + sc_biguint<11>(tmp_1669_fu_39080_p2.read()));
}

void ShuffleNetV2::thread_tmp_1671_fu_39093_p3() {
    tmp_1671_fu_39093_p3 = esl_concat<11,2>(sum45_reg_49143.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1672_fu_39104_p2() {
    tmp_1672_fu_39104_p2 = (!p_shl645_cast_fu_39100_p1.read().is_01() || !sum45_cast_cast_fu_39090_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl645_cast_fu_39100_p1.read()) - sc_biguint<14>(sum45_cast_cast_fu_39090_p1.read()));
}

void ShuffleNetV2::thread_tmp_1673_fu_39114_p2() {
    tmp_1673_fu_39114_p2 = (!w129_cast_cast1_reg_49093.read().is_01() || !tmp_1956_cast_fu_39110_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w129_cast_cast1_reg_49093.read()) + sc_bigint<15>(tmp_1956_cast_fu_39110_p1.read()));
}

void ShuffleNetV2::thread_tmp_1674_fu_39122_p3() {
    tmp_1674_fu_39122_p3 = esl_concat<15,2>(tmp_1673_reg_49154.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1675_fu_39133_p2() {
    tmp_1675_fu_39133_p2 = (!p_shl276_fu_39129_p1.read().is_01() || !tmp_1957_cast_fu_39119_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl276_fu_39129_p1.read()) - sc_bigint<32>(tmp_1957_cast_fu_39119_p1.read()));
}

void ShuffleNetV2::thread_tmp_1676_fu_39139_p2() {
    tmp_1676_fu_39139_p2 = (!h128_cast_reg_49111.read().is_01() || !tmp_1675_fu_39133_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h128_cast_reg_49111.read()) + sc_biguint<32>(tmp_1675_fu_39133_p2.read()));
}

void ShuffleNetV2::thread_tmp_1677_cast_fu_33262_p1() {
    tmp_1677_cast_fu_33262_p1 = esl_zext<32,15>(tmp_1425_fu_33257_p2.read());
}

void ShuffleNetV2::thread_tmp_1677_fu_39687_p3() {
    tmp_1677_fu_39687_p3 = esl_concat<7,3>(co185_reg_13708.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1678_fu_39699_p3() {
    tmp_1678_fu_39699_p3 = esl_concat<7,1>(co185_reg_13708.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1679_fu_39711_p2() {
    tmp_1679_fu_39711_p2 = (!p_shl647_cast_fu_39695_p1.read().is_01() || !p_shl648_cast_fu_39707_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl647_cast_fu_39695_p1.read()) - sc_biguint<11>(p_shl648_cast_fu_39707_p1.read()));
}

void ShuffleNetV2::thread_tmp_167_cast_cast_fu_25030_p1() {
    tmp_167_cast_cast_fu_25030_p1 = esl_sext<8,7>(tmp_119_fu_25025_p2.read());
}

void ShuffleNetV2::thread_tmp_167_fu_28881_p2() {
    tmp_167_fu_28881_p2 = (!tmp_166_reg_45889.read().is_01() || !ci60_cast_fu_28861_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_166_reg_45889.read()) + sc_biguint<7>(ci60_cast_fu_28861_p1.read()));
}

void ShuffleNetV2::thread_tmp_1680_fu_39615_p1() {
    tmp_1680_fu_39615_p1 = k88_reg_13697.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1681_fu_39366_p1() {
    tmp_1681_fu_39366_p1 = i189_reg_13675.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1682_fu_39386_p2() {
    tmp_1682_fu_39386_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i189_reg_13675.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1683_fu_39453_p3() {
    tmp_1683_fu_39453_p3 = esl_concat<13,5>(sum95_reg_49263.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1684_fu_39464_p3() {
    tmp_1684_fu_39464_p3 = esl_concat<13,3>(sum95_reg_49263.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1685_cast_fu_33485_p1() {
    tmp_1685_cast_fu_33485_p1 = esl_sext<19,18>(tmp_1431_fu_33479_p2.read());
}

void ShuffleNetV2::thread_tmp_1685_fu_39475_p2() {
    tmp_1685_fu_39475_p2 = (!p_shl649_cast_fu_39460_p1.read().is_01() || !p_shl650_cast_fu_39471_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl649_cast_fu_39460_p1.read()) - sc_biguint<19>(p_shl650_cast_fu_39471_p1.read()));
}

void ShuffleNetV2::thread_tmp_1686_cast_fu_33494_p1() {
    tmp_1686_cast_fu_33494_p1 = esl_sext<32,19>(tmp_1432_fu_33489_p2.read());
}

void ShuffleNetV2::thread_tmp_1686_fu_39485_p2() {
    tmp_1686_fu_39485_p2 = (!ci88_cast1_cast_reg_49231.read().is_01() || !tmp_1971_cast_fu_39481_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci88_cast1_cast_reg_49231.read()) + sc_bigint<20>(tmp_1971_cast_fu_39481_p1.read()));
}

void ShuffleNetV2::thread_tmp_1687_fu_39552_p1() {
    tmp_1687_fu_39552_p1 = grp_fu_39444_p2.read().range(6-1, 0);
}

void ShuffleNetV2::thread_tmp_168_cast_cast_fu_25080_p1() {
    tmp_168_cast_cast_fu_25080_p1 = esl_sext<9,7>(tmp_124_fu_25074_p2.read());
}

void ShuffleNetV2::thread_tmp_168_fu_29189_p2() {
    tmp_168_fu_29189_p2 = (!p_shl134_cast_fu_29173_p1.read().is_01() || !p_shl135_cast_fu_29185_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl134_cast_fu_29173_p1.read()) - sc_biguint<7>(p_shl135_cast_fu_29185_p1.read()));
}

void ShuffleNetV2::thread_tmp_1690_fu_39541_p2() {
    tmp_1690_fu_39541_p2 = (!p_shl651_cast_fu_39527_p3.read().is_01() || !p_shl652_cast_fu_39534_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl651_cast_fu_39527_p3.read()) - sc_biguint<10>(p_shl652_cast_fu_39534_p3.read()));
}

void ShuffleNetV2::thread_tmp_1691_fu_39547_p2() {
    tmp_1691_fu_39547_p2 = (!tmp_463_cast_cast_reg_49244.read().is_01() || !tmp_1690_fu_39541_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_463_cast_cast_reg_49244.read()) + sc_biguint<10>(tmp_1690_fu_39541_p2.read()));
}

void ShuffleNetV2::thread_tmp_1692_cast_fu_33560_p1() {
    tmp_1692_cast_fu_33560_p1 = esl_sext<32,10>(tmp_1437_reg_47354.read());
}

void ShuffleNetV2::thread_tmp_1692_fu_39810_p3() {
    tmp_1692_fu_39810_p3 = esl_concat<8,3>(ci90_reg_13741.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1693_fu_39822_p3() {
    tmp_1693_fu_39822_p3 = esl_concat<8,1>(ci90_reg_13741.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1694_fu_39834_p2() {
    tmp_1694_fu_39834_p2 = (!p_shl653_cast_fu_39818_p1.read().is_01() || !p_shl654_cast_fu_39830_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl653_cast_fu_39818_p1.read()) - sc_biguint<12>(p_shl654_cast_fu_39830_p1.read()));
}

void ShuffleNetV2::thread_tmp_1695_fu_39844_p3() {
    tmp_1695_fu_39844_p3 = esl_concat<8,2>(ci90_reg_13741.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1696_fu_39749_p2() {
    tmp_1696_fu_39749_p2 = (!tmp_1963_cast_reg_49335.read().is_01() || !h_131_cast_cast_fu_39745_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1963_cast_reg_49335.read()) + sc_biguint<12>(h_131_cast_cast_fu_39745_p1.read()));
}

void ShuffleNetV2::thread_tmp_1697_fu_39754_p1() {
    tmp_1697_fu_39754_p1 = tmp_1696_fu_39749_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1698_fu_39766_p3() {
    tmp_1698_fu_39766_p3 = esl_concat<12,1>(tmp_1696_fu_39749_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1699_fu_39778_p2() {
    tmp_1699_fu_39778_p2 = (!p_shl655_cast_fu_39758_p3.read().is_01() || !p_shl656_cast_fu_39774_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl655_cast_fu_39758_p3.read()) - sc_bigint<14>(p_shl656_cast_fu_39774_p1.read()));
}

void ShuffleNetV2::thread_tmp_169_fu_29199_p2() {
    tmp_169_fu_29199_p2 = (!tmp_168_fu_29189_p2.read().is_01() || !i116_cast1_reg_45966.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_fu_29189_p2.read()) + sc_biguint<7>(i116_cast1_reg_45966.read()));
}

void ShuffleNetV2::thread_tmp_1700_fu_39872_p2() {
    tmp_1700_fu_39872_p2 = (!w131_cast_cast_fu_39868_p1.read().is_01() || !tmp_1983_cast_reg_49384.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w131_cast_cast_fu_39868_p1.read()) + sc_biguint<11>(tmp_1983_cast_reg_49384.read()));
}

void ShuffleNetV2::thread_tmp_1701_fu_39988_p1() {
    tmp_1701_fu_39988_p1 = co_i_reg_13774.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1702_fu_40002_p3() {
    tmp_1702_fu_40002_p3 = esl_concat<7,2>(newIndex_i_fu_39992_p4.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1703_fu_39901_p2() {
    tmp_1703_fu_39901_p2 = (!w_133_cast_cast_fu_39897_p1.read().is_01() || !tmp_1981_cast_reg_49379.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w_133_cast_cast_fu_39897_p1.read()) + sc_bigint<13>(tmp_1981_cast_reg_49379.read()));
}

void ShuffleNetV2::thread_tmp_1704_cast_fu_33924_p1() {
    tmp_1704_cast_fu_33924_p1 = esl_zext<32,11>(tmp_1448_reg_47478.read());
}

void ShuffleNetV2::thread_tmp_1704_fu_39906_p1() {
    tmp_1704_fu_39906_p1 = tmp_1703_fu_39901_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1705_fu_39926_p2() {
    tmp_1705_fu_39926_p2 = (!p_shl657_cast_fu_39910_p3.read().is_01() || !p_shl658_cast_fu_39918_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl657_cast_fu_39910_p3.read()) - sc_biguint<14>(p_shl658_cast_fu_39918_p3.read()));
}

void ShuffleNetV2::thread_tmp_1706_fu_39800_p2() {
    tmp_1706_fu_39800_p2 = (!tmp_1699_reg_49356.read().is_01() || !w_134_cast_cast_fu_39796_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1699_reg_49356.read()) + sc_biguint<14>(w_134_cast_cast_fu_39796_p1.read()));
}

void ShuffleNetV2::thread_tmp_1707_cast_fu_33888_p1() {
    tmp_1707_cast_fu_33888_p1 = esl_sext<32,13>(tmp_1451_reg_47483.read());
}

void ShuffleNetV2::thread_tmp_1707_fu_40018_p2() {
    tmp_1707_fu_40018_p2 = (!h_i_cast_cast_fu_40014_p1.read().is_01() || !tmp_1992_cast_reg_49451.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_i_cast_cast_fu_40014_p1.read()) + sc_biguint<10>(tmp_1992_cast_reg_49451.read()));
}

void ShuffleNetV2::thread_tmp_1708_fu_39936_p2() {
    tmp_1708_fu_39936_p2 = (!tmp_1990_cast_reg_49397.read().is_01() || !h132_cast_cast_fu_39932_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1990_cast_reg_49397.read()) + sc_biguint<13>(h132_cast_cast_fu_39932_p1.read()));
}

void ShuffleNetV2::thread_tmp_1709_fu_40123_p3() {
    tmp_1709_fu_40123_p3 = p_i_reg_13785.read().range(7, 7);
}

void ShuffleNetV2::thread_tmp_170_cast_fu_25119_p1() {
    tmp_170_cast_fu_25119_p1 = esl_sext<11,8>(tmp_126_fu_25113_p2.read());
}

void ShuffleNetV2::thread_tmp_170_fu_28930_p2() {
    tmp_170_fu_28930_p2 = (!p_shl136_cast_fu_28914_p1.read().is_01() || !p_shl137_cast_fu_28926_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl136_cast_fu_28914_p1.read()) - sc_biguint<7>(p_shl137_cast_fu_28926_p1.read()));
}

void ShuffleNetV2::thread_tmp_1711_fu_39962_p2() {
    tmp_1711_fu_39962_p2 = (!tmp_1705_reg_49410.read().is_01() || !h_133_cast_cast_fu_39958_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1705_reg_49410.read()) + sc_biguint<14>(h_133_cast_cast_fu_39958_p1.read()));
}

void ShuffleNetV2::thread_tmp_1712_fu_40067_p2() {
    tmp_1712_fu_40067_p2 = (!tmp_2000_cast_reg_49456.read().is_01() || !w_i_cast_cast_fu_40063_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_2000_cast_reg_49456.read()) + sc_biguint<12>(w_i_cast_cast_fu_40063_p1.read()));
}

void ShuffleNetV2::thread_tmp_1718_cast_fu_34254_p1() {
    tmp_1718_cast_fu_34254_p1 = esl_sext<19,18>(tmp_1460_fu_34248_p2.read());
}

void ShuffleNetV2::thread_tmp_1719_cast_fu_34263_p1() {
    tmp_1719_cast_fu_34263_p1 = esl_sext<32,19>(tmp_1461_fu_34258_p2.read());
}

void ShuffleNetV2::thread_tmp_171_cast_fu_28996_p1() {
    tmp_171_cast_fu_28996_p1 = esl_sext<10,9>(tmp_171_reg_45925.read());
}

void ShuffleNetV2::thread_tmp_171_fu_28940_p2() {
    tmp_171_fu_28940_p2 = (!tmp_243_cast_cast_fu_28936_p1.read().is_01() || !tmp_238_cast_cast_reg_45894.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_243_cast_cast_fu_28936_p1.read()) + sc_biguint<9>(tmp_238_cast_cast_reg_45894.read()));
}

void ShuffleNetV2::thread_tmp_1725_cast_fu_34329_p1() {
    tmp_1725_cast_fu_34329_p1 = esl_sext<32,10>(tmp_1466_reg_47614.read());
}

void ShuffleNetV2::thread_tmp_172_fu_28969_p2() {
    tmp_172_fu_28969_p2 = (!p_shl138_cast_fu_28953_p1.read().is_01() || !p_shl139_cast_fu_28965_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl138_cast_fu_28953_p1.read()) - sc_biguint<8>(p_shl139_cast_fu_28965_p1.read()));
}

void ShuffleNetV2::thread_tmp_1737_cast_fu_34697_p1() {
    tmp_1737_cast_fu_34697_p1 = esl_zext<32,11>(tmp_1477_reg_47738.read());
}

void ShuffleNetV2::thread_tmp_173_fu_29626_p2() {
    tmp_173_fu_29626_p2 = (!p_shl142_cast_fu_29610_p1.read().is_01() || !p_shl143_cast_fu_29622_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl142_cast_fu_29610_p1.read()) - sc_biguint<7>(p_shl143_cast_fu_29622_p1.read()));
}

void ShuffleNetV2::thread_tmp_1740_cast_fu_34661_p1() {
    tmp_1740_cast_fu_34661_p1 = esl_sext<32,13>(tmp_1480_reg_47743.read());
}

void ShuffleNetV2::thread_tmp_1746_cast_fu_35259_p1() {
    tmp_1746_cast_fu_35259_p1 = esl_sext<12,11>(tmp_1486_fu_35253_p2.read());
}

void ShuffleNetV2::thread_tmp_1749_cast_fu_35315_p1() {
    tmp_1749_cast_fu_35315_p1 = esl_sext<13,12>(tmp_1489_fu_35309_p2.read());
}

void ShuffleNetV2::thread_tmp_174_fu_29538_p2() {
    tmp_174_fu_29538_p2 = (!p_shl140_cast_fu_29522_p1.read().is_01() || !p_shl141_cast_fu_29534_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl140_cast_fu_29522_p1.read()) - sc_biguint<7>(p_shl141_cast_fu_29534_p1.read()));
}

void ShuffleNetV2::thread_tmp_1757_cast_fu_35023_p1() {
    tmp_1757_cast_fu_35023_p1 = esl_sext<19,18>(tmp_1495_fu_35017_p2.read());
}

void ShuffleNetV2::thread_tmp_1758_cast_fu_35032_p1() {
    tmp_1758_cast_fu_35032_p1 = esl_sext<32,19>(tmp_1496_fu_35027_p2.read());
}

void ShuffleNetV2::thread_tmp_175_fu_29548_p2() {
    tmp_175_fu_29548_p2 = (!tmp_174_fu_29538_p2.read().is_01() || !i119_cast1_reg_46099.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_174_fu_29538_p2.read()) + sc_biguint<7>(i119_cast1_reg_46099.read()));
}

void ShuffleNetV2::thread_tmp_1764_cast_fu_35098_p1() {
    tmp_1764_cast_fu_35098_p1 = esl_sext<32,10>(tmp_1501_reg_47874.read());
}

void ShuffleNetV2::thread_tmp_176_cast_cast_fu_25771_p1() {
    tmp_176_cast_cast_fu_25771_p1 = esl_zext<9,4>(tmp_1101_fu_25761_p4.read());
}

void ShuffleNetV2::thread_tmp_176_fu_29666_p2() {
    tmp_176_fu_29666_p2 = (!tmp_173_reg_46149.read().is_01() || !ci62_cast_fu_29646_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_173_reg_46149.read()) + sc_biguint<7>(ci62_cast_fu_29646_p1.read()));
}

void ShuffleNetV2::thread_tmp_1775_cast_fu_35426_p1() {
    tmp_1775_cast_fu_35426_p1 = esl_zext<32,14>(tmp_1511_fu_35421_p2.read());
}

void ShuffleNetV2::thread_tmp_1776_cast_fu_35436_p1() {
    tmp_1776_cast_fu_35436_p1 = esl_zext<32,13>(tmp_1512_reg_47973.read());
}

void ShuffleNetV2::thread_tmp_177_cast_fu_26109_p1() {
    tmp_177_cast_fu_26109_p1 = esl_sext<11,7>(tmp_130_fu_26103_p2.read());
}

void ShuffleNetV2::thread_tmp_177_fu_29333_p2() {
    tmp_177_fu_29333_p2 = (!p_shl144_cast_fu_29317_p1.read().is_01() || !p_shl145_cast_fu_29329_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl144_cast_fu_29317_p1.read()) - sc_biguint<7>(p_shl145_cast_fu_29329_p1.read()));
}

void ShuffleNetV2::thread_tmp_1784_cast_fu_35658_p1() {
    tmp_1784_cast_fu_35658_p1 = esl_sext<19,18>(tmp_1518_fu_35652_p2.read());
}

void ShuffleNetV2::thread_tmp_1785_cast_fu_35667_p1() {
    tmp_1785_cast_fu_35667_p1 = esl_sext<32,19>(tmp_1519_fu_35662_p2.read());
}

void ShuffleNetV2::thread_tmp_178_cast_fu_26143_p1() {
    tmp_178_cast_fu_26143_p1 = esl_sext<32,7>(tmp_131_reg_45017.read());
}

void ShuffleNetV2::thread_tmp_178_fu_29343_p2() {
    tmp_178_fu_29343_p2 = (!tmp_177_fu_29333_p2.read().is_01() || !co122_cast_reg_46008.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_177_fu_29333_p2.read()) + sc_biguint<7>(co122_cast_reg_46008.read()));
}

void ShuffleNetV2::thread_tmp_1791_cast_fu_35733_p1() {
    tmp_1791_cast_fu_35733_p1 = esl_sext<32,10>(tmp_1524_reg_48055.read());
}

void ShuffleNetV2::thread_tmp_179_fu_29974_p2() {
    tmp_179_fu_29974_p2 = (!p_shl146_cast_fu_29958_p1.read().is_01() || !p_shl147_cast_fu_29970_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl146_cast_fu_29958_p1.read()) - sc_biguint<7>(p_shl147_cast_fu_29970_p1.read()));
}

void ShuffleNetV2::thread_tmp_1803_cast_fu_36093_p1() {
    tmp_1803_cast_fu_36093_p1 = esl_zext<32,11>(tmp_1535_reg_48179.read());
}

void ShuffleNetV2::thread_tmp_1806_cast_fu_36057_p1() {
    tmp_1806_cast_fu_36057_p1 = esl_sext<32,13>(tmp_1538_reg_48184.read());
}

void ShuffleNetV2::thread_tmp_180_cast_cast_fu_25800_p1() {
    tmp_180_cast_cast_fu_25800_p1 = esl_sext<8,7>(tmp_129_fu_25795_p2.read());
}

void ShuffleNetV2::thread_tmp_180_fu_29984_p2() {
    tmp_180_fu_29984_p2 = (!tmp_179_fu_29974_p2.read().is_01() || !i123_cast1_reg_46226.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_179_fu_29974_p2.read()) + sc_biguint<7>(i123_cast1_reg_46226.read()));
}

void ShuffleNetV2::thread_tmp_1812_cast_fu_36663_p1() {
    tmp_1812_cast_fu_36663_p1 = esl_sext<12,11>(tmp_1544_fu_36657_p2.read());
}

void ShuffleNetV2::thread_tmp_181_cast_cast_fu_25850_p1() {
    tmp_181_cast_cast_fu_25850_p1 = esl_sext<9,7>(tmp_132_fu_25844_p2.read());
}

void ShuffleNetV2::thread_tmp_181_fu_29715_p2() {
    tmp_181_fu_29715_p2 = (!p_shl148_cast_fu_29699_p1.read().is_01() || !p_shl149_cast_fu_29711_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl148_cast_fu_29699_p1.read()) - sc_biguint<7>(p_shl149_cast_fu_29711_p1.read()));
}

void ShuffleNetV2::thread_tmp_1822_cast_fu_36427_p1() {
    tmp_1822_cast_fu_36427_p1 = esl_sext<19,18>(tmp_1552_fu_36421_p2.read());
}

void ShuffleNetV2::thread_tmp_1823_cast_fu_36436_p1() {
    tmp_1823_cast_fu_36436_p1 = esl_sext<32,19>(tmp_1553_fu_36431_p2.read());
}

void ShuffleNetV2::thread_tmp_1829_cast_fu_36502_p1() {
    tmp_1829_cast_fu_36502_p1 = esl_sext<32,10>(tmp_1558_reg_48315.read());
}

void ShuffleNetV2::thread_tmp_182_cast_fu_29781_p1() {
    tmp_182_cast_fu_29781_p1 = esl_sext<10,9>(tmp_182_reg_46185.read());
}

void ShuffleNetV2::thread_tmp_182_fu_29725_p2() {
    tmp_182_fu_29725_p2 = (!tmp_261_cast_cast_fu_29721_p1.read().is_01() || !tmp_253_cast_cast_reg_46154.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_261_cast_cast_fu_29721_p1.read()) + sc_biguint<9>(tmp_253_cast_cast_reg_46154.read()));
}

void ShuffleNetV2::thread_tmp_1832_cast_fu_36786_p1() {
    tmp_1832_cast_fu_36786_p1 = esl_sext<12,11>(tmp_1561_fu_36780_p2.read());
}

void ShuffleNetV2::thread_tmp_1835_cast_fu_36842_p1() {
    tmp_1835_cast_fu_36842_p1 = esl_sext<13,12>(tmp_1564_fu_36836_p2.read());
}

void ShuffleNetV2::thread_tmp_183_cast_fu_25889_p1() {
    tmp_183_cast_fu_25889_p1 = esl_sext<11,8>(tmp_134_fu_25883_p2.read());
}

void ShuffleNetV2::thread_tmp_183_fu_29754_p2() {
    tmp_183_fu_29754_p2 = (!p_shl150_cast_fu_29738_p1.read().is_01() || !p_shl151_cast_fu_29750_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl150_cast_fu_29738_p1.read()) - sc_biguint<8>(p_shl151_cast_fu_29750_p1.read()));
}

void ShuffleNetV2::thread_tmp_184_fu_30183_p2() {
    tmp_184_fu_30183_p2 = (!co127_cast_fu_30167_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co127_cast_fu_30167_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_1850_cast_fu_36751_p1() {
    tmp_1850_cast_fu_36751_p1 = esl_zext<32,14>(tmp_1578_fu_36746_p2.read());
}

void ShuffleNetV2::thread_tmp_1851_cast_fu_36953_p1() {
    tmp_1851_cast_fu_36953_p1 = esl_zext<32,14>(tmp_1579_fu_36948_p2.read());
}

void ShuffleNetV2::thread_tmp_1852_cast_fu_36963_p1() {
    tmp_1852_cast_fu_36963_p1 = esl_zext<32,13>(tmp_1580_reg_48458.read());
}

void ShuffleNetV2::thread_tmp_185_cast_fu_26446_p1() {
    tmp_185_cast_fu_26446_p1 = esl_sext<11,7>(tmp_136_fu_26440_p2.read());
}

void ShuffleNetV2::thread_tmp_185_fu_30392_p2() {
    tmp_185_fu_30392_p2 = (!p_shl152_cast_fu_30376_p1.read().is_01() || !p_shl153_cast_fu_30388_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl152_cast_fu_30376_p1.read()) - sc_biguint<7>(p_shl153_cast_fu_30388_p1.read()));
}

void ShuffleNetV2::thread_tmp_1860_cast_fu_37185_p1() {
    tmp_1860_cast_fu_37185_p1 = esl_sext<20,19>(tmp_1586_fu_37179_p2.read());
}

void ShuffleNetV2::thread_tmp_1861_cast_fu_37194_p1() {
    tmp_1861_cast_fu_37194_p1 = esl_sext<32,20>(tmp_1587_fu_37189_p2.read());
}

void ShuffleNetV2::thread_tmp_1867_cast_fu_37260_p1() {
    tmp_1867_cast_fu_37260_p1 = esl_sext<32,10>(tmp_1592_reg_48540.read());
}

void ShuffleNetV2::thread_tmp_186_cast_fu_26480_p1() {
    tmp_186_cast_fu_26480_p1 = esl_sext<32,7>(tmp_137_reg_45150.read());
}

void ShuffleNetV2::thread_tmp_186_fu_30432_p2() {
    tmp_186_fu_30432_p2 = (!tmp_185_reg_46374.read().is_01() || !ci64_cast_fu_30412_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_185_reg_46374.read()) + sc_biguint<7>(ci64_cast_fu_30412_p1.read()));
}

void ShuffleNetV2::thread_tmp_1879_cast_fu_37632_p1() {
    tmp_1879_cast_fu_37632_p1 = esl_zext<32,11>(tmp_1603_reg_48664.read());
}

void ShuffleNetV2::thread_tmp_187_fu_30748_p2() {
    tmp_187_fu_30748_p2 = (!p_shl154_cast_fu_30732_p1.read().is_01() || !p_shl155_cast_fu_30744_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl154_cast_fu_30732_p1.read()) - sc_biguint<7>(p_shl155_cast_fu_30744_p1.read()));
}

void ShuffleNetV2::thread_tmp_1882_cast_fu_37587_p1() {
    tmp_1882_cast_fu_37587_p1 = esl_sext<14,13>(tmp_1606_fu_37581_p2.read());
}

void ShuffleNetV2::thread_tmp_1883_cast_fu_37596_p1() {
    tmp_1883_cast_fu_37596_p1 = esl_sext<32,14>(tmp_1607_reg_48669.read());
}

void ShuffleNetV2::thread_tmp_1889_cast_fu_38194_p1() {
    tmp_1889_cast_fu_38194_p1 = esl_sext<12,11>(tmp_1613_fu_38188_p2.read());
}

void ShuffleNetV2::thread_tmp_188_fu_30758_p2() {
    tmp_188_fu_30758_p2 = (!tmp_187_fu_30748_p2.read().is_01() || !i128_cast1_reg_46451.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_187_fu_30748_p2.read()) + sc_biguint<7>(i128_cast1_reg_46451.read()));
}

void ShuffleNetV2::thread_tmp_1897_cast_fu_37958_p1() {
    tmp_1897_cast_fu_37958_p1 = esl_sext<20,19>(tmp_1619_fu_37952_p2.read());
}

void ShuffleNetV2::thread_tmp_1898_cast_fu_37967_p1() {
    tmp_1898_cast_fu_37967_p1 = esl_sext<32,20>(tmp_1620_fu_37962_p2.read());
}

void ShuffleNetV2::thread_tmp_189_fu_30481_p2() {
    tmp_189_fu_30481_p2 = (!p_shl156_cast_fu_30465_p1.read().is_01() || !p_shl157_cast_fu_30477_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl156_cast_fu_30465_p1.read()) - sc_biguint<7>(p_shl157_cast_fu_30477_p1.read()));
}

void ShuffleNetV2::thread_tmp_1904_cast_fu_38033_p1() {
    tmp_1904_cast_fu_38033_p1 = esl_sext<32,10>(tmp_1625_reg_48800.read());
}

void ShuffleNetV2::thread_tmp_1907_cast_fu_38317_p1() {
    tmp_1907_cast_fu_38317_p1 = esl_sext<12,11>(tmp_1628_fu_38311_p2.read());
}

void ShuffleNetV2::thread_tmp_190_cast_fu_30547_p1() {
    tmp_190_cast_fu_30547_p1 = esl_sext<10,9>(tmp_190_reg_46410.read());
}

void ShuffleNetV2::thread_tmp_190_fu_30491_p2() {
    tmp_190_fu_30491_p2 = (!tmp_269_cast_cast_reg_46379.read().is_01() || !tmp_274_cast_cast_fu_30487_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_269_cast_cast_reg_46379.read()) + sc_bigint<9>(tmp_274_cast_cast_fu_30487_p1.read()));
}

void ShuffleNetV2::thread_tmp_1910_cast_fu_38373_p1() {
    tmp_1910_cast_fu_38373_p1 = esl_sext<13,12>(tmp_1631_fu_38367_p2.read());
}

void ShuffleNetV2::thread_tmp_191_cast_cast_fu_26544_p1() {
    tmp_191_cast_cast_fu_26544_p1 = esl_zext<9,4>(tmp_1125_fu_26534_p4.read());
}

void ShuffleNetV2::thread_tmp_191_fu_30520_p2() {
    tmp_191_fu_30520_p2 = (!p_shl158_cast_fu_30504_p1.read().is_01() || !p_shl159_cast_fu_30516_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl158_cast_fu_30504_p1.read()) - sc_biguint<8>(p_shl159_cast_fu_30516_p1.read()));
}

void ShuffleNetV2::thread_tmp_1925_cast_fu_38282_p1() {
    tmp_1925_cast_fu_38282_p1 = esl_zext<32,14>(tmp_1645_fu_38277_p2.read());
}

void ShuffleNetV2::thread_tmp_1926_cast_fu_38484_p1() {
    tmp_1926_cast_fu_38484_p1 = esl_zext<32,14>(tmp_1646_fu_38479_p2.read());
}

void ShuffleNetV2::thread_tmp_1927_cast_fu_38494_p1() {
    tmp_1927_cast_fu_38494_p1 = esl_zext<32,13>(tmp_1647_reg_48943.read());
}

void ShuffleNetV2::thread_tmp_192_cast_fu_26253_p1() {
    tmp_192_cast_fu_26253_p1 = esl_sext<9,7>(tmp_139_fu_26247_p2.read());
}

void ShuffleNetV2::thread_tmp_192_fu_31177_p2() {
    tmp_192_fu_31177_p2 = (!p_shl162_cast_fu_31161_p1.read().is_01() || !p_shl163_cast_fu_31173_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl162_cast_fu_31161_p1.read()) - sc_biguint<7>(p_shl163_cast_fu_31173_p1.read()));
}

void ShuffleNetV2::thread_tmp_1935_cast_fu_38716_p1() {
    tmp_1935_cast_fu_38716_p1 = esl_sext<20,19>(tmp_1653_fu_38710_p2.read());
}

void ShuffleNetV2::thread_tmp_1936_cast_fu_38725_p1() {
    tmp_1936_cast_fu_38725_p1 = esl_sext<32,20>(tmp_1654_fu_38720_p2.read());
}

void ShuffleNetV2::thread_tmp_193_cast_cast_fu_26262_p1() {
    tmp_193_cast_cast_fu_26262_p1 = esl_sext<10,7>(tmp_140_fu_26257_p2.read());
}

void ShuffleNetV2::thread_tmp_193_fu_31089_p2() {
    tmp_193_fu_31089_p2 = (!p_shl160_cast_fu_31073_p1.read().is_01() || !p_shl161_cast_fu_31085_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl160_cast_fu_31073_p1.read()) - sc_biguint<7>(p_shl161_cast_fu_31085_p1.read()));
}

void ShuffleNetV2::thread_tmp_1942_cast_fu_38791_p1() {
    tmp_1942_cast_fu_38791_p1 = esl_sext<32,10>(tmp_1659_reg_49025.read());
}

void ShuffleNetV2::thread_tmp_194_fu_31099_p2() {
    tmp_194_fu_31099_p2 = (!tmp_193_fu_31089_p2.read().is_01() || !i131_cast1_reg_46584.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_193_fu_31089_p2.read()) + sc_biguint<7>(i131_cast1_reg_46584.read()));
}

void ShuffleNetV2::thread_tmp_1954_cast_fu_39155_p1() {
    tmp_1954_cast_fu_39155_p1 = esl_zext<32,11>(tmp_1670_reg_49149.read());
}

void ShuffleNetV2::thread_tmp_1956_cast_fu_39110_p1() {
    tmp_1956_cast_fu_39110_p1 = esl_sext<15,14>(tmp_1672_fu_39104_p2.read());
}

void ShuffleNetV2::thread_tmp_1957_cast_fu_39119_p1() {
    tmp_1957_cast_fu_39119_p1 = esl_sext<32,15>(tmp_1673_reg_49154.read());
}

void ShuffleNetV2::thread_tmp_195_cast_fu_26882_p1() {
    tmp_195_cast_fu_26882_p1 = esl_sext<11,7>(tmp_141_fu_26876_p2.read());
}

void ShuffleNetV2::thread_tmp_195_fu_31217_p2() {
    tmp_195_fu_31217_p2 = (!tmp_192_reg_46634.read().is_01() || !ci66_cast_fu_31197_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_192_reg_46634.read()) + sc_biguint<7>(ci66_cast_fu_31197_p1.read()));
}

void ShuffleNetV2::thread_tmp_1963_cast_fu_39717_p1() {
    tmp_1963_cast_fu_39717_p1 = esl_sext<12,11>(tmp_1679_fu_39711_p2.read());
}

void ShuffleNetV2::thread_tmp_196_cast_fu_26916_p1() {
    tmp_196_cast_fu_26916_p1 = esl_sext<32,7>(tmp_142_reg_45277.read());
}

void ShuffleNetV2::thread_tmp_196_fu_30892_p2() {
    tmp_196_fu_30892_p2 = (!p_shl164_cast_fu_30876_p1.read().is_01() || !p_shl165_cast_fu_30888_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl164_cast_fu_30876_p1.read()) - sc_biguint<7>(p_shl165_cast_fu_30888_p1.read()));
}

void ShuffleNetV2::thread_tmp_1971_cast_fu_39481_p1() {
    tmp_1971_cast_fu_39481_p1 = esl_sext<20,19>(tmp_1685_fu_39475_p2.read());
}

void ShuffleNetV2::thread_tmp_1972_cast_fu_39490_p1() {
    tmp_1972_cast_fu_39490_p1 = esl_sext<32,20>(tmp_1686_fu_39485_p2.read());
}

void ShuffleNetV2::thread_tmp_1978_cast_fu_39556_p1() {
    tmp_1978_cast_fu_39556_p1 = esl_sext<32,10>(tmp_1691_reg_49285.read());
}

void ShuffleNetV2::thread_tmp_197_fu_30902_p2() {
    tmp_197_fu_30902_p2 = (!co132_cast1_reg_46493.read().is_01() || !tmp_196_fu_30892_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co132_cast1_reg_46493.read()) + sc_biguint<7>(tmp_196_fu_30892_p2.read()));
}

void ShuffleNetV2::thread_tmp_1981_cast_fu_39840_p1() {
    tmp_1981_cast_fu_39840_p1 = esl_sext<13,12>(tmp_1694_fu_39834_p2.read());
}

void ShuffleNetV2::thread_tmp_1983_cast_fu_39852_p1() {
    tmp_1983_cast_fu_39852_p1 = esl_zext<11,10>(tmp_1695_fu_39844_p3.read());
}

void ShuffleNetV2::thread_tmp_198_cast_cast_fu_26573_p1() {
    tmp_198_cast_cast_fu_26573_p1 = esl_sext<8,7>(tmp_138_fu_26568_p2.read());
}

void ShuffleNetV2::thread_tmp_198_fu_31533_p2() {
    tmp_198_fu_31533_p2 = (!p_shl166_cast_fu_31517_p1.read().is_01() || !p_shl167_cast_fu_31529_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl166_cast_fu_31517_p1.read()) - sc_biguint<7>(p_shl167_cast_fu_31529_p1.read()));
}

void ShuffleNetV2::thread_tmp_1990_cast_fu_39877_p3() {
    tmp_1990_cast_fu_39877_p3 = esl_concat<11,2>(tmp_1700_fu_39872_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1992_cast_fu_40010_p1() {
    tmp_1992_cast_fu_40010_p1 = esl_zext<10,9>(tmp_1702_fu_40002_p3.read());
}

void ShuffleNetV2::thread_tmp_1997_cast_fu_39805_p1() {
    tmp_1997_cast_fu_39805_p1 = esl_zext<32,14>(tmp_1706_fu_39800_p2.read());
}

void ShuffleNetV2::thread_tmp_199_cast_cast_fu_26623_p1() {
    tmp_199_cast_cast_fu_26623_p1 = esl_sext<9,7>(tmp_143_fu_26617_p2.read());
}

void ShuffleNetV2::thread_tmp_199_fu_31543_p2() {
    tmp_199_fu_31543_p2 = (!tmp_198_fu_31533_p2.read().is_01() || !i135_cast_reg_46711.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_198_fu_31533_p2.read()) + sc_biguint<7>(i135_cast_reg_46711.read()));
}

void ShuffleNetV2::thread_tmp_2000_cast_fu_40023_p3() {
    tmp_2000_cast_fu_40023_p3 = esl_concat<10,2>(tmp_1707_fu_40018_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_2001_cast_fu_39941_p1() {
    tmp_2001_cast_fu_39941_p1 = esl_zext<32,13>(tmp_1708_fu_39936_p2.read());
}

void ShuffleNetV2::thread_tmp_2003_cast_fu_39967_p1() {
    tmp_2003_cast_fu_39967_p1 = esl_zext<32,14>(tmp_1711_fu_39962_p2.read());
}

void ShuffleNetV2::thread_tmp_2004_cast_fu_40072_p1() {
    tmp_2004_cast_fu_40072_p1 = esl_zext<32,12>(tmp_1712_fu_40067_p2.read());
}

void ShuffleNetV2::thread_tmp_200_fu_31266_p2() {
    tmp_200_fu_31266_p2 = (!p_shl168_cast_fu_31250_p1.read().is_01() || !p_shl169_cast_fu_31262_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl168_cast_fu_31250_p1.read()) - sc_biguint<7>(p_shl169_cast_fu_31262_p1.read()));
}

void ShuffleNetV2::thread_tmp_201_cast1_fu_31332_p1() {
    tmp_201_cast1_fu_31332_p1 = esl_sext<10,9>(tmp_201_reg_46670.read());
}

void ShuffleNetV2::thread_tmp_201_cast_fu_26662_p1() {
    tmp_201_cast_fu_26662_p1 = esl_sext<11,8>(tmp_145_fu_26656_p2.read());
}

void ShuffleNetV2::thread_tmp_201_fu_31276_p2() {
    tmp_201_fu_31276_p2 = (!tmp_284_cast_cast_reg_46639.read().is_01() || !tmp_292_cast_cast_fu_31272_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_284_cast_cast_reg_46639.read()) + sc_bigint<9>(tmp_292_cast_cast_fu_31272_p1.read()));
}

void ShuffleNetV2::thread_tmp_202_fu_31305_p2() {
    tmp_202_fu_31305_p2 = (!p_shl170_cast_fu_31289_p1.read().is_01() || !p_shl171_cast_fu_31301_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl170_cast_fu_31289_p1.read()) - sc_biguint<8>(p_shl171_cast_fu_31301_p1.read()));
}

void ShuffleNetV2::thread_tmp_203_fu_31746_p2() {
    tmp_203_fu_31746_p2 = (!co137_cast_fu_31730_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co137_cast_fu_31730_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_204_fu_31955_p2() {
    tmp_204_fu_31955_p2 = (!p_shl172_cast_fu_31939_p1.read().is_01() || !p_shl173_cast_fu_31951_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl172_cast_fu_31939_p1.read()) - sc_biguint<7>(p_shl173_cast_fu_31951_p1.read()));
}

void ShuffleNetV2::thread_tmp_205_fu_31995_p2() {
    tmp_205_fu_31995_p2 = (!tmp_204_reg_46859.read().is_01() || !ci68_cast_fu_31975_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_204_reg_46859.read()) + sc_biguint<7>(ci68_cast_fu_31975_p1.read()));
}

void ShuffleNetV2::thread_tmp_206_fu_32311_p2() {
    tmp_206_fu_32311_p2 = (!p_shl174_cast_fu_32295_p1.read().is_01() || !p_shl175_cast_fu_32307_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl174_cast_fu_32295_p1.read()) - sc_biguint<7>(p_shl175_cast_fu_32307_p1.read()));
}

void ShuffleNetV2::thread_tmp_207_cast_cast_fu_27310_p1() {
    tmp_207_cast_cast_fu_27310_p1 = esl_zext<9,4>(tmp_1165_fu_27300_p4.read());
}

void ShuffleNetV2::thread_tmp_207_fu_32321_p2() {
    tmp_207_fu_32321_p2 = (!tmp_206_fu_32311_p2.read().is_01() || !i140_cast_reg_46936.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_206_fu_32311_p2.read()) + sc_biguint<7>(i140_cast_reg_46936.read()));
}

void ShuffleNetV2::thread_tmp_208_cast_fu_27648_p1() {
    tmp_208_cast_fu_27648_p1 = esl_sext<11,7>(tmp_149_fu_27642_p2.read());
}

void ShuffleNetV2::thread_tmp_208_fu_32044_p2() {
    tmp_208_fu_32044_p2 = (!p_shl176_cast_fu_32028_p1.read().is_01() || !p_shl177_cast_fu_32040_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl176_cast_fu_32028_p1.read()) - sc_biguint<7>(p_shl177_cast_fu_32040_p1.read()));
}

void ShuffleNetV2::thread_tmp_209_cast1_fu_32110_p1() {
    tmp_209_cast1_fu_32110_p1 = esl_sext<10,9>(tmp_209_reg_46895.read());
}

void ShuffleNetV2::thread_tmp_209_cast_fu_27682_p1() {
    tmp_209_cast_fu_27682_p1 = esl_sext<32,7>(tmp_150_reg_45502.read());
}

void ShuffleNetV2::thread_tmp_209_fu_32054_p2() {
    tmp_209_fu_32054_p2 = (!tmp_300_cast_cast_reg_46864.read().is_01() || !tmp_305_cast_cast_fu_32050_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_300_cast_cast_reg_46864.read()) + sc_bigint<9>(tmp_305_cast_cast_fu_32050_p1.read()));
}

void ShuffleNetV2::thread_tmp_210_fu_32083_p2() {
    tmp_210_fu_32083_p2 = (!p_shl178_cast_fu_32067_p1.read().is_01() || !p_shl179_cast_fu_32079_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl178_cast_fu_32067_p1.read()) - sc_biguint<8>(p_shl179_cast_fu_32079_p1.read()));
}

void ShuffleNetV2::thread_tmp_211_cast_cast_fu_27339_p1() {
    tmp_211_cast_cast_fu_27339_p1 = esl_sext<8,7>(tmp_148_fu_27334_p2.read());
}

void ShuffleNetV2::thread_tmp_211_fu_32744_p2() {
    tmp_211_fu_32744_p2 = (!p_shl182_cast_fu_32728_p1.read().is_01() || !p_shl183_cast_fu_32740_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl182_cast_fu_32728_p1.read()) - sc_biguint<7>(p_shl183_cast_fu_32740_p1.read()));
}

void ShuffleNetV2::thread_tmp_212_cast_cast_fu_27389_p1() {
    tmp_212_cast_cast_fu_27389_p1 = esl_sext<9,7>(tmp_151_fu_27383_p2.read());
}

void ShuffleNetV2::thread_tmp_212_fu_32652_p2() {
    tmp_212_fu_32652_p2 = (!p_shl180_cast_fu_32636_p1.read().is_01() || !p_shl181_cast_fu_32648_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl180_cast_fu_32636_p1.read()) - sc_biguint<7>(p_shl181_cast_fu_32648_p1.read()));
}

void ShuffleNetV2::thread_tmp_213_fu_32662_p2() {
    tmp_213_fu_32662_p2 = (!tmp_212_fu_32652_p2.read().is_01() || !i143_cast_reg_47069.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_212_fu_32652_p2.read()) + sc_biguint<7>(i143_cast_reg_47069.read()));
}

void ShuffleNetV2::thread_tmp_214_cast_fu_27428_p1() {
    tmp_214_cast_fu_27428_p1 = esl_sext<11,8>(tmp_153_fu_27422_p2.read());
}

void ShuffleNetV2::thread_tmp_214_fu_32784_p2() {
    tmp_214_fu_32784_p2 = (!tmp_211_reg_47119.read().is_01() || !ci70_cast_fu_32764_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_211_reg_47119.read()) + sc_biguint<7>(ci70_cast_fu_32764_p1.read()));
}

void ShuffleNetV2::thread_tmp_215_fu_32459_p2() {
    tmp_215_fu_32459_p2 = (!p_shl184_cast_fu_32443_p1.read().is_01() || !p_shl185_cast_fu_32455_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl184_cast_fu_32443_p1.read()) - sc_biguint<7>(p_shl185_cast_fu_32455_p1.read()));
}

void ShuffleNetV2::thread_tmp_216_cast_fu_27993_p1() {
    tmp_216_cast_fu_27993_p1 = esl_sext<11,7>(tmp_155_fu_27987_p2.read());
}

void ShuffleNetV2::thread_tmp_216_fu_32469_p2() {
    tmp_216_fu_32469_p2 = (!co142_cast1_reg_46978.read().is_01() || !tmp_215_fu_32459_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co142_cast1_reg_46978.read()) + sc_biguint<7>(tmp_215_fu_32459_p2.read()));
}

void ShuffleNetV2::thread_tmp_217_cast_fu_28027_p1() {
    tmp_217_cast_fu_28027_p1 = esl_sext<32,7>(tmp_156_reg_45635.read());
}

void ShuffleNetV2::thread_tmp_217_fu_33100_p2() {
    tmp_217_fu_33100_p2 = (!p_shl186_cast_fu_33084_p1.read().is_01() || !p_shl187_cast_fu_33096_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl186_cast_fu_33084_p1.read()) - sc_biguint<7>(p_shl187_cast_fu_33096_p1.read()));
}

void ShuffleNetV2::thread_tmp_218_fu_33110_p2() {
    tmp_218_fu_33110_p2 = (!tmp_217_fu_33100_p2.read().is_01() || !i147_cast_reg_47196.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_217_fu_33100_p2.read()) + sc_biguint<7>(i147_cast_reg_47196.read()));
}

void ShuffleNetV2::thread_tmp_219_fu_32833_p2() {
    tmp_219_fu_32833_p2 = (!p_shl188_cast_fu_32817_p1.read().is_01() || !p_shl189_cast_fu_32829_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl188_cast_fu_32817_p1.read()) - sc_biguint<7>(p_shl189_cast_fu_32829_p1.read()));
}

void ShuffleNetV2::thread_tmp_220_cast_fu_32907_p1() {
    tmp_220_cast_fu_32907_p1 = esl_sext<10,9>(tmp_220_reg_47155.read());
}

void ShuffleNetV2::thread_tmp_220_fu_32843_p2() {
    tmp_220_fu_32843_p2 = (!tmp_323_cast_cast_fu_32839_p1.read().is_01() || !tmp_315_cast_cast_reg_47124.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_323_cast_cast_fu_32839_p1.read()) + sc_biguint<9>(tmp_315_cast_cast_reg_47124.read()));
}

void ShuffleNetV2::thread_tmp_221_fu_32872_p2() {
    tmp_221_fu_32872_p2 = (!p_shl190_cast_fu_32856_p1.read().is_01() || !p_shl191_cast_fu_32868_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl190_cast_fu_32856_p1.read()) - sc_biguint<8>(p_shl191_cast_fu_32868_p1.read()));
}

void ShuffleNetV2::thread_tmp_222_cast_cast_fu_28091_p1() {
    tmp_222_cast_cast_fu_28091_p1 = esl_zext<9,4>(tmp_1189_fu_28081_p4.read());
}

void ShuffleNetV2::thread_tmp_222_fu_33309_p2() {
    tmp_222_fu_33309_p2 = (!p_shl192_cast_fu_33295_p1.read().is_01() || !p_shl193_cast_fu_33305_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl192_cast_fu_33295_p1.read()) - sc_biguint<8>(p_shl193_cast_fu_33305_p1.read()));
}

void ShuffleNetV2::thread_tmp_223_cast_cast_fu_27792_p1() {
    tmp_223_cast_cast_fu_27792_p1 = esl_sext<8,7>(tmp_158_fu_27786_p2.read());
}

void ShuffleNetV2::thread_tmp_223_fu_33349_p2() {
    tmp_223_fu_33349_p2 = (!tmp_222_reg_47290.read().is_01() || !ci72_cast_fu_33329_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_222_reg_47290.read()) + sc_biguint<8>(ci72_cast_fu_33329_p1.read()));
}

void ShuffleNetV2::thread_tmp_224_cast_cast_fu_27801_p1() {
    tmp_224_cast_cast_fu_27801_p1 = esl_sext<10,7>(tmp_159_fu_27796_p2.read());
}

void ShuffleNetV2::thread_tmp_224_fu_33647_p2() {
    tmp_224_fu_33647_p2 = (!p_shl194_cast_fu_33631_p1.read().is_01() || !p_shl195_cast_fu_33643_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl194_cast_fu_33631_p1.read()) - sc_biguint<8>(p_shl195_cast_fu_33643_p1.read()));
}

void ShuffleNetV2::thread_tmp_225_fu_33657_p2() {
    tmp_225_fu_33657_p2 = (!tmp_224_fu_33647_p2.read().is_01() || !i152_cast_reg_47367.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_224_fu_33647_p2.read()) + sc_biguint<8>(i152_cast_reg_47367.read()));
}

void ShuffleNetV2::thread_tmp_226_cast_fu_28429_p1() {
    tmp_226_cast_fu_28429_p1 = esl_sext<11,7>(tmp_160_fu_28423_p2.read());
}

void ShuffleNetV2::thread_tmp_226_fu_33400_p2() {
    tmp_226_fu_33400_p2 = (!p_shl196_cast_fu_33386_p1.read().is_01() || !p_shl197_cast_fu_33396_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl196_cast_fu_33386_p1.read()) - sc_biguint<8>(p_shl197_cast_fu_33396_p1.read()));
}

void ShuffleNetV2::thread_tmp_227_cast1_fu_33454_p1() {
    tmp_227_cast1_fu_33454_p1 = esl_sext<11,10>(tmp_227_reg_47326.read());
}

void ShuffleNetV2::thread_tmp_227_cast_fu_28463_p1() {
    tmp_227_cast_fu_28463_p1 = esl_sext<32,7>(tmp_161_reg_45762.read());
}

void ShuffleNetV2::thread_tmp_227_fu_33410_p2() {
    tmp_227_fu_33410_p2 = (!tmp_335_cast_cast_fu_33406_p1.read().is_01() || !tmp_330_cast_cast_reg_47295.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_335_cast_cast_fu_33406_p1.read()) + sc_biguint<10>(tmp_330_cast_cast_reg_47295.read()));
}

void ShuffleNetV2::thread_tmp_228_fu_33427_p2() {
    tmp_228_fu_33427_p2 = (!p_shl198_cast_fu_33423_p1.read().is_01() || !p_shl196_cast1_fu_33382_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl198_cast_fu_33423_p1.read()) - sc_biguint<10>(p_shl196_cast1_fu_33382_p1.read()));
}

void ShuffleNetV2::thread_tmp_229_cast_cast_fu_28120_p1() {
    tmp_229_cast_cast_fu_28120_p1 = esl_sext<8,7>(tmp_157_fu_28115_p2.read());
}

void ShuffleNetV2::thread_tmp_229_fu_34078_p2() {
    tmp_229_fu_34078_p2 = (!p_shl201_cast_fu_34064_p1.read().is_01() || !p_shl202_cast_fu_34074_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl201_cast_fu_34064_p1.read()) - sc_biguint<8>(p_shl202_cast_fu_34074_p1.read()));
}

void ShuffleNetV2::thread_tmp_230_cast_cast_fu_28170_p1() {
    tmp_230_cast_cast_fu_28170_p1 = esl_sext<9,7>(tmp_162_fu_28164_p2.read());
}

void ShuffleNetV2::thread_tmp_230_fu_33988_p2() {
    tmp_230_fu_33988_p2 = (!p_shl199_cast_fu_33972_p1.read().is_01() || !p_shl200_cast_fu_33984_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl199_cast_fu_33972_p1.read()) - sc_biguint<8>(p_shl200_cast_fu_33984_p1.read()));
}

void ShuffleNetV2::thread_tmp_231_fu_33998_p2() {
    tmp_231_fu_33998_p2 = (!tmp_230_fu_33988_p2.read().is_01() || !i155_cast_reg_47500.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_230_fu_33988_p2.read()) + sc_biguint<8>(i155_cast_reg_47500.read()));
}

void ShuffleNetV2::thread_tmp_232_cast_fu_28209_p1() {
    tmp_232_cast_fu_28209_p1 = esl_sext<11,8>(tmp_164_fu_28203_p2.read());
}

void ShuffleNetV2::thread_tmp_232_fu_34118_p2() {
    tmp_232_fu_34118_p2 = (!tmp_229_reg_47550.read().is_01() || !ci74_cast_fu_34098_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_229_reg_47550.read()) + sc_biguint<8>(ci74_cast_fu_34098_p1.read()));
}

void ShuffleNetV2::thread_tmp_233_fu_33795_p2() {
    tmp_233_fu_33795_p2 = (!p_shl203_cast_fu_33779_p1.read().is_01() || !p_shl204_cast_fu_33791_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl203_cast_fu_33779_p1.read()) - sc_biguint<8>(p_shl204_cast_fu_33791_p1.read()));
}

void ShuffleNetV2::thread_tmp_234_fu_33805_p2() {
    tmp_234_fu_33805_p2 = (!co150_cast1_reg_47409.read().is_01() || !tmp_233_fu_33795_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co150_cast1_reg_47409.read()) + sc_biguint<8>(tmp_233_fu_33795_p2.read()));
}

void ShuffleNetV2::thread_tmp_235_fu_34416_p2() {
    tmp_235_fu_34416_p2 = (!p_shl205_cast_fu_34400_p1.read().is_01() || !p_shl206_cast_fu_34412_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl205_cast_fu_34400_p1.read()) - sc_biguint<8>(p_shl206_cast_fu_34412_p1.read()));
}

void ShuffleNetV2::thread_tmp_236_fu_34426_p2() {
    tmp_236_fu_34426_p2 = (!tmp_235_fu_34416_p2.read().is_01() || !i159_cast1_reg_47627.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_235_fu_34416_p2.read()) + sc_biguint<8>(i159_cast1_reg_47627.read()));
}

void ShuffleNetV2::thread_tmp_237_fu_34169_p2() {
    tmp_237_fu_34169_p2 = (!p_shl207_cast_fu_34155_p1.read().is_01() || !p_shl208_cast_fu_34165_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl207_cast_fu_34155_p1.read()) - sc_biguint<8>(p_shl208_cast_fu_34165_p1.read()));
}

void ShuffleNetV2::thread_tmp_238_cast_cast_fu_28857_p1() {
    tmp_238_cast_cast_fu_28857_p1 = esl_zext<9,4>(tmp_1230_fu_28847_p4.read());
}

void ShuffleNetV2::thread_tmp_238_cast_fu_34223_p1() {
    tmp_238_cast_fu_34223_p1 = esl_sext<11,10>(tmp_238_reg_47586.read());
}

void ShuffleNetV2::thread_tmp_238_fu_34179_p2() {
    tmp_238_fu_34179_p2 = (!tmp_353_cast_cast_fu_34175_p1.read().is_01() || !tmp_345_cast_cast_reg_47555.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_353_cast_cast_fu_34175_p1.read()) + sc_biguint<10>(tmp_345_cast_cast_reg_47555.read()));
}

void ShuffleNetV2::thread_tmp_239_cast_fu_29195_p1() {
    tmp_239_cast_fu_29195_p1 = esl_sext<11,7>(tmp_168_fu_29189_p2.read());
}

void ShuffleNetV2::thread_tmp_239_fu_34196_p2() {
    tmp_239_fu_34196_p2 = (!p_shl209_cast_fu_34192_p1.read().is_01() || !p_shl207_cast1_fu_34151_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl209_cast_fu_34192_p1.read()) - sc_biguint<10>(p_shl207_cast1_fu_34151_p1.read()));
}

void ShuffleNetV2::thread_tmp_240_cast_fu_29229_p1() {
    tmp_240_cast_fu_29229_p1 = esl_sext<32,7>(tmp_169_reg_45987.read());
}

void ShuffleNetV2::thread_tmp_240_fu_34847_p2() {
    tmp_240_fu_34847_p2 = (!p_shl212_cast_fu_34833_p1.read().is_01() || !p_shl213_cast_fu_34843_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl212_cast_fu_34833_p1.read()) - sc_biguint<8>(p_shl213_cast_fu_34843_p1.read()));
}

void ShuffleNetV2::thread_tmp_241_fu_34761_p2() {
    tmp_241_fu_34761_p2 = (!p_shl210_cast_fu_34745_p1.read().is_01() || !p_shl211_cast_fu_34757_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl210_cast_fu_34745_p1.read()) - sc_biguint<8>(p_shl211_cast_fu_34757_p1.read()));
}

void ShuffleNetV2::thread_tmp_242_cast_cast_fu_28886_p1() {
    tmp_242_cast_cast_fu_28886_p1 = esl_sext<8,7>(tmp_167_fu_28881_p2.read());
}

void ShuffleNetV2::thread_tmp_242_fu_34771_p2() {
    tmp_242_fu_34771_p2 = (!tmp_241_fu_34761_p2.read().is_01() || !i163_cast1_reg_47760.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_241_fu_34761_p2.read()) + sc_biguint<8>(i163_cast1_reg_47760.read()));
}

void ShuffleNetV2::thread_tmp_243_cast_cast_fu_28936_p1() {
    tmp_243_cast_cast_fu_28936_p1 = esl_sext<9,7>(tmp_170_fu_28930_p2.read());
}

void ShuffleNetV2::thread_tmp_243_fu_34887_p2() {
    tmp_243_fu_34887_p2 = (!tmp_240_reg_47810.read().is_01() || !ci76_cast_fu_34867_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_240_reg_47810.read()) + sc_biguint<8>(ci76_cast_fu_34867_p1.read()));
}

void ShuffleNetV2::thread_tmp_244_fu_34568_p2() {
    tmp_244_fu_34568_p2 = (!p_shl214_cast_fu_34552_p1.read().is_01() || !p_shl215_cast_fu_34564_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl214_cast_fu_34552_p1.read()) - sc_biguint<8>(p_shl215_cast_fu_34564_p1.read()));
}

void ShuffleNetV2::thread_tmp_245_cast_fu_28975_p1() {
    tmp_245_cast_fu_28975_p1 = esl_sext<11,8>(tmp_172_fu_28969_p2.read());
}

void ShuffleNetV2::thread_tmp_245_fu_34578_p2() {
    tmp_245_fu_34578_p2 = (!co154_cast1_reg_47669.read().is_01() || !tmp_244_fu_34568_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co154_cast1_reg_47669.read()) + sc_biguint<8>(tmp_244_fu_34568_p2.read()));
}

void ShuffleNetV2::thread_tmp_246_fu_35279_p2() {
    tmp_246_fu_35279_p2 = (!co158_cast_fu_35263_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co158_cast_fu_35263_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_247_cast_fu_29544_p1() {
    tmp_247_cast_fu_29544_p1 = esl_sext<11,7>(tmp_174_fu_29538_p2.read());
}

void ShuffleNetV2::thread_tmp_247_fu_35185_p2() {
    tmp_247_fu_35185_p2 = (!p_shl216_cast_fu_35169_p1.read().is_01() || !p_shl217_cast_fu_35181_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl216_cast_fu_35169_p1.read()) - sc_biguint<8>(p_shl217_cast_fu_35181_p1.read()));
}

void ShuffleNetV2::thread_tmp_248_cast_fu_29578_p1() {
    tmp_248_cast_fu_29578_p1 = esl_sext<32,7>(tmp_175_reg_46120.read());
}

void ShuffleNetV2::thread_tmp_248_fu_35195_p2() {
    tmp_248_fu_35195_p2 = (!tmp_247_fu_35185_p2.read().is_01() || !i167_cast1_reg_47887.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_247_fu_35185_p2.read()) + sc_biguint<8>(i167_cast1_reg_47887.read()));
}

void ShuffleNetV2::thread_tmp_249_fu_34938_p2() {
    tmp_249_fu_34938_p2 = (!p_shl220_cast_fu_34924_p1.read().is_01() || !p_shl221_cast_fu_34934_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl220_cast_fu_34924_p1.read()) - sc_biguint<8>(p_shl221_cast_fu_34934_p1.read()));
}

void ShuffleNetV2::thread_tmp_250_cast_fu_34992_p1() {
    tmp_250_cast_fu_34992_p1 = esl_sext<11,10>(tmp_250_reg_47846.read());
}

void ShuffleNetV2::thread_tmp_250_fu_34948_p2() {
    tmp_250_fu_34948_p2 = (!tmp_376_cast_cast_fu_34944_p1.read().is_01() || !tmp_363_cast_cast_reg_47815.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_376_cast_cast_fu_34944_p1.read()) + sc_biguint<10>(tmp_363_cast_cast_reg_47815.read()));
}

void ShuffleNetV2::thread_tmp_251_fu_34965_p2() {
    tmp_251_fu_34965_p2 = (!p_shl222_cast_fu_34961_p1.read().is_01() || !p_shl220_cast1_fu_34920_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl222_cast_fu_34961_p1.read()) - sc_biguint<10>(p_shl220_cast1_fu_34920_p1.read()));
}

void ShuffleNetV2::thread_tmp_252_fu_35482_p2() {
    tmp_252_fu_35482_p2 = (!p_shl218_cast_fu_35468_p1.read().is_01() || !p_shl219_cast_fu_35478_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl218_cast_fu_35468_p1.read()) - sc_biguint<8>(p_shl219_cast_fu_35478_p1.read()));
}

void ShuffleNetV2::thread_tmp_253_cast_cast_fu_29642_p1() {
    tmp_253_cast_cast_fu_29642_p1 = esl_zext<9,4>(tmp_1254_fu_29632_p4.read());
}

void ShuffleNetV2::thread_tmp_253_fu_35522_p2() {
    tmp_253_fu_35522_p2 = (!tmp_252_reg_47991.read().is_01() || !ci78_cast_fu_35502_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_252_reg_47991.read()) + sc_biguint<8>(ci78_cast_fu_35502_p1.read()));
}

void ShuffleNetV2::thread_tmp_254_cast_cast_fu_29339_p1() {
    tmp_254_cast_cast_fu_29339_p1 = esl_sext<8,7>(tmp_177_fu_29333_p2.read());
}

void ShuffleNetV2::thread_tmp_254_fu_35820_p2() {
    tmp_254_fu_35820_p2 = (!p_shl223_cast_fu_35804_p1.read().is_01() || !p_shl224_cast_fu_35816_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl223_cast_fu_35804_p1.read()) - sc_biguint<8>(p_shl224_cast_fu_35816_p1.read()));
}

void ShuffleNetV2::thread_tmp_255_cast_cast_fu_29348_p1() {
    tmp_255_cast_cast_fu_29348_p1 = esl_sext<10,7>(tmp_178_fu_29343_p2.read());
}

void ShuffleNetV2::thread_tmp_255_fu_35830_p2() {
    tmp_255_fu_35830_p2 = (!tmp_254_fu_35820_p2.read().is_01() || !i172_cast1_reg_48068.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_254_fu_35820_p2.read()) + sc_biguint<8>(i172_cast1_reg_48068.read()));
}

void ShuffleNetV2::thread_tmp_256_fu_35573_p2() {
    tmp_256_fu_35573_p2 = (!p_shl225_cast_fu_35559_p1.read().is_01() || !p_shl226_cast_fu_35569_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl225_cast_fu_35559_p1.read()) - sc_biguint<8>(p_shl226_cast_fu_35569_p1.read()));
}

void ShuffleNetV2::thread_tmp_257_cast1_fu_35627_p1() {
    tmp_257_cast1_fu_35627_p1 = esl_sext<11,10>(tmp_257_reg_48027.read());
}

void ShuffleNetV2::thread_tmp_257_cast_fu_29980_p1() {
    tmp_257_cast_fu_29980_p1 = esl_sext<11,7>(tmp_179_fu_29974_p2.read());
}

void ShuffleNetV2::thread_tmp_257_fu_35583_p2() {
    tmp_257_fu_35583_p2 = (!tmp_384_cast_cast_fu_35579_p1.read().is_01() || !tmp_375_cast_cast_reg_47996.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_384_cast_cast_fu_35579_p1.read()) + sc_biguint<10>(tmp_375_cast_cast_reg_47996.read()));
}

void ShuffleNetV2::thread_tmp_258_cast_fu_30014_p1() {
    tmp_258_cast_fu_30014_p1 = esl_sext<32,7>(tmp_180_reg_46247.read());
}

void ShuffleNetV2::thread_tmp_258_fu_35600_p2() {
    tmp_258_fu_35600_p2 = (!p_shl227_cast_fu_35596_p1.read().is_01() || !p_shl225_cast1_fu_35555_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl227_cast_fu_35596_p1.read()) - sc_biguint<10>(p_shl225_cast1_fu_35555_p1.read()));
}

void ShuffleNetV2::thread_tmp_259_fu_36243_p2() {
    tmp_259_fu_36243_p2 = (!p_shl230_cast_fu_36229_p1.read().is_01() || !p_shl231_cast_fu_36239_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl230_cast_fu_36229_p1.read()) - sc_biguint<8>(p_shl231_cast_fu_36239_p1.read()));
}

void ShuffleNetV2::thread_tmp_260_cast_cast_fu_29671_p1() {
    tmp_260_cast_cast_fu_29671_p1 = esl_sext<8,7>(tmp_176_fu_29666_p2.read());
}

void ShuffleNetV2::thread_tmp_260_fu_36157_p2() {
    tmp_260_fu_36157_p2 = (!p_shl228_cast_fu_36141_p1.read().is_01() || !p_shl229_cast_fu_36153_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl228_cast_fu_36141_p1.read()) - sc_biguint<8>(p_shl229_cast_fu_36153_p1.read()));
}

void ShuffleNetV2::thread_tmp_261_cast_cast_fu_29721_p1() {
    tmp_261_cast_cast_fu_29721_p1 = esl_sext<9,7>(tmp_181_fu_29715_p2.read());
}

void ShuffleNetV2::thread_tmp_261_fu_36167_p2() {
    tmp_261_fu_36167_p2 = (!tmp_260_fu_36157_p2.read().is_01() || !i175_cast1_reg_48201.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_260_fu_36157_p2.read()) + sc_biguint<8>(i175_cast1_reg_48201.read()));
}

void ShuffleNetV2::thread_tmp_262_fu_36283_p2() {
    tmp_262_fu_36283_p2 = (!tmp_259_reg_48251.read().is_01() || !ci80_cast_fu_36263_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_259_reg_48251.read()) + sc_biguint<8>(ci80_cast_fu_36263_p1.read()));
}

void ShuffleNetV2::thread_tmp_263_cast_fu_29760_p1() {
    tmp_263_cast_fu_29760_p1 = esl_sext<11,8>(tmp_183_fu_29754_p2.read());
}

void ShuffleNetV2::thread_tmp_263_fu_35964_p2() {
    tmp_263_fu_35964_p2 = (!p_shl232_cast_fu_35948_p1.read().is_01() || !p_shl233_cast_fu_35960_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl232_cast_fu_35948_p1.read()) - sc_biguint<8>(p_shl233_cast_fu_35960_p1.read()));
}

void ShuffleNetV2::thread_tmp_264_fu_35974_p2() {
    tmp_264_fu_35974_p2 = (!co162_cast1_reg_48110.read().is_01() || !tmp_263_fu_35964_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co162_cast1_reg_48110.read()) + sc_biguint<8>(tmp_263_fu_35964_p2.read()));
}

void ShuffleNetV2::thread_tmp_265_fu_36589_p2() {
    tmp_265_fu_36589_p2 = (!p_shl234_cast_fu_36573_p1.read().is_01() || !p_shl235_cast_fu_36585_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl234_cast_fu_36573_p1.read()) - sc_biguint<8>(p_shl235_cast_fu_36585_p1.read()));
}

void ShuffleNetV2::thread_tmp_266_fu_36599_p2() {
    tmp_266_fu_36599_p2 = (!tmp_265_fu_36589_p2.read().is_01() || !i179_cast1_reg_48328.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_265_fu_36589_p2.read()) + sc_biguint<8>(i179_cast1_reg_48328.read()));
}

void ShuffleNetV2::thread_tmp_267_fu_36334_p2() {
    tmp_267_fu_36334_p2 = (!p_shl236_cast_fu_36320_p1.read().is_01() || !p_shl237_cast_fu_36330_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl236_cast_fu_36320_p1.read()) - sc_biguint<8>(p_shl237_cast_fu_36330_p1.read()));
}

void ShuffleNetV2::thread_tmp_268_cast_fu_36388_p1() {
    tmp_268_cast_fu_36388_p1 = esl_sext<11,10>(tmp_268_reg_48287.read());
}

void ShuffleNetV2::thread_tmp_268_fu_36344_p2() {
    tmp_268_fu_36344_p2 = (!tmp_394_cast_cast_reg_48256.read().is_01() || !tmp_402_cast_cast_fu_36340_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_394_cast_cast_reg_48256.read()) + sc_bigint<10>(tmp_402_cast_cast_fu_36340_p1.read()));
}

void ShuffleNetV2::thread_tmp_269_cast_cast_fu_30408_p1() {
    tmp_269_cast_cast_fu_30408_p1 = esl_zext<9,4>(tmp_1295_fu_30398_p4.read());
}

void ShuffleNetV2::thread_tmp_269_fu_36361_p2() {
    tmp_269_fu_36361_p2 = (!p_shl238_cast_fu_36357_p1.read().is_01() || !p_shl236_cast1_fu_36316_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl238_cast_fu_36357_p1.read()) - sc_biguint<10>(p_shl236_cast1_fu_36316_p1.read()));
}

void ShuffleNetV2::thread_tmp_270_cast_fu_30754_p1() {
    tmp_270_cast_fu_30754_p1 = esl_sext<11,7>(tmp_187_fu_30748_p2.read());
}

void ShuffleNetV2::thread_tmp_270_fu_36806_p2() {
    tmp_270_fu_36806_p2 = (!co167_cast_fu_36790_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co167_cast_fu_36790_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_271_cast_fu_30788_p1() {
    tmp_271_cast_fu_30788_p1 = esl_sext<32,7>(tmp_188_reg_46472.read());
}

void ShuffleNetV2::thread_tmp_271_fu_37009_p2() {
    tmp_271_fu_37009_p2 = (!p_shl239_cast_fu_36995_p1.read().is_01() || !p_shl240_cast_fu_37005_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl239_cast_fu_36995_p1.read()) - sc_biguint<8>(p_shl240_cast_fu_37005_p1.read()));
}

void ShuffleNetV2::thread_tmp_272_fu_37049_p2() {
    tmp_272_fu_37049_p2 = (!tmp_271_reg_48476.read().is_01() || !ci82_cast_fu_37029_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_271_reg_48476.read()) + sc_biguint<8>(ci82_cast_fu_37029_p1.read()));
}

void ShuffleNetV2::thread_tmp_273_cast_cast_fu_30437_p1() {
    tmp_273_cast_cast_fu_30437_p1 = esl_sext<8,7>(tmp_186_fu_30432_p2.read());
}

void ShuffleNetV2::thread_tmp_273_fu_37347_p2() {
    tmp_273_fu_37347_p2 = (!p_shl241_cast_fu_37331_p1.read().is_01() || !p_shl242_cast_fu_37343_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl241_cast_fu_37331_p1.read()) - sc_biguint<8>(p_shl242_cast_fu_37343_p1.read()));
}

void ShuffleNetV2::thread_tmp_274_cast_cast_fu_30487_p1() {
    tmp_274_cast_cast_fu_30487_p1 = esl_sext<9,7>(tmp_189_fu_30481_p2.read());
}

void ShuffleNetV2::thread_tmp_274_fu_37357_p2() {
    tmp_274_fu_37357_p2 = (!tmp_273_fu_37347_p2.read().is_01() || !i184_cast1_reg_48553.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_273_fu_37347_p2.read()) + sc_biguint<8>(i184_cast1_reg_48553.read()));
}

void ShuffleNetV2::thread_tmp_275_fu_37100_p2() {
    tmp_275_fu_37100_p2 = (!p_shl243_cast_fu_37086_p1.read().is_01() || !p_shl244_cast_fu_37096_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl243_cast_fu_37086_p1.read()) - sc_biguint<8>(p_shl244_cast_fu_37096_p1.read()));
}

void ShuffleNetV2::thread_tmp_276_cast_cast_fu_30526_p1() {
    tmp_276_cast_cast_fu_30526_p1 = esl_sext<10,8>(tmp_191_fu_30520_p2.read());
}

void ShuffleNetV2::thread_tmp_276_cast_fu_37154_p1() {
    tmp_276_cast_fu_37154_p1 = esl_sext<11,10>(tmp_276_reg_48512.read());
}

void ShuffleNetV2::thread_tmp_276_fu_37110_p2() {
    tmp_276_fu_37110_p2 = (!tmp_415_cast_cast_fu_37106_p1.read().is_01() || !tmp_410_cast_cast_reg_48481.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_415_cast_cast_fu_37106_p1.read()) + sc_biguint<10>(tmp_410_cast_cast_reg_48481.read()));
}

void ShuffleNetV2::thread_tmp_277_fu_37127_p2() {
    tmp_277_fu_37127_p2 = (!p_shl245_cast_fu_37123_p1.read().is_01() || !p_shl243_cast1_fu_37082_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl245_cast_fu_37123_p1.read()) - sc_biguint<10>(p_shl243_cast1_fu_37082_p1.read()));
}

void ShuffleNetV2::thread_tmp_278_cast_fu_31095_p1() {
    tmp_278_cast_fu_31095_p1 = esl_sext<11,7>(tmp_193_fu_31089_p2.read());
}

void ShuffleNetV2::thread_tmp_278_fu_37782_p2() {
    tmp_278_fu_37782_p2 = (!p_shl248_cast_fu_37768_p1.read().is_01() || !p_shl249_cast_fu_37778_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl248_cast_fu_37768_p1.read()) - sc_biguint<8>(p_shl249_cast_fu_37778_p1.read()));
}

void ShuffleNetV2::thread_tmp_279_cast_fu_31129_p1() {
    tmp_279_cast_fu_31129_p1 = esl_sext<32,7>(tmp_194_reg_46605.read());
}

void ShuffleNetV2::thread_tmp_279_fu_37696_p2() {
    tmp_279_fu_37696_p2 = (!p_shl246_cast_fu_37680_p1.read().is_01() || !p_shl247_cast_fu_37692_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl246_cast_fu_37680_p1.read()) - sc_biguint<8>(p_shl247_cast_fu_37692_p1.read()));
}

void ShuffleNetV2::thread_tmp_280_fu_37706_p2() {
    tmp_280_fu_37706_p2 = (!tmp_279_fu_37696_p2.read().is_01() || !i187_cast1_reg_48686.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_279_fu_37696_p2.read()) + sc_biguint<8>(i187_cast1_reg_48686.read()));
}

void ShuffleNetV2::thread_tmp_281_fu_37822_p2() {
    tmp_281_fu_37822_p2 = (!tmp_278_reg_48736.read().is_01() || !ci84_cast_fu_37802_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_278_reg_48736.read()) + sc_biguint<8>(ci84_cast_fu_37802_p1.read()));
}

void ShuffleNetV2::thread_tmp_282_fu_37491_p2() {
    tmp_282_fu_37491_p2 = (!p_shl250_cast_fu_37475_p1.read().is_01() || !p_shl251_cast_fu_37487_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl250_cast_fu_37475_p1.read()) - sc_biguint<8>(p_shl251_cast_fu_37487_p1.read()));
}

void ShuffleNetV2::thread_tmp_283_fu_37501_p2() {
    tmp_283_fu_37501_p2 = (!tmp_282_fu_37491_p2.read().is_01() || !co172_cast_reg_48595.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_282_fu_37491_p2.read()) + sc_biguint<8>(co172_cast_reg_48595.read()));
}

void ShuffleNetV2::thread_tmp_284_cast_cast_fu_31193_p1() {
    tmp_284_cast_cast_fu_31193_p1 = esl_zext<9,4>(tmp_1321_fu_31183_p4.read());
}

void ShuffleNetV2::thread_tmp_284_fu_38120_p2() {
    tmp_284_fu_38120_p2 = (!p_shl252_cast_fu_38104_p1.read().is_01() || !p_shl253_cast_fu_38116_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl252_cast_fu_38104_p1.read()) - sc_biguint<8>(p_shl253_cast_fu_38116_p1.read()));
}

void ShuffleNetV2::thread_tmp_285_cast_fu_30898_p1() {
    tmp_285_cast_fu_30898_p1 = esl_sext<10,7>(tmp_196_fu_30892_p2.read());
}

void ShuffleNetV2::thread_tmp_285_fu_38130_p2() {
    tmp_285_fu_38130_p2 = (!tmp_284_fu_38120_p2.read().is_01() || !i191_cast1_reg_48813.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_284_fu_38120_p2.read()) + sc_biguint<8>(i191_cast1_reg_48813.read()));
}

void ShuffleNetV2::thread_tmp_286_cast_cast_fu_30907_p1() {
    tmp_286_cast_cast_fu_30907_p1 = esl_sext<10,7>(tmp_197_fu_30902_p2.read());
}

void ShuffleNetV2::thread_tmp_286_fu_37873_p2() {
    tmp_286_fu_37873_p2 = (!p_shl254_cast_fu_37859_p1.read().is_01() || !p_shl255_cast_fu_37869_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl254_cast_fu_37859_p1.read()) - sc_biguint<8>(p_shl255_cast_fu_37869_p1.read()));
}

void ShuffleNetV2::thread_tmp_287_cast_fu_37927_p1() {
    tmp_287_cast_fu_37927_p1 = esl_sext<11,10>(tmp_287_reg_48772.read());
}

void ShuffleNetV2::thread_tmp_287_fu_37883_p2() {
    tmp_287_fu_37883_p2 = (!tmp_433_cast_cast_fu_37879_p1.read().is_01() || !tmp_425_cast_cast_reg_48741.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_433_cast_cast_fu_37879_p1.read()) + sc_biguint<10>(tmp_425_cast_cast_reg_48741.read()));
}

void ShuffleNetV2::thread_tmp_288_cast_cast_fu_31539_p1() {
    tmp_288_cast_cast_fu_31539_p1 = esl_sext<10,7>(tmp_198_fu_31533_p2.read());
}

void ShuffleNetV2::thread_tmp_288_fu_37900_p2() {
    tmp_288_fu_37900_p2 = (!p_shl256_cast_fu_37896_p1.read().is_01() || !p_shl254_cast1_fu_37855_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl256_cast_fu_37896_p1.read()) - sc_biguint<10>(p_shl254_cast1_fu_37855_p1.read()));
}

void ShuffleNetV2::thread_tmp_289_cast_fu_31577_p1() {
    tmp_289_cast_fu_31577_p1 = esl_sext<32,7>(tmp_199_reg_46732.read());
}

void ShuffleNetV2::thread_tmp_289_fu_38337_p2() {
    tmp_289_fu_38337_p2 = (!co177_cast_fu_38321_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co177_cast_fu_38321_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_290_fu_38540_p2() {
    tmp_290_fu_38540_p2 = (!p_shl257_cast_fu_38526_p1.read().is_01() || !p_shl258_cast_fu_38536_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl257_cast_fu_38526_p1.read()) - sc_biguint<8>(p_shl258_cast_fu_38536_p1.read()));
}

void ShuffleNetV2::thread_tmp_291_cast_cast_fu_31222_p1() {
    tmp_291_cast_cast_fu_31222_p1 = esl_sext<8,7>(tmp_195_fu_31217_p2.read());
}

void ShuffleNetV2::thread_tmp_291_fu_38580_p2() {
    tmp_291_fu_38580_p2 = (!tmp_290_reg_48961.read().is_01() || !ci86_cast_fu_38560_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_290_reg_48961.read()) + sc_biguint<8>(ci86_cast_fu_38560_p1.read()));
}

void ShuffleNetV2::thread_tmp_292_cast_cast_fu_31272_p1() {
    tmp_292_cast_cast_fu_31272_p1 = esl_sext<9,7>(tmp_200_fu_31266_p2.read());
}

void ShuffleNetV2::thread_tmp_292_fu_38878_p2() {
    tmp_292_fu_38878_p2 = (!p_shl259_cast_fu_38862_p1.read().is_01() || !p_shl260_cast_fu_38874_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl259_cast_fu_38862_p1.read()) - sc_biguint<8>(p_shl260_cast_fu_38874_p1.read()));
}

void ShuffleNetV2::thread_tmp_293_fu_38888_p2() {
    tmp_293_fu_38888_p2 = (!tmp_292_fu_38878_p2.read().is_01() || !i196_cast1_reg_49038.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_292_fu_38878_p2.read()) + sc_biguint<8>(i196_cast1_reg_49038.read()));
}

void ShuffleNetV2::thread_tmp_294_cast_cast_fu_31311_p1() {
    tmp_294_cast_cast_fu_31311_p1 = esl_sext<10,8>(tmp_202_fu_31305_p2.read());
}

void ShuffleNetV2::thread_tmp_294_fu_38631_p2() {
    tmp_294_fu_38631_p2 = (!p_shl261_cast_fu_38617_p1.read().is_01() || !p_shl262_cast_fu_38627_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl261_cast_fu_38617_p1.read()) - sc_biguint<8>(p_shl262_cast_fu_38627_p1.read()));
}

void ShuffleNetV2::thread_tmp_295_cast_fu_38685_p1() {
    tmp_295_cast_fu_38685_p1 = esl_sext<11,10>(tmp_295_reg_48997.read());
}

void ShuffleNetV2::thread_tmp_295_fu_38641_p2() {
    tmp_295_fu_38641_p2 = (!tmp_446_cast_cast_fu_38637_p1.read().is_01() || !tmp_441_cast_cast_reg_48966.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_446_cast_cast_fu_38637_p1.read()) + sc_biguint<10>(tmp_441_cast_cast_reg_48966.read()));
}

void ShuffleNetV2::thread_tmp_296_fu_38658_p2() {
    tmp_296_fu_38658_p2 = (!p_shl263_cast_fu_38654_p1.read().is_01() || !p_shl261_cast1_fu_38613_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl263_cast_fu_38654_p1.read()) - sc_biguint<10>(p_shl261_cast1_fu_38613_p1.read()));
}

void ShuffleNetV2::thread_tmp_297_fu_39305_p2() {
    tmp_297_fu_39305_p2 = (!p_shl266_cast_fu_39291_p1.read().is_01() || !p_shl267_cast_fu_39301_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl266_cast_fu_39291_p1.read()) - sc_biguint<8>(p_shl267_cast_fu_39301_p1.read()));
}

void ShuffleNetV2::thread_tmp_298_fu_39219_p2() {
    tmp_298_fu_39219_p2 = (!p_shl264_cast_fu_39203_p1.read().is_01() || !p_shl265_cast_fu_39215_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl264_cast_fu_39203_p1.read()) - sc_biguint<8>(p_shl265_cast_fu_39215_p1.read()));
}

void ShuffleNetV2::thread_tmp_299_fu_39229_p2() {
    tmp_299_fu_39229_p2 = (!tmp_298_fu_39219_p2.read().is_01() || !i199_cast1_reg_49171.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_298_fu_39219_p2.read()) + sc_biguint<8>(i199_cast1_reg_49171.read()));
}

void ShuffleNetV2::thread_tmp_300_cast_cast_fu_31971_p1() {
    tmp_300_cast_cast_fu_31971_p1 = esl_zext<9,4>(tmp_1363_fu_31961_p4.read());
}

void ShuffleNetV2::thread_tmp_300_fu_39345_p2() {
    tmp_300_fu_39345_p2 = (!tmp_297_reg_49221.read().is_01() || !ci88_cast_fu_39325_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_297_reg_49221.read()) + sc_biguint<8>(ci88_cast_fu_39325_p1.read()));
}

void ShuffleNetV2::thread_tmp_301_cast_cast_fu_32317_p1() {
    tmp_301_cast_cast_fu_32317_p1 = esl_sext<10,7>(tmp_206_fu_32311_p2.read());
}

void ShuffleNetV2::thread_tmp_301_fu_39022_p2() {
    tmp_301_fu_39022_p2 = (!p_shl268_cast_fu_39006_p1.read().is_01() || !p_shl269_cast_fu_39018_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl268_cast_fu_39006_p1.read()) - sc_biguint<8>(p_shl269_cast_fu_39018_p1.read()));
}

void ShuffleNetV2::thread_tmp_302_cast_fu_32355_p1() {
    tmp_302_cast_fu_32355_p1 = esl_sext<32,7>(tmp_207_reg_46957.read());
}

void ShuffleNetV2::thread_tmp_302_fu_39032_p2() {
    tmp_302_fu_39032_p2 = (!co182_cast1_reg_49080.read().is_01() || !tmp_301_fu_39022_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co182_cast1_reg_49080.read()) + sc_biguint<8>(tmp_301_fu_39022_p2.read()));
}

void ShuffleNetV2::thread_tmp_303_fu_39643_p2() {
    tmp_303_fu_39643_p2 = (!p_shl270_cast_fu_39627_p1.read().is_01() || !p_shl271_cast_fu_39639_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl270_cast_fu_39627_p1.read()) - sc_biguint<8>(p_shl271_cast_fu_39639_p1.read()));
}

void ShuffleNetV2::thread_tmp_304_cast_cast_fu_32000_p1() {
    tmp_304_cast_cast_fu_32000_p1 = esl_sext<8,7>(tmp_205_fu_31995_p2.read());
}

void ShuffleNetV2::thread_tmp_304_fu_39653_p2() {
    tmp_304_fu_39653_p2 = (!tmp_303_fu_39643_p2.read().is_01() || !i203_cast1_reg_49298.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_303_fu_39643_p2.read()) + sc_biguint<8>(i203_cast1_reg_49298.read()));
}

void ShuffleNetV2::thread_tmp_305_cast_cast_fu_32050_p1() {
    tmp_305_cast_cast_fu_32050_p1 = esl_sext<9,7>(tmp_208_fu_32044_p2.read());
}

void ShuffleNetV2::thread_tmp_305_fu_39396_p2() {
    tmp_305_fu_39396_p2 = (!p_shl272_cast_fu_39382_p1.read().is_01() || !p_shl273_cast_fu_39392_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl272_cast_fu_39382_p1.read()) - sc_biguint<8>(p_shl273_cast_fu_39392_p1.read()));
}

void ShuffleNetV2::thread_tmp_306_cast_fu_39450_p1() {
    tmp_306_cast_fu_39450_p1 = esl_sext<11,10>(tmp_306_reg_49257.read());
}

void ShuffleNetV2::thread_tmp_306_fu_39406_p2() {
    tmp_306_fu_39406_p2 = (!tmp_464_cast_cast_fu_39402_p1.read().is_01() || !tmp_456_cast_cast_reg_49226.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_464_cast_cast_fu_39402_p1.read()) + sc_biguint<10>(tmp_456_cast_cast_reg_49226.read()));
}

void ShuffleNetV2::thread_tmp_307_cast_cast_fu_32089_p1() {
    tmp_307_cast_cast_fu_32089_p1 = esl_sext<9,8>(tmp_210_fu_32083_p2.read());
}

void ShuffleNetV2::thread_tmp_307_fu_39423_p2() {
    tmp_307_fu_39423_p2 = (!p_shl274_cast_fu_39419_p1.read().is_01() || !p_shl272_cast1_fu_39378_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl274_cast_fu_39419_p1.read()) - sc_biguint<10>(p_shl272_cast1_fu_39378_p1.read()));
}

void ShuffleNetV2::thread_tmp_309_cast_cast_fu_32658_p1() {
    tmp_309_cast_cast_fu_32658_p1 = esl_sext<10,7>(tmp_212_fu_32652_p2.read());
}

void ShuffleNetV2::thread_tmp_30_fu_17289_p2() {
    tmp_30_fu_17289_p2 = (!co35_cast_fu_17273_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co35_cast_fu_17273_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_310_cast_fu_32696_p1() {
    tmp_310_cast_fu_32696_p1 = esl_sext<32,7>(tmp_213_reg_47090.read());
}

void ShuffleNetV2::thread_tmp_315_cast_cast_fu_32760_p1() {
    tmp_315_cast_cast_fu_32760_p1 = esl_zext<9,4>(tmp_1389_fu_32750_p4.read());
}

void ShuffleNetV2::thread_tmp_316_cast_fu_32465_p1() {
    tmp_316_cast_fu_32465_p1 = esl_sext<10,7>(tmp_215_fu_32459_p2.read());
}

void ShuffleNetV2::thread_tmp_317_cast_cast_fu_32474_p1() {
    tmp_317_cast_cast_fu_32474_p1 = esl_sext<10,7>(tmp_216_fu_32469_p2.read());
}

void ShuffleNetV2::thread_tmp_319_cast_cast_fu_33106_p1() {
    tmp_319_cast_cast_fu_33106_p1 = esl_sext<10,7>(tmp_217_fu_33100_p2.read());
}

void ShuffleNetV2::thread_tmp_31_fu_18077_p2() {
    tmp_31_fu_18077_p2 = (!co47_cast_fu_18061_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co47_cast_fu_18061_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_320_cast_fu_33144_p1() {
    tmp_320_cast_fu_33144_p1 = esl_sext<32,7>(tmp_218_reg_47217.read());
}

void ShuffleNetV2::thread_tmp_322_cast_cast_fu_32789_p1() {
    tmp_322_cast_cast_fu_32789_p1 = esl_sext<8,7>(tmp_214_fu_32784_p2.read());
}

void ShuffleNetV2::thread_tmp_323_cast_cast_fu_32839_p1() {
    tmp_323_cast_cast_fu_32839_p1 = esl_sext<9,7>(tmp_219_fu_32833_p2.read());
}

void ShuffleNetV2::thread_tmp_325_cast_cast_fu_32878_p1() {
    tmp_325_cast_cast_fu_32878_p1 = esl_sext<9,8>(tmp_221_fu_32872_p2.read());
}

void ShuffleNetV2::thread_tmp_330_cast_cast_fu_33325_p1() {
    tmp_330_cast_cast_fu_33325_p1 = esl_zext<10,3>(tmp_1420_fu_33315_p4.read());
}

void ShuffleNetV2::thread_tmp_331_cast_cast_fu_33653_p1() {
    tmp_331_cast_cast_fu_33653_p1 = esl_sext<10,8>(tmp_224_fu_33647_p2.read());
}

void ShuffleNetV2::thread_tmp_332_cast_fu_33691_p1() {
    tmp_332_cast_fu_33691_p1 = esl_sext<32,8>(tmp_225_reg_47388.read());
}

void ShuffleNetV2::thread_tmp_334_cast_cast_fu_33354_p1() {
    tmp_334_cast_cast_fu_33354_p1 = esl_sext<10,8>(tmp_223_fu_33349_p2.read());
}

void ShuffleNetV2::thread_tmp_335_cast_cast_fu_33406_p1() {
    tmp_335_cast_cast_fu_33406_p1 = esl_sext<10,8>(tmp_226_fu_33400_p2.read());
}

void ShuffleNetV2::thread_tmp_337_cast_fu_33433_p1() {
    tmp_337_cast_fu_33433_p1 = esl_sext<12,10>(tmp_228_fu_33427_p2.read());
}

void ShuffleNetV2::thread_tmp_339_cast_cast_fu_33994_p1() {
    tmp_339_cast_cast_fu_33994_p1 = esl_sext<9,8>(tmp_230_fu_33988_p2.read());
}

void ShuffleNetV2::thread_tmp_33_fu_18889_p2() {
    tmp_33_fu_18889_p2 = (!p_shl_cast_fu_18873_p1.read().is_01() || !p_shl1_cast_fu_18885_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl_cast_fu_18873_p1.read()) - sc_biguint<7>(p_shl1_cast_fu_18885_p1.read()));
}

void ShuffleNetV2::thread_tmp_340_cast_fu_34032_p1() {
    tmp_340_cast_fu_34032_p1 = esl_sext<32,8>(tmp_231_reg_47521.read());
}

void ShuffleNetV2::thread_tmp_345_cast_cast_fu_34094_p1() {
    tmp_345_cast_cast_fu_34094_p1 = esl_zext<10,3>(tmp_1440_fu_34084_p4.read());
}

void ShuffleNetV2::thread_tmp_346_cast_fu_33801_p1() {
    tmp_346_cast_fu_33801_p1 = esl_sext<10,8>(tmp_233_fu_33795_p2.read());
}

void ShuffleNetV2::thread_tmp_347_cast_cast_fu_33810_p1() {
    tmp_347_cast_cast_fu_33810_p1 = esl_sext<11,8>(tmp_234_fu_33805_p2.read());
}

void ShuffleNetV2::thread_tmp_349_cast_cast_fu_34422_p1() {
    tmp_349_cast_cast_fu_34422_p1 = esl_sext<9,8>(tmp_235_fu_34416_p2.read());
}

void ShuffleNetV2::thread_tmp_34_cast_cast_fu_18905_p1() {
    tmp_34_cast_cast_fu_18905_p1 = esl_zext<9,4>(tmp_830_fu_18895_p4.read());
}

void ShuffleNetV2::thread_tmp_350_cast_fu_34464_p1() {
    tmp_350_cast_fu_34464_p1 = esl_sext<32,8>(tmp_236_reg_47648.read());
}

void ShuffleNetV2::thread_tmp_352_cast_cast_fu_34123_p1() {
    tmp_352_cast_cast_fu_34123_p1 = esl_sext<10,8>(tmp_232_fu_34118_p2.read());
}

void ShuffleNetV2::thread_tmp_353_cast_cast_fu_34175_p1() {
    tmp_353_cast_cast_fu_34175_p1 = esl_sext<10,8>(tmp_237_fu_34169_p2.read());
}

void ShuffleNetV2::thread_tmp_355_cast_fu_34202_p1() {
    tmp_355_cast_fu_34202_p1 = esl_sext<12,10>(tmp_239_fu_34196_p2.read());
}

void ShuffleNetV2::thread_tmp_357_cast_fu_34767_p1() {
    tmp_357_cast_fu_34767_p1 = esl_sext<12,8>(tmp_241_fu_34761_p2.read());
}

void ShuffleNetV2::thread_tmp_358_cast_fu_34801_p1() {
    tmp_358_cast_fu_34801_p1 = esl_sext<32,8>(tmp_242_reg_47781.read());
}

void ShuffleNetV2::thread_tmp_35_cast_fu_19243_p1() {
    tmp_35_cast_fu_19243_p1 = esl_sext<9,7>(tmp_35_fu_19237_p2.read());
}

void ShuffleNetV2::thread_tmp_35_fu_19237_p2() {
    tmp_35_fu_19237_p2 = (!p_shl2_cast_fu_19221_p1.read().is_01() || !p_shl3_cast_fu_19233_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl2_cast_fu_19221_p1.read()) - sc_biguint<7>(p_shl3_cast_fu_19233_p1.read()));
}

void ShuffleNetV2::thread_tmp_363_cast_cast_fu_34863_p1() {
    tmp_363_cast_cast_fu_34863_p1 = esl_zext<10,3>(tmp_1469_fu_34853_p4.read());
}

void ShuffleNetV2::thread_tmp_364_cast_fu_34574_p1() {
    tmp_364_cast_fu_34574_p1 = esl_sext<10,8>(tmp_244_fu_34568_p2.read());
}

void ShuffleNetV2::thread_tmp_365_cast_cast_fu_34583_p1() {
    tmp_365_cast_cast_fu_34583_p1 = esl_sext<11,8>(tmp_245_fu_34578_p2.read());
}

void ShuffleNetV2::thread_tmp_367_cast_fu_35191_p1() {
    tmp_367_cast_fu_35191_p1 = esl_sext<12,8>(tmp_247_fu_35185_p2.read());
}

void ShuffleNetV2::thread_tmp_368_cast_fu_35225_p1() {
    tmp_368_cast_fu_35225_p1 = esl_sext<32,8>(tmp_248_reg_47908.read());
}

void ShuffleNetV2::thread_tmp_36_cast_fu_19277_p1() {
    tmp_36_cast_fu_19277_p1 = esl_sext<32,7>(tmp_36_reg_42861.read());
}

void ShuffleNetV2::thread_tmp_36_fu_19247_p2() {
    tmp_36_fu_19247_p2 = (!tmp_35_fu_19237_p2.read().is_01() || !i37_cast1_reg_42840.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_35_fu_19237_p2.read()) + sc_biguint<7>(i37_cast1_reg_42840.read()));
}

void ShuffleNetV2::thread_tmp_370_cast_cast_fu_34892_p1() {
    tmp_370_cast_cast_fu_34892_p1 = esl_sext<10,8>(tmp_243_fu_34887_p2.read());
}

void ShuffleNetV2::thread_tmp_375_cast_cast_fu_35498_p1() {
    tmp_375_cast_cast_fu_35498_p1 = esl_zext<10,3>(tmp_1504_fu_35488_p4.read());
}

void ShuffleNetV2::thread_tmp_376_cast_cast_fu_34944_p1() {
    tmp_376_cast_cast_fu_34944_p1 = esl_sext<10,8>(tmp_249_fu_34938_p2.read());
}

void ShuffleNetV2::thread_tmp_378_cast_fu_34971_p1() {
    tmp_378_cast_fu_34971_p1 = esl_sext<12,10>(tmp_251_fu_34965_p2.read());
}

void ShuffleNetV2::thread_tmp_380_cast_fu_35826_p1() {
    tmp_380_cast_fu_35826_p1 = esl_sext<12,8>(tmp_254_fu_35820_p2.read());
}

void ShuffleNetV2::thread_tmp_381_cast_fu_35860_p1() {
    tmp_381_cast_fu_35860_p1 = esl_sext<32,8>(tmp_255_reg_48089.read());
}

void ShuffleNetV2::thread_tmp_383_cast_cast_fu_35527_p1() {
    tmp_383_cast_cast_fu_35527_p1 = esl_sext<10,8>(tmp_253_fu_35522_p2.read());
}

void ShuffleNetV2::thread_tmp_384_cast_cast_fu_35579_p1() {
    tmp_384_cast_cast_fu_35579_p1 = esl_sext<10,8>(tmp_256_fu_35573_p2.read());
}

void ShuffleNetV2::thread_tmp_386_cast_fu_35606_p1() {
    tmp_386_cast_fu_35606_p1 = esl_sext<12,10>(tmp_258_fu_35600_p2.read());
}

void ShuffleNetV2::thread_tmp_388_cast_fu_36163_p1() {
    tmp_388_cast_fu_36163_p1 = esl_sext<12,8>(tmp_260_fu_36157_p2.read());
}

void ShuffleNetV2::thread_tmp_389_cast_fu_36197_p1() {
    tmp_389_cast_fu_36197_p1 = esl_sext<32,8>(tmp_261_reg_48222.read());
}

void ShuffleNetV2::thread_tmp_38_cast_cast_fu_18934_p1() {
    tmp_38_cast_cast_fu_18934_p1 = esl_sext<8,7>(tmp_38_fu_18929_p2.read());
}

void ShuffleNetV2::thread_tmp_38_fu_18929_p2() {
    tmp_38_fu_18929_p2 = (!tmp_33_reg_42763.read().is_01() || !ci34_cast_fu_18909_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_33_reg_42763.read()) + sc_biguint<7>(ci34_cast_fu_18909_p1.read()));
}

void ShuffleNetV2::thread_tmp_394_cast_cast_fu_36259_p1() {
    tmp_394_cast_cast_fu_36259_p1 = esl_zext<10,3>(tmp_1527_fu_36249_p4.read());
}

void ShuffleNetV2::thread_tmp_395_cast_fu_35970_p1() {
    tmp_395_cast_fu_35970_p1 = esl_sext<10,8>(tmp_263_fu_35964_p2.read());
}

void ShuffleNetV2::thread_tmp_396_cast_cast_fu_35979_p1() {
    tmp_396_cast_cast_fu_35979_p1 = esl_sext<11,8>(tmp_264_fu_35974_p2.read());
}

void ShuffleNetV2::thread_tmp_398_cast_fu_36595_p1() {
    tmp_398_cast_fu_36595_p1 = esl_sext<12,8>(tmp_265_fu_36589_p2.read());
}

void ShuffleNetV2::thread_tmp_399_cast_fu_36629_p1() {
    tmp_399_cast_fu_36629_p1 = esl_sext<32,8>(tmp_266_reg_48349.read());
}

void ShuffleNetV2::thread_tmp_39_cast_cast_fu_18984_p1() {
    tmp_39_cast_cast_fu_18984_p1 = esl_sext<9,7>(tmp_39_fu_18978_p2.read());
}

void ShuffleNetV2::thread_tmp_39_fu_18978_p2() {
    tmp_39_fu_18978_p2 = (!p_shl4_cast_fu_18962_p1.read().is_01() || !p_shl5_cast_fu_18974_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl4_cast_fu_18962_p1.read()) - sc_biguint<7>(p_shl5_cast_fu_18974_p1.read()));
}

void ShuffleNetV2::thread_tmp_401_cast_cast_fu_36288_p1() {
    tmp_401_cast_cast_fu_36288_p1 = esl_sext<10,8>(tmp_262_fu_36283_p2.read());
}

void ShuffleNetV2::thread_tmp_402_cast_cast_fu_36340_p1() {
    tmp_402_cast_cast_fu_36340_p1 = esl_sext<10,8>(tmp_267_fu_36334_p2.read());
}

void ShuffleNetV2::thread_tmp_404_cast_cast_fu_36367_p1() {
    tmp_404_cast_cast_fu_36367_p1 = esl_sext<11,10>(tmp_269_fu_36361_p2.read());
}

void ShuffleNetV2::thread_tmp_40_cast_fu_19044_p1() {
    tmp_40_cast_fu_19044_p1 = esl_sext<10,9>(tmp_40_reg_42799.read());
}

void ShuffleNetV2::thread_tmp_40_fu_18988_p2() {
    tmp_40_fu_18988_p2 = (!tmp_39_cast_cast_fu_18984_p1.read().is_01() || !tmp_34_cast_cast_reg_42768.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_39_cast_cast_fu_18984_p1.read()) + sc_biguint<9>(tmp_34_cast_cast_reg_42768.read()));
}

void ShuffleNetV2::thread_tmp_410_cast_cast_fu_37025_p1() {
    tmp_410_cast_cast_fu_37025_p1 = esl_zext<10,3>(tmp_1571_fu_37015_p4.read());
}

void ShuffleNetV2::thread_tmp_411_cast_fu_37353_p1() {
    tmp_411_cast_fu_37353_p1 = esl_sext<12,8>(tmp_273_fu_37347_p2.read());
}

void ShuffleNetV2::thread_tmp_412_cast_fu_37387_p1() {
    tmp_412_cast_fu_37387_p1 = esl_sext<32,8>(tmp_274_reg_48574.read());
}

void ShuffleNetV2::thread_tmp_414_cast_cast_fu_37054_p1() {
    tmp_414_cast_cast_fu_37054_p1 = esl_sext<10,8>(tmp_272_fu_37049_p2.read());
}

void ShuffleNetV2::thread_tmp_415_cast_cast_fu_37106_p1() {
    tmp_415_cast_cast_fu_37106_p1 = esl_sext<10,8>(tmp_275_fu_37100_p2.read());
}

void ShuffleNetV2::thread_tmp_417_cast_fu_37133_p1() {
    tmp_417_cast_fu_37133_p1 = esl_sext<13,10>(tmp_277_fu_37127_p2.read());
}

void ShuffleNetV2::thread_tmp_419_cast_fu_37702_p1() {
    tmp_419_cast_fu_37702_p1 = esl_sext<12,8>(tmp_279_fu_37696_p2.read());
}

void ShuffleNetV2::thread_tmp_41_cast_fu_19023_p1() {
    tmp_41_cast_fu_19023_p1 = esl_sext<9,8>(tmp_41_fu_19017_p2.read());
}

void ShuffleNetV2::thread_tmp_41_fu_19017_p2() {
    tmp_41_fu_19017_p2 = (!p_shl6_cast_fu_19001_p1.read().is_01() || !p_shl7_cast_fu_19013_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl6_cast_fu_19001_p1.read()) - sc_biguint<8>(p_shl7_cast_fu_19013_p1.read()));
}

void ShuffleNetV2::thread_tmp_420_cast_fu_37736_p1() {
    tmp_420_cast_fu_37736_p1 = esl_sext<32,8>(tmp_280_reg_48707.read());
}

void ShuffleNetV2::thread_tmp_425_cast_cast_fu_37798_p1() {
    tmp_425_cast_cast_fu_37798_p1 = esl_zext<10,3>(tmp_1595_fu_37788_p4.read());
}

void ShuffleNetV2::thread_tmp_426_cast_cast_fu_37497_p1() {
    tmp_426_cast_cast_fu_37497_p1 = esl_sext<9,8>(tmp_282_fu_37491_p2.read());
}

void ShuffleNetV2::thread_tmp_427_cast_cast_fu_37506_p1() {
    tmp_427_cast_cast_fu_37506_p1 = esl_sext<11,8>(tmp_283_fu_37501_p2.read());
}

void ShuffleNetV2::thread_tmp_429_cast_fu_38126_p1() {
    tmp_429_cast_fu_38126_p1 = esl_sext<12,8>(tmp_284_fu_38120_p2.read());
}

void ShuffleNetV2::thread_tmp_430_cast_fu_38160_p1() {
    tmp_430_cast_fu_38160_p1 = esl_sext<32,8>(tmp_285_reg_48834.read());
}

void ShuffleNetV2::thread_tmp_432_cast_cast_fu_37827_p1() {
    tmp_432_cast_cast_fu_37827_p1 = esl_sext<10,8>(tmp_281_fu_37822_p2.read());
}

void ShuffleNetV2::thread_tmp_433_cast_cast_fu_37879_p1() {
    tmp_433_cast_cast_fu_37879_p1 = esl_sext<10,8>(tmp_286_fu_37873_p2.read());
}

void ShuffleNetV2::thread_tmp_435_cast_fu_37906_p1() {
    tmp_435_cast_fu_37906_p1 = esl_sext<13,10>(tmp_288_fu_37900_p2.read());
}

void ShuffleNetV2::thread_tmp_43_cast_cast_fu_19584_p1() {
    tmp_43_cast_cast_fu_19584_p1 = esl_sext<8,7>(tmp_43_fu_19578_p2.read());
}

void ShuffleNetV2::thread_tmp_43_fu_19578_p2() {
    tmp_43_fu_19578_p2 = (!p_shl8_cast_fu_19562_p1.read().is_01() || !p_shl9_cast_fu_19574_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_cast_fu_19562_p1.read()) - sc_biguint<7>(p_shl9_cast_fu_19574_p1.read()));
}

void ShuffleNetV2::thread_tmp_441_cast_cast_fu_38556_p1() {
    tmp_441_cast_cast_fu_38556_p1 = esl_zext<10,3>(tmp_1638_fu_38546_p4.read());
}

void ShuffleNetV2::thread_tmp_442_cast_fu_38884_p1() {
    tmp_442_cast_fu_38884_p1 = esl_sext<12,8>(tmp_292_fu_38878_p2.read());
}

void ShuffleNetV2::thread_tmp_443_cast_fu_38918_p1() {
    tmp_443_cast_fu_38918_p1 = esl_sext<32,8>(tmp_293_reg_49059.read());
}

void ShuffleNetV2::thread_tmp_445_cast_cast_fu_38585_p1() {
    tmp_445_cast_cast_fu_38585_p1 = esl_sext<10,8>(tmp_291_fu_38580_p2.read());
}

void ShuffleNetV2::thread_tmp_446_cast_cast_fu_38637_p1() {
    tmp_446_cast_cast_fu_38637_p1 = esl_sext<10,8>(tmp_294_fu_38631_p2.read());
}

void ShuffleNetV2::thread_tmp_448_cast_fu_38664_p1() {
    tmp_448_cast_fu_38664_p1 = esl_sext<13,10>(tmp_296_fu_38658_p2.read());
}

void ShuffleNetV2::thread_tmp_44_cast_fu_19622_p1() {
    tmp_44_cast_fu_19622_p1 = esl_sext<32,7>(tmp_44_reg_42994.read());
}

void ShuffleNetV2::thread_tmp_44_fu_19588_p2() {
    tmp_44_fu_19588_p2 = (!tmp_43_fu_19578_p2.read().is_01() || !i39_cast_reg_42973.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_43_fu_19578_p2.read()) + sc_biguint<7>(i39_cast_reg_42973.read()));
}

void ShuffleNetV2::thread_tmp_450_cast_fu_39225_p1() {
    tmp_450_cast_fu_39225_p1 = esl_sext<12,8>(tmp_298_fu_39219_p2.read());
}

void ShuffleNetV2::thread_tmp_451_cast_fu_39259_p1() {
    tmp_451_cast_fu_39259_p1 = esl_sext<32,8>(tmp_299_reg_49192.read());
}

void ShuffleNetV2::thread_tmp_456_cast_cast_fu_39321_p1() {
    tmp_456_cast_cast_fu_39321_p1 = esl_zext<10,3>(tmp_1662_fu_39311_p4.read());
}

void ShuffleNetV2::thread_tmp_457_cast_fu_39028_p1() {
    tmp_457_cast_fu_39028_p1 = esl_sext<11,8>(tmp_301_fu_39022_p2.read());
}

void ShuffleNetV2::thread_tmp_458_cast_cast_fu_39037_p1() {
    tmp_458_cast_cast_fu_39037_p1 = esl_sext<11,8>(tmp_302_fu_39032_p2.read());
}

void ShuffleNetV2::thread_tmp_460_cast_fu_39649_p1() {
    tmp_460_cast_fu_39649_p1 = esl_sext<12,8>(tmp_303_fu_39643_p2.read());
}

void ShuffleNetV2::thread_tmp_461_cast_fu_39683_p1() {
    tmp_461_cast_fu_39683_p1 = esl_sext<32,8>(tmp_304_reg_49319.read());
}

void ShuffleNetV2::thread_tmp_463_cast_cast_fu_39350_p1() {
    tmp_463_cast_cast_fu_39350_p1 = esl_sext<10,8>(tmp_300_fu_39345_p2.read());
}

void ShuffleNetV2::thread_tmp_464_cast_cast_fu_39402_p1() {
    tmp_464_cast_cast_fu_39402_p1 = esl_sext<10,8>(tmp_305_fu_39396_p2.read());
}

void ShuffleNetV2::thread_tmp_466_cast_fu_39429_p1() {
    tmp_466_cast_fu_39429_p1 = esl_sext<13,10>(tmp_307_fu_39423_p2.read());
}

void ShuffleNetV2::thread_tmp_47_fu_19670_p2() {
    tmp_47_fu_19670_p2 = (!p_shl10_cast_fu_19654_p1.read().is_01() || !p_shl11_cast_fu_19666_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_cast_fu_19654_p1.read()) - sc_biguint<7>(p_shl11_cast_fu_19666_p1.read()));
}

void ShuffleNetV2::thread_tmp_48_cast_cast_fu_19686_p1() {
    tmp_48_cast_cast_fu_19686_p1 = esl_zext<9,4>(tmp_848_fu_19676_p4.read());
}

void ShuffleNetV2::thread_tmp_49_cast_fu_19387_p1() {
    tmp_49_cast_fu_19387_p1 = esl_sext<8,7>(tmp_49_fu_19381_p2.read());
}

void ShuffleNetV2::thread_tmp_49_fu_19381_p2() {
    tmp_49_fu_19381_p2 = (!p_shl12_cast_fu_19365_p1.read().is_01() || !p_shl13_cast_fu_19377_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl12_cast_fu_19365_p1.read()) - sc_biguint<7>(p_shl13_cast_fu_19377_p1.read()));
}

void ShuffleNetV2::thread_tmp_50_cast_cast_fu_19396_p1() {
    tmp_50_cast_cast_fu_19396_p1 = esl_sext<10,7>(tmp_50_fu_19391_p2.read());
}

void ShuffleNetV2::thread_tmp_50_fu_19391_p2() {
    tmp_50_fu_19391_p2 = (!co60_cast1_reg_42882.read().is_01() || !tmp_49_fu_19381_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co60_cast1_reg_42882.read()) + sc_biguint<7>(tmp_49_fu_19381_p2.read()));
}

void ShuffleNetV2::thread_tmp_52_cast_cast_fu_20024_p1() {
    tmp_52_cast_cast_fu_20024_p1 = esl_sext<8,7>(tmp_52_fu_20018_p2.read());
}

void ShuffleNetV2::thread_tmp_52_fu_20018_p2() {
    tmp_52_fu_20018_p2 = (!p_shl14_cast_fu_20002_p1.read().is_01() || !p_shl15_cast_fu_20014_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl14_cast_fu_20002_p1.read()) - sc_biguint<7>(p_shl15_cast_fu_20014_p1.read()));
}

void ShuffleNetV2::thread_tmp_53_cast_fu_20062_p1() {
    tmp_53_cast_fu_20062_p1 = esl_sext<32,7>(tmp_53_reg_43121.read());
}

void ShuffleNetV2::thread_tmp_53_fu_20028_p2() {
    tmp_53_fu_20028_p2 = (!tmp_52_fu_20018_p2.read().is_01() || !i43_cast_reg_43100.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_52_fu_20018_p2.read()) + sc_biguint<7>(i43_cast_reg_43100.read()));
}

void ShuffleNetV2::thread_tmp_55_cast_cast_fu_19715_p1() {
    tmp_55_cast_cast_fu_19715_p1 = esl_sext<8,7>(tmp_55_fu_19710_p2.read());
}

void ShuffleNetV2::thread_tmp_55_fu_19710_p2() {
    tmp_55_fu_19710_p2 = (!tmp_47_reg_43023.read().is_01() || !ci36_cast_fu_19690_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_47_reg_43023.read()) + sc_biguint<7>(ci36_cast_fu_19690_p1.read()));
}

void ShuffleNetV2::thread_tmp_56_cast_cast_fu_19765_p1() {
    tmp_56_cast_cast_fu_19765_p1 = esl_sext<9,7>(tmp_56_fu_19759_p2.read());
}

void ShuffleNetV2::thread_tmp_56_fu_19759_p2() {
    tmp_56_fu_19759_p2 = (!p_shl16_cast_fu_19743_p1.read().is_01() || !p_shl17_cast_fu_19755_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl16_cast_fu_19743_p1.read()) - sc_biguint<7>(p_shl17_cast_fu_19755_p1.read()));
}

void ShuffleNetV2::thread_tmp_57_cast_fu_19825_p1() {
    tmp_57_cast_fu_19825_p1 = esl_sext<10,9>(tmp_57_reg_43059.read());
}

void ShuffleNetV2::thread_tmp_57_fu_19769_p2() {
    tmp_57_fu_19769_p2 = (!tmp_56_cast_cast_fu_19765_p1.read().is_01() || !tmp_48_cast_cast_reg_43028.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_56_cast_cast_fu_19765_p1.read()) + sc_biguint<9>(tmp_48_cast_cast_reg_43028.read()));
}

void ShuffleNetV2::thread_tmp_58_cast_fu_19804_p1() {
    tmp_58_cast_fu_19804_p1 = esl_sext<9,8>(tmp_58_fu_19798_p2.read());
}

void ShuffleNetV2::thread_tmp_58_fu_19798_p2() {
    tmp_58_fu_19798_p2 = (!p_shl18_cast_fu_19782_p1.read().is_01() || !p_shl19_cast_fu_19794_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl18_cast_fu_19782_p1.read()) - sc_biguint<8>(p_shl19_cast_fu_19794_p1.read()));
}

void ShuffleNetV2::thread_tmp_58_i_cast_fu_40131_p1() {
    tmp_58_i_cast_fu_40131_p1 = esl_zext<6,5>(tmp_1710_reg_49469.read());
}

void ShuffleNetV2::thread_tmp_59_fu_20447_p2() {
    tmp_59_fu_20447_p2 = (!p_shl22_cast_fu_20431_p1.read().is_01() || !p_shl23_cast_fu_20443_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl22_cast_fu_20431_p1.read()) - sc_biguint<7>(p_shl23_cast_fu_20443_p1.read()));
}

void ShuffleNetV2::thread_tmp_60_cast_fu_20365_p1() {
    tmp_60_cast_fu_20365_p1 = esl_sext<10,7>(tmp_60_fu_20359_p2.read());
}

void ShuffleNetV2::thread_tmp_60_fu_20359_p2() {
    tmp_60_fu_20359_p2 = (!p_shl20_cast_fu_20343_p1.read().is_01() || !p_shl21_cast_fu_20355_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl20_cast_fu_20343_p1.read()) - sc_biguint<7>(p_shl21_cast_fu_20355_p1.read()));
}

void ShuffleNetV2::thread_tmp_60_i_fu_40134_p4() {
    tmp_60_i_fu_40134_p4 = p_i_reg_13785.read().range(7, 4);
}

void ShuffleNetV2::thread_tmp_61_cast_fu_20399_p1() {
    tmp_61_cast_fu_20399_p1 = esl_sext<32,7>(tmp_61_reg_43254.read());
}

void ShuffleNetV2::thread_tmp_61_fu_20369_p2() {
    tmp_61_fu_20369_p2 = (!tmp_60_fu_20359_p2.read().is_01() || !i47_cast1_reg_43233.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_60_fu_20359_p2.read()) + sc_biguint<7>(i47_cast1_reg_43233.read()));
}

void ShuffleNetV2::thread_tmp_61_i_fu_40144_p1() {
    tmp_61_i_fu_40144_p1 = esl_sext<5,4>(tmp_60_i_fu_40134_p4.read());
}

void ShuffleNetV2::thread_tmp_626_fu_15562_p3() {
    tmp_626_fu_15562_p3 = esl_concat<2,1>(ci_reg_9728.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_627_fu_15574_p2() {
    tmp_627_fu_15574_p2 = (!p_shl276_cast_fu_15570_p1.read().is_01() || !tmp_792_cast_fu_15558_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl276_cast_fu_15570_p1.read()) + sc_biguint<8>(tmp_792_cast_fu_15558_p1.read()));
}

void ShuffleNetV2::thread_tmp_628_fu_15694_p3() {
    tmp_628_fu_15694_p3 = esl_concat<5,5>(co_reg_9761.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_629_fu_15706_p3() {
    tmp_629_fu_15706_p3 = esl_concat<5,3>(co_reg_9761.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_62_fu_20487_p2() {
    tmp_62_fu_20487_p2 = (!tmp_59_reg_43283.read().is_01() || !ci38_cast_fu_20467_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_59_reg_43283.read()) + sc_biguint<7>(ci38_cast_fu_20467_p1.read()));
}

void ShuffleNetV2::thread_tmp_62_i_fu_40148_p2() {
    tmp_62_i_fu_40148_p2 = (!ap_const_lv6_0.is_01() || !tmp_58_i_cast_fu_40131_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_0) - sc_biguint<6>(tmp_58_i_cast_fu_40131_p1.read()));
}

void ShuffleNetV2::thread_tmp_630_fu_15718_p2() {
    tmp_630_fu_15718_p2 = (!p_shl279_cast_fu_15702_p1.read().is_01() || !p_shl280_cast_fu_15714_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl279_cast_fu_15702_p1.read()) - sc_biguint<11>(p_shl280_cast_fu_15714_p1.read()));
}

void ShuffleNetV2::thread_tmp_631_fu_15596_p2() {
    tmp_631_fu_15596_p2 = (!w_cast_cast_fu_15592_p1.read().is_01() || !tmp_792_cast_reg_40606.read().is_01())? sc_lv<8>(): (sc_biguint<8>(w_cast_cast_fu_15592_p1.read()) + sc_biguint<8>(tmp_792_cast_reg_40606.read()));
}

void ShuffleNetV2::thread_tmp_632_fu_15609_p1() {
    tmp_632_fu_15609_p1 = esl_zext<32,13>(tmp_694_fu_15601_p3.read());
}

void ShuffleNetV2::thread_tmp_633_fu_15629_p2() {
    tmp_633_fu_15629_p2 = (!w_44_cast_cast_fu_15625_p1.read().is_01() || !tmp_627_reg_40611.read().is_01())? sc_lv<8>(): (sc_biguint<8>(w_44_cast_cast_fu_15625_p1.read()) + sc_biguint<8>(tmp_627_reg_40611.read()));
}

void ShuffleNetV2::thread_tmp_634_fu_15663_p2() {
    tmp_634_fu_15663_p2 = (!p_shl277_cast_fu_15645_p3.read().is_01() || !p_shl278_cast_fu_15659_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl277_cast_fu_15645_p3.read()) + sc_biguint<13>(p_shl278_cast_fu_15659_p1.read()));
}

void ShuffleNetV2::thread_tmp_635_fu_15685_p2() {
    tmp_635_fu_15685_p2 = (!tmp_634_reg_40644.read().is_01() || !h_43_cast_cast_fu_15681_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_634_reg_40644.read()) + sc_biguint<13>(h_43_cast_cast_fu_15681_p1.read()));
}

void ShuffleNetV2::thread_tmp_636_fu_15822_p3() {
    tmp_636_fu_15822_p3 = esl_concat<5,2>(co5_reg_9795.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_637_fu_15834_p2() {
    tmp_637_fu_15834_p2 = (!p_shl281_cast_fu_15830_p1.read().is_01() || !co5_cast_cast_fu_15818_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl281_cast_fu_15830_p1.read()) - sc_biguint<8>(co5_cast_cast_fu_15818_p1.read()));
}

void ShuffleNetV2::thread_tmp_638_fu_15871_p2() {
    tmp_638_fu_15871_p2 = (!tmp_810_cast_reg_40828.read().is_01() || !w6_cast_cast_fu_15867_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_810_cast_reg_40828.read()) + sc_biguint<9>(w6_cast_cast_fu_15867_p1.read()));
}

void ShuffleNetV2::thread_tmp_639_fu_15892_p2() {
    tmp_639_fu_15892_p2 = (!p_shl193_fu_15888_p1.read().is_01() || !tmp_811_cast_fu_15876_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl193_fu_15888_p1.read()) - sc_bigint<32>(tmp_811_cast_fu_15876_p1.read()));
}

void ShuffleNetV2::thread_tmp_63_fu_20166_p2() {
    tmp_63_fu_20166_p2 = (!p_shl24_cast_fu_20150_p1.read().is_01() || !p_shl25_cast_fu_20162_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl24_cast_fu_20150_p1.read()) - sc_biguint<7>(p_shl25_cast_fu_20162_p1.read()));
}

void ShuffleNetV2::thread_tmp_63_i_cast_fu_40154_p1() {
    tmp_63_i_cast_fu_40154_p1 = esl_zext<6,5>(tmp_61_i_fu_40144_p1.read());
}

void ShuffleNetV2::thread_tmp_640_fu_15925_p2() {
    tmp_640_fu_15925_p2 = (!h7_cast_fu_15921_p1.read().is_01() || !tmp_639_reg_40847.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h7_cast_fu_15921_p1.read()) + sc_biguint<32>(tmp_639_reg_40847.read()));
}

void ShuffleNetV2::thread_tmp_641_fu_15981_p3() {
    tmp_641_fu_15981_p3 = esl_concat<6,5>(sum6_fu_15975_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_642_fu_15993_p3() {
    tmp_642_fu_15993_p3 = esl_concat<6,3>(sum6_fu_15975_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_643_fu_16005_p2() {
    tmp_643_fu_16005_p2 = (!p_shl283_cast_fu_15989_p1.read().is_01() || !p_shl284_cast_fu_16001_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl283_cast_fu_15989_p1.read()) - sc_biguint<12>(p_shl284_cast_fu_16001_p1.read()));
}

void ShuffleNetV2::thread_tmp_644_fu_16097_p3() {
    tmp_644_fu_16097_p3 = esl_concat<5,2>(co12_reg_9873.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_645_fu_16109_p2() {
    tmp_645_fu_16109_p2 = (!p_shl285_cast_fu_16105_p1.read().is_01() || !co12_cast1_cast_fu_16093_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl285_cast_fu_16105_p1.read()) - sc_biguint<8>(co12_cast1_cast_fu_16093_p1.read()));
}

void ShuffleNetV2::thread_tmp_646_fu_16145_p3() {
    tmp_646_fu_16145_p3 = esl_concat<6,2>(sum5_fu_16135_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_647_fu_16157_p2() {
    tmp_647_fu_16157_p2 = (!p_shl286_cast_fu_16153_p1.read().is_01() || !sum5_cast_cast_fu_16141_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_shl286_cast_fu_16153_p1.read()) - sc_biguint<9>(sum5_cast_cast_fu_16141_p1.read()));
}

void ShuffleNetV2::thread_tmp_648_fu_16167_p2() {
    tmp_648_fu_16167_p2 = (!w13_cast_cast_fu_16163_p1.read().is_01() || !tmp_647_reg_41066.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w13_cast_cast_fu_16163_p1.read()) + sc_biguint<9>(tmp_647_reg_41066.read()));
}

void ShuffleNetV2::thread_tmp_649_fu_16188_p2() {
    tmp_649_fu_16188_p2 = (!p_shl197_fu_16184_p1.read().is_01() || !tmp_823_cast_fu_16172_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl197_fu_16184_p1.read()) - sc_bigint<32>(tmp_823_cast_fu_16172_p1.read()));
}

void ShuffleNetV2::thread_tmp_64_fu_20176_p2() {
    tmp_64_fu_20176_p2 = (!co64_cast1_reg_43142.read().is_01() || !tmp_63_fu_20166_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co64_cast1_reg_43142.read()) + sc_biguint<7>(tmp_63_fu_20166_p2.read()));
}

void ShuffleNetV2::thread_tmp_64_i_fu_40158_p3() {
    tmp_64_i_fu_40158_p3 = (!tmp_1709_fu_40123_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_1709_fu_40123_p3.read()[0].to_bool())? tmp_62_i_fu_40148_p2.read(): tmp_63_i_cast_fu_40154_p1.read());
}

void ShuffleNetV2::thread_tmp_650_fu_16194_p2() {
    tmp_650_fu_16194_p2 = (!w13_cast_cast_fu_16163_p1.read().is_01() || !tmp_820_cast_reg_41053.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w13_cast_cast_fu_16163_p1.read()) + sc_bigint<9>(tmp_820_cast_reg_41053.read()));
}

void ShuffleNetV2::thread_tmp_651_fu_16205_p2() {
    tmp_651_fu_16205_p2 = (!tmp_708_fu_16199_p2.read().is_01() || !tmp_650_fu_16194_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_708_fu_16199_p2.read()) - sc_biguint<9>(tmp_650_fu_16194_p2.read()));
}

void ShuffleNetV2::thread_tmp_652_fu_16238_p2() {
    tmp_652_fu_16238_p2 = (!tmp_651_reg_41071.read().is_01() || !h14_cast_cast_fu_16234_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_651_reg_41071.read()) + sc_biguint<9>(h14_cast_cast_fu_16234_p1.read()));
}

void ShuffleNetV2::thread_tmp_653_fu_16325_p3() {
    tmp_653_fu_16325_p3 = esl_concat<7,5>(sum9_fu_16319_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_654_fu_16337_p3() {
    tmp_654_fu_16337_p3 = esl_concat<7,3>(sum9_fu_16319_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_655_fu_16349_p2() {
    tmp_655_fu_16349_p2 = (!p_shl289_cast_fu_16333_p1.read().is_01() || !p_shl290_cast_fu_16345_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl289_cast_fu_16333_p1.read()) - sc_biguint<13>(p_shl290_cast_fu_16345_p1.read()));
}

void ShuffleNetV2::thread_tmp_656_fu_16437_p3() {
    tmp_656_fu_16437_p3 = esl_concat<5,4>(co19_reg_9951.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_657_fu_16449_p3() {
    tmp_657_fu_16449_p3 = esl_concat<5,1>(co19_reg_9951.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_658_fu_16461_p2() {
    tmp_658_fu_16461_p2 = (!p_shl292_cast_fu_16457_p1.read().is_01() || !p_shl291_cast_fu_16445_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl292_cast_fu_16457_p1.read()) + sc_biguint<10>(p_shl291_cast_fu_16445_p1.read()));
}

void ShuffleNetV2::thread_tmp_659_fu_16489_p3() {
    tmp_659_fu_16489_p3 = esl_concat<6,4>(tmp_s_fu_16483_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_65_cast_cast_fu_20463_p1() {
    tmp_65_cast_cast_fu_20463_p1 = esl_zext<9,4>(tmp_875_fu_20453_p4.read());
}

void ShuffleNetV2::thread_tmp_65_fu_20889_p2() {
    tmp_65_fu_20889_p2 = (!co68_cast_fu_20873_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co68_cast_fu_20873_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_660_fu_16501_p3() {
    tmp_660_fu_16501_p3 = esl_concat<6,1>(tmp_s_fu_16483_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_661_fu_16513_p2() {
    tmp_661_fu_16513_p2 = (!p_shl294_cast_fu_16509_p1.read().is_01() || !p_shl293_cast_fu_16497_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl294_cast_fu_16509_p1.read()) + sc_biguint<11>(p_shl293_cast_fu_16497_p1.read()));
}

void ShuffleNetV2::thread_tmp_662_fu_16662_p3() {
    tmp_662_fu_16662_p3 = esl_concat<7,5>(sum_fu_16656_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_663_fu_16674_p3() {
    tmp_663_fu_16674_p3 = esl_concat<7,3>(sum_fu_16656_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_664_fu_16686_p2() {
    tmp_664_fu_16686_p2 = (!p_shl299_cast_fu_16670_p1.read().is_01() || !p_shl300_cast_fu_16682_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl299_cast_fu_16670_p1.read()) - sc_biguint<13>(p_shl300_cast_fu_16682_p1.read()));
}

void ShuffleNetV2::thread_tmp_665_fu_16539_p2() {
    tmp_665_fu_16539_p2 = (!h_46_cast_cast_fu_16535_p1.read().is_01() || !tmp_661_reg_41296.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_46_cast_cast_fu_16535_p1.read()) + sc_biguint<11>(tmp_661_reg_41296.read()));
}

void ShuffleNetV2::thread_tmp_666_fu_16564_p2() {
    tmp_666_fu_16564_p2 = (!p_shl297_cast_fu_16544_p3.read().is_01() || !p_shl298_cast_fu_16560_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl297_cast_fu_16544_p3.read()) + sc_biguint<15>(p_shl298_cast_fu_16560_p1.read()));
}

void ShuffleNetV2::thread_tmp_667_fu_16570_p2() {
    tmp_667_fu_16570_p2 = (!h_46_cast_cast1_fu_16531_p1.read().is_01() || !tmp_658_reg_41283.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_46_cast_cast1_fu_16531_p1.read()) + sc_biguint<10>(tmp_658_reg_41283.read()));
}

void ShuffleNetV2::thread_tmp_668_fu_16595_p2() {
    tmp_668_fu_16595_p2 = (!p_shl295_cast_fu_16575_p3.read().is_01() || !p_shl296_cast_fu_16591_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl295_cast_fu_16575_p3.read()) + sc_biguint<14>(p_shl296_cast_fu_16591_p1.read()));
}

void ShuffleNetV2::thread_tmp_669_fu_16621_p2() {
    tmp_669_fu_16621_p2 = (!tmp_666_reg_41309.read().is_01() || !w_47_cast_cast_fu_16617_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_666_reg_41309.read()) + sc_biguint<15>(w_47_cast_cast_fu_16617_p1.read()));
}

void ShuffleNetV2::thread_tmp_66_fu_20799_p2() {
    tmp_66_fu_20799_p2 = (!p_shl26_cast_fu_20783_p1.read().is_01() || !p_shl27_cast_fu_20795_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl26_cast_fu_20783_p1.read()) - sc_biguint<7>(p_shl27_cast_fu_20795_p1.read()));
}

void ShuffleNetV2::thread_tmp_670_fu_16631_p2() {
    tmp_670_fu_16631_p2 = (!tmp_668_reg_41314.read().is_01() || !w_47_cast_cast1_fu_16613_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_668_reg_41314.read()) + sc_biguint<14>(w_47_cast_cast1_fu_16613_p1.read()));
}

void ShuffleNetV2::thread_tmp_671_fu_16782_p3() {
    tmp_671_fu_16782_p3 = esl_concat<5,2>(co25_reg_10018.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_672_fu_16794_p2() {
    tmp_672_fu_16794_p2 = (!p_shl301_cast_fu_16790_p1.read().is_01() || !co25_cast1_cast_fu_16778_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl301_cast_fu_16790_p1.read()) - sc_biguint<8>(co25_cast1_cast_fu_16778_p1.read()));
}

void ShuffleNetV2::thread_tmp_673_fu_16826_p3() {
    tmp_673_fu_16826_p3 = esl_concat<7,2>(sum1_fu_16816_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_674_fu_16838_p2() {
    tmp_674_fu_16838_p2 = (!p_shl302_cast_fu_16834_p1.read().is_01() || !sum11_cast_cast_fu_16822_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl302_cast_fu_16834_p1.read()) - sc_biguint<10>(sum11_cast_cast_fu_16822_p1.read()));
}

void ShuffleNetV2::thread_tmp_675_fu_16863_p2() {
    tmp_675_fu_16863_p2 = (!w26_cast_cast_fu_16859_p1.read().is_01() || !tmp_674_reg_41511.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w26_cast_cast_fu_16859_p1.read()) + sc_biguint<10>(tmp_674_reg_41511.read()));
}

void ShuffleNetV2::thread_tmp_676_fu_16884_p2() {
    tmp_676_fu_16884_p2 = (!p_shl202_fu_16880_p1.read().is_01() || !tmp_859_cast_fu_16868_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl202_fu_16880_p1.read()) - sc_bigint<32>(tmp_859_cast_fu_16868_p1.read()));
}

void ShuffleNetV2::thread_tmp_677_fu_16890_p2() {
    tmp_677_fu_16890_p2 = (!w26_cast_cast1_fu_16855_p1.read().is_01() || !tmp_856_cast_reg_41498.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w26_cast_cast1_fu_16855_p1.read()) + sc_bigint<9>(tmp_856_cast_reg_41498.read()));
}

void ShuffleNetV2::thread_tmp_678_fu_16901_p2() {
    tmp_678_fu_16901_p2 = (!tmp_724_fu_16895_p2.read().is_01() || !tmp_677_fu_16890_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_724_fu_16895_p2.read()) - sc_biguint<9>(tmp_677_fu_16890_p2.read()));
}

void ShuffleNetV2::thread_tmp_679_fu_16934_p2() {
    tmp_679_fu_16934_p2 = (!tmp_678_reg_41522.read().is_01() || !h27_cast_cast_fu_16930_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_678_reg_41522.read()) + sc_biguint<9>(h27_cast_cast_fu_16930_p1.read()));
}

void ShuffleNetV2::thread_tmp_67_fu_20809_p2() {
    tmp_67_fu_20809_p2 = (!tmp_66_fu_20799_p2.read().is_01() || !i51_cast1_reg_43360.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_66_fu_20799_p2.read()) + sc_biguint<7>(i51_cast1_reg_43360.read()));
}

void ShuffleNetV2::thread_tmp_680_fu_16984_p4() {
    tmp_680_fu_16984_p4 = esl_concat<6,5>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_10062.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_681_fu_16994_p1() {
    tmp_681_fu_16994_p1 = esl_sext<12,11>(tmp_680_fu_16984_p4.read());
}

void ShuffleNetV2::thread_tmp_682_fu_17002_p4() {
    tmp_682_fu_17002_p4 = esl_concat<6,3>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_10062.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_683_fu_17012_p1() {
    tmp_683_fu_17012_p1 = esl_sext<10,9>(tmp_682_fu_17002_p4.read());
}

void ShuffleNetV2::thread_tmp_684_fu_17020_p2() {
    tmp_684_fu_17020_p2 = (!p_shl305_cast_fu_16998_p1.read().is_01() || !p_shl306_cast_fu_17016_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl305_cast_fu_16998_p1.read()) - sc_biguint<13>(p_shl306_cast_fu_17016_p1.read()));
}

void ShuffleNetV2::thread_tmp_685_fu_17124_p3() {
    tmp_685_fu_17124_p3 = esl_concat<5,4>(co32_reg_10096.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_686_fu_17136_p3() {
    tmp_686_fu_17136_p3 = esl_concat<5,1>(co32_reg_10096.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_687_fu_17148_p2() {
    tmp_687_fu_17148_p2 = (!p_shl308_cast_fu_17144_p1.read().is_01() || !p_shl307_cast_fu_17132_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl308_cast_fu_17144_p1.read()) + sc_biguint<10>(p_shl307_cast_fu_17132_p1.read()));
}

void ShuffleNetV2::thread_tmp_688_fu_17243_p3() {
    tmp_688_fu_17243_p3 = esl_concat<5,4>(co35_reg_10129.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_689_fu_17255_p3() {
    tmp_689_fu_17255_p3 = esl_concat<5,1>(co35_reg_10129.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_68_cast_fu_20172_p1() {
    tmp_68_cast_fu_20172_p1 = esl_sext<8,7>(tmp_63_fu_20166_p2.read());
}

void ShuffleNetV2::thread_tmp_68_fu_20536_p2() {
    tmp_68_fu_20536_p2 = (!p_shl30_cast_fu_20520_p1.read().is_01() || !p_shl31_cast_fu_20532_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl30_cast_fu_20520_p1.read()) - sc_biguint<7>(p_shl31_cast_fu_20532_p1.read()));
}

void ShuffleNetV2::thread_tmp_690_fu_17267_p2() {
    tmp_690_fu_17267_p2 = (!p_shl312_cast_fu_17263_p1.read().is_01() || !p_shl311_cast_fu_17251_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl312_cast_fu_17263_p1.read()) + sc_biguint<10>(p_shl311_cast_fu_17251_p1.read()));
}

void ShuffleNetV2::thread_tmp_691_fu_17295_p3() {
    tmp_691_fu_17295_p3 = esl_concat<6,4>(tmp_30_fu_17289_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_692_fu_15496_p2() {
    tmp_692_fu_15496_p2 = (!bias_V_read_reg_40400.read().is_01() || !ap_const_lv32_C18.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40400.read()) + sc_biguint<32>(ap_const_lv32_C18));
}

void ShuffleNetV2::thread_tmp_693_fu_15523_p2() {
    tmp_693_fu_15523_p2 = (!bias_V_read_reg_40400.read().is_01() || !ap_const_lv32_E18.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40400.read()) + sc_biguint<32>(ap_const_lv32_E18));
}

void ShuffleNetV2::thread_tmp_694_fu_15601_p3() {
    tmp_694_fu_15601_p3 = esl_concat<8,5>(tmp_631_fu_15596_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_695_fu_15751_p2() {
    tmp_695_fu_15751_p2 = (!bias_V_read_reg_40400.read().is_01() || !ap_const_lv32_18.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_40400.read()) + sc_biguint<32>(ap_const_lv32_18));
}

void ShuffleNetV2::thread_tmp_696_fu_15736_p1() {
    tmp_696_fu_15736_p1 = esl_sext<32,11>(tmp_630_fu_15718_p2.read());
}

void ShuffleNetV2::thread_tmp_697_fu_15740_p2() {
    tmp_697_fu_15740_p2 = (!tmp_696_fu_15736_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40474.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_696_fu_15736_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40474.read()));
}

void ShuffleNetV2::thread_tmp_698_fu_15652_p3() {
    tmp_698_fu_15652_p3 = esl_concat<8,1>(tmp_633_reg_40632.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_699_fu_15634_p2() {
    tmp_699_fu_15634_p2 = (!tmp_632_fu_15609_p1.read().is_01() || !image_V_read_reg_40544.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_632_fu_15609_p1.read()) + sc_biguint<32>(image_V_read_reg_40544.read()));
}

}

