#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_472_cast_fu_35815_p1() {
    tmp_472_cast_fu_35815_p1 = esl_sext<12,8>(tmp_402_fu_35809_p2.read());
}

void ShuffleNetV2::thread_tmp_473_cast_fu_35849_p1() {
    tmp_473_cast_fu_35849_p1 = esl_sext<32,8>(tmp_403_reg_47879.read());
}

void ShuffleNetV2::thread_tmp_475_cast_cast_fu_35516_p1() {
    tmp_475_cast_cast_fu_35516_p1 = esl_sext<10,8>(tmp_401_fu_35511_p2.read());
}

void ShuffleNetV2::thread_tmp_476_cast_cast_fu_35568_p1() {
    tmp_476_cast_cast_fu_35568_p1 = esl_sext<10,8>(tmp_404_fu_35562_p2.read());
}

void ShuffleNetV2::thread_tmp_478_cast_fu_35595_p1() {
    tmp_478_cast_fu_35595_p1 = esl_sext<12,10>(tmp_406_fu_35589_p2.read());
}

void ShuffleNetV2::thread_tmp_480_cast_fu_36152_p1() {
    tmp_480_cast_fu_36152_p1 = esl_sext<12,8>(tmp_408_fu_36146_p2.read());
}

void ShuffleNetV2::thread_tmp_481_cast_fu_36186_p1() {
    tmp_481_cast_fu_36186_p1 = esl_sext<32,8>(tmp_409_reg_48012.read());
}

void ShuffleNetV2::thread_tmp_485_cast_cast_fu_36248_p1() {
    tmp_485_cast_cast_fu_36248_p1 = esl_zext<10,3>(tmp_2598_fu_36238_p4.read());
}

void ShuffleNetV2::thread_tmp_486_cast_fu_35959_p1() {
    tmp_486_cast_fu_35959_p1 = esl_sext<10,8>(tmp_411_fu_35953_p2.read());
}

void ShuffleNetV2::thread_tmp_487_cast_cast_fu_35968_p1() {
    tmp_487_cast_cast_fu_35968_p1 = esl_sext<11,8>(tmp_412_fu_35963_p2.read());
}

void ShuffleNetV2::thread_tmp_489_cast_fu_36584_p1() {
    tmp_489_cast_fu_36584_p1 = esl_sext<12,8>(tmp_413_fu_36578_p2.read());
}

void ShuffleNetV2::thread_tmp_490_cast_fu_36618_p1() {
    tmp_490_cast_fu_36618_p1 = esl_sext<32,8>(tmp_414_reg_48139.read());
}

void ShuffleNetV2::thread_tmp_492_cast_cast_fu_36277_p1() {
    tmp_492_cast_cast_fu_36277_p1 = esl_sext<10,8>(tmp_410_fu_36272_p2.read());
}

void ShuffleNetV2::thread_tmp_493_cast_cast_fu_36329_p1() {
    tmp_493_cast_cast_fu_36329_p1 = esl_sext<10,8>(tmp_415_fu_36323_p2.read());
}

void ShuffleNetV2::thread_tmp_495_cast_cast_fu_36356_p1() {
    tmp_495_cast_cast_fu_36356_p1 = esl_sext<11,10>(tmp_417_fu_36350_p2.read());
}

void ShuffleNetV2::thread_tmp_500_cast_cast_fu_37014_p1() {
    tmp_500_cast_cast_fu_37014_p1 = esl_zext<10,3>(tmp_2613_fu_37004_p4.read());
}

void ShuffleNetV2::thread_tmp_501_cast_fu_37342_p1() {
    tmp_501_cast_fu_37342_p1 = esl_sext<12,8>(tmp_421_fu_37336_p2.read());
}

void ShuffleNetV2::thread_tmp_502_cast_fu_37376_p1() {
    tmp_502_cast_fu_37376_p1 = esl_sext<32,8>(tmp_422_reg_48364.read());
}

void ShuffleNetV2::thread_tmp_504_cast_cast_fu_37043_p1() {
    tmp_504_cast_cast_fu_37043_p1 = esl_sext<10,8>(tmp_420_fu_37038_p2.read());
}

void ShuffleNetV2::thread_tmp_505_cast_cast_fu_37095_p1() {
    tmp_505_cast_cast_fu_37095_p1 = esl_sext<10,8>(tmp_423_fu_37089_p2.read());
}

void ShuffleNetV2::thread_tmp_507_cast_fu_37122_p1() {
    tmp_507_cast_fu_37122_p1 = esl_sext<13,10>(tmp_425_fu_37116_p2.read());
}

void ShuffleNetV2::thread_tmp_509_cast_fu_37691_p1() {
    tmp_509_cast_fu_37691_p1 = esl_sext<12,8>(tmp_427_fu_37685_p2.read());
}

void ShuffleNetV2::thread_tmp_510_cast_fu_37725_p1() {
    tmp_510_cast_fu_37725_p1 = esl_sext<32,8>(tmp_428_reg_48497.read());
}

void ShuffleNetV2::thread_tmp_514_cast_cast_fu_37787_p1() {
    tmp_514_cast_cast_fu_37787_p1 = esl_zext<10,3>(tmp_2624_fu_37777_p4.read());
}

void ShuffleNetV2::thread_tmp_515_cast_cast_fu_37486_p1() {
    tmp_515_cast_cast_fu_37486_p1 = esl_sext<9,8>(tmp_430_fu_37480_p2.read());
}

void ShuffleNetV2::thread_tmp_516_cast_cast_fu_37495_p1() {
    tmp_516_cast_cast_fu_37495_p1 = esl_sext<11,8>(tmp_431_fu_37490_p2.read());
}

void ShuffleNetV2::thread_tmp_518_cast_fu_38115_p1() {
    tmp_518_cast_fu_38115_p1 = esl_sext<12,8>(tmp_432_fu_38109_p2.read());
}

void ShuffleNetV2::thread_tmp_519_cast_fu_38149_p1() {
    tmp_519_cast_fu_38149_p1 = esl_sext<32,8>(tmp_433_reg_48624.read());
}

void ShuffleNetV2::thread_tmp_521_cast_cast_fu_37816_p1() {
    tmp_521_cast_cast_fu_37816_p1 = esl_sext<10,8>(tmp_429_fu_37811_p2.read());
}

void ShuffleNetV2::thread_tmp_522_cast_cast_fu_37868_p1() {
    tmp_522_cast_cast_fu_37868_p1 = esl_sext<10,8>(tmp_434_fu_37862_p2.read());
}

void ShuffleNetV2::thread_tmp_524_cast_fu_37895_p1() {
    tmp_524_cast_fu_37895_p1 = esl_sext<13,10>(tmp_436_fu_37889_p2.read());
}

void ShuffleNetV2::thread_tmp_529_cast_cast_fu_38545_p1() {
    tmp_529_cast_cast_fu_38545_p1 = esl_zext<10,3>(tmp_2639_fu_38535_p4.read());
}

void ShuffleNetV2::thread_tmp_530_cast_fu_38873_p1() {
    tmp_530_cast_fu_38873_p1 = esl_sext<12,8>(tmp_440_fu_38867_p2.read());
}

void ShuffleNetV2::thread_tmp_531_cast_fu_38907_p1() {
    tmp_531_cast_fu_38907_p1 = esl_sext<32,8>(tmp_441_reg_48849.read());
}

void ShuffleNetV2::thread_tmp_533_cast_cast_fu_38574_p1() {
    tmp_533_cast_cast_fu_38574_p1 = esl_sext<10,8>(tmp_439_fu_38569_p2.read());
}

void ShuffleNetV2::thread_tmp_534_cast_cast_fu_38626_p1() {
    tmp_534_cast_cast_fu_38626_p1 = esl_sext<10,8>(tmp_442_fu_38620_p2.read());
}

void ShuffleNetV2::thread_tmp_536_cast_fu_38653_p1() {
    tmp_536_cast_fu_38653_p1 = esl_sext<13,10>(tmp_444_fu_38647_p2.read());
}

void ShuffleNetV2::thread_tmp_538_cast_fu_39214_p1() {
    tmp_538_cast_fu_39214_p1 = esl_sext<12,8>(tmp_446_fu_39208_p2.read());
}

void ShuffleNetV2::thread_tmp_539_cast_fu_39248_p1() {
    tmp_539_cast_fu_39248_p1 = esl_sext<32,8>(tmp_447_reg_48982.read());
}

void ShuffleNetV2::thread_tmp_543_cast_cast_fu_39310_p1() {
    tmp_543_cast_cast_fu_39310_p1 = esl_zext<10,3>(tmp_2650_fu_39300_p4.read());
}

void ShuffleNetV2::thread_tmp_544_cast_fu_39017_p1() {
    tmp_544_cast_fu_39017_p1 = esl_sext<11,8>(tmp_449_fu_39011_p2.read());
}

void ShuffleNetV2::thread_tmp_545_cast_cast_fu_39026_p1() {
    tmp_545_cast_cast_fu_39026_p1 = esl_sext<11,8>(tmp_450_fu_39021_p2.read());
}

void ShuffleNetV2::thread_tmp_547_cast_fu_39638_p1() {
    tmp_547_cast_fu_39638_p1 = esl_sext<12,8>(tmp_451_fu_39632_p2.read());
}

void ShuffleNetV2::thread_tmp_548_cast_fu_39672_p1() {
    tmp_548_cast_fu_39672_p1 = esl_sext<32,8>(tmp_452_reg_49109.read());
}

void ShuffleNetV2::thread_tmp_550_cast_cast_fu_39339_p1() {
    tmp_550_cast_cast_fu_39339_p1 = esl_sext<10,8>(tmp_448_fu_39334_p2.read());
}

void ShuffleNetV2::thread_tmp_551_cast_cast_fu_39391_p1() {
    tmp_551_cast_cast_fu_39391_p1 = esl_sext<10,8>(tmp_453_fu_39385_p2.read());
}

void ShuffleNetV2::thread_tmp_553_cast_fu_39418_p1() {
    tmp_553_cast_fu_39418_p1 = esl_sext<13,10>(tmp_455_fu_39412_p2.read());
}

void ShuffleNetV2::thread_tmp_627_fu_15551_p3() {
    tmp_627_fu_15551_p3 = esl_concat<2,1>(ci_reg_9648.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_628_fu_15563_p2() {
    tmp_628_fu_15563_p2 = (!p_shl276_cast_fu_15559_p1.read().is_01() || !tmp_769_cast_fu_15547_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl276_cast_fu_15559_p1.read()) + sc_biguint<8>(tmp_769_cast_fu_15547_p1.read()));
}

void ShuffleNetV2::thread_tmp_629_fu_15683_p3() {
    tmp_629_fu_15683_p3 = esl_concat<5,5>(co_reg_9681.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_630_fu_15695_p3() {
    tmp_630_fu_15695_p3 = esl_concat<5,3>(co_reg_9681.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_631_fu_15707_p2() {
    tmp_631_fu_15707_p2 = (!p_shl279_cast_fu_15691_p1.read().is_01() || !p_shl280_cast_fu_15703_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl279_cast_fu_15691_p1.read()) - sc_biguint<11>(p_shl280_cast_fu_15703_p1.read()));
}

void ShuffleNetV2::thread_tmp_632_fu_15585_p2() {
    tmp_632_fu_15585_p2 = (!w_cast_cast_fu_15581_p1.read().is_01() || !tmp_769_cast_reg_40396.read().is_01())? sc_lv<8>(): (sc_biguint<8>(w_cast_cast_fu_15581_p1.read()) + sc_biguint<8>(tmp_769_cast_reg_40396.read()));
}

void ShuffleNetV2::thread_tmp_633_fu_15598_p1() {
    tmp_633_fu_15598_p1 = esl_zext<32,13>(tmp_2257_fu_15590_p3.read());
}

void ShuffleNetV2::thread_tmp_634_fu_15618_p2() {
    tmp_634_fu_15618_p2 = (!w_45_cast_cast_fu_15614_p1.read().is_01() || !tmp_628_reg_40401.read().is_01())? sc_lv<8>(): (sc_biguint<8>(w_45_cast_cast_fu_15614_p1.read()) + sc_biguint<8>(tmp_628_reg_40401.read()));
}

void ShuffleNetV2::thread_tmp_635_fu_15652_p2() {
    tmp_635_fu_15652_p2 = (!p_shl277_cast_fu_15634_p3.read().is_01() || !p_shl278_cast_fu_15648_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl277_cast_fu_15634_p3.read()) + sc_biguint<13>(p_shl278_cast_fu_15648_p1.read()));
}

void ShuffleNetV2::thread_tmp_636_fu_15674_p2() {
    tmp_636_fu_15674_p2 = (!tmp_635_reg_40434.read().is_01() || !h_44_cast_cast_fu_15670_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_635_reg_40434.read()) + sc_biguint<13>(h_44_cast_cast_fu_15670_p1.read()));
}

void ShuffleNetV2::thread_tmp_637_fu_15811_p3() {
    tmp_637_fu_15811_p3 = esl_concat<5,2>(co5_reg_9715.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_638_fu_15823_p2() {
    tmp_638_fu_15823_p2 = (!p_shl281_cast_fu_15819_p1.read().is_01() || !co5_cast_cast_fu_15807_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl281_cast_fu_15819_p1.read()) - sc_biguint<8>(co5_cast_cast_fu_15807_p1.read()));
}

void ShuffleNetV2::thread_tmp_639_fu_15860_p2() {
    tmp_639_fu_15860_p2 = (!tmp_787_cast_reg_40618.read().is_01() || !w6_cast_cast_fu_15856_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_787_cast_reg_40618.read()) + sc_biguint<9>(w6_cast_cast_fu_15856_p1.read()));
}

void ShuffleNetV2::thread_tmp_640_fu_15881_p2() {
    tmp_640_fu_15881_p2 = (!p_shl193_fu_15877_p1.read().is_01() || !tmp_788_cast_fu_15865_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl193_fu_15877_p1.read()) - sc_bigint<32>(tmp_788_cast_fu_15865_p1.read()));
}

void ShuffleNetV2::thread_tmp_641_fu_15914_p2() {
    tmp_641_fu_15914_p2 = (!h7_cast_fu_15910_p1.read().is_01() || !tmp_640_reg_40637.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h7_cast_fu_15910_p1.read()) + sc_biguint<32>(tmp_640_reg_40637.read()));
}

void ShuffleNetV2::thread_tmp_642_fu_15970_p3() {
    tmp_642_fu_15970_p3 = esl_concat<6,5>(sum6_fu_15964_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_643_fu_15982_p3() {
    tmp_643_fu_15982_p3 = esl_concat<6,3>(sum6_fu_15964_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_644_fu_15994_p2() {
    tmp_644_fu_15994_p2 = (!p_shl283_cast_fu_15978_p1.read().is_01() || !p_shl284_cast_fu_15990_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl283_cast_fu_15978_p1.read()) - sc_biguint<12>(p_shl284_cast_fu_15990_p1.read()));
}

void ShuffleNetV2::thread_tmp_645_fu_16086_p3() {
    tmp_645_fu_16086_p3 = esl_concat<5,2>(co12_reg_9793.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_646_fu_16098_p2() {
    tmp_646_fu_16098_p2 = (!p_shl285_cast_fu_16094_p1.read().is_01() || !co12_cast1_cast_fu_16082_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl285_cast_fu_16094_p1.read()) - sc_biguint<8>(co12_cast1_cast_fu_16082_p1.read()));
}

void ShuffleNetV2::thread_tmp_647_fu_16134_p3() {
    tmp_647_fu_16134_p3 = esl_concat<6,2>(sum5_fu_16124_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_648_fu_16146_p2() {
    tmp_648_fu_16146_p2 = (!p_shl286_cast_fu_16142_p1.read().is_01() || !sum5_cast_cast_fu_16130_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_shl286_cast_fu_16142_p1.read()) - sc_biguint<9>(sum5_cast_cast_fu_16130_p1.read()));
}

void ShuffleNetV2::thread_tmp_649_fu_16156_p2() {
    tmp_649_fu_16156_p2 = (!w13_cast_cast_fu_16152_p1.read().is_01() || !tmp_648_reg_40856.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w13_cast_cast_fu_16152_p1.read()) + sc_biguint<9>(tmp_648_reg_40856.read()));
}

void ShuffleNetV2::thread_tmp_650_fu_16177_p2() {
    tmp_650_fu_16177_p2 = (!p_shl197_fu_16173_p1.read().is_01() || !tmp_800_cast_fu_16161_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl197_fu_16173_p1.read()) - sc_bigint<32>(tmp_800_cast_fu_16161_p1.read()));
}

void ShuffleNetV2::thread_tmp_651_fu_16183_p2() {
    tmp_651_fu_16183_p2 = (!w13_cast_cast_fu_16152_p1.read().is_01() || !tmp_797_cast_reg_40843.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w13_cast_cast_fu_16152_p1.read()) + sc_bigint<9>(tmp_797_cast_reg_40843.read()));
}

void ShuffleNetV2::thread_tmp_652_fu_16194_p2() {
    tmp_652_fu_16194_p2 = (!tmp_2271_fu_16188_p2.read().is_01() || !tmp_651_fu_16183_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_2271_fu_16188_p2.read()) - sc_biguint<9>(tmp_651_fu_16183_p2.read()));
}

void ShuffleNetV2::thread_tmp_653_fu_16227_p2() {
    tmp_653_fu_16227_p2 = (!tmp_652_reg_40861.read().is_01() || !h14_cast_cast_fu_16223_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_652_reg_40861.read()) + sc_biguint<9>(h14_cast_cast_fu_16223_p1.read()));
}

