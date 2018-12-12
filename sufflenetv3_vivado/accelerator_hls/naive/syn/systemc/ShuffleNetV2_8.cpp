#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_tmp_521_fu_18404_p2() {
    tmp_521_fu_18404_p2 = (!tmp_520_fu_18398_p2.read().is_01() || !tmp_664_cast_reg_32003.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_520_fu_18398_p2.read()) + sc_biguint<7>(tmp_664_cast_reg_32003.read()));
}

void ShuffleNetV2::thread_tmp_522_cast_fu_15274_p1() {
    tmp_522_cast_fu_15274_p1 = esl_sext<32,7>(tmp_386_reg_30935.read());
}

void ShuffleNetV2::thread_tmp_522_fu_18683_p2() {
    tmp_522_fu_18683_p2 = (!co116_cast_fu_18667_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co116_cast_fu_18667_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_523_cast_fu_18620_p1() {
    tmp_523_cast_fu_18620_p1 = esl_zext<10,4>(h75_reg_5237.read());
}

void ShuffleNetV2::thread_tmp_523_fu_9361_p2() {
    tmp_523_fu_9361_p2 = (!tmp_495_reg_28895.read().is_01() || !tmp_196_cast1_fu_9343_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_495_reg_28895.read()) + sc_biguint<9>(tmp_196_cast1_fu_9343_p1.read()));
}

void ShuffleNetV2::thread_tmp_524_fu_18842_p2() {
    tmp_524_fu_18842_p2 = (!p_shl132_cast_fu_18826_p1.read().is_01() || !p_shl133_cast_fu_18838_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl132_cast_fu_18826_p1.read()) - sc_biguint<7>(p_shl133_cast_fu_18838_p1.read()));
}

void ShuffleNetV2::thread_tmp_525_cast1_fu_18729_p1() {
    tmp_525_cast1_fu_18729_p1 = esl_zext<11,4>(h77_reg_5270.read());
}

void ShuffleNetV2::thread_tmp_525_cast_fu_18725_p1() {
    tmp_525_cast_fu_18725_p1 = esl_zext<10,4>(h77_reg_5270.read());
}

void ShuffleNetV2::thread_tmp_525_fu_9508_p2() {
    tmp_525_fu_9508_p2 = (!tmp_998_cast_reg_28939.read().is_01() || !tmp_200_cast_fu_9504_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_998_cast_reg_28939.read()) + sc_biguint<15>(tmp_200_cast_fu_9504_p1.read()));
}

void ShuffleNetV2::thread_tmp_526_cast_fu_7874_p1() {
    tmp_526_cast_fu_7874_p1 = esl_sext<9,8>(tmp_276_fu_7868_p2.read());
}

void ShuffleNetV2::thread_tmp_526_fu_9518_p2() {
    tmp_526_fu_9518_p2 = (!tmp_510_reg_28944.read().is_01() || !tmp_200_cast1_fu_9500_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_510_reg_28944.read()) + sc_biguint<11>(tmp_200_cast1_fu_9500_p1.read()));
}

void ShuffleNetV2::thread_tmp_527_cast_fu_18653_p1() {
    tmp_527_cast_fu_18653_p1 = esl_zext<14,4>(w75_reg_5248.read());
}

void ShuffleNetV2::thread_tmp_527_fu_9571_p3() {
    tmp_527_fu_9571_p3 = esl_concat<5,4>(co44_reg_3540.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_528_cast_fu_18878_p1() {
    tmp_528_cast_fu_18878_p1 = esl_zext<18,5>(ci52_reg_5303.read());
}

void ShuffleNetV2::thread_tmp_528_fu_9664_p3() {
    tmp_528_fu_9664_p3 = esl_concat<6,4>(tmp_201_fu_9658_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_529_cast_cast_fu_15045_p1() {
    tmp_529_cast_cast_fu_15045_p1 = esl_sext<9,8>(tmp_391_fu_15039_p2.read());
}

void ShuffleNetV2::thread_tmp_529_fu_18882_p2() {
    tmp_529_fu_18882_p2 = (!tmp_524_reg_32202.read().is_01() || !ci52_cast_fu_18862_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_524_reg_32202.read()) + sc_biguint<7>(ci52_cast_fu_18862_p1.read()));
}

void ShuffleNetV2::thread_tmp_530_cast_fu_18887_p1() {
    tmp_530_cast_fu_18887_p1 = esl_sext<13,7>(tmp_529_fu_18882_p2.read());
}

void ShuffleNetV2::thread_tmp_530_fu_9676_p3() {
    tmp_530_fu_9676_p3 = esl_concat<5,4>(co46_reg_3573.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_531_cast1_fu_18771_p1() {
    tmp_531_cast1_fu_18771_p1 = esl_zext<13,4>(w77_reg_5281.read());
}

void ShuffleNetV2::thread_tmp_531_cast_fu_18775_p1() {
    tmp_531_cast_fu_18775_p1 = esl_zext<14,4>(w77_reg_5281.read());
}

void ShuffleNetV2::thread_tmp_531_fu_9599_p2() {
    tmp_531_fu_9599_p2 = (!tmp_1007_cast_reg_28988.read().is_01() || !tmp_202_cast_fu_9595_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1007_cast_reg_28988.read()) + sc_biguint<10>(tmp_202_cast_fu_9595_p1.read()));
}

void ShuffleNetV2::thread_tmp_532_fu_19124_p2() {
    tmp_532_fu_19124_p2 = (!p_shl134_cast_fu_19108_p1.read().is_01() || !p_shl135_cast_fu_19120_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl134_cast_fu_19108_p1.read()) - sc_biguint<7>(p_shl135_cast_fu_19120_p1.read()));
}

void ShuffleNetV2::thread_tmp_533_fu_19140_p2() {
    tmp_533_fu_19140_p2 = (!i105_cast1_reg_32259.read().is_01() || !tmp42_fu_19134_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i105_cast1_reg_32259.read()) + sc_biguint<11>(tmp42_fu_19134_p2.read()));
}

void ShuffleNetV2::thread_tmp_534_cast_fu_7899_p1() {
    tmp_534_cast_fu_7899_p1 = esl_sext<15,9>(tmp_278_fu_7894_p2.read());
}

void ShuffleNetV2::thread_tmp_534_fu_9795_p3() {
    tmp_534_fu_9795_p3 = esl_concat<8,5>(tmp_203_fu_9789_p2.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_535_fu_19150_p1() {
    tmp_535_fu_19150_p1 = esl_zext<64,11>(tmp_533_reg_32280.read());
}

void ShuffleNetV2::thread_tmp_536_cast_cast_fu_15596_p1() {
    tmp_536_cast_cast_fu_15596_p1 = esl_sext<8,7>(tmp_397_fu_15590_p2.read());
}

void ShuffleNetV2::thread_tmp_536_fu_19145_p2() {
    tmp_536_fu_19145_p2 = (!tmp_532_fu_19124_p2.read().is_01() || !i105_cast_reg_32254.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_532_fu_19124_p2.read()) + sc_biguint<7>(i105_cast_reg_32254.read()));
}

void ShuffleNetV2::thread_tmp_537_fu_9807_p3() {
    tmp_537_fu_9807_p3 = esl_concat<8,3>(tmp_203_fu_9789_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_538_cast_fu_15616_p1() {
    tmp_538_cast_fu_15616_p1 = esl_sext<10,8>(tmp_398_reg_31070.read());
}

void ShuffleNetV2::thread_tmp_538_fu_19157_p1() {
    tmp_538_fu_19157_p1 = esl_zext<64,32>(tmp_702_cast_fu_19154_p1.read());
}

void ShuffleNetV2::thread_tmp_539_fu_9819_p2() {
    tmp_539_fu_9819_p2 = (!p_shl317_cast_fu_9803_p1.read().is_01() || !p_shl318_cast_fu_9815_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl317_cast_fu_9803_p1.read()) - sc_biguint<14>(p_shl318_cast_fu_9815_p1.read()));
}

void ShuffleNetV2::thread_tmp_540_cast_fu_15624_p1() {
    tmp_540_cast_fu_15624_p1 = esl_sext<32,7>(tmp_400_reg_31075.read());
}

void ShuffleNetV2::thread_tmp_540_fu_9829_p3() {
    tmp_540_fu_9829_p3 = esl_concat<5,5>(co48_reg_3606.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_541_fu_18931_p2() {
    tmp_541_fu_18931_p2 = (!p_shl136_cast_fu_18915_p1.read().is_01() || !p_shl137_cast_fu_18927_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl136_cast_fu_18915_p1.read()) - sc_biguint<8>(p_shl137_cast_fu_18927_p1.read()));
}

void ShuffleNetV2::thread_tmp_542_fu_18947_p2() {
    tmp_542_fu_18947_p2 = (!tmp41_fu_18941_p2.read().is_01() || !co118_cast_reg_32189.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp41_fu_18941_p2.read()) + sc_biguint<11>(co118_cast_reg_32189.read()));
}

void ShuffleNetV2::thread_tmp_543_fu_18976_p2() {
    tmp_543_fu_18976_p2 = (!p_shl138_cast_fu_18960_p1.read().is_01() || !p_shl139_cast_fu_18972_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl138_cast_fu_18960_p1.read()) - sc_biguint<7>(p_shl139_cast_fu_18972_p1.read()));
}

void ShuffleNetV2::thread_tmp_544_cast_fu_15692_p1() {
    tmp_544_cast_fu_15692_p1 = esl_zext<7,4>(p_lshr_f8_cast_fu_15682_p4.read());
}

void ShuffleNetV2::thread_tmp_544_fu_18982_p2() {
    tmp_544_fu_18982_p2 = (!tmp_543_fu_18976_p2.read().is_01() || !tmp_694_cast_reg_32207.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_543_fu_18976_p2.read()) + sc_biguint<7>(tmp_694_cast_reg_32207.read()));
}

void ShuffleNetV2::thread_tmp_545_cast1_fu_19194_p1() {
    tmp_545_cast1_fu_19194_p1 = esl_zext<36,2>(w79_reg_5358.read());
}

void ShuffleNetV2::thread_tmp_545_cast_fu_19198_p1() {
    tmp_545_cast_fu_19198_p1 = esl_zext<13,2>(w79_reg_5358.read());
}

void ShuffleNetV2::thread_tmp_545_fu_9841_p3() {
    tmp_545_fu_9841_p3 = esl_concat<5,3>(co48_reg_3606.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_546_fu_19560_p2() {
    tmp_546_fu_19560_p2 = (!p_shl142_cast_fu_19544_p1.read().is_01() || !p_shl143_cast_fu_19556_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl142_cast_fu_19544_p1.read()) - sc_biguint<7>(p_shl143_cast_fu_19556_p1.read()));
}

void ShuffleNetV2::thread_tmp_547_fu_19478_p2() {
    tmp_547_fu_19478_p2 = (!p_shl140_cast_fu_19462_p1.read().is_01() || !p_shl141_cast_fu_19474_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl140_cast_fu_19462_p1.read()) - sc_biguint<7>(p_shl141_cast_fu_19474_p1.read()));
}

void ShuffleNetV2::thread_tmp_548_fu_19494_p2() {
    tmp_548_fu_19494_p2 = (!i109_cast1_reg_32399.read().is_01() || !tmp44_fu_19488_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i109_cast1_reg_32399.read()) + sc_biguint<11>(tmp44_fu_19488_p2.read()));
}

void ShuffleNetV2::thread_tmp_549_fu_19504_p1() {
    tmp_549_fu_19504_p1 = esl_zext<64,11>(tmp_548_reg_32420.read());
}

void ShuffleNetV2::thread_tmp_550_cast_fu_15992_p1() {
    tmp_550_cast_fu_15992_p1 = esl_sext<32,7>(tmp_416_reg_31181.read());
}

void ShuffleNetV2::thread_tmp_550_fu_19499_p2() {
    tmp_550_fu_19499_p2 = (!tmp_547_fu_19478_p2.read().is_01() || !i109_cast_reg_32394.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_547_fu_19478_p2.read()) + sc_biguint<7>(i109_cast_reg_32394.read()));
}

void ShuffleNetV2::thread_tmp_551_fu_19511_p1() {
    tmp_551_fu_19511_p1 = esl_zext<64,32>(tmp_720_cast_fu_19508_p1.read());
}

void ShuffleNetV2::thread_tmp_552_cast1_fu_19214_p1() {
    tmp_552_cast1_fu_19214_p1 = esl_zext<10,2>(h79_reg_5369.read());
}

void ShuffleNetV2::thread_tmp_552_cast_fu_19218_p1() {
    tmp_552_cast_fu_19218_p1 = esl_zext<15,2>(h79_reg_5369.read());
}

void ShuffleNetV2::thread_tmp_552_fu_9853_p2() {
    tmp_552_fu_9853_p2 = (!p_shl315_cast_fu_9837_p1.read().is_01() || !p_shl316_cast_fu_9849_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl315_cast_fu_9837_p1.read()) - sc_biguint<11>(p_shl316_cast_fu_9849_p1.read()));
}

void ShuffleNetV2::thread_tmp_553_cast_fu_19596_p1() {
    tmp_553_cast_fu_19596_p1 = esl_zext<18,5>(ci54_reg_5424.read());
}

void ShuffleNetV2::thread_tmp_553_fu_9708_p2() {
    tmp_553_fu_9708_p2 = (!tmp_204_cast_fu_9704_p1.read().is_01() || !tmp_1011_cast_reg_29037.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_204_cast_fu_9704_p1.read()) + sc_biguint<10>(tmp_1011_cast_reg_29037.read()));
}

void ShuffleNetV2::thread_tmp_554_fu_19600_p2() {
    tmp_554_fu_19600_p2 = (!tmp_546_reg_32448.read().is_01() || !ci54_cast_fu_19580_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_546_reg_32448.read()) + sc_biguint<7>(ci54_cast_fu_19580_p1.read()));
}

void ShuffleNetV2::thread_tmp_555_cast1_fu_19605_p1() {
    tmp_555_cast1_fu_19605_p1 = esl_sext<13,7>(tmp_554_fu_19600_p2.read());
}

void ShuffleNetV2::thread_tmp_555_cast_fu_15388_p1() {
    tmp_555_cast_fu_15388_p1 = esl_sext<9,7>(tmp_407_fu_15382_p2.read());
}

void ShuffleNetV2::thread_tmp_555_fu_9721_p2() {
    tmp_555_fu_9721_p2 = (!tmp_204_cast1_fu_9700_p1.read().is_01() || !tmp_1009_cast_reg_29032.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_204_cast1_fu_9700_p1.read()) + sc_biguint<11>(tmp_1009_cast_reg_29032.read()));
}

void ShuffleNetV2::thread_tmp_556_fu_9632_p2() {
    tmp_556_fu_9632_p2 = (!tmp_1014_cast_reg_29001.read().is_01() || !tmp_205_cast_fu_9628_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1014_cast_reg_29001.read()) + sc_biguint<15>(tmp_205_cast_fu_9628_p1.read()));
}

void ShuffleNetV2::thread_tmp_557_fu_19262_p2() {
    tmp_557_fu_19262_p2 = (!p_shl146_cast_fu_19246_p1.read().is_01() || !p_shl147_cast_fu_19258_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl146_cast_fu_19246_p1.read()) - sc_biguint<7>(p_shl147_cast_fu_19258_p1.read()));
}

void ShuffleNetV2::thread_tmp_558_fu_19278_p2() {
    tmp_558_fu_19278_p2 = (!co121_cast382_cast_reg_32300.read().is_01() || !tmp43_fu_19272_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(co121_cast382_cast_reg_32300.read()) + sc_biguint<8>(tmp43_fu_19272_p2.read()));
}

void ShuffleNetV2::thread_tmp_559_cast_fu_15460_p1() {
    tmp_559_cast_fu_15460_p1 = esl_sext<32,7>(tmp_411_reg_31013.read());
}

void ShuffleNetV2::thread_tmp_559_fu_9879_p2() {
    tmp_559_fu_9879_p2 = (!tmp_1017_cast_reg_29086.read().is_01() || !tmp_209_cast_fu_9875_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_1017_cast_reg_29086.read()) + sc_biguint<15>(tmp_209_cast_fu_9875_p1.read()));
}

void ShuffleNetV2::thread_tmp_560_cast_fu_19291_p1() {
    tmp_560_cast_fu_19291_p1 = esl_zext<12,9>(tmp_737_cast_fu_19288_p1.read());
}

void ShuffleNetV2::thread_tmp_560_fu_9889_p2() {
    tmp_560_fu_9889_p2 = (!tmp_552_reg_29091.read().is_01() || !tmp_209_cast1_fu_9871_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_552_reg_29091.read()) + sc_biguint<11>(tmp_209_cast1_fu_9871_p1.read()));
}

void ShuffleNetV2::thread_tmp_561_fu_19283_p2() {
    tmp_561_fu_19283_p2 = (!tmp_557_fu_19262_p2.read().is_01() || !co121_cast_reg_32295.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_557_fu_19262_p2.read()) + sc_biguint<7>(co121_cast_reg_32295.read()));
}

void ShuffleNetV2::thread_tmp_562_cast1_fu_19351_p1() {
    tmp_562_cast1_fu_19351_p1 = esl_zext<35,32>(tmp_739_cast_fu_19348_p1.read());
}

void ShuffleNetV2::thread_tmp_562_cast_fu_15771_p1() {
    tmp_562_cast_fu_15771_p1 = esl_sext<11,8>(tmp_418_fu_15765_p2.read());
}

void ShuffleNetV2::thread_tmp_562_fu_9754_p2() {
    tmp_562_fu_9754_p2 = (!tmp_1023_cast1_reg_29050.read().is_01() || !tmp_210_cast_fu_9750_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1023_cast1_reg_29050.read()) + sc_biguint<14>(tmp_210_cast_fu_9750_p1.read()));
}

void ShuffleNetV2::thread_tmp_563_fu_19842_p2() {
    tmp_563_fu_19842_p2 = (!p_shl144_cast_fu_19826_p1.read().is_01() || !p_shl145_cast_fu_19838_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl144_cast_fu_19826_p1.read()) - sc_biguint<7>(p_shl145_cast_fu_19838_p1.read()));
}

void ShuffleNetV2::thread_tmp_564_fu_19858_p2() {
    tmp_564_fu_19858_p2 = (!i111_cast1_reg_32505.read().is_01() || !tmp46_fu_19852_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i111_cast1_reg_32505.read()) + sc_biguint<11>(tmp46_fu_19852_p2.read()));
}

void ShuffleNetV2::thread_tmp_565_fu_19868_p1() {
    tmp_565_fu_19868_p1 = esl_zext<64,11>(tmp_564_reg_32526.read());
}

void ShuffleNetV2::thread_tmp_566_fu_19863_p2() {
    tmp_566_fu_19863_p2 = (!tmp_563_fu_19842_p2.read().is_01() || !i111_cast_reg_32500.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_563_fu_19842_p2.read()) + sc_biguint<7>(i111_cast_reg_32500.read()));
}

void ShuffleNetV2::thread_tmp_567_fu_19875_p1() {
    tmp_567_fu_19875_p1 = esl_zext<64,32>(tmp_730_cast_fu_19872_p1.read());
}

void ShuffleNetV2::thread_tmp_568_fu_19649_p2() {
    tmp_568_fu_19649_p2 = (!p_shl148_cast_fu_19633_p1.read().is_01() || !p_shl149_cast_fu_19645_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl148_cast_fu_19633_p1.read()) - sc_biguint<8>(p_shl149_cast_fu_19645_p1.read()));
}

void ShuffleNetV2::thread_tmp_569_fu_19665_p2() {
    tmp_569_fu_19665_p2 = (!tmp45_fu_19659_p2.read().is_01() || !co123_cast_reg_32435.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp45_fu_19659_p2.read()) + sc_biguint<11>(co123_cast_reg_32435.read()));
}

void ShuffleNetV2::thread_tmp_570_fu_19694_p2() {
    tmp_570_fu_19694_p2 = (!p_shl150_cast_fu_19678_p1.read().is_01() || !p_shl151_cast_fu_19690_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl150_cast_fu_19678_p1.read()) - sc_biguint<7>(p_shl151_cast_fu_19690_p1.read()));
}

void ShuffleNetV2::thread_tmp_571_fu_19700_p2() {
    tmp_571_fu_19700_p2 = (!tmp_570_fu_19694_p2.read().is_01() || !tmp_724_cast_reg_32453.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_570_fu_19694_p2.read()) + sc_biguint<7>(tmp_724_cast_reg_32453.read()));
}

void ShuffleNetV2::thread_tmp_572_fu_19979_p2() {
    tmp_572_fu_19979_p2 = (!co126_cast_fu_19963_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co126_cast_fu_19963_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_573_cast_fu_19916_p1() {
    tmp_573_cast_fu_19916_p1 = esl_zext<10,4>(h81_reg_5479.read());
}

void ShuffleNetV2::thread_tmp_573_fu_9759_p2() {
    tmp_573_fu_9759_p2 = (!tmp_1026_cast_reg_29055.read().is_01() || !tmp_210_cast1_fu_9746_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1026_cast_reg_29055.read()) + sc_biguint<15>(tmp_210_cast1_fu_9746_p1.read()));
}

void ShuffleNetV2::thread_tmp_574_cast_fu_16274_p1() {
    tmp_574_cast_fu_16274_p1 = esl_zext<7,4>(p_lshr_f9_cast_fu_16264_p4.read());
}

void ShuffleNetV2::thread_tmp_574_fu_20138_p2() {
    tmp_574_fu_20138_p2 = (!p_shl152_cast_fu_20122_p1.read().is_01() || !p_shl153_cast_fu_20134_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl152_cast_fu_20122_p1.read()) - sc_biguint<7>(p_shl153_cast_fu_20134_p1.read()));
}

void ShuffleNetV2::thread_tmp_575_cast1_fu_20021_p1() {
    tmp_575_cast1_fu_20021_p1 = esl_zext<10,4>(h83_reg_5512.read());
}

void ShuffleNetV2::thread_tmp_575_cast_fu_20025_p1() {
    tmp_575_cast_fu_20025_p1 = esl_zext<11,4>(h83_reg_5512.read());
}

void ShuffleNetV2::thread_tmp_575_fu_9956_p4() {
    tmp_575_fu_9956_p4 = esl_concat<6,2>(esl_concat<1,5>(ap_const_lv1_1, co50_reg_3640.read()), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_576_fu_9966_p1() {
    tmp_576_fu_9966_p1 = esl_sext<9,8>(tmp_575_fu_9956_p4.read());
}

void ShuffleNetV2::thread_tmp_577_cast_fu_19949_p1() {
    tmp_577_cast_fu_19949_p1 = esl_zext<14,4>(w81_reg_5490.read());
}

void ShuffleNetV2::thread_tmp_577_fu_9974_p2() {
    tmp_577_fu_9974_p2 = (!p_shl320_cast_fu_9970_p1.read().is_01() || !tmp_212_cast_fu_9952_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl320_cast_fu_9970_p1.read()) - sc_biguint<10>(tmp_212_cast_fu_9952_p1.read()));
}

void ShuffleNetV2::thread_tmp_578_cast1_fu_20174_p1() {
    tmp_578_cast1_fu_20174_p1 = esl_zext<18,5>(ci56_reg_5545.read());
}

void ShuffleNetV2::thread_tmp_578_cast_fu_16546_p1() {
    tmp_578_cast_fu_16546_p1 = esl_sext<11,7>(tmp_432_fu_16540_p2.read());
}

void ShuffleNetV2::thread_tmp_578_fu_9988_p3() {
    tmp_578_fu_9988_p3 = esl_concat<5,2>(co50_reg_3640.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_579_fu_20178_p2() {
    tmp_579_fu_20178_p2 = (!tmp_574_reg_32652.read().is_01() || !ci56_cast_fu_20158_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_574_reg_32652.read()) + sc_biguint<7>(ci56_cast_fu_20158_p1.read()));
}

void ShuffleNetV2::thread_tmp_580_cast_fu_20183_p1() {
    tmp_580_cast_fu_20183_p1 = esl_sext<13,7>(tmp_579_fu_20178_p2.read());
}

void ShuffleNetV2::thread_tmp_580_fu_10000_p2() {
    tmp_580_fu_10000_p2 = (!p_shl319_cast_fu_9996_p1.read().is_01() || !tmp_213_cast_fu_9984_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl319_cast_fu_9996_p1.read()) - sc_biguint<8>(tmp_213_cast_fu_9984_p1.read()));
}

void ShuffleNetV2::thread_tmp_581_cast1_fu_20067_p1() {
    tmp_581_cast1_fu_20067_p1 = esl_zext<13,4>(w83_reg_5523.read());
}

void ShuffleNetV2::thread_tmp_581_cast_fu_20071_p1() {
    tmp_581_cast_fu_20071_p1 = esl_zext<14,4>(w83_reg_5523.read());
}

void ShuffleNetV2::thread_tmp_581_fu_10030_p2() {
    tmp_581_fu_10030_p2 = (!tmp_1034_cast1_reg_29135.read().is_01() || !tmp_217_cast_fu_10026_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp_1034_cast1_reg_29135.read()) + sc_biguint<11>(tmp_217_cast_fu_10026_p1.read()));
}

