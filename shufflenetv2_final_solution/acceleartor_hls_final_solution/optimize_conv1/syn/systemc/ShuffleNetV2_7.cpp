#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_p_shl39_fu_15415_p3() {
    p_shl39_fu_15415_p3 = esl_concat<2,3>(tmp_1245_fu_15360_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl3_cast_fu_13376_p1() {
    p_shl3_cast_fu_13376_p1 = esl_zext<7,4>(p_shl3_fu_13368_p3.read());
}

void ShuffleNetV2::thread_p_shl3_fu_13368_p3() {
    p_shl3_fu_13368_p3 = esl_concat<1,3>(tmp_1160_fu_13352_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl400_cast_fu_15512_p1() {
    p_shl400_cast_fu_15512_p1 = esl_zext<16,13>(tmp_1248_fu_15505_p3.read());
}

void ShuffleNetV2::thread_p_shl402_cast_fu_15858_p1() {
    p_shl402_cast_fu_15858_p1 = esl_zext<12,11>(tmp_1266_fu_15851_p3.read());
}

void ShuffleNetV2::thread_p_shl403_cast_fu_15877_p3() {
    p_shl403_cast_fu_15877_p3 = esl_concat<8,2>(tmp_1263_reg_36958.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl404_cast_fu_15821_p1() {
    p_shl404_cast_fu_15821_p1 = esl_zext<35,34>(tmp_1259_fu_15817_p1.read());
}

void ShuffleNetV2::thread_p_shl406_cast_fu_16280_p1() {
    p_shl406_cast_fu_16280_p1 = esl_sext<10,8>(tmp_1283_fu_16272_p3.read());
}

void ShuffleNetV2::thread_p_shl407_cast_fu_16302_p1() {
    p_shl407_cast_fu_16302_p1 = esl_zext<16,15>(tmp_1278_fu_16295_p3.read());
}

void ShuffleNetV2::thread_p_shl408_cast_fu_16313_p1() {
    p_shl408_cast_fu_16313_p1 = esl_zext<16,13>(tmp_1279_fu_16306_p3.read());
}

void ShuffleNetV2::thread_p_shl409_cast_fu_16494_p1() {
    p_shl409_cast_fu_16494_p1 = esl_zext<10,9>(tmp_1272_fu_16486_p3.read());
}

void ShuffleNetV2::thread_p_shl40_cast_fu_15978_p1() {
    p_shl40_cast_fu_15978_p1 = esl_zext<7,6>(p_shl40_fu_15970_p3.read());
}

void ShuffleNetV2::thread_p_shl40_fu_15970_p3() {
    p_shl40_fu_15970_p3 = esl_concat<1,5>(tmp_1256_fu_15966_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl410_cast_fu_16506_p1() {
    p_shl410_cast_fu_16506_p1 = esl_zext<10,7>(tmp_1273_fu_16498_p3.read());
}

void ShuffleNetV2::thread_p_shl411_cast_fu_16545_p1() {
    p_shl411_cast_fu_16545_p1 = esl_zext<15,13>(tmp_1293_fu_16537_p3.read());
}

void ShuffleNetV2::thread_p_shl412_cast_fu_16557_p1() {
    p_shl412_cast_fu_16557_p1 = esl_zext<15,11>(tmp_1294_fu_16549_p3.read());
}

void ShuffleNetV2::thread_p_shl413_cast_fu_16653_p1() {
    p_shl413_cast_fu_16653_p1 = esl_zext<11,10>(tmp_1289_fu_16645_p3.read());
}

void ShuffleNetV2::thread_p_shl414_cast_fu_16665_p1() {
    p_shl414_cast_fu_16665_p1 = esl_zext<11,8>(tmp_1290_fu_16657_p3.read());
}

void ShuffleNetV2::thread_p_shl415_cast_fu_16617_p1() {
    p_shl415_cast_fu_16617_p1 = esl_zext<10,9>(tmp_1286_fu_16609_p3.read());
}

void ShuffleNetV2::thread_p_shl416_cast_fu_16629_p1() {
    p_shl416_cast_fu_16629_p1 = esl_zext<10,7>(tmp_1287_fu_16621_p3.read());
}

void ShuffleNetV2::thread_p_shl417_cast_fu_16743_p1() {
    p_shl417_cast_fu_16743_p1 = esl_zext<14,13>(tmp_1302_fu_16735_p3.read());
}

void ShuffleNetV2::thread_p_shl418_cast_fu_16755_p1() {
    p_shl418_cast_fu_16755_p1 = esl_zext<14,11>(tmp_1303_fu_16747_p3.read());
}

void ShuffleNetV2::thread_p_shl419_cast_fu_16708_p1() {
    p_shl419_cast_fu_16708_p1 = esl_zext<15,14>(tmp_1298_fu_16700_p3.read());
}

void ShuffleNetV2::thread_p_shl41_cast_fu_15990_p1() {
    p_shl41_cast_fu_15990_p1 = esl_zext<7,4>(p_shl41_fu_15982_p3.read());
}

void ShuffleNetV2::thread_p_shl41_fu_15982_p3() {
    p_shl41_fu_15982_p3 = esl_concat<1,3>(tmp_1256_fu_15966_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl420_cast_fu_16720_p1() {
    p_shl420_cast_fu_16720_p1 = esl_zext<15,12>(tmp_1299_fu_16712_p3.read());
}

void ShuffleNetV2::thread_p_shl422_cast_fu_17038_p1() {
    p_shl422_cast_fu_17038_p1 = esl_sext<10,8>(tmp_1316_fu_17030_p3.read());
}

void ShuffleNetV2::thread_p_shl423_cast_fu_17060_p1() {
    p_shl423_cast_fu_17060_p1 = esl_zext<16,15>(tmp_1311_fu_17053_p3.read());
}

void ShuffleNetV2::thread_p_shl424_cast_fu_17071_p1() {
    p_shl424_cast_fu_17071_p1 = esl_zext<16,13>(tmp_1312_fu_17064_p3.read());
}

void ShuffleNetV2::thread_p_shl426_cast_fu_17413_p1() {
    p_shl426_cast_fu_17413_p1 = esl_zext<12,11>(tmp_1330_fu_17406_p3.read());
}

void ShuffleNetV2::thread_p_shl427_cast_fu_17432_p3() {
    p_shl427_cast_fu_17432_p3 = esl_concat<8,2>(tmp_1327_reg_37513.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl428_cast_fu_17376_p1() {
    p_shl428_cast_fu_17376_p1 = esl_zext<35,34>(tmp_1323_fu_17372_p1.read());
}

void ShuffleNetV2::thread_p_shl42_cast_fu_16074_p1() {
    p_shl42_cast_fu_16074_p1 = esl_zext<7,6>(p_shl42_fu_16066_p3.read());
}

void ShuffleNetV2::thread_p_shl42_fu_16066_p3() {
    p_shl42_fu_16066_p3 = esl_concat<1,5>(tmp_1255_fu_16062_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl430_cast_fu_17839_p1() {
    p_shl430_cast_fu_17839_p1 = esl_sext<10,8>(tmp_1347_fu_17831_p3.read());
}

void ShuffleNetV2::thread_p_shl431_cast_fu_17861_p1() {
    p_shl431_cast_fu_17861_p1 = esl_zext<16,15>(tmp_1342_fu_17854_p3.read());
}

void ShuffleNetV2::thread_p_shl432_cast_fu_17872_p1() {
    p_shl432_cast_fu_17872_p1 = esl_zext<16,13>(tmp_1343_fu_17865_p3.read());
}

void ShuffleNetV2::thread_p_shl433_cast_fu_18057_p1() {
    p_shl433_cast_fu_18057_p1 = esl_zext<10,9>(tmp_1336_fu_18049_p3.read());
}

void ShuffleNetV2::thread_p_shl434_cast_fu_18069_p1() {
    p_shl434_cast_fu_18069_p1 = esl_zext<10,7>(tmp_1337_fu_18061_p3.read());
}

void ShuffleNetV2::thread_p_shl435_cast_fu_18108_p1() {
    p_shl435_cast_fu_18108_p1 = esl_zext<15,13>(tmp_1357_fu_18100_p3.read());
}

void ShuffleNetV2::thread_p_shl436_cast_fu_18120_p1() {
    p_shl436_cast_fu_18120_p1 = esl_zext<15,11>(tmp_1358_fu_18112_p3.read());
}

void ShuffleNetV2::thread_p_shl437_cast_fu_18216_p1() {
    p_shl437_cast_fu_18216_p1 = esl_zext<11,10>(tmp_1353_fu_18208_p3.read());
}

void ShuffleNetV2::thread_p_shl438_cast_fu_18228_p1() {
    p_shl438_cast_fu_18228_p1 = esl_zext<11,8>(tmp_1354_fu_18220_p3.read());
}

void ShuffleNetV2::thread_p_shl439_cast_fu_18180_p1() {
    p_shl439_cast_fu_18180_p1 = esl_zext<10,9>(tmp_1350_fu_18172_p3.read());
}

void ShuffleNetV2::thread_p_shl43_cast_fu_16086_p1() {
    p_shl43_cast_fu_16086_p1 = esl_zext<7,4>(p_shl43_fu_16078_p3.read());
}

void ShuffleNetV2::thread_p_shl43_fu_16078_p3() {
    p_shl43_fu_16078_p3 = esl_concat<1,3>(tmp_1255_fu_16062_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl440_cast_fu_18192_p1() {
    p_shl440_cast_fu_18192_p1 = esl_zext<10,7>(tmp_1351_fu_18184_p3.read());
}

void ShuffleNetV2::thread_p_shl441_cast_fu_18306_p1() {
    p_shl441_cast_fu_18306_p1 = esl_zext<14,13>(tmp_1366_fu_18298_p3.read());
}

void ShuffleNetV2::thread_p_shl442_cast_fu_18318_p1() {
    p_shl442_cast_fu_18318_p1 = esl_zext<14,11>(tmp_1367_fu_18310_p3.read());
}

void ShuffleNetV2::thread_p_shl443_cast_fu_18271_p1() {
    p_shl443_cast_fu_18271_p1 = esl_zext<15,14>(tmp_1362_fu_18263_p3.read());
}

void ShuffleNetV2::thread_p_shl444_cast_fu_18283_p1() {
    p_shl444_cast_fu_18283_p1 = esl_zext<15,12>(tmp_1363_fu_18275_p3.read());
}

void ShuffleNetV2::thread_p_shl446_cast_fu_18601_p1() {
    p_shl446_cast_fu_18601_p1 = esl_sext<10,8>(tmp_1382_fu_18593_p3.read());
}

void ShuffleNetV2::thread_p_shl447_cast_fu_18627_p1() {
    p_shl447_cast_fu_18627_p1 = esl_zext<16,15>(tmp_1376_fu_18623_p1.read());
}

void ShuffleNetV2::thread_p_shl448_cast_fu_18642_p1() {
    p_shl448_cast_fu_18642_p1 = esl_zext<16,13>(tmp_1378_fu_18638_p1.read());
}

void ShuffleNetV2::thread_p_shl44_cast_fu_16406_p1() {
    p_shl44_cast_fu_16406_p1 = esl_zext<7,6>(p_shl44_fu_16398_p3.read());
}

void ShuffleNetV2::thread_p_shl44_fu_16398_p3() {
    p_shl44_fu_16398_p3 = esl_concat<1,5>(tmp_1275_fu_16394_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl450_cast_fu_18988_p1() {
    p_shl450_cast_fu_18988_p1 = esl_zext<12,11>(tmp_1396_fu_18981_p3.read());
}

void ShuffleNetV2::thread_p_shl451_cast_fu_19003_p3() {
    p_shl451_cast_fu_19003_p3 = esl_concat<8,2>(tmp_1393_reg_38068.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl452_cast_fu_18951_p1() {
    p_shl452_cast_fu_18951_p1 = esl_zext<35,34>(tmp_1389_fu_18947_p1.read());
}

void ShuffleNetV2::thread_p_shl454_cast_fu_19410_p1() {
    p_shl454_cast_fu_19410_p1 = esl_sext<10,8>(tmp_1413_fu_19402_p3.read());
}

void ShuffleNetV2::thread_p_shl455_cast_fu_19432_p1() {
    p_shl455_cast_fu_19432_p1 = esl_zext<17,16>(tmp_1408_fu_19425_p3.read());
}

void ShuffleNetV2::thread_p_shl456_cast_fu_19443_p1() {
    p_shl456_cast_fu_19443_p1 = esl_zext<17,14>(tmp_1409_fu_19436_p3.read());
}

void ShuffleNetV2::thread_p_shl457_cast_fu_19628_p1() {
    p_shl457_cast_fu_19628_p1 = esl_zext<10,9>(tmp_1402_fu_19620_p3.read());
}

void ShuffleNetV2::thread_p_shl458_cast_fu_19640_p1() {
    p_shl458_cast_fu_19640_p1 = esl_zext<10,7>(tmp_1403_fu_19632_p3.read());
}

void ShuffleNetV2::thread_p_shl459_cast_fu_19679_p1() {
    p_shl459_cast_fu_19679_p1 = esl_zext<15,13>(tmp_1423_fu_19671_p3.read());
}

void ShuffleNetV2::thread_p_shl45_cast_fu_16418_p1() {
    p_shl45_cast_fu_16418_p1 = esl_zext<7,4>(p_shl45_fu_16410_p3.read());
}

void ShuffleNetV2::thread_p_shl45_fu_16410_p3() {
    p_shl45_fu_16410_p3 = esl_concat<1,3>(tmp_1275_fu_16394_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl460_cast_fu_19691_p1() {
    p_shl460_cast_fu_19691_p1 = esl_zext<15,11>(tmp_1424_fu_19683_p3.read());
}

void ShuffleNetV2::thread_p_shl461_cast_fu_19787_p1() {
    p_shl461_cast_fu_19787_p1 = esl_zext<11,10>(tmp_1419_fu_19779_p3.read());
}

void ShuffleNetV2::thread_p_shl462_cast_fu_19799_p1() {
    p_shl462_cast_fu_19799_p1 = esl_zext<11,8>(tmp_1420_fu_19791_p3.read());
}

void ShuffleNetV2::thread_p_shl463_cast_fu_19751_p1() {
    p_shl463_cast_fu_19751_p1 = esl_zext<10,9>(tmp_1416_fu_19743_p3.read());
}

void ShuffleNetV2::thread_p_shl464_cast_fu_19763_p1() {
    p_shl464_cast_fu_19763_p1 = esl_zext<10,7>(tmp_1417_fu_19755_p3.read());
}

void ShuffleNetV2::thread_p_shl465_cast_fu_19877_p1() {
    p_shl465_cast_fu_19877_p1 = esl_zext<14,13>(tmp_1432_fu_19869_p3.read());
}

void ShuffleNetV2::thread_p_shl466_cast_fu_19889_p1() {
    p_shl466_cast_fu_19889_p1 = esl_zext<14,11>(tmp_1433_fu_19881_p3.read());
}

void ShuffleNetV2::thread_p_shl467_cast_fu_19842_p1() {
    p_shl467_cast_fu_19842_p1 = esl_zext<15,14>(tmp_1428_fu_19834_p3.read());
}

void ShuffleNetV2::thread_p_shl468_cast_fu_19854_p1() {
    p_shl468_cast_fu_19854_p1 = esl_zext<15,12>(tmp_1429_fu_19846_p3.read());
}

void ShuffleNetV2::thread_p_shl46_cast_fu_15757_p1() {
    p_shl46_cast_fu_15757_p1 = esl_zext<7,6>(p_shl46_fu_15749_p3.read());
}

void ShuffleNetV2::thread_p_shl46_fu_15749_p3() {
    p_shl46_fu_15749_p3 = esl_concat<1,5>(tmp_1257_fu_15745_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl470_cast_fu_20172_p1() {
    p_shl470_cast_fu_20172_p1 = esl_sext<10,8>(tmp_1446_fu_20164_p3.read());
}

void ShuffleNetV2::thread_p_shl471_cast_fu_20194_p1() {
    p_shl471_cast_fu_20194_p1 = esl_zext<17,16>(tmp_1441_fu_20187_p3.read());
}

void ShuffleNetV2::thread_p_shl472_cast_fu_20205_p1() {
    p_shl472_cast_fu_20205_p1 = esl_zext<17,14>(tmp_1442_fu_20198_p3.read());
}

void ShuffleNetV2::thread_p_shl474_cast_fu_20547_p1() {
    p_shl474_cast_fu_20547_p1 = esl_zext<12,11>(tmp_1460_fu_20540_p3.read());
}

void ShuffleNetV2::thread_p_shl475_cast_fu_20562_p3() {
    p_shl475_cast_fu_20562_p3 = esl_concat<8,2>(tmp_1457_reg_38623.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl476_cast_fu_20510_p1() {
    p_shl476_cast_fu_20510_p1 = esl_zext<35,34>(tmp_1453_fu_20506_p1.read());
}

void ShuffleNetV2::thread_p_shl478_cast_fu_20965_p1() {
    p_shl478_cast_fu_20965_p1 = esl_sext<10,8>(tmp_1477_fu_20957_p3.read());
}

void ShuffleNetV2::thread_p_shl479_cast_fu_20987_p1() {
    p_shl479_cast_fu_20987_p1 = esl_zext<17,16>(tmp_1472_fu_20980_p3.read());
}

void ShuffleNetV2::thread_p_shl47_cast_fu_15769_p1() {
    p_shl47_cast_fu_15769_p1 = esl_zext<7,4>(p_shl47_fu_15761_p3.read());
}

void ShuffleNetV2::thread_p_shl47_fu_15761_p3() {
    p_shl47_fu_15761_p3 = esl_concat<1,3>(tmp_1257_fu_15745_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl480_cast_fu_20998_p1() {
    p_shl480_cast_fu_20998_p1 = esl_zext<17,14>(tmp_1473_fu_20991_p3.read());
}

void ShuffleNetV2::thread_p_shl481_cast_fu_21179_p1() {
    p_shl481_cast_fu_21179_p1 = esl_zext<10,9>(tmp_1466_fu_21171_p3.read());
}

void ShuffleNetV2::thread_p_shl482_cast_fu_21191_p1() {
    p_shl482_cast_fu_21191_p1 = esl_zext<10,7>(tmp_1467_fu_21183_p3.read());
}

void ShuffleNetV2::thread_p_shl483_cast_fu_21230_p1() {
    p_shl483_cast_fu_21230_p1 = esl_zext<15,13>(tmp_1487_fu_21222_p3.read());
}

void ShuffleNetV2::thread_p_shl484_cast_fu_21242_p1() {
    p_shl484_cast_fu_21242_p1 = esl_zext<15,11>(tmp_1488_fu_21234_p3.read());
}

void ShuffleNetV2::thread_p_shl485_cast_fu_21338_p1() {
    p_shl485_cast_fu_21338_p1 = esl_zext<11,10>(tmp_1483_fu_21330_p3.read());
}

void ShuffleNetV2::thread_p_shl486_cast_fu_21350_p1() {
    p_shl486_cast_fu_21350_p1 = esl_zext<11,8>(tmp_1484_fu_21342_p3.read());
}

void ShuffleNetV2::thread_p_shl487_cast_fu_21302_p1() {
    p_shl487_cast_fu_21302_p1 = esl_zext<10,9>(tmp_1480_fu_21294_p3.read());
}

void ShuffleNetV2::thread_p_shl488_cast_fu_21314_p1() {
    p_shl488_cast_fu_21314_p1 = esl_zext<10,7>(tmp_1481_fu_21306_p3.read());
}

void ShuffleNetV2::thread_p_shl489_cast_fu_21428_p1() {
    p_shl489_cast_fu_21428_p1 = esl_zext<14,13>(tmp_1496_fu_21420_p3.read());
}

void ShuffleNetV2::thread_p_shl48_cast_fu_16173_p1() {
    p_shl48_cast_fu_16173_p1 = esl_zext<7,6>(p_shl48_fu_16165_p3.read());
}

void ShuffleNetV2::thread_p_shl48_fu_16165_p3() {
    p_shl48_fu_16165_p3 = esl_concat<2,4>(tmp_1276_fu_16161_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl490_cast_fu_21440_p1() {
    p_shl490_cast_fu_21440_p1 = esl_zext<14,11>(tmp_1497_fu_21432_p3.read());
}

void ShuffleNetV2::thread_p_shl491_cast_fu_21393_p1() {
    p_shl491_cast_fu_21393_p1 = esl_zext<15,14>(tmp_1492_fu_21385_p3.read());
}

void ShuffleNetV2::thread_p_shl492_cast_fu_21405_p1() {
    p_shl492_cast_fu_21405_p1 = esl_zext<15,12>(tmp_1493_fu_21397_p3.read());
}

void ShuffleNetV2::thread_p_shl494_cast_fu_21723_p1() {
    p_shl494_cast_fu_21723_p1 = esl_sext<10,8>(tmp_1510_fu_21715_p3.read());
}

void ShuffleNetV2::thread_p_shl495_cast_fu_21745_p1() {
    p_shl495_cast_fu_21745_p1 = esl_zext<17,16>(tmp_1505_fu_21738_p3.read());
}

void ShuffleNetV2::thread_p_shl496_cast_fu_21756_p1() {
    p_shl496_cast_fu_21756_p1 = esl_zext<17,14>(tmp_1506_fu_21749_p3.read());
}

void ShuffleNetV2::thread_p_shl498_cast_fu_22106_p1() {
    p_shl498_cast_fu_22106_p1 = esl_zext<12,11>(tmp_1525_fu_22102_p1.read());
}

void ShuffleNetV2::thread_p_shl499_cast_fu_22121_p3() {
    p_shl499_cast_fu_22121_p3 = esl_concat<8,2>(tmp_1521_reg_39178.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl49_cast_fu_16185_p1() {
    p_shl49_cast_fu_16185_p1 = esl_zext<7,4>(p_shl49_fu_16177_p3.read());
}

void ShuffleNetV2::thread_p_shl49_fu_16177_p3() {
    p_shl49_fu_16177_p3 = esl_concat<2,2>(tmp_1276_fu_16161_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl4_cast_fu_13131_p1() {
    p_shl4_cast_fu_13131_p1 = esl_zext<7,6>(p_shl4_fu_13123_p3.read());
}

void ShuffleNetV2::thread_p_shl4_fu_13123_p3() {
    p_shl4_fu_13123_p3 = esl_concat<2,4>(tmp_1161_fu_13119_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl500_cast_fu_22061_p1() {
    p_shl500_cast_fu_22061_p1 = esl_zext<35,34>(tmp_1517_fu_22057_p1.read());
}

void ShuffleNetV2::thread_p_shl502_cast_fu_22524_p1() {
    p_shl502_cast_fu_22524_p1 = esl_sext<10,8>(tmp_1542_fu_22516_p3.read());
}

void ShuffleNetV2::thread_p_shl503_cast_fu_22546_p1() {
    p_shl503_cast_fu_22546_p1 = esl_zext<17,16>(tmp_1537_fu_22539_p3.read());
}

void ShuffleNetV2::thread_p_shl504_cast_fu_22557_p1() {
    p_shl504_cast_fu_22557_p1 = esl_zext<17,14>(tmp_1538_fu_22550_p3.read());
}

void ShuffleNetV2::thread_p_shl505_cast_fu_22738_p1() {
    p_shl505_cast_fu_22738_p1 = esl_zext<10,9>(tmp_1531_fu_22730_p3.read());
}

void ShuffleNetV2::thread_p_shl506_cast_fu_22750_p1() {
    p_shl506_cast_fu_22750_p1 = esl_zext<10,7>(tmp_1532_fu_22742_p3.read());
}

void ShuffleNetV2::thread_p_shl507_cast_fu_22789_p1() {
    p_shl507_cast_fu_22789_p1 = esl_zext<15,13>(tmp_1552_fu_22781_p3.read());
}

void ShuffleNetV2::thread_p_shl508_cast_fu_22801_p1() {
    p_shl508_cast_fu_22801_p1 = esl_zext<15,11>(tmp_1553_fu_22793_p3.read());
}

void ShuffleNetV2::thread_p_shl509_cast_fu_22897_p1() {
    p_shl509_cast_fu_22897_p1 = esl_zext<11,10>(tmp_1548_fu_22889_p3.read());
}

void ShuffleNetV2::thread_p_shl50_cast_fu_16212_p1() {
    p_shl50_cast_fu_16212_p1 = esl_zext<8,7>(p_shl50_fu_16204_p3.read());
}

void ShuffleNetV2::thread_p_shl50_fu_16204_p3() {
    p_shl50_fu_16204_p3 = esl_concat<2,5>(tmp_1276_fu_16161_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl510_cast_fu_22909_p1() {
    p_shl510_cast_fu_22909_p1 = esl_zext<11,8>(tmp_1549_fu_22901_p3.read());
}

void ShuffleNetV2::thread_p_shl511_cast_fu_22861_p1() {
    p_shl511_cast_fu_22861_p1 = esl_zext<10,9>(tmp_1545_fu_22853_p3.read());
}

void ShuffleNetV2::thread_p_shl512_cast_fu_22873_p1() {
    p_shl512_cast_fu_22873_p1 = esl_zext<10,7>(tmp_1546_fu_22865_p3.read());
}

void ShuffleNetV2::thread_p_shl513_cast_fu_22987_p1() {
    p_shl513_cast_fu_22987_p1 = esl_zext<14,13>(tmp_1561_fu_22979_p3.read());
}

void ShuffleNetV2::thread_p_shl514_cast_fu_22999_p1() {
    p_shl514_cast_fu_22999_p1 = esl_zext<14,11>(tmp_1562_fu_22991_p3.read());
}

void ShuffleNetV2::thread_p_shl515_cast_fu_22952_p1() {
    p_shl515_cast_fu_22952_p1 = esl_zext<15,14>(tmp_1557_fu_22944_p3.read());
}

void ShuffleNetV2::thread_p_shl516_cast_fu_22964_p1() {
    p_shl516_cast_fu_22964_p1 = esl_zext<15,12>(tmp_1558_fu_22956_p3.read());
}

void ShuffleNetV2::thread_p_shl518_cast_fu_23282_p1() {
    p_shl518_cast_fu_23282_p1 = esl_sext<10,8>(tmp_1575_fu_23274_p3.read());
}

void ShuffleNetV2::thread_p_shl519_cast_fu_23304_p1() {
    p_shl519_cast_fu_23304_p1 = esl_zext<17,16>(tmp_1570_fu_23297_p3.read());
}

void ShuffleNetV2::thread_p_shl51_cast_fu_16224_p1() {
    p_shl51_cast_fu_16224_p1 = esl_zext<8,5>(p_shl51_fu_16216_p3.read());
}

void ShuffleNetV2::thread_p_shl51_fu_16216_p3() {
    p_shl51_fu_16216_p3 = esl_concat<2,3>(tmp_1276_fu_16161_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl520_cast_fu_23315_p1() {
    p_shl520_cast_fu_23315_p1 = esl_zext<17,14>(tmp_1571_fu_23308_p3.read());
}

void ShuffleNetV2::thread_p_shl522_cast_fu_23665_p1() {
    p_shl522_cast_fu_23665_p1 = esl_zext<12,11>(tmp_1590_fu_23661_p1.read());
}

void ShuffleNetV2::thread_p_shl523_cast_fu_23684_p3() {
    p_shl523_cast_fu_23684_p3 = esl_concat<8,2>(tmp_1586_reg_39733.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl524_cast_fu_23620_p1() {
    p_shl524_cast_fu_23620_p1 = esl_zext<35,34>(tmp_1582_fu_23616_p1.read());
}

void ShuffleNetV2::thread_p_shl526_cast_fu_24087_p1() {
    p_shl526_cast_fu_24087_p1 = esl_sext<10,8>(tmp_1607_fu_24079_p3.read());
}

void ShuffleNetV2::thread_p_shl527_cast_fu_24109_p1() {
    p_shl527_cast_fu_24109_p1 = esl_zext<17,16>(tmp_1602_fu_24102_p3.read());
}

void ShuffleNetV2::thread_p_shl528_cast_fu_24120_p1() {
    p_shl528_cast_fu_24120_p1 = esl_zext<17,14>(tmp_1603_fu_24113_p3.read());
}

void ShuffleNetV2::thread_p_shl529_cast_fu_24301_p1() {
    p_shl529_cast_fu_24301_p1 = esl_zext<10,9>(tmp_1596_fu_24293_p3.read());
}

void ShuffleNetV2::thread_p_shl52_cast_fu_16832_p1() {
    p_shl52_cast_fu_16832_p1 = esl_zext<7,6>(p_shl52_fu_16824_p3.read());
}

void ShuffleNetV2::thread_p_shl52_fu_16824_p3() {
    p_shl52_fu_16824_p3 = esl_concat<1,5>(tmp_1296_fu_16820_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl530_cast_fu_24313_p1() {
    p_shl530_cast_fu_24313_p1 = esl_zext<10,7>(tmp_1597_fu_24305_p3.read());
}

void ShuffleNetV2::thread_p_shl531_cast_fu_24352_p1() {
    p_shl531_cast_fu_24352_p1 = esl_zext<15,13>(tmp_1617_fu_24344_p3.read());
}

void ShuffleNetV2::thread_p_shl532_cast_fu_24364_p1() {
    p_shl532_cast_fu_24364_p1 = esl_zext<15,11>(tmp_1618_fu_24356_p3.read());
}

void ShuffleNetV2::thread_p_shl533_cast_fu_24460_p1() {
    p_shl533_cast_fu_24460_p1 = esl_zext<11,10>(tmp_1613_fu_24452_p3.read());
}

void ShuffleNetV2::thread_p_shl534_cast_fu_24472_p1() {
    p_shl534_cast_fu_24472_p1 = esl_zext<11,8>(tmp_1614_fu_24464_p3.read());
}

void ShuffleNetV2::thread_p_shl535_cast_fu_24424_p1() {
    p_shl535_cast_fu_24424_p1 = esl_zext<10,9>(tmp_1610_fu_24416_p3.read());
}

void ShuffleNetV2::thread_p_shl536_cast_fu_24436_p1() {
    p_shl536_cast_fu_24436_p1 = esl_zext<10,7>(tmp_1611_fu_24428_p3.read());
}

void ShuffleNetV2::thread_p_shl537_cast_fu_24550_p1() {
    p_shl537_cast_fu_24550_p1 = esl_zext<14,13>(tmp_1626_fu_24542_p3.read());
}

void ShuffleNetV2::thread_p_shl538_cast_fu_24562_p1() {
    p_shl538_cast_fu_24562_p1 = esl_zext<14,11>(tmp_1627_fu_24554_p3.read());
}

void ShuffleNetV2::thread_p_shl539_cast_fu_24515_p1() {
    p_shl539_cast_fu_24515_p1 = esl_zext<15,14>(tmp_1622_fu_24507_p3.read());
}

void ShuffleNetV2::thread_p_shl53_cast_fu_16844_p1() {
    p_shl53_cast_fu_16844_p1 = esl_zext<7,4>(p_shl53_fu_16836_p3.read());
}

void ShuffleNetV2::thread_p_shl53_fu_16836_p3() {
    p_shl53_fu_16836_p3 = esl_concat<1,3>(tmp_1296_fu_16820_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl540_cast_fu_24527_p1() {
    p_shl540_cast_fu_24527_p1 = esl_zext<15,12>(tmp_1623_fu_24519_p3.read());
}

void ShuffleNetV2::thread_p_shl542_cast_fu_24845_p1() {
    p_shl542_cast_fu_24845_p1 = esl_sext<10,8>(tmp_1642_fu_24837_p3.read());
}

void ShuffleNetV2::thread_p_shl543_cast_fu_24871_p1() {
    p_shl543_cast_fu_24871_p1 = esl_zext<17,16>(tmp_1636_fu_24867_p1.read());
}

void ShuffleNetV2::thread_p_shl544_cast_fu_24886_p1() {
    p_shl544_cast_fu_24886_p1 = esl_zext<17,14>(tmp_1638_fu_24882_p1.read());
}

void ShuffleNetV2::thread_p_shl546_cast_fu_25228_p1() {
    p_shl546_cast_fu_25228_p1 = esl_zext<13,12>(tmp_1656_fu_25221_p3.read());
}

void ShuffleNetV2::thread_p_shl547_cast_fu_25247_p3() {
    p_shl547_cast_fu_25247_p3 = esl_concat<8,2>(tmp_1653_reg_40288.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl548_cast_fu_25191_p1() {
    p_shl548_cast_fu_25191_p1 = esl_zext<35,34>(tmp_1649_fu_25187_p1.read());
}

void ShuffleNetV2::thread_p_shl54_cast_fu_17164_p1() {
    p_shl54_cast_fu_17164_p1 = esl_zext<7,6>(p_shl54_fu_17156_p3.read());
}

void ShuffleNetV2::thread_p_shl54_fu_17156_p3() {
    p_shl54_fu_17156_p3 = esl_concat<1,5>(tmp_1308_fu_17152_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl550_cast_fu_25650_p1() {
    p_shl550_cast_fu_25650_p1 = esl_sext<10,8>(tmp_1675_fu_25642_p3.read());
}

void ShuffleNetV2::thread_p_shl551_cast_fu_25676_p1() {
    p_shl551_cast_fu_25676_p1 = esl_zext<17,16>(tmp_1669_fu_25672_p1.read());
}

void ShuffleNetV2::thread_p_shl552_cast_fu_25691_p1() {
    p_shl552_cast_fu_25691_p1 = esl_zext<17,14>(tmp_1671_fu_25687_p1.read());
}

void ShuffleNetV2::thread_p_shl553_cast_fu_25876_p1() {
    p_shl553_cast_fu_25876_p1 = esl_zext<10,9>(tmp_1662_fu_25868_p3.read());
}

void ShuffleNetV2::thread_p_shl554_cast_fu_25888_p1() {
    p_shl554_cast_fu_25888_p1 = esl_zext<10,7>(tmp_1663_fu_25880_p3.read());
}

void ShuffleNetV2::thread_p_shl555_cast_fu_25927_p1() {
    p_shl555_cast_fu_25927_p1 = esl_zext<15,13>(tmp_1685_fu_25919_p3.read());
}

void ShuffleNetV2::thread_p_shl556_cast_fu_25939_p1() {
    p_shl556_cast_fu_25939_p1 = esl_zext<15,11>(tmp_1686_fu_25931_p3.read());
}

void ShuffleNetV2::thread_p_shl557_cast_fu_26035_p1() {
    p_shl557_cast_fu_26035_p1 = esl_zext<11,10>(tmp_1681_fu_26027_p3.read());
}

void ShuffleNetV2::thread_p_shl558_cast_fu_26047_p1() {
    p_shl558_cast_fu_26047_p1 = esl_zext<11,8>(tmp_1682_fu_26039_p3.read());
}

void ShuffleNetV2::thread_p_shl559_cast_fu_25999_p1() {
    p_shl559_cast_fu_25999_p1 = esl_zext<10,9>(tmp_1678_fu_25991_p3.read());
}

void ShuffleNetV2::thread_p_shl55_cast_fu_17176_p1() {
    p_shl55_cast_fu_17176_p1 = esl_zext<7,4>(p_shl55_fu_17168_p3.read());
}

void ShuffleNetV2::thread_p_shl55_fu_17168_p3() {
    p_shl55_fu_17168_p3 = esl_concat<1,3>(tmp_1308_fu_17152_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl560_cast_fu_26011_p1() {
    p_shl560_cast_fu_26011_p1 = esl_zext<10,7>(tmp_1679_fu_26003_p3.read());
}

void ShuffleNetV2::thread_p_shl561_cast_fu_26125_p1() {
    p_shl561_cast_fu_26125_p1 = esl_zext<14,13>(tmp_1694_fu_26117_p3.read());
}

void ShuffleNetV2::thread_p_shl562_cast_fu_26137_p1() {
    p_shl562_cast_fu_26137_p1 = esl_zext<14,11>(tmp_1695_fu_26129_p3.read());
}

void ShuffleNetV2::thread_p_shl563_cast_fu_26090_p1() {
    p_shl563_cast_fu_26090_p1 = esl_zext<15,14>(tmp_1690_fu_26082_p3.read());
}

void ShuffleNetV2::thread_p_shl564_cast_fu_26102_p1() {
    p_shl564_cast_fu_26102_p1 = esl_zext<15,12>(tmp_1691_fu_26094_p3.read());
}

void ShuffleNetV2::thread_p_shl566_cast_fu_26420_p1() {
    p_shl566_cast_fu_26420_p1 = esl_sext<10,8>(tmp_1710_fu_26412_p3.read());
}

void ShuffleNetV2::thread_p_shl567_cast_fu_26446_p1() {
    p_shl567_cast_fu_26446_p1 = esl_zext<17,16>(tmp_1704_fu_26442_p1.read());
}

void ShuffleNetV2::thread_p_shl568_cast_fu_26461_p1() {
    p_shl568_cast_fu_26461_p1 = esl_zext<17,14>(tmp_1706_fu_26457_p1.read());
}

void ShuffleNetV2::thread_p_shl56_cast_fu_16931_p1() {
    p_shl56_cast_fu_16931_p1 = esl_zext<7,6>(p_shl56_fu_16923_p3.read());
}

void ShuffleNetV2::thread_p_shl56_fu_16923_p3() {
    p_shl56_fu_16923_p3 = esl_concat<2,4>(tmp_1309_fu_16919_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl570_cast_fu_26807_p1() {
    p_shl570_cast_fu_26807_p1 = esl_zext<13,12>(tmp_1724_fu_26800_p3.read());
}

void ShuffleNetV2::thread_p_shl571_cast_fu_26822_p3() {
    p_shl571_cast_fu_26822_p3 = esl_concat<8,2>(tmp_1721_reg_40843.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl572_cast_fu_26770_p1() {
    p_shl572_cast_fu_26770_p1 = esl_zext<35,34>(tmp_1717_fu_26766_p1.read());
}

void ShuffleNetV2::thread_p_shl574_cast_fu_27237_p1() {
    p_shl574_cast_fu_27237_p1 = esl_sext<10,8>(tmp_1741_fu_27229_p3.read());
}

void ShuffleNetV2::thread_p_shl575_cast_fu_27259_p1() {
    p_shl575_cast_fu_27259_p1 = esl_zext<18,17>(tmp_1736_fu_27252_p3.read());
}

void ShuffleNetV2::thread_p_shl576_cast_fu_27270_p1() {
    p_shl576_cast_fu_27270_p1 = esl_zext<18,15>(tmp_1737_fu_27263_p3.read());
}

void ShuffleNetV2::thread_p_shl577_cast_fu_27455_p1() {
    p_shl577_cast_fu_27455_p1 = esl_zext<10,9>(tmp_1730_fu_27447_p3.read());
}

void ShuffleNetV2::thread_p_shl578_cast_fu_27467_p1() {
    p_shl578_cast_fu_27467_p1 = esl_zext<10,7>(tmp_1731_fu_27459_p3.read());
}

void ShuffleNetV2::thread_p_shl579_cast_fu_27506_p1() {
    p_shl579_cast_fu_27506_p1 = esl_zext<15,13>(tmp_1747_fu_27498_p3.read());
}

void ShuffleNetV2::thread_p_shl57_cast_fu_16943_p1() {
    p_shl57_cast_fu_16943_p1 = esl_zext<7,4>(p_shl57_fu_16935_p3.read());
}

void ShuffleNetV2::thread_p_shl57_fu_16935_p3() {
    p_shl57_fu_16935_p3 = esl_concat<2,2>(tmp_1309_fu_16919_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl580_cast_fu_27518_p1() {
    p_shl580_cast_fu_27518_p1 = esl_zext<15,11>(tmp_1748_fu_27510_p3.read());
}

void ShuffleNetV2::thread_p_shl582_cast_fu_27766_p1() {
    p_shl582_cast_fu_27766_p1 = esl_sext<12,10>(tmp_1760_fu_27758_p3.read());
}

void ShuffleNetV2::thread_p_shl583_cast_fu_27788_p1() {
    p_shl583_cast_fu_27788_p1 = esl_zext<18,17>(tmp_1755_fu_27781_p3.read());
}

void ShuffleNetV2::thread_p_shl584_cast_fu_27799_p1() {
    p_shl584_cast_fu_27799_p1 = esl_zext<18,15>(tmp_1756_fu_27792_p3.read());
}

void ShuffleNetV2::thread_p_shl586_cast_fu_28145_p1() {
    p_shl586_cast_fu_28145_p1 = esl_zext<13,12>(tmp_1775_fu_28138_p3.read());
}

void ShuffleNetV2::thread_p_shl587_cast_fu_28160_p3() {
    p_shl587_cast_fu_28160_p3 = esl_concat<9,2>(tmp_1772_reg_41344.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl588_cast_fu_28108_p1() {
    p_shl588_cast_fu_28108_p1 = esl_zext<35,34>(tmp_1768_fu_28104_p1.read());
}

void ShuffleNetV2::thread_p_shl58_cast_fu_16970_p1() {
    p_shl58_cast_fu_16970_p1 = esl_zext<8,7>(p_shl58_fu_16962_p3.read());
}

void ShuffleNetV2::thread_p_shl58_fu_16962_p3() {
    p_shl58_fu_16962_p3 = esl_concat<2,5>(tmp_1309_fu_16919_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl590_cast_fu_28545_p1() {
    p_shl590_cast_fu_28545_p1 = esl_sext<12,10>(tmp_1790_fu_28537_p3.read());
}

void ShuffleNetV2::thread_p_shl591_cast_fu_28567_p1() {
    p_shl591_cast_fu_28567_p1 = esl_zext<18,17>(tmp_1785_fu_28560_p3.read());
}

void ShuffleNetV2::thread_p_shl592_cast_fu_28578_p1() {
    p_shl592_cast_fu_28578_p1 = esl_zext<18,15>(tmp_1786_fu_28571_p3.read());
}

void ShuffleNetV2::thread_p_shl594_cast_fu_28928_p1() {
    p_shl594_cast_fu_28928_p1 = esl_zext<13,12>(tmp_1805_fu_28921_p3.read());
}

void ShuffleNetV2::thread_p_shl595_cast_fu_28943_p3() {
    p_shl595_cast_fu_28943_p3 = esl_concat<9,2>(tmp_1802_reg_41644.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl596_cast_fu_28891_p1() {
    p_shl596_cast_fu_28891_p1 = esl_zext<35,34>(tmp_1798_fu_28887_p1.read());
}

void ShuffleNetV2::thread_p_shl598_cast_fu_29324_p1() {
    p_shl598_cast_fu_29324_p1 = esl_sext<12,10>(tmp_1826_fu_29316_p3.read());
}

void ShuffleNetV2::thread_p_shl599_cast_fu_29346_p1() {
    p_shl599_cast_fu_29346_p1 = esl_zext<18,17>(tmp_1821_fu_29339_p3.read());
}

void ShuffleNetV2::thread_p_shl59_cast_fu_16982_p1() {
    p_shl59_cast_fu_16982_p1 = esl_zext<8,5>(p_shl59_fu_16974_p3.read());
}

void ShuffleNetV2::thread_p_shl59_fu_16974_p3() {
    p_shl59_fu_16974_p3 = esl_concat<2,3>(tmp_1309_fu_16919_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl5_cast_fu_13143_p1() {
    p_shl5_cast_fu_13143_p1 = esl_zext<7,4>(p_shl5_fu_13135_p3.read());
}

void ShuffleNetV2::thread_p_shl5_fu_13135_p3() {
    p_shl5_fu_13135_p3 = esl_concat<2,2>(tmp_1161_fu_13119_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl600_cast_fu_29357_p1() {
    p_shl600_cast_fu_29357_p1 = esl_zext<18,15>(tmp_1822_fu_29350_p3.read());
}

void ShuffleNetV2::thread_p_shl601_cast_fu_29582_p1() {
    p_shl601_cast_fu_29582_p1 = esl_zext<12,11>(tmp_1814_fu_29574_p3.read());
}

void ShuffleNetV2::thread_p_shl602_cast_fu_29594_p1() {
    p_shl602_cast_fu_29594_p1 = esl_zext<12,9>(tmp_1815_fu_29586_p3.read());
}

void ShuffleNetV2::thread_p_shl603_cast_fu_29542_p1() {
    p_shl603_cast_fu_29542_p1 = esl_zext<11,10>(tmp_1811_fu_29534_p3.read());
}

void ShuffleNetV2::thread_p_shl604_cast_fu_29554_p1() {
    p_shl604_cast_fu_29554_p1 = esl_zext<11,8>(tmp_1812_fu_29546_p3.read());
}

void ShuffleNetV2::thread_p_shl605_cast_fu_29668_p3() {
    p_shl605_cast_fu_29668_p3 = esl_concat<10,3>(tmp_1835_fu_29664_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl606_cast_fu_29676_p3() {
    p_shl606_cast_fu_29676_p3 = esl_concat<12,1>(tmp_1834_fu_29659_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl607_cast_fu_29637_p3() {
    p_shl607_cast_fu_29637_p3 = esl_concat<11,3>(tmp_1832_fu_29633_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl608_cast_fu_29645_p3() {
    p_shl608_cast_fu_29645_p3 = esl_concat<13,1>(tmp_1831_fu_29628_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl60_cast_fu_17533_p1() {
    p_shl60_cast_fu_17533_p1 = esl_zext<7,6>(p_shl60_fu_17525_p3.read());
}

void ShuffleNetV2::thread_p_shl60_fu_17525_p3() {
    p_shl60_fu_17525_p3 = esl_concat<1,5>(tmp_1320_fu_17521_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl610_cast_fu_29941_p1() {
    p_shl610_cast_fu_29941_p1 = esl_sext<12,10>(tmp_1848_fu_29933_p3.read());
}

void ShuffleNetV2::thread_p_shl611_cast_fu_29963_p1() {
    p_shl611_cast_fu_29963_p1 = esl_zext<18,17>(tmp_1843_fu_29956_p3.read());
}

void ShuffleNetV2::thread_p_shl612_cast_fu_29974_p1() {
    p_shl612_cast_fu_29974_p1 = esl_zext<18,15>(tmp_1844_fu_29967_p3.read());
}

void ShuffleNetV2::thread_p_shl614_cast_fu_30316_p1() {
    p_shl614_cast_fu_30316_p1 = esl_zext<13,12>(tmp_1863_fu_30309_p3.read());
}

void ShuffleNetV2::thread_p_shl615_cast_fu_30331_p3() {
    p_shl615_cast_fu_30331_p3 = esl_concat<9,2>(tmp_1860_reg_42155.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl616_cast_fu_30279_p1() {
    p_shl616_cast_fu_30279_p1 = esl_zext<35,34>(tmp_1856_fu_30275_p1.read());
}

void ShuffleNetV2::thread_p_shl618_cast_fu_30712_p1() {
    p_shl618_cast_fu_30712_p1 = esl_sext<12,10>(tmp_1883_fu_30704_p3.read());
}

void ShuffleNetV2::thread_p_shl619_cast_fu_30738_p1() {
    p_shl619_cast_fu_30738_p1 = esl_zext<18,17>(tmp_1877_fu_30734_p1.read());
}

void ShuffleNetV2::thread_p_shl61_cast_fu_17545_p1() {
    p_shl61_cast_fu_17545_p1 = esl_zext<7,4>(p_shl61_fu_17537_p3.read());
}

void ShuffleNetV2::thread_p_shl61_fu_17537_p3() {
    p_shl61_fu_17537_p3 = esl_concat<1,3>(tmp_1320_fu_17521_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl620_cast_fu_30753_p1() {
    p_shl620_cast_fu_30753_p1 = esl_zext<18,15>(tmp_1879_fu_30749_p1.read());
}

void ShuffleNetV2::thread_p_shl621_cast_fu_30934_p1() {
    p_shl621_cast_fu_30934_p1 = esl_zext<11,10>(tmp_1869_fu_30926_p3.read());
}

void ShuffleNetV2::thread_p_shl622_cast_fu_30946_p1() {
    p_shl622_cast_fu_30946_p1 = esl_zext<11,8>(tmp_1870_fu_30938_p3.read());
}

void ShuffleNetV2::thread_p_shl623_cast_fu_30985_p3() {
    p_shl623_cast_fu_30985_p3 = esl_concat<11,3>(tmp_1893_fu_30981_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl624_cast_fu_31001_p1() {
    p_shl624_cast_fu_31001_p1 = esl_sext<14,13>(tmp_1894_fu_30993_p3.read());
}

void ShuffleNetV2::thread_p_shl625_cast_fu_31101_p1() {
    p_shl625_cast_fu_31101_p1 = esl_zext<12,11>(tmp_1889_fu_31093_p3.read());
}

void ShuffleNetV2::thread_p_shl626_cast_fu_31113_p1() {
    p_shl626_cast_fu_31113_p1 = esl_zext<12,9>(tmp_1890_fu_31105_p3.read());
}

void ShuffleNetV2::thread_p_shl627_cast_fu_31061_p1() {
    p_shl627_cast_fu_31061_p1 = esl_zext<11,10>(tmp_1886_fu_31053_p3.read());
}

void ShuffleNetV2::thread_p_shl628_cast_fu_31073_p1() {
    p_shl628_cast_fu_31073_p1 = esl_zext<11,8>(tmp_1887_fu_31065_p3.read());
}

void ShuffleNetV2::thread_p_shl629_cast_fu_31187_p3() {
    p_shl629_cast_fu_31187_p3 = esl_concat<11,3>(tmp_1902_fu_31183_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl62_cast_fu_17633_p1() {
    p_shl62_cast_fu_17633_p1 = esl_zext<7,6>(p_shl62_fu_17625_p3.read());
}

void ShuffleNetV2::thread_p_shl62_fu_17625_p3() {
    p_shl62_fu_17625_p3 = esl_concat<1,5>(tmp_1319_fu_17621_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl630_cast_fu_31195_p3() {
    p_shl630_cast_fu_31195_p3 = esl_concat<13,1>(tmp_1901_fu_31178_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl631_cast_fu_31156_p3() {
    p_shl631_cast_fu_31156_p3 = esl_concat<10,3>(tmp_1899_fu_31152_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl632_cast_fu_31164_p3() {
    p_shl632_cast_fu_31164_p3 = esl_concat<12,1>(tmp_1898_fu_31147_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl634_cast_fu_31460_p1() {
    p_shl634_cast_fu_31460_p1 = esl_sext<12,10>(tmp_1916_fu_31452_p3.read());
}

void ShuffleNetV2::thread_p_shl635_cast_fu_31482_p1() {
    p_shl635_cast_fu_31482_p1 = esl_zext<19,18>(tmp_1911_fu_31475_p3.read());
}

void ShuffleNetV2::thread_p_shl636_cast_fu_31493_p1() {
    p_shl636_cast_fu_31493_p1 = esl_zext<19,16>(tmp_1912_fu_31486_p3.read());
}

void ShuffleNetV2::thread_p_shl638_cast_fu_31843_p1() {
    p_shl638_cast_fu_31843_p1 = esl_zext<13,12>(tmp_1932_fu_31839_p1.read());
}

void ShuffleNetV2::thread_p_shl639_cast_fu_31862_p3() {
    p_shl639_cast_fu_31862_p3 = esl_concat<9,2>(tmp_1928_reg_42710.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl63_cast_fu_17645_p1() {
    p_shl63_cast_fu_17645_p1 = esl_zext<7,4>(p_shl63_fu_17637_p3.read());
}

void ShuffleNetV2::thread_p_shl63_fu_17637_p3() {
    p_shl63_fu_17637_p3 = esl_concat<1,3>(tmp_1319_fu_17621_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl640_cast_fu_31798_p1() {
    p_shl640_cast_fu_31798_p1 = esl_zext<35,34>(tmp_1924_fu_31794_p1.read());
}

void ShuffleNetV2::thread_p_shl642_cast_fu_32243_p1() {
    p_shl642_cast_fu_32243_p1 = esl_sext<12,10>(tmp_1950_fu_32235_p3.read());
}

void ShuffleNetV2::thread_p_shl643_cast_fu_32265_p1() {
    p_shl643_cast_fu_32265_p1 = esl_zext<19,18>(tmp_1945_fu_32258_p3.read());
}

void ShuffleNetV2::thread_p_shl644_cast_fu_32276_p1() {
    p_shl644_cast_fu_32276_p1 = esl_zext<19,16>(tmp_1946_fu_32269_p3.read());
}

void ShuffleNetV2::thread_p_shl645_cast_fu_32457_p1() {
    p_shl645_cast_fu_32457_p1 = esl_zext<11,10>(tmp_1938_fu_32449_p3.read());
}

void ShuffleNetV2::thread_p_shl646_cast_fu_32469_p1() {
    p_shl646_cast_fu_32469_p1 = esl_zext<11,8>(tmp_1939_fu_32461_p3.read());
}

void ShuffleNetV2::thread_p_shl647_cast_fu_32508_p3() {
    p_shl647_cast_fu_32508_p3 = esl_concat<11,3>(tmp_1960_fu_32504_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl648_cast_fu_32524_p1() {
    p_shl648_cast_fu_32524_p1 = esl_sext<14,13>(tmp_1961_fu_32516_p3.read());
}

void ShuffleNetV2::thread_p_shl649_cast_fu_32624_p1() {
    p_shl649_cast_fu_32624_p1 = esl_zext<12,11>(tmp_1956_fu_32616_p3.read());
}

void ShuffleNetV2::thread_p_shl64_cast_fu_17965_p1() {
    p_shl64_cast_fu_17965_p1 = esl_zext<7,6>(p_shl64_fu_17957_p3.read());
}

void ShuffleNetV2::thread_p_shl64_fu_17957_p3() {
    p_shl64_fu_17957_p3 = esl_concat<1,5>(tmp_1339_fu_17953_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl650_cast_fu_32636_p1() {
    p_shl650_cast_fu_32636_p1 = esl_zext<12,9>(tmp_1957_fu_32628_p3.read());
}

void ShuffleNetV2::thread_p_shl651_cast_fu_32584_p1() {
    p_shl651_cast_fu_32584_p1 = esl_zext<11,10>(tmp_1953_fu_32576_p3.read());
}

void ShuffleNetV2::thread_p_shl652_cast_fu_32596_p1() {
    p_shl652_cast_fu_32596_p1 = esl_zext<11,8>(tmp_1954_fu_32588_p3.read());
}

void ShuffleNetV2::thread_p_shl653_cast_fu_32710_p3() {
    p_shl653_cast_fu_32710_p3 = esl_concat<10,3>(tmp_1969_fu_32706_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl654_cast_fu_32718_p3() {
    p_shl654_cast_fu_32718_p3 = esl_concat<12,1>(tmp_1968_fu_32701_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl655_cast_fu_32679_p3() {
    p_shl655_cast_fu_32679_p3 = esl_concat<11,3>(tmp_1966_fu_32675_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl656_cast_fu_32687_p3() {
    p_shl656_cast_fu_32687_p3 = esl_concat<13,1>(tmp_1965_fu_32670_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl658_cast_fu_32983_p1() {
    p_shl658_cast_fu_32983_p1 = esl_sext<12,10>(tmp_1983_fu_32975_p3.read());
}

void ShuffleNetV2::thread_p_shl659_cast_fu_33005_p1() {
    p_shl659_cast_fu_33005_p1 = esl_zext<19,18>(tmp_1978_fu_32998_p3.read());
}

void ShuffleNetV2::thread_p_shl65_cast_fu_17977_p1() {
    p_shl65_cast_fu_17977_p1 = esl_zext<7,4>(p_shl65_fu_17969_p3.read());
}

void ShuffleNetV2::thread_p_shl65_fu_17969_p3() {
    p_shl65_fu_17969_p3 = esl_concat<1,3>(tmp_1339_fu_17953_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl660_cast_fu_33016_p1() {
    p_shl660_cast_fu_33016_p1 = esl_zext<19,16>(tmp_1979_fu_33009_p3.read());
}

void ShuffleNetV2::thread_p_shl662_cast_fu_33358_p1() {
    p_shl662_cast_fu_33358_p1 = esl_zext<14,13>(tmp_1998_fu_33351_p3.read());
}

void ShuffleNetV2::thread_p_shl663_cast_fu_33377_p3() {
    p_shl663_cast_fu_33377_p3 = esl_concat<9,2>(tmp_1995_reg_43265.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl664_cast_fu_33321_p1() {
    p_shl664_cast_fu_33321_p1 = esl_zext<35,34>(tmp_1991_fu_33317_p1.read());
}

void ShuffleNetV2::thread_p_shl666_cast_fu_33758_p1() {
    p_shl666_cast_fu_33758_p1 = esl_sext<12,10>(tmp_2016_fu_33750_p3.read());
}

void ShuffleNetV2::thread_p_shl667_cast_fu_33780_p1() {
    p_shl667_cast_fu_33780_p1 = esl_zext<19,18>(tmp_2011_fu_33773_p3.read());
}

void ShuffleNetV2::thread_p_shl668_cast_fu_33791_p1() {
    p_shl668_cast_fu_33791_p1 = esl_zext<19,16>(tmp_2012_fu_33784_p3.read());
}

void ShuffleNetV2::thread_p_shl669_cast_fu_33972_p1() {
    p_shl669_cast_fu_33972_p1 = esl_zext<11,10>(tmp_2004_fu_33964_p3.read());
}

void ShuffleNetV2::thread_p_shl66_cast_fu_17316_p1() {
    p_shl66_cast_fu_17316_p1 = esl_zext<7,6>(p_shl66_fu_17308_p3.read());
}

void ShuffleNetV2::thread_p_shl66_fu_17308_p3() {
    p_shl66_fu_17308_p3 = esl_concat<1,5>(tmp_1321_fu_17304_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl670_cast_fu_33984_p1() {
    p_shl670_cast_fu_33984_p1 = esl_zext<11,8>(tmp_2005_fu_33976_p3.read());
}

void ShuffleNetV2::thread_p_shl671_cast_fu_34023_p3() {
    p_shl671_cast_fu_34023_p3 = esl_concat<11,3>(tmp_2024_fu_34019_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl672_cast_fu_34039_p1() {
    p_shl672_cast_fu_34039_p1 = esl_sext<14,13>(tmp_2025_fu_34031_p3.read());
}

void ShuffleNetV2::thread_p_shl673_cast_fu_34107_p1() {
    p_shl673_cast_fu_34107_p1 = esl_zext<12,11>(tmp_2020_fu_34099_p3.read());
}

void ShuffleNetV2::thread_p_shl674_cast_fu_34119_p1() {
    p_shl674_cast_fu_34119_p1 = esl_zext<12,9>(tmp_2021_fu_34111_p3.read());
}

void ShuffleNetV2::thread_p_shl675_cast_fu_34175_p3() {
    p_shl675_cast_fu_34175_p3 = esl_concat<11,3>(tmp_2029_fu_34171_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl676_cast_fu_34183_p3() {
    p_shl676_cast_fu_34183_p3 = esl_concat<13,1>(tmp_2028_fu_34166_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl67_cast_fu_17328_p1() {
    p_shl67_cast_fu_17328_p1 = esl_zext<7,4>(p_shl67_fu_17320_p3.read());
}

void ShuffleNetV2::thread_p_shl67_fu_17320_p3() {
    p_shl67_fu_17320_p3 = esl_concat<1,3>(tmp_1321_fu_17304_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl68_cast_fu_17732_p1() {
    p_shl68_cast_fu_17732_p1 = esl_zext<7,6>(p_shl68_fu_17724_p3.read());
}

void ShuffleNetV2::thread_p_shl68_fu_17724_p3() {
    p_shl68_fu_17724_p3 = esl_concat<2,4>(tmp_1340_fu_17720_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl69_cast_fu_17744_p1() {
    p_shl69_cast_fu_17744_p1 = esl_zext<7,4>(p_shl69_fu_17736_p3.read());
}

void ShuffleNetV2::thread_p_shl69_fu_17736_p3() {
    p_shl69_fu_17736_p3 = esl_concat<2,2>(tmp_1340_fu_17720_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl6_cast_fu_13170_p1() {
    p_shl6_cast_fu_13170_p1 = esl_zext<8,7>(p_shl6_fu_13162_p3.read());
}

void ShuffleNetV2::thread_p_shl6_fu_13162_p3() {
    p_shl6_fu_13162_p3 = esl_concat<2,5>(tmp_1161_fu_13119_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl70_cast_fu_17771_p1() {
    p_shl70_cast_fu_17771_p1 = esl_zext<8,7>(p_shl70_fu_17763_p3.read());
}

void ShuffleNetV2::thread_p_shl70_fu_17763_p3() {
    p_shl70_fu_17763_p3 = esl_concat<2,5>(tmp_1340_fu_17720_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl71_cast_fu_17783_p1() {
    p_shl71_cast_fu_17783_p1 = esl_zext<8,5>(p_shl71_fu_17775_p3.read());
}

void ShuffleNetV2::thread_p_shl71_fu_17775_p3() {
    p_shl71_fu_17775_p3 = esl_concat<2,3>(tmp_1340_fu_17720_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl72_cast_fu_18395_p1() {
    p_shl72_cast_fu_18395_p1 = esl_zext<7,6>(p_shl72_fu_18387_p3.read());
}

void ShuffleNetV2::thread_p_shl72_fu_18387_p3() {
    p_shl72_fu_18387_p3 = esl_concat<1,5>(tmp_1360_fu_18383_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl73_cast_fu_18407_p1() {
    p_shl73_cast_fu_18407_p1 = esl_zext<7,4>(p_shl73_fu_18399_p3.read());
}

void ShuffleNetV2::thread_p_shl73_fu_18399_p3() {
    p_shl73_fu_18399_p3 = esl_concat<1,3>(tmp_1360_fu_18383_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl74_cast_fu_18735_p1() {
    p_shl74_cast_fu_18735_p1 = esl_zext<7,6>(p_shl74_fu_18727_p3.read());
}

void ShuffleNetV2::thread_p_shl74_fu_18727_p3() {
    p_shl74_fu_18727_p3 = esl_concat<1,5>(tmp_1372_fu_18723_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl75_cast_fu_18747_p1() {
    p_shl75_cast_fu_18747_p1 = esl_zext<7,4>(p_shl75_fu_18739_p3.read());
}

void ShuffleNetV2::thread_p_shl75_fu_18739_p3() {
    p_shl75_fu_18739_p3 = esl_concat<1,3>(tmp_1372_fu_18723_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl76_cast_fu_18494_p1() {
    p_shl76_cast_fu_18494_p1 = esl_zext<7,6>(p_shl76_fu_18486_p3.read());
}

void ShuffleNetV2::thread_p_shl76_fu_18486_p3() {
    p_shl76_fu_18486_p3 = esl_concat<2,4>(tmp_1373_fu_18482_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl77_cast_fu_18506_p1() {
    p_shl77_cast_fu_18506_p1 = esl_zext<7,4>(p_shl77_fu_18498_p3.read());
}

void ShuffleNetV2::thread_p_shl77_fu_18498_p3() {
    p_shl77_fu_18498_p3 = esl_concat<2,2>(tmp_1373_fu_18482_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl78_cast_fu_18533_p1() {
    p_shl78_cast_fu_18533_p1 = esl_zext<8,7>(p_shl78_fu_18525_p3.read());
}

void ShuffleNetV2::thread_p_shl78_fu_18525_p3() {
    p_shl78_fu_18525_p3 = esl_concat<2,5>(tmp_1373_fu_18482_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl79_cast_fu_18545_p1() {
    p_shl79_cast_fu_18545_p1 = esl_zext<8,5>(p_shl79_fu_18537_p3.read());
}

void ShuffleNetV2::thread_p_shl79_fu_18537_p3() {
    p_shl79_fu_18537_p3 = esl_concat<2,3>(tmp_1373_fu_18482_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl7_cast_fu_13182_p1() {
    p_shl7_cast_fu_13182_p1 = esl_zext<8,5>(p_shl7_fu_13174_p3.read());
}

void ShuffleNetV2::thread_p_shl7_fu_13174_p3() {
    p_shl7_fu_13174_p3 = esl_concat<2,3>(tmp_1161_fu_13119_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl80_cast_fu_19104_p1() {
    p_shl80_cast_fu_19104_p1 = esl_zext<7,6>(p_shl80_fu_19096_p3.read());
}

void ShuffleNetV2::thread_p_shl80_fu_19096_p3() {
    p_shl80_fu_19096_p3 = esl_concat<1,5>(tmp_1386_fu_19092_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl81_cast_fu_19116_p1() {
    p_shl81_cast_fu_19116_p1 = esl_zext<7,4>(p_shl81_fu_19108_p3.read());
}

void ShuffleNetV2::thread_p_shl81_fu_19108_p3() {
    p_shl81_fu_19108_p3 = esl_concat<1,3>(tmp_1386_fu_19092_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl82_cast_fu_19204_p1() {
    p_shl82_cast_fu_19204_p1 = esl_zext<7,6>(p_shl82_fu_19196_p3.read());
}

void ShuffleNetV2::thread_p_shl82_fu_19196_p3() {
    p_shl82_fu_19196_p3 = esl_concat<1,5>(tmp_1385_fu_19192_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl83_cast_fu_19216_p1() {
    p_shl83_cast_fu_19216_p1 = esl_zext<7,4>(p_shl83_fu_19208_p3.read());
}

void ShuffleNetV2::thread_p_shl83_fu_19208_p3() {
    p_shl83_fu_19208_p3 = esl_concat<1,3>(tmp_1385_fu_19192_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl84_cast_fu_19536_p1() {
    p_shl84_cast_fu_19536_p1 = esl_zext<7,6>(p_shl84_fu_19528_p3.read());
}

void ShuffleNetV2::thread_p_shl84_fu_19528_p3() {
    p_shl84_fu_19528_p3 = esl_concat<1,5>(tmp_1405_fu_19524_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl85_cast_fu_19548_p1() {
    p_shl85_cast_fu_19548_p1 = esl_zext<7,4>(p_shl85_fu_19540_p3.read());
}

void ShuffleNetV2::thread_p_shl85_fu_19540_p3() {
    p_shl85_fu_19540_p3 = esl_concat<1,3>(tmp_1405_fu_19524_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl86_cast_fu_18891_p1() {
    p_shl86_cast_fu_18891_p1 = esl_zext<7,6>(p_shl86_fu_18883_p3.read());
}

void ShuffleNetV2::thread_p_shl86_fu_18883_p3() {
    p_shl86_fu_18883_p3 = esl_concat<1,5>(tmp_1387_fu_18879_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl87_cast_fu_18903_p1() {
    p_shl87_cast_fu_18903_p1 = esl_zext<7,4>(p_shl87_fu_18895_p3.read());
}

void ShuffleNetV2::thread_p_shl87_fu_18895_p3() {
    p_shl87_fu_18895_p3 = esl_concat<1,3>(tmp_1387_fu_18879_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl88_cast_fu_19303_p1() {
    p_shl88_cast_fu_19303_p1 = esl_zext<7,6>(p_shl88_fu_19295_p3.read());
}

void ShuffleNetV2::thread_p_shl88_fu_19295_p3() {
    p_shl88_fu_19295_p3 = esl_concat<2,4>(tmp_1406_fu_19291_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl89_cast_fu_19315_p1() {
    p_shl89_cast_fu_19315_p1 = esl_zext<7,4>(p_shl89_fu_19307_p3.read());
}

void ShuffleNetV2::thread_p_shl89_fu_19307_p3() {
    p_shl89_fu_19307_p3 = esl_concat<2,2>(tmp_1406_fu_19291_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl8_cast_fu_13733_p1() {
    p_shl8_cast_fu_13733_p1 = esl_zext<7,6>(p_shl8_fu_13725_p3.read());
}

void ShuffleNetV2::thread_p_shl8_fu_13725_p3() {
    p_shl8_fu_13725_p3 = esl_concat<1,5>(tmp_1172_fu_13721_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl90_cast_fu_19342_p1() {
    p_shl90_cast_fu_19342_p1 = esl_zext<8,7>(p_shl90_fu_19334_p3.read());
}

void ShuffleNetV2::thread_p_shl90_fu_19334_p3() {
    p_shl90_fu_19334_p3 = esl_concat<2,5>(tmp_1406_fu_19291_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl91_cast_fu_19354_p1() {
    p_shl91_cast_fu_19354_p1 = esl_zext<8,5>(p_shl91_fu_19346_p3.read());
}

void ShuffleNetV2::thread_p_shl91_fu_19346_p3() {
    p_shl91_fu_19346_p3 = esl_concat<2,3>(tmp_1406_fu_19291_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl92_cast_fu_19966_p1() {
    p_shl92_cast_fu_19966_p1 = esl_zext<7,6>(p_shl92_fu_19958_p3.read());
}

void ShuffleNetV2::thread_p_shl92_fu_19958_p3() {
    p_shl92_fu_19958_p3 = esl_concat<1,5>(tmp_1426_fu_19954_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl93_cast_fu_19978_p1() {
    p_shl93_cast_fu_19978_p1 = esl_zext<7,4>(p_shl93_fu_19970_p3.read());
}

void ShuffleNetV2::thread_p_shl93_fu_19970_p3() {
    p_shl93_fu_19970_p3 = esl_concat<1,3>(tmp_1426_fu_19954_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl94_cast_fu_20298_p1() {
    p_shl94_cast_fu_20298_p1 = esl_zext<7,6>(p_shl94_fu_20290_p3.read());
}

void ShuffleNetV2::thread_p_shl94_fu_20290_p3() {
    p_shl94_fu_20290_p3 = esl_concat<1,5>(tmp_1438_fu_20286_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl95_cast_fu_20310_p1() {
    p_shl95_cast_fu_20310_p1 = esl_zext<7,4>(p_shl95_fu_20302_p3.read());
}

void ShuffleNetV2::thread_p_shl95_fu_20302_p3() {
    p_shl95_fu_20302_p3 = esl_concat<1,3>(tmp_1438_fu_20286_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl96_cast_fu_20065_p1() {
    p_shl96_cast_fu_20065_p1 = esl_zext<7,6>(p_shl96_fu_20057_p3.read());
}

void ShuffleNetV2::thread_p_shl96_fu_20057_p3() {
    p_shl96_fu_20057_p3 = esl_concat<2,4>(tmp_1439_fu_20053_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl97_cast_fu_20077_p1() {
    p_shl97_cast_fu_20077_p1 = esl_zext<7,4>(p_shl97_fu_20069_p3.read());
}

void ShuffleNetV2::thread_p_shl97_fu_20069_p3() {
    p_shl97_fu_20069_p3 = esl_concat<2,2>(tmp_1439_fu_20053_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl98_cast_fu_20104_p1() {
    p_shl98_cast_fu_20104_p1 = esl_zext<8,7>(p_shl98_fu_20096_p3.read());
}

void ShuffleNetV2::thread_p_shl98_fu_20096_p3() {
    p_shl98_fu_20096_p3 = esl_concat<2,5>(tmp_1439_fu_20053_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl99_cast_fu_20116_p1() {
    p_shl99_cast_fu_20116_p1 = esl_zext<8,5>(p_shl99_fu_20108_p3.read());
}

void ShuffleNetV2::thread_p_shl99_fu_20108_p3() {
    p_shl99_fu_20108_p3 = esl_concat<2,3>(tmp_1439_fu_20053_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl9_cast_fu_13745_p1() {
    p_shl9_cast_fu_13745_p1 = esl_zext<7,4>(p_shl9_fu_13737_p3.read());
}

void ShuffleNetV2::thread_p_shl9_fu_13737_p3() {
    p_shl9_fu_13737_p3 = esl_concat<1,3>(tmp_1172_fu_13721_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl_cast_fu_13032_p1() {
    p_shl_cast_fu_13032_p1 = esl_zext<7,6>(p_shl_fu_13024_p3.read());
}

void ShuffleNetV2::thread_p_shl_fu_13024_p3() {
    p_shl_fu_13024_p3 = esl_concat<1,5>(tmp_1154_fu_13020_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_10_fu_21021_p2() {
    shuffle_conv_1x1_V8_10_fu_21021_p2 = (!tmp_1696_cast_fu_21017_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1696_cast_fu_21017_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_11_fu_21779_p2() {
    shuffle_conv_1x1_V8_11_fu_21779_p2 = (!tmp_1735_cast_fu_21775_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1735_cast_fu_21775_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_12_fu_22580_p2() {
    shuffle_conv_1x1_V8_12_fu_22580_p2 = (!tmp_1774_cast_fu_22576_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1774_cast_fu_22576_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_13_fu_23338_p2() {
    shuffle_conv_1x1_V8_13_fu_23338_p2 = (!tmp_1813_cast_fu_23334_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1813_cast_fu_23334_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_14_fu_24143_p2() {
    shuffle_conv_1x1_V8_14_fu_24143_p2 = (!tmp_1852_cast_fu_24139_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1852_cast_fu_24139_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_15_fu_24909_p2() {
    shuffle_conv_1x1_V8_15_fu_24909_p2 = (!tmp_1893_cast_fu_24905_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1893_cast_fu_24905_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_16_fu_25714_p2() {
    shuffle_conv_1x1_V8_16_fu_25714_p2 = (!tmp_1933_cast_fu_25710_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1933_cast_fu_25710_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_17_fu_26484_p2() {
    shuffle_conv_1x1_V8_17_fu_26484_p2 = (!tmp_1974_cast_fu_26480_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1974_cast_fu_26480_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_18_fu_27293_p2() {
    shuffle_conv_1x1_V8_18_fu_27293_p2 = (!tmp_2012_cast_fu_27289_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2012_cast_fu_27289_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_19_fu_27822_p2() {
    shuffle_conv_1x1_V8_19_fu_27822_p2 = (!tmp_2034_cast_fu_27818_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2034_cast_fu_27818_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_1_fu_14896_p2() {
    shuffle_conv_1x1_V8_1_fu_14896_p2 = (!tmp_1397_cast_fu_14892_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1397_cast_fu_14892_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_20_fu_28601_p2() {
    shuffle_conv_1x1_V8_20_fu_28601_p2 = (!tmp_2068_cast_fu_28597_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2068_cast_fu_28597_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_21_fu_29380_p2() {
    shuffle_conv_1x1_V8_21_fu_29380_p2 = (!tmp_2108_cast_fu_29376_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2108_cast_fu_29376_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_22_fu_29997_p2() {
    shuffle_conv_1x1_V8_22_fu_29997_p2 = (!tmp_2135_cast_fu_29993_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2135_cast_fu_29993_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_23_fu_30776_p2() {
    shuffle_conv_1x1_V8_23_fu_30776_p2 = (!tmp_2174_cast_fu_30772_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2174_cast_fu_30772_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_24_fu_31516_p2() {
    shuffle_conv_1x1_V8_24_fu_31516_p2 = (!tmp_2212_cast_fu_31512_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2212_cast_fu_31512_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_25_fu_32299_p2() {
    shuffle_conv_1x1_V8_25_fu_32299_p2 = (!tmp_2250_cast_fu_32295_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2250_cast_fu_32295_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_26_fu_33039_p2() {
    shuffle_conv_1x1_V8_26_fu_33039_p2 = (!tmp_2288_cast_fu_33035_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2288_cast_fu_33035_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_27_fu_33814_p2() {
    shuffle_conv_1x1_V8_27_fu_33814_p2 = (!tmp_2325_cast_fu_33810_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_2325_cast_fu_33810_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_28_fu_14095_p2() {
    shuffle_conv_1x1_V8_28_fu_14095_p2 = (!tmp_1356_cast_fu_14091_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1356_cast_fu_14091_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_29_fu_14100_p1() {
    shuffle_conv_1x1_V8_29_fu_14100_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_28_fu_14095_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_2_fu_15535_p2() {
    shuffle_conv_1x1_V8_2_fu_15535_p2 = (!tmp_1425_cast_fu_15531_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1425_cast_fu_15531_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_30_fu_14901_p1() {
    shuffle_conv_1x1_V8_30_fu_14901_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_1_fu_14896_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_31_fu_15540_p1() {
    shuffle_conv_1x1_V8_31_fu_15540_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_2_fu_15535_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_32_fu_16341_p1() {
    shuffle_conv_1x1_V8_32_fu_16341_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_3_fu_16336_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_33_fu_17099_p1() {
    shuffle_conv_1x1_V8_33_fu_17099_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_4_fu_17094_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_34_fu_17900_p1() {
    shuffle_conv_1x1_V8_34_fu_17900_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_5_fu_17895_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_35_fu_18670_p1() {
    shuffle_conv_1x1_V8_35_fu_18670_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_6_fu_18665_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_36_fu_19471_p1() {
    shuffle_conv_1x1_V8_36_fu_19471_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_7_fu_19466_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_37_fu_20233_p1() {
    shuffle_conv_1x1_V8_37_fu_20233_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_8_fu_20228_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_38_fu_21026_p1() {
    shuffle_conv_1x1_V8_38_fu_21026_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_10_fu_21021_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_39_fu_21784_p1() {
    shuffle_conv_1x1_V8_39_fu_21784_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_11_fu_21779_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_3_fu_16336_p2() {
    shuffle_conv_1x1_V8_3_fu_16336_p2 = (!tmp_1463_cast_fu_16332_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1463_cast_fu_16332_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_40_fu_22585_p1() {
    shuffle_conv_1x1_V8_40_fu_22585_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_12_fu_22580_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_41_fu_23343_p1() {
    shuffle_conv_1x1_V8_41_fu_23343_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_13_fu_23338_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_42_fu_24148_p1() {
    shuffle_conv_1x1_V8_42_fu_24148_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_14_fu_24143_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_43_fu_24914_p1() {
    shuffle_conv_1x1_V8_43_fu_24914_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_15_fu_24909_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_44_fu_25719_p1() {
    shuffle_conv_1x1_V8_44_fu_25719_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_16_fu_25714_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_45_fu_26489_p1() {
    shuffle_conv_1x1_V8_45_fu_26489_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_17_fu_26484_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_46_fu_27298_p1() {
    shuffle_conv_1x1_V8_46_fu_27298_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_18_fu_27293_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_47_fu_27827_p1() {
    shuffle_conv_1x1_V8_47_fu_27827_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_19_fu_27822_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_48_fu_28606_p1() {
    shuffle_conv_1x1_V8_48_fu_28606_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_20_fu_28601_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_49_fu_29385_p1() {
    shuffle_conv_1x1_V8_49_fu_29385_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_21_fu_29380_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_4_fu_17094_p2() {
    shuffle_conv_1x1_V8_4_fu_17094_p2 = (!tmp_1502_cast_fu_17090_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1502_cast_fu_17090_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_50_fu_30002_p1() {
    shuffle_conv_1x1_V8_50_fu_30002_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_22_fu_29997_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_51_fu_30781_p1() {
    shuffle_conv_1x1_V8_51_fu_30781_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_23_fu_30776_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_52_fu_31521_p1() {
    shuffle_conv_1x1_V8_52_fu_31521_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_24_fu_31516_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_53_fu_32304_p1() {
    shuffle_conv_1x1_V8_53_fu_32304_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_25_fu_32299_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_54_fu_33044_p1() {
    shuffle_conv_1x1_V8_54_fu_33044_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_26_fu_33039_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_55_fu_33819_p1() {
    shuffle_conv_1x1_V8_55_fu_33819_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_27_fu_33814_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_5_fu_17895_p2() {
    shuffle_conv_1x1_V8_5_fu_17895_p2 = (!tmp_1540_cast_fu_17891_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1540_cast_fu_17891_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_6_fu_18665_p2() {
    shuffle_conv_1x1_V8_6_fu_18665_p2 = (!tmp_1581_cast_fu_18661_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1581_cast_fu_18661_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_7_fu_19466_p2() {
    shuffle_conv_1x1_V8_7_fu_19466_p2 = (!tmp_1619_cast_fu_19462_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1619_cast_fu_19462_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_8_fu_20228_p2() {
    shuffle_conv_1x1_V8_8_fu_20228_p2 = (!tmp_1658_cast_fu_20224_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1658_cast_fu_20224_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_9_fu_13294_p2() {
    shuffle_conv_1x1_V8_9_fu_13294_p2 = (!tmp_1321_cast_fu_13290_p1.read().is_01() || !tmp_721_cast1_reg_34346.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_1321_cast_fu_13290_p1.read()) + sc_bigint<33>(tmp_721_cast1_reg_34346.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_s_fu_13299_p1() {
    shuffle_conv_1x1_V8_s_fu_13299_p1 = esl_sext<64,33>(shuffle_conv_1x1_V8_9_fu_13294_p2.read());
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_10_fu_28202_p2() {
    shuffle_conv_3x3_V6_10_fu_28202_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_1780_fu_28197_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_1780_fu_28197_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_11_fu_28985_p2() {
    shuffle_conv_3x3_V6_11_fu_28985_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_1810_fu_28980_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_1810_fu_28980_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_12_fu_30373_p2() {
    shuffle_conv_3x3_V6_12_fu_30373_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_1868_fu_30368_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_1868_fu_30368_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_13_fu_31904_p2() {
    shuffle_conv_3x3_V6_13_fu_31904_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_1937_fu_31899_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_1937_fu_31899_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_14_fu_33419_p2() {
    shuffle_conv_3x3_V6_14_fu_33419_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_2003_fu_33414_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_2003_fu_33414_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_1_fu_22163_p2() {
    shuffle_conv_3x3_V6_1_fu_22163_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_1530_fu_22158_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_1530_fu_22158_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_2_fu_23726_p2() {
    shuffle_conv_3x3_V6_2_fu_23726_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_1595_fu_23721_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_1595_fu_23721_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_3_fu_25289_p2() {
    shuffle_conv_3x3_V6_3_fu_25289_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_1661_fu_25284_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_1661_fu_25284_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_4_fu_26864_p2() {
    shuffle_conv_3x3_V6_4_fu_26864_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_1729_fu_26859_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_1729_fu_26859_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_5_fu_13674_p2() {
    shuffle_conv_3x3_V6_5_fu_13674_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_1187_fu_13669_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_1187_fu_13669_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_6_fu_14475_p2() {
    shuffle_conv_3x3_V6_6_fu_14475_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_1215_fu_14470_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_1215_fu_14470_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_7_fu_15919_p2() {
    shuffle_conv_3x3_V6_7_fu_15919_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_1271_fu_15914_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_1271_fu_15914_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_8_fu_17474_p2() {
    shuffle_conv_3x3_V6_8_fu_17474_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_1335_fu_17469_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_1335_fu_17469_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_9_fu_19045_p2() {
    shuffle_conv_3x3_V6_9_fu_19045_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_1401_fu_19040_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_1401_fu_19040_p2.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_s_fu_20604_p2() {
    shuffle_conv_3x3_V6_s_fu_20604_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_1465_fu_20599_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_1465_fu_20599_p2.read()));
}

void ShuffleNetV2::thread_shuffleunit0_0_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read())) {
        shuffleunit0_0_outpu_address0 =  (sc_lv<14>) (tmp_1274_cast_fu_12091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read())) {
        shuffleunit0_0_outpu_address0 =  (sc_lv<14>) (tmp_1226_cast_fu_11408_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read())) {
        shuffleunit0_0_outpu_address0 = grp_shuffle_24_p_fu_8888_output_V_address0.read();
    } else {
        shuffleunit0_0_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit0_0_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()))) {
        shuffleunit0_0_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read())) {
        shuffleunit0_0_outpu_ce0 = grp_shuffle_24_p_fu_8888_output_V_ce0.read();
    } else {
        shuffleunit0_0_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_0_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read())) {
        shuffleunit0_0_outpu_we0 = grp_shuffle_24_p_fu_8888_output_V_we0.read();
    } else {
        shuffleunit0_0_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_1_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read())) {
        shuffleunit0_1_outpu_address0 =  (sc_lv<14>) (tmp_1311_cast_fu_12999_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read())) {
        shuffleunit0_1_outpu_address0 =  (sc_lv<14>) (tmp_1277_cast_fu_12285_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read())) {
        shuffleunit0_1_outpu_address0 = grp_shuffle_24_p_fu_8888_output_V_address0.read();
    } else {
        shuffleunit0_1_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit0_1_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read()))) {
        shuffleunit0_1_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read())) {
        shuffleunit0_1_outpu_ce0 = grp_shuffle_24_p_fu_8888_output_V_ce0.read();
    } else {
        shuffleunit0_1_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_1_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state295.read())) {
        shuffleunit0_1_outpu_we0 = grp_shuffle_24_p_fu_8888_output_V_we0.read();
    } else {
        shuffleunit0_1_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_2_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read())) {
        shuffleunit0_2_outpu_address0 = grp_shuffle_24_p_fu_8888_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read())) {
        shuffleunit0_2_outpu_address0 = grp_subconv_3x3_16_strid_1_fu_8876_shuffleunit0_2_outpu_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        shuffleunit0_2_outpu_address0 = grp_subconv_1x1_16p_p_fu_8540_input_V_address0.read();
    } else {
        shuffleunit0_2_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit0_2_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read())) {
        shuffleunit0_2_outpu_ce0 = grp_shuffle_24_p_fu_8888_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read())) {
        shuffleunit0_2_outpu_ce0 = grp_subconv_3x3_16_strid_1_fu_8876_shuffleunit0_2_outpu_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        shuffleunit0_2_outpu_ce0 = grp_subconv_1x1_16p_p_fu_8540_input_V_ce0.read();
    } else {
        shuffleunit0_2_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_2_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read())) {
        shuffleunit0_2_outpu_we0 = grp_shuffle_24_p_fu_8888_output_V_we0.read();
    } else {
        shuffleunit0_2_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_0_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state689.read())) {
        shuffleunit1_0_outpu_address0 =  (sc_lv<14>) (tmp_1567_cast_fu_18151_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state603.read())) {
        shuffleunit1_0_outpu_address0 =  (sc_lv<14>) (tmp_1491_cast_fu_16790_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state600.read())) {
        shuffleunit1_0_outpu_address0 = grp_shuffle_48_p_fu_8914_output_V_address0.read();
    } else {
        shuffleunit1_0_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_0_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state603.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state689.read()))) {
        shuffleunit1_0_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state600.read())) {
        shuffleunit1_0_outpu_ce0 = grp_shuffle_48_p_fu_8914_output_V_ce0.read();
    } else {
        shuffleunit1_0_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_0_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state600.read())) {
        shuffleunit1_0_outpu_we0 = grp_shuffle_48_p_fu_8914_output_V_we0.read();
    } else {
        shuffleunit1_0_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_1_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state780.read())) {
        shuffleunit1_1_outpu_address0 =  (sc_lv<14>) (tmp_1646_cast_fu_19722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read())) {
        shuffleunit1_1_outpu_address0 =  (sc_lv<14>) (tmp_1568_cast_fu_18353_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state691.read())) {
        shuffleunit1_1_outpu_address0 = grp_shuffle_48_p_fu_8914_output_V_address0.read();
    } else {
        shuffleunit1_1_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_1_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state694.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state780.read()))) {
        shuffleunit1_1_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state691.read())) {
        shuffleunit1_1_outpu_ce0 = grp_shuffle_48_p_fu_8914_output_V_ce0.read();
    } else {
        shuffleunit1_1_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_1_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state691.read())) {
        shuffleunit1_1_outpu_we0 = grp_shuffle_48_p_fu_8914_output_V_we0.read();
    } else {
        shuffleunit1_1_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_2_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state871.read())) {
        shuffleunit1_2_outpu_address0 =  (sc_lv<14>) (tmp_1723_cast_fu_21273_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state785.read())) {
        shuffleunit1_2_outpu_address0 =  (sc_lv<14>) (tmp_1647_cast_fu_19924_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state782.read())) {
        shuffleunit1_2_outpu_address0 = grp_shuffle_48_p_fu_8914_output_V_address0.read();
    } else {
        shuffleunit1_2_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_2_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state785.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state871.read()))) {
        shuffleunit1_2_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state782.read())) {
        shuffleunit1_2_outpu_ce0 = grp_shuffle_48_p_fu_8914_output_V_ce0.read();
    } else {
        shuffleunit1_2_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_2_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state782.read())) {
        shuffleunit1_2_outpu_we0 = grp_shuffle_48_p_fu_8914_output_V_we0.read();
    } else {
        shuffleunit1_2_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_3_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state962.read())) {
        shuffleunit1_3_outpu_address0 =  (sc_lv<14>) (tmp_1801_cast_fu_22832_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        shuffleunit1_3_outpu_address0 =  (sc_lv<14>) (tmp_1724_cast_fu_21475_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state873.read())) {
        shuffleunit1_3_outpu_address0 = grp_shuffle_48_p_fu_8914_output_V_address0.read();
    } else {
        shuffleunit1_3_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_3_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state962.read()))) {
        shuffleunit1_3_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state873.read())) {
        shuffleunit1_3_outpu_ce0 = grp_shuffle_48_p_fu_8914_output_V_ce0.read();
    } else {
        shuffleunit1_3_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_3_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state873.read())) {
        shuffleunit1_3_outpu_we0 = grp_shuffle_48_p_fu_8914_output_V_we0.read();
    } else {
        shuffleunit1_3_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_4_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1053.read())) {
        shuffleunit1_4_outpu_address0 =  (sc_lv<14>) (tmp_1879_cast_fu_24395_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state967.read())) {
        shuffleunit1_4_outpu_address0 =  (sc_lv<14>) (tmp_1802_cast_fu_23034_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state964.read())) {
        shuffleunit1_4_outpu_address0 = grp_shuffle_48_p_fu_8914_output_V_address0.read();
    } else {
        shuffleunit1_4_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_4_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state967.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1053.read()))) {
        shuffleunit1_4_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state964.read())) {
        shuffleunit1_4_outpu_ce0 = grp_shuffle_48_p_fu_8914_output_V_ce0.read();
    } else {
        shuffleunit1_4_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_4_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state964.read())) {
        shuffleunit1_4_outpu_we0 = grp_shuffle_48_p_fu_8914_output_V_we0.read();
    } else {
        shuffleunit1_4_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_5_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1144.read())) {
        shuffleunit1_5_outpu_address0 =  (sc_lv<14>) (tmp_1960_cast_fu_25970_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1058.read())) {
        shuffleunit1_5_outpu_address0 =  (sc_lv<14>) (tmp_1880_cast_fu_24597_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1055.read())) {
        shuffleunit1_5_outpu_address0 = grp_shuffle_48_p_fu_8914_output_V_address0.read();
    } else {
        shuffleunit1_5_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_5_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1058.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1144.read()))) {
        shuffleunit1_5_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1055.read())) {
        shuffleunit1_5_outpu_ce0 = grp_shuffle_48_p_fu_8914_output_V_ce0.read();
    } else {
        shuffleunit1_5_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_5_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1055.read())) {
        shuffleunit1_5_outpu_we0 = grp_shuffle_48_p_fu_8914_output_V_we0.read();
    } else {
        shuffleunit1_5_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_6_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1235.read())) {
        shuffleunit1_6_outpu_address0 =  (sc_lv<14>) (tmp_2025_cast_fu_27549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1149.read())) {
        shuffleunit1_6_outpu_address0 =  (sc_lv<14>) (tmp_1961_cast_fu_26172_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1146.read())) {
        shuffleunit1_6_outpu_address0 = grp_shuffle_48_p_fu_8914_output_V_address0.read();
    } else {
        shuffleunit1_6_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_6_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1149.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1235.read()))) {
        shuffleunit1_6_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1146.read())) {
        shuffleunit1_6_outpu_ce0 = grp_shuffle_48_p_fu_8914_output_V_ce0.read();
    } else {
        shuffleunit1_6_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_6_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1146.read())) {
        shuffleunit1_6_outpu_we0 = grp_shuffle_48_p_fu_8914_output_V_we0.read();
    } else {
        shuffleunit1_6_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_7_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1237.read())) {
        shuffleunit1_7_outpu_address0 = grp_shuffle_48_p_fu_8914_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        shuffleunit1_7_outpu_address0 = grp_subconv_3x3_8_stride_fu_8864_shuffleunit1_7_outpu_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        shuffleunit1_7_outpu_address0 = grp_subconv_1x1_8p_p_fu_8580_input_V_address0.read();
    } else {
        shuffleunit1_7_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_7_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1237.read())) {
        shuffleunit1_7_outpu_ce0 = grp_shuffle_48_p_fu_8914_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        shuffleunit1_7_outpu_ce0 = grp_subconv_3x3_8_stride_fu_8864_shuffleunit1_7_outpu_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read())) {
        shuffleunit1_7_outpu_ce0 = grp_subconv_1x1_8p_p_fu_8580_input_V_ce0.read();
    } else {
        shuffleunit1_7_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_7_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1237.read())) {
        shuffleunit1_7_outpu_we0 = grp_shuffle_48_p_fu_8914_output_V_we0.read();
    } else {
        shuffleunit1_7_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_0_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1558.read())) {
        shuffleunit2_0_outpu_address0 =  (sc_lv<13>) (tmp_2277_cast_fu_32555_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1472.read())) {
        shuffleunit2_0_outpu_address0 =  (sc_lv<13>) (tmp_2203_cast_fu_31239_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1469.read())) {
        shuffleunit2_0_outpu_address0 = grp_shuffle_96_p_fu_8945_output_V_address0.read();
    } else {
        shuffleunit2_0_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_0_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1472.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1558.read()))) {
        shuffleunit2_0_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1469.read())) {
        shuffleunit2_0_outpu_ce0 = grp_shuffle_96_p_fu_8945_output_V_ce0.read();
    } else {
        shuffleunit2_0_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_0_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1469.read())) {
        shuffleunit2_0_outpu_we0 = grp_shuffle_96_p_fu_8945_output_V_we0.read();
    } else {
        shuffleunit2_0_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_1_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1648.read())) {
        shuffleunit2_1_outpu_address0 =  (sc_lv<13>) (tmp_2348_cast_fu_34070_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1563.read())) {
        shuffleunit2_1_outpu_address0 =  (sc_lv<13>) (tmp_2278_cast_fu_32757_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1560.read())) {
        shuffleunit2_1_outpu_address0 = grp_shuffle_96_p_fu_8945_output_V_address0.read();
    } else {
        shuffleunit2_1_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_1_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1563.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1648.read()))) {
        shuffleunit2_1_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1560.read())) {
        shuffleunit2_1_outpu_ce0 = grp_shuffle_96_p_fu_8945_output_V_ce0.read();
    } else {
        shuffleunit2_1_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_1_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1560.read())) {
        shuffleunit2_1_outpu_we0 = grp_shuffle_96_p_fu_8945_output_V_we0.read();
    } else {
        shuffleunit2_1_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1654.read())) {
        shuffleunit2_2_outpu_1_address0 =  (sc_lv<12>) (tmp_2349_cast_fu_34232_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read())) {
        shuffleunit2_2_outpu_1_address0 = grp_conv_last_fu_8419_input_V_address0.read();
    } else {
        shuffleunit2_2_outpu_1_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1654.read())) {
        shuffleunit2_2_outpu_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read())) {
        shuffleunit2_2_outpu_1_ce0 = grp_conv_last_fu_8419_input_V_ce0.read();
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
        shuffleunit2_2_outpu_address0 =  (sc_lv<13>) (tmp_2350_cast_fu_34227_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1650.read())) {
        shuffleunit2_2_outpu_address0 = grp_shuffle_96_p_fu_8945_output_V_address0.read();
    } else {
        shuffleunit2_2_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read())) {
        shuffleunit2_2_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1650.read())) {
        shuffleunit2_2_outpu_ce0 = grp_shuffle_96_p_fu_8945_output_V_ce0.read();
    } else {
        shuffleunit2_2_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1650.read())) {
        shuffleunit2_2_outpu_we0 = grp_shuffle_96_p_fu_8945_output_V_we0.read();
    } else {
        shuffleunit2_2_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_tmp10_fu_14997_p2() {
    tmp10_fu_14997_p2 = (!ap_const_lv10_228.is_01() || !tmp_482_cast_fu_14988_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_482_cast_fu_14988_p1.read()));
}

void ShuffleNetV2::thread_tmp11_fu_15437_p2() {
    tmp11_fu_15437_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_523_cast_fu_15433_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_523_cast_fu_15433_p1.read()));
}

void ShuffleNetV2::thread_tmp12_fu_15636_p2() {
    tmp12_fu_15636_p2 = (!ap_const_lv10_258.is_01() || !tmp_510_cast_fu_15627_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_510_cast_fu_15627_p1.read()));
}

void ShuffleNetV2::thread_tmp13_cast1_fu_15790_p1() {
    tmp13_cast1_fu_15790_p1 = esl_sext<8,7>(tmp13_fu_15784_p2.read());
}

void ShuffleNetV2::thread_tmp13_cast_fu_15794_p1() {
    tmp13_cast_fu_15794_p1 = esl_zext<9,8>(tmp13_cast1_fu_15790_p1.read());
}

void ShuffleNetV2::thread_tmp13_fu_15784_p2() {
    tmp13_fu_15784_p2 = (!ap_const_lv7_58.is_01() || !tmp_482_fu_15773_p2.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_482_fu_15773_p2.read()));
}

void ShuffleNetV2::thread_tmp14_fu_16009_p2() {
    tmp14_fu_16009_p2 = (!ap_const_lv10_288.is_01() || !tmp_527_cast_fu_16000_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_288) + sc_bigint<10>(tmp_527_cast_fu_16000_p1.read()));
}

void ShuffleNetV2::thread_tmp15_fu_16238_p2() {
    tmp15_fu_16238_p2 = (!ap_const_lv10_258.is_01() || !tmp_555_cast_fu_16234_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_555_cast_fu_16234_p1.read()));
}

void ShuffleNetV2::thread_tmp16_fu_16437_p2() {
    tmp16_fu_16437_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_537_cast_fu_16428_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_537_cast_fu_16428_p1.read()));
}

void ShuffleNetV2::thread_tmp17_fu_16996_p2() {
    tmp17_fu_16996_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_581_cast_fu_16992_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_581_cast_fu_16992_p1.read()));
}

void ShuffleNetV2::thread_tmp18_fu_17195_p2() {
    tmp18_fu_17195_p2 = (!ap_const_lv10_2E8.is_01() || !tmp_568_cast_fu_17186_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2E8) + sc_bigint<10>(tmp_568_cast_fu_17186_p1.read()));
}

void ShuffleNetV2::thread_tmp19_fu_17347_p2() {
    tmp19_fu_17347_p2 = (!ap_const_lv9_108.is_01() || !tmp_604_cast_fu_17338_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_108) + sc_bigint<9>(tmp_604_cast_fu_17338_p1.read()));
}

void ShuffleNetV2::thread_tmp1_fu_13196_p2() {
    tmp1_fu_13196_p2 = (!ap_const_lv9_D8.is_01() || !tmp_436_cast_fu_13192_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_D8) + sc_bigint<9>(tmp_436_cast_fu_13192_p1.read()));
}

void ShuffleNetV2::thread_tmp20_fu_17564_p2() {
    tmp20_fu_17564_p2 = (!ap_const_lv9_118.is_01() || !tmp_585_cast_cast_fu_17555_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_118) + sc_bigint<9>(tmp_585_cast_cast_fu_17555_p1.read()));
}

void ShuffleNetV2::thread_tmp21_fu_17797_p2() {
    tmp21_fu_17797_p2 = (!ap_const_lv10_318.is_01() || !tmp_613_cast_fu_17793_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_613_cast_fu_17793_p1.read()));
}

void ShuffleNetV2::thread_tmp22_fu_17996_p2() {
    tmp22_fu_17996_p2 = (!ap_const_lv9_148.is_01() || !tmp_595_cast_cast_fu_17987_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_148) + sc_bigint<9>(tmp_595_cast_cast_fu_17987_p1.read()));
}

void ShuffleNetV2::thread_tmp23_fu_18559_p2() {
    tmp23_fu_18559_p2 = (!ap_const_lv9_178.is_01() || !tmp_639_cast_cast_fu_18555_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_639_cast_cast_fu_18555_p1.read()));
}

void ShuffleNetV2::thread_tmp24_fu_18766_p2() {
    tmp24_fu_18766_p2 = (!ap_const_lv9_178.is_01() || !tmp_626_cast_cast_fu_18757_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_626_cast_cast_fu_18757_p1.read()));
}

void ShuffleNetV2::thread_tmp25_fu_18922_p2() {
    tmp25_fu_18922_p2 = (!ap_const_lv9_138.is_01() || !tmp_662_cast_fu_18913_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_662_cast_fu_18913_p1.read()));
}

void ShuffleNetV2::thread_tmp26_fu_19135_p2() {
    tmp26_fu_19135_p2 = (!ap_const_lv8_A8.is_01() || !tmp_643_cast_cast_fu_19126_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_643_cast_cast_fu_19126_p1.read()));
}

void ShuffleNetV2::thread_tmp27_fu_19368_p2() {
    tmp27_fu_19368_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_671_cast_fu_19364_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_671_cast_fu_19364_p1.read()));
}

void ShuffleNetV2::thread_tmp28_cast1_fu_19569_p1() {
    tmp28_cast1_fu_19569_p1 = esl_sext<10,7>(tmp28_fu_19563_p2.read());
}

void ShuffleNetV2::thread_tmp28_cast_fu_19573_p1() {
    tmp28_cast_fu_19573_p1 = esl_zext<11,10>(tmp28_cast1_fu_19569_p1.read());
}

void ShuffleNetV2::thread_tmp28_fu_19563_p2() {
    tmp28_fu_19563_p2 = (!ap_const_lv7_58.is_01() || !tmp_577_fu_19552_p2.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_577_fu_19552_p2.read()));
}

void ShuffleNetV2::thread_tmp29_fu_20130_p2() {
    tmp29_fu_20130_p2 = (!ap_const_lv11_438.is_01() || !tmp_697_cast_fu_20126_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_697_cast_fu_20126_p1.read()));
}

void ShuffleNetV2::thread_tmp2_fu_13395_p2() {
    tmp2_fu_13395_p2 = (!ap_const_lv9_168.is_01() || !tmp_423_cast_fu_13386_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_423_cast_fu_13386_p1.read()));
}

void ShuffleNetV2::thread_tmp30_fu_20329_p2() {
    tmp30_fu_20329_p2 = (!ap_const_lv11_408.is_01() || !tmp_684_cast_fu_20320_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_408) + sc_bigint<11>(tmp_684_cast_fu_20320_p1.read()));
}

void ShuffleNetV2::thread_tmp31_fu_20481_p2() {
    tmp31_fu_20481_p2 = (!ap_const_lv9_168.is_01() || !tmp_720_cast_fu_20472_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_720_cast_fu_20472_p1.read()));
}

void ShuffleNetV2::thread_tmp32_fu_20694_p2() {
    tmp32_fu_20694_p2 = (!ap_const_lv11_438.is_01() || !tmp_701_cast_fu_20685_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_701_cast_fu_20685_p1.read()));
}

void ShuffleNetV2::thread_tmp33_fu_20923_p2() {
    tmp33_fu_20923_p2 = (!ap_const_lv11_498.is_01() || !tmp_729_cast_fu_20919_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_729_cast_fu_20919_p1.read()));
}

void ShuffleNetV2::thread_tmp34_fu_21122_p2() {
    tmp34_fu_21122_p2 = (!ap_const_lv11_468.is_01() || !tmp_711_cast_fu_21113_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_468) + sc_bigint<11>(tmp_711_cast_fu_21113_p1.read()));
}

void ShuffleNetV2::thread_tmp35_fu_21681_p2() {
    tmp35_fu_21681_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_755_cast_fu_21677_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_755_cast_fu_21677_p1.read()));
}

void ShuffleNetV2::thread_tmp36_fu_21880_p2() {
    tmp36_fu_21880_p2 = (!ap_const_lv11_498.is_01() || !tmp_742_cast_fu_21871_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_742_cast_fu_21871_p1.read()));
}

void ShuffleNetV2::thread_tmp37_fu_22032_p2() {
    tmp37_fu_22032_p2 = (!ap_const_lv8_98.is_01() || !tmp_778_cast_cast_fu_22023_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_778_cast_cast_fu_22023_p1.read()));
}

void ShuffleNetV2::thread_tmp38_fu_22253_p2() {
    tmp38_fu_22253_p2 = (!ap_const_lv11_4C8.is_01() || !tmp_759_cast_fu_22244_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4C8) + sc_bigint<11>(tmp_759_cast_fu_22244_p1.read()));
}

void ShuffleNetV2::thread_tmp39_fu_22482_p2() {
    tmp39_fu_22482_p2 = (!ap_const_lv11_558.is_01() || !tmp_787_cast_fu_22478_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_787_cast_fu_22478_p1.read()));
}

void ShuffleNetV2::thread_tmp3_fu_13547_p2() {
    tmp3_fu_13547_p2 = (!ap_const_lv8_78.is_01() || !tmp_459_cast_fu_13538_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_78) + sc_bigint<8>(tmp_459_cast_fu_13538_p1.read()));
}

void ShuffleNetV2::thread_tmp40_fu_22681_p2() {
    tmp40_fu_22681_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_769_cast_fu_22672_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_769_cast_fu_22672_p1.read()));
}

void ShuffleNetV2::thread_tmp41_fu_23240_p2() {
    tmp41_fu_23240_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_813_cast_fu_23236_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_813_cast_fu_23236_p1.read()));
}

void ShuffleNetV2::thread_tmp42_fu_23439_p2() {
    tmp42_fu_23439_p2 = (!ap_const_lv11_528.is_01() || !tmp_800_cast_fu_23430_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_528) + sc_bigint<11>(tmp_800_cast_fu_23430_p1.read()));
}

void ShuffleNetV2::thread_tmp43_fu_23591_p2() {
    tmp43_fu_23591_p2 = (!ap_const_lv8_C8.is_01() || !tmp_836_cast_cast_fu_23582_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_836_cast_cast_fu_23582_p1.read()));
}

void ShuffleNetV2::thread_tmp44_fu_23816_p2() {
    tmp44_fu_23816_p2 = (!ap_const_lv11_558.is_01() || !tmp_817_cast_fu_23807_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_817_cast_fu_23807_p1.read()));
}

void ShuffleNetV2::thread_tmp45_fu_24045_p2() {
    tmp45_fu_24045_p2 = (!ap_const_lv11_618.is_01() || !tmp_845_cast_fu_24041_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_618) + sc_bigint<11>(tmp_845_cast_fu_24041_p1.read()));
}

void ShuffleNetV2::thread_tmp46_fu_24244_p2() {
    tmp46_fu_24244_p2 = (!ap_const_lv11_588.is_01() || !tmp_827_cast_fu_24235_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_588) + sc_bigint<11>(tmp_827_cast_fu_24235_p1.read()));
}

void ShuffleNetV2::thread_tmp47_fu_24803_p2() {
    tmp47_fu_24803_p2 = (!ap_const_lv10_278.is_01() || !tmp_871_cast_cast_fu_24799_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_871_cast_cast_fu_24799_p1.read()));
}

void ShuffleNetV2::thread_tmp48_fu_25010_p2() {
    tmp48_fu_25010_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_858_cast_fu_25001_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_858_cast_fu_25001_p1.read()));
}

void ShuffleNetV2::thread_tmp49_fu_25162_p2() {
    tmp49_fu_25162_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_894_cast_fu_25153_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_894_cast_fu_25153_p1.read()));
}

void ShuffleNetV2::thread_tmp4_fu_13764_p2() {
    tmp4_fu_13764_p2 = (!ap_const_lv8_98.is_01() || !tmp_440_cast_cast_fu_13755_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_440_cast_cast_fu_13755_p1.read()));
}

void ShuffleNetV2::thread_tmp50_fu_25379_p2() {
    tmp50_fu_25379_p2 = (!ap_const_lv11_5E8.is_01() || !tmp_875_cast_fu_25370_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5E8) + sc_bigint<11>(tmp_875_cast_fu_25370_p1.read()));
}

void ShuffleNetV2::thread_tmp51_fu_25608_p2() {
    tmp51_fu_25608_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_903_cast_cast_fu_25604_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_903_cast_cast_fu_25604_p1.read()));
}

void ShuffleNetV2::thread_tmp52_fu_25815_p2() {
    tmp52_fu_25815_p2 = (!ap_const_lv10_218.is_01() || !tmp_885_cast_cast_fu_25806_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_218) + sc_bigint<10>(tmp_885_cast_cast_fu_25806_p1.read()));
}

void ShuffleNetV2::thread_tmp53_fu_26378_p2() {
    tmp53_fu_26378_p2 = (!ap_const_lv9_138.is_01() || !tmp_929_cast_cast_fu_26374_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_929_cast_cast_fu_26374_p1.read()));
}

void ShuffleNetV2::thread_tmp54_fu_26585_p2() {
    tmp54_fu_26585_p2 = (!ap_const_lv10_248.is_01() || !tmp_916_cast_cast_fu_26576_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_248) + sc_bigint<10>(tmp_916_cast_cast_fu_26576_p1.read()));
}

void ShuffleNetV2::thread_tmp55_fu_26741_p2() {
    tmp55_fu_26741_p2 = (!ap_const_lv10_228.is_01() || !tmp_952_cast_fu_26732_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_952_cast_fu_26732_p1.read()));
}

void ShuffleNetV2::thread_tmp56_fu_26954_p2() {
    tmp56_fu_26954_p2 = (!ap_const_lv10_278.is_01() || !tmp_933_cast_cast_fu_26945_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_933_cast_cast_fu_26945_p1.read()));
}

void ShuffleNetV2::thread_tmp57_cast1_fu_27193_p1() {
    tmp57_cast1_fu_27193_p1 = esl_sext<11,9>(tmp57_fu_27187_p2.read());
}

void ShuffleNetV2::thread_tmp57_cast_fu_27197_p1() {
    tmp57_cast_fu_27197_p1 = esl_zext<12,11>(tmp57_cast1_fu_27193_p1.read());
}

void ShuffleNetV2::thread_tmp57_fu_27187_p2() {
    tmp57_fu_27187_p2 = (!ap_const_lv9_198.is_01() || !tmp_961_cast_cast_fu_27183_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_961_cast_cast_fu_27183_p1.read()));
}

void ShuffleNetV2::thread_tmp58_fu_27394_p2() {
    tmp58_fu_27394_p2 = (!ap_const_lv10_2A8.is_01() || !tmp_943_cast_cast_fu_27385_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2A8) + sc_bigint<10>(tmp_943_cast_cast_fu_27385_p1.read()));
}

void ShuffleNetV2::thread_tmp59_fu_27724_p2() {
    tmp59_fu_27724_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_982_cast_fu_27720_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_982_cast_fu_27720_p1.read()));
}

void ShuffleNetV2::thread_tmp5_fu_13997_p2() {
    tmp5_fu_13997_p2 = (!ap_const_lv9_138.is_01() || !tmp_468_cast_fu_13993_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_468_cast_fu_13993_p1.read()));
}

void ShuffleNetV2::thread_tmp60_fu_27923_p2() {
    tmp60_fu_27923_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_969_cast_cast_fu_27914_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_969_cast_cast_fu_27914_p1.read()));
}

void ShuffleNetV2::thread_tmp61_fu_28079_p2() {
    tmp61_fu_28079_p2 = (!ap_const_lv10_258.is_01() || !tmp_1005_cast_fu_28070_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_1005_cast_fu_28070_p1.read()));
}

void ShuffleNetV2::thread_tmp62_fu_28292_p2() {
    tmp62_fu_28292_p2 = (!ap_const_lv9_138.is_01() || !tmp_986_cast_cast_fu_28283_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_986_cast_cast_fu_28283_p1.read()));
}

void ShuffleNetV2::thread_tmp63_fu_28503_p2() {
    tmp63_fu_28503_p2 = (!ap_const_lv12_978.is_01() || !tmp_1014_cast_fu_28499_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_1014_cast_fu_28499_p1.read()));
}

void ShuffleNetV2::thread_tmp64_cast1_fu_28708_p1() {
    tmp64_cast1_fu_28708_p1 = esl_sext<11,9>(tmp64_fu_28702_p2.read());
}

void ShuffleNetV2::thread_tmp64_cast_fu_28712_p1() {
    tmp64_cast_fu_28712_p1 = esl_zext<12,11>(tmp64_cast1_fu_28708_p1.read());
}

void ShuffleNetV2::thread_tmp64_fu_28702_p2() {
    tmp64_fu_28702_p2 = (!ap_const_lv9_198.is_01() || !tmp_996_cast_cast_fu_28693_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_996_cast_cast_fu_28693_p1.read()));
}

void ShuffleNetV2::thread_tmp65_fu_28862_p2() {
    tmp65_fu_28862_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_1037_cast_fu_28853_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_1037_cast_fu_28853_p1.read()));
}

void ShuffleNetV2::thread_tmp66_fu_29075_p2() {
    tmp66_fu_29075_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_1018_cast_fu_29066_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_1018_cast_fu_29066_p1.read()));
}

void ShuffleNetV2::thread_tmp67_fu_29282_p2() {
    tmp67_fu_29282_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_1051_cast_fu_29278_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_1051_cast_fu_29278_p1.read()));
}

void ShuffleNetV2::thread_tmp68_fu_29481_p2() {
    tmp68_fu_29481_p2 = (!ap_const_lv12_858.is_01() || !tmp_1028_cast_fu_29472_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_858) + sc_bigint<12>(tmp_1028_cast_fu_29472_p1.read()));
}

void ShuffleNetV2::thread_tmp69_fu_29899_p2() {
    tmp69_fu_29899_p2 = (!ap_const_lv12_C78.is_01() || !tmp_1069_cast_fu_29895_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C78) + sc_bigint<12>(tmp_1069_cast_fu_29895_p1.read()));
}

void ShuffleNetV2::thread_tmp6_fu_14196_p2() {
    tmp6_fu_14196_p2 = (!ap_const_lv8_C8.is_01() || !tmp_450_cast_cast_fu_14187_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_450_cast_cast_fu_14187_p1.read()));
}

void ShuffleNetV2::thread_tmp70_fu_30098_p2() {
    tmp70_fu_30098_p2 = (!ap_const_lv12_8B8.is_01() || !tmp_1056_cast_fu_30089_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_8B8) + sc_bigint<12>(tmp_1056_cast_fu_30089_p1.read()));
}

void ShuffleNetV2::thread_tmp71_fu_30250_p2() {
    tmp71_fu_30250_p2 = (!ap_const_lv10_318.is_01() || !tmp_1092_cast_fu_30241_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_1092_cast_fu_30241_p1.read()));
}

void ShuffleNetV2::thread_tmp72_fu_30463_p2() {
    tmp72_fu_30463_p2 = (!ap_const_lv12_918.is_01() || !tmp_1073_cast_fu_30454_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_918) + sc_bigint<12>(tmp_1073_cast_fu_30454_p1.read()));
}

void ShuffleNetV2::thread_tmp73_fu_30670_p2() {
    tmp73_fu_30670_p2 = (!ap_const_lv11_5F8.is_01() || !tmp_1101_cast_cast_fu_30666_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5F8) + sc_bigint<11>(tmp_1101_cast_cast_fu_30666_p1.read()));
}

void ShuffleNetV2::thread_tmp74_fu_30877_p2() {
    tmp74_fu_30877_p2 = (!ap_const_lv12_978.is_01() || !tmp_1083_cast_fu_30868_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_1083_cast_fu_30868_p1.read()));
}

void ShuffleNetV2::thread_tmp75_fu_31418_p2() {
    tmp75_fu_31418_p2 = (!ap_const_lv13_F78.is_01() || !tmp_1127_cast_fu_31414_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_F78) + sc_bigint<13>(tmp_1127_cast_fu_31414_p1.read()));
}

void ShuffleNetV2::thread_tmp76_fu_31617_p2() {
    tmp76_fu_31617_p2 = (!ap_const_lv12_9D8.is_01() || !tmp_1114_cast_fu_31608_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_9D8) + sc_bigint<12>(tmp_1114_cast_fu_31608_p1.read()));
}

void ShuffleNetV2::thread_tmp77_fu_31769_p2() {
    tmp77_fu_31769_p2 = (!ap_const_lv9_178.is_01() || !tmp_1150_cast_cast_fu_31760_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_1150_cast_cast_fu_31760_p1.read()));
}

void ShuffleNetV2::thread_tmp78_fu_31994_p2() {
    tmp78_fu_31994_p2 = (!ap_const_lv12_A38.is_01() || !tmp_1131_cast_fu_31985_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A38) + sc_bigint<12>(tmp_1131_cast_fu_31985_p1.read()));
}

void ShuffleNetV2::thread_tmp79_fu_32201_p2() {
    tmp79_fu_32201_p2 = (!ap_const_lv13_10F8.is_01() || !tmp_1159_cast_fu_32197_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_10F8) + sc_bigint<13>(tmp_1159_cast_fu_32197_p1.read()));
}

void ShuffleNetV2::thread_tmp7_fu_14352_p2() {
    tmp7_fu_14352_p2 = (!ap_const_lv8_A8.is_01() || !tmp_491_cast_fu_14343_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_491_cast_fu_14343_p1.read()));
}

void ShuffleNetV2::thread_tmp80_fu_32400_p2() {
    tmp80_fu_32400_p2 = (!ap_const_lv12_A98.is_01() || !tmp_1141_cast_fu_32391_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A98) + sc_bigint<12>(tmp_1141_cast_fu_32391_p1.read()));
}

void ShuffleNetV2::thread_tmp81_fu_32941_p2() {
    tmp81_fu_32941_p2 = (!ap_const_lv13_1278.is_01() || !tmp_1185_cast_fu_32937_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1278) + sc_bigint<13>(tmp_1185_cast_fu_32937_p1.read()));
}

void ShuffleNetV2::thread_tmp82_fu_33140_p2() {
    tmp82_fu_33140_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_1172_cast_fu_33131_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_1172_cast_fu_33131_p1.read()));
}

void ShuffleNetV2::thread_tmp83_fu_33292_p2() {
    tmp83_fu_33292_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_1208_cast_fu_33283_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_1208_cast_fu_33283_p1.read()));
}

void ShuffleNetV2::thread_tmp84_fu_33509_p2() {
    tmp84_fu_33509_p2 = (!ap_const_lv12_B58.is_01() || !tmp_1189_cast_fu_33500_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_B58) + sc_bigint<12>(tmp_1189_cast_fu_33500_p1.read()));
}

void ShuffleNetV2::thread_tmp85_fu_33716_p2() {
    tmp85_fu_33716_p2 = (!ap_const_lv13_13F8.is_01() || !tmp_1217_cast_fu_33712_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_13F8) + sc_bigint<13>(tmp_1217_cast_fu_33712_p1.read()));
}

void ShuffleNetV2::thread_tmp86_fu_33915_p2() {
    tmp86_fu_33915_p2 = (!ap_const_lv12_BB8.is_01() || !tmp_1199_cast_fu_33906_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_BB8) + sc_bigint<12>(tmp_1199_cast_fu_33906_p1.read()));
}

void ShuffleNetV2::thread_tmp8_fu_14565_p2() {
    tmp8_fu_14565_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_472_cast_fu_14556_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_472_cast_fu_14556_p1.read()));
}

void ShuffleNetV2::thread_tmp9_cast_fu_14800_p1() {
    tmp9_cast_fu_14800_p1 = esl_zext<10,9>(tmp9_fu_14794_p2.read());
}

void ShuffleNetV2::thread_tmp9_fu_14794_p2() {
    tmp9_fu_14794_p2 = (!ap_const_lv9_198.is_01() || !tmp_505_cast_fu_14790_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_505_cast_fu_14790_p1.read()));
}

void ShuffleNetV2::thread_tmp_1000_cast_fu_31783_p1() {
    tmp_1000_cast_fu_31783_p1 = esl_zext<35,32>(tmp_1151_cast_fu_31780_p1.read());
}

void ShuffleNetV2::thread_tmp_1000_fu_11529_p3() {
    tmp_1000_fu_11529_p3 = esl_concat<2,3>(newIndex8_fu_11507_p4.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1001_fu_31775_p2() {
    tmp_1001_fu_31775_p2 = (!co171_cast151_cast_reg_42631.read().is_01() || !tmp77_fu_31769_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co171_cast151_cast_reg_42631.read()) + sc_biguint<9>(tmp77_fu_31769_p2.read()));
}

void ShuffleNetV2::thread_tmp_1002_cast_fu_31828_p1() {
    tmp_1002_cast_fu_31828_p1 = esl_zext<13,10>(tmp_1154_cast_fu_31825_p1.read());
}

void ShuffleNetV2::thread_tmp_1002_fu_11541_p2() {
    tmp_1002_fu_11541_p2 = (!p_shl329_cast_fu_11525_p1.read().is_01() || !p_shl330_cast_fu_11537_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl329_cast_fu_11525_p1.read()) - sc_biguint<8>(p_shl330_cast_fu_11537_p1.read()));
}

void ShuffleNetV2::thread_tmp_1003_fu_32385_p2() {
    tmp_1003_fu_32385_p2 = (!p_shl250_cast_fu_32369_p1.read().is_01() || !p_shl251_cast_fu_32381_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl250_cast_fu_32369_p1.read()) - sc_biguint<8>(p_shl251_cast_fu_32381_p1.read()));
}

void ShuffleNetV2::thread_tmp_1004_fu_32395_p2() {
    tmp_1004_fu_32395_p2 = (!i190_cast1_reg_42894.read().is_01() || !tmp_1003_fu_32385_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i190_cast1_reg_42894.read()) + sc_biguint<8>(tmp_1003_fu_32385_p2.read()));
}

void ShuffleNetV2::thread_tmp_1005_cast_fu_28070_p1() {
    tmp_1005_cast_fu_28070_p1 = esl_sext<10,8>(tmp_866_fu_28064_p2.read());
}

void ShuffleNetV2::thread_tmp_1005_fu_32432_p1() {
    tmp_1005_fu_32432_p1 = esl_zext<64,32>(tmp_1142_cast_fu_32429_p1.read());
}

void ShuffleNetV2::thread_tmp_1006_cast_fu_28090_p1() {
    tmp_1006_cast_fu_28090_p1 = esl_sext<32,8>(tmp_867_reg_41327.read());
}

void ShuffleNetV2::thread_tmp_1006_fu_32406_p2() {
    tmp_1006_fu_32406_p2 = (!tmp80_fu_32400_p2.read().is_01() || !i190_cast_reg_42889.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp80_fu_32400_p2.read()) + sc_biguint<12>(i190_cast_reg_42889.read()));
}

void ShuffleNetV2::thread_tmp_1007_cast_fu_32411_p1() {
    tmp_1007_cast_fu_32411_p1 = esl_zext<33,12>(tmp_1006_reg_42920.read());
}

void ShuffleNetV2::thread_tmp_1007_fu_11469_p1() {
    tmp_1007_fu_11469_p1 = esl_sext<33,14>(tmp_995_fu_11463_p2.read());
}

void ShuffleNetV2::thread_tmp_1008_fu_32164_p2() {
    tmp_1008_fu_32164_p2 = (!p_shl254_cast_fu_32150_p1.read().is_01() || !p_shl255_cast_fu_32160_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl254_cast_fu_32150_p1.read()) - sc_biguint<8>(p_shl255_cast_fu_32160_p1.read()));
}

void ShuffleNetV2::thread_tmp_1009_fu_32174_p2() {
    tmp_1009_fu_32174_p2 = (!tmp_1008_fu_32164_p2.read().is_01() || !tmp_1139_cast_reg_42797.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1008_fu_32164_p2.read()) + sc_biguint<8>(tmp_1139_cast_reg_42797.read()));
}

void ShuffleNetV2::thread_tmp_1010_fu_32191_p2() {
    tmp_1010_fu_32191_p2 = (!p_shl256_cast_fu_32187_p1.read().is_01() || !p_shl254_cast1_fu_32146_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl256_cast_fu_32187_p1.read()) - sc_biguint<10>(p_shl254_cast1_fu_32146_p1.read()));
}

void ShuffleNetV2::thread_tmp_1011_fu_11473_p2() {
    tmp_1011_fu_11473_p2 = (!tmp_721_cast1_reg_34346.read().is_01() || !tmp_1007_fu_11469_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_721_cast1_reg_34346.read()) + sc_bigint<33>(tmp_1007_fu_11469_p1.read()));
}

void ShuffleNetV2::thread_tmp_1012_fu_11478_p1() {
    tmp_1012_fu_11478_p1 = esl_sext<64,33>(tmp_1011_fu_11473_p2.read());
}

void ShuffleNetV2::thread_tmp_1013_fu_32207_p2() {
    tmp_1013_fu_32207_p2 = (!tmp79_fu_32201_p2.read().is_01() || !co173_cast_reg_42774.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp79_fu_32201_p2.read()) + sc_biguint<13>(co173_cast_reg_42774.read()));
}

void ShuffleNetV2::thread_tmp_1014_cast_fu_28499_p1() {
    tmp_1014_cast_fu_28499_p1 = esl_sext<12,10>(tmp_878_fu_28493_p2.read());
}

void ShuffleNetV2::thread_tmp_1014_fu_11316_p2() {
    tmp_1014_fu_11316_p2 = (!tmp_344_cast_fu_11312_p1.read().is_01() || !tmp_966_reg_35243.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_344_cast_fu_11312_p1.read()) + sc_biguint<10>(tmp_966_reg_35243.read()));
}

void ShuffleNetV2::thread_tmp_1015_fu_32217_p4() {
    tmp_1015_fu_32217_p4 = tmp_1009_fu_32174_p2.read().range(7, 3);
}

void ShuffleNetV2::thread_tmp_1016_fu_32610_p2() {
    tmp_1016_fu_32610_p2 = (!co176_cast_fu_32560_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co176_cast_fu_32560_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_1017_cast_fu_32495_p1() {
    tmp_1017_cast_fu_32495_p1 = esl_zext<12,3>(h_116_fu_32489_p2.read());
}

void ShuffleNetV2::thread_tmp_1017_fu_11329_p3() {
    tmp_1017_fu_11329_p3 = esl_concat<10,1>(tmp_1014_fu_11316_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1018_cast_fu_29066_p1() {
    tmp_1018_cast_fu_29066_p1 = esl_sext<12,8>(tmp_886_fu_29060_p2.read());
}

void ShuffleNetV2::thread_tmp_1018_fu_32813_p2() {
    tmp_1018_fu_32813_p2 = (!p_shl257_cast_fu_32799_p1.read().is_01() || !p_shl258_cast_fu_32809_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl257_cast_fu_32799_p1.read()) - sc_biguint<8>(p_shl258_cast_fu_32809_p1.read()));
}

void ShuffleNetV2::thread_tmp_1019_cast1_fu_32662_p1() {
    tmp_1019_cast1_fu_32662_p1 = esl_zext<12,3>(h_118_fu_32656_p2.read());
}

void ShuffleNetV2::thread_tmp_1019_cast2_fu_32666_p1() {
    tmp_1019_cast2_fu_32666_p1 = esl_zext<13,3>(h_118_fu_32656_p2.read());
}

void ShuffleNetV2::thread_tmp_1019_cast_fu_29104_p1() {
    tmp_1019_cast_fu_29104_p1 = esl_sext<32,8>(tmp_887_reg_41692.read());
}

void ShuffleNetV2::thread_tmp_1019_fu_11341_p2() {
    tmp_1019_fu_11341_p2 = (!p_shl327_cast_fu_11321_p3.read().is_01() || !p_shl328_cast_fu_11337_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl327_cast_fu_11321_p3.read()) + sc_biguint<14>(p_shl328_cast_fu_11337_p1.read()));
}

void ShuffleNetV2::thread_tmp_1020_cast_fu_32546_p1() {
    tmp_1020_cast_fu_32546_p1 = esl_zext<14,3>(w_120_fu_32540_p2.read());
}

void ShuffleNetV2::thread_tmp_1020_fu_11347_p2() {
    tmp_1020_fu_11347_p2 = (!tmp_344_cast1_fu_11308_p1.read().is_01() || !tmp_970_reg_35248.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_344_cast1_fu_11308_p1.read()) + sc_biguint<11>(tmp_970_reg_35248.read()));
}

void ShuffleNetV2::thread_tmp_1021_fu_32849_p2() {
    tmp_1021_fu_32849_p2 = (!tmp_1018_reg_43042.read().is_01() || !ci79_cast_fu_32833_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1018_reg_43042.read()) + sc_biguint<8>(ci79_cast_fu_32833_p1.read()));
}

void ShuffleNetV2::thread_tmp_1022_cast_fu_32854_p1() {
    tmp_1022_cast_fu_32854_p1 = esl_sext<12,8>(tmp_1021_fu_32849_p2.read());
}

void ShuffleNetV2::thread_tmp_1022_fu_11360_p3() {
    tmp_1022_fu_11360_p3 = esl_concat<11,1>(tmp_1020_fu_11347_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1023_cast_fu_32858_p1() {
    tmp_1023_cast_fu_32858_p1 = esl_zext<20,5>(ci79_reg_8161.read());
}

void ShuffleNetV2::thread_tmp_1023_fu_11372_p2() {
    tmp_1023_fu_11372_p2 = (!p_shl325_cast_fu_11352_p3.read().is_01() || !p_shl326_cast_fu_11368_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl325_cast_fu_11352_p3.read()) + sc_biguint<15>(p_shl326_cast_fu_11368_p1.read()));
}

void ShuffleNetV2::thread_tmp_1024_cast1_fu_32744_p1() {
    tmp_1024_cast1_fu_32744_p1 = esl_zext<13,3>(w_122_fu_32738_p2.read());
}

void ShuffleNetV2::thread_tmp_1024_cast_fu_32748_p1() {
    tmp_1024_cast_fu_32748_p1 = esl_zext<14,3>(w_122_fu_32738_p2.read());
}

void ShuffleNetV2::thread_tmp_1024_fu_11204_p2() {
    tmp_1024_fu_11204_p2 = (!tmp_982_reg_35212.read().is_01() || !tmp_345_cast_fu_11200_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_982_reg_35212.read()) + sc_biguint<15>(tmp_345_cast_fu_11200_p1.read()));
}

void ShuffleNetV2::thread_tmp_1025_fu_33125_p2() {
    tmp_1025_fu_33125_p2 = (!p_shl259_cast_fu_33109_p1.read().is_01() || !p_shl260_cast_fu_33121_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl259_cast_fu_33109_p1.read()) - sc_biguint<8>(p_shl260_cast_fu_33121_p1.read()));
}

void ShuffleNetV2::thread_tmp_1026_cast_fu_29170_p1() {
    tmp_1026_cast_fu_29170_p1 = esl_zext<8,3>(p_lshr_f21_cast_fu_29160_p4.read());
}

void ShuffleNetV2::thread_tmp_1026_fu_33135_p2() {
    tmp_1026_fu_33135_p2 = (!i196_cast1_reg_43149.read().is_01() || !tmp_1025_fu_33125_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i196_cast1_reg_43149.read()) + sc_biguint<8>(tmp_1025_fu_33125_p2.read()));
}

void ShuffleNetV2::thread_tmp_1027_fu_33172_p1() {
    tmp_1027_fu_33172_p1 = esl_zext<64,32>(tmp_1173_cast_fu_33169_p1.read());
}

void ShuffleNetV2::thread_tmp_1028_cast_fu_29472_p1() {
    tmp_1028_cast_fu_29472_p1 = esl_sext<12,8>(tmp_901_fu_29466_p2.read());
}

void ShuffleNetV2::thread_tmp_1028_fu_33146_p2() {
    tmp_1028_fu_33146_p2 = (!tmp82_fu_33140_p2.read().is_01() || !i196_cast_reg_43144.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp82_fu_33140_p2.read()) + sc_biguint<12>(i196_cast_reg_43144.read()));
}

void ShuffleNetV2::thread_tmp_1029_cast1_fu_33151_p1() {
    tmp_1029_cast1_fu_33151_p1 = esl_zext<33,12>(tmp_1028_reg_43175.read());
}

void ShuffleNetV2::thread_tmp_1029_cast_fu_29510_p1() {
    tmp_1029_cast_fu_29510_p1 = esl_sext<32,8>(tmp_903_reg_41849.read());
}

void ShuffleNetV2::thread_tmp_1029_fu_11563_p2() {
    tmp_1029_fu_11563_p2 = (!tmp_1002_reg_35313.read().is_01() || !tmp_349_cast_fu_11559_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1002_reg_35313.read()) + sc_biguint<8>(tmp_349_cast_fu_11559_p1.read()));
}

void ShuffleNetV2::thread_tmp_1030_fu_32904_p2() {
    tmp_1030_fu_32904_p2 = (!p_shl261_cast_fu_32890_p1.read().is_01() || !p_shl262_cast_fu_32900_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl261_cast_fu_32890_p1.read()) - sc_biguint<8>(p_shl262_cast_fu_32900_p1.read()));
}

void ShuffleNetV2::thread_tmp_1031_fu_11398_p2() {
    tmp_1031_fu_11398_p2 = (!tmp_1019_reg_35261.read().is_01() || !tmp_350_cast_fu_11394_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1019_reg_35261.read()) + sc_biguint<14>(tmp_350_cast_fu_11394_p1.read()));
}

void ShuffleNetV2::thread_tmp_1032_fu_32914_p2() {
    tmp_1032_fu_32914_p2 = (!tmp_1030_fu_32904_p2.read().is_01() || !tmp_1169_cast_reg_43052.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1030_fu_32904_p2.read()) + sc_biguint<8>(tmp_1169_cast_reg_43052.read()));
}

void ShuffleNetV2::thread_tmp_1033_fu_32931_p2() {
    tmp_1033_fu_32931_p2 = (!p_shl263_cast_fu_32927_p1.read().is_01() || !p_shl261_cast1_fu_32886_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl263_cast_fu_32927_p1.read()) - sc_biguint<10>(p_shl261_cast1_fu_32886_p1.read()));
}

void ShuffleNetV2::thread_tmp_1034_fu_32947_p2() {
    tmp_1034_fu_32947_p2 = (!tmp81_fu_32941_p2.read().is_01() || !co178_cast_reg_43029.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp81_fu_32941_p2.read()) + sc_biguint<13>(co178_cast_reg_43029.read()));
}

void ShuffleNetV2::thread_tmp_1035_fu_32957_p4() {
    tmp_1035_fu_32957_p4 = tmp_1032_fu_32914_p2.read().range(7, 3);
}

void ShuffleNetV2::thread_tmp_1036_cast1_fu_33209_p1() {
    tmp_1036_cast1_fu_33209_p1 = esl_zext<15,2>(w123_reg_8216.read());
}

void ShuffleNetV2::thread_tmp_1036_cast_fu_33213_p1() {
    tmp_1036_cast_fu_33213_p1 = esl_zext<36,2>(w123_reg_8216.read());
}

void ShuffleNetV2::thread_tmp_1036_fu_11403_p2() {
    tmp_1036_fu_11403_p2 = (!tmp_1023_reg_35266.read().is_01() || !tmp_350_cast1_fu_11390_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1023_reg_35266.read()) + sc_biguint<15>(tmp_350_cast1_fu_11390_p1.read()));
}

void ShuffleNetV2::thread_tmp_1037_cast_fu_28853_p1() {
    tmp_1037_cast_fu_28853_p1 = esl_sext<10,8>(tmp_895_fu_28847_p2.read());
}

void ShuffleNetV2::thread_tmp_1037_fu_33588_p2() {
    tmp_1037_fu_33588_p2 = (!p_shl266_cast_fu_33574_p1.read().is_01() || !p_shl267_cast_fu_33584_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl266_cast_fu_33574_p1.read()) - sc_biguint<8>(p_shl267_cast_fu_33584_p1.read()));
}

void ShuffleNetV2::thread_tmp_1038_cast_fu_28873_p1() {
    tmp_1038_cast_fu_28873_p1 = esl_sext<32,8>(tmp_896_reg_41627.read());
}

void ShuffleNetV2::thread_tmp_1038_fu_33494_p2() {
    tmp_1038_fu_33494_p2 = (!p_shl264_cast_fu_33478_p1.read().is_01() || !p_shl265_cast_fu_33490_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl264_cast_fu_33478_p1.read()) - sc_biguint<8>(p_shl265_cast_fu_33490_p1.read()));
}

void ShuffleNetV2::thread_tmp_1039_fu_33504_p2() {
    tmp_1039_fu_33504_p2 = (!i199_cast1_reg_43292.read().is_01() || !tmp_1038_fu_33494_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i199_cast1_reg_43292.read()) + sc_biguint<8>(tmp_1038_fu_33494_p2.read()));
}

void ShuffleNetV2::thread_tmp_1040_fu_33541_p1() {
    tmp_1040_fu_33541_p1 = esl_zext<64,32>(tmp_1190_cast_fu_33538_p1.read());
}

void ShuffleNetV2::thread_tmp_1041_fu_11667_p2() {
    tmp_1041_fu_11667_p2 = (!tmp_720_cast1_reg_34283.read().is_01() || !ap_const_lv33_F0.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_720_cast1_reg_34283.read()) + sc_biguint<33>(ap_const_lv33_F0));
}

void ShuffleNetV2::thread_tmp_1042_fu_11672_p1() {
    tmp_1042_fu_11672_p1 = esl_sext<64,33>(tmp_1041_fu_11667_p2.read());
}

void ShuffleNetV2::thread_tmp_1043_fu_33515_p2() {
    tmp_1043_fu_33515_p2 = (!tmp84_fu_33509_p2.read().is_01() || !i199_cast_reg_43287.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp84_fu_33509_p2.read()) + sc_biguint<12>(i199_cast_reg_43287.read()));
}

void ShuffleNetV2::thread_tmp_1044_fu_11617_p3() {
    tmp_1044_fu_11617_p3 = esl_concat<5,2>(co41_reg_4809.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1045_fu_11629_p2() {
    tmp_1045_fu_11629_p2 = (!p_shl334_cast_fu_11625_p1.read().is_01() || !tmp_351_cast_fu_11613_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl334_cast_fu_11625_p1.read()) - sc_biguint<8>(tmp_351_cast_fu_11613_p1.read()));
}

void ShuffleNetV2::thread_tmp_1046_cast_fu_33520_p1() {
    tmp_1046_cast_fu_33520_p1 = esl_zext<33,12>(tmp_1043_reg_43318.read());
}

void ShuffleNetV2::thread_tmp_1046_fu_11649_p3() {
    tmp_1046_fu_11649_p3 = esl_concat<7,2>(tmp_352_fu_11639_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1047_fu_11661_p2() {
    tmp_1047_fu_11661_p2 = (!p_shl333_cast_fu_11657_p1.read().is_01() || !tmp_353_cast_fu_11645_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl333_cast_fu_11657_p1.read()) - sc_biguint<10>(tmp_353_cast_fu_11645_p1.read()));
}

void ShuffleNetV2::thread_tmp_1048_cast1_fu_33233_p1() {
    tmp_1048_cast1_fu_33233_p1 = esl_zext<11,2>(h119_reg_8227.read());
}

void ShuffleNetV2::thread_tmp_1048_cast_fu_29787_p1() {
    tmp_1048_cast_fu_29787_p1 = esl_zext<8,3>(p_lshr_f22_cast_fu_29777_p4.read());
}

void ShuffleNetV2::thread_tmp_1048_fu_33229_p1() {
    tmp_1048_fu_33229_p1 = esl_zext<64,2>(h119_reg_8227.read());
}

void ShuffleNetV2::thread_tmp_1049_fu_33624_p2() {
    tmp_1049_fu_33624_p2 = (!tmp_1037_reg_43342.read().is_01() || !ci81_cast_fu_33608_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1037_reg_43342.read()) + sc_biguint<8>(ci81_cast_fu_33608_p1.read()));
}

void ShuffleNetV2::thread_tmp_1050_cast_fu_33629_p1() {
    tmp_1050_cast_fu_33629_p1 = esl_sext<12,8>(tmp_1049_fu_33624_p2.read());
}

void ShuffleNetV2::thread_tmp_1050_fu_11702_p2() {
    tmp_1050_fu_11702_p2 = (!tmp_357_cast_fu_11698_p1.read().is_01() || !tmp_1047_reg_35387.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_357_cast_fu_11698_p1.read()) + sc_biguint<10>(tmp_1047_reg_35387.read()));
}

void ShuffleNetV2::thread_tmp_1051_cast1_fu_33633_p1() {
    tmp_1051_cast1_fu_33633_p1 = esl_zext<20,5>(ci81_reg_8282.read());
}

void ShuffleNetV2::thread_tmp_1051_cast_fu_29278_p1() {
    tmp_1051_cast_fu_29278_p1 = esl_sext<12,10>(tmp_909_fu_29272_p2.read());
}

void ShuffleNetV2::thread_tmp_1051_fu_11711_p3() {
    tmp_1051_fu_11711_p3 = esl_concat<10,2>(tmp_1050_fu_11702_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1052_fu_33277_p2() {
    tmp_1052_fu_33277_p2 = (!p_shl270_cast_fu_33261_p1.read().is_01() || !p_shl271_cast_fu_33273_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl270_cast_fu_33261_p1.read()) - sc_biguint<8>(p_shl271_cast_fu_33273_p1.read()));
}

void ShuffleNetV2::thread_tmp_1053_fu_33287_p2() {
    tmp_1053_fu_33287_p2 = (!tmp_1052_fu_33277_p2.read().is_01() || !co181_cast1_reg_43191.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1052_fu_33277_p2.read()) + sc_biguint<8>(co181_cast1_reg_43191.read()));
}

void ShuffleNetV2::thread_tmp_1054_cast_fu_33306_p1() {
    tmp_1054_cast_fu_33306_p1 = esl_zext<35,32>(tmp_1209_cast_fu_33303_p1.read());
}

void ShuffleNetV2::thread_tmp_1054_fu_11723_p2() {
    tmp_1054_fu_11723_p2 = (!p_shl208_fu_11719_p1.read().is_01() || !tmp_1231_cast_fu_11707_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl208_fu_11719_p1.read()) - sc_bigint<64>(tmp_1231_cast_fu_11707_p1.read()));
}

void ShuffleNetV2::thread_tmp_1055_fu_33298_p2() {
    tmp_1055_fu_33298_p2 = (!co181_cast_reg_43186.read().is_01() || !tmp83_fu_33292_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(co181_cast_reg_43186.read()) + sc_biguint<11>(tmp83_fu_33292_p2.read()));
}

void ShuffleNetV2::thread_tmp_1056_cast1_fu_33348_p1() {
    tmp_1056_cast1_fu_33348_p1 = esl_zext<14,11>(tmp_1055_reg_43254.read());
}

void ShuffleNetV2::thread_tmp_1056_cast_fu_30089_p1() {
    tmp_1056_cast_fu_30089_p1 = esl_sext<12,8>(tmp_921_fu_30083_p2.read());
}

void ShuffleNetV2::thread_tmp_1056_fu_11729_p2() {
    tmp_1056_fu_11729_p2 = (!tmp_357_cast1_fu_11694_p1.read().is_01() || !tmp_1228_cast_reg_35382.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_357_cast1_fu_11694_p1.read()) + sc_bigint<9>(tmp_1228_cast_reg_35382.read()));
}

void ShuffleNetV2::thread_tmp_1057_cast_fu_30127_p1() {
    tmp_1057_cast_fu_30127_p1 = esl_sext<32,8>(tmp_922_reg_42060.read());
}

void ShuffleNetV2::thread_tmp_1057_fu_33900_p2() {
    tmp_1057_fu_33900_p2 = (!p_shl268_cast_fu_33884_p1.read().is_01() || !p_shl269_cast_fu_33896_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl268_cast_fu_33884_p1.read()) - sc_biguint<8>(p_shl269_cast_fu_33896_p1.read()));
}

void ShuffleNetV2::thread_tmp_1058_fu_33910_p2() {
    tmp_1058_fu_33910_p2 = (!i202_cast1_reg_43449.read().is_01() || !tmp_1057_fu_33900_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i202_cast1_reg_43449.read()) + sc_biguint<8>(tmp_1057_fu_33900_p2.read()));
}

void ShuffleNetV2::thread_tmp_1059_fu_33947_p1() {
    tmp_1059_fu_33947_p1 = esl_zext<64,32>(tmp_1200_cast_fu_33944_p1.read());
}

void ShuffleNetV2::thread_tmp_1060_fu_33921_p2() {
    tmp_1060_fu_33921_p2 = (!tmp86_fu_33915_p2.read().is_01() || !i202_cast_reg_43444.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp86_fu_33915_p2.read()) + sc_biguint<12>(i202_cast_reg_43444.read()));
}

void ShuffleNetV2::thread_tmp_1061_cast_fu_33926_p1() {
    tmp_1061_cast_fu_33926_p1 = esl_zext<33,12>(tmp_1060_reg_43475.read());
}

void ShuffleNetV2::thread_tmp_1061_fu_11745_p2() {
    tmp_1061_fu_11745_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_1056_reg_35406.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1062_fu_33679_p2() {
    tmp_1062_fu_33679_p2 = (!p_shl272_cast_fu_33665_p1.read().is_01() || !p_shl273_cast_fu_33675_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl272_cast_fu_33665_p1.read()) - sc_biguint<8>(p_shl273_cast_fu_33675_p1.read()));
}

void ShuffleNetV2::thread_tmp_1063_fu_33689_p2() {
    tmp_1063_fu_33689_p2 = (!tmp_1062_fu_33679_p2.read().is_01() || !tmp_1197_cast_reg_43352.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1062_fu_33679_p2.read()) + sc_biguint<8>(tmp_1197_cast_reg_43352.read()));
}

void ShuffleNetV2::thread_tmp_1064_fu_33706_p2() {
    tmp_1064_fu_33706_p2 = (!p_shl274_cast_fu_33702_p1.read().is_01() || !p_shl272_cast1_fu_33661_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl274_cast_fu_33702_p1.read()) - sc_biguint<10>(p_shl272_cast1_fu_33661_p1.read()));
}

void ShuffleNetV2::thread_tmp_1065_fu_11750_p2() {
    tmp_1065_fu_11750_p2 = (!tmp_1061_fu_11745_p2.read().is_01() || !tmp_1056_reg_35406.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_1061_fu_11745_p2.read()) - sc_biguint<9>(tmp_1056_reg_35406.read()));
}

void ShuffleNetV2::thread_tmp_1066_fu_11734_p2() {
    tmp_1066_fu_11734_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_1054_fu_11723_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_1054_fu_11723_p2.read()));
}

void ShuffleNetV2::thread_tmp_1067_fu_33722_p2() {
    tmp_1067_fu_33722_p2 = (!tmp85_fu_33716_p2.read().is_01() || !co183_cast_reg_43329.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp85_fu_33716_p2.read()) + sc_biguint<13>(co183_cast_reg_43329.read()));
}

void ShuffleNetV2::thread_tmp_1068_fu_11868_p2() {
    tmp_1068_fu_11868_p2 = (!tmp_720_cast1_reg_34283.read().is_01() || !ap_const_lv33_108.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_720_cast1_reg_34283.read()) + sc_biguint<33>(ap_const_lv33_108));
}

void ShuffleNetV2::thread_tmp_1069_cast_fu_29895_p1() {
    tmp_1069_cast_fu_29895_p1 = esl_sext<12,10>(tmp_928_fu_29889_p2.read());
}

void ShuffleNetV2::thread_tmp_1069_fu_33732_p4() {
    tmp_1069_fu_33732_p4 = tmp_1063_fu_33689_p2.read().range(7, 3);
}

void ShuffleNetV2::thread_tmp_1070_cast_fu_34010_p1() {
    tmp_1070_cast_fu_34010_p1 = esl_zext<12,3>(h_122_fu_34004_p2.read());
}

void ShuffleNetV2::thread_tmp_1070_fu_11873_p1() {
    tmp_1070_fu_11873_p1 = esl_sext<64,33>(tmp_1068_fu_11868_p2.read());
}

void ShuffleNetV2::thread_tmp_1071_cast_fu_34145_p1() {
    tmp_1071_cast_fu_34145_p1 = esl_zext<11,3>(w125_reg_8370.read());
}

void ShuffleNetV2::thread_tmp_1071_fu_11819_p3() {
    tmp_1071_fu_11819_p3 = esl_concat<8,5>(tmp_358_fu_11813_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1072_cast_fu_34162_p1() {
    tmp_1072_cast_fu_34162_p1 = esl_zext<13,3>(w_127_fu_34139_p2.read());
}

void ShuffleNetV2::thread_tmp_1072_fu_11831_p3() {
    tmp_1072_fu_11831_p3 = esl_concat<8,3>(tmp_358_fu_11813_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1073_cast1_fu_34061_p1() {
    tmp_1073_cast1_fu_34061_p1 = esl_zext<14,3>(w_1_fu_34055_p2.read());
}

void ShuffleNetV2::thread_tmp_1073_cast_fu_30454_p1() {
    tmp_1073_cast_fu_30454_p1 = esl_sext<12,8>(tmp_936_fu_30448_p2.read());
}

void ShuffleNetV2::thread_tmp_1073_fu_11843_p2() {
    tmp_1073_fu_11843_p2 = (!p_shl339_cast_fu_11827_p1.read().is_01() || !p_shl340_cast_fu_11839_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl339_cast_fu_11827_p1.read()) - sc_biguint<14>(p_shl340_cast_fu_11839_p1.read()));
}

void ShuffleNetV2::thread_tmp_1074_cast1_fu_34209_p1() {
    tmp_1074_cast1_fu_34209_p1 = esl_zext<13,3>(h123_reg_8381.read());
}

void ShuffleNetV2::thread_tmp_1074_cast_fu_30492_p1() {
    tmp_1074_cast_fu_30492_p1 = esl_sext<32,8>(tmp_937_reg_42203.read());
}

void ShuffleNetV2::thread_tmp_1074_fu_11883_p1() {
    tmp_1074_fu_11883_p1 = co43_reg_4854.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1075_cast_fu_34218_p1() {
    tmp_1075_cast_fu_34218_p1 = esl_zext<14,3>(h_124_fu_34203_p2.read());
}

void ShuffleNetV2::thread_tmp_1075_fu_11897_p3() {
    tmp_1075_fu_11897_p3 = esl_concat<2,5>(newIndex9_fu_11887_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1076_fu_11909_p3() {
    tmp_1076_fu_11909_p3 = esl_concat<2,3>(newIndex9_fu_11887_p4.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1077_fu_11921_p2() {
    tmp_1077_fu_11921_p2 = (!p_shl337_cast_fu_11905_p1.read().is_01() || !p_shl338_cast_fu_11917_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl337_cast_fu_11905_p1.read()) - sc_biguint<8>(p_shl338_cast_fu_11917_p1.read()));
}

void ShuffleNetV2::thread_tmp_1078_fu_11849_p1() {
    tmp_1078_fu_11849_p1 = esl_sext<33,14>(tmp_1073_fu_11843_p2.read());
}

void ShuffleNetV2::thread_tmp_1079_fu_11853_p2() {
    tmp_1079_fu_11853_p2 = (!tmp_721_cast1_reg_34346.read().is_01() || !tmp_1078_fu_11849_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_721_cast1_reg_34346.read()) + sc_bigint<33>(tmp_1078_fu_11849_p1.read()));
}

void ShuffleNetV2::thread_tmp_1080_fu_11858_p1() {
    tmp_1080_fu_11858_p1 = esl_sext<64,33>(tmp_1079_fu_11853_p2.read());
}

void ShuffleNetV2::thread_tmp_1081_cast_fu_30558_p1() {
    tmp_1081_cast_fu_30558_p1 = esl_zext<8,3>(p_lshr_f23_cast_fu_30548_p4.read());
}

void ShuffleNetV2::thread_tmp_1081_fu_11771_p2() {
    tmp_1081_fu_11771_p2 = (!tmp_1065_reg_35418.read().is_01() || !tmp_359_cast_fu_11767_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_1065_reg_35418.read()) + sc_biguint<9>(tmp_359_cast_fu_11767_p1.read()));
}

void ShuffleNetV2::thread_tmp_1082_fu_11943_p2() {
    tmp_1082_fu_11943_p2 = (!tmp_1077_reg_35468.read().is_01() || !tmp_363_cast_fu_11939_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1077_reg_35468.read()) + sc_biguint<8>(tmp_363_cast_fu_11939_p1.read()));
}

void ShuffleNetV2::thread_tmp_1083_cast_fu_30868_p1() {
    tmp_1083_cast_fu_30868_p1 = esl_sext<12,8>(tmp_950_fu_30862_p2.read());
}

void ShuffleNetV2::thread_tmp_1083_fu_11989_p3() {
    tmp_1083_fu_11989_p3 = esl_concat<5,4>(co45_reg_4889.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1084_cast_fu_30906_p1() {
    tmp_1084_cast_fu_30906_p1 = esl_sext<32,8>(tmp_951_reg_42360.read());
}

void ShuffleNetV2::thread_tmp_1084_fu_12001_p3() {
    tmp_1084_fu_12001_p3 = esl_concat<5,1>(co45_reg_4889.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1085_cast_fu_10082_p1() {
    tmp_1085_cast_fu_10082_p1 = esl_zext<64,9>(tmp_794_reg_34793.read());
}

void ShuffleNetV2::thread_tmp_1085_fu_12013_p2() {
    tmp_1085_fu_12013_p2 = (!p_shl342_cast_fu_12009_p1.read().is_01() || !p_shl341_cast_fu_11997_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl342_cast_fu_12009_p1.read()) + sc_biguint<10>(p_shl341_cast_fu_11997_p1.read()));
}

void ShuffleNetV2::thread_tmp_1086_fu_12112_p3() {
    tmp_1086_fu_12112_p3 = esl_concat<5,4>(co46_reg_4922.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1087_fu_12124_p3() {
    tmp_1087_fu_12124_p3 = esl_concat<5,1>(co46_reg_4922.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1088_fu_12136_p2() {
    tmp_1088_fu_12136_p2 = (!p_shl348_cast_fu_12132_p1.read().is_01() || !p_shl347_cast_fu_12120_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl348_cast_fu_12132_p1.read()) + sc_biguint<10>(p_shl347_cast_fu_12120_p1.read()));
}

void ShuffleNetV2::thread_tmp_1089_fu_12148_p3() {
    tmp_1089_fu_12148_p3 = esl_concat<6,4>(tmp_364_fu_12142_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1090_fu_12160_p3() {
    tmp_1090_fu_12160_p3 = esl_concat<6,1>(tmp_364_fu_12142_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1091_fu_12172_p2() {
    tmp_1091_fu_12172_p2 = (!p_shl346_cast_fu_12168_p1.read().is_01() || !p_shl345_cast_fu_12156_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl346_cast_fu_12168_p1.read()) + sc_biguint<11>(p_shl345_cast_fu_12156_p1.read()));
}

void ShuffleNetV2::thread_tmp_1092_cast_fu_30241_p1() {
    tmp_1092_cast_fu_30241_p1 = esl_sext<10,8>(tmp_945_fu_30235_p2.read());
}

void ShuffleNetV2::thread_tmp_1092_fu_12035_p2() {
    tmp_1092_fu_12035_p2 = (!tmp_365_cast_fu_12031_p1.read().is_01() || !tmp_1085_reg_35537.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_365_cast_fu_12031_p1.read()) + sc_biguint<10>(tmp_1085_reg_35537.read()));
}

void ShuffleNetV2::thread_tmp_1093_cast_fu_30261_p1() {
    tmp_1093_cast_fu_30261_p1 = esl_sext<32,8>(tmp_946_reg_42138.read());
}

void ShuffleNetV2::thread_tmp_1093_fu_12040_p3() {
    tmp_1093_fu_12040_p3 = esl_concat<10,4>(tmp_1092_fu_12035_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1094_fu_12052_p3() {
    tmp_1094_fu_12052_p3 = esl_concat<10,1>(tmp_1092_fu_12035_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1095_fu_12064_p2() {
    tmp_1095_fu_12064_p2 = (!p_shl343_cast_fu_12048_p1.read().is_01() || !p_shl344_cast_fu_12060_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl343_cast_fu_12048_p1.read()) + sc_biguint<15>(p_shl344_cast_fu_12060_p1.read()));
}

void ShuffleNetV2::thread_tmp_1096_cast_fu_10285_p1() {
    tmp_1096_cast_fu_10285_p1 = esl_sext<64,8>(tmp_799_fu_10280_p2.read());
}

void ShuffleNetV2::thread_tmp_1096_fu_12321_p3() {
    tmp_1096_fu_12321_p3 = esl_concat<8,5>(tmp_366_fu_12315_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1097_fu_12333_p3() {
    tmp_1097_fu_12333_p3 = esl_concat<8,3>(tmp_366_fu_12315_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1098_fu_12345_p2() {
    tmp_1098_fu_12345_p2 = (!p_shl355_cast_fu_12329_p1.read().is_01() || !p_shl356_cast_fu_12341_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl355_cast_fu_12329_p1.read()) - sc_biguint<14>(p_shl356_cast_fu_12341_p1.read()));
}

void ShuffleNetV2::thread_tmp_1099_fu_12370_p1() {
    tmp_1099_fu_12370_p1 = co48_reg_4955.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1100_fu_12384_p3() {
    tmp_1100_fu_12384_p3 = esl_concat<2,5>(newIndex1_fu_12374_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1101_cast_cast_fu_30666_p1() {
    tmp_1101_cast_cast_fu_30666_p1 = esl_sext<11,10>(tmp_957_fu_30660_p2.read());
}

void ShuffleNetV2::thread_tmp_1101_fu_12396_p3() {
    tmp_1101_fu_12396_p3 = esl_concat<2,3>(newIndex1_fu_12374_p4.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1102_fu_12408_p2() {
    tmp_1102_fu_12408_p2 = (!p_shl353_cast_fu_12392_p1.read().is_01() || !p_shl354_cast_fu_12404_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl353_cast_fu_12392_p1.read()) - sc_biguint<8>(p_shl354_cast_fu_12404_p1.read()));
}

void ShuffleNetV2::thread_tmp_1103_fu_12351_p1() {
    tmp_1103_fu_12351_p1 = esl_sext<33,14>(tmp_1098_fu_12345_p2.read());
}

void ShuffleNetV2::thread_tmp_1104_fu_12355_p2() {
    tmp_1104_fu_12355_p2 = (!tmp_721_cast1_reg_34346.read().is_01() || !tmp_1103_fu_12351_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_721_cast1_reg_34346.read()) + sc_bigint<33>(tmp_1103_fu_12351_p1.read()));
}

void ShuffleNetV2::thread_tmp_1105_fu_12360_p1() {
    tmp_1105_fu_12360_p1 = esl_sext<64,33>(tmp_1104_fu_12355_p2.read());
}

void ShuffleNetV2::thread_tmp_1106_fu_12198_p2() {
    tmp_1106_fu_12198_p2 = (!tmp_367_cast_fu_12194_p1.read().is_01() || !tmp_1091_reg_35586.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_367_cast_fu_12194_p1.read()) + sc_biguint<11>(tmp_1091_reg_35586.read()));
}

void ShuffleNetV2::thread_tmp_1107_fu_12211_p3() {
    tmp_1107_fu_12211_p3 = esl_concat<11,1>(tmp_1106_fu_12198_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1108_fu_12223_p2() {
    tmp_1108_fu_12223_p2 = (!p_shl351_cast_fu_12203_p3.read().is_01() || !p_shl352_cast_fu_12219_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl351_cast_fu_12203_p3.read()) + sc_biguint<15>(p_shl352_cast_fu_12219_p1.read()));
}

void ShuffleNetV2::thread_tmp_1109_fu_12229_p2() {
    tmp_1109_fu_12229_p2 = (!tmp_367_cast1_fu_12190_p1.read().is_01() || !tmp_1088_reg_35581.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_367_cast1_fu_12190_p1.read()) + sc_biguint<10>(tmp_1088_reg_35581.read()));
}

void ShuffleNetV2::thread_tmp_1110_fu_12242_p3() {
    tmp_1110_fu_12242_p3 = esl_concat<10,1>(tmp_1109_fu_12229_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1111_cast_fu_31306_p1() {
    tmp_1111_cast_fu_31306_p1 = esl_zext<8,3>(p_lshr_f24_cast_fu_31296_p4.read());
}

void ShuffleNetV2::thread_tmp_1111_fu_12254_p2() {
    tmp_1111_fu_12254_p2 = (!p_shl349_cast_fu_12234_p3.read().is_01() || !p_shl350_cast_fu_12250_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl349_cast_fu_12234_p3.read()) + sc_biguint<14>(p_shl350_cast_fu_12250_p1.read()));
}

void ShuffleNetV2::thread_tmp_1112_fu_12086_p2() {
    tmp_1112_fu_12086_p2 = (!tmp_1095_reg_35550.read().is_01() || !tmp_368_cast_fu_12082_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1095_reg_35550.read()) + sc_biguint<15>(tmp_368_cast_fu_12082_p1.read()));
}

void ShuffleNetV2::thread_tmp_1114_cast_fu_31608_p1() {
    tmp_1114_cast_fu_31608_p1 = esl_sext<12,8>(tmp_972_fu_31602_p2.read());
}

void ShuffleNetV2::thread_tmp_1114_fu_12459_p3() {
    tmp_1114_fu_12459_p3 = esl_concat<4,5>(ap_const_lv4_9, tmp_1113_reg_4978.read());
}

void ShuffleNetV2::thread_tmp_1115_cast_fu_31646_p1() {
    tmp_1115_cast_fu_31646_p1 = esl_sext<32,8>(tmp_973_reg_42615.read());
}

void ShuffleNetV2::thread_tmp_1115_fu_12467_p1() {
    tmp_1115_fu_12467_p1 = esl_zext<33,9>(tmp_1114_fu_12459_p3.read());
}

void ShuffleNetV2::thread_tmp_1116_fu_12471_p2() {
    tmp_1116_fu_12471_p2 = (!tmp_1115_fu_12467_p1.read().is_01() || !tmp_720_cast1_reg_34283.read().is_01())? sc_lv<33>(): (sc_biguint<33>(tmp_1115_fu_12467_p1.read()) + sc_bigint<33>(tmp_720_cast1_reg_34283.read()));
}

void ShuffleNetV2::thread_tmp_1117_fu_12476_p1() {
    tmp_1117_fu_12476_p1 = esl_sext<64,33>(tmp_1116_fu_12471_p2.read());
}

void ShuffleNetV2::thread_tmp_1118_fu_12430_p2() {
    tmp_1118_fu_12430_p2 = (!tmp_1102_reg_35645.read().is_01() || !tmp_372_cast_fu_12426_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1102_reg_35645.read()) + sc_biguint<8>(tmp_372_cast_fu_12426_p1.read()));
}

void ShuffleNetV2::thread_tmp_1119_fu_12280_p2() {
    tmp_1119_fu_12280_p2 = (!tmp_1108_reg_35599.read().is_01() || !tmp_373_cast_fu_12276_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1108_reg_35599.read()) + sc_biguint<15>(tmp_373_cast_fu_12276_p1.read()));
}

void ShuffleNetV2::thread_tmp_1120_fu_12290_p2() {
    tmp_1120_fu_12290_p2 = (!tmp_1111_reg_35604.read().is_01() || !tmp_373_cast1_fu_12272_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1111_reg_35604.read()) + sc_biguint<14>(tmp_373_cast1_fu_12272_p1.read()));
}

void ShuffleNetV2::thread_tmp_1121_fu_12573_p2() {
    tmp_1121_fu_12573_p2 = (!tmp_720_cast1_reg_34283.read().is_01() || !ap_const_lv33_138.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_720_cast1_reg_34283.read()) + sc_biguint<33>(ap_const_lv33_138));
}

void ShuffleNetV2::thread_tmp_1122_fu_12578_p1() {
    tmp_1122_fu_12578_p1 = esl_sext<64,33>(tmp_1121_fu_12573_p2.read());
}

void ShuffleNetV2::thread_tmp_1123_fu_12507_p3() {
    tmp_1123_fu_12507_p3 = esl_concat<5,2>(co51_reg_4990.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1124_fu_12519_p2() {
    tmp_1124_fu_12519_p2 = (!p_shl358_cast_fu_12515_p1.read().is_01() || !tmp_374_cast_fu_12503_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl358_cast_fu_12515_p1.read()) - sc_biguint<8>(tmp_374_cast_fu_12503_p1.read()));
}

void ShuffleNetV2::thread_tmp_1125_fu_12545_p4() {
    tmp_1125_fu_12545_p4 = esl_concat<6,2>(esl_concat<1,5>(ap_const_lv1_1, co51_reg_4990.read()), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1126_fu_12555_p1() {
    tmp_1126_fu_12555_p1 = esl_sext<9,8>(tmp_1125_fu_12545_p4.read());
}

void ShuffleNetV2::thread_tmp_1127_cast_fu_31414_p1() {
    tmp_1127_cast_fu_31414_p1 = esl_sext<13,10>(tmp_979_fu_31408_p2.read());
}

void ShuffleNetV2::thread_tmp_1127_fu_12563_p2() {
    tmp_1127_fu_12563_p2 = (!p_shl357_cast_fu_12559_p1.read().is_01() || !tmp_376_cast_fu_12541_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl357_cast_fu_12559_p1.read()) - sc_biguint<10>(tmp_376_cast_fu_12541_p1.read()));
}

void ShuffleNetV2::thread_tmp_1128_fu_12608_p2() {
    tmp_1128_fu_12608_p2 = (!tmp_380_cast_fu_12604_p1.read().is_01() || !tmp_1283_cast_reg_35725.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_380_cast_fu_12604_p1.read()) + sc_bigint<11>(tmp_1283_cast_reg_35725.read()));
}

void ShuffleNetV2::thread_tmp_1129_fu_12617_p3() {
    tmp_1129_fu_12617_p3 = esl_concat<11,2>(tmp_1128_fu_12608_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1130_fu_12629_p2() {
    tmp_1130_fu_12629_p2 = (!p_shl213_fu_12625_p1.read().is_01() || !tmp_1284_cast_fu_12613_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl213_fu_12625_p1.read()) - sc_bigint<64>(tmp_1284_cast_fu_12613_p1.read()));
}

void ShuffleNetV2::thread_tmp_1131_cast_fu_31985_p1() {
    tmp_1131_cast_fu_31985_p1 = esl_sext<12,8>(tmp_986_fu_31979_p2.read());
}

void ShuffleNetV2::thread_tmp_1131_fu_12635_p2() {
    tmp_1131_fu_12635_p2 = (!tmp_380_cast1_fu_12600_p1.read().is_01() || !tmp_1280_cast_reg_35720.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_380_cast1_fu_12600_p1.read()) + sc_bigint<9>(tmp_1280_cast_reg_35720.read()));
}

void ShuffleNetV2::thread_tmp_1132_cast_fu_32023_p1() {
    tmp_1132_cast_fu_32023_p1 = esl_sext<32,8>(tmp_987_reg_42758.read());
}

void ShuffleNetV2::thread_tmp_1132_fu_12651_p2() {
    tmp_1132_fu_12651_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_1131_reg_35744.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1133_fu_12656_p2() {
    tmp_1133_fu_12656_p2 = (!tmp_1132_fu_12651_p2.read().is_01() || !tmp_1131_reg_35744.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_1132_fu_12651_p2.read()) - sc_biguint<9>(tmp_1131_reg_35744.read()));
}

void ShuffleNetV2::thread_tmp_1134_fu_12640_p2() {
    tmp_1134_fu_12640_p2 = (!tmp_567_reg_34387.read().is_01() || !tmp_1130_fu_12629_p2.read().is_01())? sc_lv<64>(): (sc_bigint<64>(tmp_567_reg_34387.read()) + sc_biguint<64>(tmp_1130_fu_12629_p2.read()));
}

void ShuffleNetV2::thread_tmp_1135_fu_12776_p2() {
    tmp_1135_fu_12776_p2 = (!tmp_720_cast1_reg_34283.read().is_01() || !ap_const_lv33_150.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_720_cast1_reg_34283.read()) + sc_biguint<33>(ap_const_lv33_150));
}

void ShuffleNetV2::thread_tmp_1136_fu_12781_p1() {
    tmp_1136_fu_12781_p1 = esl_sext<64,33>(tmp_1135_fu_12776_p2.read());
}

void ShuffleNetV2::thread_tmp_1137_fu_12715_p4() {
    tmp_1137_fu_12715_p4 = esl_concat<7,5>(esl_concat<2,5>(ap_const_lv2_2, co53_reg_5035.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1138_fu_12725_p1() {
    tmp_1138_fu_12725_p1 = esl_sext<13,12>(tmp_1137_fu_12715_p4.read());
}

void ShuffleNetV2::thread_tmp_1139_cast_fu_32089_p1() {
    tmp_1139_cast_fu_32089_p1 = esl_zext<8,3>(p_lshr_f25_cast_fu_32079_p4.read());
}

void ShuffleNetV2::thread_tmp_1139_fu_12733_p4() {
    tmp_1139_fu_12733_p4 = esl_concat<7,3>(esl_concat<2,5>(ap_const_lv2_2, co53_reg_5035.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1140_fu_12743_p1() {
    tmp_1140_fu_12743_p1 = esl_sext<11,10>(tmp_1139_fu_12733_p4.read());
}

void ShuffleNetV2::thread_tmp_1141_cast_fu_32391_p1() {
    tmp_1141_cast_fu_32391_p1 = esl_sext<12,8>(tmp_1003_fu_32385_p2.read());
}

void ShuffleNetV2::thread_tmp_1141_fu_12751_p2() {
    tmp_1141_fu_12751_p2 = (!p_shl363_cast_fu_12729_p1.read().is_01() || !p_shl364_cast_fu_12747_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl363_cast_fu_12729_p1.read()) - sc_biguint<14>(p_shl364_cast_fu_12747_p1.read()));
}

void ShuffleNetV2::thread_tmp_1142_cast_fu_32429_p1() {
    tmp_1142_cast_fu_32429_p1 = esl_sext<32,8>(tmp_1004_reg_42915.read());
}

void ShuffleNetV2::thread_tmp_1142_fu_12791_p1() {
    tmp_1142_fu_12791_p1 = co53_reg_5035.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1143_fu_12805_p3() {
    tmp_1143_fu_12805_p3 = esl_concat<2,5>(newIndex2_fu_12795_p4.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1144_fu_12817_p3() {
    tmp_1144_fu_12817_p3 = esl_concat<2,3>(newIndex2_fu_12795_p4.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1145_fu_12829_p2() {
    tmp_1145_fu_12829_p2 = (!p_shl361_cast_fu_12813_p1.read().is_01() || !p_shl362_cast_fu_12825_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl361_cast_fu_12813_p1.read()) - sc_biguint<8>(p_shl362_cast_fu_12825_p1.read()));
}

void ShuffleNetV2::thread_tmp_1146_fu_12757_p1() {
    tmp_1146_fu_12757_p1 = esl_sext<33,14>(tmp_1141_fu_12751_p2.read());
}

void ShuffleNetV2::thread_tmp_1147_fu_12761_p2() {
    tmp_1147_fu_12761_p2 = (!tmp_721_cast1_reg_34346.read().is_01() || !tmp_1146_fu_12757_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_721_cast1_reg_34346.read()) + sc_bigint<33>(tmp_1146_fu_12757_p1.read()));
}

void ShuffleNetV2::thread_tmp_1148_fu_12766_p1() {
    tmp_1148_fu_12766_p1 = esl_sext<64,33>(tmp_1147_fu_12761_p2.read());
}

void ShuffleNetV2::thread_tmp_1149_fu_12677_p2() {
    tmp_1149_fu_12677_p2 = (!tmp_1133_reg_35756.read().is_01() || !tmp_381_cast_fu_12673_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_1133_reg_35756.read()) + sc_biguint<9>(tmp_381_cast_fu_12673_p1.read()));
}

void ShuffleNetV2::thread_tmp_1150_cast_cast_fu_31760_p1() {
    tmp_1150_cast_cast_fu_31760_p1 = esl_sext<9,8>(tmp_998_fu_31754_p2.read());
}

void ShuffleNetV2::thread_tmp_1150_fu_12851_p2() {
    tmp_1150_fu_12851_p2 = (!tmp_1145_reg_35806.read().is_01() || !tmp_385_cast_fu_12847_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1145_reg_35806.read()) + sc_biguint<8>(tmp_385_cast_fu_12847_p1.read()));
}

void ShuffleNetV2::thread_tmp_1151_cast_fu_31780_p1() {
    tmp_1151_cast_fu_31780_p1 = esl_sext<32,8>(tmp_999_reg_42693.read());
}

void ShuffleNetV2::thread_tmp_1151_fu_12897_p3() {
    tmp_1151_fu_12897_p3 = esl_concat<5,4>(co55_reg_5070.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1152_fu_12909_p3() {
    tmp_1152_fu_12909_p3 = esl_concat<5,1>(co55_reg_5070.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1153_fu_12921_p2() {
    tmp_1153_fu_12921_p2 = (!p_shl366_cast_fu_12917_p1.read().is_01() || !p_shl365_cast_fu_12905_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl366_cast_fu_12917_p1.read()) + sc_biguint<10>(p_shl365_cast_fu_12905_p1.read()));
}

void ShuffleNetV2::thread_tmp_1154_cast_fu_31825_p1() {
    tmp_1154_cast_fu_31825_p1 = esl_sext<10,9>(tmp_1001_reg_42699.read());
}

void ShuffleNetV2::thread_tmp_1154_fu_13020_p1() {
    tmp_1154_fu_13020_p1 = co56_reg_5103.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1155_fu_12943_p2() {
    tmp_1155_fu_12943_p2 = (!tmp_387_cast_fu_12939_p1.read().is_01() || !tmp_1153_reg_35875.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_387_cast_fu_12939_p1.read()) + sc_biguint<10>(tmp_1153_reg_35875.read()));
}

void ShuffleNetV2::thread_tmp_1156_fu_12948_p3() {
    tmp_1156_fu_12948_p3 = esl_concat<10,4>(tmp_1155_fu_12943_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1157_fu_12960_p3() {
    tmp_1157_fu_12960_p3 = esl_concat<10,1>(tmp_1155_fu_12943_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1158_fu_12972_p2() {
    tmp_1158_fu_12972_p2 = (!p_shl367_cast_fu_12956_p1.read().is_01() || !p_shl368_cast_fu_12968_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl367_cast_fu_12956_p1.read()) + sc_biguint<15>(p_shl368_cast_fu_12968_p1.read()));
}

void ShuffleNetV2::thread_tmp_1159_cast_fu_32197_p1() {
    tmp_1159_cast_fu_32197_p1 = esl_sext<13,10>(tmp_1010_fu_32191_p2.read());
}

void ShuffleNetV2::thread_tmp_1159_fu_12994_p2() {
    tmp_1159_fu_12994_p2 = (!tmp_1158_reg_35888.read().is_01() || !tmp_391_cast_fu_12990_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1158_reg_35888.read()) + sc_biguint<15>(tmp_391_cast_fu_12990_p1.read()));
}

void ShuffleNetV2::thread_tmp_1160_fu_13352_p1() {
    tmp_1160_fu_13352_p1 = k_reg_5147.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1161_fu_13119_p1() {
    tmp_1161_fu_13119_p1 = i36_reg_5125.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1162_fu_13153_p1() {
    tmp_1162_fu_13153_p1 = tmp_397_fu_13147_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1163_fu_13253_p3() {
    tmp_1163_fu_13253_p3 = esl_concat<9,5>(tmp_400_reg_35965.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1164_fu_13264_p3() {
    tmp_1164_fu_13264_p3 = esl_concat<9,3>(tmp_400_reg_35965.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1165_fu_13275_p2() {
    tmp_1165_fu_13275_p2 = (!p_shl371_cast_fu_13260_p1.read().is_01() || !p_shl372_cast_fu_13271_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl371_cast_fu_13260_p1.read()) - sc_biguint<15>(p_shl372_cast_fu_13271_p1.read()));
}

void ShuffleNetV2::thread_tmp_1166_fu_13285_p2() {
    tmp_1166_fu_13285_p2 = (!tmp_390_cast_reg_35952.read().is_01() || !tmp_1320_cast_fu_13281_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_390_cast_reg_35952.read()) + sc_bigint<16>(tmp_1320_cast_fu_13281_p1.read()));
}

void ShuffleNetV2::thread_tmp_1167_fu_13222_p3() {
    tmp_1167_fu_13222_p3 = esl_concat<4,6>(tmp_401_fu_13212_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1168_fu_13230_p3() {
    tmp_1168_fu_13230_p3 = esl_concat<4,4>(tmp_401_fu_13212_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1169_cast_fu_32829_p1() {
    tmp_1169_cast_fu_32829_p1 = esl_zext<8,3>(p_lshr_f26_cast_fu_32819_p4.read());
}

void ShuffleNetV2::thread_tmp_1169_fu_13242_p2() {
    tmp_1169_fu_13242_p2 = (!tmp_1167_fu_13222_p3.read().is_01() || !p_shl370_cast_fu_13238_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1167_fu_13222_p3.read()) - sc_bigint<10>(p_shl370_cast_fu_13238_p1.read()));
}

void ShuffleNetV2::thread_tmp_1170_cast_fu_10668_p1() {
    tmp_1170_cast_fu_10668_p1 = esl_sext<64,8>(tmp_861_fu_10663_p2.read());
}

void ShuffleNetV2::thread_tmp_1170_fu_13248_p2() {
    tmp_1170_fu_13248_p2 = (!tmp_389_cast_reg_35947.read().is_01() || !tmp_1169_fu_13242_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_389_cast_reg_35947.read()) + sc_biguint<10>(tmp_1169_fu_13242_p2.read()));
}

void ShuffleNetV2::thread_tmp_1171_cast_fu_10513_p1() {
    tmp_1171_cast_fu_10513_p1 = esl_zext<64,14>(tmp_862_reg_34941.read());
}

void ShuffleNetV2::thread_tmp_1171_fu_13821_p1() {
    tmp_1171_fu_13821_p1 = co60_reg_5224.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1172_cast1_fu_10508_p1() {
    tmp_1172_cast1_fu_10508_p1 = esl_zext<64,15>(tmp_863_fu_10503_p2.read());
}

void ShuffleNetV2::thread_tmp_1172_cast_fu_33131_p1() {
    tmp_1172_cast_fu_33131_p1 = esl_sext<12,8>(tmp_1025_fu_33125_p2.read());
}

void ShuffleNetV2::thread_tmp_1172_fu_13721_p1() {
    tmp_1172_fu_13721_p1 = k8_reg_5213.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1173_cast_fu_33169_p1() {
    tmp_1173_cast_fu_33169_p1 = esl_sext<32,8>(tmp_1026_reg_43170.read());
}

void ShuffleNetV2::thread_tmp_1173_fu_13504_p1() {
    tmp_1173_fu_13504_p1 = i41_reg_5191.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1174_cast_fu_10735_p1() {
    tmp_1174_cast_fu_10735_p1 = esl_sext<9,8>(tmp_870_fu_10729_p2.read());
}

void ShuffleNetV2::thread_tmp_1174_fu_13565_p3() {
    tmp_1174_fu_13565_p3 = esl_concat<7,2>(tmp_414_reg_36130.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1175_fu_13572_p1() {
    tmp_1175_fu_13572_p1 = esl_sext<34,9>(tmp_1174_fu_13565_p3.read());
}

void ShuffleNetV2::thread_tmp_1176_fu_13580_p2() {
    tmp_1176_fu_13580_p2 = (!p_shl376_cast_fu_13576_p1.read().is_01() || !tmp_415_cast_fu_13561_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl376_cast_fu_13576_p1.read()) - sc_biguint<35>(tmp_415_cast_fu_13561_p1.read()));
}

void ShuffleNetV2::thread_tmp_1177_cast_fu_10807_p1() {
    tmp_1177_cast_fu_10807_p1 = esl_sext<64,10>(tmp_882_fu_10802_p2.read());
}

void ShuffleNetV2::thread_tmp_1177_fu_13590_p2() {
    tmp_1177_fu_13590_p2 = (!tmp_1336_cast_fu_13586_p1.read().is_01() || !tmp_402_cast_reg_36099.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1336_cast_fu_13586_p1.read()) + sc_biguint<36>(tmp_402_cast_reg_36099.read()));
}

void ShuffleNetV2::thread_tmp_1178_fu_13595_p1() {
    tmp_1178_fu_13595_p1 = tmp_1177_fu_13590_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1179_fu_13599_p1() {
    tmp_1179_fu_13599_p1 = tmp_1177_fu_13590_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1180_fu_13639_p2() {
    tmp_1180_fu_13639_p2 = (!p_shl375_cast_fu_13632_p3.read().is_01() || !tmp_1178_reg_36142.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl375_cast_fu_13632_p3.read()) - sc_biguint<10>(tmp_1178_reg_36142.read()));
}

void ShuffleNetV2::thread_tmp_1181_fu_13644_p2() {
    tmp_1181_fu_13644_p2 = (!tmp_1180_fu_13639_p2.read().is_01() || !tmp_409_cast_reg_36117.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1180_fu_13639_p2.read()) + sc_biguint<10>(tmp_409_cast_reg_36117.read()));
}

void ShuffleNetV2::thread_tmp_1182_fu_13606_p3() {
    tmp_1182_fu_13606_p3 = esl_concat<8,2>(tmp_416_reg_36136.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1183_fu_13617_p2() {
    tmp_1183_fu_13617_p2 = (!p_shl374_cast_fu_13613_p1.read().is_01() || !tmp_417_cast_fu_13603_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl374_cast_fu_13613_p1.read()) - sc_biguint<11>(tmp_417_cast_fu_13603_p1.read()));
}

void ShuffleNetV2::thread_tmp_1184_fu_13627_p2() {
    tmp_1184_fu_13627_p2 = (!tmp_1342_cast_fu_13623_p1.read().is_01() || !tmp_402_cast1_reg_36094.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1342_cast_fu_13623_p1.read()) + sc_biguint<12>(tmp_402_cast1_reg_36094.read()));
}

void ShuffleNetV2::thread_tmp_1185_cast_fu_32937_p1() {
    tmp_1185_cast_fu_32937_p1 = esl_sext<13,10>(tmp_1033_fu_32931_p2.read());
}

void ShuffleNetV2::thread_tmp_1185_fu_13652_p3() {
    tmp_1185_fu_13652_p3 = esl_concat<12,2>(tmp_1184_reg_36152.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1186_fu_13663_p2() {
    tmp_1186_fu_13663_p2 = (!p_shl219_fu_13659_p1.read().is_01() || !tmp_1343_cast_fu_13649_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl219_fu_13659_p1.read()) - sc_bigint<64>(tmp_1343_cast_fu_13649_p1.read()));
}

void ShuffleNetV2::thread_tmp_1187_fu_13669_p2() {
    tmp_1187_fu_13669_p2 = (!tmp_1186_fu_13663_p2.read().is_01() || !tmp_409_reg_36112.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1186_fu_13663_p2.read()) + sc_biguint<64>(tmp_409_reg_36112.read()));
}

void ShuffleNetV2::thread_tmp_1188_fu_14153_p1() {
    tmp_1188_fu_14153_p1 = k9_reg_5268.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1189_cast_fu_33500_p1() {
    tmp_1189_cast_fu_33500_p1 = esl_sext<12,8>(tmp_1038_fu_33494_p2.read());
}

void ShuffleNetV2::thread_tmp_1189_fu_13920_p1() {
    tmp_1189_fu_13920_p1 = i43_reg_5246.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1190_cast_fu_33538_p1() {
    tmp_1190_cast_fu_33538_p1 = esl_sext<32,8>(tmp_1039_reg_43313.read());
}

void ShuffleNetV2::thread_tmp_1190_fu_13954_p1() {
    tmp_1190_fu_13954_p1 = tmp_423_fu_13948_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1191_fu_14054_p3() {
    tmp_1191_fu_14054_p3 = esl_concat<9,5>(tmp_426_reg_36265.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1192_cast_fu_10876_p1() {
    tmp_1192_cast_fu_10876_p1 = esl_zext<64,9>(tmp_932_reg_35093.read());
}

void ShuffleNetV2::thread_tmp_1192_fu_14065_p3() {
    tmp_1192_fu_14065_p3 = esl_concat<9,3>(tmp_426_reg_36265.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1193_fu_14076_p2() {
    tmp_1193_fu_14076_p2 = (!p_shl379_cast_fu_14061_p1.read().is_01() || !p_shl380_cast_fu_14072_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl379_cast_fu_14061_p1.read()) - sc_biguint<15>(p_shl380_cast_fu_14072_p1.read()));
}

void ShuffleNetV2::thread_tmp_1194_cast_fu_11035_p1() {
    tmp_1194_cast_fu_11035_p1 = esl_sext<64,8>(tmp_949_fu_11030_p2.read());
}

void ShuffleNetV2::thread_tmp_1194_fu_14086_p2() {
    tmp_1194_fu_14086_p2 = (!tmp_412_cast_reg_36252.read().is_01() || !tmp_1355_cast_fu_14082_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_412_cast_reg_36252.read()) + sc_bigint<16>(tmp_1355_cast_fu_14082_p1.read()));
}

void ShuffleNetV2::thread_tmp_1195_fu_14023_p3() {
    tmp_1195_fu_14023_p3 = esl_concat<4,6>(tmp_427_fu_14013_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1196_fu_14031_p3() {
    tmp_1196_fu_14031_p3 = esl_concat<4,4>(tmp_427_fu_14013_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1197_cast_fu_33604_p1() {
    tmp_1197_cast_fu_33604_p1 = esl_zext<8,3>(p_lshr_f27_cast_fu_33594_p4.read());
}

void ShuffleNetV2::thread_tmp_1197_fu_14043_p2() {
    tmp_1197_fu_14043_p2 = (!tmp_1195_fu_14023_p3.read().is_01() || !p_shl378_cast_fu_14039_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1195_fu_14023_p3.read()) - sc_bigint<10>(p_shl378_cast_fu_14039_p1.read()));
}

void ShuffleNetV2::thread_tmp_1198_fu_14049_p2() {
    tmp_1198_fu_14049_p2 = (!tmp_411_cast_reg_36247.read().is_01() || !tmp_1197_fu_14043_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_411_cast_reg_36247.read()) + sc_biguint<10>(tmp_1197_fu_14043_p2.read()));
}

void ShuffleNetV2::thread_tmp_1199_cast_fu_33906_p1() {
    tmp_1199_cast_fu_33906_p1 = esl_sext<12,8>(tmp_1057_fu_33900_p2.read());
}

void ShuffleNetV2::thread_tmp_1199_fu_14618_p1() {
    tmp_1199_fu_14618_p1 = co64_reg_5345.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1200_cast_fu_33944_p1() {
    tmp_1200_cast_fu_33944_p1 = esl_sext<32,8>(tmp_1058_reg_43470.read());
}

void ShuffleNetV2::thread_tmp_1200_fu_14522_p1() {
    tmp_1200_fu_14522_p1 = k10_reg_5334.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1201_fu_14309_p1() {
    tmp_1201_fu_14309_p1 = i48_reg_5312.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1202_fu_14370_p3() {
    tmp_1202_fu_14370_p3 = esl_concat<7,2>(tmp_440_reg_36430.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1203_fu_14377_p1() {
    tmp_1203_fu_14377_p1 = esl_sext<34,9>(tmp_1202_fu_14370_p3.read());
}

void ShuffleNetV2::thread_tmp_1204_fu_14385_p2() {
    tmp_1204_fu_14385_p2 = (!p_shl384_cast_fu_14381_p1.read().is_01() || !tmp_441_cast1_fu_14366_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl384_cast_fu_14381_p1.read()) - sc_biguint<35>(tmp_441_cast1_fu_14366_p1.read()));
}

void ShuffleNetV2::thread_tmp_1205_fu_14395_p2() {
    tmp_1205_fu_14395_p2 = (!tmp_1371_cast_fu_14391_p1.read().is_01() || !tmp_428_cast_reg_36399.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1371_cast_fu_14391_p1.read()) + sc_biguint<36>(tmp_428_cast_reg_36399.read()));
}

void ShuffleNetV2::thread_tmp_1206_fu_14400_p1() {
    tmp_1206_fu_14400_p1 = tmp_1205_fu_14395_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1207_fu_14404_p1() {
    tmp_1207_fu_14404_p1 = tmp_1205_fu_14395_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1208_cast_fu_33283_p1() {
    tmp_1208_cast_fu_33283_p1 = esl_sext<11,8>(tmp_1052_fu_33277_p2.read());
}

void ShuffleNetV2::thread_tmp_1208_fu_14440_p2() {
    tmp_1208_fu_14440_p2 = (!p_shl383_cast_fu_14433_p3.read().is_01() || !tmp_1206_reg_36442.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl383_cast_fu_14433_p3.read()) - sc_biguint<10>(tmp_1206_reg_36442.read()));
}

void ShuffleNetV2::thread_tmp_1209_cast_fu_33303_p1() {
    tmp_1209_cast_fu_33303_p1 = esl_sext<32,8>(tmp_1053_reg_43248.read());
}

void ShuffleNetV2::thread_tmp_1209_fu_14445_p2() {
    tmp_1209_fu_14445_p2 = (!tmp_1208_fu_14440_p2.read().is_01() || !tmp_435_cast_reg_36417.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1208_fu_14440_p2.read()) + sc_biguint<10>(tmp_435_cast_reg_36417.read()));
}

void ShuffleNetV2::thread_tmp_1210_fu_14411_p3() {
    tmp_1210_fu_14411_p3 = esl_concat<8,2>(tmp_442_reg_36436.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1211_fu_14422_p2() {
    tmp_1211_fu_14422_p2 = (!p_shl382_cast_fu_14418_p1.read().is_01() || !tmp_443_cast_fu_14408_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl382_cast_fu_14418_p1.read()) - sc_biguint<11>(tmp_443_cast_fu_14408_p1.read()));
}

void ShuffleNetV2::thread_tmp_1212_fu_14428_p2() {
    tmp_1212_fu_14428_p2 = (!tmp_1211_fu_14422_p2.read().is_01() || !tmp_428_cast1_reg_36394.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1211_fu_14422_p2.read()) + sc_biguint<11>(tmp_428_cast1_reg_36394.read()));
}

void ShuffleNetV2::thread_tmp_1213_fu_14453_p3() {
    tmp_1213_fu_14453_p3 = esl_concat<11,2>(tmp_1212_reg_36452.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1214_fu_14464_p2() {
    tmp_1214_fu_14464_p2 = (!p_shl221_fu_14460_p1.read().is_01() || !tmp_1378_cast_fu_14450_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl221_fu_14460_p1.read()) - sc_bigint<64>(tmp_1378_cast_fu_14450_p1.read()));
}

void ShuffleNetV2::thread_tmp_1215_fu_14470_p2() {
    tmp_1215_fu_14470_p2 = (!tmp_1214_fu_14464_p2.read().is_01() || !tmp_435_reg_36412.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1214_fu_14464_p2.read()) + sc_biguint<64>(tmp_435_reg_36412.read()));
}

void ShuffleNetV2::thread_tmp_1216_fu_15050_p3() {
    tmp_1216_fu_15050_p3 = esl_concat<6,3>(co66_reg_5400.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1217_cast_fu_33712_p1() {
    tmp_1217_cast_fu_33712_p1 = esl_sext<13,10>(tmp_1064_fu_33706_p2.read());
}

void ShuffleNetV2::thread_tmp_1217_fu_15062_p3() {
    tmp_1217_fu_15062_p3 = esl_concat<6,1>(co66_reg_5400.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1218_fu_15074_p2() {
    tmp_1218_fu_15074_p2 = (!p_shl392_cast_fu_15070_p1.read().is_01() || !p_shl391_cast_fu_15058_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl392_cast_fu_15070_p1.read()) + sc_biguint<10>(p_shl391_cast_fu_15058_p1.read()));
}

void ShuffleNetV2::thread_tmp_1219_fu_15086_p3() {
    tmp_1219_fu_15086_p3 = esl_concat<7,3>(tmp_444_fu_15080_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1220_fu_15098_p3() {
    tmp_1220_fu_15098_p3 = esl_concat<7,1>(tmp_444_fu_15080_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1221_fu_15110_p2() {
    tmp_1221_fu_15110_p2 = (!p_shl390_cast_fu_15106_p1.read().is_01() || !p_shl389_cast_fu_15094_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl390_cast_fu_15106_p1.read()) + sc_biguint<11>(p_shl389_cast_fu_15094_p1.read()));
}

void ShuffleNetV2::thread_tmp_1222_cast_fu_11209_p1() {
    tmp_1222_cast_fu_11209_p1 = esl_zext<64,15>(tmp_1024_fu_11204_p2.read());
}

void ShuffleNetV2::thread_tmp_1222_fu_14954_p1() {
    tmp_1222_fu_14954_p1 = k12_reg_5389.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1223_fu_14717_p1() {
    tmp_1223_fu_14717_p1 = i50_reg_5367.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1224_cast_fu_11568_p1() {
    tmp_1224_cast_fu_11568_p1 = esl_sext<64,8>(tmp_1029_fu_11563_p2.read());
}

void ShuffleNetV2::thread_tmp_1224_fu_14751_p1() {
    tmp_1224_fu_14751_p1 = tmp_450_fu_14745_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1225_cast_fu_11413_p1() {
    tmp_1225_cast_fu_11413_p1 = esl_zext<64,14>(tmp_1031_reg_35279.read());
}

void ShuffleNetV2::thread_tmp_1225_fu_14855_p3() {
    tmp_1225_fu_14855_p3 = esl_concat<10,5>(tmp_453_reg_36565.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1226_cast_fu_11408_p1() {
    tmp_1226_cast_fu_11408_p1 = esl_zext<64,15>(tmp_1036_fu_11403_p2.read());
}

void ShuffleNetV2::thread_tmp_1226_fu_14866_p3() {
    tmp_1226_fu_14866_p3 = esl_concat<10,3>(tmp_453_reg_36565.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1227_fu_14877_p2() {
    tmp_1227_fu_14877_p2 = (!p_shl387_cast_fu_14862_p1.read().is_01() || !p_shl388_cast_fu_14873_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl387_cast_fu_14862_p1.read()) - sc_biguint<16>(p_shl388_cast_fu_14873_p1.read()));
}

void ShuffleNetV2::thread_tmp_1228_cast_fu_11635_p1() {
    tmp_1228_cast_fu_11635_p1 = esl_sext<9,8>(tmp_1045_fu_11629_p2.read());
}

void ShuffleNetV2::thread_tmp_1228_fu_14887_p2() {
    tmp_1228_fu_14887_p2 = (!tmp_438_cast_reg_36552.read().is_01() || !tmp_1396_cast_fu_14883_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_438_cast_reg_36552.read()) + sc_bigint<17>(tmp_1396_cast_fu_14883_p1.read()));
}

void ShuffleNetV2::thread_tmp_1229_fu_14824_p3() {
    tmp_1229_fu_14824_p3 = esl_concat<4,6>(tmp_454_fu_14814_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1230_fu_14832_p3() {
    tmp_1230_fu_14832_p3 = esl_concat<4,4>(tmp_454_fu_14814_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1231_cast_fu_11707_p1() {
    tmp_1231_cast_fu_11707_p1 = esl_sext<64,10>(tmp_1050_fu_11702_p2.read());
}

void ShuffleNetV2::thread_tmp_1231_fu_14844_p2() {
    tmp_1231_fu_14844_p2 = (!tmp_1229_fu_14824_p3.read().is_01() || !p_shl386_cast_fu_14840_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1229_fu_14824_p3.read()) - sc_bigint<10>(p_shl386_cast_fu_14840_p1.read()));
}

void ShuffleNetV2::thread_tmp_1232_fu_14850_p2() {
    tmp_1232_fu_14850_p2 = (!tmp_437_cast_reg_36547.read().is_01() || !tmp_1231_fu_14844_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_437_cast_reg_36547.read()) + sc_biguint<10>(tmp_1231_fu_14844_p2.read()));
}

void ShuffleNetV2::thread_tmp_1233_fu_15261_p1() {
    tmp_1233_fu_15261_p1 = co68_reg_5433.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1234_fu_15136_p2() {
    tmp_1234_fu_15136_p2 = (!tmp_456_cast1_fu_15132_p1.read().is_01() || !tmp_1221_reg_36681.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_456_cast1_fu_15132_p1.read()) + sc_biguint<11>(tmp_1221_reg_36681.read()));
}

void ShuffleNetV2::thread_tmp_1235_fu_15141_p3() {
    tmp_1235_fu_15141_p3 = esl_concat<11,3>(tmp_1234_fu_15136_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1236_fu_15153_p3() {
    tmp_1236_fu_15153_p3 = esl_concat<11,1>(tmp_1234_fu_15136_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1237_fu_15165_p2() {
    tmp_1237_fu_15165_p2 = (!p_shl395_cast_fu_15149_p1.read().is_01() || !p_shl396_cast_fu_15161_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl395_cast_fu_15149_p1.read()) + sc_biguint<15>(p_shl396_cast_fu_15161_p1.read()));
}

void ShuffleNetV2::thread_tmp_1238_fu_15171_p2() {
    tmp_1238_fu_15171_p2 = (!tmp_456_cast_fu_15128_p1.read().is_01() || !tmp_1218_reg_36676.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_456_cast_fu_15128_p1.read()) + sc_biguint<10>(tmp_1218_reg_36676.read()));
}

void ShuffleNetV2::thread_tmp_1239_fu_15176_p3() {
    tmp_1239_fu_15176_p3 = esl_concat<10,3>(tmp_1238_fu_15171_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1240_fu_15188_p3() {
    tmp_1240_fu_15188_p3 = esl_concat<10,1>(tmp_1238_fu_15171_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1241_fu_15200_p2() {
    tmp_1241_fu_15200_p2 = (!p_shl393_cast_fu_15184_p1.read().is_01() || !p_shl394_cast_fu_15196_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl393_cast_fu_15184_p1.read()) + sc_biguint<14>(p_shl394_cast_fu_15196_p1.read()));
}

void ShuffleNetV2::thread_tmp_1242_fu_15226_p2() {
    tmp_1242_fu_15226_p2 = (!tmp_1237_reg_36694.read().is_01() || !tmp_460_cast2_fu_15222_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1237_reg_36694.read()) + sc_biguint<15>(tmp_460_cast2_fu_15222_p1.read()));
}

void ShuffleNetV2::thread_tmp_1243_fu_15236_p2() {
    tmp_1243_fu_15236_p2 = (!tmp_1241_reg_36699.read().is_01() || !tmp_460_cast1_fu_15218_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1241_reg_36699.read()) + sc_biguint<14>(tmp_460_cast1_fu_15218_p1.read()));
}

void ShuffleNetV2::thread_tmp_1244_cast_fu_11776_p1() {
    tmp_1244_cast_fu_11776_p1 = esl_zext<64,9>(tmp_1081_reg_35431.read());
}

void ShuffleNetV2::thread_tmp_1244_fu_15593_p1() {
    tmp_1244_fu_15593_p1 = k14_reg_5477.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1245_fu_15360_p1() {
    tmp_1245_fu_15360_p1 = i54_reg_5455.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1246_cast_fu_11948_p1() {
    tmp_1246_cast_fu_11948_p1 = esl_sext<64,8>(tmp_1082_fu_11943_p2.read());
}

void ShuffleNetV2::thread_tmp_1246_fu_15394_p1() {
    tmp_1246_fu_15394_p1 = tmp_466_fu_15388_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1247_fu_15494_p3() {
    tmp_1247_fu_15494_p3 = esl_concat<10,5>(tmp_469_reg_36776.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1248_fu_15505_p3() {
    tmp_1248_fu_15505_p3 = esl_concat<10,3>(tmp_469_reg_36776.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1249_fu_15516_p2() {
    tmp_1249_fu_15516_p2 = (!p_shl399_cast_fu_15501_p1.read().is_01() || !p_shl400_cast_fu_15512_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl399_cast_fu_15501_p1.read()) - sc_biguint<16>(p_shl400_cast_fu_15512_p1.read()));
}

void ShuffleNetV2::thread_tmp_1250_fu_15526_p2() {
    tmp_1250_fu_15526_p2 = (!tmp_459_cast1_reg_36763.read().is_01() || !tmp_1424_cast_fu_15522_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_459_cast1_reg_36763.read()) + sc_bigint<17>(tmp_1424_cast_fu_15522_p1.read()));
}

void ShuffleNetV2::thread_tmp_1251_fu_15463_p3() {
    tmp_1251_fu_15463_p3 = esl_concat<4,6>(tmp_470_fu_15453_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1252_fu_15471_p3() {
    tmp_1252_fu_15471_p3 = esl_concat<4,4>(tmp_470_fu_15453_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1253_fu_15483_p2() {
    tmp_1253_fu_15483_p2 = (!tmp_1251_fu_15463_p3.read().is_01() || !p_shl398_cast_fu_15479_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1251_fu_15463_p3.read()) - sc_bigint<10>(p_shl398_cast_fu_15479_p1.read()));
}

void ShuffleNetV2::thread_tmp_1254_fu_15489_p2() {
    tmp_1254_fu_15489_p2 = (!tmp_458_cast_reg_36758.read().is_01() || !tmp_1253_fu_15483_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_458_cast_reg_36758.read()) + sc_biguint<10>(tmp_1253_fu_15483_p2.read()));
}

void ShuffleNetV2::thread_tmp_1255_fu_16062_p1() {
    tmp_1255_fu_16062_p1 = co72_reg_5554.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1256_fu_15966_p1() {
    tmp_1256_fu_15966_p1 = k16_reg_5543.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1257_fu_15745_p1() {
    tmp_1257_fu_15745_p1 = i59_reg_5521.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1258_fu_15810_p3() {
    tmp_1258_fu_15810_p3 = esl_concat<7,2>(tmp_483_reg_36941.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1259_fu_15817_p1() {
    tmp_1259_fu_15817_p1 = esl_sext<34,9>(tmp_1258_fu_15810_p3.read());
}

void ShuffleNetV2::thread_tmp_1260_fu_15825_p2() {
    tmp_1260_fu_15825_p2 = (!p_shl404_cast_fu_15821_p1.read().is_01() || !tmp_484_cast_fu_15806_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl404_cast_fu_15821_p1.read()) - sc_biguint<35>(tmp_484_cast_fu_15806_p1.read()));
}

void ShuffleNetV2::thread_tmp_1261_fu_15835_p2() {
    tmp_1261_fu_15835_p2 = (!tmp_1440_cast_fu_15831_p1.read().is_01() || !tmp_471_cast_reg_36910.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1440_cast_fu_15831_p1.read()) + sc_biguint<36>(tmp_471_cast_reg_36910.read()));
}

void ShuffleNetV2::thread_tmp_1262_fu_15840_p1() {
    tmp_1262_fu_15840_p1 = tmp_1261_fu_15835_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1263_fu_15844_p1() {
    tmp_1263_fu_15844_p1 = tmp_1261_fu_15835_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1264_fu_15884_p2() {
    tmp_1264_fu_15884_p2 = (!p_shl403_cast_fu_15877_p3.read().is_01() || !tmp_1262_reg_36953.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl403_cast_fu_15877_p3.read()) - sc_biguint<10>(tmp_1262_reg_36953.read()));
}

void ShuffleNetV2::thread_tmp_1265_fu_15889_p2() {
    tmp_1265_fu_15889_p2 = (!tmp_1264_fu_15884_p2.read().is_01() || !tmp_478_cast_reg_36928.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1264_fu_15884_p2.read()) + sc_biguint<10>(tmp_478_cast_reg_36928.read()));
}

void ShuffleNetV2::thread_tmp_1266_fu_15851_p3() {
    tmp_1266_fu_15851_p3 = esl_concat<9,2>(tmp_485_reg_36947.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1267_fu_15862_p2() {
    tmp_1267_fu_15862_p2 = (!p_shl402_cast_fu_15858_p1.read().is_01() || !tmp_486_cast_fu_15848_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl402_cast_fu_15858_p1.read()) - sc_biguint<12>(tmp_486_cast_fu_15848_p1.read()));
}

void ShuffleNetV2::thread_tmp_1268_fu_15872_p2() {
    tmp_1268_fu_15872_p2 = (!tmp_1446_cast_fu_15868_p1.read().is_01() || !tmp_471_cast1_reg_36905.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1446_cast_fu_15868_p1.read()) + sc_biguint<13>(tmp_471_cast1_reg_36905.read()));
}

void ShuffleNetV2::thread_tmp_1269_fu_15897_p3() {
    tmp_1269_fu_15897_p3 = esl_concat<13,2>(tmp_1268_reg_36963.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1270_fu_15908_p2() {
    tmp_1270_fu_15908_p2 = (!p_shl226_fu_15904_p1.read().is_01() || !tmp_1447_cast_fu_15894_p1.read().is_01())? sc_lv<64>(): (sc_bigint<64>(p_shl226_fu_15904_p1.read()) - sc_bigint<64>(tmp_1447_cast_fu_15894_p1.read()));
}

void ShuffleNetV2::thread_tmp_1271_fu_15914_p2() {
    tmp_1271_fu_15914_p2 = (!tmp_1270_fu_15908_p2.read().is_01() || !tmp_478_reg_36923.read().is_01())? sc_lv<64>(): (sc_biguint<64>(tmp_1270_fu_15908_p2.read()) + sc_biguint<64>(tmp_478_reg_36923.read()));
}

void ShuffleNetV2::thread_tmp_1272_fu_16486_p3() {
    tmp_1272_fu_16486_p3 = esl_concat<6,3>(co74_reg_5609.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1273_fu_16498_p3() {
    tmp_1273_fu_16498_p3 = esl_concat<6,1>(co74_reg_5609.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1274_cast_fu_12091_p1() {
    tmp_1274_cast_fu_12091_p1 = esl_zext<64,15>(tmp_1112_fu_12086_p2.read());
}

void ShuffleNetV2::thread_tmp_1274_fu_16510_p2() {
    tmp_1274_fu_16510_p2 = (!p_shl410_cast_fu_16506_p1.read().is_01() || !p_shl409_cast_fu_16494_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl410_cast_fu_16506_p1.read()) + sc_biguint<10>(p_shl409_cast_fu_16494_p1.read()));
}

void ShuffleNetV2::thread_tmp_1275_fu_16394_p1() {
    tmp_1275_fu_16394_p1 = k18_reg_5598.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1276_cast_fu_12435_p1() {
    tmp_1276_cast_fu_12435_p1 = esl_sext<64,8>(tmp_1118_fu_12430_p2.read());
}

void ShuffleNetV2::thread_tmp_1276_fu_16161_p1() {
    tmp_1276_fu_16161_p1 = i61_reg_5576.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1277_cast_fu_12285_p1() {
    tmp_1277_cast_fu_12285_p1 = esl_zext<64,15>(tmp_1119_fu_12280_p2.read());
}

void ShuffleNetV2::thread_tmp_1277_fu_16195_p1() {
    tmp_1277_fu_16195_p1 = tmp_492_fu_16189_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1278_cast_fu_12295_p1() {
    tmp_1278_cast_fu_12295_p1 = esl_zext<64,14>(tmp_1120_reg_35622.read());
}

void ShuffleNetV2::thread_tmp_1278_fu_16295_p3() {
    tmp_1278_fu_16295_p3 = esl_concat<10,5>(tmp_495_reg_37076.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1279_fu_16306_p3() {
    tmp_1279_fu_16306_p3 = esl_concat<10,3>(tmp_495_reg_37076.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1280_cast_fu_12525_p1() {
    tmp_1280_cast_fu_12525_p1 = esl_sext<9,8>(tmp_1124_fu_12519_p2.read());
}

void ShuffleNetV2::thread_tmp_1280_fu_16317_p2() {
    tmp_1280_fu_16317_p2 = (!p_shl407_cast_fu_16302_p1.read().is_01() || !p_shl408_cast_fu_16313_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl407_cast_fu_16302_p1.read()) - sc_biguint<16>(p_shl408_cast_fu_16313_p1.read()));
}

void ShuffleNetV2::thread_tmp_1281_fu_16327_p2() {
    tmp_1281_fu_16327_p2 = (!tmp_481_cast_reg_37063.read().is_01() || !tmp_1462_cast_fu_16323_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_481_cast_reg_37063.read()) + sc_bigint<17>(tmp_1462_cast_fu_16323_p1.read()));
}

void ShuffleNetV2::thread_tmp_1282_fu_16264_p3() {
    tmp_1282_fu_16264_p3 = esl_concat<4,6>(tmp_496_fu_16254_p4.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1283_cast_fu_12569_p1() {
    tmp_1283_cast_fu_12569_p1 = esl_sext<11,10>(tmp_1127_fu_12563_p2.read());
}

void ShuffleNetV2::thread_tmp_1283_fu_16272_p3() {
    tmp_1283_fu_16272_p3 = esl_concat<4,4>(tmp_496_fu_16254_p4.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1284_cast_fu_12613_p1() {
    tmp_1284_cast_fu_12613_p1 = esl_sext<64,11>(tmp_1128_fu_12608_p2.read());
}

void ShuffleNetV2::thread_tmp_1284_fu_16284_p2() {
    tmp_1284_fu_16284_p2 = (!tmp_1282_fu_16264_p3.read().is_01() || !p_shl406_cast_fu_16280_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1282_fu_16264_p3.read()) - sc_bigint<10>(p_shl406_cast_fu_16280_p1.read()));
}

void ShuffleNetV2::thread_tmp_1285_fu_16290_p2() {
    tmp_1285_fu_16290_p2 = (!tmp_480_cast1_reg_37058.read().is_01() || !tmp_1284_fu_16284_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_480_cast1_reg_37058.read()) + sc_biguint<10>(tmp_1284_fu_16284_p2.read()));
}

void ShuffleNetV2::thread_tmp_1286_fu_16609_p3() {
    tmp_1286_fu_16609_p3 = esl_concat<6,3>(co76_reg_5642.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1287_fu_16621_p3() {
    tmp_1287_fu_16621_p3 = esl_concat<6,1>(co76_reg_5642.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1288_fu_16633_p2() {
    tmp_1288_fu_16633_p2 = (!p_shl416_cast_fu_16629_p1.read().is_01() || !p_shl415_cast_fu_16617_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl416_cast_fu_16629_p1.read()) + sc_biguint<10>(p_shl415_cast_fu_16617_p1.read()));
}

void ShuffleNetV2::thread_tmp_1289_fu_16645_p3() {
    tmp_1289_fu_16645_p3 = esl_concat<7,3>(tmp_497_fu_16639_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1290_fu_16657_p3() {
    tmp_1290_fu_16657_p3 = esl_concat<7,1>(tmp_497_fu_16639_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1291_fu_16669_p2() {
    tmp_1291_fu_16669_p2 = (!p_shl414_cast_fu_16665_p1.read().is_01() || !p_shl413_cast_fu_16653_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl414_cast_fu_16665_p1.read()) + sc_biguint<11>(p_shl413_cast_fu_16653_p1.read()));
}

void ShuffleNetV2::thread_tmp_1292_fu_16532_p2() {
    tmp_1292_fu_16532_p2 = (!tmp_498_cast_fu_16528_p1.read().is_01() || !tmp_1274_reg_37187.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_498_cast_fu_16528_p1.read()) + sc_biguint<10>(tmp_1274_reg_37187.read()));
}

void ShuffleNetV2::thread_tmp_1293_fu_16537_p3() {
    tmp_1293_fu_16537_p3 = esl_concat<10,3>(tmp_1292_fu_16532_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1294_fu_16549_p3() {
    tmp_1294_fu_16549_p3 = esl_concat<10,1>(tmp_1292_fu_16532_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1295_fu_16561_p2() {
    tmp_1295_fu_16561_p2 = (!p_shl411_cast_fu_16545_p1.read().is_01() || !p_shl412_cast_fu_16557_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl411_cast_fu_16545_p1.read()) + sc_biguint<15>(p_shl412_cast_fu_16557_p1.read()));
}

void ShuffleNetV2::thread_tmp_1296_fu_16820_p1() {
    tmp_1296_fu_16820_p1 = co78_reg_5675.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1297_fu_16695_p2() {
    tmp_1297_fu_16695_p2 = (!tmp_500_cast_fu_16691_p1.read().is_01() || !tmp_1291_reg_37236.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_500_cast_fu_16691_p1.read()) + sc_biguint<11>(tmp_1291_reg_37236.read()));
}

void ShuffleNetV2::thread_tmp_1298_fu_16700_p3() {
    tmp_1298_fu_16700_p3 = esl_concat<11,3>(tmp_1297_fu_16695_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1299_cast_fu_12682_p1() {
    tmp_1299_cast_fu_12682_p1 = esl_zext<64,9>(tmp_1149_reg_35769.read());
}

void ShuffleNetV2::thread_tmp_1299_fu_16712_p3() {
    tmp_1299_fu_16712_p3 = esl_concat<11,1>(tmp_1297_fu_16695_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1300_fu_16724_p2() {
    tmp_1300_fu_16724_p2 = (!p_shl419_cast_fu_16708_p1.read().is_01() || !p_shl420_cast_fu_16720_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl419_cast_fu_16708_p1.read()) + sc_biguint<15>(p_shl420_cast_fu_16720_p1.read()));
}

void ShuffleNetV2::thread_tmp_1301_cast_fu_12856_p1() {
    tmp_1301_cast_fu_12856_p1 = esl_sext<64,8>(tmp_1150_fu_12851_p2.read());
}

void ShuffleNetV2::thread_tmp_1301_fu_16730_p2() {
    tmp_1301_fu_16730_p2 = (!tmp_500_cast1_fu_16687_p1.read().is_01() || !tmp_1288_reg_37231.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_500_cast1_fu_16687_p1.read()) + sc_biguint<10>(tmp_1288_reg_37231.read()));
}

void ShuffleNetV2::thread_tmp_1302_fu_16735_p3() {
    tmp_1302_fu_16735_p3 = esl_concat<10,3>(tmp_1301_fu_16730_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1303_fu_16747_p3() {
    tmp_1303_fu_16747_p3 = esl_concat<10,1>(tmp_1301_fu_16730_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1304_fu_16759_p2() {
    tmp_1304_fu_16759_p2 = (!p_shl417_cast_fu_16743_p1.read().is_01() || !p_shl418_cast_fu_16755_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl417_cast_fu_16743_p1.read()) + sc_biguint<14>(p_shl418_cast_fu_16755_p1.read()));
}

void ShuffleNetV2::thread_tmp_1305_fu_16583_p2() {
    tmp_1305_fu_16583_p2 = (!tmp_1295_reg_37200.read().is_01() || !tmp_501_cast_fu_16579_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1295_reg_37200.read()) + sc_biguint<15>(tmp_501_cast_fu_16579_p1.read()));
}

void ShuffleNetV2::thread_tmp_1306_fu_16785_p2() {
    tmp_1306_fu_16785_p2 = (!tmp_1300_reg_37249.read().is_01() || !tmp_505_cast2_fu_16781_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1300_reg_37249.read()) + sc_biguint<15>(tmp_505_cast2_fu_16781_p1.read()));
}

void ShuffleNetV2::thread_tmp_1307_fu_16795_p2() {
    tmp_1307_fu_16795_p2 = (!tmp_1304_reg_37254.read().is_01() || !tmp_505_cast1_fu_16777_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1304_reg_37254.read()) + sc_biguint<14>(tmp_505_cast1_fu_16777_p1.read()));
}

void ShuffleNetV2::thread_tmp_1308_fu_17152_p1() {
    tmp_1308_fu_17152_p1 = k20_reg_5719.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1309_fu_16919_p1() {
    tmp_1309_fu_16919_p1 = i65_reg_5697.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1310_fu_16953_p1() {
    tmp_1310_fu_16953_p1 = tmp_511_fu_16947_p2.read().range(3-1, 0);
}

void ShuffleNetV2::thread_tmp_1311_cast_fu_12999_p1() {
    tmp_1311_cast_fu_12999_p1 = esl_zext<64,15>(tmp_1159_fu_12994_p2.read());
}

}