void ShuffleNetV2::thread_tmp_654_fu_16314_p3() {
    tmp_654_fu_16314_p3 = esl_concat<7,5>(sum9_fu_16308_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_655_fu_16326_p3() {
    tmp_655_fu_16326_p3 = esl_concat<7,3>(sum9_fu_16308_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_656_fu_16338_p2() {
    tmp_656_fu_16338_p2 = (!p_shl289_cast_fu_16322_p1.read().is_01() || !p_shl290_cast_fu_16334_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl289_cast_fu_16322_p1.read()) - sc_biguint<13>(p_shl290_cast_fu_16334_p1.read()));
}

void ShuffleNetV2::thread_tmp_657_fu_16426_p3() {
    tmp_657_fu_16426_p3 = esl_concat<5,4>(co19_reg_9871.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_658_fu_16438_p3() {
    tmp_658_fu_16438_p3 = esl_concat<5,1>(co19_reg_9871.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_659_fu_16450_p2() {
    tmp_659_fu_16450_p2 = (!p_shl292_cast_fu_16446_p1.read().is_01() || !p_shl291_cast_fu_16434_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl292_cast_fu_16446_p1.read()) + sc_biguint<10>(p_shl291_cast_fu_16434_p1.read()));
}

void ShuffleNetV2::thread_tmp_660_fu_16478_p3() {
    tmp_660_fu_16478_p3 = esl_concat<6,4>(tmp_s_fu_16472_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_661_fu_16490_p3() {
    tmp_661_fu_16490_p3 = esl_concat<6,1>(tmp_s_fu_16472_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_662_fu_16502_p2() {
    tmp_662_fu_16502_p2 = (!p_shl294_cast_fu_16498_p1.read().is_01() || !p_shl293_cast_fu_16486_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl294_cast_fu_16498_p1.read()) + sc_biguint<11>(p_shl293_cast_fu_16486_p1.read()));
}

void ShuffleNetV2::thread_tmp_663_fu_16651_p3() {
    tmp_663_fu_16651_p3 = esl_concat<7,5>(sum_fu_16645_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_664_fu_16663_p3() {
    tmp_664_fu_16663_p3 = esl_concat<7,3>(sum_fu_16645_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_665_fu_16675_p2() {
    tmp_665_fu_16675_p2 = (!p_shl299_cast_fu_16659_p1.read().is_01() || !p_shl300_cast_fu_16671_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl299_cast_fu_16659_p1.read()) - sc_biguint<13>(p_shl300_cast_fu_16671_p1.read()));
}

void ShuffleNetV2::thread_tmp_666_fu_16528_p2() {
    tmp_666_fu_16528_p2 = (!h_47_cast_cast_fu_16524_p1.read().is_01() || !tmp_662_reg_41086.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_47_cast_cast_fu_16524_p1.read()) + sc_biguint<11>(tmp_662_reg_41086.read()));
}

void ShuffleNetV2::thread_tmp_667_fu_16553_p2() {
    tmp_667_fu_16553_p2 = (!p_shl297_cast_fu_16533_p3.read().is_01() || !p_shl298_cast_fu_16549_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl297_cast_fu_16533_p3.read()) + sc_biguint<15>(p_shl298_cast_fu_16549_p1.read()));
}

void ShuffleNetV2::thread_tmp_668_fu_16559_p2() {
    tmp_668_fu_16559_p2 = (!h_47_cast_cast1_fu_16520_p1.read().is_01() || !tmp_659_reg_41073.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_47_cast_cast1_fu_16520_p1.read()) + sc_biguint<10>(tmp_659_reg_41073.read()));
}

void ShuffleNetV2::thread_tmp_669_fu_16584_p2() {
    tmp_669_fu_16584_p2 = (!p_shl295_cast_fu_16564_p3.read().is_01() || !p_shl296_cast_fu_16580_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl295_cast_fu_16564_p3.read()) + sc_biguint<14>(p_shl296_cast_fu_16580_p1.read()));
}

void ShuffleNetV2::thread_tmp_670_fu_16610_p2() {
    tmp_670_fu_16610_p2 = (!tmp_667_reg_41099.read().is_01() || !w_48_cast_cast_fu_16606_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_667_reg_41099.read()) + sc_biguint<15>(w_48_cast_cast_fu_16606_p1.read()));
}

void ShuffleNetV2::thread_tmp_671_fu_16620_p2() {
    tmp_671_fu_16620_p2 = (!tmp_669_reg_41104.read().is_01() || !w_48_cast_cast1_fu_16602_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_669_reg_41104.read()) + sc_biguint<14>(w_48_cast_cast1_fu_16602_p1.read()));
}

void ShuffleNetV2::thread_tmp_672_fu_16771_p3() {
    tmp_672_fu_16771_p3 = esl_concat<5,2>(co25_reg_9938.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_673_fu_16783_p2() {
    tmp_673_fu_16783_p2 = (!p_shl301_cast_fu_16779_p1.read().is_01() || !co25_cast1_cast_fu_16767_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl301_cast_fu_16779_p1.read()) - sc_biguint<8>(co25_cast1_cast_fu_16767_p1.read()));
}

void ShuffleNetV2::thread_tmp_674_fu_16815_p3() {
    tmp_674_fu_16815_p3 = esl_concat<7,2>(sum1_fu_16805_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_675_fu_16827_p2() {
    tmp_675_fu_16827_p2 = (!p_shl302_cast_fu_16823_p1.read().is_01() || !sum11_cast_cast_fu_16811_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl302_cast_fu_16823_p1.read()) - sc_biguint<10>(sum11_cast_cast_fu_16811_p1.read()));
}

void ShuffleNetV2::thread_tmp_676_fu_16852_p2() {
    tmp_676_fu_16852_p2 = (!w26_cast_cast_fu_16848_p1.read().is_01() || !tmp_675_reg_41301.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w26_cast_cast_fu_16848_p1.read()) + sc_biguint<10>(tmp_675_reg_41301.read()));
}

void ShuffleNetV2::thread_tmp_677_fu_16873_p2() {
    tmp_677_fu_16873_p2 = (!p_shl202_fu_16869_p1.read().is_01() || !tmp_836_cast_fu_16857_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl202_fu_16869_p1.read()) - sc_bigint<32>(tmp_836_cast_fu_16857_p1.read()));
}

void ShuffleNetV2::thread_tmp_678_fu_16879_p2() {
    tmp_678_fu_16879_p2 = (!w26_cast_cast1_fu_16844_p1.read().is_01() || !tmp_833_cast_reg_41288.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w26_cast_cast1_fu_16844_p1.read()) + sc_bigint<9>(tmp_833_cast_reg_41288.read()));
}

void ShuffleNetV2::thread_tmp_679_fu_16890_p2() {
    tmp_679_fu_16890_p2 = (!tmp_2287_fu_16884_p2.read().is_01() || !tmp_678_fu_16879_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_2287_fu_16884_p2.read()) - sc_biguint<9>(tmp_678_fu_16879_p2.read()));
}

void ShuffleNetV2::thread_tmp_680_fu_16923_p2() {
    tmp_680_fu_16923_p2 = (!tmp_679_reg_41312.read().is_01() || !h27_cast_cast_fu_16919_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_679_reg_41312.read()) + sc_biguint<9>(h27_cast_cast_fu_16919_p1.read()));
}

void ShuffleNetV2::thread_tmp_681_fu_16973_p4() {
    tmp_681_fu_16973_p4 = esl_concat<6,5>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_9982.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_682_fu_16983_p1() {
    tmp_682_fu_16983_p1 = esl_sext<12,11>(tmp_681_fu_16973_p4.read());
}

void ShuffleNetV2::thread_tmp_683_fu_16991_p4() {
    tmp_683_fu_16991_p4 = esl_concat<6,3>(esl_concat<1,5>(ap_const_lv1_1, co29_reg_9982.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_684_fu_17001_p1() {
    tmp_684_fu_17001_p1 = esl_sext<10,9>(tmp_683_fu_16991_p4.read());
}

void ShuffleNetV2::thread_tmp_685_fu_17009_p2() {
    tmp_685_fu_17009_p2 = (!p_shl305_cast_fu_16987_p1.read().is_01() || !p_shl306_cast_fu_17005_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl305_cast_fu_16987_p1.read()) - sc_biguint<13>(p_shl306_cast_fu_17005_p1.read()));
}

void ShuffleNetV2::thread_tmp_686_fu_17113_p3() {
    tmp_686_fu_17113_p3 = esl_concat<5,4>(co32_reg_10016.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_687_fu_17125_p3() {
    tmp_687_fu_17125_p3 = esl_concat<5,1>(co32_reg_10016.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_688_fu_17137_p2() {
    tmp_688_fu_17137_p2 = (!p_shl308_cast_fu_17133_p1.read().is_01() || !p_shl307_cast_fu_17121_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl308_cast_fu_17133_p1.read()) + sc_biguint<10>(p_shl307_cast_fu_17121_p1.read()));
}

void ShuffleNetV2::thread_tmp_689_fu_17232_p3() {
    tmp_689_fu_17232_p3 = esl_concat<5,4>(co35_reg_10049.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_690_fu_17244_p3() {
    tmp_690_fu_17244_p3 = esl_concat<5,1>(co35_reg_10049.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_691_fu_17256_p2() {
    tmp_691_fu_17256_p2 = (!p_shl312_cast_fu_17252_p1.read().is_01() || !p_shl311_cast_fu_17240_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl312_cast_fu_17252_p1.read()) + sc_biguint<10>(p_shl311_cast_fu_17240_p1.read()));
}

void ShuffleNetV2::thread_tmp_692_fu_17284_p3() {
    tmp_692_fu_17284_p3 = esl_concat<6,4>(tmp_144_fu_17278_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_693_fu_17296_p3() {
    tmp_693_fu_17296_p3 = esl_concat<6,1>(tmp_144_fu_17278_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_694_fu_17308_p2() {
    tmp_694_fu_17308_p2 = (!p_shl314_cast_fu_17304_p1.read().is_01() || !p_shl313_cast_fu_17292_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl314_cast_fu_17304_p1.read()) + sc_biguint<11>(p_shl313_cast_fu_17292_p1.read()));
}

void ShuffleNetV2::thread_tmp_695_fu_17171_p2() {
    tmp_695_fu_17171_p2 = (!h_49_cast_cast_fu_17167_p1.read().is_01() || !tmp_688_reg_41518.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_49_cast_cast_fu_17167_p1.read()) + sc_biguint<10>(tmp_688_reg_41518.read()));
}

void ShuffleNetV2::thread_tmp_696_fu_17200_p2() {
    tmp_696_fu_17200_p2 = (!p_shl309_cast_fu_17184_p1.read().is_01() || !p_shl310_cast_fu_17196_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl309_cast_fu_17184_p1.read()) + sc_biguint<15>(p_shl310_cast_fu_17196_p1.read()));
}

void ShuffleNetV2::thread_tmp_697_fu_17457_p3() {
    tmp_697_fu_17457_p3 = esl_concat<8,5>(sum2_fu_17451_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_698_fu_17469_p3() {
    tmp_698_fu_17469_p3 = esl_concat<8,3>(sum2_fu_17451_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_699_fu_17481_p2() {
    tmp_699_fu_17481_p2 = (!p_shl319_cast_fu_17465_p1.read().is_01() || !p_shl320_cast_fu_17477_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl319_cast_fu_17465_p1.read()) - sc_biguint<14>(p_shl320_cast_fu_17477_p1.read()));
}

void ShuffleNetV2::thread_tmp_700_fu_17334_p2() {
    tmp_700_fu_17334_p2 = (!h_50_cast_cast_fu_17330_p1.read().is_01() || !tmp_694_reg_41575.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_50_cast_cast_fu_17330_p1.read()) + sc_biguint<11>(tmp_694_reg_41575.read()));
}

void ShuffleNetV2::thread_tmp_701_fu_17359_p2() {
    tmp_701_fu_17359_p2 = (!p_shl317_cast_fu_17339_p3.read().is_01() || !p_shl318_cast_fu_17355_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl317_cast_fu_17339_p3.read()) + sc_biguint<15>(p_shl318_cast_fu_17355_p1.read()));
}

void ShuffleNetV2::thread_tmp_702_fu_17365_p2() {
    tmp_702_fu_17365_p2 = (!h_50_cast_cast1_fu_17326_p1.read().is_01() || !tmp_691_reg_41562.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_50_cast_cast1_fu_17326_p1.read()) + sc_biguint<10>(tmp_691_reg_41562.read()));
}

void ShuffleNetV2::thread_tmp_703_fu_17390_p2() {
    tmp_703_fu_17390_p2 = (!p_shl315_cast_fu_17370_p3.read().is_01() || !p_shl316_cast_fu_17386_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl315_cast_fu_17370_p3.read()) + sc_biguint<14>(p_shl316_cast_fu_17386_p1.read()));
}

void ShuffleNetV2::thread_tmp_704_fu_17222_p2() {
    tmp_704_fu_17222_p2 = (!tmp_696_reg_41539.read().is_01() || !w_50_cast_cast_fu_17218_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_696_reg_41539.read()) + sc_biguint<15>(w_50_cast_cast_fu_17218_p1.read()));
}

void ShuffleNetV2::thread_tmp_705_fu_17416_p2() {
    tmp_705_fu_17416_p2 = (!tmp_701_reg_41588.read().is_01() || !w_51_cast_cast_fu_17412_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_701_reg_41588.read()) + sc_biguint<15>(w_51_cast_cast_fu_17412_p1.read()));
}

void ShuffleNetV2::thread_tmp_706_fu_17426_p2() {
    tmp_706_fu_17426_p2 = (!tmp_703_reg_41593.read().is_01() || !w_51_cast_cast1_fu_17408_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_703_reg_41593.read()) + sc_biguint<14>(w_51_cast_cast1_fu_17408_p1.read()));
}

void ShuffleNetV2::thread_tmp_707_fu_17577_p3() {
    tmp_707_fu_17577_p3 = esl_concat<5,2>(co41_reg_10116.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_708_fu_17589_p2() {
    tmp_708_fu_17589_p2 = (!p_shl321_cast_fu_17585_p1.read().is_01() || !co41_cast1_cast_fu_17573_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl321_cast_fu_17585_p1.read()) - sc_biguint<8>(co41_cast1_cast_fu_17573_p1.read()));
}

void ShuffleNetV2::thread_tmp_709_fu_17621_p3() {
    tmp_709_fu_17621_p3 = esl_concat<7,2>(sum3_fu_17611_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_710_fu_17633_p2() {
    tmp_710_fu_17633_p2 = (!p_shl322_cast_fu_17629_p1.read().is_01() || !sum13_cast_cast_fu_17617_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl322_cast_fu_17629_p1.read()) - sc_biguint<10>(sum13_cast_cast_fu_17617_p1.read()));
}

void ShuffleNetV2::thread_tmp_711_fu_17658_p2() {
    tmp_711_fu_17658_p2 = (!w42_cast_cast_fu_17654_p1.read().is_01() || !tmp_710_reg_41790.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w42_cast_cast_fu_17654_p1.read()) + sc_biguint<10>(tmp_710_reg_41790.read()));
}

void ShuffleNetV2::thread_tmp_712_fu_17679_p2() {
    tmp_712_fu_17679_p2 = (!p_shl208_fu_17675_p1.read().is_01() || !tmp_882_cast_fu_17663_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl208_fu_17675_p1.read()) - sc_bigint<32>(tmp_882_cast_fu_17663_p1.read()));
}

void ShuffleNetV2::thread_tmp_713_fu_17685_p2() {
    tmp_713_fu_17685_p2 = (!w42_cast_cast1_fu_17650_p1.read().is_01() || !tmp_879_cast_reg_41777.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w42_cast_cast1_fu_17650_p1.read()) + sc_bigint<9>(tmp_879_cast_reg_41777.read()));
}

void ShuffleNetV2::thread_tmp_714_fu_17696_p2() {
    tmp_714_fu_17696_p2 = (!tmp_2305_fu_17690_p2.read().is_01() || !tmp_713_fu_17685_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_2305_fu_17690_p2.read()) - sc_biguint<9>(tmp_713_fu_17685_p2.read()));
}

void ShuffleNetV2::thread_tmp_715_fu_17729_p2() {
    tmp_715_fu_17729_p2 = (!tmp_714_reg_41801.read().is_01() || !h43_cast_cast_fu_17725_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_714_reg_41801.read()) + sc_biguint<9>(h43_cast_cast_fu_17725_p1.read()));
}

void ShuffleNetV2::thread_tmp_716_fu_17789_p3() {
    tmp_716_fu_17789_p3 = esl_concat<8,5>(sum4_fu_17783_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_717_fu_17801_p3() {
    tmp_717_fu_17801_p3 = esl_concat<8,3>(sum4_fu_17783_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_718_fu_17813_p2() {
    tmp_718_fu_17813_p2 = (!p_shl325_cast_fu_17797_p1.read().is_01() || !p_shl326_cast_fu_17809_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl325_cast_fu_17797_p1.read()) - sc_biguint<14>(p_shl326_cast_fu_17809_p1.read()));
}

void ShuffleNetV2::thread_tmp_719_fu_17901_p3() {
    tmp_719_fu_17901_p3 = esl_concat<5,4>(co46_reg_10194.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_720_fu_17913_p3() {
    tmp_720_fu_17913_p3 = esl_concat<5,1>(co46_reg_10194.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_721_fu_17925_p2() {
    tmp_721_fu_17925_p2 = (!p_shl328_cast_fu_17921_p1.read().is_01() || !p_shl327_cast_fu_17909_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl328_cast_fu_17921_p1.read()) + sc_biguint<10>(p_shl327_cast_fu_17909_p1.read()));
}

void ShuffleNetV2::thread_tmp_722_fu_18020_p3() {
    tmp_722_fu_18020_p3 = esl_concat<5,4>(co47_reg_10227.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_723_fu_18032_p3() {
    tmp_723_fu_18032_p3 = esl_concat<5,1>(co47_reg_10227.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_724_fu_18044_p2() {
    tmp_724_fu_18044_p2 = (!p_shl332_cast_fu_18040_p1.read().is_01() || !p_shl331_cast_fu_18028_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl332_cast_fu_18040_p1.read()) + sc_biguint<10>(p_shl331_cast_fu_18028_p1.read()));
}

void ShuffleNetV2::thread_tmp_725_fu_18072_p3() {
    tmp_725_fu_18072_p3 = esl_concat<6,4>(tmp_145_fu_18066_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_726_fu_18084_p3() {
    tmp_726_fu_18084_p3 = esl_concat<6,1>(tmp_145_fu_18066_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_727_fu_18096_p2() {
    tmp_727_fu_18096_p2 = (!p_shl334_cast_fu_18092_p1.read().is_01() || !p_shl333_cast_fu_18080_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl334_cast_fu_18092_p1.read()) + sc_biguint<11>(p_shl333_cast_fu_18080_p1.read()));
}

void ShuffleNetV2::thread_tmp_728_fu_17959_p2() {
    tmp_728_fu_17959_p2 = (!h_52_cast_cast_fu_17955_p1.read().is_01() || !tmp_721_reg_42007.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_52_cast_cast_fu_17955_p1.read()) + sc_biguint<10>(tmp_721_reg_42007.read()));
}

void ShuffleNetV2::thread_tmp_729_fu_17988_p2() {
    tmp_729_fu_17988_p2 = (!p_shl329_cast_fu_17972_p1.read().is_01() || !p_shl330_cast_fu_17984_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl329_cast_fu_17972_p1.read()) + sc_biguint<15>(p_shl330_cast_fu_17984_p1.read()));
}

void ShuffleNetV2::thread_tmp_730_fu_18245_p3() {
    tmp_730_fu_18245_p3 = esl_concat<8,5>(sum7_fu_18239_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_731_fu_18257_p3() {
    tmp_731_fu_18257_p3 = esl_concat<8,3>(sum7_fu_18239_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_732_fu_18269_p2() {
    tmp_732_fu_18269_p2 = (!p_shl339_cast_fu_18253_p1.read().is_01() || !p_shl340_cast_fu_18265_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl339_cast_fu_18253_p1.read()) - sc_biguint<14>(p_shl340_cast_fu_18265_p1.read()));
}

void ShuffleNetV2::thread_tmp_733_fu_18122_p2() {
    tmp_733_fu_18122_p2 = (!h_53_cast_cast_fu_18118_p1.read().is_01() || !tmp_727_reg_42064.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_53_cast_cast_fu_18118_p1.read()) + sc_biguint<11>(tmp_727_reg_42064.read()));
}

void ShuffleNetV2::thread_tmp_734_fu_18147_p2() {
    tmp_734_fu_18147_p2 = (!p_shl337_cast_fu_18127_p3.read().is_01() || !p_shl338_cast_fu_18143_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl337_cast_fu_18127_p3.read()) + sc_biguint<15>(p_shl338_cast_fu_18143_p1.read()));
}

void ShuffleNetV2::thread_tmp_735_fu_18153_p2() {
    tmp_735_fu_18153_p2 = (!h_53_cast_cast1_fu_18114_p1.read().is_01() || !tmp_724_reg_42051.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_53_cast_cast1_fu_18114_p1.read()) + sc_biguint<10>(tmp_724_reg_42051.read()));
}

void ShuffleNetV2::thread_tmp_736_fu_18178_p2() {
    tmp_736_fu_18178_p2 = (!p_shl335_cast_fu_18158_p3.read().is_01() || !p_shl336_cast_fu_18174_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl335_cast_fu_18158_p3.read()) + sc_biguint<14>(p_shl336_cast_fu_18174_p1.read()));
}

void ShuffleNetV2::thread_tmp_737_fu_18010_p2() {
    tmp_737_fu_18010_p2 = (!tmp_729_reg_42028.read().is_01() || !w_53_cast_cast_fu_18006_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_729_reg_42028.read()) + sc_biguint<15>(w_53_cast_cast_fu_18006_p1.read()));
}

void ShuffleNetV2::thread_tmp_738_fu_18204_p2() {
    tmp_738_fu_18204_p2 = (!tmp_734_reg_42077.read().is_01() || !w_54_cast_cast_fu_18200_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_734_reg_42077.read()) + sc_biguint<15>(w_54_cast_cast_fu_18200_p1.read()));
}

void ShuffleNetV2::thread_tmp_739_fu_18214_p2() {
    tmp_739_fu_18214_p2 = (!tmp_736_reg_42082.read().is_01() || !w_54_cast_cast1_fu_18196_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_736_reg_42082.read()) + sc_biguint<14>(w_54_cast_cast1_fu_18196_p1.read()));
}

void ShuffleNetV2::thread_tmp_740_fu_18373_p3() {
    tmp_740_fu_18373_p3 = esl_concat<5,2>(co52_reg_10294.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_741_fu_18385_p2() {
    tmp_741_fu_18385_p2 = (!p_shl341_cast_fu_18381_p1.read().is_01() || !co52_cast_cast_fu_18369_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl341_cast_fu_18381_p1.read()) - sc_biguint<8>(co52_cast_cast_fu_18369_p1.read()));
}

void ShuffleNetV2::thread_tmp_742_fu_18423_p4() {
    tmp_742_fu_18423_p4 = esl_concat<6,2>(esl_concat<1,5>(ap_const_lv1_1, co52_reg_10294.read()), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_743_fu_18433_p1() {
    tmp_743_fu_18433_p1 = esl_sext<9,8>(tmp_742_fu_18423_p4.read());
}

void ShuffleNetV2::thread_tmp_744_fu_18441_p2() {
    tmp_744_fu_18441_p2 = (!p_shl342_cast_fu_18437_p1.read().is_01() || !sum15_cast_cast_fu_18419_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl342_cast_fu_18437_p1.read()) - sc_biguint<10>(sum15_cast_cast_fu_18419_p1.read()));
}

void ShuffleNetV2::thread_tmp_745_fu_18470_p2() {
    tmp_745_fu_18470_p2 = (!w55_cast_cast_fu_18466_p1.read().is_01() || !tmp_926_cast_reg_42279.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w55_cast_cast_fu_18466_p1.read()) + sc_bigint<11>(tmp_926_cast_reg_42279.read()));
}

void ShuffleNetV2::thread_tmp_746_fu_18491_p2() {
    tmp_746_fu_18491_p2 = (!p_shl213_fu_18487_p1.read().is_01() || !tmp_927_cast_fu_18475_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl213_fu_18487_p1.read()) - sc_bigint<32>(tmp_927_cast_fu_18475_p1.read()));
}

void ShuffleNetV2::thread_tmp_747_fu_18497_p2() {
    tmp_747_fu_18497_p2 = (!w55_cast_cast1_fu_18462_p1.read().is_01() || !tmp_923_cast_reg_42266.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w55_cast_cast1_fu_18462_p1.read()) + sc_bigint<9>(tmp_923_cast_reg_42266.read()));
}

void ShuffleNetV2::thread_tmp_748_fu_18508_p2() {
    tmp_748_fu_18508_p2 = (!tmp_2322_fu_18502_p2.read().is_01() || !tmp_747_fu_18497_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_2322_fu_18502_p2.read()) - sc_biguint<9>(tmp_747_fu_18497_p2.read()));
}

void ShuffleNetV2::thread_tmp_749_fu_18541_p2() {
    tmp_749_fu_18541_p2 = (!tmp_748_reg_42290.read().is_01() || !h54_cast_cast_fu_18537_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_748_reg_42290.read()) + sc_biguint<9>(h54_cast_cast_fu_18537_p1.read()));
}

void ShuffleNetV2::thread_tmp_750_fu_18591_p4() {
    tmp_750_fu_18591_p4 = esl_concat<7,5>(esl_concat<2,5>(ap_const_lv2_2, co54_reg_10338.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_751_fu_18601_p1() {
    tmp_751_fu_18601_p1 = esl_sext<13,12>(tmp_750_fu_18591_p4.read());
}

void ShuffleNetV2::thread_tmp_752_fu_18609_p4() {
    tmp_752_fu_18609_p4 = esl_concat<7,3>(esl_concat<2,5>(ap_const_lv2_2, co54_reg_10338.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_753_fu_18619_p1() {
    tmp_753_fu_18619_p1 = esl_sext<11,10>(tmp_752_fu_18609_p4.read());
}

void ShuffleNetV2::thread_tmp_754_fu_18627_p2() {
    tmp_754_fu_18627_p2 = (!p_shl345_cast_fu_18605_p1.read().is_01() || !p_shl346_cast_fu_18623_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl345_cast_fu_18605_p1.read()) - sc_biguint<14>(p_shl346_cast_fu_18623_p1.read()));
}

void ShuffleNetV2::thread_tmp_755_fu_18715_p3() {
    tmp_755_fu_18715_p3 = esl_concat<5,4>(co56_reg_10372.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_756_fu_18727_p3() {
    tmp_756_fu_18727_p3 = esl_concat<5,1>(co56_reg_10372.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_757_fu_18739_p2() {
    tmp_757_fu_18739_p2 = (!p_shl348_cast_fu_18735_p1.read().is_01() || !p_shl347_cast_fu_18723_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl348_cast_fu_18735_p1.read()) + sc_biguint<10>(p_shl347_cast_fu_18723_p1.read()));
}

void ShuffleNetV2::thread_tmp_758_fu_18773_p2() {
    tmp_758_fu_18773_p2 = (!h_57_cast_cast_fu_18769_p1.read().is_01() || !tmp_757_reg_42496.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_57_cast_cast_fu_18769_p1.read()) + sc_biguint<10>(tmp_757_reg_42496.read()));
}

void ShuffleNetV2::thread_tmp_759_fu_18802_p2() {
    tmp_759_fu_18802_p2 = (!p_shl349_cast_fu_18786_p1.read().is_01() || !p_shl350_cast_fu_18798_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl349_cast_fu_18786_p1.read()) + sc_biguint<15>(p_shl350_cast_fu_18798_p1.read()));
}

void ShuffleNetV2::thread_tmp_760_fu_18824_p2() {
    tmp_760_fu_18824_p2 = (!tmp_759_reg_42517.read().is_01() || !w_58_cast_cast_fu_18820_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_759_reg_42517.read()) + sc_biguint<15>(w_58_cast_cast_fu_18820_p1.read()));
}

void ShuffleNetV2::thread_tmp_761_fu_19036_p3() {
    tmp_761_fu_19036_p3 = esl_concat<9,5>(sum11_reg_42595.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_762_fu_19047_p3() {
    tmp_762_fu_19047_p3 = esl_concat<9,3>(sum11_reg_42595.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_763_fu_19058_p2() {
    tmp_763_fu_19058_p2 = (!p_shl353_cast_fu_19043_p1.read().is_01() || !p_shl354_cast_fu_19054_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl353_cast_fu_19043_p1.read()) - sc_biguint<15>(p_shl354_cast_fu_19054_p1.read()));
}

void ShuffleNetV2::thread_tmp_764_fu_19068_p2() {
    tmp_764_fu_19068_p2 = (!ci34_cast1_cast_reg_42563.read().is_01() || !tmp_959_cast_fu_19064_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ci34_cast1_cast_reg_42563.read()) + sc_bigint<16>(tmp_959_cast_fu_19064_p1.read()));
}

void ShuffleNetV2::thread_tmp_765_fu_19124_p2() {
    tmp_765_fu_19124_p2 = (!p_shl351_cast_fu_19110_p3.read().is_01() || !p_shl352_cast_fu_19117_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl351_cast_fu_19110_p3.read()) - sc_biguint<8>(p_shl352_cast_fu_19117_p3.read()));
}

void ShuffleNetV2::thread_tmp_766_fu_19130_p2() {
    tmp_766_fu_19130_p2 = (!tmp_152_cast_cast_reg_42576.read().is_01() || !tmp_765_fu_19124_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_152_cast_cast_reg_42576.read()) + sc_biguint<8>(tmp_765_fu_19124_p2.read()));
}

void ShuffleNetV2::thread_tmp_767_fu_19389_p3() {
    tmp_767_fu_19389_p3 = esl_concat<7,2>(tmp_164_fu_19380_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_768_fu_19401_p2() {
    tmp_768_fu_19401_p2 = (!p_shl358_cast_fu_19397_p1.read().is_01() || !tmp_164_cast_cast_fu_19385_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl358_cast_fu_19397_p1.read()) - sc_bigint<10>(tmp_164_cast_cast_fu_19385_p1.read()));
}

void ShuffleNetV2::thread_tmp_769_cast_fu_15547_p1() {
    tmp_769_cast_fu_15547_p1 = esl_zext<8,7>(tmp_fu_15539_p3.read());
}

void ShuffleNetV2::thread_tmp_769_fu_19407_p2() {
    tmp_769_fu_19407_p2 = (!w59_cast_cast_reg_42690.read().is_01() || !tmp_768_fu_19401_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w59_cast_cast_reg_42690.read()) + sc_biguint<10>(tmp_768_fu_19401_p2.read()));
}

void ShuffleNetV2::thread_tmp_770_fu_19428_p2() {
    tmp_770_fu_19428_p2 = (!tmp_2340_fu_19423_p2.read().is_01() || !tmp_769_reg_42729.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2340_fu_19423_p2.read()) - sc_biguint<10>(tmp_769_reg_42729.read()));
}

void ShuffleNetV2::thread_tmp_771_fu_19433_p2() {
    tmp_771_fu_19433_p2 = (!h58_cast_cast_reg_42708.read().is_01() || !tmp_770_fu_19428_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h58_cast_cast_reg_42708.read()) + sc_biguint<10>(tmp_770_fu_19428_p2.read()));
}

void ShuffleNetV2::thread_tmp_772_fu_19441_p3() {
    tmp_772_fu_19441_p3 = esl_concat<8,2>(sum13_reg_42735.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_773_fu_19452_p2() {
    tmp_773_fu_19452_p2 = (!p_shl356_cast_fu_19448_p1.read().is_01() || !sum17_cast_cast_fu_19438_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl356_cast_fu_19448_p1.read()) - sc_biguint<11>(sum17_cast_cast_fu_19438_p1.read()));
}

void ShuffleNetV2::thread_tmp_774_fu_19462_p2() {
    tmp_774_fu_19462_p2 = (!w59_cast_cast1_reg_42685.read().is_01() || !tmp_980_cast_fu_19458_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(w59_cast_cast1_reg_42685.read()) + sc_bigint<12>(tmp_980_cast_fu_19458_p1.read()));
}

void ShuffleNetV2::thread_tmp_775_fu_19481_p2() {
    tmp_775_fu_19481_p2 = (!p_shl219_fu_19477_p1.read().is_01() || !tmp_981_cast_fu_19467_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl219_fu_19477_p1.read()) - sc_bigint<32>(tmp_981_cast_fu_19467_p1.read()));
}

void ShuffleNetV2::thread_tmp_776_fu_19487_p2() {
    tmp_776_fu_19487_p2 = (!h58_cast_reg_42703.read().is_01() || !tmp_775_fu_19481_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h58_cast_reg_42703.read()) + sc_biguint<32>(tmp_775_fu_19481_p2.read()));
}

void ShuffleNetV2::thread_tmp_777_fu_19817_p3() {
    tmp_777_fu_19817_p3 = esl_concat<9,5>(sum15_reg_42855.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_778_fu_19828_p3() {
    tmp_778_fu_19828_p3 = esl_concat<9,3>(sum15_reg_42855.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_779_fu_19839_p2() {
    tmp_779_fu_19839_p2 = (!p_shl361_cast_fu_19824_p1.read().is_01() || !p_shl362_cast_fu_19835_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl361_cast_fu_19824_p1.read()) - sc_biguint<15>(p_shl362_cast_fu_19835_p1.read()));
}

void ShuffleNetV2::thread_tmp_780_fu_19849_p2() {
    tmp_780_fu_19849_p2 = (!ci36_cast1_cast_reg_42823.read().is_01() || !tmp_993_cast_fu_19845_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ci36_cast1_cast_reg_42823.read()) + sc_bigint<16>(tmp_993_cast_fu_19845_p1.read()));
}

void ShuffleNetV2::thread_tmp_781_fu_19905_p2() {
    tmp_781_fu_19905_p2 = (!p_shl359_cast_fu_19891_p3.read().is_01() || !p_shl360_cast_fu_19898_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl359_cast_fu_19891_p3.read()) - sc_biguint<8>(p_shl360_cast_fu_19898_p3.read()));
}

void ShuffleNetV2::thread_tmp_782_fu_19911_p2() {
    tmp_782_fu_19911_p2 = (!tmp_169_cast_cast_reg_42836.read().is_01() || !tmp_781_fu_19905_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_169_cast_cast_reg_42836.read()) + sc_biguint<8>(tmp_781_fu_19905_p2.read()));
}

void ShuffleNetV2::thread_tmp_783_fu_20174_p3() {
    tmp_783_fu_20174_p3 = esl_concat<7,2>(tmp_181_fu_20165_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_784_fu_20186_p2() {
    tmp_784_fu_20186_p2 = (!p_shl363_cast_fu_20182_p1.read().is_01() || !tmp_181_cast_cast_fu_20170_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl363_cast_fu_20182_p1.read()) - sc_bigint<10>(tmp_181_cast_cast_fu_20170_p1.read()));
}

void ShuffleNetV2::thread_tmp_785_cast_fu_15679_p1() {
    tmp_785_cast_fu_15679_p1 = esl_zext<32,13>(tmp_636_reg_40447.read());
}

void ShuffleNetV2::thread_tmp_785_fu_20192_p2() {
    tmp_785_fu_20192_p2 = (!w61_cast_cast_reg_42950.read().is_01() || !tmp_784_fu_20186_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w61_cast_cast_reg_42950.read()) + sc_biguint<10>(tmp_784_fu_20186_p2.read()));
}

void ShuffleNetV2::thread_tmp_786_fu_20213_p2() {
    tmp_786_fu_20213_p2 = (!tmp_2351_fu_20208_p2.read().is_01() || !tmp_785_reg_42989.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2351_fu_20208_p2.read()) - sc_biguint<10>(tmp_785_reg_42989.read()));
}

void ShuffleNetV2::thread_tmp_787_cast_fu_15829_p1() {
    tmp_787_cast_fu_15829_p1 = esl_sext<9,8>(tmp_638_fu_15823_p2.read());
}

void ShuffleNetV2::thread_tmp_787_fu_20218_p2() {
    tmp_787_fu_20218_p2 = (!h60_cast_cast_reg_42968.read().is_01() || !tmp_786_fu_20213_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h60_cast_cast_reg_42968.read()) + sc_biguint<10>(tmp_786_fu_20213_p2.read()));
}

void ShuffleNetV2::thread_tmp_788_cast_fu_15865_p1() {
    tmp_788_cast_fu_15865_p1 = esl_sext<32,9>(tmp_639_fu_15860_p2.read());
}

void ShuffleNetV2::thread_tmp_788_fu_20226_p3() {
    tmp_788_fu_20226_p3 = esl_concat<8,2>(sum17_reg_42995.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_789_fu_20237_p2() {
    tmp_789_fu_20237_p2 = (!p_shl365_cast_fu_20233_p1.read().is_01() || !sum19_cast_cast_fu_20223_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl365_cast_fu_20233_p1.read()) - sc_biguint<11>(sum19_cast_cast_fu_20223_p1.read()));
}

void ShuffleNetV2::thread_tmp_790_fu_20243_p2() {
    tmp_790_fu_20243_p2 = (!w61_cast_cast1_reg_42945.read().is_01() || !tmp_789_fu_20237_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w61_cast_cast1_reg_42945.read()) + sc_biguint<11>(tmp_789_fu_20237_p2.read()));
}

void ShuffleNetV2::thread_tmp_791_fu_20262_p2() {
    tmp_791_fu_20262_p2 = (!p_shl221_fu_20258_p1.read().is_01() || !tmp_1015_cast_fu_20248_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl221_fu_20258_p1.read()) - sc_bigint<32>(tmp_1015_cast_fu_20248_p1.read()));
}

void ShuffleNetV2::thread_tmp_792_fu_20268_p2() {
    tmp_792_fu_20268_p2 = (!h60_cast_reg_42963.read().is_01() || !tmp_791_fu_20262_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h60_cast_reg_42963.read()) + sc_biguint<32>(tmp_791_fu_20262_p2.read()));
}

void ShuffleNetV2::thread_tmp_793_fu_20832_p3() {
    tmp_793_fu_20832_p3 = esl_concat<6,3>(co67_reg_10702.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_794_fu_20844_p3() {
    tmp_794_fu_20844_p3 = esl_concat<6,1>(co67_reg_10702.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_795_fu_20856_p2() {
    tmp_795_fu_20856_p2 = (!p_shl368_cast_fu_20852_p1.read().is_01() || !p_shl367_cast_fu_20840_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl368_cast_fu_20852_p1.read()) + sc_biguint<10>(p_shl367_cast_fu_20840_p1.read()));
}

void ShuffleNetV2::thread_tmp_796_fu_20884_p3() {
    tmp_796_fu_20884_p3 = esl_concat<7,3>(tmp_187_fu_20878_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_797_cast_fu_16104_p1() {
    tmp_797_cast_fu_16104_p1 = esl_sext<9,8>(tmp_646_fu_16098_p2.read());
}

void ShuffleNetV2::thread_tmp_797_fu_20896_p3() {
    tmp_797_fu_20896_p3 = esl_concat<7,1>(tmp_187_fu_20878_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_798_fu_20908_p2() {
    tmp_798_fu_20908_p2 = (!p_shl372_cast_fu_20904_p1.read().is_01() || !p_shl369_cast_fu_20892_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl372_cast_fu_20904_p1.read()) + sc_biguint<11>(p_shl369_cast_fu_20892_p1.read()));
}

void ShuffleNetV2::thread_tmp_799_fu_20598_p3() {
    tmp_799_fu_20598_p3 = esl_concat<10,5>(sum19_reg_43115.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_800_cast_fu_16161_p1() {
    tmp_800_cast_fu_16161_p1 = esl_sext<32,9>(tmp_649_fu_16156_p2.read());
}

void ShuffleNetV2::thread_tmp_800_fu_20609_p3() {
    tmp_800_fu_20609_p3 = esl_concat<10,3>(sum19_reg_43115.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_801_fu_20620_p2() {
    tmp_801_fu_20620_p2 = (!p_shl373_cast_fu_20605_p1.read().is_01() || !p_shl374_cast_fu_20616_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl373_cast_fu_20605_p1.read()) - sc_biguint<16>(p_shl374_cast_fu_20616_p1.read()));
}

void ShuffleNetV2::thread_tmp_802_fu_20630_p2() {
    tmp_802_fu_20630_p2 = (!ci38_cast1_cast_reg_43083.read().is_01() || !tmp_1033_cast_fu_20626_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci38_cast1_cast_reg_43083.read()) + sc_bigint<17>(tmp_1033_cast_fu_20626_p1.read()));
}

void ShuffleNetV2::thread_tmp_803_fu_20686_p2() {
    tmp_803_fu_20686_p2 = (!p_shl370_cast_fu_20672_p3.read().is_01() || !p_shl371_cast_fu_20679_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl370_cast_fu_20672_p3.read()) - sc_biguint<8>(p_shl371_cast_fu_20679_p3.read()));
}

void ShuffleNetV2::thread_tmp_804_fu_20692_p2() {
    tmp_804_fu_20692_p2 = (!tmp_186_cast_cast_reg_43096.read().is_01() || !tmp_803_fu_20686_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_186_cast_cast_reg_43096.read()) + sc_biguint<8>(tmp_803_fu_20686_p2.read()));
}

void ShuffleNetV2::thread_tmp_805_fu_20934_p2() {
    tmp_805_fu_20934_p2 = (!h_63_cast_cast_fu_20930_p1.read().is_01() || !tmp_798_reg_43200.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_63_cast_cast_fu_20930_p1.read()) + sc_biguint<11>(tmp_798_reg_43200.read()));
}

void ShuffleNetV2::thread_tmp_806_fu_20963_p2() {
    tmp_806_fu_20963_p2 = (!p_shl375_cast_fu_20947_p1.read().is_01() || !p_shl376_cast_fu_20959_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl375_cast_fu_20947_p1.read()) + sc_biguint<15>(p_shl376_cast_fu_20959_p1.read()));
}

void ShuffleNetV2::thread_tmp_807_cast_fu_16232_p1() {
    tmp_807_cast_fu_16232_p1 = esl_zext<32,9>(tmp_653_fu_16227_p2.read());
}

void ShuffleNetV2::thread_tmp_807_fu_20969_p2() {
    tmp_807_fu_20969_p2 = (!h_63_cast_cast1_fu_20926_p1.read().is_01() || !tmp_795_reg_43187.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_63_cast_cast1_fu_20926_p1.read()) + sc_biguint<10>(tmp_795_reg_43187.read()));
}

void ShuffleNetV2::thread_tmp_808_fu_20998_p2() {
    tmp_808_fu_20998_p2 = (!p_shl377_cast_fu_20982_p1.read().is_01() || !p_shl378_cast_fu_20994_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl377_cast_fu_20982_p1.read()) + sc_biguint<14>(p_shl378_cast_fu_20994_p1.read()));
}

void ShuffleNetV2::thread_tmp_809_fu_21024_p2() {
    tmp_809_fu_21024_p2 = (!tmp_806_reg_43213.read().is_01() || !w_64_cast_cast_fu_21020_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_806_reg_43213.read()) + sc_biguint<15>(w_64_cast_cast_fu_21020_p1.read()));
}

void ShuffleNetV2::thread_tmp_810_fu_21034_p2() {
    tmp_810_fu_21034_p2 = (!tmp_808_reg_43218.read().is_01() || !w_64_cast_cast1_fu_21016_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_808_reg_43218.read()) + sc_biguint<14>(w_64_cast_cast1_fu_21016_p1.read()));
}

void ShuffleNetV2::thread_tmp_811_fu_21245_p3() {
    tmp_811_fu_21245_p3 = esl_concat<10,5>(sum22_reg_43296.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_812_fu_21256_p3() {
    tmp_812_fu_21256_p3 = esl_concat<10,3>(sum22_reg_43296.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_813_fu_21267_p2() {
    tmp_813_fu_21267_p2 = (!p_shl379_cast_fu_21252_p1.read().is_01() || !p_shl380_cast_fu_21263_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl379_cast_fu_21252_p1.read()) - sc_biguint<16>(p_shl380_cast_fu_21263_p1.read()));
}

void ShuffleNetV2::thread_tmp_814_fu_21277_p2() {
    tmp_814_fu_21277_p2 = (!ci40_cast1_cast_reg_43264.read().is_01() || !tmp_1061_cast_fu_21273_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci40_cast1_cast_reg_43264.read()) + sc_bigint<17>(tmp_1061_cast_fu_21273_p1.read()));
}

void ShuffleNetV2::thread_tmp_815_fu_21333_p2() {
    tmp_815_fu_21333_p2 = (!p_shl381_cast_fu_21319_p3.read().is_01() || !p_shl382_cast_fu_21326_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl381_cast_fu_21319_p3.read()) - sc_biguint<8>(p_shl382_cast_fu_21326_p3.read()));
}

void ShuffleNetV2::thread_tmp_816_fu_21339_p2() {
    tmp_816_fu_21339_p2 = (!tmp_198_cast_cast_reg_43277.read().is_01() || !tmp_815_fu_21333_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_198_cast_cast_reg_43277.read()) + sc_biguint<8>(tmp_815_fu_21333_p2.read()));
}

void ShuffleNetV2::thread_tmp_817_fu_21594_p3() {
    tmp_817_fu_21594_p3 = esl_concat<7,2>(tmp_210_fu_21585_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_818_fu_21606_p2() {
    tmp_818_fu_21606_p2 = (!p_shl383_cast_fu_21602_p1.read().is_01() || !tmp_210_cast_cast_fu_21590_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl383_cast_fu_21602_p1.read()) - sc_bigint<10>(tmp_210_cast_cast_fu_21590_p1.read()));
}

void ShuffleNetV2::thread_tmp_819_fu_21612_p2() {
    tmp_819_fu_21612_p2 = (!w65_cast_cast_reg_43391.read().is_01() || !tmp_818_fu_21606_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w65_cast_cast_reg_43391.read()) + sc_biguint<10>(tmp_818_fu_21606_p2.read()));
}

void ShuffleNetV2::thread_tmp_820_fu_21641_p2() {
    tmp_820_fu_21641_p2 = (!tmp_2373_fu_21636_p2.read().is_01() || !tmp_819_reg_43430.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2373_fu_21636_p2.read()) - sc_biguint<10>(tmp_819_reg_43430.read()));
}

void ShuffleNetV2::thread_tmp_821_fu_21646_p2() {
    tmp_821_fu_21646_p2 = (!h64_cast_cast_reg_43409.read().is_01() || !tmp_820_fu_21641_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h64_cast_cast_reg_43409.read()) + sc_biguint<10>(tmp_820_fu_21641_p2.read()));
}

void ShuffleNetV2::thread_tmp_822_fu_21654_p3() {
    tmp_822_fu_21654_p3 = esl_concat<9,2>(sum21_reg_43436.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_823_fu_21665_p2() {
    tmp_823_fu_21665_p2 = (!p_shl385_cast_fu_21661_p1.read().is_01() || !sum21_cast_cast_fu_21651_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl385_cast_fu_21661_p1.read()) - sc_biguint<12>(sum21_cast_cast_fu_21651_p1.read()));
}

void ShuffleNetV2::thread_tmp_824_fu_21675_p2() {
    tmp_824_fu_21675_p2 = (!w65_cast_cast1_reg_43386.read().is_01() || !tmp_1082_cast_fu_21671_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w65_cast_cast1_reg_43386.read()) + sc_bigint<13>(tmp_1082_cast_fu_21671_p1.read()));
}

void ShuffleNetV2::thread_tmp_825_fu_21694_p2() {
    tmp_825_fu_21694_p2 = (!p_shl226_fu_21690_p1.read().is_01() || !tmp_1083_cast_fu_21680_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl226_fu_21690_p1.read()) - sc_bigint<32>(tmp_1083_cast_fu_21680_p1.read()));
}

void ShuffleNetV2::thread_tmp_826_fu_21700_p2() {
    tmp_826_fu_21700_p2 = (!h64_cast_reg_43404.read().is_01() || !tmp_825_fu_21694_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h64_cast_reg_43404.read()) + sc_biguint<32>(tmp_825_fu_21694_p2.read()));
}

void ShuffleNetV2::thread_tmp_827_fu_22260_p3() {
    tmp_827_fu_22260_p3 = esl_concat<6,3>(co74_reg_10911.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_828_fu_22272_p3() {
    tmp_828_fu_22272_p3 = esl_concat<6,1>(co74_reg_10911.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_829_fu_22284_p2() {
    tmp_829_fu_22284_p2 = (!p_shl388_cast_fu_22280_p1.read().is_01() || !p_shl387_cast_fu_22268_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl388_cast_fu_22280_p1.read()) + sc_biguint<10>(p_shl387_cast_fu_22268_p1.read()));
}

void ShuffleNetV2::thread_tmp_830_cast_fu_16615_p1() {
    tmp_830_cast_fu_16615_p1 = esl_zext<32,15>(tmp_670_fu_16610_p2.read());
}

void ShuffleNetV2::thread_tmp_830_fu_22026_p3() {
    tmp_830_fu_22026_p3 = esl_concat<10,5>(sum28_reg_43556.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_831_cast_fu_16625_p1() {
    tmp_831_cast_fu_16625_p1 = esl_zext<32,14>(tmp_671_reg_41122.read());
}

void ShuffleNetV2::thread_tmp_831_fu_22037_p3() {
    tmp_831_fu_22037_p3 = esl_concat<10,3>(sum28_reg_43556.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_832_fu_22048_p2() {
    tmp_832_fu_22048_p2 = (!p_shl389_cast_fu_22033_p1.read().is_01() || !p_shl390_cast_fu_22044_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl389_cast_fu_22033_p1.read()) - sc_biguint<16>(p_shl390_cast_fu_22044_p1.read()));
}

void ShuffleNetV2::thread_tmp_833_cast_fu_16789_p1() {
    tmp_833_cast_fu_16789_p1 = esl_sext<9,8>(tmp_673_fu_16783_p2.read());
}

void ShuffleNetV2::thread_tmp_833_fu_22058_p2() {
    tmp_833_fu_22058_p2 = (!ci42_cast1_cast_reg_43524.read().is_01() || !tmp_1098_cast_fu_22054_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci42_cast1_cast_reg_43524.read()) + sc_bigint<17>(tmp_1098_cast_fu_22054_p1.read()));
}

void ShuffleNetV2::thread_tmp_834_fu_22114_p2() {
    tmp_834_fu_22114_p2 = (!p_shl391_cast_fu_22100_p3.read().is_01() || !p_shl392_cast_fu_22107_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl391_cast_fu_22100_p3.read()) - sc_biguint<8>(p_shl392_cast_fu_22107_p3.read()));
}

void ShuffleNetV2::thread_tmp_835_fu_22120_p2() {
    tmp_835_fu_22120_p2 = (!tmp_215_cast_cast_reg_43537.read().is_01() || !tmp_834_fu_22114_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_215_cast_cast_reg_43537.read()) + sc_biguint<8>(tmp_834_fu_22114_p2.read()));
}

void ShuffleNetV2::thread_tmp_836_cast_fu_16857_p1() {
    tmp_836_cast_fu_16857_p1 = esl_sext<32,10>(tmp_676_fu_16852_p2.read());
}

void ShuffleNetV2::thread_tmp_836_fu_22379_p3() {
    tmp_836_fu_22379_p3 = esl_concat<6,3>(co76_reg_10944.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_837_fu_22391_p3() {
    tmp_837_fu_22391_p3 = esl_concat<6,1>(co76_reg_10944.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_838_fu_22403_p2() {
    tmp_838_fu_22403_p2 = (!p_shl394_cast_fu_22399_p1.read().is_01() || !p_shl393_cast_fu_22387_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl394_cast_fu_22399_p1.read()) + sc_biguint<10>(p_shl393_cast_fu_22387_p1.read()));
}

void ShuffleNetV2::thread_tmp_839_fu_22431_p3() {
    tmp_839_fu_22431_p3 = esl_concat<7,3>(tmp_220_fu_22425_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_840_fu_22443_p3() {
    tmp_840_fu_22443_p3 = esl_concat<7,1>(tmp_220_fu_22425_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_841_fu_22455_p2() {
    tmp_841_fu_22455_p2 = (!p_shl396_cast_fu_22451_p1.read().is_01() || !p_shl395_cast_fu_22439_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl396_cast_fu_22451_p1.read()) + sc_biguint<11>(p_shl395_cast_fu_22439_p1.read()));
}

void ShuffleNetV2::thread_tmp_842_fu_22318_p2() {
    tmp_842_fu_22318_p2 = (!h_67_cast_cast_fu_22314_p1.read().is_01() || !tmp_829_reg_43628.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_67_cast_cast_fu_22314_p1.read()) + sc_biguint<10>(tmp_829_reg_43628.read()));
}

void ShuffleNetV2::thread_tmp_843_cast_fu_16928_p1() {
    tmp_843_cast_fu_16928_p1 = esl_zext<32,9>(tmp_680_fu_16923_p2.read());
}

void ShuffleNetV2::thread_tmp_843_fu_22347_p2() {
    tmp_843_fu_22347_p2 = (!p_shl397_cast_fu_22331_p1.read().is_01() || !p_shl398_cast_fu_22343_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl397_cast_fu_22331_p1.read()) + sc_biguint<15>(p_shl398_cast_fu_22343_p1.read()));
}

void ShuffleNetV2::thread_tmp_844_fu_22481_p2() {
    tmp_844_fu_22481_p2 = (!h_69_cast_cast_fu_22477_p1.read().is_01() || !tmp_841_reg_43685.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_69_cast_cast_fu_22477_p1.read()) + sc_biguint<11>(tmp_841_reg_43685.read()));
}

void ShuffleNetV2::thread_tmp_845_fu_22510_p2() {
    tmp_845_fu_22510_p2 = (!p_shl399_cast_fu_22494_p1.read().is_01() || !p_shl400_cast_fu_22506_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl399_cast_fu_22494_p1.read()) + sc_biguint<15>(p_shl400_cast_fu_22506_p1.read()));
}

void ShuffleNetV2::thread_tmp_846_fu_22516_p2() {
    tmp_846_fu_22516_p2 = (!h_69_cast_cast1_fu_22473_p1.read().is_01() || !tmp_838_reg_43672.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_69_cast_cast1_fu_22473_p1.read()) + sc_biguint<10>(tmp_838_reg_43672.read()));
}

void ShuffleNetV2::thread_tmp_847_fu_22545_p2() {
    tmp_847_fu_22545_p2 = (!p_shl401_cast_fu_22529_p1.read().is_01() || !p_shl402_cast_fu_22541_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl401_cast_fu_22529_p1.read()) + sc_biguint<14>(p_shl402_cast_fu_22541_p1.read()));
}

void ShuffleNetV2::thread_tmp_848_fu_22369_p2() {
    tmp_848_fu_22369_p2 = (!tmp_843_reg_43649.read().is_01() || !w_68_cast_cast_fu_22365_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_843_reg_43649.read()) + sc_biguint<15>(w_68_cast_cast_fu_22365_p1.read()));
}

void ShuffleNetV2::thread_tmp_849_fu_22571_p2() {
    tmp_849_fu_22571_p2 = (!tmp_845_reg_43698.read().is_01() || !w_70_cast_cast_fu_22567_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_845_reg_43698.read()) + sc_biguint<15>(w_70_cast_cast_fu_22567_p1.read()));
}

void ShuffleNetV2::thread_tmp_850_fu_22581_p2() {
    tmp_850_fu_22581_p2 = (!tmp_847_reg_43703.read().is_01() || !w_70_cast_cast1_fu_22563_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_847_reg_43703.read()) + sc_biguint<14>(w_70_cast_cast1_fu_22563_p1.read()));
}

void ShuffleNetV2::thread_tmp_851_fu_22792_p3() {
    tmp_851_fu_22792_p3 = esl_concat<10,5>(sum32_reg_43781.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_852_fu_22803_p3() {
    tmp_852_fu_22803_p3 = esl_concat<10,3>(sum32_reg_43781.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_853_fu_22814_p2() {
    tmp_853_fu_22814_p2 = (!p_shl403_cast_fu_22799_p1.read().is_01() || !p_shl404_cast_fu_22810_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl403_cast_fu_22799_p1.read()) - sc_biguint<16>(p_shl404_cast_fu_22810_p1.read()));
}

void ShuffleNetV2::thread_tmp_854_fu_22824_p2() {
    tmp_854_fu_22824_p2 = (!ci44_cast1_cast_reg_43749.read().is_01() || !tmp_1137_cast_fu_22820_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci44_cast1_cast_reg_43749.read()) + sc_bigint<17>(tmp_1137_cast_fu_22820_p1.read()));
}

void ShuffleNetV2::thread_tmp_855_fu_22880_p2() {
    tmp_855_fu_22880_p2 = (!p_shl405_cast_fu_22866_p3.read().is_01() || !p_shl406_cast_fu_22873_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl405_cast_fu_22866_p3.read()) - sc_biguint<8>(p_shl406_cast_fu_22873_p3.read()));
}

void ShuffleNetV2::thread_tmp_856_fu_22886_p2() {
    tmp_856_fu_22886_p2 = (!tmp_227_cast_cast_reg_43762.read().is_01() || !tmp_855_fu_22880_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_227_cast_cast_reg_43762.read()) + sc_biguint<8>(tmp_855_fu_22880_p2.read()));
}

void ShuffleNetV2::thread_tmp_857_fu_23145_p3() {
    tmp_857_fu_23145_p3 = esl_concat<7,2>(tmp_239_fu_23136_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_858_fu_23157_p2() {
    tmp_858_fu_23157_p2 = (!p_shl407_cast_fu_23153_p1.read().is_01() || !tmp_239_cast_cast_fu_23141_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl407_cast_fu_23153_p1.read()) - sc_bigint<10>(tmp_239_cast_cast_fu_23141_p1.read()));
}

void ShuffleNetV2::thread_tmp_859_fu_23163_p2() {
    tmp_859_fu_23163_p2 = (!w71_cast_cast_reg_43876.read().is_01() || !tmp_858_fu_23157_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w71_cast_cast_reg_43876.read()) + sc_biguint<10>(tmp_858_fu_23157_p2.read()));
}

void ShuffleNetV2::thread_tmp_860_fu_23184_p2() {
    tmp_860_fu_23184_p2 = (!tmp_2397_fu_23179_p2.read().is_01() || !tmp_859_reg_43915.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2397_fu_23179_p2.read()) - sc_biguint<10>(tmp_859_reg_43915.read()));
}

void ShuffleNetV2::thread_tmp_861_fu_23189_p2() {
    tmp_861_fu_23189_p2 = (!h70_cast_cast_reg_43894.read().is_01() || !tmp_860_fu_23184_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h70_cast_cast_reg_43894.read()) + sc_biguint<10>(tmp_860_fu_23184_p2.read()));
}

void ShuffleNetV2::thread_tmp_862_fu_23197_p3() {
    tmp_862_fu_23197_p3 = esl_concat<9,2>(sum23_reg_43921.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_863_fu_23208_p2() {
    tmp_863_fu_23208_p2 = (!p_shl409_cast_fu_23204_p1.read().is_01() || !sum23_cast_cast_fu_23194_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl409_cast_fu_23204_p1.read()) - sc_biguint<12>(sum23_cast_cast_fu_23194_p1.read()));
}

void ShuffleNetV2::thread_tmp_864_fu_23218_p2() {
    tmp_864_fu_23218_p2 = (!w71_cast_cast1_reg_43871.read().is_01() || !tmp_1158_cast_fu_23214_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w71_cast_cast1_reg_43871.read()) + sc_bigint<13>(tmp_1158_cast_fu_23214_p1.read()));
}

void ShuffleNetV2::thread_tmp_865_fu_23237_p2() {
    tmp_865_fu_23237_p2 = (!p_shl231_fu_23233_p1.read().is_01() || !tmp_1159_cast_fu_23223_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl231_fu_23233_p1.read()) - sc_bigint<32>(tmp_1159_cast_fu_23223_p1.read()));
}

