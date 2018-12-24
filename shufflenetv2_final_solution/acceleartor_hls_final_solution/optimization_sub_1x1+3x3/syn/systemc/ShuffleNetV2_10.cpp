#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_39_cast_fu_29192_p1() {
    tmp_39_cast_fu_29192_p1 = esl_sext<9,8>(tmp_39_fu_29186_p2.read());
}

void ShuffleNetV2::thread_tmp_39_fu_29186_p2() {
    tmp_39_fu_29186_p2 = (!p_shl6_cast_fu_29170_p1.read().is_01() || !p_shl7_cast_fu_29182_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl6_cast_fu_29170_p1.read()) - sc_biguint<8>(p_shl7_cast_fu_29182_p1.read()));
}

void ShuffleNetV2::thread_tmp_400_cast_fu_46949_p1() {
    tmp_400_cast_fu_46949_p1 = esl_sext<12,8>(tmp_261_fu_46943_p2.read());
}

void ShuffleNetV2::thread_tmp_401_cast_fu_46983_p1() {
    tmp_401_cast_fu_46983_p1 = esl_sext<32,8>(tmp_262_reg_64548.read());
}

void ShuffleNetV2::thread_tmp_406_cast_cast_fu_46744_p1() {
    tmp_406_cast_cast_fu_46744_p1 = esl_sext<9,8>(tmp_264_fu_46738_p2.read());
}

void ShuffleNetV2::thread_tmp_407_cast_cast_fu_46753_p1() {
    tmp_407_cast_cast_fu_46753_p1 = esl_sext<11,8>(tmp_265_fu_46748_p2.read());
}

void ShuffleNetV2::thread_tmp_409_cast_fu_47374_p1() {
    tmp_409_cast_fu_47374_p1 = esl_sext<12,8>(tmp_266_fu_47368_p2.read());
}

void ShuffleNetV2::thread_tmp_410_cast_fu_47408_p1() {
    tmp_410_cast_fu_47408_p1 = esl_sext<32,8>(tmp_267_reg_65130.read());
}

void ShuffleNetV2::thread_tmp_412_cast_fu_47074_p1() {
    tmp_412_cast_fu_47074_p1 = esl_sext<32,8>(tmp_263_fu_47069_p2.read());
}

void ShuffleNetV2::thread_tmp_416_cast_fu_47236_p1() {
    tmp_416_cast_fu_47236_p1 = esl_sext<13,10>(tmp_269_fu_47230_p2.read());
}

void ShuffleNetV2::thread_tmp_419_t_fu_40743_p2() {
    tmp_419_t_fu_40743_p2 = (!tmp_184_fu_40692_p2.read().is_01() || !tmp_267_cast_reg_59105.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_184_fu_40692_p2.read()) + sc_biguint<6>(tmp_267_cast_reg_59105.read()));
}

void ShuffleNetV2::thread_tmp_41_cast_cast_fu_29671_p1() {
    tmp_41_cast_cast_fu_29671_p1 = esl_sext<8,7>(tmp_41_fu_29665_p2.read());
}

void ShuffleNetV2::thread_tmp_41_fu_29665_p2() {
    tmp_41_fu_29665_p2 = (!p_shl8_cast_fu_29649_p1.read().is_01() || !p_shl9_cast_fu_29661_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_cast_fu_29649_p1.read()) - sc_biguint<7>(p_shl9_cast_fu_29661_p1.read()));
}

void ShuffleNetV2::thread_tmp_422_cast_fu_48133_p1() {
    tmp_422_cast_fu_48133_p1 = esl_sext<12,8>(tmp_274_fu_48127_p2.read());
}

void ShuffleNetV2::thread_tmp_423_cast_fu_48167_p1() {
    tmp_423_cast_fu_48167_p1 = esl_sext<32,8>(tmp_275_reg_65810.read());
}

void ShuffleNetV2::thread_tmp_425_cast_fu_47833_p1() {
    tmp_425_cast_fu_47833_p1 = esl_sext<32,8>(tmp_273_fu_47828_p2.read());
}

void ShuffleNetV2::thread_tmp_429_cast_fu_47995_p1() {
    tmp_429_cast_fu_47995_p1 = esl_sext<13,10>(tmp_277_fu_47989_p2.read());
}

void ShuffleNetV2::thread_tmp_42_cast_fu_29709_p1() {
    tmp_42_cast_fu_29709_p1 = esl_sext<32,7>(tmp_42_reg_52235.read());
}

void ShuffleNetV2::thread_tmp_42_fu_29675_p2() {
    tmp_42_fu_29675_p2 = (!tmp_41_fu_29665_p2.read().is_01() || !i39_cast_reg_52214.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_41_fu_29665_p2.read()) + sc_biguint<7>(i39_cast_reg_52214.read()));
}

void ShuffleNetV2::thread_tmp_431_cast_fu_48474_p1() {
    tmp_431_cast_fu_48474_p1 = esl_sext<12,8>(tmp_280_fu_48468_p2.read());
}

void ShuffleNetV2::thread_tmp_432_cast_fu_48508_p1() {
    tmp_432_cast_fu_48508_p1 = esl_sext<32,8>(tmp_281_reg_65943.read());
}

void ShuffleNetV2::thread_tmp_433_t_fu_41474_p2() {
    tmp_433_t_fu_41474_p2 = (!tmp_191_fu_41423_p2.read().is_01() || !tmp_282_cast_reg_59545.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_191_fu_41423_p2.read()) + sc_biguint<6>(tmp_282_cast_reg_59545.read()));
}

void ShuffleNetV2::thread_tmp_437_cast_fu_48277_p1() {
    tmp_437_cast_fu_48277_p1 = esl_sext<11,8>(tmp_283_fu_48271_p2.read());
}

void ShuffleNetV2::thread_tmp_438_cast_cast_fu_48286_p1() {
    tmp_438_cast_cast_fu_48286_p1 = esl_sext<11,8>(tmp_284_fu_48281_p2.read());
}

void ShuffleNetV2::thread_tmp_440_cast_fu_48899_p1() {
    tmp_440_cast_fu_48899_p1 = esl_sext<12,8>(tmp_285_fu_48893_p2.read());
}

void ShuffleNetV2::thread_tmp_441_cast_fu_48933_p1() {
    tmp_441_cast_fu_48933_p1 = esl_sext<32,8>(tmp_286_reg_66525.read());
}

void ShuffleNetV2::thread_tmp_443_cast_fu_48599_p1() {
    tmp_443_cast_fu_48599_p1 = esl_sext<32,8>(tmp_282_fu_48594_p2.read());
}

void ShuffleNetV2::thread_tmp_447_cast_fu_48761_p1() {
    tmp_447_cast_fu_48761_p1 = esl_sext<13,10>(tmp_288_fu_48755_p2.read());
}

void ShuffleNetV2::thread_tmp_454_t_fu_42224_p2() {
    tmp_454_t_fu_42224_p2 = (!tmp_296_cast_reg_60020.read().is_01() || !tmp_201_fu_42165_p2.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_296_cast_reg_60020.read()) + sc_biguint<6>(tmp_201_fu_42165_p2.read()));
}

void ShuffleNetV2::thread_tmp_45_fu_29757_p2() {
    tmp_45_fu_29757_p2 = (!p_shl10_cast_fu_29741_p1.read().is_01() || !p_shl11_cast_fu_29753_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_cast_fu_29741_p1.read()) - sc_biguint<7>(p_shl11_cast_fu_29753_p1.read()));
}

void ShuffleNetV2::thread_tmp_467_t_fu_42772_p2() {
    tmp_467_t_fu_42772_p2 = (!tmp_208_fu_42733_p2.read().is_01() || !tmp_204_reg_60406.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_208_fu_42733_p2.read()) + sc_biguint<7>(tmp_204_reg_60406.read()));
}

void ShuffleNetV2::thread_tmp_46_cast_fu_29474_p1() {
    tmp_46_cast_fu_29474_p1 = esl_sext<8,7>(tmp_46_fu_29468_p2.read());
}

void ShuffleNetV2::thread_tmp_46_fu_29468_p2() {
    tmp_46_fu_29468_p2 = (!p_shl12_cast_fu_29452_p1.read().is_01() || !p_shl13_cast_fu_29464_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl12_cast_fu_29452_p1.read()) - sc_biguint<7>(p_shl13_cast_fu_29464_p1.read()));
}

void ShuffleNetV2::thread_tmp_47_cast_cast_fu_29483_p1() {
    tmp_47_cast_cast_fu_29483_p1 = esl_sext<10,7>(tmp_47_fu_29478_p2.read());
}

void ShuffleNetV2::thread_tmp_47_fu_29478_p2() {
    tmp_47_fu_29478_p2 = (!co60_cast1_reg_52123.read().is_01() || !tmp_46_fu_29468_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co60_cast1_reg_52123.read()) + sc_biguint<7>(tmp_46_fu_29468_p2.read()));
}

void ShuffleNetV2::thread_tmp_488_t_fu_43542_p2() {
    tmp_488_t_fu_43542_p2 = (!tmp_219_fu_43503_p2.read().is_01() || !tmp_211_reg_61121.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_219_fu_43503_p2.read()) + sc_biguint<7>(tmp_211_reg_61121.read()));
}

void ShuffleNetV2::thread_tmp_489_fu_25696_p3() {
    tmp_489_fu_25696_p3 = esl_concat<2,1>(ci_reg_18027.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_490_fu_25708_p2() {
    tmp_490_fu_25708_p2 = (!p_shl276_cast_fu_25704_p1.read().is_01() || !tmp_641_cast_fu_25692_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl276_cast_fu_25704_p1.read()) + sc_biguint<8>(tmp_641_cast_fu_25692_p1.read()));
}

void ShuffleNetV2::thread_tmp_491_fu_25828_p3() {
    tmp_491_fu_25828_p3 = esl_concat<5,5>(co_reg_18060.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_492_fu_25840_p3() {
    tmp_492_fu_25840_p3 = esl_concat<5,3>(co_reg_18060.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_493_fu_25852_p2() {
    tmp_493_fu_25852_p2 = (!p_shl279_cast_fu_25836_p1.read().is_01() || !p_shl280_cast_fu_25848_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl279_cast_fu_25836_p1.read()) - sc_biguint<11>(p_shl280_cast_fu_25848_p1.read()));
}

void ShuffleNetV2::thread_tmp_494_fu_25730_p2() {
    tmp_494_fu_25730_p2 = (!w_cast_cast_fu_25726_p1.read().is_01() || !tmp_641_cast_reg_49632.read().is_01())? sc_lv<8>(): (sc_biguint<8>(w_cast_cast_fu_25726_p1.read()) + sc_biguint<8>(tmp_641_cast_reg_49632.read()));
}

void ShuffleNetV2::thread_tmp_495_fu_25743_p1() {
    tmp_495_fu_25743_p1 = esl_zext<32,13>(tmp_537_fu_25735_p3.read());
}

void ShuffleNetV2::thread_tmp_496_fu_25763_p2() {
    tmp_496_fu_25763_p2 = (!w_44_cast_cast_fu_25759_p1.read().is_01() || !tmp_490_reg_49637.read().is_01())? sc_lv<8>(): (sc_biguint<8>(w_44_cast_cast_fu_25759_p1.read()) + sc_biguint<8>(tmp_490_reg_49637.read()));
}

void ShuffleNetV2::thread_tmp_497_fu_25797_p2() {
    tmp_497_fu_25797_p2 = (!p_shl277_cast_fu_25779_p3.read().is_01() || !p_shl278_cast_fu_25793_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl277_cast_fu_25779_p3.read()) + sc_biguint<13>(p_shl278_cast_fu_25793_p1.read()));
}

void ShuffleNetV2::thread_tmp_498_fu_25819_p2() {
    tmp_498_fu_25819_p2 = (!tmp_497_reg_49670.read().is_01() || !h_43_cast_cast_fu_25815_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_497_reg_49670.read()) + sc_biguint<13>(h_43_cast_cast_fu_25815_p1.read()));
}

void ShuffleNetV2::thread_tmp_499_fu_25956_p3() {
    tmp_499_fu_25956_p3 = esl_concat<5,2>(co5_reg_18094.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_49_cast_cast_fu_30064_p1() {
    tmp_49_cast_cast_fu_30064_p1 = esl_sext<8,7>(tmp_49_fu_30058_p2.read());
}

void ShuffleNetV2::thread_tmp_49_fu_30058_p2() {
    tmp_49_fu_30058_p2 = (!p_shl14_cast_fu_30042_p1.read().is_01() || !p_shl15_cast_fu_30054_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl14_cast_fu_30042_p1.read()) - sc_biguint<7>(p_shl15_cast_fu_30054_p1.read()));
}

void ShuffleNetV2::thread_tmp_500_fu_25968_p2() {
    tmp_500_fu_25968_p2 = (!p_shl281_cast_fu_25964_p1.read().is_01() || !co5_cast_cast_fu_25952_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl281_cast_fu_25964_p1.read()) - sc_biguint<8>(co5_cast_cast_fu_25952_p1.read()));
}

void ShuffleNetV2::thread_tmp_501_fu_26005_p2() {
    tmp_501_fu_26005_p2 = (!tmp_659_cast_reg_49854.read().is_01() || !w6_cast_cast_fu_26001_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_659_cast_reg_49854.read()) + sc_biguint<9>(w6_cast_cast_fu_26001_p1.read()));
}

void ShuffleNetV2::thread_tmp_502_fu_26026_p2() {
    tmp_502_fu_26026_p2 = (!p_shl193_fu_26022_p1.read().is_01() || !tmp_660_cast_fu_26010_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl193_fu_26022_p1.read()) - sc_bigint<32>(tmp_660_cast_fu_26010_p1.read()));
}

void ShuffleNetV2::thread_tmp_503_fu_26059_p2() {
    tmp_503_fu_26059_p2 = (!h7_cast_fu_26055_p1.read().is_01() || !tmp_502_reg_49873.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h7_cast_fu_26055_p1.read()) + sc_biguint<32>(tmp_502_reg_49873.read()));
}

void ShuffleNetV2::thread_tmp_504_fu_26115_p3() {
    tmp_504_fu_26115_p3 = esl_concat<6,5>(sum6_fu_26109_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_505_fu_26127_p3() {
    tmp_505_fu_26127_p3 = esl_concat<6,3>(sum6_fu_26109_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_506_fu_26139_p2() {
    tmp_506_fu_26139_p2 = (!p_shl283_cast_fu_26123_p1.read().is_01() || !p_shl284_cast_fu_26135_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl283_cast_fu_26123_p1.read()) - sc_biguint<12>(p_shl284_cast_fu_26135_p1.read()));
}

void ShuffleNetV2::thread_tmp_507_fu_26231_p3() {
    tmp_507_fu_26231_p3 = esl_concat<5,2>(co12_reg_18172.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_508_fu_26243_p2() {
    tmp_508_fu_26243_p2 = (!p_shl285_cast_fu_26239_p1.read().is_01() || !co12_cast1_cast_fu_26227_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl285_cast_fu_26239_p1.read()) - sc_biguint<8>(co12_cast1_cast_fu_26227_p1.read()));
}

void ShuffleNetV2::thread_tmp_509_fu_26279_p3() {
    tmp_509_fu_26279_p3 = esl_concat<6,2>(sum5_fu_26269_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_50_cast_fu_30102_p1() {
    tmp_50_cast_fu_30102_p1 = esl_sext<32,7>(tmp_50_reg_52577.read());
}

void ShuffleNetV2::thread_tmp_50_fu_30068_p2() {
    tmp_50_fu_30068_p2 = (!tmp_49_fu_30058_p2.read().is_01() || !i43_cast_reg_52556.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_49_fu_30058_p2.read()) + sc_biguint<7>(i43_cast_reg_52556.read()));
}

void ShuffleNetV2::thread_tmp_510_fu_26291_p2() {
    tmp_510_fu_26291_p2 = (!p_shl286_cast_fu_26287_p1.read().is_01() || !sum5_cast_cast_fu_26275_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_shl286_cast_fu_26287_p1.read()) - sc_biguint<9>(sum5_cast_cast_fu_26275_p1.read()));
}

void ShuffleNetV2::thread_tmp_510_t_fu_44312_p2() {
    tmp_510_t_fu_44312_p2 = (!tmp_231_fu_44273_p2.read().is_01() || !tmp_222_reg_61836.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_231_fu_44273_p2.read()) + sc_biguint<7>(tmp_222_reg_61836.read()));
}

void ShuffleNetV2::thread_tmp_511_fu_26301_p2() {
    tmp_511_fu_26301_p2 = (!w13_cast_cast_fu_26297_p1.read().is_01() || !tmp_510_reg_50092.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w13_cast_cast_fu_26297_p1.read()) + sc_biguint<9>(tmp_510_reg_50092.read()));
}

void ShuffleNetV2::thread_tmp_512_fu_26322_p2() {
    tmp_512_fu_26322_p2 = (!p_shl197_fu_26318_p1.read().is_01() || !tmp_672_cast_fu_26306_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl197_fu_26318_p1.read()) - sc_bigint<32>(tmp_672_cast_fu_26306_p1.read()));
}

void ShuffleNetV2::thread_tmp_513_fu_26328_p2() {
    tmp_513_fu_26328_p2 = (!w13_cast_cast_fu_26297_p1.read().is_01() || !tmp_669_cast_reg_50079.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w13_cast_cast_fu_26297_p1.read()) + sc_bigint<9>(tmp_669_cast_reg_50079.read()));
}

void ShuffleNetV2::thread_tmp_514_fu_26339_p2() {
    tmp_514_fu_26339_p2 = (!tmp_551_fu_26333_p2.read().is_01() || !tmp_513_fu_26328_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_551_fu_26333_p2.read()) - sc_biguint<9>(tmp_513_fu_26328_p2.read()));
}

void ShuffleNetV2::thread_tmp_515_fu_26372_p2() {
    tmp_515_fu_26372_p2 = (!tmp_514_reg_50097.read().is_01() || !h14_cast_cast_fu_26368_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_514_reg_50097.read()) + sc_biguint<9>(h14_cast_cast_fu_26368_p1.read()));
}

void ShuffleNetV2::thread_tmp_516_fu_26459_p3() {
    tmp_516_fu_26459_p3 = esl_concat<7,5>(sum9_fu_26453_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_517_fu_26471_p3() {
    tmp_517_fu_26471_p3 = esl_concat<7,3>(sum9_fu_26453_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_518_fu_26483_p2() {
    tmp_518_fu_26483_p2 = (!p_shl289_cast_fu_26467_p1.read().is_01() || !p_shl290_cast_fu_26479_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl289_cast_fu_26467_p1.read()) - sc_biguint<13>(p_shl290_cast_fu_26479_p1.read()));
}

void ShuffleNetV2::thread_tmp_519_fu_26571_p3() {
    tmp_519_fu_26571_p3 = esl_concat<5,4>(co19_reg_18250.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_520_fu_26583_p3() {
    tmp_520_fu_26583_p3 = esl_concat<5,1>(co19_reg_18250.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_521_fu_26595_p2() {
    tmp_521_fu_26595_p2 = (!p_shl292_cast_fu_26591_p1.read().is_01() || !p_shl291_cast_fu_26579_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl292_cast_fu_26591_p1.read()) + sc_biguint<10>(p_shl291_cast_fu_26579_p1.read()));
}

void ShuffleNetV2::thread_tmp_522_fu_26623_p3() {
    tmp_522_fu_26623_p3 = esl_concat<6,4>(tmp_s_fu_26617_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_523_fu_26635_p3() {
    tmp_523_fu_26635_p3 = esl_concat<6,1>(tmp_s_fu_26617_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_523_t_fu_44948_p2() {
    tmp_523_t_fu_44948_p2 = (!tmp_238_fu_44909_p2.read().is_01() || !tmp_234_reg_62472.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_238_fu_44909_p2.read()) + sc_biguint<7>(tmp_234_reg_62472.read()));
}

void ShuffleNetV2::thread_tmp_524_fu_26647_p2() {
    tmp_524_fu_26647_p2 = (!p_shl294_cast_fu_26643_p1.read().is_01() || !p_shl293_cast_fu_26631_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl294_cast_fu_26643_p1.read()) + sc_biguint<11>(p_shl293_cast_fu_26631_p1.read()));
}

void ShuffleNetV2::thread_tmp_525_fu_26796_p3() {
    tmp_525_fu_26796_p3 = esl_concat<7,5>(sum_fu_26790_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_526_fu_26808_p3() {
    tmp_526_fu_26808_p3 = esl_concat<7,3>(sum_fu_26790_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_527_fu_26820_p2() {
    tmp_527_fu_26820_p2 = (!p_shl299_cast_fu_26804_p1.read().is_01() || !p_shl300_cast_fu_26816_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl299_cast_fu_26804_p1.read()) - sc_biguint<13>(p_shl300_cast_fu_26816_p1.read()));
}

void ShuffleNetV2::thread_tmp_528_fu_26673_p2() {
    tmp_528_fu_26673_p2 = (!h_46_cast_cast_fu_26669_p1.read().is_01() || !tmp_524_reg_50322.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_46_cast_cast_fu_26669_p1.read()) + sc_biguint<11>(tmp_524_reg_50322.read()));
}

void ShuffleNetV2::thread_tmp_529_fu_26698_p2() {
    tmp_529_fu_26698_p2 = (!p_shl297_cast_fu_26678_p3.read().is_01() || !p_shl298_cast_fu_26694_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl297_cast_fu_26678_p3.read()) + sc_biguint<15>(p_shl298_cast_fu_26694_p1.read()));
}

void ShuffleNetV2::thread_tmp_52_cast_fu_29802_p1() {
    tmp_52_cast_fu_29802_p1 = esl_sext<32,7>(tmp_52_fu_29797_p2.read());
}

void ShuffleNetV2::thread_tmp_52_fu_29797_p2() {
    tmp_52_fu_29797_p2 = (!ci36_cast_fu_29777_p1.read().is_01() || !tmp_45_reg_52264.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci36_cast_fu_29777_p1.read()) + sc_biguint<7>(tmp_45_reg_52264.read()));
}

void ShuffleNetV2::thread_tmp_530_fu_26704_p2() {
    tmp_530_fu_26704_p2 = (!h_46_cast_cast1_fu_26665_p1.read().is_01() || !tmp_521_reg_50309.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_46_cast_cast1_fu_26665_p1.read()) + sc_biguint<10>(tmp_521_reg_50309.read()));
}

void ShuffleNetV2::thread_tmp_531_fu_26729_p2() {
    tmp_531_fu_26729_p2 = (!p_shl295_cast_fu_26709_p3.read().is_01() || !p_shl296_cast_fu_26725_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl295_cast_fu_26709_p3.read()) + sc_biguint<14>(p_shl296_cast_fu_26725_p1.read()));
}

void ShuffleNetV2::thread_tmp_532_fu_26755_p2() {
    tmp_532_fu_26755_p2 = (!tmp_529_reg_50335.read().is_01() || !w_47_cast_cast_fu_26751_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_529_reg_50335.read()) + sc_biguint<15>(w_47_cast_cast_fu_26751_p1.read()));
}

void ShuffleNetV2::thread_tmp_533_fu_26765_p2() {
    tmp_533_fu_26765_p2 = (!tmp_531_reg_50340.read().is_01() || !w_47_cast_cast1_fu_26747_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_531_reg_50340.read()) + sc_biguint<14>(w_47_cast_cast1_fu_26747_p1.read()));
}

void ShuffleNetV2::thread_tmp_534_fu_26916_p3() {
    tmp_534_fu_26916_p3 = esl_concat<5,2>(co25_reg_18317.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_535_fu_25630_p2() {
    tmp_535_fu_25630_p2 = (!bias_V_read_reg_49426.read().is_01() || !ap_const_lv32_C18.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_49426.read()) + sc_biguint<32>(ap_const_lv32_C18));
}

void ShuffleNetV2::thread_tmp_536_fu_25657_p2() {
    tmp_536_fu_25657_p2 = (!bias_V_read_reg_49426.read().is_01() || !ap_const_lv32_E18.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_49426.read()) + sc_biguint<32>(ap_const_lv32_E18));
}

void ShuffleNetV2::thread_tmp_537_fu_25735_p3() {
    tmp_537_fu_25735_p3 = esl_concat<8,5>(tmp_494_fu_25730_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_538_fu_25885_p2() {
    tmp_538_fu_25885_p2 = (!bias_V_read_reg_49426.read().is_01() || !ap_const_lv32_18.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_49426.read()) + sc_biguint<32>(ap_const_lv32_18));
}

void ShuffleNetV2::thread_tmp_539_fu_25870_p1() {
    tmp_539_fu_25870_p1 = esl_sext<32,11>(tmp_493_fu_25852_p2.read());
}

void ShuffleNetV2::thread_tmp_53_fu_29890_p2() {
    tmp_53_fu_29890_p2 = (!p_shl16_fu_29870_p3.read().is_01() || !p_shl17_cast_fu_29886_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl16_fu_29870_p3.read()) - sc_biguint<6>(p_shl17_cast_fu_29886_p1.read()));
}

void ShuffleNetV2::thread_tmp_540_fu_25874_p2() {
    tmp_540_fu_25874_p2 = (!tmp_539_fu_25870_p1.read().is_01() || !shuffle_conv_1x1_V_r_reg_49500.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_539_fu_25870_p1.read()) + sc_biguint<32>(shuffle_conv_1x1_V_r_reg_49500.read()));
}

void ShuffleNetV2::thread_tmp_541_fu_25786_p3() {
    tmp_541_fu_25786_p3 = esl_concat<8,1>(tmp_496_reg_49658.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_542_fu_25768_p2() {
    tmp_542_fu_25768_p2 = (!tmp_495_fu_25743_p1.read().is_01() || !image_V_read_reg_49570.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_495_fu_25743_p1.read()) + sc_biguint<32>(image_V_read_reg_49570.read()));
}

void ShuffleNetV2::thread_tmp_543_fu_25990_p2() {
    tmp_543_fu_25990_p2 = (!bias_V_read_reg_49426.read().is_01() || !ap_const_lv32_30.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_49426.read()) + sc_biguint<32>(ap_const_lv32_30));
}

void ShuffleNetV2::thread_tmp_544_fu_26014_p3() {
    tmp_544_fu_26014_p3 = esl_concat<9,2>(tmp_501_fu_26005_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_544_t_fu_45710_p2() {
    tmp_544_t_fu_45710_p2 = (!tmp_241_reg_63187.read().is_01() || !tmp_249_fu_45671_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_241_reg_63187.read()) + sc_biguint<7>(tmp_249_fu_45671_p2.read()));
}

void ShuffleNetV2::thread_tmp_545_fu_26044_p2() {
    tmp_545_fu_26044_p2 = (!tmp_502_fu_26026_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_49541.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_502_fu_26026_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_49541.read()));
}

void ShuffleNetV2::thread_tmp_546_fu_26160_p2() {
    tmp_546_fu_26160_p2 = (!bias_V_read_reg_49426.read().is_01() || !ap_const_lv32_48.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_49426.read()) + sc_biguint<32>(ap_const_lv32_48));
}

void ShuffleNetV2::thread_tmp_547_fu_26145_p1() {
    tmp_547_fu_26145_p1 = esl_sext<32,12>(tmp_506_fu_26139_p2.read());
}

void ShuffleNetV2::thread_tmp_548_fu_26149_p2() {
    tmp_548_fu_26149_p2 = (!shuffle_conv_1x1_V_r_reg_49500.read().is_01() || !tmp_547_fu_26145_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_49500.read()) + sc_bigint<32>(tmp_547_fu_26145_p1.read()));
}

void ShuffleNetV2::thread_tmp_54_cast_fu_29926_p1() {
    tmp_54_cast_fu_29926_p1 = esl_sext<9,8>(tmp_54_fu_29920_p2.read());
}

void ShuffleNetV2::thread_tmp_54_fu_29920_p2() {
    tmp_54_fu_29920_p2 = (!p_shl18_cast_fu_29904_p1.read().is_01() || !p_shl19_cast_fu_29916_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl18_cast_fu_29904_p1.read()) - sc_biguint<8>(p_shl19_cast_fu_29916_p1.read()));
}

void ShuffleNetV2::thread_tmp_550_fu_26310_p3() {
    tmp_550_fu_26310_p3 = esl_concat<9,2>(tmp_511_fu_26301_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_551_fu_26333_p2() {
    tmp_551_fu_26333_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_513_fu_26328_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_552_fu_26410_p3() {
    tmp_552_fu_26410_p3 = esl_concat<1,5>(ap_const_lv1_1, tmp_549_reg_18205.read());
}

void ShuffleNetV2::thread_tmp_553_fu_26418_p1() {
    tmp_553_fu_26418_p1 = esl_sext<7,6>(tmp_552_fu_26410_p3.read());
}

void ShuffleNetV2::thread_tmp_554_fu_26422_p1() {
    tmp_554_fu_26422_p1 = esl_zext<32,7>(tmp_553_fu_26418_p1.read());
}

void ShuffleNetV2::thread_tmp_555_fu_26426_p2() {
    tmp_555_fu_26426_p2 = (!tmp_554_fu_26422_p1.read().is_01() || !bias_V_read_reg_49426.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_554_fu_26422_p1.read()) + sc_biguint<32>(bias_V_read_reg_49426.read()));
}

void ShuffleNetV2::thread_tmp_556_fu_26357_p2() {
    tmp_556_fu_26357_p2 = (!tmp_512_fu_26322_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_49541.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_512_fu_26322_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_49541.read()));
}

void ShuffleNetV2::thread_tmp_557_fu_26504_p2() {
    tmp_557_fu_26504_p2 = (!bias_V_read_reg_49426.read().is_01() || !ap_const_lv32_78.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_49426.read()) + sc_biguint<32>(ap_const_lv32_78));
}

