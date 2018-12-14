#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_p_shl215_cast_fu_24301_p1() {
    p_shl215_cast_fu_24301_p1 = esl_zext<8,5>(p_shl212_fu_24293_p3.read());
}

void ShuffleNetV2::thread_p_shl215_fu_24494_p3() {
    p_shl215_fu_24494_p3 = esl_concat<2,5>(tmp_1293_fu_24490_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl216_cast_fu_23733_p1() {
    p_shl216_cast_fu_23733_p1 = esl_zext<8,7>(p_shl209_fu_23725_p3.read());
}

void ShuffleNetV2::thread_p_shl216_fu_24764_p3() {
    p_shl216_fu_24764_p3 = esl_concat<2,5>(tmp_1299_fu_24760_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl217_cast_fu_23745_p1() {
    p_shl217_cast_fu_23745_p1 = esl_zext<8,5>(p_shl210_fu_23737_p3.read());
}

void ShuffleNetV2::thread_p_shl217_fu_24776_p3() {
    p_shl217_fu_24776_p3 = esl_concat<2,3>(tmp_1299_fu_24760_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl218_cast_fu_24502_p1() {
    p_shl218_cast_fu_24502_p1 = esl_zext<8,7>(p_shl215_fu_24494_p3.read());
}

void ShuffleNetV2::thread_p_shl218_fu_24581_p3() {
    p_shl218_fu_24581_p3 = esl_concat<4,5>(tmp_1300_fu_24577_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl219_cast_fu_24512_p1() {
    p_shl219_cast_fu_24512_p1 = esl_zext<8,5>(tmp_1294_fu_24506_p2.read());
}

void ShuffleNetV2::thread_p_shl219_fu_24593_p3() {
    p_shl219_fu_24593_p3 = esl_concat<4,3>(tmp_1300_fu_24577_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl21_cast_fu_11777_p1() {
    p_shl21_cast_fu_11777_p1 = esl_zext<7,4>(p_shl21_fu_11769_p3.read());
}

void ShuffleNetV2::thread_p_shl21_fu_11769_p3() {
    p_shl21_fu_11769_p3 = esl_concat<1,3>(tmp_160_fu_11753_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl220_cast_fu_24106_p1() {
    p_shl220_cast_fu_24106_p1 = esl_zext<10,9>(p_shl213_fu_24098_p3.read());
}

void ShuffleNetV2::thread_p_shl220_fu_25188_p3() {
    p_shl220_fu_25188_p3 = esl_concat<2,5>(tmp_1310_fu_25184_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl221_cast1_fu_24118_p1() {
    p_shl221_cast1_fu_24118_p1 = esl_zext<8,7>(p_shl214_fu_24110_p3.read());
}

void ShuffleNetV2::thread_p_shl221_cast_fu_24122_p1() {
    p_shl221_cast_fu_24122_p1 = esl_zext<10,7>(p_shl214_fu_24110_p3.read());
}

void ShuffleNetV2::thread_p_shl221_fu_25106_p3() {
    p_shl221_fu_25106_p3 = esl_concat<2,5>(tmp_1312_fu_25102_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl222_cast_fu_24153_p1() {
    p_shl222_cast_fu_24153_p1 = esl_zext<8,5>(tmp_1288_fu_24147_p2.read());
}

void ShuffleNetV2::thread_p_shl222_fu_25118_p3() {
    p_shl222_fu_25118_p3 = esl_concat<2,3>(tmp_1312_fu_25102_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl223_cast_fu_24772_p1() {
    p_shl223_cast_fu_24772_p1 = esl_zext<8,7>(p_shl216_fu_24764_p3.read());
}

void ShuffleNetV2::thread_p_shl223_fu_24902_p3() {
    p_shl223_fu_24902_p3 = esl_concat<2,5>(tmp_1313_fu_24898_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl224_cast_fu_24784_p1() {
    p_shl224_cast_fu_24784_p1 = esl_zext<8,5>(p_shl217_fu_24776_p3.read());
}

void ShuffleNetV2::thread_p_shl224_fu_24914_p3() {
    p_shl224_fu_24914_p3 = esl_concat<2,3>(tmp_1313_fu_24898_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl225_cast_fu_24589_p1() {
    p_shl225_cast_fu_24589_p1 = esl_zext<10,9>(p_shl218_fu_24581_p3.read());
}

void ShuffleNetV2::thread_p_shl225_fu_25466_p3() {
    p_shl225_fu_25466_p3 = esl_concat<2,5>(tmp_1328_fu_25462_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl226_cast1_fu_24601_p1() {
    p_shl226_cast1_fu_24601_p1 = esl_zext<8,7>(p_shl219_fu_24593_p3.read());
}

void ShuffleNetV2::thread_p_shl226_cast_fu_24605_p1() {
    p_shl226_cast_fu_24605_p1 = esl_zext<10,7>(p_shl219_fu_24593_p3.read());
}

void ShuffleNetV2::thread_p_shl226_fu_25478_p3() {
    p_shl226_fu_25478_p3 = esl_concat<2,3>(tmp_1328_fu_25462_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl227_cast_fu_24636_p1() {
    p_shl227_cast_fu_24636_p1 = esl_zext<8,5>(tmp_1305_fu_24630_p2.read());
}

void ShuffleNetV2::thread_p_shl227_fu_25275_p3() {
    p_shl227_fu_25275_p3 = esl_concat<4,5>(tmp_1329_fu_25271_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl228_cast_fu_25114_p1() {
    p_shl228_cast_fu_25114_p1 = esl_zext<8,7>(p_shl221_fu_25106_p3.read());
}

void ShuffleNetV2::thread_p_shl228_fu_25287_p3() {
    p_shl228_fu_25287_p3 = esl_concat<4,3>(tmp_1329_fu_25271_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl229_cast_fu_25126_p1() {
    p_shl229_cast_fu_25126_p1 = esl_zext<8,5>(p_shl222_fu_25118_p3.read());
}

void ShuffleNetV2::thread_p_shl229_fu_25762_p3() {
    p_shl229_fu_25762_p3 = esl_concat<2,5>(tmp_1345_fu_25758_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl22_cast_fu_11847_p1() {
    p_shl22_cast_fu_11847_p1 = esl_zext<7,6>(p_shl22_fu_11839_p3.read());
}

void ShuffleNetV2::thread_p_shl22_fu_11839_p3() {
    p_shl22_fu_11839_p3 = esl_concat<1,5>(tmp_157_fu_11835_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl230_cast_fu_25196_p1() {
    p_shl230_cast_fu_25196_p1 = esl_zext<8,7>(p_shl220_fu_25188_p3.read());
}

void ShuffleNetV2::thread_p_shl230_fu_26028_p3() {
    p_shl230_fu_26028_p3 = esl_concat<2,5>(tmp_1352_fu_26024_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl231_cast_fu_25206_p1() {
    p_shl231_cast_fu_25206_p1 = esl_zext<8,5>(tmp_1311_fu_25200_p2.read());
}

void ShuffleNetV2::thread_p_shl231_fu_26040_p3() {
    p_shl231_fu_26040_p3 = esl_concat<2,3>(tmp_1352_fu_26024_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl232_cast_fu_25474_p1() {
    p_shl232_cast_fu_25474_p1 = esl_zext<8,7>(p_shl225_fu_25466_p3.read());
}

void ShuffleNetV2::thread_p_shl232_fu_25849_p3() {
    p_shl232_fu_25849_p3 = esl_concat<4,5>(tmp_1353_fu_25845_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl233_cast_fu_25486_p1() {
    p_shl233_cast_fu_25486_p1 = esl_zext<8,5>(p_shl226_fu_25478_p3.read());
}

void ShuffleNetV2::thread_p_shl233_fu_25861_p3() {
    p_shl233_fu_25861_p3 = esl_concat<4,3>(tmp_1353_fu_25845_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl234_cast_fu_24910_p1() {
    p_shl234_cast_fu_24910_p1 = esl_zext<8,7>(p_shl223_fu_24902_p3.read());
}

void ShuffleNetV2::thread_p_shl234_fu_26468_p3() {
    p_shl234_fu_26468_p3 = esl_concat<2,5>(tmp_1363_fu_26464_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl235_cast_fu_24922_p1() {
    p_shl235_cast_fu_24922_p1 = esl_zext<8,5>(p_shl224_fu_24914_p3.read());
}

void ShuffleNetV2::thread_p_shl235_fu_26386_p3() {
    p_shl235_fu_26386_p3 = esl_concat<2,5>(tmp_1365_fu_26382_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl236_cast_fu_25283_p1() {
    p_shl236_cast_fu_25283_p1 = esl_zext<10,9>(p_shl227_fu_25275_p3.read());
}

void ShuffleNetV2::thread_p_shl236_fu_26398_p3() {
    p_shl236_fu_26398_p3 = esl_concat<2,3>(tmp_1365_fu_26382_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl237_cast1_fu_25295_p1() {
    p_shl237_cast1_fu_25295_p1 = esl_zext<8,7>(p_shl228_fu_25287_p3.read());
}

void ShuffleNetV2::thread_p_shl237_cast_fu_25299_p1() {
    p_shl237_cast_fu_25299_p1 = esl_zext<10,7>(p_shl228_fu_25287_p3.read());
}

void ShuffleNetV2::thread_p_shl237_fu_26166_p3() {
    p_shl237_fu_26166_p3 = esl_concat<2,5>(tmp_1366_fu_26162_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl238_cast_fu_25330_p1() {
    p_shl238_cast_fu_25330_p1 = esl_zext<8,5>(tmp_1336_fu_25324_p2.read());
}

void ShuffleNetV2::thread_p_shl238_fu_26178_p3() {
    p_shl238_fu_26178_p3 = esl_concat<2,3>(tmp_1366_fu_26162_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl239_cast_fu_25770_p1() {
    p_shl239_cast_fu_25770_p1 = esl_zext<8,7>(p_shl229_fu_25762_p3.read());
}

void ShuffleNetV2::thread_p_shl239_fu_26734_p3() {
    p_shl239_fu_26734_p3 = esl_concat<2,5>(tmp_1383_fu_26730_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl23_cast_fu_11859_p1() {
    p_shl23_cast_fu_11859_p1 = esl_zext<7,4>(p_shl23_fu_11851_p3.read());
}

void ShuffleNetV2::thread_p_shl23_fu_11851_p3() {
    p_shl23_fu_11851_p3 = esl_concat<1,3>(tmp_157_fu_11835_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl240_cast_fu_25780_p1() {
    p_shl240_cast_fu_25780_p1 = esl_zext<8,5>(tmp_1346_fu_25774_p2.read());
}

void ShuffleNetV2::thread_p_shl240_fu_26746_p3() {
    p_shl240_fu_26746_p3 = esl_concat<2,3>(tmp_1383_fu_26730_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl241_cast_fu_26036_p1() {
    p_shl241_cast_fu_26036_p1 = esl_zext<8,7>(p_shl230_fu_26028_p3.read());
}

void ShuffleNetV2::thread_p_shl241_fu_26555_p3() {
    p_shl241_fu_26555_p3 = esl_concat<4,5>(tmp_1384_fu_26551_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl242_cast_fu_26048_p1() {
    p_shl242_cast_fu_26048_p1 = esl_zext<8,5>(p_shl231_fu_26040_p3.read());
}

void ShuffleNetV2::thread_p_shl242_fu_26567_p3() {
    p_shl242_fu_26567_p3 = esl_concat<4,3>(tmp_1384_fu_26551_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl243_cast_fu_25857_p1() {
    p_shl243_cast_fu_25857_p1 = esl_zext<10,9>(p_shl232_fu_25849_p3.read());
}

void ShuffleNetV2::thread_p_shl243_fu_27030_p3() {
    p_shl243_fu_27030_p3 = esl_concat<2,5>(tmp_1398_fu_27026_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl244_cast1_fu_25869_p1() {
    p_shl244_cast1_fu_25869_p1 = esl_zext<8,7>(p_shl233_fu_25861_p3.read());
}

void ShuffleNetV2::thread_p_shl244_cast_fu_25873_p1() {
    p_shl244_cast_fu_25873_p1 = esl_zext<10,7>(p_shl233_fu_25861_p3.read());
}

void ShuffleNetV2::thread_p_shl244_fu_27296_p3() {
    p_shl244_fu_27296_p3 = esl_concat<2,5>(tmp_1405_fu_27292_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl245_cast_fu_25904_p1() {
    p_shl245_cast_fu_25904_p1 = esl_zext<8,5>(tmp_1358_fu_25898_p2.read());
}

void ShuffleNetV2::thread_p_shl245_fu_27308_p3() {
    p_shl245_fu_27308_p3 = esl_concat<2,3>(tmp_1405_fu_27292_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl246_cast_fu_26394_p1() {
    p_shl246_cast_fu_26394_p1 = esl_zext<8,7>(p_shl235_fu_26386_p3.read());
}

void ShuffleNetV2::thread_p_shl246_fu_27117_p3() {
    p_shl246_fu_27117_p3 = esl_concat<4,5>(tmp_1406_fu_27113_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl247_cast_fu_26406_p1() {
    p_shl247_cast_fu_26406_p1 = esl_zext<8,5>(p_shl236_fu_26398_p3.read());
}

void ShuffleNetV2::thread_p_shl247_fu_27129_p3() {
    p_shl247_fu_27129_p3 = esl_concat<4,3>(tmp_1406_fu_27113_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl248_cast_fu_26476_p1() {
    p_shl248_cast_fu_26476_p1 = esl_zext<8,7>(p_shl234_fu_26468_p3.read());
}

void ShuffleNetV2::thread_p_shl248_fu_27718_p3() {
    p_shl248_fu_27718_p3 = esl_concat<2,5>(tmp_1416_fu_27714_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl249_cast_fu_26486_p1() {
    p_shl249_cast_fu_26486_p1 = esl_zext<8,5>(tmp_1364_fu_26480_p2.read());
}

void ShuffleNetV2::thread_p_shl249_fu_27636_p3() {
    p_shl249_fu_27636_p3 = esl_concat<2,5>(tmp_1418_fu_27632_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl24_cast_fu_12133_p1() {
    p_shl24_cast_fu_12133_p1 = esl_zext<7,6>(p_shl24_fu_12125_p3.read());
}

void ShuffleNetV2::thread_p_shl24_fu_12125_p3() {
    p_shl24_fu_12125_p3 = esl_concat<1,5>(tmp_172_fu_12121_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl250_cast_fu_26742_p1() {
    p_shl250_cast_fu_26742_p1 = esl_zext<8,7>(p_shl239_fu_26734_p3.read());
}

void ShuffleNetV2::thread_p_shl250_fu_27648_p3() {
    p_shl250_fu_27648_p3 = esl_concat<2,3>(tmp_1418_fu_27632_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl251_cast_fu_26754_p1() {
    p_shl251_cast_fu_26754_p1 = esl_zext<8,5>(p_shl240_fu_26746_p3.read());
}

void ShuffleNetV2::thread_p_shl251_fu_27434_p3() {
    p_shl251_fu_27434_p3 = esl_concat<2,5>(tmp_1419_fu_27430_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl252_cast_fu_26174_p1() {
    p_shl252_cast_fu_26174_p1 = esl_zext<8,7>(p_shl237_fu_26166_p3.read());
}

void ShuffleNetV2::thread_p_shl252_fu_27446_p3() {
    p_shl252_fu_27446_p3 = esl_concat<2,3>(tmp_1419_fu_27430_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl253_cast_fu_26186_p1() {
    p_shl253_cast_fu_26186_p1 = esl_zext<8,5>(p_shl238_fu_26178_p3.read());
}

void ShuffleNetV2::thread_p_shl253_fu_27984_p3() {
    p_shl253_fu_27984_p3 = esl_concat<2,5>(tmp_1435_fu_27980_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl254_cast_fu_26563_p1() {
    p_shl254_cast_fu_26563_p1 = esl_zext<10,9>(p_shl241_fu_26555_p3.read());
}

void ShuffleNetV2::thread_p_shl254_fu_27996_p3() {
    p_shl254_fu_27996_p3 = esl_concat<2,3>(tmp_1435_fu_27980_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl255_cast1_fu_26575_p1() {
    p_shl255_cast1_fu_26575_p1 = esl_zext<8,7>(p_shl242_fu_26567_p3.read());
}

void ShuffleNetV2::thread_p_shl255_cast_fu_26579_p1() {
    p_shl255_cast_fu_26579_p1 = esl_zext<10,7>(p_shl242_fu_26567_p3.read());
}

void ShuffleNetV2::thread_p_shl255_fu_27805_p3() {
    p_shl255_fu_27805_p3 = esl_concat<4,5>(tmp_1436_fu_27801_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl256_cast_fu_26610_p1() {
    p_shl256_cast_fu_26610_p1 = esl_zext<8,5>(tmp_1389_fu_26604_p2.read());
}

void ShuffleNetV2::thread_p_shl256_fu_27817_p3() {
    p_shl256_fu_27817_p3 = esl_concat<4,3>(tmp_1436_fu_27801_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl257_cast_fu_27038_p1() {
    p_shl257_cast_fu_27038_p1 = esl_zext<8,7>(p_shl243_fu_27030_p3.read());
}

void ShuffleNetV2::thread_p_shl258_cast_fu_27048_p1() {
    p_shl258_cast_fu_27048_p1 = esl_zext<8,5>(tmp_1399_fu_27042_p2.read());
}

void ShuffleNetV2::thread_p_shl259_cast_fu_27304_p1() {
    p_shl259_cast_fu_27304_p1 = esl_zext<8,7>(p_shl244_fu_27296_p3.read());
}

void ShuffleNetV2::thread_p_shl25_cast_fu_12145_p1() {
    p_shl25_cast_fu_12145_p1 = esl_zext<7,4>(p_shl25_fu_12137_p3.read());
}

void ShuffleNetV2::thread_p_shl25_fu_12137_p3() {
    p_shl25_fu_12137_p3 = esl_concat<1,3>(tmp_172_fu_12121_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl260_cast_fu_27316_p1() {
    p_shl260_cast_fu_27316_p1 = esl_zext<8,5>(p_shl245_fu_27308_p3.read());
}

void ShuffleNetV2::thread_p_shl261_cast_fu_27125_p1() {
    p_shl261_cast_fu_27125_p1 = esl_zext<10,9>(p_shl246_fu_27117_p3.read());
}

void ShuffleNetV2::thread_p_shl262_cast1_fu_27137_p1() {
    p_shl262_cast1_fu_27137_p1 = esl_zext<8,7>(p_shl247_fu_27129_p3.read());
}

void ShuffleNetV2::thread_p_shl262_cast_fu_27141_p1() {
    p_shl262_cast_fu_27141_p1 = esl_zext<10,7>(p_shl247_fu_27129_p3.read());
}

void ShuffleNetV2::thread_p_shl263_cast_fu_27172_p1() {
    p_shl263_cast_fu_27172_p1 = esl_zext<8,5>(tmp_1411_fu_27166_p2.read());
}

void ShuffleNetV2::thread_p_shl264_cast_fu_27644_p1() {
    p_shl264_cast_fu_27644_p1 = esl_zext<8,7>(p_shl249_fu_27636_p3.read());
}

void ShuffleNetV2::thread_p_shl265_cast_fu_27656_p1() {
    p_shl265_cast_fu_27656_p1 = esl_zext<8,5>(p_shl250_fu_27648_p3.read());
}

void ShuffleNetV2::thread_p_shl266_cast_fu_27726_p1() {
    p_shl266_cast_fu_27726_p1 = esl_zext<8,7>(p_shl248_fu_27718_p3.read());
}

void ShuffleNetV2::thread_p_shl267_cast_fu_27736_p1() {
    p_shl267_cast_fu_27736_p1 = esl_zext<8,5>(tmp_1417_fu_27730_p2.read());
}

void ShuffleNetV2::thread_p_shl268_cast_fu_27992_p1() {
    p_shl268_cast_fu_27992_p1 = esl_zext<8,7>(p_shl253_fu_27984_p3.read());
}

void ShuffleNetV2::thread_p_shl269_cast_fu_28004_p1() {
    p_shl269_cast_fu_28004_p1 = esl_zext<8,5>(p_shl254_fu_27996_p3.read());
}

void ShuffleNetV2::thread_p_shl26_cast_fu_11557_p1() {
    p_shl26_cast_fu_11557_p1 = esl_zext<7,6>(p_shl26_fu_11549_p3.read());
}

void ShuffleNetV2::thread_p_shl26_fu_11549_p3() {
    p_shl26_fu_11549_p3 = esl_concat<1,5>(tmp_164_fu_11545_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl270_cast_fu_27442_p1() {
    p_shl270_cast_fu_27442_p1 = esl_zext<8,7>(p_shl251_fu_27434_p3.read());
}

void ShuffleNetV2::thread_p_shl271_cast_fu_27454_p1() {
    p_shl271_cast_fu_27454_p1 = esl_zext<8,5>(p_shl252_fu_27446_p3.read());
}

void ShuffleNetV2::thread_p_shl272_cast_fu_27813_p1() {
    p_shl272_cast_fu_27813_p1 = esl_zext<10,9>(p_shl255_fu_27805_p3.read());
}

void ShuffleNetV2::thread_p_shl273_cast1_fu_27825_p1() {
    p_shl273_cast1_fu_27825_p1 = esl_zext<8,7>(p_shl256_fu_27817_p3.read());
}

void ShuffleNetV2::thread_p_shl273_cast_fu_27829_p1() {
    p_shl273_cast_fu_27829_p1 = esl_zext<10,7>(p_shl256_fu_27817_p3.read());
}

void ShuffleNetV2::thread_p_shl274_cast_fu_27860_p1() {
    p_shl274_cast_fu_27860_p1 = esl_zext<8,5>(tmp_1441_fu_27854_p2.read());
}

void ShuffleNetV2::thread_p_shl275_cast_fu_7428_p1() {
    p_shl275_cast_fu_7428_p1 = esl_zext<11,10>(tmp_210_fu_7420_p3.read());
}

void ShuffleNetV2::thread_p_shl276_cast_fu_7440_p1() {
    p_shl276_cast_fu_7440_p1 = esl_zext<11,8>(tmp_212_fu_7432_p3.read());
}

void ShuffleNetV2::thread_p_shl277_cast_fu_7536_p1() {
    p_shl277_cast_fu_7536_p1 = esl_zext<8,7>(tmp_218_fu_7528_p3.read());
}

void ShuffleNetV2::thread_p_shl278_cast_fu_7583_p1() {
    p_shl278_cast_fu_7583_p1 = esl_sext<15,11>(tmp_111_fu_7575_p3.read());
}

void ShuffleNetV2::thread_p_shl279_cast_fu_7715_p1() {
    p_shl279_cast_fu_7715_p1 = esl_zext<11,10>(tmp_245_fu_7707_p3.read());
}

void ShuffleNetV2::thread_p_shl27_cast_fu_11569_p1() {
    p_shl27_cast_fu_11569_p1 = esl_zext<7,4>(p_shl27_fu_11561_p3.read());
}

void ShuffleNetV2::thread_p_shl27_fu_11561_p3() {
    p_shl27_fu_11561_p3 = esl_concat<1,3>(tmp_164_fu_11545_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl280_cast_fu_7727_p1() {
    p_shl280_cast_fu_7727_p1 = esl_zext<11,8>(tmp_246_fu_7719_p3.read());
}

void ShuffleNetV2::thread_p_shl281_cast_fu_7681_p1() {
    p_shl281_cast_fu_7681_p1 = esl_zext<12,11>(tmp_227_fu_7673_p3.read());
}

void ShuffleNetV2::thread_p_shl282_cast_fu_7693_p1() {
    p_shl282_cast_fu_7693_p1 = esl_zext<12,9>(tmp_228_fu_7685_p3.read());
}

void ShuffleNetV2::thread_p_shl283_cast_fu_7864_p1() {
    p_shl283_cast_fu_7864_p1 = esl_zext<8,7>(tmp_273_fu_7856_p3.read());
}

void ShuffleNetV2::thread_p_shl284_cast_fu_7842_p1() {
    p_shl284_cast_fu_7842_p1 = esl_zext<9,8>(tmp_270_fu_7834_p3.read());
}

void ShuffleNetV2::thread_p_shl286_cast_fu_7911_p1() {
    p_shl286_cast_fu_7911_p1 = esl_sext<15,11>(tmp_112_fu_7903_p3.read());
}

void ShuffleNetV2::thread_p_shl287_cast_fu_8075_p1() {
    p_shl287_cast_fu_8075_p1 = esl_zext<11,10>(tmp_312_fu_8067_p3.read());
}

void ShuffleNetV2::thread_p_shl288_cast_fu_8087_p1() {
    p_shl288_cast_fu_8087_p1 = esl_zext<11,8>(tmp_314_fu_8079_p3.read());
}

void ShuffleNetV2::thread_p_shl289_cast_fu_8041_p1() {
    p_shl289_cast_fu_8041_p1 = esl_zext<13,12>(tmp_294_fu_8033_p3.read());
}

void ShuffleNetV2::thread_p_shl28_cast_fu_12346_p1() {
    p_shl28_cast_fu_12346_p1 = esl_zext<7,6>(p_shl28_fu_12338_p3.read());
}

void ShuffleNetV2::thread_p_shl28_fu_12338_p3() {
    p_shl28_fu_12338_p3 = esl_concat<1,5>(tmp_177_fu_12334_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl290_cast_fu_8053_p1() {
    p_shl290_cast_fu_8053_p1 = esl_zext<13,10>(tmp_304_fu_8045_p3.read());
}

void ShuffleNetV2::thread_p_shl291_cast_fu_8363_p1() {
    p_shl291_cast_fu_8363_p1 = esl_zext<11,10>(tmp_355_fu_8355_p3.read());
}

void ShuffleNetV2::thread_p_shl292_cast_fu_8375_p1() {
    p_shl292_cast_fu_8375_p1 = esl_zext<11,8>(tmp_357_fu_8367_p3.read());
}

void ShuffleNetV2::thread_p_shl293_cast_fu_8329_p1() {
    p_shl293_cast_fu_8329_p1 = esl_zext<13,12>(tmp_337_fu_8321_p3.read());
}

void ShuffleNetV2::thread_p_shl294_cast_fu_8341_p1() {
    p_shl294_cast_fu_8341_p1 = esl_zext<13,10>(tmp_347_fu_8333_p3.read());
}

void ShuffleNetV2::thread_p_shl295_cast_fu_8512_p1() {
    p_shl295_cast_fu_8512_p1 = esl_zext<8,7>(tmp_384_fu_8504_p3.read());
}

void ShuffleNetV2::thread_p_shl296_cast_fu_8490_p1() {
    p_shl296_cast_fu_8490_p1 = esl_zext<10,9>(tmp_380_fu_8482_p3.read());
}

void ShuffleNetV2::thread_p_shl298_cast_fu_8563_p1() {
    p_shl298_cast_fu_8563_p1 = esl_sext<15,12>(tmp_114_fu_8555_p3.read());
}

void ShuffleNetV2::thread_p_shl299_cast_fu_8727_p1() {
    p_shl299_cast_fu_8727_p1 = esl_zext<11,10>(tmp_412_fu_8719_p3.read());
}

void ShuffleNetV2::thread_p_shl29_cast_fu_12358_p1() {
    p_shl29_cast_fu_12358_p1 = esl_zext<7,4>(p_shl29_fu_12350_p3.read());
}

void ShuffleNetV2::thread_p_shl29_fu_12350_p3() {
    p_shl29_fu_12350_p3 = esl_concat<1,3>(tmp_177_fu_12334_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl2_cast_fu_10697_p1() {
    p_shl2_cast_fu_10697_p1 = esl_zext<7,6>(p_shl2_fu_10689_p3.read());
}

void ShuffleNetV2::thread_p_shl2_fu_10689_p3() {
    p_shl2_fu_10689_p3 = esl_concat<1,5>(tmp_124_fu_10685_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl300_cast_fu_8739_p1() {
    p_shl300_cast_fu_8739_p1 = esl_zext<11,8>(tmp_423_fu_8731_p3.read());
}

void ShuffleNetV2::thread_p_shl301_cast_fu_8687_p1() {
    p_shl301_cast_fu_8687_p1 = esl_zext<13,12>(tmp_405_fu_8683_p1.read());
}

void ShuffleNetV2::thread_p_shl302_cast_fu_8705_p1() {
    p_shl302_cast_fu_8705_p1 = esl_zext<13,10>(tmp_409_fu_8701_p1.read());
}

void ShuffleNetV2::thread_p_shl303_cast_fu_9100_p1() {
    p_shl303_cast_fu_9100_p1 = esl_zext<11,10>(tmp_453_fu_9092_p3.read());
}

void ShuffleNetV2::thread_p_shl304_cast_fu_9112_p1() {
    p_shl304_cast_fu_9112_p1 = esl_zext<11,8>(tmp_455_fu_9104_p3.read());
}

void ShuffleNetV2::thread_p_shl305_cast_fu_9066_p1() {
    p_shl305_cast_fu_9066_p1 = esl_zext<14,13>(tmp_440_fu_9058_p3.read());
}

void ShuffleNetV2::thread_p_shl306_cast_fu_9078_p1() {
    p_shl306_cast_fu_9078_p1 = esl_zext<14,11>(tmp_445_fu_9070_p3.read());
}

void ShuffleNetV2::thread_p_shl307_cast_fu_9253_p1() {
    p_shl307_cast_fu_9253_p1 = esl_zext<8,7>(tmp_481_fu_9245_p3.read());
}

void ShuffleNetV2::thread_p_shl308_cast_fu_9231_p1() {
    p_shl308_cast_fu_9231_p1 = esl_zext<10,9>(tmp_478_fu_9223_p3.read());
}

void ShuffleNetV2::thread_p_shl30_cast_fu_11936_p1() {
    p_shl30_cast_fu_11936_p1 = esl_zext<8,7>(p_shl30_fu_11928_p3.read());
}

void ShuffleNetV2::thread_p_shl30_fu_11928_p3() {
    p_shl30_fu_11928_p3 = esl_concat<2,5>(tmp_173_fu_11924_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl310_cast_fu_9304_p1() {
    p_shl310_cast_fu_9304_p1 = esl_sext<15,12>(tmp_117_fu_9296_p3.read());
}

void ShuffleNetV2::thread_p_shl311_cast_fu_9466_p1() {
    p_shl311_cast_fu_9466_p1 = esl_zext<11,10>(tmp_506_fu_9458_p3.read());
}

void ShuffleNetV2::thread_p_shl312_cast_fu_9478_p1() {
    p_shl312_cast_fu_9478_p1 = esl_zext<11,8>(tmp_509_fu_9470_p3.read());
}

void ShuffleNetV2::thread_p_shl313_cast_fu_9432_p1() {
    p_shl313_cast_fu_9432_p1 = esl_zext<14,13>(tmp_502_fu_9424_p3.read());
}

void ShuffleNetV2::thread_p_shl314_cast_fu_9444_p1() {
    p_shl314_cast_fu_9444_p1 = esl_zext<14,11>(tmp_503_fu_9436_p3.read());
}

void ShuffleNetV2::thread_p_shl315_cast_fu_9837_p1() {
    p_shl315_cast_fu_9837_p1 = esl_zext<11,10>(tmp_540_fu_9829_p3.read());
}

void ShuffleNetV2::thread_p_shl316_cast_fu_9849_p1() {
    p_shl316_cast_fu_9849_p1 = esl_zext<11,8>(tmp_545_fu_9841_p3.read());
}

void ShuffleNetV2::thread_p_shl317_cast_fu_9803_p1() {
    p_shl317_cast_fu_9803_p1 = esl_zext<14,13>(tmp_534_fu_9795_p3.read());
}

void ShuffleNetV2::thread_p_shl318_cast_fu_9815_p1() {
    p_shl318_cast_fu_9815_p1 = esl_zext<14,11>(tmp_537_fu_9807_p3.read());
}

void ShuffleNetV2::thread_p_shl319_cast_fu_9996_p1() {
    p_shl319_cast_fu_9996_p1 = esl_zext<8,7>(tmp_578_fu_9988_p3.read());
}

void ShuffleNetV2::thread_p_shl31_cast_fu_11948_p1() {
    p_shl31_cast_fu_11948_p1 = esl_zext<8,5>(p_shl31_fu_11940_p3.read());
}

void ShuffleNetV2::thread_p_shl31_fu_11940_p3() {
    p_shl31_fu_11940_p3 = esl_concat<2,3>(tmp_173_fu_11924_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl320_cast_fu_9970_p1() {
    p_shl320_cast_fu_9970_p1 = esl_zext<10,9>(tmp_576_fu_9966_p1.read());
}

void ShuffleNetV2::thread_p_shl322_cast_fu_10047_p1() {
    p_shl322_cast_fu_10047_p1 = esl_sext<15,13>(tmp_120_fu_10039_p3.read());
}

void ShuffleNetV2::thread_p_shl323_cast_fu_10211_p1() {
    p_shl323_cast_fu_10211_p1 = esl_zext<11,10>(tmp_606_fu_10203_p3.read());
}

void ShuffleNetV2::thread_p_shl324_cast_fu_10223_p1() {
    p_shl324_cast_fu_10223_p1 = esl_zext<11,8>(tmp_609_fu_10215_p3.read());
}

void ShuffleNetV2::thread_p_shl325_cast_fu_10171_p1() {
    p_shl325_cast_fu_10171_p1 = esl_zext<14,13>(tmp_595_fu_10167_p1.read());
}

void ShuffleNetV2::thread_p_shl326_cast_fu_10189_p1() {
    p_shl326_cast_fu_10189_p1 = esl_zext<14,11>(tmp_603_fu_10185_p1.read());
}

void ShuffleNetV2::thread_p_shl328_cast_fu_10592_p1() {
    p_shl328_cast_fu_10592_p1 = esl_sext<13,11>(tmp_645_fu_10584_p3.read());
}

void ShuffleNetV2::thread_p_shl329_cast_fu_10614_p1() {
    p_shl329_cast_fu_10614_p1 = esl_zext<15,14>(tmp_631_fu_10607_p3.read());
}

void ShuffleNetV2::thread_p_shl32_cast_fu_11985_p1() {
    p_shl32_cast_fu_11985_p1 = esl_zext<7,6>(p_shl32_fu_11977_p3.read());
}

void ShuffleNetV2::thread_p_shl32_fu_11977_p3() {
    p_shl32_fu_11977_p3 = esl_concat<2,4>(tmp_173_fu_11924_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl330_cast_fu_10625_p1() {
    p_shl330_cast_fu_10625_p1 = esl_zext<15,12>(tmp_634_fu_10618_p3.read());
}

void ShuffleNetV2::thread_p_shl331_cast_fu_10982_p3() {
    p_shl331_cast_fu_10982_p3 = esl_concat<8,2>(tmp_147_reg_29477.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl332_cast_fu_10951_p1() {
    p_shl332_cast_fu_10951_p1 = esl_zext<35,34>(tmp_674_fu_10947_p1.read());
}

void ShuffleNetV2::thread_p_shl333_cast_fu_10918_p1() {
    p_shl333_cast_fu_10918_p1 = esl_sext<15,14>(tmp_144_fu_10910_p3.read());
}

void ShuffleNetV2::thread_p_shl334_cast_fu_10887_p1() {
    p_shl334_cast_fu_10887_p1 = esl_zext<11,10>(tmp_655_fu_10880_p3.read());
}

void ShuffleNetV2::thread_p_shl336_cast_fu_11310_p1() {
    p_shl336_cast_fu_11310_p1 = esl_sext<13,11>(tmp_700_fu_11302_p3.read());
}

void ShuffleNetV2::thread_p_shl337_cast_fu_11332_p1() {
    p_shl337_cast_fu_11332_p1 = esl_zext<15,14>(tmp_687_fu_11325_p3.read());
}

void ShuffleNetV2::thread_p_shl338_cast_fu_11343_p1() {
    p_shl338_cast_fu_11343_p1 = esl_zext<15,12>(tmp_689_fu_11336_p3.read());
}

void ShuffleNetV2::thread_p_shl339_cast_fu_11700_p3() {
    p_shl339_cast_fu_11700_p3 = esl_concat<8,2>(tmp_168_reg_29723.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl33_cast_fu_11997_p1() {
    p_shl33_cast_fu_11997_p1 = esl_zext<7,4>(p_shl33_fu_11989_p3.read());
}

void ShuffleNetV2::thread_p_shl33_fu_11989_p3() {
    p_shl33_fu_11989_p3 = esl_concat<2,2>(tmp_173_fu_11924_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl340_cast_fu_11669_p1() {
    p_shl340_cast_fu_11669_p1 = esl_zext<35,34>(tmp_728_fu_11665_p1.read());
}

void ShuffleNetV2::thread_p_shl341_cast_fu_11636_p1() {
    p_shl341_cast_fu_11636_p1 = esl_sext<15,13>(tmp_165_fu_11628_p3.read());
}

void ShuffleNetV2::thread_p_shl342_cast_fu_11609_p1() {
    p_shl342_cast_fu_11609_p1 = esl_zext<11,10>(tmp_706_fu_11602_p3.read());
}

void ShuffleNetV2::thread_p_shl344_cast_fu_12028_p1() {
    p_shl344_cast_fu_12028_p1 = esl_sext<13,11>(tmp_765_fu_12020_p3.read());
}

void ShuffleNetV2::thread_p_shl345_cast_fu_12050_p1() {
    p_shl345_cast_fu_12050_p1 = esl_zext<16,15>(tmp_750_fu_12043_p3.read());
}

void ShuffleNetV2::thread_p_shl346_cast_fu_12061_p1() {
    p_shl346_cast_fu_12061_p1 = esl_zext<16,13>(tmp_751_fu_12054_p3.read());
}

void ShuffleNetV2::thread_p_shl348_cast_fu_12523_p1() {
    p_shl348_cast_fu_12523_p1 = esl_sext<13,11>(tmp_799_fu_12515_p3.read());
}

void ShuffleNetV2::thread_p_shl349_cast_fu_12545_p1() {
    p_shl349_cast_fu_12545_p1 = esl_zext<16,15>(tmp_782_fu_12538_p3.read());
}

void ShuffleNetV2::thread_p_shl34_cast_fu_12628_p1() {
    p_shl34_cast_fu_12628_p1 = esl_zext<7,6>(p_shl34_fu_12620_p3.read());
}

void ShuffleNetV2::thread_p_shl34_fu_12620_p3() {
    p_shl34_fu_12620_p3 = esl_concat<1,5>(tmp_179_fu_12616_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl350_cast_fu_12556_p1() {
    p_shl350_cast_fu_12556_p1 = esl_zext<16,13>(tmp_793_fu_12549_p3.read());
}

void ShuffleNetV2::thread_p_shl351_cast_fu_12913_p3() {
    p_shl351_cast_fu_12913_p3 = esl_concat<8,2>(tmp_190_reg_30129.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl352_cast_fu_12882_p1() {
    p_shl352_cast_fu_12882_p1 = esl_zext<35,34>(tmp_824_fu_12878_p1.read());
}

void ShuffleNetV2::thread_p_shl353_cast_fu_12845_p3() {
    p_shl353_cast_fu_12845_p3 = esl_concat<13,2>(tmp_811_fu_12836_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl354_cast_fu_12822_p1() {
    p_shl354_cast_fu_12822_p1 = esl_zext<12,11>(tmp_802_fu_12815_p3.read());
}

void ShuffleNetV2::thread_p_shl356_cast_fu_13237_p1() {
    p_shl356_cast_fu_13237_p1 = esl_sext<13,11>(tmp_850_fu_13229_p3.read());
}

void ShuffleNetV2::thread_p_shl357_cast_fu_13259_p1() {
    p_shl357_cast_fu_13259_p1 = esl_zext<16,15>(tmp_844_fu_13252_p3.read());
}

void ShuffleNetV2::thread_p_shl358_cast_fu_13270_p1() {
    p_shl358_cast_fu_13270_p1 = esl_zext<16,13>(tmp_845_fu_13263_p3.read());
}

void ShuffleNetV2::thread_p_shl35_cast_fu_12640_p1() {
    p_shl35_cast_fu_12640_p1 = esl_zext<7,4>(p_shl35_fu_12632_p3.read());
}

void ShuffleNetV2::thread_p_shl35_fu_12632_p3() {
    p_shl35_fu_12632_p3 = esl_concat<1,3>(tmp_179_fu_12616_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl360_cast_fu_13815_p1() {
    p_shl360_cast_fu_13815_p1 = esl_sext<13,11>(tmp_894_fu_13807_p3.read());
}

void ShuffleNetV2::thread_p_shl361_cast_fu_13837_p1() {
    p_shl361_cast_fu_13837_p1 = esl_zext<16,15>(tmp_879_fu_13830_p3.read());
}

void ShuffleNetV2::thread_p_shl362_cast_fu_13848_p1() {
    p_shl362_cast_fu_13848_p1 = esl_zext<16,13>(tmp_881_fu_13841_p3.read());
}

void ShuffleNetV2::thread_p_shl363_cast_fu_14201_p3() {
    p_shl363_cast_fu_14201_p3 = esl_concat<8,2>(tmp_909_reg_30579.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl364_cast_fu_14170_p1() {
    p_shl364_cast_fu_14170_p1 = esl_zext<35,34>(tmp_905_fu_14166_p1.read());
}

void ShuffleNetV2::thread_p_shl365_cast_fu_14133_p3() {
    p_shl365_cast_fu_14133_p3 = esl_concat<13,2>(tmp_901_fu_14124_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl366_cast_fu_14110_p1() {
    p_shl366_cast_fu_14110_p1 = esl_zext<12,11>(tmp_899_fu_14103_p3.read());
}

void ShuffleNetV2::thread_p_shl368_cast_fu_14529_p1() {
    p_shl368_cast_fu_14529_p1 = esl_sext<13,11>(tmp_920_fu_14521_p3.read());
}

void ShuffleNetV2::thread_p_shl369_cast_fu_14551_p1() {
    p_shl369_cast_fu_14551_p1 = esl_zext<16,15>(tmp_915_fu_14544_p3.read());
}

void ShuffleNetV2::thread_p_shl36_cast_fu_12435_p1() {
    p_shl36_cast_fu_12435_p1 = esl_zext<8,7>(p_shl36_fu_12427_p3.read());
}

void ShuffleNetV2::thread_p_shl36_fu_12427_p3() {
    p_shl36_fu_12427_p3 = esl_concat<2,5>(tmp_181_fu_12423_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl370_cast_fu_14562_p1() {
    p_shl370_cast_fu_14562_p1 = esl_zext<16,13>(tmp_916_fu_14555_p3.read());
}

void ShuffleNetV2::thread_p_shl372_cast_fu_15111_p1() {
    p_shl372_cast_fu_15111_p1 = esl_sext<13,11>(tmp_942_fu_15103_p3.read());
}

void ShuffleNetV2::thread_p_shl373_cast_fu_15137_p1() {
    p_shl373_cast_fu_15137_p1 = esl_zext<16,15>(tmp_936_fu_15133_p1.read());
}

void ShuffleNetV2::thread_p_shl374_cast_fu_15152_p1() {
    p_shl374_cast_fu_15152_p1 = esl_zext<16,13>(tmp_938_fu_15148_p1.read());
}

void ShuffleNetV2::thread_p_shl375_cast_fu_15509_p3() {
    p_shl375_cast_fu_15509_p3 = esl_concat<8,2>(tmp_959_reg_31029.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl376_cast_fu_15478_p1() {
    p_shl376_cast_fu_15478_p1 = esl_zext<35,34>(tmp_955_fu_15474_p1.read());
}

void ShuffleNetV2::thread_p_shl377_cast_fu_15445_p1() {
    p_shl377_cast_fu_15445_p1 = esl_sext<15,14>(tmp_951_fu_15437_p3.read());
}

void ShuffleNetV2::thread_p_shl378_cast_fu_15418_p1() {
    p_shl378_cast_fu_15418_p1 = esl_zext<12,11>(tmp_948_fu_15411_p3.read());
}

void ShuffleNetV2::thread_p_shl37_cast_fu_12447_p1() {
    p_shl37_cast_fu_12447_p1 = esl_zext<8,5>(p_shl37_fu_12439_p3.read());
}

void ShuffleNetV2::thread_p_shl37_fu_12439_p3() {
    p_shl37_fu_12439_p3 = esl_concat<2,3>(tmp_181_fu_12423_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl380_cast_fu_15837_p1() {
    p_shl380_cast_fu_15837_p1 = esl_sext<13,11>(tmp_970_fu_15829_p3.read());
}

void ShuffleNetV2::thread_p_shl381_cast_fu_15859_p1() {
    p_shl381_cast_fu_15859_p1 = esl_zext<17,16>(tmp_965_fu_15852_p3.read());
}

void ShuffleNetV2::thread_p_shl382_cast_fu_15870_p1() {
    p_shl382_cast_fu_15870_p1 = esl_zext<17,14>(tmp_966_fu_15863_p3.read());
}

void ShuffleNetV2::thread_p_shl384_cast_fu_16419_p1() {
    p_shl384_cast_fu_16419_p1 = esl_sext<13,11>(tmp_990_fu_16411_p3.read());
}

void ShuffleNetV2::thread_p_shl385_cast_fu_16441_p1() {
    p_shl385_cast_fu_16441_p1 = esl_zext<17,16>(tmp_985_fu_16434_p3.read());
}

void ShuffleNetV2::thread_p_shl386_cast_fu_16452_p1() {
    p_shl386_cast_fu_16452_p1 = esl_zext<17,14>(tmp_986_fu_16445_p3.read());
}

void ShuffleNetV2::thread_p_shl387_cast_fu_16805_p3() {
    p_shl387_cast_fu_16805_p3 = esl_concat<8,2>(tmp_1007_reg_31479.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl388_cast_fu_16774_p1() {
    p_shl388_cast_fu_16774_p1 = esl_zext<35,34>(tmp_1003_fu_16770_p1.read());
}

void ShuffleNetV2::thread_p_shl389_cast_fu_16741_p1() {
    p_shl389_cast_fu_16741_p1 = esl_sext<15,14>(tmp_999_fu_16733_p3.read());
}

void ShuffleNetV2::thread_p_shl38_cast_fu_12480_p1() {
    p_shl38_cast_fu_12480_p1 = esl_zext<7,6>(p_shl38_fu_12472_p3.read());
}

void ShuffleNetV2::thread_p_shl38_fu_12472_p3() {
    p_shl38_fu_12472_p3 = esl_concat<2,4>(tmp_181_fu_12423_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl390_cast_fu_16714_p1() {
    p_shl390_cast_fu_16714_p1 = esl_zext<12,11>(tmp_996_fu_16707_p3.read());
}

void ShuffleNetV2::thread_p_shl392_cast_fu_17129_p1() {
    p_shl392_cast_fu_17129_p1 = esl_sext<13,11>(tmp_1018_fu_17121_p3.read());
}

void ShuffleNetV2::thread_p_shl393_cast_fu_17151_p1() {
    p_shl393_cast_fu_17151_p1 = esl_zext<17,16>(tmp_1013_fu_17144_p3.read());
}

void ShuffleNetV2::thread_p_shl394_cast_fu_17162_p1() {
    p_shl394_cast_fu_17162_p1 = esl_zext<17,14>(tmp_1014_fu_17155_p3.read());
}

void ShuffleNetV2::thread_p_shl396_cast_fu_17707_p1() {
    p_shl396_cast_fu_17707_p1 = esl_sext<13,11>(tmp_1038_fu_17699_p3.read());
}

void ShuffleNetV2::thread_p_shl397_cast_fu_17729_p1() {
    p_shl397_cast_fu_17729_p1 = esl_zext<17,16>(tmp_1033_fu_17722_p3.read());
}

void ShuffleNetV2::thread_p_shl398_cast_fu_17740_p1() {
    p_shl398_cast_fu_17740_p1 = esl_zext<17,14>(tmp_1034_fu_17733_p3.read());
}

void ShuffleNetV2::thread_p_shl399_cast_fu_18101_p3() {
    p_shl399_cast_fu_18101_p3 = esl_concat<8,2>(tmp_1056_reg_31929.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl39_cast_fu_12492_p1() {
    p_shl39_cast_fu_12492_p1 = esl_zext<7,4>(p_shl39_fu_12484_p3.read());
}

void ShuffleNetV2::thread_p_shl39_fu_12484_p3() {
    p_shl39_fu_12484_p3 = esl_concat<2,2>(tmp_181_fu_12423_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl3_cast_fu_10709_p1() {
    p_shl3_cast_fu_10709_p1 = esl_zext<7,4>(p_shl3_fu_10701_p3.read());
}

void ShuffleNetV2::thread_p_shl3_fu_10701_p3() {
    p_shl3_fu_10701_p3 = esl_concat<1,3>(tmp_124_fu_10685_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl400_cast_fu_18070_p1() {
    p_shl400_cast_fu_18070_p1 = esl_zext<35,34>(tmp_1052_fu_18066_p1.read());
}

void ShuffleNetV2::thread_p_shl401_cast_fu_18037_p1() {
    p_shl401_cast_fu_18037_p1 = esl_sext<15,14>(tmp_1048_fu_18029_p3.read());
}

void ShuffleNetV2::thread_p_shl402_cast_fu_18010_p1() {
    p_shl402_cast_fu_18010_p1 = esl_zext<12,11>(tmp_1045_fu_18006_p1.read());
}

void ShuffleNetV2::thread_p_shl404_cast_fu_18425_p1() {
    p_shl404_cast_fu_18425_p1 = esl_sext<13,11>(tmp_1067_fu_18417_p3.read());
}

void ShuffleNetV2::thread_p_shl405_cast_fu_18447_p1() {
    p_shl405_cast_fu_18447_p1 = esl_zext<17,16>(tmp_1062_fu_18440_p3.read());
}

void ShuffleNetV2::thread_p_shl406_cast_fu_18458_p1() {
    p_shl406_cast_fu_18458_p1 = esl_zext<17,14>(tmp_1063_fu_18451_p3.read());
}

void ShuffleNetV2::thread_p_shl408_cast_fu_19003_p1() {
    p_shl408_cast_fu_19003_p1 = esl_sext<13,11>(tmp_1087_fu_18995_p3.read());
}

void ShuffleNetV2::thread_p_shl409_cast_fu_19025_p1() {
    p_shl409_cast_fu_19025_p1 = esl_zext<17,16>(tmp_1082_fu_19018_p3.read());
}

void ShuffleNetV2::thread_p_shl40_cast_fu_12978_p1() {
    p_shl40_cast_fu_12978_p1 = esl_zext<7,6>(p_shl40_fu_12970_p3.read());
}

void ShuffleNetV2::thread_p_shl40_fu_12970_p3() {
    p_shl40_fu_12970_p3 = esl_concat<1,5>(tmp_186_fu_12966_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl410_cast_fu_19036_p1() {
    p_shl410_cast_fu_19036_p1 = esl_zext<17,14>(tmp_1083_fu_19029_p3.read());
}

void ShuffleNetV2::thread_p_shl411_cast_fu_19397_p3() {
    p_shl411_cast_fu_19397_p3 = esl_concat<8,2>(tmp_1104_reg_32379.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl412_cast_fu_19366_p1() {
    p_shl412_cast_fu_19366_p1 = esl_zext<35,34>(tmp_1100_fu_19362_p1.read());
}

void ShuffleNetV2::thread_p_shl413_cast_fu_19329_p3() {
    p_shl413_cast_fu_19329_p3 = esl_concat<13,2>(tmp_1096_fu_19320_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl414_cast_fu_19306_p1() {
    p_shl414_cast_fu_19306_p1 = esl_zext<12,11>(tmp_1094_fu_19302_p1.read());
}

void ShuffleNetV2::thread_p_shl416_cast_fu_19721_p1() {
    p_shl416_cast_fu_19721_p1 = esl_sext<13,11>(tmp_1115_fu_19713_p3.read());
}

void ShuffleNetV2::thread_p_shl417_cast_fu_19743_p1() {
    p_shl417_cast_fu_19743_p1 = esl_zext<17,16>(tmp_1110_fu_19736_p3.read());
}

void ShuffleNetV2::thread_p_shl418_cast_fu_19754_p1() {
    p_shl418_cast_fu_19754_p1 = esl_zext<17,14>(tmp_1111_fu_19747_p3.read());
}

void ShuffleNetV2::thread_p_shl41_cast_fu_12990_p1() {
    p_shl41_cast_fu_12990_p1 = esl_zext<7,4>(p_shl41_fu_12982_p3.read());
}

void ShuffleNetV2::thread_p_shl41_fu_12982_p3() {
    p_shl41_fu_12982_p3 = esl_concat<1,3>(tmp_186_fu_12966_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl420_cast_fu_20299_p1() {
    p_shl420_cast_fu_20299_p1 = esl_sext<13,11>(tmp_1137_fu_20291_p3.read());
}

void ShuffleNetV2::thread_p_shl421_cast_fu_20325_p1() {
    p_shl421_cast_fu_20325_p1 = esl_zext<17,16>(tmp_1131_fu_20321_p1.read());
}

void ShuffleNetV2::thread_p_shl422_cast_fu_20340_p1() {
    p_shl422_cast_fu_20340_p1 = esl_zext<17,14>(tmp_1133_fu_20336_p1.read());
}

void ShuffleNetV2::thread_p_shl423_cast_fu_20697_p3() {
    p_shl423_cast_fu_20697_p3 = esl_concat<8,2>(tmp_1154_reg_32829.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl424_cast_fu_20666_p1() {
    p_shl424_cast_fu_20666_p1 = esl_zext<35,34>(tmp_1150_fu_20662_p1.read());
}

void ShuffleNetV2::thread_p_shl425_cast_fu_20629_p3() {
    p_shl425_cast_fu_20629_p3 = esl_concat<13,2>(tmp_1146_fu_20625_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl426_cast_fu_20602_p1() {
    p_shl426_cast_fu_20602_p1 = esl_zext<13,12>(tmp_1143_fu_20595_p3.read());
}

void ShuffleNetV2::thread_p_shl428_cast_fu_21021_p1() {
    p_shl428_cast_fu_21021_p1 = esl_sext<13,11>(tmp_1167_fu_21013_p3.read());
}

void ShuffleNetV2::thread_p_shl429_cast_fu_21047_p1() {
    p_shl429_cast_fu_21047_p1 = esl_zext<17,16>(tmp_1161_fu_21043_p1.read());
}

void ShuffleNetV2::thread_p_shl42_cast_fu_13060_p1() {
    p_shl42_cast_fu_13060_p1 = esl_zext<7,6>(p_shl42_fu_13052_p3.read());
}

void ShuffleNetV2::thread_p_shl42_fu_13052_p3() {
    p_shl42_fu_13052_p3 = esl_concat<1,5>(tmp_182_fu_13048_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl430_cast_fu_21062_p1() {
    p_shl430_cast_fu_21062_p1 = esl_zext<17,14>(tmp_1163_fu_21058_p1.read());
}

void ShuffleNetV2::thread_p_shl432_cast_fu_21611_p1() {
    p_shl432_cast_fu_21611_p1 = esl_sext<13,11>(tmp_1189_fu_21603_p3.read());
}

void ShuffleNetV2::thread_p_shl433_cast_fu_21637_p1() {
    p_shl433_cast_fu_21637_p1 = esl_zext<17,16>(tmp_1183_fu_21633_p1.read());
}

void ShuffleNetV2::thread_p_shl434_cast_fu_21652_p1() {
    p_shl434_cast_fu_21652_p1 = esl_zext<17,14>(tmp_1185_fu_21648_p1.read());
}

void ShuffleNetV2::thread_p_shl435_cast_fu_22005_p3() {
    p_shl435_cast_fu_22005_p3 = esl_concat<8,2>(tmp_1205_reg_33279.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl436_cast_fu_21974_p1() {
    p_shl436_cast_fu_21974_p1 = esl_zext<35,34>(tmp_1201_fu_21970_p1.read());
}

void ShuffleNetV2::thread_p_shl437_cast_fu_21937_p3() {
    p_shl437_cast_fu_21937_p3 = esl_concat<13,2>(tmp_1197_fu_21928_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl438_cast_fu_21918_p1() {
    p_shl438_cast_fu_21918_p1 = esl_zext<13,12>(tmp_1195_fu_21911_p3.read());
}

void ShuffleNetV2::thread_p_shl43_cast_fu_13072_p1() {
    p_shl43_cast_fu_13072_p1 = esl_zext<7,4>(p_shl43_fu_13064_p3.read());
}

void ShuffleNetV2::thread_p_shl43_fu_13064_p3() {
    p_shl43_fu_13064_p3 = esl_concat<1,3>(tmp_182_fu_13048_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl440_cast_fu_22341_p1() {
    p_shl440_cast_fu_22341_p1 = esl_sext<13,11>(tmp_1216_fu_22333_p3.read());
}

void ShuffleNetV2::thread_p_shl441_cast_fu_22363_p1() {
    p_shl441_cast_fu_22363_p1 = esl_zext<18,17>(tmp_1211_fu_22356_p3.read());
}

void ShuffleNetV2::thread_p_shl442_cast_fu_22374_p1() {
    p_shl442_cast_fu_22374_p1 = esl_zext<18,15>(tmp_1212_fu_22367_p3.read());
}

void ShuffleNetV2::thread_p_shl444_cast_fu_22780_p1() {
    p_shl444_cast_fu_22780_p1 = esl_sext<15,13>(tmp_1232_fu_22772_p3.read());
}

void ShuffleNetV2::thread_p_shl445_cast_fu_22802_p1() {
    p_shl445_cast_fu_22802_p1 = esl_zext<18,17>(tmp_1226_fu_22795_p3.read());
}

void ShuffleNetV2::thread_p_shl446_cast_fu_22813_p1() {
    p_shl446_cast_fu_22813_p1 = esl_zext<18,15>(tmp_1227_fu_22806_p3.read());
}

void ShuffleNetV2::thread_p_shl447_cast_fu_23166_p3() {
    p_shl447_cast_fu_23166_p3 = esl_concat<9,2>(tmp_1249_reg_33675.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl448_cast_fu_23135_p1() {
    p_shl448_cast_fu_23135_p1 = esl_zext<35,34>(tmp_1245_fu_23131_p1.read());
}

void ShuffleNetV2::thread_p_shl449_cast_fu_23098_p3() {
    p_shl449_cast_fu_23098_p3 = esl_concat<13,2>(tmp_1241_fu_23089_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl44_cast_fu_13342_p1() {
    p_shl44_cast_fu_13342_p1 = esl_zext<7,6>(p_shl44_fu_13334_p3.read());
}

void ShuffleNetV2::thread_p_shl44_fu_13334_p3() {
    p_shl44_fu_13334_p3 = esl_concat<1,5>(tmp_194_fu_13330_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl450_cast_fu_23079_p1() {
    p_shl450_cast_fu_23079_p1 = esl_zext<13,12>(tmp_1239_fu_23072_p3.read());
}

void ShuffleNetV2::thread_p_shl452_cast_fu_23482_p1() {
    p_shl452_cast_fu_23482_p1 = esl_sext<15,13>(tmp_1260_fu_23474_p3.read());
}

void ShuffleNetV2::thread_p_shl453_cast_fu_23504_p1() {
    p_shl453_cast_fu_23504_p1 = esl_zext<18,17>(tmp_1254_fu_23497_p3.read());
}

void ShuffleNetV2::thread_p_shl454_cast_fu_23515_p1() {
    p_shl454_cast_fu_23515_p1 = esl_zext<18,15>(tmp_1255_fu_23508_p3.read());
}

void ShuffleNetV2::thread_p_shl455_cast_fu_23872_p3() {
    p_shl455_cast_fu_23872_p3 = esl_concat<9,2>(tmp_1277_reg_33921.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl456_cast_fu_23841_p1() {
    p_shl456_cast_fu_23841_p1 = esl_zext<35,34>(tmp_1273_fu_23837_p1.read());
}

void ShuffleNetV2::thread_p_shl457_cast_fu_23804_p3() {
    p_shl457_cast_fu_23804_p3 = esl_concat<13,2>(tmp_1269_fu_23795_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl458_cast_fu_23785_p1() {
    p_shl458_cast_fu_23785_p1 = esl_zext<13,12>(tmp_1267_fu_23778_p3.read());
}

void ShuffleNetV2::thread_p_shl45_cast_fu_13354_p1() {
    p_shl45_cast_fu_13354_p1 = esl_zext<7,4>(p_shl45_fu_13346_p3.read());
}

void ShuffleNetV2::thread_p_shl45_fu_13346_p3() {
    p_shl45_fu_13346_p3 = esl_concat<1,3>(tmp_194_fu_13330_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl460_cast_fu_24184_p1() {
    p_shl460_cast_fu_24184_p1 = esl_sext<15,13>(tmp_1290_fu_24176_p3.read());
}

void ShuffleNetV2::thread_p_shl461_cast_fu_24206_p1() {
    p_shl461_cast_fu_24206_p1 = esl_zext<18,17>(tmp_1284_fu_24199_p3.read());
}

void ShuffleNetV2::thread_p_shl462_cast_fu_24217_p1() {
    p_shl462_cast_fu_24217_p1 = esl_zext<18,15>(tmp_1285_fu_24210_p3.read());
}

void ShuffleNetV2::thread_p_shl464_cast_fu_24667_p1() {
    p_shl464_cast_fu_24667_p1 = esl_sext<15,13>(tmp_1307_fu_24659_p3.read());
}

void ShuffleNetV2::thread_p_shl465_cast_fu_24689_p1() {
    p_shl465_cast_fu_24689_p1 = esl_zext<18,17>(tmp_1301_fu_24682_p3.read());
}

void ShuffleNetV2::thread_p_shl466_cast_fu_24700_p1() {
    p_shl466_cast_fu_24700_p1 = esl_zext<18,15>(tmp_1302_fu_24693_p3.read());
}

void ShuffleNetV2::thread_p_shl467_cast_fu_25049_p3() {
    p_shl467_cast_fu_25049_p3 = esl_concat<9,2>(tmp_1324_reg_34327.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl468_cast_fu_25018_p1() {
    p_shl468_cast_fu_25018_p1 = esl_zext<35,34>(tmp_1320_fu_25014_p1.read());
}

void ShuffleNetV2::thread_p_shl469_cast_fu_24981_p3() {
    p_shl469_cast_fu_24981_p3 = esl_concat<13,2>(tmp_1316_fu_24972_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl46_cast_fu_12766_p1() {
    p_shl46_cast_fu_12766_p1 = esl_zext<7,6>(p_shl46_fu_12758_p3.read());
}

void ShuffleNetV2::thread_p_shl46_fu_12758_p3() {
    p_shl46_fu_12758_p3 = esl_concat<1,5>(tmp_187_fu_12754_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl470_cast_fu_24962_p1() {
    p_shl470_cast_fu_24962_p1 = esl_zext<13,12>(tmp_1314_fu_24955_p3.read());
}

void ShuffleNetV2::thread_p_shl472_cast_fu_25361_p1() {
    p_shl472_cast_fu_25361_p1 = esl_sext<15,13>(tmp_1338_fu_25353_p3.read());
}

void ShuffleNetV2::thread_p_shl473_cast_fu_25387_p1() {
    p_shl473_cast_fu_25387_p1 = esl_zext<18,17>(tmp_1331_fu_25383_p1.read());
}

void ShuffleNetV2::thread_p_shl474_cast_fu_25402_p1() {
    p_shl474_cast_fu_25402_p1 = esl_zext<18,15>(tmp_1333_fu_25398_p1.read());
}

void ShuffleNetV2::thread_p_shl476_cast_fu_25935_p1() {
    p_shl476_cast_fu_25935_p1 = esl_sext<15,13>(tmp_1360_fu_25927_p3.read());
}

void ShuffleNetV2::thread_p_shl477_cast_fu_25957_p1() {
    p_shl477_cast_fu_25957_p1 = esl_zext<19,18>(tmp_1354_fu_25950_p3.read());
}

void ShuffleNetV2::thread_p_shl478_cast_fu_25968_p1() {
    p_shl478_cast_fu_25968_p1 = esl_zext<19,16>(tmp_1355_fu_25961_p3.read());
}

void ShuffleNetV2::thread_p_shl479_cast_fu_26329_p3() {
    p_shl479_cast_fu_26329_p3 = esl_concat<9,2>(tmp_1379_reg_34777.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl47_cast_fu_12778_p1() {
    p_shl47_cast_fu_12778_p1 = esl_zext<7,4>(p_shl47_fu_12770_p3.read());
}

void ShuffleNetV2::thread_p_shl47_fu_12770_p3() {
    p_shl47_fu_12770_p3 = esl_concat<1,3>(tmp_187_fu_12754_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl480_cast_fu_26298_p1() {
    p_shl480_cast_fu_26298_p1 = esl_zext<35,34>(tmp_1375_fu_26294_p1.read());
}

void ShuffleNetV2::thread_p_shl481_cast_fu_26261_p3() {
    p_shl481_cast_fu_26261_p3 = esl_concat<13,2>(tmp_1371_fu_26257_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl482_cast_fu_26234_p1() {
    p_shl482_cast_fu_26234_p1 = esl_zext<13,12>(tmp_1368_fu_26230_p1.read());
}

void ShuffleNetV2::thread_p_shl484_cast_fu_26641_p1() {
    p_shl484_cast_fu_26641_p1 = esl_sext<15,13>(tmp_1391_fu_26633_p3.read());
}

void ShuffleNetV2::thread_p_shl485_cast_fu_26663_p1() {
    p_shl485_cast_fu_26663_p1 = esl_zext<19,18>(tmp_1385_fu_26656_p3.read());
}

void ShuffleNetV2::thread_p_shl486_cast_fu_26674_p1() {
    p_shl486_cast_fu_26674_p1 = esl_zext<19,16>(tmp_1386_fu_26667_p3.read());
}

void ShuffleNetV2::thread_p_shl488_cast_fu_27203_p1() {
    p_shl488_cast_fu_27203_p1 = esl_sext<15,13>(tmp_1413_fu_27195_p3.read());
}

void ShuffleNetV2::thread_p_shl489_cast_fu_27225_p1() {
    p_shl489_cast_fu_27225_p1 = esl_zext<19,18>(tmp_1407_fu_27218_p3.read());
}

void ShuffleNetV2::thread_p_shl48_cast_fu_13149_p1() {
    p_shl48_cast_fu_13149_p1 = esl_zext<8,7>(p_shl48_fu_13141_p3.read());
}

void ShuffleNetV2::thread_p_shl48_fu_13141_p3() {
    p_shl48_fu_13141_p3 = esl_concat<2,5>(tmp_196_fu_13137_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl490_cast_fu_27236_p1() {
    p_shl490_cast_fu_27236_p1 = esl_zext<19,16>(tmp_1408_fu_27229_p3.read());
}

void ShuffleNetV2::thread_p_shl491_cast_fu_27579_p3() {
    p_shl491_cast_fu_27579_p3 = esl_concat<9,2>(tmp_1431_reg_35227.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl492_cast_fu_27548_p1() {
    p_shl492_cast_fu_27548_p1 = esl_zext<35,34>(tmp_1427_fu_27544_p1.read());
}

void ShuffleNetV2::thread_p_shl494_cast_fu_27494_p1() {
    p_shl494_cast_fu_27494_p1 = esl_zext<14,13>(tmp_1420_fu_27487_p3.read());
}

void ShuffleNetV2::thread_p_shl496_cast_fu_27891_p1() {
    p_shl496_cast_fu_27891_p1 = esl_sext<15,13>(tmp_1443_fu_27883_p3.read());
}

void ShuffleNetV2::thread_p_shl497_cast_fu_27913_p1() {
    p_shl497_cast_fu_27913_p1 = esl_zext<19,18>(tmp_1437_fu_27906_p3.read());
}

void ShuffleNetV2::thread_p_shl498_cast_fu_27924_p1() {
    p_shl498_cast_fu_27924_p1 = esl_zext<19,16>(tmp_1438_fu_27917_p3.read());
}

void ShuffleNetV2::thread_p_shl49_cast_fu_13161_p1() {
    p_shl49_cast_fu_13161_p1 = esl_zext<8,5>(p_shl49_fu_13153_p3.read());
}

void ShuffleNetV2::thread_p_shl49_fu_13153_p3() {
    p_shl49_fu_13153_p3 = esl_concat<2,3>(tmp_196_fu_13137_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl4_cast_fu_10504_p1() {
    p_shl4_cast_fu_10504_p1 = esl_zext<8,7>(p_shl4_fu_10496_p3.read());
}

void ShuffleNetV2::thread_p_shl4_fu_10496_p3() {
    p_shl4_fu_10496_p3 = esl_concat<2,5>(tmp_133_fu_10492_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl50_cast_fu_13194_p1() {
    p_shl50_cast_fu_13194_p1 = esl_zext<7,6>(p_shl50_fu_13186_p3.read());
}

void ShuffleNetV2::thread_p_shl50_fu_13186_p3() {
    p_shl50_fu_13186_p3 = esl_concat<2,4>(tmp_196_fu_13137_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl51_cast_fu_13206_p1() {
    p_shl51_cast_fu_13206_p1 = esl_zext<7,4>(p_shl51_fu_13198_p3.read());
}

void ShuffleNetV2::thread_p_shl51_fu_13198_p3() {
    p_shl51_fu_13198_p3 = esl_concat<2,2>(tmp_196_fu_13137_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl52_cast_fu_13638_p1() {
    p_shl52_cast_fu_13638_p1 = esl_zext<7,6>(p_shl52_fu_13630_p3.read());
}

void ShuffleNetV2::thread_p_shl52_fu_13630_p3() {
    p_shl52_fu_13630_p3 = esl_concat<1,5>(tmp_202_fu_13626_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl53_cast_fu_13650_p1() {
    p_shl53_cast_fu_13650_p1 = esl_zext<7,4>(p_shl53_fu_13642_p3.read());
}

void ShuffleNetV2::thread_p_shl53_fu_13642_p3() {
    p_shl53_fu_13642_p3 = esl_concat<1,3>(tmp_202_fu_13626_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl54_cast_fu_13920_p1() {
    p_shl54_cast_fu_13920_p1 = esl_zext<7,6>(p_shl54_fu_13912_p3.read());
}

void ShuffleNetV2::thread_p_shl54_fu_13912_p3() {
    p_shl54_fu_13912_p3 = esl_concat<1,5>(tmp_204_fu_13908_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl55_cast_fu_13932_p1() {
    p_shl55_cast_fu_13932_p1 = esl_zext<7,4>(p_shl55_fu_13924_p3.read());
}

void ShuffleNetV2::thread_p_shl55_fu_13924_p3() {
    p_shl55_fu_13924_p3 = esl_concat<1,3>(tmp_204_fu_13908_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl56_cast_fu_13727_p1() {
    p_shl56_cast_fu_13727_p1 = esl_zext<8,7>(p_shl56_fu_13719_p3.read());
}

void ShuffleNetV2::thread_p_shl56_fu_13719_p3() {
    p_shl56_fu_13719_p3 = esl_concat<2,5>(tmp_205_fu_13715_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl57_cast_fu_13739_p1() {
    p_shl57_cast_fu_13739_p1 = esl_zext<8,5>(p_shl57_fu_13731_p3.read());
}

void ShuffleNetV2::thread_p_shl57_fu_13731_p3() {
    p_shl57_fu_13731_p3 = esl_concat<2,3>(tmp_205_fu_13715_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl58_cast_fu_13772_p1() {
    p_shl58_cast_fu_13772_p1 = esl_zext<7,6>(p_shl58_fu_13764_p3.read());
}

void ShuffleNetV2::thread_p_shl58_fu_13764_p3() {
    p_shl58_fu_13764_p3 = esl_concat<2,4>(tmp_205_fu_13715_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl59_cast_fu_13784_p1() {
    p_shl59_cast_fu_13784_p1 = esl_zext<7,4>(p_shl59_fu_13776_p3.read());
}

void ShuffleNetV2::thread_p_shl59_fu_13776_p3() {
    p_shl59_fu_13776_p3 = esl_concat<2,2>(tmp_205_fu_13715_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl5_cast_fu_10516_p1() {
    p_shl5_cast_fu_10516_p1 = esl_zext<8,5>(p_shl5_fu_10508_p3.read());
}

void ShuffleNetV2::thread_p_shl5_fu_10508_p3() {
    p_shl5_fu_10508_p3 = esl_concat<2,3>(tmp_133_fu_10492_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl60_cast_fu_14266_p1() {
    p_shl60_cast_fu_14266_p1 = esl_zext<7,6>(p_shl60_fu_14258_p3.read());
}

void ShuffleNetV2::thread_p_shl60_fu_14258_p3() {
    p_shl60_fu_14258_p3 = esl_concat<1,5>(tmp_897_fu_14254_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl61_cast_fu_14278_p1() {
    p_shl61_cast_fu_14278_p1 = esl_zext<7,4>(p_shl61_fu_14270_p3.read());
}

void ShuffleNetV2::thread_p_shl61_fu_14270_p3() {
    p_shl61_fu_14270_p3 = esl_concat<1,3>(tmp_897_fu_14254_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl62_cast_fu_14352_p1() {
    p_shl62_cast_fu_14352_p1 = esl_zext<7,6>(p_shl62_fu_14344_p3.read());
}

void ShuffleNetV2::thread_p_shl62_fu_14344_p3() {
    p_shl62_fu_14344_p3 = esl_concat<1,5>(tmp_209_fu_14340_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl63_cast_fu_14364_p1() {
    p_shl63_cast_fu_14364_p1 = esl_zext<7,4>(p_shl63_fu_14356_p3.read());
}

void ShuffleNetV2::thread_p_shl63_fu_14356_p3() {
    p_shl63_fu_14356_p3 = esl_concat<1,3>(tmp_209_fu_14340_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl64_cast_fu_14634_p1() {
    p_shl64_cast_fu_14634_p1 = esl_zext<7,6>(p_shl64_fu_14626_p3.read());
}

void ShuffleNetV2::thread_p_shl64_fu_14626_p3() {
    p_shl64_fu_14626_p3 = esl_concat<1,5>(tmp_913_fu_14622_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl65_cast_fu_14646_p1() {
    p_shl65_cast_fu_14646_p1 = esl_zext<7,4>(p_shl65_fu_14638_p3.read());
}

void ShuffleNetV2::thread_p_shl65_fu_14638_p3() {
    p_shl65_fu_14638_p3 = esl_concat<1,3>(tmp_913_fu_14622_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl66_cast_fu_14058_p1() {
    p_shl66_cast_fu_14058_p1 = esl_zext<7,6>(p_shl66_fu_14050_p3.read());
}

void ShuffleNetV2::thread_p_shl66_fu_14050_p3() {
    p_shl66_fu_14050_p3 = esl_concat<1,5>(tmp_898_fu_14046_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl67_cast_fu_14070_p1() {
    p_shl67_cast_fu_14070_p1 = esl_zext<7,4>(p_shl67_fu_14062_p3.read());
}

void ShuffleNetV2::thread_p_shl67_fu_14062_p3() {
    p_shl67_fu_14062_p3 = esl_concat<1,3>(tmp_898_fu_14046_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl68_cast_fu_14441_p1() {
    p_shl68_cast_fu_14441_p1 = esl_zext<8,7>(p_shl68_fu_14433_p3.read());
}

void ShuffleNetV2::thread_p_shl68_fu_14433_p3() {
    p_shl68_fu_14433_p3 = esl_concat<2,5>(tmp_914_fu_14429_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl69_cast_fu_14453_p1() {
    p_shl69_cast_fu_14453_p1 = esl_zext<8,5>(p_shl69_fu_14445_p3.read());
}

void ShuffleNetV2::thread_p_shl69_fu_14445_p3() {
    p_shl69_fu_14445_p3 = esl_concat<2,3>(tmp_914_fu_14429_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl6_cast_fu_10549_p1() {
    p_shl6_cast_fu_10549_p1 = esl_zext<7,6>(p_shl6_fu_10541_p3.read());
}

void ShuffleNetV2::thread_p_shl6_fu_10541_p3() {
    p_shl6_fu_10541_p3 = esl_concat<2,4>(tmp_133_fu_10492_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl70_cast_fu_14486_p1() {
    p_shl70_cast_fu_14486_p1 = esl_zext<7,6>(p_shl70_fu_14478_p3.read());
}

void ShuffleNetV2::thread_p_shl70_fu_14478_p3() {
    p_shl70_fu_14478_p3 = esl_concat<2,4>(tmp_914_fu_14429_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl71_cast_fu_14498_p1() {
    p_shl71_cast_fu_14498_p1 = esl_zext<7,4>(p_shl71_fu_14490_p3.read());
}

void ShuffleNetV2::thread_p_shl71_fu_14490_p3() {
    p_shl71_fu_14490_p3 = esl_concat<2,2>(tmp_914_fu_14429_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl72_cast_fu_14934_p1() {
    p_shl72_cast_fu_14934_p1 = esl_zext<7,6>(p_shl72_fu_14926_p3.read());
}

void ShuffleNetV2::thread_p_shl72_fu_14926_p3() {
    p_shl72_fu_14926_p3 = esl_concat<1,5>(tmp_927_fu_14922_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl73_cast_fu_14946_p1() {
    p_shl73_cast_fu_14946_p1 = esl_zext<7,4>(p_shl73_fu_14938_p3.read());
}

void ShuffleNetV2::thread_p_shl73_fu_14938_p3() {
    p_shl73_fu_14938_p3 = esl_concat<1,3>(tmp_927_fu_14922_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl74_cast_fu_15224_p1() {
    p_shl74_cast_fu_15224_p1 = esl_zext<7,6>(p_shl74_fu_15216_p3.read());
}

void ShuffleNetV2::thread_p_shl74_fu_15216_p3() {
    p_shl74_fu_15216_p3 = esl_concat<1,5>(tmp_933_fu_15212_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl75_cast_fu_15236_p1() {
    p_shl75_cast_fu_15236_p1 = esl_zext<7,4>(p_shl75_fu_15228_p3.read());
}

void ShuffleNetV2::thread_p_shl75_fu_15228_p3() {
    p_shl75_fu_15228_p3 = esl_concat<1,3>(tmp_933_fu_15212_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl76_cast_fu_15023_p1() {
    p_shl76_cast_fu_15023_p1 = esl_zext<8,7>(p_shl76_fu_15015_p3.read());
}

void ShuffleNetV2::thread_p_shl76_fu_15015_p3() {
    p_shl76_fu_15015_p3 = esl_concat<2,5>(tmp_934_fu_15011_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl77_cast_fu_15035_p1() {
    p_shl77_cast_fu_15035_p1 = esl_zext<8,5>(p_shl77_fu_15027_p3.read());
}

void ShuffleNetV2::thread_p_shl77_fu_15027_p3() {
    p_shl77_fu_15027_p3 = esl_concat<2,3>(tmp_934_fu_15011_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl78_cast_fu_15068_p1() {
    p_shl78_cast_fu_15068_p1 = esl_zext<7,6>(p_shl78_fu_15060_p3.read());
}

void ShuffleNetV2::thread_p_shl78_fu_15060_p3() {
    p_shl78_fu_15060_p3 = esl_concat<2,4>(tmp_934_fu_15011_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl79_cast_fu_15080_p1() {
    p_shl79_cast_fu_15080_p1 = esl_zext<7,4>(p_shl79_fu_15072_p3.read());
}

void ShuffleNetV2::thread_p_shl79_fu_15072_p3() {
    p_shl79_fu_15072_p3 = esl_concat<2,2>(tmp_934_fu_15011_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl7_cast_fu_10561_p1() {
    p_shl7_cast_fu_10561_p1 = esl_zext<7,4>(p_shl7_fu_10553_p3.read());
}

void ShuffleNetV2::thread_p_shl7_fu_10553_p3() {
    p_shl7_fu_10553_p3 = esl_concat<2,2>(tmp_133_fu_10492_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl80_cast_fu_15574_p1() {
    p_shl80_cast_fu_15574_p1 = esl_zext<7,6>(p_shl80_fu_15566_p3.read());
}

void ShuffleNetV2::thread_p_shl80_fu_15566_p3() {
    p_shl80_fu_15566_p3 = esl_concat<1,5>(tmp_946_fu_15562_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl81_cast_fu_15586_p1() {
    p_shl81_cast_fu_15586_p1 = esl_zext<7,4>(p_shl81_fu_15578_p3.read());
}

void ShuffleNetV2::thread_p_shl81_fu_15578_p3() {
    p_shl81_fu_15578_p3 = esl_concat<1,3>(tmp_946_fu_15562_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl82_cast_fu_15660_p1() {
    p_shl82_cast_fu_15660_p1 = esl_zext<7,6>(p_shl82_fu_15652_p3.read());
}

void ShuffleNetV2::thread_p_shl82_fu_15652_p3() {
    p_shl82_fu_15652_p3 = esl_concat<1,5>(tmp_945_fu_15648_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl83_cast_fu_15672_p1() {
    p_shl83_cast_fu_15672_p1 = esl_zext<7,4>(p_shl83_fu_15664_p3.read());
}

void ShuffleNetV2::thread_p_shl83_fu_15664_p3() {
    p_shl83_fu_15664_p3 = esl_concat<1,3>(tmp_945_fu_15648_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl84_cast_fu_15942_p1() {
    p_shl84_cast_fu_15942_p1 = esl_zext<7,6>(p_shl84_fu_15934_p3.read());
}

void ShuffleNetV2::thread_p_shl84_fu_15934_p3() {
    p_shl84_fu_15934_p3 = esl_concat<1,5>(tmp_963_fu_15930_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl85_cast_fu_15954_p1() {
    p_shl85_cast_fu_15954_p1 = esl_zext<7,4>(p_shl85_fu_15946_p3.read());
}

void ShuffleNetV2::thread_p_shl85_fu_15946_p3() {
    p_shl85_fu_15946_p3 = esl_concat<1,3>(tmp_963_fu_15930_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl86_cast_fu_15366_p1() {
    p_shl86_cast_fu_15366_p1 = esl_zext<7,6>(p_shl86_fu_15358_p3.read());
}

void ShuffleNetV2::thread_p_shl86_fu_15358_p3() {
    p_shl86_fu_15358_p3 = esl_concat<1,5>(tmp_947_fu_15354_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl87_cast_fu_15378_p1() {
    p_shl87_cast_fu_15378_p1 = esl_zext<7,4>(p_shl87_fu_15370_p3.read());
}

void ShuffleNetV2::thread_p_shl87_fu_15370_p3() {
    p_shl87_fu_15370_p3 = esl_concat<1,3>(tmp_947_fu_15354_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl88_cast_fu_15749_p1() {
    p_shl88_cast_fu_15749_p1 = esl_zext<8,7>(p_shl88_fu_15741_p3.read());
}

void ShuffleNetV2::thread_p_shl88_fu_15741_p3() {
    p_shl88_fu_15741_p3 = esl_concat<2,5>(tmp_964_fu_15737_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl89_cast_fu_15761_p1() {
    p_shl89_cast_fu_15761_p1 = esl_zext<8,5>(p_shl89_fu_15753_p3.read());
}

void ShuffleNetV2::thread_p_shl89_fu_15753_p3() {
    p_shl89_fu_15753_p3 = esl_concat<2,3>(tmp_964_fu_15737_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl8_cast_fu_11047_p1() {
    p_shl8_cast_fu_11047_p1 = esl_zext<7,6>(p_shl8_fu_11039_p3.read());
}

void ShuffleNetV2::thread_p_shl8_fu_11039_p3() {
    p_shl8_fu_11039_p3 = esl_concat<1,5>(tmp_138_fu_11035_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl90_cast_fu_15794_p1() {
    p_shl90_cast_fu_15794_p1 = esl_zext<7,6>(p_shl90_fu_15786_p3.read());
}

void ShuffleNetV2::thread_p_shl90_fu_15786_p3() {
    p_shl90_fu_15786_p3 = esl_concat<2,4>(tmp_964_fu_15737_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl91_cast_fu_15806_p1() {
    p_shl91_cast_fu_15806_p1 = esl_zext<7,4>(p_shl91_fu_15798_p3.read());
}

void ShuffleNetV2::thread_p_shl91_fu_15798_p3() {
    p_shl91_fu_15798_p3 = esl_concat<2,2>(tmp_964_fu_15737_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl92_cast_fu_16242_p1() {
    p_shl92_cast_fu_16242_p1 = esl_zext<7,6>(p_shl92_fu_16234_p3.read());
}

void ShuffleNetV2::thread_p_shl92_fu_16234_p3() {
    p_shl92_fu_16234_p3 = esl_concat<1,5>(tmp_977_fu_16230_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl93_cast_fu_16254_p1() {
    p_shl93_cast_fu_16254_p1 = esl_zext<7,4>(p_shl93_fu_16246_p3.read());
}

void ShuffleNetV2::thread_p_shl93_fu_16246_p3() {
    p_shl93_fu_16246_p3 = esl_concat<1,3>(tmp_977_fu_16230_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl94_cast_fu_16524_p1() {
    p_shl94_cast_fu_16524_p1 = esl_zext<7,6>(p_shl94_fu_16516_p3.read());
}

void ShuffleNetV2::thread_p_shl94_fu_16516_p3() {
    p_shl94_fu_16516_p3 = esl_concat<1,5>(tmp_983_fu_16512_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl95_cast_fu_16536_p1() {
    p_shl95_cast_fu_16536_p1 = esl_zext<7,4>(p_shl95_fu_16528_p3.read());
}

void ShuffleNetV2::thread_p_shl95_fu_16528_p3() {
    p_shl95_fu_16528_p3 = esl_concat<1,3>(tmp_983_fu_16512_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl96_cast_fu_16331_p1() {
    p_shl96_cast_fu_16331_p1 = esl_zext<8,7>(p_shl96_fu_16323_p3.read());
}

void ShuffleNetV2::thread_p_shl96_fu_16323_p3() {
    p_shl96_fu_16323_p3 = esl_concat<2,5>(tmp_984_fu_16319_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl97_cast_fu_16343_p1() {
    p_shl97_cast_fu_16343_p1 = esl_zext<8,5>(p_shl97_fu_16335_p3.read());
}

void ShuffleNetV2::thread_p_shl97_fu_16335_p3() {
    p_shl97_fu_16335_p3 = esl_concat<2,3>(tmp_984_fu_16319_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl98_cast_fu_16376_p1() {
    p_shl98_cast_fu_16376_p1 = esl_zext<7,6>(p_shl98_fu_16368_p3.read());
}

void ShuffleNetV2::thread_p_shl98_fu_16368_p3() {
    p_shl98_fu_16368_p3 = esl_concat<2,4>(tmp_984_fu_16319_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl99_cast_fu_16388_p1() {
    p_shl99_cast_fu_16388_p1 = esl_zext<7,4>(p_shl99_fu_16380_p3.read());
}

void ShuffleNetV2::thread_p_shl99_fu_16380_p3() {
    p_shl99_fu_16380_p3 = esl_concat<2,2>(tmp_984_fu_16319_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl9_cast_fu_11059_p1() {
    p_shl9_cast_fu_11059_p1 = esl_zext<7,4>(p_shl9_fu_11051_p3.read());
}

void ShuffleNetV2::thread_p_shl9_fu_11051_p3() {
    p_shl9_fu_11051_p3 = esl_concat<1,3>(tmp_138_fu_11035_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl_cast_fu_10415_p1() {
    p_shl_cast_fu_10415_p1 = esl_zext<7,6>(p_shl_fu_10407_p3.read());
}

void ShuffleNetV2::thread_p_shl_fu_10407_p3() {
    p_shl_fu_10407_p3 = esl_concat<1,5>(tmp_122_fu_10403_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_shuffle_conv_1x1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_2010_cast_fu_27939_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state662.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1974_cast_fu_27251_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1941_cast_fu_26689_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state621.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1904_cast_fu_25983_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1871_cast_fu_25421_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state580.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1833_cast_fu_24719_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1808_cast_fu_24236_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1770_cast_fu_23534_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state518.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1736_cast_fu_22832_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1714_cast_fu_22393_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1677_cast_fu_21671_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1641_cast_fu_21081_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1602_cast_fu_20359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1566_cast_fu_19773_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state399.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1528_cast_fu_19055_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1494_cast_fu_18477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state358.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1456_cast_fu_17759_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1422_cast_fu_17181_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state317.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1385_cast_fu_16471_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1351_cast_fu_15889_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state276.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1314_cast_fu_15171_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1278_cast_fu_14581_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state235.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1241_cast_fu_13867_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1207_cast_fu_13289_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1170_cast_fu_12575_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1144_cast_fu_12080_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1105_cast1_fu_11362_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1070_cast_fu_10644_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1053_cast_fu_10258_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1028_cast_fu_9884_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_1004_cast1_fu_9513_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_982_cast_fu_9147_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_956_cast_fu_8774_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_778_cast_fu_8410_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_634_cast1_fu_8122_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_487_cast_fu_7762_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) (tmp_389_cast1_fu_7475_p1.read());
    } else {
        shuffle_conv_1x1_address0 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffle_conv_1x1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state132.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state235.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state276.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state317.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state339.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state358.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state380.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state399.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state462.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state481.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state518.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state580.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state602.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state621.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state662.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state684.read()))) {
        shuffle_conv_1x1_ce0 = ap_const_logic_1;
    } else {
        shuffle_conv_1x1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffle_conv_3x3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state674.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_1993_cast_fu_27575_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state633.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_1924_cast_fu_26325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state592.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_1852_cast_fu_25045_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state554.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_1789_cast_fu_23868_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state530.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_1755_cast_fu_23162_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_1697_cast_fu_22001_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state452.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_1622_cast_fu_20693_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state411.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_1549_cast_fu_19393_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state370.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_1477_cast_fu_18097_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_1405_cast_fu_16801_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state288.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_1334_cast_fu_15505_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state247.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_1261_cast_fu_14197_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_1190_cast_fu_12909_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state168.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_1125_cast_fu_11696_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_1090_cast_fu_10978_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_1051_cast1_fu_10099_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_1002_cast_fu_9356_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_945_cast_fu_8615_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_609_cast_fu_7963_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) (tmp_484_cast1_fu_7614_p1.read());
    } else {
        shuffle_conv_3x3_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffle_conv_3x3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state168.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state247.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state288.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state370.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state411.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state452.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state530.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state554.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state592.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state633.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state674.read()))) {
        shuffle_conv_3x3_ce0 = ap_const_logic_1;
    } else {
        shuffle_conv_3x3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_0_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read())) {
        shuffleunit0_0_outpu_address0 =  (sc_lv<14>) (tmp_1027_cast1_fu_9637_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        shuffleunit0_0_outpu_address0 =  (sc_lv<14>) (tmp_985_cast1_fu_9027_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        shuffleunit0_0_outpu_address0 = grp_shuffle_24_fu_7221_output_r_address0.read();
    } else {
        shuffleunit0_0_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit0_0_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        shuffleunit0_0_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        shuffleunit0_0_outpu_ce0 = grp_shuffle_24_fu_7221_output_r_ce0.read();
    } else {
        shuffleunit0_0_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_0_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        shuffleunit0_0_outpu_we0 = grp_shuffle_24_fu_7221_output_r_we0.read();
    } else {
        shuffleunit0_0_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_1_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        shuffleunit0_1_outpu_address0 =  (sc_lv<14>) (tmp_1062_cast1_fu_10382_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        shuffleunit0_1_outpu_address0 =  (sc_lv<14>) (tmp_1031_cast_fu_9764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        shuffleunit0_1_outpu_address0 = grp_shuffle_24_fu_7221_output_r_address0.read();
    } else {
        shuffleunit0_1_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit0_1_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()))) {
        shuffleunit0_1_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        shuffleunit0_1_outpu_ce0 = grp_shuffle_24_fu_7221_output_r_ce0.read();
    } else {
        shuffleunit0_1_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_1_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        shuffleunit0_1_outpu_we0 = grp_shuffle_24_fu_7221_output_r_we0.read();
    } else {
        shuffleunit0_1_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_2_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read())) {
        shuffleunit0_2_outpu_address0 = grp_shuffle_24_fu_7221_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read())) {
        shuffleunit0_2_outpu_address0 = grp_subconv_3x3_16_strid_fu_7139_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state138.read())) {
        shuffleunit0_2_outpu_address0 = grp_subconv_1x1_16p_fu_7078_shuffleunit0_2_outpu_address0.read();
    } else {
        shuffleunit0_2_outpu_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit0_2_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read())) {
        shuffleunit0_2_outpu_ce0 = grp_shuffle_24_fu_7221_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read())) {
        shuffleunit0_2_outpu_ce0 = grp_subconv_3x3_16_strid_fu_7139_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state138.read())) {
        shuffleunit0_2_outpu_ce0 = grp_subconv_1x1_16p_fu_7078_shuffleunit0_2_outpu_ce0.read();
    } else {
        shuffleunit0_2_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit0_2_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read())) {
        shuffleunit0_2_outpu_we0 = grp_shuffle_24_fu_7221_output_r_we0.read();
    } else {
        shuffleunit0_2_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_0_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state266.read())) {
        shuffleunit1_0_outpu_address0 =  (sc_lv<13>) (tmp_1302_cast_fu_14770_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read())) {
        shuffleunit1_0_outpu_address0 =  (sc_lv<13>) (tmp_1233_cast_fu_13601_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read())) {
        shuffleunit1_0_outpu_address0 = grp_shuffle_48_fu_7233_output_r_address0.read();
    } else {
        shuffleunit1_0_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_0_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state266.read()))) {
        shuffleunit1_0_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read())) {
        shuffleunit1_0_outpu_ce0 = grp_shuffle_48_fu_7233_output_r_ce0.read();
    } else {
        shuffleunit1_0_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_0_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read())) {
        shuffleunit1_0_outpu_we0 = grp_shuffle_48_fu_7233_output_r_we0.read();
    } else {
        shuffleunit1_0_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_1_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read())) {
        shuffleunit1_1_outpu_address0 =  (sc_lv<13>) (tmp_1375_cast_fu_16078_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state271.read())) {
        shuffleunit1_1_outpu_address0 =  (sc_lv<13>) (tmp_1303_cast_fu_14892_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read())) {
        shuffleunit1_1_outpu_address0 = grp_shuffle_48_fu_7233_output_r_address0.read();
    } else {
        shuffleunit1_1_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_1_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state271.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state307.read()))) {
        shuffleunit1_1_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read())) {
        shuffleunit1_1_outpu_ce0 = grp_shuffle_48_fu_7233_output_r_ce0.read();
    } else {
        shuffleunit1_1_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_1_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read())) {
        shuffleunit1_1_outpu_we0 = grp_shuffle_48_fu_7233_output_r_we0.read();
    } else {
        shuffleunit1_1_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_2_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state348.read())) {
        shuffleunit1_2_outpu_address0 =  (sc_lv<13>) (tmp_1446_cast_fu_17366_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read())) {
        shuffleunit1_2_outpu_address0 =  (sc_lv<13>) (tmp_1376_cast_fu_16200_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        shuffleunit1_2_outpu_address0 = grp_shuffle_48_fu_7233_output_r_address0.read();
    } else {
        shuffleunit1_2_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_2_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state348.read()))) {
        shuffleunit1_2_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        shuffleunit1_2_outpu_ce0 = grp_shuffle_48_fu_7233_output_r_ce0.read();
    } else {
        shuffleunit1_2_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_2_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        shuffleunit1_2_outpu_we0 = grp_shuffle_48_fu_7233_output_r_we0.read();
    } else {
        shuffleunit1_2_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_3_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state389.read())) {
        shuffleunit1_3_outpu_address0 =  (sc_lv<13>) (tmp_1518_cast_fu_18662_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state353.read())) {
        shuffleunit1_3_outpu_address0 =  (sc_lv<13>) (tmp_1447_cast_fu_17488_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state350.read())) {
        shuffleunit1_3_outpu_address0 = grp_shuffle_48_fu_7233_output_r_address0.read();
    } else {
        shuffleunit1_3_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_3_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state353.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state389.read()))) {
        shuffleunit1_3_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state350.read())) {
        shuffleunit1_3_outpu_ce0 = grp_shuffle_48_fu_7233_output_r_ce0.read();
    } else {
        shuffleunit1_3_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_3_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state350.read())) {
        shuffleunit1_3_outpu_we0 = grp_shuffle_48_fu_7233_output_r_we0.read();
    } else {
        shuffleunit1_3_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_4_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state430.read())) {
        shuffleunit1_4_outpu_address0 =  (sc_lv<13>) (tmp_1590_cast_fu_19958_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state394.read())) {
        shuffleunit1_4_outpu_address0 =  (sc_lv<13>) (tmp_1519_cast_fu_18784_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read())) {
        shuffleunit1_4_outpu_address0 = grp_shuffle_48_fu_7233_output_r_address0.read();
    } else {
        shuffleunit1_4_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_4_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state394.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state430.read()))) {
        shuffleunit1_4_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read())) {
        shuffleunit1_4_outpu_ce0 = grp_shuffle_48_fu_7233_output_r_ce0.read();
    } else {
        shuffleunit1_4_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_4_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read())) {
        shuffleunit1_4_outpu_we0 = grp_shuffle_48_fu_7233_output_r_we0.read();
    } else {
        shuffleunit1_4_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_5_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read())) {
        shuffleunit1_5_outpu_address0 =  (sc_lv<13>) (tmp_1665_cast_fu_21270_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state435.read())) {
        shuffleunit1_5_outpu_address0 =  (sc_lv<13>) (tmp_1591_cast_fu_20080_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read())) {
        shuffleunit1_5_outpu_address0 = grp_shuffle_48_fu_7233_output_r_address0.read();
    } else {
        shuffleunit1_5_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_5_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state435.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read()))) {
        shuffleunit1_5_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read())) {
        shuffleunit1_5_outpu_ce0 = grp_shuffle_48_fu_7233_output_r_ce0.read();
    } else {
        shuffleunit1_5_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_5_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state432.read())) {
        shuffleunit1_5_outpu_we0 = grp_shuffle_48_fu_7233_output_r_we0.read();
    } else {
        shuffleunit1_5_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_6_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state512.read())) {
        shuffleunit1_6_outpu_address0 =  (sc_lv<13>) (tmp_1728_cast_fu_22582_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state476.read())) {
        shuffleunit1_6_outpu_address0 =  (sc_lv<13>) (tmp_1666_cast_fu_21392_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state473.read())) {
        shuffleunit1_6_outpu_address0 = grp_shuffle_48_fu_7233_output_r_address0.read();
    } else {
        shuffleunit1_6_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_6_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state476.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state512.read()))) {
        shuffleunit1_6_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state473.read())) {
        shuffleunit1_6_outpu_ce0 = grp_shuffle_48_fu_7233_output_r_ce0.read();
    } else {
        shuffleunit1_6_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_6_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state473.read())) {
        shuffleunit1_6_outpu_we0 = grp_shuffle_48_fu_7233_output_r_we0.read();
    } else {
        shuffleunit1_6_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_7_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state514.read())) {
        shuffleunit1_7_outpu_address0 = grp_shuffle_48_fu_7233_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state560.read())) {
        shuffleunit1_7_outpu_address0 = grp_subconv_3x3_8_stride_fu_7176_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state524.read())) {
        shuffleunit1_7_outpu_address0 = grp_subconv_1x1_8p_fu_7066_shuffleunit1_7_outpu_address0.read();
    } else {
        shuffleunit1_7_outpu_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit1_7_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state514.read())) {
        shuffleunit1_7_outpu_ce0 = grp_shuffle_48_fu_7233_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state560.read())) {
        shuffleunit1_7_outpu_ce0 = grp_subconv_3x3_8_stride_fu_7176_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state524.read())) {
        shuffleunit1_7_outpu_ce0 = grp_subconv_1x1_8p_fu_7066_shuffleunit1_7_outpu_ce0.read();
    } else {
        shuffleunit1_7_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit1_7_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state514.read())) {
        shuffleunit1_7_outpu_we0 = grp_shuffle_48_fu_7233_output_r_we0.read();
    } else {
        shuffleunit1_7_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_0_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state652.read())) {
        shuffleunit2_0_outpu_address0 =  (sc_lv<12>) (tmp_1964_cast_fu_26874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read())) {
        shuffleunit2_0_outpu_address0 =  (sc_lv<12>) (tmp_1896_cast_fu_25733_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state613.read())) {
        shuffleunit2_0_outpu_address0 = grp_shuffle_96_fu_7250_output_r_address0.read();
    } else {
        shuffleunit2_0_outpu_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_0_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state652.read()))) {
        shuffleunit2_0_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state613.read())) {
        shuffleunit2_0_outpu_ce0 = grp_shuffle_96_fu_7250_output_r_ce0.read();
    } else {
        shuffleunit2_0_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_0_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state613.read())) {
        shuffleunit2_0_outpu_we0 = grp_shuffle_96_fu_7250_output_r_we0.read();
    } else {
        shuffleunit2_0_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_1_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state693.read())) {
        shuffleunit2_1_outpu_address0 =  (sc_lv<12>) (tmp_2024_cast_fu_28124_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state657.read())) {
        shuffleunit2_1_outpu_address0 =  (sc_lv<12>) (tmp_1965_cast_fu_26996_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state654.read())) {
        shuffleunit2_1_outpu_address0 = grp_shuffle_96_fu_7250_output_r_address0.read();
    } else {
        shuffleunit2_1_outpu_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_1_outpu_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state657.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state693.read()))) {
        shuffleunit2_1_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state654.read())) {
        shuffleunit2_1_outpu_ce0 = grp_shuffle_96_fu_7250_output_r_ce0.read();
    } else {
        shuffleunit2_1_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_1_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state654.read())) {
        shuffleunit2_1_outpu_we0 = grp_shuffle_96_fu_7250_output_r_we0.read();
    } else {
        shuffleunit2_1_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state695.read())) {
        shuffleunit2_2_outpu_address0 = grp_shuffle_96_fu_7250_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state697.read())) {
        shuffleunit2_2_outpu_address0 = grp_conv_last_fu_7054_shuffleunit2_2_outpu_address0.read();
    } else {
        shuffleunit2_2_outpu_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state695.read())) {
        shuffleunit2_2_outpu_ce0 = grp_shuffle_96_fu_7250_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state697.read())) {
        shuffleunit2_2_outpu_ce0 = grp_conv_last_fu_7054_shuffleunit2_2_outpu_ce0.read();
    } else {
        shuffleunit2_2_outpu_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state695.read())) {
        shuffleunit2_2_outpu_we0 = grp_shuffle_96_fu_7250_output_r_we0.read();
    } else {
        shuffleunit2_2_outpu_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_tmp10_fu_12159_p2() {
    tmp10_fu_12159_p2 = (!ap_const_lv10_228.is_01() || !tmp_369_cast_fu_12155_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_369_cast_fu_12155_p1.read()));
}

void ShuffleNetV2::thread_tmp11_fu_12461_p2() {
    tmp11_fu_12461_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_409_cast_fu_12457_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_409_cast_fu_12457_p1.read()));
}

void ShuffleNetV2::thread_tmp12_fu_12654_p2() {
    tmp12_fu_12654_p2 = (!ap_const_lv10_258.is_01() || !tmp_398_cast_fu_12650_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_398_cast_fu_12650_p1.read()));
}

void ShuffleNetV2::thread_tmp13_cast1_fu_12794_p1() {
    tmp13_cast1_fu_12794_p1 = esl_sext<8,7>(tmp13_fu_12788_p2.read());
}

void ShuffleNetV2::thread_tmp13_cast_fu_12798_p1() {
    tmp13_cast_fu_12798_p1 = esl_zext<9,8>(tmp13_cast1_fu_12794_p1.read());
}

void ShuffleNetV2::thread_tmp13_fu_12788_p2() {
    tmp13_fu_12788_p2 = (!ap_const_lv7_58.is_01() || !tmp_315_fu_12782_p2.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_315_fu_12782_p2.read()));
}

void ShuffleNetV2::thread_tmp14_fu_13004_p2() {
    tmp14_fu_13004_p2 = (!ap_const_lv10_288.is_01() || !tmp_416_cast_fu_13000_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_288) + sc_bigint<10>(tmp_416_cast_fu_13000_p1.read()));
}

void ShuffleNetV2::thread_tmp15_fu_13175_p2() {
    tmp15_fu_13175_p2 = (!ap_const_lv10_258.is_01() || !tmp_442_cast_fu_13171_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_442_cast_fu_13171_p1.read()));
}

void ShuffleNetV2::thread_tmp16_fu_13368_p2() {
    tmp16_fu_13368_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_426_cast_fu_13364_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_426_cast_fu_13364_p1.read()));
}

void ShuffleNetV2::thread_tmp17_fu_13753_p2() {
    tmp17_fu_13753_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_469_cast_fu_13749_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_469_cast_fu_13749_p1.read()));
}

void ShuffleNetV2::thread_tmp18_fu_13946_p2() {
    tmp18_fu_13946_p2 = (!ap_const_lv10_2E8.is_01() || !tmp_458_cast_fu_13942_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2E8) + sc_bigint<10>(tmp_458_cast_fu_13942_p1.read()));
}

void ShuffleNetV2::thread_tmp19_fu_14084_p2() {
    tmp19_fu_14084_p2 = (!ap_const_lv9_108.is_01() || !tmp_495_cast_fu_14080_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_108) + sc_bigint<9>(tmp_495_cast_fu_14080_p1.read()));
}

void ShuffleNetV2::thread_tmp1_fu_10530_p2() {
    tmp1_fu_10530_p2 = (!ap_const_lv9_D8.is_01() || !tmp_319_cast_fu_10526_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_D8) + sc_bigint<9>(tmp_319_cast_fu_10526_p1.read()));
}

void ShuffleNetV2::thread_tmp20_fu_14292_p2() {
    tmp20_fu_14292_p2 = (!ap_const_lv9_118.is_01() || !tmp_476_cast_cast_fu_14288_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_118) + sc_bigint<9>(tmp_476_cast_cast_fu_14288_p1.read()));
}

void ShuffleNetV2::thread_tmp21_fu_14467_p2() {
    tmp21_fu_14467_p2 = (!ap_const_lv10_318.is_01() || !tmp_502_cast_fu_14463_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_502_cast_fu_14463_p1.read()));
}

void ShuffleNetV2::thread_tmp22_fu_14660_p2() {
    tmp22_fu_14660_p2 = (!ap_const_lv9_148.is_01() || !tmp_486_cast_cast_fu_14656_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_148) + sc_bigint<9>(tmp_486_cast_cast_fu_14656_p1.read()));
}

void ShuffleNetV2::thread_tmp23_fu_15049_p2() {
    tmp23_fu_15049_p2 = (!ap_const_lv9_178.is_01() || !tmp_529_cast_cast_fu_15045_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_529_cast_cast_fu_15045_p1.read()));
}

void ShuffleNetV2::thread_tmp24_fu_15250_p2() {
    tmp24_fu_15250_p2 = (!ap_const_lv9_178.is_01() || !tmp_518_cast_cast_fu_15246_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_518_cast_cast_fu_15246_p1.read()));
}

void ShuffleNetV2::thread_tmp25_fu_15392_p2() {
    tmp25_fu_15392_p2 = (!ap_const_lv9_138.is_01() || !tmp_555_cast_fu_15388_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_555_cast_fu_15388_p1.read()));
}

void ShuffleNetV2::thread_tmp26_fu_15600_p2() {
    tmp26_fu_15600_p2 = (!ap_const_lv8_A8.is_01() || !tmp_536_cast_cast_fu_15596_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_536_cast_cast_fu_15596_p1.read()));
}

void ShuffleNetV2::thread_tmp27_fu_15775_p2() {
    tmp27_fu_15775_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_562_cast_fu_15771_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_562_cast_fu_15771_p1.read()));
}

void ShuffleNetV2::thread_tmp28_cast1_fu_15970_p1() {
    tmp28_cast1_fu_15970_p1 = esl_sext<10,7>(tmp28_fu_15964_p2.read());
}

void ShuffleNetV2::thread_tmp28_cast_fu_15974_p1() {
    tmp28_cast_fu_15974_p1 = esl_zext<11,10>(tmp28_cast1_fu_15970_p1.read());
}

void ShuffleNetV2::thread_tmp28_fu_15964_p2() {
    tmp28_fu_15964_p2 = (!ap_const_lv7_58.is_01() || !tmp_413_fu_15958_p2.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_413_fu_15958_p2.read()));
}

void ShuffleNetV2::thread_tmp29_fu_16357_p2() {
    tmp29_fu_16357_p2 = (!ap_const_lv11_438.is_01() || !tmp_589_cast_fu_16353_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_589_cast_fu_16353_p1.read()));
}

void ShuffleNetV2::thread_tmp2_fu_10723_p2() {
    tmp2_fu_10723_p2 = (!ap_const_lv9_168.is_01() || !tmp_308_cast_fu_10719_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_308_cast_fu_10719_p1.read()));
}

void ShuffleNetV2::thread_tmp30_fu_16550_p2() {
    tmp30_fu_16550_p2 = (!ap_const_lv11_408.is_01() || !tmp_578_cast_fu_16546_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_408) + sc_bigint<11>(tmp_578_cast_fu_16546_p1.read()));
}

void ShuffleNetV2::thread_tmp31_fu_16688_p2() {
    tmp31_fu_16688_p2 = (!ap_const_lv9_168.is_01() || !tmp_615_cast_fu_16684_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_615_cast_fu_16684_p1.read()));
}

void ShuffleNetV2::thread_tmp32_fu_16896_p2() {
    tmp32_fu_16896_p2 = (!ap_const_lv11_438.is_01() || !tmp_596_cast_fu_16892_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_596_cast_fu_16892_p1.read()));
}

void ShuffleNetV2::thread_tmp33_fu_17067_p2() {
    tmp33_fu_17067_p2 = (!ap_const_lv11_498.is_01() || !tmp_622_cast_fu_17063_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_622_cast_fu_17063_p1.read()));
}

void ShuffleNetV2::thread_tmp34_fu_17260_p2() {
    tmp34_fu_17260_p2 = (!ap_const_lv11_468.is_01() || !tmp_606_cast_fu_17256_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_468) + sc_bigint<11>(tmp_606_cast_fu_17256_p1.read()));
}

void ShuffleNetV2::thread_tmp35_fu_17645_p2() {
    tmp35_fu_17645_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_649_cast_fu_17641_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_649_cast_fu_17641_p1.read()));
}

void ShuffleNetV2::thread_tmp36_fu_17838_p2() {
    tmp36_fu_17838_p2 = (!ap_const_lv11_498.is_01() || !tmp_638_cast_fu_17834_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_638_cast_fu_17834_p1.read()));
}

void ShuffleNetV2::thread_tmp37_fu_17976_p2() {
    tmp37_fu_17976_p2 = (!ap_const_lv8_98.is_01() || !tmp_675_cast_cast_fu_17972_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_675_cast_cast_fu_17972_p1.read()));
}

void ShuffleNetV2::thread_tmp38_fu_18192_p2() {
    tmp38_fu_18192_p2 = (!ap_const_lv11_4C8.is_01() || !tmp_656_cast_fu_18188_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4C8) + sc_bigint<11>(tmp_656_cast_fu_18188_p1.read()));
}

void ShuffleNetV2::thread_tmp39_fu_18363_p2() {
    tmp39_fu_18363_p2 = (!ap_const_lv11_558.is_01() || !tmp_682_cast_fu_18359_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_682_cast_fu_18359_p1.read()));
}

void ShuffleNetV2::thread_tmp3_fu_10861_p2() {
    tmp3_fu_10861_p2 = (!ap_const_lv8_78.is_01() || !tmp_345_cast_fu_10857_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_78) + sc_bigint<8>(tmp_345_cast_fu_10857_p1.read()));
}

void ShuffleNetV2::thread_tmp40_fu_18556_p2() {
    tmp40_fu_18556_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_666_cast_fu_18552_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_666_cast_fu_18552_p1.read()));
}

void ShuffleNetV2::thread_tmp41_fu_18941_p2() {
    tmp41_fu_18941_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_709_cast_fu_18937_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_709_cast_fu_18937_p1.read()));
}

void ShuffleNetV2::thread_tmp42_fu_19134_p2() {
    tmp42_fu_19134_p2 = (!ap_const_lv11_528.is_01() || !tmp_698_cast_fu_19130_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_528) + sc_bigint<11>(tmp_698_cast_fu_19130_p1.read()));
}

void ShuffleNetV2::thread_tmp43_fu_19272_p2() {
    tmp43_fu_19272_p2 = (!ap_const_lv8_C8.is_01() || !tmp_735_cast_cast_fu_19268_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_735_cast_cast_fu_19268_p1.read()));
}

void ShuffleNetV2::thread_tmp44_fu_19488_p2() {
    tmp44_fu_19488_p2 = (!ap_const_lv11_558.is_01() || !tmp_716_cast_fu_19484_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_716_cast_fu_19484_p1.read()));
}

void ShuffleNetV2::thread_tmp45_fu_19659_p2() {
    tmp45_fu_19659_p2 = (!ap_const_lv11_618.is_01() || !tmp_742_cast_fu_19655_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_618) + sc_bigint<11>(tmp_742_cast_fu_19655_p1.read()));
}

void ShuffleNetV2::thread_tmp46_fu_19852_p2() {
    tmp46_fu_19852_p2 = (!ap_const_lv11_588.is_01() || !tmp_726_cast_fu_19848_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_588) + sc_bigint<11>(tmp_726_cast_fu_19848_p1.read()));
}

void ShuffleNetV2::thread_tmp47_fu_20237_p2() {
    tmp47_fu_20237_p2 = (!ap_const_lv10_278.is_01() || !tmp_769_cast_cast_fu_20233_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_769_cast_cast_fu_20233_p1.read()));
}

void ShuffleNetV2::thread_tmp48_fu_20438_p2() {
    tmp48_fu_20438_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_758_cast_fu_20434_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_758_cast_fu_20434_p1.read()));
}

void ShuffleNetV2::thread_tmp49_fu_20576_p2() {
    tmp49_fu_20576_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_795_cast_fu_20572_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_795_cast_fu_20572_p1.read()));
}

void ShuffleNetV2::thread_tmp4_fu_11073_p2() {
    tmp4_fu_11073_p2 = (!ap_const_lv8_98.is_01() || !tmp_326_cast_cast_fu_11069_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_326_cast_cast_fu_11069_p1.read()));
}

void ShuffleNetV2::thread_tmp50_fu_20788_p2() {
    tmp50_fu_20788_p2 = (!ap_const_lv11_5E8.is_01() || !tmp_776_cast_fu_20784_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5E8) + sc_bigint<11>(tmp_776_cast_fu_20784_p1.read()));
}

void ShuffleNetV2::thread_tmp51_fu_20959_p2() {
    tmp51_fu_20959_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_802_cast_cast_fu_20955_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_802_cast_cast_fu_20955_p1.read()));
}

void ShuffleNetV2::thread_tmp52_fu_21160_p2() {
    tmp52_fu_21160_p2 = (!ap_const_lv10_218.is_01() || !tmp_786_cast_cast_fu_21156_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_218) + sc_bigint<10>(tmp_786_cast_cast_fu_21156_p1.read()));
}

void ShuffleNetV2::thread_tmp53_fu_21549_p2() {
    tmp53_fu_21549_p2 = (!ap_const_lv9_138.is_01() || !tmp_829_cast_cast_fu_21545_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_829_cast_cast_fu_21545_p1.read()));
}

void ShuffleNetV2::thread_tmp54_fu_21750_p2() {
    tmp54_fu_21750_p2 = (!ap_const_lv10_248.is_01() || !tmp_818_cast_cast_fu_21746_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_248) + sc_bigint<10>(tmp_818_cast_cast_fu_21746_p1.read()));
}

void ShuffleNetV2::thread_tmp55_fu_21892_p2() {
    tmp55_fu_21892_p2 = (!ap_const_lv10_228.is_01() || !tmp_855_cast_fu_21888_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_855_cast_fu_21888_p1.read()));
}

void ShuffleNetV2::thread_tmp56_fu_22096_p2() {
    tmp56_fu_22096_p2 = (!ap_const_lv10_278.is_01() || !tmp_836_cast_cast_fu_22092_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_836_cast_cast_fu_22092_p1.read()));
}

void ShuffleNetV2::thread_tmp57_cast1_fu_22277_p1() {
    tmp57_cast1_fu_22277_p1 = esl_sext<11,9>(tmp57_fu_22271_p2.read());
}

void ShuffleNetV2::thread_tmp57_cast_fu_22281_p1() {
    tmp57_cast_fu_22281_p1 = esl_zext<12,11>(tmp57_cast1_fu_22277_p1.read());
}

void ShuffleNetV2::thread_tmp57_fu_22271_p2() {
    tmp57_fu_22271_p2 = (!ap_const_lv9_198.is_01() || !tmp_862_cast_cast_fu_22267_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_862_cast_cast_fu_22267_p1.read()));
}

void ShuffleNetV2::thread_tmp58_fu_22472_p2() {
    tmp58_fu_22472_p2 = (!ap_const_lv10_2A8.is_01() || !tmp_846_cast_cast_fu_22468_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2A8) + sc_bigint<10>(tmp_846_cast_cast_fu_22468_p1.read()));
}

void ShuffleNetV2::thread_tmp59_fu_22732_p2() {
    tmp59_fu_22732_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_884_cast_fu_22728_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_884_cast_fu_22728_p1.read()));
}

void ShuffleNetV2::thread_tmp5_fu_11248_p2() {
    tmp5_fu_11248_p2 = (!ap_const_lv9_138.is_01() || !tmp_352_cast_fu_11244_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_352_cast_fu_11244_p1.read()));
}

void ShuffleNetV2::thread_tmp60_fu_22911_p2() {
    tmp60_fu_22911_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_873_cast_cast_fu_22907_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_873_cast_cast_fu_22907_p1.read()));
}

void ShuffleNetV2::thread_tmp61_fu_23053_p2() {
    tmp61_fu_23053_p2 = (!ap_const_lv10_258.is_01() || !tmp_910_cast_fu_23049_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_910_cast_fu_23049_p1.read()));
}

void ShuffleNetV2::thread_tmp62_fu_23257_p2() {
    tmp62_fu_23257_p2 = (!ap_const_lv9_138.is_01() || !tmp_891_cast_cast_fu_23253_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_891_cast_cast_fu_23253_p1.read()));
}

void ShuffleNetV2::thread_tmp63_fu_23434_p2() {
    tmp63_fu_23434_p2 = (!ap_const_lv12_978.is_01() || !tmp_917_cast_fu_23430_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_917_cast_fu_23430_p1.read()));
}

void ShuffleNetV2::thread_tmp64_cast1_fu_23619_p1() {
    tmp64_cast1_fu_23619_p1 = esl_sext<11,9>(tmp64_fu_23613_p2.read());
}

void ShuffleNetV2::thread_tmp64_cast_fu_23623_p1() {
    tmp64_cast_fu_23623_p1 = esl_zext<12,11>(tmp64_cast1_fu_23619_p1.read());
}

void ShuffleNetV2::thread_tmp64_fu_23613_p2() {
    tmp64_fu_23613_p2 = (!ap_const_lv9_198.is_01() || !tmp_901_cast_cast_fu_23609_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_901_cast_cast_fu_23609_p1.read()));
}

void ShuffleNetV2::thread_tmp65_fu_23759_p2() {
    tmp65_fu_23759_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_943_cast_fu_23755_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_943_cast_fu_23755_p1.read()));
}

void ShuffleNetV2::thread_tmp66_fu_23963_p2() {
    tmp66_fu_23963_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_924_cast_fu_23959_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_924_cast_fu_23959_p1.read()));
}

void ShuffleNetV2::thread_tmp67_fu_24136_p2() {
    tmp67_fu_24136_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_955_cast_fu_24132_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_955_cast_fu_24132_p1.read()));
}

void ShuffleNetV2::thread_tmp68_fu_24315_p2() {
    tmp68_fu_24315_p2 = (!ap_const_lv12_858.is_01() || !tmp_934_cast_fu_24311_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_858) + sc_bigint<12>(tmp_934_cast_fu_24311_p1.read()));
}

void ShuffleNetV2::thread_tmp69_fu_24619_p2() {
    tmp69_fu_24619_p2 = (!ap_const_lv12_C78.is_01() || !tmp_974_cast_fu_24615_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C78) + sc_bigint<12>(tmp_974_cast_fu_24615_p1.read()));
}

void ShuffleNetV2::thread_tmp6_fu_11441_p2() {
    tmp6_fu_11441_p2 = (!ap_const_lv8_C8.is_01() || !tmp_336_cast_cast_fu_11437_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_336_cast_cast_fu_11437_p1.read()));
}

void ShuffleNetV2::thread_tmp70_fu_24798_p2() {
    tmp70_fu_24798_p2 = (!ap_const_lv12_8B8.is_01() || !tmp_963_cast_fu_24794_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_8B8) + sc_bigint<12>(tmp_963_cast_fu_24794_p1.read()));
}

void ShuffleNetV2::thread_tmp71_fu_24936_p2() {
    tmp71_fu_24936_p2 = (!ap_const_lv10_318.is_01() || !tmp_1000_cast_fu_24932_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_1000_cast_fu_24932_p1.read()));
}

void ShuffleNetV2::thread_tmp72_fu_25140_p2() {
    tmp72_fu_25140_p2 = (!ap_const_lv12_918.is_01() || !tmp_981_cast_fu_25136_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_918) + sc_bigint<12>(tmp_981_cast_fu_25136_p1.read()));
}

void ShuffleNetV2::thread_tmp73_fu_25313_p2() {
    tmp73_fu_25313_p2 = (!ap_const_lv11_5F8.is_01() || !tmp_1007_cast_cast_fu_25309_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5F8) + sc_bigint<11>(tmp_1007_cast_cast_fu_25309_p1.read()));
}

void ShuffleNetV2::thread_tmp74_fu_25500_p2() {
    tmp74_fu_25500_p2 = (!ap_const_lv12_978.is_01() || !tmp_991_cast_fu_25496_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_991_cast_fu_25496_p1.read()));
}

void ShuffleNetV2::thread_tmp75_fu_25887_p2() {
    tmp75_fu_25887_p2 = (!ap_const_lv13_F78.is_01() || !tmp_1034_cast_fu_25883_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_F78) + sc_bigint<13>(tmp_1034_cast_fu_25883_p1.read()));
}

void ShuffleNetV2::thread_tmp76_fu_26062_p2() {
    tmp76_fu_26062_p2 = (!ap_const_lv12_9D8.is_01() || !tmp_1023_cast_fu_26058_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_9D8) + sc_bigint<12>(tmp_1023_cast_fu_26058_p1.read()));
}

void ShuffleNetV2::thread_tmp77_fu_26200_p2() {
    tmp77_fu_26200_p2 = (!ap_const_lv9_178.is_01() || !tmp_1060_cast_cast_fu_26196_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_1060_cast_cast_fu_26196_p1.read()));
}

void ShuffleNetV2::thread_tmp78_fu_26420_p2() {
    tmp78_fu_26420_p2 = (!ap_const_lv12_A38.is_01() || !tmp_1041_cast_fu_26416_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A38) + sc_bigint<12>(tmp_1041_cast_fu_26416_p1.read()));
}

void ShuffleNetV2::thread_tmp79_fu_26593_p2() {
    tmp79_fu_26593_p2 = (!ap_const_lv13_10F8.is_01() || !tmp_1067_cast_fu_26589_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_10F8) + sc_bigint<13>(tmp_1067_cast_fu_26589_p1.read()));
}

void ShuffleNetV2::thread_tmp7_fu_11583_p2() {
    tmp7_fu_11583_p2 = (!ap_const_lv8_A8.is_01() || !tmp_378_cast_fu_11579_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_378_cast_fu_11579_p1.read()));
}

void ShuffleNetV2::thread_tmp80_fu_26768_p2() {
    tmp80_fu_26768_p2 = (!ap_const_lv12_A98.is_01() || !tmp_1051_cast_fu_26764_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A98) + sc_bigint<12>(tmp_1051_cast_fu_26764_p1.read()));
}

void ShuffleNetV2::thread_tmp81_fu_27155_p2() {
    tmp81_fu_27155_p2 = (!ap_const_lv13_1278.is_01() || !tmp_1094_cast_fu_27151_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1278) + sc_bigint<13>(tmp_1094_cast_fu_27151_p1.read()));
}

void ShuffleNetV2::thread_tmp82_fu_27330_p2() {
    tmp82_fu_27330_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_1083_cast_fu_27326_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_1083_cast_fu_27326_p1.read()));
}

void ShuffleNetV2::thread_tmp83_fu_27468_p2() {
    tmp83_fu_27468_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_1120_cast_fu_27464_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_1120_cast_fu_27464_p1.read()));
}

void ShuffleNetV2::thread_tmp84_fu_27670_p2() {
    tmp84_fu_27670_p2 = (!ap_const_lv12_B58.is_01() || !tmp_1101_cast_fu_27666_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_B58) + sc_bigint<12>(tmp_1101_cast_fu_27666_p1.read()));
}

void ShuffleNetV2::thread_tmp85_fu_27843_p2() {
    tmp85_fu_27843_p2 = (!ap_const_lv13_13F8.is_01() || !tmp_1127_cast_fu_27839_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_13F8) + sc_bigint<13>(tmp_1127_cast_fu_27839_p1.read()));
}

void ShuffleNetV2::thread_tmp86_fu_28018_p2() {
    tmp86_fu_28018_p2 = (!ap_const_lv12_BB8.is_01() || !tmp_1111_cast_fu_28014_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_BB8) + sc_bigint<12>(tmp_1111_cast_fu_28014_p1.read()));
}

void ShuffleNetV2::thread_tmp8_fu_11791_p2() {
    tmp8_fu_11791_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_359_cast_fu_11787_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_359_cast_fu_11787_p1.read()));
}

void ShuffleNetV2::thread_tmp9_cast_fu_11968_p1() {
    tmp9_cast_fu_11968_p1 = esl_zext<10,9>(tmp9_fu_11962_p2.read());
}

void ShuffleNetV2::thread_tmp9_fu_11962_p2() {
    tmp9_fu_11962_p2 = (!ap_const_lv9_198.is_01() || !tmp_390_cast_fu_11958_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_390_cast_fu_11958_p1.read()));
}

void ShuffleNetV2::thread_tmp_1000_cast_fu_24932_p1() {
    tmp_1000_cast_fu_24932_p1 = esl_sext<10,8>(tmp_776_fu_24926_p2.read());
}

void ShuffleNetV2::thread_tmp_1000_fu_16745_p2() {
    tmp_1000_fu_16745_p2 = (!p_shl389_cast_fu_16741_p1.read().is_01() || !tmp_1402_cast_fu_16729_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl389_cast_fu_16741_p1.read()) - sc_bigint<15>(tmp_1402_cast_fu_16729_p1.read()));
}

void ShuffleNetV2::thread_tmp_1001_fu_16751_p2() {
    tmp_1001_fu_16751_p2 = (!tmp_452_cast_reg_31444.read().is_01() || !tmp_1000_fu_16745_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_452_cast_reg_31444.read()) + sc_biguint<15>(tmp_1000_fu_16745_p2.read()));
}

void ShuffleNetV2::thread_tmp_1002_cast_fu_9356_p1() {
    tmp_1002_cast_fu_9356_p1 = esl_zext<64,15>(tmp_512_fu_9351_p2.read());
}

void ShuffleNetV2::thread_tmp_1002_fu_16763_p3() {
    tmp_1002_fu_16763_p3 = esl_concat<7,2>(tmp_461_reg_31463.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1003_cast_fu_9366_p1() {
    tmp_1003_cast_fu_9366_p1 = esl_zext<64,9>(tmp_523_reg_28913.read());
}

void ShuffleNetV2::thread_tmp_1003_fu_16770_p1() {
    tmp_1003_fu_16770_p1 = esl_sext<34,9>(tmp_1002_fu_16763_p3.read());
}

void ShuffleNetV2::thread_tmp_1004_cast1_fu_9513_p1() {
    tmp_1004_cast1_fu_9513_p1 = esl_sext<64,15>(tmp_525_fu_9508_p2.read());
}

void ShuffleNetV2::thread_tmp_1004_cast_fu_25000_p1() {
    tmp_1004_cast_fu_25000_p1 = esl_sext<32,8>(tmp_780_reg_34311.read());
}

void ShuffleNetV2::thread_tmp_1004_fu_16778_p2() {
    tmp_1004_fu_16778_p2 = (!p_shl388_cast_fu_16774_p1.read().is_01() || !tmp_462_cast1_fu_16759_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl388_cast_fu_16774_p1.read()) - sc_biguint<35>(tmp_462_cast1_fu_16759_p1.read()));
}

void ShuffleNetV2::thread_tmp_1005_cast_fu_9523_p1() {
    tmp_1005_cast_fu_9523_p1 = esl_sext<64,11>(tmp_526_reg_28962.read());
}

void ShuffleNetV2::thread_tmp_1005_fu_16788_p2() {
    tmp_1005_fu_16788_p2 = (!tmp_445_cast1_reg_31421.read().is_01() || !tmp_1408_cast_fu_16784_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_445_cast1_reg_31421.read()) + sc_bigint<36>(tmp_1408_cast_fu_16784_p1.read()));
}

void ShuffleNetV2::thread_tmp_1006_fu_16793_p1() {
    tmp_1006_fu_16793_p1 = tmp_1005_fu_16788_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1007_cast_cast_fu_25309_p1() {
    tmp_1007_cast_cast_fu_25309_p1 = esl_sext<11,10>(tmp_788_fu_25303_p2.read());
}

void ShuffleNetV2::thread_tmp_1007_cast_fu_9579_p1() {
    tmp_1007_cast_fu_9579_p1 = esl_zext<10,9>(tmp_527_fu_9571_p3.read());
}

void ShuffleNetV2::thread_tmp_1007_fu_16797_p1() {
    tmp_1007_fu_16797_p1 = tmp_1005_fu_16788_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1008_fu_16812_p2() {
    tmp_1008_fu_16812_p2 = (!p_shl387_cast_fu_16805_p3.read().is_01() || !tmp_1006_reg_31474.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl387_cast_fu_16805_p3.read()) - sc_biguint<10>(tmp_1006_reg_31474.read()));
}

void ShuffleNetV2::thread_tmp_1009_cast_fu_9672_p1() {
    tmp_1009_cast_fu_9672_p1 = esl_zext<11,10>(tmp_528_fu_9664_p3.read());
}

void ShuffleNetV2::thread_tmp_1009_fu_16817_p2() {
    tmp_1009_fu_16817_p2 = (!tmp_452_cast1_reg_31439.read().is_01() || !tmp_1008_fu_16812_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_452_cast1_reg_31439.read()) + sc_biguint<10>(tmp_1008_fu_16812_p2.read()));
}

void ShuffleNetV2::thread_tmp_1010_fu_17300_p3() {
    tmp_1010_fu_17300_p3 = esl_concat<6,3>(co104_reg_4984.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1011_cast_fu_9684_p1() {
    tmp_1011_cast_fu_9684_p1 = esl_zext<10,9>(tmp_530_fu_9676_p3.read());
}

void ShuffleNetV2::thread_tmp_1011_fu_17222_p1() {
    tmp_1011_fu_17222_p1 = k23_reg_4973.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1012_fu_17029_p1() {
    tmp_1012_fu_17029_p1 = i90_reg_4951.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1013_fu_17144_p3() {
    tmp_1013_fu_17144_p3 = esl_concat<11,5>(tmp_469_reg_31584.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1014_cast_fu_9612_p1() {
    tmp_1014_cast_fu_9612_p1 = esl_zext<15,14>(tmp_119_fu_9604_p3.read());
}

void ShuffleNetV2::thread_tmp_1014_fu_17155_p3() {
    tmp_1014_fu_17155_p3 = esl_concat<11,3>(tmp_469_reg_31584.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1015_fu_17166_p2() {
    tmp_1015_fu_17166_p2 = (!p_shl393_cast_fu_17151_p1.read().is_01() || !p_shl394_cast_fu_17162_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl393_cast_fu_17151_p1.read()) - sc_biguint<17>(p_shl394_cast_fu_17162_p1.read()));
}

void ShuffleNetV2::thread_tmp_1016_fu_17176_p2() {
    tmp_1016_fu_17176_p2 = (!tmp_453_cast_reg_31566.read().is_01() || !tmp_1421_cast_fu_17172_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_453_cast_reg_31566.read()) + sc_bigint<18>(tmp_1421_cast_fu_17172_p1.read()));
}

void ShuffleNetV2::thread_tmp_1017_cast_fu_9825_p1() {
    tmp_1017_cast_fu_9825_p1 = esl_sext<15,14>(tmp_539_fu_9819_p2.read());
}

void ShuffleNetV2::thread_tmp_1017_fu_17113_p3() {
    tmp_1017_fu_17113_p3 = esl_concat<7,6>(tmp_471_fu_17108_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1018_fu_17121_p3() {
    tmp_1018_fu_17121_p3 = esl_concat<7,4>(tmp_471_fu_17108_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1019_cast_fu_25800_p1() {
    tmp_1019_cast_fu_25800_p1 = esl_zext<8,3>(p_lshr_f24_cast_fu_25790_p4.read());
}

void ShuffleNetV2::thread_tmp_1019_fu_17133_p2() {
    tmp_1019_fu_17133_p2 = (!tmp_1017_fu_17113_p3.read().is_01() || !p_shl392_cast_fu_17129_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1017_fu_17113_p3.read()) - sc_bigint<13>(p_shl392_cast_fu_17129_p1.read()));
}

void ShuffleNetV2::thread_tmp_1020_fu_17139_p2() {
    tmp_1020_fu_17139_p2 = (!tmp_455_cast_reg_31571.read().is_01() || !tmp_1019_fu_17133_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_455_cast_reg_31571.read()) + sc_biguint<13>(tmp_1019_fu_17133_p2.read()));
}

void ShuffleNetV2::thread_tmp_1021_fu_17393_p3() {
    tmp_1021_fu_17393_p3 = esl_concat<7,3>(tmp_472_fu_17387_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1022_fu_17405_p3() {
    tmp_1022_fu_17405_p3 = esl_concat<6,3>(co106_reg_5017.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1023_cast1_fu_9713_p3() {
    tmp_1023_cast1_fu_9713_p3 = esl_concat<10,4>(tmp_553_fu_9708_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1023_cast_fu_26058_p1() {
    tmp_1023_cast_fu_26058_p1 = esl_sext<12,8>(tmp_803_fu_26052_p2.read());
}

void ShuffleNetV2::thread_tmp_1023_fu_17328_p2() {
    tmp_1023_fu_17328_p2 = (!tmp_1414_cast_reg_31649.read().is_01() || !tmp_473_cast_fu_17324_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1414_cast_reg_31649.read()) + sc_biguint<10>(tmp_473_cast_fu_17324_p1.read()));
}

void ShuffleNetV2::thread_tmp_1024_fu_17333_p3() {
    tmp_1024_fu_17333_p3 = esl_concat<10,3>(tmp_1023_fu_17328_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1025_fu_17518_p1() {
    tmp_1025_fu_17518_p1 = co108_reg_5050.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1026_cast_fu_9726_p3() {
    tmp_1026_cast_fu_9726_p3 = esl_concat<11,4>(tmp_555_fu_9721_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1026_fu_17437_p2() {
    tmp_1026_fu_17437_p2 = (!tmp_475_cast_fu_17433_p1.read().is_01() || !tmp_1432_cast_reg_31693.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_475_cast_fu_17433_p1.read()) + sc_biguint<11>(tmp_1432_cast_reg_31693.read()));
}

void ShuffleNetV2::thread_tmp_1027_cast1_fu_9637_p1() {
    tmp_1027_cast1_fu_9637_p1 = esl_zext<64,15>(tmp_556_fu_9632_p2.read());
}

void ShuffleNetV2::thread_tmp_1027_cast_fu_26082_p1() {
    tmp_1027_cast_fu_26082_p1 = esl_sext<32,8>(tmp_806_reg_34683.read());
}

void ShuffleNetV2::thread_tmp_1027_fu_17450_p2() {
    tmp_1027_fu_17450_p2 = (!tmp_475_cast1_fu_17429_p1.read().is_01() || !tmp_1434_cast_reg_31698.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_475_cast1_fu_17429_p1.read()) + sc_biguint<10>(tmp_1434_cast_reg_31698.read()));
}

void ShuffleNetV2::thread_tmp_1028_cast_fu_9884_p1() {
    tmp_1028_cast_fu_9884_p1 = esl_sext<64,15>(tmp_559_fu_9879_p2.read());
}

void ShuffleNetV2::thread_tmp_1028_fu_17361_p2() {
    tmp_1028_fu_17361_p2 = (!tmp_1437_cast_reg_31662.read().is_01() || !tmp_477_cast_fu_17357_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1437_cast_reg_31662.read()) + sc_biguint<14>(tmp_477_cast_fu_17357_p1.read()));
}

void ShuffleNetV2::thread_tmp_1029_cast_fu_9894_p1() {
    tmp_1029_cast_fu_9894_p1 = esl_sext<64,11>(tmp_560_reg_29109.read());
}

void ShuffleNetV2::thread_tmp_1029_fu_17483_p2() {
    tmp_1029_fu_17483_p2 = (!tmp_1442_cast_reg_31711.read().is_01() || !tmp_481_cast_fu_17479_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1442_cast_reg_31711.read()) + sc_biguint<14>(tmp_481_cast_fu_17479_p1.read()));
}

void ShuffleNetV2::thread_tmp_1030_cast_fu_9769_p1() {
    tmp_1030_cast_fu_9769_p1 = esl_zext<64,14>(tmp_562_reg_29068.read());
}

void ShuffleNetV2::thread_tmp_1030_fu_17493_p2() {
    tmp_1030_fu_17493_p2 = (!tmp_1445_cast_reg_31716.read().is_01() || !tmp_481_cast1_fu_17475_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1445_cast_reg_31716.read()) + sc_biguint<13>(tmp_481_cast1_fu_17475_p1.read()));
}

void ShuffleNetV2::thread_tmp_1031_cast_fu_9764_p1() {
    tmp_1031_cast_fu_9764_p1 = esl_zext<64,15>(tmp_573_fu_9759_p2.read());
}

void ShuffleNetV2::thread_tmp_1031_fu_17800_p1() {
    tmp_1031_fu_17800_p1 = k25_reg_5094.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1032_fu_17607_p1() {
    tmp_1032_fu_17607_p1 = i94_reg_5072.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1033_fu_17722_p3() {
    tmp_1033_fu_17722_p3 = esl_concat<11,5>(tmp_492_reg_31788.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1034_cast1_fu_9980_p1() {
    tmp_1034_cast1_fu_9980_p1 = esl_sext<11,10>(tmp_577_fu_9974_p2.read());
}

void ShuffleNetV2::thread_tmp_1034_cast_fu_25883_p1() {
    tmp_1034_cast_fu_25883_p1 = esl_sext<13,10>(tmp_809_fu_25877_p2.read());
}

void ShuffleNetV2::thread_tmp_1034_fu_17733_p3() {
    tmp_1034_fu_17733_p3 = esl_concat<11,3>(tmp_492_reg_31788.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1035_fu_17744_p2() {
    tmp_1035_fu_17744_p2 = (!p_shl397_cast_fu_17729_p1.read().is_01() || !p_shl398_cast_fu_17740_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl397_cast_fu_17729_p1.read()) - sc_biguint<17>(p_shl398_cast_fu_17740_p1.read()));
}

void ShuffleNetV2::thread_tmp_1036_cast_fu_10006_p1() {
    tmp_1036_cast_fu_10006_p1 = esl_sext<9,8>(tmp_580_fu_10000_p2.read());
}

void ShuffleNetV2::thread_tmp_1036_fu_17754_p2() {
    tmp_1036_fu_17754_p2 = (!tmp_478_cast1_reg_31770.read().is_01() || !tmp_1455_cast_fu_17750_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_478_cast1_reg_31770.read()) + sc_bigint<18>(tmp_1455_cast_fu_17750_p1.read()));
}

void ShuffleNetV2::thread_tmp_1037_cast_fu_10035_p1() {
    tmp_1037_cast_fu_10035_p1 = esl_sext<15,11>(tmp_581_fu_10030_p2.read());
}

void ShuffleNetV2::thread_tmp_1037_fu_17691_p3() {
    tmp_1037_fu_17691_p3 = esl_concat<7,6>(tmp_494_fu_17686_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1038_fu_17699_p3() {
    tmp_1038_fu_17699_p3 = esl_concat<7,4>(tmp_494_fu_17686_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1039_fu_17711_p2() {
    tmp_1039_fu_17711_p2 = (!tmp_1037_fu_17691_p3.read().is_01() || !p_shl396_cast_fu_17707_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1037_fu_17691_p3.read()) - sc_bigint<13>(p_shl396_cast_fu_17707_p1.read()));
}

void ShuffleNetV2::thread_tmp_1040_fu_17717_p2() {
    tmp_1040_fu_17717_p2 = (!tmp_480_cast1_reg_31775.read().is_01() || !tmp_1039_fu_17711_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_480_cast1_reg_31775.read()) + sc_biguint<13>(tmp_1039_fu_17711_p2.read()));
}

void ShuffleNetV2::thread_tmp_1041_cast_fu_26416_p1() {
    tmp_1041_cast_fu_26416_p1 = esl_sext<12,8>(tmp_816_fu_26410_p2.read());
}

void ShuffleNetV2::thread_tmp_1041_fu_18236_p1() {
    tmp_1041_fu_18236_p1 = co112_reg_5171.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1042_fu_18154_p1() {
    tmp_1042_fu_18154_p1 = k27_reg_5160.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1043_fu_17938_p1() {
    tmp_1043_fu_17938_p1 = i100_reg_5138.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1044_fu_17999_p3() {
    tmp_1044_fu_17999_p3 = esl_concat<8,2>(tmp_508_reg_31907.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1045_cast_fu_26440_p1() {
    tmp_1045_cast_fu_26440_p1 = esl_sext<32,8>(tmp_819_reg_34823.read());
}

void ShuffleNetV2::thread_tmp_1045_fu_18006_p1() {
    tmp_1045_fu_18006_p1 = esl_sext<11,10>(tmp_1044_fu_17999_p3.read());
}

void ShuffleNetV2::thread_tmp_1046_fu_18014_p2() {
    tmp_1046_fu_18014_p2 = (!p_shl402_cast_fu_18010_p1.read().is_01() || !tmp_510_cast_fu_17995_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl402_cast_fu_18010_p1.read()) - sc_biguint<12>(tmp_510_cast_fu_17995_p1.read()));
}

void ShuffleNetV2::thread_tmp_1047_cast_fu_10199_p1() {
    tmp_1047_cast_fu_10199_p1 = esl_sext<15,14>(tmp_605_fu_10193_p2.read());
}

void ShuffleNetV2::thread_tmp_1047_fu_18020_p2() {
    tmp_1047_fu_18020_p2 = (!tmp_495_cast2_reg_31876.read().is_01() || !tmp_1046_fu_18014_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_495_cast2_reg_31876.read()) + sc_biguint<12>(tmp_1046_fu_18014_p2.read()));
}

void ShuffleNetV2::thread_tmp_1048_fu_18029_p3() {
    tmp_1048_fu_18029_p3 = esl_concat<12,2>(tmp_1047_fu_18020_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1049_cast_fu_26506_p1() {
    tmp_1049_cast_fu_26506_p1 = esl_zext<8,3>(p_lshr_f25_cast_fu_26496_p4.read());
}

void ShuffleNetV2::thread_tmp_1049_fu_18041_p2() {
    tmp_1049_fu_18041_p2 = (!p_shl401_cast_fu_18037_p1.read().is_01() || !tmp_1474_cast_fu_18025_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl401_cast_fu_18037_p1.read()) - sc_bigint<15>(tmp_1474_cast_fu_18025_p1.read()));
}

void ShuffleNetV2::thread_tmp_1050_fu_18047_p2() {
    tmp_1050_fu_18047_p2 = (!tmp_502_cast2_reg_31894.read().is_01() || !tmp_1049_fu_18041_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_502_cast2_reg_31894.read()) + sc_biguint<15>(tmp_1049_fu_18041_p2.read()));
}

void ShuffleNetV2::thread_tmp_1051_cast1_fu_10099_p1() {
    tmp_1051_cast1_fu_10099_p1 = esl_zext<64,15>(tmp_612_fu_10094_p2.read());
}

void ShuffleNetV2::thread_tmp_1051_cast_fu_26764_p1() {
    tmp_1051_cast_fu_26764_p1 = esl_sext<12,8>(tmp_832_fu_26758_p2.read());
}

void ShuffleNetV2::thread_tmp_1051_fu_18059_p3() {
    tmp_1051_fu_18059_p3 = esl_concat<7,2>(tmp_511_reg_31913.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1052_cast_fu_10109_p1() {
    tmp_1052_cast_fu_10109_p1 = esl_zext<64,9>(tmp_623_reg_29176.read());
}

void ShuffleNetV2::thread_tmp_1052_fu_18066_p1() {
    tmp_1052_fu_18066_p1 = esl_sext<34,9>(tmp_1051_fu_18059_p3.read());
}

void ShuffleNetV2::thread_tmp_1053_cast_fu_10258_p1() {
    tmp_1053_cast_fu_10258_p1 = esl_sext<64,15>(tmp_625_fu_10253_p2.read());
}

void ShuffleNetV2::thread_tmp_1053_fu_18074_p2() {
    tmp_1053_fu_18074_p2 = (!p_shl400_cast_fu_18070_p1.read().is_01() || !tmp_512_cast_fu_18055_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl400_cast_fu_18070_p1.read()) - sc_biguint<35>(tmp_512_cast_fu_18055_p1.read()));
}

void ShuffleNetV2::thread_tmp_1054_cast_fu_10268_p1() {
    tmp_1054_cast_fu_10268_p1 = esl_sext<64,11>(tmp_626_reg_29225.read());
}

void ShuffleNetV2::thread_tmp_1054_fu_18084_p2() {
    tmp_1054_fu_18084_p2 = (!tmp_495_cast1_reg_31871.read().is_01() || !tmp_1480_cast_fu_18080_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_495_cast1_reg_31871.read()) + sc_bigint<36>(tmp_1480_cast_fu_18080_p1.read()));
}

void ShuffleNetV2::thread_tmp_1055_cast_fu_26788_p1() {
    tmp_1055_cast_fu_26788_p1 = esl_sext<32,8>(tmp_835_reg_34929.read());
}

void ShuffleNetV2::thread_tmp_1055_fu_18089_p1() {
    tmp_1055_fu_18089_p1 = tmp_1054_fu_18084_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1056_cast_fu_10324_p1() {
    tmp_1056_cast_fu_10324_p1 = esl_zext<10,9>(tmp_627_fu_10316_p3.read());
}

void ShuffleNetV2::thread_tmp_1056_fu_18093_p1() {
    tmp_1056_fu_18093_p1 = tmp_1054_fu_18084_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1057_fu_18108_p2() {
    tmp_1057_fu_18108_p2 = (!p_shl399_cast_fu_18101_p3.read().is_01() || !tmp_1055_reg_31924.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl399_cast_fu_18101_p3.read()) - sc_biguint<10>(tmp_1055_reg_31924.read()));
}

void ShuffleNetV2::thread_tmp_1058_fu_18113_p2() {
    tmp_1058_fu_18113_p2 = (!tmp_502_cast1_reg_31889.read().is_01() || !tmp_1057_fu_18108_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_502_cast1_reg_31889.read()) + sc_biguint<10>(tmp_1057_fu_18108_p2.read()));
}

void ShuffleNetV2::thread_tmp_1059_fu_18596_p3() {
    tmp_1059_fu_18596_p3 = esl_concat<6,3>(co114_reg_5226.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1060_cast_cast_fu_26196_p1() {
    tmp_1060_cast_cast_fu_26196_p1 = esl_sext<9,8>(tmp_826_fu_26190_p2.read());
}

void ShuffleNetV2::thread_tmp_1060_fu_18518_p1() {
    tmp_1060_fu_18518_p1 = k29_reg_5215.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1061_cast_fu_10357_p1() {
    tmp_1061_cast_fu_10357_p1 = esl_zext<15,14>(tmp_123_fu_10349_p3.read());
}

void ShuffleNetV2::thread_tmp_1061_fu_18325_p1() {
    tmp_1061_fu_18325_p1 = i102_reg_5193.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1062_cast1_fu_10382_p1() {
    tmp_1062_cast1_fu_10382_p1 = esl_zext<64,15>(tmp_630_fu_10377_p2.read());
}

void ShuffleNetV2::thread_tmp_1062_cast_fu_26216_p1() {
    tmp_1062_cast_fu_26216_p1 = esl_sext<10,9>(tmp_827_reg_34755.read());
}

void ShuffleNetV2::thread_tmp_1062_fu_18440_p3() {
    tmp_1062_fu_18440_p3 = esl_concat<11,5>(tmp_519_reg_32034.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1063_fu_18451_p3() {
    tmp_1063_fu_18451_p3 = esl_concat<11,3>(tmp_519_reg_32034.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1064_cast_fu_26280_p1() {
    tmp_1064_cast_fu_26280_p1 = esl_sext<32,8>(tmp_830_reg_34761.read());
}

void ShuffleNetV2::thread_tmp_1064_fu_18462_p2() {
    tmp_1064_fu_18462_p2 = (!p_shl405_cast_fu_18447_p1.read().is_01() || !p_shl406_cast_fu_18458_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl405_cast_fu_18447_p1.read()) - sc_biguint<17>(p_shl406_cast_fu_18458_p1.read()));
}

void ShuffleNetV2::thread_tmp_1065_fu_18472_p2() {
    tmp_1065_fu_18472_p2 = (!tmp_503_cast_reg_32016.read().is_01() || !tmp_1493_cast_fu_18468_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_503_cast_reg_32016.read()) + sc_bigint<18>(tmp_1493_cast_fu_18468_p1.read()));
}

void ShuffleNetV2::thread_tmp_1066_fu_18409_p3() {
    tmp_1066_fu_18409_p3 = esl_concat<7,6>(tmp_521_fu_18404_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1067_cast_fu_26589_p1() {
    tmp_1067_cast_fu_26589_p1 = esl_sext<13,10>(tmp_837_fu_26583_p2.read());
}

void ShuffleNetV2::thread_tmp_1067_fu_18417_p3() {
    tmp_1067_fu_18417_p3 = esl_concat<7,4>(tmp_521_fu_18404_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1068_fu_18429_p2() {
    tmp_1068_fu_18429_p2 = (!tmp_1066_fu_18409_p3.read().is_01() || !p_shl404_cast_fu_18425_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1066_fu_18409_p3.read()) - sc_bigint<13>(p_shl404_cast_fu_18425_p1.read()));
}

void ShuffleNetV2::thread_tmp_1069_cast_fu_10635_p1() {
    tmp_1069_cast_fu_10635_p1 = esl_sext<16,15>(tmp_637_fu_10629_p2.read());
}

void ShuffleNetV2::thread_tmp_1069_fu_18435_p2() {
    tmp_1069_fu_18435_p2 = (!tmp_505_cast_reg_32021.read().is_01() || !tmp_1068_fu_18429_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_505_cast_reg_32021.read()) + sc_biguint<13>(tmp_1068_fu_18429_p2.read()));
}

void ShuffleNetV2::thread_tmp_1070_cast_fu_10644_p1() {
    tmp_1070_cast_fu_10644_p1 = esl_sext<64,16>(tmp_639_fu_10639_p2.read());
}

void ShuffleNetV2::thread_tmp_1070_fu_18689_p3() {
    tmp_1070_fu_18689_p3 = esl_concat<7,3>(tmp_522_fu_18683_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1071_fu_18701_p3() {
    tmp_1071_fu_18701_p3 = esl_concat<6,3>(co116_reg_5259.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1072_fu_18624_p2() {
    tmp_1072_fu_18624_p2 = (!tmp_1486_cast_reg_32099.read().is_01() || !tmp_523_cast_fu_18620_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1486_cast_reg_32099.read()) + sc_biguint<10>(tmp_523_cast_fu_18620_p1.read()));
}

void ShuffleNetV2::thread_tmp_1073_fu_18629_p3() {
    tmp_1073_fu_18629_p3 = esl_concat<10,3>(tmp_1072_fu_18624_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1074_fu_18814_p1() {
    tmp_1074_fu_18814_p1 = co118_reg_5292.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1075_fu_18733_p2() {
    tmp_1075_fu_18733_p2 = (!tmp_525_cast1_fu_18729_p1.read().is_01() || !tmp_1504_cast_reg_32143.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_525_cast1_fu_18729_p1.read()) + sc_biguint<11>(tmp_1504_cast_reg_32143.read()));
}

void ShuffleNetV2::thread_tmp_1076_fu_18746_p2() {
    tmp_1076_fu_18746_p2 = (!tmp_525_cast_fu_18725_p1.read().is_01() || !tmp_1506_cast_reg_32148.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_525_cast_fu_18725_p1.read()) + sc_biguint<10>(tmp_1506_cast_reg_32148.read()));
}

void ShuffleNetV2::thread_tmp_1077_fu_18657_p2() {
    tmp_1077_fu_18657_p2 = (!tmp_1509_cast_reg_32112.read().is_01() || !tmp_527_cast_fu_18653_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1509_cast_reg_32112.read()) + sc_biguint<14>(tmp_527_cast_fu_18653_p1.read()));
}

void ShuffleNetV2::thread_tmp_1078_cast_fu_10649_p1() {
    tmp_1078_cast_fu_10649_p1 = esl_sext<64,13>(tmp_653_reg_29342.read());
}

void ShuffleNetV2::thread_tmp_1078_fu_18779_p2() {
    tmp_1078_fu_18779_p2 = (!tmp_1514_cast_reg_32161.read().is_01() || !tmp_531_cast_fu_18775_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1514_cast_reg_32161.read()) + sc_biguint<14>(tmp_531_cast_fu_18775_p1.read()));
}

void ShuffleNetV2::thread_tmp_1079_cast_fu_27068_p1() {
    tmp_1079_cast_fu_27068_p1 = esl_zext<8,3>(p_lshr_f26_cast_fu_27058_p4.read());
}

void ShuffleNetV2::thread_tmp_1079_fu_18789_p2() {
    tmp_1079_fu_18789_p2 = (!tmp_1517_cast_reg_32166.read().is_01() || !tmp_531_cast1_fu_18771_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1517_cast_reg_32166.read()) + sc_biguint<13>(tmp_531_cast1_fu_18771_p1.read()));
}

void ShuffleNetV2::thread_tmp_1080_fu_19096_p1() {
    tmp_1080_fu_19096_p1 = k31_reg_5336.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1081_fu_18903_p1() {
    tmp_1081_fu_18903_p1 = i106_reg_5314.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1082_fu_19018_p3() {
    tmp_1082_fu_19018_p3 = esl_concat<11,5>(tmp_542_reg_32238.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1083_cast_fu_27326_p1() {
    tmp_1083_cast_fu_27326_p1 = esl_sext<12,8>(tmp_851_fu_27320_p2.read());
}

void ShuffleNetV2::thread_tmp_1083_fu_19029_p3() {
    tmp_1083_fu_19029_p3 = esl_concat<11,3>(tmp_542_reg_32238.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1084_fu_19040_p2() {
    tmp_1084_fu_19040_p2 = (!p_shl409_cast_fu_19025_p1.read().is_01() || !p_shl410_cast_fu_19036_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl409_cast_fu_19025_p1.read()) - sc_biguint<17>(p_shl410_cast_fu_19036_p1.read()));
}

void ShuffleNetV2::thread_tmp_1085_fu_19050_p2() {
    tmp_1085_fu_19050_p2 = (!tmp_528_cast_reg_32220.read().is_01() || !tmp_1527_cast_fu_19046_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_528_cast_reg_32220.read()) + sc_bigint<18>(tmp_1527_cast_fu_19046_p1.read()));
}

void ShuffleNetV2::thread_tmp_1086_cast_fu_10897_p1() {
    tmp_1086_cast_fu_10897_p1 = esl_sext<12,11>(tmp_656_fu_10891_p2.read());
}

void ShuffleNetV2::thread_tmp_1086_fu_18987_p3() {
    tmp_1086_fu_18987_p3 = esl_concat<7,6>(tmp_544_fu_18982_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1087_cast1_fu_10906_p1() {
    tmp_1087_cast1_fu_10906_p1 = esl_sext<15,12>(tmp_659_fu_10901_p2.read());
}

void ShuffleNetV2::thread_tmp_1087_cast_fu_27350_p1() {
    tmp_1087_cast_fu_27350_p1 = esl_sext<32,8>(tmp_855_reg_35133.read());
}

void ShuffleNetV2::thread_tmp_1087_fu_18995_p3() {
    tmp_1087_fu_18995_p3 = esl_concat<7,4>(tmp_544_fu_18982_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1088_fu_19007_p2() {
    tmp_1088_fu_19007_p2 = (!tmp_1086_fu_18987_p3.read().is_01() || !p_shl408_cast_fu_19003_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1086_fu_18987_p3.read()) - sc_bigint<13>(p_shl408_cast_fu_19003_p1.read()));
}

void ShuffleNetV2::thread_tmp_1089_fu_19013_p2() {
    tmp_1089_fu_19013_p2 = (!tmp_530_cast_reg_32225.read().is_01() || !tmp_1088_fu_19007_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_530_cast_reg_32225.read()) + sc_biguint<13>(tmp_1088_fu_19007_p2.read()));
}

void ShuffleNetV2::thread_tmp_1090_cast_fu_10978_p1() {
    tmp_1090_cast_fu_10978_p1 = esl_zext<64,15>(tmp_662_reg_29467.read());
}

void ShuffleNetV2::thread_tmp_1090_fu_19532_p1() {
    tmp_1090_fu_19532_p1 = co122_reg_5413.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1091_fu_19450_p1() {
    tmp_1091_fu_19450_p1 = k33_reg_5402.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1092_fu_19234_p1() {
    tmp_1092_fu_19234_p1 = i112_reg_5380.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1093_cast_fu_10961_p1() {
    tmp_1093_cast_fu_10961_p1 = esl_sext<36,35>(tmp_676_fu_10955_p2.read());
}

void ShuffleNetV2::thread_tmp_1093_fu_19295_p3() {
    tmp_1093_fu_19295_p3 = esl_concat<8,2>(tmp_558_reg_32357.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1094_cast_fu_27151_p1() {
    tmp_1094_cast_fu_27151_p1 = esl_sext<13,10>(tmp_860_fu_27145_p2.read());
}

void ShuffleNetV2::thread_tmp_1094_fu_19302_p1() {
    tmp_1094_fu_19302_p1 = esl_sext<11,10>(tmp_1093_fu_19295_p3.read());
}

void ShuffleNetV2::thread_tmp_1095_fu_19310_p2() {
    tmp_1095_fu_19310_p2 = (!p_shl414_cast_fu_19306_p1.read().is_01() || !tmp_560_cast_fu_19291_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl414_cast_fu_19306_p1.read()) - sc_biguint<12>(tmp_560_cast_fu_19291_p1.read()));
}

void ShuffleNetV2::thread_tmp_1096_fu_19320_p2() {
    tmp_1096_fu_19320_p2 = (!tmp_1545_cast_fu_19316_p1.read().is_01() || !tmp_545_cast_reg_32326.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1545_cast_fu_19316_p1.read()) + sc_biguint<13>(tmp_545_cast_reg_32326.read()));
}

void ShuffleNetV2::thread_tmp_1097_cast_fu_10999_p1() {
    tmp_1097_cast_fu_10999_p1 = esl_zext<64,10>(tmp_684_reg_29487.read());
}

void ShuffleNetV2::thread_tmp_1097_fu_19337_p2() {
    tmp_1097_fu_19337_p2 = (!p_shl413_cast_fu_19329_p3.read().is_01() || !tmp_1546_cast_fu_19325_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl413_cast_fu_19329_p3.read()) - sc_bigint<15>(tmp_1546_cast_fu_19325_p1.read()));
}

void ShuffleNetV2::thread_tmp_1098_fu_19343_p2() {
    tmp_1098_fu_19343_p2 = (!tmp_1097_fu_19337_p2.read().is_01() || !tmp_552_cast_reg_32344.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1097_fu_19337_p2.read()) + sc_biguint<15>(tmp_552_cast_reg_32344.read()));
}

void ShuffleNetV2::thread_tmp_1099_fu_19355_p3() {
    tmp_1099_fu_19355_p3 = esl_concat<7,2>(tmp_561_reg_32363.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1100_fu_19362_p1() {
    tmp_1100_fu_19362_p1 = esl_sext<34,9>(tmp_1099_fu_19355_p3.read());
}

void ShuffleNetV2::thread_tmp_1101_cast_fu_27666_p1() {
    tmp_1101_cast_fu_27666_p1 = esl_sext<12,8>(tmp_866_fu_27660_p2.read());
}

void ShuffleNetV2::thread_tmp_1101_fu_19370_p2() {
    tmp_1101_fu_19370_p2 = (!p_shl412_cast_fu_19366_p1.read().is_01() || !tmp_562_cast1_fu_19351_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl412_cast_fu_19366_p1.read()) - sc_biguint<35>(tmp_562_cast1_fu_19351_p1.read()));
}

void ShuffleNetV2::thread_tmp_1102_fu_19380_p2() {
    tmp_1102_fu_19380_p2 = (!tmp_1552_cast_fu_19376_p1.read().is_01() || !tmp_545_cast1_reg_32321.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1552_cast_fu_19376_p1.read()) + sc_biguint<36>(tmp_545_cast1_reg_32321.read()));
}

void ShuffleNetV2::thread_tmp_1103_fu_19385_p1() {
    tmp_1103_fu_19385_p1 = tmp_1102_fu_19380_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1104_cast_fu_11353_p1() {
    tmp_1104_cast_fu_11353_p1 = esl_sext<16,15>(tmp_690_fu_11347_p2.read());
}

void ShuffleNetV2::thread_tmp_1104_fu_19389_p1() {
    tmp_1104_fu_19389_p1 = tmp_1102_fu_19380_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1105_cast1_fu_11362_p1() {
    tmp_1105_cast1_fu_11362_p1 = esl_sext<64,16>(tmp_692_fu_11357_p2.read());
}

void ShuffleNetV2::thread_tmp_1105_cast_fu_27690_p1() {
    tmp_1105_cast_fu_27690_p1 = esl_sext<32,8>(tmp_869_reg_35273.read());
}

void ShuffleNetV2::thread_tmp_1105_fu_19404_p2() {
    tmp_1105_fu_19404_p2 = (!p_shl411_cast_fu_19397_p3.read().is_01() || !tmp_1103_reg_32374.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl411_cast_fu_19397_p3.read()) - sc_biguint<10>(tmp_1103_reg_32374.read()));
}

void ShuffleNetV2::thread_tmp_1106_fu_19409_p2() {
    tmp_1106_fu_19409_p2 = (!tmp_1105_fu_19404_p2.read().is_01() || !tmp_552_cast1_reg_32339.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1105_fu_19404_p2.read()) + sc_biguint<10>(tmp_552_cast1_reg_32339.read()));
}

void ShuffleNetV2::thread_tmp_1107_fu_19892_p3() {
    tmp_1107_fu_19892_p3 = esl_concat<6,3>(co124_reg_5468.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1108_fu_19814_p1() {
    tmp_1108_fu_19814_p1 = k35_reg_5457.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1109_cast_fu_27756_p1() {
    tmp_1109_cast_fu_27756_p1 = esl_zext<8,3>(p_lshr_f27_cast_fu_27746_p4.read());
}

void ShuffleNetV2::thread_tmp_1109_fu_19621_p1() {
    tmp_1109_fu_19621_p1 = i114_reg_5435.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1110_fu_19736_p3() {
    tmp_1110_fu_19736_p3 = esl_concat<11,5>(tmp_569_reg_32484.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1111_cast_fu_28014_p1() {
    tmp_1111_cast_fu_28014_p1 = esl_sext<12,8>(tmp_882_fu_28008_p2.read());
}

void ShuffleNetV2::thread_tmp_1111_fu_19747_p3() {
    tmp_1111_fu_19747_p3 = esl_concat<11,3>(tmp_569_reg_32484.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1112_fu_19758_p2() {
    tmp_1112_fu_19758_p2 = (!p_shl417_cast_fu_19743_p1.read().is_01() || !p_shl418_cast_fu_19754_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl417_cast_fu_19743_p1.read()) - sc_biguint<17>(p_shl418_cast_fu_19754_p1.read()));
}

void ShuffleNetV2::thread_tmp_1113_cast_fu_11367_p1() {
    tmp_1113_cast_fu_11367_p1 = esl_sext<64,13>(tmp_705_reg_29588.read());
}

void ShuffleNetV2::thread_tmp_1113_fu_19768_p2() {
    tmp_1113_fu_19768_p2 = (!tmp_553_cast_reg_32466.read().is_01() || !tmp_1565_cast_fu_19764_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_553_cast_reg_32466.read()) + sc_bigint<18>(tmp_1565_cast_fu_19764_p1.read()));
}

void ShuffleNetV2::thread_tmp_1114_fu_19705_p3() {
    tmp_1114_fu_19705_p3 = esl_concat<7,6>(tmp_571_fu_19700_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1115_cast_fu_28038_p1() {
    tmp_1115_cast_fu_28038_p1 = esl_sext<32,8>(tmp_885_reg_35379.read());
}

void ShuffleNetV2::thread_tmp_1115_fu_19713_p3() {
    tmp_1115_fu_19713_p3 = esl_concat<7,4>(tmp_571_fu_19700_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1116_fu_19725_p2() {
    tmp_1116_fu_19725_p2 = (!tmp_1114_fu_19705_p3.read().is_01() || !p_shl416_cast_fu_19721_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1114_fu_19705_p3.read()) - sc_bigint<13>(p_shl416_cast_fu_19721_p1.read()));
}

void ShuffleNetV2::thread_tmp_1117_fu_19731_p2() {
    tmp_1117_fu_19731_p2 = (!tmp_555_cast1_reg_32471.read().is_01() || !tmp_1116_fu_19725_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_555_cast1_reg_32471.read()) + sc_biguint<13>(tmp_1116_fu_19725_p2.read()));
}

void ShuffleNetV2::thread_tmp_1118_fu_19985_p3() {
    tmp_1118_fu_19985_p3 = esl_concat<7,3>(tmp_572_fu_19979_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1119_fu_19997_p3() {
    tmp_1119_fu_19997_p3 = esl_concat<6,3>(co126_reg_5501.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_111_fu_7575_p3() {
    tmp_111_fu_7575_p3 = esl_concat<9,2>(tmp_224_fu_7566_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1120_cast_fu_27464_p1() {
    tmp_1120_cast_fu_27464_p1 = esl_sext<11,8>(tmp_876_fu_27458_p2.read());
}

void ShuffleNetV2::thread_tmp_1120_fu_19920_p2() {
    tmp_1120_fu_19920_p2 = (!tmp_1558_cast_reg_32549.read().is_01() || !tmp_573_cast_fu_19916_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1558_cast_reg_32549.read()) + sc_biguint<10>(tmp_573_cast_fu_19916_p1.read()));
}

void ShuffleNetV2::thread_tmp_1121_fu_19925_p3() {
    tmp_1121_fu_19925_p3 = esl_concat<10,3>(tmp_1120_fu_19920_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1122_cast_fu_11624_p1() {
    tmp_1122_cast_fu_11624_p1 = esl_sext<15,11>(tmp_709_fu_11619_p2.read());
}

void ShuffleNetV2::thread_tmp_1122_fu_20110_p1() {
    tmp_1122_fu_20110_p1 = co128_reg_5534.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1123_fu_20029_p2() {
    tmp_1123_fu_20029_p2 = (!tmp_575_cast_fu_20025_p1.read().is_01() || !tmp_1576_cast_reg_32593.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_575_cast_fu_20025_p1.read()) + sc_biguint<11>(tmp_1576_cast_reg_32593.read()));
}

void ShuffleNetV2::thread_tmp_1124_cast_fu_27530_p1() {
    tmp_1124_cast_fu_27530_p1 = esl_sext<32,8>(tmp_880_reg_35211.read());
}

void ShuffleNetV2::thread_tmp_1124_fu_20042_p2() {
    tmp_1124_fu_20042_p2 = (!tmp_575_cast1_fu_20021_p1.read().is_01() || !tmp_1578_cast_reg_32598.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_575_cast1_fu_20021_p1.read()) + sc_biguint<10>(tmp_1578_cast_reg_32598.read()));
}

void ShuffleNetV2::thread_tmp_1125_cast_fu_11696_p1() {
    tmp_1125_cast_fu_11696_p1 = esl_zext<64,15>(tmp_726_reg_29713.read());
}

void ShuffleNetV2::thread_tmp_1125_fu_19953_p2() {
    tmp_1125_fu_19953_p2 = (!tmp_1581_cast_reg_32562.read().is_01() || !tmp_577_cast_fu_19949_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1581_cast_reg_32562.read()) + sc_biguint<14>(tmp_577_cast_fu_19949_p1.read()));
}

void ShuffleNetV2::thread_tmp_1126_fu_20075_p2() {
    tmp_1126_fu_20075_p2 = (!tmp_1586_cast_reg_32611.read().is_01() || !tmp_581_cast_fu_20071_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1586_cast_reg_32611.read()) + sc_biguint<14>(tmp_581_cast_fu_20071_p1.read()));
}

void ShuffleNetV2::thread_tmp_1127_cast_fu_27839_p1() {
    tmp_1127_cast_fu_27839_p1 = esl_sext<13,10>(tmp_887_fu_27833_p2.read());
}

void ShuffleNetV2::thread_tmp_1127_fu_20085_p2() {
    tmp_1127_fu_20085_p2 = (!tmp_1589_cast_reg_32616.read().is_01() || !tmp_581_cast1_fu_20067_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1589_cast_reg_32616.read()) + sc_biguint<13>(tmp_581_cast1_fu_20067_p1.read()));
}

void ShuffleNetV2::thread_tmp_1128_cast_fu_11679_p1() {
    tmp_1128_cast_fu_11679_p1 = esl_sext<36,35>(tmp_730_fu_11673_p2.read());
}

void ShuffleNetV2::thread_tmp_1128_fu_20400_p1() {
    tmp_1128_fu_20400_p1 = k37_reg_5578.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1129_fu_20199_p1() {
    tmp_1129_fu_20199_p1 = i118_reg_5556.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_112_fu_7903_p3() {
    tmp_112_fu_7903_p3 = esl_concat<9,2>(tmp_278_fu_7894_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1130_fu_20314_p3() {
    tmp_1130_fu_20314_p3 = esl_concat<10,5>(tmp_592_reg_32688.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1131_fu_20321_p1() {
    tmp_1131_fu_20321_p1 = esl_sext<16,15>(tmp_1130_fu_20314_p3.read());
}

void ShuffleNetV2::thread_tmp_1132_cast_fu_11717_p1() {
    tmp_1132_cast_fu_11717_p1 = esl_zext<64,10>(tmp_736_reg_29733.read());
}

void ShuffleNetV2::thread_tmp_1132_fu_20329_p3() {
    tmp_1132_fu_20329_p3 = esl_concat<10,3>(tmp_592_reg_32688.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1133_fu_20336_p1() {
    tmp_1133_fu_20336_p1 = esl_sext<14,13>(tmp_1132_fu_20329_p3.read());
}

void ShuffleNetV2::thread_tmp_1134_cast_fu_12217_p1() {
    tmp_1134_cast_fu_12217_p1 = esl_zext<11,10>(tmp_737_fu_12209_p3.read());
}

void ShuffleNetV2::thread_tmp_1134_fu_20344_p2() {
    tmp_1134_fu_20344_p2 = (!p_shl421_cast_fu_20325_p1.read().is_01() || !p_shl422_cast_fu_20340_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl421_cast_fu_20325_p1.read()) - sc_biguint<17>(p_shl422_cast_fu_20340_p1.read()));
}

void ShuffleNetV2::thread_tmp_1135_fu_20354_p2() {
    tmp_1135_fu_20354_p2 = (!tmp_578_cast1_reg_32670.read().is_01() || !tmp_1601_cast_fu_20350_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_578_cast1_reg_32670.read()) + sc_bigint<18>(tmp_1601_cast_fu_20350_p1.read()));
}

void ShuffleNetV2::thread_tmp_1136_cast_fu_12229_p1() {
    tmp_1136_cast_fu_12229_p1 = esl_zext<10,9>(tmp_749_fu_12221_p3.read());
}

void ShuffleNetV2::thread_tmp_1136_fu_20283_p3() {
    tmp_1136_fu_20283_p3 = esl_concat<7,6>(tmp_594_fu_20278_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1137_fu_20291_p3() {
    tmp_1137_fu_20291_p3 = esl_concat<7,4>(tmp_594_fu_20278_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1138_fu_20303_p2() {
    tmp_1138_fu_20303_p2 = (!tmp_1136_fu_20283_p3.read().is_01() || !p_shl420_cast_fu_20299_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1136_fu_20283_p3.read()) - sc_bigint<13>(p_shl420_cast_fu_20299_p1.read()));
}

void ShuffleNetV2::thread_tmp_1139_fu_20309_p2() {
    tmp_1139_fu_20309_p2 = (!tmp_580_cast_reg_32675.read().is_01() || !tmp_1138_fu_20303_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_580_cast_reg_32675.read()) + sc_biguint<13>(tmp_1138_fu_20303_p2.read()));
}

void ShuffleNetV2::thread_tmp_113_fu_7926_p2() {
    tmp_113_fu_7926_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_291_fu_7921_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1140_fu_20832_p1() {
    tmp_1140_fu_20832_p1 = co132_reg_5655.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1141_fu_20750_p1() {
    tmp_1141_fu_20750_p1 = k39_reg_5644.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1142_fu_20538_p1() {
    tmp_1142_fu_20538_p1 = i124_reg_5622.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1143_cast_fu_12071_p1() {
    tmp_1143_cast_fu_12071_p1 = esl_sext<17,16>(tmp_753_fu_12065_p2.read());
}

void ShuffleNetV2::thread_tmp_1143_fu_20595_p3() {
    tmp_1143_fu_20595_p3 = esl_concat<10,2>(tmp_608_reg_32807.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1144_cast_fu_12080_p1() {
    tmp_1144_cast_fu_12080_p1 = esl_sext<64,17>(tmp_754_fu_12075_p2.read());
}

void ShuffleNetV2::thread_tmp_1144_fu_20606_p2() {
    tmp_1144_fu_20606_p2 = (!p_shl426_cast_fu_20602_p1.read().is_01() || !tmp_610_cast1_fu_20592_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl426_cast_fu_20602_p1.read()) - sc_biguint<13>(tmp_610_cast1_fu_20592_p1.read()));
}

void ShuffleNetV2::thread_tmp_1145_fu_20616_p2() {
    tmp_1145_fu_20616_p2 = (!tmp_1618_cast_fu_20612_p1.read().is_01() || !tmp_595_cast_reg_32776.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_1618_cast_fu_20612_p1.read()) + sc_biguint<14>(tmp_595_cast_reg_32776.read()));
}

void ShuffleNetV2::thread_tmp_1146_fu_20625_p1() {
    tmp_1146_fu_20625_p1 = tmp_1145_fu_20616_p2.read().range(13-1, 0);
}

void ShuffleNetV2::thread_tmp_1147_fu_20637_p2() {
    tmp_1147_fu_20637_p2 = (!p_shl425_cast_fu_20629_p3.read().is_01() || !tmp_1619_cast_fu_20621_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl425_cast_fu_20629_p3.read()) - sc_bigint<15>(tmp_1619_cast_fu_20621_p1.read()));
}

void ShuffleNetV2::thread_tmp_1148_fu_20643_p2() {
    tmp_1148_fu_20643_p2 = (!tmp_1147_fu_20637_p2.read().is_01() || !tmp_602_cast_reg_32794.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1147_fu_20637_p2.read()) + sc_biguint<15>(tmp_602_cast_reg_32794.read()));
}

void ShuffleNetV2::thread_tmp_1149_fu_20655_p3() {
    tmp_1149_fu_20655_p3 = esl_concat<7,2>(tmp_611_reg_32813.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_114_fu_8555_p3() {
    tmp_114_fu_8555_p3 = esl_concat<10,2>(tmp_389_fu_8546_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1150_fu_20662_p1() {
    tmp_1150_fu_20662_p1 = esl_sext<34,9>(tmp_1149_fu_20655_p3.read());
}

void ShuffleNetV2::thread_tmp_1151_fu_20670_p2() {
    tmp_1151_fu_20670_p2 = (!p_shl424_cast_fu_20666_p1.read().is_01() || !tmp_612_cast_fu_20651_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl424_cast_fu_20666_p1.read()) - sc_biguint<35>(tmp_612_cast_fu_20651_p1.read()));
}

void ShuffleNetV2::thread_tmp_1152_cast_fu_12085_p1() {
    tmp_1152_cast_fu_12085_p1 = esl_sext<64,13>(tmp_773_reg_29834.read());
}

void ShuffleNetV2::thread_tmp_1152_fu_20680_p2() {
    tmp_1152_fu_20680_p2 = (!tmp_1625_cast_fu_20676_p1.read().is_01() || !tmp_595_cast1_reg_32771.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1625_cast_fu_20676_p1.read()) + sc_biguint<36>(tmp_595_cast1_reg_32771.read()));
}

void ShuffleNetV2::thread_tmp_1153_fu_20685_p1() {
    tmp_1153_fu_20685_p1 = tmp_1152_fu_20680_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1154_fu_20689_p1() {
    tmp_1154_fu_20689_p1 = tmp_1152_fu_20680_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1155_fu_20704_p2() {
    tmp_1155_fu_20704_p2 = (!p_shl423_cast_fu_20697_p3.read().is_01() || !tmp_1153_reg_32824.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl423_cast_fu_20697_p3.read()) - sc_biguint<10>(tmp_1153_reg_32824.read()));
}

void ShuffleNetV2::thread_tmp_1156_fu_20709_p2() {
    tmp_1156_fu_20709_p2 = (!tmp_1155_fu_20704_p2.read().is_01() || !tmp_602_cast1_reg_32789.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1155_fu_20704_p2.read()) + sc_biguint<10>(tmp_602_cast1_reg_32789.read()));
}

void ShuffleNetV2::thread_tmp_1157_cast_fu_12258_p3() {
    tmp_1157_cast_fu_12258_p3 = esl_concat<11,3>(tmp_775_fu_12253_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1157_fu_21204_p3() {
    tmp_1157_fu_21204_p3 = esl_concat<6,3>(co134_reg_5710.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1158_fu_21122_p1() {
    tmp_1158_fu_21122_p1 = k41_reg_5699.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1159_fu_20921_p1() {
    tmp_1159_fu_20921_p1 = i126_reg_5677.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_115_fu_8578_p2() {
    tmp_115_fu_8578_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_395_fu_8573_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1160_cast_fu_12271_p3() {
    tmp_1160_cast_fu_12271_p3 = esl_concat<10,3>(tmp_778_fu_12266_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1160_fu_21036_p3() {
    tmp_1160_fu_21036_p3 = esl_concat<10,5>(tmp_619_reg_32934.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1161_cast_fu_12304_p1() {
    tmp_1161_cast_fu_12304_p1 = esl_zext<64,14>(tmp_779_fu_12299_p2.read());
}

void ShuffleNetV2::thread_tmp_1161_fu_21043_p1() {
    tmp_1161_fu_21043_p1 = esl_sext<16,15>(tmp_1160_fu_21036_p3.read());
}

void ShuffleNetV2::thread_tmp_1162_cast_fu_12314_p1() {
    tmp_1162_cast_fu_12314_p1 = esl_zext<64,13>(tmp_781_reg_29934.read());
}

void ShuffleNetV2::thread_tmp_1162_fu_21051_p3() {
    tmp_1162_fu_21051_p3 = esl_concat<10,3>(tmp_619_reg_32934.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1163_fu_21058_p1() {
    tmp_1163_fu_21058_p1 = esl_sext<14,13>(tmp_1162_fu_21051_p3.read());
}

void ShuffleNetV2::thread_tmp_1164_fu_21066_p2() {
    tmp_1164_fu_21066_p2 = (!p_shl429_cast_fu_21047_p1.read().is_01() || !p_shl430_cast_fu_21062_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl429_cast_fu_21047_p1.read()) - sc_biguint<17>(p_shl430_cast_fu_21062_p1.read()));
}

void ShuffleNetV2::thread_tmp_1165_fu_21076_p2() {
    tmp_1165_fu_21076_p2 = (!tmp_603_cast_reg_32916.read().is_01() || !tmp_1640_cast_fu_21072_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_603_cast_reg_32916.read()) + sc_bigint<18>(tmp_1640_cast_fu_21072_p1.read()));
}

void ShuffleNetV2::thread_tmp_1166_fu_21005_p3() {
    tmp_1166_fu_21005_p3 = esl_concat<7,6>(tmp_621_fu_21000_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1167_fu_21013_p3() {
    tmp_1167_fu_21013_p3 = esl_concat<7,4>(tmp_621_fu_21000_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1168_fu_21025_p2() {
    tmp_1168_fu_21025_p2 = (!tmp_1166_fu_21005_p3.read().is_01() || !p_shl428_cast_fu_21021_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1166_fu_21005_p3.read()) - sc_bigint<13>(p_shl428_cast_fu_21021_p1.read()));
}

void ShuffleNetV2::thread_tmp_1169_cast_fu_12566_p1() {
    tmp_1169_cast_fu_12566_p1 = esl_sext<17,16>(tmp_795_fu_12560_p2.read());
}

void ShuffleNetV2::thread_tmp_1169_fu_21031_p2() {
    tmp_1169_fu_21031_p2 = (!tmp_605_cast_reg_32921.read().is_01() || !tmp_1168_fu_21025_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_605_cast_reg_32921.read()) + sc_biguint<13>(tmp_1168_fu_21025_p2.read()));
}

void ShuffleNetV2::thread_tmp_116_fu_8867_p3() {
    tmp_116_fu_8867_p3 = esl_concat<10,4>(tmp_439_fu_8862_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1170_cast_fu_12575_p1() {
    tmp_1170_cast_fu_12575_p1 = esl_sext<64,17>(tmp_796_fu_12570_p2.read());
}

void ShuffleNetV2::thread_tmp_1170_fu_21297_p3() {
    tmp_1170_fu_21297_p3 = esl_concat<7,3>(tmp_622_fu_21291_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1171_fu_21309_p3() {
    tmp_1171_fu_21309_p3 = esl_concat<6,3>(co136_reg_5743.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1172_fu_21232_p2() {
    tmp_1172_fu_21232_p2 = (!tmp_1631_cast_reg_32999.read().is_01() || !tmp_623_cast_fu_21228_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1631_cast_reg_32999.read()) + sc_biguint<10>(tmp_623_cast_fu_21228_p1.read()));
}

void ShuffleNetV2::thread_tmp_1173_fu_21237_p3() {
    tmp_1173_fu_21237_p3 = esl_concat<10,3>(tmp_1172_fu_21232_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1174_fu_21422_p1() {
    tmp_1174_fu_21422_p1 = co138_reg_5776.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1175_fu_21341_p2() {
    tmp_1175_fu_21341_p2 = (!tmp_625_cast_fu_21337_p1.read().is_01() || !tmp_1651_cast_reg_33043.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_625_cast_fu_21337_p1.read()) + sc_biguint<11>(tmp_1651_cast_reg_33043.read()));
}

void ShuffleNetV2::thread_tmp_1176_fu_21354_p2() {
    tmp_1176_fu_21354_p2 = (!tmp_625_cast1_fu_21333_p1.read().is_01() || !tmp_1653_cast_reg_33048.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_625_cast1_fu_21333_p1.read()) + sc_biguint<10>(tmp_1653_cast_reg_33048.read()));
}

void ShuffleNetV2::thread_tmp_1177_fu_21265_p2() {
    tmp_1177_fu_21265_p2 = (!tmp_1656_cast_reg_33012.read().is_01() || !tmp_627_cast_fu_21261_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1656_cast_reg_33012.read()) + sc_biguint<14>(tmp_627_cast_fu_21261_p1.read()));
}

void ShuffleNetV2::thread_tmp_1178_cast_fu_12580_p1() {
    tmp_1178_cast_fu_12580_p1 = esl_sext<64,13>(tmp_801_reg_29994.read());
}

void ShuffleNetV2::thread_tmp_1178_fu_21387_p2() {
    tmp_1178_fu_21387_p2 = (!tmp_1661_cast_reg_33061.read().is_01() || !tmp_631_cast_fu_21383_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1661_cast_reg_33061.read()) + sc_biguint<14>(tmp_631_cast_fu_21383_p1.read()));
}

void ShuffleNetV2::thread_tmp_1179_fu_21397_p2() {
    tmp_1179_fu_21397_p2 = (!tmp_1664_cast_reg_33066.read().is_01() || !tmp_631_cast1_fu_21379_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1664_cast_reg_33066.read()) + sc_biguint<13>(tmp_631_cast1_fu_21379_p1.read()));
}

void ShuffleNetV2::thread_tmp_117_fu_9296_p3() {
    tmp_117_fu_9296_p3 = esl_concat<10,2>(tmp_487_fu_9287_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1180_fu_21712_p1() {
    tmp_1180_fu_21712_p1 = k43_reg_5820.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1181_fu_21511_p1() {
    tmp_1181_fu_21511_p1 = i130_reg_5798.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1182_fu_21626_p3() {
    tmp_1182_fu_21626_p3 = esl_concat<9,5>(tmp_642_reg_33138.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1183_fu_21633_p1() {
    tmp_1183_fu_21633_p1 = esl_sext<16,14>(tmp_1182_fu_21626_p3.read());
}

void ShuffleNetV2::thread_tmp_1184_fu_21641_p3() {
    tmp_1184_fu_21641_p3 = esl_concat<9,3>(tmp_642_reg_33138.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1185_fu_21648_p1() {
    tmp_1185_fu_21648_p1 = esl_sext<14,12>(tmp_1184_fu_21641_p3.read());
}

void ShuffleNetV2::thread_tmp_1186_cast_fu_12832_p1() {
    tmp_1186_cast_fu_12832_p1 = esl_sext<13,12>(tmp_808_fu_12826_p2.read());
}

void ShuffleNetV2::thread_tmp_1186_fu_21656_p2() {
    tmp_1186_fu_21656_p2 = (!p_shl433_cast_fu_21637_p1.read().is_01() || !p_shl434_cast_fu_21652_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl433_cast_fu_21637_p1.read()) - sc_biguint<17>(p_shl434_cast_fu_21652_p1.read()));
}

void ShuffleNetV2::thread_tmp_1187_cast_fu_12841_p1() {
    tmp_1187_cast_fu_12841_p1 = esl_sext<15,13>(tmp_811_fu_12836_p2.read());
}

void ShuffleNetV2::thread_tmp_1187_fu_21666_p2() {
    tmp_1187_fu_21666_p2 = (!tmp_628_cast_reg_33120.read().is_01() || !tmp_1676_cast_fu_21662_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_628_cast_reg_33120.read()) + sc_bigint<18>(tmp_1676_cast_fu_21662_p1.read()));
}

void ShuffleNetV2::thread_tmp_1188_fu_21595_p3() {
    tmp_1188_fu_21595_p3 = esl_concat<7,6>(tmp_644_fu_21590_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1189_fu_21603_p3() {
    tmp_1189_fu_21603_p3 = esl_concat<7,4>(tmp_644_fu_21590_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_118_fu_9319_p2() {
    tmp_118_fu_9319_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_490_fu_9314_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1190_cast_fu_12909_p1() {
    tmp_1190_cast_fu_12909_p1 = esl_zext<64,15>(tmp_821_reg_30119.read());
}

void ShuffleNetV2::thread_tmp_1190_fu_21615_p2() {
    tmp_1190_fu_21615_p2 = (!tmp_1188_fu_21595_p3.read().is_01() || !p_shl432_cast_fu_21611_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1188_fu_21595_p3.read()) - sc_bigint<13>(p_shl432_cast_fu_21611_p1.read()));
}

void ShuffleNetV2::thread_tmp_1191_fu_21621_p2() {
    tmp_1191_fu_21621_p2 = (!tmp_630_cast_reg_33125.read().is_01() || !tmp_1190_fu_21615_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_630_cast_reg_33125.read()) + sc_biguint<13>(tmp_1190_fu_21615_p2.read()));
}

void ShuffleNetV2::thread_tmp_1192_fu_22144_p1() {
    tmp_1192_fu_22144_p1 = co142_reg_5897.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1193_cast_fu_12892_p1() {
    tmp_1193_cast_fu_12892_p1 = esl_sext<36,35>(tmp_825_fu_12886_p2.read());
}

void ShuffleNetV2::thread_tmp_1193_fu_22058_p1() {
    tmp_1193_fu_22058_p1 = k45_reg_5886.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1194_fu_21854_p1() {
    tmp_1194_fu_21854_p1 = i136_reg_5864.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1195_fu_21911_p3() {
    tmp_1195_fu_21911_p3 = esl_concat<10,2>(tmp_658_reg_33257.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1196_fu_21922_p2() {
    tmp_1196_fu_21922_p2 = (!p_shl438_cast_fu_21918_p1.read().is_01() || !tmp_660_cast1_fu_21908_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl438_cast_fu_21918_p1.read()) - sc_biguint<13>(tmp_660_cast1_fu_21908_p1.read()));
}

void ShuffleNetV2::thread_tmp_1197_cast_fu_12930_p1() {
    tmp_1197_cast_fu_12930_p1 = esl_zext<64,10>(tmp_831_reg_30139.read());
}

void ShuffleNetV2::thread_tmp_1197_fu_21928_p2() {
    tmp_1197_fu_21928_p2 = (!tmp_1196_fu_21922_p2.read().is_01() || !tmp_645_cast1_reg_33226.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1196_fu_21922_p2.read()) + sc_biguint<13>(tmp_645_cast1_reg_33226.read()));
}

void ShuffleNetV2::thread_tmp_1198_fu_21945_p2() {
    tmp_1198_fu_21945_p2 = (!p_shl437_cast_fu_21937_p3.read().is_01() || !tmp_1694_cast_fu_21933_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl437_cast_fu_21937_p3.read()) - sc_bigint<15>(tmp_1694_cast_fu_21933_p1.read()));
}

void ShuffleNetV2::thread_tmp_1199_cast_fu_13416_p1() {
    tmp_1199_cast_fu_13416_p1 = esl_zext<10,9>(tmp_842_fu_13408_p3.read());
}

void ShuffleNetV2::thread_tmp_1199_fu_21951_p2() {
    tmp_1199_fu_21951_p2 = (!tmp_1198_fu_21945_p2.read().is_01() || !tmp_652_cast_reg_33244.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1198_fu_21945_p2.read()) + sc_biguint<15>(tmp_652_cast_reg_33244.read()));
}

void ShuffleNetV2::thread_tmp_119_fu_9604_p3() {
    tmp_119_fu_9604_p3 = esl_concat<10,4>(tmp_531_fu_9599_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1200_fu_21963_p3() {
    tmp_1200_fu_21963_p3 = esl_concat<7,2>(tmp_661_reg_33263.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1201_fu_21970_p1() {
    tmp_1201_fu_21970_p1 = esl_sext<34,9>(tmp_1200_fu_21963_p3.read());
}

void ShuffleNetV2::thread_tmp_1202_fu_21978_p2() {
    tmp_1202_fu_21978_p2 = (!p_shl436_cast_fu_21974_p1.read().is_01() || !tmp_662_cast_fu_21959_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl436_cast_fu_21974_p1.read()) - sc_biguint<35>(tmp_662_cast_fu_21959_p1.read()));
}

void ShuffleNetV2::thread_tmp_1203_fu_21988_p2() {
    tmp_1203_fu_21988_p2 = (!tmp_1700_cast_fu_21984_p1.read().is_01() || !tmp_645_cast_reg_33221.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1700_cast_fu_21984_p1.read()) + sc_biguint<36>(tmp_645_cast_reg_33221.read()));
}

void ShuffleNetV2::thread_tmp_1204_fu_21993_p1() {
    tmp_1204_fu_21993_p1 = tmp_1203_fu_21988_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_1205_fu_21997_p1() {
    tmp_1205_fu_21997_p1 = tmp_1203_fu_21988_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_1206_cast_fu_13280_p1() {
    tmp_1206_cast_fu_13280_p1 = esl_sext<17,16>(tmp_846_fu_13274_p2.read());
}

void ShuffleNetV2::thread_tmp_1206_fu_22012_p2() {
    tmp_1206_fu_22012_p2 = (!p_shl435_cast_fu_22005_p3.read().is_01() || !tmp_1204_reg_33274.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl435_cast_fu_22005_p3.read()) - sc_biguint<10>(tmp_1204_reg_33274.read()));
}

void ShuffleNetV2::thread_tmp_1207_cast_fu_13289_p1() {
    tmp_1207_cast_fu_13289_p1 = esl_sext<64,17>(tmp_847_fu_13284_p2.read());
}

void ShuffleNetV2::thread_tmp_1207_fu_22017_p2() {
    tmp_1207_fu_22017_p2 = (!tmp_1206_fu_22012_p2.read().is_01() || !tmp_652_cast1_reg_33239.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1206_fu_22012_p2.read()) + sc_biguint<10>(tmp_652_cast1_reg_33239.read()));
}

void ShuffleNetV2::thread_tmp_1208_fu_22516_p3() {
    tmp_1208_fu_22516_p3 = esl_concat<6,3>(co144_reg_5952.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1209_fu_22434_p1() {
    tmp_1209_fu_22434_p1 = k47_reg_5941.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_120_fu_10039_p3() {
    tmp_120_fu_10039_p3 = esl_concat<11,2>(tmp_581_fu_10030_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1210_fu_22233_p1() {
    tmp_1210_fu_22233_p1 = i138_reg_5919.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1211_fu_22356_p3() {
    tmp_1211_fu_22356_p3 = esl_concat<12,5>(tmp_669_reg_33384.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1212_fu_22367_p3() {
    tmp_1212_fu_22367_p3 = esl_concat<12,3>(tmp_669_reg_33384.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1213_fu_22378_p2() {
    tmp_1213_fu_22378_p2 = (!p_shl441_cast_fu_22363_p1.read().is_01() || !p_shl442_cast_fu_22374_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl441_cast_fu_22363_p1.read()) - sc_biguint<18>(p_shl442_cast_fu_22374_p1.read()));
}

void ShuffleNetV2::thread_tmp_1214_fu_22388_p2() {
    tmp_1214_fu_22388_p2 = (!tmp_653_cast_reg_33366.read().is_01() || !tmp_1713_cast_fu_22384_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_653_cast_reg_33366.read()) + sc_bigint<19>(tmp_1713_cast_fu_22384_p1.read()));
}

void ShuffleNetV2::thread_tmp_1215_cast_fu_13294_p1() {
    tmp_1215_cast_fu_13294_p1 = esl_sext<64,13>(tmp_856_reg_30240.read());
}

void ShuffleNetV2::thread_tmp_1215_fu_22325_p3() {
    tmp_1215_fu_22325_p3 = esl_concat<7,6>(tmp_671_fu_22320_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_1216_fu_22333_p3() {
    tmp_1216_fu_22333_p3 = esl_concat<7,4>(tmp_671_fu_22320_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1217_cast_fu_13509_p1() {
    tmp_1217_cast_fu_13509_p1 = esl_zext<11,10>(tmp_858_fu_13501_p3.read());
}

void ShuffleNetV2::thread_tmp_1217_fu_22345_p2() {
    tmp_1217_fu_22345_p2 = (!tmp_1215_fu_22325_p3.read().is_01() || !p_shl440_cast_fu_22341_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1215_fu_22325_p3.read()) - sc_bigint<13>(p_shl440_cast_fu_22341_p1.read()));
}

void ShuffleNetV2::thread_tmp_1218_fu_22351_p2() {
    tmp_1218_fu_22351_p2 = (!tmp_655_cast_reg_33371.read().is_01() || !tmp_1217_fu_22345_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_655_cast_reg_33371.read()) + sc_biguint<13>(tmp_1217_fu_22345_p2.read()));
}

void ShuffleNetV2::thread_tmp_1219_cast_fu_13521_p1() {
    tmp_1219_cast_fu_13521_p1 = esl_zext<10,9>(tmp_859_fu_13513_p3.read());
}

void ShuffleNetV2::thread_tmp_1219_fu_22603_p1() {
    tmp_1219_fu_22603_p1 = co146_reg_5985.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_121_fu_10062_p2() {
    tmp_121_fu_10062_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_587_fu_10057_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_1220_fu_22619_p2() {
    tmp_1220_fu_22619_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co146_reg_5985.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1221_fu_22544_p2() {
    tmp_1221_fu_22544_p2 = (!tmp_1706_cast_reg_33449.read().is_01() || !tmp_673_cast_fu_22540_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1706_cast_reg_33449.read()) + sc_biguint<10>(tmp_673_cast_fu_22540_p1.read()));
}

void ShuffleNetV2::thread_tmp_1222_cast_fu_13449_p1() {
    tmp_1222_cast_fu_13449_p1 = esl_zext<14,13>(tmp_200_fu_13441_p3.read());
}

void ShuffleNetV2::thread_tmp_1222_fu_22549_p3() {
    tmp_1222_fu_22549_p3 = esl_concat<10,3>(tmp_1221_fu_22544_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1223_fu_22577_p2() {
    tmp_1223_fu_22577_p2 = (!tmp_1727_cast_reg_33462.read().is_01() || !tmp_678_cast_fu_22573_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1727_cast_reg_33462.read()) + sc_biguint<14>(tmp_678_cast_fu_22573_p1.read()));
}

void ShuffleNetV2::thread_tmp_1224_fu_22873_p1() {
    tmp_1224_fu_22873_p1 = k49_reg_6029.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1225_fu_22690_p1() {
    tmp_1225_fu_22690_p1 = i142_reg_6007.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1226_fu_22795_p3() {
    tmp_1226_fu_22795_p3 = esl_concat<12,5>(tmp_686_reg_33534.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1227_cast_fu_13550_p3() {
    tmp_1227_cast_fu_13550_p3 = esl_concat<10,3>(tmp_871_fu_13545_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1227_fu_22806_p3() {
    tmp_1227_fu_22806_p3 = esl_concat<12,3>(tmp_686_reg_33534.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1228_fu_22817_p2() {
    tmp_1228_fu_22817_p2 = (!p_shl445_cast_fu_22802_p1.read().is_01() || !p_shl446_cast_fu_22813_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl445_cast_fu_22802_p1.read()) - sc_biguint<18>(p_shl446_cast_fu_22813_p1.read()));
}

void ShuffleNetV2::thread_tmp_1229_fu_22827_p2() {
    tmp_1229_fu_22827_p2 = (!tmp_674_cast_reg_33516.read().is_01() || !tmp_1735_cast_fu_22823_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_674_cast_reg_33516.read()) + sc_bigint<19>(tmp_1735_cast_fu_22823_p1.read()));
}

void ShuffleNetV2::thread_tmp_122_fu_10403_p1() {
    tmp_122_fu_10403_p1 = co56_reg_3752.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1230_cast_fu_13563_p3() {
    tmp_1230_cast_fu_13563_p3 = esl_concat<11,3>(tmp_872_fu_13558_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1230_fu_22743_p2() {
    tmp_1230_fu_22743_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i142_reg_6007.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1231_cast_fu_13474_p1() {
    tmp_1231_cast_fu_13474_p1 = esl_zext<64,14>(tmp_874_fu_13469_p2.read());
}

void ShuffleNetV2::thread_tmp_1231_fu_22764_p3() {
    tmp_1231_fu_22764_p3 = esl_concat<8,7>(tmp_691_fu_22759_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_1232_cast_fu_13606_p1() {
    tmp_1232_cast_fu_13606_p1 = esl_zext<64,13>(tmp_875_reg_30379.read());
}

void ShuffleNetV2::thread_tmp_1232_fu_22772_p3() {
    tmp_1232_fu_22772_p3 = esl_concat<8,5>(tmp_691_fu_22759_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1233_cast_fu_13601_p1() {
    tmp_1233_cast_fu_13601_p1 = esl_zext<64,14>(tmp_878_fu_13596_p2.read());
}

void ShuffleNetV2::thread_tmp_1233_fu_22784_p2() {
    tmp_1233_fu_22784_p2 = (!tmp_1231_fu_22764_p3.read().is_01() || !p_shl444_cast_fu_22780_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1231_fu_22764_p3.read()) - sc_bigint<15>(p_shl444_cast_fu_22780_p1.read()));
}

void ShuffleNetV2::thread_tmp_1234_fu_22790_p2() {
    tmp_1234_fu_22790_p2 = (!tmp_677_cast1_reg_33521.read().is_01() || !tmp_1233_fu_22784_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_677_cast1_reg_33521.read()) + sc_biguint<15>(tmp_1233_fu_22784_p2.read()));
}

void ShuffleNetV2::thread_tmp_1235_fu_23305_p1() {
    tmp_1235_fu_23305_p1 = co150_reg_6106.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1236_fu_23321_p2() {
    tmp_1236_fu_23321_p2 = (!ap_const_lv5_3.is_01())? sc_lv<5>(): co150_reg_6106.read() << (unsigned short)ap_const_lv5_3.to_uint();
}

void ShuffleNetV2::thread_tmp_1237_fu_23219_p1() {
    tmp_1237_fu_23219_p1 = k51_reg_6095.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1238_fu_23015_p1() {
    tmp_1238_fu_23015_p1 = i148_reg_6073.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1239_fu_23072_p3() {
    tmp_1239_fu_23072_p3 = esl_concat<10,2>(tmp_704_reg_33653.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_123_fu_10349_p3() {
    tmp_123_fu_10349_p3 = esl_concat<10,4>(tmp_628_fu_10344_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_1240_cast_fu_13858_p1() {
    tmp_1240_cast_fu_13858_p1 = esl_sext<17,16>(tmp_891_fu_13852_p2.read());
}

void ShuffleNetV2::thread_tmp_1240_fu_23083_p2() {
    tmp_1240_fu_23083_p2 = (!p_shl450_cast_fu_23079_p1.read().is_01() || !tmp_705_cast_fu_23069_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl450_cast_fu_23079_p1.read()) - sc_biguint<13>(tmp_705_cast_fu_23069_p1.read()));
}

void ShuffleNetV2::thread_tmp_1241_cast_fu_13867_p1() {
    tmp_1241_cast_fu_13867_p1 = esl_sext<64,17>(tmp_892_fu_13862_p2.read());
}

void ShuffleNetV2::thread_tmp_1241_fu_23089_p2() {
    tmp_1241_fu_23089_p2 = (!tmp_1240_fu_23083_p2.read().is_01() || !tmp_692_cast_reg_33622.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1240_fu_23083_p2.read()) + sc_biguint<13>(tmp_692_cast_reg_33622.read()));
}

void ShuffleNetV2::thread_tmp_1242_fu_23106_p2() {
    tmp_1242_fu_23106_p2 = (!p_shl449_cast_fu_23098_p3.read().is_01() || !tmp_1752_cast_fu_23094_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl449_cast_fu_23098_p3.read()) - sc_bigint<15>(tmp_1752_cast_fu_23094_p1.read()));
}

void ShuffleNetV2::thread_tmp_1243_fu_23112_p2() {
    tmp_1243_fu_23112_p2 = (!tmp_1242_fu_23106_p2.read().is_01() || !tmp_699_cast_reg_33640.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1242_fu_23106_p2.read()) + sc_biguint<15>(tmp_699_cast_reg_33640.read()));
}

void ShuffleNetV2::thread_tmp_1244_fu_23124_p3() {
    tmp_1244_fu_23124_p3 = esl_concat<8,2>(tmp_707_reg_33659.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1245_fu_23131_p1() {
    tmp_1245_fu_23131_p1 = esl_sext<34,10>(tmp_1244_fu_23124_p3.read());
}

void ShuffleNetV2::thread_tmp_1246_fu_23139_p2() {
    tmp_1246_fu_23139_p2 = (!p_shl448_cast_fu_23135_p1.read().is_01() || !tmp_708_cast_fu_23120_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl448_cast_fu_23135_p1.read()) - sc_biguint<35>(tmp_708_cast_fu_23120_p1.read()));
}

void ShuffleNetV2::thread_tmp_1247_fu_23149_p2() {
    tmp_1247_fu_23149_p2 = (!tmp_1758_cast_fu_23145_p1.read().is_01() || !tmp_692_cast1_reg_33617.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1758_cast_fu_23145_p1.read()) + sc_biguint<36>(tmp_692_cast1_reg_33617.read()));
}

void ShuffleNetV2::thread_tmp_1248_fu_23154_p1() {
    tmp_1248_fu_23154_p1 = tmp_1247_fu_23149_p2.read().range(11-1, 0);
}

void ShuffleNetV2::thread_tmp_1249_cast_fu_13872_p1() {
    tmp_1249_cast_fu_13872_p1 = esl_sext<64,13>(tmp_896_reg_30444.read());
}

void ShuffleNetV2::thread_tmp_1249_fu_23158_p1() {
    tmp_1249_fu_23158_p1 = tmp_1247_fu_23149_p2.read().range(9-1, 0);
}

void ShuffleNetV2::thread_tmp_124_fu_10685_p1() {
    tmp_124_fu_10685_p1 = k1_reg_3796.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_1250_fu_23173_p2() {
    tmp_1250_fu_23173_p2 = (!p_shl447_cast_fu_23166_p3.read().is_01() || !tmp_1248_reg_33670.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl447_cast_fu_23166_p3.read()) - sc_biguint<11>(tmp_1248_reg_33670.read()));
}

void ShuffleNetV2::thread_tmp_1251_fu_23178_p2() {
    tmp_1251_fu_23178_p2 = (!tmp_1250_fu_23173_p2.read().is_01() || !tmp_699_cast1_reg_33635.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1250_fu_23173_p2.read()) + sc_biguint<11>(tmp_699_cast1_reg_33635.read()));
}

void ShuffleNetV2::thread_tmp_1252_fu_23575_p1() {
    tmp_1252_fu_23575_p1 = k53_reg_6150.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_1253_fu_23392_p1() {
    tmp_1253_fu_23392_p1 = i150_reg_6128.read().range(4-1, 0);
}

void ShuffleNetV2::thread_tmp_1254_fu_23497_p3() {
    tmp_1254_fu_23497_p3 = esl_concat<12,5>(tmp_716_reg_33780.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1255_fu_23508_p3() {
    tmp_1255_fu_23508_p3 = esl_concat<12,3>(tmp_716_reg_33780.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1256_fu_23519_p2() {
    tmp_1256_fu_23519_p2 = (!p_shl453_cast_fu_23504_p1.read().is_01() || !p_shl454_cast_fu_23515_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl453_cast_fu_23504_p1.read()) - sc_biguint<18>(p_shl454_cast_fu_23515_p1.read()));
}

void ShuffleNetV2::thread_tmp_1257_cast_fu_14120_p1() {
    tmp_1257_cast_fu_14120_p1 = esl_sext<13,12>(tmp_900_fu_14114_p2.read());
}

void ShuffleNetV2::thread_tmp_1257_fu_23529_p2() {
    tmp_1257_fu_23529_p2 = (!tmp_700_cast_reg_33762.read().is_01() || !tmp_1769_cast_fu_23525_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_700_cast_reg_33762.read()) + sc_bigint<19>(tmp_1769_cast_fu_23525_p1.read()));
}

void ShuffleNetV2::thread_tmp_1258_cast_fu_14129_p1() {
    tmp_1258_cast_fu_14129_p1 = esl_sext<15,13>(tmp_901_fu_14124_p2.read());
}

void ShuffleNetV2::thread_tmp_1258_fu_23445_p2() {
    tmp_1258_fu_23445_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): i150_reg_6128.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void ShuffleNetV2::thread_tmp_1259_fu_23466_p3() {
    tmp_1259_fu_23466_p3 = esl_concat<8,7>(tmp_718_fu_23461_p2.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_tmp_125_fu_7362_p1() {
    tmp_125_fu_7362_p1 = esl_zext<64,12>(tmp_cast_fu_7358_p1.read());
}

void ShuffleNetV2::thread_tmp_1260_fu_23474_p3() {
    tmp_1260_fu_23474_p3 = esl_concat<8,5>(tmp_718_fu_23461_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1261_cast_fu_14197_p1() {
    tmp_1261_cast_fu_14197_p1 = esl_zext<64,15>(tmp_903_reg_30569.read());
}

void ShuffleNetV2::thread_tmp_1261_fu_23486_p2() {
    tmp_1261_fu_23486_p2 = (!tmp_1259_fu_23466_p3.read().is_01() || !p_shl452_cast_fu_23482_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1259_fu_23466_p3.read()) - sc_bigint<15>(p_shl452_cast_fu_23482_p1.read()));
}

void ShuffleNetV2::thread_tmp_1262_fu_23492_p2() {
    tmp_1262_fu_23492_p2 = (!tmp_702_cast1_reg_33767.read().is_01() || !tmp_1261_fu_23486_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_702_cast1_reg_33767.read()) + sc_biguint<15>(tmp_1261_fu_23486_p2.read()));
}

}