void ShuffleNetV2::thread_tmp_866_fu_23243_p2() {
    tmp_866_fu_23243_p2 = (!h70_cast_reg_43889.read().is_01() || !tmp_865_fu_23237_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h70_cast_reg_43889.read()) + sc_biguint<32>(tmp_865_fu_23237_p2.read()));
}

void ShuffleNetV2::thread_tmp_867_fu_23811_p3() {
    tmp_867_fu_23811_p3 = esl_concat<6,3>(co84_reg_11153.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_868_fu_23823_p3() {
    tmp_868_fu_23823_p3 = esl_concat<6,1>(co84_reg_11153.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_869_fu_23835_p2() {
    tmp_869_fu_23835_p2 = (!p_shl412_cast_fu_23831_p1.read().is_01() || !p_shl411_cast_fu_23819_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl412_cast_fu_23831_p1.read()) + sc_biguint<10>(p_shl411_cast_fu_23819_p1.read()));
}

void ShuffleNetV2::thread_tmp_870_fu_23573_p3() {
    tmp_870_fu_23573_p3 = esl_concat<10,5>(sum38_reg_44041.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_871_fu_23584_p3() {
    tmp_871_fu_23584_p3 = esl_concat<10,3>(sum38_reg_44041.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_872_fu_23595_p2() {
    tmp_872_fu_23595_p2 = (!p_shl413_cast_fu_23580_p1.read().is_01() || !p_shl414_cast_fu_23591_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl413_cast_fu_23580_p1.read()) - sc_biguint<16>(p_shl414_cast_fu_23591_p1.read()));
}

void ShuffleNetV2::thread_tmp_873_fu_23605_p2() {
    tmp_873_fu_23605_p2 = (!ci46_cast1_cast_reg_44009.read().is_01() || !tmp_1174_cast_fu_23601_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ci46_cast1_cast_reg_44009.read()) + sc_bigint<17>(tmp_1174_cast_fu_23601_p1.read()));
}

void ShuffleNetV2::thread_tmp_874_cast_fu_17227_p1() {
    tmp_874_cast_fu_17227_p1 = esl_zext<32,15>(tmp_704_fu_17222_p2.read());
}

void ShuffleNetV2::thread_tmp_874_fu_23661_p2() {
    tmp_874_fu_23661_p2 = (!p_shl415_cast_fu_23647_p3.read().is_01() || !p_shl416_cast_fu_23654_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl415_cast_fu_23647_p3.read()) - sc_biguint<8>(p_shl416_cast_fu_23654_p3.read()));
}

void ShuffleNetV2::thread_tmp_875_fu_23667_p2() {
    tmp_875_fu_23667_p2 = (!tmp_244_cast_cast_reg_44022.read().is_01() || !tmp_874_fu_23661_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_244_cast_cast_reg_44022.read()) + sc_biguint<8>(tmp_874_fu_23661_p2.read()));
}

void ShuffleNetV2::thread_tmp_876_cast_fu_17421_p1() {
    tmp_876_cast_fu_17421_p1 = esl_zext<32,15>(tmp_705_fu_17416_p2.read());
}

void ShuffleNetV2::thread_tmp_876_fu_23930_p3() {
    tmp_876_fu_23930_p3 = esl_concat<6,3>(co86_reg_11186.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_877_cast_fu_17431_p1() {
    tmp_877_cast_fu_17431_p1 = esl_zext<32,14>(tmp_706_reg_41611.read());
}

void ShuffleNetV2::thread_tmp_877_fu_23942_p3() {
    tmp_877_fu_23942_p3 = esl_concat<6,1>(co86_reg_11186.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_878_fu_23954_p2() {
    tmp_878_fu_23954_p2 = (!p_shl418_cast_fu_23950_p1.read().is_01() || !p_shl417_cast_fu_23938_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl418_cast_fu_23950_p1.read()) + sc_biguint<10>(p_shl417_cast_fu_23938_p1.read()));
}

void ShuffleNetV2::thread_tmp_879_cast_fu_17595_p1() {
    tmp_879_cast_fu_17595_p1 = esl_sext<9,8>(tmp_708_fu_17589_p2.read());
}

void ShuffleNetV2::thread_tmp_879_fu_23982_p3() {
    tmp_879_fu_23982_p3 = esl_concat<7,3>(tmp_249_fu_23976_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_880_fu_23994_p3() {
    tmp_880_fu_23994_p3 = esl_concat<7,1>(tmp_249_fu_23976_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_881_fu_24006_p2() {
    tmp_881_fu_24006_p2 = (!p_shl420_cast_fu_24002_p1.read().is_01() || !p_shl419_cast_fu_23990_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl420_cast_fu_24002_p1.read()) + sc_biguint<11>(p_shl419_cast_fu_23990_p1.read()));
}

void ShuffleNetV2::thread_tmp_882_cast_fu_17663_p1() {
    tmp_882_cast_fu_17663_p1 = esl_sext<32,10>(tmp_711_fu_17658_p2.read());
}

void ShuffleNetV2::thread_tmp_882_fu_23869_p2() {
    tmp_882_fu_23869_p2 = (!h_73_cast_cast_fu_23865_p1.read().is_01() || !tmp_869_reg_44113.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_73_cast_cast_fu_23865_p1.read()) + sc_biguint<10>(tmp_869_reg_44113.read()));
}

void ShuffleNetV2::thread_tmp_883_fu_23898_p2() {
    tmp_883_fu_23898_p2 = (!p_shl421_cast_fu_23882_p1.read().is_01() || !p_shl422_cast_fu_23894_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl421_cast_fu_23882_p1.read()) + sc_biguint<15>(p_shl422_cast_fu_23894_p1.read()));
}

void ShuffleNetV2::thread_tmp_884_fu_24032_p2() {
    tmp_884_fu_24032_p2 = (!h_75_cast_cast_fu_24028_p1.read().is_01() || !tmp_881_reg_44170.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_75_cast_cast_fu_24028_p1.read()) + sc_biguint<11>(tmp_881_reg_44170.read()));
}

void ShuffleNetV2::thread_tmp_885_fu_24061_p2() {
    tmp_885_fu_24061_p2 = (!p_shl423_cast_fu_24045_p1.read().is_01() || !p_shl424_cast_fu_24057_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl423_cast_fu_24045_p1.read()) + sc_biguint<15>(p_shl424_cast_fu_24057_p1.read()));
}

void ShuffleNetV2::thread_tmp_886_fu_24067_p2() {
    tmp_886_fu_24067_p2 = (!h_75_cast_cast1_fu_24024_p1.read().is_01() || !tmp_878_reg_44157.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_75_cast_cast1_fu_24024_p1.read()) + sc_biguint<10>(tmp_878_reg_44157.read()));
}

void ShuffleNetV2::thread_tmp_887_fu_24096_p2() {
    tmp_887_fu_24096_p2 = (!p_shl425_cast_fu_24080_p1.read().is_01() || !p_shl426_cast_fu_24092_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl425_cast_fu_24080_p1.read()) + sc_biguint<14>(p_shl426_cast_fu_24092_p1.read()));
}

void ShuffleNetV2::thread_tmp_888_fu_23920_p2() {
    tmp_888_fu_23920_p2 = (!tmp_883_reg_44134.read().is_01() || !w_74_cast_cast_fu_23916_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_883_reg_44134.read()) + sc_biguint<15>(w_74_cast_cast_fu_23916_p1.read()));
}

void ShuffleNetV2::thread_tmp_889_cast_fu_17734_p1() {
    tmp_889_cast_fu_17734_p1 = esl_zext<32,9>(tmp_715_fu_17729_p2.read());
}

void ShuffleNetV2::thread_tmp_889_fu_24122_p2() {
    tmp_889_fu_24122_p2 = (!tmp_885_reg_44183.read().is_01() || !w_76_cast_cast_fu_24118_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_885_reg_44183.read()) + sc_biguint<15>(w_76_cast_cast_fu_24118_p1.read()));
}

void ShuffleNetV2::thread_tmp_890_fu_24132_p2() {
    tmp_890_fu_24132_p2 = (!tmp_887_reg_44188.read().is_01() || !w_76_cast_cast1_fu_24114_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_887_reg_44188.read()) + sc_biguint<14>(w_76_cast_cast1_fu_24114_p1.read()));
}