void ShuffleNetV2::thread_tmp_558_fu_26489_p1() {
    tmp_558_fu_26489_p1 = esl_sext<32,13>(tmp_518_fu_26483_p2.read());
}

void ShuffleNetV2::thread_tmp_558_t_fu_46477_p2() {
    tmp_558_t_fu_46477_p2 = (!tmp_257_fu_46438_p2.read().is_01() || !tmp_253_reg_63867.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_257_fu_46438_p2.read()) + sc_biguint<7>(tmp_253_reg_63867.read()));
}

void ShuffleNetV2::thread_tmp_559_fu_26493_p2() {
    tmp_559_fu_26493_p2 = (!shuffle_conv_1x1_V_r_reg_49500.read().is_01() || !tmp_558_fu_26489_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_49500.read()) + sc_bigint<32>(tmp_558_fu_26489_p1.read()));
}

void ShuffleNetV2::thread_tmp_560_fu_26841_p2() {
    tmp_560_fu_26841_p2 = (!bias_V_read_reg_49426.read().is_01() || !ap_const_lv32_90.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_49426.read()) + sc_biguint<32>(ap_const_lv32_90));
}

void ShuffleNetV2::thread_tmp_561_fu_26826_p1() {
    tmp_561_fu_26826_p1 = esl_sext<32,13>(tmp_527_fu_26820_p2.read());
}

void ShuffleNetV2::thread_tmp_562_fu_26830_p2() {
    tmp_562_fu_26830_p2 = (!shuffle_conv_1x1_V_r_reg_49500.read().is_01() || !tmp_561_fu_26826_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_49500.read()) + sc_bigint<32>(tmp_561_fu_26826_p1.read()));
}

void ShuffleNetV2::thread_tmp_563_fu_26686_p3() {
    tmp_563_fu_26686_p3 = esl_concat<11,1>(tmp_528_fu_26673_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_564_fu_26717_p3() {
    tmp_564_fu_26717_p3 = esl_concat<10,1>(tmp_530_fu_26704_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_565_fu_26928_p2() {
    tmp_565_fu_26928_p2 = (!p_shl301_cast_fu_26924_p1.read().is_01() || !co25_cast1_cast_fu_26912_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl301_cast_fu_26924_p1.read()) - sc_biguint<8>(co25_cast1_cast_fu_26912_p1.read()));
}

void ShuffleNetV2::thread_tmp_566_fu_26978_p2() {
    tmp_566_fu_26978_p2 = (!bias_V_read_reg_49426.read().is_01() || !ap_const_lv32_A8.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_49426.read()) + sc_biguint<32>(ap_const_lv32_A8));
}

void ShuffleNetV2::thread_tmp_567_fu_26960_p3() {
    tmp_567_fu_26960_p3 = esl_concat<7,2>(sum1_fu_26950_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_568_fu_26972_p2() {
    tmp_568_fu_26972_p2 = (!p_shl302_cast_fu_26968_p1.read().is_01() || !sum11_cast_cast_fu_26956_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl302_cast_fu_26968_p1.read()) - sc_biguint<10>(sum11_cast_cast_fu_26956_p1.read()));
}

void ShuffleNetV2::thread_tmp_569_fu_26997_p2() {
    tmp_569_fu_26997_p2 = (!w26_cast_cast_fu_26993_p1.read().is_01() || !tmp_568_reg_50537.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w26_cast_cast_fu_26993_p1.read()) + sc_biguint<10>(tmp_568_reg_50537.read()));
}

void ShuffleNetV2::thread_tmp_56_cast_fu_30405_p1() {
    tmp_56_cast_fu_30405_p1 = esl_sext<10,7>(tmp_56_fu_30399_p2.read());
}

void ShuffleNetV2::thread_tmp_56_fu_30399_p2() {
    tmp_56_fu_30399_p2 = (!p_shl20_cast_fu_30383_p1.read().is_01() || !p_shl21_cast_fu_30395_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl20_cast_fu_30383_p1.read()) - sc_biguint<7>(p_shl21_cast_fu_30395_p1.read()));
}

void ShuffleNetV2::thread_tmp_570_fu_27006_p3() {
    tmp_570_fu_27006_p3 = esl_concat<10,2>(tmp_569_fu_26997_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_571_fu_27018_p2() {
    tmp_571_fu_27018_p2 = (!p_shl202_fu_27014_p1.read().is_01() || !tmp_708_cast_fu_27002_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl202_fu_27014_p1.read()) - sc_bigint<32>(tmp_708_cast_fu_27002_p1.read()));
}

void ShuffleNetV2::thread_tmp_572_fu_27024_p2() {
    tmp_572_fu_27024_p2 = (!w26_cast_cast1_fu_26989_p1.read().is_01() || !tmp_705_cast_reg_50524.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w26_cast_cast1_fu_26989_p1.read()) + sc_bigint<9>(tmp_705_cast_reg_50524.read()));
}

void ShuffleNetV2::thread_tmp_573_fu_27029_p2() {
    tmp_573_fu_27029_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_572_fu_27024_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_574_fu_27035_p2() {
    tmp_574_fu_27035_p2 = (!tmp_573_fu_27029_p2.read().is_01() || !tmp_572_fu_27024_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_573_fu_27029_p2.read()) - sc_biguint<9>(tmp_572_fu_27024_p2.read()));
}

void ShuffleNetV2::thread_tmp_575_fu_27053_p2() {
    tmp_575_fu_27053_p2 = (!tmp_571_fu_27018_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_49541.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_571_fu_27018_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_49541.read()));
}

void ShuffleNetV2::thread_tmp_576_fu_27068_p2() {
    tmp_576_fu_27068_p2 = (!tmp_574_reg_50548.read().is_01() || !h27_cast_cast_fu_27064_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_574_reg_50548.read()) + sc_biguint<9>(h27_cast_cast_fu_27064_p1.read()));
}

void ShuffleNetV2::thread_tmp_577_fu_27118_p4() {
    tmp_577_fu_27118_p4 = esl_concat<6,5>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_18361.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_578_fu_27128_p1() {
    tmp_578_fu_27128_p1 = esl_sext<12,11>(tmp_577_fu_27118_p4.read());
}

void ShuffleNetV2::thread_tmp_579_fu_27136_p4() {
    tmp_579_fu_27136_p4 = esl_concat<6,3>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_18361.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_579_t_fu_47251_p2() {
    tmp_579_t_fu_47251_p2 = (!tmp_268_fu_47212_p2.read().is_01() || !tmp_260_reg_64582.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_268_fu_47212_p2.read()) + sc_biguint<7>(tmp_260_reg_64582.read()));
}

void ShuffleNetV2::thread_tmp_57_cast_fu_30439_p1() {
    tmp_57_cast_fu_30439_p1 = esl_sext<32,7>(tmp_57_reg_52710.read());
}

void ShuffleNetV2::thread_tmp_57_fu_30409_p2() {
    tmp_57_fu_30409_p2 = (!tmp_56_fu_30399_p2.read().is_01() || !i47_cast1_reg_52689.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_56_fu_30399_p2.read()) + sc_biguint<7>(i47_cast1_reg_52689.read()));
}

void ShuffleNetV2::thread_tmp_580_fu_27146_p1() {
    tmp_580_fu_27146_p1 = esl_sext<10,9>(tmp_579_fu_27136_p4.read());
}

void ShuffleNetV2::thread_tmp_581_fu_27154_p2() {
    tmp_581_fu_27154_p2 = (!p_shl305_cast_fu_27132_p1.read().is_01() || !p_shl306_cast_fu_27150_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl305_cast_fu_27132_p1.read()) - sc_biguint<13>(p_shl306_cast_fu_27150_p1.read()));
}

void ShuffleNetV2::thread_tmp_582_fu_27160_p1() {
    tmp_582_fu_27160_p1 = esl_sext<32,13>(tmp_581_fu_27154_p2.read());
}

void ShuffleNetV2::thread_tmp_583_fu_27164_p2() {
    tmp_583_fu_27164_p2 = (!shuffle_conv_1x1_V_r_reg_49500.read().is_01() || !tmp_582_fu_27160_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_49500.read()) + sc_bigint<32>(tmp_582_fu_27160_p1.read()));
}

void ShuffleNetV2::thread_tmp_585_fu_27231_p3() {
    tmp_585_fu_27231_p3 = esl_concat<2,5>(ap_const_lv2_2, tmp_584_reg_18384.read());
}

void ShuffleNetV2::thread_tmp_586_fu_27239_p1() {
    tmp_586_fu_27239_p1 = esl_sext<8,7>(tmp_585_fu_27231_p3.read());
}

void ShuffleNetV2::thread_tmp_587_fu_27243_p1() {
    tmp_587_fu_27243_p1 = esl_zext<32,8>(tmp_586_fu_27239_p1.read());
}

void ShuffleNetV2::thread_tmp_588_fu_27247_p2() {
    tmp_588_fu_27247_p2 = (!tmp_587_fu_27243_p1.read().is_01() || !bias_V_read_reg_49426.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_587_fu_27243_p1.read()) + sc_biguint<32>(bias_V_read_reg_49426.read()));
}

void ShuffleNetV2::thread_tmp_589_fu_27258_p3() {
    tmp_589_fu_27258_p3 = esl_concat<5,4>(co32_reg_18395.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_590_fu_27270_p3() {
    tmp_590_fu_27270_p3 = esl_concat<5,1>(co32_reg_18395.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_591_fu_27282_p2() {
    tmp_591_fu_27282_p2 = (!p_shl308_cast_fu_27278_p1.read().is_01() || !p_shl307_cast_fu_27266_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl308_cast_fu_27278_p1.read()) + sc_biguint<10>(p_shl307_cast_fu_27266_p1.read()));
}

void ShuffleNetV2::thread_tmp_592_fu_27377_p3() {
    tmp_592_fu_27377_p3 = esl_concat<5,4>(co35_reg_18428.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_593_fu_27389_p3() {
    tmp_593_fu_27389_p3 = esl_concat<5,1>(co35_reg_18428.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_593_t_fu_48010_p2() {
    tmp_593_t_fu_48010_p2 = (!tmp_276_fu_47971_p2.read().is_01() || !tmp_272_reg_65262.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_276_fu_47971_p2.read()) + sc_biguint<7>(tmp_272_reg_65262.read()));
}

void ShuffleNetV2::thread_tmp_594_fu_27401_p2() {
    tmp_594_fu_27401_p2 = (!p_shl312_cast_fu_27397_p1.read().is_01() || !p_shl311_cast_fu_27385_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl312_cast_fu_27397_p1.read()) + sc_biguint<10>(p_shl311_cast_fu_27385_p1.read()));
}

void ShuffleNetV2::thread_tmp_595_fu_27429_p3() {
    tmp_595_fu_27429_p3 = esl_concat<6,4>(tmp_30_fu_27423_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_596_fu_27441_p3() {
    tmp_596_fu_27441_p3 = esl_concat<6,1>(tmp_30_fu_27423_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_597_fu_27453_p2() {
    tmp_597_fu_27453_p2 = (!p_shl314_cast_fu_27449_p1.read().is_01() || !p_shl313_cast_fu_27437_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl314_cast_fu_27449_p1.read()) + sc_biguint<11>(p_shl313_cast_fu_27437_p1.read()));
}

void ShuffleNetV2::thread_tmp_598_fu_27316_p2() {
    tmp_598_fu_27316_p2 = (!h_48_cast_cast_fu_27312_p1.read().is_01() || !tmp_591_reg_50754.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_48_cast_cast_fu_27312_p1.read()) + sc_biguint<10>(tmp_591_reg_50754.read()));
}

void ShuffleNetV2::thread_tmp_599_fu_27321_p3() {
    tmp_599_fu_27321_p3 = esl_concat<10,4>(tmp_598_fu_27316_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_59_fu_30487_p2() {
    tmp_59_fu_30487_p2 = (!p_shl22_cast_fu_30471_p1.read().is_01() || !p_shl23_cast_fu_30483_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl22_cast_fu_30471_p1.read()) - sc_biguint<7>(p_shl23_cast_fu_30483_p1.read()));
}

void ShuffleNetV2::thread_tmp_600_fu_27333_p3() {
    tmp_600_fu_27333_p3 = esl_concat<10,1>(tmp_598_fu_27316_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_601_fu_27345_p2() {
    tmp_601_fu_27345_p2 = (!p_shl309_cast_fu_27329_p1.read().is_01() || !p_shl310_cast_fu_27341_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl309_cast_fu_27329_p1.read()) + sc_biguint<15>(p_shl310_cast_fu_27341_p1.read()));
}

void ShuffleNetV2::thread_tmp_602_fu_27647_p2() {
    tmp_602_fu_27647_p2 = (!bias_V_read_reg_49426.read().is_01() || !ap_const_lv32_D8.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_49426.read()) + sc_biguint<32>(ap_const_lv32_D8));
}

void ShuffleNetV2::thread_tmp_603_fu_27602_p3() {
    tmp_603_fu_27602_p3 = esl_concat<8,5>(sum2_fu_27596_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_604_fu_27614_p3() {
    tmp_604_fu_27614_p3 = esl_concat<8,3>(sum2_fu_27596_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_605_fu_27626_p2() {
    tmp_605_fu_27626_p2 = (!p_shl319_cast_fu_27610_p1.read().is_01() || !p_shl320_cast_fu_27622_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl319_cast_fu_27610_p1.read()) - sc_biguint<14>(p_shl320_cast_fu_27622_p1.read()));
}

void ShuffleNetV2::thread_tmp_606_fu_27632_p1() {
    tmp_606_fu_27632_p1 = esl_sext<32,14>(tmp_605_fu_27626_p2.read());
}

void ShuffleNetV2::thread_tmp_607_fu_27636_p2() {
    tmp_607_fu_27636_p2 = (!shuffle_conv_1x1_V_r_reg_49500.read().is_01() || !tmp_606_fu_27632_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_49500.read()) + sc_bigint<32>(tmp_606_fu_27632_p1.read()));
}

void ShuffleNetV2::thread_tmp_608_fu_27479_p2() {
    tmp_608_fu_27479_p2 = (!h_49_cast_cast_fu_27475_p1.read().is_01() || !tmp_597_reg_50811.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_49_cast_cast_fu_27475_p1.read()) + sc_biguint<11>(tmp_597_reg_50811.read()));
}

void ShuffleNetV2::thread_tmp_609_fu_27492_p3() {
    tmp_609_fu_27492_p3 = esl_concat<11,1>(tmp_608_fu_27479_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_60_fu_30527_p2() {
    tmp_60_fu_30527_p2 = (!ci38_cast_fu_30507_p1.read().is_01() || !tmp_59_reg_52739.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci38_cast_fu_30507_p1.read()) + sc_biguint<7>(tmp_59_reg_52739.read()));
}

void ShuffleNetV2::thread_tmp_610_fu_27504_p2() {
    tmp_610_fu_27504_p2 = (!p_shl317_cast_fu_27484_p3.read().is_01() || !p_shl318_cast_fu_27500_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl317_cast_fu_27484_p3.read()) + sc_biguint<15>(p_shl318_cast_fu_27500_p1.read()));
}

void ShuffleNetV2::thread_tmp_611_fu_27510_p2() {
    tmp_611_fu_27510_p2 = (!h_49_cast_cast1_fu_27471_p1.read().is_01() || !tmp_594_reg_50798.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_49_cast_cast1_fu_27471_p1.read()) + sc_biguint<10>(tmp_594_reg_50798.read()));
}

void ShuffleNetV2::thread_tmp_612_fu_27523_p3() {
    tmp_612_fu_27523_p3 = esl_concat<10,1>(tmp_611_fu_27510_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_613_fu_27535_p2() {
    tmp_613_fu_27535_p2 = (!p_shl315_cast_fu_27515_p3.read().is_01() || !p_shl316_cast_fu_27531_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl315_cast_fu_27515_p3.read()) + sc_biguint<14>(p_shl316_cast_fu_27531_p1.read()));
}

void ShuffleNetV2::thread_tmp_614_fu_27367_p2() {
    tmp_614_fu_27367_p2 = (!tmp_601_reg_50775.read().is_01() || !w_49_cast_cast_fu_27363_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_601_reg_50775.read()) + sc_biguint<15>(w_49_cast_cast_fu_27363_p1.read()));
}

void ShuffleNetV2::thread_tmp_614_t_fu_48776_p2() {
    tmp_614_t_fu_48776_p2 = (!tmp_287_fu_48737_p2.read().is_01() || !tmp_279_reg_65977.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_287_fu_48737_p2.read()) + sc_biguint<7>(tmp_279_reg_65977.read()));
}

void ShuffleNetV2::thread_tmp_615_fu_27561_p2() {
    tmp_615_fu_27561_p2 = (!tmp_610_reg_50824.read().is_01() || !w_50_cast_cast_fu_27557_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_610_reg_50824.read()) + sc_biguint<15>(w_50_cast_cast_fu_27557_p1.read()));
}

void ShuffleNetV2::thread_tmp_616_fu_27571_p2() {
    tmp_616_fu_27571_p2 = (!tmp_613_reg_50829.read().is_01() || !w_50_cast_cast1_fu_27553_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_613_reg_50829.read()) + sc_biguint<14>(w_50_cast_cast1_fu_27553_p1.read()));
}

void ShuffleNetV2::thread_tmp_617_fu_27722_p3() {
    tmp_617_fu_27722_p3 = esl_concat<5,2>(co41_reg_18495.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_618_fu_27734_p2() {
    tmp_618_fu_27734_p2 = (!p_shl321_cast_fu_27730_p1.read().is_01() || !co41_cast1_cast_fu_27718_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl321_cast_fu_27730_p1.read()) - sc_biguint<8>(co41_cast1_cast_fu_27718_p1.read()));
}

void ShuffleNetV2::thread_tmp_619_fu_27784_p2() {
    tmp_619_fu_27784_p2 = (!bias_V_read_reg_49426.read().is_01() || !ap_const_lv32_F0.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_49426.read()) + sc_biguint<32>(ap_const_lv32_F0));
}

void ShuffleNetV2::thread_tmp_61_cast_fu_30212_p1() {
    tmp_61_cast_fu_30212_p1 = esl_sext<8,7>(tmp_61_fu_30206_p2.read());
}

void ShuffleNetV2::thread_tmp_61_fu_30206_p2() {
    tmp_61_fu_30206_p2 = (!p_shl24_cast_fu_30190_p1.read().is_01() || !p_shl25_cast_fu_30202_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl24_cast_fu_30190_p1.read()) - sc_biguint<7>(p_shl25_cast_fu_30202_p1.read()));
}

void ShuffleNetV2::thread_tmp_620_fu_27766_p3() {
    tmp_620_fu_27766_p3 = esl_concat<7,2>(sum3_fu_27756_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_621_fu_27778_p2() {
    tmp_621_fu_27778_p2 = (!p_shl322_cast_fu_27774_p1.read().is_01() || !sum13_cast_cast_fu_27762_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl322_cast_fu_27774_p1.read()) - sc_biguint<10>(sum13_cast_cast_fu_27762_p1.read()));
}

void ShuffleNetV2::thread_tmp_622_fu_27803_p2() {
    tmp_622_fu_27803_p2 = (!w42_cast_cast_fu_27799_p1.read().is_01() || !tmp_621_reg_51026.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w42_cast_cast_fu_27799_p1.read()) + sc_biguint<10>(tmp_621_reg_51026.read()));
}

void ShuffleNetV2::thread_tmp_623_fu_27812_p3() {
    tmp_623_fu_27812_p3 = esl_concat<10,2>(tmp_622_fu_27803_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_624_fu_27824_p2() {
    tmp_624_fu_27824_p2 = (!p_shl208_fu_27820_p1.read().is_01() || !tmp_754_cast_fu_27808_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl208_fu_27820_p1.read()) - sc_bigint<32>(tmp_754_cast_fu_27808_p1.read()));
}

void ShuffleNetV2::thread_tmp_625_fu_27830_p2() {
    tmp_625_fu_27830_p2 = (!w42_cast_cast1_fu_27795_p1.read().is_01() || !tmp_751_cast_reg_51013.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w42_cast_cast1_fu_27795_p1.read()) + sc_bigint<9>(tmp_751_cast_reg_51013.read()));
}

void ShuffleNetV2::thread_tmp_626_fu_27835_p2() {
    tmp_626_fu_27835_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_625_fu_27830_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_627_fu_27841_p2() {
    tmp_627_fu_27841_p2 = (!tmp_626_fu_27835_p2.read().is_01() || !tmp_625_fu_27830_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_626_fu_27835_p2.read()) - sc_biguint<9>(tmp_625_fu_27830_p2.read()));
}

void ShuffleNetV2::thread_tmp_628_fu_27859_p2() {
    tmp_628_fu_27859_p2 = (!tmp_624_fu_27824_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_49541.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_624_fu_27824_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_49541.read()));
}

void ShuffleNetV2::thread_tmp_629_fu_27874_p2() {
    tmp_629_fu_27874_p2 = (!tmp_627_reg_51037.read().is_01() || !h43_cast_cast_fu_27870_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_627_reg_51037.read()) + sc_biguint<9>(h43_cast_cast_fu_27870_p1.read()));
}

void ShuffleNetV2::thread_tmp_62_cast_cast_fu_30221_p1() {
    tmp_62_cast_cast_fu_30221_p1 = esl_sext<10,7>(tmp_62_fu_30216_p2.read());
}

void ShuffleNetV2::thread_tmp_62_fu_30216_p2() {
    tmp_62_fu_30216_p2 = (!co64_cast1_reg_52598.read().is_01() || !tmp_61_fu_30206_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co64_cast1_reg_52598.read()) + sc_biguint<7>(tmp_61_fu_30206_p2.read()));
}

void ShuffleNetV2::thread_tmp_630_fu_27979_p2() {
    tmp_630_fu_27979_p2 = (!bias_V_read_reg_49426.read().is_01() || !ap_const_lv32_108.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_49426.read()) + sc_biguint<32>(ap_const_lv32_108));
}