void ShuffleNetV2::thread_tmp_582_cast_fu_16570_p1() {
    tmp_582_cast_fu_16570_p1 = esl_sext<32,7>(tmp_436_reg_31385.read());
}

void ShuffleNetV2::thread_tmp_582_fu_20428_p2() {
    tmp_582_fu_20428_p2 = (!p_shl154_cast_fu_20412_p1.read().is_01() || !p_shl155_cast_fu_20424_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl154_cast_fu_20412_p1.read()) - sc_biguint<7>(p_shl155_cast_fu_20424_p1.read()));
}

void ShuffleNetV2::thread_tmp_583_fu_20444_p2() {
    tmp_583_fu_20444_p2 = (!i117_cast1_reg_32709.read().is_01() || !tmp48_fu_20438_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i117_cast1_reg_32709.read()) + sc_biguint<11>(tmp48_fu_20438_p2.read()));
}

void ShuffleNetV2::thread_tmp_584_fu_10051_p2() {
    tmp_584_fu_10051_p2 = (!p_shl322_cast_fu_10047_p1.read().is_01() || !tmp_1037_cast_fu_10035_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl322_cast_fu_10047_p1.read()) - sc_bigint<15>(tmp_1037_cast_fu_10035_p1.read()));
}

void ShuffleNetV2::thread_tmp_585_fu_20454_p1() {
    tmp_585_fu_20454_p1 = esl_zext<64,11>(tmp_583_reg_32730.read());
}

void ShuffleNetV2::thread_tmp_586_fu_20449_p2() {
    tmp_586_fu_20449_p2 = (!tmp_582_fu_20428_p2.read().is_01() || !i117_cast_reg_32704.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_582_fu_20428_p2.read()) + sc_biguint<7>(i117_cast_reg_32704.read()));
}

void ShuffleNetV2::thread_tmp_587_cast_fu_8063_p1() {
    tmp_587_cast_fu_8063_p1 = esl_sext<14,13>(tmp_311_fu_8057_p2.read());
}

void ShuffleNetV2::thread_tmp_587_fu_10057_p2() {
    tmp_587_fu_10057_p2 = (!tmp_1036_cast_reg_29140.read().is_01() || !tmp_217_cast1_fu_10022_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_1036_cast_reg_29140.read()) + sc_biguint<9>(tmp_217_cast1_fu_10022_p1.read()));
}

void ShuffleNetV2::thread_tmp_588_fu_20461_p1() {
    tmp_588_fu_20461_p1 = esl_zext<64,32>(tmp_762_cast_fu_20458_p1.read());
}

void ShuffleNetV2::thread_tmp_589_cast_fu_16353_p1() {
    tmp_589_cast_fu_16353_p1 = esl_sext<11,8>(tmp_441_fu_16347_p2.read());
}

void ShuffleNetV2::thread_tmp_589_fu_10068_p2() {
    tmp_589_fu_10068_p2 = (!tmp_121_fu_10062_p2.read().is_01() || !tmp_587_fu_10057_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_121_fu_10062_p2.read()) - sc_biguint<9>(tmp_587_fu_10057_p2.read()));
}

void ShuffleNetV2::thread_tmp_590_fu_10157_p4() {
    tmp_590_fu_10157_p4 = esl_concat<7,5>(esl_concat<2,5>(ap_const_lv2_2, co52_reg_3685.read()), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_591_fu_20227_p2() {
    tmp_591_fu_20227_p2 = (!p_shl156_cast_fu_20211_p1.read().is_01() || !p_shl157_cast_fu_20223_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl156_cast_fu_20211_p1.read()) - sc_biguint<8>(p_shl157_cast_fu_20223_p1.read()));
}

void ShuffleNetV2::thread_tmp_592_fu_20243_p2() {
    tmp_592_fu_20243_p2 = (!tmp47_fu_20237_p2.read().is_01() || !co128_cast354_cast_reg_32639.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp47_fu_20237_p2.read()) + sc_biguint<10>(co128_cast354_cast_reg_32639.read()));
}

void ShuffleNetV2::thread_tmp_593_fu_20272_p2() {
    tmp_593_fu_20272_p2 = (!p_shl158_cast_fu_20256_p1.read().is_01() || !p_shl159_cast_fu_20268_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl158_cast_fu_20256_p1.read()) - sc_biguint<7>(p_shl159_cast_fu_20268_p1.read()));
}

void ShuffleNetV2::thread_tmp_594_fu_20278_p2() {
    tmp_594_fu_20278_p2 = (!tmp_593_fu_20272_p2.read().is_01() || !tmp_754_cast_reg_32657.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_593_fu_20272_p2.read()) + sc_biguint<7>(tmp_754_cast_reg_32657.read()));
}

void ShuffleNetV2::thread_tmp_595_cast1_fu_20498_p1() {
    tmp_595_cast1_fu_20498_p1 = esl_zext<36,2>(w85_reg_5600.read());
}

void ShuffleNetV2::thread_tmp_595_cast_fu_20502_p1() {
    tmp_595_cast_fu_20502_p1 = esl_zext<14,2>(w85_reg_5600.read());
}

void ShuffleNetV2::thread_tmp_595_fu_10167_p1() {
    tmp_595_fu_10167_p1 = esl_sext<13,12>(tmp_590_fu_10157_p4.read());
}

void ShuffleNetV2::thread_tmp_596_cast_fu_16892_p1() {
    tmp_596_cast_fu_16892_p1 = esl_sext<11,7>(tmp_447_fu_16886_p2.read());
}

void ShuffleNetV2::thread_tmp_596_fu_20860_p2() {
    tmp_596_fu_20860_p2 = (!p_shl162_cast_fu_20844_p1.read().is_01() || !p_shl163_cast_fu_20856_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl162_cast_fu_20844_p1.read()) - sc_biguint<7>(p_shl163_cast_fu_20856_p1.read()));
}

void ShuffleNetV2::thread_tmp_597_fu_20778_p2() {
    tmp_597_fu_20778_p2 = (!p_shl160_cast_fu_20762_p1.read().is_01() || !p_shl161_cast_fu_20774_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl160_cast_fu_20762_p1.read()) - sc_biguint<7>(p_shl161_cast_fu_20774_p1.read()));
}

void ShuffleNetV2::thread_tmp_598_fu_20794_p2() {
    tmp_598_fu_20794_p2 = (!i121_cast1_reg_32849.read().is_01() || !tmp50_fu_20788_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(i121_cast1_reg_32849.read()) + sc_biguint<11>(tmp50_fu_20788_p2.read()));
}

void ShuffleNetV2::thread_tmp_599_fu_20804_p1() {
    tmp_599_fu_20804_p1 = esl_zext<64,11>(tmp_598_reg_32870.read());
}

void ShuffleNetV2::thread_tmp_600_cast_fu_16916_p1() {
    tmp_600_cast_fu_16916_p1 = esl_sext<32,7>(tmp_450_reg_31525.read());
}

void ShuffleNetV2::thread_tmp_600_fu_20799_p2() {
    tmp_600_fu_20799_p2 = (!tmp_597_fu_20778_p2.read().is_01() || !i121_cast_reg_32844.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_597_fu_20778_p2.read()) + sc_biguint<7>(i121_cast_reg_32844.read()));
}

void ShuffleNetV2::thread_tmp_601_fu_20811_p1() {
    tmp_601_fu_20811_p1 = esl_zext<64,32>(tmp_780_cast_fu_20808_p1.read());
}

void ShuffleNetV2::thread_tmp_602_cast1_fu_20518_p1() {
    tmp_602_cast1_fu_20518_p1 = esl_zext<10,2>(h85_reg_5611.read());
}

void ShuffleNetV2::thread_tmp_602_cast_fu_20522_p1() {
    tmp_602_cast_fu_20522_p1 = esl_zext<15,2>(h85_reg_5611.read());
}

void ShuffleNetV2::thread_tmp_602_fu_10175_p4() {
    tmp_602_fu_10175_p4 = esl_concat<7,3>(esl_concat<2,5>(ap_const_lv2_2, co52_reg_3685.read()), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_603_cast_fu_20896_p1() {
    tmp_603_cast_fu_20896_p1 = esl_zext<18,5>(ci58_reg_5666.read());
}

void ShuffleNetV2::thread_tmp_603_fu_10185_p1() {
    tmp_603_fu_10185_p1 = esl_sext<11,10>(tmp_602_fu_10175_p4.read());
}

void ShuffleNetV2::thread_tmp_604_cast_fu_16984_p1() {
    tmp_604_cast_fu_16984_p1 = esl_zext<7,4>(p_lshr_f10_cast_fu_16974_p4.read());
}

void ShuffleNetV2::thread_tmp_604_fu_20900_p2() {
    tmp_604_fu_20900_p2 = (!tmp_596_reg_32898.read().is_01() || !ci58_cast_fu_20880_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_596_reg_32898.read()) + sc_biguint<7>(ci58_cast_fu_20880_p1.read()));
}

void ShuffleNetV2::thread_tmp_605_cast_fu_20905_p1() {
    tmp_605_cast_fu_20905_p1 = esl_sext<13,7>(tmp_604_fu_20900_p2.read());
}

void ShuffleNetV2::thread_tmp_605_fu_10193_p2() {
    tmp_605_fu_10193_p2 = (!p_shl325_cast_fu_10171_p1.read().is_01() || !p_shl326_cast_fu_10189_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl325_cast_fu_10171_p1.read()) - sc_biguint<14>(p_shl326_cast_fu_10189_p1.read()));
}

void ShuffleNetV2::thread_tmp_606_cast_fu_17256_p1() {
    tmp_606_cast_fu_17256_p1 = esl_sext<11,7>(tmp_463_fu_17250_p2.read());
}

void ShuffleNetV2::thread_tmp_606_fu_10203_p3() {
    tmp_606_fu_10203_p3 = esl_concat<5,5>(co52_reg_3685.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_607_fu_20566_p2() {
    tmp_607_fu_20566_p2 = (!p_shl166_cast_fu_20550_p1.read().is_01() || !p_shl167_cast_fu_20562_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl166_cast_fu_20550_p1.read()) - sc_biguint<7>(p_shl167_cast_fu_20562_p1.read()));
}

void ShuffleNetV2::thread_tmp_608_fu_20582_p2() {
    tmp_608_fu_20582_p2 = (!co131_cast1_reg_32750.read().is_01() || !tmp49_fu_20576_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co131_cast1_reg_32750.read()) + sc_biguint<10>(tmp49_fu_20576_p2.read()));
}

void ShuffleNetV2::thread_tmp_609_cast_fu_7963_p1() {
    tmp_609_cast_fu_7963_p1 = esl_zext<64,15>(tmp_319_fu_7958_p2.read());
}

void ShuffleNetV2::thread_tmp_609_fu_10215_p3() {
    tmp_609_fu_10215_p3 = esl_concat<5,3>(co52_reg_3685.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_610_cast1_fu_20592_p1() {
    tmp_610_cast1_fu_20592_p1 = esl_zext<13,10>(tmp_608_reg_32807.read());
}

void ShuffleNetV2::thread_tmp_610_cast_fu_17280_p1() {
    tmp_610_cast_fu_17280_p1 = esl_sext<32,7>(tmp_466_reg_31631.read());
}

void ShuffleNetV2::thread_tmp_610_fu_10227_p2() {
    tmp_610_fu_10227_p2 = (!p_shl323_cast_fu_10211_p1.read().is_01() || !p_shl324_cast_fu_10223_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl323_cast_fu_10211_p1.read()) - sc_biguint<11>(p_shl324_cast_fu_10223_p1.read()));
}

void ShuffleNetV2::thread_tmp_611_fu_20587_p2() {
    tmp_611_fu_20587_p2 = (!tmp_607_fu_20566_p2.read().is_01() || !co131_cast_reg_32745.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_607_fu_20566_p2.read()) + sc_biguint<7>(co131_cast_reg_32745.read()));
}

void ShuffleNetV2::thread_tmp_612_cast_fu_20651_p1() {
    tmp_612_cast_fu_20651_p1 = esl_zext<35,32>(tmp_799_cast_fu_20648_p1.read());
}

void ShuffleNetV2::thread_tmp_612_fu_10094_p2() {
    tmp_612_fu_10094_p2 = (!tmp_584_reg_29153.read().is_01() || !tmp_218_cast_fu_10090_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_584_reg_29153.read()) + sc_biguint<15>(tmp_218_cast_fu_10090_p1.read()));
}

void ShuffleNetV2::thread_tmp_613_fu_21150_p2() {
    tmp_613_fu_21150_p2 = (!p_shl164_cast_fu_21134_p1.read().is_01() || !p_shl165_cast_fu_21146_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl164_cast_fu_21134_p1.read()) - sc_biguint<7>(p_shl165_cast_fu_21146_p1.read()));
}

void ShuffleNetV2::thread_tmp_614_fu_21166_p2() {
    tmp_614_fu_21166_p2 = (!i123_cast321_cast_reg_32955.read().is_01() || !tmp52_fu_21160_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i123_cast321_cast_reg_32955.read()) + sc_biguint<10>(tmp52_fu_21160_p2.read()));
}

void ShuffleNetV2::thread_tmp_615_cast_fu_16684_p1() {
    tmp_615_cast_fu_16684_p1 = esl_sext<9,7>(tmp_457_fu_16678_p2.read());
}

void ShuffleNetV2::thread_tmp_615_fu_21179_p1() {
    tmp_615_fu_21179_p1 = esl_zext<64,11>(tmp_788_cast_fu_21176_p1.read());
}

void ShuffleNetV2::thread_tmp_616_fu_21171_p2() {
    tmp_616_fu_21171_p2 = (!tmp_613_fu_21150_p2.read().is_01() || !i123_cast_reg_32950.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_613_fu_21150_p2.read()) + sc_biguint<7>(i123_cast_reg_32950.read()));
}

void ShuffleNetV2::thread_tmp_617_fu_21187_p1() {
    tmp_617_fu_21187_p1 = esl_zext<64,32>(tmp_790_cast_fu_21184_p1.read());
}

void ShuffleNetV2::thread_tmp_618_fu_20949_p2() {
    tmp_618_fu_20949_p2 = (!p_shl168_cast_fu_20933_p1.read().is_01() || !p_shl169_cast_fu_20945_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl168_cast_fu_20933_p1.read()) - sc_biguint<8>(p_shl169_cast_fu_20945_p1.read()));
}

void ShuffleNetV2::thread_tmp_619_cast_fu_16756_p1() {
    tmp_619_cast_fu_16756_p1 = esl_sext<32,7>(tmp_461_reg_31463.read());
}

void ShuffleNetV2::thread_tmp_619_fu_20965_p2() {
    tmp_619_fu_20965_p2 = (!tmp51_fu_20959_p2.read().is_01() || !co133_cast331_cast_reg_32885.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp51_fu_20959_p2.read()) + sc_biguint<10>(co133_cast331_cast_reg_32885.read()));
}

void ShuffleNetV2::thread_tmp_620_fu_20994_p2() {
    tmp_620_fu_20994_p2 = (!p_shl170_cast_fu_20978_p1.read().is_01() || !p_shl171_cast_fu_20990_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl170_cast_fu_20978_p1.read()) - sc_biguint<7>(p_shl171_cast_fu_20990_p1.read()));
}

void ShuffleNetV2::thread_tmp_621_fu_21000_p2() {
    tmp_621_fu_21000_p2 = (!tmp_620_fu_20994_p2.read().is_01() || !tmp_784_cast_reg_32903.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_620_fu_20994_p2.read()) + sc_biguint<7>(tmp_784_cast_reg_32903.read()));
}

void ShuffleNetV2::thread_tmp_622_cast_fu_17063_p1() {
    tmp_622_cast_fu_17063_p1 = esl_sext<11,8>(tmp_468_fu_17057_p2.read());
}

void ShuffleNetV2::thread_tmp_622_fu_21291_p2() {
    tmp_622_fu_21291_p2 = (!co136_cast_fu_21275_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(co136_cast_fu_21275_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void ShuffleNetV2::thread_tmp_623_cast_fu_21228_p1() {
    tmp_623_cast_fu_21228_p1 = esl_zext<10,4>(h87_reg_5721.read());
}

void ShuffleNetV2::thread_tmp_623_fu_10104_p2() {
    tmp_623_fu_10104_p2 = (!tmp_589_reg_29158.read().is_01() || !tmp_218_cast1_fu_10086_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_589_reg_29158.read()) + sc_biguint<9>(tmp_218_cast1_fu_10086_p1.read()));
}

void ShuffleNetV2::thread_tmp_624_fu_21450_p2() {
    tmp_624_fu_21450_p2 = (!p_shl172_cast_fu_21434_p1.read().is_01() || !p_shl173_cast_fu_21446_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl172_cast_fu_21434_p1.read()) - sc_biguint<7>(p_shl173_cast_fu_21446_p1.read()));
}

void ShuffleNetV2::thread_tmp_625_cast1_fu_21333_p1() {
    tmp_625_cast1_fu_21333_p1 = esl_zext<10,4>(h89_reg_5754.read());
}

void ShuffleNetV2::thread_tmp_625_cast_fu_21337_p1() {
    tmp_625_cast_fu_21337_p1 = esl_zext<11,4>(h89_reg_5754.read());
}

void ShuffleNetV2::thread_tmp_625_fu_10253_p2() {
    tmp_625_fu_10253_p2 = (!tmp_1047_cast_reg_29202.read().is_01() || !tmp_222_cast_fu_10249_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_1047_cast_reg_29202.read()) + sc_biguint<15>(tmp_222_cast_fu_10249_p1.read()));
}

void ShuffleNetV2::thread_tmp_626_cast_fu_7973_p1() {
    tmp_626_cast_fu_7973_p1 = esl_zext<64,9>(tmp_330_reg_28431.read());
}

void ShuffleNetV2::thread_tmp_626_fu_10263_p2() {
    tmp_626_fu_10263_p2 = (!tmp_610_reg_29207.read().is_01() || !tmp_222_cast1_fu_10245_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_610_reg_29207.read()) + sc_biguint<11>(tmp_222_cast1_fu_10245_p1.read()));
}

void ShuffleNetV2::thread_tmp_627_cast_fu_21261_p1() {
    tmp_627_cast_fu_21261_p1 = esl_zext<14,4>(w87_reg_5732.read());
}

void ShuffleNetV2::thread_tmp_627_fu_10316_p3() {
    tmp_627_fu_10316_p3 = esl_concat<5,4>(co54_reg_3719.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_628_cast_fu_21486_p1() {
    tmp_628_cast_fu_21486_p1 = esl_zext<18,5>(ci60_reg_5787.read());
}

void ShuffleNetV2::thread_tmp_628_fu_10344_p2() {
    tmp_628_fu_10344_p2 = (!tmp_1056_cast_reg_29251.read().is_01() || !tmp_224_cast_fu_10340_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1056_cast_reg_29251.read()) + sc_biguint<10>(tmp_224_cast_fu_10340_p1.read()));
}

void ShuffleNetV2::thread_tmp_629_fu_21490_p2() {
    tmp_629_fu_21490_p2 = (!tmp_624_reg_33102.read().is_01() || !ci60_cast_fu_21470_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_624_reg_33102.read()) + sc_biguint<7>(ci60_cast_fu_21470_p1.read()));
}

void ShuffleNetV2::thread_tmp_630_cast_fu_21495_p1() {
    tmp_630_cast_fu_21495_p1 = esl_sext<13,7>(tmp_629_fu_21490_p2.read());
}

void ShuffleNetV2::thread_tmp_630_fu_10377_p2() {
    tmp_630_fu_10377_p2 = (!tmp_1061_cast_reg_29264.read().is_01() || !tmp_228_cast_fu_10373_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_1061_cast_reg_29264.read()) + sc_biguint<15>(tmp_228_cast_fu_10373_p1.read()));
}

void ShuffleNetV2::thread_tmp_631_cast1_fu_21379_p1() {
    tmp_631_cast1_fu_21379_p1 = esl_zext<13,4>(w89_reg_5765.read());
}

void ShuffleNetV2::thread_tmp_631_cast_fu_21383_p1() {
    tmp_631_cast_fu_21383_p1 = esl_zext<14,4>(w89_reg_5765.read());
}

void ShuffleNetV2::thread_tmp_631_fu_10607_p3() {
    tmp_631_fu_10607_p3 = esl_concat<9,5>(tmp_235_reg_29336.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_632_fu_21740_p2() {
    tmp_632_fu_21740_p2 = (!p_shl174_cast_fu_21724_p1.read().is_01() || !p_shl175_cast_fu_21736_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl174_cast_fu_21724_p1.read()) - sc_biguint<7>(p_shl175_cast_fu_21736_p1.read()));
}

void ShuffleNetV2::thread_tmp_633_fu_21756_p2() {
    tmp_633_fu_21756_p2 = (!i129_cast302_cast_reg_33159.read().is_01() || !tmp54_fu_21750_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i129_cast302_cast_reg_33159.read()) + sc_biguint<10>(tmp54_fu_21750_p2.read()));
}

void ShuffleNetV2::thread_tmp_634_cast1_fu_8122_p1() {
    tmp_634_cast1_fu_8122_p1 = esl_sext<64,14>(tmp_332_fu_8117_p2.read());
}

void ShuffleNetV2::thread_tmp_634_cast_fu_17562_p1() {
    tmp_634_cast_fu_17562_p1 = esl_zext<7,4>(p_lshr_f11_cast_fu_17552_p4.read());
}

void ShuffleNetV2::thread_tmp_634_fu_10618_p3() {
    tmp_634_fu_10618_p3 = esl_concat<9,3>(tmp_235_reg_29336.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_635_fu_21769_p1() {
    tmp_635_fu_21769_p1 = esl_zext<64,11>(tmp_820_cast_fu_21766_p1.read());
}

void ShuffleNetV2::thread_tmp_636_fu_21761_p2() {
    tmp_636_fu_21761_p2 = (!tmp_632_fu_21740_p2.read().is_01() || !i129_cast_reg_33154.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_632_fu_21740_p2.read()) + sc_biguint<7>(i129_cast_reg_33154.read()));
}

void ShuffleNetV2::thread_tmp_637_cast_fu_8132_p1() {
    tmp_637_cast_fu_8132_p1 = esl_sext<64,11>(tmp_333_reg_28480.read());
}

void ShuffleNetV2::thread_tmp_637_fu_10629_p2() {
    tmp_637_fu_10629_p2 = (!p_shl329_cast_fu_10614_p1.read().is_01() || !p_shl330_cast_fu_10625_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl329_cast_fu_10614_p1.read()) - sc_biguint<15>(p_shl330_cast_fu_10625_p1.read()));
}

void ShuffleNetV2::thread_tmp_638_cast_fu_17834_p1() {
    tmp_638_cast_fu_17834_p1 = esl_sext<11,7>(tmp_482_fu_17828_p2.read());
}

void ShuffleNetV2::thread_tmp_638_fu_21777_p1() {
    tmp_638_fu_21777_p1 = esl_zext<64,32>(tmp_822_cast_fu_21774_p1.read());
}

void ShuffleNetV2::thread_tmp_639_fu_10639_p2() {
    tmp_639_fu_10639_p2 = (!tmp_225_cast_reg_29318.read().is_01() || !tmp_1069_cast_fu_10635_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_225_cast_reg_29318.read()) + sc_bigint<16>(tmp_1069_cast_fu_10635_p1.read()));
}

void ShuffleNetV2::thread_tmp_640_cast_fu_8198_p1() {
    tmp_640_cast_fu_8198_p1 = esl_zext<11,10>(tmp_334_fu_8190_p3.read());
}

void ShuffleNetV2::thread_tmp_640_fu_10576_p3() {
    tmp_640_fu_10576_p3 = esl_concat<7,6>(tmp_237_fu_10571_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_641_fu_21539_p2() {
    tmp_641_fu_21539_p2 = (!p_shl176_cast_fu_21523_p1.read().is_01() || !p_shl177_cast_fu_21535_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl176_cast_fu_21523_p1.read()) - sc_biguint<8>(p_shl177_cast_fu_21535_p1.read()));
}

void ShuffleNetV2::thread_tmp_642_cast_fu_17858_p1() {
    tmp_642_cast_fu_17858_p1 = esl_sext<32,7>(tmp_486_reg_31835.read());
}

void ShuffleNetV2::thread_tmp_642_fu_21555_p2() {
    tmp_642_fu_21555_p2 = (!tmp53_fu_21549_p2.read().is_01() || !co138_cast312_cast_reg_33089.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp53_fu_21549_p2.read()) + sc_biguint<9>(co138_cast312_cast_reg_33089.read()));
}

void ShuffleNetV2::thread_tmp_643_fu_21584_p2() {
    tmp_643_fu_21584_p2 = (!p_shl178_cast_fu_21568_p1.read().is_01() || !p_shl179_cast_fu_21580_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl178_cast_fu_21568_p1.read()) - sc_biguint<7>(p_shl179_cast_fu_21580_p1.read()));
}

void ShuffleNetV2::thread_tmp_644_fu_21590_p2() {
    tmp_644_fu_21590_p2 = (!tmp_643_fu_21584_p2.read().is_01() || !tmp_814_cast_reg_33107.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_643_fu_21584_p2.read()) + sc_biguint<7>(tmp_814_cast_reg_33107.read()));
}