void ShuffleNetV2::thread_tmp_891_fu_24343_p3() {
    tmp_891_fu_24343_p3 = esl_concat<9,5>(sum42_reg_44266.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_892_fu_24350_p1() {
    tmp_892_fu_24350_p1 = esl_sext<15,14>(tmp_891_fu_24343_p3.read());
}

void ShuffleNetV2::thread_tmp_893_fu_24358_p3() {
    tmp_893_fu_24358_p3 = esl_concat<9,3>(sum42_reg_44266.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_894_fu_24365_p1() {
    tmp_894_fu_24365_p1 = esl_sext<13,12>(tmp_893_fu_24358_p3.read());
}

void ShuffleNetV2::thread_tmp_895_fu_24373_p2() {
    tmp_895_fu_24373_p2 = (!p_shl427_cast_fu_24354_p1.read().is_01() || !p_shl428_cast_fu_24369_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl427_cast_fu_24354_p1.read()) - sc_biguint<16>(p_shl428_cast_fu_24369_p1.read()));
}

void ShuffleNetV2::thread_tmp_896_fu_24383_p2() {
    tmp_896_fu_24383_p2 = (!tmp_1215_cast_fu_24379_p1.read().is_01() || !ci48_cast1_cast_reg_44234.read().is_01())? sc_lv<17>(): (sc_bigint<17>(tmp_1215_cast_fu_24379_p1.read()) + sc_biguint<17>(ci48_cast1_cast_reg_44234.read()));
}

void ShuffleNetV2::thread_tmp_897_fu_24439_p2() {
    tmp_897_fu_24439_p2 = (!p_shl429_cast_fu_24425_p3.read().is_01() || !p_shl430_cast_fu_24432_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl429_cast_fu_24425_p3.read()) - sc_biguint<8>(p_shl430_cast_fu_24432_p3.read()));
}

void ShuffleNetV2::thread_tmp_898_fu_24445_p2() {
    tmp_898_fu_24445_p2 = (!tmp_897_fu_24439_p2.read().is_01() || !tmp_256_cast_cast_reg_44247.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_897_fu_24439_p2.read()) + sc_bigint<8>(tmp_256_cast_cast_reg_44247.read()));
}

void ShuffleNetV2::thread_tmp_899_fu_24708_p3() {
    tmp_899_fu_24708_p3 = esl_concat<7,2>(tmp_268_fu_24699_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_900_fu_24720_p2() {
    tmp_900_fu_24720_p2 = (!p_shl431_cast_fu_24716_p1.read().is_01() || !tmp_268_cast_cast_fu_24704_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl431_cast_fu_24716_p1.read()) - sc_bigint<10>(tmp_268_cast_cast_fu_24704_p1.read()));
}

void ShuffleNetV2::thread_tmp_901_fu_24726_p2() {
    tmp_901_fu_24726_p2 = (!w77_cast_cast_reg_44361.read().is_01() || !tmp_900_fu_24720_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w77_cast_cast_reg_44361.read()) + sc_biguint<10>(tmp_900_fu_24720_p2.read()));
}

void ShuffleNetV2::thread_tmp_902_fu_24747_p2() {
    tmp_902_fu_24747_p2 = (!tmp_2421_fu_24742_p2.read().is_01() || !tmp_901_reg_44400.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2421_fu_24742_p2.read()) - sc_biguint<10>(tmp_901_reg_44400.read()));
}

void ShuffleNetV2::thread_tmp_903_fu_24752_p2() {
    tmp_903_fu_24752_p2 = (!h76_cast_cast_reg_44379.read().is_01() || !tmp_902_fu_24747_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h76_cast_cast_reg_44379.read()) + sc_biguint<10>(tmp_902_fu_24747_p2.read()));
}

void ShuffleNetV2::thread_tmp_904_fu_24760_p3() {
    tmp_904_fu_24760_p3 = esl_concat<9,2>(sum25_reg_44406.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_905_fu_24771_p2() {
    tmp_905_fu_24771_p2 = (!p_shl433_cast_fu_24767_p1.read().is_01() || !sum25_cast_cast_fu_24757_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl433_cast_fu_24767_p1.read()) - sc_biguint<12>(sum25_cast_cast_fu_24757_p1.read()));
}

void ShuffleNetV2::thread_tmp_906_fu_24777_p2() {
    tmp_906_fu_24777_p2 = (!w77_cast_cast1_reg_44356.read().is_01() || !tmp_905_fu_24771_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(w77_cast_cast1_reg_44356.read()) + sc_biguint<12>(tmp_905_fu_24771_p2.read()));
}

void ShuffleNetV2::thread_tmp_907_fu_24796_p2() {
    tmp_907_fu_24796_p2 = (!p_shl237_fu_24792_p1.read().is_01() || !tmp_1237_cast_fu_24782_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl237_fu_24792_p1.read()) - sc_bigint<32>(tmp_1237_cast_fu_24782_p1.read()));
}

void ShuffleNetV2::thread_tmp_908_fu_24802_p2() {
    tmp_908_fu_24802_p2 = (!h76_cast_reg_44374.read().is_01() || !tmp_907_fu_24796_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h76_cast_reg_44374.read()) + sc_biguint<32>(tmp_907_fu_24796_p2.read()));
}

void ShuffleNetV2::thread_tmp_909_fu_25370_p3() {
    tmp_909_fu_25370_p3 = esl_concat<6,3>(co94_reg_11395.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_910_fu_25382_p3() {
    tmp_910_fu_25382_p3 = esl_concat<6,1>(co94_reg_11395.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_911_fu_25394_p2() {
    tmp_911_fu_25394_p2 = (!p_shl436_cast_fu_25390_p1.read().is_01() || !p_shl435_cast_fu_25378_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl436_cast_fu_25390_p1.read()) + sc_biguint<10>(p_shl435_cast_fu_25378_p1.read()));
}

void ShuffleNetV2::thread_tmp_912_fu_25132_p3() {
    tmp_912_fu_25132_p3 = esl_concat<11,5>(sum47_reg_44526.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_913_fu_25143_p3() {
    tmp_913_fu_25143_p3 = esl_concat<11,3>(sum47_reg_44526.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_914_fu_25154_p2() {
    tmp_914_fu_25154_p2 = (!p_shl437_cast_fu_25139_p1.read().is_01() || !p_shl438_cast_fu_25150_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl437_cast_fu_25139_p1.read()) - sc_biguint<17>(p_shl438_cast_fu_25150_p1.read()));
}

void ShuffleNetV2::thread_tmp_915_fu_25164_p2() {
    tmp_915_fu_25164_p2 = (!ci50_cast1_cast_reg_44494.read().is_01() || !tmp_1252_cast_fu_25160_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci50_cast1_cast_reg_44494.read()) + sc_bigint<18>(tmp_1252_cast_fu_25160_p1.read()));
}

void ShuffleNetV2::thread_tmp_916_fu_25220_p2() {
    tmp_916_fu_25220_p2 = (!p_shl439_cast_fu_25206_p3.read().is_01() || !p_shl440_cast_fu_25213_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl439_cast_fu_25206_p3.read()) - sc_biguint<8>(p_shl440_cast_fu_25213_p3.read()));
}

void ShuffleNetV2::thread_tmp_917_fu_25226_p2() {
    tmp_917_fu_25226_p2 = (!tmp_273_cast_cast_reg_44507.read().is_01() || !tmp_916_fu_25220_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_273_cast_cast_reg_44507.read()) + sc_biguint<8>(tmp_916_fu_25220_p2.read()));
}

void ShuffleNetV2::thread_tmp_918_cast_fu_18015_p1() {
    tmp_918_cast_fu_18015_p1 = esl_zext<32,15>(tmp_737_fu_18010_p2.read());
}

void ShuffleNetV2::thread_tmp_918_fu_25489_p3() {
    tmp_918_fu_25489_p3 = esl_concat<6,3>(co96_reg_11428.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_919_fu_25501_p3() {
    tmp_919_fu_25501_p3 = esl_concat<6,1>(co96_reg_11428.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_920_cast_fu_18209_p1() {
    tmp_920_cast_fu_18209_p1 = esl_zext<32,15>(tmp_738_fu_18204_p2.read());
}

void ShuffleNetV2::thread_tmp_920_fu_25513_p2() {
    tmp_920_fu_25513_p2 = (!p_shl442_cast_fu_25509_p1.read().is_01() || !p_shl441_cast_fu_25497_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl442_cast_fu_25509_p1.read()) + sc_biguint<10>(p_shl441_cast_fu_25497_p1.read()));
}

void ShuffleNetV2::thread_tmp_921_cast_fu_18219_p1() {
    tmp_921_cast_fu_18219_p1 = esl_zext<32,14>(tmp_739_reg_42100.read());
}

void ShuffleNetV2::thread_tmp_921_fu_25541_p3() {
    tmp_921_fu_25541_p3 = esl_concat<7,3>(tmp_275_fu_25535_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_922_fu_25553_p3() {
    tmp_922_fu_25553_p3 = esl_concat<7,1>(tmp_275_fu_25535_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_923_cast_fu_18391_p1() {
    tmp_923_cast_fu_18391_p1 = esl_sext<9,8>(tmp_741_fu_18385_p2.read());
}

void ShuffleNetV2::thread_tmp_923_fu_25565_p2() {
    tmp_923_fu_25565_p2 = (!p_shl444_cast_fu_25561_p1.read().is_01() || !p_shl443_cast_fu_25549_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl444_cast_fu_25561_p1.read()) + sc_biguint<11>(p_shl443_cast_fu_25549_p1.read()));
}

void ShuffleNetV2::thread_tmp_924_fu_25428_p2() {
    tmp_924_fu_25428_p2 = (!h_79_cast_cast_fu_25424_p1.read().is_01() || !tmp_911_reg_44598.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_79_cast_cast_fu_25424_p1.read()) + sc_biguint<10>(tmp_911_reg_44598.read()));
}

void ShuffleNetV2::thread_tmp_925_fu_25457_p2() {
    tmp_925_fu_25457_p2 = (!p_shl445_cast_fu_25441_p1.read().is_01() || !p_shl446_cast_fu_25453_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl445_cast_fu_25441_p1.read()) + sc_biguint<15>(p_shl446_cast_fu_25453_p1.read()));
}

void ShuffleNetV2::thread_tmp_926_cast_fu_18447_p1() {
    tmp_926_cast_fu_18447_p1 = esl_sext<11,10>(tmp_744_fu_18441_p2.read());
}

void ShuffleNetV2::thread_tmp_926_fu_25591_p2() {
    tmp_926_fu_25591_p2 = (!h_81_cast_cast_fu_25587_p1.read().is_01() || !tmp_923_reg_44655.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_81_cast_cast_fu_25587_p1.read()) + sc_biguint<11>(tmp_923_reg_44655.read()));
}

void ShuffleNetV2::thread_tmp_927_cast_fu_18475_p1() {
    tmp_927_cast_fu_18475_p1 = esl_sext<32,11>(tmp_745_fu_18470_p2.read());
}

void ShuffleNetV2::thread_tmp_927_fu_25620_p2() {
    tmp_927_fu_25620_p2 = (!p_shl447_cast_fu_25604_p1.read().is_01() || !p_shl448_cast_fu_25616_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl447_cast_fu_25604_p1.read()) + sc_biguint<15>(p_shl448_cast_fu_25616_p1.read()));
}

void ShuffleNetV2::thread_tmp_928_fu_25626_p2() {
    tmp_928_fu_25626_p2 = (!h_81_cast_cast1_fu_25583_p1.read().is_01() || !tmp_920_reg_44642.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_81_cast_cast1_fu_25583_p1.read()) + sc_biguint<10>(tmp_920_reg_44642.read()));
}

void ShuffleNetV2::thread_tmp_929_fu_25655_p2() {
    tmp_929_fu_25655_p2 = (!p_shl449_cast_fu_25639_p1.read().is_01() || !p_shl450_cast_fu_25651_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl449_cast_fu_25639_p1.read()) + sc_biguint<14>(p_shl450_cast_fu_25651_p1.read()));
}

void ShuffleNetV2::thread_tmp_930_fu_25479_p2() {
    tmp_930_fu_25479_p2 = (!tmp_925_reg_44619.read().is_01() || !w_80_cast_cast_fu_25475_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_925_reg_44619.read()) + sc_biguint<15>(w_80_cast_cast_fu_25475_p1.read()));
}

void ShuffleNetV2::thread_tmp_931_fu_25681_p2() {
    tmp_931_fu_25681_p2 = (!tmp_927_reg_44668.read().is_01() || !w_82_cast_cast_fu_25677_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_927_reg_44668.read()) + sc_biguint<15>(w_82_cast_cast_fu_25677_p1.read()));
}

void ShuffleNetV2::thread_tmp_932_fu_25691_p2() {
    tmp_932_fu_25691_p2 = (!tmp_929_reg_44673.read().is_01() || !w_82_cast_cast1_fu_25673_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_929_reg_44673.read()) + sc_biguint<14>(w_82_cast_cast1_fu_25673_p1.read()));
}

