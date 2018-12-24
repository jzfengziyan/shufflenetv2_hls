#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_p_shl375_cast_fu_20947_p1() {
    p_shl375_cast_fu_20947_p1 = esl_zext<15,14>(tmp_2360_fu_20939_p3.read());
}

void ShuffleNetV2::thread_p_shl376_cast_fu_20959_p1() {
    p_shl376_cast_fu_20959_p1 = esl_zext<15,12>(tmp_2361_fu_20951_p3.read());
}

void ShuffleNetV2::thread_p_shl377_cast_fu_20982_p1() {
    p_shl377_cast_fu_20982_p1 = esl_zext<14,13>(tmp_2362_fu_20974_p3.read());
}

void ShuffleNetV2::thread_p_shl378_cast_fu_20994_p1() {
    p_shl378_cast_fu_20994_p1 = esl_zext<14,11>(tmp_2363_fu_20986_p3.read());
}

void ShuffleNetV2::thread_p_shl379_cast_fu_21252_p1() {
    p_shl379_cast_fu_21252_p1 = esl_zext<16,15>(tmp_811_fu_21245_p3.read());
}

void ShuffleNetV2::thread_p_shl37_cast_fu_21172_p1() {
    p_shl37_cast_fu_21172_p1 = esl_zext<7,4>(p_shl37_fu_21164_p3.read());
}