void ShuffleNetV2::thread_tmp_645_cast1_fu_21818_p1() {
    tmp_645_cast1_fu_21818_p1 = esl_zext<13,2>(w91_reg_5842.read());
}

void ShuffleNetV2::thread_tmp_645_cast_fu_21814_p1() {
    tmp_645_cast_fu_21814_p1 = esl_zext<36,2>(w91_reg_5842.read());
}

void ShuffleNetV2::thread_tmp_645_fu_10584_p3() {
    tmp_645_fu_10584_p3 = esl_concat<7,4>(tmp_237_fu_10571_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_646_fu_22172_p2() {
    tmp_646_fu_22172_p2 = (!p_shl182_cast_fu_22156_p1.read().is_01() || !p_shl183_cast_fu_22168_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl182_cast_fu_22156_p1.read()) - sc_biguint<7>(p_shl183_cast_fu_22168_p1.read()));
}

void ShuffleNetV2::thread_tmp_647_fu_22086_p2() {
    tmp_647_fu_22086_p2 = (!p_shl180_cast_fu_22070_p1.read().is_01() || !p_shl181_cast_fu_22082_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl180_cast_fu_22070_p1.read()) - sc_biguint<7>(p_shl181_cast_fu_22082_p1.read()));
}

void ShuffleNetV2::thread_tmp_648_fu_22102_p2() {
    tmp_648_fu_22102_p2 = (!i133_cast292_cast_reg_33299.read().is_01() || !tmp56_fu_22096_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i133_cast292_cast_reg_33299.read()) + sc_biguint<10>(tmp56_fu_22096_p2.read()));
}

void ShuffleNetV2::thread_tmp_649_cast_fu_17641_p1() {
    tmp_649_cast_fu_17641_p1 = esl_sext<11,8>(tmp_491_fu_17635_p2.read());
}

void ShuffleNetV2::thread_tmp_649_fu_22115_p1() {
    tmp_649_fu_22115_p1 = esl_zext<64,11>(tmp_838_cast_fu_22112_p1.read());
}

void ShuffleNetV2::thread_tmp_650_fu_22107_p2() {
    tmp_650_fu_22107_p2 = (!tmp_647_fu_22086_p2.read().is_01() || !i133_cast_reg_33294.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_647_fu_22086_p2.read()) + sc_biguint<7>(i133_cast_reg_33294.read()));
}

void ShuffleNetV2::thread_tmp_651_fu_22123_p1() {
    tmp_651_fu_22123_p1 = esl_zext<64,32>(tmp_840_cast_fu_22120_p1.read());
}

void ShuffleNetV2::thread_tmp_652_cast1_fu_21834_p1() {
    tmp_652_cast1_fu_21834_p1 = esl_zext<10,2>(h91_reg_5853.read());
}

void ShuffleNetV2::thread_tmp_652_cast_fu_21838_p1() {
    tmp_652_cast_fu_21838_p1 = esl_zext<15,2>(h91_reg_5853.read());
}

void ShuffleNetV2::thread_tmp_652_fu_10596_p2() {
    tmp_652_fu_10596_p2 = (!tmp_640_fu_10576_p3.read().is_01() || !p_shl328_cast_fu_10592_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_640_fu_10576_p3.read()) - sc_bigint<13>(p_shl328_cast_fu_10592_p1.read()));
}

void ShuffleNetV2::thread_tmp_653_cast_fu_22208_p1() {
    tmp_653_cast_fu_22208_p1 = esl_zext<19,5>(ci62_reg_5908.read());
}

void ShuffleNetV2::thread_tmp_653_fu_10602_p2() {
    tmp_653_fu_10602_p2 = (!tmp_227_cast_reg_29323.read().is_01() || !tmp_652_fu_10596_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_227_cast_reg_29323.read()) + sc_biguint<13>(tmp_652_fu_10596_p2.read()));
}

void ShuffleNetV2::thread_tmp_654_fu_22212_p2() {
    tmp_654_fu_22212_p2 = (!tmp_646_reg_33348.read().is_01() || !ci62_cast_fu_22192_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_646_reg_33348.read()) + sc_biguint<7>(ci62_cast_fu_22192_p1.read()));
}

void ShuffleNetV2::thread_tmp_655_cast_fu_22217_p1() {
    tmp_655_cast_fu_22217_p1 = esl_sext<13,7>(tmp_654_fu_22212_p2.read());
}

void ShuffleNetV2::thread_tmp_655_fu_10880_p3() {
    tmp_655_fu_10880_p3 = esl_concat<8,2>(tmp_250_reg_29455.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_656_cast_fu_18188_p1() {
    tmp_656_cast_fu_18188_p1 = esl_sext<11,7>(tmp_497_fu_18182_p2.read());
}

void ShuffleNetV2::thread_tmp_656_fu_10891_p2() {
    tmp_656_fu_10891_p2 = (!p_shl334_cast_fu_10887_p1.read().is_01() || !tmp_251_cast1_fu_10877_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl334_cast_fu_10887_p1.read()) - sc_biguint<11>(tmp_251_cast1_fu_10877_p1.read()));
}

void ShuffleNetV2::thread_tmp_657_fu_21882_p2() {
    tmp_657_fu_21882_p2 = (!p_shl186_cast_fu_21866_p1.read().is_01() || !p_shl187_cast_fu_21878_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl186_cast_fu_21866_p1.read()) - sc_biguint<7>(p_shl187_cast_fu_21878_p1.read()));
}

void ShuffleNetV2::thread_tmp_658_fu_21898_p2() {
    tmp_658_fu_21898_p2 = (!co141_cast1_reg_33200.read().is_01() || !tmp55_fu_21892_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co141_cast1_reg_33200.read()) + sc_biguint<10>(tmp55_fu_21892_p2.read()));
}

void ShuffleNetV2::thread_tmp_659_cast_fu_8210_p1() {
    tmp_659_cast_fu_8210_p1 = esl_zext<10,9>(tmp_336_fu_8202_p3.read());
}

void ShuffleNetV2::thread_tmp_659_fu_10901_p2() {
    tmp_659_fu_10901_p2 = (!tmp_238_cast2_reg_29424.read().is_01() || !tmp_1086_cast_fu_10897_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_238_cast2_reg_29424.read()) + sc_bigint<12>(tmp_1086_cast_fu_10897_p1.read()));
}

void ShuffleNetV2::thread_tmp_660_cast1_fu_21908_p1() {
    tmp_660_cast1_fu_21908_p1 = esl_zext<13,10>(tmp_658_reg_33257.read());
}

void ShuffleNetV2::thread_tmp_660_cast_fu_18212_p1() {
    tmp_660_cast_fu_18212_p1 = esl_sext<32,7>(tmp_500_reg_31975.read());
}

void ShuffleNetV2::thread_tmp_660_fu_10922_p2() {
    tmp_660_fu_10922_p2 = (!p_shl333_cast_fu_10918_p1.read().is_01() || !tmp_1087_cast1_fu_10906_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl333_cast_fu_10918_p1.read()) - sc_bigint<15>(tmp_1087_cast1_fu_10906_p1.read()));
}

void ShuffleNetV2::thread_tmp_661_fu_21903_p2() {
    tmp_661_fu_21903_p2 = (!tmp_657_fu_21882_p2.read().is_01() || !co141_cast_reg_33195.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_657_fu_21882_p2.read()) + sc_biguint<7>(co141_cast_reg_33195.read()));
}

void ShuffleNetV2::thread_tmp_662_cast_fu_21959_p1() {
    tmp_662_cast_fu_21959_p1 = esl_zext<35,32>(tmp_859_cast_fu_21956_p1.read());
}

void ShuffleNetV2::thread_tmp_662_fu_10928_p2() {
    tmp_662_fu_10928_p2 = (!tmp_245_cast_reg_29442.read().is_01() || !tmp_660_fu_10922_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_245_cast_reg_29442.read()) + sc_biguint<15>(tmp_660_fu_10922_p2.read()));
}

void ShuffleNetV2::thread_tmp_663_fu_22462_p2() {
    tmp_663_fu_22462_p2 = (!p_shl184_cast_fu_22446_p1.read().is_01() || !p_shl185_cast_fu_22458_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl184_cast_fu_22446_p1.read()) - sc_biguint<7>(p_shl185_cast_fu_22458_p1.read()));
}

void ShuffleNetV2::thread_tmp_664_cast_fu_18280_p1() {
    tmp_664_cast_fu_18280_p1 = esl_zext<7,4>(p_lshr_f12_cast_fu_18270_p4.read());
}

void ShuffleNetV2::thread_tmp_664_fu_22478_p2() {
    tmp_664_fu_22478_p2 = (!i135_cast279_cast_reg_33405.read().is_01() || !tmp58_fu_22472_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i135_cast279_cast_reg_33405.read()) + sc_biguint<10>(tmp58_fu_22472_p2.read()));
}

void ShuffleNetV2::thread_tmp_665_fu_22491_p1() {
    tmp_665_fu_22491_p1 = esl_zext<64,11>(tmp_848_cast_fu_22488_p1.read());
}

void ShuffleNetV2::thread_tmp_666_cast_fu_18552_p1() {
    tmp_666_cast_fu_18552_p1 = esl_sext<11,7>(tmp_513_fu_18546_p2.read());
}

void ShuffleNetV2::thread_tmp_666_fu_22483_p2() {
    tmp_666_fu_22483_p2 = (!tmp_663_fu_22462_p2.read().is_01() || !i135_cast_reg_33400.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_663_fu_22462_p2.read()) + sc_biguint<7>(i135_cast_reg_33400.read()));
}

void ShuffleNetV2::thread_tmp_667_fu_22499_p1() {
    tmp_667_fu_22499_p1 = esl_zext<64,32>(tmp_850_cast_fu_22496_p1.read());
}

void ShuffleNetV2::thread_tmp_668_fu_22261_p2() {
    tmp_668_fu_22261_p2 = (!p_shl188_cast_fu_22245_p1.read().is_01() || !p_shl189_cast_fu_22257_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl188_cast_fu_22245_p1.read()) - sc_biguint<8>(p_shl189_cast_fu_22257_p1.read()));
}

void ShuffleNetV2::thread_tmp_669_fu_22285_p2() {
    tmp_669_fu_22285_p2 = (!tmp57_cast_fu_22281_p1.read().is_01() || !co143_cast_reg_33335.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp57_cast_fu_22281_p1.read()) + sc_biguint<12>(co143_cast_reg_33335.read()));
}

void ShuffleNetV2::thread_tmp_670_cast_fu_18576_p1() {
    tmp_670_cast_fu_18576_p1 = esl_sext<32,7>(tmp_516_reg_32081.read());
}

void ShuffleNetV2::thread_tmp_670_fu_22314_p2() {
    tmp_670_fu_22314_p2 = (!p_shl190_cast_fu_22298_p1.read().is_01() || !p_shl191_cast_fu_22310_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl190_cast_fu_22298_p1.read()) - sc_biguint<7>(p_shl191_cast_fu_22310_p1.read()));
}

void ShuffleNetV2::thread_tmp_671_fu_22320_p2() {
    tmp_671_fu_22320_p2 = (!tmp_670_fu_22314_p2.read().is_01() || !tmp_844_cast_reg_33353.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_670_fu_22314_p2.read()) + sc_biguint<7>(tmp_844_cast_reg_33353.read()));
}

void ShuffleNetV2::thread_tmp_672_fu_22629_p2() {
    tmp_672_fu_22629_p2 = (!p_shl192_cast_fu_22615_p1.read().is_01() || !p_shl193_cast_fu_22625_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl192_cast_fu_22615_p1.read()) - sc_biguint<8>(p_shl193_cast_fu_22625_p1.read()));
}

void ShuffleNetV2::thread_tmp_673_cast_fu_22540_p1() {
    tmp_673_cast_fu_22540_p1 = esl_zext<10,4>(h93_reg_5963.read());
}

void ShuffleNetV2::thread_tmp_673_fu_10940_p3() {
    tmp_673_fu_10940_p3 = esl_concat<7,2>(tmp_252_reg_29461.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_674_cast_fu_22665_p1() {
    tmp_674_cast_fu_22665_p1 = esl_zext<19,5>(ci64_reg_5996.read());
}

void ShuffleNetV2::thread_tmp_674_fu_10947_p1() {
    tmp_674_fu_10947_p1 = esl_sext<34,9>(tmp_673_fu_10940_p3.read());
}

void ShuffleNetV2::thread_tmp_675_cast_cast_fu_17972_p1() {
    tmp_675_cast_cast_fu_17972_p1 = esl_sext<8,7>(tmp_507_fu_17966_p2.read());
}

void ShuffleNetV2::thread_tmp_675_fu_22669_p2() {
    tmp_675_fu_22669_p2 = (!tmp_672_reg_33498.read().is_01() || !ci64_cast_fu_22649_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_672_reg_33498.read()) + sc_biguint<8>(ci64_cast_fu_22649_p1.read()));
}

void ShuffleNetV2::thread_tmp_676_fu_10955_p2() {
    tmp_676_fu_10955_p2 = (!p_shl332_cast_fu_10951_p1.read().is_01() || !tmp_253_cast_fu_10936_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl332_cast_fu_10951_p1.read()) - sc_biguint<35>(tmp_253_cast_fu_10936_p1.read()));
}

void ShuffleNetV2::thread_tmp_677_cast1_fu_22674_p1() {
    tmp_677_cast1_fu_22674_p1 = esl_sext<15,8>(tmp_675_fu_22669_p2.read());
}

void ShuffleNetV2::thread_tmp_677_cast_fu_17992_p1() {
    tmp_677_cast_fu_17992_p1 = esl_sext<9,8>(tmp_508_reg_31907.read());
}

void ShuffleNetV2::thread_tmp_677_fu_10965_p2() {
    tmp_677_fu_10965_p2 = (!tmp_238_cast1_reg_29419.read().is_01() || !tmp_1093_cast_fu_10961_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_238_cast1_reg_29419.read()) + sc_bigint<36>(tmp_1093_cast_fu_10961_p1.read()));
}

void ShuffleNetV2::thread_tmp_678_cast_fu_22573_p1() {
    tmp_678_cast_fu_22573_p1 = esl_zext<14,4>(w93_reg_5974.read());
}

void ShuffleNetV2::thread_tmp_678_fu_10989_p2() {
    tmp_678_fu_10989_p2 = (!p_shl331_cast_fu_10982_p3.read().is_01() || !tmp_146_reg_29472.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl331_cast_fu_10982_p3.read()) - sc_biguint<10>(tmp_146_reg_29472.read()));
}

void ShuffleNetV2::thread_tmp_679_cast_fu_18052_p1() {
    tmp_679_cast_fu_18052_p1 = esl_sext<32,7>(tmp_511_reg_31913.read());
}

void ShuffleNetV2::thread_tmp_679_fu_22901_p2() {
    tmp_679_fu_22901_p2 = (!p_shl194_cast_fu_22885_p1.read().is_01() || !p_shl195_cast_fu_22897_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl194_cast_fu_22885_p1.read()) - sc_biguint<8>(p_shl195_cast_fu_22897_p1.read()));
}

void ShuffleNetV2::thread_tmp_680_fu_22917_p2() {
    tmp_680_fu_22917_p2 = (!i141_cast263_cast_reg_33555.read().is_01() || !tmp60_fu_22911_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(i141_cast263_cast_reg_33555.read()) + sc_biguint<10>(tmp60_fu_22911_p2.read()));
}

void ShuffleNetV2::thread_tmp_681_fu_22930_p1() {
    tmp_681_fu_22930_p1 = esl_zext<64,11>(tmp_875_cast_fu_22927_p1.read());
}

void ShuffleNetV2::thread_tmp_682_cast_fu_18359_p1() {
    tmp_682_cast_fu_18359_p1 = esl_sext<11,8>(tmp_518_fu_18353_p2.read());
}

void ShuffleNetV2::thread_tmp_682_fu_22922_p2() {
    tmp_682_fu_22922_p2 = (!tmp_679_fu_22901_p2.read().is_01() || !i141_cast_reg_33550.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_679_fu_22901_p2.read()) + sc_biguint<8>(i141_cast_reg_33550.read()));
}

void ShuffleNetV2::thread_tmp_683_fu_22938_p1() {
    tmp_683_fu_22938_p1 = esl_zext<64,32>(tmp_877_cast_fu_22935_p1.read());
}

void ShuffleNetV2::thread_tmp_684_fu_10994_p2() {
    tmp_684_fu_10994_p2 = (!tmp_245_cast1_reg_29437.read().is_01() || !tmp_678_fu_10989_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_245_cast1_reg_29437.read()) + sc_biguint<10>(tmp_678_fu_10989_p2.read()));
}

void ShuffleNetV2::thread_tmp_685_fu_22722_p2() {
    tmp_685_fu_22722_p2 = (!p_shl196_cast_fu_22702_p1.read().is_01() || !p_shl197_cast_fu_22718_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl196_cast_fu_22702_p1.read()) - sc_biguint<10>(p_shl197_cast_fu_22718_p1.read()));
}

void ShuffleNetV2::thread_tmp_686_fu_22738_p2() {
    tmp_686_fu_22738_p2 = (!tmp59_fu_22732_p2.read().is_01() || !co146_cast_reg_33485.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp59_fu_22732_p2.read()) + sc_biguint<12>(co146_cast_reg_33485.read()));
}

void ShuffleNetV2::thread_tmp_687_cast_fu_8351_p1() {
    tmp_687_cast_fu_8351_p1 = esl_sext<14,13>(tmp_354_fu_8345_p2.read());
}

void ShuffleNetV2::thread_tmp_687_fu_11325_p3() {
    tmp_687_fu_11325_p3 = esl_concat<9,5>(tmp_260_reg_29582.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_688_fu_22753_p2() {
    tmp_688_fu_22753_p2 = (!p_shl197_cast1_fu_22714_p1.read().is_01() || !p_shl198_cast_fu_22749_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl197_cast1_fu_22714_p1.read()) - sc_biguint<8>(p_shl198_cast_fu_22749_p1.read()));
}

void ShuffleNetV2::thread_tmp_689_fu_11336_p3() {
    tmp_689_fu_11336_p3 = esl_concat<9,3>(tmp_260_reg_29582.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_690_fu_11347_p2() {
    tmp_690_fu_11347_p2 = (!p_shl337_cast_fu_11332_p1.read().is_01() || !p_shl338_cast_fu_11343_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl337_cast_fu_11332_p1.read()) - sc_biguint<15>(p_shl338_cast_fu_11343_p1.read()));
}

void ShuffleNetV2::thread_tmp_691_fu_22759_p2() {
    tmp_691_fu_22759_p2 = (!tmp_688_fu_22753_p2.read().is_01() || !tmp_870_cast_reg_33503.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_688_fu_22753_p2.read()) + sc_biguint<8>(tmp_870_cast_reg_33503.read()));
}

void ShuffleNetV2::thread_tmp_692_cast1_fu_22975_p1() {
    tmp_692_cast1_fu_22975_p1 = esl_zext<36,2>(w95_reg_6051.read());
}

void ShuffleNetV2::thread_tmp_692_cast_fu_22979_p1() {
    tmp_692_cast_fu_22979_p1 = esl_zext<13,2>(w95_reg_6051.read());
}

void ShuffleNetV2::thread_tmp_692_fu_11357_p2() {
    tmp_692_fu_11357_p2 = (!tmp_246_cast_reg_29564.read().is_01() || !tmp_1104_cast_fu_11353_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_246_cast_reg_29564.read()) + sc_bigint<16>(tmp_1104_cast_fu_11353_p1.read()));
}

void ShuffleNetV2::thread_tmp_693_fu_23331_p2() {
    tmp_693_fu_23331_p2 = (!p_shl201_cast_fu_23317_p1.read().is_01() || !p_shl202_cast_fu_23327_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl201_cast_fu_23317_p1.read()) - sc_biguint<8>(p_shl202_cast_fu_23327_p1.read()));
}

void ShuffleNetV2::thread_tmp_694_cast_fu_18858_p1() {
    tmp_694_cast_fu_18858_p1 = esl_zext<7,4>(p_lshr_f13_cast_fu_18848_p4.read());
}

void ShuffleNetV2::thread_tmp_694_fu_23247_p2() {
    tmp_694_fu_23247_p2 = (!p_shl199_cast_fu_23231_p1.read().is_01() || !p_shl200_cast_fu_23243_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl199_cast_fu_23231_p1.read()) - sc_biguint<8>(p_shl200_cast_fu_23243_p1.read()));
}

void ShuffleNetV2::thread_tmp_695_fu_23263_p2() {
    tmp_695_fu_23263_p2 = (!i145_cast253_cast_reg_33695.read().is_01() || !tmp62_fu_23257_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(i145_cast253_cast_reg_33695.read()) + sc_biguint<9>(tmp62_fu_23257_p2.read()));
}

void ShuffleNetV2::thread_tmp_696_fu_23276_p1() {
    tmp_696_fu_23276_p1 = esl_zext<64,11>(tmp_893_cast_fu_23273_p1.read());
}

void ShuffleNetV2::thread_tmp_697_fu_23268_p2() {
    tmp_697_fu_23268_p2 = (!tmp_694_fu_23247_p2.read().is_01() || !i145_cast_reg_33690.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_694_fu_23247_p2.read()) + sc_biguint<8>(i145_cast_reg_33690.read()));
}

void ShuffleNetV2::thread_tmp_698_cast_fu_19130_p1() {
    tmp_698_cast_fu_19130_p1 = esl_sext<11,7>(tmp_532_fu_19124_p2.read());
}

void ShuffleNetV2::thread_tmp_698_fu_23284_p1() {
    tmp_698_fu_23284_p1 = esl_zext<64,32>(tmp_895_cast_fu_23281_p1.read());
}

void ShuffleNetV2::thread_tmp_699_cast1_fu_22995_p1() {
    tmp_699_cast1_fu_22995_p1 = esl_zext<11,2>(h95_reg_6062.read());
}

void ShuffleNetV2::thread_tmp_699_cast_fu_22999_p1() {
    tmp_699_cast_fu_22999_p1 = esl_zext<15,2>(h95_reg_6062.read());
}

void ShuffleNetV2::thread_tmp_699_fu_11294_p3() {
    tmp_699_fu_11294_p3 = esl_concat<7,6>(tmp_262_fu_11289_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_700_cast_fu_23367_p1() {
    tmp_700_cast_fu_23367_p1 = esl_zext<19,5>(ci66_reg_6117.read());
}

void ShuffleNetV2::thread_tmp_700_fu_11302_p3() {
    tmp_700_fu_11302_p3 = esl_concat<7,4>(tmp_262_fu_11289_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_701_fu_23371_p2() {
    tmp_701_fu_23371_p2 = (!tmp_693_reg_33744.read().is_01() || !ci66_cast_fu_23351_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_693_reg_33744.read()) + sc_biguint<8>(ci66_cast_fu_23351_p1.read()));
}

void ShuffleNetV2::thread_tmp_702_cast1_fu_23376_p1() {
    tmp_702_cast1_fu_23376_p1 = esl_sext<15,8>(tmp_701_fu_23371_p2.read());
}

void ShuffleNetV2::thread_tmp_702_cast_fu_19154_p1() {
    tmp_702_cast_fu_19154_p1 = esl_sext<32,7>(tmp_536_reg_32285.read());
}

void ShuffleNetV2::thread_tmp_702_fu_11314_p2() {
    tmp_702_fu_11314_p2 = (!tmp_699_fu_11294_p3.read().is_01() || !p_shl336_cast_fu_11310_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_699_fu_11294_p3.read()) - sc_bigint<13>(p_shl336_cast_fu_11310_p1.read()));
}

void ShuffleNetV2::thread_tmp_703_fu_23043_p2() {
    tmp_703_fu_23043_p2 = (!p_shl205_cast_fu_23027_p1.read().is_01() || !p_shl206_cast_fu_23039_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl205_cast_fu_23027_p1.read()) - sc_biguint<8>(p_shl206_cast_fu_23039_p1.read()));
}

void ShuffleNetV2::thread_tmp_704_fu_23059_p2() {
    tmp_704_fu_23059_p2 = (!co149_cast1_reg_33596.read().is_01() || !tmp61_fu_23053_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co149_cast1_reg_33596.read()) + sc_biguint<10>(tmp61_fu_23053_p2.read()));
}

void ShuffleNetV2::thread_tmp_705_cast_fu_23069_p1() {
    tmp_705_cast_fu_23069_p1 = esl_zext<13,10>(tmp_704_reg_33653.read());
}

void ShuffleNetV2::thread_tmp_705_fu_11320_p2() {
    tmp_705_fu_11320_p2 = (!tmp_248_cast_reg_29569.read().is_01() || !tmp_702_fu_11314_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_248_cast_reg_29569.read()) + sc_biguint<13>(tmp_702_fu_11314_p2.read()));
}