void ShuffleNetV2::thread_tmp_933_fu_25902_p3() {
    tmp_933_fu_25902_p3 = esl_concat<11,5>(sum49_reg_44751.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_934_cast_fu_18546_p1() {
    tmp_934_cast_fu_18546_p1 = esl_zext<32,9>(tmp_749_fu_18541_p2.read());
}

void ShuffleNetV2::thread_tmp_934_fu_25913_p3() {
    tmp_934_fu_25913_p3 = esl_concat<11,3>(sum49_reg_44751.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_935_fu_25924_p2() {
    tmp_935_fu_25924_p2 = (!p_shl451_cast_fu_25909_p1.read().is_01() || !p_shl452_cast_fu_25920_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl451_cast_fu_25909_p1.read()) - sc_biguint<17>(p_shl452_cast_fu_25920_p1.read()));
}

void ShuffleNetV2::thread_tmp_936_fu_25934_p2() {
    tmp_936_fu_25934_p2 = (!ci52_cast1_cast_reg_44719.read().is_01() || !tmp_1291_cast_fu_25930_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci52_cast1_cast_reg_44719.read()) + sc_bigint<18>(tmp_1291_cast_fu_25930_p1.read()));
}

void ShuffleNetV2::thread_tmp_937_fu_25990_p2() {
    tmp_937_fu_25990_p2 = (!p_shl453_cast_fu_25976_p3.read().is_01() || !p_shl454_cast_fu_25983_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl453_cast_fu_25976_p3.read()) - sc_biguint<8>(p_shl454_cast_fu_25983_p3.read()));
}

void ShuffleNetV2::thread_tmp_938_fu_25996_p2() {
    tmp_938_fu_25996_p2 = (!tmp_285_cast_cast_reg_44732.read().is_01() || !tmp_937_fu_25990_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_285_cast_cast_reg_44732.read()) + sc_biguint<8>(tmp_937_fu_25990_p2.read()));
}

void ShuffleNetV2::thread_tmp_939_fu_26255_p3() {
    tmp_939_fu_26255_p3 = esl_concat<7,2>(tmp_288_fu_26246_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_940_fu_26267_p2() {
    tmp_940_fu_26267_p2 = (!p_shl455_cast_fu_26263_p1.read().is_01() || !tmp_297_cast_cast_fu_26251_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl455_cast_fu_26263_p1.read()) - sc_bigint<10>(tmp_297_cast_cast_fu_26251_p1.read()));
}

void ShuffleNetV2::thread_tmp_941_fu_26273_p2() {
    tmp_941_fu_26273_p2 = (!w83_cast_cast_reg_44846.read().is_01() || !tmp_940_fu_26267_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w83_cast_cast_reg_44846.read()) + sc_biguint<10>(tmp_940_fu_26267_p2.read()));
}

void ShuffleNetV2::thread_tmp_942_fu_26294_p2() {
    tmp_942_fu_26294_p2 = (!tmp_2445_fu_26289_p2.read().is_01() || !tmp_941_reg_44885.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2445_fu_26289_p2.read()) - sc_biguint<10>(tmp_941_reg_44885.read()));
}

void ShuffleNetV2::thread_tmp_943_fu_26299_p2() {
    tmp_943_fu_26299_p2 = (!h82_cast_cast_reg_44864.read().is_01() || !tmp_942_fu_26294_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h82_cast_cast_reg_44864.read()) + sc_biguint<10>(tmp_942_fu_26294_p2.read()));
}

void ShuffleNetV2::thread_tmp_944_fu_26307_p3() {
    tmp_944_fu_26307_p3 = esl_concat<9,2>(sum27_reg_44891.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_945_fu_26318_p2() {
    tmp_945_fu_26318_p2 = (!p_shl457_cast_fu_26314_p1.read().is_01() || !sum27_cast_cast_fu_26304_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl457_cast_fu_26314_p1.read()) - sc_biguint<12>(sum27_cast_cast_fu_26304_p1.read()));
}

void ShuffleNetV2::thread_tmp_946_fu_26324_p2() {
    tmp_946_fu_26324_p2 = (!w83_cast_cast1_reg_44841.read().is_01() || !tmp_945_fu_26318_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(w83_cast_cast1_reg_44841.read()) + sc_biguint<12>(tmp_945_fu_26318_p2.read()));
}

void ShuffleNetV2::thread_tmp_947_fu_26343_p2() {
    tmp_947_fu_26343_p2 = (!p_shl240_fu_26339_p1.read().is_01() || !tmp_1313_cast_fu_26329_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl240_fu_26339_p1.read()) - sc_bigint<32>(tmp_1313_cast_fu_26329_p1.read()));
}

void ShuffleNetV2::thread_tmp_948_fu_26349_p2() {
    tmp_948_fu_26349_p2 = (!h82_cast_reg_44859.read().is_01() || !tmp_947_fu_26343_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(h82_cast_reg_44859.read()) + sc_biguint<32>(tmp_947_fu_26343_p2.read()));
}

void ShuffleNetV2::thread_tmp_949_fu_26909_p3() {
    tmp_949_fu_26909_p3 = esl_concat<6,3>(co104_reg_11637.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_950_cast_fu_18829_p1() {
    tmp_950_cast_fu_18829_p1 = esl_zext<32,15>(tmp_760_fu_18824_p2.read());
}

void ShuffleNetV2::thread_tmp_950_fu_26921_p3() {
    tmp_950_fu_26921_p3 = esl_concat<6,1>(co104_reg_11637.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_951_fu_26933_p2() {
    tmp_951_fu_26933_p2 = (!p_shl460_cast_fu_26929_p1.read().is_01() || !p_shl459_cast_fu_26917_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl460_cast_fu_26929_p1.read()) + sc_biguint<10>(p_shl459_cast_fu_26917_p1.read()));
}

void ShuffleNetV2::thread_tmp_952_fu_26675_p3() {
    tmp_952_fu_26675_p3 = esl_concat<11,5>(sum52_reg_45011.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_953_fu_26686_p3() {
    tmp_953_fu_26686_p3 = esl_concat<11,3>(sum52_reg_45011.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_954_fu_26697_p2() {
    tmp_954_fu_26697_p2 = (!p_shl461_cast_fu_26682_p1.read().is_01() || !p_shl462_cast_fu_26693_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl461_cast_fu_26682_p1.read()) - sc_biguint<17>(p_shl462_cast_fu_26693_p1.read()));
}

void ShuffleNetV2::thread_tmp_955_fu_26707_p2() {
    tmp_955_fu_26707_p2 = (!ci54_cast1_cast_reg_44979.read().is_01() || !tmp_1328_cast_fu_26703_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci54_cast1_cast_reg_44979.read()) + sc_bigint<18>(tmp_1328_cast_fu_26703_p1.read()));
}

void ShuffleNetV2::thread_tmp_956_fu_26763_p2() {
    tmp_956_fu_26763_p2 = (!p_shl463_cast_fu_26749_p3.read().is_01() || !p_shl464_cast_fu_26756_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl463_cast_fu_26749_p3.read()) - sc_biguint<8>(p_shl464_cast_fu_26756_p3.read()));
}

void ShuffleNetV2::thread_tmp_957_fu_26769_p2() {
    tmp_957_fu_26769_p2 = (!tmp_302_cast_cast_reg_44992.read().is_01() || !tmp_956_fu_26763_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_302_cast_cast_reg_44992.read()) + sc_biguint<8>(tmp_956_fu_26763_p2.read()));
}

void ShuffleNetV2::thread_tmp_958_fu_27028_p3() {
    tmp_958_fu_27028_p3 = esl_concat<6,3>(co106_reg_11670.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_959_cast_fu_19064_p1() {
    tmp_959_cast_fu_19064_p1 = esl_sext<16,15>(tmp_763_fu_19058_p2.read());
}

void ShuffleNetV2::thread_tmp_959_fu_27040_p3() {
    tmp_959_fu_27040_p3 = esl_concat<6,1>(co106_reg_11670.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_960_cast_fu_19073_p1() {
    tmp_960_cast_fu_19073_p1 = esl_sext<32,16>(tmp_764_fu_19068_p2.read());
}

void ShuffleNetV2::thread_tmp_960_fu_27052_p2() {
    tmp_960_fu_27052_p2 = (!p_shl466_cast_fu_27048_p1.read().is_01() || !p_shl465_cast_fu_27036_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl466_cast_fu_27048_p1.read()) + sc_biguint<10>(p_shl465_cast_fu_27036_p1.read()));
}

void ShuffleNetV2::thread_tmp_961_fu_27080_p3() {
    tmp_961_fu_27080_p3 = esl_concat<7,3>(tmp_294_fu_27074_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_962_fu_27092_p3() {
    tmp_962_fu_27092_p3 = esl_concat<7,1>(tmp_294_fu_27074_p2.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_963_fu_27104_p2() {
    tmp_963_fu_27104_p2 = (!p_shl468_cast_fu_27100_p1.read().is_01() || !p_shl467_cast_fu_27088_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl468_cast_fu_27100_p1.read()) + sc_biguint<11>(p_shl467_cast_fu_27088_p1.read()));
}

void ShuffleNetV2::thread_tmp_964_fu_26967_p2() {
    tmp_964_fu_26967_p2 = (!h_85_cast_cast_fu_26963_p1.read().is_01() || !tmp_951_reg_45083.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_85_cast_cast_fu_26963_p1.read()) + sc_biguint<10>(tmp_951_reg_45083.read()));
}

void ShuffleNetV2::thread_tmp_965_fu_26996_p2() {
    tmp_965_fu_26996_p2 = (!p_shl469_cast_fu_26980_p1.read().is_01() || !p_shl470_cast_fu_26992_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl469_cast_fu_26980_p1.read()) + sc_biguint<15>(p_shl470_cast_fu_26992_p1.read()));
}

void ShuffleNetV2::thread_tmp_966_cast_fu_19139_p1() {
    tmp_966_cast_fu_19139_p1 = esl_sext<32,8>(tmp_766_reg_42617.read());
}

void ShuffleNetV2::thread_tmp_966_fu_27130_p2() {
    tmp_966_fu_27130_p2 = (!h_87_cast_cast_fu_27126_p1.read().is_01() || !tmp_963_reg_45140.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_87_cast_cast_fu_27126_p1.read()) + sc_biguint<11>(tmp_963_reg_45140.read()));
}

void ShuffleNetV2::thread_tmp_967_fu_27159_p2() {
    tmp_967_fu_27159_p2 = (!p_shl471_cast_fu_27143_p1.read().is_01() || !p_shl472_cast_fu_27155_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl471_cast_fu_27143_p1.read()) + sc_biguint<15>(p_shl472_cast_fu_27155_p1.read()));
}

void ShuffleNetV2::thread_tmp_968_fu_27165_p2() {
    tmp_968_fu_27165_p2 = (!h_87_cast_cast1_fu_27122_p1.read().is_01() || !tmp_960_reg_45127.read().is_01())? sc_lv<10>(): (sc_biguint<10>(h_87_cast_cast1_fu_27122_p1.read()) + sc_biguint<10>(tmp_960_reg_45127.read()));
}

void ShuffleNetV2::thread_tmp_969_fu_27194_p2() {
    tmp_969_fu_27194_p2 = (!p_shl473_cast_fu_27178_p1.read().is_01() || !p_shl474_cast_fu_27190_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl473_cast_fu_27178_p1.read()) + sc_biguint<14>(p_shl474_cast_fu_27190_p1.read()));
}

void ShuffleNetV2::thread_tmp_970_fu_27018_p2() {
    tmp_970_fu_27018_p2 = (!tmp_965_reg_45104.read().is_01() || !w_86_cast_cast_fu_27014_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_965_reg_45104.read()) + sc_biguint<15>(w_86_cast_cast_fu_27014_p1.read()));
}

void ShuffleNetV2::thread_tmp_971_fu_27220_p2() {
    tmp_971_fu_27220_p2 = (!tmp_967_reg_45153.read().is_01() || !w_88_cast_cast_fu_27216_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_967_reg_45153.read()) + sc_biguint<15>(w_88_cast_cast_fu_27216_p1.read()));
}

void ShuffleNetV2::thread_tmp_972_fu_27230_p2() {
    tmp_972_fu_27230_p2 = (!tmp_969_reg_45158.read().is_01() || !w_88_cast_cast1_fu_27212_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_969_reg_45158.read()) + sc_biguint<14>(w_88_cast_cast1_fu_27212_p1.read()));
}

void ShuffleNetV2::thread_tmp_973_fu_27441_p3() {
    tmp_973_fu_27441_p3 = esl_concat<11,5>(sum54_reg_45236.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_974_fu_27452_p3() {
    tmp_974_fu_27452_p3 = esl_concat<11,3>(sum54_reg_45236.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_975_fu_27463_p2() {
    tmp_975_fu_27463_p2 = (!p_shl475_cast_fu_27448_p1.read().is_01() || !p_shl476_cast_fu_27459_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl475_cast_fu_27448_p1.read()) - sc_biguint<17>(p_shl476_cast_fu_27459_p1.read()));
}

void ShuffleNetV2::thread_tmp_976_fu_27473_p2() {
    tmp_976_fu_27473_p2 = (!ci56_cast1_cast_reg_45204.read().is_01() || !tmp_1367_cast_fu_27469_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci56_cast1_cast_reg_45204.read()) + sc_bigint<18>(tmp_1367_cast_fu_27469_p1.read()));
}

void ShuffleNetV2::thread_tmp_977_fu_27529_p2() {
    tmp_977_fu_27529_p2 = (!p_shl477_cast_fu_27515_p3.read().is_01() || !p_shl478_cast_fu_27522_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl477_cast_fu_27515_p3.read()) - sc_biguint<8>(p_shl478_cast_fu_27522_p3.read()));
}

void ShuffleNetV2::thread_tmp_978_cast_fu_19503_p1() {
    tmp_978_cast_fu_19503_p1 = esl_zext<32,10>(tmp_771_reg_42741.read());
}

void ShuffleNetV2::thread_tmp_978_fu_27535_p2() {
    tmp_978_fu_27535_p2 = (!tmp_314_cast_cast_reg_45217.read().is_01() || !tmp_977_fu_27529_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_314_cast_cast_reg_45217.read()) + sc_biguint<8>(tmp_977_fu_27529_p2.read()));
}

void ShuffleNetV2::thread_tmp_979_fu_27794_p3() {
    tmp_979_fu_27794_p3 = esl_concat<7,2>(tmp_307_fu_27785_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_980_cast_fu_19458_p1() {
    tmp_980_cast_fu_19458_p1 = esl_sext<12,11>(tmp_773_fu_19452_p2.read());
}

void ShuffleNetV2::thread_tmp_980_fu_27806_p2() {
    tmp_980_fu_27806_p2 = (!p_shl479_cast_fu_27802_p1.read().is_01() || !tmp_326_cast_cast_fu_27790_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(p_shl479_cast_fu_27802_p1.read()) - sc_bigint<10>(tmp_326_cast_cast_fu_27790_p1.read()));
}

void ShuffleNetV2::thread_tmp_981_cast_fu_19467_p1() {
    tmp_981_cast_fu_19467_p1 = esl_sext<32,12>(tmp_774_reg_42746.read());
}

void ShuffleNetV2::thread_tmp_981_fu_27812_p2() {
    tmp_981_fu_27812_p2 = (!tmp_980_fu_27806_p2.read().is_01() || !w89_cast_cast_reg_45331.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_980_fu_27806_p2.read()) + sc_biguint<10>(w89_cast_cast_reg_45331.read()));
}

void ShuffleNetV2::thread_tmp_982_fu_27833_p2() {
    tmp_982_fu_27833_p2 = (!tmp_2469_fu_27828_p2.read().is_01() || !tmp_981_reg_45370.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2469_fu_27828_p2.read()) - sc_biguint<10>(tmp_981_reg_45370.read()));
}

void ShuffleNetV2::thread_tmp_983_fu_27838_p2() {
    tmp_983_fu_27838_p2 = (!tmp_982_fu_27833_p2.read().is_01() || !h88_cast_cast_reg_45349.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_982_fu_27833_p2.read()) + sc_biguint<10>(h88_cast_cast_reg_45349.read()));
}

void ShuffleNetV2::thread_tmp_984_fu_27850_p3() {
    tmp_984_fu_27850_p3 = esl_concat<8,2>(sum29_reg_45376.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_985_fu_27857_p1() {
    tmp_985_fu_27857_p1 = esl_sext<11,10>(tmp_984_fu_27850_p3.read());
}

void ShuffleNetV2::thread_tmp_986_fu_27865_p2() {
    tmp_986_fu_27865_p2 = (!p_shl481_cast_fu_27861_p1.read().is_01() || !sum29_cast_cast_fu_27846_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl481_cast_fu_27861_p1.read()) - sc_biguint<12>(sum29_cast_cast_fu_27846_p1.read()));
}

void ShuffleNetV2::thread_tmp_987_fu_27871_p2() {
    tmp_987_fu_27871_p2 = (!tmp_986_fu_27865_p2.read().is_01() || !w89_cast_cast1_reg_45326.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_986_fu_27865_p2.read()) + sc_biguint<12>(w89_cast_cast1_reg_45326.read()));
}

void ShuffleNetV2::thread_tmp_988_fu_27890_p2() {
    tmp_988_fu_27890_p2 = (!p_shl244_fu_27886_p1.read().is_01() || !tmp_1390_cast_fu_27876_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_shl244_fu_27886_p1.read()) - sc_bigint<32>(tmp_1390_cast_fu_27876_p1.read()));
}

void ShuffleNetV2::thread_tmp_989_fu_27896_p2() {
    tmp_989_fu_27896_p2 = (!tmp_988_fu_27890_p2.read().is_01() || !h88_cast_reg_45344.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_988_fu_27890_p2.read()) + sc_biguint<32>(h88_cast_reg_45344.read()));
}