void ShuffleNetV2::thread_p_shl37_fu_21164_p3() {
    p_shl37_fu_21164_p3 = esl_concat<2,2>(tmp_2365_fu_21148_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl380_cast_fu_21263_p1() {
    p_shl380_cast_fu_21263_p1 = esl_zext<16,13>(tmp_812_fu_21256_p3.read());
}

void ShuffleNetV2::thread_p_shl381_cast_fu_21319_p3() {
    p_shl381_cast_fu_21319_p3 = esl_concat<2,6>(tmp_2367_reg_43308.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl382_cast_fu_21326_p3() {
    p_shl382_cast_fu_21326_p3 = esl_concat<4,4>(tmp_2368_reg_43313.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl383_cast_fu_21602_p1() {
    p_shl383_cast_fu_21602_p1 = esl_sext<10,9>(tmp_817_fu_21594_p3.read());
}

void ShuffleNetV2::thread_p_shl385_cast_fu_21661_p1() {
    p_shl385_cast_fu_21661_p1 = esl_zext<12,11>(tmp_822_fu_21654_p3.read());
}

void ShuffleNetV2::thread_p_shl387_cast_fu_22268_p1() {
    p_shl387_cast_fu_22268_p1 = esl_zext<10,9>(tmp_827_fu_22260_p3.read());
}

void ShuffleNetV2::thread_p_shl388_cast_fu_22280_p1() {
    p_shl388_cast_fu_22280_p1 = esl_zext<10,7>(tmp_828_fu_22272_p3.read());
}

void ShuffleNetV2::thread_p_shl389_cast_fu_22033_p1() {
    p_shl389_cast_fu_22033_p1 = esl_zext<16,15>(tmp_830_fu_22026_p3.read());
}

void ShuffleNetV2::thread_p_shl38_cast_fu_21199_p1() {
    p_shl38_cast_fu_21199_p1 = esl_zext<8,7>(p_shl38_fu_21191_p3.read());
}

void ShuffleNetV2::thread_p_shl38_fu_21191_p3() {
    p_shl38_fu_21191_p3 = esl_concat<2,5>(tmp_2365_fu_21148_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl390_cast_fu_22044_p1() {
    p_shl390_cast_fu_22044_p1 = esl_zext<16,13>(tmp_831_fu_22037_p3.read());
}

void ShuffleNetV2::thread_p_shl391_cast_fu_22100_p3() {
    p_shl391_cast_fu_22100_p3 = esl_concat<2,6>(tmp_2378_reg_43568.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl392_cast_fu_22107_p3() {
    p_shl392_cast_fu_22107_p3 = esl_concat<4,4>(tmp_2379_reg_43573.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl393_cast_fu_22387_p1() {
    p_shl393_cast_fu_22387_p1 = esl_zext<10,9>(tmp_836_fu_22379_p3.read());
}

void ShuffleNetV2::thread_p_shl394_cast_fu_22399_p1() {
    p_shl394_cast_fu_22399_p1 = esl_zext<10,7>(tmp_837_fu_22391_p3.read());
}

void ShuffleNetV2::thread_p_shl395_cast_fu_22439_p1() {
    p_shl395_cast_fu_22439_p1 = esl_zext<11,10>(tmp_839_fu_22431_p3.read());
}

void ShuffleNetV2::thread_p_shl396_cast_fu_22451_p1() {
    p_shl396_cast_fu_22451_p1 = esl_zext<11,8>(tmp_840_fu_22443_p3.read());
}

void ShuffleNetV2::thread_p_shl397_cast_fu_22331_p1() {
    p_shl397_cast_fu_22331_p1 = esl_zext<15,13>(tmp_2380_fu_22323_p3.read());
}

void ShuffleNetV2::thread_p_shl398_cast_fu_22343_p1() {
    p_shl398_cast_fu_22343_p1 = esl_zext<15,11>(tmp_2381_fu_22335_p3.read());
}

void ShuffleNetV2::thread_p_shl399_cast_fu_22494_p1() {
    p_shl399_cast_fu_22494_p1 = esl_zext<15,14>(tmp_2384_fu_22486_p3.read());
}

void ShuffleNetV2::thread_p_shl39_cast_fu_21211_p1() {
    p_shl39_cast_fu_21211_p1 = esl_zext<8,5>(p_shl39_fu_21203_p3.read());
}

void ShuffleNetV2::thread_p_shl39_fu_21203_p3() {
    p_shl39_fu_21203_p3 = esl_concat<2,3>(tmp_2365_fu_21148_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl3_cast_fu_19222_p1() {
    p_shl3_cast_fu_19222_p1 = esl_zext<7,4>(p_shl3_fu_19214_p3.read());
}

void ShuffleNetV2::thread_p_shl3_fu_19214_p3() {
    p_shl3_fu_19214_p3 = esl_concat<1,3>(tmp_2331_fu_19198_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl400_cast_fu_22506_p1() {
    p_shl400_cast_fu_22506_p1 = esl_zext<15,12>(tmp_2385_fu_22498_p3.read());
}

void ShuffleNetV2::thread_p_shl401_cast_fu_22529_p1() {
    p_shl401_cast_fu_22529_p1 = esl_zext<14,13>(tmp_2386_fu_22521_p3.read());
}

void ShuffleNetV2::thread_p_shl402_cast_fu_22541_p1() {
    p_shl402_cast_fu_22541_p1 = esl_zext<14,11>(tmp_2387_fu_22533_p3.read());
}

void ShuffleNetV2::thread_p_shl403_cast_fu_22799_p1() {
    p_shl403_cast_fu_22799_p1 = esl_zext<16,15>(tmp_851_fu_22792_p3.read());
}

void ShuffleNetV2::thread_p_shl404_cast_fu_22810_p1() {
    p_shl404_cast_fu_22810_p1 = esl_zext<16,13>(tmp_852_fu_22803_p3.read());
}

void ShuffleNetV2::thread_p_shl405_cast_fu_22866_p3() {
    p_shl405_cast_fu_22866_p3 = esl_concat<2,6>(tmp_2391_reg_43793.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl406_cast_fu_22873_p3() {
    p_shl406_cast_fu_22873_p3 = esl_concat<4,4>(tmp_2392_reg_43798.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl407_cast_fu_23153_p1() {
    p_shl407_cast_fu_23153_p1 = esl_sext<10,9>(tmp_857_fu_23145_p3.read());
}

void ShuffleNetV2::thread_p_shl409_cast_fu_23204_p1() {
    p_shl409_cast_fu_23204_p1 = esl_zext<12,11>(tmp_862_fu_23197_p3.read());
}

void ShuffleNetV2::thread_p_shl40_cast_fu_21764_p1() {
    p_shl40_cast_fu_21764_p1 = esl_zext<7,6>(p_shl40_fu_21756_p3.read());
}

void ShuffleNetV2::thread_p_shl40_fu_21756_p3() {
    p_shl40_fu_21756_p3 = esl_concat<1,5>(tmp_2371_fu_21752_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl411_cast_fu_23819_p1() {
    p_shl411_cast_fu_23819_p1 = esl_zext<10,9>(tmp_867_fu_23811_p3.read());
}

void ShuffleNetV2::thread_p_shl412_cast_fu_23831_p1() {
    p_shl412_cast_fu_23831_p1 = esl_zext<10,7>(tmp_868_fu_23823_p3.read());
}

void ShuffleNetV2::thread_p_shl413_cast_fu_23580_p1() {
    p_shl413_cast_fu_23580_p1 = esl_zext<16,15>(tmp_870_fu_23573_p3.read());
}

void ShuffleNetV2::thread_p_shl414_cast_fu_23591_p1() {
    p_shl414_cast_fu_23591_p1 = esl_zext<16,13>(tmp_871_fu_23584_p3.read());
}

void ShuffleNetV2::thread_p_shl415_cast_fu_23647_p3() {
    p_shl415_cast_fu_23647_p3 = esl_concat<2,6>(tmp_2402_reg_44053.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl416_cast_fu_23654_p3() {
    p_shl416_cast_fu_23654_p3 = esl_concat<4,4>(tmp_2403_reg_44058.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl417_cast_fu_23938_p1() {
    p_shl417_cast_fu_23938_p1 = esl_zext<10,9>(tmp_876_fu_23930_p3.read());
}

void ShuffleNetV2::thread_p_shl418_cast_fu_23950_p1() {
    p_shl418_cast_fu_23950_p1 = esl_zext<10,7>(tmp_877_fu_23942_p3.read());
}

void ShuffleNetV2::thread_p_shl419_cast_fu_23990_p1() {
    p_shl419_cast_fu_23990_p1 = esl_zext<11,10>(tmp_879_fu_23982_p3.read());
}

void ShuffleNetV2::thread_p_shl41_cast_fu_21776_p1() {
    p_shl41_cast_fu_21776_p1 = esl_zext<7,4>(p_shl41_fu_21768_p3.read());
}

void ShuffleNetV2::thread_p_shl41_fu_21768_p3() {
    p_shl41_fu_21768_p3 = esl_concat<1,3>(tmp_2371_fu_21752_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl420_cast_fu_24002_p1() {
    p_shl420_cast_fu_24002_p1 = esl_zext<11,8>(tmp_880_fu_23994_p3.read());
}

void ShuffleNetV2::thread_p_shl421_cast_fu_23882_p1() {
    p_shl421_cast_fu_23882_p1 = esl_zext<15,13>(tmp_2404_fu_23874_p3.read());
}

void ShuffleNetV2::thread_p_shl422_cast_fu_23894_p1() {
    p_shl422_cast_fu_23894_p1 = esl_zext<15,11>(tmp_2405_fu_23886_p3.read());
}

void ShuffleNetV2::thread_p_shl423_cast_fu_24045_p1() {
    p_shl423_cast_fu_24045_p1 = esl_zext<15,14>(tmp_2408_fu_24037_p3.read());
}

void ShuffleNetV2::thread_p_shl424_cast_fu_24057_p1() {
    p_shl424_cast_fu_24057_p1 = esl_zext<15,12>(tmp_2409_fu_24049_p3.read());
}

void ShuffleNetV2::thread_p_shl425_cast_fu_24080_p1() {
    p_shl425_cast_fu_24080_p1 = esl_zext<14,13>(tmp_2410_fu_24072_p3.read());
}

void ShuffleNetV2::thread_p_shl426_cast_fu_24092_p1() {
    p_shl426_cast_fu_24092_p1 = esl_zext<14,11>(tmp_2411_fu_24084_p3.read());
}

void ShuffleNetV2::thread_p_shl427_cast_fu_24354_p1() {
    p_shl427_cast_fu_24354_p1 = esl_zext<16,15>(tmp_892_fu_24350_p1.read());
}

void ShuffleNetV2::thread_p_shl428_cast_fu_24369_p1() {
    p_shl428_cast_fu_24369_p1 = esl_zext<16,13>(tmp_894_fu_24365_p1.read());
}

void ShuffleNetV2::thread_p_shl429_cast_fu_24425_p3() {
    p_shl429_cast_fu_24425_p3 = esl_concat<2,6>(tmp_2415_reg_44278.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl42_cast_fu_21852_p1() {
    p_shl42_cast_fu_21852_p1 = esl_zext<7,6>(p_shl42_fu_21844_p3.read());
}

void ShuffleNetV2::thread_p_shl42_fu_21844_p3() {
    p_shl42_fu_21844_p3 = esl_concat<1,5>(tmp_2369_fu_21840_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl430_cast_fu_24432_p3() {
    p_shl430_cast_fu_24432_p3 = esl_concat<4,4>(tmp_2416_reg_44283.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl431_cast_fu_24716_p1() {
    p_shl431_cast_fu_24716_p1 = esl_sext<10,9>(tmp_899_fu_24708_p3.read());
}

void ShuffleNetV2::thread_p_shl433_cast_fu_24767_p1() {
    p_shl433_cast_fu_24767_p1 = esl_zext<12,11>(tmp_904_fu_24760_p3.read());
}

void ShuffleNetV2::thread_p_shl435_cast_fu_25378_p1() {
    p_shl435_cast_fu_25378_p1 = esl_zext<10,9>(tmp_909_fu_25370_p3.read());
}

void ShuffleNetV2::thread_p_shl436_cast_fu_25390_p1() {
    p_shl436_cast_fu_25390_p1 = esl_zext<10,7>(tmp_910_fu_25382_p3.read());
}

void ShuffleNetV2::thread_p_shl437_cast_fu_25139_p1() {
    p_shl437_cast_fu_25139_p1 = esl_zext<17,16>(tmp_912_fu_25132_p3.read());
}

void ShuffleNetV2::thread_p_shl438_cast_fu_25150_p1() {
    p_shl438_cast_fu_25150_p1 = esl_zext<17,14>(tmp_913_fu_25143_p3.read());
}

void ShuffleNetV2::thread_p_shl439_cast_fu_25206_p3() {
    p_shl439_cast_fu_25206_p3 = esl_concat<2,6>(tmp_2426_reg_44538.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl43_cast_fu_21864_p1() {
    p_shl43_cast_fu_21864_p1 = esl_zext<7,4>(p_shl43_fu_21856_p3.read());
}

void ShuffleNetV2::thread_p_shl43_fu_21856_p3() {
    p_shl43_fu_21856_p3 = esl_concat<1,3>(tmp_2369_fu_21840_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl440_cast_fu_25213_p3() {
    p_shl440_cast_fu_25213_p3 = esl_concat<4,4>(tmp_2427_reg_44543.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl441_cast_fu_25497_p1() {
    p_shl441_cast_fu_25497_p1 = esl_zext<10,9>(tmp_918_fu_25489_p3.read());
}

void ShuffleNetV2::thread_p_shl442_cast_fu_25509_p1() {
    p_shl442_cast_fu_25509_p1 = esl_zext<10,7>(tmp_919_fu_25501_p3.read());
}

void ShuffleNetV2::thread_p_shl443_cast_fu_25549_p1() {
    p_shl443_cast_fu_25549_p1 = esl_zext<11,10>(tmp_921_fu_25541_p3.read());
}

void ShuffleNetV2::thread_p_shl444_cast_fu_25561_p1() {
    p_shl444_cast_fu_25561_p1 = esl_zext<11,8>(tmp_922_fu_25553_p3.read());
}

void ShuffleNetV2::thread_p_shl445_cast_fu_25441_p1() {
    p_shl445_cast_fu_25441_p1 = esl_zext<15,13>(tmp_2428_fu_25433_p3.read());
}

void ShuffleNetV2::thread_p_shl446_cast_fu_25453_p1() {
    p_shl446_cast_fu_25453_p1 = esl_zext<15,11>(tmp_2429_fu_25445_p3.read());
}

void ShuffleNetV2::thread_p_shl447_cast_fu_25604_p1() {
    p_shl447_cast_fu_25604_p1 = esl_zext<15,14>(tmp_2432_fu_25596_p3.read());
}

void ShuffleNetV2::thread_p_shl448_cast_fu_25616_p1() {
    p_shl448_cast_fu_25616_p1 = esl_zext<15,12>(tmp_2433_fu_25608_p3.read());
}

void ShuffleNetV2::thread_p_shl449_cast_fu_25639_p1() {
    p_shl449_cast_fu_25639_p1 = esl_zext<14,13>(tmp_2434_fu_25631_p3.read());
}

void ShuffleNetV2::thread_p_shl44_cast_fu_21563_p1() {
    p_shl44_cast_fu_21563_p1 = esl_zext<7,6>(p_shl44_fu_21555_p3.read());
}

void ShuffleNetV2::thread_p_shl44_fu_21555_p3() {
    p_shl44_fu_21555_p3 = esl_concat<1,5>(tmp_2372_fu_21551_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl450_cast_fu_25651_p1() {
    p_shl450_cast_fu_25651_p1 = esl_zext<14,11>(tmp_2435_fu_25643_p3.read());
}

void ShuffleNetV2::thread_p_shl451_cast_fu_25909_p1() {
    p_shl451_cast_fu_25909_p1 = esl_zext<17,16>(tmp_933_fu_25902_p3.read());
}

void ShuffleNetV2::thread_p_shl452_cast_fu_25920_p1() {
    p_shl452_cast_fu_25920_p1 = esl_zext<17,14>(tmp_934_fu_25913_p3.read());
}

void ShuffleNetV2::thread_p_shl453_cast_fu_25976_p3() {
    p_shl453_cast_fu_25976_p3 = esl_concat<2,6>(tmp_2439_reg_44763.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl454_cast_fu_25983_p3() {
    p_shl454_cast_fu_25983_p3 = esl_concat<4,4>(tmp_2440_reg_44768.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl455_cast_fu_26263_p1() {
    p_shl455_cast_fu_26263_p1 = esl_sext<10,9>(tmp_939_fu_26255_p3.read());
}

void ShuffleNetV2::thread_p_shl457_cast_fu_26314_p1() {
    p_shl457_cast_fu_26314_p1 = esl_zext<12,11>(tmp_944_fu_26307_p3.read());
}

void ShuffleNetV2::thread_p_shl459_cast_fu_26917_p1() {
    p_shl459_cast_fu_26917_p1 = esl_zext<10,9>(tmp_949_fu_26909_p3.read());
}

void ShuffleNetV2::thread_p_shl45_cast_fu_21575_p1() {
    p_shl45_cast_fu_21575_p1 = esl_zext<7,4>(p_shl45_fu_21567_p3.read());
}

void ShuffleNetV2::thread_p_shl45_fu_21567_p3() {
    p_shl45_fu_21567_p3 = esl_concat<1,3>(tmp_2372_fu_21551_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl460_cast_fu_26929_p1() {
    p_shl460_cast_fu_26929_p1 = esl_zext<10,7>(tmp_950_fu_26921_p3.read());
}

void ShuffleNetV2::thread_p_shl461_cast_fu_26682_p1() {
    p_shl461_cast_fu_26682_p1 = esl_zext<17,16>(tmp_952_fu_26675_p3.read());
}

void ShuffleNetV2::thread_p_shl462_cast_fu_26693_p1() {
    p_shl462_cast_fu_26693_p1 = esl_zext<17,14>(tmp_953_fu_26686_p3.read());
}

void ShuffleNetV2::thread_p_shl463_cast_fu_26749_p3() {
    p_shl463_cast_fu_26749_p3 = esl_concat<2,6>(tmp_2450_reg_45023.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl464_cast_fu_26756_p3() {
    p_shl464_cast_fu_26756_p3 = esl_concat<4,4>(tmp_2451_reg_45028.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl465_cast_fu_27036_p1() {
    p_shl465_cast_fu_27036_p1 = esl_zext<10,9>(tmp_958_fu_27028_p3.read());
}

void ShuffleNetV2::thread_p_shl466_cast_fu_27048_p1() {
    p_shl466_cast_fu_27048_p1 = esl_zext<10,7>(tmp_959_fu_27040_p3.read());
}

void ShuffleNetV2::thread_p_shl467_cast_fu_27088_p1() {
    p_shl467_cast_fu_27088_p1 = esl_zext<11,10>(tmp_961_fu_27080_p3.read());
}

void ShuffleNetV2::thread_p_shl468_cast_fu_27100_p1() {
    p_shl468_cast_fu_27100_p1 = esl_zext<11,8>(tmp_962_fu_27092_p3.read());
}

void ShuffleNetV2::thread_p_shl469_cast_fu_26980_p1() {
    p_shl469_cast_fu_26980_p1 = esl_zext<15,13>(tmp_2452_fu_26972_p3.read());
}

void ShuffleNetV2::thread_p_shl46_cast_fu_22200_p1() {
    p_shl46_cast_fu_22200_p1 = esl_zext<7,6>(p_shl46_fu_22192_p3.read());
}

void ShuffleNetV2::thread_p_shl46_fu_22192_p3() {
    p_shl46_fu_22192_p3 = esl_concat<1,5>(tmp_2375_fu_22188_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl470_cast_fu_26992_p1() {
    p_shl470_cast_fu_26992_p1 = esl_zext<15,11>(tmp_2453_fu_26984_p3.read());
}

void ShuffleNetV2::thread_p_shl471_cast_fu_27143_p1() {
    p_shl471_cast_fu_27143_p1 = esl_zext<15,14>(tmp_2456_fu_27135_p3.read());
}

void ShuffleNetV2::thread_p_shl472_cast_fu_27155_p1() {
    p_shl472_cast_fu_27155_p1 = esl_zext<15,12>(tmp_2457_fu_27147_p3.read());
}

void ShuffleNetV2::thread_p_shl473_cast_fu_27178_p1() {
    p_shl473_cast_fu_27178_p1 = esl_zext<14,13>(tmp_2458_fu_27170_p3.read());
}

void ShuffleNetV2::thread_p_shl474_cast_fu_27190_p1() {
    p_shl474_cast_fu_27190_p1 = esl_zext<14,11>(tmp_2459_fu_27182_p3.read());
}

void ShuffleNetV2::thread_p_shl475_cast_fu_27448_p1() {
    p_shl475_cast_fu_27448_p1 = esl_zext<17,16>(tmp_973_fu_27441_p3.read());
}

void ShuffleNetV2::thread_p_shl476_cast_fu_27459_p1() {
    p_shl476_cast_fu_27459_p1 = esl_zext<17,14>(tmp_974_fu_27452_p3.read());
}

void ShuffleNetV2::thread_p_shl477_cast_fu_27515_p3() {
    p_shl477_cast_fu_27515_p3 = esl_concat<2,6>(tmp_2463_reg_45248.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl478_cast_fu_27522_p3() {
    p_shl478_cast_fu_27522_p3 = esl_concat<4,4>(tmp_2464_reg_45253.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl479_cast_fu_27802_p1() {
    p_shl479_cast_fu_27802_p1 = esl_sext<10,9>(tmp_979_fu_27794_p3.read());
}

void ShuffleNetV2::thread_p_shl47_cast_fu_22212_p1() {
    p_shl47_cast_fu_22212_p1 = esl_zext<7,4>(p_shl47_fu_22204_p3.read());
}

void ShuffleNetV2::thread_p_shl47_fu_22204_p3() {
    p_shl47_fu_22204_p3 = esl_concat<1,3>(tmp_2375_fu_22188_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl481_cast_fu_27861_p1() {
    p_shl481_cast_fu_27861_p1 = esl_zext<12,11>(tmp_985_fu_27857_p1.read());
}

void ShuffleNetV2::thread_p_shl483_cast_fu_28464_p1() {
    p_shl483_cast_fu_28464_p1 = esl_zext<10,9>(tmp_990_fu_28456_p3.read());
}

void ShuffleNetV2::thread_p_shl484_cast_fu_28476_p1() {
    p_shl484_cast_fu_28476_p1 = esl_zext<10,7>(tmp_991_fu_28468_p3.read());
}

void ShuffleNetV2::thread_p_shl485_cast_fu_28229_p1() {
    p_shl485_cast_fu_28229_p1 = esl_zext<17,16>(tmp_993_fu_28222_p3.read());
}

void ShuffleNetV2::thread_p_shl486_cast_fu_28240_p1() {
    p_shl486_cast_fu_28240_p1 = esl_zext<17,14>(tmp_994_fu_28233_p3.read());
}

void ShuffleNetV2::thread_p_shl487_cast_fu_28296_p3() {
    p_shl487_cast_fu_28296_p3 = esl_concat<2,6>(tmp_2474_reg_45508.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl488_cast_fu_28303_p3() {
    p_shl488_cast_fu_28303_p3 = esl_concat<4,4>(tmp_2475_reg_45513.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl489_cast_fu_28583_p1() {
    p_shl489_cast_fu_28583_p1 = esl_zext<10,9>(tmp_999_fu_28575_p3.read());
}

void ShuffleNetV2::thread_p_shl48_cast_fu_21941_p1() {
    p_shl48_cast_fu_21941_p1 = esl_zext<7,6>(p_shl48_fu_21933_p3.read());
}

void ShuffleNetV2::thread_p_shl48_fu_21933_p3() {
    p_shl48_fu_21933_p3 = esl_concat<2,4>(tmp_2376_fu_21929_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl490_cast_fu_28595_p1() {
    p_shl490_cast_fu_28595_p1 = esl_zext<10,7>(tmp_1000_fu_28587_p3.read());
}

void ShuffleNetV2::thread_p_shl491_cast_fu_28635_p1() {
    p_shl491_cast_fu_28635_p1 = esl_zext<11,10>(tmp_1002_fu_28627_p3.read());
}

void ShuffleNetV2::thread_p_shl492_cast_fu_28647_p1() {
    p_shl492_cast_fu_28647_p1 = esl_zext<11,8>(tmp_1003_fu_28639_p3.read());
}

void ShuffleNetV2::thread_p_shl493_cast_fu_28527_p1() {
    p_shl493_cast_fu_28527_p1 = esl_zext<15,13>(tmp_2476_fu_28519_p3.read());
}

void ShuffleNetV2::thread_p_shl494_cast_fu_28539_p1() {
    p_shl494_cast_fu_28539_p1 = esl_zext<15,11>(tmp_2477_fu_28531_p3.read());
}

void ShuffleNetV2::thread_p_shl495_cast_fu_28690_p1() {
    p_shl495_cast_fu_28690_p1 = esl_zext<15,14>(tmp_2480_fu_28682_p3.read());
}

void ShuffleNetV2::thread_p_shl496_cast_fu_28702_p1() {
    p_shl496_cast_fu_28702_p1 = esl_zext<15,12>(tmp_2481_fu_28694_p3.read());
}

void ShuffleNetV2::thread_p_shl497_cast_fu_28725_p1() {
    p_shl497_cast_fu_28725_p1 = esl_zext<14,13>(tmp_2482_fu_28717_p3.read());
}

void ShuffleNetV2::thread_p_shl498_cast_fu_28737_p1() {
    p_shl498_cast_fu_28737_p1 = esl_zext<14,11>(tmp_2483_fu_28729_p3.read());
}

void ShuffleNetV2::thread_p_shl499_cast_fu_28995_p1() {
    p_shl499_cast_fu_28995_p1 = esl_zext<17,16>(tmp_1014_fu_28988_p3.read());
}

void ShuffleNetV2::thread_p_shl49_cast_fu_21953_p1() {
    p_shl49_cast_fu_21953_p1 = esl_zext<7,4>(p_shl49_fu_21945_p3.read());
}

void ShuffleNetV2::thread_p_shl49_fu_21945_p3() {
    p_shl49_fu_21945_p3 = esl_concat<2,2>(tmp_2376_fu_21929_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl4_cast_fu_18951_p1() {
    p_shl4_cast_fu_18951_p1 = esl_zext<7,6>(p_shl4_fu_18943_p3.read());
}

void ShuffleNetV2::thread_p_shl4_fu_18943_p3() {
    p_shl4_fu_18943_p3 = esl_concat<2,4>(tmp_2332_fu_18939_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl500_cast_fu_29006_p1() {
    p_shl500_cast_fu_29006_p1 = esl_zext<17,14>(tmp_1015_fu_28999_p3.read());
}

void ShuffleNetV2::thread_p_shl501_cast_fu_29062_p3() {
    p_shl501_cast_fu_29062_p3 = esl_concat<2,6>(tmp_2487_reg_45733.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl502_cast_fu_29069_p3() {
    p_shl502_cast_fu_29069_p3 = esl_concat<4,4>(tmp_2488_reg_45738.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl503_cast_fu_29349_p1() {
    p_shl503_cast_fu_29349_p1 = esl_sext<10,9>(tmp_1020_fu_29341_p3.read());
}

void ShuffleNetV2::thread_p_shl505_cast_fu_29408_p1() {
    p_shl505_cast_fu_29408_p1 = esl_zext<12,11>(tmp_1026_fu_29404_p1.read());
}

void ShuffleNetV2::thread_p_shl507_cast_fu_30015_p1() {
    p_shl507_cast_fu_30015_p1 = esl_zext<10,9>(tmp_1031_fu_30007_p3.read());
}

void ShuffleNetV2::thread_p_shl508_cast_fu_30027_p1() {
    p_shl508_cast_fu_30027_p1 = esl_zext<10,7>(tmp_1032_fu_30019_p3.read());
}

void ShuffleNetV2::thread_p_shl509_cast_fu_29780_p1() {
    p_shl509_cast_fu_29780_p1 = esl_zext<17,16>(tmp_1034_fu_29773_p3.read());
}

void ShuffleNetV2::thread_p_shl50_cast_fu_21980_p1() {
    p_shl50_cast_fu_21980_p1 = esl_zext<8,7>(p_shl50_fu_21972_p3.read());
}

void ShuffleNetV2::thread_p_shl50_fu_21972_p3() {
    p_shl50_fu_21972_p3 = esl_concat<2,5>(tmp_2376_fu_21929_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl510_cast_fu_29791_p1() {
    p_shl510_cast_fu_29791_p1 = esl_zext<17,14>(tmp_1035_fu_29784_p3.read());
}

void ShuffleNetV2::thread_p_shl511_cast_fu_29847_p3() {
    p_shl511_cast_fu_29847_p3 = esl_concat<2,6>(tmp_2498_reg_45993.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl512_cast_fu_29854_p3() {
    p_shl512_cast_fu_29854_p3 = esl_concat<4,4>(tmp_2499_reg_45998.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl513_cast_fu_30134_p1() {
    p_shl513_cast_fu_30134_p1 = esl_zext<10,9>(tmp_1040_fu_30126_p3.read());
}

void ShuffleNetV2::thread_p_shl514_cast_fu_30146_p1() {
    p_shl514_cast_fu_30146_p1 = esl_zext<10,7>(tmp_1041_fu_30138_p3.read());
}

void ShuffleNetV2::thread_p_shl515_cast_fu_30186_p1() {
    p_shl515_cast_fu_30186_p1 = esl_zext<11,10>(tmp_1043_fu_30178_p3.read());
}

void ShuffleNetV2::thread_p_shl516_cast_fu_30198_p1() {
    p_shl516_cast_fu_30198_p1 = esl_zext<11,8>(tmp_1044_fu_30190_p3.read());
}

void ShuffleNetV2::thread_p_shl517_cast_fu_30078_p1() {
    p_shl517_cast_fu_30078_p1 = esl_zext<15,13>(tmp_2500_fu_30070_p3.read());
}

void ShuffleNetV2::thread_p_shl518_cast_fu_30090_p1() {
    p_shl518_cast_fu_30090_p1 = esl_zext<15,11>(tmp_2501_fu_30082_p3.read());
}

void ShuffleNetV2::thread_p_shl519_cast_fu_30241_p1() {
    p_shl519_cast_fu_30241_p1 = esl_zext<15,14>(tmp_2504_fu_30233_p3.read());
}

void ShuffleNetV2::thread_p_shl51_cast_fu_21992_p1() {
    p_shl51_cast_fu_21992_p1 = esl_zext<8,5>(p_shl51_fu_21984_p3.read());
}

void ShuffleNetV2::thread_p_shl51_fu_21984_p3() {
    p_shl51_fu_21984_p3 = esl_concat<2,3>(tmp_2376_fu_21929_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl520_cast_fu_30253_p1() {
    p_shl520_cast_fu_30253_p1 = esl_zext<15,12>(tmp_2505_fu_30245_p3.read());
}

void ShuffleNetV2::thread_p_shl521_cast_fu_30276_p1() {
    p_shl521_cast_fu_30276_p1 = esl_zext<14,13>(tmp_2506_fu_30268_p3.read());
}

void ShuffleNetV2::thread_p_shl522_cast_fu_30288_p1() {
    p_shl522_cast_fu_30288_p1 = esl_zext<14,11>(tmp_2507_fu_30280_p3.read());
}

void ShuffleNetV2::thread_p_shl523_cast_fu_30550_p1() {
    p_shl523_cast_fu_30550_p1 = esl_zext<17,16>(tmp_1056_fu_30546_p1.read());
}

void ShuffleNetV2::thread_p_shl524_cast_fu_30565_p1() {
    p_shl524_cast_fu_30565_p1 = esl_zext<17,14>(tmp_1058_fu_30561_p1.read());
}

void ShuffleNetV2::thread_p_shl525_cast_fu_30621_p3() {
    p_shl525_cast_fu_30621_p3 = esl_concat<2,6>(tmp_2511_reg_46218.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl526_cast_fu_30628_p3() {
    p_shl526_cast_fu_30628_p3 = esl_concat<4,4>(tmp_2512_reg_46223.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl527_cast_fu_30908_p1() {
    p_shl527_cast_fu_30908_p1 = esl_sext<10,9>(tmp_1063_fu_30900_p3.read());
}

void ShuffleNetV2::thread_p_shl529_cast_fu_30959_p1() {
    p_shl529_cast_fu_30959_p1 = esl_zext<13,12>(tmp_1068_fu_30952_p3.read());
}

void ShuffleNetV2::thread_p_shl52_cast_fu_22618_p1() {
    p_shl52_cast_fu_22618_p1 = esl_zext<7,6>(p_shl52_fu_22610_p3.read());
}

void ShuffleNetV2::thread_p_shl52_fu_22610_p3() {
    p_shl52_fu_22610_p3 = esl_concat<1,5>(tmp_2382_fu_22606_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl531_cast_fu_31578_p1() {
    p_shl531_cast_fu_31578_p1 = esl_zext<10,9>(tmp_1073_fu_31570_p3.read());
}

void ShuffleNetV2::thread_p_shl532_cast_fu_31590_p1() {
    p_shl532_cast_fu_31590_p1 = esl_zext<10,7>(tmp_1074_fu_31582_p3.read());
}

void ShuffleNetV2::thread_p_shl533_cast_fu_31335_p1() {
    p_shl533_cast_fu_31335_p1 = esl_zext<17,16>(tmp_1077_fu_31331_p1.read());
}

void ShuffleNetV2::thread_p_shl534_cast_fu_31350_p1() {
    p_shl534_cast_fu_31350_p1 = esl_zext<17,14>(tmp_1079_fu_31346_p1.read());
}

void ShuffleNetV2::thread_p_shl535_cast_fu_31406_p3() {
    p_shl535_cast_fu_31406_p3 = esl_concat<2,6>(tmp_2522_reg_46478.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl536_cast_fu_31413_p3() {
    p_shl536_cast_fu_31413_p3 = esl_concat<4,4>(tmp_2523_reg_46483.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl537_cast_fu_31697_p1() {
    p_shl537_cast_fu_31697_p1 = esl_zext<10,9>(tmp_1084_fu_31689_p3.read());
}

void ShuffleNetV2::thread_p_shl538_cast_fu_31709_p1() {
    p_shl538_cast_fu_31709_p1 = esl_zext<10,7>(tmp_1085_fu_31701_p3.read());
}

void ShuffleNetV2::thread_p_shl539_cast_fu_31749_p1() {
    p_shl539_cast_fu_31749_p1 = esl_zext<11,10>(tmp_1087_fu_31741_p3.read());
}

void ShuffleNetV2::thread_p_shl53_cast_fu_22630_p1() {
    p_shl53_cast_fu_22630_p1 = esl_zext<7,4>(p_shl53_fu_22622_p3.read());
}

void ShuffleNetV2::thread_p_shl53_fu_22622_p3() {
    p_shl53_fu_22622_p3 = esl_concat<1,3>(tmp_2382_fu_22606_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl540_cast_fu_31761_p1() {
    p_shl540_cast_fu_31761_p1 = esl_zext<11,8>(tmp_1088_fu_31753_p3.read());
}

void ShuffleNetV2::thread_p_shl541_cast_fu_31641_p1() {
    p_shl541_cast_fu_31641_p1 = esl_zext<15,13>(tmp_2524_fu_31633_p3.read());
}

void ShuffleNetV2::thread_p_shl542_cast_fu_31653_p1() {
    p_shl542_cast_fu_31653_p1 = esl_zext<15,11>(tmp_2525_fu_31645_p3.read());
}

void ShuffleNetV2::thread_p_shl543_cast_fu_31804_p1() {
    p_shl543_cast_fu_31804_p1 = esl_zext<15,14>(tmp_2528_fu_31796_p3.read());
}

void ShuffleNetV2::thread_p_shl544_cast_fu_31816_p1() {
    p_shl544_cast_fu_31816_p1 = esl_zext<15,12>(tmp_2529_fu_31808_p3.read());
}

void ShuffleNetV2::thread_p_shl545_cast_fu_31839_p1() {
    p_shl545_cast_fu_31839_p1 = esl_zext<14,13>(tmp_2530_fu_31831_p3.read());
}

void ShuffleNetV2::thread_p_shl546_cast_fu_31851_p1() {
    p_shl546_cast_fu_31851_p1 = esl_zext<14,11>(tmp_2531_fu_31843_p3.read());
}

void ShuffleNetV2::thread_p_shl547_cast_fu_32113_p1() {
    p_shl547_cast_fu_32113_p1 = esl_zext<17,16>(tmp_1100_fu_32109_p1.read());
}

void ShuffleNetV2::thread_p_shl548_cast_fu_32128_p1() {
    p_shl548_cast_fu_32128_p1 = esl_zext<17,14>(tmp_1102_fu_32124_p1.read());
}

void ShuffleNetV2::thread_p_shl549_cast_fu_32184_p3() {
    p_shl549_cast_fu_32184_p3 = esl_concat<2,6>(tmp_2535_reg_46703.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl54_cast_fu_22966_p1() {
    p_shl54_cast_fu_22966_p1 = esl_zext<7,6>(p_shl54_fu_22958_p3.read());
}

void ShuffleNetV2::thread_p_shl54_fu_22958_p3() {
    p_shl54_fu_22958_p3 = esl_concat<1,5>(tmp_2388_fu_22954_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl550_cast_fu_32191_p3() {
    p_shl550_cast_fu_32191_p3 = esl_concat<4,4>(tmp_2536_reg_46708.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl551_cast_fu_32475_p1() {
    p_shl551_cast_fu_32475_p1 = esl_sext<10,9>(tmp_1107_fu_32467_p3.read());
}

void ShuffleNetV2::thread_p_shl553_cast_fu_32526_p1() {
    p_shl553_cast_fu_32526_p1 = esl_zext<13,12>(tmp_1112_fu_32519_p3.read());
}

void ShuffleNetV2::thread_p_shl555_cast_fu_33145_p1() {
    p_shl555_cast_fu_33145_p1 = esl_zext<10,9>(tmp_1117_fu_33137_p3.read());
}

void ShuffleNetV2::thread_p_shl556_cast_fu_33157_p1() {
    p_shl556_cast_fu_33157_p1 = esl_zext<10,7>(tmp_1118_fu_33149_p3.read());
}

void ShuffleNetV2::thread_p_shl557_cast_fu_32906_p1() {
    p_shl557_cast_fu_32906_p1 = esl_zext<18,17>(tmp_1120_fu_32899_p3.read());
}

void ShuffleNetV2::thread_p_shl558_cast_fu_32917_p1() {
    p_shl558_cast_fu_32917_p1 = esl_zext<18,15>(tmp_1121_fu_32910_p3.read());
}

void ShuffleNetV2::thread_p_shl559_cast_fu_32973_p3() {
    p_shl559_cast_fu_32973_p3 = esl_concat<2,6>(tmp_2546_reg_46963.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_p_shl55_cast_fu_22978_p1() {
    p_shl55_cast_fu_22978_p1 = esl_zext<7,4>(p_shl55_fu_22970_p3.read());
}

void ShuffleNetV2::thread_p_shl55_fu_22970_p3() {
    p_shl55_fu_22970_p3 = esl_concat<1,3>(tmp_2388_fu_22954_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl560_cast_fu_32980_p3() {
    p_shl560_cast_fu_32980_p3 = esl_concat<4,4>(tmp_2547_reg_46968.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl561_cast_fu_33208_p1() {
    p_shl561_cast_fu_33208_p1 = esl_zext<15,13>(tmp_2551_fu_33200_p3.read());
}

void ShuffleNetV2::thread_p_shl562_cast_fu_33220_p1() {
    p_shl562_cast_fu_33220_p1 = esl_zext<15,11>(tmp_2552_fu_33212_p3.read());
}

void ShuffleNetV2::thread_p_shl563_cast_fu_33453_p1() {
    p_shl563_cast_fu_33453_p1 = esl_zext<18,17>(tmp_1129_fu_33446_p3.read());
}

void ShuffleNetV2::thread_p_shl564_cast_fu_33464_p1() {
    p_shl564_cast_fu_33464_p1 = esl_zext<18,15>(tmp_1130_fu_33457_p3.read());
}

void ShuffleNetV2::thread_p_shl565_cast_fu_33520_p3() {
    p_shl565_cast_fu_33520_p3 = esl_concat<3,7>(tmp_2557_reg_47134.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl566_cast_fu_33527_p3() {
    p_shl566_cast_fu_33527_p3 = esl_concat<5,5>(tmp_2558_reg_47139.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl567_cast_fu_33811_p1() {
    p_shl567_cast_fu_33811_p1 = esl_sext<11,10>(tmp_1135_fu_33803_p3.read());
}

void ShuffleNetV2::thread_p_shl569_cast_fu_33862_p1() {
    p_shl569_cast_fu_33862_p1 = esl_zext<13,12>(tmp_1140_fu_33855_p3.read());
}

void ShuffleNetV2::thread_p_shl56_cast_fu_22707_p1() {
    p_shl56_cast_fu_22707_p1 = esl_zext<7,6>(p_shl56_fu_22699_p3.read());
}

void ShuffleNetV2::thread_p_shl56_fu_22699_p3() {
    p_shl56_fu_22699_p3 = esl_concat<2,4>(tmp_2389_fu_22695_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl571_cast_fu_34222_p1() {
    p_shl571_cast_fu_34222_p1 = esl_zext<18,17>(tmp_1145_fu_34215_p3.read());
}

void ShuffleNetV2::thread_p_shl572_cast_fu_34233_p1() {
    p_shl572_cast_fu_34233_p1 = esl_zext<18,15>(tmp_1146_fu_34226_p3.read());
}

void ShuffleNetV2::thread_p_shl573_cast_fu_34289_p3() {
    p_shl573_cast_fu_34289_p3 = esl_concat<3,7>(tmp_2570_reg_47394.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl574_cast_fu_34296_p3() {
    p_shl574_cast_fu_34296_p3 = esl_concat<5,5>(tmp_2571_reg_47399.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl575_cast_fu_34584_p1() {
    p_shl575_cast_fu_34584_p1 = esl_sext<11,10>(tmp_1151_fu_34576_p3.read());
}

void ShuffleNetV2::thread_p_shl577_cast_fu_34635_p1() {
    p_shl577_cast_fu_34635_p1 = esl_zext<13,12>(tmp_1156_fu_34628_p3.read());
}

void ShuffleNetV2::thread_p_shl579_cast_fu_35226_p1() {
    p_shl579_cast_fu_35226_p1 = esl_zext<11,10>(tmp_1161_fu_35218_p3.read());
}

void ShuffleNetV2::thread_p_shl57_cast_fu_22719_p1() {
    p_shl57_cast_fu_22719_p1 = esl_zext<7,4>(p_shl57_fu_22711_p3.read());
}

void ShuffleNetV2::thread_p_shl57_fu_22711_p3() {
    p_shl57_fu_22711_p3 = esl_concat<2,2>(tmp_2389_fu_22695_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl580_cast_fu_35238_p1() {
    p_shl580_cast_fu_35238_p1 = esl_zext<11,8>(tmp_1162_fu_35230_p3.read());
}

void ShuffleNetV2::thread_p_shl581_cast_fu_35282_p1() {
    p_shl581_cast_fu_35282_p1 = esl_zext<12,11>(tmp_1164_fu_35274_p3.read());
}

void ShuffleNetV2::thread_p_shl582_cast_fu_35294_p1() {
    p_shl582_cast_fu_35294_p1 = esl_zext<12,9>(tmp_1165_fu_35286_p3.read());
}

void ShuffleNetV2::thread_p_shl583_cast_fu_34991_p1() {
    p_shl583_cast_fu_34991_p1 = esl_zext<18,17>(tmp_1167_fu_34984_p3.read());
}

void ShuffleNetV2::thread_p_shl584_cast_fu_35002_p1() {
    p_shl584_cast_fu_35002_p1 = esl_zext<18,15>(tmp_1168_fu_34995_p3.read());
}

void ShuffleNetV2::thread_p_shl585_cast_fu_35058_p3() {
    p_shl585_cast_fu_35058_p3 = esl_concat<3,7>(tmp_2583_reg_47654.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl586_cast_fu_35065_p3() {
    p_shl586_cast_fu_35065_p3 = esl_concat<5,5>(tmp_2584_reg_47659.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl587_cast_fu_35337_p3() {
    p_shl587_cast_fu_35337_p3 = esl_concat<11,3>(tmp_2588_fu_35333_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl588_cast_fu_35345_p3() {
    p_shl588_cast_fu_35345_p3 = esl_concat<13,1>(tmp_1173_fu_35328_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl589_cast_fu_35368_p3() {
    p_shl589_cast_fu_35368_p3 = esl_concat<10,3>(tmp_2589_fu_35364_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl58_cast_fu_22746_p1() {
    p_shl58_cast_fu_22746_p1 = esl_zext<8,7>(p_shl58_fu_22738_p3.read());
}

void ShuffleNetV2::thread_p_shl58_fu_22738_p3() {
    p_shl58_fu_22738_p3 = esl_concat<2,5>(tmp_2389_fu_22695_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl590_cast_fu_35376_p3() {
    p_shl590_cast_fu_35376_p3 = esl_concat<12,1>(tmp_1175_fu_35359_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl591_cast_fu_35626_p1() {
    p_shl591_cast_fu_35626_p1 = esl_zext<18,17>(tmp_1179_fu_35619_p3.read());
}

void ShuffleNetV2::thread_p_shl592_cast_fu_35637_p1() {
    p_shl592_cast_fu_35637_p1 = esl_zext<18,15>(tmp_1180_fu_35630_p3.read());
}

void ShuffleNetV2::thread_p_shl593_cast_fu_35693_p3() {
    p_shl593_cast_fu_35693_p3 = esl_concat<3,7>(tmp_2594_reg_47835.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl594_cast_fu_35700_p3() {
    p_shl594_cast_fu_35700_p3 = esl_concat<5,5>(tmp_2595_reg_47840.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl595_cast_fu_35980_p1() {
    p_shl595_cast_fu_35980_p1 = esl_sext<11,10>(tmp_1185_fu_35972_p3.read());
}

void ShuffleNetV2::thread_p_shl597_cast_fu_36031_p1() {
    p_shl597_cast_fu_36031_p1 = esl_zext<13,12>(tmp_1190_fu_36024_p3.read());
}

void ShuffleNetV2::thread_p_shl599_cast_fu_36630_p1() {
    p_shl599_cast_fu_36630_p1 = esl_zext<11,10>(tmp_1195_fu_36622_p3.read());
}

void ShuffleNetV2::thread_p_shl59_cast_fu_22758_p1() {
    p_shl59_cast_fu_22758_p1 = esl_zext<8,5>(p_shl59_fu_22750_p3.read());
}

void ShuffleNetV2::thread_p_shl59_fu_22750_p3() {
    p_shl59_fu_22750_p3 = esl_concat<2,3>(tmp_2389_fu_22695_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl5_cast_fu_18963_p1() {
    p_shl5_cast_fu_18963_p1 = esl_zext<7,4>(p_shl5_fu_18955_p3.read());
}

void ShuffleNetV2::thread_p_shl5_fu_18955_p3() {
    p_shl5_fu_18955_p3 = esl_concat<2,2>(tmp_2332_fu_18939_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl600_cast_fu_36642_p1() {
    p_shl600_cast_fu_36642_p1 = esl_zext<11,8>(tmp_1196_fu_36634_p3.read());
}

void ShuffleNetV2::thread_p_shl601_cast_fu_36391_p1() {
    p_shl601_cast_fu_36391_p1 = esl_zext<18,17>(tmp_1199_fu_36387_p1.read());
}

void ShuffleNetV2::thread_p_shl602_cast_fu_36406_p1() {
    p_shl602_cast_fu_36406_p1 = esl_zext<18,15>(tmp_1201_fu_36402_p1.read());
}

void ShuffleNetV2::thread_p_shl603_cast_fu_36462_p3() {
    p_shl603_cast_fu_36462_p3 = esl_concat<3,7>(tmp_2607_reg_48095.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl604_cast_fu_36469_p3() {
    p_shl604_cast_fu_36469_p3 = esl_concat<5,5>(tmp_2608_reg_48100.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl605_cast_fu_36753_p1() {
    p_shl605_cast_fu_36753_p1 = esl_zext<11,10>(tmp_1206_fu_36745_p3.read());
}

void ShuffleNetV2::thread_p_shl606_cast_fu_36765_p1() {
    p_shl606_cast_fu_36765_p1 = esl_zext<11,8>(tmp_1207_fu_36757_p3.read());
}

void ShuffleNetV2::thread_p_shl607_cast_fu_36809_p1() {
    p_shl607_cast_fu_36809_p1 = esl_zext<12,11>(tmp_1209_fu_36801_p3.read());
}

void ShuffleNetV2::thread_p_shl608_cast_fu_36821_p1() {
    p_shl608_cast_fu_36821_p1 = esl_zext<12,9>(tmp_1210_fu_36813_p3.read());
}

void ShuffleNetV2::thread_p_shl609_cast_fu_36693_p3() {
    p_shl609_cast_fu_36693_p3 = esl_concat<11,3>(tmp_2609_fu_36689_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl60_cast_fu_23307_p1() {
    p_shl60_cast_fu_23307_p1 = esl_zext<7,6>(p_shl60_fu_23299_p3.read());
}

void ShuffleNetV2::thread_p_shl60_fu_23299_p3() {
    p_shl60_fu_23299_p3 = esl_concat<1,5>(tmp_2395_fu_23295_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl610_cast_fu_36709_p1() {
    p_shl610_cast_fu_36709_p1 = esl_sext<14,13>(tmp_2610_fu_36701_p3.read());
}

void ShuffleNetV2::thread_p_shl611_cast_fu_36864_p3() {
    p_shl611_cast_fu_36864_p3 = esl_concat<11,3>(tmp_2614_fu_36860_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl612_cast_fu_36872_p3() {
    p_shl612_cast_fu_36872_p3 = esl_concat<13,1>(tmp_1214_fu_36855_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl613_cast_fu_36895_p3() {
    p_shl613_cast_fu_36895_p3 = esl_concat<10,3>(tmp_2615_fu_36891_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl614_cast_fu_36903_p3() {
    p_shl614_cast_fu_36903_p3 = esl_concat<12,1>(tmp_1216_fu_36886_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl615_cast_fu_37153_p1() {
    p_shl615_cast_fu_37153_p1 = esl_zext<19,18>(tmp_1221_fu_37146_p3.read());
}

void ShuffleNetV2::thread_p_shl616_cast_fu_37164_p1() {
    p_shl616_cast_fu_37164_p1 = esl_zext<19,16>(tmp_1222_fu_37157_p3.read());
}

void ShuffleNetV2::thread_p_shl617_cast_fu_37220_p3() {
    p_shl617_cast_fu_37220_p3 = esl_concat<3,7>(tmp_2620_reg_48320.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl618_cast_fu_37227_p3() {
    p_shl618_cast_fu_37227_p3 = esl_concat<5,5>(tmp_2621_reg_48325.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl619_cast_fu_37507_p1() {
    p_shl619_cast_fu_37507_p1 = esl_sext<11,10>(tmp_1227_fu_37499_p3.read());
}

void ShuffleNetV2::thread_p_shl61_cast_fu_23319_p1() {
    p_shl61_cast_fu_23319_p1 = esl_zext<7,4>(p_shl61_fu_23311_p3.read());
}

void ShuffleNetV2::thread_p_shl61_fu_23311_p3() {
    p_shl61_fu_23311_p3 = esl_concat<1,3>(tmp_2395_fu_23295_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl621_cast_fu_37566_p1() {
    p_shl621_cast_fu_37566_p1 = esl_zext<13,12>(tmp_1233_fu_37562_p1.read());
}

void ShuffleNetV2::thread_p_shl623_cast_fu_38161_p1() {
    p_shl623_cast_fu_38161_p1 = esl_zext<11,10>(tmp_1238_fu_38153_p3.read());
}

void ShuffleNetV2::thread_p_shl624_cast_fu_38173_p1() {
    p_shl624_cast_fu_38173_p1 = esl_zext<11,8>(tmp_1239_fu_38165_p3.read());
}

void ShuffleNetV2::thread_p_shl625_cast_fu_37926_p1() {
    p_shl625_cast_fu_37926_p1 = esl_zext<19,18>(tmp_1241_fu_37919_p3.read());
}

void ShuffleNetV2::thread_p_shl626_cast_fu_37937_p1() {
    p_shl626_cast_fu_37937_p1 = esl_zext<19,16>(tmp_1242_fu_37930_p3.read());
}

void ShuffleNetV2::thread_p_shl627_cast_fu_37993_p3() {
    p_shl627_cast_fu_37993_p3 = esl_concat<3,7>(tmp_2633_reg_48580.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl628_cast_fu_38000_p3() {
    p_shl628_cast_fu_38000_p3 = esl_concat<5,5>(tmp_2634_reg_48585.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl629_cast_fu_38284_p1() {
    p_shl629_cast_fu_38284_p1 = esl_zext<11,10>(tmp_1247_fu_38276_p3.read());
}

void ShuffleNetV2::thread_p_shl62_cast_fu_23399_p1() {
    p_shl62_cast_fu_23399_p1 = esl_zext<7,6>(p_shl62_fu_23391_p3.read());
}

void ShuffleNetV2::thread_p_shl62_fu_23391_p3() {
    p_shl62_fu_23391_p3 = esl_concat<1,5>(tmp_2393_fu_23387_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl630_cast_fu_38296_p1() {
    p_shl630_cast_fu_38296_p1 = esl_zext<11,8>(tmp_1248_fu_38288_p3.read());
}

void ShuffleNetV2::thread_p_shl631_cast_fu_38340_p1() {
    p_shl631_cast_fu_38340_p1 = esl_zext<12,11>(tmp_1250_fu_38332_p3.read());
}

void ShuffleNetV2::thread_p_shl632_cast_fu_38352_p1() {
    p_shl632_cast_fu_38352_p1 = esl_zext<12,9>(tmp_1251_fu_38344_p3.read());
}

void ShuffleNetV2::thread_p_shl633_cast_fu_38224_p3() {
    p_shl633_cast_fu_38224_p3 = esl_concat<11,3>(tmp_2635_fu_38220_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl634_cast_fu_38240_p1() {
    p_shl634_cast_fu_38240_p1 = esl_sext<14,13>(tmp_2636_fu_38232_p3.read());
}

void ShuffleNetV2::thread_p_shl635_cast_fu_38395_p3() {
    p_shl635_cast_fu_38395_p3 = esl_concat<11,3>(tmp_2640_fu_38391_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl636_cast_fu_38403_p3() {
    p_shl636_cast_fu_38403_p3 = esl_concat<13,1>(tmp_1255_fu_38386_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl637_cast_fu_38426_p3() {
    p_shl637_cast_fu_38426_p3 = esl_concat<10,3>(tmp_2641_fu_38422_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl638_cast_fu_38434_p3() {
    p_shl638_cast_fu_38434_p3 = esl_concat<12,1>(tmp_1257_fu_38417_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl639_cast_fu_38684_p1() {
    p_shl639_cast_fu_38684_p1 = esl_zext<19,18>(tmp_1262_fu_38677_p3.read());
}

void ShuffleNetV2::thread_p_shl63_cast_fu_23411_p1() {
    p_shl63_cast_fu_23411_p1 = esl_zext<7,4>(p_shl63_fu_23403_p3.read());
}

void ShuffleNetV2::thread_p_shl63_fu_23403_p3() {
    p_shl63_fu_23403_p3 = esl_concat<1,3>(tmp_2393_fu_23387_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl640_cast_fu_38695_p1() {
    p_shl640_cast_fu_38695_p1 = esl_zext<19,16>(tmp_1263_fu_38688_p3.read());
}

void ShuffleNetV2::thread_p_shl641_cast_fu_38751_p3() {
    p_shl641_cast_fu_38751_p3 = esl_concat<3,7>(tmp_2646_reg_48805.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl642_cast_fu_38758_p3() {
    p_shl642_cast_fu_38758_p3 = esl_concat<5,5>(tmp_2647_reg_48810.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl643_cast_fu_39038_p1() {
    p_shl643_cast_fu_39038_p1 = esl_sext<11,10>(tmp_1268_fu_39030_p3.read());
}

void ShuffleNetV2::thread_p_shl645_cast_fu_39089_p1() {
    p_shl645_cast_fu_39089_p1 = esl_zext<14,13>(tmp_1273_fu_39082_p3.read());
}

void ShuffleNetV2::thread_p_shl647_cast_fu_39684_p1() {
    p_shl647_cast_fu_39684_p1 = esl_zext<11,10>(tmp_1278_fu_39676_p3.read());
}

void ShuffleNetV2::thread_p_shl648_cast_fu_39696_p1() {
    p_shl648_cast_fu_39696_p1 = esl_zext<11,8>(tmp_1279_fu_39688_p3.read());
}

void ShuffleNetV2::thread_p_shl649_cast_fu_39449_p1() {
    p_shl649_cast_fu_39449_p1 = esl_zext<19,18>(tmp_1281_fu_39442_p3.read());
}

void ShuffleNetV2::thread_p_shl64_cast_fu_23110_p1() {
    p_shl64_cast_fu_23110_p1 = esl_zext<7,6>(p_shl64_fu_23102_p3.read());
}

void ShuffleNetV2::thread_p_shl64_fu_23102_p3() {
    p_shl64_fu_23102_p3 = esl_concat<1,5>(tmp_2396_fu_23098_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl650_cast_fu_39460_p1() {
    p_shl650_cast_fu_39460_p1 = esl_zext<19,16>(tmp_1282_fu_39453_p3.read());
}

void ShuffleNetV2::thread_p_shl651_cast_fu_39516_p3() {
    p_shl651_cast_fu_39516_p3 = esl_concat<3,7>(tmp_2659_reg_49065.read(), ap_const_lv7_0);
}

void ShuffleNetV2::thread_p_shl652_cast_fu_39523_p3() {
    p_shl652_cast_fu_39523_p3 = esl_concat<5,5>(tmp_2660_reg_49070.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl653_cast_fu_39807_p1() {
    p_shl653_cast_fu_39807_p1 = esl_zext<12,11>(tmp_1287_fu_39799_p3.read());
}

void ShuffleNetV2::thread_p_shl654_cast_fu_39819_p1() {
    p_shl654_cast_fu_39819_p1 = esl_zext<12,9>(tmp_1288_fu_39811_p3.read());
}

void ShuffleNetV2::thread_p_shl655_cast_fu_39747_p3() {
    p_shl655_cast_fu_39747_p3 = esl_concat<11,3>(tmp_2661_fu_39743_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl656_cast_fu_39763_p1() {
    p_shl656_cast_fu_39763_p1 = esl_sext<14,13>(tmp_2662_fu_39755_p3.read());
}

void ShuffleNetV2::thread_p_shl657_cast_fu_39899_p3() {
    p_shl657_cast_fu_39899_p3 = esl_concat<11,3>(tmp_2663_fu_39895_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl658_cast_fu_39907_p3() {
    p_shl658_cast_fu_39907_p3 = esl_concat<13,1>(tmp_1294_fu_39890_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_p_shl65_cast_fu_23122_p1() {
    p_shl65_cast_fu_23122_p1 = esl_zext<7,4>(p_shl65_fu_23114_p3.read());
}

void ShuffleNetV2::thread_p_shl65_fu_23114_p3() {
    p_shl65_fu_23114_p3 = esl_concat<1,3>(tmp_2396_fu_23098_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl66_cast_fu_23747_p1() {
    p_shl66_cast_fu_23747_p1 = esl_zext<7,6>(p_shl66_fu_23739_p3.read());
}

void ShuffleNetV2::thread_p_shl66_fu_23739_p3() {
    p_shl66_fu_23739_p3 = esl_concat<1,5>(tmp_2399_fu_23735_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl67_cast_fu_23759_p1() {
    p_shl67_cast_fu_23759_p1 = esl_zext<7,4>(p_shl67_fu_23751_p3.read());
}

void ShuffleNetV2::thread_p_shl67_fu_23751_p3() {
    p_shl67_fu_23751_p3 = esl_concat<1,3>(tmp_2399_fu_23735_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl68_cast_fu_23488_p1() {
    p_shl68_cast_fu_23488_p1 = esl_zext<7,6>(p_shl68_fu_23480_p3.read());
}

void ShuffleNetV2::thread_p_shl68_fu_23480_p3() {
    p_shl68_fu_23480_p3 = esl_concat<2,4>(tmp_2400_fu_23476_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl69_cast_fu_23500_p1() {
    p_shl69_cast_fu_23500_p1 = esl_zext<7,4>(p_shl69_fu_23492_p3.read());
}

void ShuffleNetV2::thread_p_shl69_fu_23492_p3() {
    p_shl69_fu_23492_p3 = esl_concat<2,2>(tmp_2400_fu_23476_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl6_cast_fu_18990_p1() {
    p_shl6_cast_fu_18990_p1 = esl_zext<8,7>(p_shl6_fu_18982_p3.read());
}

void ShuffleNetV2::thread_p_shl6_fu_18982_p3() {
    p_shl6_fu_18982_p3 = esl_concat<2,5>(tmp_2332_fu_18939_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl70_cast_fu_23527_p1() {
    p_shl70_cast_fu_23527_p1 = esl_zext<8,7>(p_shl70_fu_23519_p3.read());
}

void ShuffleNetV2::thread_p_shl70_fu_23519_p3() {
    p_shl70_fu_23519_p3 = esl_concat<2,5>(tmp_2400_fu_23476_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl71_cast_fu_23539_p1() {
    p_shl71_cast_fu_23539_p1 = esl_zext<8,5>(p_shl71_fu_23531_p3.read());
}

void ShuffleNetV2::thread_p_shl71_fu_23531_p3() {
    p_shl71_fu_23531_p3 = esl_concat<2,3>(tmp_2400_fu_23476_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl72_cast_fu_24169_p1() {
    p_shl72_cast_fu_24169_p1 = esl_zext<7,6>(p_shl72_fu_24161_p3.read());
}

void ShuffleNetV2::thread_p_shl72_fu_24161_p3() {
    p_shl72_fu_24161_p3 = esl_concat<1,5>(tmp_2406_fu_24157_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl73_cast_fu_24181_p1() {
    p_shl73_cast_fu_24181_p1 = esl_zext<7,4>(p_shl73_fu_24173_p3.read());
}

void ShuffleNetV2::thread_p_shl73_fu_24173_p3() {
    p_shl73_fu_24173_p3 = esl_concat<1,3>(tmp_2406_fu_24157_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl74_cast_fu_24525_p1() {
    p_shl74_cast_fu_24525_p1 = esl_zext<7,6>(p_shl74_fu_24517_p3.read());
}

void ShuffleNetV2::thread_p_shl74_fu_24517_p3() {
    p_shl74_fu_24517_p3 = esl_concat<1,5>(tmp_2412_fu_24513_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl75_cast_fu_24537_p1() {
    p_shl75_cast_fu_24537_p1 = esl_zext<7,4>(p_shl75_fu_24529_p3.read());
}

void ShuffleNetV2::thread_p_shl75_fu_24529_p3() {
    p_shl75_fu_24529_p3 = esl_concat<1,3>(tmp_2412_fu_24513_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl76_cast_fu_24258_p1() {
    p_shl76_cast_fu_24258_p1 = esl_zext<7,6>(p_shl76_fu_24250_p3.read());
}

void ShuffleNetV2::thread_p_shl76_fu_24250_p3() {
    p_shl76_fu_24250_p3 = esl_concat<2,4>(tmp_2413_fu_24246_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl77_cast_fu_24270_p1() {
    p_shl77_cast_fu_24270_p1 = esl_zext<7,4>(p_shl77_fu_24262_p3.read());
}

void ShuffleNetV2::thread_p_shl77_fu_24262_p3() {
    p_shl77_fu_24262_p3 = esl_concat<2,2>(tmp_2413_fu_24246_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl78_cast_fu_24297_p1() {
    p_shl78_cast_fu_24297_p1 = esl_zext<8,7>(p_shl78_fu_24289_p3.read());
}

void ShuffleNetV2::thread_p_shl78_fu_24289_p3() {
    p_shl78_fu_24289_p3 = esl_concat<2,5>(tmp_2413_fu_24246_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl79_cast_fu_24309_p1() {
    p_shl79_cast_fu_24309_p1 = esl_zext<8,5>(p_shl79_fu_24301_p3.read());
}

void ShuffleNetV2::thread_p_shl79_fu_24301_p3() {
    p_shl79_fu_24301_p3 = esl_concat<2,3>(tmp_2413_fu_24246_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl7_cast_fu_19002_p1() {
    p_shl7_cast_fu_19002_p1 = esl_zext<8,5>(p_shl7_fu_18994_p3.read());
}

void ShuffleNetV2::thread_p_shl7_fu_18994_p3() {
    p_shl7_fu_18994_p3 = esl_concat<2,3>(tmp_2332_fu_18939_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl80_cast_fu_24866_p1() {
    p_shl80_cast_fu_24866_p1 = esl_zext<7,6>(p_shl80_fu_24858_p3.read());
}

void ShuffleNetV2::thread_p_shl80_fu_24858_p3() {
    p_shl80_fu_24858_p3 = esl_concat<1,5>(tmp_2419_fu_24854_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl81_cast_fu_24878_p1() {
    p_shl81_cast_fu_24878_p1 = esl_zext<7,4>(p_shl81_fu_24870_p3.read());
}

void ShuffleNetV2::thread_p_shl81_fu_24870_p3() {
    p_shl81_fu_24870_p3 = esl_concat<1,3>(tmp_2419_fu_24854_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl82_cast_fu_24958_p1() {
    p_shl82_cast_fu_24958_p1 = esl_zext<7,6>(p_shl82_fu_24950_p3.read());
}

void ShuffleNetV2::thread_p_shl82_fu_24950_p3() {
    p_shl82_fu_24950_p3 = esl_concat<1,5>(tmp_2417_fu_24946_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl83_cast_fu_24970_p1() {
    p_shl83_cast_fu_24970_p1 = esl_zext<7,4>(p_shl83_fu_24962_p3.read());
}

void ShuffleNetV2::thread_p_shl83_fu_24962_p3() {
    p_shl83_fu_24962_p3 = esl_concat<1,3>(tmp_2417_fu_24946_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl84_cast_fu_24673_p1() {
    p_shl84_cast_fu_24673_p1 = esl_zext<7,6>(p_shl84_fu_24665_p3.read());
}

void ShuffleNetV2::thread_p_shl84_fu_24665_p3() {
    p_shl84_fu_24665_p3 = esl_concat<1,5>(tmp_2420_fu_24661_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl85_cast_fu_24685_p1() {
    p_shl85_cast_fu_24685_p1 = esl_zext<7,4>(p_shl85_fu_24677_p3.read());
}

void ShuffleNetV2::thread_p_shl85_fu_24677_p3() {
    p_shl85_fu_24677_p3 = esl_concat<1,3>(tmp_2420_fu_24661_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl86_cast_fu_25306_p1() {
    p_shl86_cast_fu_25306_p1 = esl_zext<7,6>(p_shl86_fu_25298_p3.read());
}

void ShuffleNetV2::thread_p_shl86_fu_25298_p3() {
    p_shl86_fu_25298_p3 = esl_concat<1,5>(tmp_2423_fu_25294_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl87_cast_fu_25318_p1() {
    p_shl87_cast_fu_25318_p1 = esl_zext<7,4>(p_shl87_fu_25310_p3.read());
}

void ShuffleNetV2::thread_p_shl87_fu_25310_p3() {
    p_shl87_fu_25310_p3 = esl_concat<1,3>(tmp_2423_fu_25294_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl88_cast_fu_25047_p1() {
    p_shl88_cast_fu_25047_p1 = esl_zext<7,6>(p_shl88_fu_25039_p3.read());
}

void ShuffleNetV2::thread_p_shl88_fu_25039_p3() {
    p_shl88_fu_25039_p3 = esl_concat<2,4>(tmp_2424_fu_25035_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl89_cast_fu_25059_p1() {
    p_shl89_cast_fu_25059_p1 = esl_zext<7,4>(p_shl89_fu_25051_p3.read());
}

void ShuffleNetV2::thread_p_shl89_fu_25051_p3() {
    p_shl89_fu_25051_p3 = esl_concat<2,2>(tmp_2424_fu_25035_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl8_cast_fu_19551_p1() {
    p_shl8_cast_fu_19551_p1 = esl_zext<7,6>(p_shl8_fu_19543_p3.read());
}

void ShuffleNetV2::thread_p_shl8_fu_19543_p3() {
    p_shl8_fu_19543_p3 = esl_concat<1,5>(tmp_2338_fu_19539_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl90_cast_fu_25086_p1() {
    p_shl90_cast_fu_25086_p1 = esl_zext<8,7>(p_shl90_fu_25078_p3.read());
}

void ShuffleNetV2::thread_p_shl90_fu_25078_p3() {
    p_shl90_fu_25078_p3 = esl_concat<2,5>(tmp_2424_fu_25035_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl91_cast_fu_25098_p1() {
    p_shl91_cast_fu_25098_p1 = esl_zext<8,5>(p_shl91_fu_25090_p3.read());
}

void ShuffleNetV2::thread_p_shl91_fu_25090_p3() {
    p_shl91_fu_25090_p3 = esl_concat<2,3>(tmp_2424_fu_25035_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl92_cast_fu_25728_p1() {
    p_shl92_cast_fu_25728_p1 = esl_zext<7,6>(p_shl92_fu_25720_p3.read());
}

void ShuffleNetV2::thread_p_shl92_fu_25720_p3() {
    p_shl92_fu_25720_p3 = esl_concat<1,5>(tmp_2430_fu_25716_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl93_cast_fu_25740_p1() {
    p_shl93_cast_fu_25740_p1 = esl_zext<7,4>(p_shl93_fu_25732_p3.read());
}

void ShuffleNetV2::thread_p_shl93_fu_25732_p3() {
    p_shl93_fu_25732_p3 = esl_concat<1,3>(tmp_2430_fu_25716_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl94_cast_fu_26076_p1() {
    p_shl94_cast_fu_26076_p1 = esl_zext<7,6>(p_shl94_fu_26068_p3.read());
}

void ShuffleNetV2::thread_p_shl94_fu_26068_p3() {
    p_shl94_fu_26068_p3 = esl_concat<1,5>(tmp_2436_fu_26064_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl95_cast_fu_26088_p1() {
    p_shl95_cast_fu_26088_p1 = esl_zext<7,4>(p_shl95_fu_26080_p3.read());
}

void ShuffleNetV2::thread_p_shl95_fu_26080_p3() {
    p_shl95_fu_26080_p3 = esl_concat<1,3>(tmp_2436_fu_26064_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl96_cast_fu_25817_p1() {
    p_shl96_cast_fu_25817_p1 = esl_zext<7,6>(p_shl96_fu_25809_p3.read());
}

void ShuffleNetV2::thread_p_shl96_fu_25809_p3() {
    p_shl96_fu_25809_p3 = esl_concat<2,4>(tmp_2437_fu_25805_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl97_cast_fu_25829_p1() {
    p_shl97_cast_fu_25829_p1 = esl_zext<7,4>(p_shl97_fu_25821_p3.read());
}

void ShuffleNetV2::thread_p_shl97_fu_25821_p3() {
    p_shl97_fu_25821_p3 = esl_concat<2,2>(tmp_2437_fu_25805_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl98_cast_fu_25856_p1() {
    p_shl98_cast_fu_25856_p1 = esl_zext<8,7>(p_shl98_fu_25848_p3.read());
}

void ShuffleNetV2::thread_p_shl98_fu_25848_p3() {
    p_shl98_fu_25848_p3 = esl_concat<2,5>(tmp_2437_fu_25805_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl99_cast_fu_25868_p1() {
    p_shl99_cast_fu_25868_p1 = esl_zext<8,5>(p_shl99_fu_25860_p3.read());
}

void ShuffleNetV2::thread_p_shl99_fu_25860_p3() {
    p_shl99_fu_25860_p3 = esl_concat<2,3>(tmp_2437_fu_25805_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl9_cast_fu_19563_p1() {
    p_shl9_cast_fu_19563_p1 = esl_zext<7,4>(p_shl9_fu_19555_p3.read());
}

void ShuffleNetV2::thread_p_shl9_fu_19555_p3() {
    p_shl9_fu_19555_p3 = esl_concat<1,3>(tmp_2338_fu_19539_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl_cast_fu_18862_p1() {
    p_shl_cast_fu_18862_p1 = esl_zext<7,6>(p_shl_fu_18854_p3.read());
}

void ShuffleNetV2::thread_p_shl_fu_18854_p3() {
    p_shl_fu_18854_p3 = esl_concat<1,5>(tmp_2327_fu_18850_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_10_fu_26716_p2() {
    shuffle_conv_1x1_V8_10_fu_26716_p2 = (!tmp_1329_cast_fu_26712_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1329_cast_fu_26712_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_11_fu_27482_p2() {
    shuffle_conv_1x1_V8_11_fu_27482_p2 = (!tmp_1368_cast_fu_27478_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1368_cast_fu_27478_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_12_fu_28263_p2() {
    shuffle_conv_1x1_V8_12_fu_28263_p2 = (!tmp_1406_cast_fu_28259_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1406_cast_fu_28259_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_13_fu_29029_p2() {
    shuffle_conv_1x1_V8_13_fu_29029_p2 = (!tmp_1445_cast_fu_29025_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1445_cast_fu_29025_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_14_fu_29814_p2() {
    shuffle_conv_1x1_V8_14_fu_29814_p2 = (!tmp_1483_cast_fu_29810_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1483_cast_fu_29810_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_15_fu_30588_p2() {
    shuffle_conv_1x1_V8_15_fu_30588_p2 = (!tmp_1524_cast_fu_30584_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1524_cast_fu_30584_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_16_fu_31373_p2() {
    shuffle_conv_1x1_V8_16_fu_31373_p2 = (!tmp_1563_cast_fu_31369_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1563_cast_fu_31369_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_17_fu_32151_p2() {
    shuffle_conv_1x1_V8_17_fu_32151_p2 = (!tmp_1604_cast_fu_32147_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1604_cast_fu_32147_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_18_fu_32940_p2() {
    shuffle_conv_1x1_V8_18_fu_32940_p2 = (!tmp_1641_cast_fu_32936_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1641_cast_fu_32936_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_19_fu_33487_p2() {
    shuffle_conv_1x1_V8_19_fu_33487_p2 = (!tmp_1663_cast_fu_33483_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1663_cast_fu_33483_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_1_fu_20639_p2() {
    shuffle_conv_1x1_V8_1_fu_20639_p2 = (!tmp_1034_cast_fu_20635_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1034_cast_fu_20635_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_20_fu_34256_p2() {
    shuffle_conv_1x1_V8_20_fu_34256_p2 = (!tmp_1696_cast_fu_34252_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1696_cast_fu_34252_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_21_fu_35025_p2() {
    shuffle_conv_1x1_V8_21_fu_35025_p2 = (!tmp_1735_cast_fu_35021_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1735_cast_fu_35021_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_22_fu_35660_p2() {
    shuffle_conv_1x1_V8_22_fu_35660_p2 = (!tmp_1762_cast_fu_35656_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1762_cast_fu_35656_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_23_fu_36429_p2() {
    shuffle_conv_1x1_V8_23_fu_36429_p2 = (!tmp_1800_cast_fu_36425_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1800_cast_fu_36425_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_24_fu_37187_p2() {
    shuffle_conv_1x1_V8_24_fu_37187_p2 = (!tmp_1838_cast_fu_37183_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1838_cast_fu_37183_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_25_fu_37960_p2() {
    shuffle_conv_1x1_V8_25_fu_37960_p2 = (!tmp_1875_cast_fu_37956_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1875_cast_fu_37956_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_26_fu_38718_p2() {
    shuffle_conv_1x1_V8_26_fu_38718_p2 = (!tmp_1913_cast_fu_38714_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1913_cast_fu_38714_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_27_fu_39483_p2() {
    shuffle_conv_1x1_V8_27_fu_39483_p2 = (!tmp_1949_cast_fu_39479_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1949_cast_fu_39479_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_2_fu_21286_p2() {
    shuffle_conv_1x1_V8_2_fu_21286_p2 = (!tmp_1062_cast_fu_21282_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1062_cast_fu_21282_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_3_fu_22067_p2() {
    shuffle_conv_1x1_V8_3_fu_22067_p2 = (!tmp_1099_cast_fu_22063_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1099_cast_fu_22063_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_4_fu_22833_p2() {
    shuffle_conv_1x1_V8_4_fu_22833_p2 = (!tmp_1138_cast_fu_22829_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1138_cast_fu_22829_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_5_fu_23614_p2() {
    shuffle_conv_1x1_V8_5_fu_23614_p2 = (!tmp_1175_cast_fu_23610_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1175_cast_fu_23610_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_6_fu_24392_p2() {
    shuffle_conv_1x1_V8_6_fu_24392_p2 = (!tmp_1216_cast_fu_24388_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1216_cast_fu_24388_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_7_fu_25173_p2() {
    shuffle_conv_1x1_V8_7_fu_25173_p2 = (!tmp_1253_cast_fu_25169_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1253_cast_fu_25169_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_8_fu_25943_p2() {
    shuffle_conv_1x1_V8_8_fu_25943_p2 = (!tmp_1292_cast_fu_25939_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_1292_cast_fu_25939_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_9_fu_19077_p2() {
    shuffle_conv_1x1_V8_9_fu_19077_p2 = (!tmp_960_cast_fu_19073_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_960_cast_fu_19073_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_1x1_V8_s_fu_19858_p2() {
    shuffle_conv_1x1_V8_s_fu_19858_p2 = (!tmp_994_cast_fu_19854_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_40264.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_994_cast_fu_19854_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_40264.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_10_fu_33902_p2() {
    shuffle_conv_3x3_V6_10_fu_33902_p2 = (!tmp_1144_fu_33897_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1144_fu_33897_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_11_fu_34675_p2() {
    shuffle_conv_3x3_V6_11_fu_34675_p2 = (!tmp_1160_fu_34670_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1160_fu_34670_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_12_fu_36071_p2() {
    shuffle_conv_3x3_V6_12_fu_36071_p2 = (!tmp_1194_fu_36066_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1194_fu_36066_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_13_fu_37610_p2() {
    shuffle_conv_3x3_V6_13_fu_37610_p2 = (!tmp_1237_fu_37605_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1237_fu_37605_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_14_fu_39133_p2() {
    shuffle_conv_3x3_V6_14_fu_39133_p2 = (!tmp_1277_fu_39128_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1277_fu_39128_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_1_fu_27901_p2() {
    shuffle_conv_3x3_V6_1_fu_27901_p2 = (!tmp_989_fu_27896_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_989_fu_27896_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_2_fu_29452_p2() {
    shuffle_conv_3x3_V6_2_fu_29452_p2 = (!tmp_1030_fu_29447_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1030_fu_29447_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_3_fu_31003_p2() {
    shuffle_conv_3x3_V6_3_fu_31003_p2 = (!tmp_1072_fu_30998_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1072_fu_30998_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_4_fu_32566_p2() {
    shuffle_conv_3x3_V6_4_fu_32566_p2 = (!tmp_1116_fu_32561_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1116_fu_32561_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_5_fu_19492_p2() {
    shuffle_conv_3x3_V6_5_fu_19492_p2 = (!tmp_776_fu_19487_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_776_fu_19487_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_6_fu_20273_p2() {
    shuffle_conv_3x3_V6_6_fu_20273_p2 = (!tmp_792_fu_20268_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_792_fu_20268_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_7_fu_21705_p2() {
    shuffle_conv_3x3_V6_7_fu_21705_p2 = (!tmp_826_fu_21700_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_826_fu_21700_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_8_fu_23248_p2() {
    shuffle_conv_3x3_V6_8_fu_23248_p2 = (!tmp_866_fu_23243_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_866_fu_23243_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_9_fu_24807_p2() {
    shuffle_conv_3x3_V6_9_fu_24807_p2 = (!tmp_908_fu_24802_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_908_fu_24802_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_shuffle_conv_3x3_V6_s_fu_26354_p2() {
    shuffle_conv_3x3_V6_s_fu_26354_p2 = (!tmp_948_fu_26349_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_40305.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_948_fu_26349_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_40305.read()));
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1719.read())) {
        shuffleunit2_2_outpu_address0 = shuffleunit2_2_outpu_reg_49205.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        shuffleunit2_2_outpu_address0 = grp_conv_last_fu_14423_input_V_address0.read();
    } else {
        shuffleunit2_2_outpu_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_shuffleunit2_2_outpu_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1719.read())) {
        shuffleunit2_2_outpu_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1720.read())) {
        shuffleunit2_2_outpu_ce0 = grp_conv_last_fu_14423_input_V_ce0.read();
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

void ShuffleNetV2::thread_sum101_cast_fu_36172_p1() {
    sum101_cast_fu_36172_p1 = esl_zext<32,12>(sum83_reg_48017.read());
}

void ShuffleNetV2::thread_sum102_cast_fu_36604_p1() {
    sum102_cast_fu_36604_p1 = esl_zext<32,12>(sum84_reg_48144.read());
}

void ShuffleNetV2::thread_sum104_cast_fu_37362_p1() {
    sum104_cast_fu_37362_p1 = esl_zext<32,12>(sum86_reg_48369.read());
}

void ShuffleNetV2::thread_sum106_cast_fu_37711_p1() {
    sum106_cast_fu_37711_p1 = esl_zext<32,12>(sum88_reg_48502.read());
}

void ShuffleNetV2::thread_sum107_cast_fu_38135_p1() {
    sum107_cast_fu_38135_p1 = esl_zext<32,12>(sum89_reg_48629.read());
}

void ShuffleNetV2::thread_sum109_cast_fu_38893_p1() {
    sum109_cast_fu_38893_p1 = esl_zext<32,12>(sum91_reg_48854.read());
}

void ShuffleNetV2::thread_sum10_fu_19247_p2() {
    sum10_fu_19247_p2 = (!i37_cast_reg_42625.read().is_01() || !tmp2_fu_19241_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i37_cast_reg_42625.read()) + sc_biguint<9>(tmp2_fu_19241_p2.read()));
}

void ShuffleNetV2::thread_sum111_cast_fu_39234_p1() {
    sum111_cast_fu_39234_p1 = esl_zext<32,12>(sum93_reg_48987.read());
}

void ShuffleNetV2::thread_sum112_cast_fu_39658_p1() {
    sum112_cast_fu_39658_p1 = esl_zext<32,12>(sum94_reg_49114.read());
}

void ShuffleNetV2::thread_sum11_cast_cast_fu_16811_p1() {
    sum11_cast_cast_fu_16811_p1 = esl_zext<10,7>(sum1_fu_16805_p2.read());
}

void ShuffleNetV2::thread_sum11_fu_19022_p2() {
    sum11_fu_19022_p2 = (!tmp1_fu_19016_p2.read().is_01() || !co57_cast_reg_42540.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp1_fu_19016_p2.read()) + sc_biguint<9>(co57_cast_reg_42540.read()));
}

void ShuffleNetV2::thread_sum12_fu_19588_p2() {
    sum12_fu_19588_p2 = (!i39_cast606_cast_reg_42758.read().is_01() || !tmp4_fu_19582_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i39_cast606_cast_reg_42758.read()) + sc_biguint<8>(tmp4_fu_19582_p2.read()));
}

void ShuffleNetV2::thread_sum13_cast_cast_fu_17617_p1() {
    sum13_cast_cast_fu_17617_p1 = esl_zext<10,7>(sum3_fu_17611_p2.read());
}

void ShuffleNetV2::thread_sum13_fu_19418_p2() {
    sum13_fu_19418_p2 = (!tmp3_fu_19412_p2.read().is_01() || !co59_cast_reg_42667.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp3_fu_19412_p2.read()) + sc_biguint<8>(co59_cast_reg_42667.read()));
}

void ShuffleNetV2::thread_sum14_fu_20028_p2() {
    sum14_fu_20028_p2 = (!i43_cast593_cast_reg_42885.read().is_01() || !tmp6_fu_20022_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i43_cast593_cast_reg_42885.read()) + sc_biguint<8>(tmp6_fu_20022_p2.read()));
}

void ShuffleNetV2::thread_sum15_cast1_fu_18415_p1() {
    sum15_cast1_fu_18415_p1 = esl_sext<7,6>(sum8_fu_18407_p3.read());
}

void ShuffleNetV2::thread_sum15_cast_cast_fu_18419_p1() {
    sum15_cast_cast_fu_18419_p1 = esl_zext<10,7>(sum15_cast1_fu_18415_p1.read());
}

void ShuffleNetV2::thread_sum15_fu_19803_p2() {
    sum15_fu_19803_p2 = (!tmp5_fu_19797_p2.read().is_01() || !co62_cast_reg_42800.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp5_fu_19797_p2.read()) + sc_biguint<9>(co62_cast_reg_42800.read()));
}

void ShuffleNetV2::thread_sum16_fu_20369_p2() {
    sum16_fu_20369_p2 = (!i47_cast_reg_43018.read().is_01() || !tmp8_fu_20363_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i47_cast_reg_43018.read()) + sc_biguint<10>(tmp8_fu_20363_p2.read()));
}

void ShuffleNetV2::thread_sum17_cast_cast_fu_19438_p1() {
    sum17_cast_cast_fu_19438_p1 = esl_zext<11,8>(sum13_reg_42735.read());
}

void ShuffleNetV2::thread_sum17_fu_20203_p2() {
    sum17_fu_20203_p2 = (!tmp7_fu_20197_p2.read().is_01() || !co63_cast_reg_42927.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp7_fu_20197_p2.read()) + sc_biguint<8>(co63_cast_reg_42927.read()));
}

void ShuffleNetV2::thread_sum18_fu_20809_p2() {
    sum18_fu_20809_p2 = (!i51_cast_reg_43145.read().is_01() || !tmp10_fu_20803_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i51_cast_reg_43145.read()) + sc_biguint<10>(tmp10_fu_20803_p2.read()));
}

void ShuffleNetV2::thread_sum19_cast_cast_fu_20223_p1() {
    sum19_cast_cast_fu_20223_p1 = esl_zext<11,8>(sum17_reg_42995.read());
}

void ShuffleNetV2::thread_sum19_fu_20584_p2() {
    sum19_fu_20584_p2 = (!tmp9_cast_fu_20580_p1.read().is_01() || !co66_cast_reg_43060.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp9_cast_fu_20580_p1.read()) + sc_biguint<10>(co66_cast_reg_43060.read()));
}

void ShuffleNetV2::thread_sum1_fu_16805_p2() {
    sum1_fu_16805_p2 = (!co25_cast_fu_16763_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co25_cast_fu_16763_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_sum20_fu_21456_p2() {
    sum20_fu_21456_p2 = (!i56_cast_reg_43326.read().is_01() || !tmp12_fu_21450_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i56_cast_reg_43326.read()) + sc_biguint<10>(tmp12_fu_21450_p2.read()));
}

void ShuffleNetV2::thread_sum21_cast_cast_fu_21651_p1() {
    sum21_cast_cast_fu_21651_p1 = esl_zext<12,9>(sum21_reg_43436.read());
}

void ShuffleNetV2::thread_sum21_fu_21631_p2() {
    sum21_fu_21631_p2 = (!tmp13_cast_fu_21627_p1.read().is_01() || !co71_cast_reg_43368.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp13_cast_fu_21627_p1.read()) + sc_biguint<9>(co71_cast_reg_43368.read()));
}

void ShuffleNetV2::thread_sum22_fu_21231_p2() {
    sum22_fu_21231_p2 = (!tmp11_fu_21225_p2.read().is_01() || !co69_cast_reg_43241.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp11_fu_21225_p2.read()) + sc_biguint<10>(co69_cast_reg_43241.read()));
}

void ShuffleNetV2::thread_sum23_cast_cast_fu_23194_p1() {
    sum23_cast_cast_fu_23194_p1 = esl_zext<12,9>(sum23_reg_43921.read());
}

void ShuffleNetV2::thread_sum23_fu_23174_p2() {
    sum23_fu_23174_p2 = (!tmp19_fu_23168_p2.read().is_01() || !co81_cast_reg_43853.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp19_fu_23168_p2.read()) + sc_biguint<9>(co81_cast_reg_43853.read()));
}

void ShuffleNetV2::thread_sum24_fu_21801_p2() {
    sum24_fu_21801_p2 = (!i59_cast_reg_43459.read().is_01() || !tmp14_fu_21795_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i59_cast_reg_43459.read()) + sc_biguint<10>(tmp14_fu_21795_p2.read()));
}

void ShuffleNetV2::thread_sum25_cast_cast_fu_24757_p1() {
    sum25_cast_cast_fu_24757_p1 = esl_zext<12,9>(sum25_reg_44406.read());
}

void ShuffleNetV2::thread_sum25_fu_24737_p2() {
    sum25_fu_24737_p2 = (!tmp25_fu_24731_p2.read().is_01() || !co91_cast_reg_44338.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp25_fu_24731_p2.read()) + sc_biguint<9>(co91_cast_reg_44338.read()));
}

void ShuffleNetV2::thread_sum26_fu_22237_p2() {
    sum26_fu_22237_p2 = (!i63_cast_reg_43586.read().is_01() || !tmp16_fu_22231_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i63_cast_reg_43586.read()) + sc_biguint<10>(tmp16_fu_22231_p2.read()));
}

void ShuffleNetV2::thread_sum27_cast_cast_fu_26304_p1() {
    sum27_cast_cast_fu_26304_p1 = esl_zext<12,9>(sum27_reg_44891.read());
}

void ShuffleNetV2::thread_sum27_fu_26284_p2() {
    sum27_fu_26284_p2 = (!tmp31_fu_26278_p2.read().is_01() || !co101_cast_reg_44823.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp31_fu_26278_p2.read()) + sc_biguint<9>(co101_cast_reg_44823.read()));
}

void ShuffleNetV2::thread_sum28_fu_22012_p2() {
    sum28_fu_22012_p2 = (!tmp15_fu_22006_p2.read().is_01() || !co74_cast_reg_43501.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp15_fu_22006_p2.read()) + sc_biguint<10>(co74_cast_reg_43501.read()));
}

void ShuffleNetV2::thread_sum29_cast1_fu_27843_p1() {
    sum29_cast1_fu_27843_p1 = esl_sext<9,8>(sum29_reg_45376.read());
}

void ShuffleNetV2::thread_sum29_cast_cast_fu_27846_p1() {
    sum29_cast_cast_fu_27846_p1 = esl_zext<12,9>(sum29_cast1_fu_27843_p1.read());
}

void ShuffleNetV2::thread_sum29_fu_27823_p2() {
    sum29_fu_27823_p2 = (!co111_cast400_cast_reg_45308.read().is_01() || !tmp37_fu_27817_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co111_cast400_cast_reg_45308.read()) + sc_biguint<8>(tmp37_fu_27817_p2.read()));
}

void ShuffleNetV2::thread_sum2_fu_17451_p2() {
    sum2_fu_17451_p2 = (!co38_cast_fu_17435_p1.read().is_01() || !ap_const_lv8_78.is_01())? sc_lv<8>(): (sc_biguint<8>(co38_cast_fu_17435_p1.read()) + sc_biguint<8>(ap_const_lv8_78));
}

void ShuffleNetV2::thread_sum30_fu_23003_p2() {
    sum30_fu_23003_p2 = (!i68_cast_reg_43811.read().is_01() || !tmp18_fu_22997_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i68_cast_reg_43811.read()) + sc_biguint<10>(tmp18_fu_22997_p2.read()));
}

void ShuffleNetV2::thread_sum31_cast1_fu_29390_p1() {
    sum31_cast1_fu_29390_p1 = esl_sext<9,8>(sum31_reg_45861.read());
}

void ShuffleNetV2::thread_sum31_cast_cast_fu_29393_p1() {
    sum31_cast_cast_fu_29393_p1 = esl_zext<12,9>(sum31_cast1_fu_29390_p1.read());
}

void ShuffleNetV2::thread_sum31_fu_29370_p2() {
    sum31_fu_29370_p2 = (!co121_cast362_cast_reg_45793.read().is_01() || !tmp43_fu_29364_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co121_cast362_cast_reg_45793.read()) + sc_biguint<8>(tmp43_fu_29364_p2.read()));
}

void ShuffleNetV2::thread_sum32_fu_22778_p2() {
    sum32_fu_22778_p2 = (!tmp17_fu_22772_p2.read().is_01() || !co79_cast_reg_43726.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp17_fu_22772_p2.read()) + sc_biguint<10>(co79_cast_reg_43726.read()));
}

void ShuffleNetV2::thread_sum33_cast_cast_fu_30949_p1() {
    sum33_cast_cast_fu_30949_p1 = esl_zext<13,10>(sum33_reg_46346.read());
}

void ShuffleNetV2::thread_sum33_fu_30929_p2() {
    sum33_fu_30929_p2 = (!tmp49_fu_30923_p2.read().is_01() || !co131_cast_reg_46278.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp49_fu_30923_p2.read()) + sc_biguint<10>(co131_cast_reg_46278.read()));
}

void ShuffleNetV2::thread_sum34_fu_23344_p2() {
    sum34_fu_23344_p2 = (!i71_cast508_cast_reg_43944.read().is_01() || !tmp20_fu_23338_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i71_cast508_cast_reg_43944.read()) + sc_biguint<9>(tmp20_fu_23338_p2.read()));
}

void ShuffleNetV2::thread_sum35_cast_cast_fu_32516_p1() {
    sum35_cast_cast_fu_32516_p1 = esl_zext<13,10>(sum35_reg_46831.read());
}

void ShuffleNetV2::thread_sum35_fu_32496_p2() {
    sum35_fu_32496_p2 = (!tmp55_fu_32490_p2.read().is_01() || !co141_cast_reg_46763.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp55_fu_32490_p2.read()) + sc_biguint<10>(co141_cast_reg_46763.read()));
}

void ShuffleNetV2::thread_sum36_fu_23784_p2() {
    sum36_fu_23784_p2 = (!i75_cast495_cast_reg_44071.read().is_01() || !tmp22_fu_23778_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i75_cast495_cast_reg_44071.read()) + sc_biguint<9>(tmp22_fu_23778_p2.read()));
}

void ShuffleNetV2::thread_sum37_cast_cast_fu_33852_p1() {
    sum37_cast_cast_fu_33852_p1 = esl_zext<13,10>(sum37_reg_47262.read());
}

void ShuffleNetV2::thread_sum37_fu_33832_p2() {
    sum37_fu_33832_p2 = (!tmp61_fu_33826_p2.read().is_01() || !co149_cast_reg_47194.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp61_fu_33826_p2.read()) + sc_biguint<10>(co149_cast_reg_47194.read()));
}

void ShuffleNetV2::thread_sum38_fu_23559_p2() {
    sum38_fu_23559_p2 = (!tmp21_fu_23553_p2.read().is_01() || !co84_cast_reg_43986.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp21_fu_23553_p2.read()) + sc_biguint<10>(co84_cast_reg_43986.read()));
}

void ShuffleNetV2::thread_sum39_cast_cast_fu_34625_p1() {
    sum39_cast_cast_fu_34625_p1 = esl_zext<13,10>(sum39_reg_47522.read());
}

void ShuffleNetV2::thread_sum39_fu_34605_p2() {
    sum39_fu_34605_p2 = (!tmp65_fu_34599_p2.read().is_01() || !co153_cast_reg_47454.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp65_fu_34599_p2.read()) + sc_biguint<10>(co153_cast_reg_47454.read()));
}

void ShuffleNetV2::thread_sum3_fu_17611_p2() {
    sum3_fu_17611_p2 = (!co41_cast_fu_17569_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co41_cast_fu_17569_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_sum40_cast_fu_19252_p1() {
    sum40_cast_fu_19252_p1 = esl_zext<32,9>(sum10_reg_42656.read());
}

void ShuffleNetV2::thread_sum40_fu_24562_p2() {
    sum40_fu_24562_p2 = (!i80_cast480_cast_reg_44296.read().is_01() || !tmp24_fu_24556_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i80_cast480_cast_reg_44296.read()) + sc_biguint<9>(tmp24_fu_24556_p2.read()));
}

void ShuffleNetV2::thread_sum41_cast_cast_fu_36021_p1() {
    sum41_cast_cast_fu_36021_p1 = esl_zext<13,10>(sum41_reg_47963.read());
}

void ShuffleNetV2::thread_sum41_fu_36001_p2() {
    sum41_fu_36001_p2 = (!tmp71_fu_35995_p2.read().is_01() || !co161_cast_reg_47895.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp71_fu_35995_p2.read()) + sc_biguint<10>(co161_cast_reg_47895.read()));
}

void ShuffleNetV2::thread_sum42_fu_24329_p2() {
    sum42_fu_24329_p2 = (!co89_cast489_cast_reg_44211.read().is_01() || !tmp23_fu_24323_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co89_cast489_cast_reg_44211.read()) + sc_biguint<9>(tmp23_fu_24323_p2.read()));
}

void ShuffleNetV2::thread_sum43_cast1_fu_37548_p1() {
    sum43_cast1_fu_37548_p1 = esl_sext<10,9>(sum43_reg_48448.read());
}

void ShuffleNetV2::thread_sum43_cast_cast_fu_37551_p1() {
    sum43_cast_cast_fu_37551_p1 = esl_zext<13,10>(sum43_cast1_fu_37548_p1.read());
}

void ShuffleNetV2::thread_sum43_fu_37528_p2() {
    sum43_fu_37528_p2 = (!co171_cast151_cast_reg_48380.read().is_01() || !tmp77_fu_37522_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co171_cast151_cast_reg_48380.read()) + sc_biguint<9>(tmp77_fu_37522_p2.read()));
}

void ShuffleNetV2::thread_sum44_cast1_fu_19593_p1() {
    sum44_cast1_fu_19593_p1 = esl_sext<9,8>(sum12_reg_42789.read());
}

void ShuffleNetV2::thread_sum44_cast_fu_19596_p1() {
    sum44_cast_fu_19596_p1 = esl_zext<32,9>(sum44_cast1_fu_19593_p1.read());
}

void ShuffleNetV2::thread_sum44_fu_24903_p2() {
    sum44_fu_24903_p2 = (!i83_cast470_cast_reg_44429.read().is_01() || !tmp26_fu_24897_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(i83_cast470_cast_reg_44429.read()) + sc_biguint<8>(tmp26_fu_24897_p2.read()));
}

void ShuffleNetV2::thread_sum45_cast_cast_fu_39079_p1() {
    sum45_cast_cast_fu_39079_p1 = esl_zext<14,11>(sum45_reg_48933.read());
}

void ShuffleNetV2::thread_sum45_fu_39059_p2() {
    sum45_fu_39059_p2 = (!tmp83_fu_39053_p2.read().is_01() || !co181_cast_reg_48865.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp83_fu_39053_p2.read()) + sc_biguint<11>(co181_cast_reg_48865.read()));
}

void ShuffleNetV2::thread_sum46_cast1_fu_20033_p1() {
    sum46_cast1_fu_20033_p1 = esl_sext<9,8>(sum14_reg_42916.read());
}

void ShuffleNetV2::thread_sum46_cast_fu_20036_p1() {
    sum46_cast_fu_20036_p1 = esl_zext<32,9>(sum46_cast1_fu_20033_p1.read());
}

void ShuffleNetV2::thread_sum46_fu_25347_p2() {
    sum46_fu_25347_p2 = (!i87_cast_reg_44556.read().is_01() || !tmp28_cast_fu_25343_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i87_cast_reg_44556.read()) + sc_biguint<11>(tmp28_cast_fu_25343_p1.read()));
}

void ShuffleNetV2::thread_sum47_fu_25118_p2() {
    sum47_fu_25118_p2 = (!tmp27_fu_25112_p2.read().is_01() || !co94_cast_reg_44471.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp27_fu_25112_p2.read()) + sc_biguint<11>(co94_cast_reg_44471.read()));
}

void ShuffleNetV2::thread_sum48_cast_fu_20374_p1() {
    sum48_cast_fu_20374_p1 = esl_zext<32,10>(sum16_reg_43049.read());
}

void ShuffleNetV2::thread_sum48_fu_26113_p2() {
    sum48_fu_26113_p2 = (!i92_cast_reg_44781.read().is_01() || !tmp30_fu_26107_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i92_cast_reg_44781.read()) + sc_biguint<11>(tmp30_fu_26107_p2.read()));
}

void ShuffleNetV2::thread_sum49_cast_fu_20814_p1() {
    sum49_cast_fu_20814_p1 = esl_zext<32,10>(sum18_reg_43176.read());
}

void ShuffleNetV2::thread_sum49_fu_25888_p2() {
    sum49_fu_25888_p2 = (!tmp29_fu_25882_p2.read().is_01() || !co99_cast_reg_44696.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp29_fu_25882_p2.read()) + sc_biguint<11>(co99_cast_reg_44696.read()));
}

void ShuffleNetV2::thread_sum4_fu_17783_p2() {
    sum4_fu_17783_p2 = (!co44_cast_fu_17767_p1.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<8>(): (sc_biguint<8>(co44_cast_fu_17767_p1.read()) + sc_bigint<8>(ap_const_lv8_90));
}

void ShuffleNetV2::thread_sum50_fu_26450_p2() {
    sum50_fu_26450_p2 = (!i95_cast_reg_44914.read().is_01() || !tmp32_fu_26444_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i95_cast_reg_44914.read()) + sc_biguint<11>(tmp32_fu_26444_p2.read()));
}

void ShuffleNetV2::thread_sum51_cast_fu_21461_p1() {
    sum51_cast_fu_21461_p1 = esl_zext<32,10>(sum20_reg_43357.read());
}

void ShuffleNetV2::thread_sum51_fu_26886_p2() {
    sum51_fu_26886_p2 = (!i99_cast_reg_45041.read().is_01() || !tmp34_fu_26880_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i99_cast_reg_45041.read()) + sc_biguint<11>(tmp34_fu_26880_p2.read()));
}

void ShuffleNetV2::thread_sum52_fu_26661_p2() {
    sum52_fu_26661_p2 = (!tmp33_fu_26655_p2.read().is_01() || !co104_cast_reg_44956.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp33_fu_26655_p2.read()) + sc_biguint<11>(co104_cast_reg_44956.read()));
}

void ShuffleNetV2::thread_sum53_cast_fu_21806_p1() {
    sum53_cast_fu_21806_p1 = esl_zext<32,10>(sum24_reg_43490.read());
}

void ShuffleNetV2::thread_sum53_fu_27652_p2() {
    sum53_fu_27652_p2 = (!i104_cast_reg_45266.read().is_01() || !tmp36_fu_27646_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i104_cast_reg_45266.read()) + sc_biguint<11>(tmp36_fu_27646_p2.read()));
}

void ShuffleNetV2::thread_sum54_cast_fu_22242_p1() {
    sum54_cast_fu_22242_p1 = esl_zext<32,10>(sum26_reg_43617.read());
}

void ShuffleNetV2::thread_sum54_fu_27427_p2() {
    sum54_fu_27427_p2 = (!tmp35_fu_27421_p2.read().is_01() || !co109_cast_reg_45181.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp35_fu_27421_p2.read()) + sc_biguint<11>(co109_cast_reg_45181.read()));
}

void ShuffleNetV2::thread_sum55_fu_27997_p2() {
    sum55_fu_27997_p2 = (!i107_cast_reg_45399.read().is_01() || !tmp38_fu_27991_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i107_cast_reg_45399.read()) + sc_biguint<11>(tmp38_fu_27991_p2.read()));
}

void ShuffleNetV2::thread_sum56_cast_fu_23008_p1() {
    sum56_cast_fu_23008_p1 = esl_zext<32,10>(sum30_reg_43842.read());
}

void ShuffleNetV2::thread_sum56_fu_28433_p2() {
    sum56_fu_28433_p2 = (!i111_cast_reg_45526.read().is_01() || !tmp40_fu_28427_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i111_cast_reg_45526.read()) + sc_biguint<11>(tmp40_fu_28427_p2.read()));
}

void ShuffleNetV2::thread_sum57_fu_28208_p2() {
    sum57_fu_28208_p2 = (!tmp39_fu_28202_p2.read().is_01() || !co114_cast_reg_45441.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp39_fu_28202_p2.read()) + sc_biguint<11>(co114_cast_reg_45441.read()));
}

void ShuffleNetV2::thread_sum58_cast1_fu_23349_p1() {
    sum58_cast1_fu_23349_p1 = esl_sext<10,9>(sum34_reg_43975.read());
}

void ShuffleNetV2::thread_sum58_cast_fu_23352_p1() {
    sum58_cast_fu_23352_p1 = esl_zext<32,10>(sum58_cast1_fu_23349_p1.read());
}

void ShuffleNetV2::thread_sum58_fu_29199_p2() {
    sum58_fu_29199_p2 = (!i116_cast_reg_45751.read().is_01() || !tmp42_fu_29193_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i116_cast_reg_45751.read()) + sc_biguint<11>(tmp42_fu_29193_p2.read()));
}

void ShuffleNetV2::thread_sum59_cast1_fu_23789_p1() {
    sum59_cast1_fu_23789_p1 = esl_sext<10,9>(sum36_reg_44102.read());
}

void ShuffleNetV2::thread_sum59_cast_fu_23792_p1() {
    sum59_cast_fu_23792_p1 = esl_zext<32,10>(sum59_cast1_fu_23789_p1.read());
}

void ShuffleNetV2::thread_sum59_fu_28974_p2() {
    sum59_fu_28974_p2 = (!tmp41_fu_28968_p2.read().is_01() || !co119_cast_reg_45666.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp41_fu_28968_p2.read()) + sc_biguint<11>(co119_cast_reg_45666.read()));
}

void ShuffleNetV2::thread_sum5_cast_cast_fu_16130_p1() {
    sum5_cast_cast_fu_16130_p1 = esl_zext<9,6>(sum5_fu_16124_p2.read());
}

void ShuffleNetV2::thread_sum5_fu_16124_p2() {
    sum5_fu_16124_p2 = (!co12_cast_fu_16108_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co12_cast_fu_16108_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_sum60_fu_29548_p2() {
    sum60_fu_29548_p2 = (!i119_cast_reg_45884.read().is_01() || !tmp44_fu_29542_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i119_cast_reg_45884.read()) + sc_biguint<11>(tmp44_fu_29542_p2.read()));
}

void ShuffleNetV2::thread_sum61_cast1_fu_24567_p1() {
    sum61_cast1_fu_24567_p1 = esl_sext<10,9>(sum40_reg_44327.read());
}

void ShuffleNetV2::thread_sum61_cast_fu_24570_p1() {
    sum61_cast_fu_24570_p1 = esl_zext<32,10>(sum61_cast1_fu_24567_p1.read());
}

void ShuffleNetV2::thread_sum61_fu_29984_p2() {
    sum61_fu_29984_p2 = (!i123_cast_reg_46011.read().is_01() || !tmp46_fu_29978_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i123_cast_reg_46011.read()) + sc_biguint<11>(tmp46_fu_29978_p2.read()));
}

void ShuffleNetV2::thread_sum62_fu_29759_p2() {
    sum62_fu_29759_p2 = (!tmp45_fu_29753_p2.read().is_01() || !co124_cast_reg_45926.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp45_fu_29753_p2.read()) + sc_biguint<11>(co124_cast_reg_45926.read()));
}

void ShuffleNetV2::thread_sum63_cast1_fu_24908_p1() {
    sum63_cast1_fu_24908_p1 = esl_sext<10,8>(sum44_reg_44460.read());
}

void ShuffleNetV2::thread_sum63_cast_fu_24911_p1() {
    sum63_cast_fu_24911_p1 = esl_zext<32,10>(sum63_cast1_fu_24908_p1.read());
}

void ShuffleNetV2::thread_sum63_fu_30758_p2() {
    sum63_fu_30758_p2 = (!i128_cast_reg_46236.read().is_01() || !tmp48_fu_30752_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i128_cast_reg_46236.read()) + sc_biguint<11>(tmp48_fu_30752_p2.read()));
}

void ShuffleNetV2::thread_sum64_cast_fu_25352_p1() {
    sum64_cast_fu_25352_p1 = esl_zext<32,11>(sum46_reg_44587.read());
}

void ShuffleNetV2::thread_sum64_fu_30525_p2() {
    sum64_fu_30525_p2 = (!co129_cast337_cast_reg_46151.read().is_01() || !tmp47_fu_30519_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co129_cast337_cast_reg_46151.read()) + sc_biguint<10>(tmp47_fu_30519_p2.read()));
}

void ShuffleNetV2::thread_sum65_fu_31099_p2() {
    sum65_fu_31099_p2 = (!i131_cast_reg_46369.read().is_01() || !tmp50_fu_31093_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i131_cast_reg_46369.read()) + sc_biguint<11>(tmp50_fu_31093_p2.read()));
}

void ShuffleNetV2::thread_sum66_cast_fu_26118_p1() {
    sum66_cast_fu_26118_p1 = esl_zext<32,11>(sum48_reg_44812.read());
}

void ShuffleNetV2::thread_sum66_fu_31543_p2() {
    sum66_fu_31543_p2 = (!i135_cast305_cast_reg_46496.read().is_01() || !tmp52_fu_31537_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i135_cast305_cast_reg_46496.read()) + sc_biguint<10>(tmp52_fu_31537_p2.read()));
}

void ShuffleNetV2::thread_sum67_fu_31310_p2() {
    sum67_fu_31310_p2 = (!co134_cast314_cast_reg_46411.read().is_01() || !tmp51_fu_31304_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co134_cast314_cast_reg_46411.read()) + sc_biguint<10>(tmp51_fu_31304_p2.read()));
}

void ShuffleNetV2::thread_sum68_cast_fu_26455_p1() {
    sum68_cast_fu_26455_p1 = esl_zext<32,11>(sum50_reg_44945.read());
}

void ShuffleNetV2::thread_sum68_fu_32321_p2() {
    sum68_fu_32321_p2 = (!i140_cast290_cast_reg_46721.read().is_01() || !tmp54_fu_32315_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i140_cast290_cast_reg_46721.read()) + sc_biguint<10>(tmp54_fu_32315_p2.read()));
}

void ShuffleNetV2::thread_sum69_cast_fu_26891_p1() {
    sum69_cast_fu_26891_p1 = esl_zext<32,11>(sum51_reg_45072.read());
}

void ShuffleNetV2::thread_sum69_fu_32088_p2() {
    sum69_fu_32088_p2 = (!co139_cast299_cast_reg_46636.read().is_01() || !tmp53_fu_32082_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co139_cast299_cast_reg_46636.read()) + sc_biguint<9>(tmp53_fu_32082_p2.read()));
}

void ShuffleNetV2::thread_sum6_fu_15964_p2() {
    sum6_fu_15964_p2 = (!co9_cast_fu_15948_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co9_cast_fu_15948_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_sum70_fu_32662_p2() {
    sum70_fu_32662_p2 = (!i143_cast280_cast_reg_46854.read().is_01() || !tmp56_fu_32656_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i143_cast280_cast_reg_46854.read()) + sc_biguint<10>(tmp56_fu_32656_p2.read()));
}

void ShuffleNetV2::thread_sum71_cast_fu_27657_p1() {
    sum71_cast_fu_27657_p1 = esl_zext<32,11>(sum53_reg_45297.read());
}

void ShuffleNetV2::thread_sum71_fu_33110_p2() {
    sum71_fu_33110_p2 = (!i147_cast267_cast_reg_46981.read().is_01() || !tmp58_fu_33104_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i147_cast267_cast_reg_46981.read()) + sc_biguint<10>(tmp58_fu_33104_p2.read()));
}

void ShuffleNetV2::thread_sum72_fu_32885_p2() {
    sum72_fu_32885_p2 = (!tmp57_cast_fu_32881_p1.read().is_01() || !co144_cast_reg_46896.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp57_cast_fu_32881_p1.read()) + sc_biguint<12>(co144_cast_reg_46896.read()));
}

void ShuffleNetV2::thread_sum73_cast_fu_28002_p1() {
    sum73_cast_fu_28002_p1 = esl_zext<32,11>(sum55_reg_45430.read());
}

void ShuffleNetV2::thread_sum73_fu_33657_p2() {
    sum73_fu_33657_p2 = (!i152_cast253_cast_reg_47152.read().is_01() || !tmp60_fu_33651_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i152_cast253_cast_reg_47152.read()) + sc_biguint<10>(tmp60_fu_33651_p2.read()));
}

void ShuffleNetV2::thread_sum74_cast_fu_28438_p1() {
    sum74_cast_fu_28438_p1 = esl_zext<32,11>(sum56_reg_45557.read());
}

void ShuffleNetV2::thread_sum74_fu_33432_p2() {
    sum74_fu_33432_p2 = (!tmp59_fu_33426_p2.read().is_01() || !co147_cast_reg_47067.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp59_fu_33426_p2.read()) + sc_biguint<12>(co147_cast_reg_47067.read()));
}

void ShuffleNetV2::thread_sum75_fu_33998_p2() {
    sum75_fu_33998_p2 = (!i155_cast243_cast_reg_47285.read().is_01() || !tmp62_fu_33992_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i155_cast243_cast_reg_47285.read()) + sc_biguint<9>(tmp62_fu_33992_p2.read()));
}

void ShuffleNetV2::thread_sum76_cast_fu_29204_p1() {
    sum76_cast_fu_29204_p1 = esl_zext<32,11>(sum58_reg_45782.read());
}

void ShuffleNetV2::thread_sum76_fu_34434_p2() {
    sum76_fu_34434_p2 = (!i159_cast_reg_47412.read().is_01() || !tmp64_cast_fu_34430_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i159_cast_reg_47412.read()) + sc_biguint<12>(tmp64_cast_fu_34430_p1.read()));
}

void ShuffleNetV2::thread_sum77_fu_34201_p2() {
    sum77_fu_34201_p2 = (!tmp63_fu_34195_p2.read().is_01() || !co152_cast_reg_47327.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp63_fu_34195_p2.read()) + sc_biguint<12>(co152_cast_reg_47327.read()));
}

void ShuffleNetV2::thread_sum78_cast_fu_29553_p1() {
    sum78_cast_fu_29553_p1 = esl_zext<32,11>(sum60_reg_45915.read());
}

void ShuffleNetV2::thread_sum78_fu_34771_p2() {
    sum78_fu_34771_p2 = (!i163_cast_reg_47545.read().is_01() || !tmp66_fu_34765_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i163_cast_reg_47545.read()) + sc_biguint<12>(tmp66_fu_34765_p2.read()));
}

void ShuffleNetV2::thread_sum79_cast_fu_29989_p1() {
    sum79_cast_fu_29989_p1 = esl_zext<32,11>(sum61_reg_46042.read());
}

void ShuffleNetV2::thread_sum79_fu_35195_p2() {
    sum79_fu_35195_p2 = (!i167_cast_reg_47672.read().is_01() || !tmp68_fu_35189_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i167_cast_reg_47672.read()) + sc_biguint<12>(tmp68_fu_35189_p2.read()));
}

void ShuffleNetV2::thread_sum7_fu_18239_p2() {
    sum7_fu_18239_p2 = (!co49_cast_fu_18223_p1.read().is_01() || !ap_const_lv8_A8.is_01())? sc_lv<8>(): (sc_biguint<8>(co49_cast_fu_18223_p1.read()) + sc_bigint<8>(ap_const_lv8_A8));
}

void ShuffleNetV2::thread_sum80_fu_34970_p2() {
    sum80_fu_34970_p2 = (!tmp67_fu_34964_p2.read().is_01() || !co156_cast_reg_47587.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp67_fu_34964_p2.read()) + sc_biguint<12>(co156_cast_reg_47587.read()));
}

void ShuffleNetV2::thread_sum81_cast_fu_30763_p1() {
    sum81_cast_fu_30763_p1 = esl_zext<32,11>(sum63_reg_46267.read());
}

void ShuffleNetV2::thread_sum81_fu_35830_p2() {
    sum81_fu_35830_p2 = (!i172_cast_reg_47853.read().is_01() || !tmp70_fu_35824_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i172_cast_reg_47853.read()) + sc_biguint<12>(tmp70_fu_35824_p2.read()));
}

void ShuffleNetV2::thread_sum82_fu_35605_p2() {
    sum82_fu_35605_p2 = (!tmp69_fu_35599_p2.read().is_01() || !co159_cast_reg_47768.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp69_fu_35599_p2.read()) + sc_biguint<12>(co159_cast_reg_47768.read()));
}

void ShuffleNetV2::thread_sum83_cast_fu_31104_p1() {
    sum83_cast_fu_31104_p1 = esl_zext<32,11>(sum65_reg_46400.read());
}

void ShuffleNetV2::thread_sum83_fu_36167_p2() {
    sum83_fu_36167_p2 = (!i175_cast_reg_47986.read().is_01() || !tmp72_fu_36161_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i175_cast_reg_47986.read()) + sc_biguint<12>(tmp72_fu_36161_p2.read()));
}

void ShuffleNetV2::thread_sum84_cast1_fu_31548_p1() {
    sum84_cast1_fu_31548_p1 = esl_sext<11,10>(sum66_reg_46527.read());
}

void ShuffleNetV2::thread_sum84_cast_fu_31551_p1() {
    sum84_cast_fu_31551_p1 = esl_zext<32,11>(sum84_cast1_fu_31548_p1.read());
}

void ShuffleNetV2::thread_sum84_fu_36599_p2() {
    sum84_fu_36599_p2 = (!i179_cast_reg_48113.read().is_01() || !tmp74_fu_36593_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i179_cast_reg_48113.read()) + sc_biguint<12>(tmp74_fu_36593_p2.read()));
}

void ShuffleNetV2::thread_sum85_fu_36366_p2() {
    sum85_fu_36366_p2 = (!co164_cast179_cast_reg_48028.read().is_01() || !tmp73_fu_36360_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(co164_cast179_cast_reg_48028.read()) + sc_biguint<11>(tmp73_fu_36360_p2.read()));
}

void ShuffleNetV2::thread_sum86_cast1_fu_32326_p1() {
    sum86_cast1_fu_32326_p1 = esl_sext<11,10>(sum68_reg_46752.read());
}

void ShuffleNetV2::thread_sum86_cast_fu_32329_p1() {
    sum86_cast_fu_32329_p1 = esl_zext<32,11>(sum86_cast1_fu_32326_p1.read());
}

void ShuffleNetV2::thread_sum86_fu_37357_p2() {
    sum86_fu_37357_p2 = (!i184_cast_reg_48338.read().is_01() || !tmp76_fu_37351_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i184_cast_reg_48338.read()) + sc_biguint<12>(tmp76_fu_37351_p2.read()));
}

void ShuffleNetV2::thread_sum87_fu_37132_p2() {
    sum87_fu_37132_p2 = (!tmp75_fu_37126_p2.read().is_01() || !co169_cast_reg_48253.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp75_fu_37126_p2.read()) + sc_biguint<13>(co169_cast_reg_48253.read()));
}

void ShuffleNetV2::thread_sum88_cast1_fu_32667_p1() {
    sum88_cast1_fu_32667_p1 = esl_sext<11,10>(sum70_reg_46885.read());
}

void ShuffleNetV2::thread_sum88_cast_fu_32670_p1() {
    sum88_cast_fu_32670_p1 = esl_zext<32,11>(sum88_cast1_fu_32667_p1.read());
}

void ShuffleNetV2::thread_sum88_fu_37706_p2() {
    sum88_fu_37706_p2 = (!i187_cast_reg_48471.read().is_01() || !tmp78_fu_37700_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i187_cast_reg_48471.read()) + sc_biguint<12>(tmp78_fu_37700_p2.read()));
}

void ShuffleNetV2::thread_sum89_cast1_fu_33115_p1() {
    sum89_cast1_fu_33115_p1 = esl_sext<11,10>(sum71_reg_47012.read());
}

void ShuffleNetV2::thread_sum89_cast_fu_33118_p1() {
    sum89_cast_fu_33118_p1 = esl_zext<32,11>(sum89_cast1_fu_33115_p1.read());
}

void ShuffleNetV2::thread_sum89_fu_38130_p2() {
    sum89_fu_38130_p2 = (!i191_cast_reg_48598.read().is_01() || !tmp80_fu_38124_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i191_cast_reg_48598.read()) + sc_biguint<12>(tmp80_fu_38124_p2.read()));
}

void ShuffleNetV2::thread_sum8_fu_18407_p3() {
    sum8_fu_18407_p3 = esl_concat<1,5>(ap_const_lv1_1, co52_reg_10294.read());
}

void ShuffleNetV2::thread_sum90_fu_37905_p2() {
    sum90_fu_37905_p2 = (!tmp79_fu_37899_p2.read().is_01() || !co174_cast_reg_48513.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp79_fu_37899_p2.read()) + sc_biguint<13>(co174_cast_reg_48513.read()));
}

void ShuffleNetV2::thread_sum91_cast1_fu_33662_p1() {
    sum91_cast1_fu_33662_p1 = esl_sext<11,10>(sum73_reg_47183.read());
}

void ShuffleNetV2::thread_sum91_cast_fu_33665_p1() {
    sum91_cast_fu_33665_p1 = esl_zext<32,11>(sum91_cast1_fu_33662_p1.read());
}

void ShuffleNetV2::thread_sum91_fu_38888_p2() {
    sum91_fu_38888_p2 = (!i196_cast_reg_48823.read().is_01() || !tmp82_fu_38882_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i196_cast_reg_48823.read()) + sc_biguint<12>(tmp82_fu_38882_p2.read()));
}

void ShuffleNetV2::thread_sum92_fu_38663_p2() {
    sum92_fu_38663_p2 = (!tmp81_fu_38657_p2.read().is_01() || !co179_cast_reg_48738.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp81_fu_38657_p2.read()) + sc_biguint<13>(co179_cast_reg_48738.read()));
}

void ShuffleNetV2::thread_sum93_cast1_fu_34003_p1() {
    sum93_cast1_fu_34003_p1 = esl_sext<11,9>(sum75_reg_47316.read());
}

void ShuffleNetV2::thread_sum93_cast_fu_34006_p1() {
    sum93_cast_fu_34006_p1 = esl_zext<32,11>(sum93_cast1_fu_34003_p1.read());
}

void ShuffleNetV2::thread_sum93_fu_39229_p2() {
    sum93_fu_39229_p2 = (!i199_cast_reg_48956.read().is_01() || !tmp84_fu_39223_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i199_cast_reg_48956.read()) + sc_biguint<12>(tmp84_fu_39223_p2.read()));
}

void ShuffleNetV2::thread_sum94_cast_fu_34439_p1() {
    sum94_cast_fu_34439_p1 = esl_zext<32,12>(sum76_reg_47443.read());
}

void ShuffleNetV2::thread_sum94_fu_39653_p2() {
    sum94_fu_39653_p2 = (!i203_cast_reg_49083.read().is_01() || !tmp86_fu_39647_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i203_cast_reg_49083.read()) + sc_biguint<12>(tmp86_fu_39647_p2.read()));
}

void ShuffleNetV2::thread_sum95_fu_39428_p2() {
    sum95_fu_39428_p2 = (!tmp85_fu_39422_p2.read().is_01() || !co184_cast_reg_48998.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp85_fu_39422_p2.read()) + sc_biguint<13>(co184_cast_reg_48998.read()));
}

void ShuffleNetV2::thread_sum96_cast_fu_34776_p1() {
    sum96_cast_fu_34776_p1 = esl_zext<32,12>(sum78_reg_47576.read());
}

void ShuffleNetV2::thread_sum97_cast_fu_35200_p1() {
    sum97_cast_fu_35200_p1 = esl_zext<32,12>(sum79_reg_47703.read());
}

void ShuffleNetV2::thread_sum99_cast_fu_35835_p1() {
    sum99_cast_fu_35835_p1 = esl_zext<32,12>(sum81_reg_47884.read());
}

void ShuffleNetV2::thread_sum9_fu_16308_p2() {
    sum9_fu_16308_p2 = (!co16_cast_fu_16292_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co16_cast_fu_16292_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_sum_fu_16645_p2() {
    sum_fu_16645_p2 = (!co22_cast_fu_16629_p1.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<7>(): (sc_biguint<7>(co22_cast_fu_16629_p1.read()) + sc_bigint<7>(ap_const_lv7_48));
}

void ShuffleNetV2::thread_tmp10_fu_20803_p2() {
    tmp10_fu_20803_p2 = (!ap_const_lv10_228.is_01() || !tmp_183_cast_fu_20794_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_183_cast_fu_20794_p1.read()));
}

void ShuffleNetV2::thread_tmp11_fu_21225_p2() {
    tmp11_fu_21225_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_201_cast_fu_21221_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_201_cast_fu_21221_p1.read()));
}

void ShuffleNetV2::thread_tmp12_fu_21450_p2() {
    tmp12_fu_21450_p2 = (!ap_const_lv10_258.is_01() || !tmp_195_cast_fu_21441_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_195_cast_fu_21441_p1.read()));
}

void ShuffleNetV2::thread_tmp13_cast1_fu_21623_p1() {
    tmp13_cast1_fu_21623_p1 = esl_sext<8,7>(tmp13_fu_21617_p2.read());
}

void ShuffleNetV2::thread_tmp13_cast_fu_21627_p1() {
    tmp13_cast_fu_21627_p1 = esl_zext<9,8>(tmp13_cast1_fu_21623_p1.read());
}

void ShuffleNetV2::thread_tmp13_fu_21617_p2() {
    tmp13_fu_21617_p2 = (!ap_const_lv7_58.is_01() || !tmp_209_fu_21579_p2.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_209_fu_21579_p2.read()));
}

void ShuffleNetV2::thread_tmp14_fu_21795_p2() {
    tmp14_fu_21795_p2 = (!ap_const_lv10_288.is_01() || !tmp_203_cast_fu_21786_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_288) + sc_bigint<10>(tmp_203_cast_fu_21786_p1.read()));
}

void ShuffleNetV2::thread_tmp15_fu_22006_p2() {
    tmp15_fu_22006_p2 = (!ap_const_lv10_258.is_01() || !tmp_218_cast_fu_22002_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_218_cast_fu_22002_p1.read()));
}

void ShuffleNetV2::thread_tmp16_fu_22231_p2() {
    tmp16_fu_22231_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_212_cast_fu_22222_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_212_cast_fu_22222_p1.read()));
}

void ShuffleNetV2::thread_tmp17_fu_22772_p2() {
    tmp17_fu_22772_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_230_cast_fu_22768_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_230_cast_fu_22768_p1.read()));
}

void ShuffleNetV2::thread_tmp18_fu_22997_p2() {
    tmp18_fu_22997_p2 = (!ap_const_lv10_2E8.is_01() || !tmp_224_cast_fu_22988_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2E8) + sc_bigint<10>(tmp_224_cast_fu_22988_p1.read()));
}

void ShuffleNetV2::thread_tmp19_fu_23168_p2() {
    tmp19_fu_23168_p2 = (!ap_const_lv9_108.is_01() || !tmp_238_cast_fu_23132_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_108) + sc_bigint<9>(tmp_238_cast_fu_23132_p1.read()));
}

void ShuffleNetV2::thread_tmp1_fu_19016_p2() {
    tmp1_fu_19016_p2 = (!ap_const_lv9_D8.is_01() || !tmp_155_cast_fu_19012_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_D8) + sc_bigint<9>(tmp_155_cast_fu_19012_p1.read()));
}

void ShuffleNetV2::thread_tmp20_fu_23338_p2() {
    tmp20_fu_23338_p2 = (!ap_const_lv9_118.is_01() || !tmp_232_cast_cast_fu_23329_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_118) + sc_bigint<9>(tmp_232_cast_cast_fu_23329_p1.read()));
}

void ShuffleNetV2::thread_tmp21_fu_23553_p2() {
    tmp21_fu_23553_p2 = (!ap_const_lv10_318.is_01() || !tmp_247_cast_fu_23549_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_247_cast_fu_23549_p1.read()));
}

void ShuffleNetV2::thread_tmp22_fu_23778_p2() {
    tmp22_fu_23778_p2 = (!ap_const_lv9_148.is_01() || !tmp_241_cast_cast_fu_23769_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_148) + sc_bigint<9>(tmp_241_cast_cast_fu_23769_p1.read()));
}

void ShuffleNetV2::thread_tmp23_fu_24323_p2() {
    tmp23_fu_24323_p2 = (!ap_const_lv9_178.is_01() || !tmp_259_cast_cast_fu_24319_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_259_cast_cast_fu_24319_p1.read()));
}

void ShuffleNetV2::thread_tmp24_fu_24556_p2() {
    tmp24_fu_24556_p2 = (!ap_const_lv9_178.is_01() || !tmp_253_cast_cast_fu_24547_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_253_cast_cast_fu_24547_p1.read()));
}

void ShuffleNetV2::thread_tmp25_fu_24731_p2() {
    tmp25_fu_24731_p2 = (!ap_const_lv9_138.is_01() || !tmp_267_cast_fu_24695_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_267_cast_fu_24695_p1.read()));
}

void ShuffleNetV2::thread_tmp26_fu_24897_p2() {
    tmp26_fu_24897_p2 = (!ap_const_lv8_A8.is_01() || !tmp_261_cast_cast_fu_24888_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_261_cast_cast_fu_24888_p1.read()));
}

void ShuffleNetV2::thread_tmp27_fu_25112_p2() {
    tmp27_fu_25112_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_276_cast_fu_25108_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_276_cast_fu_25108_p1.read()));
}

void ShuffleNetV2::thread_tmp28_cast1_fu_25339_p1() {
    tmp28_cast1_fu_25339_p1 = esl_sext<10,7>(tmp28_fu_25333_p2.read());
}

void ShuffleNetV2::thread_tmp28_cast_fu_25343_p1() {
    tmp28_cast_fu_25343_p1 = esl_zext<11,10>(tmp28_cast1_fu_25339_p1.read());
}

void ShuffleNetV2::thread_tmp28_fu_25333_p2() {
    tmp28_fu_25333_p2 = (!ap_const_lv7_58.is_01() || !tmp_270_fu_25322_p2.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_270_fu_25322_p2.read()));
}

void ShuffleNetV2::thread_tmp29_fu_25882_p2() {
    tmp29_fu_25882_p2 = (!ap_const_lv11_438.is_01() || !tmp_288_cast_fu_25878_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_288_cast_fu_25878_p1.read()));
}

void ShuffleNetV2::thread_tmp2_fu_19241_p2() {
    tmp2_fu_19241_p2 = (!ap_const_lv9_168.is_01() || !tmp_149_cast_fu_19232_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_149_cast_fu_19232_p1.read()));
}

void ShuffleNetV2::thread_tmp30_fu_26107_p2() {
    tmp30_fu_26107_p2 = (!ap_const_lv11_408.is_01() || !tmp_282_cast_fu_26098_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_408) + sc_bigint<11>(tmp_282_cast_fu_26098_p1.read()));
}

void ShuffleNetV2::thread_tmp31_fu_26278_p2() {
    tmp31_fu_26278_p2 = (!ap_const_lv9_168.is_01() || !tmp_296_cast_fu_26242_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_168) + sc_bigint<9>(tmp_296_cast_fu_26242_p1.read()));
}

void ShuffleNetV2::thread_tmp32_fu_26444_p2() {
    tmp32_fu_26444_p2 = (!ap_const_lv11_438.is_01() || !tmp_290_cast_fu_26435_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_438) + sc_bigint<11>(tmp_290_cast_fu_26435_p1.read()));
}

void ShuffleNetV2::thread_tmp33_fu_26655_p2() {
    tmp33_fu_26655_p2 = (!ap_const_lv11_498.is_01() || !tmp_305_cast_fu_26651_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_305_cast_fu_26651_p1.read()));
}

void ShuffleNetV2::thread_tmp34_fu_26880_p2() {
    tmp34_fu_26880_p2 = (!ap_const_lv11_468.is_01() || !tmp_299_cast_fu_26871_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_468) + sc_bigint<11>(tmp_299_cast_fu_26871_p1.read()));
}

void ShuffleNetV2::thread_tmp35_fu_27421_p2() {
    tmp35_fu_27421_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_317_cast_fu_27417_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_317_cast_fu_27417_p1.read()));
}

void ShuffleNetV2::thread_tmp36_fu_27646_p2() {
    tmp36_fu_27646_p2 = (!ap_const_lv11_498.is_01() || !tmp_311_cast_fu_27637_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_498) + sc_bigint<11>(tmp_311_cast_fu_27637_p1.read()));
}

void ShuffleNetV2::thread_tmp37_fu_27817_p2() {
    tmp37_fu_27817_p2 = (!ap_const_lv8_98.is_01() || !tmp_325_cast_cast_fu_27781_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_325_cast_cast_fu_27781_p1.read()));
}

void ShuffleNetV2::thread_tmp38_fu_27991_p2() {
    tmp38_fu_27991_p2 = (!ap_const_lv11_4C8.is_01() || !tmp_319_cast_fu_27982_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4C8) + sc_bigint<11>(tmp_319_cast_fu_27982_p1.read()));
}

void ShuffleNetV2::thread_tmp39_fu_28202_p2() {
    tmp39_fu_28202_p2 = (!ap_const_lv11_558.is_01() || !tmp_334_cast_fu_28198_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_334_cast_fu_28198_p1.read()));
}

void ShuffleNetV2::thread_tmp3_fu_19412_p2() {
    tmp3_fu_19412_p2 = (!ap_const_lv8_78.is_01() || !tmp_163_cast_fu_19376_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_78) + sc_bigint<8>(tmp_163_cast_fu_19376_p1.read()));
}

void ShuffleNetV2::thread_tmp40_fu_28427_p2() {
    tmp40_fu_28427_p2 = (!ap_const_lv11_4F8.is_01() || !tmp_328_cast_fu_28418_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_4F8) + sc_bigint<11>(tmp_328_cast_fu_28418_p1.read()));
}

void ShuffleNetV2::thread_tmp41_fu_28968_p2() {
    tmp41_fu_28968_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_346_cast_fu_28964_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_346_cast_fu_28964_p1.read()));
}

void ShuffleNetV2::thread_tmp42_fu_29193_p2() {
    tmp42_fu_29193_p2 = (!ap_const_lv11_528.is_01() || !tmp_340_cast_fu_29184_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_528) + sc_bigint<11>(tmp_340_cast_fu_29184_p1.read()));
}

void ShuffleNetV2::thread_tmp43_fu_29364_p2() {
    tmp43_fu_29364_p2 = (!ap_const_lv8_C8.is_01() || !tmp_354_cast_cast_fu_29328_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_354_cast_cast_fu_29328_p1.read()));
}

void ShuffleNetV2::thread_tmp44_fu_29542_p2() {
    tmp44_fu_29542_p2 = (!ap_const_lv11_558.is_01() || !tmp_348_cast_fu_29533_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_558) + sc_bigint<11>(tmp_348_cast_fu_29533_p1.read()));
}

void ShuffleNetV2::thread_tmp45_fu_29753_p2() {
    tmp45_fu_29753_p2 = (!ap_const_lv11_618.is_01() || !tmp_363_cast_fu_29749_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_618) + sc_bigint<11>(tmp_363_cast_fu_29749_p1.read()));
}

void ShuffleNetV2::thread_tmp46_fu_29978_p2() {
    tmp46_fu_29978_p2 = (!ap_const_lv11_588.is_01() || !tmp_357_cast_fu_29969_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_588) + sc_bigint<11>(tmp_357_cast_fu_29969_p1.read()));
}

void ShuffleNetV2::thread_tmp47_fu_30519_p2() {
    tmp47_fu_30519_p2 = (!ap_const_lv10_278.is_01() || !tmp_375_cast_cast_fu_30515_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_375_cast_cast_fu_30515_p1.read()));
}

void ShuffleNetV2::thread_tmp48_fu_30752_p2() {
    tmp48_fu_30752_p2 = (!ap_const_lv11_5B8.is_01() || !tmp_369_cast_fu_30743_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5B8) + sc_bigint<11>(tmp_369_cast_fu_30743_p1.read()));
}

void ShuffleNetV2::thread_tmp49_fu_30923_p2() {
    tmp49_fu_30923_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_383_cast_fu_30887_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_383_cast_fu_30887_p1.read()));
}

void ShuffleNetV2::thread_tmp4_fu_19582_p2() {
    tmp4_fu_19582_p2 = (!ap_const_lv8_98.is_01() || !tmp_157_cast_cast_fu_19573_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_98) + sc_bigint<8>(tmp_157_cast_cast_fu_19573_p1.read()));
}

void ShuffleNetV2::thread_tmp50_fu_31093_p2() {
    tmp50_fu_31093_p2 = (!ap_const_lv11_5E8.is_01() || !tmp_377_cast_fu_31084_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5E8) + sc_bigint<11>(tmp_377_cast_fu_31084_p1.read()));
}

void ShuffleNetV2::thread_tmp51_fu_31304_p2() {
    tmp51_fu_31304_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_392_cast_cast_fu_31300_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_392_cast_cast_fu_31300_p1.read()));
}

void ShuffleNetV2::thread_tmp52_fu_31537_p2() {
    tmp52_fu_31537_p2 = (!ap_const_lv10_218.is_01() || !tmp_386_cast_cast_fu_31528_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_218) + sc_bigint<10>(tmp_386_cast_cast_fu_31528_p1.read()));
}

void ShuffleNetV2::thread_tmp53_fu_32082_p2() {
    tmp53_fu_32082_p2 = (!ap_const_lv9_138.is_01() || !tmp_404_cast_cast_fu_32078_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_404_cast_cast_fu_32078_p1.read()));
}

void ShuffleNetV2::thread_tmp54_fu_32315_p2() {
    tmp54_fu_32315_p2 = (!ap_const_lv10_248.is_01() || !tmp_398_cast_cast_fu_32306_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_248) + sc_bigint<10>(tmp_398_cast_cast_fu_32306_p1.read()));
}

void ShuffleNetV2::thread_tmp55_fu_32490_p2() {
    tmp55_fu_32490_p2 = (!ap_const_lv10_228.is_01() || !tmp_412_cast_fu_32454_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_228) + sc_bigint<10>(tmp_412_cast_fu_32454_p1.read()));
}

void ShuffleNetV2::thread_tmp56_fu_32656_p2() {
    tmp56_fu_32656_p2 = (!ap_const_lv10_278.is_01() || !tmp_406_cast_cast_fu_32647_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_278) + sc_bigint<10>(tmp_406_cast_cast_fu_32647_p1.read()));
}

void ShuffleNetV2::thread_tmp57_cast1_fu_32877_p1() {
    tmp57_cast1_fu_32877_p1 = esl_sext<11,9>(tmp57_fu_32871_p2.read());
}

void ShuffleNetV2::thread_tmp57_cast_fu_32881_p1() {
    tmp57_cast_fu_32881_p1 = esl_zext<12,11>(tmp57_cast1_fu_32877_p1.read());
}

void ShuffleNetV2::thread_tmp57_fu_32871_p2() {
    tmp57_fu_32871_p2 = (!ap_const_lv9_198.is_01() || !tmp_421_cast_cast_fu_32867_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_421_cast_cast_fu_32867_p1.read()));
}

void ShuffleNetV2::thread_tmp58_fu_33104_p2() {
    tmp58_fu_33104_p2 = (!ap_const_lv10_2A8.is_01() || !tmp_415_cast_cast_fu_33095_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2A8) + sc_bigint<10>(tmp_415_cast_cast_fu_33095_p1.read()));
}

void ShuffleNetV2::thread_tmp59_fu_33426_p2() {
    tmp59_fu_33426_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_432_cast_fu_33422_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_432_cast_fu_33422_p1.read()));
}

void ShuffleNetV2::thread_tmp5_fu_19797_p2() {
    tmp5_fu_19797_p2 = (!ap_const_lv9_138.is_01() || !tmp_172_cast_fu_19793_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_172_cast_fu_19793_p1.read()));
}

void ShuffleNetV2::thread_tmp60_fu_33651_p2() {
    tmp60_fu_33651_p2 = (!ap_const_lv10_2D8.is_01() || !tmp_426_cast_cast_fu_33642_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2D8) + sc_bigint<10>(tmp_426_cast_cast_fu_33642_p1.read()));
}

void ShuffleNetV2::thread_tmp61_fu_33826_p2() {
    tmp61_fu_33826_p2 = (!ap_const_lv10_258.is_01() || !tmp_440_cast_fu_33790_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_258) + sc_bigint<10>(tmp_440_cast_fu_33790_p1.read()));
}

void ShuffleNetV2::thread_tmp62_fu_33992_p2() {
    tmp62_fu_33992_p2 = (!ap_const_lv9_138.is_01() || !tmp_434_cast_cast_fu_33983_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_138) + sc_bigint<9>(tmp_434_cast_cast_fu_33983_p1.read()));
}

void ShuffleNetV2::thread_tmp63_fu_34195_p2() {
    tmp63_fu_34195_p2 = (!ap_const_lv12_978.is_01() || !tmp_449_cast_fu_34191_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_449_cast_fu_34191_p1.read()));
}

void ShuffleNetV2::thread_tmp64_cast1_fu_34426_p1() {
    tmp64_cast1_fu_34426_p1 = esl_sext<11,9>(tmp64_fu_34420_p2.read());
}

void ShuffleNetV2::thread_tmp64_cast_fu_34430_p1() {
    tmp64_cast_fu_34430_p1 = esl_zext<12,11>(tmp64_cast1_fu_34426_p1.read());
}

void ShuffleNetV2::thread_tmp64_fu_34420_p2() {
    tmp64_fu_34420_p2 = (!ap_const_lv9_198.is_01() || !tmp_443_cast_cast_fu_34411_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_443_cast_cast_fu_34411_p1.read()));
}

void ShuffleNetV2::thread_tmp65_fu_34599_p2() {
    tmp65_fu_34599_p2 = (!ap_const_lv10_2B8.is_01() || !tmp_457_cast_fu_34563_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2B8) + sc_bigint<10>(tmp_457_cast_fu_34563_p1.read()));
}

void ShuffleNetV2::thread_tmp66_fu_34765_p2() {
    tmp66_fu_34765_p2 = (!ap_const_lv12_7F8.is_01() || !tmp_451_cast_fu_34756_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7F8) + sc_bigint<12>(tmp_451_cast_fu_34756_p1.read()));
}

void ShuffleNetV2::thread_tmp67_fu_34964_p2() {
    tmp67_fu_34964_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_470_cast_fu_34960_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_470_cast_fu_34960_p1.read()));
}

void ShuffleNetV2::thread_tmp68_fu_35189_p2() {
    tmp68_fu_35189_p2 = (!ap_const_lv12_858.is_01() || !tmp_460_cast_fu_35180_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_858) + sc_bigint<12>(tmp_460_cast_fu_35180_p1.read()));
}

void ShuffleNetV2::thread_tmp69_fu_35599_p2() {
    tmp69_fu_35599_p2 = (!ap_const_lv12_C78.is_01() || !tmp_478_cast_fu_35595_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C78) + sc_bigint<12>(tmp_478_cast_fu_35595_p1.read()));
}

void ShuffleNetV2::thread_tmp6_fu_20022_p2() {
    tmp6_fu_20022_p2 = (!ap_const_lv8_C8.is_01() || !tmp_166_cast_cast_fu_20013_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_C8) + sc_bigint<8>(tmp_166_cast_cast_fu_20013_p1.read()));
}

void ShuffleNetV2::thread_tmp70_fu_35824_p2() {
    tmp70_fu_35824_p2 = (!ap_const_lv12_8B8.is_01() || !tmp_472_cast_fu_35815_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_8B8) + sc_bigint<12>(tmp_472_cast_fu_35815_p1.read()));
}

void ShuffleNetV2::thread_tmp71_fu_35995_p2() {
    tmp71_fu_35995_p2 = (!ap_const_lv10_318.is_01() || !tmp_486_cast_fu_35959_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_318) + sc_bigint<10>(tmp_486_cast_fu_35959_p1.read()));
}

void ShuffleNetV2::thread_tmp72_fu_36161_p2() {
    tmp72_fu_36161_p2 = (!ap_const_lv12_918.is_01() || !tmp_480_cast_fu_36152_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_918) + sc_bigint<12>(tmp_480_cast_fu_36152_p1.read()));
}

void ShuffleNetV2::thread_tmp73_fu_36360_p2() {
    tmp73_fu_36360_p2 = (!ap_const_lv11_5F8.is_01() || !tmp_495_cast_cast_fu_36356_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_5F8) + sc_bigint<11>(tmp_495_cast_cast_fu_36356_p1.read()));
}

void ShuffleNetV2::thread_tmp74_fu_36593_p2() {
    tmp74_fu_36593_p2 = (!ap_const_lv12_978.is_01() || !tmp_489_cast_fu_36584_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_978) + sc_bigint<12>(tmp_489_cast_fu_36584_p1.read()));
}

void ShuffleNetV2::thread_tmp75_fu_37126_p2() {
    tmp75_fu_37126_p2 = (!ap_const_lv13_F78.is_01() || !tmp_507_cast_fu_37122_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_F78) + sc_bigint<13>(tmp_507_cast_fu_37122_p1.read()));
}

void ShuffleNetV2::thread_tmp76_fu_37351_p2() {
    tmp76_fu_37351_p2 = (!ap_const_lv12_9D8.is_01() || !tmp_501_cast_fu_37342_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_9D8) + sc_bigint<12>(tmp_501_cast_fu_37342_p1.read()));
}

void ShuffleNetV2::thread_tmp77_fu_37522_p2() {
    tmp77_fu_37522_p2 = (!ap_const_lv9_178.is_01() || !tmp_515_cast_cast_fu_37486_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_178) + sc_bigint<9>(tmp_515_cast_cast_fu_37486_p1.read()));
}

void ShuffleNetV2::thread_tmp78_fu_37700_p2() {
    tmp78_fu_37700_p2 = (!ap_const_lv12_A38.is_01() || !tmp_509_cast_fu_37691_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A38) + sc_bigint<12>(tmp_509_cast_fu_37691_p1.read()));
}

void ShuffleNetV2::thread_tmp79_fu_37899_p2() {
    tmp79_fu_37899_p2 = (!ap_const_lv13_10F8.is_01() || !tmp_524_cast_fu_37895_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_10F8) + sc_bigint<13>(tmp_524_cast_fu_37895_p1.read()));
}

void ShuffleNetV2::thread_tmp7_fu_20197_p2() {
    tmp7_fu_20197_p2 = (!ap_const_lv8_A8.is_01() || !tmp_180_cast_fu_20161_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_A8) + sc_bigint<8>(tmp_180_cast_fu_20161_p1.read()));
}

void ShuffleNetV2::thread_tmp80_fu_38124_p2() {
    tmp80_fu_38124_p2 = (!ap_const_lv12_A98.is_01() || !tmp_518_cast_fu_38115_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_A98) + sc_bigint<12>(tmp_518_cast_fu_38115_p1.read()));
}

void ShuffleNetV2::thread_tmp81_fu_38657_p2() {
    tmp81_fu_38657_p2 = (!ap_const_lv13_1278.is_01() || !tmp_536_cast_fu_38653_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1278) + sc_bigint<13>(tmp_536_cast_fu_38653_p1.read()));
}

void ShuffleNetV2::thread_tmp82_fu_38882_p2() {
    tmp82_fu_38882_p2 = (!ap_const_lv12_AF8.is_01() || !tmp_530_cast_fu_38873_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_AF8) + sc_bigint<12>(tmp_530_cast_fu_38873_p1.read()));
}

void ShuffleNetV2::thread_tmp83_fu_39053_p2() {
    tmp83_fu_39053_p2 = (!ap_const_lv11_3D8.is_01() || !tmp_544_cast_fu_39017_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3D8) + sc_bigint<11>(tmp_544_cast_fu_39017_p1.read()));
}

void ShuffleNetV2::thread_tmp84_fu_39223_p2() {
    tmp84_fu_39223_p2 = (!ap_const_lv12_B58.is_01() || !tmp_538_cast_fu_39214_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_B58) + sc_bigint<12>(tmp_538_cast_fu_39214_p1.read()));
}

void ShuffleNetV2::thread_tmp85_fu_39422_p2() {
    tmp85_fu_39422_p2 = (!ap_const_lv13_13F8.is_01() || !tmp_553_cast_fu_39418_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_13F8) + sc_bigint<13>(tmp_553_cast_fu_39418_p1.read()));
}

void ShuffleNetV2::thread_tmp86_fu_39647_p2() {
    tmp86_fu_39647_p2 = (!ap_const_lv12_BB8.is_01() || !tmp_547_cast_fu_39638_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_BB8) + sc_bigint<12>(tmp_547_cast_fu_39638_p1.read()));
}

void ShuffleNetV2::thread_tmp8_fu_20363_p2() {
    tmp8_fu_20363_p2 = (!ap_const_lv10_1F8.is_01() || !tmp_174_cast_fu_20354_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1F8) + sc_bigint<10>(tmp_174_cast_fu_20354_p1.read()));
}

void ShuffleNetV2::thread_tmp9_cast_fu_20580_p1() {
    tmp9_cast_fu_20580_p1 = esl_zext<10,9>(tmp9_fu_20574_p2.read());
}

void ShuffleNetV2::thread_tmp9_fu_20574_p2() {
    tmp9_fu_20574_p2 = (!ap_const_lv9_198.is_01() || !tmp_193_cast_fu_20570_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_198) + sc_bigint<9>(tmp_193_cast_fu_20570_p1.read()));
}

void ShuffleNetV2::thread_tmp_1000_cast_fu_19920_p1() {
    tmp_1000_cast_fu_19920_p1 = esl_sext<32,8>(tmp_782_reg_42877.read());
}

void ShuffleNetV2::thread_tmp_1000_fu_28587_p3() {
    tmp_1000_fu_28587_p3 = esl_concat<6,1>(co116_reg_11912.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1001_fu_28599_p2() {
    tmp_1001_fu_28599_p2 = (!p_shl490_cast_fu_28595_p1.read().is_01() || !p_shl489_cast_fu_28583_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl490_cast_fu_28595_p1.read()) + sc_biguint<10>(p_shl489_cast_fu_28583_p1.read()));
}

void ShuffleNetV2::thread_tmp_1002_fu_28627_p3() {
    tmp_1002_fu_28627_p3 = esl_concat<7,3>(tmp_313_fu_28621_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1003_fu_28639_p3() {
    tmp_1003_fu_28639_p3 = esl_concat<7,1>(tmp_313_fu_28621_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1004_fu_28651_p2() {
    tmp_1004_fu_28651_p2 = (!p_shl492_cast_fu_28647_p1.read().is_01() || !p_shl491_cast_fu_28635_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl492_cast_fu_28647_p1.read()) + sc_biguint<11>(p_shl491_cast_fu_28635_p1.read()));
}

void ShuffleNetV2::thread_tmp_1005_fu_28514_p2() {
    tmp_1005_fu_28514_p2 = (!h_91_cast_cast_fu_28510_p1.read().is_01() || !tmp_992_reg_45568.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_91_cast_cast_fu_28510_p1.read()) + sc_biguint<10>(tmp_992_reg_45568.read()));
}

void ShuffleNetV2::thread_tmp_1006_fu_28543_p2() {
    tmp_1006_fu_28543_p2 = (!p_shl493_cast_fu_28527_p1.read().is_01() || !p_shl494_cast_fu_28539_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl493_cast_fu_28527_p1.read()) + sc_biguint<15>(p_shl494_cast_fu_28539_p1.read()));
}

void ShuffleNetV2::thread_tmp_1007_fu_28677_p2() {
    tmp_1007_fu_28677_p2 = (!h_93_cast_cast_fu_28673_p1.read().is_01() || !tmp_1004_reg_45625.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_93_cast_cast_fu_28673_p1.read()) + sc_biguint<11>(tmp_1004_reg_45625.read()));
}

void ShuffleNetV2::thread_tmp_1008_fu_28706_p2() {
    tmp_1008_fu_28706_p2 = (!p_shl495_cast_fu_28690_p1.read().is_01() || !p_shl496_cast_fu_28702_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl495_cast_fu_28690_p1.read()) + sc_biguint<15>(p_shl496_cast_fu_28702_p1.read()));
}

void ShuffleNetV2::thread_tmp_1009_fu_28712_p2() {
    tmp_1009_fu_28712_p2 = (!h_93_cast_cast1_fu_28669_p1.read().is_01() || !tmp_1001_reg_45612.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_93_cast_cast1_fu_28669_p1.read()) + sc_biguint<10>(tmp_1001_reg_45612.read()));
}

void ShuffleNetV2::thread_tmp_1010_fu_28741_p2() {
    tmp_1010_fu_28741_p2 = (!p_shl497_cast_fu_28725_p1.read().is_01() || !p_shl498_cast_fu_28737_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl497_cast_fu_28725_p1.read()) + sc_biguint<14>(p_shl498_cast_fu_28737_p1.read()));
}

void ShuffleNetV2::thread_tmp_1011_fu_28565_p2() {
    tmp_1011_fu_28565_p2 = (!tmp_1006_reg_45589.read().is_01() || !w_92_cast_cast_fu_28561_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1006_reg_45589.read()) + sc_biguint<15>(w_92_cast_cast_fu_28561_p1.read()));
}

void ShuffleNetV2::thread_tmp_1012_cast_fu_20284_p1() {
    tmp_1012_cast_fu_20284_p1 = esl_zext<32,10>(tmp_787_reg_43001.read());
}

void ShuffleNetV2::thread_tmp_1012_fu_28767_p2() {
    tmp_1012_fu_28767_p2 = (!tmp_1008_reg_45638.read().is_01() || !w_94_cast_cast_fu_28763_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1008_reg_45638.read()) + sc_biguint<15>(w_94_cast_cast_fu_28763_p1.read()));
}

void ShuffleNetV2::thread_tmp_1013_fu_28777_p2() {
    tmp_1013_fu_28777_p2 = (!tmp_1010_reg_45643.read().is_01() || !w_94_cast_cast1_fu_28759_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1010_reg_45643.read()) + sc_biguint<14>(w_94_cast_cast1_fu_28759_p1.read()));
}

void ShuffleNetV2::thread_tmp_1014_fu_28988_p3() {
    tmp_1014_fu_28988_p3 = esl_concat<11,5>(sum59_reg_45721.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1015_cast_fu_20248_p1() {
    tmp_1015_cast_fu_20248_p1 = esl_sext<32,11>(tmp_790_reg_43006.read());
}

void ShuffleNetV2::thread_tmp_1015_fu_28999_p3() {
    tmp_1015_fu_28999_p3 = esl_concat<11,3>(sum59_reg_45721.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1016_fu_29010_p2() {
    tmp_1016_fu_29010_p2 = (!p_shl499_cast_fu_28995_p1.read().is_01() || !p_shl500_cast_fu_29006_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl499_cast_fu_28995_p1.read()) - sc_biguint<17>(p_shl500_cast_fu_29006_p1.read()));
}

void ShuffleNetV2::thread_tmp_1017_fu_29020_p2() {
    tmp_1017_fu_29020_p2 = (!ci60_cast1_cast_reg_45689.read().is_01() || !tmp_1444_cast_fu_29016_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci60_cast1_cast_reg_45689.read()) + sc_bigint<18>(tmp_1444_cast_fu_29016_p1.read()));
}

void ShuffleNetV2::thread_tmp_1018_fu_29076_p2() {
    tmp_1018_fu_29076_p2 = (!p_shl501_cast_fu_29062_p3.read().is_01() || !p_shl502_cast_fu_29069_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl501_cast_fu_29062_p3.read()) - sc_biguint<8>(p_shl502_cast_fu_29069_p3.read()));
}

void ShuffleNetV2::thread_tmp_1019_fu_29082_p2() {
    tmp_1019_fu_29082_p2 = (!tmp_343_cast_cast_reg_45702.read().is_01() || !tmp_1018_fu_29076_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_343_cast_cast_reg_45702.read()) + sc_biguint<8>(tmp_1018_fu_29076_p2.read()));
}

void ShuffleNetV2::thread_tmp_1020_fu_29341_p3() {
    tmp_1020_fu_29341_p3 = esl_concat<7,2>(tmp_326_fu_29332_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1021_fu_29353_p2() {
    tmp_1021_fu_29353_p2 = (!p_shl503_cast_fu_29349_p1.read().is_01() || !tmp_355_cast_cast_fu_29337_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl503_cast_fu_29349_p1.read()) - sc_bigint<10>(tmp_355_cast_cast_fu_29337_p1.read()));
}

void ShuffleNetV2::thread_tmp_1022_fu_29359_p2() {
    tmp_1022_fu_29359_p2 = (!tmp_1021_fu_29353_p2.read().is_01() || !w95_cast_cast_reg_45816.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1021_fu_29353_p2.read()) + sc_biguint<10>(w95_cast_cast_reg_45816.read()));
}

void ShuffleNetV2::thread_tmp_1023_fu_29380_p2() {
    tmp_1023_fu_29380_p2 = (!tmp_2493_fu_29375_p2.read().is_01() || !tmp_1022_reg_45855.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2493_fu_29375_p2.read()) - sc_biguint<10>(tmp_1022_reg_45855.read()));
}

void ShuffleNetV2::thread_tmp_1024_fu_29385_p2() {
    tmp_1024_fu_29385_p2 = (!tmp_1023_fu_29380_p2.read().is_01() || !h94_cast_cast_reg_45834.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1023_fu_29380_p2.read()) + sc_biguint<10>(h94_cast_cast_reg_45834.read()));
}

void ShuffleNetV2::thread_tmp_1025_fu_29397_p3() {
    tmp_1025_fu_29397_p3 = esl_concat<8,2>(sum31_reg_45861.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1026_fu_29404_p1() {
    tmp_1026_fu_29404_p1 = esl_sext<11,10>(tmp_1025_fu_29397_p3.read());
}

void ShuffleNetV2::thread_tmp_1027_fu_29412_p2() {
    tmp_1027_fu_29412_p2 = (!p_shl505_cast_fu_29408_p1.read().is_01() || !sum31_cast_cast_fu_29393_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl505_cast_fu_29408_p1.read()) - sc_biguint<12>(sum31_cast_cast_fu_29393_p1.read()));
}

void ShuffleNetV2::thread_tmp_1028_fu_29422_p2() {
    tmp_1028_fu_29422_p2 = (!tmp_1466_cast_fu_29418_p1.read().is_01() || !w95_cast_cast1_reg_45811.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1466_cast_fu_29418_p1.read()) + sc_biguint<13>(w95_cast_cast1_reg_45811.read()));
}

void ShuffleNetV2::thread_tmp_1029_fu_29441_p2() {
    tmp_1029_fu_29441_p2 = (!p_shl249_fu_29437_p1.read().is_01() || !tmp_1467_cast_fu_29427_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl249_fu_29437_p1.read()) - sc_bigint<32>(tmp_1467_cast_fu_29427_p1.read()));
}

void ShuffleNetV2::thread_tmp_1030_fu_29447_p2() {
    tmp_1030_fu_29447_p2 = (!tmp_1029_fu_29441_p2.read().is_01() || !h94_cast_reg_45829.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1029_fu_29441_p2.read()) + sc_biguint<32>(h94_cast_reg_45829.read()));
}

void ShuffleNetV2::thread_tmp_1031_fu_30007_p3() {
    tmp_1031_fu_30007_p3 = esl_concat<6,3>(co124_reg_12121.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1032_fu_30019_p3() {
    tmp_1032_fu_30019_p3 = esl_concat<6,1>(co124_reg_12121.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1033_cast_fu_20626_p1() {
    tmp_1033_cast_fu_20626_p1 = esl_sext<17,16>(tmp_801_fu_20620_p2.read());
}

void ShuffleNetV2::thread_tmp_1033_fu_30031_p2() {
    tmp_1033_fu_30031_p2 = (!p_shl508_cast_fu_30027_p1.read().is_01() || !p_shl507_cast_fu_30015_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl508_cast_fu_30027_p1.read()) + sc_biguint<10>(p_shl507_cast_fu_30015_p1.read()));
}

void ShuffleNetV2::thread_tmp_1034_cast_fu_20635_p1() {
    tmp_1034_cast_fu_20635_p1 = esl_sext<32,17>(tmp_802_fu_20630_p2.read());
}

void ShuffleNetV2::thread_tmp_1034_fu_29773_p3() {
    tmp_1034_fu_29773_p3 = esl_concat<11,5>(sum62_reg_45981.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1035_fu_29784_p3() {
    tmp_1035_fu_29784_p3 = esl_concat<11,3>(sum62_reg_45981.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1036_fu_29795_p2() {
    tmp_1036_fu_29795_p2 = (!p_shl509_cast_fu_29780_p1.read().is_01() || !p_shl510_cast_fu_29791_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl509_cast_fu_29780_p1.read()) - sc_biguint<17>(p_shl510_cast_fu_29791_p1.read()));
}

void ShuffleNetV2::thread_tmp_1037_fu_29805_p2() {
    tmp_1037_fu_29805_p2 = (!ci62_cast1_cast_reg_45949.read().is_01() || !tmp_1482_cast_fu_29801_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci62_cast1_cast_reg_45949.read()) + sc_bigint<18>(tmp_1482_cast_fu_29801_p1.read()));
}

void ShuffleNetV2::thread_tmp_1038_fu_29861_p2() {
    tmp_1038_fu_29861_p2 = (!p_shl511_cast_fu_29847_p3.read().is_01() || !p_shl512_cast_fu_29854_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl511_cast_fu_29847_p3.read()) - sc_biguint<8>(p_shl512_cast_fu_29854_p3.read()));
}

void ShuffleNetV2::thread_tmp_1039_fu_29867_p2() {
    tmp_1039_fu_29867_p2 = (!tmp_360_cast_cast_reg_45962.read().is_01() || !tmp_1038_fu_29861_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_360_cast_cast_reg_45962.read()) + sc_biguint<8>(tmp_1038_fu_29861_p2.read()));
}

void ShuffleNetV2::thread_tmp_1040_cast_fu_20701_p1() {
    tmp_1040_cast_fu_20701_p1 = esl_sext<32,8>(tmp_804_reg_43137.read());
}

void ShuffleNetV2::thread_tmp_1040_fu_30126_p3() {
    tmp_1040_fu_30126_p3 = esl_concat<6,3>(co126_reg_12154.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1041_fu_30138_p3() {
    tmp_1041_fu_30138_p3 = esl_concat<6,1>(co126_reg_12154.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1042_fu_30150_p2() {
    tmp_1042_fu_30150_p2 = (!p_shl514_cast_fu_30146_p1.read().is_01() || !p_shl513_cast_fu_30134_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl514_cast_fu_30146_p1.read()) + sc_biguint<10>(p_shl513_cast_fu_30134_p1.read()));
}

void ShuffleNetV2::thread_tmp_1043_fu_30178_p3() {
    tmp_1043_fu_30178_p3 = esl_concat<7,3>(tmp_332_fu_30172_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1044_fu_30190_p3() {
    tmp_1044_fu_30190_p3 = esl_concat<7,1>(tmp_332_fu_30172_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1045_fu_30202_p2() {
    tmp_1045_fu_30202_p2 = (!p_shl516_cast_fu_30198_p1.read().is_01() || !p_shl515_cast_fu_30186_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl516_cast_fu_30198_p1.read()) + sc_biguint<11>(p_shl515_cast_fu_30186_p1.read()));
}

void ShuffleNetV2::thread_tmp_1046_fu_30065_p2() {
    tmp_1046_fu_30065_p2 = (!h_97_cast_cast_fu_30061_p1.read().is_01() || !tmp_1033_reg_46053.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_97_cast_cast_fu_30061_p1.read()) + sc_biguint<10>(tmp_1033_reg_46053.read()));
}

void ShuffleNetV2::thread_tmp_1047_fu_30094_p2() {
    tmp_1047_fu_30094_p2 = (!p_shl517_cast_fu_30078_p1.read().is_01() || !p_shl518_cast_fu_30090_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl517_cast_fu_30078_p1.read()) + sc_biguint<15>(p_shl518_cast_fu_30090_p1.read()));
}

void ShuffleNetV2::thread_tmp_1048_fu_30228_p2() {
    tmp_1048_fu_30228_p2 = (!h_99_cast_cast_fu_30224_p1.read().is_01() || !tmp_1045_reg_46110.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_99_cast_cast_fu_30224_p1.read()) + sc_biguint<11>(tmp_1045_reg_46110.read()));
}

void ShuffleNetV2::thread_tmp_1049_fu_30257_p2() {
    tmp_1049_fu_30257_p2 = (!p_shl519_cast_fu_30241_p1.read().is_01() || !p_shl520_cast_fu_30253_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl519_cast_fu_30241_p1.read()) + sc_biguint<15>(p_shl520_cast_fu_30253_p1.read()));
}

void ShuffleNetV2::thread_tmp_1050_fu_30263_p2() {
    tmp_1050_fu_30263_p2 = (!h_99_cast_cast1_fu_30220_p1.read().is_01() || !tmp_1042_reg_46097.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_99_cast_cast1_fu_30220_p1.read()) + sc_biguint<10>(tmp_1042_reg_46097.read()));
}

void ShuffleNetV2::thread_tmp_1051_cast_fu_21029_p1() {
    tmp_1051_cast_fu_21029_p1 = esl_zext<32,15>(tmp_809_fu_21024_p2.read());
}

void ShuffleNetV2::thread_tmp_1051_fu_30292_p2() {
    tmp_1051_fu_30292_p2 = (!p_shl521_cast_fu_30276_p1.read().is_01() || !p_shl522_cast_fu_30288_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl521_cast_fu_30276_p1.read()) + sc_biguint<14>(p_shl522_cast_fu_30288_p1.read()));
}

void ShuffleNetV2::thread_tmp_1052_cast_fu_21039_p1() {
    tmp_1052_cast_fu_21039_p1 = esl_zext<32,14>(tmp_810_reg_43236.read());
}

void ShuffleNetV2::thread_tmp_1052_fu_30116_p2() {
    tmp_1052_fu_30116_p2 = (!tmp_1047_reg_46074.read().is_01() || !w_98_cast_cast_fu_30112_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1047_reg_46074.read()) + sc_biguint<15>(w_98_cast_cast_fu_30112_p1.read()));
}

void ShuffleNetV2::thread_tmp_1053_fu_30318_p2() {
    tmp_1053_fu_30318_p2 = (!tmp_1049_reg_46123.read().is_01() || !w_100_cast_cast_fu_30314_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1049_reg_46123.read()) + sc_biguint<15>(w_100_cast_cast_fu_30314_p1.read()));
}

void ShuffleNetV2::thread_tmp_1054_fu_30328_p2() {
    tmp_1054_fu_30328_p2 = (!tmp_1051_reg_46128.read().is_01() || !w_100_cast_cast1_fu_30310_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1051_reg_46128.read()) + sc_biguint<14>(w_100_cast_cast1_fu_30310_p1.read()));
}

void ShuffleNetV2::thread_tmp_1055_fu_30539_p3() {
    tmp_1055_fu_30539_p3 = esl_concat<10,5>(sum64_reg_46206.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1056_fu_30546_p1() {
    tmp_1056_fu_30546_p1 = esl_sext<16,15>(tmp_1055_fu_30539_p3.read());
}

void ShuffleNetV2::thread_tmp_1057_fu_30554_p3() {
    tmp_1057_fu_30554_p3 = esl_concat<10,3>(sum64_reg_46206.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1058_fu_30561_p1() {
    tmp_1058_fu_30561_p1 = esl_sext<14,13>(tmp_1057_fu_30554_p3.read());
}

void ShuffleNetV2::thread_tmp_1059_fu_30569_p2() {
    tmp_1059_fu_30569_p2 = (!p_shl523_cast_fu_30550_p1.read().is_01() || !p_shl524_cast_fu_30565_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl523_cast_fu_30550_p1.read()) - sc_biguint<17>(p_shl524_cast_fu_30565_p1.read()));
}

void ShuffleNetV2::thread_tmp_1060_fu_30579_p2() {
    tmp_1060_fu_30579_p2 = (!tmp_1523_cast_fu_30575_p1.read().is_01() || !ci64_cast1_cast_reg_46174.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp_1523_cast_fu_30575_p1.read()) + sc_biguint<18>(ci64_cast1_cast_reg_46174.read()));
}

void ShuffleNetV2::thread_tmp_1061_cast_fu_21273_p1() {
    tmp_1061_cast_fu_21273_p1 = esl_sext<17,16>(tmp_813_fu_21267_p2.read());
}

void ShuffleNetV2::thread_tmp_1061_fu_30635_p2() {
    tmp_1061_fu_30635_p2 = (!p_shl525_cast_fu_30621_p3.read().is_01() || !p_shl526_cast_fu_30628_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl525_cast_fu_30621_p3.read()) - sc_biguint<8>(p_shl526_cast_fu_30628_p3.read()));
}

void ShuffleNetV2::thread_tmp_1062_cast_fu_21282_p1() {
    tmp_1062_cast_fu_21282_p1 = esl_sext<32,17>(tmp_814_fu_21277_p2.read());
}

void ShuffleNetV2::thread_tmp_1062_fu_30641_p2() {
    tmp_1062_fu_30641_p2 = (!tmp_1061_fu_30635_p2.read().is_01() || !tmp_372_cast_cast_reg_46187.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1061_fu_30635_p2.read()) + sc_bigint<8>(tmp_372_cast_cast_reg_46187.read()));
}

void ShuffleNetV2::thread_tmp_1063_fu_30900_p3() {
    tmp_1063_fu_30900_p3 = esl_concat<7,2>(tmp_345_fu_30891_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1064_fu_30912_p2() {
    tmp_1064_fu_30912_p2 = (!p_shl527_cast_fu_30908_p1.read().is_01() || !tmp_384_cast_cast_fu_30896_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl527_cast_fu_30908_p1.read()) - sc_bigint<10>(tmp_384_cast_cast_fu_30896_p1.read()));
}

void ShuffleNetV2::thread_tmp_1065_fu_30918_p2() {
    tmp_1065_fu_30918_p2 = (!w101_cast_cast_reg_46301.read().is_01() || !tmp_1064_fu_30912_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w101_cast_cast_reg_46301.read()) + sc_biguint<10>(tmp_1064_fu_30912_p2.read()));
}

void ShuffleNetV2::thread_tmp_1066_fu_30939_p2() {
    tmp_1066_fu_30939_p2 = (!tmp_2517_fu_30934_p2.read().is_01() || !tmp_1065_reg_46340.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2517_fu_30934_p2.read()) - sc_biguint<10>(tmp_1065_reg_46340.read()));
}

void ShuffleNetV2::thread_tmp_1067_fu_30944_p2() {
    tmp_1067_fu_30944_p2 = (!h100_cast_cast_reg_46319.read().is_01() || !tmp_1066_fu_30939_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h100_cast_cast_reg_46319.read()) + sc_biguint<10>(tmp_1066_fu_30939_p2.read()));
}

void ShuffleNetV2::thread_tmp_1068_cast_fu_21348_p1() {
    tmp_1068_cast_fu_21348_p1 = esl_sext<32,8>(tmp_816_reg_43318.read());
}

void ShuffleNetV2::thread_tmp_1068_fu_30952_p3() {
    tmp_1068_fu_30952_p3 = esl_concat<10,2>(sum33_reg_46346.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1069_fu_30963_p2() {
    tmp_1069_fu_30963_p2 = (!p_shl529_cast_fu_30959_p1.read().is_01() || !sum33_cast_cast_fu_30949_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl529_cast_fu_30959_p1.read()) - sc_biguint<13>(sum33_cast_cast_fu_30949_p1.read()));
}

void ShuffleNetV2::thread_tmp_1070_fu_30973_p2() {
    tmp_1070_fu_30973_p2 = (!w101_cast_cast1_reg_46296.read().is_01() || !tmp_1544_cast_fu_30969_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(w101_cast_cast1_reg_46296.read()) + sc_bigint<14>(tmp_1544_cast_fu_30969_p1.read()));
}

void ShuffleNetV2::thread_tmp_1071_fu_30992_p2() {
    tmp_1071_fu_30992_p2 = (!p_shl255_fu_30988_p1.read().is_01() || !tmp_1545_cast_fu_30978_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl255_fu_30988_p1.read()) - sc_bigint<32>(tmp_1545_cast_fu_30978_p1.read()));
}

void ShuffleNetV2::thread_tmp_1072_fu_30998_p2() {
    tmp_1072_fu_30998_p2 = (!h100_cast_reg_46314.read().is_01() || !tmp_1071_fu_30992_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h100_cast_reg_46314.read()) + sc_biguint<32>(tmp_1071_fu_30992_p2.read()));
}

void ShuffleNetV2::thread_tmp_1073_fu_31570_p3() {
    tmp_1073_fu_31570_p3 = esl_concat<6,3>(co134_reg_12363.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1074_fu_31582_p3() {
    tmp_1074_fu_31582_p3 = esl_concat<6,1>(co134_reg_12363.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1075_fu_31594_p2() {
    tmp_1075_fu_31594_p2 = (!p_shl532_cast_fu_31590_p1.read().is_01() || !p_shl531_cast_fu_31578_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl532_cast_fu_31590_p1.read()) + sc_biguint<10>(p_shl531_cast_fu_31578_p1.read()));
}

void ShuffleNetV2::thread_tmp_1076_fu_31324_p3() {
    tmp_1076_fu_31324_p3 = esl_concat<10,5>(sum67_reg_46466.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1077_fu_31331_p1() {
    tmp_1077_fu_31331_p1 = esl_sext<16,15>(tmp_1076_fu_31324_p3.read());
}

void ShuffleNetV2::thread_tmp_1078_fu_31339_p3() {
    tmp_1078_fu_31339_p3 = esl_concat<10,3>(sum67_reg_46466.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1079_fu_31346_p1() {
    tmp_1079_fu_31346_p1 = esl_sext<14,13>(tmp_1078_fu_31339_p3.read());
}

void ShuffleNetV2::thread_tmp_1080_cast_fu_21716_p1() {
    tmp_1080_cast_fu_21716_p1 = esl_zext<32,10>(tmp_821_reg_43442.read());
}

void ShuffleNetV2::thread_tmp_1080_fu_31354_p2() {
    tmp_1080_fu_31354_p2 = (!p_shl533_cast_fu_31335_p1.read().is_01() || !p_shl534_cast_fu_31350_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl533_cast_fu_31335_p1.read()) - sc_biguint<17>(p_shl534_cast_fu_31350_p1.read()));
}

void ShuffleNetV2::thread_tmp_1081_fu_31364_p2() {
    tmp_1081_fu_31364_p2 = (!tmp_1562_cast_fu_31360_p1.read().is_01() || !ci66_cast1_cast_reg_46434.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp_1562_cast_fu_31360_p1.read()) + sc_biguint<18>(ci66_cast1_cast_reg_46434.read()));
}

void ShuffleNetV2::thread_tmp_1082_cast_fu_21671_p1() {
    tmp_1082_cast_fu_21671_p1 = esl_sext<13,12>(tmp_823_fu_21665_p2.read());
}

void ShuffleNetV2::thread_tmp_1082_fu_31420_p2() {
    tmp_1082_fu_31420_p2 = (!p_shl535_cast_fu_31406_p3.read().is_01() || !p_shl536_cast_fu_31413_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl535_cast_fu_31406_p3.read()) - sc_biguint<8>(p_shl536_cast_fu_31413_p3.read()));
}

void ShuffleNetV2::thread_tmp_1083_cast_fu_21680_p1() {
    tmp_1083_cast_fu_21680_p1 = esl_sext<32,13>(tmp_824_reg_43447.read());
}

void ShuffleNetV2::thread_tmp_1083_fu_31426_p2() {
    tmp_1083_fu_31426_p2 = (!tmp_1082_fu_31420_p2.read().is_01() || !tmp_389_cast_cast_reg_46447.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1082_fu_31420_p2.read()) + sc_bigint<8>(tmp_389_cast_cast_reg_46447.read()));
}

void ShuffleNetV2::thread_tmp_1084_fu_31689_p3() {
    tmp_1084_fu_31689_p3 = esl_concat<6,3>(co136_reg_12396.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1085_fu_31701_p3() {
    tmp_1085_fu_31701_p3 = esl_concat<6,1>(co136_reg_12396.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1086_fu_31713_p2() {
    tmp_1086_fu_31713_p2 = (!p_shl538_cast_fu_31709_p1.read().is_01() || !p_shl537_cast_fu_31697_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl538_cast_fu_31709_p1.read()) + sc_biguint<10>(p_shl537_cast_fu_31697_p1.read()));
}

void ShuffleNetV2::thread_tmp_1087_fu_31741_p3() {
    tmp_1087_fu_31741_p3 = esl_concat<7,3>(tmp_351_fu_31735_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1088_fu_31753_p3() {
    tmp_1088_fu_31753_p3 = esl_concat<7,1>(tmp_351_fu_31735_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1089_fu_31765_p2() {
    tmp_1089_fu_31765_p2 = (!p_shl540_cast_fu_31761_p1.read().is_01() || !p_shl539_cast_fu_31749_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl540_cast_fu_31761_p1.read()) + sc_biguint<11>(p_shl539_cast_fu_31749_p1.read()));
}

void ShuffleNetV2::thread_tmp_1090_fu_31628_p2() {
    tmp_1090_fu_31628_p2 = (!h_103_cast_cast_fu_31624_p1.read().is_01() || !tmp_1075_reg_46538.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_103_cast_cast_fu_31624_p1.read()) + sc_biguint<10>(tmp_1075_reg_46538.read()));
}

void ShuffleNetV2::thread_tmp_1091_fu_31657_p2() {
    tmp_1091_fu_31657_p2 = (!p_shl541_cast_fu_31641_p1.read().is_01() || !p_shl542_cast_fu_31653_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl541_cast_fu_31641_p1.read()) + sc_biguint<15>(p_shl542_cast_fu_31653_p1.read()));
}

void ShuffleNetV2::thread_tmp_1092_fu_31791_p2() {
    tmp_1092_fu_31791_p2 = (!h_105_cast_cast_fu_31787_p1.read().is_01() || !tmp_1089_reg_46595.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_105_cast_cast_fu_31787_p1.read()) + sc_biguint<11>(tmp_1089_reg_46595.read()));
}

void ShuffleNetV2::thread_tmp_1093_fu_31820_p2() {
    tmp_1093_fu_31820_p2 = (!p_shl543_cast_fu_31804_p1.read().is_01() || !p_shl544_cast_fu_31816_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl543_cast_fu_31804_p1.read()) + sc_biguint<15>(p_shl544_cast_fu_31816_p1.read()));
}

void ShuffleNetV2::thread_tmp_1094_fu_31826_p2() {
    tmp_1094_fu_31826_p2 = (!h_105_cast_cast1_fu_31783_p1.read().is_01() || !tmp_1086_reg_46582.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_105_cast_cast1_fu_31783_p1.read()) + sc_biguint<10>(tmp_1086_reg_46582.read()));
}

void ShuffleNetV2::thread_tmp_1095_fu_31855_p2() {
    tmp_1095_fu_31855_p2 = (!p_shl545_cast_fu_31839_p1.read().is_01() || !p_shl546_cast_fu_31851_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl545_cast_fu_31839_p1.read()) + sc_biguint<14>(p_shl546_cast_fu_31851_p1.read()));
}

void ShuffleNetV2::thread_tmp_1096_fu_31679_p2() {
    tmp_1096_fu_31679_p2 = (!tmp_1091_reg_46559.read().is_01() || !w_104_cast_cast_fu_31675_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1091_reg_46559.read()) + sc_biguint<15>(w_104_cast_cast_fu_31675_p1.read()));
}

void ShuffleNetV2::thread_tmp_1097_fu_31881_p2() {
    tmp_1097_fu_31881_p2 = (!tmp_1093_reg_46608.read().is_01() || !w_106_cast_cast_fu_31877_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1093_reg_46608.read()) + sc_biguint<15>(w_106_cast_cast_fu_31877_p1.read()));
}

void ShuffleNetV2::thread_tmp_1098_cast_fu_22054_p1() {
    tmp_1098_cast_fu_22054_p1 = esl_sext<17,16>(tmp_832_fu_22048_p2.read());
}

void ShuffleNetV2::thread_tmp_1098_fu_31891_p2() {
    tmp_1098_fu_31891_p2 = (!tmp_1095_reg_46613.read().is_01() || !w_106_cast_cast1_fu_31873_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1095_reg_46613.read()) + sc_biguint<14>(w_106_cast_cast1_fu_31873_p1.read()));
}

void ShuffleNetV2::thread_tmp_1099_cast_fu_22063_p1() {
    tmp_1099_cast_fu_22063_p1 = esl_sext<32,17>(tmp_833_fu_22058_p2.read());
}

void ShuffleNetV2::thread_tmp_1099_fu_32102_p3() {
    tmp_1099_fu_32102_p3 = esl_concat<9,5>(sum69_reg_46691.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1100_fu_32109_p1() {
    tmp_1100_fu_32109_p1 = esl_sext<16,14>(tmp_1099_fu_32102_p3.read());
}

void ShuffleNetV2::thread_tmp_1101_fu_32117_p3() {
    tmp_1101_fu_32117_p3 = esl_concat<9,3>(sum69_reg_46691.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1102_fu_32124_p1() {
    tmp_1102_fu_32124_p1 = esl_sext<14,12>(tmp_1101_fu_32117_p3.read());
}

void ShuffleNetV2::thread_tmp_1103_fu_32132_p2() {
    tmp_1103_fu_32132_p2 = (!p_shl547_cast_fu_32113_p1.read().is_01() || !p_shl548_cast_fu_32128_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl547_cast_fu_32113_p1.read()) - sc_biguint<17>(p_shl548_cast_fu_32128_p1.read()));
}

void ShuffleNetV2::thread_tmp_1104_fu_32142_p2() {
    tmp_1104_fu_32142_p2 = (!tmp_1603_cast_fu_32138_p1.read().is_01() || !ci68_cast1_cast_reg_46659.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp_1603_cast_fu_32138_p1.read()) + sc_biguint<18>(ci68_cast1_cast_reg_46659.read()));
}

void ShuffleNetV2::thread_tmp_1105_cast_fu_22129_p1() {
    tmp_1105_cast_fu_22129_p1 = esl_sext<32,8>(tmp_835_reg_43578.read());
}

void ShuffleNetV2::thread_tmp_1105_fu_32198_p2() {
    tmp_1105_fu_32198_p2 = (!p_shl549_cast_fu_32184_p3.read().is_01() || !p_shl550_cast_fu_32191_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl549_cast_fu_32184_p3.read()) - sc_biguint<8>(p_shl550_cast_fu_32191_p3.read()));
}

void ShuffleNetV2::thread_tmp_1106_fu_32204_p2() {
    tmp_1106_fu_32204_p2 = (!tmp_1105_fu_32198_p2.read().is_01() || !tmp_401_cast_cast_reg_46672.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_1105_fu_32198_p2.read()) + sc_bigint<8>(tmp_401_cast_cast_reg_46672.read()));
}

void ShuffleNetV2::thread_tmp_1107_fu_32467_p3() {
    tmp_1107_fu_32467_p3 = esl_concat<7,2>(tmp_364_fu_32458_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1108_fu_32479_p2() {
    tmp_1108_fu_32479_p2 = (!p_shl551_cast_fu_32475_p1.read().is_01() || !tmp_413_cast_cast_fu_32463_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl551_cast_fu_32475_p1.read()) - sc_bigint<10>(tmp_413_cast_cast_fu_32463_p1.read()));
}

void ShuffleNetV2::thread_tmp_1109_fu_32485_p2() {
    tmp_1109_fu_32485_p2 = (!w107_cast_cast_reg_46786.read().is_01() || !tmp_1108_fu_32479_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w107_cast_cast_reg_46786.read()) + sc_biguint<10>(tmp_1108_fu_32479_p2.read()));
}

void ShuffleNetV2::thread_tmp_1110_fu_32506_p2() {
    tmp_1110_fu_32506_p2 = (!tmp_2541_fu_32501_p2.read().is_01() || !tmp_1109_reg_46825.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2541_fu_32501_p2.read()) - sc_biguint<10>(tmp_1109_reg_46825.read()));
}

void ShuffleNetV2::thread_tmp_1111_fu_32511_p2() {
    tmp_1111_fu_32511_p2 = (!h106_cast_cast_reg_46804.read().is_01() || !tmp_1110_fu_32506_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h106_cast_cast_reg_46804.read()) + sc_biguint<10>(tmp_1110_fu_32506_p2.read()));
}

void ShuffleNetV2::thread_tmp_1112_fu_32519_p3() {
    tmp_1112_fu_32519_p3 = esl_concat<10,2>(sum35_reg_46831.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1113_fu_32530_p2() {
    tmp_1113_fu_32530_p2 = (!p_shl553_cast_fu_32526_p1.read().is_01() || !sum35_cast_cast_fu_32516_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl553_cast_fu_32526_p1.read()) - sc_biguint<13>(sum35_cast_cast_fu_32516_p1.read()));
}

void ShuffleNetV2::thread_tmp_1114_fu_32536_p2() {
    tmp_1114_fu_32536_p2 = (!w107_cast_cast1_reg_46781.read().is_01() || !tmp_1113_fu_32530_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w107_cast_cast1_reg_46781.read()) + sc_biguint<13>(tmp_1113_fu_32530_p2.read()));
}

void ShuffleNetV2::thread_tmp_1115_fu_32555_p2() {
    tmp_1115_fu_32555_p2 = (!p_shl258_fu_32551_p1.read().is_01() || !tmp_1625_cast_fu_32541_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl258_fu_32551_p1.read()) - sc_bigint<32>(tmp_1625_cast_fu_32541_p1.read()));
}

void ShuffleNetV2::thread_tmp_1116_fu_32561_p2() {
    tmp_1116_fu_32561_p2 = (!h106_cast_reg_46799.read().is_01() || !tmp_1115_fu_32555_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h106_cast_reg_46799.read()) + sc_biguint<32>(tmp_1115_fu_32555_p2.read()));
}

void ShuffleNetV2::thread_tmp_1117_fu_33137_p3() {
    tmp_1117_fu_33137_p3 = esl_concat<6,3>(co144_reg_12605.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1118_fu_33149_p3() {
    tmp_1118_fu_33149_p3 = esl_concat<6,1>(co144_reg_12605.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1119_fu_33161_p2() {
    tmp_1119_fu_33161_p2 = (!p_shl556_cast_fu_33157_p1.read().is_01() || !p_shl555_cast_fu_33145_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl556_cast_fu_33157_p1.read()) + sc_biguint<10>(p_shl555_cast_fu_33145_p1.read()));
}

void ShuffleNetV2::thread_tmp_1120_fu_32899_p3() {
    tmp_1120_fu_32899_p3 = esl_concat<12,5>(sum72_reg_46951.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1121_fu_32910_p3() {
    tmp_1121_fu_32910_p3 = esl_concat<12,3>(sum72_reg_46951.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1122_fu_32921_p2() {
    tmp_1122_fu_32921_p2 = (!p_shl557_cast_fu_32906_p1.read().is_01() || !p_shl558_cast_fu_32917_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl557_cast_fu_32906_p1.read()) - sc_biguint<18>(p_shl558_cast_fu_32917_p1.read()));
}

void ShuffleNetV2::thread_tmp_1123_fu_32931_p2() {
    tmp_1123_fu_32931_p2 = (!ci70_cast1_cast_reg_46919.read().is_01() || !tmp_1640_cast_fu_32927_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci70_cast1_cast_reg_46919.read()) + sc_bigint<19>(tmp_1640_cast_fu_32927_p1.read()));
}

void ShuffleNetV2::thread_tmp_1124_fu_32987_p2() {
    tmp_1124_fu_32987_p2 = (!p_shl559_cast_fu_32973_p3.read().is_01() || !p_shl560_cast_fu_32980_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl559_cast_fu_32973_p3.read()) - sc_biguint<8>(p_shl560_cast_fu_32980_p3.read()));
}

void ShuffleNetV2::thread_tmp_1125_fu_32993_p2() {
    tmp_1125_fu_32993_p2 = (!tmp_418_cast_cast_reg_46932.read().is_01() || !tmp_1124_fu_32987_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_418_cast_cast_reg_46932.read()) + sc_biguint<8>(tmp_1124_fu_32987_p2.read()));
}

void ShuffleNetV2::thread_tmp_1126_cast_fu_22374_p1() {
    tmp_1126_cast_fu_22374_p1 = esl_zext<32,15>(tmp_848_fu_22369_p2.read());
}

void ShuffleNetV2::thread_tmp_1126_fu_33195_p2() {
    tmp_1126_fu_33195_p2 = (!h_109_cast_cast_fu_33191_p1.read().is_01() || !tmp_1119_reg_47023.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_109_cast_cast_fu_33191_p1.read()) + sc_biguint<10>(tmp_1119_reg_47023.read()));
}

void ShuffleNetV2::thread_tmp_1127_cast_fu_22576_p1() {
    tmp_1127_cast_fu_22576_p1 = esl_zext<32,15>(tmp_849_fu_22571_p2.read());
}

void ShuffleNetV2::thread_tmp_1127_fu_33224_p2() {
    tmp_1127_fu_33224_p2 = (!p_shl561_cast_fu_33208_p1.read().is_01() || !p_shl562_cast_fu_33220_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl561_cast_fu_33208_p1.read()) + sc_biguint<15>(p_shl562_cast_fu_33220_p1.read()));
}

void ShuffleNetV2::thread_tmp_1128_cast_fu_22586_p1() {
    tmp_1128_cast_fu_22586_p1 = esl_zext<32,14>(tmp_850_reg_43721.read());
}

void ShuffleNetV2::thread_tmp_1128_fu_33246_p2() {
    tmp_1128_fu_33246_p2 = (!tmp_1127_reg_47044.read().is_01() || !w_110_cast_cast_fu_33242_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1127_reg_47044.read()) + sc_biguint<15>(w_110_cast_cast_fu_33242_p1.read()));
}

void ShuffleNetV2::thread_tmp_1129_fu_33446_p3() {
    tmp_1129_fu_33446_p3 = esl_concat<12,5>(sum74_reg_47122.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1130_fu_33457_p3() {
    tmp_1130_fu_33457_p3 = esl_concat<12,3>(sum74_reg_47122.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1131_fu_33468_p2() {
    tmp_1131_fu_33468_p2 = (!p_shl563_cast_fu_33453_p1.read().is_01() || !p_shl564_cast_fu_33464_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl563_cast_fu_33453_p1.read()) - sc_biguint<18>(p_shl564_cast_fu_33464_p1.read()));
}

void ShuffleNetV2::thread_tmp_1132_fu_33478_p2() {
    tmp_1132_fu_33478_p2 = (!ci72_cast1_cast_reg_47090.read().is_01() || !tmp_1662_cast_fu_33474_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci72_cast1_cast_reg_47090.read()) + sc_bigint<19>(tmp_1662_cast_fu_33474_p1.read()));
}

void ShuffleNetV2::thread_tmp_1133_fu_33534_p2() {
    tmp_1133_fu_33534_p2 = (!p_shl565_cast_fu_33520_p3.read().is_01() || !p_shl566_cast_fu_33527_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl565_cast_fu_33520_p3.read()) - sc_biguint<10>(p_shl566_cast_fu_33527_p3.read()));
}

void ShuffleNetV2::thread_tmp_1134_fu_33540_p2() {
    tmp_1134_fu_33540_p2 = (!tmp_429_cast_cast_reg_47103.read().is_01() || !tmp_1133_fu_33534_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_429_cast_cast_reg_47103.read()) + sc_biguint<10>(tmp_1133_fu_33534_p2.read()));
}

void ShuffleNetV2::thread_tmp_1135_fu_33803_p3() {
    tmp_1135_fu_33803_p3 = esl_concat<8,2>(tmp_382_fu_33794_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1136_fu_33815_p2() {
    tmp_1136_fu_33815_p2 = (!p_shl567_cast_fu_33811_p1.read().is_01() || !tmp_441_cast_cast_fu_33799_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl567_cast_fu_33811_p1.read()) - sc_bigint<11>(tmp_441_cast_cast_fu_33799_p1.read()));
}

void ShuffleNetV2::thread_tmp_1137_cast_fu_22820_p1() {
    tmp_1137_cast_fu_22820_p1 = esl_sext<17,16>(tmp_853_fu_22814_p2.read());
}

void ShuffleNetV2::thread_tmp_1137_fu_33821_p2() {
    tmp_1137_fu_33821_p2 = (!w111_cast_cast_reg_47217.read().is_01() || !tmp_1136_fu_33815_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w111_cast_cast_reg_47217.read()) + sc_biguint<11>(tmp_1136_fu_33815_p2.read()));
}

void ShuffleNetV2::thread_tmp_1138_cast_fu_22829_p1() {
    tmp_1138_cast_fu_22829_p1 = esl_sext<32,17>(tmp_854_fu_22824_p2.read());
}

void ShuffleNetV2::thread_tmp_1138_fu_33842_p2() {
    tmp_1138_fu_33842_p2 = (!tmp_2564_fu_33837_p2.read().is_01() || !tmp_1137_reg_47256.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_2564_fu_33837_p2.read()) - sc_biguint<11>(tmp_1137_reg_47256.read()));
}

void ShuffleNetV2::thread_tmp_1139_fu_33847_p2() {
    tmp_1139_fu_33847_p2 = (!h110_cast_cast_reg_47235.read().is_01() || !tmp_1138_fu_33842_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h110_cast_cast_reg_47235.read()) + sc_biguint<11>(tmp_1138_fu_33842_p2.read()));
}

void ShuffleNetV2::thread_tmp_1140_fu_33855_p3() {
    tmp_1140_fu_33855_p3 = esl_concat<10,2>(sum37_reg_47262.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1141_fu_33866_p2() {
    tmp_1141_fu_33866_p2 = (!p_shl569_cast_fu_33862_p1.read().is_01() || !sum37_cast_cast_fu_33852_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl569_cast_fu_33862_p1.read()) - sc_biguint<13>(sum37_cast_cast_fu_33852_p1.read()));
}

void ShuffleNetV2::thread_tmp_1142_fu_33872_p2() {
    tmp_1142_fu_33872_p2 = (!w111_cast_cast1_reg_47212.read().is_01() || !tmp_1141_fu_33866_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w111_cast_cast1_reg_47212.read()) + sc_biguint<13>(tmp_1141_fu_33866_p2.read()));
}

void ShuffleNetV2::thread_tmp_1143_fu_33891_p2() {
    tmp_1143_fu_33891_p2 = (!p_shl262_fu_33887_p1.read().is_01() || !tmp_1684_cast_fu_33877_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl262_fu_33887_p1.read()) - sc_bigint<32>(tmp_1684_cast_fu_33877_p1.read()));
}

void ShuffleNetV2::thread_tmp_1144_cast_fu_22895_p1() {
    tmp_1144_cast_fu_22895_p1 = esl_sext<32,8>(tmp_856_reg_43803.read());
}

void ShuffleNetV2::thread_tmp_1144_fu_33897_p2() {
    tmp_1144_fu_33897_p2 = (!h110_cast_reg_47230.read().is_01() || !tmp_1143_fu_33891_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h110_cast_reg_47230.read()) + sc_biguint<32>(tmp_1143_fu_33891_p2.read()));
}

void ShuffleNetV2::thread_tmp_1145_fu_34215_p3() {
    tmp_1145_fu_34215_p3 = esl_concat<12,5>(sum77_reg_47382.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1146_fu_34226_p3() {
    tmp_1146_fu_34226_p3 = esl_concat<12,3>(sum77_reg_47382.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1147_fu_34237_p2() {
    tmp_1147_fu_34237_p2 = (!p_shl571_cast_fu_34222_p1.read().is_01() || !p_shl572_cast_fu_34233_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl571_cast_fu_34222_p1.read()) - sc_biguint<18>(p_shl572_cast_fu_34233_p1.read()));
}

void ShuffleNetV2::thread_tmp_1148_fu_34247_p2() {
    tmp_1148_fu_34247_p2 = (!ci74_cast1_cast_reg_47350.read().is_01() || !tmp_1695_cast_fu_34243_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci74_cast1_cast_reg_47350.read()) + sc_bigint<19>(tmp_1695_cast_fu_34243_p1.read()));
}

void ShuffleNetV2::thread_tmp_1149_fu_34303_p2() {
    tmp_1149_fu_34303_p2 = (!p_shl573_cast_fu_34289_p3.read().is_01() || !p_shl574_cast_fu_34296_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl573_cast_fu_34289_p3.read()) - sc_biguint<10>(p_shl574_cast_fu_34296_p3.read()));
}

void ShuffleNetV2::thread_tmp_1150_fu_34309_p2() {
    tmp_1150_fu_34309_p2 = (!tmp_446_cast_cast_reg_47363.read().is_01() || !tmp_1149_fu_34303_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_446_cast_cast_reg_47363.read()) + sc_biguint<10>(tmp_1149_fu_34303_p2.read()));
}

void ShuffleNetV2::thread_tmp_1151_fu_34576_p3() {
    tmp_1151_fu_34576_p3 = esl_concat<8,2>(tmp_393_fu_34567_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1152_fu_34588_p2() {
    tmp_1152_fu_34588_p2 = (!p_shl575_cast_fu_34584_p1.read().is_01() || !tmp_458_cast_cast_fu_34572_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl575_cast_fu_34584_p1.read()) - sc_bigint<11>(tmp_458_cast_cast_fu_34572_p1.read()));
}

void ShuffleNetV2::thread_tmp_1153_fu_34594_p2() {
    tmp_1153_fu_34594_p2 = (!w113_cast_cast_reg_47477.read().is_01() || !tmp_1152_fu_34588_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w113_cast_cast_reg_47477.read()) + sc_biguint<11>(tmp_1152_fu_34588_p2.read()));
}

void ShuffleNetV2::thread_tmp_1154_fu_34615_p2() {
    tmp_1154_fu_34615_p2 = (!tmp_2577_fu_34610_p2.read().is_01() || !tmp_1153_reg_47516.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_2577_fu_34610_p2.read()) - sc_biguint<11>(tmp_1153_reg_47516.read()));
}

void ShuffleNetV2::thread_tmp_1155_fu_34620_p2() {
    tmp_1155_fu_34620_p2 = (!h112_cast_cast_reg_47495.read().is_01() || !tmp_1154_fu_34615_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h112_cast_cast_reg_47495.read()) + sc_biguint<11>(tmp_1154_fu_34615_p2.read()));
}

void ShuffleNetV2::thread_tmp_1156_cast_fu_23259_p1() {
    tmp_1156_cast_fu_23259_p1 = esl_zext<32,10>(tmp_861_reg_43927.read());
}

void ShuffleNetV2::thread_tmp_1156_fu_34628_p3() {
    tmp_1156_fu_34628_p3 = esl_concat<10,2>(sum39_reg_47522.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1157_fu_34639_p2() {
    tmp_1157_fu_34639_p2 = (!p_shl577_cast_fu_34635_p1.read().is_01() || !sum39_cast_cast_fu_34625_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl577_cast_fu_34635_p1.read()) - sc_biguint<13>(sum39_cast_cast_fu_34625_p1.read()));
}

void ShuffleNetV2::thread_tmp_1158_cast_fu_23214_p1() {
    tmp_1158_cast_fu_23214_p1 = esl_sext<13,12>(tmp_863_fu_23208_p2.read());
}

void ShuffleNetV2::thread_tmp_1158_fu_34645_p2() {
    tmp_1158_fu_34645_p2 = (!w113_cast_cast1_reg_47472.read().is_01() || !tmp_1157_fu_34639_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w113_cast_cast1_reg_47472.read()) + sc_biguint<13>(tmp_1157_fu_34639_p2.read()));
}

void ShuffleNetV2::thread_tmp_1159_cast_fu_23223_p1() {
    tmp_1159_cast_fu_23223_p1 = esl_sext<32,13>(tmp_864_reg_43932.read());
}

void ShuffleNetV2::thread_tmp_1159_fu_34664_p2() {
    tmp_1159_fu_34664_p2 = (!p_shl267_fu_34660_p1.read().is_01() || !tmp_1717_cast_fu_34650_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl267_fu_34660_p1.read()) - sc_bigint<32>(tmp_1717_cast_fu_34650_p1.read()));
}

void ShuffleNetV2::thread_tmp_1160_fu_34670_p2() {
    tmp_1160_fu_34670_p2 = (!h112_cast_reg_47490.read().is_01() || !tmp_1159_fu_34664_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h112_cast_reg_47490.read()) + sc_biguint<32>(tmp_1159_fu_34664_p2.read()));
}

void ShuffleNetV2::thread_tmp_1161_fu_35218_p3() {
    tmp_1161_fu_35218_p3 = esl_concat<7,3>(co156_reg_12935.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1162_fu_35230_p3() {
    tmp_1162_fu_35230_p3 = esl_concat<7,1>(co156_reg_12935.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1163_fu_35242_p2() {
    tmp_1163_fu_35242_p2 = (!p_shl579_cast_fu_35226_p1.read().is_01() || !p_shl580_cast_fu_35238_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl579_cast_fu_35226_p1.read()) - sc_biguint<11>(p_shl580_cast_fu_35238_p1.read()));
}

void ShuffleNetV2::thread_tmp_1164_fu_35274_p3() {
    tmp_1164_fu_35274_p3 = esl_concat<8,3>(tmp_394_fu_35268_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1165_fu_35286_p3() {
    tmp_1165_fu_35286_p3 = esl_concat<8,1>(tmp_394_fu_35268_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1166_fu_35298_p2() {
    tmp_1166_fu_35298_p2 = (!p_shl581_cast_fu_35282_p1.read().is_01() || !p_shl582_cast_fu_35294_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl581_cast_fu_35282_p1.read()) - sc_biguint<12>(p_shl582_cast_fu_35294_p1.read()));
}

void ShuffleNetV2::thread_tmp_1167_fu_34984_p3() {
    tmp_1167_fu_34984_p3 = esl_concat<12,5>(sum80_reg_47642.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1168_fu_34995_p3() {
    tmp_1168_fu_34995_p3 = esl_concat<12,3>(sum80_reg_47642.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1169_fu_35006_p2() {
    tmp_1169_fu_35006_p2 = (!p_shl583_cast_fu_34991_p1.read().is_01() || !p_shl584_cast_fu_35002_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl583_cast_fu_34991_p1.read()) - sc_biguint<18>(p_shl584_cast_fu_35002_p1.read()));
}

void ShuffleNetV2::thread_tmp_1170_fu_35016_p2() {
    tmp_1170_fu_35016_p2 = (!ci76_cast1_cast_reg_47610.read().is_01() || !tmp_1734_cast_fu_35012_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci76_cast1_cast_reg_47610.read()) + sc_bigint<19>(tmp_1734_cast_fu_35012_p1.read()));
}

void ShuffleNetV2::thread_tmp_1171_fu_35072_p2() {
    tmp_1171_fu_35072_p2 = (!p_shl585_cast_fu_35058_p3.read().is_01() || !p_shl586_cast_fu_35065_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl585_cast_fu_35058_p3.read()) - sc_biguint<10>(p_shl586_cast_fu_35065_p3.read()));
}

void ShuffleNetV2::thread_tmp_1172_fu_35078_p2() {
    tmp_1172_fu_35078_p2 = (!tmp_463_cast_cast_reg_47623.read().is_01() || !tmp_1171_fu_35072_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_463_cast_cast_reg_47623.read()) + sc_biguint<10>(tmp_1171_fu_35072_p2.read()));
}

void ShuffleNetV2::thread_tmp_1173_fu_35328_p2() {
    tmp_1173_fu_35328_p2 = (!h_115_cast_cast_fu_35324_p1.read().is_01() || !tmp_1726_cast_reg_47727.read().is_01())? sc_lv<13>(): (sc_biguint<13>(h_115_cast_cast_fu_35324_p1.read()) + sc_bigint<13>(tmp_1726_cast_reg_47727.read()));
}

void ShuffleNetV2::thread_tmp_1174_cast_fu_23601_p1() {
    tmp_1174_cast_fu_23601_p1 = esl_sext<17,16>(tmp_872_fu_23595_p2.read());
}

void ShuffleNetV2::thread_tmp_1174_fu_35353_p2() {
    tmp_1174_fu_35353_p2 = (!p_shl587_cast_fu_35337_p3.read().is_01() || !p_shl588_cast_fu_35345_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl587_cast_fu_35337_p3.read()) - sc_biguint<14>(p_shl588_cast_fu_35345_p3.read()));
}

void ShuffleNetV2::thread_tmp_1175_cast_fu_23610_p1() {
    tmp_1175_cast_fu_23610_p1 = esl_sext<32,17>(tmp_873_fu_23605_p2.read());
}

void ShuffleNetV2::thread_tmp_1175_fu_35359_p2() {
    tmp_1175_fu_35359_p2 = (!h_115_cast_cast1_fu_35320_p1.read().is_01() || !tmp_1723_cast_reg_47714.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h_115_cast_cast1_fu_35320_p1.read()) + sc_bigint<12>(tmp_1723_cast_reg_47714.read()));
}

void ShuffleNetV2::thread_tmp_1176_fu_35384_p2() {
    tmp_1176_fu_35384_p2 = (!p_shl589_cast_fu_35368_p3.read().is_01() || !p_shl590_cast_fu_35376_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl589_cast_fu_35368_p3.read()) - sc_biguint<13>(p_shl590_cast_fu_35376_p3.read()));
}

void ShuffleNetV2::thread_tmp_1177_fu_35410_p2() {
    tmp_1177_fu_35410_p2 = (!tmp_1174_reg_47740.read().is_01() || !w_116_cast_cast_fu_35406_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1174_reg_47740.read()) + sc_biguint<14>(w_116_cast_cast_fu_35406_p1.read()));
}

void ShuffleNetV2::thread_tmp_1178_fu_35420_p2() {
    tmp_1178_fu_35420_p2 = (!tmp_1176_reg_47745.read().is_01() || !w_116_cast_cast1_fu_35402_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1176_reg_47745.read()) + sc_biguint<13>(w_116_cast_cast1_fu_35402_p1.read()));
}

void ShuffleNetV2::thread_tmp_1179_fu_35619_p3() {
    tmp_1179_fu_35619_p3 = esl_concat<12,5>(sum82_reg_47823.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1180_fu_35630_p3() {
    tmp_1180_fu_35630_p3 = esl_concat<12,3>(sum82_reg_47823.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1181_cast_fu_23676_p1() {
    tmp_1181_cast_fu_23676_p1 = esl_sext<32,8>(tmp_875_reg_44063.read());
}

void ShuffleNetV2::thread_tmp_1181_fu_35641_p2() {
    tmp_1181_fu_35641_p2 = (!p_shl591_cast_fu_35626_p1.read().is_01() || !p_shl592_cast_fu_35637_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl591_cast_fu_35626_p1.read()) - sc_biguint<18>(p_shl592_cast_fu_35637_p1.read()));
}

void ShuffleNetV2::thread_tmp_1182_fu_35651_p2() {
    tmp_1182_fu_35651_p2 = (!ci78_cast1_cast_reg_47791.read().is_01() || !tmp_1761_cast_fu_35647_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ci78_cast1_cast_reg_47791.read()) + sc_bigint<19>(tmp_1761_cast_fu_35647_p1.read()));
}

void ShuffleNetV2::thread_tmp_1183_fu_35707_p2() {
    tmp_1183_fu_35707_p2 = (!p_shl593_cast_fu_35693_p3.read().is_01() || !p_shl594_cast_fu_35700_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl593_cast_fu_35693_p3.read()) - sc_biguint<10>(p_shl594_cast_fu_35700_p3.read()));
}

void ShuffleNetV2::thread_tmp_1184_fu_35713_p2() {
    tmp_1184_fu_35713_p2 = (!tmp_475_cast_cast_reg_47804.read().is_01() || !tmp_1183_fu_35707_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_475_cast_cast_reg_47804.read()) + sc_biguint<10>(tmp_1183_fu_35707_p2.read()));
}

void ShuffleNetV2::thread_tmp_1185_fu_35972_p3() {
    tmp_1185_fu_35972_p3 = esl_concat<8,2>(tmp_412_fu_35963_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1186_fu_35984_p2() {
    tmp_1186_fu_35984_p2 = (!p_shl595_cast_fu_35980_p1.read().is_01() || !tmp_487_cast_cast_fu_35968_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl595_cast_fu_35980_p1.read()) - sc_bigint<11>(tmp_487_cast_cast_fu_35968_p1.read()));
}

void ShuffleNetV2::thread_tmp_1187_fu_35990_p2() {
    tmp_1187_fu_35990_p2 = (!w117_cast_cast_reg_47918.read().is_01() || !tmp_1186_fu_35984_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w117_cast_cast_reg_47918.read()) + sc_biguint<11>(tmp_1186_fu_35984_p2.read()));
}

void ShuffleNetV2::thread_tmp_1188_fu_36011_p2() {
    tmp_1188_fu_36011_p2 = (!tmp_2601_fu_36006_p2.read().is_01() || !tmp_1187_reg_47957.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_2601_fu_36006_p2.read()) - sc_biguint<11>(tmp_1187_reg_47957.read()));
}

void ShuffleNetV2::thread_tmp_1189_fu_36016_p2() {
    tmp_1189_fu_36016_p2 = (!h116_cast_cast_reg_47936.read().is_01() || !tmp_1188_fu_36011_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h116_cast_cast_reg_47936.read()) + sc_biguint<11>(tmp_1188_fu_36011_p2.read()));
}

void ShuffleNetV2::thread_tmp_1190_fu_36024_p3() {
    tmp_1190_fu_36024_p3 = esl_concat<10,2>(sum41_reg_47963.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1191_fu_36035_p2() {
    tmp_1191_fu_36035_p2 = (!p_shl597_cast_fu_36031_p1.read().is_01() || !sum41_cast_cast_fu_36021_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl597_cast_fu_36031_p1.read()) - sc_biguint<13>(sum41_cast_cast_fu_36021_p1.read()));
}

void ShuffleNetV2::thread_tmp_1192_fu_36041_p2() {
    tmp_1192_fu_36041_p2 = (!w117_cast_cast1_reg_47913.read().is_01() || !tmp_1191_fu_36035_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w117_cast_cast1_reg_47913.read()) + sc_biguint<13>(tmp_1191_fu_36035_p2.read()));
}

void ShuffleNetV2::thread_tmp_1193_fu_36060_p2() {
    tmp_1193_fu_36060_p2 = (!p_shl273_fu_36056_p1.read().is_01() || !tmp_1783_cast_fu_36046_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl273_fu_36056_p1.read()) - sc_bigint<32>(tmp_1783_cast_fu_36046_p1.read()));
}

void ShuffleNetV2::thread_tmp_1194_fu_36066_p2() {
    tmp_1194_fu_36066_p2 = (!h116_cast_reg_47931.read().is_01() || !tmp_1193_fu_36060_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h116_cast_reg_47931.read()) + sc_biguint<32>(tmp_1193_fu_36060_p2.read()));
}

void ShuffleNetV2::thread_tmp_1195_fu_36622_p3() {
    tmp_1195_fu_36622_p3 = esl_concat<7,3>(co164_reg_13144.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1196_fu_36634_p3() {
    tmp_1196_fu_36634_p3 = esl_concat<7,1>(co164_reg_13144.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1197_fu_36646_p2() {
    tmp_1197_fu_36646_p2 = (!p_shl599_cast_fu_36630_p1.read().is_01() || !p_shl600_cast_fu_36642_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl599_cast_fu_36630_p1.read()) - sc_biguint<11>(p_shl600_cast_fu_36642_p1.read()));
}

void ShuffleNetV2::thread_tmp_1198_fu_36380_p3() {
    tmp_1198_fu_36380_p3 = esl_concat<11,5>(sum85_reg_48083.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1199_fu_36387_p1() {
    tmp_1199_fu_36387_p1 = esl_sext<17,16>(tmp_1198_fu_36380_p3.read());
}

void ShuffleNetV2::thread_tmp_1200_fu_36395_p3() {
    tmp_1200_fu_36395_p3 = esl_concat<11,3>(sum85_reg_48083.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1201_fu_36402_p1() {
    tmp_1201_fu_36402_p1 = esl_sext<15,14>(tmp_1200_fu_36395_p3.read());
}

void ShuffleNetV2::thread_tmp_1202_cast_fu_23925_p1() {
    tmp_1202_cast_fu_23925_p1 = esl_zext<32,15>(tmp_888_fu_23920_p2.read());
}

void ShuffleNetV2::thread_tmp_1202_fu_36410_p2() {
    tmp_1202_fu_36410_p2 = (!p_shl601_cast_fu_36391_p1.read().is_01() || !p_shl602_cast_fu_36406_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl601_cast_fu_36391_p1.read()) - sc_biguint<18>(p_shl602_cast_fu_36406_p1.read()));
}

void ShuffleNetV2::thread_tmp_1203_cast_fu_24127_p1() {
    tmp_1203_cast_fu_24127_p1 = esl_zext<32,15>(tmp_889_fu_24122_p2.read());
}

void ShuffleNetV2::thread_tmp_1203_fu_36420_p2() {
    tmp_1203_fu_36420_p2 = (!tmp_1799_cast_fu_36416_p1.read().is_01() || !ci80_cast1_cast_reg_48051.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp_1799_cast_fu_36416_p1.read()) + sc_biguint<19>(ci80_cast1_cast_reg_48051.read()));
}

void ShuffleNetV2::thread_tmp_1204_cast_fu_24137_p1() {
    tmp_1204_cast_fu_24137_p1 = esl_zext<32,14>(tmp_890_reg_44206.read());
}

void ShuffleNetV2::thread_tmp_1204_fu_36476_p2() {
    tmp_1204_fu_36476_p2 = (!p_shl603_cast_fu_36462_p3.read().is_01() || !p_shl604_cast_fu_36469_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl603_cast_fu_36462_p3.read()) - sc_biguint<10>(p_shl604_cast_fu_36469_p3.read()));
}

void ShuffleNetV2::thread_tmp_1205_fu_36482_p2() {
    tmp_1205_fu_36482_p2 = (!tmp_1204_fu_36476_p2.read().is_01() || !tmp_492_cast_cast_reg_48064.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1204_fu_36476_p2.read()) + sc_bigint<10>(tmp_492_cast_cast_reg_48064.read()));
}

void ShuffleNetV2::thread_tmp_1206_fu_36745_p3() {
    tmp_1206_fu_36745_p3 = esl_concat<7,3>(co166_reg_13177.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1207_fu_36757_p3() {
    tmp_1207_fu_36757_p3 = esl_concat<7,1>(co166_reg_13177.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1208_fu_36769_p2() {
    tmp_1208_fu_36769_p2 = (!p_shl605_cast_fu_36753_p1.read().is_01() || !p_shl606_cast_fu_36765_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl605_cast_fu_36753_p1.read()) - sc_biguint<11>(p_shl606_cast_fu_36765_p1.read()));
}

void ShuffleNetV2::thread_tmp_1209_fu_36801_p3() {
    tmp_1209_fu_36801_p3 = esl_concat<8,3>(tmp_418_fu_36795_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1210_fu_36813_p3() {
    tmp_1210_fu_36813_p3 = esl_concat<8,1>(tmp_418_fu_36795_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1211_fu_36825_p2() {
    tmp_1211_fu_36825_p2 = (!p_shl607_cast_fu_36809_p1.read().is_01() || !p_shl608_cast_fu_36821_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl607_cast_fu_36809_p1.read()) - sc_biguint<12>(p_shl608_cast_fu_36821_p1.read()));
}

void ShuffleNetV2::thread_tmp_1212_fu_36684_p2() {
    tmp_1212_fu_36684_p2 = (!tmp_1789_cast_reg_48155.read().is_01() || !h_119_cast_cast_fu_36680_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_1789_cast_reg_48155.read()) + sc_biguint<12>(h_119_cast_cast_fu_36680_p1.read()));
}

void ShuffleNetV2::thread_tmp_1213_fu_36713_p2() {
    tmp_1213_fu_36713_p2 = (!p_shl609_cast_fu_36693_p3.read().is_01() || !p_shl610_cast_fu_36709_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl609_cast_fu_36693_p3.read()) - sc_bigint<14>(p_shl610_cast_fu_36709_p1.read()));
}

void ShuffleNetV2::thread_tmp_1214_fu_36855_p2() {
    tmp_1214_fu_36855_p2 = (!h_121_cast_cast_fu_36851_p1.read().is_01() || !tmp_1812_cast_reg_48212.read().is_01())? sc_lv<13>(): (sc_biguint<13>(h_121_cast_cast_fu_36851_p1.read()) + sc_bigint<13>(tmp_1812_cast_reg_48212.read()));
}

void ShuffleNetV2::thread_tmp_1215_cast_fu_24379_p1() {
    tmp_1215_cast_fu_24379_p1 = esl_sext<17,16>(tmp_895_fu_24373_p2.read());
}

void ShuffleNetV2::thread_tmp_1215_fu_36880_p2() {
    tmp_1215_fu_36880_p2 = (!p_shl611_cast_fu_36864_p3.read().is_01() || !p_shl612_cast_fu_36872_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl611_cast_fu_36864_p3.read()) - sc_biguint<14>(p_shl612_cast_fu_36872_p3.read()));
}

void ShuffleNetV2::thread_tmp_1216_cast_fu_24388_p1() {
    tmp_1216_cast_fu_24388_p1 = esl_sext<32,17>(tmp_896_fu_24383_p2.read());
}

void ShuffleNetV2::thread_tmp_1216_fu_36886_p2() {
    tmp_1216_fu_36886_p2 = (!h_121_cast_cast1_fu_36847_p1.read().is_01() || !tmp_1809_cast_reg_48199.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h_121_cast_cast1_fu_36847_p1.read()) + sc_bigint<12>(tmp_1809_cast_reg_48199.read()));
}

void ShuffleNetV2::thread_tmp_1217_fu_36911_p2() {
    tmp_1217_fu_36911_p2 = (!p_shl613_cast_fu_36895_p3.read().is_01() || !p_shl614_cast_fu_36903_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl613_cast_fu_36895_p3.read()) - sc_biguint<13>(p_shl614_cast_fu_36903_p3.read()));
}

void ShuffleNetV2::thread_tmp_1218_fu_36735_p2() {
    tmp_1218_fu_36735_p2 = (!tmp_1213_reg_48176.read().is_01() || !w_120_cast_cast_fu_36731_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1213_reg_48176.read()) + sc_biguint<14>(w_120_cast_cast_fu_36731_p1.read()));
}

void ShuffleNetV2::thread_tmp_1219_fu_36937_p2() {
    tmp_1219_fu_36937_p2 = (!tmp_1215_reg_48225.read().is_01() || !w_122_cast_cast_fu_36933_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1215_reg_48225.read()) + sc_biguint<14>(w_122_cast_cast_fu_36933_p1.read()));
}

void ShuffleNetV2::thread_tmp_1220_fu_36947_p2() {
    tmp_1220_fu_36947_p2 = (!tmp_1217_reg_48230.read().is_01() || !w_122_cast_cast1_fu_36929_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1217_reg_48230.read()) + sc_biguint<13>(w_122_cast_cast1_fu_36929_p1.read()));
}

void ShuffleNetV2::thread_tmp_1221_fu_37146_p3() {
    tmp_1221_fu_37146_p3 = esl_concat<13,5>(sum87_reg_48308.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1222_cast_fu_24454_p1() {
    tmp_1222_cast_fu_24454_p1 = esl_sext<32,8>(tmp_898_reg_44288.read());
}

void ShuffleNetV2::thread_tmp_1222_fu_37157_p3() {
    tmp_1222_fu_37157_p3 = esl_concat<13,3>(sum87_reg_48308.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1223_fu_37168_p2() {
    tmp_1223_fu_37168_p2 = (!p_shl615_cast_fu_37153_p1.read().is_01() || !p_shl616_cast_fu_37164_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl615_cast_fu_37153_p1.read()) - sc_biguint<19>(p_shl616_cast_fu_37164_p1.read()));
}

void ShuffleNetV2::thread_tmp_1224_fu_37178_p2() {
    tmp_1224_fu_37178_p2 = (!ci82_cast1_cast_reg_48276.read().is_01() || !tmp_1837_cast_fu_37174_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci82_cast1_cast_reg_48276.read()) + sc_bigint<20>(tmp_1837_cast_fu_37174_p1.read()));
}

void ShuffleNetV2::thread_tmp_1225_fu_37234_p2() {
    tmp_1225_fu_37234_p2 = (!p_shl617_cast_fu_37220_p3.read().is_01() || !p_shl618_cast_fu_37227_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl617_cast_fu_37220_p3.read()) - sc_biguint<10>(p_shl618_cast_fu_37227_p3.read()));
}

void ShuffleNetV2::thread_tmp_1226_fu_37240_p2() {
    tmp_1226_fu_37240_p2 = (!tmp_504_cast_cast_reg_48289.read().is_01() || !tmp_1225_fu_37234_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_504_cast_cast_reg_48289.read()) + sc_biguint<10>(tmp_1225_fu_37234_p2.read()));
}

void ShuffleNetV2::thread_tmp_1227_fu_37499_p3() {
    tmp_1227_fu_37499_p3 = esl_concat<8,2>(tmp_431_fu_37490_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1228_fu_37511_p2() {
    tmp_1228_fu_37511_p2 = (!p_shl619_cast_fu_37507_p1.read().is_01() || !tmp_516_cast_cast_fu_37495_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(p_shl619_cast_fu_37507_p1.read()) - sc_bigint<11>(tmp_516_cast_cast_fu_37495_p1.read()));
}

void ShuffleNetV2::thread_tmp_1229_fu_37517_p2() {
    tmp_1229_fu_37517_p2 = (!tmp_1228_fu_37511_p2.read().is_01() || !w123_cast_cast_reg_48403.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1228_fu_37511_p2.read()) + sc_biguint<11>(w123_cast_cast_reg_48403.read()));
}

void ShuffleNetV2::thread_tmp_1230_fu_37538_p2() {
    tmp_1230_fu_37538_p2 = (!tmp_2627_fu_37533_p2.read().is_01() || !tmp_1229_reg_48442.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_2627_fu_37533_p2.read()) - sc_biguint<11>(tmp_1229_reg_48442.read()));
}

void ShuffleNetV2::thread_tmp_1231_fu_37543_p2() {
    tmp_1231_fu_37543_p2 = (!tmp_1230_fu_37538_p2.read().is_01() || !h122_cast_cast_reg_48421.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_1230_fu_37538_p2.read()) + sc_biguint<11>(h122_cast_cast_reg_48421.read()));
}

void ShuffleNetV2::thread_tmp_1232_fu_37555_p3() {
    tmp_1232_fu_37555_p3 = esl_concat<9,2>(sum43_reg_48448.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_1233_fu_37562_p1() {
    tmp_1233_fu_37562_p1 = esl_sext<12,11>(tmp_1232_fu_37555_p3.read());
}

void ShuffleNetV2::thread_tmp_1234_cast_fu_24818_p1() {
    tmp_1234_cast_fu_24818_p1 = esl_zext<32,10>(tmp_903_reg_44412.read());
}

void ShuffleNetV2::thread_tmp_1234_fu_37570_p2() {
    tmp_1234_fu_37570_p2 = (!p_shl621_cast_fu_37566_p1.read().is_01() || !sum43_cast_cast_fu_37551_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl621_cast_fu_37566_p1.read()) - sc_biguint<13>(sum43_cast_cast_fu_37551_p1.read()));
}

void ShuffleNetV2::thread_tmp_1235_fu_37580_p2() {
    tmp_1235_fu_37580_p2 = (!tmp_1859_cast_fu_37576_p1.read().is_01() || !w123_cast_cast1_reg_48398.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp_1859_cast_fu_37576_p1.read()) + sc_biguint<14>(w123_cast_cast1_reg_48398.read()));
}

void ShuffleNetV2::thread_tmp_1236_fu_37599_p2() {
    tmp_1236_fu_37599_p2 = (!p_shl275_fu_37595_p1.read().is_01() || !tmp_1860_cast_fu_37585_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl275_fu_37595_p1.read()) - sc_bigint<32>(tmp_1860_cast_fu_37585_p1.read()));
}

void ShuffleNetV2::thread_tmp_1237_cast_fu_24782_p1() {
    tmp_1237_cast_fu_24782_p1 = esl_sext<32,12>(tmp_906_reg_44417.read());
}

void ShuffleNetV2::thread_tmp_1237_fu_37605_p2() {
    tmp_1237_fu_37605_p2 = (!tmp_1236_fu_37599_p2.read().is_01() || !h122_cast_reg_48416.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1236_fu_37599_p2.read()) + sc_biguint<32>(h122_cast_reg_48416.read()));
}

void ShuffleNetV2::thread_tmp_1238_fu_38153_p3() {
    tmp_1238_fu_38153_p3 = esl_concat<7,3>(co174_reg_13386.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1239_fu_38165_p3() {
    tmp_1239_fu_38165_p3 = esl_concat<7,1>(co174_reg_13386.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_1240_fu_38177_p2() {
    tmp_1240_fu_38177_p2 = (!p_shl623_cast_fu_38161_p1.read().is_01() || !p_shl624_cast_fu_38173_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl623_cast_fu_38161_p1.read()) - sc_biguint<11>(p_shl624_cast_fu_38173_p1.read()));
}

void ShuffleNetV2::thread_tmp_1241_fu_37919_p3() {
    tmp_1241_fu_37919_p3 = esl_concat<13,5>(sum90_reg_48568.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_1242_fu_37930_p3() {
    tmp_1242_fu_37930_p3 = esl_concat<13,3>(sum90_reg_48568.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_1243_fu_37941_p2() {
    tmp_1243_fu_37941_p2 = (!p_shl625_cast_fu_37926_p1.read().is_01() || !p_shl626_cast_fu_37937_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(p_shl625_cast_fu_37926_p1.read()) - sc_biguint<19>(p_shl626_cast_fu_37937_p1.read()));
}

void ShuffleNetV2::thread_tmp_1244_fu_37951_p2() {
    tmp_1244_fu_37951_p2 = (!ci84_cast1_cast_reg_48536.read().is_01() || !tmp_1874_cast_fu_37947_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ci84_cast1_cast_reg_48536.read()) + sc_bigint<20>(tmp_1874_cast_fu_37947_p1.read()));
}

void ShuffleNetV2::thread_tmp_1245_fu_38007_p2() {
    tmp_1245_fu_38007_p2 = (!p_shl627_cast_fu_37993_p3.read().is_01() || !p_shl628_cast_fu_38000_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl627_cast_fu_37993_p3.read()) - sc_biguint<10>(p_shl628_cast_fu_38000_p3.read()));
}

void ShuffleNetV2::thread_tmp_1246_fu_38013_p2() {
    tmp_1246_fu_38013_p2 = (!tmp_521_cast_cast_reg_48549.read().is_01() || !tmp_1245_fu_38007_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_521_cast_cast_reg_48549.read()) + sc_biguint<10>(tmp_1245_fu_38007_p2.read()));
}

void ShuffleNetV2::thread_tmp_1247_fu_38276_p3() {
    tmp_1247_fu_38276_p3 = esl_concat<7,3>(co176_reg_13419.read(), ap_const_lv3_0);
}

}