void ShuffleNetV2::thread_tmp_706_fu_11602_p3() {
    tmp_706_fu_11602_p3 = esl_concat<8,2>(tmp_275_reg_29701.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_707_fu_23064_p2() {
    tmp_707_fu_23064_p2 = (!tmp_703_fu_23043_p2.read().is_01() || !co149_cast_reg_33591.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_703_fu_23043_p2.read()) + sc_biguint<8>(co149_cast_reg_33591.read()));
}

void ShuffleNetV2::thread_tmp_708_cast_fu_23120_p1() {
    tmp_708_cast_fu_23120_p1 = esl_zext<35,32>(tmp_914_cast_fu_23117_p1.read());
}

void ShuffleNetV2::thread_tmp_708_fu_11613_p2() {
    tmp_708_fu_11613_p2 = (!p_shl342_cast_fu_11609_p1.read().is_01() || !tmp_276_cast_fu_11599_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl342_cast_fu_11609_p1.read()) - sc_biguint<11>(tmp_276_cast_fu_11599_p1.read()));
}

void ShuffleNetV2::thread_tmp_709_cast_fu_18937_p1() {
    tmp_709_cast_fu_18937_p1 = esl_sext<11,8>(tmp_541_fu_18931_p2.read());
}

void ShuffleNetV2::thread_tmp_709_fu_11619_p2() {
    tmp_709_fu_11619_p2 = (!tmp_263_cast_reg_29670.read().is_01() || !tmp_708_fu_11613_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_263_cast_reg_29670.read()) + sc_biguint<11>(tmp_708_fu_11613_p2.read()));
}

void ShuffleNetV2::thread_tmp_710_fu_23603_p2() {
    tmp_710_fu_23603_p2 = (!p_shl203_cast_fu_23587_p1.read().is_01() || !p_shl204_cast_fu_23599_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl203_cast_fu_23587_p1.read()) - sc_biguint<8>(p_shl204_cast_fu_23599_p1.read()));
}

void ShuffleNetV2::thread_tmp_711_fu_23627_p2() {
    tmp_711_fu_23627_p2 = (!i147_cast1_reg_33801.read().is_01() || !tmp64_cast_fu_23623_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i147_cast1_reg_33801.read()) + sc_biguint<12>(tmp64_cast_fu_23623_p1.read()));
}

void ShuffleNetV2::thread_tmp_712_fu_23637_p1() {
    tmp_712_fu_23637_p1 = esl_zext<64,12>(tmp_711_reg_33822.read());
}

void ShuffleNetV2::thread_tmp_713_fu_23632_p2() {
    tmp_713_fu_23632_p2 = (!tmp_710_fu_23603_p2.read().is_01() || !i147_cast_reg_33796.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_710_fu_23603_p2.read()) + sc_biguint<8>(i147_cast_reg_33796.read()));
}

void ShuffleNetV2::thread_tmp_714_fu_23644_p1() {
    tmp_714_fu_23644_p1 = esl_zext<64,32>(tmp_905_cast_fu_23641_p1.read());
}

void ShuffleNetV2::thread_tmp_715_fu_23424_p2() {
    tmp_715_fu_23424_p2 = (!p_shl207_cast_fu_23404_p1.read().is_01() || !p_shl208_cast_fu_23420_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl207_cast_fu_23404_p1.read()) - sc_biguint<10>(p_shl208_cast_fu_23420_p1.read()));
}

void ShuffleNetV2::thread_tmp_716_cast_fu_19484_p1() {
    tmp_716_cast_fu_19484_p1 = esl_sext<11,7>(tmp_547_fu_19478_p2.read());
}

void ShuffleNetV2::thread_tmp_716_fu_23440_p2() {
    tmp_716_fu_23440_p2 = (!tmp63_fu_23434_p2.read().is_01() || !co151_cast_reg_33731.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp63_fu_23434_p2.read()) + sc_biguint<12>(co151_cast_reg_33731.read()));
}

void ShuffleNetV2::thread_tmp_717_fu_23455_p2() {
    tmp_717_fu_23455_p2 = (!p_shl208_cast1_fu_23416_p1.read().is_01() || !p_shl209_cast_fu_23451_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl208_cast1_fu_23416_p1.read()) - sc_biguint<8>(p_shl209_cast_fu_23451_p1.read()));
}

void ShuffleNetV2::thread_tmp_718_fu_23461_p2() {
    tmp_718_fu_23461_p2 = (!tmp_717_fu_23455_p2.read().is_01() || !tmp_899_cast_reg_33749.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_717_fu_23455_p2.read()) + sc_biguint<8>(tmp_899_cast_reg_33749.read()));
}

void ShuffleNetV2::thread_tmp_719_cast1_fu_23681_p1() {
    tmp_719_cast1_fu_23681_p1 = esl_zext<36,2>(w97_reg_6172.read());
}

void ShuffleNetV2::thread_tmp_719_cast_fu_23685_p1() {
    tmp_719_cast_fu_23685_p1 = esl_zext<13,2>(w97_reg_6172.read());
}

void ShuffleNetV2::thread_tmp_719_fu_11640_p2() {
    tmp_719_fu_11640_p2 = (!p_shl341_cast_fu_11636_p1.read().is_01() || !tmp_1122_cast_fu_11624_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl341_cast_fu_11636_p1.read()) - sc_bigint<15>(tmp_1122_cast_fu_11624_p1.read()));
}

void ShuffleNetV2::thread_tmp_720_cast_fu_19508_p1() {
    tmp_720_cast_fu_19508_p1 = esl_sext<32,7>(tmp_550_reg_32425.read());
}

void ShuffleNetV2::thread_tmp_720_fu_24033_p2() {
    tmp_720_fu_24033_p2 = (!p_shl212_cast_fu_24019_p1.read().is_01() || !p_shl213_cast_fu_24029_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl212_cast_fu_24019_p1.read()) - sc_biguint<8>(p_shl213_cast_fu_24029_p1.read()));
}

void ShuffleNetV2::thread_tmp_721_fu_23953_p2() {
    tmp_721_fu_23953_p2 = (!p_shl210_cast_fu_23937_p1.read().is_01() || !p_shl211_cast_fu_23949_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl210_cast_fu_23937_p1.read()) - sc_biguint<8>(p_shl211_cast_fu_23949_p1.read()));
}

void ShuffleNetV2::thread_tmp_722_fu_23969_p2() {
    tmp_722_fu_23969_p2 = (!i153_cast1_reg_33941.read().is_01() || !tmp66_fu_23963_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i153_cast1_reg_33941.read()) + sc_biguint<12>(tmp66_fu_23963_p2.read()));
}

void ShuffleNetV2::thread_tmp_723_fu_23979_p1() {
    tmp_723_fu_23979_p1 = esl_zext<64,12>(tmp_722_reg_33962.read());
}

void ShuffleNetV2::thread_tmp_724_cast_fu_19576_p1() {
    tmp_724_cast_fu_19576_p1 = esl_zext<7,4>(p_lshr_f14_cast_fu_19566_p4.read());
}

void ShuffleNetV2::thread_tmp_724_fu_23974_p2() {
    tmp_724_fu_23974_p2 = (!tmp_721_fu_23953_p2.read().is_01() || !i153_cast_reg_33936.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_721_fu_23953_p2.read()) + sc_biguint<8>(i153_cast_reg_33936.read()));
}

void ShuffleNetV2::thread_tmp_725_fu_23986_p1() {
    tmp_725_fu_23986_p1 = esl_zext<64,32>(tmp_928_cast_fu_23983_p1.read());
}

void ShuffleNetV2::thread_tmp_726_cast_fu_19848_p1() {
    tmp_726_cast_fu_19848_p1 = esl_sext<11,7>(tmp_563_fu_19842_p2.read());
}

void ShuffleNetV2::thread_tmp_726_fu_11646_p2() {
    tmp_726_fu_11646_p2 = (!tmp_270_cast_reg_29688.read().is_01() || !tmp_719_fu_11640_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_270_cast_reg_29688.read()) + sc_biguint<15>(tmp_719_fu_11640_p2.read()));
}

void ShuffleNetV2::thread_tmp_727_cast1_fu_23701_p1() {
    tmp_727_cast1_fu_23701_p1 = esl_zext<11,2>(h97_reg_6183.read());
}

void ShuffleNetV2::thread_tmp_727_cast_fu_23705_p1() {
    tmp_727_cast_fu_23705_p1 = esl_zext<15,2>(h97_reg_6183.read());
}

void ShuffleNetV2::thread_tmp_727_fu_11658_p3() {
    tmp_727_fu_11658_p3 = esl_concat<7,2>(tmp_277_reg_29707.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_728_cast_fu_24069_p1() {
    tmp_728_cast_fu_24069_p1 = esl_zext<19,5>(ci68_reg_6238.read());
}

void ShuffleNetV2::thread_tmp_728_fu_11665_p1() {
    tmp_728_fu_11665_p1 = esl_sext<34,9>(tmp_727_fu_11658_p3.read());
}

void ShuffleNetV2::thread_tmp_729_fu_24073_p2() {
    tmp_729_fu_24073_p2 = (!tmp_720_reg_33990.read().is_01() || !ci68_cast_fu_24053_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_720_reg_33990.read()) + sc_biguint<8>(ci68_cast_fu_24053_p1.read()));
}

void ShuffleNetV2::thread_tmp_730_cast1_fu_24078_p1() {
    tmp_730_cast1_fu_24078_p1 = esl_sext<15,8>(tmp_729_fu_24073_p2.read());
}

void ShuffleNetV2::thread_tmp_730_cast_fu_19872_p1() {
    tmp_730_cast_fu_19872_p1 = esl_sext<32,7>(tmp_566_reg_32531.read());
}

void ShuffleNetV2::thread_tmp_730_fu_11673_p2() {
    tmp_730_fu_11673_p2 = (!p_shl340_cast_fu_11669_p1.read().is_01() || !tmp_278_cast_fu_11654_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl340_cast_fu_11669_p1.read()) - sc_biguint<35>(tmp_278_cast_fu_11654_p1.read()));
}

void ShuffleNetV2::thread_tmp_731_fu_23749_p2() {
    tmp_731_fu_23749_p2 = (!p_shl216_cast_fu_23733_p1.read().is_01() || !p_shl217_cast_fu_23745_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl216_cast_fu_23733_p1.read()) - sc_biguint<8>(p_shl217_cast_fu_23745_p1.read()));
}

void ShuffleNetV2::thread_tmp_732_fu_23765_p2() {
    tmp_732_fu_23765_p2 = (!co153_cast1_reg_33842.read().is_01() || !tmp65_fu_23759_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co153_cast1_reg_33842.read()) + sc_biguint<10>(tmp65_fu_23759_p2.read()));
}

void ShuffleNetV2::thread_tmp_733_cast_fu_23775_p1() {
    tmp_733_cast_fu_23775_p1 = esl_zext<13,10>(tmp_732_reg_33899.read());
}

void ShuffleNetV2::thread_tmp_733_fu_11683_p2() {
    tmp_733_fu_11683_p2 = (!tmp_263_cast1_reg_29665.read().is_01() || !tmp_1128_cast_fu_11679_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_263_cast1_reg_29665.read()) + sc_bigint<36>(tmp_1128_cast_fu_11679_p1.read()));
}

void ShuffleNetV2::thread_tmp_734_cast_fu_8239_p3() {
    tmp_734_cast_fu_8239_p3 = esl_concat<10,4>(tmp_362_fu_8234_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_734_fu_11707_p2() {
    tmp_734_fu_11707_p2 = (!p_shl339_cast_fu_11700_p3.read().is_01() || !tmp_167_reg_29718.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl339_cast_fu_11700_p3.read()) - sc_biguint<10>(tmp_167_reg_29718.read()));
}

void ShuffleNetV2::thread_tmp_735_cast_cast_fu_19268_p1() {
    tmp_735_cast_cast_fu_19268_p1 = esl_sext<8,7>(tmp_557_fu_19262_p2.read());
}

void ShuffleNetV2::thread_tmp_735_fu_23770_p2() {
    tmp_735_fu_23770_p2 = (!tmp_731_fu_23749_p2.read().is_01() || !co153_cast_reg_33837.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_731_fu_23749_p2.read()) + sc_biguint<8>(co153_cast_reg_33837.read()));
}

void ShuffleNetV2::thread_tmp_736_cast_fu_23826_p1() {
    tmp_736_cast_fu_23826_p1 = esl_zext<35,32>(tmp_947_cast_fu_23823_p1.read());
}

void ShuffleNetV2::thread_tmp_736_fu_11712_p2() {
    tmp_736_fu_11712_p2 = (!tmp_270_cast1_reg_29683.read().is_01() || !tmp_734_fu_11707_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_270_cast1_reg_29683.read()) + sc_biguint<10>(tmp_734_fu_11707_p2.read()));
}

void ShuffleNetV2::thread_tmp_737_cast_fu_19288_p1() {
    tmp_737_cast_fu_19288_p1 = esl_sext<9,8>(tmp_558_reg_32357.read());
}

void ShuffleNetV2::thread_tmp_737_fu_12209_p3() {
    tmp_737_fu_12209_p3 = esl_concat<7,3>(tmp_279_fu_12203_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_738_fu_24359_p2() {
    tmp_738_fu_24359_p2 = (!co157_cast_fu_24343_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co157_cast_fu_24343_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_739_cast_fu_19348_p1() {
    tmp_739_cast_fu_19348_p1 = esl_sext<32,7>(tmp_561_reg_32363.read());
}

void ShuffleNetV2::thread_tmp_739_fu_24305_p2() {
    tmp_739_fu_24305_p2 = (!p_shl214_cast_fu_24289_p1.read().is_01() || !p_shl215_cast_fu_24301_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl214_cast_fu_24289_p1.read()) - sc_biguint<8>(p_shl215_cast_fu_24301_p1.read()));
}

void ShuffleNetV2::thread_tmp_740_fu_24321_p2() {
    tmp_740_fu_24321_p2 = (!i155_cast1_reg_34047.read().is_01() || !tmp68_fu_24315_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i155_cast1_reg_34047.read()) + sc_biguint<12>(tmp68_fu_24315_p2.read()));
}

void ShuffleNetV2::thread_tmp_741_fu_24331_p1() {
    tmp_741_fu_24331_p1 = esl_zext<64,12>(tmp_740_reg_34068.read());
}

void ShuffleNetV2::thread_tmp_742_cast_fu_19655_p1() {
    tmp_742_cast_fu_19655_p1 = esl_sext<11,8>(tmp_568_fu_19649_p2.read());
}

void ShuffleNetV2::thread_tmp_742_fu_24326_p2() {
    tmp_742_fu_24326_p2 = (!tmp_739_fu_24305_p2.read().is_01() || !i155_cast_reg_34042.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_739_fu_24305_p2.read()) + sc_biguint<8>(i155_cast_reg_34042.read()));
}

void ShuffleNetV2::thread_tmp_743_fu_24338_p1() {
    tmp_743_fu_24338_p1 = esl_zext<64,32>(tmp_938_cast_fu_24335_p1.read());
}

void ShuffleNetV2::thread_tmp_744_fu_24126_p2() {
    tmp_744_fu_24126_p2 = (!p_shl220_cast_fu_24106_p1.read().is_01() || !p_shl221_cast_fu_24122_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl220_cast_fu_24106_p1.read()) - sc_biguint<10>(p_shl221_cast_fu_24122_p1.read()));
}

void ShuffleNetV2::thread_tmp_745_fu_24142_p2() {
    tmp_745_fu_24142_p2 = (!tmp67_fu_24136_p2.read().is_01() || !co155_cast_reg_33977.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp67_fu_24136_p2.read()) + sc_biguint<12>(co155_cast_reg_33977.read()));
}

void ShuffleNetV2::thread_tmp_746_fu_24157_p2() {
    tmp_746_fu_24157_p2 = (!p_shl221_cast1_fu_24118_p1.read().is_01() || !p_shl222_cast_fu_24153_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl221_cast1_fu_24118_p1.read()) - sc_biguint<8>(p_shl222_cast_fu_24153_p1.read()));
}

void ShuffleNetV2::thread_tmp_747_fu_24163_p2() {
    tmp_747_fu_24163_p2 = (!tmp_746_fu_24157_p2.read().is_01() || !tmp_932_cast_reg_33995.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_746_fu_24157_p2.read()) + sc_biguint<8>(tmp_932_cast_reg_33995.read()));
}

void ShuffleNetV2::thread_tmp_748_fu_24516_p2() {
    tmp_748_fu_24516_p2 = (!p_shl218_cast_fu_24502_p1.read().is_01() || !p_shl219_cast_fu_24512_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl218_cast_fu_24502_p1.read()) - sc_biguint<8>(p_shl219_cast_fu_24512_p1.read()));
}

void ShuffleNetV2::thread_tmp_749_cast1_fu_24401_p1() {
    tmp_749_cast1_fu_24401_p1 = esl_zext<11,3>(h99_reg_6293.read());
}

void ShuffleNetV2::thread_tmp_749_cast_fu_24405_p1() {
    tmp_749_cast_fu_24405_p1 = esl_zext<10,3>(h99_reg_6293.read());
}

void ShuffleNetV2::thread_tmp_749_fu_12221_p3() {
    tmp_749_fu_12221_p3 = esl_concat<6,3>(co66_reg_4049.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_750_cast_fu_24552_p1() {
    tmp_750_cast_fu_24552_p1 = esl_zext<19,5>(ci70_reg_6326.read());
}

void ShuffleNetV2::thread_tmp_750_fu_12043_p3() {
    tmp_750_fu_12043_p3 = esl_concat<10,5>(tmp_286_reg_29828.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_751_fu_12054_p3() {
    tmp_751_fu_12054_p3 = esl_concat<10,3>(tmp_286_reg_29828.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_752_fu_24556_p2() {
    tmp_752_fu_24556_p2 = (!tmp_748_reg_34150.read().is_01() || !ci70_cast_fu_24536_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_748_reg_34150.read()) + sc_biguint<8>(ci70_cast_fu_24536_p1.read()));
}

void ShuffleNetV2::thread_tmp_753_cast_fu_24561_p1() {
    tmp_753_cast_fu_24561_p1 = esl_sext<15,8>(tmp_752_fu_24556_p2.read());
}

void ShuffleNetV2::thread_tmp_753_fu_12065_p2() {
    tmp_753_fu_12065_p2 = (!p_shl345_cast_fu_12050_p1.read().is_01() || !p_shl346_cast_fu_12061_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl345_cast_fu_12050_p1.read()) - sc_biguint<16>(p_shl346_cast_fu_12061_p1.read()));
}

void ShuffleNetV2::thread_tmp_754_cast1_fu_8252_p3() {
    tmp_754_cast1_fu_8252_p3 = esl_concat<11,4>(tmp_373_fu_8247_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_754_cast_fu_20154_p1() {
    tmp_754_cast_fu_20154_p1 = esl_zext<7,4>(p_lshr_f15_cast_fu_20144_p4.read());
}

void ShuffleNetV2::thread_tmp_754_fu_12075_p2() {
    tmp_754_fu_12075_p2 = (!tmp_271_cast_reg_29810.read().is_01() || !tmp_1143_cast_fu_12071_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_271_cast_reg_29810.read()) + sc_bigint<17>(tmp_1143_cast_fu_12071_p1.read()));
}

void ShuffleNetV2::thread_tmp_755_cast1_fu_24447_p1() {
    tmp_755_cast1_fu_24447_p1 = esl_zext<13,3>(w99_reg_6304.read());
}

void ShuffleNetV2::thread_tmp_755_cast_fu_24451_p1() {
    tmp_755_cast_fu_24451_p1 = esl_zext<12,3>(w99_reg_6304.read());
}

void ShuffleNetV2::thread_tmp_755_fu_12012_p3() {
    tmp_755_fu_12012_p3 = esl_concat<7,6>(tmp_288_fu_12007_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_756_fu_24788_p2() {
    tmp_756_fu_24788_p2 = (!p_shl223_cast_fu_24772_p1.read().is_01() || !p_shl224_cast_fu_24784_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl223_cast_fu_24772_p1.read()) - sc_biguint<8>(p_shl224_cast_fu_24784_p1.read()));
}

void ShuffleNetV2::thread_tmp_757_fu_24804_p2() {
    tmp_757_fu_24804_p2 = (!i161_cast1_reg_34207.read().is_01() || !tmp70_fu_24798_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i161_cast1_reg_34207.read()) + sc_biguint<12>(tmp70_fu_24798_p2.read()));
}

void ShuffleNetV2::thread_tmp_758_cast_fu_20434_p1() {
    tmp_758_cast_fu_20434_p1 = esl_sext<11,7>(tmp_582_fu_20428_p2.read());
}

void ShuffleNetV2::thread_tmp_758_fu_24814_p1() {
    tmp_758_fu_24814_p1 = esl_zext<64,12>(tmp_757_reg_34228.read());
}

void ShuffleNetV2::thread_tmp_759_fu_24809_p2() {
    tmp_759_fu_24809_p2 = (!tmp_756_fu_24788_p2.read().is_01() || !i161_cast_reg_34202.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_756_fu_24788_p2.read()) + sc_biguint<8>(i161_cast_reg_34202.read()));
}

void ShuffleNetV2::thread_tmp_760_fu_24821_p1() {
    tmp_760_fu_24821_p1 = esl_zext<64,32>(tmp_967_cast_fu_24818_p1.read());
}

void ShuffleNetV2::thread_tmp_761_fu_24609_p2() {
    tmp_761_fu_24609_p2 = (!p_shl225_cast_fu_24589_p1.read().is_01() || !p_shl226_cast_fu_24605_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl225_cast_fu_24589_p1.read()) - sc_biguint<10>(p_shl226_cast_fu_24605_p1.read()));
}

void ShuffleNetV2::thread_tmp_762_cast_fu_20458_p1() {
    tmp_762_cast_fu_20458_p1 = esl_sext<32,7>(tmp_586_reg_32735.read());
}

void ShuffleNetV2::thread_tmp_762_fu_24625_p2() {
    tmp_762_fu_24625_p2 = (!tmp69_fu_24619_p2.read().is_01() || !co158_cast_reg_34137.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp69_fu_24619_p2.read()) + sc_biguint<12>(co158_cast_reg_34137.read()));
}

void ShuffleNetV2::thread_tmp_763_fu_24640_p2() {
    tmp_763_fu_24640_p2 = (!p_shl226_cast1_fu_24601_p1.read().is_01() || !p_shl227_cast_fu_24636_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl226_cast1_fu_24601_p1.read()) - sc_biguint<8>(p_shl227_cast_fu_24636_p1.read()));
}

void ShuffleNetV2::thread_tmp_764_fu_24646_p2() {
    tmp_764_fu_24646_p2 = (!tmp_763_fu_24640_p2.read().is_01() || !tmp_954_cast_reg_34155.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_763_fu_24640_p2.read()) + sc_biguint<8>(tmp_954_cast_reg_34155.read()));
}

void ShuffleNetV2::thread_tmp_765_cast1_fu_24862_p1() {
    tmp_765_cast1_fu_24862_p1 = esl_zext<13,2>(w101_reg_6381.read());
}

void ShuffleNetV2::thread_tmp_765_cast_fu_24858_p1() {
    tmp_765_cast_fu_24858_p1 = esl_zext<36,2>(w101_reg_6381.read());
}

void ShuffleNetV2::thread_tmp_765_fu_12020_p3() {
    tmp_765_fu_12020_p3 = esl_concat<7,4>(tmp_288_fu_12007_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_766_fu_25210_p2() {
    tmp_766_fu_25210_p2 = (!p_shl230_cast_fu_25196_p1.read().is_01() || !p_shl231_cast_fu_25206_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl230_cast_fu_25196_p1.read()) - sc_biguint<8>(p_shl231_cast_fu_25206_p1.read()));
}

void ShuffleNetV2::thread_tmp_767_fu_25130_p2() {
    tmp_767_fu_25130_p2 = (!p_shl228_cast_fu_25114_p1.read().is_01() || !p_shl229_cast_fu_25126_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl228_cast_fu_25114_p1.read()) - sc_biguint<8>(p_shl229_cast_fu_25126_p1.read()));
}

void ShuffleNetV2::thread_tmp_768_fu_25146_p2() {
    tmp_768_fu_25146_p2 = (!i165_cast1_reg_34347.read().is_01() || !tmp72_fu_25140_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i165_cast1_reg_34347.read()) + sc_biguint<12>(tmp72_fu_25140_p2.read()));
}

void ShuffleNetV2::thread_tmp_769_cast_cast_fu_20233_p1() {
    tmp_769_cast_cast_fu_20233_p1 = esl_sext<10,8>(tmp_591_fu_20227_p2.read());
}

void ShuffleNetV2::thread_tmp_769_fu_25156_p1() {
    tmp_769_fu_25156_p1 = esl_zext<64,12>(tmp_768_reg_34368.read());
}

void ShuffleNetV2::thread_tmp_770_fu_25151_p2() {
    tmp_770_fu_25151_p2 = (!tmp_767_fu_25130_p2.read().is_01() || !i165_cast_reg_34342.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_767_fu_25130_p2.read()) + sc_biguint<8>(i165_cast_reg_34342.read()));
}

void ShuffleNetV2::thread_tmp_771_fu_25163_p1() {
    tmp_771_fu_25163_p1 = esl_zext<64,32>(tmp_985_cast_fu_25160_p1.read());
}