void ShuffleNetV2::thread_tmp_990_fu_28456_p3() {
    tmp_990_fu_28456_p3 = esl_concat<6,3>(co114_reg_11879.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_991_fu_28468_p3() {
    tmp_991_fu_28468_p3 = esl_concat<6,1>(co114_reg_11879.read(), ap_const_lv1_0);
}

void ShuffleNetV2::thread_tmp_992_fu_28480_p2() {
    tmp_992_fu_28480_p2 = (!p_shl484_cast_fu_28476_p1.read().is_01() || !p_shl483_cast_fu_28464_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl484_cast_fu_28476_p1.read()) + sc_biguint<10>(p_shl483_cast_fu_28464_p1.read()));
}

void ShuffleNetV2::thread_tmp_993_cast_fu_19845_p1() {
    tmp_993_cast_fu_19845_p1 = esl_sext<16,15>(tmp_779_fu_19839_p2.read());
}

void ShuffleNetV2::thread_tmp_993_fu_28222_p3() {
    tmp_993_fu_28222_p3 = esl_concat<11,5>(sum57_reg_45496.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_994_cast_fu_19854_p1() {
    tmp_994_cast_fu_19854_p1 = esl_sext<32,16>(tmp_780_fu_19849_p2.read());
}

void ShuffleNetV2::thread_tmp_994_fu_28233_p3() {
    tmp_994_fu_28233_p3 = esl_concat<11,3>(sum57_reg_45496.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_995_fu_28244_p2() {
    tmp_995_fu_28244_p2 = (!p_shl485_cast_fu_28229_p1.read().is_01() || !p_shl486_cast_fu_28240_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl485_cast_fu_28229_p1.read()) - sc_biguint<17>(p_shl486_cast_fu_28240_p1.read()));
}

void ShuffleNetV2::thread_tmp_996_fu_28254_p2() {
    tmp_996_fu_28254_p2 = (!ci58_cast1_cast_reg_45464.read().is_01() || !tmp_1405_cast_fu_28250_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ci58_cast1_cast_reg_45464.read()) + sc_bigint<18>(tmp_1405_cast_fu_28250_p1.read()));
}

void ShuffleNetV2::thread_tmp_997_fu_28310_p2() {
    tmp_997_fu_28310_p2 = (!p_shl487_cast_fu_28296_p3.read().is_01() || !p_shl488_cast_fu_28303_p3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl487_cast_fu_28296_p3.read()) - sc_biguint<8>(p_shl488_cast_fu_28303_p3.read()));
}

void ShuffleNetV2::thread_tmp_998_fu_28316_p2() {
    tmp_998_fu_28316_p2 = (!tmp_331_cast_cast_reg_45477.read().is_01() || !tmp_997_fu_28310_p2.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_331_cast_cast_reg_45477.read()) + sc_biguint<8>(tmp_997_fu_28310_p2.read()));
}

void ShuffleNetV2::thread_tmp_999_fu_28575_p3() {
    tmp_999_fu_28575_p3 = esl_concat<6,3>(co116_reg_11912.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_fu_15539_p3() {
    tmp_fu_15539_p3 = esl_concat<2,5>(ci_reg_9648.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_s_fu_16472_p2() {
    tmp_s_fu_16472_p2 = (!co19_cast_fu_16456_p1.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<6>(): (sc_biguint<6>(co19_cast_fu_16456_p1.read()) + sc_biguint<6>(ap_const_lv6_18));
}

void ShuffleNetV2::thread_w101_cast_cast1_fu_30801_p1() {
    w101_cast_cast1_fu_30801_p1 = esl_zext<14,2>(w101_reg_12253.read());
}

void ShuffleNetV2::thread_w101_cast_cast_fu_30805_p1() {
    w101_cast_cast_fu_30805_p1 = esl_zext<10,2>(w101_reg_12253.read());
}

void ShuffleNetV2::thread_w107_cast_cast1_fu_32368_p1() {
    w107_cast_cast1_fu_32368_p1 = esl_zext<13,2>(w107_reg_12495.read());
}

void ShuffleNetV2::thread_w107_cast_cast_fu_32372_p1() {
    w107_cast_cast_fu_32372_p1 = esl_zext<10,2>(w107_reg_12495.read());
}

void ShuffleNetV2::thread_w111_cast_cast1_fu_33704_p1() {
    w111_cast_cast1_fu_33704_p1 = esl_zext<13,2>(w111_reg_12704.read());
}

void ShuffleNetV2::thread_w111_cast_cast_fu_33708_p1() {
    w111_cast_cast_fu_33708_p1 = esl_zext<11,2>(w111_reg_12704.read());
}

void ShuffleNetV2::thread_w113_cast_cast1_fu_34477_p1() {
    w113_cast_cast1_fu_34477_p1 = esl_zext<13,2>(w113_reg_12825.read());
}

void ShuffleNetV2::thread_w113_cast_cast_fu_34481_p1() {
    w113_cast_cast_fu_34481_p1 = esl_zext<11,2>(w113_reg_12825.read());
}

void ShuffleNetV2::thread_w117_cast_cast1_fu_35873_p1() {
    w117_cast_cast1_fu_35873_p1 = esl_zext<13,2>(w117_reg_13034.read());
}

void ShuffleNetV2::thread_w117_cast_cast_fu_35877_p1() {
    w117_cast_cast_fu_35877_p1 = esl_zext<11,2>(w117_reg_13034.read());
}

void ShuffleNetV2::thread_w123_cast_cast1_fu_37400_p1() {
    w123_cast_cast1_fu_37400_p1 = esl_zext<14,2>(w123_reg_13276.read());
}

void ShuffleNetV2::thread_w123_cast_cast_fu_37404_p1() {
    w123_cast_cast_fu_37404_p1 = esl_zext<11,2>(w123_reg_13276.read());
}

void ShuffleNetV2::thread_w129_cast_cast1_fu_38931_p1() {
    w129_cast_cast1_fu_38931_p1 = esl_zext<15,2>(w129_reg_13518.read());
}

void ShuffleNetV2::thread_w129_cast_cast_fu_38935_p1() {
    w129_cast_cast_fu_38935_p1 = esl_zext<11,2>(w129_reg_13518.read());
}

void ShuffleNetV2::thread_w131_cast_cast_fu_39857_p1() {
    w131_cast_cast_fu_39857_p1 = esl_zext<11,3>(w131_reg_13672.read());
}

void ShuffleNetV2::thread_w13_cast_cast_fu_16152_p1() {
    w13_cast_cast_fu_16152_p1 = esl_zext<9,2>(w13_reg_9804.read());
}

void ShuffleNetV2::thread_w26_cast_cast1_fu_16844_p1() {
    w26_cast_cast1_fu_16844_p1 = esl_zext<9,2>(w26_reg_9949.read());
}

void ShuffleNetV2::thread_w26_cast_cast_fu_16848_p1() {
    w26_cast_cast_fu_16848_p1 = esl_zext<10,2>(w26_reg_9949.read());
}

void ShuffleNetV2::thread_w42_cast_cast1_fu_17650_p1() {
    w42_cast_cast1_fu_17650_p1 = esl_zext<9,2>(w42_reg_10127.read());
}

void ShuffleNetV2::thread_w42_cast_cast_fu_17654_p1() {
    w42_cast_cast_fu_17654_p1 = esl_zext<10,2>(w42_reg_10127.read());
}

void ShuffleNetV2::thread_w55_cast_cast1_fu_18462_p1() {
    w55_cast_cast1_fu_18462_p1 = esl_zext<9,2>(w55_reg_10305.read());
}

void ShuffleNetV2::thread_w55_cast_cast_fu_18466_p1() {
    w55_cast_cast_fu_18466_p1 = esl_zext<11,2>(w55_reg_10305.read());
}

void ShuffleNetV2::thread_w59_cast_cast1_fu_19290_p1() {
    w59_cast_cast1_fu_19290_p1 = esl_zext<12,2>(w59_reg_10471.read());
}

void ShuffleNetV2::thread_w59_cast_cast_fu_19294_p1() {
    w59_cast_cast_fu_19294_p1 = esl_zext<10,2>(w59_reg_10471.read());
}

void ShuffleNetV2::thread_w61_cast_cast1_fu_20075_p1() {
    w61_cast_cast1_fu_20075_p1 = esl_zext<11,2>(w61_reg_10592.read());
}

void ShuffleNetV2::thread_w61_cast_cast_fu_20079_p1() {
    w61_cast_cast_fu_20079_p1 = esl_zext<10,2>(w61_reg_10592.read());
}

void ShuffleNetV2::thread_w65_cast_cast1_fu_21499_p1() {
    w65_cast_cast1_fu_21499_p1 = esl_zext<13,2>(w65_reg_10801.read());
}

void ShuffleNetV2::thread_w65_cast_cast_fu_21503_p1() {
    w65_cast_cast_fu_21503_p1 = esl_zext<10,2>(w65_reg_10801.read());
}

void ShuffleNetV2::thread_w6_cast_cast_fu_15856_p1() {
    w6_cast_cast_fu_15856_p1 = esl_zext<9,2>(w6_reg_9726.read());
}

void ShuffleNetV2::thread_w71_cast_cast1_fu_23046_p1() {
    w71_cast_cast1_fu_23046_p1 = esl_zext<13,2>(w71_reg_11043.read());
}

void ShuffleNetV2::thread_w71_cast_cast_fu_23050_p1() {
    w71_cast_cast_fu_23050_p1 = esl_zext<10,2>(w71_reg_11043.read());
}

void ShuffleNetV2::thread_w77_cast_cast1_fu_24609_p1() {
    w77_cast_cast1_fu_24609_p1 = esl_zext<12,2>(w77_reg_11285.read());
}

void ShuffleNetV2::thread_w77_cast_cast_fu_24613_p1() {
    w77_cast_cast_fu_24613_p1 = esl_zext<10,2>(w77_reg_11285.read());
}

void ShuffleNetV2::thread_w83_cast_cast1_fu_26156_p1() {
    w83_cast_cast1_fu_26156_p1 = esl_zext<12,2>(w83_reg_11527.read());
}

void ShuffleNetV2::thread_w83_cast_cast_fu_26160_p1() {
    w83_cast_cast_fu_26160_p1 = esl_zext<10,2>(w83_reg_11527.read());
}

void ShuffleNetV2::thread_w89_cast_cast1_fu_27695_p1() {
    w89_cast_cast1_fu_27695_p1 = esl_zext<12,2>(w89_reg_11769.read());
}

void ShuffleNetV2::thread_w89_cast_cast_fu_27699_p1() {
    w89_cast_cast_fu_27699_p1 = esl_zext<10,2>(w89_reg_11769.read());
}

void ShuffleNetV2::thread_w95_cast_cast1_fu_29242_p1() {
    w95_cast_cast1_fu_29242_p1 = esl_zext<13,2>(w95_reg_12011.read());
}

void ShuffleNetV2::thread_w95_cast_cast_fu_29246_p1() {
    w95_cast_cast_fu_29246_p1 = esl_zext<10,2>(w95_reg_12011.read());
}

void ShuffleNetV2::thread_w_100_cast_cast1_fu_30310_p1() {
    w_100_cast_cast1_fu_30310_p1 = esl_zext<14,4>(w_100_fu_30304_p2.read());
}

void ShuffleNetV2::thread_w_100_cast_cast_fu_30314_p1() {
    w_100_cast_cast_fu_30314_p1 = esl_zext<15,4>(w_100_fu_30304_p2.read());
}

void ShuffleNetV2::thread_w_100_fu_30304_p2() {
    w_100_fu_30304_p2 = (!w99_reg_12176.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w99_reg_12176.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_102_fu_30815_p2() {
    w_102_fu_30815_p2 = (!w101_reg_12253.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w101_reg_12253.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_104_cast_cast_fu_31675_p1() {
    w_104_cast_cast_fu_31675_p1 = esl_zext<15,4>(w_104_fu_31669_p2.read());
}

void ShuffleNetV2::thread_w_104_fu_31669_p2() {
    w_104_fu_31669_p2 = (!w103_reg_12385.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w103_reg_12385.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_106_cast_cast1_fu_31873_p1() {
    w_106_cast_cast1_fu_31873_p1 = esl_zext<14,4>(w_106_fu_31867_p2.read());
}

void ShuffleNetV2::thread_w_106_cast_cast_fu_31877_p1() {
    w_106_cast_cast_fu_31877_p1 = esl_zext<15,4>(w_106_fu_31867_p2.read());
}

void ShuffleNetV2::thread_w_106_fu_31867_p2() {
    w_106_fu_31867_p2 = (!w105_reg_12418.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w105_reg_12418.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_108_fu_32382_p2() {
    w_108_fu_32382_p2 = (!w107_reg_12495.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w107_reg_12495.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_110_cast_cast_fu_33242_p1() {
    w_110_cast_cast_fu_33242_p1 = esl_zext<15,4>(w_110_fu_33236_p2.read());
}

void ShuffleNetV2::thread_w_110_fu_33236_p2() {
    w_110_fu_33236_p2 = (!w109_reg_12627.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w109_reg_12627.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_112_fu_33718_p2() {
    w_112_fu_33718_p2 = (!w111_reg_12704.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w111_reg_12704.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_114_fu_34491_p2() {
    w_114_fu_34491_p2 = (!w113_reg_12825.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w113_reg_12825.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_116_cast_cast1_fu_35402_p1() {
    w_116_cast_cast1_fu_35402_p1 = esl_zext<13,3>(w_116_fu_35396_p2.read());
}

void ShuffleNetV2::thread_w_116_cast_cast_fu_35406_p1() {
    w_116_cast_cast_fu_35406_p1 = esl_zext<14,3>(w_116_fu_35396_p2.read());
}

void ShuffleNetV2::thread_w_116_fu_35396_p2() {
    w_116_fu_35396_p2 = (!w115_reg_12957.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w115_reg_12957.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_118_fu_35887_p2() {
    w_118_fu_35887_p2 = (!w117_reg_13034.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w117_reg_13034.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_120_cast_cast_fu_36731_p1() {
    w_120_cast_cast_fu_36731_p1 = esl_zext<14,3>(w_120_fu_36725_p2.read());
}

void ShuffleNetV2::thread_w_120_fu_36725_p2() {
    w_120_fu_36725_p2 = (!w119_reg_13166.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w119_reg_13166.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_122_cast_cast1_fu_36929_p1() {
    w_122_cast_cast1_fu_36929_p1 = esl_zext<13,3>(w_122_fu_36923_p2.read());
}

void ShuffleNetV2::thread_w_122_cast_cast_fu_36933_p1() {
    w_122_cast_cast_fu_36933_p1 = esl_zext<14,3>(w_122_fu_36923_p2.read());
}

void ShuffleNetV2::thread_w_122_fu_36923_p2() {
    w_122_fu_36923_p2 = (!w121_reg_13199.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w121_reg_13199.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_124_fu_37414_p2() {
    w_124_fu_37414_p2 = (!w123_reg_13276.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w123_reg_13276.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_126_cast_cast_fu_38262_p1() {
    w_126_cast_cast_fu_38262_p1 = esl_zext<14,3>(w_126_fu_38256_p2.read());
}

void ShuffleNetV2::thread_w_126_fu_38256_p2() {
    w_126_fu_38256_p2 = (!w125_reg_13408.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w125_reg_13408.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_128_cast_cast1_fu_38460_p1() {
    w_128_cast_cast1_fu_38460_p1 = esl_zext<13,3>(w_128_fu_38454_p2.read());
}

void ShuffleNetV2::thread_w_128_cast_cast_fu_38464_p1() {
    w_128_cast_cast_fu_38464_p1 = esl_zext<14,3>(w_128_fu_38454_p2.read());
}

void ShuffleNetV2::thread_w_128_fu_38454_p2() {
    w_128_fu_38454_p2 = (!w127_reg_13441.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w127_reg_13441.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_130_fu_38945_p2() {
    w_130_fu_38945_p2 = (!w129_reg_13518.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w129_reg_13518.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_133_cast_cast_fu_39886_p1() {
    w_133_cast_cast_fu_39886_p1 = esl_zext<13,3>(w_133_fu_39880_p2.read());
}

void ShuffleNetV2::thread_w_133_fu_39880_p2() {
    w_133_fu_39880_p2 = (!w131_reg_13672.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w131_reg_13672.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_134_cast_cast_fu_39785_p1() {
    w_134_cast_cast_fu_39785_p1 = esl_zext<14,3>(w_1_fu_39779_p2.read());
}

void ShuffleNetV2::thread_w_1_fu_39779_p2() {
    w_1_fu_39779_p2 = (!w132_reg_13650.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w132_reg_13650.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_45_cast_cast_fu_15614_p1() {
    w_45_cast_cast_fu_15614_p1 = esl_zext<8,6>(w_46_fu_15608_p2.read());
}

void ShuffleNetV2::thread_w_46_fu_15608_p2() {
    w_46_fu_15608_p2 = (!w_reg_9659.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(w_reg_9659.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_w_47_fu_15893_p2() {
    w_47_fu_15893_p2 = (!w6_reg_9726.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w6_reg_9726.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_48_cast_cast1_fu_16602_p1() {
    w_48_cast_cast1_fu_16602_p1 = esl_zext<14,5>(w_49_fu_16596_p2.read());
}

void ShuffleNetV2::thread_w_48_cast_cast_fu_16606_p1() {
    w_48_cast_cast_fu_16606_p1 = esl_zext<15,5>(w_49_fu_16596_p2.read());
}

void ShuffleNetV2::thread_w_48_fu_16206_p2() {
    w_48_fu_16206_p2 = (!ap_const_lv2_1.is_01() || !w13_reg_9804.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w13_reg_9804.read()));
}

void ShuffleNetV2::thread_w_49_fu_16596_p2() {
    w_49_fu_16596_p2 = (!w21_reg_9893.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w21_reg_9893.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_50_cast_cast_fu_17218_p1() {
    w_50_cast_cast_fu_17218_p1 = esl_zext<15,5>(w_51_fu_17212_p2.read());
}

void ShuffleNetV2::thread_w_50_fu_16902_p2() {
    w_50_fu_16902_p2 = (!ap_const_lv2_1.is_01() || !w26_reg_9949.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w26_reg_9949.read()));
}

void ShuffleNetV2::thread_w_51_cast_cast1_fu_17408_p1() {
    w_51_cast_cast1_fu_17408_p1 = esl_zext<14,5>(w_52_fu_17402_p2.read());
}

void ShuffleNetV2::thread_w_51_cast_cast_fu_17412_p1() {
    w_51_cast_cast_fu_17412_p1 = esl_zext<15,5>(w_52_fu_17402_p2.read());
}

void ShuffleNetV2::thread_w_51_fu_17212_p2() {
    w_51_fu_17212_p2 = (!w34_reg_10038.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w34_reg_10038.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_52_fu_17402_p2() {
    w_52_fu_17402_p2 = (!w37_reg_10071.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w37_reg_10071.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_53_cast_cast_fu_18006_p1() {
    w_53_cast_cast_fu_18006_p1 = esl_zext<15,5>(w_54_fu_18000_p2.read());
}

void ShuffleNetV2::thread_w_53_fu_17708_p2() {
    w_53_fu_17708_p2 = (!ap_const_lv2_1.is_01() || !w42_reg_10127.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w42_reg_10127.read()));
}

void ShuffleNetV2::thread_w_54_cast_cast1_fu_18196_p1() {
    w_54_cast_cast1_fu_18196_p1 = esl_zext<14,5>(w_55_fu_18190_p2.read());
}

void ShuffleNetV2::thread_w_54_cast_cast_fu_18200_p1() {
    w_54_cast_cast_fu_18200_p1 = esl_zext<15,5>(w_55_fu_18190_p2.read());
}

void ShuffleNetV2::thread_w_54_fu_18000_p2() {
    w_54_fu_18000_p2 = (!w50_reg_10216.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w50_reg_10216.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_55_fu_18190_p2() {
    w_55_fu_18190_p2 = (!w53_reg_10249.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w53_reg_10249.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_56_fu_18520_p2() {
    w_56_fu_18520_p2 = (!ap_const_lv2_1.is_01() || !w55_reg_10305.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(w55_reg_10305.read()));
}

void ShuffleNetV2::thread_w_58_cast_cast_fu_18820_p1() {
    w_58_cast_cast_fu_18820_p1 = esl_zext<15,5>(w_58_fu_18814_p2.read());
}

void ShuffleNetV2::thread_w_58_fu_18814_p2() {
    w_58_fu_18814_p2 = (!w57_reg_10394.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w57_reg_10394.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_60_fu_19304_p2() {
    w_60_fu_19304_p2 = (!w59_reg_10471.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w59_reg_10471.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_62_fu_20089_p2() {
    w_62_fu_20089_p2 = (!w61_reg_10592.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w61_reg_10592.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_64_cast_cast1_fu_21016_p1() {
    w_64_cast_cast1_fu_21016_p1 = esl_zext<14,4>(w_64_fu_21010_p2.read());
}

void ShuffleNetV2::thread_w_64_cast_cast_fu_21020_p1() {
    w_64_cast_cast_fu_21020_p1 = esl_zext<15,4>(w_64_fu_21010_p2.read());
}

void ShuffleNetV2::thread_w_64_fu_21010_p2() {
    w_64_fu_21010_p2 = (!w63_reg_10724.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w63_reg_10724.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_66_fu_21513_p2() {
    w_66_fu_21513_p2 = (!w65_reg_10801.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w65_reg_10801.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_68_cast_cast_fu_22365_p1() {
    w_68_cast_cast_fu_22365_p1 = esl_zext<15,4>(w_68_fu_22359_p2.read());
}

void ShuffleNetV2::thread_w_68_fu_22359_p2() {
    w_68_fu_22359_p2 = (!w67_reg_10933.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w67_reg_10933.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_70_cast_cast1_fu_22563_p1() {
    w_70_cast_cast1_fu_22563_p1 = esl_zext<14,4>(w_70_fu_22557_p2.read());
}

void ShuffleNetV2::thread_w_70_cast_cast_fu_22567_p1() {
    w_70_cast_cast_fu_22567_p1 = esl_zext<15,4>(w_70_fu_22557_p2.read());
}

void ShuffleNetV2::thread_w_70_fu_22557_p2() {
    w_70_fu_22557_p2 = (!w69_reg_10966.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w69_reg_10966.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_72_fu_23060_p2() {
    w_72_fu_23060_p2 = (!w71_reg_11043.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w71_reg_11043.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_74_cast_cast_fu_23916_p1() {
    w_74_cast_cast_fu_23916_p1 = esl_zext<15,4>(w_74_fu_23910_p2.read());
}

void ShuffleNetV2::thread_w_74_fu_23910_p2() {
    w_74_fu_23910_p2 = (!w73_reg_11175.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w73_reg_11175.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_76_cast_cast1_fu_24114_p1() {
    w_76_cast_cast1_fu_24114_p1 = esl_zext<14,4>(w_76_fu_24108_p2.read());
}

void ShuffleNetV2::thread_w_76_cast_cast_fu_24118_p1() {
    w_76_cast_cast_fu_24118_p1 = esl_zext<15,4>(w_76_fu_24108_p2.read());
}

void ShuffleNetV2::thread_w_76_fu_24108_p2() {
    w_76_fu_24108_p2 = (!w75_reg_11208.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w75_reg_11208.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_78_fu_24623_p2() {
    w_78_fu_24623_p2 = (!w77_reg_11285.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w77_reg_11285.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_80_cast_cast_fu_25475_p1() {
    w_80_cast_cast_fu_25475_p1 = esl_zext<15,4>(w_80_fu_25469_p2.read());
}

void ShuffleNetV2::thread_w_80_fu_25469_p2() {
    w_80_fu_25469_p2 = (!w79_reg_11417.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w79_reg_11417.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_82_cast_cast1_fu_25673_p1() {
    w_82_cast_cast1_fu_25673_p1 = esl_zext<14,4>(w_82_fu_25667_p2.read());
}

void ShuffleNetV2::thread_w_82_cast_cast_fu_25677_p1() {
    w_82_cast_cast_fu_25677_p1 = esl_zext<15,4>(w_82_fu_25667_p2.read());
}

void ShuffleNetV2::thread_w_82_fu_25667_p2() {
    w_82_fu_25667_p2 = (!w81_reg_11450.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w81_reg_11450.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_84_fu_26170_p2() {
    w_84_fu_26170_p2 = (!w83_reg_11527.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w83_reg_11527.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_86_cast_cast_fu_27014_p1() {
    w_86_cast_cast_fu_27014_p1 = esl_zext<15,4>(w_86_fu_27008_p2.read());
}

void ShuffleNetV2::thread_w_86_fu_27008_p2() {
    w_86_fu_27008_p2 = (!w85_reg_11659.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w85_reg_11659.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_88_cast_cast1_fu_27212_p1() {
    w_88_cast_cast1_fu_27212_p1 = esl_zext<14,4>(w_88_fu_27206_p2.read());
}

void ShuffleNetV2::thread_w_88_cast_cast_fu_27216_p1() {
    w_88_cast_cast_fu_27216_p1 = esl_zext<15,4>(w_88_fu_27206_p2.read());
}

void ShuffleNetV2::thread_w_88_fu_27206_p2() {
    w_88_fu_27206_p2 = (!w87_reg_11692.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w87_reg_11692.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_90_fu_27709_p2() {
    w_90_fu_27709_p2 = (!w89_reg_11769.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w89_reg_11769.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_92_cast_cast_fu_28561_p1() {
    w_92_cast_cast_fu_28561_p1 = esl_zext<15,4>(w_92_fu_28555_p2.read());
}

void ShuffleNetV2::thread_w_92_fu_28555_p2() {
    w_92_fu_28555_p2 = (!w91_reg_11901.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w91_reg_11901.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_94_cast_cast1_fu_28759_p1() {
    w_94_cast_cast1_fu_28759_p1 = esl_zext<14,4>(w_94_fu_28753_p2.read());
}

void ShuffleNetV2::thread_w_94_cast_cast_fu_28763_p1() {
    w_94_cast_cast_fu_28763_p1 = esl_zext<15,4>(w_94_fu_28753_p2.read());
}

void ShuffleNetV2::thread_w_94_fu_28753_p2() {
    w_94_fu_28753_p2 = (!w93_reg_11934.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w93_reg_11934.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_96_fu_29256_p2() {
    w_96_fu_29256_p2 = (!w95_reg_12011.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w95_reg_12011.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_98_cast_cast_fu_30112_p1() {
    w_98_cast_cast_fu_30112_p1 = esl_zext<15,4>(w_98_fu_30106_p2.read());
}

void ShuffleNetV2::thread_w_98_fu_30106_p2() {
    w_98_fu_30106_p2 = (!w97_reg_12143.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w97_reg_12143.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_cast_cast_fu_15581_p1() {
    w_cast_cast_fu_15581_p1 = esl_zext<8,6>(w_reg_9659.read());
}

void ShuffleNetV2::thread_weights_24_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_4_reg_42309.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state259.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_3_reg_41820.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_2_reg_41331.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_1_reg_40880.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        weights_24_1_3x3_V_address0 = weights_24_1_3x3_V_a_reg_40656.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state342.read()))) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_16_no_re_fu_14764_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()))) {
        weights_24_1_3x3_V_address0 = grp_subconv_3x3_32_strid_fu_14682_weight_V_address0.read();
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
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state196.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state269.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state342.read()))) {
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_16_no_re_fu_14764_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state127.read()))) {
        weights_24_1_3x3_V_ce0 = grp_subconv_3x3_32_strid_fu_14682_weight_V_ce0.read();
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
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_194_reg_42365.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_170_reg_42129.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_146_reg_41876.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_122_reg_41646.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_98_reg_41381.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_74_reg_41157.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_50_reg_40942.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_26_reg_40712.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_10_address0 = weights_24_24_1x1_V_2_reg_40487.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_10_address0 = grp_subconv_1x1_16_p_fu_14319_weight_10_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_10_address0 = grp_subconv_1x1_32_p_fu_14169_weight_10_V_address0.read();
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
        weights_24_24_1x1_V_10_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_10_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_10_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_10_V_ce0.read();
    } else {
        weights_24_24_1x1_V_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_A)))) {
        weights_24_24_1x1_V_10_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_192_reg_42355.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_168_reg_42119.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_144_reg_41866.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_120_reg_41636.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_96_reg_41371.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_72_reg_41147.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_48_reg_40932.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_24_reg_40702.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_11_address0 = weights_24_24_1x1_V_s_reg_40477.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_11_address0 = grp_subconv_1x1_16_p_fu_14319_weight_11_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_11_address0 = grp_subconv_1x1_32_p_fu_14169_weight_11_V_address0.read();
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
        weights_24_24_1x1_V_11_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_11_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_11_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_11_V_ce0.read();
    } else {
        weights_24_24_1x1_V_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_B)))) {
        weights_24_24_1x1_V_11_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_202_reg_42405.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_178_reg_42169.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_154_reg_41916.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_130_reg_41686.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_106_reg_41421.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_82_reg_41197.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_58_reg_40982.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_34_reg_40752.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_12_address0 = weights_24_24_1x1_V_10_reg_40527.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_12_address0 = grp_subconv_1x1_16_p_fu_14319_weight_12_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_12_address0 = grp_subconv_1x1_32_p_fu_14169_weight_12_V_address0.read();
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
        weights_24_24_1x1_V_12_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_12_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_12_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_12_V_ce0.read();
    } else {
        weights_24_24_1x1_V_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_C)))) {
        weights_24_24_1x1_V_12_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_203_reg_42410.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_179_reg_42174.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_155_reg_41921.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_131_reg_41691.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_107_reg_41426.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_83_reg_41202.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_59_reg_40987.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_35_reg_40757.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_13_address0 = weights_24_24_1x1_V_11_reg_40532.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_13_address0 = grp_subconv_1x1_16_p_fu_14319_weight_13_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_13_address0 = grp_subconv_1x1_32_p_fu_14169_weight_13_V_address0.read();
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
        weights_24_24_1x1_V_13_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_13_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_13_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_13_V_ce0.read();
    } else {
        weights_24_24_1x1_V_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_D)))) {
        weights_24_24_1x1_V_13_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_199_reg_42390.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_175_reg_42154.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_151_reg_41901.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_127_reg_41671.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_103_reg_41406.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_79_reg_41182.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_55_reg_40967.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_31_reg_40737.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_14_address0 = weights_24_24_1x1_V_7_reg_40512.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_14_address0 = grp_subconv_1x1_16_p_fu_14319_weight_14_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_14_address0 = grp_subconv_1x1_32_p_fu_14169_weight_14_V_address0.read();
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
        weights_24_24_1x1_V_14_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_14_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_14_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_14_V_ce0.read();
    } else {
        weights_24_24_1x1_V_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_E)))) {
        weights_24_24_1x1_V_14_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_204_reg_42415.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_180_reg_42179.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_156_reg_41926.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_132_reg_41696.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_108_reg_41431.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_84_reg_41207.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_60_reg_40992.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_36_reg_40762.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_15_address0 = weights_24_24_1x1_V_12_reg_40537.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_15_address0 = grp_subconv_1x1_16_p_fu_14319_weight_15_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_15_address0 = grp_subconv_1x1_32_p_fu_14169_weight_15_V_address0.read();
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
        weights_24_24_1x1_V_15_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_15_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_15_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_15_V_ce0.read();
    } else {
        weights_24_24_1x1_V_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_F)))) {
        weights_24_24_1x1_V_15_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_213_reg_42460.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_189_reg_42224.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_165_reg_41971.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_141_reg_41741.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_117_reg_41476.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_93_reg_41252.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_69_reg_41037.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_45_reg_40807.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_16_address0 = weights_24_24_1x1_V_21_reg_40582.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_16_address0 = grp_subconv_1x1_16_p_fu_14319_weight_16_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_16_address0 = grp_subconv_1x1_32_p_fu_14169_weight_16_V_address0.read();
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
        weights_24_24_1x1_V_16_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_16_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_16_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_16_V_ce0.read();
    } else {
        weights_24_24_1x1_V_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_16_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_10)))) {
        weights_24_24_1x1_V_16_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_200_reg_42395.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_176_reg_42159.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_152_reg_41906.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_128_reg_41676.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_104_reg_41411.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_80_reg_41187.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_56_reg_40972.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_32_reg_40742.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_17_address0 = weights_24_24_1x1_V_8_reg_40517.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_17_address0 = grp_subconv_1x1_16_p_fu_14319_weight_17_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_17_address0 = grp_subconv_1x1_32_p_fu_14169_weight_17_V_address0.read();
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
        weights_24_24_1x1_V_17_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_17_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_17_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_17_V_ce0.read();
    } else {
        weights_24_24_1x1_V_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_17_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_11)))) {
        weights_24_24_1x1_V_17_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_207_reg_42430.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_183_reg_42194.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_159_reg_41941.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_135_reg_41711.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_111_reg_41446.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_87_reg_41222.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_63_reg_41007.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_39_reg_40777.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_18_address0 = weights_24_24_1x1_V_15_reg_40552.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_18_address0 = grp_subconv_1x1_16_p_fu_14319_weight_18_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_18_address0 = grp_subconv_1x1_32_p_fu_14169_weight_18_V_address0.read();
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
        weights_24_24_1x1_V_18_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_18_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_18_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_18_V_ce0.read();
    } else {
        weights_24_24_1x1_V_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_18_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_12)))) {
        weights_24_24_1x1_V_18_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_198_reg_42385.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_174_reg_42149.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_150_reg_41896.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_126_reg_41666.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_102_reg_41401.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_78_reg_41177.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_54_reg_40962.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_30_reg_40732.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_19_address0 = weights_24_24_1x1_V_6_reg_40507.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_19_address0 = grp_subconv_1x1_16_p_fu_14319_weight_19_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_19_address0 = grp_subconv_1x1_32_p_fu_14169_weight_19_V_address0.read();
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
        weights_24_24_1x1_V_19_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_19_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_19_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_19_V_ce0.read();
    } else {
        weights_24_24_1x1_V_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_19_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_13)))) {
        weights_24_24_1x1_V_19_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_193_reg_42360.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_169_reg_42124.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_145_reg_41871.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_121_reg_41641.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_97_reg_41376.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_73_reg_41152.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_49_reg_40937.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_25_reg_40707.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_1_address0 = weights_24_24_1x1_V_1_reg_40482.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_1_address0 = grp_subconv_1x1_16_p_fu_14319_weight_1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_1_address0 = grp_subconv_1x1_32_p_fu_14169_weight_1_V_address0.read();
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
        weights_24_24_1x1_V_1_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_1_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_1_V_ce0.read();
    } else {
        weights_24_24_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_1)))) {
        weights_24_24_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_209_reg_42440.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_185_reg_42204.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_161_reg_41951.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_137_reg_41721.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_113_reg_41456.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_89_reg_41232.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_65_reg_41017.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_41_reg_40787.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_20_address0 = weights_24_24_1x1_V_17_reg_40562.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_20_address0 = grp_subconv_1x1_16_p_fu_14319_weight_20_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_20_address0 = grp_subconv_1x1_32_p_fu_14169_weight_20_V_address0.read();
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
        weights_24_24_1x1_V_20_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_20_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_20_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_20_V_ce0.read();
    } else {
        weights_24_24_1x1_V_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_20_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_14)))) {
        weights_24_24_1x1_V_20_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_206_reg_42425.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_182_reg_42189.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_158_reg_41936.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_134_reg_41706.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_110_reg_41441.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_86_reg_41217.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_62_reg_41002.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_38_reg_40772.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_21_address0 = weights_24_24_1x1_V_14_reg_40547.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_21_address0 = grp_subconv_1x1_16_p_fu_14319_weight_21_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_21_address0 = grp_subconv_1x1_32_p_fu_14169_weight_21_V_address0.read();
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
        weights_24_24_1x1_V_21_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_21_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_21_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_21_V_ce0.read();
    } else {
        weights_24_24_1x1_V_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_21_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_15)))) {
        weights_24_24_1x1_V_21_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_212_reg_42455.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_188_reg_42219.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_164_reg_41966.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_140_reg_41736.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_116_reg_41471.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_92_reg_41247.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_68_reg_41032.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_44_reg_40802.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_22_address0 = weights_24_24_1x1_V_20_reg_40577.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_22_address0 = grp_subconv_1x1_16_p_fu_14319_weight_22_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_22_address0 = grp_subconv_1x1_32_p_fu_14169_weight_22_V_address0.read();
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
        weights_24_24_1x1_V_22_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_22_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_22_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_22_V_ce0.read();
    } else {
        weights_24_24_1x1_V_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_22_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_16)))) {
        weights_24_24_1x1_V_22_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_211_reg_42450.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_187_reg_42214.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_163_reg_41961.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_139_reg_41731.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_115_reg_41466.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_91_reg_41242.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_67_reg_41027.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_43_reg_40797.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_23_address0 = weights_24_24_1x1_V_19_reg_40572.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_23_address0 = grp_subconv_1x1_16_p_fu_14319_weight_23_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_23_address0 = grp_subconv_1x1_32_p_fu_14169_weight_23_V_address0.read();
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
        weights_24_24_1x1_V_23_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_23_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_23_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_23_V_ce0.read();
    } else {
        weights_24_24_1x1_V_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_23_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co_reg_9681.read()) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co9_reg_9759.read()) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co16_reg_9837.read()) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co22_reg_9904.read()) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co29_reg_9982.read()) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co38_reg_10082.read()) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co44_reg_10160.read()) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co49_reg_10260.read()) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          !esl_seteq<1,5,5>(ap_const_lv5_0, co54_reg_10338.read()) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_1) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_2) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_3) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_4) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_5) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_6) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_7) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_8) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_9) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_A) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_B) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_C) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_D) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_E) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_F) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_10) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_11) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_12) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_13) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_14) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_15) && 
          !esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_16)))) {
        weights_24_24_1x1_V_23_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_214_reg_42465.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_190_reg_42229.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_166_reg_41976.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_142_reg_41746.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_118_reg_41481.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_94_reg_41257.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_70_reg_41042.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_46_reg_40812.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_2_address0 = weights_24_24_1x1_V_22_reg_40587.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_2_address0 = grp_subconv_1x1_16_p_fu_14319_weight_2_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_2_address0 = grp_subconv_1x1_32_p_fu_14169_weight_2_V_address0.read();
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
        weights_24_24_1x1_V_2_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_2_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_2_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_2_V_ce0.read();
    } else {
        weights_24_24_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_2)))) {
        weights_24_24_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_196_reg_42375.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_172_reg_42139.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_148_reg_41886.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_124_reg_41656.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_100_reg_41391.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_76_reg_41167.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_52_reg_40952.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_28_reg_40722.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_3_address0 = weights_24_24_1x1_V_4_reg_40497.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_3_address0 = grp_subconv_1x1_16_p_fu_14319_weight_3_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_3_address0 = grp_subconv_1x1_32_p_fu_14169_weight_3_V_address0.read();
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
        weights_24_24_1x1_V_3_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_3_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_3_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_3_V_ce0.read();
    } else {
        weights_24_24_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_3)))) {
        weights_24_24_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_197_reg_42380.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_173_reg_42144.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_149_reg_41891.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_125_reg_41661.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_101_reg_41396.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_77_reg_41172.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_53_reg_40957.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_29_reg_40727.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_4_address0 = weights_24_24_1x1_V_5_reg_40502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_4_address0 = grp_subconv_1x1_16_p_fu_14319_weight_4_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_4_address0 = grp_subconv_1x1_32_p_fu_14169_weight_4_V_address0.read();
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
        weights_24_24_1x1_V_4_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_4_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_4_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_4_V_ce0.read();
    } else {
        weights_24_24_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_4)))) {
        weights_24_24_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_210_reg_42445.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_186_reg_42209.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_162_reg_41956.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_138_reg_41726.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_114_reg_41461.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_90_reg_41237.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_66_reg_41022.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_42_reg_40792.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_5_address0 = weights_24_24_1x1_V_18_reg_40567.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_5_address0 = grp_subconv_1x1_16_p_fu_14319_weight_5_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_5_address0 = grp_subconv_1x1_32_p_fu_14169_weight_5_V_address0.read();
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
        weights_24_24_1x1_V_5_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_5_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_5_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_5_V_ce0.read();
    } else {
        weights_24_24_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_5)))) {
        weights_24_24_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_215_reg_42470.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_191_reg_42234.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_167_reg_41981.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_143_reg_41751.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_119_reg_41486.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_95_reg_41262.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_71_reg_41047.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_47_reg_40817.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_6_address0 = weights_24_24_1x1_V_23_reg_40592.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_6_address0 = grp_subconv_1x1_16_p_fu_14319_weight_6_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_6_address0 = grp_subconv_1x1_32_p_fu_14169_weight_6_V_address0.read();
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
        weights_24_24_1x1_V_6_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_6_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_6_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_6_V_ce0.read();
    } else {
        weights_24_24_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_6)))) {
        weights_24_24_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_208_reg_42435.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_184_reg_42199.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_160_reg_41946.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_136_reg_41716.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_112_reg_41451.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_88_reg_41227.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_64_reg_41012.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_40_reg_40782.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_7_address0 = weights_24_24_1x1_V_16_reg_40557.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_7_address0 = grp_subconv_1x1_16_p_fu_14319_weight_7_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_7_address0 = grp_subconv_1x1_32_p_fu_14169_weight_7_V_address0.read();
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
        weights_24_24_1x1_V_7_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_7_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_7_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_7_V_ce0.read();
    } else {
        weights_24_24_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_7)))) {
        weights_24_24_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_205_reg_42420.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_181_reg_42184.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_157_reg_41931.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_133_reg_41701.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_109_reg_41436.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_85_reg_41212.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_61_reg_40997.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_37_reg_40767.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_8_address0 = weights_24_24_1x1_V_13_reg_40542.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_8_address0 = grp_subconv_1x1_16_p_fu_14319_weight_8_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_8_address0 = grp_subconv_1x1_32_p_fu_14169_weight_8_V_address0.read();
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
        weights_24_24_1x1_V_8_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_8_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_8_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_8_V_ce0.read();
    } else {
        weights_24_24_1x1_V_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_8)))) {
        weights_24_24_1x1_V_8_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_201_reg_42400.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_177_reg_42164.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_153_reg_41911.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_129_reg_41681.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_105_reg_41416.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_81_reg_41192.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_57_reg_40977.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_33_reg_40747.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_9_address0 = weights_24_24_1x1_V_9_reg_40522.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_9_address0 = grp_subconv_1x1_16_p_fu_14319_weight_9_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_9_address0 = grp_subconv_1x1_32_p_fu_14169_weight_9_V_address0.read();
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
        weights_24_24_1x1_V_9_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_9_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_9_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_9_V_ce0.read();
    } else {
        weights_24_24_1x1_V_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(co_reg_9681.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(co9_reg_9759.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(co16_reg_9837.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(co22_reg_9904.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(co29_reg_9982.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(co38_reg_10082.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(co44_reg_10160.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(co49_reg_10260.read(), ap_const_lv5_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(co54_reg_10338.read(), ap_const_lv5_9)))) {
        weights_24_24_1x1_V_9_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_195_reg_42370.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_171_reg_42134.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_147_reg_41881.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_123_reg_41651.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_99_reg_41386.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_75_reg_41162.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_51_reg_40947.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_27_reg_40717.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        weights_24_24_1x1_V_s_address0 = weights_24_24_1x1_V_3_reg_40492.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state321.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state148.read()))) {
        weights_24_24_1x1_V_s_address0 = grp_subconv_1x1_16_p_fu_14319_weight_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_s_address0 = grp_subconv_1x1_32_p_fu_14169_weight_0_V_address0.read();
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
        weights_24_24_1x1_V_s_ce0 = grp_subconv_1x1_16_p_fu_14319_weight_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        weights_24_24_1x1_V_s_ce0 = grp_subconv_1x1_32_p_fu_14169_weight_0_V_ce0.read();
    } else {
        weights_24_24_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co_reg_9681.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co9_reg_9759.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co16_reg_9837.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co22_reg_9904.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co29_reg_9982.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co38_reg_10082.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state279.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co44_reg_10160.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state309.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co49_reg_10260.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state352.read()) && 
          esl_seteq<1,5,5>(ap_const_lv5_0, co54_reg_10338.read())))) {
        weights_24_24_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_V_s_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1228.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1622_cast_fu_32577_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1133.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1542_cast_fu_31014_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1038.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1463_cast_fu_29463_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state943.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1386_cast_fu_27912_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state848.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1310_cast_fu_26365_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state753.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1234_cast_fu_24818_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1156_cast_fu_23259_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state563.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1080_cast_fu_21716_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_1012_cast_fu_20284_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read())) {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) (tmp_978_cast_fu_19503_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state484.read())) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_16_strid_fu_14946_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state671.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state766.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state861.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state956.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1051.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1146.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1241.read()))) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_8_no_rel_fu_14624_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        weights_48_1_3x3_V_address0 = grp_subconv_3x3_16_strid_1_fu_14566_weight_V_address0.read();
    } else {
        weights_48_1_3x3_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state563.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state753.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state848.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state943.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1038.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1133.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1228.read()))) {
        weights_48_1_3x3_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state484.read())) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_16_strid_fu_14946_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state671.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state766.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state861.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state956.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1051.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1146.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1241.read()))) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_8_no_rel_fu_14624_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state425.read())) {
        weights_48_1_3x3_V_ce0 = grp_subconv_3x3_16_strid_1_fu_14566_weight_V_ce0.read();
    } else {
        weights_48_1_3x3_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state563.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state658.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state753.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state848.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state943.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1038.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1133.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1228.read()))) {
        weights_48_1_3x3_V_we0 = ap_const_logic_1;
    } else {
        weights_48_1_3x3_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_10_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_10_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_10_address0 = grp_subconv_1x1_8_p_fu_13902_weight_10_V_address0.read();
    } else {
        weights_48_48_1x1_V_10_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_10_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_10_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_10_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_10_address1 = grp_subconv_1x1_8_p_fu_13902_weight_10_V_address1.read();
    } else {
        weights_48_48_1x1_V_10_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_10_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_10_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_10_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_10_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_10_V_ce0.read();
    } else {
        weights_48_48_1x1_V_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_10_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_10_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_10_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_10_V_ce1.read();
    } else {
        weights_48_48_1x1_V_10_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_A)))) {
        weights_48_48_1x1_V_10_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_11_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_11_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_11_address0 = grp_subconv_1x1_8_p_fu_13902_weight_11_V_address0.read();
    } else {
        weights_48_48_1x1_V_11_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_11_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_11_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_11_address1 = grp_subconv_1x1_8_p_fu_13902_weight_11_V_address1.read();
    } else {
        weights_48_48_1x1_V_11_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_11_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_11_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_11_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_11_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_11_V_ce0.read();
    } else {
        weights_48_48_1x1_V_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_11_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_11_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_11_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_11_V_ce1.read();
    } else {
        weights_48_48_1x1_V_11_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_B)))) {
        weights_48_48_1x1_V_11_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_12_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_12_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_12_address0 = grp_subconv_1x1_8_p_fu_13902_weight_12_V_address0.read();
    } else {
        weights_48_48_1x1_V_12_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_12_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_12_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_12_address1 = grp_subconv_1x1_8_p_fu_13902_weight_12_V_address1.read();
    } else {
        weights_48_48_1x1_V_12_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_12_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_12_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_12_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_12_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_12_V_ce0.read();
    } else {
        weights_48_48_1x1_V_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_12_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_12_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_12_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_12_V_ce1.read();
    } else {
        weights_48_48_1x1_V_12_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_C)))) {
        weights_48_48_1x1_V_12_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_13_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_13_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_13_address0 = grp_subconv_1x1_8_p_fu_13902_weight_13_V_address0.read();
    } else {
        weights_48_48_1x1_V_13_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_13_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_13_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_13_address1 = grp_subconv_1x1_8_p_fu_13902_weight_13_V_address1.read();
    } else {
        weights_48_48_1x1_V_13_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_13_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_13_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_13_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_13_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_13_V_ce0.read();
    } else {
        weights_48_48_1x1_V_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_13_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_13_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_13_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_13_V_ce1.read();
    } else {
        weights_48_48_1x1_V_13_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_D)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_D)))) {
        weights_48_48_1x1_V_13_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_14_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_14_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_14_address0 = grp_subconv_1x1_8_p_fu_13902_weight_14_V_address0.read();
    } else {
        weights_48_48_1x1_V_14_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_14_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_14_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_14_address1 = grp_subconv_1x1_8_p_fu_13902_weight_14_V_address1.read();
    } else {
        weights_48_48_1x1_V_14_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_14_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_14_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_14_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_14_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_14_V_ce0.read();
    } else {
        weights_48_48_1x1_V_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_14_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_14_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_14_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_14_V_ce1.read();
    } else {
        weights_48_48_1x1_V_14_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_E)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_E)))) {
        weights_48_48_1x1_V_14_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_15_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_15_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_15_address0 = grp_subconv_1x1_8_p_fu_13902_weight_15_V_address0.read();
    } else {
        weights_48_48_1x1_V_15_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_15_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_15_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_15_address1 = grp_subconv_1x1_8_p_fu_13902_weight_15_V_address1.read();
    } else {
        weights_48_48_1x1_V_15_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_15_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_15_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_15_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_15_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_15_V_ce0.read();
    } else {
        weights_48_48_1x1_V_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_15_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_15_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_15_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_15_V_ce1.read();
    } else {
        weights_48_48_1x1_V_15_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_F)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_F)))) {
        weights_48_48_1x1_V_15_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_16_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_16_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_16_address0 = grp_subconv_1x1_8_p_fu_13902_weight_16_V_address0.read();
    } else {
        weights_48_48_1x1_V_16_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_16_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_16_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_16_address1 = grp_subconv_1x1_8_p_fu_13902_weight_16_V_address1.read();
    } else {
        weights_48_48_1x1_V_16_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_16_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_16_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_16_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_16_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_16_V_ce0.read();
    } else {
        weights_48_48_1x1_V_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_16_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_16_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_16_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_16_V_ce1.read();
    } else {
        weights_48_48_1x1_V_16_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_16_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_10)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_10)))) {
        weights_48_48_1x1_V_16_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_17_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_17_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_17_address0 = grp_subconv_1x1_8_p_fu_13902_weight_17_V_address0.read();
    } else {
        weights_48_48_1x1_V_17_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_17_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_17_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_17_address1 = grp_subconv_1x1_8_p_fu_13902_weight_17_V_address1.read();
    } else {
        weights_48_48_1x1_V_17_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_17_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_17_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_17_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_17_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_17_V_ce0.read();
    } else {
        weights_48_48_1x1_V_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_17_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_17_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_17_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_17_V_ce1.read();
    } else {
        weights_48_48_1x1_V_17_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_17_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_11)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_11)))) {
        weights_48_48_1x1_V_17_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_18_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_18_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_18_address0 = grp_subconv_1x1_8_p_fu_13902_weight_18_V_address0.read();
    } else {
        weights_48_48_1x1_V_18_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_18_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_18_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_18_address1 = grp_subconv_1x1_8_p_fu_13902_weight_18_V_address1.read();
    } else {
        weights_48_48_1x1_V_18_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_18_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_18_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_18_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_18_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_18_V_ce0.read();
    } else {
        weights_48_48_1x1_V_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_18_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_18_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_18_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_18_V_ce1.read();
    } else {
        weights_48_48_1x1_V_18_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_18_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_12)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_12)))) {
        weights_48_48_1x1_V_18_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_19_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_19_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_19_address0 = grp_subconv_1x1_8_p_fu_13902_weight_19_V_address0.read();
    } else {
        weights_48_48_1x1_V_19_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_19_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_19_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_19_address1 = grp_subconv_1x1_8_p_fu_13902_weight_19_V_address1.read();
    } else {
        weights_48_48_1x1_V_19_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_19_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_19_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_19_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_19_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_19_V_ce0.read();
    } else {
        weights_48_48_1x1_V_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_19_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_19_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_19_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_19_V_ce1.read();
    } else {
        weights_48_48_1x1_V_19_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_19_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_13)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_13)))) {
        weights_48_48_1x1_V_19_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_1_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_1_address0 = grp_subconv_1x1_8_p_fu_13902_weight_1_V_address0.read();
    } else {
        weights_48_48_1x1_V_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_1_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_1_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_1_address1 = grp_subconv_1x1_8_p_fu_13902_weight_1_V_address1.read();
    } else {
        weights_48_48_1x1_V_1_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_1_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_1_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_1_V_ce0.read();
    } else {
        weights_48_48_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_1_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_1_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_1_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_1_V_ce1.read();
    } else {
        weights_48_48_1x1_V_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_1)))) {
        weights_48_48_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_20_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_20_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_20_address0 = grp_subconv_1x1_8_p_fu_13902_weight_20_V_address0.read();
    } else {
        weights_48_48_1x1_V_20_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_20_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_20_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_20_address1 = grp_subconv_1x1_8_p_fu_13902_weight_20_V_address1.read();
    } else {
        weights_48_48_1x1_V_20_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_20_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_20_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_20_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_20_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_20_V_ce0.read();
    } else {
        weights_48_48_1x1_V_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_20_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_20_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_20_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_20_V_ce1.read();
    } else {
        weights_48_48_1x1_V_20_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_20_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_14)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_14)))) {
        weights_48_48_1x1_V_20_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_21_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_21_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_21_address0 = grp_subconv_1x1_8_p_fu_13902_weight_21_V_address0.read();
    } else {
        weights_48_48_1x1_V_21_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_21_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_21_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_21_address1 = grp_subconv_1x1_8_p_fu_13902_weight_21_V_address1.read();
    } else {
        weights_48_48_1x1_V_21_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_21_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_21_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_21_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_21_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_21_V_ce0.read();
    } else {
        weights_48_48_1x1_V_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_21_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_21_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_21_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_21_V_ce1.read();
    } else {
        weights_48_48_1x1_V_21_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_21_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_15)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_15)))) {
        weights_48_48_1x1_V_21_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_22_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_22_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_22_address0 = grp_subconv_1x1_8_p_fu_13902_weight_22_V_address0.read();
    } else {
        weights_48_48_1x1_V_22_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_22_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_22_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_22_address1 = grp_subconv_1x1_8_p_fu_13902_weight_22_V_address1.read();
    } else {
        weights_48_48_1x1_V_22_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_22_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_22_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_22_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_22_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_22_V_ce0.read();
    } else {
        weights_48_48_1x1_V_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_22_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_22_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_22_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_22_V_ce1.read();
    } else {
        weights_48_48_1x1_V_22_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_22_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2344_fu_19916_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2355_fu_20697_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2366_fu_21344_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2377_fu_22125_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2390_fu_22891_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2401_fu_23672_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2414_fu_24450_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2425_fu_25231_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2438_fu_26001_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2449_fu_26774_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2462_fu_27540_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2473_fu_28321_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2486_fu_29087_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2497_fu_29872_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2510_fu_30646_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2521_fu_31431_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2534_fu_32209_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2545_fu_32998_p1.read())))) {
        weights_48_48_1x1_V_22_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_23_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_23_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_23_address0 = grp_subconv_1x1_8_p_fu_13902_weight_23_V_address0.read();
    } else {
        weights_48_48_1x1_V_23_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_23_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_23_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_23_address1 = grp_subconv_1x1_8_p_fu_13902_weight_23_V_address1.read();
    } else {
        weights_48_48_1x1_V_23_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_23_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_23_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_23_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_23_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_23_V_ce0.read();
    } else {
        weights_48_48_1x1_V_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_23_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_23_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_23_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_23_V_ce1.read();
    } else {
        weights_48_48_1x1_V_23_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_23_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2333_fu_19135_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_16)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2344_fu_19916_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2344_fu_19916_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2355_fu_20697_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2355_fu_20697_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2366_fu_21344_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2366_fu_21344_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2377_fu_22125_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2377_fu_22125_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2390_fu_22891_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2390_fu_22891_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2401_fu_23672_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2401_fu_23672_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2414_fu_24450_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2414_fu_24450_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2425_fu_25231_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2425_fu_25231_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2438_fu_26001_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2438_fu_26001_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2449_fu_26774_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2449_fu_26774_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2462_fu_27540_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2462_fu_27540_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2473_fu_28321_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2473_fu_28321_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2486_fu_29087_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2486_fu_29087_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2497_fu_29872_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2497_fu_29872_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2510_fu_30646_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2510_fu_30646_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2521_fu_31431_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2521_fu_31431_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2534_fu_32209_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2534_fu_32209_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2545_fu_32998_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2545_fu_32998_p1.read())))) {
        weights_48_48_1x1_V_23_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_2_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_2_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_2_address0 = grp_subconv_1x1_8_p_fu_13902_weight_2_V_address0.read();
    } else {
        weights_48_48_1x1_V_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_2_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_2_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_2_address1 = grp_subconv_1x1_8_p_fu_13902_weight_2_V_address1.read();
    } else {
        weights_48_48_1x1_V_2_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_2_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_2_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_2_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_2_V_ce0.read();
    } else {
        weights_48_48_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_2_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_2_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_2_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_2_V_ce1.read();
    } else {
        weights_48_48_1x1_V_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_2)))) {
        weights_48_48_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_3_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_3_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_3_address0 = grp_subconv_1x1_8_p_fu_13902_weight_3_V_address0.read();
    } else {
        weights_48_48_1x1_V_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_3_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_3_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_3_address1 = grp_subconv_1x1_8_p_fu_13902_weight_3_V_address1.read();
    } else {
        weights_48_48_1x1_V_3_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_3_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_3_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_3_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_3_V_ce0.read();
    } else {
        weights_48_48_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_3_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_3_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_3_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_3_V_ce1.read();
    } else {
        weights_48_48_1x1_V_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_3)))) {
        weights_48_48_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_4_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_4_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_4_address0 = grp_subconv_1x1_8_p_fu_13902_weight_4_V_address0.read();
    } else {
        weights_48_48_1x1_V_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_4_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_4_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_4_address1 = grp_subconv_1x1_8_p_fu_13902_weight_4_V_address1.read();
    } else {
        weights_48_48_1x1_V_4_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_4_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_4_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_4_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_4_V_ce0.read();
    } else {
        weights_48_48_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_4_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_4_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_4_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_4_V_ce1.read();
    } else {
        weights_48_48_1x1_V_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_4)))) {
        weights_48_48_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_5_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_5_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_5_address0 = grp_subconv_1x1_8_p_fu_13902_weight_5_V_address0.read();
    } else {
        weights_48_48_1x1_V_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_5_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_5_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_5_address1 = grp_subconv_1x1_8_p_fu_13902_weight_5_V_address1.read();
    } else {
        weights_48_48_1x1_V_5_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_5_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_5_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_5_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_5_V_ce0.read();
    } else {
        weights_48_48_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_5_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_5_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_5_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_5_V_ce1.read();
    } else {
        weights_48_48_1x1_V_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_5)))) {
        weights_48_48_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_6_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_6_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_6_address0 = grp_subconv_1x1_8_p_fu_13902_weight_6_V_address0.read();
    } else {
        weights_48_48_1x1_V_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_6_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_6_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_6_address1 = grp_subconv_1x1_8_p_fu_13902_weight_6_V_address1.read();
    } else {
        weights_48_48_1x1_V_6_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_6_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_6_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_6_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_6_V_ce0.read();
    } else {
        weights_48_48_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_6_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_6_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_6_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_6_V_ce1.read();
    } else {
        weights_48_48_1x1_V_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_6)))) {
        weights_48_48_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_7_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_7_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_7_address0 = grp_subconv_1x1_8_p_fu_13902_weight_7_V_address0.read();
    } else {
        weights_48_48_1x1_V_7_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_7_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_7_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_7_address1 = grp_subconv_1x1_8_p_fu_13902_weight_7_V_address1.read();
    } else {
        weights_48_48_1x1_V_7_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_7_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_7_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_7_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_7_V_ce0.read();
    } else {
        weights_48_48_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_7_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_7_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_7_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_7_V_ce1.read();
    } else {
        weights_48_48_1x1_V_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_7)))) {
        weights_48_48_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_8_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_8_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_8_address0 = grp_subconv_1x1_8_p_fu_13902_weight_8_V_address0.read();
    } else {
        weights_48_48_1x1_V_8_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_8_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_8_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_8_address1 = grp_subconv_1x1_8_p_fu_13902_weight_8_V_address1.read();
    } else {
        weights_48_48_1x1_V_8_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_8_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_8_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_8_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_8_V_ce0.read();
    } else {
        weights_48_48_1x1_V_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_8_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_8_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_8_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_8_V_ce1.read();
    } else {
        weights_48_48_1x1_V_8_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_8)))) {
        weights_48_48_1x1_V_8_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_9_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_9_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_9_address0 = grp_subconv_1x1_8_p_fu_13902_weight_9_V_address0.read();
    } else {
        weights_48_48_1x1_V_9_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_9_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_9_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_9_address1 = grp_subconv_1x1_8_p_fu_13902_weight_9_V_address1.read();
    } else {
        weights_48_48_1x1_V_9_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_9_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_9_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_9_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_9_V_ce0.read();
    } else {
        weights_48_48_1x1_V_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_9_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_9_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_9_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_9_V_ce1.read();
    } else {
        weights_48_48_1x1_V_9_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(tmp_2333_fu_19135_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(tmp_2344_fu_19916_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(tmp_2355_fu_20697_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(tmp_2366_fu_21344_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(tmp_2377_fu_22125_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(tmp_2390_fu_22891_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(tmp_2401_fu_23672_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(tmp_2414_fu_24450_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(tmp_2425_fu_25231_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(tmp_2438_fu_26001_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(tmp_2449_fu_26774_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(tmp_2462_fu_27540_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(tmp_2473_fu_28321_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(tmp_2486_fu_29087_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(tmp_2497_fu_29872_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(tmp_2510_fu_30646_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(tmp_2521_fu_31431_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(tmp_2534_fu_32209_p1.read(), ap_const_lv6_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(tmp_2545_fu_32998_p1.read(), ap_const_lv6_9)))) {
        weights_48_48_1x1_V_9_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1647_cast_fu_33002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1610_cast_fu_32213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1569_cast_fu_31435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1530_cast_fu_30650_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1489_cast_fu_29876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1451_cast_fu_29091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1412_cast_fu_28325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1374_cast_fu_27544_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1335_cast_fu_26778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1298_cast_fu_26005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1259_cast_fu_25235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1222_cast_fu_24454_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1181_cast_fu_23676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1144_cast_fu_22895_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1105_cast_fu_22129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1068_cast_fu_21348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1040_cast_fu_20701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_1000_cast_fu_19920_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) (tmp_966_cast_fu_19139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_s_address0 = grp_subconv_1x1_16p_p_fu_14006_weight_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_s_address0 = grp_subconv_1x1_8_p_fu_13902_weight_0_V_address0.read();
    } else {
        weights_48_48_1x1_V_s_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_s_address1 = grp_subconv_1x1_16p_p_fu_14006_weight_0_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_s_address1 = grp_subconv_1x1_8_p_fu_13902_weight_0_V_address1.read();
    } else {
        weights_48_48_1x1_V_s_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()))) {
        weights_48_48_1x1_V_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_s_ce0 = grp_subconv_1x1_16p_p_fu_14006_weight_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_s_ce0 = grp_subconv_1x1_8_p_fu_13902_weight_0_V_ce0.read();
    } else {
        weights_48_48_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state397.read())) {
        weights_48_48_1x1_V_s_ce1 = grp_subconv_1x1_16p_p_fu_14006_weight_0_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state605.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state700.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state795.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state833.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state890.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state928.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state985.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1023.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1080.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1118.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1175.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1270.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state454.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state513.read()))) {
        weights_48_48_1x1_V_s_ce1 = grp_subconv_1x1_8_p_fu_13902_weight_0_V_ce1.read();
    } else {
        weights_48_48_1x1_V_s_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2333_fu_19135_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state440.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2344_fu_19916_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2355_fu_20697_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state534.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2366_fu_21344_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2377_fu_22125_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state629.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2390_fu_22891_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state686.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2401_fu_23672_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state724.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2414_fu_24450_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state781.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2425_fu_25231_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2438_fu_26001_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state876.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2449_fu_26774_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state914.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2462_fu_27540_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2473_fu_28321_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1009.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2486_fu_29087_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2497_fu_29872_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1104.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2510_fu_30646_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1161.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2521_fu_31431_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1199.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2534_fu_32209_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2545_fu_32998_p1.read())))) {
        weights_48_48_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_V_s_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1668.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1931_cast_fu_39144_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1571.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1856_cast_fu_37621_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1474.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1780_cast_fu_36082_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1380.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1714_cast_fu_34686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1320.read())) {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) (tmp_1681_cast_fu_33913_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1393.read())) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_8_stride_fu_14934_weight_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_8_stride_1_fu_14508_weight_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        weights_96_1_3x3_V_address0 = grp_subconv_3x3_4_no_rel_fu_14450_weight_V_address0.read();
    } else {
        weights_96_1_3x3_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1320.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1380.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1474.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1571.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1668.read()))) {
        weights_96_1_3x3_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1393.read())) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_8_stride_fu_14934_weight_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1333.read())) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_8_stride_1_fu_14508_weight_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1584.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1681.read()))) {
        weights_96_1_3x3_V_ce0 = grp_subconv_3x3_4_no_rel_fu_14450_weight_V_ce0.read();
    } else {
        weights_96_1_3x3_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1320.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1380.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1474.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1571.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1668.read()))) {
        weights_96_1_3x3_V_we0 = ap_const_logic_1;
    } else {
        weights_96_1_3x3_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_10_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_10_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_10_address0 = grp_subconv_1x1_4_p_fu_13694_weight_10_V_address0.read();
    } else {
        weights_96_96_1x1_V_10_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_10_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_10_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_10_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_10_address1 = grp_subconv_1x1_4_p_fu_13694_weight_10_V_address1.read();
    } else {
        weights_96_96_1x1_V_10_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_10_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_10_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_10_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_10_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_10_V_ce0.read();
    } else {
        weights_96_96_1x1_V_10_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_10_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_10_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_10_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_10_V_ce1.read();
    } else {
        weights_96_96_1x1_V_10_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_10_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_10_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_11_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_11_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_11_address0 = grp_subconv_1x1_4_p_fu_13694_weight_11_V_address0.read();
    } else {
        weights_96_96_1x1_V_11_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_11_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_11_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_11_address1 = grp_subconv_1x1_4_p_fu_13694_weight_11_V_address1.read();
    } else {
        weights_96_96_1x1_V_11_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_11_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_11_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_11_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_11_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_11_V_ce0.read();
    } else {
        weights_96_96_1x1_V_11_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_11_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_11_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_11_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_11_V_ce1.read();
    } else {
        weights_96_96_1x1_V_11_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_11_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_11_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_12_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_12_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_12_address0 = grp_subconv_1x1_4_p_fu_13694_weight_12_V_address0.read();
    } else {
        weights_96_96_1x1_V_12_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_12_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_12_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_12_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_12_address1 = grp_subconv_1x1_4_p_fu_13694_weight_12_V_address1.read();
    } else {
        weights_96_96_1x1_V_12_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_12_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_12_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_12_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_12_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_12_V_ce0.read();
    } else {
        weights_96_96_1x1_V_12_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_12_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_12_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_12_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_12_V_ce1.read();
    } else {
        weights_96_96_1x1_V_12_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_12_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_12_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_13_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_13_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_13_address0 = grp_subconv_1x1_4_p_fu_13694_weight_13_V_address0.read();
    } else {
        weights_96_96_1x1_V_13_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_13_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_13_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_13_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_13_address1 = grp_subconv_1x1_4_p_fu_13694_weight_13_V_address1.read();
    } else {
        weights_96_96_1x1_V_13_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_13_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_13_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_13_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_13_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_13_V_ce0.read();
    } else {
        weights_96_96_1x1_V_13_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_13_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_13_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_13_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_13_V_ce1.read();
    } else {
        weights_96_96_1x1_V_13_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_13_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_13_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_14_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_14_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_14_address0 = grp_subconv_1x1_4_p_fu_13694_weight_14_V_address0.read();
    } else {
        weights_96_96_1x1_V_14_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_14_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_14_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_14_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_14_address1 = grp_subconv_1x1_4_p_fu_13694_weight_14_V_address1.read();
    } else {
        weights_96_96_1x1_V_14_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_14_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_14_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_14_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_14_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_14_V_ce0.read();
    } else {
        weights_96_96_1x1_V_14_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_14_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_14_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_14_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_14_V_ce1.read();
    } else {
        weights_96_96_1x1_V_14_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_14_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_14_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_15_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_15_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_15_address0 = grp_subconv_1x1_4_p_fu_13694_weight_15_V_address0.read();
    } else {
        weights_96_96_1x1_V_15_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_15_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_15_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_15_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_15_address1 = grp_subconv_1x1_4_p_fu_13694_weight_15_V_address1.read();
    } else {
        weights_96_96_1x1_V_15_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_15_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_15_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_15_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_15_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_15_V_ce0.read();
    } else {
        weights_96_96_1x1_V_15_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_15_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_15_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_15_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_15_V_ce1.read();
    } else {
        weights_96_96_1x1_V_15_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_15_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_15_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_16_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_16_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_16_address0 = grp_subconv_1x1_4_p_fu_13694_weight_16_V_address0.read();
    } else {
        weights_96_96_1x1_V_16_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_16_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_16_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_16_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_16_address1 = grp_subconv_1x1_4_p_fu_13694_weight_16_V_address1.read();
    } else {
        weights_96_96_1x1_V_16_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_16_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_16_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_16_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_16_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_16_V_ce0.read();
    } else {
        weights_96_96_1x1_V_16_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_16_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_16_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_16_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_16_V_ce1.read();
    } else {
        weights_96_96_1x1_V_16_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_16_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_16_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_16_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_17_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_17_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_17_address0 = grp_subconv_1x1_4_p_fu_13694_weight_17_V_address0.read();
    } else {
        weights_96_96_1x1_V_17_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_17_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_17_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_17_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_17_address1 = grp_subconv_1x1_4_p_fu_13694_weight_17_V_address1.read();
    } else {
        weights_96_96_1x1_V_17_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_17_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_17_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_17_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_17_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_17_V_ce0.read();
    } else {
        weights_96_96_1x1_V_17_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_17_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_17_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_17_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_17_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_17_V_ce1.read();
    } else {
        weights_96_96_1x1_V_17_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_17_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_17_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_17_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_18_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_18_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_18_address0 = grp_subconv_1x1_4_p_fu_13694_weight_18_V_address0.read();
    } else {
        weights_96_96_1x1_V_18_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_18_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_18_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_18_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_18_address1 = grp_subconv_1x1_4_p_fu_13694_weight_18_V_address1.read();
    } else {
        weights_96_96_1x1_V_18_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_18_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_18_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_18_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_18_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_18_V_ce0.read();
    } else {
        weights_96_96_1x1_V_18_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_18_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_18_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_18_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_18_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_18_V_ce1.read();
    } else {
        weights_96_96_1x1_V_18_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_18_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_18_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_18_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_19_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_19_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_19_address0 = grp_subconv_1x1_4_p_fu_13694_weight_19_V_address0.read();
    } else {
        weights_96_96_1x1_V_19_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_19_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_19_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_19_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_19_address1 = grp_subconv_1x1_4_p_fu_13694_weight_19_V_address1.read();
    } else {
        weights_96_96_1x1_V_19_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_19_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_19_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_19_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_19_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_19_V_ce0.read();
    } else {
        weights_96_96_1x1_V_19_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_19_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_19_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_19_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_19_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_19_V_ce1.read();
    } else {
        weights_96_96_1x1_V_19_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_19_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_19_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_19_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_1_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_1_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_1_address0 = grp_subconv_1x1_4_p_fu_13694_weight_1_V_address0.read();
    } else {
        weights_96_96_1x1_V_1_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_1_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_1_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_1_address1 = grp_subconv_1x1_4_p_fu_13694_weight_1_V_address1.read();
    } else {
        weights_96_96_1x1_V_1_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_1_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_1_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_1_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_1_V_ce0.read();
    } else {
        weights_96_96_1x1_V_1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_1_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_1_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_1_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_1_V_ce1.read();
    } else {
        weights_96_96_1x1_V_1_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_1_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_20_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_20_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_20_address0 = grp_subconv_1x1_4_p_fu_13694_weight_20_V_address0.read();
    } else {
        weights_96_96_1x1_V_20_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_20_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_20_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_20_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_20_address1 = grp_subconv_1x1_4_p_fu_13694_weight_20_V_address1.read();
    } else {
        weights_96_96_1x1_V_20_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_20_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_20_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_20_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_20_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_20_V_ce0.read();
    } else {
        weights_96_96_1x1_V_20_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_20_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_20_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_20_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_20_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_20_V_ce1.read();
    } else {
        weights_96_96_1x1_V_20_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_20_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_20_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_20_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_21_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_21_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_21_address0 = grp_subconv_1x1_4_p_fu_13694_weight_21_V_address0.read();
    } else {
        weights_96_96_1x1_V_21_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_21_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_21_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_21_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_21_address1 = grp_subconv_1x1_4_p_fu_13694_weight_21_V_address1.read();
    } else {
        weights_96_96_1x1_V_21_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_21_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_21_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_21_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_21_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_21_V_ce0.read();
    } else {
        weights_96_96_1x1_V_21_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_21_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_21_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_21_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_21_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_21_V_ce1.read();
    } else {
        weights_96_96_1x1_V_21_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_21_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_21_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_21_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_22_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_22_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_22_address0 = grp_subconv_1x1_4_p_fu_13694_weight_22_V_address0.read();
    } else {
        weights_96_96_1x1_V_22_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_22_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_22_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_22_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_22_address1 = grp_subconv_1x1_4_p_fu_13694_weight_22_V_address1.read();
    } else {
        weights_96_96_1x1_V_22_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_22_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_22_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_22_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_22_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_22_V_ce0.read();
    } else {
        weights_96_96_1x1_V_22_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_22_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_22_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_22_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_22_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_22_V_ce1.read();
    } else {
        weights_96_96_1x1_V_22_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_22_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_22_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_22_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_23_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_23_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_23_address0 = grp_subconv_1x1_4_p_fu_13694_weight_23_V_address0.read();
    } else {
        weights_96_96_1x1_V_23_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_23_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_23_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_23_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_23_address1 = grp_subconv_1x1_4_p_fu_13694_weight_23_V_address1.read();
    } else {
        weights_96_96_1x1_V_23_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_23_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_23_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_23_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_23_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_23_V_ce0.read();
    } else {
        weights_96_96_1x1_V_23_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_23_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_23_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_23_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_23_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_23_V_ce1.read();
    } else {
        weights_96_96_1x1_V_23_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_23_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2556_fu_33545_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2569_fu_34314_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2582_fu_35083_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2593_fu_35718_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2606_fu_36487_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2619_fu_37245_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2632_fu_38018_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2645_fu_38776_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_1, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_A, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_B, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_C, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_D, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_E, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_F, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_10, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_11, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_12, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_13, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_14, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_15, tmp_2658_fu_39541_p1.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_23_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_23_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_2_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_2_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_2_address0 = grp_subconv_1x1_4_p_fu_13694_weight_2_V_address0.read();
    } else {
        weights_96_96_1x1_V_2_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_2_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_2_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_2_address1 = grp_subconv_1x1_4_p_fu_13694_weight_2_V_address1.read();
    } else {
        weights_96_96_1x1_V_2_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_2_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_2_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_2_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_2_V_ce0.read();
    } else {
        weights_96_96_1x1_V_2_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_2_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_2_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_2_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_2_V_ce1.read();
    } else {
        weights_96_96_1x1_V_2_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_2, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_2_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_2_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_3_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_3_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_3_address0 = grp_subconv_1x1_4_p_fu_13694_weight_3_V_address0.read();
    } else {
        weights_96_96_1x1_V_3_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_3_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_3_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_3_address1 = grp_subconv_1x1_4_p_fu_13694_weight_3_V_address1.read();
    } else {
        weights_96_96_1x1_V_3_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_3_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_3_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_3_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_3_V_ce0.read();
    } else {
        weights_96_96_1x1_V_3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_3_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_3_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_3_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_3_V_ce1.read();
    } else {
        weights_96_96_1x1_V_3_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_3, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_3_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_4_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_4_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_4_address0 = grp_subconv_1x1_4_p_fu_13694_weight_4_V_address0.read();
    } else {
        weights_96_96_1x1_V_4_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_4_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_4_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_4_address1 = grp_subconv_1x1_4_p_fu_13694_weight_4_V_address1.read();
    } else {
        weights_96_96_1x1_V_4_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_4_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_4_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_4_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_4_V_ce0.read();
    } else {
        weights_96_96_1x1_V_4_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_4_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_4_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_4_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_4_V_ce1.read();
    } else {
        weights_96_96_1x1_V_4_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_4, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_4_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_4_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_5_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_5_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_5_address0 = grp_subconv_1x1_4_p_fu_13694_weight_5_V_address0.read();
    } else {
        weights_96_96_1x1_V_5_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_5_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_5_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_5_address1 = grp_subconv_1x1_4_p_fu_13694_weight_5_V_address1.read();
    } else {
        weights_96_96_1x1_V_5_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_5_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_5_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_5_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_5_V_ce0.read();
    } else {
        weights_96_96_1x1_V_5_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_5_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_5_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_5_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_5_V_ce1.read();
    } else {
        weights_96_96_1x1_V_5_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_5, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_5_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_5_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_6_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_6_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_6_address0 = grp_subconv_1x1_4_p_fu_13694_weight_6_V_address0.read();
    } else {
        weights_96_96_1x1_V_6_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_6_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_6_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_6_address1 = grp_subconv_1x1_4_p_fu_13694_weight_6_V_address1.read();
    } else {
        weights_96_96_1x1_V_6_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_6_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_6_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_6_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_6_V_ce0.read();
    } else {
        weights_96_96_1x1_V_6_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_6_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_6_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_6_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_6_V_ce1.read();
    } else {
        weights_96_96_1x1_V_6_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_6, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_6_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_6_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_7_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_7_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_7_address0 = grp_subconv_1x1_4_p_fu_13694_weight_7_V_address0.read();
    } else {
        weights_96_96_1x1_V_7_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_7_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_7_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_7_address1 = grp_subconv_1x1_4_p_fu_13694_weight_7_V_address1.read();
    } else {
        weights_96_96_1x1_V_7_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_7_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_7_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_7_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_7_V_ce0.read();
    } else {
        weights_96_96_1x1_V_7_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_7_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_7_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_7_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_7_V_ce1.read();
    } else {
        weights_96_96_1x1_V_7_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_7, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_7_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_7_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_8_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_8_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_8_address0 = grp_subconv_1x1_4_p_fu_13694_weight_8_V_address0.read();
    } else {
        weights_96_96_1x1_V_8_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_8_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_8_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_8_address1 = grp_subconv_1x1_4_p_fu_13694_weight_8_V_address1.read();
    } else {
        weights_96_96_1x1_V_8_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_8_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_8_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_8_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_8_V_ce0.read();
    } else {
        weights_96_96_1x1_V_8_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_8_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_8_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_8_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_8_V_ce1.read();
    } else {
        weights_96_96_1x1_V_8_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_8, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_8_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_8_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_9_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_9_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_9_address0 = grp_subconv_1x1_4_p_fu_13694_weight_9_V_address0.read();
    } else {
        weights_96_96_1x1_V_9_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_9_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_9_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_9_address1 = grp_subconv_1x1_4_p_fu_13694_weight_9_V_address1.read();
    } else {
        weights_96_96_1x1_V_9_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_9_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_9_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_9_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_9_V_ce0.read();
    } else {
        weights_96_96_1x1_V_9_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_9_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_9_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_9_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_9_V_ce1.read();
    } else {
        weights_96_96_1x1_V_9_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_9, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_9_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_9_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1955_cast_fu_39545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1919_cast_fu_38780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1881_cast_fu_38022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1844_cast_fu_37249_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1806_cast_fu_36491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1768_cast_fu_35722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1741_cast_fu_35087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1702_cast_fu_34318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) (tmp_1669_cast_fu_33549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_s_address0 = grp_subconv_1x1_8p_p_fu_13798_weight_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_s_address0 = grp_subconv_1x1_4_p_fu_13694_weight_0_V_address0.read();
    } else {
        weights_96_96_1x1_V_s_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_s_address1 = grp_subconv_1x1_8p_p_fu_13798_weight_0_V_address1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_s_address1 = grp_subconv_1x1_4_p_fu_13694_weight_0_V_address1.read();
    } else {
        weights_96_96_1x1_V_s_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()))) {
        weights_96_96_1x1_V_s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_s_ce0 = grp_subconv_1x1_8p_p_fu_13798_weight_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_s_ce0 = grp_subconv_1x1_4_p_fu_13694_weight_0_V_ce0.read();
    } else {
        weights_96_96_1x1_V_s_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1305.read())) {
        weights_96_96_1x1_V_s_ce1 = grp_subconv_1x1_8p_p_fu_13798_weight_0_V_ce1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1517.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1556.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1653.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1710.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1423.read()))) {
        weights_96_96_1x1_V_s_ce1 = grp_subconv_1x1_4_p_fu_13694_weight_0_V_ce1.read();
    } else {
        weights_96_96_1x1_V_s_ce1 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_V_s_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2556_fu_33545_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1349.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2569_fu_34314_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1409.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2582_fu_35083_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1445.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2593_fu_35718_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1503.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2606_fu_36487_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1542.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2619_fu_37245_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1600.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2632_fu_38018_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1639.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2645_fu_38776_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1697.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_2658_fu_39541_p1.read())))) {
        weights_96_96_1x1_V_s_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_V_s_we0 = ap_const_logic_0;
    }
}

}