void ShuffleNetV2::thread_tmp_631_fu_27934_p3() {
    tmp_631_fu_27934_p3 = esl_concat<8,5>(sum4_fu_27928_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_632_fu_27946_p3() {
    tmp_632_fu_27946_p3 = esl_concat<8,3>(sum4_fu_27928_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_633_fu_27958_p2() {
    tmp_633_fu_27958_p2 = (!p_shl325_cast_fu_27942_p1.read().is_01() || !p_shl326_cast_fu_27954_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl325_cast_fu_27942_p1.read()) - sc_biguint<14>(p_shl326_cast_fu_27954_p1.read()));
}

void ShuffleNetV2::thread_tmp_634_fu_27964_p1() {
    tmp_634_fu_27964_p1 = esl_sext<32,14>(tmp_633_fu_27958_p2.read());
}

void ShuffleNetV2::thread_tmp_635_fu_27968_p2() {
    tmp_635_fu_27968_p2 = (!shuffle_conv_1x1_V_r_reg_49500.read().is_01() || !tmp_634_fu_27964_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_49500.read()) + sc_bigint<32>(tmp_634_fu_27964_p1.read()));
}

void ShuffleNetV2::thread_tmp_636_fu_28046_p3() {
    tmp_636_fu_28046_p3 = esl_concat<5,4>(co46_reg_18573.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_637_fu_28058_p3() {
    tmp_637_fu_28058_p3 = esl_concat<5,1>(co46_reg_18573.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_638_fu_28070_p2() {
    tmp_638_fu_28070_p2 = (!p_shl328_cast_fu_28066_p1.read().is_01() || !p_shl327_cast_fu_28054_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl328_cast_fu_28066_p1.read()) + sc_biguint<10>(p_shl327_cast_fu_28054_p1.read()));
}

void ShuffleNetV2::thread_tmp_639_fu_28165_p3() {
    tmp_639_fu_28165_p3 = esl_concat<5,4>(co47_reg_18606.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_63_fu_30882_p2() {
    tmp_63_fu_30882_p2 = (!co68_cast_fu_30866_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co68_cast_fu_30866_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_640_fu_28177_p3() {
    tmp_640_fu_28177_p3 = esl_concat<5,1>(co47_reg_18606.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_641_cast_fu_25692_p1() {
    tmp_641_cast_fu_25692_p1 = esl_zext<8,7>(tmp_fu_25684_p3.read());
}

void ShuffleNetV2::thread_tmp_641_fu_28189_p2() {
    tmp_641_fu_28189_p2 = (!p_shl332_cast_fu_28185_p1.read().is_01() || !p_shl331_cast_fu_28173_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl332_cast_fu_28185_p1.read()) + sc_biguint<10>(p_shl331_cast_fu_28173_p1.read()));
}

void ShuffleNetV2::thread_tmp_642_fu_28217_p3() {
    tmp_642_fu_28217_p3 = esl_concat<6,4>(tmp_31_fu_28211_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_643_fu_28229_p3() {
    tmp_643_fu_28229_p3 = esl_concat<6,1>(tmp_31_fu_28211_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_644_fu_28241_p2() {
    tmp_644_fu_28241_p2 = (!p_shl334_cast_fu_28237_p1.read().is_01() || !p_shl333_cast_fu_28225_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl334_cast_fu_28237_p1.read()) + sc_biguint<11>(p_shl333_cast_fu_28225_p1.read()));
}

void ShuffleNetV2::thread_tmp_645_fu_28104_p2() {
    tmp_645_fu_28104_p2 = (!h_51_cast_cast_fu_28100_p1.read().is_01() || !tmp_638_reg_51243.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_51_cast_cast_fu_28100_p1.read()) + sc_biguint<10>(tmp_638_reg_51243.read()));
}

void ShuffleNetV2::thread_tmp_646_fu_28109_p3() {
    tmp_646_fu_28109_p3 = esl_concat<10,4>(tmp_645_fu_28104_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_647_fu_28121_p3() {
    tmp_647_fu_28121_p3 = esl_concat<10,1>(tmp_645_fu_28104_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_648_fu_28133_p2() {
    tmp_648_fu_28133_p2 = (!p_shl329_cast_fu_28117_p1.read().is_01() || !p_shl330_cast_fu_28129_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl329_cast_fu_28117_p1.read()) + sc_biguint<15>(p_shl330_cast_fu_28129_p1.read()));
}

void ShuffleNetV2::thread_tmp_649_fu_28390_p3() {
    tmp_649_fu_28390_p3 = esl_concat<8,5>(sum7_fu_28384_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_64_cast_fu_30798_p1() {
    tmp_64_cast_fu_30798_p1 = esl_sext<10,7>(tmp_64_fu_30792_p2.read());
}

void ShuffleNetV2::thread_tmp_64_fu_30792_p2() {
    tmp_64_fu_30792_p2 = (!p_shl26_cast_fu_30776_p1.read().is_01() || !p_shl27_cast_fu_30788_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl26_cast_fu_30776_p1.read()) - sc_biguint<7>(p_shl27_cast_fu_30788_p1.read()));
}

void ShuffleNetV2::thread_tmp_650_fu_28402_p3() {
    tmp_650_fu_28402_p3 = esl_concat<8,3>(sum7_fu_28384_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_651_fu_28414_p2() {
    tmp_651_fu_28414_p2 = (!p_shl339_cast_fu_28398_p1.read().is_01() || !p_shl340_cast_fu_28410_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl339_cast_fu_28398_p1.read()) - sc_biguint<14>(p_shl340_cast_fu_28410_p1.read()));
}

void ShuffleNetV2::thread_tmp_652_fu_28420_p1() {
    tmp_652_fu_28420_p1 = esl_sext<32,14>(tmp_651_fu_28414_p2.read());
}

void ShuffleNetV2::thread_tmp_653_fu_28424_p2() {
    tmp_653_fu_28424_p2 = (!shuffle_conv_1x1_V_r_reg_49500.read().is_01() || !tmp_652_fu_28420_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_49500.read()) + sc_bigint<32>(tmp_652_fu_28420_p1.read()));
}

void ShuffleNetV2::thread_tmp_654_fu_28267_p2() {
    tmp_654_fu_28267_p2 = (!h_53_cast_cast_fu_28263_p1.read().is_01() || !tmp_644_reg_51300.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_53_cast_cast_fu_28263_p1.read()) + sc_biguint<11>(tmp_644_reg_51300.read()));
}

void ShuffleNetV2::thread_tmp_655_fu_28280_p3() {
    tmp_655_fu_28280_p3 = esl_concat<11,1>(tmp_654_fu_28267_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_656_fu_28292_p2() {
    tmp_656_fu_28292_p2 = (!p_shl337_cast_fu_28272_p3.read().is_01() || !p_shl338_cast_fu_28288_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl337_cast_fu_28272_p3.read()) + sc_biguint<15>(p_shl338_cast_fu_28288_p1.read()));
}

void ShuffleNetV2::thread_tmp_657_cast_fu_25824_p1() {
    tmp_657_cast_fu_25824_p1 = esl_zext<32,13>(tmp_498_reg_49683.read());
}

void ShuffleNetV2::thread_tmp_657_fu_28298_p2() {
    tmp_657_fu_28298_p2 = (!h_53_cast_cast1_fu_28259_p1.read().is_01() || !tmp_641_reg_51287.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_53_cast_cast1_fu_28259_p1.read()) + sc_biguint<10>(tmp_641_reg_51287.read()));
}

void ShuffleNetV2::thread_tmp_658_fu_28311_p3() {
    tmp_658_fu_28311_p3 = esl_concat<10,1>(tmp_657_fu_28298_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_659_cast_fu_25974_p1() {
    tmp_659_cast_fu_25974_p1 = esl_sext<9,8>(tmp_500_fu_25968_p2.read());
}

void ShuffleNetV2::thread_tmp_659_fu_28323_p2() {
    tmp_659_fu_28323_p2 = (!p_shl335_cast_fu_28303_p3.read().is_01() || !p_shl336_cast_fu_28319_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl335_cast_fu_28303_p3.read()) + sc_biguint<14>(p_shl336_cast_fu_28319_p1.read()));
}

void ShuffleNetV2::thread_tmp_65_cast_fu_30832_p1() {
    tmp_65_cast_fu_30832_p1 = esl_sext<32,7>(tmp_65_reg_53052.read());
}

void ShuffleNetV2::thread_tmp_65_fu_30802_p2() {
    tmp_65_fu_30802_p2 = (!tmp_64_fu_30792_p2.read().is_01() || !i51_cast1_reg_53031.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_64_fu_30792_p2.read()) + sc_biguint<7>(i51_cast1_reg_53031.read()));
}

void ShuffleNetV2::thread_tmp_660_cast_fu_26010_p1() {
    tmp_660_cast_fu_26010_p1 = esl_sext<32,9>(tmp_501_fu_26005_p2.read());
}

void ShuffleNetV2::thread_tmp_660_fu_28155_p2() {
    tmp_660_fu_28155_p2 = (!tmp_648_reg_51264.read().is_01() || !w_52_cast_cast_fu_28151_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_648_reg_51264.read()) + sc_biguint<15>(w_52_cast_cast_fu_28151_p1.read()));
}

void ShuffleNetV2::thread_tmp_662_fu_28491_p3() {
    tmp_662_fu_28491_p3 = esl_concat<4,5>(ap_const_lv4_9, tmp_661_reg_18662.read());
}

void ShuffleNetV2::thread_tmp_663_fu_28499_p1() {
    tmp_663_fu_28499_p1 = esl_zext<32,9>(tmp_662_fu_28491_p3.read());
}

void ShuffleNetV2::thread_tmp_664_fu_28503_p2() {
    tmp_664_fu_28503_p2 = (!tmp_663_fu_28499_p1.read().is_01() || !bias_V_read_reg_49426.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_663_fu_28499_p1.read()) + sc_biguint<32>(bias_V_read_reg_49426.read()));
}

void ShuffleNetV2::thread_tmp_665_fu_28349_p2() {
    tmp_665_fu_28349_p2 = (!tmp_656_reg_51313.read().is_01() || !w_54_cast_cast_fu_28345_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_656_reg_51313.read()) + sc_biguint<15>(w_54_cast_cast_fu_28345_p1.read()));
}

void ShuffleNetV2::thread_tmp_666_fu_28359_p2() {
    tmp_666_fu_28359_p2 = (!tmp_659_reg_51318.read().is_01() || !w_54_cast_cast1_fu_28341_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_659_reg_51318.read()) + sc_biguint<14>(w_54_cast_cast1_fu_28341_p1.read()));
}

void ShuffleNetV2::thread_tmp_667_fu_28518_p3() {
    tmp_667_fu_28518_p3 = esl_concat<5,2>(co52_reg_18673.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_668_fu_28530_p2() {
    tmp_668_fu_28530_p2 = (!p_shl341_cast_fu_28526_p1.read().is_01() || !co52_cast_cast_fu_28514_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl341_cast_fu_28526_p1.read()) - sc_biguint<8>(co52_cast_cast_fu_28514_p1.read()));
}

void ShuffleNetV2::thread_tmp_669_cast_fu_26249_p1() {
    tmp_669_cast_fu_26249_p1 = esl_sext<9,8>(tmp_508_fu_26243_p2.read());
}

void ShuffleNetV2::thread_tmp_669_fu_28596_p2() {
    tmp_669_fu_28596_p2 = (!bias_V_read_reg_49426.read().is_01() || !ap_const_lv32_138.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_49426.read()) + sc_biguint<32>(ap_const_lv32_138));
}

void ShuffleNetV2::thread_tmp_66_fu_30620_p2() {
    tmp_66_fu_30620_p2 = (!p_shl30_fu_30600_p3.read().is_01() || !p_shl31_cast_fu_30616_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl30_fu_30600_p3.read()) - sc_biguint<6>(p_shl31_cast_fu_30616_p1.read()));
}

void ShuffleNetV2::thread_tmp_66_i_cast_fu_49381_p1() {
    tmp_66_i_cast_fu_49381_p1 = esl_zext<6,5>(tmp_1405_reg_66675.read());
}

void ShuffleNetV2::thread_tmp_670_fu_28568_p4() {
    tmp_670_fu_28568_p4 = esl_concat<6,2>(esl_concat<1,5>(ap_const_lv1_1, co52_reg_18673.read()), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_671_fu_28578_p1() {
    tmp_671_fu_28578_p1 = esl_sext<9,8>(tmp_670_fu_28568_p4.read());
}

void ShuffleNetV2::thread_tmp_672_cast_fu_26306_p1() {
    tmp_672_cast_fu_26306_p1 = esl_sext<32,9>(tmp_511_fu_26301_p2.read());
}

void ShuffleNetV2::thread_tmp_672_fu_28586_p2() {
    tmp_672_fu_28586_p2 = (!p_shl342_cast_fu_28582_p1.read().is_01() || !sum15_cast_cast_fu_28564_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl342_cast_fu_28582_p1.read()) - sc_biguint<10>(sum15_cast_cast_fu_28564_p1.read()));
}

void ShuffleNetV2::thread_tmp_673_fu_28615_p2() {
    tmp_673_fu_28615_p2 = (!w55_cast_cast_fu_28611_p1.read().is_01() || !tmp_798_cast_reg_51515.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w55_cast_cast_fu_28611_p1.read()) + sc_bigint<11>(tmp_798_cast_reg_51515.read()));
}

void ShuffleNetV2::thread_tmp_674_fu_28624_p3() {
    tmp_674_fu_28624_p3 = esl_concat<11,2>(tmp_673_fu_28615_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_675_fu_28636_p2() {
    tmp_675_fu_28636_p2 = (!p_shl213_fu_28632_p1.read().is_01() || !tmp_799_cast_fu_28620_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl213_fu_28632_p1.read()) - sc_bigint<32>(tmp_799_cast_fu_28620_p1.read()));
}

void ShuffleNetV2::thread_tmp_676_fu_28642_p2() {
    tmp_676_fu_28642_p2 = (!w55_cast_cast1_fu_28607_p1.read().is_01() || !tmp_795_cast_reg_51502.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w55_cast_cast1_fu_28607_p1.read()) + sc_bigint<9>(tmp_795_cast_reg_51502.read()));
}

void ShuffleNetV2::thread_tmp_677_fu_28647_p2() {
    tmp_677_fu_28647_p2 = (!ap_const_lv9_2.is_01())? sc_lv<9>(): tmp_676_fu_28642_p2.read() << (unsigned short)ap_const_lv9_2.to_uint();
}

void ShuffleNetV2::thread_tmp_678_fu_28653_p2() {
    tmp_678_fu_28653_p2 = (!tmp_677_fu_28647_p2.read().is_01() || !tmp_676_fu_28642_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_677_fu_28647_p2.read()) - sc_biguint<9>(tmp_676_fu_28642_p2.read()));
}

void ShuffleNetV2::thread_tmp_679_cast_fu_26377_p1() {
    tmp_679_cast_fu_26377_p1 = esl_zext<32,9>(tmp_515_fu_26372_p2.read());
}

void ShuffleNetV2::thread_tmp_679_fu_28671_p2() {
    tmp_679_fu_28671_p2 = (!tmp_675_fu_28636_p2.read().is_01() || !shuffle_conv_3x3_V_r_reg_49541.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_675_fu_28636_p2.read()) + sc_biguint<32>(shuffle_conv_3x3_V_r_reg_49541.read()));
}

void ShuffleNetV2::thread_tmp_67_cast_fu_30532_p1() {
    tmp_67_cast_fu_30532_p1 = esl_sext<32,7>(tmp_60_fu_30527_p2.read());
}

void ShuffleNetV2::thread_tmp_67_fu_30650_p2() {
    tmp_67_fu_30650_p2 = (!p_shl32_cast_fu_30634_p1.read().is_01() || !p_shl33_cast_fu_30646_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl32_cast_fu_30634_p1.read()) - sc_biguint<8>(p_shl33_cast_fu_30646_p1.read()));
}

void ShuffleNetV2::thread_tmp_680_fu_28686_p2() {
    tmp_680_fu_28686_p2 = (!tmp_678_reg_51526.read().is_01() || !h54_cast_cast_fu_28682_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_678_reg_51526.read()) + sc_biguint<9>(h54_cast_cast_fu_28682_p1.read()));
}

void ShuffleNetV2::thread_tmp_681_fu_28793_p2() {
    tmp_681_fu_28793_p2 = (!bias_V_read_reg_49426.read().is_01() || !ap_const_lv32_150.is_01())? sc_lv<32>(): (sc_biguint<32>(bias_V_read_reg_49426.read()) + sc_biguint<32>(ap_const_lv32_150));
}

void ShuffleNetV2::thread_tmp_682_fu_28736_p4() {
    tmp_682_fu_28736_p4 = esl_concat<7,5>(esl_concat<2,5>(ap_const_lv2_2, co54_reg_18717.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_683_fu_28746_p1() {
    tmp_683_fu_28746_p1 = esl_sext<13,12>(tmp_682_fu_28736_p4.read());
}

void ShuffleNetV2::thread_tmp_684_fu_28754_p4() {
    tmp_684_fu_28754_p4 = esl_concat<7,3>(esl_concat<2,5>(ap_const_lv2_2, co54_reg_18717.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_685_fu_28764_p1() {
    tmp_685_fu_28764_p1 = esl_sext<11,10>(tmp_684_fu_28754_p4.read());
}

void ShuffleNetV2::thread_tmp_686_fu_28772_p2() {
    tmp_686_fu_28772_p2 = (!p_shl345_cast_fu_28750_p1.read().is_01() || !p_shl346_cast_fu_28768_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl345_cast_fu_28750_p1.read()) - sc_biguint<14>(p_shl346_cast_fu_28768_p1.read()));
}

void ShuffleNetV2::thread_tmp_687_fu_28778_p1() {
    tmp_687_fu_28778_p1 = esl_sext<32,14>(tmp_686_fu_28772_p2.read());
}

void ShuffleNetV2::thread_tmp_688_fu_28782_p2() {
    tmp_688_fu_28782_p2 = (!shuffle_conv_1x1_V_r_reg_49500.read().is_01() || !tmp_687_fu_28778_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shuffle_conv_1x1_V_r_reg_49500.read()) + sc_bigint<32>(tmp_687_fu_28778_p1.read()));
}

void ShuffleNetV2::thread_tmp_689_fu_28860_p3() {
    tmp_689_fu_28860_p3 = esl_concat<5,4>(co56_reg_18751.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_68_fu_31091_p2() {
    tmp_68_fu_31091_p2 = (!p_shl28_cast_fu_31075_p1.read().is_01() || !p_shl29_cast_fu_31087_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl28_cast_fu_31075_p1.read()) - sc_biguint<7>(p_shl29_cast_fu_31087_p1.read()));
}

void ShuffleNetV2::thread_tmp_68_i_fu_49384_p4() {
    tmp_68_i_fu_49384_p4 = p_i_reg_22084.read().range(7, 4);
}

void ShuffleNetV2::thread_tmp_690_fu_28872_p3() {
    tmp_690_fu_28872_p3 = esl_concat<5,1>(co56_reg_18751.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_691_fu_28884_p2() {
    tmp_691_fu_28884_p2 = (!p_shl348_cast_fu_28880_p1.read().is_01() || !p_shl347_cast_fu_28868_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl348_cast_fu_28880_p1.read()) + sc_biguint<10>(p_shl347_cast_fu_28868_p1.read()));
}

void ShuffleNetV2::thread_tmp_692_fu_28995_p1() {
    tmp_692_fu_28995_p1 = co57_reg_18784.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_693_fu_28918_p2() {
    tmp_693_fu_28918_p2 = (!h_57_cast_cast_fu_28914_p1.read().is_01() || !tmp_691_reg_51732.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_57_cast_cast_fu_28914_p1.read()) + sc_biguint<10>(tmp_691_reg_51732.read()));
}

void ShuffleNetV2::thread_tmp_694_fu_28923_p3() {
    tmp_694_fu_28923_p3 = esl_concat<10,4>(tmp_693_fu_28918_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_695_fu_28935_p3() {
    tmp_695_fu_28935_p3 = esl_concat<10,1>(tmp_693_fu_28918_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_696_fu_28947_p2() {
    tmp_696_fu_28947_p2 = (!p_shl349_cast_fu_28931_p1.read().is_01() || !p_shl350_cast_fu_28943_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl349_cast_fu_28931_p1.read()) + sc_biguint<15>(p_shl350_cast_fu_28943_p1.read()));
}

void ShuffleNetV2::thread_tmp_697_fu_28969_p2() {
    tmp_697_fu_28969_p2 = (!tmp_696_reg_51753.read().is_01() || !w_58_cast_cast_fu_28965_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_696_reg_51753.read()) + sc_biguint<15>(w_58_cast_cast_fu_28965_p1.read()));
}

void ShuffleNetV2::thread_tmp_698_fu_29296_p1() {
    tmp_698_fu_29296_p1 = k_reg_18828.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_699_fu_29132_p1() {
    tmp_699_fu_29132_p1 = i36_reg_18806.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_69_fu_31131_p2() {
    tmp_69_fu_31131_p2 = (!ci40_cast_fu_31111_p1.read().is_01() || !tmp_68_reg_53135.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci40_cast_fu_31111_p1.read()) + sc_biguint<7>(tmp_68_reg_53135.read()));
}

void ShuffleNetV2::thread_tmp_69_i_fu_49394_p1() {
    tmp_69_i_fu_49394_p1 = esl_sext<5,4>(tmp_68_i_fu_49384_p4.read());
}

void ShuffleNetV2::thread_tmp_700_fu_29212_p3() {
    tmp_700_fu_29212_p3 = esl_concat<9,5>(sum11_reg_52060.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_701_fu_29223_p3() {
    tmp_701_fu_29223_p3 = esl_concat<9,3>(sum11_reg_52060.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_702_cast_fu_26760_p1() {
    tmp_702_cast_fu_26760_p1 = esl_zext<32,15>(tmp_532_fu_26755_p2.read());
}

void ShuffleNetV2::thread_tmp_702_fu_29234_p2() {
    tmp_702_fu_29234_p2 = (!p_shl351_cast_fu_29219_p1.read().is_01() || !p_shl352_cast_fu_29230_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl351_cast_fu_29219_p1.read()) - sc_biguint<15>(p_shl352_cast_fu_29230_p1.read()));
}

void ShuffleNetV2::thread_tmp_703_cast_fu_26770_p1() {
    tmp_703_cast_fu_26770_p1 = esl_zext<32,14>(tmp_533_reg_50358.read());
}

void ShuffleNetV2::thread_tmp_703_fu_29244_p2() {
    tmp_703_fu_29244_p2 = (!ci34_cast1_cast_reg_51799.read().is_01() || !tmp_831_cast_fu_29240_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ci34_cast1_cast_reg_51799.read()) + sc_bigint<16>(tmp_831_cast_fu_29240_p1.read()));
}

void ShuffleNetV2::thread_tmp_704_fu_29729_p1() {
    tmp_704_fu_29729_p1 = co61_reg_18905.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_705_cast_fu_26934_p1() {
    tmp_705_cast_fu_26934_p1 = esl_sext<9,8>(tmp_565_fu_26928_p2.read());
}

void ShuffleNetV2::thread_tmp_705_fu_29637_p1() {
    tmp_705_fu_29637_p1 = k8_reg_18894.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_706_fu_29440_p1() {
    tmp_706_fu_29440_p1 = i41_reg_18872.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_707_fu_29487_p3() {
    tmp_707_fu_29487_p3 = esl_concat<7,2>(tmp_47_fu_29478_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_708_cast_fu_27002_p1() {
    tmp_708_cast_fu_27002_p1 = esl_sext<32,10>(tmp_569_fu_26997_p2.read());
}

void ShuffleNetV2::thread_tmp_708_fu_29499_p2() {
    tmp_708_fu_29499_p2 = (!p_shl356_cast_fu_29495_p1.read().is_01() || !tmp_47_cast_cast_fu_29483_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl356_cast_fu_29495_p1.read()) - sc_bigint<10>(tmp_47_cast_cast_fu_29483_p1.read()));
}

void ShuffleNetV2::thread_tmp_709_fu_29505_p2() {
    tmp_709_fu_29505_p2 = (!w59_cast_cast_reg_52141.read().is_01() || !tmp_708_fu_29499_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w59_cast_cast_reg_52141.read()) + sc_biguint<10>(tmp_708_fu_29499_p2.read()));
}

void ShuffleNetV2::thread_tmp_70_fu_31392_p2() {
    tmp_70_fu_31392_p2 = (!p_shl34_cast_fu_31376_p1.read().is_01() || !p_shl35_cast_fu_31388_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl34_cast_fu_31376_p1.read()) - sc_biguint<7>(p_shl35_cast_fu_31388_p1.read()));
}

void ShuffleNetV2::thread_tmp_70_i_fu_49398_p2() {
    tmp_70_i_fu_49398_p2 = (!ap_const_lv6_0.is_01() || !tmp_66_i_cast_fu_49381_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_0) - sc_biguint<6>(tmp_66_i_cast_fu_49381_p1.read()));
}

void ShuffleNetV2::thread_tmp_710_fu_29521_p2() {
    tmp_710_fu_29521_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_709_reg_52180.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_711_fu_29526_p2() {
    tmp_711_fu_29526_p2 = (!tmp_710_fu_29521_p2.read().is_01() || !tmp_709_reg_52180.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_710_fu_29521_p2.read()) - sc_biguint<10>(tmp_709_reg_52180.read()));
}

void ShuffleNetV2::thread_tmp_712_fu_29531_p2() {
    tmp_712_fu_29531_p2 = (!h58_cast_cast_reg_52159.read().is_01() || !tmp_711_fu_29526_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h58_cast_cast_reg_52159.read()) + sc_biguint<10>(tmp_711_fu_29526_p2.read()));
}

void ShuffleNetV2::thread_tmp_713_fu_29539_p3() {
    tmp_713_fu_29539_p3 = esl_concat<8,2>(sum13_reg_52186.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_714_fu_29550_p2() {
    tmp_714_fu_29550_p2 = (!p_shl354_cast_fu_29546_p1.read().is_01() || !sum17_cast_cast_fu_29536_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl354_cast_fu_29546_p1.read()) - sc_biguint<11>(sum17_cast_cast_fu_29536_p1.read()));
}

void ShuffleNetV2::thread_tmp_715_cast_fu_27073_p1() {
    tmp_715_cast_fu_27073_p1 = esl_zext<32,9>(tmp_576_fu_27068_p2.read());
}

void ShuffleNetV2::thread_tmp_715_fu_29560_p2() {
    tmp_715_fu_29560_p2 = (!w59_cast_cast1_reg_52136.read().is_01() || !tmp_846_cast_fu_29556_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(w59_cast_cast1_reg_52136.read()) + sc_bigint<12>(tmp_846_cast_fu_29556_p1.read()));
}

void ShuffleNetV2::thread_tmp_716_fu_29568_p3() {
    tmp_716_fu_29568_p3 = esl_concat<12,2>(tmp_715_reg_52197.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_717_fu_29579_p2() {
    tmp_717_fu_29579_p2 = (!p_shl219_fu_29575_p1.read().is_01() || !tmp_847_cast_fu_29565_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl219_fu_29575_p1.read()) - sc_bigint<32>(tmp_847_cast_fu_29565_p1.read()));
}

void ShuffleNetV2::thread_tmp_718_fu_29585_p2() {
    tmp_718_fu_29585_p2 = (!h58_cast_reg_52154.read().is_01() || !tmp_717_fu_29579_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h58_cast_reg_52154.read()) + sc_biguint<32>(tmp_717_fu_29579_p2.read()));
}

void ShuffleNetV2::thread_tmp_719_fu_30030_p1() {
    tmp_719_fu_30030_p1 = k9_reg_18949.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_71_fu_31402_p2() {
    tmp_71_fu_31402_p2 = (!tmp_70_fu_31392_p2.read().is_01() || !i56_cast1_reg_53427.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_70_fu_31392_p2.read()) + sc_biguint<7>(i56_cast1_reg_53427.read()));
}

void ShuffleNetV2::thread_tmp_71_i_cast_fu_49404_p1() {
    tmp_71_i_cast_fu_49404_p1 = esl_zext<6,5>(tmp_69_i_fu_49394_p1.read());
}

void ShuffleNetV2::thread_tmp_720_fu_29866_p1() {
    tmp_720_fu_29866_p1 = i43_reg_18927.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_721_fu_29946_p3() {
    tmp_721_fu_29946_p3 = esl_concat<9,5>(sum15_reg_52535.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_722_fu_29957_p3() {
    tmp_722_fu_29957_p3 = esl_concat<9,3>(sum15_reg_52535.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_723_fu_29968_p2() {
    tmp_723_fu_29968_p2 = (!p_shl357_cast_fu_29953_p1.read().is_01() || !p_shl358_cast_fu_29964_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl357_cast_fu_29953_p1.read()) - sc_biguint<15>(p_shl358_cast_fu_29964_p1.read()));
}

void ShuffleNetV2::thread_tmp_724_fu_29978_p2() {
    tmp_724_fu_29978_p2 = (!ci36_cast1_cast_reg_52274.read().is_01() || !tmp_859_cast_fu_29974_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ci36_cast1_cast_reg_52274.read()) + sc_bigint<16>(tmp_859_cast_fu_29974_p1.read()));
}

void ShuffleNetV2::thread_tmp_725_fu_30459_p1() {
    tmp_725_fu_30459_p1 = co65_reg_19026.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_726_fu_30371_p1() {
    tmp_726_fu_30371_p1 = k10_reg_19015.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_727_fu_30178_p1() {
    tmp_727_fu_30178_p1 = i48_reg_18993.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_728_fu_30225_p3() {
    tmp_728_fu_30225_p3 = esl_concat<7,2>(tmp_62_fu_30216_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_729_fu_30237_p2() {
    tmp_729_fu_30237_p2 = (!p_shl362_cast_fu_30233_p1.read().is_01() || !tmp_62_cast_cast_fu_30221_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl362_cast_fu_30233_p1.read()) - sc_bigint<10>(tmp_62_cast_cast_fu_30221_p1.read()));
}

void ShuffleNetV2::thread_tmp_72_cast_fu_30656_p1() {
    tmp_72_cast_fu_30656_p1 = esl_sext<9,8>(tmp_67_fu_30650_p2.read());
}

void ShuffleNetV2::thread_tmp_72_fu_31224_p2() {
    tmp_72_fu_31224_p2 = (!p_shl36_fu_31204_p3.read().is_01() || !p_shl37_cast_fu_31220_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl36_fu_31204_p3.read()) - sc_biguint<6>(p_shl37_cast_fu_31220_p1.read()));
}

void ShuffleNetV2::thread_tmp_72_i_fu_49408_p3() {
    tmp_72_i_fu_49408_p3 = (!tmp_1404_fu_49373_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_1404_fu_49373_p3.read()[0].to_bool())? tmp_70_i_fu_49398_p2.read(): tmp_71_i_cast_fu_49404_p1.read());
}

void ShuffleNetV2::thread_tmp_730_fu_30243_p2() {
    tmp_730_fu_30243_p2 = (!w61_cast_cast_reg_52616.read().is_01() || !tmp_729_fu_30237_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w61_cast_cast_reg_52616.read()) + sc_biguint<10>(tmp_729_fu_30237_p2.read()));
}

void ShuffleNetV2::thread_tmp_731_fu_30259_p2() {
    tmp_731_fu_30259_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_730_reg_52655.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_732_fu_30264_p2() {
    tmp_732_fu_30264_p2 = (!tmp_731_fu_30259_p2.read().is_01() || !tmp_730_reg_52655.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_731_fu_30259_p2.read()) - sc_biguint<10>(tmp_730_reg_52655.read()));
}

void ShuffleNetV2::thread_tmp_733_fu_30269_p2() {
    tmp_733_fu_30269_p2 = (!h60_cast_cast_reg_52634.read().is_01() || !tmp_732_fu_30264_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h60_cast_cast_reg_52634.read()) + sc_biguint<10>(tmp_732_fu_30264_p2.read()));
}

void ShuffleNetV2::thread_tmp_734_fu_30277_p3() {
    tmp_734_fu_30277_p3 = esl_concat<8,2>(sum17_reg_52661.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_735_fu_30288_p2() {
    tmp_735_fu_30288_p2 = (!p_shl360_cast_fu_30284_p1.read().is_01() || !sum19_cast_cast_fu_30274_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl360_cast_fu_30284_p1.read()) - sc_biguint<11>(sum19_cast_cast_fu_30274_p1.read()));
}

void ShuffleNetV2::thread_tmp_736_fu_30294_p2() {
    tmp_736_fu_30294_p2 = (!w61_cast_cast1_reg_52611.read().is_01() || !tmp_735_fu_30288_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w61_cast_cast1_reg_52611.read()) + sc_biguint<11>(tmp_735_fu_30288_p2.read()));
}

void ShuffleNetV2::thread_tmp_737_fu_30302_p3() {
    tmp_737_fu_30302_p3 = esl_concat<11,2>(tmp_736_reg_52672.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_738_fu_30313_p2() {
    tmp_738_fu_30313_p2 = (!p_shl221_fu_30309_p1.read().is_01() || !tmp_875_cast_fu_30299_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl221_fu_30309_p1.read()) - sc_bigint<32>(tmp_875_cast_fu_30299_p1.read()));
}

void ShuffleNetV2::thread_tmp_739_fu_30319_p2() {
    tmp_739_fu_30319_p2 = (!h60_cast_reg_52629.read().is_01() || !tmp_738_fu_30313_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h60_cast_reg_52629.read()) + sc_biguint<32>(tmp_738_fu_30313_p2.read()));
}

void ShuffleNetV2::thread_tmp_73_fu_31254_p2() {
    tmp_73_fu_31254_p2 = (!p_shl38_cast_fu_31238_p1.read().is_01() || !p_shl39_cast_fu_31250_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl38_cast_fu_31238_p1.read()) - sc_biguint<8>(p_shl39_cast_fu_31250_p1.read()));
}

void ShuffleNetV2::thread_tmp_740_fu_30836_p3() {
    tmp_740_fu_30836_p3 = esl_concat<6,3>(co67_reg_19081.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_741_fu_30848_p3() {
    tmp_741_fu_30848_p3 = esl_concat<6,1>(co67_reg_19081.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_742_fu_30860_p2() {
    tmp_742_fu_30860_p2 = (!p_shl366_cast_fu_30856_p1.read().is_01() || !p_shl365_cast_fu_30844_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl366_cast_fu_30856_p1.read()) + sc_biguint<10>(p_shl365_cast_fu_30844_p1.read()));
}

void ShuffleNetV2::thread_tmp_743_fu_30888_p3() {
    tmp_743_fu_30888_p3 = esl_concat<7,3>(tmp_63_fu_30882_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_744_fu_30900_p3() {
    tmp_744_fu_30900_p3 = esl_concat<7,1>(tmp_63_fu_30882_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_745_fu_30912_p2() {
    tmp_745_fu_30912_p2 = (!p_shl368_cast_fu_30908_p1.read().is_01() || !p_shl367_cast_fu_30896_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl368_cast_fu_30908_p1.read()) + sc_biguint<11>(p_shl367_cast_fu_30896_p1.read()));
}

void ShuffleNetV2::thread_tmp_746_cast_fu_27372_p1() {
    tmp_746_cast_fu_27372_p1 = esl_zext<32,15>(tmp_614_fu_27367_p2.read());
}

void ShuffleNetV2::thread_tmp_746_fu_30764_p1() {
    tmp_746_fu_30764_p1 = k12_reg_19070.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_747_fu_30596_p1() {
    tmp_747_fu_30596_p1 = i50_reg_19048.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_748_cast_fu_27566_p1() {
    tmp_748_cast_fu_27566_p1 = esl_zext<32,15>(tmp_615_fu_27561_p2.read());
}

void ShuffleNetV2::thread_tmp_748_fu_30680_p3() {
    tmp_748_fu_30680_p3 = esl_concat<10,5>(sum19_reg_53010.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_749_cast_fu_27576_p1() {
    tmp_749_cast_fu_27576_p1 = esl_zext<32,14>(tmp_616_reg_50847.read());
}

void ShuffleNetV2::thread_tmp_749_fu_30691_p3() {
    tmp_749_fu_30691_p3 = esl_concat<10,3>(sum19_reg_53010.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_74_fu_31825_p2() {
    tmp_74_fu_31825_p2 = (!p_shl42_cast_fu_31809_p1.read().is_01() || !p_shl43_cast_fu_31821_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl42_cast_fu_31809_p1.read()) - sc_biguint<7>(p_shl43_cast_fu_31821_p1.read()));
}

void ShuffleNetV2::thread_tmp_750_fu_30702_p2() {
    tmp_750_fu_30702_p2 = (!p_shl363_cast_fu_30687_p1.read().is_01() || !p_shl364_cast_fu_30698_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl363_cast_fu_30687_p1.read()) - sc_biguint<16>(p_shl364_cast_fu_30698_p1.read()));
}

void ShuffleNetV2::thread_tmp_751_cast_fu_27740_p1() {
    tmp_751_cast_fu_27740_p1 = esl_sext<9,8>(tmp_618_fu_27734_p2.read());
}

void ShuffleNetV2::thread_tmp_751_fu_30712_p2() {
    tmp_751_fu_30712_p2 = (!ci38_cast1_cast_reg_52749.read().is_01() || !tmp_893_cast_fu_30708_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci38_cast1_cast_reg_52749.read()) + sc_bigint<17>(tmp_893_cast_fu_30708_p1.read()));
}

void ShuffleNetV2::thread_tmp_752_fu_31063_p1() {
    tmp_752_fu_31063_p1 = co69_reg_19114.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_753_fu_30938_p2() {
    tmp_753_fu_30938_p2 = (!h_63_cast_cast_fu_30934_p1.read().is_01() || !tmp_745_reg_53081.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_63_cast_cast_fu_30934_p1.read()) + sc_biguint<11>(tmp_745_reg_53081.read()));
}

void ShuffleNetV2::thread_tmp_754_cast_fu_27808_p1() {
    tmp_754_cast_fu_27808_p1 = esl_sext<32,10>(tmp_622_fu_27803_p2.read());
}

void ShuffleNetV2::thread_tmp_754_fu_30943_p3() {
    tmp_754_fu_30943_p3 = esl_concat<11,3>(tmp_753_fu_30938_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_755_fu_30955_p3() {
    tmp_755_fu_30955_p3 = esl_concat<11,1>(tmp_753_fu_30938_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_756_fu_30967_p2() {
    tmp_756_fu_30967_p2 = (!p_shl371_cast_fu_30951_p1.read().is_01() || !p_shl372_cast_fu_30963_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl371_cast_fu_30951_p1.read()) + sc_biguint<15>(p_shl372_cast_fu_30963_p1.read()));
}

void ShuffleNetV2::thread_tmp_757_fu_30973_p2() {
    tmp_757_fu_30973_p2 = (!h_63_cast_cast1_fu_30930_p1.read().is_01() || !tmp_742_reg_53068.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_63_cast_cast1_fu_30930_p1.read()) + sc_biguint<10>(tmp_742_reg_53068.read()));
}

void ShuffleNetV2::thread_tmp_758_fu_30978_p3() {
    tmp_758_fu_30978_p3 = esl_concat<10,3>(tmp_757_fu_30973_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_759_fu_30990_p3() {
    tmp_759_fu_30990_p3 = esl_concat<10,1>(tmp_757_fu_30973_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_75_cast_fu_29773_p1() {
    tmp_75_cast_fu_29773_p1 = esl_zext<6,4>(p_lshr_f1_cast_fu_29763_p4.read());
}

void ShuffleNetV2::thread_tmp_75_fu_31737_p2() {
    tmp_75_fu_31737_p2 = (!p_shl40_cast_fu_31721_p1.read().is_01() || !p_shl41_cast_fu_31733_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl40_cast_fu_31721_p1.read()) - sc_biguint<7>(p_shl41_cast_fu_31733_p1.read()));
}

void ShuffleNetV2::thread_tmp_760_fu_31002_p2() {
    tmp_760_fu_31002_p2 = (!p_shl369_cast_fu_30986_p1.read().is_01() || !p_shl370_cast_fu_30998_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl369_cast_fu_30986_p1.read()) + sc_biguint<14>(p_shl370_cast_fu_30998_p1.read()));
}

void ShuffleNetV2::thread_tmp_761_cast_fu_27879_p1() {
    tmp_761_cast_fu_27879_p1 = esl_zext<32,9>(tmp_629_fu_27874_p2.read());
}

void ShuffleNetV2::thread_tmp_761_fu_31028_p2() {
    tmp_761_fu_31028_p2 = (!tmp_756_reg_53094.read().is_01() || !w_64_cast_cast_fu_31024_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_756_reg_53094.read()) + sc_biguint<15>(w_64_cast_cast_fu_31024_p1.read()));
}

void ShuffleNetV2::thread_tmp_762_fu_31038_p2() {
    tmp_762_fu_31038_p2 = (!tmp_760_reg_53099.read().is_01() || !w_64_cast_cast1_fu_31020_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_760_reg_53099.read()) + sc_biguint<14>(w_64_cast_cast1_fu_31020_p1.read()));
}

void ShuffleNetV2::thread_tmp_763_fu_31364_p1() {
    tmp_763_fu_31364_p1 = k14_reg_19158.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_764_fu_31200_p1() {
    tmp_764_fu_31200_p1 = i54_reg_19136.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_765_fu_31280_p3() {
    tmp_765_fu_31280_p3 = esl_concat<10,5>(sum22_reg_53406.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_766_fu_31291_p3() {
    tmp_766_fu_31291_p3 = esl_concat<10,3>(sum22_reg_53406.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_767_fu_31302_p2() {
    tmp_767_fu_31302_p2 = (!p_shl373_cast_fu_31287_p1.read().is_01() || !p_shl374_cast_fu_31298_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl373_cast_fu_31287_p1.read()) - sc_biguint<16>(p_shl374_cast_fu_31298_p1.read()));
}

void ShuffleNetV2::thread_tmp_768_fu_31312_p2() {
    tmp_768_fu_31312_p2 = (!ci40_cast1_cast_reg_53145.read().is_01() || !tmp_915_cast_fu_31308_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci40_cast1_cast_reg_53145.read()) + sc_bigint<17>(tmp_915_cast_fu_31308_p1.read()));
}

void ShuffleNetV2::thread_tmp_769_fu_31797_p1() {
    tmp_769_fu_31797_p1 = co73_reg_19235.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_76_fu_31747_p2() {
    tmp_76_fu_31747_p2 = (!tmp_75_fu_31737_p2.read().is_01() || !i59_cast1_reg_53560.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_75_fu_31737_p2.read()) + sc_biguint<7>(i59_cast1_reg_53560.read()));
}

void ShuffleNetV2::thread_tmp_770_fu_31709_p1() {
    tmp_770_fu_31709_p1 = k16_reg_19224.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_771_fu_31508_p1() {
    tmp_771_fu_31508_p1 = i59_reg_19202.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_772_fu_31551_p3() {
    tmp_772_fu_31551_p3 = esl_concat<7,2>(tmp_79_fu_31542_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_773_fu_31563_p2() {
    tmp_773_fu_31563_p2 = (!p_shl378_cast_fu_31559_p1.read().is_01() || !tmp_95_cast_cast_fu_31547_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl378_cast_fu_31559_p1.read()) - sc_bigint<10>(tmp_95_cast_cast_fu_31547_p1.read()));
}

void ShuffleNetV2::thread_tmp_774_fu_31569_p2() {
    tmp_774_fu_31569_p2 = (!w65_cast_cast_reg_53487.read().is_01() || !tmp_773_fu_31563_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w65_cast_cast_reg_53487.read()) + sc_biguint<10>(tmp_773_fu_31563_p2.read()));
}

void ShuffleNetV2::thread_tmp_775_fu_31593_p2() {
    tmp_775_fu_31593_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_774_reg_53526.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_776_fu_31598_p2() {
    tmp_776_fu_31598_p2 = (!tmp_775_fu_31593_p2.read().is_01() || !tmp_774_reg_53526.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_775_fu_31593_p2.read()) - sc_biguint<10>(tmp_774_reg_53526.read()));
}

void ShuffleNetV2::thread_tmp_777_fu_31603_p2() {
    tmp_777_fu_31603_p2 = (!h64_cast_cast_reg_53505.read().is_01() || !tmp_776_fu_31598_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h64_cast_cast_reg_53505.read()) + sc_biguint<10>(tmp_776_fu_31598_p2.read()));
}

void ShuffleNetV2::thread_tmp_778_fu_31611_p3() {
    tmp_778_fu_31611_p3 = esl_concat<9,2>(sum21_reg_53532.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_779_fu_31622_p2() {
    tmp_779_fu_31622_p2 = (!p_shl376_cast_fu_31618_p1.read().is_01() || !sum21_cast_cast_fu_31608_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl376_cast_fu_31618_p1.read()) - sc_biguint<12>(sum21_cast_cast_fu_31608_p1.read()));
}

void ShuffleNetV2::thread_tmp_77_cast_fu_30503_p1() {
    tmp_77_cast_fu_30503_p1 = esl_zext<6,4>(p_lshr_f2_cast_fu_30493_p4.read());
}

void ShuffleNetV2::thread_tmp_77_fu_31865_p2() {
    tmp_77_fu_31865_p2 = (!ci42_cast_fu_31845_p1.read().is_01() || !tmp_74_reg_53610.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci42_cast_fu_31845_p1.read()) + sc_biguint<7>(tmp_74_reg_53610.read()));
}

void ShuffleNetV2::thread_tmp_780_fu_31632_p2() {
    tmp_780_fu_31632_p2 = (!w65_cast_cast1_reg_53482.read().is_01() || !tmp_930_cast_fu_31628_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w65_cast_cast1_reg_53482.read()) + sc_bigint<13>(tmp_930_cast_fu_31628_p1.read()));
}

void ShuffleNetV2::thread_tmp_781_fu_31640_p3() {
    tmp_781_fu_31640_p3 = esl_concat<13,2>(tmp_780_reg_53543.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_782_fu_31651_p2() {
    tmp_782_fu_31651_p2 = (!p_shl226_fu_31647_p1.read().is_01() || !tmp_931_cast_fu_31637_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl226_fu_31647_p1.read()) - sc_bigint<32>(tmp_931_cast_fu_31637_p1.read()));
}

void ShuffleNetV2::thread_tmp_783_fu_31657_p2() {
    tmp_783_fu_31657_p2 = (!h64_cast_reg_53500.read().is_01() || !tmp_782_fu_31651_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h64_cast_reg_53500.read()) + sc_biguint<32>(tmp_782_fu_31651_p2.read()));
}

void ShuffleNetV2::thread_tmp_784_fu_32170_p3() {
    tmp_784_fu_32170_p3 = esl_concat<6,3>(co75_reg_19290.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_785_fu_32182_p3() {
    tmp_785_fu_32182_p3 = esl_concat<6,1>(co75_reg_19290.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_786_fu_32194_p2() {
    tmp_786_fu_32194_p2 = (!p_shl382_cast_fu_32190_p1.read().is_01() || !p_shl381_cast_fu_32178_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl382_cast_fu_32190_p1.read()) + sc_biguint<10>(p_shl381_cast_fu_32178_p1.read()));
}

void ShuffleNetV2::thread_tmp_787_fu_32098_p1() {
    tmp_787_fu_32098_p1 = k18_reg_19279.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_788_fu_31934_p1() {
    tmp_788_fu_31934_p1 = i61_reg_19257.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_789_fu_32014_p3() {
    tmp_789_fu_32014_p3 = esl_concat<10,5>(sum28_reg_53881.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_78_cast_fu_31107_p1() {
    tmp_78_cast_fu_31107_p1 = esl_zext<6,4>(p_lshr_f3_cast_fu_31097_p4.read());
}

void ShuffleNetV2::thread_tmp_78_fu_31536_p2() {
    tmp_78_fu_31536_p2 = (!p_shl44_cast_fu_31520_p1.read().is_01() || !p_shl45_cast_fu_31532_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl44_cast_fu_31520_p1.read()) - sc_biguint<7>(p_shl45_cast_fu_31532_p1.read()));
}

void ShuffleNetV2::thread_tmp_790_cast_fu_28160_p1() {
    tmp_790_cast_fu_28160_p1 = esl_zext<32,15>(tmp_660_fu_28155_p2.read());
}

void ShuffleNetV2::thread_tmp_790_fu_32025_p3() {
    tmp_790_fu_32025_p3 = esl_concat<10,3>(sum28_reg_53881.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_791_fu_32036_p2() {
    tmp_791_fu_32036_p2 = (!p_shl379_cast_fu_32021_p1.read().is_01() || !p_shl380_cast_fu_32032_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl379_cast_fu_32021_p1.read()) - sc_biguint<16>(p_shl380_cast_fu_32032_p1.read()));
}

void ShuffleNetV2::thread_tmp_792_cast_fu_28354_p1() {
    tmp_792_cast_fu_28354_p1 = esl_zext<32,15>(tmp_665_fu_28349_p2.read());
}

void ShuffleNetV2::thread_tmp_792_fu_32046_p2() {
    tmp_792_fu_32046_p2 = (!ci42_cast1_cast_reg_53620.read().is_01() || !tmp_946_cast_fu_32042_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci42_cast1_cast_reg_53620.read()) + sc_bigint<17>(tmp_946_cast_fu_32042_p1.read()));
}

void ShuffleNetV2::thread_tmp_793_cast_fu_28364_p1() {
    tmp_793_cast_fu_28364_p1 = esl_zext<32,14>(tmp_666_reg_51336.read());
}

void ShuffleNetV2::thread_tmp_793_fu_32289_p3() {
    tmp_793_fu_32289_p3 = esl_concat<6,3>(co77_reg_19323.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_794_fu_32301_p3() {
    tmp_794_fu_32301_p3 = esl_concat<6,1>(co77_reg_19323.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_795_cast_fu_28536_p1() {
    tmp_795_cast_fu_28536_p1 = esl_sext<9,8>(tmp_668_fu_28530_p2.read());
}

void ShuffleNetV2::thread_tmp_795_fu_32313_p2() {
    tmp_795_fu_32313_p2 = (!p_shl386_cast_fu_32309_p1.read().is_01() || !p_shl385_cast_fu_32297_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl386_cast_fu_32309_p1.read()) + sc_biguint<10>(p_shl385_cast_fu_32297_p1.read()));
}

void ShuffleNetV2::thread_tmp_796_fu_32341_p3() {
    tmp_796_fu_32341_p3 = esl_concat<7,3>(tmp_84_fu_32335_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_797_fu_32353_p3() {
    tmp_797_fu_32353_p3 = esl_concat<7,1>(tmp_84_fu_32335_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_798_cast_fu_28592_p1() {
    tmp_798_cast_fu_28592_p1 = esl_sext<11,10>(tmp_672_fu_28586_p2.read());
}

void ShuffleNetV2::thread_tmp_798_fu_32365_p2() {
    tmp_798_fu_32365_p2 = (!p_shl388_cast_fu_32361_p1.read().is_01() || !p_shl387_cast_fu_32349_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl388_cast_fu_32361_p1.read()) + sc_biguint<11>(p_shl387_cast_fu_32349_p1.read()));
}

void ShuffleNetV2::thread_tmp_799_cast_fu_28620_p1() {
    tmp_799_cast_fu_28620_p1 = esl_sext<32,11>(tmp_673_fu_28615_p2.read());
}

void ShuffleNetV2::thread_tmp_799_fu_32228_p2() {
    tmp_799_fu_32228_p2 = (!h_67_cast_cast_fu_32224_p1.read().is_01() || !tmp_786_reg_53939.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_67_cast_cast_fu_32224_p1.read()) + sc_biguint<10>(tmp_786_reg_53939.read()));
}

void ShuffleNetV2::thread_tmp_79_fu_31542_p2() {
    tmp_79_fu_31542_p2 = (!co72_cast1_reg_53469.read().is_01() || !tmp_78_fu_31536_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co72_cast1_reg_53469.read()) + sc_biguint<7>(tmp_78_fu_31536_p2.read()));
}

void ShuffleNetV2::thread_tmp_800_fu_32233_p3() {
    tmp_800_fu_32233_p3 = esl_concat<10,3>(tmp_799_fu_32228_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_801_fu_32245_p3() {
    tmp_801_fu_32245_p3 = esl_concat<10,1>(tmp_799_fu_32228_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_802_fu_32257_p2() {
    tmp_802_fu_32257_p2 = (!p_shl383_cast_fu_32241_p1.read().is_01() || !p_shl384_cast_fu_32253_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl383_cast_fu_32241_p1.read()) + sc_biguint<15>(p_shl384_cast_fu_32253_p1.read()));
}

void ShuffleNetV2::thread_tmp_803_fu_32516_p1() {
    tmp_803_fu_32516_p1 = co79_reg_19356.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_804_fu_32391_p2() {
    tmp_804_fu_32391_p2 = (!h_69_cast_cast_fu_32387_p1.read().is_01() || !tmp_798_reg_53996.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_69_cast_cast_fu_32387_p1.read()) + sc_biguint<11>(tmp_798_reg_53996.read()));
}

void ShuffleNetV2::thread_tmp_805_fu_32396_p3() {
    tmp_805_fu_32396_p3 = esl_concat<11,3>(tmp_804_fu_32391_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_806_cast_fu_28691_p1() {
    tmp_806_cast_fu_28691_p1 = esl_zext<32,9>(tmp_680_fu_28686_p2.read());
}

void ShuffleNetV2::thread_tmp_806_fu_32408_p3() {
    tmp_806_fu_32408_p3 = esl_concat<11,1>(tmp_804_fu_32391_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_807_fu_32420_p2() {
    tmp_807_fu_32420_p2 = (!p_shl391_cast_fu_32404_p1.read().is_01() || !p_shl392_cast_fu_32416_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl391_cast_fu_32404_p1.read()) + sc_biguint<15>(p_shl392_cast_fu_32416_p1.read()));
}

void ShuffleNetV2::thread_tmp_808_fu_32426_p2() {
    tmp_808_fu_32426_p2 = (!h_69_cast_cast1_fu_32383_p1.read().is_01() || !tmp_795_reg_53983.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_69_cast_cast1_fu_32383_p1.read()) + sc_biguint<10>(tmp_795_reg_53983.read()));
}

void ShuffleNetV2::thread_tmp_809_fu_32431_p3() {
    tmp_809_fu_32431_p3 = esl_concat<10,3>(tmp_808_fu_32426_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_80_cast_fu_31398_p1() {
    tmp_80_cast_fu_31398_p1 = esl_sext<10,7>(tmp_70_fu_31392_p2.read());
}

void ShuffleNetV2::thread_tmp_80_fu_32126_p2() {
    tmp_80_fu_32126_p2 = (!p_shl46_cast_fu_32110_p1.read().is_01() || !p_shl47_cast_fu_32122_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl46_cast_fu_32110_p1.read()) - sc_biguint<7>(p_shl47_cast_fu_32122_p1.read()));
}

void ShuffleNetV2::thread_tmp_810_fu_32443_p3() {
    tmp_810_fu_32443_p3 = esl_concat<10,1>(tmp_808_fu_32426_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_811_fu_32455_p2() {
    tmp_811_fu_32455_p2 = (!p_shl389_cast_fu_32439_p1.read().is_01() || !p_shl390_cast_fu_32451_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl389_cast_fu_32439_p1.read()) + sc_biguint<14>(p_shl390_cast_fu_32451_p1.read()));
}

void ShuffleNetV2::thread_tmp_812_fu_32279_p2() {
    tmp_812_fu_32279_p2 = (!tmp_802_reg_53960.read().is_01() || !w_68_cast_cast_fu_32275_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_802_reg_53960.read()) + sc_biguint<15>(w_68_cast_cast_fu_32275_p1.read()));
}

void ShuffleNetV2::thread_tmp_813_fu_32481_p2() {
    tmp_813_fu_32481_p2 = (!tmp_807_reg_54009.read().is_01() || !w_70_cast_cast_fu_32477_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_807_reg_54009.read()) + sc_biguint<15>(w_70_cast_cast_fu_32477_p1.read()));
}

void ShuffleNetV2::thread_tmp_814_fu_32491_p2() {
    tmp_814_fu_32491_p2 = (!tmp_811_reg_54014.read().is_01() || !w_70_cast_cast1_fu_32473_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_811_reg_54014.read()) + sc_biguint<14>(w_70_cast_cast1_fu_32473_p1.read()));
}

void ShuffleNetV2::thread_tmp_815_fu_32817_p1() {
    tmp_815_fu_32817_p1 = k20_reg_19400.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_816_fu_32653_p1() {
    tmp_816_fu_32653_p1 = i65_reg_19378.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_817_fu_32733_p3() {
    tmp_817_fu_32733_p3 = esl_concat<10,5>(sum32_reg_54321.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_818_fu_32744_p3() {
    tmp_818_fu_32744_p3 = esl_concat<10,3>(sum32_reg_54321.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_819_fu_32755_p2() {
    tmp_819_fu_32755_p2 = (!p_shl393_cast_fu_32740_p1.read().is_01() || !p_shl394_cast_fu_32751_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl393_cast_fu_32740_p1.read()) - sc_biguint<16>(p_shl394_cast_fu_32751_p1.read()));
}

void ShuffleNetV2::thread_tmp_81_cast_fu_31432_p1() {
    tmp_81_cast_fu_31432_p1 = esl_sext<32,7>(tmp_71_reg_53448.read());
}

void ShuffleNetV2::thread_tmp_81_fu_32136_p2() {
    tmp_81_fu_32136_p2 = (!tmp_80_fu_32126_p2.read().is_01() || !i63_cast1_reg_53902.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_80_fu_32126_p2.read()) + sc_biguint<7>(i63_cast1_reg_53902.read()));
}

void ShuffleNetV2::thread_tmp_820_fu_32765_p2() {
    tmp_820_fu_32765_p2 = (!ci44_cast1_cast_reg_54060.read().is_01() || !tmp_979_cast_fu_32761_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci44_cast1_cast_reg_54060.read()) + sc_bigint<17>(tmp_979_cast_fu_32761_p1.read()));
}

void ShuffleNetV2::thread_tmp_821_fu_33250_p1() {
    tmp_821_fu_33250_p1 = co83_reg_19477.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_822_cast_fu_28974_p1() {
    tmp_822_cast_fu_28974_p1 = esl_zext<32,15>(tmp_697_fu_28969_p2.read());
}

void ShuffleNetV2::thread_tmp_822_fu_33158_p1() {
    tmp_822_fu_33158_p1 = k22_reg_19466.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_823_fu_32961_p1() {
    tmp_823_fu_32961_p1 = i70_reg_19444.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_824_fu_33008_p3() {
    tmp_824_fu_33008_p3 = esl_concat<7,2>(tmp_96_fu_32999_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_825_fu_33020_p2() {
    tmp_825_fu_33020_p2 = (!p_shl398_cast_fu_33016_p1.read().is_01() || !tmp_124_cast_cast_fu_33004_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl398_cast_fu_33016_p1.read()) - sc_bigint<10>(tmp_124_cast_cast_fu_33004_p1.read()));
}

void ShuffleNetV2::thread_tmp_826_fu_33026_p2() {
    tmp_826_fu_33026_p2 = (!w71_cast_cast_reg_54402.read().is_01() || !tmp_825_fu_33020_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w71_cast_cast_reg_54402.read()) + sc_biguint<10>(tmp_825_fu_33020_p2.read()));
}

void ShuffleNetV2::thread_tmp_827_fu_33042_p2() {
    tmp_827_fu_33042_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_826_reg_54441.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_828_fu_33047_p2() {
    tmp_828_fu_33047_p2 = (!tmp_827_fu_33042_p2.read().is_01() || !tmp_826_reg_54441.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_827_fu_33042_p2.read()) - sc_biguint<10>(tmp_826_reg_54441.read()));
}

void ShuffleNetV2::thread_tmp_829_fu_33052_p2() {
    tmp_829_fu_33052_p2 = (!h70_cast_cast_reg_54420.read().is_01() || !tmp_828_fu_33047_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h70_cast_cast_reg_54420.read()) + sc_biguint<10>(tmp_828_fu_33047_p2.read()));
}

void ShuffleNetV2::thread_tmp_82_fu_31958_p2() {
    tmp_82_fu_31958_p2 = (!p_shl48_fu_31938_p3.read().is_01() || !p_shl49_cast_fu_31954_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl48_fu_31938_p3.read()) - sc_biguint<6>(p_shl49_cast_fu_31954_p1.read()));
}

void ShuffleNetV2::thread_tmp_830_fu_33060_p3() {
    tmp_830_fu_33060_p3 = esl_concat<9,2>(sum23_reg_54447.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_831_cast_fu_29240_p1() {
    tmp_831_cast_fu_29240_p1 = esl_sext<16,15>(tmp_702_fu_29234_p2.read());
}

void ShuffleNetV2::thread_tmp_831_fu_33071_p2() {
    tmp_831_fu_33071_p2 = (!p_shl396_cast_fu_33067_p1.read().is_01() || !sum23_cast_cast_fu_33057_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl396_cast_fu_33067_p1.read()) - sc_biguint<12>(sum23_cast_cast_fu_33057_p1.read()));
}

void ShuffleNetV2::thread_tmp_832_cast_fu_29249_p1() {
    tmp_832_cast_fu_29249_p1 = esl_sext<32,16>(tmp_703_fu_29244_p2.read());
}

void ShuffleNetV2::thread_tmp_832_fu_33081_p2() {
    tmp_832_fu_33081_p2 = (!w71_cast_cast1_reg_54397.read().is_01() || !tmp_994_cast_fu_33077_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w71_cast_cast1_reg_54397.read()) + sc_bigint<13>(tmp_994_cast_fu_33077_p1.read()));
}

void ShuffleNetV2::thread_tmp_833_fu_33089_p3() {
    tmp_833_fu_33089_p3 = esl_concat<13,2>(tmp_832_reg_54458.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_834_fu_33100_p2() {
    tmp_834_fu_33100_p2 = (!p_shl231_fu_33096_p1.read().is_01() || !tmp_995_cast_fu_33086_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl231_fu_33096_p1.read()) - sc_bigint<32>(tmp_995_cast_fu_33086_p1.read()));
}

void ShuffleNetV2::thread_tmp_835_fu_33106_p2() {
    tmp_835_fu_33106_p2 = (!h70_cast_reg_54415.read().is_01() || !tmp_834_fu_33100_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h70_cast_reg_54415.read()) + sc_biguint<32>(tmp_834_fu_33100_p2.read()));
}

void ShuffleNetV2::thread_tmp_836_fu_33627_p3() {
    tmp_836_fu_33627_p3 = esl_concat<6,3>(co85_reg_19532.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_837_fu_33639_p3() {
    tmp_837_fu_33639_p3 = esl_concat<6,1>(co85_reg_19532.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_838_fu_33651_p2() {
    tmp_838_fu_33651_p2 = (!p_shl402_cast_fu_33647_p1.read().is_01() || !p_shl401_cast_fu_33635_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl402_cast_fu_33647_p1.read()) + sc_biguint<10>(p_shl401_cast_fu_33635_p1.read()));
}

void ShuffleNetV2::thread_tmp_839_fu_33551_p1() {
    tmp_839_fu_33551_p1 = k24_reg_19521.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_83_cast_fu_31136_p1() {
    tmp_83_cast_fu_31136_p1 = esl_sext<32,7>(tmp_69_fu_31131_p2.read());
}

void ShuffleNetV2::thread_tmp_83_fu_31988_p2() {
    tmp_83_fu_31988_p2 = (!p_shl50_cast_fu_31972_p1.read().is_01() || !p_shl51_cast_fu_31984_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl50_cast_fu_31972_p1.read()) - sc_biguint<8>(p_shl51_cast_fu_31984_p1.read()));
}

void ShuffleNetV2::thread_tmp_840_fu_33387_p1() {
    tmp_840_fu_33387_p1 = i72_reg_19499.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_841_fu_33467_p3() {
    tmp_841_fu_33467_p3 = esl_concat<10,5>(sum38_reg_54796.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_842_fu_33478_p3() {
    tmp_842_fu_33478_p3 = esl_concat<10,3>(sum38_reg_54796.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_843_fu_33489_p2() {
    tmp_843_fu_33489_p2 = (!p_shl399_cast_fu_33474_p1.read().is_01() || !p_shl400_cast_fu_33485_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl399_cast_fu_33474_p1.read()) - sc_biguint<16>(p_shl400_cast_fu_33485_p1.read()));
}

void ShuffleNetV2::thread_tmp_844_cast_fu_29601_p1() {
    tmp_844_cast_fu_29601_p1 = esl_zext<32,10>(tmp_712_reg_52192.read());
}

void ShuffleNetV2::thread_tmp_844_fu_33499_p2() {
    tmp_844_fu_33499_p2 = (!ci46_cast1_cast_reg_54535.read().is_01() || !tmp_1010_cast_fu_33495_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci46_cast1_cast_reg_54535.read()) + sc_bigint<17>(tmp_1010_cast_fu_33495_p1.read()));
}

void ShuffleNetV2::thread_tmp_845_fu_33746_p3() {
    tmp_845_fu_33746_p3 = esl_concat<6,3>(co87_reg_19565.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_846_cast_fu_29556_p1() {
    tmp_846_cast_fu_29556_p1 = esl_sext<12,11>(tmp_714_fu_29550_p2.read());
}

void ShuffleNetV2::thread_tmp_846_fu_33758_p3() {
    tmp_846_fu_33758_p3 = esl_concat<6,1>(co87_reg_19565.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_847_cast_fu_29565_p1() {
    tmp_847_cast_fu_29565_p1 = esl_sext<32,12>(tmp_715_reg_52197.read());
}

void ShuffleNetV2::thread_tmp_847_fu_33770_p2() {
    tmp_847_fu_33770_p2 = (!p_shl406_cast_fu_33766_p1.read().is_01() || !p_shl405_cast_fu_33754_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl406_cast_fu_33766_p1.read()) + sc_biguint<10>(p_shl405_cast_fu_33754_p1.read()));
}

void ShuffleNetV2::thread_tmp_848_fu_33798_p3() {
    tmp_848_fu_33798_p3 = esl_concat<7,3>(tmp_101_fu_33792_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_849_fu_33810_p3() {
    tmp_849_fu_33810_p3 = esl_concat<7,1>(tmp_101_fu_33792_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_84_fu_32335_p2() {
    tmp_84_fu_32335_p2 = (!co77_cast_fu_32319_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co77_cast_fu_32319_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_850_fu_33822_p2() {
    tmp_850_fu_33822_p2 = (!p_shl408_cast_fu_33818_p1.read().is_01() || !p_shl407_cast_fu_33806_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl408_cast_fu_33818_p1.read()) + sc_biguint<11>(p_shl407_cast_fu_33806_p1.read()));
}

void ShuffleNetV2::thread_tmp_851_fu_33685_p2() {
    tmp_851_fu_33685_p2 = (!h_73_cast_cast_fu_33681_p1.read().is_01() || !tmp_838_reg_54854.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_73_cast_cast_fu_33681_p1.read()) + sc_biguint<10>(tmp_838_reg_54854.read()));
}

void ShuffleNetV2::thread_tmp_852_fu_33690_p3() {
    tmp_852_fu_33690_p3 = esl_concat<10,3>(tmp_851_fu_33685_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_853_fu_33702_p3() {
    tmp_853_fu_33702_p3 = esl_concat<10,1>(tmp_851_fu_33685_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_854_fu_33714_p2() {
    tmp_854_fu_33714_p2 = (!p_shl403_cast_fu_33698_p1.read().is_01() || !p_shl404_cast_fu_33710_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl403_cast_fu_33698_p1.read()) + sc_biguint<15>(p_shl404_cast_fu_33710_p1.read()));
}

void ShuffleNetV2::thread_tmp_855_fu_33973_p1() {
    tmp_855_fu_33973_p1 = co89_reg_19598.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_856_fu_33848_p2() {
    tmp_856_fu_33848_p2 = (!h_75_cast_cast_fu_33844_p1.read().is_01() || !tmp_850_reg_54911.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_75_cast_cast_fu_33844_p1.read()) + sc_biguint<11>(tmp_850_reg_54911.read()));
}

void ShuffleNetV2::thread_tmp_857_fu_33853_p3() {
    tmp_857_fu_33853_p3 = esl_concat<11,3>(tmp_856_fu_33848_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_858_fu_33865_p3() {
    tmp_858_fu_33865_p3 = esl_concat<11,1>(tmp_856_fu_33848_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_859_cast_fu_29974_p1() {
    tmp_859_cast_fu_29974_p1 = esl_sext<16,15>(tmp_723_fu_29968_p2.read());
}

void ShuffleNetV2::thread_tmp_859_fu_33877_p2() {
    tmp_859_fu_33877_p2 = (!p_shl411_cast_fu_33861_p1.read().is_01() || !p_shl412_cast_fu_33873_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl411_cast_fu_33861_p1.read()) + sc_biguint<15>(p_shl412_cast_fu_33873_p1.read()));
}

void ShuffleNetV2::thread_tmp_85_fu_32544_p2() {
    tmp_85_fu_32544_p2 = (!p_shl52_cast_fu_32528_p1.read().is_01() || !p_shl53_cast_fu_32540_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl52_cast_fu_32528_p1.read()) - sc_biguint<7>(p_shl53_cast_fu_32540_p1.read()));
}

void ShuffleNetV2::thread_tmp_860_cast_fu_29983_p1() {
    tmp_860_cast_fu_29983_p1 = esl_sext<32,16>(tmp_724_fu_29978_p2.read());
}

void ShuffleNetV2::thread_tmp_860_fu_33883_p2() {
    tmp_860_fu_33883_p2 = (!h_75_cast_cast1_fu_33840_p1.read().is_01() || !tmp_847_reg_54898.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_75_cast_cast1_fu_33840_p1.read()) + sc_biguint<10>(tmp_847_reg_54898.read()));
}

void ShuffleNetV2::thread_tmp_861_fu_33888_p3() {
    tmp_861_fu_33888_p3 = esl_concat<10,3>(tmp_860_fu_33883_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_862_fu_33900_p3() {
    tmp_862_fu_33900_p3 = esl_concat<10,1>(tmp_860_fu_33883_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_863_fu_33912_p2() {
    tmp_863_fu_33912_p2 = (!p_shl409_cast_fu_33896_p1.read().is_01() || !p_shl410_cast_fu_33908_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl409_cast_fu_33896_p1.read()) + sc_biguint<14>(p_shl410_cast_fu_33908_p1.read()));
}

void ShuffleNetV2::thread_tmp_864_fu_33736_p2() {
    tmp_864_fu_33736_p2 = (!tmp_854_reg_54875.read().is_01() || !w_74_cast_cast_fu_33732_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_854_reg_54875.read()) + sc_biguint<15>(w_74_cast_cast_fu_33732_p1.read()));
}

void ShuffleNetV2::thread_tmp_865_fu_33938_p2() {
    tmp_865_fu_33938_p2 = (!tmp_859_reg_54924.read().is_01() || !w_76_cast_cast_fu_33934_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_859_reg_54924.read()) + sc_biguint<15>(w_76_cast_cast_fu_33934_p1.read()));
}

void ShuffleNetV2::thread_tmp_866_fu_33948_p2() {
    tmp_866_fu_33948_p2 = (!tmp_863_reg_54929.read().is_01() || !w_76_cast_cast1_fu_33930_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_863_reg_54929.read()) + sc_biguint<14>(w_76_cast_cast1_fu_33930_p1.read()));
}

void ShuffleNetV2::thread_tmp_867_fu_34282_p1() {
    tmp_867_fu_34282_p1 = k26_reg_19642.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_868_fu_34110_p1() {
    tmp_868_fu_34110_p1 = i76_reg_19620.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_869_fu_34190_p3() {
    tmp_869_fu_34190_p3 = esl_concat<9,5>(sum42_reg_55236.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_86_cast_fu_31260_p1() {
    tmp_86_cast_fu_31260_p1 = esl_sext<10,8>(tmp_73_fu_31254_p2.read());
}

void ShuffleNetV2::thread_tmp_86_fu_32584_p2() {
    tmp_86_fu_32584_p2 = (!ci44_cast_fu_32564_p1.read().is_01() || !tmp_85_reg_54050.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci44_cast_fu_32564_p1.read()) + sc_biguint<7>(tmp_85_reg_54050.read()));
}

void ShuffleNetV2::thread_tmp_870_fu_34197_p1() {
    tmp_870_fu_34197_p1 = esl_sext<15,14>(tmp_869_fu_34190_p3.read());
}

void ShuffleNetV2::thread_tmp_871_fu_34205_p3() {
    tmp_871_fu_34205_p3 = esl_concat<9,3>(sum42_reg_55236.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_872_cast_fu_30335_p1() {
    tmp_872_cast_fu_30335_p1 = esl_zext<32,10>(tmp_733_reg_52667.read());
}

void ShuffleNetV2::thread_tmp_872_fu_34212_p1() {
    tmp_872_fu_34212_p1 = esl_sext<13,12>(tmp_871_fu_34205_p3.read());
}

void ShuffleNetV2::thread_tmp_873_fu_34220_p2() {
    tmp_873_fu_34220_p2 = (!p_shl413_cast_fu_34201_p1.read().is_01() || !p_shl414_cast_fu_34216_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl413_cast_fu_34201_p1.read()) - sc_biguint<16>(p_shl414_cast_fu_34216_p1.read()));
}

void ShuffleNetV2::thread_tmp_874_fu_34230_p2() {
    tmp_874_fu_34230_p2 = (!tmp_1045_cast_fu_34226_p1.read().is_01() || !ci48_cast1_cast_reg_54975.read().is_01())? sc_lv<17>(): (sc_bigint<17>(tmp_1045_cast_fu_34226_p1.read()) + sc_biguint<17>(ci48_cast1_cast_reg_54975.read()));
}

void ShuffleNetV2::thread_tmp_875_cast_fu_30299_p1() {
    tmp_875_cast_fu_30299_p1 = esl_sext<32,11>(tmp_736_reg_52672.read());
}

void ShuffleNetV2::thread_tmp_875_fu_34715_p1() {
    tmp_875_fu_34715_p1 = co93_reg_19719.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_876_fu_34623_p1() {
    tmp_876_fu_34623_p1 = k28_reg_19708.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_877_fu_34430_p1() {
    tmp_877_fu_34430_p1 = i81_reg_19686.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_878_fu_34477_p3() {
    tmp_878_fu_34477_p3 = esl_concat<7,2>(tmp_113_fu_34468_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_879_fu_34489_p2() {
    tmp_879_fu_34489_p2 = (!p_shl418_cast_fu_34485_p1.read().is_01() || !tmp_153_cast_cast_fu_34473_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl418_cast_fu_34485_p1.read()) - sc_bigint<10>(tmp_153_cast_cast_fu_34473_p1.read()));
}

void ShuffleNetV2::thread_tmp_87_fu_32845_p2() {
    tmp_87_fu_32845_p2 = (!p_shl54_cast_fu_32829_p1.read().is_01() || !p_shl55_cast_fu_32841_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl54_cast_fu_32829_p1.read()) - sc_biguint<7>(p_shl55_cast_fu_32841_p1.read()));
}

void ShuffleNetV2::thread_tmp_880_fu_34495_p2() {
    tmp_880_fu_34495_p2 = (!w77_cast_cast_reg_55317.read().is_01() || !tmp_879_fu_34489_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w77_cast_cast_reg_55317.read()) + sc_biguint<10>(tmp_879_fu_34489_p2.read()));
}

void ShuffleNetV2::thread_tmp_881_fu_34511_p2() {
    tmp_881_fu_34511_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_880_reg_55356.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_882_fu_34516_p2() {
    tmp_882_fu_34516_p2 = (!tmp_881_fu_34511_p2.read().is_01() || !tmp_880_reg_55356.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_881_fu_34511_p2.read()) - sc_biguint<10>(tmp_880_reg_55356.read()));
}

void ShuffleNetV2::thread_tmp_883_fu_34521_p2() {
    tmp_883_fu_34521_p2 = (!h76_cast_cast_reg_55335.read().is_01() || !tmp_882_fu_34516_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h76_cast_cast_reg_55335.read()) + sc_biguint<10>(tmp_882_fu_34516_p2.read()));
}

void ShuffleNetV2::thread_tmp_884_fu_34529_p3() {
    tmp_884_fu_34529_p3 = esl_concat<9,2>(sum25_reg_55362.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_885_fu_34540_p2() {
    tmp_885_fu_34540_p2 = (!p_shl416_cast_fu_34536_p1.read().is_01() || !sum25_cast_cast_fu_34526_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl416_cast_fu_34536_p1.read()) - sc_biguint<12>(sum25_cast_cast_fu_34526_p1.read()));
}

void ShuffleNetV2::thread_tmp_886_fu_34546_p2() {
    tmp_886_fu_34546_p2 = (!w77_cast_cast1_reg_55312.read().is_01() || !tmp_885_fu_34540_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(w77_cast_cast1_reg_55312.read()) + sc_biguint<12>(tmp_885_fu_34540_p2.read()));
}

void ShuffleNetV2::thread_tmp_887_fu_34554_p3() {
    tmp_887_fu_34554_p3 = esl_concat<12,2>(tmp_886_reg_55373.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_888_fu_34565_p2() {
    tmp_888_fu_34565_p2 = (!p_shl237_fu_34561_p1.read().is_01() || !tmp_1061_cast_fu_34551_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl237_fu_34561_p1.read()) - sc_bigint<32>(tmp_1061_cast_fu_34551_p1.read()));
}

void ShuffleNetV2::thread_tmp_889_fu_34571_p2() {
    tmp_889_fu_34571_p2 = (!h76_cast_reg_55330.read().is_01() || !tmp_888_fu_34565_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h76_cast_reg_55330.read()) + sc_biguint<32>(tmp_888_fu_34565_p2.read()));
}

void ShuffleNetV2::thread_tmp_88_cast_fu_31743_p1() {
    tmp_88_cast_fu_31743_p1 = esl_sext<10,7>(tmp_75_fu_31737_p2.read());
}

void ShuffleNetV2::thread_tmp_88_fu_32855_p2() {
    tmp_88_fu_32855_p2 = (!tmp_87_fu_32845_p2.read().is_01() || !i68_cast1_reg_54342.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_87_fu_32845_p2.read()) + sc_biguint<7>(i68_cast1_reg_54342.read()));
}

void ShuffleNetV2::thread_tmp_890_fu_35092_p3() {
    tmp_890_fu_35092_p3 = esl_concat<6,3>(co95_reg_19774.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_891_fu_35104_p3() {
    tmp_891_fu_35104_p3 = esl_concat<6,1>(co95_reg_19774.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_892_fu_35116_p2() {
    tmp_892_fu_35116_p2 = (!p_shl422_cast_fu_35112_p1.read().is_01() || !p_shl421_cast_fu_35100_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl422_cast_fu_35112_p1.read()) + sc_biguint<10>(p_shl421_cast_fu_35100_p1.read()));
}

void ShuffleNetV2::thread_tmp_893_cast_fu_30708_p1() {
    tmp_893_cast_fu_30708_p1 = esl_sext<17,16>(tmp_750_fu_30702_p2.read());
}

void ShuffleNetV2::thread_tmp_893_fu_35016_p1() {
    tmp_893_fu_35016_p1 = k30_reg_19763.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_894_cast_fu_30717_p1() {
    tmp_894_cast_fu_30717_p1 = esl_sext<32,17>(tmp_751_fu_30712_p2.read());
}

void ShuffleNetV2::thread_tmp_894_fu_34852_p1() {
    tmp_894_fu_34852_p1 = i83_reg_19741.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_895_fu_34932_p3() {
    tmp_895_fu_34932_p3 = esl_concat<11,5>(sum47_reg_55711.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_896_fu_34943_p3() {
    tmp_896_fu_34943_p3 = esl_concat<11,3>(sum47_reg_55711.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_897_fu_34954_p2() {
    tmp_897_fu_34954_p2 = (!p_shl419_cast_fu_34939_p1.read().is_01() || !p_shl420_cast_fu_34950_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl419_cast_fu_34939_p1.read()) - sc_biguint<17>(p_shl420_cast_fu_34950_p1.read()));
}

void ShuffleNetV2::thread_tmp_898_fu_34964_p2() {
    tmp_898_fu_34964_p2 = (!ci50_cast1_cast_reg_55450.read().is_01() || !tmp_1076_cast_fu_34960_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci50_cast1_cast_reg_55450.read()) + sc_bigint<18>(tmp_1076_cast_fu_34960_p1.read()));
}

void ShuffleNetV2::thread_tmp_899_fu_35211_p3() {
    tmp_899_fu_35211_p3 = esl_concat<6,3>(co97_reg_19807.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_89_cast_fu_31777_p1() {
    tmp_89_cast_fu_31777_p1 = esl_sext<32,7>(tmp_76_reg_53581.read());
}

void ShuffleNetV2::thread_tmp_89_fu_32677_p2() {
    tmp_89_fu_32677_p2 = (!p_shl56_fu_32657_p3.read().is_01() || !p_shl57_cast_fu_32673_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl56_fu_32657_p3.read()) - sc_biguint<6>(p_shl57_cast_fu_32673_p1.read()));
}

void ShuffleNetV2::thread_tmp_900_fu_35223_p3() {
    tmp_900_fu_35223_p3 = esl_concat<6,1>(co97_reg_19807.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_901_fu_35235_p2() {
    tmp_901_fu_35235_p2 = (!p_shl426_cast_fu_35231_p1.read().is_01() || !p_shl425_cast_fu_35219_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl426_cast_fu_35231_p1.read()) + sc_biguint<10>(p_shl425_cast_fu_35219_p1.read()));
}

void ShuffleNetV2::thread_tmp_902_fu_35263_p3() {
    tmp_902_fu_35263_p3 = esl_concat<7,3>(tmp_118_fu_35257_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_903_fu_35275_p3() {
    tmp_903_fu_35275_p3 = esl_concat<7,1>(tmp_118_fu_35257_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_904_fu_35287_p2() {
    tmp_904_fu_35287_p2 = (!p_shl428_cast_fu_35283_p1.read().is_01() || !p_shl427_cast_fu_35271_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl428_cast_fu_35283_p1.read()) + sc_biguint<11>(p_shl427_cast_fu_35271_p1.read()));
}

void ShuffleNetV2::thread_tmp_905_cast_fu_31033_p1() {
    tmp_905_cast_fu_31033_p1 = esl_zext<32,15>(tmp_761_fu_31028_p2.read());
}

void ShuffleNetV2::thread_tmp_905_fu_35150_p2() {
    tmp_905_fu_35150_p2 = (!h_79_cast_cast_fu_35146_p1.read().is_01() || !tmp_892_reg_55769.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_79_cast_cast_fu_35146_p1.read()) + sc_biguint<10>(tmp_892_reg_55769.read()));
}

void ShuffleNetV2::thread_tmp_906_cast_fu_31043_p1() {
    tmp_906_cast_fu_31043_p1 = esl_zext<32,14>(tmp_762_reg_53117.read());
}

void ShuffleNetV2::thread_tmp_906_fu_35155_p3() {
    tmp_906_fu_35155_p3 = esl_concat<10,3>(tmp_905_fu_35150_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_907_fu_35167_p3() {
    tmp_907_fu_35167_p3 = esl_concat<10,1>(tmp_905_fu_35150_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_908_fu_35179_p2() {
    tmp_908_fu_35179_p2 = (!p_shl423_cast_fu_35163_p1.read().is_01() || !p_shl424_cast_fu_35175_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl423_cast_fu_35163_p1.read()) + sc_biguint<15>(p_shl424_cast_fu_35175_p1.read()));
}

void ShuffleNetV2::thread_tmp_909_fu_35438_p1() {
    tmp_909_fu_35438_p1 = co99_reg_19840.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_90_fu_32707_p2() {
    tmp_90_fu_32707_p2 = (!p_shl58_cast_fu_32691_p1.read().is_01() || !p_shl59_cast_fu_32703_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl58_cast_fu_32691_p1.read()) - sc_biguint<8>(p_shl59_cast_fu_32703_p1.read()));
}

void ShuffleNetV2::thread_tmp_910_fu_35313_p2() {
    tmp_910_fu_35313_p2 = (!h_81_cast_cast_fu_35309_p1.read().is_01() || !tmp_904_reg_55826.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_81_cast_cast_fu_35309_p1.read()) + sc_biguint<11>(tmp_904_reg_55826.read()));
}

void ShuffleNetV2::thread_tmp_911_fu_35318_p3() {
    tmp_911_fu_35318_p3 = esl_concat<11,3>(tmp_910_fu_35313_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_912_fu_35330_p3() {
    tmp_912_fu_35330_p3 = esl_concat<11,1>(tmp_910_fu_35313_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_913_fu_35342_p2() {
    tmp_913_fu_35342_p2 = (!p_shl431_cast_fu_35326_p1.read().is_01() || !p_shl432_cast_fu_35338_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl431_cast_fu_35326_p1.read()) + sc_biguint<15>(p_shl432_cast_fu_35338_p1.read()));
}

void ShuffleNetV2::thread_tmp_914_fu_35348_p2() {
    tmp_914_fu_35348_p2 = (!h_81_cast_cast1_fu_35305_p1.read().is_01() || !tmp_901_reg_55813.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_81_cast_cast1_fu_35305_p1.read()) + sc_biguint<10>(tmp_901_reg_55813.read()));
}

void ShuffleNetV2::thread_tmp_915_cast_fu_31308_p1() {
    tmp_915_cast_fu_31308_p1 = esl_sext<17,16>(tmp_767_fu_31302_p2.read());
}

void ShuffleNetV2::thread_tmp_915_fu_35353_p3() {
    tmp_915_fu_35353_p3 = esl_concat<10,3>(tmp_914_fu_35348_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_916_cast_fu_31317_p1() {
    tmp_916_cast_fu_31317_p1 = esl_sext<32,17>(tmp_768_fu_31312_p2.read());
}

void ShuffleNetV2::thread_tmp_916_fu_35365_p3() {
    tmp_916_fu_35365_p3 = esl_concat<10,1>(tmp_914_fu_35348_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_917_fu_35377_p2() {
    tmp_917_fu_35377_p2 = (!p_shl429_cast_fu_35361_p1.read().is_01() || !p_shl430_cast_fu_35373_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl429_cast_fu_35361_p1.read()) + sc_biguint<14>(p_shl430_cast_fu_35373_p1.read()));
}

void ShuffleNetV2::thread_tmp_918_fu_35201_p2() {
    tmp_918_fu_35201_p2 = (!tmp_908_reg_55790.read().is_01() || !w_80_cast_cast_fu_35197_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_908_reg_55790.read()) + sc_biguint<15>(w_80_cast_cast_fu_35197_p1.read()));
}

void ShuffleNetV2::thread_tmp_919_fu_35403_p2() {
    tmp_919_fu_35403_p2 = (!tmp_913_reg_55839.read().is_01() || !w_82_cast_cast_fu_35399_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_913_reg_55839.read()) + sc_biguint<15>(w_82_cast_cast_fu_35399_p1.read()));
}

void ShuffleNetV2::thread_tmp_91_fu_33278_p2() {
    tmp_91_fu_33278_p2 = (!p_shl62_cast_fu_33262_p1.read().is_01() || !p_shl63_cast_fu_33274_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl62_cast_fu_33262_p1.read()) - sc_biguint<7>(p_shl63_cast_fu_33274_p1.read()));
}

void ShuffleNetV2::thread_tmp_920_fu_35413_p2() {
    tmp_920_fu_35413_p2 = (!tmp_917_reg_55844.read().is_01() || !w_82_cast_cast1_fu_35395_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_917_reg_55844.read()) + sc_biguint<14>(w_82_cast_cast1_fu_35395_p1.read()));
}

void ShuffleNetV2::thread_tmp_921_fu_35739_p1() {
    tmp_921_fu_35739_p1 = k32_reg_19884.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_922_fu_35575_p1() {
    tmp_922_fu_35575_p1 = i87_reg_19862.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_923_fu_35655_p3() {
    tmp_923_fu_35655_p3 = esl_concat<11,5>(sum49_reg_56151.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_924_fu_35666_p3() {
    tmp_924_fu_35666_p3 = esl_concat<11,3>(sum49_reg_56151.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_925_fu_35677_p2() {
    tmp_925_fu_35677_p2 = (!p_shl433_cast_fu_35662_p1.read().is_01() || !p_shl434_cast_fu_35673_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl433_cast_fu_35662_p1.read()) - sc_biguint<17>(p_shl434_cast_fu_35673_p1.read()));
}

void ShuffleNetV2::thread_tmp_926_fu_35687_p2() {
    tmp_926_fu_35687_p2 = (!ci52_cast1_cast_reg_55890.read().is_01() || !tmp_1109_cast_fu_35683_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci52_cast1_cast_reg_55890.read()) + sc_bigint<18>(tmp_1109_cast_fu_35683_p1.read()));
}

void ShuffleNetV2::thread_tmp_927_fu_36164_p1() {
    tmp_927_fu_36164_p1 = co103_reg_19961.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_928_cast_fu_31673_p1() {
    tmp_928_cast_fu_31673_p1 = esl_zext<32,10>(tmp_777_reg_53538.read());
}

void ShuffleNetV2::thread_tmp_928_fu_36076_p1() {
    tmp_928_fu_36076_p1 = k34_reg_19950.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_929_fu_35883_p1() {
    tmp_929_fu_35883_p1 = i92_reg_19928.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_92_fu_33186_p2() {
    tmp_92_fu_33186_p2 = (!p_shl60_cast_fu_33170_p1.read().is_01() || !p_shl61_cast_fu_33182_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl60_cast_fu_33170_p1.read()) - sc_biguint<7>(p_shl61_cast_fu_33182_p1.read()));
}

void ShuffleNetV2::thread_tmp_930_cast_fu_31628_p1() {
    tmp_930_cast_fu_31628_p1 = esl_sext<13,12>(tmp_779_fu_31622_p2.read());
}

void ShuffleNetV2::thread_tmp_930_fu_35930_p3() {
    tmp_930_fu_35930_p3 = esl_concat<7,2>(tmp_130_fu_35921_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_931_cast_fu_31637_p1() {
    tmp_931_cast_fu_31637_p1 = esl_sext<32,13>(tmp_780_reg_53543.read());
}

void ShuffleNetV2::thread_tmp_931_fu_35942_p2() {
    tmp_931_fu_35942_p2 = (!p_shl438_cast_fu_35938_p1.read().is_01() || !tmp_182_cast_cast_fu_35926_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl438_cast_fu_35938_p1.read()) - sc_bigint<10>(tmp_182_cast_cast_fu_35926_p1.read()));
}

void ShuffleNetV2::thread_tmp_932_fu_35948_p2() {
    tmp_932_fu_35948_p2 = (!w83_cast_cast_reg_56232.read().is_01() || !tmp_931_fu_35942_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w83_cast_cast_reg_56232.read()) + sc_biguint<10>(tmp_931_fu_35942_p2.read()));
}

void ShuffleNetV2::thread_tmp_933_fu_35964_p2() {
    tmp_933_fu_35964_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_932_reg_56271.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_934_fu_35969_p2() {
    tmp_934_fu_35969_p2 = (!tmp_933_fu_35964_p2.read().is_01() || !tmp_932_reg_56271.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_933_fu_35964_p2.read()) - sc_biguint<10>(tmp_932_reg_56271.read()));
}

void ShuffleNetV2::thread_tmp_935_fu_35974_p2() {
    tmp_935_fu_35974_p2 = (!h82_cast_cast_reg_56250.read().is_01() || !tmp_934_fu_35969_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h82_cast_cast_reg_56250.read()) + sc_biguint<10>(tmp_934_fu_35969_p2.read()));
}

void ShuffleNetV2::thread_tmp_936_fu_35982_p3() {
    tmp_936_fu_35982_p3 = esl_concat<9,2>(sum27_reg_56277.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_937_fu_35993_p2() {
    tmp_937_fu_35993_p2 = (!p_shl436_cast_fu_35989_p1.read().is_01() || !sum27_cast_cast_fu_35979_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl436_cast_fu_35989_p1.read()) - sc_biguint<12>(sum27_cast_cast_fu_35979_p1.read()));
}

void ShuffleNetV2::thread_tmp_938_fu_35999_p2() {
    tmp_938_fu_35999_p2 = (!w83_cast_cast1_reg_56227.read().is_01() || !tmp_937_fu_35993_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(w83_cast_cast1_reg_56227.read()) + sc_biguint<12>(tmp_937_fu_35993_p2.read()));
}

void ShuffleNetV2::thread_tmp_939_fu_36007_p3() {
    tmp_939_fu_36007_p3 = esl_concat<12,2>(tmp_938_reg_56288.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_93_cast_fu_31841_p1() {
    tmp_93_cast_fu_31841_p1 = esl_zext<6,4>(p_lshr_f4_cast_fu_31831_p4.read());
}

void ShuffleNetV2::thread_tmp_93_fu_33196_p2() {
    tmp_93_fu_33196_p2 = (!tmp_92_fu_33186_p2.read().is_01() || !i71_cast_reg_54475.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_92_fu_33186_p2.read()) + sc_biguint<7>(i71_cast_reg_54475.read()));
}

void ShuffleNetV2::thread_tmp_940_fu_36018_p2() {
    tmp_940_fu_36018_p2 = (!p_shl240_fu_36014_p1.read().is_01() || !tmp_1125_cast_fu_36004_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl240_fu_36014_p1.read()) - sc_bigint<32>(tmp_1125_cast_fu_36004_p1.read()));
}

void ShuffleNetV2::thread_tmp_941_fu_36024_p2() {
    tmp_941_fu_36024_p2 = (!h82_cast_reg_56245.read().is_01() || !tmp_940_fu_36018_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h82_cast_reg_56245.read()) + sc_biguint<32>(tmp_940_fu_36018_p2.read()));
}

void ShuffleNetV2::thread_tmp_942_fu_36537_p3() {
    tmp_942_fu_36537_p3 = esl_concat<6,3>(co105_reg_20016.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_943_fu_36549_p3() {
    tmp_943_fu_36549_p3 = esl_concat<6,1>(co105_reg_20016.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_944_fu_36561_p2() {
    tmp_944_fu_36561_p2 = (!p_shl442_cast_fu_36557_p1.read().is_01() || !p_shl441_cast_fu_36545_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl442_cast_fu_36557_p1.read()) + sc_biguint<10>(p_shl441_cast_fu_36545_p1.read()));
}

void ShuffleNetV2::thread_tmp_945_fu_36465_p1() {
    tmp_945_fu_36465_p1 = k36_reg_20005.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_946_cast_fu_32042_p1() {
    tmp_946_cast_fu_32042_p1 = esl_sext<17,16>(tmp_791_fu_32036_p2.read());
}

void ShuffleNetV2::thread_tmp_946_fu_36301_p1() {
    tmp_946_fu_36301_p1 = i94_reg_19983.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_947_cast_fu_32051_p1() {
    tmp_947_cast_fu_32051_p1 = esl_sext<32,17>(tmp_792_fu_32046_p2.read());
}

void ShuffleNetV2::thread_tmp_947_fu_36381_p3() {
    tmp_947_fu_36381_p3 = esl_concat<11,5>(sum52_reg_56626.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_948_fu_36392_p3() {
    tmp_948_fu_36392_p3 = esl_concat<11,3>(sum52_reg_56626.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_949_fu_36403_p2() {
    tmp_949_fu_36403_p2 = (!p_shl439_cast_fu_36388_p1.read().is_01() || !p_shl440_cast_fu_36399_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl439_cast_fu_36388_p1.read()) - sc_biguint<17>(p_shl440_cast_fu_36399_p1.read()));
}

void ShuffleNetV2::thread_tmp_94_fu_33318_p2() {
    tmp_94_fu_33318_p2 = (!ci46_cast_fu_33298_p1.read().is_01() || !tmp_91_reg_54525.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ci46_cast_fu_33298_p1.read()) + sc_biguint<7>(tmp_91_reg_54525.read()));
}

void ShuffleNetV2::thread_tmp_950_fu_36413_p2() {
    tmp_950_fu_36413_p2 = (!ci54_cast1_cast_reg_56365.read().is_01() || !tmp_1140_cast_fu_36409_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci54_cast1_cast_reg_56365.read()) + sc_bigint<18>(tmp_1140_cast_fu_36409_p1.read()));
}

void ShuffleNetV2::thread_tmp_951_fu_36656_p3() {
    tmp_951_fu_36656_p3 = esl_concat<6,3>(co107_reg_20049.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_952_fu_36668_p3() {
    tmp_952_fu_36668_p3 = esl_concat<6,1>(co107_reg_20049.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_953_fu_36680_p2() {
    tmp_953_fu_36680_p2 = (!p_shl446_cast_fu_36676_p1.read().is_01() || !p_shl445_cast_fu_36664_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl446_cast_fu_36676_p1.read()) + sc_biguint<10>(p_shl445_cast_fu_36664_p1.read()));
}

void ShuffleNetV2::thread_tmp_954_fu_36708_p3() {
    tmp_954_fu_36708_p3 = esl_concat<7,3>(tmp_135_fu_36702_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_955_fu_36720_p3() {
    tmp_955_fu_36720_p3 = esl_concat<7,1>(tmp_135_fu_36702_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_956_fu_36732_p2() {
    tmp_956_fu_36732_p2 = (!p_shl448_cast_fu_36728_p1.read().is_01() || !p_shl447_cast_fu_36716_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl448_cast_fu_36728_p1.read()) + sc_biguint<11>(p_shl447_cast_fu_36716_p1.read()));
}

void ShuffleNetV2::thread_tmp_957_fu_36595_p2() {
    tmp_957_fu_36595_p2 = (!h_85_cast_cast_fu_36591_p1.read().is_01() || !tmp_944_reg_56684.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_85_cast_cast_fu_36591_p1.read()) + sc_biguint<10>(tmp_944_reg_56684.read()));
}

void ShuffleNetV2::thread_tmp_958_fu_36600_p3() {
    tmp_958_fu_36600_p3 = esl_concat<10,3>(tmp_957_fu_36595_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_959_fu_36612_p3() {
    tmp_959_fu_36612_p3 = esl_concat<10,1>(tmp_957_fu_36595_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_95_cast_cast_fu_31547_p1() {
    tmp_95_cast_cast_fu_31547_p1 = esl_sext<10,7>(tmp_79_fu_31542_p2.read());
}

void ShuffleNetV2::thread_tmp_95_fu_32989_p2() {
    tmp_95_fu_32989_p2 = (!p_shl64_cast_fu_32973_p1.read().is_01() || !p_shl65_cast_fu_32985_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl64_cast_fu_32973_p1.read()) - sc_biguint<7>(p_shl65_cast_fu_32985_p1.read()));
}

void ShuffleNetV2::thread_tmp_960_fu_36624_p2() {
    tmp_960_fu_36624_p2 = (!p_shl443_cast_fu_36608_p1.read().is_01() || !p_shl444_cast_fu_36620_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl443_cast_fu_36608_p1.read()) + sc_biguint<15>(p_shl444_cast_fu_36620_p1.read()));
}

void ShuffleNetV2::thread_tmp_961_fu_36883_p1() {
    tmp_961_fu_36883_p1 = co109_reg_20082.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_962_fu_36758_p2() {
    tmp_962_fu_36758_p2 = (!h_87_cast_cast_fu_36754_p1.read().is_01() || !tmp_956_reg_56741.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_87_cast_cast_fu_36754_p1.read()) + sc_biguint<11>(tmp_956_reg_56741.read()));
}

void ShuffleNetV2::thread_tmp_963_fu_36763_p3() {
    tmp_963_fu_36763_p3 = esl_concat<11,3>(tmp_962_fu_36758_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_964_fu_36775_p3() {
    tmp_964_fu_36775_p3 = esl_concat<11,1>(tmp_962_fu_36758_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_965_fu_36787_p2() {
    tmp_965_fu_36787_p2 = (!p_shl451_cast_fu_36771_p1.read().is_01() || !p_shl452_cast_fu_36783_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl451_cast_fu_36771_p1.read()) + sc_biguint<15>(p_shl452_cast_fu_36783_p1.read()));
}

void ShuffleNetV2::thread_tmp_966_fu_36793_p2() {
    tmp_966_fu_36793_p2 = (!h_87_cast_cast1_fu_36750_p1.read().is_01() || !tmp_953_reg_56728.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_87_cast_cast1_fu_36750_p1.read()) + sc_biguint<10>(tmp_953_reg_56728.read()));
}

void ShuffleNetV2::thread_tmp_967_fu_36798_p3() {
    tmp_967_fu_36798_p3 = esl_concat<10,3>(tmp_966_fu_36793_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_968_cast_fu_32284_p1() {
    tmp_968_cast_fu_32284_p1 = esl_zext<32,15>(tmp_812_fu_32279_p2.read());
}

void ShuffleNetV2::thread_tmp_968_fu_36810_p3() {
    tmp_968_fu_36810_p3 = esl_concat<10,1>(tmp_966_fu_36793_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_969_cast_fu_32486_p1() {
    tmp_969_cast_fu_32486_p1 = esl_zext<32,15>(tmp_813_fu_32481_p2.read());
}

void ShuffleNetV2::thread_tmp_969_fu_36822_p2() {
    tmp_969_fu_36822_p2 = (!p_shl449_cast_fu_36806_p1.read().is_01() || !p_shl450_cast_fu_36818_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl449_cast_fu_36806_p1.read()) + sc_biguint<14>(p_shl450_cast_fu_36818_p1.read()));
}

void ShuffleNetV2::thread_tmp_96_fu_32999_p2() {
    tmp_96_fu_32999_p2 = (!co82_cast1_reg_54384.read().is_01() || !tmp_95_fu_32989_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(co82_cast1_reg_54384.read()) + sc_biguint<7>(tmp_95_fu_32989_p2.read()));
}

void ShuffleNetV2::thread_tmp_970_cast_fu_32496_p1() {
    tmp_970_cast_fu_32496_p1 = esl_zext<32,14>(tmp_814_reg_54032.read());
}

void ShuffleNetV2::thread_tmp_970_fu_36646_p2() {
    tmp_970_fu_36646_p2 = (!tmp_960_reg_56705.read().is_01() || !w_86_cast_cast_fu_36642_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_960_reg_56705.read()) + sc_biguint<15>(w_86_cast_cast_fu_36642_p1.read()));
}

void ShuffleNetV2::thread_tmp_971_fu_36848_p2() {
    tmp_971_fu_36848_p2 = (!tmp_965_reg_56754.read().is_01() || !w_88_cast_cast_fu_36844_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_965_reg_56754.read()) + sc_biguint<15>(w_88_cast_cast_fu_36844_p1.read()));
}

void ShuffleNetV2::thread_tmp_972_fu_36858_p2() {
    tmp_972_fu_36858_p2 = (!tmp_969_reg_56759.read().is_01() || !w_88_cast_cast1_fu_36840_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_969_reg_56759.read()) + sc_biguint<14>(w_88_cast_cast1_fu_36840_p1.read()));
}

void ShuffleNetV2::thread_tmp_973_fu_37184_p1() {
    tmp_973_fu_37184_p1 = k38_reg_20126.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_974_fu_37020_p1() {
    tmp_974_fu_37020_p1 = i98_reg_20104.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_975_fu_37100_p3() {
    tmp_975_fu_37100_p3 = esl_concat<11,5>(sum54_reg_57066.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_976_fu_37111_p3() {
    tmp_976_fu_37111_p3 = esl_concat<11,3>(sum54_reg_57066.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_977_fu_37122_p2() {
    tmp_977_fu_37122_p2 = (!p_shl453_cast_fu_37107_p1.read().is_01() || !p_shl454_cast_fu_37118_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl453_cast_fu_37107_p1.read()) - sc_biguint<17>(p_shl454_cast_fu_37118_p1.read()));
}

void ShuffleNetV2::thread_tmp_978_fu_37132_p2() {
    tmp_978_fu_37132_p2 = (!ci56_cast1_cast_reg_56805.read().is_01() || !tmp_1173_cast_fu_37128_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci56_cast1_cast_reg_56805.read()) + sc_bigint<18>(tmp_1173_cast_fu_37128_p1.read()));
}

void ShuffleNetV2::thread_tmp_979_cast_fu_32761_p1() {
    tmp_979_cast_fu_32761_p1 = esl_sext<17,16>(tmp_819_fu_32755_p2.read());
}

void ShuffleNetV2::thread_tmp_979_fu_37617_p1() {
    tmp_979_fu_37617_p1 = co113_reg_20203.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_97_cast_fu_32132_p1() {
    tmp_97_cast_fu_32132_p1 = esl_sext<10,7>(tmp_80_fu_32126_p2.read());
}

void ShuffleNetV2::thread_tmp_97_fu_33579_p2() {
    tmp_97_fu_33579_p2 = (!p_shl66_cast_fu_33563_p1.read().is_01() || !p_shl67_cast_fu_33575_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl66_cast_fu_33563_p1.read()) - sc_biguint<7>(p_shl67_cast_fu_33575_p1.read()));
}

void ShuffleNetV2::thread_tmp_980_cast_fu_32770_p1() {
    tmp_980_cast_fu_32770_p1 = esl_sext<32,17>(tmp_820_fu_32765_p2.read());
}

void ShuffleNetV2::thread_tmp_980_fu_37529_p1() {
    tmp_980_fu_37529_p1 = k40_reg_20192.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_981_fu_37328_p1() {
    tmp_981_fu_37328_p1 = i103_reg_20170.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_982_fu_37375_p3() {
    tmp_982_fu_37375_p3 = esl_concat<7,2>(tmp_147_fu_37366_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_983_fu_37387_p2() {
    tmp_983_fu_37387_p2 = (!p_shl458_cast_fu_37383_p1.read().is_01() || !tmp_211_cast_cast_fu_37371_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl458_cast_fu_37383_p1.read()) - sc_bigint<10>(tmp_211_cast_cast_fu_37371_p1.read()));
}

void ShuffleNetV2::thread_tmp_984_fu_37393_p2() {
    tmp_984_fu_37393_p2 = (!tmp_983_fu_37387_p2.read().is_01() || !w89_cast_cast_reg_57147.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_983_fu_37387_p2.read()) + sc_biguint<10>(w89_cast_cast_reg_57147.read()));
}

void ShuffleNetV2::thread_tmp_985_fu_37409_p2() {
    tmp_985_fu_37409_p2 = (!ap_const_lv10_2.is_01())? sc_lv<10>(): tmp_984_reg_57186.read() << (unsigned short)ap_const_lv10_2.to_uint();
}

void ShuffleNetV2::thread_tmp_986_fu_37414_p2() {
    tmp_986_fu_37414_p2 = (!tmp_985_fu_37409_p2.read().is_01() || !tmp_984_reg_57186.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_985_fu_37409_p2.read()) - sc_biguint<10>(tmp_984_reg_57186.read()));
}

void ShuffleNetV2::thread_tmp_987_fu_37419_p2() {
    tmp_987_fu_37419_p2 = (!tmp_986_fu_37414_p2.read().is_01() || !h88_cast_cast_reg_57165.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_986_fu_37414_p2.read()) + sc_biguint<10>(h88_cast_cast_reg_57165.read()));
}

void ShuffleNetV2::thread_tmp_988_fu_37431_p3() {
    tmp_988_fu_37431_p3 = esl_concat<8,2>(sum29_reg_57192.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_989_fu_37438_p1() {
    tmp_989_fu_37438_p1 = esl_sext<11,10>(tmp_988_fu_37431_p3.read());
}

void ShuffleNetV2::thread_tmp_98_cast_fu_32166_p1() {
    tmp_98_cast_fu_32166_p1 = esl_sext<32,7>(tmp_81_reg_53923.read());
}

void ShuffleNetV2::thread_tmp_98_fu_33589_p2() {
    tmp_98_fu_33589_p2 = (!tmp_97_fu_33579_p2.read().is_01() || !i75_cast_reg_54817.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_97_fu_33579_p2.read()) + sc_biguint<7>(i75_cast_reg_54817.read()));
}

void ShuffleNetV2::thread_tmp_990_fu_37446_p2() {
    tmp_990_fu_37446_p2 = (!p_shl456_cast_fu_37442_p1.read().is_01() || !sum29_cast_cast_fu_37427_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl456_cast_fu_37442_p1.read()) - sc_biguint<12>(sum29_cast_cast_fu_37427_p1.read()));
}

void ShuffleNetV2::thread_tmp_991_fu_37452_p2() {
    tmp_991_fu_37452_p2 = (!tmp_990_fu_37446_p2.read().is_01() || !w89_cast_cast1_reg_57142.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_990_fu_37446_p2.read()) + sc_biguint<12>(w89_cast_cast1_reg_57142.read()));
}

void ShuffleNetV2::thread_tmp_992_cast_fu_33122_p1() {
    tmp_992_cast_fu_33122_p1 = esl_zext<32,10>(tmp_829_reg_54453.read());
}

void ShuffleNetV2::thread_tmp_992_fu_37460_p3() {
    tmp_992_fu_37460_p3 = esl_concat<12,2>(tmp_991_reg_57203.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_993_fu_37471_p2() {
    tmp_993_fu_37471_p2 = (!p_shl244_fu_37467_p1.read().is_01() || !tmp_1190_cast_fu_37457_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl244_fu_37467_p1.read()) - sc_bigint<32>(tmp_1190_cast_fu_37457_p1.read()));
}

void ShuffleNetV2::thread_tmp_994_cast_fu_33077_p1() {
    tmp_994_cast_fu_33077_p1 = esl_sext<13,12>(tmp_831_fu_33071_p2.read());
}

void ShuffleNetV2::thread_tmp_994_fu_37477_p2() {
    tmp_994_fu_37477_p2 = (!tmp_993_fu_37471_p2.read().is_01() || !h88_cast_reg_57160.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_993_fu_37471_p2.read()) + sc_biguint<32>(h88_cast_reg_57160.read()));
}

void ShuffleNetV2::thread_tmp_995_cast_fu_33086_p1() {
    tmp_995_cast_fu_33086_p1 = esl_sext<32,13>(tmp_832_reg_54458.read());
}

void ShuffleNetV2::thread_tmp_995_fu_37990_p3() {
    tmp_995_fu_37990_p3 = esl_concat<6,3>(co115_reg_20258.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_996_fu_38002_p3() {
    tmp_996_fu_38002_p3 = esl_concat<6,1>(co115_reg_20258.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_997_fu_38014_p2() {
    tmp_997_fu_38014_p2 = (!p_shl462_cast_fu_38010_p1.read().is_01() || !p_shl461_cast_fu_37998_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl462_cast_fu_38010_p1.read()) + sc_biguint<10>(p_shl461_cast_fu_37998_p1.read()));
}

void ShuffleNetV2::thread_tmp_998_fu_37918_p1() {
    tmp_998_fu_37918_p1 = k42_reg_20247.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_999_fu_37754_p1() {
    tmp_999_fu_37754_p1 = i105_reg_20225.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_99_fu_33411_p2() {
    tmp_99_fu_33411_p2 = (!p_shl68_fu_33391_p3.read().is_01() || !p_shl69_cast_fu_33407_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl68_fu_33391_p3.read()) - sc_biguint<6>(p_shl69_cast_fu_33407_p1.read()));
}

void ShuffleNetV2::thread_tmp_cast_fu_29039_p1() {
    tmp_cast_fu_29039_p1 = esl_zext<6,4>(p_lshr_f_cast_fu_29029_p4.read());
}

void ShuffleNetV2::thread_tmp_fu_25684_p3() {
    tmp_fu_25684_p3 = esl_concat<2,5>(ci_reg_18027.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_s_fu_26617_p2() {
    tmp_s_fu_26617_p2 = (!co19_cast_fu_26601_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co19_cast_fu_26601_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_tmp_tr_i_fu_49293_p1() {
    tmp_tr_i_fu_49293_p1 = esl_sext<9,8>(p_i_reg_22084.read());
}

void ShuffleNetV2::thread_w101_cast_cast1_fu_40194_p1() {
    w101_cast_cast1_fu_40194_p1 = esl_zext<14,2>(w101_reg_20632.read());
}

void ShuffleNetV2::thread_w101_cast_cast_fu_40198_p1() {
    w101_cast_cast_fu_40198_p1 = esl_zext<10,2>(w101_reg_20632.read());
}

void ShuffleNetV2::thread_w107_cast_cast1_fu_41667_p1() {
    w107_cast_cast1_fu_41667_p1 = esl_zext<13,2>(w107_reg_20874.read());
}

void ShuffleNetV2::thread_w107_cast_cast_fu_41671_p1() {
    w107_cast_cast_fu_41671_p1 = esl_zext<10,2>(w107_reg_20874.read());
}

void ShuffleNetV2::thread_w111_cast_cast1_fu_42957_p1() {
    w111_cast_cast1_fu_42957_p1 = esl_zext<13,2>(w111_reg_21083.read());
}

void ShuffleNetV2::thread_w111_cast_cast_fu_42961_p1() {
    w111_cast_cast_fu_42961_p1 = esl_zext<11,2>(w111_reg_21083.read());
}

void ShuffleNetV2::thread_w113_cast_cast1_fu_43731_p1() {
    w113_cast_cast1_fu_43731_p1 = esl_zext<13,2>(w113_reg_21204.read());
}

void ShuffleNetV2::thread_w113_cast_cast_fu_43735_p1() {
    w113_cast_cast_fu_43735_p1 = esl_zext<11,2>(w113_reg_21204.read());
}

void ShuffleNetV2::thread_w117_cast_cast1_fu_45129_p1() {
    w117_cast_cast1_fu_45129_p1 = esl_zext<13,2>(w117_reg_21413.read());
}

void ShuffleNetV2::thread_w117_cast_cast_fu_45133_p1() {
    w117_cast_cast_fu_45133_p1 = esl_zext<11,2>(w117_reg_21413.read());
}

void ShuffleNetV2::thread_w123_cast_cast1_fu_46658_p1() {
    w123_cast_cast1_fu_46658_p1 = esl_zext<14,2>(w123_reg_21655.read());
}

void ShuffleNetV2::thread_w123_cast_cast_fu_46662_p1() {
    w123_cast_cast_fu_46662_p1 = esl_zext<11,2>(w123_reg_21655.read());
}

void ShuffleNetV2::thread_w129_cast_cast1_fu_48191_p1() {
    w129_cast_cast1_fu_48191_p1 = esl_zext<15,2>(w129_reg_21897.read());
}

void ShuffleNetV2::thread_w129_cast_cast_fu_48195_p1() {
    w129_cast_cast_fu_48195_p1 = esl_zext<11,2>(w129_reg_21897.read());
}

void ShuffleNetV2::thread_w131_cast_cast_fu_49118_p1() {
    w131_cast_cast_fu_49118_p1 = esl_zext<11,3>(w131_reg_22051.read());
}

void ShuffleNetV2::thread_w13_cast_cast_fu_26297_p1() {
    w13_cast_cast_fu_26297_p1 = esl_zext<9,2>(w13_reg_18183.read());
}

void ShuffleNetV2::thread_w26_cast_cast1_fu_26989_p1() {
    w26_cast_cast1_fu_26989_p1 = esl_zext<9,2>(w26_reg_18328.read());
}

void ShuffleNetV2::thread_w26_cast_cast_fu_26993_p1() {
    w26_cast_cast_fu_26993_p1 = esl_zext<10,2>(w26_reg_18328.read());
}

void ShuffleNetV2::thread_w42_cast_cast1_fu_27795_p1() {
    w42_cast_cast1_fu_27795_p1 = esl_zext<9,2>(w42_reg_18506.read());
}

void ShuffleNetV2::thread_w42_cast_cast_fu_27799_p1() {
    w42_cast_cast_fu_27799_p1 = esl_zext<10,2>(w42_reg_18506.read());
}

void ShuffleNetV2::thread_w55_cast_cast1_fu_28607_p1() {
    w55_cast_cast1_fu_28607_p1 = esl_zext<9,2>(w55_reg_18684.read());
}

void ShuffleNetV2::thread_w55_cast_cast_fu_28611_p1() {
    w55_cast_cast_fu_28611_p1 = esl_zext<11,2>(w55_reg_18684.read());
}

void ShuffleNetV2::thread_w59_cast_cast1_fu_29388_p1() {
    w59_cast_cast1_fu_29388_p1 = esl_zext<12,2>(w59_reg_18850.read());
}

void ShuffleNetV2::thread_w59_cast_cast_fu_29392_p1() {
    w59_cast_cast_fu_29392_p1 = esl_zext<10,2>(w59_reg_18850.read());
}

void ShuffleNetV2::thread_w61_cast_cast1_fu_30126_p1() {
    w61_cast_cast1_fu_30126_p1 = esl_zext<11,2>(w61_reg_18971.read());
}

void ShuffleNetV2::thread_w61_cast_cast_fu_30130_p1() {
    w61_cast_cast_fu_30130_p1 = esl_zext<10,2>(w61_reg_18971.read());
}

void ShuffleNetV2::thread_w65_cast_cast1_fu_31456_p1() {
    w65_cast_cast1_fu_31456_p1 = esl_zext<13,2>(w65_reg_19180.read());
}

void ShuffleNetV2::thread_w65_cast_cast_fu_31460_p1() {
    w65_cast_cast_fu_31460_p1 = esl_zext<10,2>(w65_reg_19180.read());
}

void ShuffleNetV2::thread_w6_cast_cast_fu_26001_p1() {
    w6_cast_cast_fu_26001_p1 = esl_zext<9,2>(w6_reg_18105.read());
}

void ShuffleNetV2::thread_w71_cast_cast1_fu_32909_p1() {
    w71_cast_cast1_fu_32909_p1 = esl_zext<13,2>(w71_reg_19422.read());
}

void ShuffleNetV2::thread_w71_cast_cast_fu_32913_p1() {
    w71_cast_cast_fu_32913_p1 = esl_zext<10,2>(w71_reg_19422.read());
}

void ShuffleNetV2::thread_w77_cast_cast1_fu_34378_p1() {
    w77_cast_cast1_fu_34378_p1 = esl_zext<12,2>(w77_reg_19664.read());
}

void ShuffleNetV2::thread_w77_cast_cast_fu_34382_p1() {
    w77_cast_cast_fu_34382_p1 = esl_zext<10,2>(w77_reg_19664.read());
}

void ShuffleNetV2::thread_w83_cast_cast1_fu_35831_p1() {
    w83_cast_cast1_fu_35831_p1 = esl_zext<12,2>(w83_reg_19906.read());
}

void ShuffleNetV2::thread_w83_cast_cast_fu_35835_p1() {
    w83_cast_cast_fu_35835_p1 = esl_zext<10,2>(w83_reg_19906.read());
}

void ShuffleNetV2::thread_w89_cast_cast1_fu_37276_p1() {
    w89_cast_cast1_fu_37276_p1 = esl_zext<12,2>(w89_reg_20148.read());
}

void ShuffleNetV2::thread_w89_cast_cast_fu_37280_p1() {
    w89_cast_cast_fu_37280_p1 = esl_zext<10,2>(w89_reg_20148.read());
}

void ShuffleNetV2::thread_w95_cast_cast1_fu_38729_p1() {
    w95_cast_cast1_fu_38729_p1 = esl_zext<13,2>(w95_reg_20390.read());
}

void ShuffleNetV2::thread_w95_cast_cast_fu_38733_p1() {
    w95_cast_cast_fu_38733_p1 = esl_zext<10,2>(w95_reg_20390.read());
}

void ShuffleNetV2::thread_w_100_cast_cast1_fu_39750_p1() {
    w_100_cast_cast1_fu_39750_p1 = esl_zext<14,4>(w_100_fu_39744_p2.read());
}

void ShuffleNetV2::thread_w_100_cast_cast_fu_39754_p1() {
    w_100_cast_cast_fu_39754_p1 = esl_zext<15,4>(w_100_fu_39744_p2.read());
}

void ShuffleNetV2::thread_w_100_fu_39744_p2() {
    w_100_fu_39744_p2 = (!w99_reg_20555.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w99_reg_20555.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_102_fu_40208_p2() {
    w_102_fu_40208_p2 = (!w101_reg_20632.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w101_reg_20632.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_104_cast_cast_fu_41021_p1() {
    w_104_cast_cast_fu_41021_p1 = esl_zext<15,4>(w_104_fu_41015_p2.read());
}

void ShuffleNetV2::thread_w_104_fu_41015_p2() {
    w_104_fu_41015_p2 = (!w103_reg_20764.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w103_reg_20764.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_106_cast_cast1_fu_41219_p1() {
    w_106_cast_cast1_fu_41219_p1 = esl_zext<14,4>(w_106_fu_41213_p2.read());
}

void ShuffleNetV2::thread_w_106_cast_cast_fu_41223_p1() {
    w_106_cast_cast_fu_41223_p1 = esl_zext<15,4>(w_106_fu_41213_p2.read());
}

void ShuffleNetV2::thread_w_106_fu_41213_p2() {
    w_106_fu_41213_p2 = (!w105_reg_20797.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w105_reg_20797.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_108_fu_41681_p2() {
    w_108_fu_41681_p2 = (!w107_reg_20874.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w107_reg_20874.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_110_cast_cast_fu_42494_p1() {
    w_110_cast_cast_fu_42494_p1 = esl_zext<15,4>(w_110_fu_42488_p2.read());
}

void ShuffleNetV2::thread_w_110_fu_42488_p2() {
    w_110_fu_42488_p2 = (!w109_reg_21006.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w109_reg_21006.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_112_fu_42971_p2() {
    w_112_fu_42971_p2 = (!w111_reg_21083.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w111_reg_21083.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_114_fu_43745_p2() {
    w_114_fu_43745_p2 = (!w113_reg_21204.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w113_reg_21204.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_116_cast_cast1_fu_44657_p1() {
    w_116_cast_cast1_fu_44657_p1 = esl_zext<13,3>(w_116_fu_44651_p2.read());
}

void ShuffleNetV2::thread_w_116_cast_cast_fu_44661_p1() {
    w_116_cast_cast_fu_44661_p1 = esl_zext<14,3>(w_116_fu_44651_p2.read());
}

void ShuffleNetV2::thread_w_116_fu_44651_p2() {
    w_116_fu_44651_p2 = (!w115_reg_21336.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w115_reg_21336.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_118_fu_45143_p2() {
    w_118_fu_45143_p2 = (!w117_reg_21413.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w117_reg_21413.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_120_cast_cast_fu_45988_p1() {
    w_120_cast_cast_fu_45988_p1 = esl_zext<14,3>(w_120_fu_45982_p2.read());
}

void ShuffleNetV2::thread_w_120_fu_45982_p2() {
    w_120_fu_45982_p2 = (!w119_reg_21545.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w119_reg_21545.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_122_cast_cast1_fu_46186_p1() {
    w_122_cast_cast1_fu_46186_p1 = esl_zext<13,3>(w_122_fu_46180_p2.read());
}

void ShuffleNetV2::thread_w_122_cast_cast_fu_46190_p1() {
    w_122_cast_cast_fu_46190_p1 = esl_zext<14,3>(w_122_fu_46180_p2.read());
}

void ShuffleNetV2::thread_w_122_fu_46180_p2() {
    w_122_fu_46180_p2 = (!w121_reg_21578.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w121_reg_21578.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_124_fu_46672_p2() {
    w_124_fu_46672_p2 = (!w123_reg_21655.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w123_reg_21655.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_126_cast_cast_fu_47521_p1() {
    w_126_cast_cast_fu_47521_p1 = esl_zext<14,3>(w_126_fu_47515_p2.read());
}

void ShuffleNetV2::thread_w_126_fu_47515_p2() {
    w_126_fu_47515_p2 = (!w125_reg_21787.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w125_reg_21787.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_128_cast_cast1_fu_47719_p1() {
    w_128_cast_cast1_fu_47719_p1 = esl_zext<13,3>(w_128_fu_47713_p2.read());
}

void ShuffleNetV2::thread_w_128_cast_cast_fu_47723_p1() {
    w_128_cast_cast_fu_47723_p1 = esl_zext<14,3>(w_128_fu_47713_p2.read());
}

void ShuffleNetV2::thread_w_128_fu_47713_p2() {
    w_128_fu_47713_p2 = (!w127_reg_21820.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w127_reg_21820.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_130_fu_48205_p2() {
    w_130_fu_48205_p2 = (!w129_reg_21897.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w129_reg_21897.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_133_cast_cast_fu_49147_p1() {
    w_133_cast_cast_fu_49147_p1 = esl_zext<13,3>(w_133_fu_49141_p2.read());
}

void ShuffleNetV2::thread_w_133_fu_49141_p2() {
    w_133_fu_49141_p2 = (!w131_reg_22051.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w131_reg_22051.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_134_cast_cast_fu_49046_p1() {
    w_134_cast_cast_fu_49046_p1 = esl_zext<14,3>(w_1_fu_49040_p2.read());
}

void ShuffleNetV2::thread_w_134_fu_49340_p2() {
    w_134_fu_49340_p2 = (!w_i_reg_22119.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w_i_reg_22119.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_1_fu_49040_p2() {
    w_1_fu_49040_p2 = (!w132_reg_22029.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w132_reg_22029.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_44_cast_cast_fu_25759_p1() {
    w_44_cast_cast_fu_25759_p1 = esl_zext<8,6>(w_45_fu_25753_p2.read());
}

void ShuffleNetV2::thread_w_45_fu_25753_p2() {
    w_45_fu_25753_p2 = (!w_reg_18038.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(w_reg_18038.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_w_46_fu_26038_p2() {
    w_46_fu_26038_p2 = (!w6_reg_18105.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w6_reg_18105.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_47_cast_cast1_fu_26747_p1() {
    w_47_cast_cast1_fu_26747_p1 = esl_zext<14,5>(w_48_fu_26741_p2.read());
}

void ShuffleNetV2::thread_w_47_cast_cast_fu_26751_p1() {
    w_47_cast_cast_fu_26751_p1 = esl_zext<15,5>(w_48_fu_26741_p2.read());
}

void ShuffleNetV2::thread_w_47_fu_26351_p2() {
    w_47_fu_26351_p2 = (!ap_const_lv2_1.is_01() || !w13_reg_18183.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w13_reg_18183.read()));
}

void ShuffleNetV2::thread_w_48_fu_26741_p2() {
    w_48_fu_26741_p2 = (!w21_reg_18272.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w21_reg_18272.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_49_cast_cast_fu_27363_p1() {
    w_49_cast_cast_fu_27363_p1 = esl_zext<15,5>(w_50_fu_27357_p2.read());
}

void ShuffleNetV2::thread_w_49_fu_27047_p2() {
    w_49_fu_27047_p2 = (!ap_const_lv2_1.is_01() || !w26_reg_18328.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w26_reg_18328.read()));
}

void ShuffleNetV2::thread_w_50_cast_cast1_fu_27553_p1() {
    w_50_cast_cast1_fu_27553_p1 = esl_zext<14,5>(w_51_fu_27547_p2.read());
}

void ShuffleNetV2::thread_w_50_cast_cast_fu_27557_p1() {
    w_50_cast_cast_fu_27557_p1 = esl_zext<15,5>(w_51_fu_27547_p2.read());
}

void ShuffleNetV2::thread_w_50_fu_27357_p2() {
    w_50_fu_27357_p2 = (!w34_reg_18417.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w34_reg_18417.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_51_fu_27547_p2() {
    w_51_fu_27547_p2 = (!w37_reg_18450.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w37_reg_18450.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_52_cast_cast_fu_28151_p1() {
    w_52_cast_cast_fu_28151_p1 = esl_zext<15,5>(w_53_fu_28145_p2.read());
}

void ShuffleNetV2::thread_w_52_fu_27853_p2() {
    w_52_fu_27853_p2 = (!ap_const_lv2_1.is_01() || !w42_reg_18506.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w42_reg_18506.read()));
}

void ShuffleNetV2::thread_w_53_fu_28145_p2() {
    w_53_fu_28145_p2 = (!w50_reg_18595.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w50_reg_18595.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_54_cast_cast1_fu_28341_p1() {
    w_54_cast_cast1_fu_28341_p1 = esl_zext<14,5>(w_54_fu_28335_p2.read());
}

void ShuffleNetV2::thread_w_54_cast_cast_fu_28345_p1() {
    w_54_cast_cast_fu_28345_p1 = esl_zext<15,5>(w_54_fu_28335_p2.read());
}

void ShuffleNetV2::thread_w_54_fu_28335_p2() {
    w_54_fu_28335_p2 = (!w53_reg_18628.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w53_reg_18628.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_56_fu_28665_p2() {
    w_56_fu_28665_p2 = (!ap_const_lv2_1.is_01() || !w55_reg_18684.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w55_reg_18684.read()));
}

void ShuffleNetV2::thread_w_58_cast_cast_fu_28965_p1() {
    w_58_cast_cast_fu_28965_p1 = esl_zext<15,5>(w_58_fu_28959_p2.read());
}

void ShuffleNetV2::thread_w_58_fu_28959_p2() {
    w_58_fu_28959_p2 = (!w57_reg_18773.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w57_reg_18773.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_60_fu_29402_p2() {
    w_60_fu_29402_p2 = (!w59_reg_18850.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w59_reg_18850.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_62_fu_30140_p2() {
    w_62_fu_30140_p2 = (!w61_reg_18971.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w61_reg_18971.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_64_cast_cast1_fu_31020_p1() {
    w_64_cast_cast1_fu_31020_p1 = esl_zext<14,4>(w_64_fu_31014_p2.read());
}

void ShuffleNetV2::thread_w_64_cast_cast_fu_31024_p1() {
    w_64_cast_cast_fu_31024_p1 = esl_zext<15,4>(w_64_fu_31014_p2.read());
}

void ShuffleNetV2::thread_w_64_fu_31014_p2() {
    w_64_fu_31014_p2 = (!w63_reg_19103.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w63_reg_19103.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_66_fu_31470_p2() {
    w_66_fu_31470_p2 = (!w65_reg_19180.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w65_reg_19180.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_68_cast_cast_fu_32275_p1() {
    w_68_cast_cast_fu_32275_p1 = esl_zext<15,4>(w_68_fu_32269_p2.read());
}

void ShuffleNetV2::thread_w_68_fu_32269_p2() {
    w_68_fu_32269_p2 = (!w67_reg_19312.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w67_reg_19312.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_70_cast_cast1_fu_32473_p1() {
    w_70_cast_cast1_fu_32473_p1 = esl_zext<14,4>(w_70_fu_32467_p2.read());
}

void ShuffleNetV2::thread_w_70_cast_cast_fu_32477_p1() {
    w_70_cast_cast_fu_32477_p1 = esl_zext<15,4>(w_70_fu_32467_p2.read());
}

void ShuffleNetV2::thread_w_70_fu_32467_p2() {
    w_70_fu_32467_p2 = (!w69_reg_19345.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w69_reg_19345.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_72_fu_32923_p2() {
    w_72_fu_32923_p2 = (!w71_reg_19422.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w71_reg_19422.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_74_cast_cast_fu_33732_p1() {
    w_74_cast_cast_fu_33732_p1 = esl_zext<15,4>(w_74_fu_33726_p2.read());
}

void ShuffleNetV2::thread_w_74_fu_33726_p2() {
    w_74_fu_33726_p2 = (!w73_reg_19554.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w73_reg_19554.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_76_cast_cast1_fu_33930_p1() {
    w_76_cast_cast1_fu_33930_p1 = esl_zext<14,4>(w_76_fu_33924_p2.read());
}

void ShuffleNetV2::thread_w_76_cast_cast_fu_33934_p1() {
    w_76_cast_cast_fu_33934_p1 = esl_zext<15,4>(w_76_fu_33924_p2.read());
}

void ShuffleNetV2::thread_w_76_fu_33924_p2() {
    w_76_fu_33924_p2 = (!w75_reg_19587.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w75_reg_19587.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_78_fu_34392_p2() {
    w_78_fu_34392_p2 = (!w77_reg_19664.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w77_reg_19664.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_80_cast_cast_fu_35197_p1() {
    w_80_cast_cast_fu_35197_p1 = esl_zext<15,4>(w_80_fu_35191_p2.read());
}

void ShuffleNetV2::thread_w_80_fu_35191_p2() {
    w_80_fu_35191_p2 = (!w79_reg_19796.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w79_reg_19796.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_82_cast_cast1_fu_35395_p1() {
    w_82_cast_cast1_fu_35395_p1 = esl_zext<14,4>(w_82_fu_35389_p2.read());
}

void ShuffleNetV2::thread_w_82_cast_cast_fu_35399_p1() {
    w_82_cast_cast_fu_35399_p1 = esl_zext<15,4>(w_82_fu_35389_p2.read());
}

void ShuffleNetV2::thread_w_82_fu_35389_p2() {
    w_82_fu_35389_p2 = (!w81_reg_19829.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w81_reg_19829.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_84_fu_35845_p2() {
    w_84_fu_35845_p2 = (!w83_reg_19906.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w83_reg_19906.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_86_cast_cast_fu_36642_p1() {
    w_86_cast_cast_fu_36642_p1 = esl_zext<15,4>(w_86_fu_36636_p2.read());
}

void ShuffleNetV2::thread_w_86_fu_36636_p2() {
    w_86_fu_36636_p2 = (!w85_reg_20038.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w85_reg_20038.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_88_cast_cast1_fu_36840_p1() {
    w_88_cast_cast1_fu_36840_p1 = esl_zext<14,4>(w_88_fu_36834_p2.read());
}

void ShuffleNetV2::thread_w_88_cast_cast_fu_36844_p1() {
    w_88_cast_cast_fu_36844_p1 = esl_zext<15,4>(w_88_fu_36834_p2.read());
}

void ShuffleNetV2::thread_w_88_fu_36834_p2() {
    w_88_fu_36834_p2 = (!w87_reg_20071.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w87_reg_20071.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_90_fu_37290_p2() {
    w_90_fu_37290_p2 = (!w89_reg_20148.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w89_reg_20148.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_92_cast_cast_fu_38095_p1() {
    w_92_cast_cast_fu_38095_p1 = esl_zext<15,4>(w_92_fu_38089_p2.read());
}

void ShuffleNetV2::thread_w_92_fu_38089_p2() {
    w_92_fu_38089_p2 = (!w91_reg_20280.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w91_reg_20280.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_94_cast_cast1_fu_38293_p1() {
    w_94_cast_cast1_fu_38293_p1 = esl_zext<14,4>(w_94_fu_38287_p2.read());
}

void ShuffleNetV2::thread_w_94_cast_cast_fu_38297_p1() {
    w_94_cast_cast_fu_38297_p1 = esl_zext<15,4>(w_94_fu_38287_p2.read());
}

void ShuffleNetV2::thread_w_94_fu_38287_p2() {
    w_94_fu_38287_p2 = (!w93_reg_20313.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w93_reg_20313.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_96_fu_38743_p2() {
    w_96_fu_38743_p2 = (!w95_reg_20390.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w95_reg_20390.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_98_cast_cast_fu_39552_p1() {
    w_98_cast_cast_fu_39552_p1 = esl_zext<15,4>(w_98_fu_39546_p2.read());
}

void ShuffleNetV2::thread_w_98_fu_39546_p2() {
    w_98_fu_39546_p2 = (!w97_reg_20522.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w97_reg_20522.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_cast_cast_fu_25726_p1() {
    w_cast_cast_fu_25726_p1 = esl_zext<8,6>(w_reg_18038.read());
}

void ShuffleNetV2::thread_w_i_cast_cast_fu_49313_p1() {
    w_i_cast_cast_fu_49313_p1 = esl_zext<12,3>(w_i_reg_22119.read());
}

void ShuffleNetV2::thread_weights_24_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_4_reg_51545.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_3_reg_51056.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_2_reg_50567.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_1_reg_50116.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_reg_49892.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_32_strid_fu_25373_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state342.read()))) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_16_no_re_fu_24945_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_32_strid_1_fu_24887_weight_V_address0.read();
    } else {
        weights_24_1_3x3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_1_3x3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read()))) {
        weights_24_1_3x3_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read())) {
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_32_strid_fu_25373_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state342.read()))) {
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_16_no_re_fu_24945_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_32_strid_1_fu_24887_weight_V_ce0.read();
    } else {
        weights_24_1_3x3_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_1_3x3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read()))) {
        weights_24_1_3x3_V_we0 = ap_const_logic_1;
    } else {
        weights_24_1_3x3_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_199_reg_51626.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_175_reg_51390.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_151_reg_51137.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_127_reg_50907.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_103_reg_50642.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_79_reg_50418.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_55_reg_50203.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_31_reg_49973.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_7_reg_49748.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_10_address0 = grp_subconv_1x1_16_p_fu_23418_weight_10_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_10_address0 = grp_subconv_1x1_32_p_fu_23314_weight_10_V_address0.read();
    } else {
        weights_24_24_1x1_V_10_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_10_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_10_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_10_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_10_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_10_V_ce0.read();
    } else {
        weights_24_24_1x1_V_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_A)))) {
        weights_24_24_1x1_V_10_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_210_reg_51681.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_186_reg_51445.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_162_reg_51192.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_138_reg_50962.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_114_reg_50697.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_90_reg_50473.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_66_reg_50258.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_42_reg_50028.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_18_reg_49803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_11_address0 = grp_subconv_1x1_16_p_fu_23418_weight_11_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_11_address0 = grp_subconv_1x1_32_p_fu_23314_weight_11_V_address0.read();
    } else {
        weights_24_24_1x1_V_11_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_11_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_11_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_11_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_11_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_11_V_ce0.read();
    } else {
        weights_24_24_1x1_V_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_B)))) {
        weights_24_24_1x1_V_11_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_195_reg_51606.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_171_reg_51370.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_147_reg_51117.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_123_reg_50887.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_99_reg_50622.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_75_reg_50398.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_51_reg_50183.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_27_reg_49953.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_3_reg_49728.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_12_address0 = grp_subconv_1x1_16_p_fu_23418_weight_12_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_12_address0 = grp_subconv_1x1_32_p_fu_23314_weight_12_V_address0.read();
    } else {
        weights_24_24_1x1_V_12_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_12_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_12_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_12_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_12_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_12_V_ce0.read();
    } else {
        weights_24_24_1x1_V_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_C)))) {
        weights_24_24_1x1_V_12_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_197_reg_51616.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_173_reg_51380.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_149_reg_51127.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_125_reg_50897.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_101_reg_50632.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_77_reg_50408.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_53_reg_50193.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_29_reg_49963.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_5_reg_49738.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_13_address0 = grp_subconv_1x1_16_p_fu_23418_weight_13_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_13_address0 = grp_subconv_1x1_32_p_fu_23314_weight_13_V_address0.read();
    } else {
        weights_24_24_1x1_V_13_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_13_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_13_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_13_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_13_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_13_V_ce0.read();
    } else {
        weights_24_24_1x1_V_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_D)))) {
        weights_24_24_1x1_V_13_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_211_reg_51686.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_187_reg_51450.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_163_reg_51197.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_139_reg_50967.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_115_reg_50702.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_91_reg_50478.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_67_reg_50263.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_43_reg_50033.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_19_reg_49808.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_14_address0 = grp_subconv_1x1_16_p_fu_23418_weight_14_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_14_address0 = grp_subconv_1x1_32_p_fu_23314_weight_14_V_address0.read();
    } else {
        weights_24_24_1x1_V_14_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_14_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_14_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_14_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_14_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_14_V_ce0.read();
    } else {
        weights_24_24_1x1_V_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_E)))) {
        weights_24_24_1x1_V_14_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_194_reg_51601.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_170_reg_51365.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_146_reg_51112.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_122_reg_50882.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_98_reg_50617.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_74_reg_50393.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_50_reg_50178.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_26_reg_49948.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_2_reg_49723.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_15_address0 = grp_subconv_1x1_16_p_fu_23418_weight_15_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_15_address0 = grp_subconv_1x1_32_p_fu_23314_weight_15_V_address0.read();
    } else {
        weights_24_24_1x1_V_15_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_15_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_15_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_15_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_15_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_15_V_ce0.read();
    } else {
        weights_24_24_1x1_V_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_F)))) {
        weights_24_24_1x1_V_15_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_196_reg_51611.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_172_reg_51375.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_148_reg_51122.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_124_reg_50892.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_100_reg_50627.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_76_reg_50403.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_52_reg_50188.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_28_reg_49958.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_4_reg_49733.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_16_address0 = grp_subconv_1x1_16_p_fu_23418_weight_16_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_16_address0 = grp_subconv_1x1_32_p_fu_23314_weight_16_V_address0.read();
    } else {
        weights_24_24_1x1_V_16_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_16_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_16_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_16_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_16_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_16_V_ce0.read();
    } else {
        weights_24_24_1x1_V_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_16_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_10)))) {
        weights_24_24_1x1_V_16_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_202_reg_51641.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_178_reg_51405.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_154_reg_51152.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_130_reg_50922.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_106_reg_50657.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_82_reg_50433.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_58_reg_50218.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_34_reg_49988.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_10_reg_49763.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_17_address0 = grp_subconv_1x1_16_p_fu_23418_weight_17_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_17_address0 = grp_subconv_1x1_32_p_fu_23314_weight_17_V_address0.read();
    } else {
        weights_24_24_1x1_V_17_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_17_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_17_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_17_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_17_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_17_V_ce0.read();
    } else {
        weights_24_24_1x1_V_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_17_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_11)))) {
        weights_24_24_1x1_V_17_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_193_reg_51596.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_169_reg_51360.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_145_reg_51107.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_121_reg_50877.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_97_reg_50612.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_73_reg_50388.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_49_reg_50173.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_25_reg_49943.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_1_reg_49718.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_18_address0 = grp_subconv_1x1_16_p_fu_23418_weight_18_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_18_address0 = grp_subconv_1x1_32_p_fu_23314_weight_18_V_address0.read();
    } else {
        weights_24_24_1x1_V_18_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_18_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_18_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_18_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_18_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_18_V_ce0.read();
    } else {
        weights_24_24_1x1_V_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_18_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_12)))) {
        weights_24_24_1x1_V_18_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_192_reg_51591.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_168_reg_51355.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_144_reg_51102.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_120_reg_50872.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_96_reg_50607.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_72_reg_50383.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_48_reg_50168.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_24_reg_49938.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_s_reg_49713.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_19_address0 = grp_subconv_1x1_16_p_fu_23418_weight_19_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_19_address0 = grp_subconv_1x1_32_p_fu_23314_weight_19_V_address0.read();
    } else {
        weights_24_24_1x1_V_19_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_19_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_19_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_19_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_19_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_19_V_ce0.read();
    } else {
        weights_24_24_1x1_V_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_19_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_13)))) {
        weights_24_24_1x1_V_19_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_198_reg_51621.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_174_reg_51385.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_150_reg_51132.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_126_reg_50902.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_102_reg_50637.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_78_reg_50413.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_54_reg_50198.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_30_reg_49968.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_6_reg_49743.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_1_address0 = grp_subconv_1x1_16_p_fu_23418_weight_1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_1_address0 = grp_subconv_1x1_32_p_fu_23314_weight_1_V_address0.read();
    } else {
        weights_24_24_1x1_V_1_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_1_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_1_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_1_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_1_V_ce0.read();
    } else {
        weights_24_24_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_1)))) {
        weights_24_24_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_204_reg_51651.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_180_reg_51415.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_156_reg_51162.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_132_reg_50932.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_108_reg_50667.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_84_reg_50443.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_60_reg_50228.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_36_reg_49998.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_12_reg_49773.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_20_address0 = grp_subconv_1x1_16_p_fu_23418_weight_20_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_20_address0 = grp_subconv_1x1_32_p_fu_23314_weight_20_V_address0.read();
    } else {
        weights_24_24_1x1_V_20_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_20_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_20_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_20_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_20_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_20_V_ce0.read();
    } else {
        weights_24_24_1x1_V_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_20_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_14)))) {
        weights_24_24_1x1_V_20_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_203_reg_51646.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_179_reg_51410.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_155_reg_51157.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_131_reg_50927.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_107_reg_50662.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_83_reg_50438.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_59_reg_50223.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_35_reg_49993.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_11_reg_49768.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_21_address0 = grp_subconv_1x1_16_p_fu_23418_weight_21_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_21_address0 = grp_subconv_1x1_32_p_fu_23314_weight_21_V_address0.read();
    } else {
        weights_24_24_1x1_V_21_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_21_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_21_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_21_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_21_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_21_V_ce0.read();
    } else {
        weights_24_24_1x1_V_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_21_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_15)))) {
        weights_24_24_1x1_V_21_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_212_reg_51691.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_188_reg_51455.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_164_reg_51202.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_140_reg_50972.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_116_reg_50707.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_92_reg_50483.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_68_reg_50268.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_44_reg_50038.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_20_reg_49813.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_22_address0 = grp_subconv_1x1_16_p_fu_23418_weight_22_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_22_address0 = grp_subconv_1x1_32_p_fu_23314_weight_22_V_address0.read();
    } else {
        weights_24_24_1x1_V_22_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_22_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_22_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_22_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_22_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_22_V_ce0.read();
    } else {
        weights_24_24_1x1_V_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_22_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_16)))) {
        weights_24_24_1x1_V_22_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_214_reg_51701.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_190_reg_51465.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_166_reg_51212.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_142_reg_50982.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_118_reg_50717.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_94_reg_50493.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_70_reg_50278.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_46_reg_50048.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_22_reg_49823.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_23_address0 = grp_subconv_1x1_16_p_fu_23418_weight_23_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_23_address0 = grp_subconv_1x1_32_p_fu_23314_weight_23_V_address0.read();
    } else {
        weights_24_24_1x1_V_23_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_23_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_23_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_23_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_23_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_23_V_ce0.read();
    } else {
        weights_24_24_1x1_V_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_23_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co_reg_18060.read()) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co9_reg_18138.read()) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co16_reg_18216.read()) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co22_reg_18283.read()) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co29_reg_18361.read()) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co38_reg_18461.read()) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co44_reg_18539.read()) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co49_reg_18639.read()) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co54_reg_18717.read()) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_16)))) {
        weights_24_24_1x1_V_23_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_200_reg_51631.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_176_reg_51395.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_152_reg_51142.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_128_reg_50912.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_104_reg_50647.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_80_reg_50423.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_56_reg_50208.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_32_reg_49978.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_8_reg_49753.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_2_address0 = grp_subconv_1x1_16_p_fu_23418_weight_2_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_2_address0 = grp_subconv_1x1_32_p_fu_23314_weight_2_V_address0.read();
    } else {
        weights_24_24_1x1_V_2_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_2_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_2_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_2_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_2_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_2_V_ce0.read();
    } else {
        weights_24_24_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_2)))) {
        weights_24_24_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_205_reg_51656.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_181_reg_51420.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_157_reg_51167.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_133_reg_50937.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_109_reg_50672.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_85_reg_50448.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_61_reg_50233.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_37_reg_50003.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_13_reg_49778.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_3_address0 = grp_subconv_1x1_16_p_fu_23418_weight_3_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_3_address0 = grp_subconv_1x1_32_p_fu_23314_weight_3_V_address0.read();
    } else {
        weights_24_24_1x1_V_3_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_3_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_3_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_3_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_3_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_3_V_ce0.read();
    } else {
        weights_24_24_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_3)))) {
        weights_24_24_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_213_reg_51696.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_189_reg_51460.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_165_reg_51207.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_141_reg_50977.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_117_reg_50712.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_93_reg_50488.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_69_reg_50273.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_45_reg_50043.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_21_reg_49818.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_4_address0 = grp_subconv_1x1_16_p_fu_23418_weight_4_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_4_address0 = grp_subconv_1x1_32_p_fu_23314_weight_4_V_address0.read();
    } else {
        weights_24_24_1x1_V_4_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_4_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_4_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_4_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_4_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_4_V_ce0.read();
    } else {
        weights_24_24_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_4)))) {
        weights_24_24_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_208_reg_51671.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_184_reg_51435.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_160_reg_51182.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_136_reg_50952.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_112_reg_50687.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_88_reg_50463.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_64_reg_50248.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_40_reg_50018.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_16_reg_49793.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_5_address0 = grp_subconv_1x1_16_p_fu_23418_weight_5_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_5_address0 = grp_subconv_1x1_32_p_fu_23314_weight_5_V_address0.read();
    } else {
        weights_24_24_1x1_V_5_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_5_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_5_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_5_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_5_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_5_V_ce0.read();
    } else {
        weights_24_24_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_5)))) {
        weights_24_24_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_209_reg_51676.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_185_reg_51440.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_161_reg_51187.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_137_reg_50957.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_113_reg_50692.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_89_reg_50468.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_65_reg_50253.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_41_reg_50023.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_17_reg_49798.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_6_address0 = grp_subconv_1x1_16_p_fu_23418_weight_6_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_6_address0 = grp_subconv_1x1_32_p_fu_23314_weight_6_V_address0.read();
    } else {
        weights_24_24_1x1_V_6_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_6_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_6_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_6_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_6_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_6_V_ce0.read();
    } else {
        weights_24_24_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_6)))) {
        weights_24_24_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_215_reg_51706.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_191_reg_51470.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_167_reg_51217.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_143_reg_50987.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_119_reg_50722.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_95_reg_50498.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_71_reg_50283.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_47_reg_50053.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_23_reg_49828.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_7_address0 = grp_subconv_1x1_16_p_fu_23418_weight_7_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_7_address0 = grp_subconv_1x1_32_p_fu_23314_weight_7_V_address0.read();
    } else {
        weights_24_24_1x1_V_7_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_7_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_7_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_7_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_7_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_7_V_ce0.read();
    } else {
        weights_24_24_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_7)))) {
        weights_24_24_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_207_reg_51666.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_183_reg_51430.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_159_reg_51177.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_135_reg_50947.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_111_reg_50682.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_87_reg_50458.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_63_reg_50243.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_39_reg_50013.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_15_reg_49788.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_8_address0 = grp_subconv_1x1_16_p_fu_23418_weight_8_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_8_address0 = grp_subconv_1x1_32_p_fu_23314_weight_8_V_address0.read();
    } else {
        weights_24_24_1x1_V_8_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_8_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_8_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_8_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_8_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_8_V_ce0.read();
    } else {
        weights_24_24_1x1_V_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_8)))) {
        weights_24_24_1x1_V_8_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_206_reg_51661.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_182_reg_51425.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_158_reg_51172.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_134_reg_50942.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_110_reg_50677.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_86_reg_50453.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_62_reg_50238.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_38_reg_50008.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_14_reg_49783.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_9_address0 = grp_subconv_1x1_16_p_fu_23418_weight_9_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_9_address0 = grp_subconv_1x1_32_p_fu_23314_weight_9_V_address0.read();
    } else {
        weights_24_24_1x1_V_9_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_9_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_9_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_9_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_9_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_9_V_ce0.read();
    } else {
        weights_24_24_1x1_V_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_18060.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_18138.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_18216.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_18283.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_18361.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_18461.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_18539.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_18639.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_18717.read(), ap_const_lv5_9)))) {
        weights_24_24_1x1_V_9_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_201_reg_51636.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_177_reg_51400.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_153_reg_51147.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_129_reg_50917.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_105_reg_50652.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_81_reg_50428.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_57_reg_50213.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_33_reg_49983.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_9_reg_49758.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_s_address0 = grp_subconv_1x1_16_p_fu_23418_weight_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_s_address0 = grp_subconv_1x1_32_p_fu_23314_weight_0_V_address0.read();
    } else {
        weights_24_24_1x1_V_s_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()))) {
        weights_24_24_1x1_V_s_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_s_ce0 = grp_subconv_1x1_16_p_fu_23418_weight_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_s_ce0 = grp_subconv_1x1_32_p_fu_23314_weight_0_V_ce0.read();
    } else {
        weights_24_24_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co_reg_18060.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co9_reg_18138.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co16_reg_18216.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co22_reg_18283.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co29_reg_18361.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co38_reg_18461.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co44_reg_18539.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co49_reg_18639.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co54_reg_18717.read())))) {
        weights_24_24_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_s_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1192.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1386_cast_fu_41876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1101.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1318_cast_fu_40407_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1010.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1251_cast_fu_38950_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state919.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1186_cast_fu_37493_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state828.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1122_cast_fu_36040_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state737.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1058_cast_fu_34587_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state646.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_992_cast_fu_33122_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_928_cast_fu_31673_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state467.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_872_cast_fu_30335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_844_cast_fu_29601_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read())) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_16_strid_1_fu_25397_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state568.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state659.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state750.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state841.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state932.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1205.read()))) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_8_no_rel_fu_24670_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_16_strid_fu_24564_weight_V_address0.read();
    } else {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state467.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state646.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state737.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state828.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state919.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1010.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1101.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1192.read()))) {
        weights_48_1_3x3_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state480.read())) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_16_strid_1_fu_25397_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state568.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state659.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state750.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state841.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state932.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1114.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1205.read()))) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_8_no_rel_fu_24670_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state423.read())) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_16_strid_fu_24564_weight_V_ce0.read();
    } else {
        weights_48_1_3x3_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state410.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state467.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state646.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state737.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state828.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state919.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1010.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1101.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1192.read()))) {
        weights_48_1_3x3_V_we0 = ap_const_logic_1;
    } else {
        weights_48_1_3x3_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_893_reg_60183.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_845_reg_59708.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_797_reg_59268.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_749_reg_58793.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_701_reg_58353.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_653_reg_57878.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_605_reg_57438.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_557_reg_56963.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_509_reg_56523.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_461_reg_56048.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_413_reg_55608.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_365_reg_55133.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_317_reg_54693.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_269_reg_54218.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_221_reg_53778.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_173_reg_53303.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_125_reg_52907.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_77_reg_52432.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_10_address0 = weights_48_48_1x1_V_29_reg_51957.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_10_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_10_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_10_address0 = grp_subconv_1x1_8_p_fu_22522_weight_10_V_address0.read();
    } else {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_10_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_10_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_10_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_10_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_10_V_ce0.read();
    } else {
        weights_48_48_1x1_V_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_A)))) {
        weights_48_48_1x1_V_10_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_890_reg_60168.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_842_reg_59693.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_794_reg_59253.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_746_reg_58778.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_698_reg_58338.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_650_reg_57863.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_602_reg_57423.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_554_reg_56948.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_506_reg_56508.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_458_reg_56033.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_410_reg_55593.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_362_reg_55118.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_314_reg_54678.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_266_reg_54203.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_218_reg_53763.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_170_reg_53288.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_122_reg_52892.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_74_reg_52417.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_11_address0 = weights_48_48_1x1_V_26_reg_51942.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_11_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_11_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_11_address0 = grp_subconv_1x1_8_p_fu_22522_weight_11_V_address0.read();
    } else {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_11_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_11_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_11_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_11_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_11_V_ce0.read();
    } else {
        weights_48_48_1x1_V_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_B)))) {
        weights_48_48_1x1_V_11_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_891_reg_60173.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_843_reg_59698.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_795_reg_59258.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_747_reg_58783.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_699_reg_58343.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_651_reg_57868.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_603_reg_57428.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_555_reg_56953.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_507_reg_56513.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_459_reg_56038.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_411_reg_55598.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_363_reg_55123.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_315_reg_54683.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_267_reg_54208.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_219_reg_53768.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_171_reg_53293.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_123_reg_52897.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_75_reg_52422.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_12_address0 = weights_48_48_1x1_V_27_reg_51947.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_12_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_12_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_12_address0 = grp_subconv_1x1_8_p_fu_22522_weight_12_V_address0.read();
    } else {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_12_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_12_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_12_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_12_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_12_V_ce0.read();
    } else {
        weights_48_48_1x1_V_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_C)))) {
        weights_48_48_1x1_V_12_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_868_reg_60058.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_820_reg_59583.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_772_reg_59143.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_724_reg_58668.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_676_reg_58228.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_628_reg_57753.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_580_reg_57313.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_532_reg_56838.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_484_reg_56398.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_436_reg_55923.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_388_reg_55483.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_340_reg_55008.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_292_reg_54568.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_244_reg_54093.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_196_reg_53653.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_148_reg_53178.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_100_reg_52782.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_52_reg_52307.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_13_address0 = weights_48_48_1x1_V_4_reg_51832.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_13_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_13_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_13_address0 = grp_subconv_1x1_8_p_fu_22522_weight_13_V_address0.read();
    } else {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_13_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_13_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_13_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_13_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_13_V_ce0.read();
    } else {
        weights_48_48_1x1_V_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_D)))) {
        weights_48_48_1x1_V_13_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_866_reg_60048.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_818_reg_59573.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_770_reg_59133.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_722_reg_58658.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_674_reg_58218.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_626_reg_57743.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_578_reg_57303.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_530_reg_56828.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_482_reg_56388.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_434_reg_55913.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_386_reg_55473.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_338_reg_54998.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_290_reg_54558.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_242_reg_54083.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_194_reg_53643.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_146_reg_53168.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_98_reg_52772.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_50_reg_52297.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_14_address0 = weights_48_48_1x1_V_2_reg_51822.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_14_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_14_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_14_address0 = grp_subconv_1x1_8_p_fu_22522_weight_14_V_address0.read();
    } else {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_14_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_14_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_14_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_14_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_14_V_ce0.read();
    } else {
        weights_48_48_1x1_V_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_E)))) {
        weights_48_48_1x1_V_14_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_889_reg_60163.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_841_reg_59688.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_793_reg_59248.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_745_reg_58773.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_697_reg_58333.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_649_reg_57858.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_601_reg_57418.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_553_reg_56943.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_505_reg_56503.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_457_reg_56028.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_409_reg_55588.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_361_reg_55113.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_313_reg_54673.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_265_reg_54198.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_217_reg_53758.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_169_reg_53283.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_121_reg_52887.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_73_reg_52412.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_15_address0 = weights_48_48_1x1_V_25_reg_51937.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_15_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_15_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_15_address0 = grp_subconv_1x1_8_p_fu_22522_weight_15_V_address0.read();
    } else {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_15_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_15_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_15_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_15_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_15_V_ce0.read();
    } else {
        weights_48_48_1x1_V_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_F)))) {
        weights_48_48_1x1_V_15_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_865_reg_60043.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_817_reg_59568.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_769_reg_59128.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_721_reg_58653.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_673_reg_58213.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_625_reg_57738.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_577_reg_57298.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_529_reg_56823.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_481_reg_56383.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_433_reg_55908.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_385_reg_55468.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_337_reg_54993.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_289_reg_54553.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_241_reg_54078.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_193_reg_53638.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_145_reg_53163.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_97_reg_52767.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_49_reg_52292.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_16_address0 = weights_48_48_1x1_V_1_reg_51817.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_16_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_16_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_16_address0 = grp_subconv_1x1_8_p_fu_22522_weight_16_V_address0.read();
    } else {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_16_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_16_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_16_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_16_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_16_V_ce0.read();
    } else {
        weights_48_48_1x1_V_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_10)))) {
        weights_48_48_1x1_V_16_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_882_reg_60128.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_834_reg_59653.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_786_reg_59213.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_738_reg_58738.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_690_reg_58298.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_642_reg_57823.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_594_reg_57383.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_546_reg_56908.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_498_reg_56468.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_450_reg_55993.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_402_reg_55553.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_354_reg_55078.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_306_reg_54638.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_258_reg_54163.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_210_reg_53723.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_162_reg_53248.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_114_reg_52852.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_66_reg_52377.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_17_address0 = weights_48_48_1x1_V_18_reg_51902.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_17_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_17_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_17_address0 = grp_subconv_1x1_8_p_fu_22522_weight_17_V_address0.read();
    } else {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_17_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_17_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_17_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_17_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_17_V_ce0.read();
    } else {
        weights_48_48_1x1_V_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_11)))) {
        weights_48_48_1x1_V_17_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_884_reg_60138.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_836_reg_59663.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_788_reg_59223.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_740_reg_58748.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_692_reg_58308.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_644_reg_57833.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_596_reg_57393.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_548_reg_56918.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_500_reg_56478.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_452_reg_56003.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_404_reg_55563.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_356_reg_55088.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_308_reg_54648.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_260_reg_54173.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_212_reg_53733.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_164_reg_53258.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_116_reg_52862.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_68_reg_52387.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_18_address0 = weights_48_48_1x1_V_20_reg_51912.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_18_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_18_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_18_address0 = grp_subconv_1x1_8_p_fu_22522_weight_18_V_address0.read();
    } else {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_18_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_18_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_18_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_18_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_18_V_ce0.read();
    } else {
        weights_48_48_1x1_V_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_12)))) {
        weights_48_48_1x1_V_18_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_877_reg_60103.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_829_reg_59628.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_781_reg_59188.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_733_reg_58713.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_685_reg_58273.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_637_reg_57798.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_589_reg_57358.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_541_reg_56883.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_493_reg_56443.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_445_reg_55968.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_397_reg_55528.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_349_reg_55053.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_301_reg_54613.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_253_reg_54138.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_205_reg_53698.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_157_reg_53223.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_109_reg_52827.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_61_reg_52352.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_19_address0 = weights_48_48_1x1_V_13_reg_51877.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_19_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_19_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_19_address0 = grp_subconv_1x1_8_p_fu_22522_weight_19_V_address0.read();
    } else {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_19_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_19_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_19_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_19_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_19_V_ce0.read();
    } else {
        weights_48_48_1x1_V_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_13)))) {
        weights_48_48_1x1_V_19_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_867_reg_60053.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_819_reg_59578.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_771_reg_59138.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_723_reg_58663.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_675_reg_58223.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_627_reg_57748.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_579_reg_57308.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_531_reg_56833.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_483_reg_56393.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_435_reg_55918.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_387_reg_55478.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_339_reg_55003.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_291_reg_54563.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_243_reg_54088.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_195_reg_53648.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_147_reg_53173.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_99_reg_52777.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_51_reg_52302.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_1_address0 = weights_48_48_1x1_V_3_reg_51827.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_1_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_1_address0 = grp_subconv_1x1_8_p_fu_22522_weight_1_V_address0.read();
    } else {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_1_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_1_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_1_V_ce0.read();
    } else {
        weights_48_48_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_1)))) {
        weights_48_48_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_878_reg_60108.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_830_reg_59633.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_782_reg_59193.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_734_reg_58718.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_686_reg_58278.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_638_reg_57803.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_590_reg_57363.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_542_reg_56888.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_494_reg_56448.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_446_reg_55973.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_398_reg_55533.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_350_reg_55058.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_302_reg_54618.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_254_reg_54143.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_206_reg_53703.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_158_reg_53228.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_110_reg_52832.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_62_reg_52357.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_20_address0 = weights_48_48_1x1_V_14_reg_51882.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_20_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_20_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_20_address0 = grp_subconv_1x1_8_p_fu_22522_weight_20_V_address0.read();
    } else {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_20_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_20_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_20_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_20_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_20_V_ce0.read();
    } else {
        weights_48_48_1x1_V_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_14)))) {
        weights_48_48_1x1_V_20_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_875_reg_60093.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_827_reg_59618.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_779_reg_59178.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_731_reg_58703.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_683_reg_58263.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_635_reg_57788.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_587_reg_57348.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_539_reg_56873.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_491_reg_56433.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_443_reg_55958.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_395_reg_55518.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_347_reg_55043.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_299_reg_54603.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_251_reg_54128.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_203_reg_53688.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_155_reg_53213.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_107_reg_52817.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_59_reg_52342.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_21_address0 = weights_48_48_1x1_V_11_reg_51867.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_21_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_21_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_21_address0 = grp_subconv_1x1_8_p_fu_22522_weight_21_V_address0.read();
    } else {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_21_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_21_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_21_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_21_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_21_V_ce0.read();
    } else {
        weights_48_48_1x1_V_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_15)))) {
        weights_48_48_1x1_V_21_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_880_reg_60118.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_832_reg_59643.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_784_reg_59203.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_736_reg_58728.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_688_reg_58288.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_640_reg_57813.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_592_reg_57373.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_544_reg_56898.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_496_reg_56458.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_448_reg_55983.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_400_reg_55543.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_352_reg_55068.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_304_reg_54628.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_256_reg_54153.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_208_reg_53713.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_160_reg_53238.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_112_reg_52842.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_64_reg_52367.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_22_address0 = weights_48_48_1x1_V_16_reg_51892.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_22_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_22_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_22_address0 = grp_subconv_1x1_8_p_fu_22522_weight_22_V_address0.read();
    } else {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_22_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_22_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_22_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_22_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_22_V_ce0.read();
    } else {
        weights_48_48_1x1_V_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_16)))) {
        weights_48_48_1x1_V_22_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_879_reg_60113.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_831_reg_59638.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_783_reg_59198.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_735_reg_58723.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_687_reg_58283.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_639_reg_57808.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_591_reg_57368.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_543_reg_56893.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_495_reg_56453.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_447_reg_55978.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_399_reg_55538.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_351_reg_55063.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_303_reg_54623.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_255_reg_54148.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_207_reg_53708.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_159_reg_53233.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_111_reg_52837.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_63_reg_52362.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_23_address0 = weights_48_48_1x1_V_15_reg_51887.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_23_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_23_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_23_address0 = grp_subconv_1x1_8_p_fu_22522_weight_23_V_address0.read();
    } else {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_23_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_23_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_23_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_23_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_23_V_ce0.read();
    } else {
        weights_48_48_1x1_V_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_17)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_17)))) {
        weights_48_48_1x1_V_23_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_871_reg_60073.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_823_reg_59598.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_775_reg_59158.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_727_reg_58683.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_679_reg_58243.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_631_reg_57768.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_583_reg_57328.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_535_reg_56853.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_487_reg_56413.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_439_reg_55938.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_391_reg_55498.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_343_reg_55023.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_295_reg_54583.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_247_reg_54108.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_199_reg_53668.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_151_reg_53193.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_103_reg_52797.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_55_reg_52322.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_24_address0 = weights_48_48_1x1_V_7_reg_51847.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_24_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_24_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_24_address0 = grp_subconv_1x1_8_p_fu_22522_weight_24_V_address0.read();
    } else {
        weights_48_48_1x1_V_24_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_24_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_24_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_24_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_24_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_24_V_ce0.read();
    } else {
        weights_48_48_1x1_V_24_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_24_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_18)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_18)))) {
        weights_48_48_1x1_V_24_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_24_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_881_reg_60123.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_833_reg_59648.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_785_reg_59208.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_737_reg_58733.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_689_reg_58293.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_641_reg_57818.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_593_reg_57378.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_545_reg_56903.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_497_reg_56463.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_449_reg_55988.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_401_reg_55548.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_353_reg_55073.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_305_reg_54633.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_257_reg_54158.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_209_reg_53718.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_161_reg_53243.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_113_reg_52847.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_65_reg_52372.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_25_address0 = weights_48_48_1x1_V_17_reg_51897.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_25_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_25_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_25_address0 = grp_subconv_1x1_8_p_fu_22522_weight_25_V_address0.read();
    } else {
        weights_48_48_1x1_V_25_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_25_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_25_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_25_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_25_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_25_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_25_V_ce0.read();
    } else {
        weights_48_48_1x1_V_25_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_25_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_19)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_19)))) {
        weights_48_48_1x1_V_25_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_25_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_26_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_870_reg_60068.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_822_reg_59593.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_774_reg_59153.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_726_reg_58678.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_678_reg_58238.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_630_reg_57763.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_582_reg_57323.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_534_reg_56848.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_486_reg_56408.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_438_reg_55933.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_390_reg_55493.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_342_reg_55018.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_294_reg_54578.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_246_reg_54103.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_198_reg_53663.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_150_reg_53188.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_102_reg_52792.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_54_reg_52317.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_26_address0 = weights_48_48_1x1_V_6_reg_51842.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_26_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_26_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_26_address0 = grp_subconv_1x1_8_p_fu_22522_weight_26_V_address0.read();
    } else {
        weights_48_48_1x1_V_26_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_26_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_26_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_26_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_26_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_26_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_26_V_ce0.read();
    } else {
        weights_48_48_1x1_V_26_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_26_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_1A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_1A)))) {
        weights_48_48_1x1_V_26_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_26_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_873_reg_60083.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_825_reg_59608.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_777_reg_59168.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_729_reg_58693.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_681_reg_58253.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_633_reg_57778.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_585_reg_57338.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_537_reg_56863.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_489_reg_56423.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_441_reg_55948.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_393_reg_55508.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_345_reg_55033.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_297_reg_54593.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_249_reg_54118.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_201_reg_53678.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_153_reg_53203.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_105_reg_52807.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_57_reg_52332.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_27_address0 = weights_48_48_1x1_V_9_reg_51857.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_27_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_27_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_27_address0 = grp_subconv_1x1_8_p_fu_22522_weight_27_V_address0.read();
    } else {
        weights_48_48_1x1_V_27_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_27_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_27_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_27_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_27_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_27_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_27_V_ce0.read();
    } else {
        weights_48_48_1x1_V_27_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_27_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_1B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_1B)))) {
        weights_48_48_1x1_V_27_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_27_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_28_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_872_reg_60078.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_824_reg_59603.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_776_reg_59163.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_728_reg_58688.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_680_reg_58248.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_632_reg_57773.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_584_reg_57333.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_536_reg_56858.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_488_reg_56418.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_440_reg_55943.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_392_reg_55503.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_344_reg_55028.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_296_reg_54588.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_248_reg_54113.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_200_reg_53673.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_152_reg_53198.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_104_reg_52802.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_56_reg_52327.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_28_address0 = weights_48_48_1x1_V_8_reg_51852.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_28_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_28_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_28_address0 = grp_subconv_1x1_8_p_fu_22522_weight_28_V_address0.read();
    } else {
        weights_48_48_1x1_V_28_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_28_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_28_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_28_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_28_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_28_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_28_V_ce0.read();
    } else {
        weights_48_48_1x1_V_28_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_28_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_1C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_1C)))) {
        weights_48_48_1x1_V_28_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_28_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_883_reg_60133.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_835_reg_59658.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_787_reg_59218.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_739_reg_58743.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_691_reg_58303.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_643_reg_57828.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_595_reg_57388.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_547_reg_56913.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_499_reg_56473.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_451_reg_55998.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_403_reg_55558.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_355_reg_55083.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_307_reg_54643.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_259_reg_54168.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_211_reg_53728.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_163_reg_53253.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_115_reg_52857.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_67_reg_52382.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_29_address0 = weights_48_48_1x1_V_19_reg_51907.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_29_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_29_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_29_address0 = grp_subconv_1x1_8_p_fu_22522_weight_29_V_address0.read();
    } else {
        weights_48_48_1x1_V_29_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_29_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_29_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_29_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_29_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_29_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_29_V_ce0.read();
    } else {
        weights_48_48_1x1_V_29_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_29_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_1D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_1D)))) {
        weights_48_48_1x1_V_29_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_29_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_876_reg_60098.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_828_reg_59623.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_780_reg_59183.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_732_reg_58708.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_684_reg_58268.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_636_reg_57793.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_588_reg_57353.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_540_reg_56878.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_492_reg_56438.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_444_reg_55963.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_396_reg_55523.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_348_reg_55048.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_300_reg_54608.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_252_reg_54133.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_204_reg_53693.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_156_reg_53218.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_108_reg_52822.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_60_reg_52347.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_2_address0 = weights_48_48_1x1_V_12_reg_51872.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_2_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_2_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_2_address0 = grp_subconv_1x1_8_p_fu_22522_weight_2_V_address0.read();
    } else {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_2_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_2_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_2_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_2_V_ce0.read();
    } else {
        weights_48_48_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_2)))) {
        weights_48_48_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_30_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_896_reg_60198.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_848_reg_59723.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_800_reg_59283.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_752_reg_58808.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_704_reg_58368.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_656_reg_57893.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_608_reg_57453.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_560_reg_56978.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_512_reg_56538.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_464_reg_56063.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_416_reg_55623.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_368_reg_55148.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_320_reg_54708.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_272_reg_54233.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_224_reg_53793.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_176_reg_53318.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_128_reg_52922.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_80_reg_52447.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_30_address0 = weights_48_48_1x1_V_32_reg_51972.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_30_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_30_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_30_address0 = grp_subconv_1x1_8_p_fu_22522_weight_30_V_address0.read();
    } else {
        weights_48_48_1x1_V_30_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_30_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_30_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_30_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_30_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_30_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_30_V_ce0.read();
    } else {
        weights_48_48_1x1_V_30_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_30_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_1E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_1E)))) {
        weights_48_48_1x1_V_30_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_30_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_869_reg_60063.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_821_reg_59588.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_773_reg_59148.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_725_reg_58673.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_677_reg_58233.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_629_reg_57758.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_581_reg_57318.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_533_reg_56843.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_485_reg_56403.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_437_reg_55928.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_389_reg_55488.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_341_reg_55013.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_293_reg_54573.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_245_reg_54098.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_197_reg_53658.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_149_reg_53183.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_101_reg_52787.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_53_reg_52312.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_31_address0 = weights_48_48_1x1_V_5_reg_51837.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_31_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_31_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_31_address0 = grp_subconv_1x1_8_p_fu_22522_weight_31_V_address0.read();
    } else {
        weights_48_48_1x1_V_31_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_31_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_31_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_31_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_31_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_31_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_31_V_ce0.read();
    } else {
        weights_48_48_1x1_V_31_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_31_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_1F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_1F)))) {
        weights_48_48_1x1_V_31_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_31_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_32_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_900_reg_60218.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_852_reg_59743.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_804_reg_59303.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_756_reg_58828.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_708_reg_58388.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_660_reg_57913.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_612_reg_57473.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_564_reg_56998.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_516_reg_56558.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_468_reg_56083.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_420_reg_55643.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_372_reg_55168.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_324_reg_54728.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_276_reg_54253.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_228_reg_53813.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_180_reg_53338.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_132_reg_52942.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_84_reg_52467.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_32_address0 = weights_48_48_1x1_V_36_reg_51992.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_32_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_32_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_32_address0 = grp_subconv_1x1_8_p_fu_22522_weight_32_V_address0.read();
    } else {
        weights_48_48_1x1_V_32_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_32_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_32_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_32_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_32_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_32_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_32_V_ce0.read();
    } else {
        weights_48_48_1x1_V_32_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_32_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_20)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_20)))) {
        weights_48_48_1x1_V_32_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_32_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_33_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_886_reg_60148.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_838_reg_59673.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_790_reg_59233.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_742_reg_58758.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_694_reg_58318.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_646_reg_57843.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_598_reg_57403.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_550_reg_56928.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_502_reg_56488.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_454_reg_56013.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_406_reg_55573.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_358_reg_55098.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_310_reg_54658.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_262_reg_54183.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_214_reg_53743.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_166_reg_53268.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_118_reg_52872.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_70_reg_52397.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_33_address0 = weights_48_48_1x1_V_22_reg_51922.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_33_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_33_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_33_address0 = grp_subconv_1x1_8_p_fu_22522_weight_33_V_address0.read();
    } else {
        weights_48_48_1x1_V_33_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_33_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_33_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_33_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_33_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_33_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_33_V_ce0.read();
    } else {
        weights_48_48_1x1_V_33_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_33_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_21)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_21)))) {
        weights_48_48_1x1_V_33_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_33_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_34_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_874_reg_60088.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_826_reg_59613.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_778_reg_59173.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_730_reg_58698.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_682_reg_58258.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_634_reg_57783.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_586_reg_57343.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_538_reg_56868.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_490_reg_56428.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_442_reg_55953.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_394_reg_55513.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_346_reg_55038.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_298_reg_54598.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_250_reg_54123.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_202_reg_53683.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_154_reg_53208.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_106_reg_52812.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_58_reg_52337.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_34_address0 = weights_48_48_1x1_V_10_reg_51862.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_34_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_34_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_34_address0 = grp_subconv_1x1_8_p_fu_22522_weight_34_V_address0.read();
    } else {
        weights_48_48_1x1_V_34_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_34_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_34_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_34_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_34_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_34_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_34_V_ce0.read();
    } else {
        weights_48_48_1x1_V_34_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_34_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_22)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_22)))) {
        weights_48_48_1x1_V_34_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_34_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_35_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_907_reg_60253.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_859_reg_59778.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_811_reg_59338.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_763_reg_58863.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_715_reg_58423.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_667_reg_57948.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_619_reg_57508.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_571_reg_57033.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_523_reg_56593.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_475_reg_56118.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_427_reg_55678.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_379_reg_55203.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_331_reg_54763.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_283_reg_54288.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_235_reg_53848.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_187_reg_53373.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_139_reg_52977.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_91_reg_52502.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_35_address0 = weights_48_48_1x1_V_43_reg_52027.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_35_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_35_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_35_address0 = grp_subconv_1x1_8_p_fu_22522_weight_35_V_address0.read();
    } else {
        weights_48_48_1x1_V_35_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_35_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_35_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_35_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_35_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_35_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_35_V_ce0.read();
    } else {
        weights_48_48_1x1_V_35_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_35_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_23)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_23)))) {
        weights_48_48_1x1_V_35_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_35_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_36_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_908_reg_60258.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_860_reg_59783.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_812_reg_59343.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_764_reg_58868.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_716_reg_58428.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_668_reg_57953.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_620_reg_57513.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_572_reg_57038.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_524_reg_56598.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_476_reg_56123.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_428_reg_55683.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_380_reg_55208.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_332_reg_54768.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_284_reg_54293.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_236_reg_53853.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_188_reg_53378.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_140_reg_52982.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_92_reg_52507.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_36_address0 = weights_48_48_1x1_V_44_reg_52032.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_36_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_36_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_36_address0 = grp_subconv_1x1_8_p_fu_22522_weight_36_V_address0.read();
    } else {
        weights_48_48_1x1_V_36_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_36_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_36_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_36_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_36_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_36_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_36_V_ce0.read();
    } else {
        weights_48_48_1x1_V_36_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_36_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_24)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_24)))) {
        weights_48_48_1x1_V_36_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_36_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_37_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_899_reg_60213.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_851_reg_59738.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_803_reg_59298.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_755_reg_58823.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_707_reg_58383.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_659_reg_57908.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_611_reg_57468.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_563_reg_56993.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_515_reg_56553.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_467_reg_56078.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_419_reg_55638.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_371_reg_55163.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_323_reg_54723.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_275_reg_54248.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_227_reg_53808.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_179_reg_53333.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_131_reg_52937.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_83_reg_52462.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_37_address0 = weights_48_48_1x1_V_35_reg_51987.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_37_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_37_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_37_address0 = grp_subconv_1x1_8_p_fu_22522_weight_37_V_address0.read();
    } else {
        weights_48_48_1x1_V_37_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_37_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_37_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_37_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_37_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_37_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_37_V_ce0.read();
    } else {
        weights_48_48_1x1_V_37_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_37_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_25)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_25)))) {
        weights_48_48_1x1_V_37_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_37_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_38_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_897_reg_60203.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_849_reg_59728.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_801_reg_59288.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_753_reg_58813.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_705_reg_58373.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_657_reg_57898.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_609_reg_57458.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_561_reg_56983.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_513_reg_56543.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_465_reg_56068.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_417_reg_55628.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_369_reg_55153.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_321_reg_54713.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_273_reg_54238.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_225_reg_53798.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_177_reg_53323.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_129_reg_52927.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_81_reg_52452.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_38_address0 = weights_48_48_1x1_V_33_reg_51977.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_38_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_38_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_38_address0 = grp_subconv_1x1_8_p_fu_22522_weight_38_V_address0.read();
    } else {
        weights_48_48_1x1_V_38_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_38_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_38_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_38_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_38_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_38_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_38_V_ce0.read();
    } else {
        weights_48_48_1x1_V_38_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_38_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_26)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_26)))) {
        weights_48_48_1x1_V_38_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_38_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_39_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_911_reg_60273.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_863_reg_59798.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_815_reg_59358.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_767_reg_58883.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_719_reg_58443.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_671_reg_57968.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_623_reg_57528.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_575_reg_57053.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_527_reg_56613.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_479_reg_56138.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_431_reg_55698.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_383_reg_55223.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_335_reg_54783.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_287_reg_54308.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_239_reg_53868.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_191_reg_53393.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_143_reg_52997.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_95_reg_52522.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_39_address0 = weights_48_48_1x1_V_47_reg_52047.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_39_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_39_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_39_address0 = grp_subconv_1x1_8_p_fu_22522_weight_39_V_address0.read();
    } else {
        weights_48_48_1x1_V_39_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_39_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_39_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_39_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_39_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_39_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_39_V_ce0.read();
    } else {
        weights_48_48_1x1_V_39_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_39_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) && 
          esl_seteq<1,6,6>(tmp_132_t_reg_52066.read(), ap_const_lv6_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) && 
          esl_seteq<1,6,6>(tmp_153_t_reg_52541.read(), ap_const_lv6_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) && 
          esl_seteq<1,6,6>(tmp_175_t_reg_53016.read(), ap_const_lv6_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) && 
          esl_seteq<1,6,6>(tmp_188_t_reg_53412.read(), ap_const_lv6_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) && 
          esl_seteq<1,6,6>(tmp_209_t_reg_53887.read(), ap_const_lv6_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) && 
          esl_seteq<1,6,6>(tmp_223_t_reg_54327.read(), ap_const_lv6_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) && 
          esl_seteq<1,6,6>(tmp_244_t_reg_54802.read(), ap_const_lv6_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) && 
          esl_seteq<1,6,6>(tmp_258_t_reg_55242.read(), ap_const_lv6_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) && 
          esl_seteq<1,6,6>(tmp_279_t_reg_55717.read(), ap_const_lv6_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) && 
          esl_seteq<1,6,6>(tmp_293_t_reg_56157.read(), ap_const_lv6_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) && 
          esl_seteq<1,6,6>(tmp_314_t_reg_56632.read(), ap_const_lv6_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) && 
          esl_seteq<1,6,6>(tmp_328_t_reg_57072.read(), ap_const_lv6_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) && 
          esl_seteq<1,6,6>(tmp_349_t_reg_57547.read(), ap_const_lv6_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) && 
          esl_seteq<1,6,6>(tmp_363_t_reg_57987.read(), ap_const_lv6_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) && 
          esl_seteq<1,6,6>(tmp_384_t_reg_58462.read(), ap_const_lv6_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) && 
          esl_seteq<1,6,6>(tmp_398_t_reg_58902.read(), ap_const_lv6_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) && 
          esl_seteq<1,6,6>(tmp_419_t_reg_59377.read(), ap_const_lv6_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) && 
          esl_seteq<1,6,6>(tmp_433_t_reg_59817.read(), ap_const_lv6_27)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()) && 
          esl_seteq<1,6,6>(tmp_454_t_reg_60292.read(), ap_const_lv6_27)))) {
        weights_48_48_1x1_V_39_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_39_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_901_reg_60223.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_853_reg_59748.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_805_reg_59308.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_757_reg_58833.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_709_reg_58393.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_661_reg_57918.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_613_reg_57478.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_565_reg_57003.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_517_reg_56563.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_469_reg_56088.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_421_reg_55648.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_373_reg_55173.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_325_reg_54733.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_277_reg_54258.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_229_reg_53818.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_181_reg_53343.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_133_reg_52947.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_85_reg_52472.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_V_3_address0 = weights_48_48_1x1_V_37_reg_51997.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_3_address0 = grp_subconv_1x1_16p_p_fu_23114_weight_3_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_3_address0 = grp_subconv_1x1_8_p_fu_22522_weight_3_V_address0.read();
    } else {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state617.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state799.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state854.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state945.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1036.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1072.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1218.read()))) {
        weights_48_48_1x1_V_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state395.read())) {
        weights_48_48_1x1_V_3_ce0 = grp_subconv_1x1_16p_p_fu_23114_weight_3_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state595.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state631.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state722.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state777.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state813.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state868.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state904.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state959.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state995.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1086.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1141.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state450.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()))) {
        weights_48_48_1x1_V_3_ce0 = grp_subconv_1x1_8_p_fu_22522_weight_3_V_ce0.read();
    } else {
        weights_48_48_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

}