void ShuffleNetV2::thread_tmp_772_cast1_fu_24878_p1() {
    tmp_772_cast1_fu_24878_p1 = esl_zext<11,2>(h101_reg_6392.read());
}

void ShuffleNetV2::thread_tmp_772_cast_fu_24882_p1() {
    tmp_772_cast_fu_24882_p1 = esl_zext<15,2>(h101_reg_6392.read());
}

void ShuffleNetV2::thread_tmp_772_fu_12032_p2() {
    tmp_772_fu_12032_p2 = (!tmp_755_fu_12012_p3.read().is_01() || !p_shl344_cast_fu_12028_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_755_fu_12012_p3.read()) - sc_bigint<13>(p_shl344_cast_fu_12028_p1.read()));
}

void ShuffleNetV2::thread_tmp_773_cast_fu_25246_p1() {
    tmp_773_cast_fu_25246_p1 = esl_zext<19,5>(ci72_reg_6447.read());
}

void ShuffleNetV2::thread_tmp_773_fu_12038_p2() {
    tmp_773_fu_12038_p2 = (!tmp_273_cast_reg_29815.read().is_01() || !tmp_772_fu_12032_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_273_cast_reg_29815.read()) + sc_biguint<13>(tmp_772_fu_12032_p2.read()));
}

void ShuffleNetV2::thread_tmp_774_fu_25250_p2() {
    tmp_774_fu_25250_p2 = (!tmp_766_reg_34396.read().is_01() || !ci72_cast_fu_25230_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_766_reg_34396.read()) + sc_biguint<8>(ci72_cast_fu_25230_p1.read()));
}

void ShuffleNetV2::thread_tmp_775_cast_fu_25255_p1() {
    tmp_775_cast_fu_25255_p1 = esl_sext<15,8>(tmp_774_fu_25250_p2.read());
}

void ShuffleNetV2::thread_tmp_775_fu_12253_p2() {
    tmp_775_fu_12253_p2 = (!tmp_290_cast_fu_12249_p1.read().is_01() || !tmp_1134_cast_reg_29893.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_290_cast_fu_12249_p1.read()) + sc_biguint<11>(tmp_1134_cast_reg_29893.read()));
}

void ShuffleNetV2::thread_tmp_776_cast_fu_20784_p1() {
    tmp_776_cast_fu_20784_p1 = esl_sext<11,7>(tmp_597_fu_20778_p2.read());
}

void ShuffleNetV2::thread_tmp_776_fu_24926_p2() {
    tmp_776_fu_24926_p2 = (!p_shl234_cast_fu_24910_p1.read().is_01() || !p_shl235_cast_fu_24922_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl234_cast_fu_24910_p1.read()) - sc_biguint<8>(p_shl235_cast_fu_24922_p1.read()));
}

void ShuffleNetV2::thread_tmp_777_fu_24942_p2() {
    tmp_777_fu_24942_p2 = (!co161_cast1_reg_34248.read().is_01() || !tmp71_fu_24936_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(co161_cast1_reg_34248.read()) + sc_biguint<10>(tmp71_fu_24936_p2.read()));
}

void ShuffleNetV2::thread_tmp_778_cast_fu_8410_p1() {
    tmp_778_cast_fu_8410_p1 = esl_sext<64,14>(tmp_375_fu_8405_p2.read());
}

void ShuffleNetV2::thread_tmp_778_fu_12266_p2() {
    tmp_778_fu_12266_p2 = (!tmp_290_cast1_fu_12245_p1.read().is_01() || !tmp_1136_cast_reg_29898.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_290_cast1_fu_12245_p1.read()) + sc_biguint<10>(tmp_1136_cast_reg_29898.read()));
}

void ShuffleNetV2::thread_tmp_779_cast_fu_24952_p1() {
    tmp_779_cast_fu_24952_p1 = esl_zext<13,10>(tmp_777_reg_34305.read());
}

void ShuffleNetV2::thread_tmp_779_fu_12299_p2() {
    tmp_779_fu_12299_p2 = (!tmp_1157_cast_reg_29911.read().is_01() || !tmp_294_cast_fu_12295_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1157_cast_reg_29911.read()) + sc_biguint<14>(tmp_294_cast_fu_12295_p1.read()));
}

void ShuffleNetV2::thread_tmp_780_cast_fu_20808_p1() {
    tmp_780_cast_fu_20808_p1 = esl_sext<32,7>(tmp_600_reg_32875.read());
}

void ShuffleNetV2::thread_tmp_780_fu_24947_p2() {
    tmp_780_fu_24947_p2 = (!tmp_776_fu_24926_p2.read().is_01() || !co161_cast_reg_34243.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_776_fu_24926_p2.read()) + sc_biguint<8>(co161_cast_reg_34243.read()));
}

void ShuffleNetV2::thread_tmp_781_cast_fu_8420_p1() {
    tmp_781_cast_fu_8420_p1 = esl_sext<64,11>(tmp_376_reg_28583.read());
}

void ShuffleNetV2::thread_tmp_781_fu_12309_p2() {
    tmp_781_fu_12309_p2 = (!tmp_1160_cast_reg_29916.read().is_01() || !tmp_294_cast1_fu_12291_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1160_cast_reg_29916.read()) + sc_biguint<13>(tmp_294_cast1_fu_12291_p1.read()));
}

void ShuffleNetV2::thread_tmp_782_cast_fu_25003_p1() {
    tmp_782_cast_fu_25003_p1 = esl_zext<35,32>(tmp_1004_cast_fu_25000_p1.read());
}

void ShuffleNetV2::thread_tmp_782_fu_12538_p3() {
    tmp_782_fu_12538_p3 = esl_concat<10,5>(tmp_301_reg_29988.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_783_fu_25490_p2() {
    tmp_783_fu_25490_p2 = (!p_shl232_cast_fu_25474_p1.read().is_01() || !p_shl233_cast_fu_25486_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl232_cast_fu_25474_p1.read()) - sc_biguint<8>(p_shl233_cast_fu_25486_p1.read()));
}

void ShuffleNetV2::thread_tmp_784_cast_fu_20876_p1() {
    tmp_784_cast_fu_20876_p1 = esl_zext<7,4>(p_lshr_f16_cast_fu_20866_p4.read());
}

void ShuffleNetV2::thread_tmp_784_fu_25506_p2() {
    tmp_784_fu_25506_p2 = (!i167_cast1_reg_34453.read().is_01() || !tmp74_fu_25500_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i167_cast1_reg_34453.read()) + sc_biguint<12>(tmp74_fu_25500_p2.read()));
}

void ShuffleNetV2::thread_tmp_785_fu_25516_p1() {
    tmp_785_fu_25516_p1 = esl_zext<64,12>(tmp_784_reg_34474.read());
}

void ShuffleNetV2::thread_tmp_786_cast_cast_fu_21156_p1() {
    tmp_786_cast_cast_fu_21156_p1 = esl_sext<10,7>(tmp_613_fu_21150_p2.read());
}

void ShuffleNetV2::thread_tmp_786_fu_25511_p2() {
    tmp_786_fu_25511_p2 = (!tmp_783_fu_25490_p2.read().is_01() || !i167_cast_reg_34448.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_783_fu_25490_p2.read()) + sc_biguint<8>(i167_cast_reg_34448.read()));
}

void ShuffleNetV2::thread_tmp_787_fu_25523_p1() {
    tmp_787_fu_25523_p1 = esl_zext<64,32>(tmp_995_cast_fu_25520_p1.read());
}

void ShuffleNetV2::thread_tmp_788_cast_fu_21176_p1() {
    tmp_788_cast_fu_21176_p1 = esl_sext<11,10>(tmp_614_reg_32976.read());
}

void ShuffleNetV2::thread_tmp_788_fu_25303_p2() {
    tmp_788_fu_25303_p2 = (!p_shl236_cast_fu_25283_p1.read().is_01() || !p_shl237_cast_fu_25299_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl236_cast_fu_25283_p1.read()) - sc_biguint<10>(p_shl237_cast_fu_25299_p1.read()));
}

void ShuffleNetV2::thread_tmp_789_fu_25319_p2() {
    tmp_789_fu_25319_p2 = (!tmp73_fu_25313_p2.read().is_01() || !co163_cast188_cast_reg_34383.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp73_fu_25313_p2.read()) + sc_biguint<11>(co163_cast188_cast_reg_34383.read()));
}

void ShuffleNetV2::thread_tmp_790_cast_fu_21184_p1() {
    tmp_790_cast_fu_21184_p1 = esl_sext<32,7>(tmp_616_reg_32981.read());
}

void ShuffleNetV2::thread_tmp_790_fu_25334_p2() {
    tmp_790_fu_25334_p2 = (!p_shl237_cast1_fu_25295_p1.read().is_01() || !p_shl238_cast_fu_25330_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl237_cast1_fu_25295_p1.read()) - sc_biguint<8>(p_shl238_cast_fu_25330_p1.read()));
}

void ShuffleNetV2::thread_tmp_791_fu_25340_p2() {
    tmp_791_fu_25340_p2 = (!tmp_790_fu_25334_p2.read().is_01() || !tmp_989_cast_reg_34401.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_790_fu_25334_p2.read()) + sc_biguint<8>(tmp_989_cast_reg_34401.read()));
}

void ShuffleNetV2::thread_tmp_792_fu_25627_p2() {
    tmp_792_fu_25627_p2 = (!co166_cast_fu_25611_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co166_cast_fu_25611_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_793_cast_fu_25564_p1() {
    tmp_793_cast_fu_25564_p1 = esl_zext<10,3>(h103_reg_6502.read());
}

void ShuffleNetV2::thread_tmp_793_fu_12549_p3() {
    tmp_793_fu_12549_p3 = esl_concat<10,3>(tmp_301_reg_29988.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_794_fu_25784_p2() {
    tmp_794_fu_25784_p2 = (!p_shl239_cast_fu_25770_p1.read().is_01() || !p_shl240_cast_fu_25780_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl239_cast_fu_25770_p1.read()) - sc_biguint<8>(p_shl240_cast_fu_25780_p1.read()));
}

void ShuffleNetV2::thread_tmp_795_cast1_fu_25669_p1() {
    tmp_795_cast1_fu_25669_p1 = esl_zext<11,3>(h105_reg_6535.read());
}

void ShuffleNetV2::thread_tmp_795_cast2_fu_25673_p1() {
    tmp_795_cast2_fu_25673_p1 = esl_zext<10,3>(h105_reg_6535.read());
}

void ShuffleNetV2::thread_tmp_795_cast_fu_20572_p1() {
    tmp_795_cast_fu_20572_p1 = esl_sext<10,7>(tmp_607_fu_20566_p2.read());
}

void ShuffleNetV2::thread_tmp_795_fu_12560_p2() {
    tmp_795_fu_12560_p2 = (!p_shl349_cast_fu_12545_p1.read().is_01() || !p_shl350_cast_fu_12556_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl349_cast_fu_12545_p1.read()) - sc_biguint<16>(p_shl350_cast_fu_12556_p1.read()));
}

void ShuffleNetV2::thread_tmp_796_cast_fu_25597_p1() {
    tmp_796_cast_fu_25597_p1 = esl_zext<13,3>(w103_reg_6513.read());
}

void ShuffleNetV2::thread_tmp_796_fu_12570_p2() {
    tmp_796_fu_12570_p2 = (!tmp_291_cast_reg_29970.read().is_01() || !tmp_1169_cast_fu_12566_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_291_cast_reg_29970.read()) + sc_bigint<17>(tmp_1169_cast_fu_12566_p1.read()));
}

void ShuffleNetV2::thread_tmp_797_cast_fu_25820_p1() {
    tmp_797_cast_fu_25820_p1 = esl_zext<19,5>(ci74_reg_6568.read());
}

void ShuffleNetV2::thread_tmp_797_fu_12507_p3() {
    tmp_797_fu_12507_p3 = esl_concat<7,6>(tmp_303_fu_12502_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_798_fu_25824_p2() {
    tmp_798_fu_25824_p2 = (!tmp_794_reg_34600.read().is_01() || !ci74_cast_fu_25804_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_794_reg_34600.read()) + sc_biguint<8>(ci74_cast_fu_25804_p1.read()));
}

void ShuffleNetV2::thread_tmp_799_cast1_fu_8295_p1() {
    tmp_799_cast1_fu_8295_p1 = esl_zext<64,14>(tmp_377_reg_28542.read());
}

void ShuffleNetV2::thread_tmp_799_cast_fu_20648_p1() {
    tmp_799_cast_fu_20648_p1 = esl_sext<32,7>(tmp_611_reg_32813.read());
}

void ShuffleNetV2::thread_tmp_799_fu_12515_p3() {
    tmp_799_fu_12515_p3 = esl_concat<7,4>(tmp_303_fu_12502_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_800_cast_fu_8290_p1() {
    tmp_800_cast_fu_8290_p1 = esl_zext<64,15>(tmp_378_fu_8285_p2.read());
}

void ShuffleNetV2::thread_tmp_800_fu_12527_p2() {
    tmp_800_fu_12527_p2 = (!tmp_797_fu_12507_p3.read().is_01() || !p_shl348_cast_fu_12523_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_797_fu_12507_p3.read()) - sc_bigint<13>(p_shl348_cast_fu_12523_p1.read()));
}

void ShuffleNetV2::thread_tmp_801_cast_fu_25829_p1() {
    tmp_801_cast_fu_25829_p1 = esl_sext<15,8>(tmp_798_fu_25824_p2.read());
}

void ShuffleNetV2::thread_tmp_801_fu_12533_p2() {
    tmp_801_fu_12533_p2 = (!tmp_293_cast_reg_29975.read().is_01() || !tmp_800_fu_12527_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_293_cast_reg_29975.read()) + sc_biguint<13>(tmp_800_fu_12527_p2.read()));
}

void ShuffleNetV2::thread_tmp_802_cast1_fu_25715_p1() {
    tmp_802_cast1_fu_25715_p1 = esl_zext<13,3>(w105_reg_6546.read());
}

void ShuffleNetV2::thread_tmp_802_cast_cast_fu_20955_p1() {
    tmp_802_cast_cast_fu_20955_p1 = esl_sext<10,8>(tmp_618_fu_20949_p2.read());
}

void ShuffleNetV2::thread_tmp_802_cast_fu_25719_p1() {
    tmp_802_cast_fu_25719_p1 = esl_zext<12,3>(w105_reg_6546.read());
}

void ShuffleNetV2::thread_tmp_802_fu_12815_p3() {
    tmp_802_fu_12815_p3 = esl_concat<9,2>(tmp_316_reg_30107.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_803_fu_26052_p2() {
    tmp_803_fu_26052_p2 = (!p_shl241_cast_fu_26036_p1.read().is_01() || !p_shl242_cast_fu_26048_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl241_cast_fu_26036_p1.read()) - sc_biguint<8>(p_shl242_cast_fu_26048_p1.read()));
}

void ShuffleNetV2::thread_tmp_804_fu_26068_p2() {
    tmp_804_fu_26068_p2 = (!i173_cast1_reg_34657.read().is_01() || !tmp76_fu_26062_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i173_cast1_reg_34657.read()) + sc_biguint<12>(tmp76_fu_26062_p2.read()));
}

void ShuffleNetV2::thread_tmp_805_fu_26078_p1() {
    tmp_805_fu_26078_p1 = esl_zext<64,12>(tmp_804_reg_34678.read());
}

void ShuffleNetV2::thread_tmp_806_fu_26073_p2() {
    tmp_806_fu_26073_p2 = (!tmp_803_fu_26052_p2.read().is_01() || !i173_cast_reg_34652.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_803_fu_26052_p2.read()) + sc_biguint<8>(i173_cast_reg_34652.read()));
}

void ShuffleNetV2::thread_tmp_807_fu_26085_p1() {
    tmp_807_fu_26085_p1 = esl_zext<64,32>(tmp_1027_cast_fu_26082_p1.read());
}

void ShuffleNetV2::thread_tmp_808_fu_12826_p2() {
    tmp_808_fu_12826_p2 = (!p_shl354_cast_fu_12822_p1.read().is_01() || !tmp_317_cast_fu_12812_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl354_cast_fu_12822_p1.read()) - sc_biguint<12>(tmp_317_cast_fu_12812_p1.read()));
}

void ShuffleNetV2::thread_tmp_809_fu_25877_p2() {
    tmp_809_fu_25877_p2 = (!p_shl243_cast_fu_25857_p1.read().is_01() || !p_shl244_cast_fu_25873_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl243_cast_fu_25857_p1.read()) - sc_biguint<10>(p_shl244_cast_fu_25873_p1.read()));
}

void ShuffleNetV2::thread_tmp_810_fu_25893_p2() {
    tmp_810_fu_25893_p2 = (!tmp75_fu_25887_p2.read().is_01() || !co168_cast_reg_34587.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp75_fu_25887_p2.read()) + sc_biguint<13>(co168_cast_reg_34587.read()));
}

void ShuffleNetV2::thread_tmp_811_fu_12836_p2() {
    tmp_811_fu_12836_p2 = (!tmp_1186_cast_fu_12832_p1.read().is_01() || !tmp_304_cast_reg_30076.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1186_cast_fu_12832_p1.read()) + sc_biguint<13>(tmp_304_cast_reg_30076.read()));
}

void ShuffleNetV2::thread_tmp_812_fu_25908_p2() {
    tmp_812_fu_25908_p2 = (!p_shl244_cast1_fu_25869_p1.read().is_01() || !p_shl245_cast_fu_25904_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl244_cast1_fu_25869_p1.read()) - sc_biguint<8>(p_shl245_cast_fu_25904_p1.read()));
}

void ShuffleNetV2::thread_tmp_813_fu_25914_p2() {
    tmp_813_fu_25914_p2 = (!tmp_812_fu_25908_p2.read().is_01() || !tmp_1019_cast_reg_34605.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_812_fu_25908_p2.read()) + sc_biguint<8>(tmp_1019_cast_reg_34605.read()));
}

void ShuffleNetV2::thread_tmp_814_cast1_fu_26122_p1() {
    tmp_814_cast1_fu_26122_p1 = esl_zext<36,2>(w107_reg_6623.read());
}

void ShuffleNetV2::thread_tmp_814_cast2_fu_26126_p1() {
    tmp_814_cast2_fu_26126_p1 = esl_zext<14,2>(w107_reg_6623.read());
}

void ShuffleNetV2::thread_tmp_814_cast_fu_21466_p1() {
    tmp_814_cast_fu_21466_p1 = esl_zext<7,4>(p_lshr_f17_cast_fu_21456_p4.read());
}

void ShuffleNetV2::thread_tmp_814_fu_12853_p2() {
    tmp_814_fu_12853_p2 = (!p_shl353_cast_fu_12845_p3.read().is_01() || !tmp_1187_cast_fu_12841_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl353_cast_fu_12845_p3.read()) - sc_bigint<15>(tmp_1187_cast_fu_12841_p1.read()));
}

void ShuffleNetV2::thread_tmp_815_fu_26490_p2() {
    tmp_815_fu_26490_p2 = (!p_shl248_cast_fu_26476_p1.read().is_01() || !p_shl249_cast_fu_26486_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl248_cast_fu_26476_p1.read()) - sc_biguint<8>(p_shl249_cast_fu_26486_p1.read()));
}

void ShuffleNetV2::thread_tmp_816_fu_26410_p2() {
    tmp_816_fu_26410_p2 = (!p_shl246_cast_fu_26394_p1.read().is_01() || !p_shl247_cast_fu_26406_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl246_cast_fu_26394_p1.read()) - sc_biguint<8>(p_shl247_cast_fu_26406_p1.read()));
}

void ShuffleNetV2::thread_tmp_817_fu_26426_p2() {
    tmp_817_fu_26426_p2 = (!i177_cast1_reg_34797.read().is_01() || !tmp78_fu_26420_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i177_cast1_reg_34797.read()) + sc_biguint<12>(tmp78_fu_26420_p2.read()));
}

void ShuffleNetV2::thread_tmp_818_cast_cast_fu_21746_p1() {
    tmp_818_cast_cast_fu_21746_p1 = esl_sext<10,7>(tmp_632_fu_21740_p2.read());
}

void ShuffleNetV2::thread_tmp_818_fu_26436_p1() {
    tmp_818_fu_26436_p1 = esl_zext<64,12>(tmp_817_reg_34818.read());
}

void ShuffleNetV2::thread_tmp_819_fu_26431_p2() {
    tmp_819_fu_26431_p2 = (!tmp_816_fu_26410_p2.read().is_01() || !i177_cast_reg_34792.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_816_fu_26410_p2.read()) + sc_biguint<8>(i177_cast_reg_34792.read()));
}

void ShuffleNetV2::thread_tmp_820_cast_fu_21766_p1() {
    tmp_820_cast_fu_21766_p1 = esl_sext<11,10>(tmp_633_reg_33180.read());
}

void ShuffleNetV2::thread_tmp_820_fu_26443_p1() {
    tmp_820_fu_26443_p1 = esl_zext<64,32>(tmp_1045_cast_fu_26440_p1.read());
}

void ShuffleNetV2::thread_tmp_821_cast1_fu_26142_p1() {
    tmp_821_cast1_fu_26142_p1 = esl_zext<11,2>(h107_reg_6634.read());
}

void ShuffleNetV2::thread_tmp_821_cast_fu_26146_p1() {
    tmp_821_cast_fu_26146_p1 = esl_zext<15,2>(h107_reg_6634.read());
}

void ShuffleNetV2::thread_tmp_821_fu_12859_p2() {
    tmp_821_fu_12859_p2 = (!tmp_814_fu_12853_p2.read().is_01() || !tmp_311_cast_reg_30094.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_814_fu_12853_p2.read()) + sc_biguint<15>(tmp_311_cast_reg_30094.read()));
}

void ShuffleNetV2::thread_tmp_822_cast1_fu_26526_p1() {
    tmp_822_cast1_fu_26526_p1 = esl_zext<19,5>(ci76_reg_6689.read());
}

void ShuffleNetV2::thread_tmp_822_cast_fu_21774_p1() {
    tmp_822_cast_fu_21774_p1 = esl_sext<32,7>(tmp_636_reg_33185.read());
}

void ShuffleNetV2::thread_tmp_822_fu_12871_p3() {
    tmp_822_fu_12871_p3 = esl_concat<7,2>(tmp_318_reg_30113.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_823_fu_26530_p2() {
    tmp_823_fu_26530_p2 = (!tmp_815_reg_34846.read().is_01() || !ci76_cast_fu_26510_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_815_reg_34846.read()) + sc_biguint<8>(ci76_cast_fu_26510_p1.read()));
}

void ShuffleNetV2::thread_tmp_824_cast_fu_26535_p1() {
    tmp_824_cast_fu_26535_p1 = esl_sext<15,8>(tmp_823_fu_26530_p2.read());
}

void ShuffleNetV2::thread_tmp_824_fu_12878_p1() {
    tmp_824_fu_12878_p1 = esl_sext<34,9>(tmp_822_fu_12871_p3.read());
}

void ShuffleNetV2::thread_tmp_825_fu_12886_p2() {
    tmp_825_fu_12886_p2 = (!p_shl352_cast_fu_12882_p1.read().is_01() || !tmp_319_cast1_fu_12867_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl352_cast_fu_12882_p1.read()) - sc_biguint<35>(tmp_319_cast1_fu_12867_p1.read()));
}

void ShuffleNetV2::thread_tmp_826_fu_26190_p2() {
    tmp_826_fu_26190_p2 = (!p_shl252_cast_fu_26174_p1.read().is_01() || !p_shl253_cast_fu_26186_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl252_cast_fu_26174_p1.read()) - sc_biguint<8>(p_shl253_cast_fu_26186_p1.read()));
}

void ShuffleNetV2::thread_tmp_827_fu_26206_p2() {
    tmp_827_fu_26206_p2 = (!co171_cast155_cast_reg_34698.read().is_01() || !tmp77_fu_26200_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(co171_cast155_cast_reg_34698.read()) + sc_biguint<9>(tmp77_fu_26200_p2.read()));
}

void ShuffleNetV2::thread_tmp_828_cast_fu_8522_p1() {
    tmp_828_cast_fu_8522_p1 = esl_sext<9,8>(tmp_387_fu_8516_p2.read());
}

void ShuffleNetV2::thread_tmp_828_fu_12896_p2() {
    tmp_828_fu_12896_p2 = (!tmp_1193_cast_fu_12892_p1.read().is_01() || !tmp_304_cast1_reg_30071.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1193_cast_fu_12892_p1.read()) + sc_biguint<36>(tmp_304_cast1_reg_30071.read()));
}

void ShuffleNetV2::thread_tmp_829_cast_cast_fu_21545_p1() {
    tmp_829_cast_cast_fu_21545_p1 = esl_sext<9,8>(tmp_641_fu_21539_p2.read());
}

void ShuffleNetV2::thread_tmp_829_cast_fu_26219_p1() {
    tmp_829_cast_fu_26219_p1 = esl_zext<13,10>(tmp_1062_cast_fu_26216_p1.read());
}

void ShuffleNetV2::thread_tmp_829_fu_12920_p2() {
    tmp_829_fu_12920_p2 = (!p_shl351_cast_fu_12913_p3.read().is_01() || !tmp_189_reg_30124.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl351_cast_fu_12913_p3.read()) - sc_biguint<10>(tmp_189_reg_30124.read()));
}

void ShuffleNetV2::thread_tmp_830_fu_26211_p2() {
    tmp_830_fu_26211_p2 = (!tmp_826_fu_26190_p2.read().is_01() || !co171_cast_reg_34693.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_826_fu_26190_p2.read()) + sc_biguint<8>(co171_cast_reg_34693.read()));
}

void ShuffleNetV2::thread_tmp_831_cast_fu_26283_p1() {
    tmp_831_cast_fu_26283_p1 = esl_zext<35,32>(tmp_1064_cast_fu_26280_p1.read());
}

void ShuffleNetV2::thread_tmp_831_fu_12925_p2() {
    tmp_831_fu_12925_p2 = (!tmp_829_fu_12920_p2.read().is_01() || !tmp_311_cast1_reg_30089.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_829_fu_12920_p2.read()) + sc_biguint<10>(tmp_311_cast1_reg_30089.read()));
}

void ShuffleNetV2::thread_tmp_832_fu_26758_p2() {
    tmp_832_fu_26758_p2 = (!p_shl250_cast_fu_26742_p1.read().is_01() || !p_shl251_cast_fu_26754_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl250_cast_fu_26742_p1.read()) - sc_biguint<8>(p_shl251_cast_fu_26754_p1.read()));
}

void ShuffleNetV2::thread_tmp_833_fu_26774_p2() {
    tmp_833_fu_26774_p2 = (!i179_cast1_reg_34903.read().is_01() || !tmp80_fu_26768_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i179_cast1_reg_34903.read()) + sc_biguint<12>(tmp80_fu_26768_p2.read()));
}

void ShuffleNetV2::thread_tmp_834_fu_26784_p1() {
    tmp_834_fu_26784_p1 = esl_zext<64,12>(tmp_833_reg_34924.read());
}

void ShuffleNetV2::thread_tmp_835_fu_26779_p2() {
    tmp_835_fu_26779_p2 = (!tmp_832_fu_26758_p2.read().is_01() || !i179_cast_reg_34898.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_832_fu_26758_p2.read()) + sc_biguint<8>(i179_cast_reg_34898.read()));
}

void ShuffleNetV2::thread_tmp_836_cast_cast_fu_22092_p1() {
    tmp_836_cast_cast_fu_22092_p1 = esl_sext<10,7>(tmp_647_fu_22086_p2.read());
}

void ShuffleNetV2::thread_tmp_836_fu_26791_p1() {
    tmp_836_fu_26791_p1 = esl_zext<64,32>(tmp_1055_cast_fu_26788_p1.read());
}

void ShuffleNetV2::thread_tmp_837_fu_26583_p2() {
    tmp_837_fu_26583_p2 = (!p_shl254_cast_fu_26563_p1.read().is_01() || !p_shl255_cast_fu_26579_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl254_cast_fu_26563_p1.read()) - sc_biguint<10>(p_shl255_cast_fu_26579_p1.read()));
}

void ShuffleNetV2::thread_tmp_838_cast_fu_22112_p1() {
    tmp_838_cast_fu_22112_p1 = esl_sext<11,10>(tmp_648_reg_33320.read());
}

void ShuffleNetV2::thread_tmp_838_fu_26599_p2() {
    tmp_838_fu_26599_p2 = (!tmp79_fu_26593_p2.read().is_01() || !co173_cast_reg_34833.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp79_fu_26593_p2.read()) + sc_biguint<13>(co173_cast_reg_34833.read()));
}

void ShuffleNetV2::thread_tmp_839_fu_26614_p2() {
    tmp_839_fu_26614_p2 = (!p_shl255_cast1_fu_26575_p1.read().is_01() || !p_shl256_cast_fu_26610_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl255_cast1_fu_26575_p1.read()) - sc_biguint<8>(p_shl256_cast_fu_26610_p1.read()));
}

void ShuffleNetV2::thread_tmp_840_cast_fu_22120_p1() {
    tmp_840_cast_fu_22120_p1 = esl_sext<32,7>(tmp_650_reg_33325.read());
}

void ShuffleNetV2::thread_tmp_840_fu_26620_p2() {
    tmp_840_fu_26620_p2 = (!tmp_839_fu_26614_p2.read().is_01() || !tmp_1049_cast_reg_34851.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_839_fu_26614_p2.read()) + sc_biguint<8>(tmp_1049_cast_reg_34851.read()));
}

void ShuffleNetV2::thread_tmp_841_fu_26895_p2() {
    tmp_841_fu_26895_p2 = (!co176_cast_fu_26879_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(co176_cast_fu_26879_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void ShuffleNetV2::thread_tmp_842_cast_fu_26832_p1() {
    tmp_842_cast_fu_26832_p1 = esl_zext<10,3>(h109_reg_6744.read());
}

void ShuffleNetV2::thread_tmp_842_fu_13408_p3() {
    tmp_842_fu_13408_p3 = esl_concat<6,3>(co74_reg_4258.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_843_fu_27052_p2() {
    tmp_843_fu_27052_p2 = (!p_shl257_cast_fu_27038_p1.read().is_01() || !p_shl258_cast_fu_27048_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl257_cast_fu_27038_p1.read()) - sc_biguint<8>(p_shl258_cast_fu_27048_p1.read()));
}

void ShuffleNetV2::thread_tmp_844_cast1_fu_26937_p1() {
    tmp_844_cast1_fu_26937_p1 = esl_zext<11,3>(h111_reg_6777.read());
}

void ShuffleNetV2::thread_tmp_844_cast2_fu_26941_p1() {
    tmp_844_cast2_fu_26941_p1 = esl_zext<10,3>(h111_reg_6777.read());
}

void ShuffleNetV2::thread_tmp_844_cast_fu_22188_p1() {
    tmp_844_cast_fu_22188_p1 = esl_zext<7,4>(p_lshr_f18_cast_fu_22178_p4.read());
}

void ShuffleNetV2::thread_tmp_844_fu_13252_p3() {
    tmp_844_fu_13252_p3 = esl_concat<10,5>(tmp_326_reg_30234.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_845_cast_fu_8551_p1() {
    tmp_845_cast_fu_8551_p1 = esl_sext<15,10>(tmp_389_fu_8546_p2.read());
}

void ShuffleNetV2::thread_tmp_845_fu_13263_p3() {
    tmp_845_fu_13263_p3 = esl_concat<10,3>(tmp_326_reg_30234.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_846_cast_cast_fu_22468_p1() {
    tmp_846_cast_cast_fu_22468_p1 = esl_sext<10,7>(tmp_663_fu_22462_p2.read());
}

void ShuffleNetV2::thread_tmp_846_cast_fu_26865_p1() {
    tmp_846_cast_fu_26865_p1 = esl_zext<13,3>(w109_reg_6755.read());
}

void ShuffleNetV2::thread_tmp_846_fu_13274_p2() {
    tmp_846_fu_13274_p2 = (!p_shl357_cast_fu_13259_p1.read().is_01() || !p_shl358_cast_fu_13270_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl357_cast_fu_13259_p1.read()) - sc_biguint<16>(p_shl358_cast_fu_13270_p1.read()));
}

void ShuffleNetV2::thread_tmp_847_cast_fu_27088_p1() {
    tmp_847_cast_fu_27088_p1 = esl_zext<19,5>(ci78_reg_6810.read());
}

void ShuffleNetV2::thread_tmp_847_fu_13284_p2() {
    tmp_847_fu_13284_p2 = (!tmp_312_cast1_reg_30216.read().is_01() || !tmp_1206_cast_fu_13280_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_312_cast1_reg_30216.read()) + sc_bigint<17>(tmp_1206_cast_fu_13280_p1.read()));
}

void ShuffleNetV2::thread_tmp_848_cast_fu_22488_p1() {
    tmp_848_cast_fu_22488_p1 = esl_sext<11,10>(tmp_664_reg_33426.read());
}

void ShuffleNetV2::thread_tmp_848_fu_27092_p2() {
    tmp_848_fu_27092_p2 = (!tmp_843_reg_35050.read().is_01() || !ci78_cast_fu_27072_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_843_reg_35050.read()) + sc_biguint<8>(ci78_cast_fu_27072_p1.read()));
}

void ShuffleNetV2::thread_tmp_849_cast_fu_27097_p1() {
    tmp_849_cast_fu_27097_p1 = esl_sext<15,8>(tmp_848_fu_27092_p2.read());
}

void ShuffleNetV2::thread_tmp_849_fu_13221_p3() {
    tmp_849_fu_13221_p3 = esl_concat<7,6>(tmp_328_fu_13216_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_850_cast1_fu_26983_p1() {
    tmp_850_cast1_fu_26983_p1 = esl_zext<13,3>(w111_reg_6788.read());
}

void ShuffleNetV2::thread_tmp_850_cast2_fu_26987_p1() {
    tmp_850_cast2_fu_26987_p1 = esl_zext<12,3>(w111_reg_6788.read());
}

void ShuffleNetV2::thread_tmp_850_cast_fu_22496_p1() {
    tmp_850_cast_fu_22496_p1 = esl_sext<32,7>(tmp_666_reg_33431.read());
}

void ShuffleNetV2::thread_tmp_850_fu_13229_p3() {
    tmp_850_fu_13229_p3 = esl_concat<7,4>(tmp_328_fu_13216_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_851_fu_27320_p2() {
    tmp_851_fu_27320_p2 = (!p_shl259_cast_fu_27304_p1.read().is_01() || !p_shl260_cast_fu_27316_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl259_cast_fu_27304_p1.read()) - sc_biguint<8>(p_shl260_cast_fu_27316_p1.read()));
}

void ShuffleNetV2::thread_tmp_852_fu_27336_p2() {
    tmp_852_fu_27336_p2 = (!i185_cast1_reg_35107.read().is_01() || !tmp82_fu_27330_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i185_cast1_reg_35107.read()) + sc_biguint<12>(tmp82_fu_27330_p2.read()));
}

void ShuffleNetV2::thread_tmp_853_fu_13241_p2() {
    tmp_853_fu_13241_p2 = (!tmp_849_fu_13221_p3.read().is_01() || !p_shl356_cast_fu_13237_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_849_fu_13221_p3.read()) - sc_bigint<13>(p_shl356_cast_fu_13237_p1.read()));
}

void ShuffleNetV2::thread_tmp_854_fu_27346_p1() {
    tmp_854_fu_27346_p1 = esl_zext<64,12>(tmp_852_reg_35128.read());
}

void ShuffleNetV2::thread_tmp_855_cast_fu_21888_p1() {
    tmp_855_cast_fu_21888_p1 = esl_sext<10,7>(tmp_657_fu_21882_p2.read());
}

void ShuffleNetV2::thread_tmp_855_fu_27341_p2() {
    tmp_855_fu_27341_p2 = (!tmp_851_fu_27320_p2.read().is_01() || !i185_cast_reg_35102.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_851_fu_27320_p2.read()) + sc_biguint<8>(i185_cast_reg_35102.read()));
}

void ShuffleNetV2::thread_tmp_856_fu_13247_p2() {
    tmp_856_fu_13247_p2 = (!tmp_314_cast_reg_30221.read().is_01() || !tmp_853_fu_13241_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_314_cast_reg_30221.read()) + sc_biguint<13>(tmp_853_fu_13241_p2.read()));
}

void ShuffleNetV2::thread_tmp_857_fu_27353_p1() {
    tmp_857_fu_27353_p1 = esl_zext<64,32>(tmp_1087_cast_fu_27350_p1.read());
}

void ShuffleNetV2::thread_tmp_858_fu_13501_p3() {
    tmp_858_fu_13501_p3 = esl_concat<7,3>(tmp_329_fu_13495_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_859_cast_fu_21956_p1() {
    tmp_859_cast_fu_21956_p1 = esl_sext<32,7>(tmp_661_reg_33263.read());
}

void ShuffleNetV2::thread_tmp_859_fu_13513_p3() {
    tmp_859_fu_13513_p3 = esl_concat<6,3>(co76_reg_4291.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_860_fu_27145_p2() {
    tmp_860_fu_27145_p2 = (!p_shl261_cast_fu_27125_p1.read().is_01() || !p_shl262_cast_fu_27141_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl261_cast_fu_27125_p1.read()) - sc_biguint<10>(p_shl262_cast_fu_27141_p1.read()));
}

void ShuffleNetV2::thread_tmp_861_fu_27161_p2() {
    tmp_861_fu_27161_p2 = (!tmp81_fu_27155_p2.read().is_01() || !co178_cast_reg_35037.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp81_fu_27155_p2.read()) + sc_biguint<13>(co178_cast_reg_35037.read()));
}

void ShuffleNetV2::thread_tmp_862_cast_cast_fu_22267_p1() {
    tmp_862_cast_cast_fu_22267_p1 = esl_sext<9,8>(tmp_668_fu_22261_p2.read());
}

void ShuffleNetV2::thread_tmp_862_fu_27176_p2() {
    tmp_862_fu_27176_p2 = (!p_shl262_cast1_fu_27137_p1.read().is_01() || !p_shl263_cast_fu_27172_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl262_cast1_fu_27137_p1.read()) - sc_biguint<8>(p_shl263_cast_fu_27172_p1.read()));
}

void ShuffleNetV2::thread_tmp_863_fu_27182_p2() {
    tmp_863_fu_27182_p2 = (!tmp_862_fu_27176_p2.read().is_01() || !tmp_1079_cast_reg_35055.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_862_fu_27176_p2.read()) + sc_biguint<8>(tmp_1079_cast_reg_35055.read()));
}

void ShuffleNetV2::thread_tmp_864_cast1_fu_27390_p1() {
    tmp_864_cast1_fu_27390_p1 = esl_zext<36,2>(w113_reg_6865.read());
}

void ShuffleNetV2::thread_tmp_864_cast_fu_27394_p1() {
    tmp_864_cast_fu_27394_p1 = esl_zext<15,2>(w113_reg_6865.read());
}

void ShuffleNetV2::thread_tmp_864_fu_13436_p2() {
    tmp_864_fu_13436_p2 = (!tmp_1199_cast_reg_30299.read().is_01() || !tmp_330_cast1_fu_13432_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1199_cast_reg_30299.read()) + sc_biguint<10>(tmp_330_cast1_fu_13432_p1.read()));
}

void ShuffleNetV2::thread_tmp_865_fu_27740_p2() {
    tmp_865_fu_27740_p2 = (!p_shl266_cast_fu_27726_p1.read().is_01() || !p_shl267_cast_fu_27736_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl266_cast_fu_27726_p1.read()) - sc_biguint<8>(p_shl267_cast_fu_27736_p1.read()));
}

void ShuffleNetV2::thread_tmp_866_fu_27660_p2() {
    tmp_866_fu_27660_p2 = (!p_shl264_cast_fu_27644_p1.read().is_01() || !p_shl265_cast_fu_27656_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl264_cast_fu_27644_p1.read()) - sc_biguint<8>(p_shl265_cast_fu_27656_p1.read()));
}

void ShuffleNetV2::thread_tmp_867_fu_27676_p2() {
    tmp_867_fu_27676_p2 = (!i189_cast1_reg_35247.read().is_01() || !tmp84_fu_27670_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i189_cast1_reg_35247.read()) + sc_biguint<12>(tmp84_fu_27670_p2.read()));
}

void ShuffleNetV2::thread_tmp_868_fu_27686_p1() {
    tmp_868_fu_27686_p1 = esl_zext<64,12>(tmp_867_reg_35268.read());
}

void ShuffleNetV2::thread_tmp_869_fu_27681_p2() {
    tmp_869_fu_27681_p2 = (!tmp_866_fu_27660_p2.read().is_01() || !i189_cast_reg_35242.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_866_fu_27660_p2.read()) + sc_biguint<8>(i189_cast_reg_35242.read()));
}

void ShuffleNetV2::thread_tmp_870_cast_fu_22645_p1() {
    tmp_870_cast_fu_22645_p1 = esl_zext<8,3>(p_lshr_f19_cast_fu_22635_p4.read());
}

void ShuffleNetV2::thread_tmp_870_fu_27693_p1() {
    tmp_870_fu_27693_p1 = esl_zext<64,32>(tmp_1105_cast_fu_27690_p1.read());
}

void ShuffleNetV2::thread_tmp_871_cast1_fu_27410_p1() {
    tmp_871_cast1_fu_27410_p1 = esl_zext<11,2>(h113_reg_6876.read());
}

void ShuffleNetV2::thread_tmp_871_cast_fu_27414_p1() {
    tmp_871_cast_fu_27414_p1 = esl_zext<15,2>(h113_reg_6876.read());
}

void ShuffleNetV2::thread_tmp_871_fu_13545_p2() {
    tmp_871_fu_13545_p2 = (!tmp_332_cast_fu_13541_p1.read().is_01() || !tmp_1217_cast_reg_30343.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_332_cast_fu_13541_p1.read()) + sc_biguint<11>(tmp_1217_cast_reg_30343.read()));
}

void ShuffleNetV2::thread_tmp_872_cast_fu_27776_p1() {
    tmp_872_cast_fu_27776_p1 = esl_zext<19,5>(ci80_reg_6931.read());
}

void ShuffleNetV2::thread_tmp_872_fu_13558_p2() {
    tmp_872_fu_13558_p2 = (!tmp_332_cast1_fu_13537_p1.read().is_01() || !tmp_1219_cast_reg_30348.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_332_cast1_fu_13537_p1.read()) + sc_biguint<10>(tmp_1219_cast_reg_30348.read()));
}

void ShuffleNetV2::thread_tmp_873_cast_cast_fu_22907_p1() {
    tmp_873_cast_cast_fu_22907_p1 = esl_sext<10,8>(tmp_679_fu_22901_p2.read());
}

void ShuffleNetV2::thread_tmp_873_fu_27780_p2() {
    tmp_873_fu_27780_p2 = (!tmp_865_reg_35296.read().is_01() || !ci80_cast_fu_27760_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_865_reg_35296.read()) + sc_biguint<8>(ci80_cast_fu_27760_p1.read()));
}

void ShuffleNetV2::thread_tmp_874_cast_fu_27785_p1() {
    tmp_874_cast_fu_27785_p1 = esl_sext<15,8>(tmp_873_fu_27780_p2.read());
}

void ShuffleNetV2::thread_tmp_874_fu_13469_p2() {
    tmp_874_fu_13469_p2 = (!tmp_1222_cast_reg_30312.read().is_01() || !tmp_333_cast_fu_13465_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1222_cast_reg_30312.read()) + sc_biguint<14>(tmp_333_cast_fu_13465_p1.read()));
}

void ShuffleNetV2::thread_tmp_875_cast_fu_22927_p1() {
    tmp_875_cast_fu_22927_p1 = esl_sext<11,10>(tmp_680_reg_33576.read());
}

void ShuffleNetV2::thread_tmp_875_fu_13591_p2() {
    tmp_875_fu_13591_p2 = (!tmp_1227_cast_reg_30361.read().is_01() || !tmp_337_cast_fu_13587_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1227_cast_reg_30361.read()) + sc_biguint<14>(tmp_337_cast_fu_13587_p1.read()));
}

void ShuffleNetV2::thread_tmp_876_fu_27458_p2() {
    tmp_876_fu_27458_p2 = (!p_shl270_cast_fu_27442_p1.read().is_01() || !p_shl271_cast_fu_27454_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl270_cast_fu_27442_p1.read()) - sc_biguint<8>(p_shl271_cast_fu_27454_p1.read()));
}

void ShuffleNetV2::thread_tmp_877_cast_fu_22935_p1() {
    tmp_877_cast_fu_22935_p1 = esl_sext<32,8>(tmp_682_reg_33581.read());
}

void ShuffleNetV2::thread_tmp_877_fu_27474_p2() {
    tmp_877_fu_27474_p2 = (!co181_cast1_reg_35148.read().is_01() || !tmp83_fu_27468_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(co181_cast1_reg_35148.read()) + sc_biguint<11>(tmp83_fu_27468_p2.read()));
}

void ShuffleNetV2::thread_tmp_878_fu_13601_p2() {
    tmp_878_fu_13601_p2 = (!tmp_1230_cast_reg_30366.read().is_01() || !tmp_337_cast1_fu_13583_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1230_cast_reg_30366.read()) + sc_biguint<13>(tmp_337_cast1_fu_13583_p1.read()));
}

void ShuffleNetV2::thread_tmp_879_cast_fu_27484_p1() {
    tmp_879_cast_fu_27484_p1 = esl_zext<14,11>(tmp_877_reg_35205.read());
}

void ShuffleNetV2::thread_tmp_879_fu_13830_p3() {
    tmp_879_fu_13830_p3 = esl_concat<10,5>(tmp_344_reg_30438.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_880_fu_27479_p2() {
    tmp_880_fu_27479_p2 = (!tmp_876_fu_27458_p2.read().is_01() || !co181_cast_reg_35143.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_876_fu_27458_p2.read()) + sc_biguint<8>(co181_cast_reg_35143.read()));
}

void ShuffleNetV2::thread_tmp_881_cast_fu_27533_p1() {
    tmp_881_cast_fu_27533_p1 = esl_zext<35,32>(tmp_1124_cast_fu_27530_p1.read());
}

void ShuffleNetV2::thread_tmp_881_fu_13841_p3() {
    tmp_881_fu_13841_p3 = esl_concat<10,3>(tmp_344_reg_30438.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_882_fu_28008_p2() {
    tmp_882_fu_28008_p2 = (!p_shl268_cast_fu_27992_p1.read().is_01() || !p_shl269_cast_fu_28004_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl268_cast_fu_27992_p1.read()) - sc_biguint<8>(p_shl269_cast_fu_28004_p1.read()));
}

void ShuffleNetV2::thread_tmp_883_fu_28024_p2() {
    tmp_883_fu_28024_p2 = (!i191_cast1_reg_35353.read().is_01() || !tmp86_fu_28018_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(i191_cast1_reg_35353.read()) + sc_biguint<12>(tmp86_fu_28018_p2.read()));
}

void ShuffleNetV2::thread_tmp_884_cast_fu_22728_p1() {
    tmp_884_cast_fu_22728_p1 = esl_sext<12,10>(tmp_685_fu_22722_p2.read());
}

void ShuffleNetV2::thread_tmp_884_fu_28034_p1() {
    tmp_884_fu_28034_p1 = esl_zext<64,12>(tmp_883_reg_35374.read());
}

void ShuffleNetV2::thread_tmp_885_fu_28029_p2() {
    tmp_885_fu_28029_p2 = (!tmp_882_fu_28008_p2.read().is_01() || !i191_cast_reg_35348.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_882_fu_28008_p2.read()) + sc_biguint<8>(i191_cast_reg_35348.read()));
}

void ShuffleNetV2::thread_tmp_886_fu_28041_p1() {
    tmp_886_fu_28041_p1 = esl_zext<64,32>(tmp_1115_cast_fu_28038_p1.read());
}

void ShuffleNetV2::thread_tmp_887_fu_27833_p2() {
    tmp_887_fu_27833_p2 = (!p_shl272_cast_fu_27813_p1.read().is_01() || !p_shl273_cast_fu_27829_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl272_cast_fu_27813_p1.read()) - sc_biguint<10>(p_shl273_cast_fu_27829_p1.read()));
}

void ShuffleNetV2::thread_tmp_888_fu_27849_p2() {
    tmp_888_fu_27849_p2 = (!tmp85_fu_27843_p2.read().is_01() || !co183_cast_reg_35283.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp85_fu_27843_p2.read()) + sc_biguint<13>(co183_cast_reg_35283.read()));
}

void ShuffleNetV2::thread_tmp_889_fu_27864_p2() {
    tmp_889_fu_27864_p2 = (!p_shl273_cast1_fu_27825_p1.read().is_01() || !p_shl274_cast_fu_27860_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl273_cast1_fu_27825_p1.read()) - sc_biguint<8>(p_shl274_cast_fu_27860_p1.read()));
}

void ShuffleNetV2::thread_tmp_890_fu_27870_p2() {
    tmp_890_fu_27870_p2 = (!tmp_889_fu_27864_p2.read().is_01() || !tmp_1109_cast_reg_35301.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_889_fu_27864_p2.read()) + sc_biguint<8>(tmp_1109_cast_reg_35301.read()));
}

void ShuffleNetV2::thread_tmp_891_cast_cast_fu_23253_p1() {
    tmp_891_cast_cast_fu_23253_p1 = esl_sext<9,8>(tmp_694_fu_23247_p2.read());
}

void ShuffleNetV2::thread_tmp_891_cast_fu_28082_p1() {
    tmp_891_cast_fu_28082_p1 = esl_zext<10,3>(h115_reg_6986.read());
}

void ShuffleNetV2::thread_tmp_891_fu_13852_p2() {
    tmp_891_fu_13852_p2 = (!p_shl361_cast_fu_13837_p1.read().is_01() || !p_shl362_cast_fu_13848_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl361_cast_fu_13837_p1.read()) - sc_biguint<16>(p_shl362_cast_fu_13848_p1.read()));
}

void ShuffleNetV2::thread_tmp_892_cast_fu_28115_p1() {
    tmp_892_cast_fu_28115_p1 = esl_zext<13,3>(w115_reg_6997.read());
}

void ShuffleNetV2::thread_tmp_892_fu_13862_p2() {
    tmp_892_fu_13862_p2 = (!tmp_334_cast1_reg_30420.read().is_01() || !tmp_1240_cast_fu_13858_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_334_cast1_reg_30420.read()) + sc_bigint<17>(tmp_1240_cast_fu_13858_p1.read()));
}

void ShuffleNetV2::thread_tmp_893_cast_fu_23273_p1() {
    tmp_893_cast_fu_23273_p1 = esl_sext<11,9>(tmp_695_reg_33716.read());
}

void ShuffleNetV2::thread_tmp_893_fu_13799_p3() {
    tmp_893_fu_13799_p3 = esl_concat<7,6>(tmp_346_fu_13794_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_894_fu_13807_p3() {
    tmp_894_fu_13807_p3 = esl_concat<7,4>(tmp_346_fu_13794_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_895_cast_fu_23281_p1() {
    tmp_895_cast_fu_23281_p1 = esl_sext<32,8>(tmp_697_reg_33721.read());
}

void ShuffleNetV2::thread_tmp_895_fu_13819_p2() {
    tmp_895_fu_13819_p2 = (!tmp_893_fu_13799_p3.read().is_01() || !p_shl360_cast_fu_13815_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_893_fu_13799_p3.read()) - sc_bigint<13>(p_shl360_cast_fu_13815_p1.read()));
}

void ShuffleNetV2::thread_tmp_896_fu_13825_p2() {
    tmp_896_fu_13825_p2 = (!tmp_336_cast_reg_30425.read().is_01() || !tmp_895_fu_13819_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_336_cast_reg_30425.read()) + sc_biguint<13>(tmp_895_fu_13819_p2.read()));
}

void ShuffleNetV2::thread_tmp_897_fu_14254_p1() {
    tmp_897_fu_14254_p1 = k10_reg_4434.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_898_fu_14046_p1() {
    tmp_898_fu_14046_p1 = i64_reg_4412.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_899_cast_fu_23347_p1() {
    tmp_899_cast_fu_23347_p1 = esl_zext<8,3>(p_lshr_f20_cast_fu_23337_p4.read());
}

void ShuffleNetV2::thread_tmp_899_fu_14103_p3() {
    tmp_899_fu_14103_p3 = esl_concat<9,2>(tmp_359_reg_30557.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_900_fu_14114_p2() {
    tmp_900_fu_14114_p2 = (!p_shl366_cast_fu_14110_p1.read().is_01() || !tmp_360_cast_fu_14100_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl366_cast_fu_14110_p1.read()) - sc_biguint<12>(tmp_360_cast_fu_14100_p1.read()));
}

void ShuffleNetV2::thread_tmp_901_cast_cast_fu_23609_p1() {
    tmp_901_cast_cast_fu_23609_p1 = esl_sext<9,8>(tmp_710_fu_23603_p2.read());
}

void ShuffleNetV2::thread_tmp_901_fu_14124_p2() {
    tmp_901_fu_14124_p2 = (!tmp_1257_cast_fu_14120_p1.read().is_01() || !tmp_347_cast_reg_30526.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_1257_cast_fu_14120_p1.read()) + sc_biguint<13>(tmp_347_cast_reg_30526.read()));
}

void ShuffleNetV2::thread_tmp_902_fu_14141_p2() {
    tmp_902_fu_14141_p2 = (!p_shl365_cast_fu_14133_p3.read().is_01() || !tmp_1258_cast_fu_14129_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl365_cast_fu_14133_p3.read()) - sc_bigint<15>(tmp_1258_cast_fu_14129_p1.read()));
}

void ShuffleNetV2::thread_tmp_903_fu_14147_p2() {
    tmp_903_fu_14147_p2 = (!tmp_902_fu_14141_p2.read().is_01() || !tmp_354_cast_reg_30544.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_902_fu_14141_p2.read()) + sc_biguint<15>(tmp_354_cast_reg_30544.read()));
}

void ShuffleNetV2::thread_tmp_904_fu_14159_p3() {
    tmp_904_fu_14159_p3 = esl_concat<7,2>(tmp_361_reg_30563.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_905_cast_fu_23641_p1() {
    tmp_905_cast_fu_23641_p1 = esl_sext<32,8>(tmp_713_reg_33827.read());
}

void ShuffleNetV2::thread_tmp_905_fu_14166_p1() {
    tmp_905_fu_14166_p1 = esl_sext<34,9>(tmp_904_fu_14159_p3.read());
}

void ShuffleNetV2::thread_tmp_906_fu_14174_p2() {
    tmp_906_fu_14174_p2 = (!p_shl364_cast_fu_14170_p1.read().is_01() || !tmp_362_cast_fu_14155_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl364_cast_fu_14170_p1.read()) - sc_biguint<35>(tmp_362_cast_fu_14155_p1.read()));
}

void ShuffleNetV2::thread_tmp_907_fu_14184_p2() {
    tmp_907_fu_14184_p2 = (!tmp_1264_cast_fu_14180_p1.read().is_01() || !tmp_347_cast1_reg_30521.read().is_01())? sc_lv<36>(): (sc_bigint<36>(tmp_1264_cast_fu_14180_p1.read()) + sc_biguint<36>(tmp_347_cast1_reg_30521.read()));
}

void ShuffleNetV2::thread_tmp_908_cast_fu_8715_p1() {
    tmp_908_cast_fu_8715_p1 = esl_sext<14,13>(tmp_410_fu_8709_p2.read());
}

void ShuffleNetV2::thread_tmp_908_fu_14189_p1() {
    tmp_908_fu_14189_p1 = tmp_907_fu_14184_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_909_fu_14193_p1() {
    tmp_909_fu_14193_p1 = tmp_907_fu_14184_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_910_cast_fu_23049_p1() {
    tmp_910_cast_fu_23049_p1 = esl_sext<10,8>(tmp_703_fu_23043_p2.read());
}

void ShuffleNetV2::thread_tmp_910_fu_14208_p2() {
    tmp_910_fu_14208_p2 = (!p_shl363_cast_fu_14201_p3.read().is_01() || !tmp_908_reg_30574.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl363_cast_fu_14201_p3.read()) - sc_biguint<10>(tmp_908_reg_30574.read()));
}

void ShuffleNetV2::thread_tmp_911_fu_14213_p2() {
    tmp_911_fu_14213_p2 = (!tmp_910_fu_14208_p2.read().is_01() || !tmp_354_cast1_reg_30539.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_910_fu_14208_p2.read()) + sc_biguint<10>(tmp_354_cast1_reg_30539.read()));
}

void ShuffleNetV2::thread_tmp_912_fu_14704_p3() {
    tmp_912_fu_14704_p3 = esl_concat<6,3>(co84_reg_4500.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_913_fu_14622_p1() {
    tmp_913_fu_14622_p1 = k11_reg_4489.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_914_cast_fu_23117_p1() {
    tmp_914_cast_fu_23117_p1 = esl_sext<32,8>(tmp_707_reg_33659.read());
}

void ShuffleNetV2::thread_tmp_914_fu_14429_p1() {
    tmp_914_fu_14429_p1 = i66_reg_4467.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_915_fu_14544_p3() {
    tmp_915_fu_14544_p3 = esl_concat<10,5>(tmp_369_reg_30684.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_916_fu_14555_p3() {
    tmp_916_fu_14555_p3 = esl_concat<10,3>(tmp_369_reg_30684.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_917_cast_fu_23430_p1() {
    tmp_917_cast_fu_23430_p1 = esl_sext<12,10>(tmp_715_fu_23424_p2.read());
}

void ShuffleNetV2::thread_tmp_917_fu_14566_p2() {
    tmp_917_fu_14566_p2 = (!p_shl369_cast_fu_14551_p1.read().is_01() || !p_shl370_cast_fu_14562_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl369_cast_fu_14551_p1.read()) - sc_biguint<16>(p_shl370_cast_fu_14562_p1.read()));
}

void ShuffleNetV2::thread_tmp_918_fu_14576_p2() {
    tmp_918_fu_14576_p2 = (!tmp_355_cast_reg_30666.read().is_01() || !tmp_1277_cast_fu_14572_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_355_cast_reg_30666.read()) + sc_bigint<17>(tmp_1277_cast_fu_14572_p1.read()));
}

void ShuffleNetV2::thread_tmp_919_fu_14513_p3() {
    tmp_919_fu_14513_p3 = esl_concat<7,6>(tmp_371_fu_14508_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_920_fu_14521_p3() {
    tmp_920_fu_14521_p3 = esl_concat<7,4>(tmp_371_fu_14508_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_921_fu_14533_p2() {
    tmp_921_fu_14533_p2 = (!tmp_919_fu_14513_p3.read().is_01() || !p_shl368_cast_fu_14529_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_919_fu_14513_p3.read()) - sc_bigint<13>(p_shl368_cast_fu_14529_p1.read()));
}

void ShuffleNetV2::thread_tmp_922_fu_14539_p2() {
    tmp_922_fu_14539_p2 = (!tmp_357_cast_reg_30671.read().is_01() || !tmp_921_fu_14533_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_357_cast_reg_30671.read()) + sc_biguint<13>(tmp_921_fu_14533_p2.read()));
}

void ShuffleNetV2::thread_tmp_923_fu_14797_p3() {
    tmp_923_fu_14797_p3 = esl_concat<7,3>(tmp_372_fu_14791_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_924_cast_fu_23959_p1() {
    tmp_924_cast_fu_23959_p1 = esl_sext<12,8>(tmp_721_fu_23953_p2.read());
}

void ShuffleNetV2::thread_tmp_924_fu_14809_p3() {
    tmp_924_fu_14809_p3 = esl_concat<6,3>(co86_reg_4533.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_925_fu_14732_p2() {
    tmp_925_fu_14732_p2 = (!tmp_1270_cast_reg_30749.read().is_01() || !tmp_373_cast1_fu_14728_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1270_cast_reg_30749.read()) + sc_biguint<10>(tmp_373_cast1_fu_14728_p1.read()));
}

void ShuffleNetV2::thread_tmp_926_fu_14737_p3() {
    tmp_926_fu_14737_p3 = esl_concat<10,3>(tmp_925_fu_14732_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_927_fu_14922_p1() {
    tmp_927_fu_14922_p1 = co88_reg_4566.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_928_cast_fu_23983_p1() {
    tmp_928_cast_fu_23983_p1 = esl_sext<32,8>(tmp_724_reg_33967.read());
}

void ShuffleNetV2::thread_tmp_928_fu_14841_p2() {
    tmp_928_fu_14841_p2 = (!tmp_375_cast_fu_14837_p1.read().is_01() || !tmp_1288_cast_reg_30793.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_375_cast_fu_14837_p1.read()) + sc_biguint<11>(tmp_1288_cast_reg_30793.read()));
}

void ShuffleNetV2::thread_tmp_929_fu_14854_p2() {
    tmp_929_fu_14854_p2 = (!tmp_375_cast1_fu_14833_p1.read().is_01() || !tmp_1290_cast_reg_30798.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_375_cast1_fu_14833_p1.read()) + sc_biguint<10>(tmp_1290_cast_reg_30798.read()));
}

void ShuffleNetV2::thread_tmp_930_fu_14765_p2() {
    tmp_930_fu_14765_p2 = (!tmp_1293_cast_reg_30762.read().is_01() || !tmp_377_cast_fu_14761_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1293_cast_reg_30762.read()) + sc_biguint<14>(tmp_377_cast_fu_14761_p1.read()));
}

void ShuffleNetV2::thread_tmp_931_fu_14887_p2() {
    tmp_931_fu_14887_p2 = (!tmp_1298_cast_reg_30811.read().is_01() || !tmp_381_cast_fu_14883_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1298_cast_reg_30811.read()) + sc_biguint<14>(tmp_381_cast_fu_14883_p1.read()));
}

void ShuffleNetV2::thread_tmp_932_cast_fu_24049_p1() {
    tmp_932_cast_fu_24049_p1 = esl_zext<8,3>(p_lshr_f21_cast_fu_24039_p4.read());
}

void ShuffleNetV2::thread_tmp_932_fu_14897_p2() {
    tmp_932_fu_14897_p2 = (!tmp_1301_cast_reg_30816.read().is_01() || !tmp_381_cast1_fu_14879_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1301_cast_reg_30816.read()) + sc_biguint<13>(tmp_381_cast1_fu_14879_p1.read()));
}

void ShuffleNetV2::thread_tmp_933_fu_15212_p1() {
    tmp_933_fu_15212_p1 = k13_reg_4610.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_934_cast_fu_24311_p1() {
    tmp_934_cast_fu_24311_p1 = esl_sext<12,8>(tmp_739_fu_24305_p2.read());
}

void ShuffleNetV2::thread_tmp_934_fu_15011_p1() {
    tmp_934_fu_15011_p1 = i70_reg_4588.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_935_fu_15126_p3() {
    tmp_935_fu_15126_p3 = esl_concat<9,5>(tmp_392_reg_30888.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_936_fu_15133_p1() {
    tmp_936_fu_15133_p1 = esl_sext<15,14>(tmp_935_fu_15126_p3.read());
}

void ShuffleNetV2::thread_tmp_937_fu_15141_p3() {
    tmp_937_fu_15141_p3 = esl_concat<9,3>(tmp_392_reg_30888.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_938_cast_fu_24335_p1() {
    tmp_938_cast_fu_24335_p1 = esl_sext<32,8>(tmp_742_reg_34073.read());
}

void ShuffleNetV2::thread_tmp_938_fu_15148_p1() {
    tmp_938_fu_15148_p1 = esl_sext<13,12>(tmp_937_fu_15141_p3.read());
}

void ShuffleNetV2::thread_tmp_939_fu_15156_p2() {
    tmp_939_fu_15156_p2 = (!p_shl373_cast_fu_15137_p1.read().is_01() || !p_shl374_cast_fu_15152_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl373_cast_fu_15137_p1.read()) - sc_biguint<16>(p_shl374_cast_fu_15152_p1.read()));
}

void ShuffleNetV2::thread_tmp_940_fu_15166_p2() {
    tmp_940_fu_15166_p2 = (!tmp_378_cast1_reg_30870.read().is_01() || !tmp_1313_cast_fu_15162_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(tmp_378_cast1_reg_30870.read()) + sc_bigint<17>(tmp_1313_cast_fu_15162_p1.read()));
}

void ShuffleNetV2::thread_tmp_941_fu_15095_p3() {
    tmp_941_fu_15095_p3 = esl_concat<7,6>(tmp_394_fu_15090_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_942_fu_15103_p3() {
    tmp_942_fu_15103_p3 = esl_concat<7,4>(tmp_394_fu_15090_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_943_cast_fu_23755_p1() {
    tmp_943_cast_fu_23755_p1 = esl_sext<10,8>(tmp_731_fu_23749_p2.read());
}

void ShuffleNetV2::thread_tmp_943_fu_15115_p2() {
    tmp_943_fu_15115_p2 = (!tmp_941_fu_15095_p3.read().is_01() || !p_shl372_cast_fu_15111_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_941_fu_15095_p3.read()) - sc_bigint<13>(p_shl372_cast_fu_15111_p1.read()));
}

void ShuffleNetV2::thread_tmp_944_fu_15121_p2() {
    tmp_944_fu_15121_p2 = (!tmp_380_cast_reg_30875.read().is_01() || !tmp_943_fu_15115_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_380_cast_reg_30875.read()) + sc_biguint<13>(tmp_943_fu_15115_p2.read()));
}

void ShuffleNetV2::thread_tmp_945_cast_fu_8615_p1() {
    tmp_945_cast_fu_8615_p1 = esl_zext<64,15>(tmp_426_fu_8610_p2.read());
}

void ShuffleNetV2::thread_tmp_945_fu_15648_p1() {
    tmp_945_fu_15648_p1 = co92_reg_4687.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_946_fu_15562_p1() {
    tmp_946_fu_15562_p1 = k15_reg_4676.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_947_cast_fu_23823_p1() {
    tmp_947_cast_fu_23823_p1 = esl_sext<32,8>(tmp_735_reg_33905.read());
}

void ShuffleNetV2::thread_tmp_947_fu_15354_p1() {
    tmp_947_fu_15354_p1 = i76_reg_4654.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_948_fu_15411_p3() {
    tmp_948_fu_15411_p3 = esl_concat<9,2>(tmp_408_reg_31007.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_949_fu_15422_p2() {
    tmp_949_fu_15422_p2 = (!p_shl378_cast_fu_15418_p1.read().is_01() || !tmp_410_cast_fu_15408_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl378_cast_fu_15418_p1.read()) - sc_biguint<12>(tmp_410_cast_fu_15408_p1.read()));
}

void ShuffleNetV2::thread_tmp_950_fu_15428_p2() {
    tmp_950_fu_15428_p2 = (!tmp_395_cast_reg_30976.read().is_01() || !tmp_949_fu_15422_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_395_cast_reg_30976.read()) + sc_biguint<12>(tmp_949_fu_15422_p2.read()));
}

void ShuffleNetV2::thread_tmp_951_fu_15437_p3() {
    tmp_951_fu_15437_p3 = esl_concat<12,2>(tmp_950_fu_15428_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_952_fu_15449_p2() {
    tmp_952_fu_15449_p2 = (!p_shl377_cast_fu_15445_p1.read().is_01() || !tmp_1331_cast_fu_15433_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(p_shl377_cast_fu_15445_p1.read()) - sc_bigint<15>(tmp_1331_cast_fu_15433_p1.read()));
}

void ShuffleNetV2::thread_tmp_953_cast_fu_8625_p1() {
    tmp_953_cast_fu_8625_p1 = esl_zext<64,9>(tmp_427_reg_28650.read());
}

void ShuffleNetV2::thread_tmp_953_fu_15455_p2() {
    tmp_953_fu_15455_p2 = (!tmp_402_cast2_reg_30994.read().is_01() || !tmp_952_fu_15449_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_402_cast2_reg_30994.read()) + sc_biguint<15>(tmp_952_fu_15449_p2.read()));
}

void ShuffleNetV2::thread_tmp_954_cast_fu_24532_p1() {
    tmp_954_cast_fu_24532_p1 = esl_zext<8,3>(p_lshr_f22_cast_fu_24522_p4.read());
}

void ShuffleNetV2::thread_tmp_954_fu_15467_p3() {
    tmp_954_fu_15467_p3 = esl_concat<7,2>(tmp_411_reg_31013.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_955_cast_fu_24132_p1() {
    tmp_955_cast_fu_24132_p1 = esl_sext<12,10>(tmp_744_fu_24126_p2.read());
}

void ShuffleNetV2::thread_tmp_955_fu_15474_p1() {
    tmp_955_fu_15474_p1 = esl_sext<34,9>(tmp_954_fu_15467_p3.read());
}

void ShuffleNetV2::thread_tmp_956_cast_fu_8774_p1() {
    tmp_956_cast_fu_8774_p1 = esl_sext<64,14>(tmp_428_fu_8769_p2.read());
}

void ShuffleNetV2::thread_tmp_956_fu_15482_p2() {
    tmp_956_fu_15482_p2 = (!p_shl376_cast_fu_15478_p1.read().is_01() || !tmp_412_cast_fu_15463_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(p_shl376_cast_fu_15478_p1.read()) - sc_biguint<35>(tmp_412_cast_fu_15463_p1.read()));
}

void ShuffleNetV2::thread_tmp_957_fu_15492_p2() {
    tmp_957_fu_15492_p2 = (!tmp_395_cast1_reg_30971.read().is_01() || !tmp_1337_cast_fu_15488_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_395_cast1_reg_30971.read()) + sc_bigint<36>(tmp_1337_cast_fu_15488_p1.read()));
}

void ShuffleNetV2::thread_tmp_958_fu_15497_p1() {
    tmp_958_fu_15497_p1 = tmp_957_fu_15492_p2.read().range(10-1, 0);
}

void ShuffleNetV2::thread_tmp_959_cast_fu_8784_p1() {
    tmp_959_cast_fu_8784_p1 = esl_sext<64,11>(tmp_430_reg_28699.read());
}

void ShuffleNetV2::thread_tmp_959_fu_15501_p1() {
    tmp_959_fu_15501_p1 = tmp_957_fu_15492_p2.read().range(8-1, 0);
}

void ShuffleNetV2::thread_tmp_960_fu_15516_p2() {
    tmp_960_fu_15516_p2 = (!p_shl375_cast_fu_15509_p3.read().is_01() || !tmp_958_reg_31024.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl375_cast_fu_15509_p3.read()) - sc_biguint<10>(tmp_958_reg_31024.read()));
}

void ShuffleNetV2::thread_tmp_961_cast_fu_8842_p1() {
    tmp_961_cast_fu_8842_p1 = esl_zext<10,9>(tmp_431_fu_8834_p3.read());
}

void ShuffleNetV2::thread_tmp_961_fu_15521_p2() {
    tmp_961_fu_15521_p2 = (!tmp_402_cast1_reg_30989.read().is_01() || !tmp_960_fu_15516_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_402_cast1_reg_30989.read()) + sc_biguint<10>(tmp_960_fu_15516_p2.read()));
}

void ShuffleNetV2::thread_tmp_962_fu_16012_p3() {
    tmp_962_fu_16012_p3 = esl_concat<6,3>(co94_reg_4742.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_963_cast1_fu_8935_p1() {
    tmp_963_cast1_fu_8935_p1 = esl_zext<11,10>(tmp_434_fu_8927_p3.read());
}

void ShuffleNetV2::thread_tmp_963_cast_fu_24794_p1() {
    tmp_963_cast_fu_24794_p1 = esl_sext<12,8>(tmp_756_fu_24788_p2.read());
}

void ShuffleNetV2::thread_tmp_963_fu_15930_p1() {
    tmp_963_fu_15930_p1 = k17_reg_4731.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_964_fu_15737_p1() {
    tmp_964_fu_15737_p1 = i78_reg_4709.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_965_cast_fu_8947_p1() {
    tmp_965_cast_fu_8947_p1 = esl_zext<10,9>(tmp_437_fu_8939_p3.read());
}

void ShuffleNetV2::thread_tmp_965_fu_15852_p3() {
    tmp_965_fu_15852_p3 = esl_concat<11,5>(tmp_419_reg_31134.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_966_fu_15863_p3() {
    tmp_966_fu_15863_p3 = esl_concat<11,3>(tmp_419_reg_31134.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_967_cast_fu_24818_p1() {
    tmp_967_cast_fu_24818_p1 = esl_sext<32,8>(tmp_759_reg_34233.read());
}

void ShuffleNetV2::thread_tmp_967_fu_15874_p2() {
    tmp_967_fu_15874_p2 = (!p_shl381_cast_fu_15859_p1.read().is_01() || !p_shl382_cast_fu_15870_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl381_cast_fu_15859_p1.read()) - sc_biguint<17>(p_shl382_cast_fu_15870_p1.read()));
}

void ShuffleNetV2::thread_tmp_968_cast_fu_8875_p1() {
    tmp_968_cast_fu_8875_p1 = esl_zext<15,14>(tmp_116_fu_8867_p3.read());
}

void ShuffleNetV2::thread_tmp_968_fu_15884_p2() {
    tmp_968_fu_15884_p2 = (!tmp_403_cast_reg_31116.read().is_01() || !tmp_1350_cast_fu_15880_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_403_cast_reg_31116.read()) + sc_bigint<18>(tmp_1350_cast_fu_15880_p1.read()));
}

void ShuffleNetV2::thread_tmp_969_fu_15821_p3() {
    tmp_969_fu_15821_p3 = esl_concat<7,6>(tmp_421_fu_15816_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_970_fu_15829_p3() {
    tmp_970_fu_15829_p3 = esl_concat<7,4>(tmp_421_fu_15816_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_971_cast_fu_9088_p1() {
    tmp_971_cast_fu_9088_p1 = esl_sext<15,14>(tmp_452_fu_9082_p2.read());
}

void ShuffleNetV2::thread_tmp_971_fu_15841_p2() {
    tmp_971_fu_15841_p2 = (!tmp_969_fu_15821_p3.read().is_01() || !p_shl380_cast_fu_15837_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_969_fu_15821_p3.read()) - sc_bigint<13>(p_shl380_cast_fu_15837_p1.read()));
}

void ShuffleNetV2::thread_tmp_972_fu_15847_p2() {
    tmp_972_fu_15847_p2 = (!tmp_405_cast_reg_31121.read().is_01() || !tmp_971_fu_15841_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_405_cast_reg_31121.read()) + sc_biguint<13>(tmp_971_fu_15841_p2.read()));
}

void ShuffleNetV2::thread_tmp_973_fu_16105_p3() {
    tmp_973_fu_16105_p3 = esl_concat<7,3>(tmp_422_fu_16099_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_974_cast_fu_24615_p1() {
    tmp_974_cast_fu_24615_p1 = esl_sext<12,10>(tmp_761_fu_24609_p2.read());
}

void ShuffleNetV2::thread_tmp_974_fu_16117_p3() {
    tmp_974_fu_16117_p3 = esl_concat<6,3>(co96_reg_4775.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_975_fu_16040_p2() {
    tmp_975_fu_16040_p2 = (!tmp_1343_cast_reg_31199.read().is_01() || !tmp_423_cast_fu_16036_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1343_cast_reg_31199.read()) + sc_biguint<10>(tmp_423_cast_fu_16036_p1.read()));
}

void ShuffleNetV2::thread_tmp_976_fu_16045_p3() {
    tmp_976_fu_16045_p3 = esl_concat<10,3>(tmp_975_fu_16040_p2.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_977_cast_fu_8976_p3() {
    tmp_977_cast_fu_8976_p3 = esl_concat<10,4>(tmp_459_fu_8971_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_977_fu_16230_p1() {
    tmp_977_fu_16230_p1 = co98_reg_4808.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_978_fu_16149_p2() {
    tmp_978_fu_16149_p2 = (!tmp_425_cast_fu_16145_p1.read().is_01() || !tmp_1361_cast_reg_31243.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_425_cast_fu_16145_p1.read()) + sc_biguint<11>(tmp_1361_cast_reg_31243.read()));
}

void ShuffleNetV2::thread_tmp_979_fu_16162_p2() {
    tmp_979_fu_16162_p2 = (!tmp_425_cast1_fu_16141_p1.read().is_01() || !tmp_1363_cast_reg_31248.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_425_cast1_fu_16141_p1.read()) + sc_biguint<10>(tmp_1363_cast_reg_31248.read()));
}

void ShuffleNetV2::thread_tmp_980_cast_fu_8989_p3() {
    tmp_980_cast_fu_8989_p3 = esl_concat<11,4>(tmp_460_fu_8984_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_980_fu_16073_p2() {
    tmp_980_fu_16073_p2 = (!tmp_1366_cast_reg_31212.read().is_01() || !tmp_427_cast_fu_16069_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1366_cast_reg_31212.read()) + sc_biguint<14>(tmp_427_cast_fu_16069_p1.read()));
}

void ShuffleNetV2::thread_tmp_981_cast1_fu_8900_p1() {
    tmp_981_cast1_fu_8900_p1 = esl_zext<64,15>(tmp_462_fu_8895_p2.read());
}

void ShuffleNetV2::thread_tmp_981_cast_fu_25136_p1() {
    tmp_981_cast_fu_25136_p1 = esl_sext<12,8>(tmp_767_fu_25130_p2.read());
}

void ShuffleNetV2::thread_tmp_981_fu_16195_p2() {
    tmp_981_fu_16195_p2 = (!tmp_1371_cast_reg_31261.read().is_01() || !tmp_431_cast_fu_16191_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_1371_cast_reg_31261.read()) + sc_biguint<14>(tmp_431_cast_fu_16191_p1.read()));
}

void ShuffleNetV2::thread_tmp_982_cast_fu_9147_p1() {
    tmp_982_cast_fu_9147_p1 = esl_sext<64,15>(tmp_473_fu_9142_p2.read());
}

void ShuffleNetV2::thread_tmp_982_fu_16205_p2() {
    tmp_982_fu_16205_p2 = (!tmp_1374_cast_reg_31266.read().is_01() || !tmp_431_cast1_fu_16187_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1374_cast_reg_31266.read()) + sc_biguint<13>(tmp_431_cast1_fu_16187_p1.read()));
}

void ShuffleNetV2::thread_tmp_983_cast_fu_9157_p1() {
    tmp_983_cast_fu_9157_p1 = esl_sext<64,11>(tmp_475_reg_28846.read());
}

void ShuffleNetV2::thread_tmp_983_fu_16512_p1() {
    tmp_983_fu_16512_p1 = k19_reg_4852.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_984_cast_fu_9032_p1() {
    tmp_984_cast_fu_9032_p1 = esl_zext<64,14>(tmp_476_reg_28805.read());
}

void ShuffleNetV2::thread_tmp_984_fu_16319_p1() {
    tmp_984_fu_16319_p1 = i82_reg_4830.read().range(2-1, 0);
}

void ShuffleNetV2::thread_tmp_985_cast1_fu_9027_p1() {
    tmp_985_cast1_fu_9027_p1 = esl_zext<64,15>(tmp_477_fu_9022_p2.read());
}

void ShuffleNetV2::thread_tmp_985_cast_fu_25160_p1() {
    tmp_985_cast_fu_25160_p1 = esl_sext<32,8>(tmp_770_reg_34373.read());
}

void ShuffleNetV2::thread_tmp_985_fu_16434_p3() {
    tmp_985_fu_16434_p3 = esl_concat<11,5>(tmp_442_reg_31338.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_tmp_986_fu_16445_p3() {
    tmp_986_fu_16445_p3 = esl_concat<11,3>(tmp_442_reg_31338.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_tmp_987_fu_16456_p2() {
    tmp_987_fu_16456_p2 = (!p_shl385_cast_fu_16441_p1.read().is_01() || !p_shl386_cast_fu_16452_p1.read().is_01())? sc_lv<17>(): (sc_biguint<17>(p_shl385_cast_fu_16441_p1.read()) - sc_biguint<17>(p_shl386_cast_fu_16452_p1.read()));
}

void ShuffleNetV2::thread_tmp_988_fu_16466_p2() {
    tmp_988_fu_16466_p2 = (!tmp_428_cast_reg_31320.read().is_01() || !tmp_1384_cast_fu_16462_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_428_cast_reg_31320.read()) + sc_bigint<18>(tmp_1384_cast_fu_16462_p1.read()));
}

void ShuffleNetV2::thread_tmp_989_cast1_fu_9263_p1() {
    tmp_989_cast1_fu_9263_p1 = esl_sext<9,8>(tmp_484_fu_9257_p2.read());
}

void ShuffleNetV2::thread_tmp_989_cast_fu_25226_p1() {
    tmp_989_cast_fu_25226_p1 = esl_zext<8,3>(p_lshr_f23_cast_fu_25216_p4.read());
}

void ShuffleNetV2::thread_tmp_989_fu_16403_p3() {
    tmp_989_fu_16403_p3 = esl_concat<7,6>(tmp_444_fu_16398_p2.read(), ap_const_lv6_0);
}

void ShuffleNetV2::thread_tmp_990_cast_fu_9292_p1() {
    tmp_990_cast_fu_9292_p1 = esl_sext<15,10>(tmp_487_fu_9287_p2.read());
}

void ShuffleNetV2::thread_tmp_990_fu_16411_p3() {
    tmp_990_fu_16411_p3 = esl_concat<7,4>(tmp_444_fu_16398_p2.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_tmp_991_cast_fu_25496_p1() {
    tmp_991_cast_fu_25496_p1 = esl_sext<12,8>(tmp_783_fu_25490_p2.read());
}

void ShuffleNetV2::thread_tmp_991_fu_16423_p2() {
    tmp_991_fu_16423_p2 = (!tmp_989_fu_16403_p3.read().is_01() || !p_shl384_cast_fu_16419_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_989_fu_16403_p3.read()) - sc_bigint<13>(p_shl384_cast_fu_16419_p1.read()));
}

void ShuffleNetV2::thread_tmp_992_fu_16429_p2() {
    tmp_992_fu_16429_p2 = (!tmp_430_cast1_reg_31325.read().is_01() || !tmp_991_fu_16423_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp_430_cast1_reg_31325.read()) + sc_biguint<13>(tmp_991_fu_16423_p2.read()));
}

void ShuffleNetV2::thread_tmp_993_fu_16940_p1() {
    tmp_993_fu_16940_p1 = co102_reg_4929.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_994_fu_16858_p1() {
    tmp_994_fu_16858_p1 = k21_reg_4918.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_995_cast_fu_25520_p1() {
    tmp_995_cast_fu_25520_p1 = esl_sext<32,8>(tmp_786_reg_34479.read());
}

void ShuffleNetV2::thread_tmp_995_fu_16650_p1() {
    tmp_995_fu_16650_p1 = i88_reg_4896.read().range(1-1, 0);
}

void ShuffleNetV2::thread_tmp_996_fu_16707_p3() {
    tmp_996_fu_16707_p3 = esl_concat<9,2>(tmp_458_reg_31457.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_997_fu_16718_p2() {
    tmp_997_fu_16718_p2 = (!p_shl390_cast_fu_16714_p1.read().is_01() || !tmp_460_cast_fu_16704_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl390_cast_fu_16714_p1.read()) - sc_biguint<12>(tmp_460_cast_fu_16704_p1.read()));
}

void ShuffleNetV2::thread_tmp_998_cast_fu_9454_p1() {
    tmp_998_cast_fu_9454_p1 = esl_sext<15,14>(tmp_505_fu_9448_p2.read());
}

void ShuffleNetV2::thread_tmp_998_fu_16724_p2() {
    tmp_998_fu_16724_p2 = (!tmp_445_cast_reg_31426.read().is_01() || !tmp_997_fu_16718_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_445_cast_reg_31426.read()) + sc_biguint<12>(tmp_997_fu_16718_p2.read()));
}

void ShuffleNetV2::thread_tmp_999_fu_16733_p3() {
    tmp_999_fu_16733_p3 = esl_concat<12,2>(tmp_998_fu_16724_p2.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_tmp_cast_fu_7358_p1() {
    tmp_cast_fu_7358_p1 = esl_sext<12,11>(tmp_s_fu_7352_p2.read());
}

void ShuffleNetV2::thread_tmp_fu_7331_p1() {
    tmp_fu_7331_p1 = esl_zext<64,5>(i5_reg_2988.read());
}

void ShuffleNetV2::thread_tmp_i_642_fu_28169_p1() {
    tmp_i_642_fu_28169_p1 = esl_zext<64,10>(ci_i_reg_7031.read());
}

void ShuffleNetV2::thread_tmp_i_cast_fu_28174_p1() {
    tmp_i_cast_fu_28174_p1 = esl_zext<14,10>(ci_i_reg_7031.read());
}

void ShuffleNetV2::thread_tmp_i_fu_28141_p1() {
    tmp_i_fu_28141_p1 = esl_zext<64,4>(co_i_reg_7008.read());
}

void ShuffleNetV2::thread_tmp_s_fu_7352_p2() {
    tmp_s_fu_7352_p2 = (!i7_cast760_cast_fu_7336_p1.read().is_01() || !ap_const_lv11_418.is_01())? sc_lv<11>(): (sc_biguint<11>(i7_cast760_cast_fu_7336_p1.read()) + sc_bigint<11>(ap_const_lv11_418));
}

void ShuffleNetV2::thread_w_100_fu_24441_p2() {
    w_100_fu_24441_p2 = (!w99_reg_6304.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w99_reg_6304.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_102_fu_24852_p2() {
    w_102_fu_24852_p2 = (!w101_reg_6381.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w101_reg_6381.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_104_fu_25591_p2() {
    w_104_fu_25591_p2 = (!w103_reg_6513.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w103_reg_6513.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_106_fu_25709_p2() {
    w_106_fu_25709_p2 = (!w105_reg_6546.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w105_reg_6546.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_108_fu_26116_p2() {
    w_108_fu_26116_p2 = (!w107_reg_6623.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w107_reg_6623.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_110_fu_26859_p2() {
    w_110_fu_26859_p2 = (!w109_reg_6755.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w109_reg_6755.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_112_fu_26977_p2() {
    w_112_fu_26977_p2 = (!w111_reg_6788.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w111_reg_6788.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_114_fu_27384_p2() {
    w_114_fu_27384_p2 = (!w113_reg_6865.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w113_reg_6865.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_116_fu_28109_p2() {
    w_116_fu_28109_p2 = (!w115_reg_6997.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w115_reg_6997.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_w_25_fu_7884_p2() {
    w_25_fu_7884_p2 = (!w20_reg_3147.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w20_reg_3147.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_27_fu_8266_p2() {
    w_27_fu_8266_p2 = (!w26_reg_3237.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w26_reg_3237.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_29_fu_8532_p2() {
    w_29_fu_8532_p2 = (!w28_reg_3293.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w28_reg_3293.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_31_fu_8885_p2() {
    w_31_fu_8885_p2 = (!w30_reg_3383.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w30_reg_3383.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_33_fu_9003_p2() {
    w_33_fu_9003_p2 = (!w32_reg_3416.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w32_reg_3416.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_35_fu_9273_p2() {
    w_35_fu_9273_p2 = (!w34_reg_3472.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w34_reg_3472.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_37_fu_9622_p2() {
    w_37_fu_9622_p2 = (!w36_reg_3562.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w36_reg_3562.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_39_fu_9740_p2() {
    w_39_fu_9740_p2 = (!w38_reg_3595.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w38_reg_3595.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_41_fu_10016_p2() {
    w_41_fu_10016_p2 = (!w40_reg_3651.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w40_reg_3651.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_43_fu_10367_p2() {
    w_43_fu_10367_p2 = (!w42_reg_3741.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w42_reg_3741.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_w_45_fu_10777_p2() {
    w_45_fu_10777_p2 = (!w44_reg_3818.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w44_reg_3818.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_47_fu_11499_p2() {
    w_47_fu_11499_p2 = (!w46_reg_3939.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w46_reg_3939.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_49_fu_12285_p2() {
    w_49_fu_12285_p2 = (!w48_reg_4071.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w48_reg_4071.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_50_fu_12708_p2() {
    w_50_fu_12708_p2 = (!w49_reg_4148.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w49_reg_4148.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_52_fu_13459_p2() {
    w_52_fu_13459_p2 = (!w51_reg_4280.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w51_reg_4280.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_54_fu_13577_p2() {
    w_54_fu_13577_p2 = (!w53_reg_4313.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w53_reg_4313.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_56_fu_14000_p2() {
    w_56_fu_14000_p2 = (!w55_reg_4390.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w55_reg_4390.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_58_fu_14755_p2() {
    w_58_fu_14755_p2 = (!w57_reg_4522.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w57_reg_4522.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_60_fu_14873_p2() {
    w_60_fu_14873_p2 = (!w59_reg_4555.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w59_reg_4555.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_62_fu_15308_p2() {
    w_62_fu_15308_p2 = (!w61_reg_4632.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w61_reg_4632.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_64_fu_16063_p2() {
    w_64_fu_16063_p2 = (!w63_reg_4764.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w63_reg_4764.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_66_fu_16181_p2() {
    w_66_fu_16181_p2 = (!w65_reg_4797.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w65_reg_4797.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_68_fu_16604_p2() {
    w_68_fu_16604_p2 = (!w67_reg_4874.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w67_reg_4874.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_70_fu_17351_p2() {
    w_70_fu_17351_p2 = (!w69_reg_5006.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w69_reg_5006.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_72_fu_17469_p2() {
    w_72_fu_17469_p2 = (!w71_reg_5039.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w71_reg_5039.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_74_fu_17892_p2() {
    w_74_fu_17892_p2 = (!w73_reg_5116.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w73_reg_5116.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_76_fu_18647_p2() {
    w_76_fu_18647_p2 = (!w75_reg_5248.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w75_reg_5248.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_78_fu_18765_p2() {
    w_78_fu_18765_p2 = (!w77_reg_5281.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w77_reg_5281.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_80_fu_19188_p2() {
    w_80_fu_19188_p2 = (!w79_reg_5358.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w79_reg_5358.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_82_fu_19943_p2() {
    w_82_fu_19943_p2 = (!w81_reg_5490.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w81_reg_5490.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_84_fu_20061_p2() {
    w_84_fu_20061_p2 = (!w83_reg_5523.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w83_reg_5523.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_86_fu_20492_p2() {
    w_86_fu_20492_p2 = (!w85_reg_5600.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w85_reg_5600.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_88_fu_21255_p2() {
    w_88_fu_21255_p2 = (!w87_reg_5732.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w87_reg_5732.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_90_fu_21373_p2() {
    w_90_fu_21373_p2 = (!w89_reg_5765.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w89_reg_5765.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_92_fu_21808_p2() {
    w_92_fu_21808_p2 = (!w91_reg_5842.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w91_reg_5842.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_94_fu_22567_p2() {
    w_94_fu_22567_p2 = (!w93_reg_5974.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w93_reg_5974.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_w_96_fu_22969_p2() {
    w_96_fu_22969_p2 = (!w95_reg_6051.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w95_reg_6051.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_98_fu_23675_p2() {
    w_98_fu_23675_p2 = (!w97_reg_6172.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w97_reg_6172.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_w_fu_7556_p2() {
    w_fu_7556_p2 = (!w13_reg_3068.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(w13_reg_3068.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_weights_24_1_3x3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read())) {
        weights_24_1_3x3_address0 =  (sc_lv<8>) (tmp_1052_cast_fu_10109_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read())) {
        weights_24_1_3x3_address0 =  (sc_lv<8>) (tmp_1003_cast_fu_9366_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        weights_24_1_3x3_address0 =  (sc_lv<8>) (tmp_953_cast_fu_8625_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        weights_24_1_3x3_address0 =  (sc_lv<8>) (tmp_626_cast_fu_7973_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weights_24_1_3x3_address0 =  (sc_lv<8>) (tmp_484_cast1_reg_28310.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()))) {
        weights_24_1_3x3_address0 = grp_subconv_3x3_16_no_re_fu_7115_weight_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        weights_24_1_3x3_address0 = grp_subconv_3x3_32_strid_fu_7102_weight_address0.read();
    } else {
        weights_24_1_3x3_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_1_3x3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()))) {
        weights_24_1_3x3_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()))) {
        weights_24_1_3x3_ce0 = grp_subconv_3x3_16_no_re_fu_7115_weight_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        weights_24_1_3x3_ce0 = grp_subconv_3x3_32_strid_fu_7102_weight_ce0.read();
    } else {
        weights_24_1_3x3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_1_3x3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()))) {
        weights_24_1_3x3_we0 = ap_const_logic_1;
    } else {
        weights_24_1_3x3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_1054_cast_fu_10268_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_1029_cast_fu_9894_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_1005_cast_fu_9523_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_983_cast_fu_9157_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_959_cast_fu_8784_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_781_cast_fu_8420_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_637_cast_fu_8132_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_489_cast_fu_7772_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        weights_24_24_1x1_address0 =  (sc_lv<10>) (tmp_389_cast1_reg_28253.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()))) {
        weights_24_24_1x1_address0 = grp_subconv_1x1_16_fu_7201_weight_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        weights_24_24_1x1_address0 = grp_subconv_1x1_32_fu_7090_weight_address0.read();
    } else {
        weights_24_24_1x1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()))) {
        weights_24_24_1x1_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()))) {
        weights_24_24_1x1_ce0 = grp_subconv_1x1_16_fu_7201_weight_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        weights_24_24_1x1_ce0 = grp_subconv_1x1_32_fu_7090_weight_ce0.read();
    } else {
        weights_24_24_1x1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_24_24_1x1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()))) {
        weights_24_24_1x1_we0 = ap_const_logic_1;
    } else {
        weights_24_24_1x1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state494.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1704_cast_fu_22022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state453.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1629_cast_fu_20714_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1556_cast_fu_19414_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state371.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1484_cast_fu_18118_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state330.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1412_cast_fu_16822_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state289.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1341_cast_fu_15526_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1268_cast_fu_14218_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1197_cast_fu_12930_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1132_cast_fu_11717_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read())) {
        weights_48_1_3x3_address0 =  (sc_lv<9>) (tmp_1097_cast_fu_10999_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state253.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state417.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state458.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()))) {
        weights_48_1_3x3_address0 = grp_subconv_3x3_8_no_rel_fu_7152_weight_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read()))) {
        weights_48_1_3x3_address0 = grp_subconv_3x3_16_strid_fu_7139_weight_address0.read();
    } else {
        weights_48_1_3x3_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state289.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state330.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state371.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state453.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state494.read()))) {
        weights_48_1_3x3_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state253.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state294.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state417.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state458.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()))) {
        weights_48_1_3x3_ce0 = grp_subconv_3x3_8_no_rel_fu_7152_weight_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read()))) {
        weights_48_1_3x3_ce0 = grp_subconv_3x3_16_strid_fu_7139_weight_ce0.read();
    } else {
        weights_48_1_3x3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_1_3x3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state289.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state330.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state371.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state453.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state494.read()))) {
        weights_48_1_3x3_we0 = ap_const_logic_1;
    } else {
        weights_48_1_3x3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1722_cast_fu_22398_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state482.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1685_cast_fu_21676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state463.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1649_cast_fu_21086_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1610_cast_fu_20364_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state422.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1574_cast_fu_19778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1536_cast_fu_19060_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1502_cast_fu_18482_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state359.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1464_cast_fu_17764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1430_cast_fu_17186_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state318.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1393_cast_fu_16476_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state299.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1359_cast_fu_15894_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state277.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1322_cast_fu_15176_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state258.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1286_cast_fu_14586_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1249_cast_fu_13872_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1215_cast_fu_13294_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state195.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1178_cast_fu_12580_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1152_cast_fu_12085_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1113_cast_fu_11367_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        weights_48_48_1x1_address0 =  (sc_lv<12>) (tmp_1078_cast_fu_10649_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state241.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state282.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state304.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state345.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state405.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state446.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state468.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()))) {
        weights_48_48_1x1_address0 = grp_subconv_1x1_8_fu_7164_weight_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state138.read())) {
        weights_48_48_1x1_address0 = grp_subconv_1x1_16p_fu_7078_weight_address0.read();
    } else {
        weights_48_48_1x1_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state195.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state258.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state277.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state299.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state318.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state359.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state422.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state463.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state482.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read()))) {
        weights_48_48_1x1_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state241.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state282.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state304.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state345.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state405.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state446.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state468.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state509.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()))) {
        weights_48_48_1x1_ce0 = grp_subconv_1x1_8_fu_7164_weight_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state138.read())) {
        weights_48_48_1x1_ce0 = grp_subconv_1x1_16p_fu_7078_weight_ce0.read();
    } else {
        weights_48_48_1x1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_48_48_1x1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state195.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state258.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state277.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state299.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state318.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state359.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state381.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state422.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state463.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state482.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read()))) {
        weights_48_48_1x1_we0 = ap_const_logic_1;
    } else {
        weights_48_48_1x1_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state675.read())) {
        weights_96_1_3x3_address0 =  (sc_lv<10>) (tmp_2000_cast_fu_27596_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state634.read())) {
        weights_96_1_3x3_address0 =  (sc_lv<10>) (tmp_1931_cast_fu_26346_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state593.read())) {
        weights_96_1_3x3_address0 =  (sc_lv<10>) (tmp_1859_cast_fu_25066_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read())) {
        weights_96_1_3x3_address0 =  (sc_lv<10>) (tmp_1796_cast_fu_23889_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state531.read())) {
        weights_96_1_3x3_address0 =  (sc_lv<10>) (tmp_1762_cast_fu_23183_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state598.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state639.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state680.read()))) {
        weights_96_1_3x3_address0 = grp_subconv_3x3_4_no_rel_fu_7189_weight_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state536.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state560.read()))) {
        weights_96_1_3x3_address0 = grp_subconv_3x3_8_stride_fu_7176_weight_address0.read();
    } else {
        weights_96_1_3x3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state531.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state593.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state634.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state675.read()))) {
        weights_96_1_3x3_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state598.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state639.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state680.read()))) {
        weights_96_1_3x3_ce0 = grp_subconv_3x3_4_no_rel_fu_7189_weight_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state536.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state560.read()))) {
        weights_96_1_3x3_ce0 = grp_subconv_3x3_8_stride_fu_7176_weight_ce0.read();
    } else {
        weights_96_1_3x3_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_1_3x3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state531.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state593.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state634.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state675.read()))) {
        weights_96_1_3x3_we0 = ap_const_logic_1;
    } else {
        weights_96_1_3x3_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state685.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_2017_cast_fu_27944_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state663.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_1981_cast_fu_27256_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state644.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_1948_cast_fu_26694_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state622.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_1911_cast_fu_25988_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state603.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_1878_cast_fu_25426_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_1840_cast_fu_24724_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state565.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_1815_cast_fu_24241_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state541.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_1777_cast_fu_23539_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state519.read())) {
        weights_96_96_1x1_address0 =  (sc_lv<14>) (tmp_1743_cast_fu_22837_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state608.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state627.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state649.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state668.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state690.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state546.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state570.read()))) {
        weights_96_96_1x1_address0 = grp_subconv_1x1_4_fu_7127_weight_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state524.read())) {
        weights_96_96_1x1_address0 = grp_subconv_1x1_8p_fu_7066_weight_address0.read();
    } else {
        weights_96_96_1x1_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state519.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state565.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state603.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state622.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state644.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state663.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state685.read()))) {
        weights_96_96_1x1_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state608.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state627.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state649.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state668.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state690.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state546.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state570.read()))) {
        weights_96_96_1x1_ce0 = grp_subconv_1x1_4_fu_7127_weight_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state524.read())) {
        weights_96_96_1x1_ce0 = grp_subconv_1x1_8p_fu_7066_weight_ce0.read();
    } else {
        weights_96_96_1x1_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_weights_96_96_1x1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state519.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state541.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state565.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state603.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state622.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state644.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state663.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state685.read()))) {
        weights_96_96_1x1_we0 = ap_const_logic_1;
    } else {
        weights_96_96_1x1_we0 = ap_const_logic_0;
    }
}

}

